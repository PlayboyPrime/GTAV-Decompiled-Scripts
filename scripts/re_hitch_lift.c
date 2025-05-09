#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
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
	int iLocal_80 = 0;
	Blip blLocal_81 = 0;
	Blip blLocal_82 = 0;
	Ped pedLocal_83 = 0;
	Ped pedLocal_84 = 0;
	Vehicle veLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	Hash hLocal_98 = 0;
	Hash hLocal_99 = 0;
	Hash hLocal_100 = 0;
	BOOL bLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	float fLocal_105 = 0f;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	BOOL bLocal_109 = 0;
	BOOL bLocal_110 = 0;
	BOOL bLocal_111 = 0;
	BOOL bLocal_112 = 0;
	BOOL bLocal_113 = 0;
	BOOL bLocal_114 = 0;
	BOOL bLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	Blip blLocal_118 = 0;
	Blip blLocal_119 = 0;
	Blip blLocal_120 = 0;
	Blip blLocal_121 = 0;
	BOOL bLocal_122 = 0;
	BOOL bLocal_123 = 0;
	BOOL bLocal_124 = 0;
	BOOL bLocal_125 = 0;
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
	int iLocal_138 = 0;
	BOOL bLocal_139 = 0;
	BOOL bLocal_140 = 0;
	BOOL bLocal_141 = 0;
	BOOL bLocal_142 = 0;
	BOOL bLocal_143 = 0;
	BOOL bLocal_144 = 0;
	BOOL bLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	BOOL bLocal_148 = 0;
	BOOL bLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	BOOL bLocal_161 = 0;
	BOOL bLocal_162 = 0;
	BOOL bLocal_163 = 0;
	BOOL bLocal_164 = 0;
	BOOL bLocal_165 = 0;
	BOOL bLocal_166 = 0;
	BOOL bLocal_167 = 0;
	BOOL bLocal_168 = 0;
	Vehicle veLocal_169 = 0;
	Vehicle veLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	BOOL bLocal_173 = 0;
	BOOL bLocal_174 = 0;
	int iLocal_175 = 0;
	char* sLocal_176 = 0;
	char* sLocal_177 = 0;
	char* sLocal_178 = 0;
	char* sLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	float fLocal_182 = 0f;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	float fLocal_187 = 0f;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	Hash hLocal_192 = 0;
	var uLocal_193 = 16;
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
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
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
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
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
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_13 = 0.001f;
	iLocal_16 = -1;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = -1f;
	iLocal_53 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_54 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_68 = { -3092.82f, 749.8f, 21.48f };
	uLocal_71 = { 181.8977f, 4415.1523f, 73.463f };
	uLocal_74 = { 2743.4612f, 4385.5103f, 47.7521f };
	uLocal_77 = { -382.1346f, 2817.9712f, 44.0671f };
	uLocal_95 = { -1034.6f, 4918.6f, 205.9f };
	TEXT_LABEL_ASSIGN_STRING(&uLocal_126, "", 24);
	uLocal_61 = { uScriptParam_0.f_1[0 /*3*/] };
	func_285();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(pedLocal_83))
			if (PED::IS_PED_IN_GROUP(pedLocal_83))
				PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
	
		func_262();
	}

	if (func_233(uLocal_61, 13, iLocal_80, false, false))
		func_230(-1);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_109)
		{
			if (!func_229())
				if (func_228())
					func_262();
		
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_HL", 0);
		
			switch (iLocal_55)
			{
				case 0:
					if (func_216())
						func_262();
				
					if (!bLocal_60)
						func_215();
					else
						func_214();
				
					if (bLocal_59)
					{
						bLocal_141 = true;
						iLocal_55 = 1;
					}
					break;
			
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_56)
						{
							case 0:
								if (func_213() && iLocal_57 != 8 && iLocal_57 != 10)
								{
									if (!func_229())
										func_204(true);
								
									iLocal_56 = 1;
								}
							
								switch (iLocal_57)
								{
									case 0:
										func_197();
										break;
								
									case 1:
										func_195();
										break;
								
									case 2:
										func_194();
										iLocal_156 = MISC::GET_GAME_TIMER();
									
										if (iLocal_138 < 1 && !bLocal_139)
											func_193();
									
										if (iLocal_58 == 1)
											func_192();
										else if (iLocal_58 == 2)
											func_191();
										else if (iLocal_58 == 3)
											func_190();
										else if (iLocal_58 == 5)
											func_187();
										break;
								
									case 3:
										func_184();
										break;
								
									case 4:
										if (iLocal_58 == 1)
										{
											func_167();
											func_166();
										}
										else if (iLocal_58 == 3)
										{
											func_161();
											func_160();
										}
										else if (iLocal_58 == 5)
										{
											func_161();
											func_151();
										}
									
										if (!bLocal_112)
										{
											func_147();
											func_146();
											func_143();
											func_142();
											func_139();
											func_137();
											func_136();
											func_135();
										}
									
										func_127();
										break;
								
									case 6:
										func_69();
									
										if (iLocal_58 == 3)
											func_160();
										break;
								
									case 7:
										func_68();
									
										if (iLocal_58 == 3)
											func_160();
										break;
								
									case 8:
										if (iLocal_58 == 3)
										{
											func_64();
											func_160();
										}
										break;
								
									case 9:
										if (!PED::IS_PED_INJURED(pedLocal_83))
										{
											if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uLocal_91, 200f, 200f, 200f, false, true, 0))
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_83, uLocal_91, 1f, -1, 1048576000, 0, 1193033728);
											else
												TASK::TASK_WANDER_STANDARD(pedLocal_83, 1193033728, 0);
										
											PED::SET_PED_KEEP_TASK(pedLocal_83, true);
											BUILTIN::WAIT(5000);
										}
									
										func_60();
										break;
								
									case 10:
										break;
								}
							
								if (func_59() && !func_58() && iLocal_57 != 10)
								{
									if (!PED::IS_PED_INJURED(pedLocal_83))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uLocal_95, 5f, 5f, 5f, false, true, 0))
										{
											func_57(0);
											BUILTIN::WAIT(0);
											func_55();
											iLocal_57 = 10;
										}
									}
								}
							
								if (func_54())
								{
									if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83))
										PED::DELETE_PED(&pedLocal_83);
								
									func_24();
								}
								break;
						
							case 1:
								func_55();
								BUILTIN::WAIT(0);
							
								if (iLocal_58 == 1)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_58 == 2)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_58 == 3)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_AGG", 4, 0, 0, 0);
								
									if (!PED::IS_PED_INJURED(pedLocal_84))
									{
										TASK::CLEAR_PED_TASKS(pedLocal_84);
										TASK::TASK_SMART_FLEE_PED(pedLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
										PED::SET_PED_KEEP_TASK(pedLocal_84, true);
									}
								}
								else if (iLocal_58 == 5)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_AGG", 4, 0, 0, 0);
								}
							
								if (!PED::IS_PED_INJURED(pedLocal_83))
								{
									TASK::CLEAR_PED_TASKS(pedLocal_83);
									TASK::TASK_SMART_FLEE_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
									PED::SET_PED_KEEP_TASK(pedLocal_83, true);
									func_60();
								}
								break;
						}
					}
					break;
			}
		}
		else
		{
			func_262();
		}
	
		if (iLocal_57 > 2)
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83))
					if (!PED::IS_PED_INJURED(pedLocal_83))
						if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
							func_60();
	
		if (iLocal_57 > 0 && iLocal_57 < 8)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_INJURED(pedLocal_83))
				{
					if (!func_229())
						func_204(true);
				
					func_60();
				}
				else if (!PED::IS_PED_RAGDOLL(pedLocal_83))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_83);
						TASK::TASK_SMART_FLEE_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						func_60();
					}
				}
			}
		}
	}

	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x586 (1414)
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22449 = 0;
	Global_22451 = 0;
	Global_22456 = 0;
	Global_23433 = 0;
	Global_23435 = 0;
	Global_23439 = 0;
	Global_2883585 = 0;
	return func_2(sParam2, iParam3, false);
}

BOOL func_2(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x5D4 (1492)
{
	Global_22443 = 0;

	if (Global_22442 == 0 || Global_22444 == 2)
	{
		if (Global_22442 != 0)
		{
			if (iParam1 > Global_22444)
			{
				if (Global_22449 == 0)
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
					func_22();
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
	
		if (func_21(8, -1))
			return 0;
	
		Global_22518 = { Global_22512 };
		func_20();
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
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
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
			
				if (func_11())
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
		
			if (func_10())
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
		
			func_9();
			Global_22452 = bParam2;
		}
	
		Global_22444 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22061, sParam0, 24);
		Global_21308 = 0;
		func_8();
		func_3();
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
		func_22();
	}

	return 0;
}

void func_3() // Position - 0x8A2 (2210)
{
	if (!func_4())
		return;

	if (Global_22448)
	{
		TEXT_LABEL_COPY(&(Global_1973514.f_1), { Global_22061 }, 4);
		Global_1973514 = Global_8234;
		Global_1973514.f_6 = Global_22452;
	}

	return;
}

BOOL func_4() // Position - 0x8D9 (2265)
{
	if (!Global_262145.f_28435)
		return false;

	if (!Global_79564)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_5(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_5(Player plParam0) // Position - 0x93C (2364)
{
	return func_6(plParam0, 20);
}

BOOL func_6(Player plParam0, int iParam1) // Position - 0x94C (2380)
{
	return IS_BIT_SET(Global_1887694[plParam0 /*611*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x964 (2404)
{
	return -1;
}

void func_8() // Position - 0x96D (2413)
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

void func_9() // Position - 0x99D (2461)
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

BOOL func_10() // Position - 0xA32 (2610)
{
	if (Global_21083.f_1 == 1 || Global_21083.f_1 == 0)
		return true;

	return false;
}

BOOL func_11() // Position - 0xA59 (2649)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xAF2 (2802)
{
	if (func_19(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xB94 (2964)
{
	func_14();
	return Global_114162.f_2367.f_539.f_4321;
}

void func_14() // Position - 0xBAD (2989)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114162.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_15(character) && !func_19(14) || Global_113110)
			{
				if (Global_114162.f_2367.f_539.f_4321 != character && func_15(Global_114162.f_2367.f_539.f_4321))
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

BOOL func_15(eCharacter echParam0) // Position - 0xCAA (3242)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xCB6 (3254)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xCF3 (3315)
{
	if (func_15(character))
		return func_18(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_18(eCharacter echParam0) // Position - 0xD18 (3352)
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_19(int iParam0) // Position - 0xD27 (3367)
{
	return Global_44199 == iParam0;
}

void func_20() // Position - 0xD35 (3381)
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

BOOL func_21(int iParam0, int iParam1) // Position - 0xD8B (3467)
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

void func_22() // Position - 0xDC3 (3523)
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

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xE1A (3610)
{
	Global_21896 = { *uParam0 };
	Global_8235 = iParam1;
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

void func_24() // Position - 0xE70 (3696)
{
	while (!func_53())
	{
		BUILTIN::WAIT(0);
	}

	func_48(_GET_CURRENT_PLAYER_CHARACTER(), 4, 5);
	func_28(13, iLocal_80);
	func_25();
	func_262();
	return;
}

void func_25() // Position - 0xEA2 (3746)
{
	func_26();
	return;
}

int func_26() // Position - 0xEAF (3759)
{
	if (func_27(false))
		return 0;

	if (Global_101752.f_8)
		if (Global_101752.f_10 > 0)
			return 0;
	else if (Global_101752.f_10 > 1)
		return 0;

	Global_101752.f_10 = Global_101752.f_10 + 1;
	return 1;
}

BOOL func_27(BOOL bParam0) // Position - 0xEFA (3834)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79813, 0);
}

void func_28(int iParam0, int iParam1) // Position - 0xF22 (3874)
{
	if (iParam0 == -1)
		iParam0 = func_46();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_45(iParam0))
	{
		func_44(iParam0, iParam1);
	
		if (!func_43(51))
		{
			func_39("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_42(), 0, 138, 0);
			func_38(51);
		}
	
		if (func_37(iParam0))
			Global_114162.f_24999.f_2 = 3;
	
		if (func_36(iParam0, iParam1) != 322)
			func_30(func_36(iParam0, iParam1), uLocal_42, uLocal_42.f_1);
	
		Global_114150 = iParam1;
	
		if (Global_114148 == 0)
			if (Global_114151 == 1 || Global_114151 == 5 || Global_114151 == 11 || Global_114151 == 25)
				func_29(2);
			else if (Global_114151 == 26 || Global_114151 == 8 || Global_114151 == 17)
				func_29(7);
			else
				func_29(1);
	}

	return;
}

void func_29(int iParam0) // Position - 0x1025 (4133)
{
	Global_114148 = iParam0;
	return;
}

void func_30(int iParam0, var uParam1, var uParam2) // Position - 0x1033 (4147)
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
		Global_114162.f_10198[iParam0 /*12*/].f_10 = uParam1;
		Global_114162.f_10198[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_31();

	return;
}

void func_31() // Position - 0x1119 (4377)
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

	if (value > 0f && BUILTIN::FLOOR(value) < BUILTIN::FLOOR(Global_114162.f_10198.f_3853))
		func_33(13, BUILTIN::FLOOR(Global_114162.f_10198.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79564)
		{
			if (func_32() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113896 = 0;
			
				if (!Global_64326)
					func_26();
			}
		}
	}

	return;
}

int func_32() // Position - 0x15D7 (5591)
{
	return Global_33105;
}

BOOL func_33(int iParam0, int iParam1) // Position - 0x15E2 (5602)
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1633 (5683)
{
	if (iParam2 == -1)
		iParam2 = func_35();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_35() // Position - 0x1651 (5713)
{
	return Global_1574926;
}

int func_36(int iParam0, int iParam1) // Position - 0x165D (5725)
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

BOOL func_37(int iParam0) // Position - 0x19D1 (6609)
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

void func_38(int iParam0) // Position - 0x1A00 (6656)
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_114162.f_20414.f_150[i], offset);

	return;
}

void func_39(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1A42 (6722)
{
	func_40(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_40(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1A62 (6754)
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

	for (i = 0; i < Global_114162.f_20414.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_114162.f_20414[i /*16*/], sParam0))
			return;
	}

	if (Global_114162.f_20414.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_114162.f_20414[Global_114162.f_20414.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_114162.f_20414[Global_114162.f_20414.f_145 /*16*/].f_4), sParam1, 16);
		Global_114162.f_20414[Global_114162.f_20414.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_114162.f_20414[Global_114162.f_20414.f_145 /*16*/].f_9 = iParam5;
		Global_114162.f_20414[Global_114162.f_20414.f_145 /*16*/].f_11 = iParam6;
		Global_114162.f_20414[Global_114162.f_20414.f_145 /*16*/].f_12 = iParam2;
		Global_114162.f_20414[Global_114162.f_20414.f_145 /*16*/].f_13 = iParam7;
		Global_114162.f_20414[Global_114162.f_20414.f_145 /*16*/].f_14 = iParam8;
		Global_114162.f_20414[Global_114162.f_20414.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_114162.f_20414[Global_114162.f_20414.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_114162.f_20414[Global_114162.f_20414.f_145 /*16*/].f_10 = -1;
	
		Global_114162.f_20414.f_145 = Global_114162.f_20414.f_145 + 1;
		func_41();
	}

	return;
}

void func_41() // Position - 0x1C34 (7220)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_114162.f_20414.f_146[i] = 0;
	}

	for (i = 0; i < Global_114162.f_20414.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_114162.f_20414[i /*16*/].f_11, 0))
			if (Global_114162.f_20414[i /*16*/].f_12 > Global_114162.f_20414.f_146[0])
				Global_114162.f_20414.f_146[0] = Global_114162.f_20414[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114162.f_20414[i /*16*/].f_11, 1))
			if (Global_114162.f_20414[i /*16*/].f_12 > Global_114162.f_20414.f_146[1])
				Global_114162.f_20414.f_146[1] = Global_114162.f_20414[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114162.f_20414[i /*16*/].f_11, 2))
			if (Global_114162.f_20414[i /*16*/].f_12 > Global_114162.f_20414.f_146[2])
				Global_114162.f_20414.f_146[2] = Global_114162.f_20414[i /*16*/].f_12;
	}

	return;
}

int func_42() // Position - 0x1D4B (7499)
{
	func_14();

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

BOOL func_43(int iParam0) // Position - 0x1D91 (7569)
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_114162.f_20414.f_150[i], num);

	return false;
}

void func_44(int iParam0, int iParam1) // Position - 0x1DD1 (7633)
{
	MISC::SET_BIT(&Global_114162.f_24999.f_8[iParam0], iParam1);
	return;
}

int func_45(int iParam0) // Position - 0x1DEC (7660)
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

int func_46() // Position - 0x1E9D (7837)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_47(unk);
	return num;
}

int func_47(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x1EBA (7866)
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

void func_48(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x2094 (8340)
{
	int num;
	int num2;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
		case CHAR_FRANKLIN:
		case CHAR_TREVOR:
			Global_114162.f_2367.f_539.f_2247[iParam1 /*4*/][echParam0] = Global_114162.f_2367.f_539.f_2247[iParam1 /*4*/][echParam0] + iParam2;
			break;
	
		case CHAR_MULTIPLAYER:
			num2 = 17239;
		
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
		
			if (num2 != 17239)
			{
				num = func_52(num2, -1);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_49(num2, num, -1, true);
			}
			break;
	}

	return;
}

void func_49(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2182 (8578)
{
	Hash statName;

	if (iParam0 != 17239)
	{
		statName = func_50(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_50(int iParam0, int iParam1) // Position - 0x21B0 (8624)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_51(iParam1));
}

int func_51(int iParam0) // Position - 0x21C5 (8645)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_35();
	
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

int func_52(int iParam0, int iParam1) // Position - 0x21F9 (8697)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 17239)
	{
		statHash = func_50(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_53() // Position - 0x2228 (8744)
{
	return true;
}

BOOL func_54() // Position - 0x2231 (8753)
{
	if (Global_33345)
	{
		func_29(4);
		return true;
	}

	return false;
}

void func_55() // Position - 0x2249 (8777)
{
	Global_21308 = 0;
	func_56();
	return;
}

void func_56() // Position - 0x2259 (8793)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23453 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22442 = 6;
	}

	return;
}

void func_57(int iParam0) // Position - 0x227A (8826)
{
	Global_23453 = iParam0;
	return;
}

BOOL func_58() // Position - 0x2287 (8839)
{
	if (Global_114162.f_24999.f_5 == 1000)
		return true;

	return false;
}

BOOL func_59() // Position - 0x22A3 (8867)
{
	return Global_33344;
}

void func_60() // Position - 0x22AE (8878)
{
	func_62();

	while (func_61())
	{
		BUILTIN::WAIT(0);
	}

	func_262();
	return;
}

BOOL func_61() // Position - 0x22CD (8909)
{
	if (Global_22442 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_62() // Position - 0x22EF (8943)
{
	Global_21308 = 0;
	func_63();
	return;
}

void func_63() // Position - 0x22FF (8959)
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23453 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22442 = 6;
		return;
	}

	return;
}

void func_64() // Position - 0x2323 (8995)
{
	var string1;

	if (!PED::IS_PED_INJURED(pedLocal_84) && !PED::IS_PED_INJURED(pedLocal_83))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_84, 25f, 25f, 25f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_83, 40f, 40f, 40f, false, true, 0))
		{
			TASK::CLEAR_PED_TASKS(pedLocal_84);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_84, uLocal_91, 1f, -1, 1048576000, 0, 1193033728);
			func_24();
		}
	}

	if (!PED::IS_PED_INJURED(pedLocal_84))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_84, PLAYER::PLAYER_PED_ID(), true))
		{
			if (func_61())
			{
				string1 = { func_67() };
			
				if (MISC::ARE_STRINGS_EQUAL(&string1, "REHH3_JB_2") || MISC::ARE_STRINGS_EQUAL(&string1, "REHH3_JB_4") || MISC::ARE_STRINGS_EQUAL(&string1, "REHH3_JB_6"))
					func_55();
			}
		}
	
		if (BUILTIN::TIMERB() > 5000)
			if (PED::IS_PED_IN_COMBAT(pedLocal_84, PLAYER::PLAYER_PED_ID()))
				iLocal_157 = 4;
	}

	if (!bLocal_111)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), true))
			{
				if (!PED::IS_PED_INJURED(pedLocal_84))
				{
					func_55();
					BUILTIN::WAIT(0);
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_JB2", 4, 0, 0, 0);
					bLocal_111 = true;
				}
			}
		}
	}

	if (!PED::IS_PED_INJURED(pedLocal_83))
	{
		if (PED::IS_PED_RAGDOLL(pedLocal_83))
			TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
	
		if (PED::IS_PED_INJURED(pedLocal_84) && ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, ENTITY::GET_ENTITY_COORDS(pedLocal_84, false), 1f, 1f, 5f, false, true, 0))
			iLocal_157 = 5;
	}
	else if (!PED::IS_PED_INJURED(pedLocal_84))
	{
		TASK::TASK_COMBAT_PED(pedLocal_84, PLAYER::PLAYER_PED_ID(), 0, 16);
		func_60();
	}
	else
	{
		func_60();
	}

	if (!bLocal_166)
	{
		if (PED::IS_PED_INJURED(pedLocal_84))
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_120))
				HUD::REMOVE_BLIP(&blLocal_120);
		
			if (!PED::IS_PED_INJURED(pedLocal_83))
				iLocal_157 = 3;
		}
	}

	if (!bLocal_168)
	{
		if (!PED::IS_PED_INJURED(pedLocal_83) && !PED::IS_PED_INJURED(pedLocal_84))
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					iLocal_157 = 2;
	
		if (PED::IS_PED_INJURED(pedLocal_84))
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_120))
				HUD::REMOVE_BLIP(&blLocal_120);
		
			func_66(&uLocal_193, 4);
		
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_84, PLAYER::PLAYER_PED_ID(), true) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				iLocal_157 = 2;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_83, pedLocal_84, true))
				iLocal_157 = 2;
		}
	}

	switch (iLocal_157)
	{
		case 0:
			if (!bLocal_166)
			{
				if (!PED::IS_PED_INJURED(pedLocal_83) && !PED::IS_PED_INJURED(pedLocal_84))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false) && PED::IS_PED_IN_MELEE_COMBAT(pedLocal_84))
					{
						if (!bLocal_167)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
							TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_84, -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
							TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, false, false, false);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_84, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
							bLocal_167 = true;
						}
					}
				}
			}
			else
			{
				func_24();
			}
			break;
	
		case 1:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_83, 0, 0);
				BUILTIN::SETTIMERB(0);
				iLocal_157 = 0;
			}
			break;
	
		case 2:
			if (!bLocal_168)
			{
				if (!PED::IS_PED_INJURED(pedLocal_83))
				{
					func_55();
					BUILTIN::WAIT(0);
				
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_GUN", 4, 0, 0, 0);
					else
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_AGG", 4, 0, 0, 0);
				
					if (!PED::IS_PED_INJURED(pedLocal_83))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_83);
						TASK::TASK_SMART_FLEE_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					
						if (!PED::IS_PED_INJURED(pedLocal_84))
						{
							AUDIO::PLAY_PAIN(pedLocal_84, 6, 0, 0);
							TASK::TASK_SMART_FLEE_PED(pedLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						}
					}
				
					func_24();
					bLocal_168 = true;
					iLocal_157 = 0;
				}
			}
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				func_55();
				BUILTIN::WAIT(0);
			
				if (!PED::IS_PED_INJURED(pedLocal_83))
					AUDIO::PLAY_PAIN(pedLocal_83, 7, 0, 0);
			
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_BAS", 4, 0, 0, 0);
			
				if (!PED::IS_PED_INJURED(pedLocal_83) && ENTITY::DOES_ENTITY_EXIST(pedLocal_84))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, false, false, false);
					TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_84, -1, SLF_EXTEND_YAW_LIMIT | 2048, 4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_84, false), 1f, -1, 3f, 0, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_84, -1);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, false, false, false);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					PED::SET_PED_KEEP_TASK(pedLocal_83, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_83, false);
					BUILTIN::WAIT(10000);
					bLocal_166 = true;
					iLocal_157 = 0;
				}
			}
			break;
	
		case 4:
			if (_GET_RANDOM_BOOL())
			{
				if (!PED::IS_PED_INJURED(pedLocal_83))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, false, true, 0))
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_NOO", 4, 0, 0, 0))
						{
							BUILTIN::SETTIMERB(0);
							iLocal_157 = 0;
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(pedLocal_84))
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_FHT", 4, 0, 0, 0))
				{
					BUILTIN::SETTIMERB(0);
					iLocal_157 = 0;
				}
			}
			break;
	
		case 5:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				func_62();
				BUILTIN::WAIT(0);
			
				if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_ATT", 4, 0, 0, 0))
					iLocal_157 = 0;
			}
			break;
	}

	return;
}

BOOL _GET_RANDOM_BOOL() // Position - 0x288B (10379)
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

void func_66(var uParam0, int iParam1) // Position - 0x28A9 (10409)
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

struct<6> func_67() // Position - 0x28C6 (10438)
{
	var unk;
	int currentScriptedConversationLine;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_22442 == 4)
	{
		currentScriptedConversationLine = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		currentScriptedConversationLine = currentScriptedConversationLine + Global_23452;
	
		if (currentScriptedConversationLine > -1)
			return Global_21310[currentScriptedConversationLine /*6*/];
		else
			return unk;
	}

	return unk;
}

void func_68() // Position - 0x290C (10508)
{
	if (iLocal_58 == 3)
	{
		if (!PED::IS_PED_INJURED(pedLocal_83))
		{
			if (PED::IS_PED_IN_GROUP(pedLocal_83))
				PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
		
			iLocal_57 = 8;
		}
	}

	return;
}

void func_69() // Position - 0x2937 (10551)
{
	if (HUD::DOES_BLIP_EXIST(blLocal_81))
		HUD::REMOVE_BLIP(&blLocal_81);

	if (HUD::DOES_BLIP_EXIST(blLocal_82))
		HUD::REMOVE_BLIP(&blLocal_82);

	if (iLocal_58 == 1)
	{
		AUDIO::STOP_SOUND(iLocal_175);
		AUDIO::STOP_AUDIO_SCENE("TIMER_SCENE");
	
		if (!bLocal_122)
		{
			func_55();
			BUILTIN::WAIT(0);
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TKA", 4, 0, 0, 0);
			CAM::SET_GAMEPLAY_COORD_HINT(-1055.5146f, -2533.2207f, 19.3049f, -1, 3000, 2000, 0);
		
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				func_94(_GET_CURRENT_PLAYER_CHARACTER(), 1, 100, false, true);
				func_93(198, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_83, 8000, SLF_EXTEND_YAW_LIMIT | 2048, 4);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 3000, 4194369);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1055.5146f, -2533.2207f, 19.3049f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1046.8315f, -2518.1458f, 12.9447f, 2f, -1, 1193033728, 1056964608);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				PED::SET_PED_KEEP_TASK(pedLocal_83, true);
				BUILTIN::SETTIMERB(0);
				bLocal_122 = true;
			}
		}
	
		if (BUILTIN::TIMERB() < 7000)
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_BEHIND, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_LEFT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_RIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN_ONLY, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT_ONLY, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT_ONLY, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP_ONLY, true);
		}
	
		if (BUILTIN::TIMERB() > 3000 && BUILTIN::TIMERB() < 7000)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		else if (BUILTIN::TIMERB() > 7000)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::STOP_GAMEPLAY_HINT(false);
		
			if (BUILTIN::TIMERB() > 8500 && !bLocal_124)
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					bLocal_124 = true;
				}
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83) || BUILTIN::TIMERB() > 15000)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, -1046.8315f, -2518.1458f, 12.9447f, 20f, 20f, 5f, false, true, 0) || BUILTIN::TIMERB() > 15000)
			{
				PED::DELETE_PED(&pedLocal_83);
				func_24();
			}
		}
	}
	else if (iLocal_58 == 2)
	{
		if (!bLocal_122)
		{
			func_55();
			BUILTIN::WAIT(0);
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_TKB", 4, 0, 0, 0);
			bLocal_122 = true;
		}
	
		if (!PED::IS_PED_INJURED(pedLocal_83))
		{
			if (!PED::IS_PED_RAGDOLL(pedLocal_83))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
				TASK::TASK_PAUSE(0, 4500);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194369);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3323.4304f, 5166.8315f, 17.406f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3320.6838f, 5186.0166f, 17.4016f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3303.6118f, 5185.2686f, 18.7155f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				PED::SET_PED_KEEP_TASK(pedLocal_83, true);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_83, 5000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
				PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
				BUILTIN::WAIT(1000);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
					func_73(9, 1, 0);
				else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
					func_73(9, true, 1);
				else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
					func_73(9, true, 2);
			
				BUILTIN::WAIT(8000);
				func_24();
			}
		}
	}
	else if (iLocal_58 == 3)
	{
		if (BUILTIN::TIMERA() > 1000)
		{
			if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_JB", 4, 0, 0, 0))
			{
				if (!PED::IS_PED_INJURED(pedLocal_84))
				{
					AUDIO::STOP_PED_SPEAKING(pedLocal_84, true);
				
					if (!HUD::DOES_BLIP_EXIST(blLocal_119))
						HUD::REMOVE_BLIP(&blLocal_119);
				
					if (!HUD::DOES_BLIP_EXIST(blLocal_120))
						blLocal_120 = func_70(pedLocal_84, true, 145);
				
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 17f, 1f, 1073741824, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_84, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					PED::SET_PED_KEEP_TASK(pedLocal_84, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_84, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PED::ADD_RELATIONSHIP_GROUP("rghBoyfriend", &hLocal_192);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_84, hLocal_192);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, joaat("COP"), hLocal_192);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("SECURITY_GUARD"), hLocal_192);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_192, joaat("SECURITY_GUARD"));
					BUILTIN::SETTIMERA(0);
					iLocal_57 = 7;
				}
			}
		}
	}
	else if (iLocal_58 == 5)
	{
		if (!bLocal_122)
		{
			func_55();
			BUILTIN::WAIT(0);
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_THX", 4, 0, 0, 0);
			bLocal_122 = true;
		}
	
		if (!PED::IS_PED_INJURED(pedLocal_83))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194369);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
			TASK::TASK_PAUSE(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
			PED::SET_PED_KEEP_TASK(pedLocal_83, true);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_83, 5000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
			PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
		}
	
		BUILTIN::WAIT(2000);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		BUILTIN::WAIT(3000);
		func_24();
	}

	return;
}

Blip func_70(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x2FBD (12221)
{
	Blip blip;

	blip = func_71(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2201[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2201[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_71(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3007 (12295)
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(pedParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

var func_72(BOOL bParam0, var uParam1, var uParam2) // Position - 0x30AB (12459)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_73(int iParam0, BOOL bParam1, int iParam2) // Position - 0x30C2 (12482)
{
	BOOL flag;
	int randomIntInRange;

	if (iParam2 < 0)
		iParam2 = func_92();

	func_91(iParam2) == 4;
	flag = Global_114162.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;

	if (flag)
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!func_89(func_90(iParam0), 3))
				flag = false;
		else if (!func_89(func_90(iParam0), 4))
			flag = false;

	Global_114162.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;

	if (bParam1)
	{
		if (!flag)
		{
			func_88(iParam0, 0);
			func_83(func_90(iParam0), func_91(iParam2), true);
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
		
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2359296[func_82() /*5571*/].f_681.f_1273), iParam0);
					func_79(-60084924, 15, false);
					break;
			}
		
			func_78(randomIntInRange);
			func_77(iParam0, randomIntInRange);
			Global_113155.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (flag)
	{
		func_74(func_90(iParam0), func_91(iParam2));
	}

	return;
}

void func_74(eCharacter echParam0, int iParam1) // Position - 0x31EB (12779)
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
			func_76(echParam0, num, 0);
			func_75(echParam0, num, 0);
		}
	}

	return;
}

void func_75(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3220 (12832)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[echParam0 /*29*/].f_24[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114162.f_28055[echParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_76(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3265 (12901)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[echParam0 /*29*/].f_12[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114162.f_28055[echParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

void func_77(int iParam0, int iParam1) // Position - 0x32AA (12970)
{
	if (iParam1 > -1)
		Global_113155.f_4[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
	else
		Global_113155.f_4[iParam0] = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000);

	return;
}

void func_78(int iParam0) // Position - 0x32E7 (13031)
{
	if (iParam0 != -1)
		Global_113155.f_3 = MISC::GET_GAME_TIMER() + iParam0;
	else
		Global_113155.f_3 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000);

	return;
}

void func_79(int iParam0, int iParam1, BOOL bParam2) // Position - 0x331E (13086)
{
	int num;

	if (func_81(iParam1, bParam2))
	{
		num = func_80();
		Global_2696325[num] = iParam1;
		Global_2696336[num] = iParam0;
	}

	return;
}

int func_80() // Position - 0x334B (13131)
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

BOOL func_81(int iParam0, BOOL bParam1) // Position - 0x3380 (13184)
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

int func_82() // Position - 0x3406 (13318)
{
	int num;

	num = 0;
	return num;
}

void func_83(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x3413 (13331)
{
	int num;

	Global_9639 = echParam0;

	if (Global_120[echParam0 /*10*/].f_8 != 184)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (echParam1 == 4)
		{
			func_76(echParam0, 0, 1);
			func_76(echParam0, 1, 1);
			func_76(echParam0, 2, 1);
			func_75(echParam0, 0, 1);
			func_75(echParam0, 1, 1);
			func_75(echParam0, 2, 1);
		}
		else
		{
			if (func_87(echParam0, echParam1) == 1 && func_86(echParam0, echParam1) == 1)
				bParam2 = false;
		
			num = echParam1;
			func_76(echParam0, num, 1);
			func_75(echParam0, num, 1);
		
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
						func_84();
					}
				}
				else
				{
					Global_9563[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
					Global_9563[1 /*6*/].f_5 = echParam1;
					func_84();
				}
			}
			else
			{
				Global_9563[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
				Global_9563[1 /*6*/].f_5 = echParam1;
				func_84();
			}
		}
	}

	return;
}

void func_84() // Position - 0x3591 (13713)
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

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x360A (13834)
{
	return Global_2201[character /*29*/].f_3;
}

int func_86(eCharacter echParam0, int iParam1) // Position - 0x361D (13853)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[echParam0 /*29*/].f_24[iParam1];
}

int func_87(eCharacter echParam0, int iParam1) // Position - 0x3647 (13895)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[echParam0 /*29*/].f_12[iParam1];
}

void func_88(int iParam0, int iParam1) // Position - 0x3671 (13937)
{
	Global_114162.f_243[func_92() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
	return;
}

BOOL func_89(eCharacter echParam0, int iParam1) // Position - 0x368F (13967)
{
	if (func_87(echParam0, iParam1) == 1)
		return true;

	return false;
}

eCharacter func_90(int iParam0) // Position - 0x36AB (13995)
{
	switch (iParam0)
	{
		case 0:
			return CHAR_STRIPPER_JULIET;
	
		case 1:
			return CHAR_STRIPPER_NIKKI;
	
		case 2:
			return CHAR_STRIPPER_CHASTITY;
	
		case 3:
			return CHAR_STRIPPER_CHEETAH;
	
		case 4:
			return CHAR_STRIPPER_SAPPHIRE;
	
		case 5:
			return CHAR_STRIPPER_INFERNUS;
	
		case 6:
			return CHAR_STRIPPER_FUFU;
	
		case 7:
			return CHAR_STRIPPER_PEACH;
	
		case 8:
			return CHAR_TAXI_LIZ;
	
		case 9:
			return CHAR_HITCHER_GIRL;
	}

	return _CHAR_NULL;
}

int func_91(int iParam0) // Position - 0x3748 (14152)
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

int func_92() // Position - 0x37A4 (14244)
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
			switch (func_51(-1))
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

void func_93(int iParam0, int iParam1) // Position - 0x3832 (14386)
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_114162.f_8617[iParam0] = 1;
	Global_114162.f_8617.f_236[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_94(eCharacter echParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x386F (14447)
{
	int outValue;
	Hash statHash;

	if (func_126(echParam0) == 3)
		return;

	if (func_126(echParam0) == 4)
		return;

	func_95(func_126(echParam0), 1, iParam1, iParam2, false);

	if (bParam3)
	{
		outValue = 0;
	
		if (bParam4)
		{
			switch (echParam0)
			{
				case CHAR_MICHAEL:
					statHash = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case CHAR_FRANKLIN:
					statHash = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case CHAR_TREVOR:
					statHash = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				default:
					return;
			}
		}
		else
		{
			switch (echParam0)
			{
				case CHAR_MICHAEL:
					statHash = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case CHAR_FRANKLIN:
					statHash = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case CHAR_TREVOR:
					statHash = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
			
				default:
					return;
			}
		}
	
		STATS::STAT_GET_INT(statHash, &outValue, -1);
		outValue = outValue + iParam2;
		STATS::STAT_SET_INT(statHash, outValue, true);
	}

	return;
}

int func_95(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x3941 (14657)
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_125();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_124(99, 1);
					func_123(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_123(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_123(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_109(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_107(5))
					{
						num = 0.9f;
						num2 = 5;
					}
					break;
			
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_123(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_123(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_123(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_107(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_123(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_123(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_123(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_123(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_123(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_123(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
			
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_123(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_123(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_123(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
			
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_123(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_123(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_123(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_123(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_123(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_123(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_107(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_123(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_123(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_123(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_123(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_123(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_123(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_106(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_124(95, iParam3);
					break;
			
				case 1:
					func_124(97, iParam3);
					break;
			
				case 2:
					func_124(96, iParam3);
					break;
			}
		
			func_124(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = BUILTIN::FLOOR(num * BUILTIN::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_98(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_98(num2);
	}

	num6 = Global_61500[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_61500[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_61500[num3] = 2147483647;
				else
					Global_61500[num3] = Global_61500[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_123(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_123(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_123(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_61500[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_61500[num3];
			Global_61500[num3] = Global_61500[num3] - iParam3;
		
			if (bParam4)
				num5 = num4;
			break;
	}

	if (iParam2 == 1)
	{
		num5 > 20;
	}
	else
	{
		Global_114162.f_20568.f_233[num3 /*69*/].f_2[Global_114162.f_20568.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_114162.f_20568.f_233[num3 /*69*/].f_2[Global_114162.f_20568.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114162.f_20568.f_233[num3 /*69*/].f_2[Global_114162.f_20568.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114162.f_20568.f_233[num3 /*69*/] = Global_114162.f_20568.f_233[num3 /*69*/] + 1;
		Global_114162.f_20568.f_233[num3 /*69*/].f_1 = Global_114162.f_20568.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_114162.f_20568.f_233[num3 /*69*/].f_1 > 10)
			Global_114162.f_20568.f_233[num3 /*69*/].f_1 = 0;
	}

	func_97(iParam0);

	if (Global_44199 == 15)
		func_96(false);

	return 1;
}

void func_96(BOOL bParam0) // Position - 0x3F40 (16192)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_114162.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_114162.f_20568.f_233[i /*69*/].f_2[j /*6*/];
			Global_114162.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_114162.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_114162.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_114162.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_61508[i /*3*/][0] = Global_114162.f_20568[i];
		Global_61508.f_31[i /*3*/][0] = Global_114162.f_20568.f_11[i];
		Global_61508.f_62[i /*3*/][0] = Global_114162.f_20568.f_22[i];
		Global_61508.f_93[i /*3*/][0] = Global_114162.f_20568.f_33[i];
		Global_61508.f_124[i /*3*/][0] = Global_114162.f_20568.f_44[i];
		Global_61508.f_155[i /*3*/][0] = Global_114162.f_20568.f_55[i];
		Global_61508.f_186[i /*3*/][0] = Global_114162.f_20568.f_66[i];
		Global_61508.f_217[i /*3*/][0] = Global_114162.f_20568.f_77[i];
		Global_61508.f_248[i /*3*/][0] = Global_114162.f_20568.f_88[i];
	
		if (!bParam0)
		{
			Global_61508[i /*3*/][1] = Global_114162.f_20568[i];
			Global_61508.f_31[i /*3*/][1] = Global_114162.f_20568.f_11[i];
			Global_61508.f_62[i /*3*/][1] = Global_114162.f_20568.f_22[i];
			Global_61508.f_93[i /*3*/][1] = Global_114162.f_20568.f_33[i];
			Global_61508.f_124[i /*3*/][1] = Global_114162.f_20568.f_44[i];
			Global_61508.f_155[i /*3*/][1] = Global_114162.f_20568.f_55[i];
			Global_61508.f_186[i /*3*/][1] = Global_114162.f_20568.f_66[i];
			Global_61508.f_217[i /*3*/][1] = Global_114162.f_20568.f_77[i];
			Global_61508.f_248[i /*3*/][1] = Global_114162.f_20568.f_88[i];
		}
	}

	return;
}

void func_97(int iParam0) // Position - 0x41C3 (16835)
{
	int value;

	value = Global_61500[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), value, true);
			break;
	
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), value, true);
			break;
	
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), value, true);
			break;
	}

	return;
}

void func_98(int iParam0) // Position - 0x421D (16925)
{
	int num;
	BOOL flag;
	var txdName;

	if (iParam0 == 8)
	{
		_STAT_SET_PACKED_BOOL(129, false, -1);
		return;
	}

	if (iParam0 == 9)
	{
		_STAT_SET_PACKED_BOOL(135, false, -1);
		return;
	}

	if (iParam0 == 10)
	{
		_STAT_SET_PACKED_BOOL(136, false, -1);
		return;
	}

	if (iParam0 == 11)
	{
		_STAT_SET_PACKED_BOOL(137, false, -1);
		return;
	}

	if (iParam0 == 12)
	{
		func_49(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_49(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_49(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_49(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_49(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_49(8277, 0, -1, true);
		return;
	}

	if (func_105(iParam0))
	{
		func_49(func_104(iParam0), 0, -1, true);
		return;
	}

	if (func_103(iParam0))
	{
		num = _MPPLY_STAT_GET_INT(func_102(iParam0));
		_MPPLY_STAT_SET_INT(func_102(iParam0), num - 1);
		return;
	}

	if (iParam0 == 39)
	{
		_STAT_SET_PACKED_BOOL(7332, false, -1);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_114162.f_20568.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_114162.f_20568.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_114162.f_20568.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_82() /*5571*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_114162.f_20568.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_82() /*5571*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*You have redeemed your promotion for ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_99(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_99(int iParam0) // Position - 0x43E7 (17383)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC" /*one free haircut.*/;
	
		case 1:
			return "COUP_TATTOO" /*one free tattoo.*/;
	
		case 2:
			return "COUP_WARSTOCK" /*10% off your next purchase at Warstock-Cache-and-Carry.com.*/;
	
		case 3:
			return "COUP_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
	
		case 4:
			return "COUP_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
	
		case 5:
			return "COUP_MEDSPENS" /*10 percent off your next medical expenses.*/;
	
		case 6:
			return "COUP_SPRUNK" /*one free can of Sprunk.*/;
	
		case 7:
			return "COUP_RESPRAY" /*one free respray.*/;
	
		case 8:
			return "COUP_XMAS2017";
	
		case 9:
			return "COUP_CAR_XMAS2018";
	
		case 10:
			return "COUP_HELI_XMAS2018";
	
		case 11:
			return "COUP_CAR2_XMAS2018";
	
		case 12:
			return "COUP_CAS_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
	
		case 13:
			return "COUP_CAS_DOCKTEASE" /*10 percent off your next purchase at DockTease.com.*/;
	
		case 14:
			return "COUP_CAS_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
	
		case 15:
			return "COUP_CAS_SSASA" /*10 percent off your next purchase at southernsanandreassuperautos.com.*/;
	
		case 16:
			return "COUP_CAS_WARSTOCK" /*10 percent off your next purchase at Warstock-Cache-and-Carry.com.*/;
	
		case 17:
			return "COUP_CAS_PANDM" /*10 percent off your next purchase at pandmcycles.com.*/;
	
		case 39:
			return "COUPON_CAR_GEN9_MIGRATION";
	
		default:
			if (func_105(iParam0))
				return "HSW_COUP";
		
			if (func_103(iParam0))
				return "HSWU_COUP";
			break;
	}

	return "";
}

void _MPPLY_STAT_SET_INT(Hash hParam0, int iParam1) // Position - 0x4518 (17688)
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, true);

	return;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x4534 (17716)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_102(int iParam0) // Position - 0x4552 (17746)
{
	switch (iParam0)
	{
		case 38:
			return joaat("MPPLY_DISCOUNT_HSW_UPGRADE");
	
		default:
		
	}

	return joaat("MPPLY_DISCOUNT_HSW_UPGRADE");
}

BOOL func_103(int iParam0) // Position - 0x4574 (17780)
{
	switch (iParam0)
	{
		case 38:
			return true;
	}

	return false;
}

int func_104(int iParam0) // Position - 0x4591 (17809)
{
	switch (iParam0)
	{
		case 18:
			return 15471;
	
		case 19:
			return 15472;
	
		case 20:
			return 15473;
	
		case 21:
			return 15474;
	
		case 22:
			return 15475;
	
		case 23:
			return 15476;
	
		case 24:
			return 15477;
	
		case 25:
			return 15478;
	
		case 26:
			return 15479;
	
		case 27:
			return 15480;
	
		case 28:
			return 15481;
	
		case 29:
			return 15482;
	
		case 30:
			return 15483;
	
		case 31:
			return 15484;
	
		case 32:
			return 15485;
	
		case 33:
			return 15486;
	
		case 34:
			return 15487;
	
		case 35:
			return 15488;
	
		case 36:
			return 15489;
	
		case 37:
			return 15490;
	}

	return 15471;
}

BOOL func_105(int iParam0) // Position - 0x4696 (18070)
{
	switch (iParam0)
	{
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
			return true;
	}

	return false;
}

void func_106(int iParam0) // Position - 0x4725 (18213)
{
	func_124(93, iParam0);
	func_124(29, iParam0);
	func_124(30, iParam0);
	return;
}

BOOL func_107(int iParam0) // Position - 0x4745 (18245)
{
	int cloudTimeAsInt;
	int num;
	int cloudTimeAsInt2;
	int num2;
	int cloudTimeAsInt3;
	int num3;
	int cloudTimeAsInt4;
	int num4;
	int cloudTimeAsInt5;
	int num5;
	int cloudTimeAsInt6;
	int num6;
	int cloudTimeAsInt7;
	int num7;
	int num8;

	if (iParam0 == 8)
		return _STAT_GET_PACKED_BOOL(129, -1);

	if (iParam0 == 9)
		return _STAT_GET_PACKED_BOOL(135, -1);

	if (iParam0 == 10)
		return _STAT_GET_PACKED_BOOL(136, -1);

	if (iParam0 == 11)
		return _STAT_GET_PACKED_BOOL(137, -1);

	if (iParam0 == 12)
	{
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		num = func_52(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_52(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_52(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_52(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_52(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_52(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (func_105(iParam0))
	{
		cloudTimeAsInt7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num7 = func_52(func_104(iParam0), -1);
	
		if (num7 == 0 || cloudTimeAsInt7 >= num7)
			return false;
	
		return true;
	}

	if (func_103(iParam0))
	{
		num8 = _MPPLY_STAT_GET_INT(func_102(iParam0));
	
		if (num8 <= 0)
			return false;
	
		return true;
	}

	if (iParam0 == 39)
		return _STAT_GET_PACKED_BOOL(7332, -1);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_114162.f_20568.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_82() /*5571*/].f_681.f_10, iParam0);
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x4950 (18768)
{
	if (iParam1 == -1)
		iParam1 = func_35();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_109(BOOL bParam0) // Position - 0x496C (18796)
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), value, true);
		func_33(27, value);
	}

	if (value < 200000000)
		return 0;

	func_110(27, 1);
	return 1;
}

int func_110(int iParam0, int iParam1) // Position - 0x4A23 (18979)
{
	if (iParam0 >= 78)
		return 0;

	return func_111(iParam0, iParam1);
}

int func_111(int iParam0, int iParam1) // Position - 0x4A3E (19006)
{
	if (func_19(14) && !func_122(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_33356 != 0 && !Global_79564)
		return 0;

	if (func_121(&Global_4546323))
	{
		if (func_119(&Global_4546323, iParam0))
			return 0;
	
		if (func_112(&Global_4546323, iParam0))
			return 1;
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
			return 0;
	
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

BOOL func_112(var uParam0, int iParam1) // Position - 0x4ADB (19163)
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_19(14) && !func_122(iParam1))
		return false;

	if (func_119(uParam0, iParam1))
		return false;

	if (func_118(uParam0) < 0f)
		func_117(uParam0, 0);

	func_115(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_113(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_113(var uParam0, int iParam1) // Position - 0x4B8C (19340)
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_19(14) && !func_122(iParam1))
		return 0;

	if (func_119(uParam0, iParam1))
		return 0;

	if (func_118(uParam0) < 0f)
		func_117(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_114(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_114(var uParam0, int iParam1) // Position - 0x4C07 (19463)
{
	return uParam0->[iParam1] == 78;
}

void func_115(var uParam0) // Position - 0x4C18 (19480)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_116(uParam0, i);
	}

	func_117(uParam0, Global_4546322 - 0.5f);
	return;
}

void func_116(var uParam0, int iParam1) // Position - 0x4C4C (19532)
{
	uParam0->[iParam1] = 78;
	return;
}

void func_117(var uParam0, int iParam1) // Position - 0x4C5C (19548)
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_118(var uParam0) // Position - 0x4C79 (19577)
{
	return uParam0->f_80;
}

BOOL func_119(var uParam0, int iParam1) // Position - 0x4C85 (19589)
{
	return func_120(uParam0, iParam1) != -1;
}

int func_120(var uParam0, int iParam1) // Position - 0x4C97 (19607)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_121(var uParam0) // Position - 0x4CC4 (19652)
{
	return uParam0->f_79 == 1;
}

BOOL func_122(int iParam0) // Position - 0x4CD2 (19666)
{
	switch (iParam0)
	{
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
			return true;
	
		default:
		
	}

	return false;
}

void func_123(Hash hParam0, int iParam1) // Position - 0x4D22 (19746)
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_124(int iParam0, int iParam1) // Position - 0x4D45 (19781)
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_60068[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60068[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60068[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_60068[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_125() // Position - 0x4DA2 (19874)
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61500[0] == outValue))
			Global_61500[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61500[1] == outValue))
			Global_61500[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61500[2] == outValue))
			Global_61500[2] = outValue;
	}

	return;
}

int func_126(eCharacter echParam0) // Position - 0x4E17 (19991)
{
	return Global_2201[echParam0 /*29*/].f_17;
}

void func_127() // Position - 0x4E28 (20008)
{
	if (!PED::IS_PED_INJURED(pedLocal_83))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_134())
			{
				if (PED::IS_PED_IN_GROUP(pedLocal_83))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_83, SCRIPT_TASK_GO_TO_ENTITY) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_83, SCRIPT_TASK_GO_TO_ENTITY) != 0)
					TASK::TASK_GO_TO_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
			
				if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false))
					TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_83, 0, 0);
			
				if (!bLocal_140)
				{
					func_129(false);
					func_55();
					BUILTIN::WAIT(0);
				
					if (!func_61())
					{
						if (iLocal_58 == 1)
							if (!func_194())
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_VEH", 4, 0, 0, 0);
							else
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_VEH2", 4, 0, 0, 0);
						else if (iLocal_58 == 2)
							if (!func_194())
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_VEH", 4, 0, 0, 0);
							else
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_VEH2", 4, 0, 0, 0);
						else if (iLocal_58 == 3)
							if (!func_194())
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_VEH", 4, 0, 0, 0);
							else
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_VEH2", 4, 0, 0, 0);
						else if (iLocal_58 == 5)
							if (!func_194())
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_VEH", 4, 0, 0, 0);
							else
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_VEH2", 4, 0, 0, 0);
					
						bLocal_140 = true;
					}
				}
			}
			else
			{
				bLocal_140 = false;
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_83, SCRIPT_TASK_GO_TO_ENTITY) == 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_83, SCRIPT_TASK_GO_TO_ENTITY) == 0)
					TASK::CLEAR_PED_TASKS(pedLocal_83);
			}
		}
		else if (!PED::IS_PED_IN_GROUP(pedLocal_83))
		{
			PED::SET_PED_AS_GROUP_MEMBER(pedLocal_83, func_128());
			PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_83, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_83, 0);
		}
	}

	return;
}

int func_128() // Position - 0x4FEF (20463)
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_129(BOOL bParam0) // Position - 0x4FFF (20479)
{
	if (bParam0)
	{
		if (bLocal_125)
			if (func_133(&uLocal_193, sLocal_176, &uLocal_132, &uLocal_126, 8, 0, 0))
				bLocal_125 = false;
	}
	else if (!bLocal_125 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !func_131())
	{
		uLocal_132 = { func_130() };
		uLocal_126 = { func_67() };
		func_62();
		bLocal_125 = true;
	}

	return;
}

struct<6> func_130() // Position - 0x505A (20570)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_22442 == 4)
		return Global_22061;

	return unk;
}

BOOL func_131() // Position - 0x507E (20606)
{
	if (func_132("REHH1_VEH") || func_132("REHH2_VEH") || func_132("REHH3_VEH") || func_132("REHH4_VEH") || func_132("REHH5_VEH") || func_132("REHH1_VEH2") || func_132("REHH2_VEH2") || func_132("REHH3_VEH2") || func_132("REHH4_VEH2") || func_132("REHH5_VEH2") || func_132("REHH1_WLK") || func_132("REHH2_WLK") || func_132("REHH3_WLK") || func_132("REHH4_WLK") || func_132("REHH5_WLK") || func_132("REHH1_SLR") || func_132("REHH4_SLR") || func_132("REHH1_SLW") || func_132("REHH2_SLW") || func_132("REHH3_SLW") || func_132("REHH4_SLW") || func_132("REHH5_SLW") || func_132("REHH1_OUT") || func_132("REHH2_GETOUT") || func_132("REHH3_GETOUT") || func_132("REHH5_GETOUT") || func_132("REHH1_JACK") || func_132("REHH2_JACK") || func_132("REHH3_JACK") || func_132("REHH5_JACK") || func_132("REHH1_GUN") || func_132("REHH2_SHOOT") || func_132("REHH3_SHOOT") || func_132("REHH5_SHOO") || func_132("REHH1_1HOUR") || func_132("REHH2_1HOUR") || func_132("REHH1_HHOUR") || func_132("REHH2_HHOUR") || func_132("REHH1_CRASH") || func_132("REHH1_WAY") || func_132("REHH2_NEAR") || func_132("REHH3_NEAR") || func_132("REHH5_NEAR") || func_132("REHH2_CULT") || func_132("REHH3_CULT") || func_132("REHH5_CULT"))
		return true;

	return false;
}

BOOL func_132(char* sParam0) // Position - 0x530C (21260)
{
	var string2;

	if (func_61())
	{
		TEXT_LABEL_COPY(&string2, { func_130() }, 4);
	
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &string2))
			return true;
	}

	return false;
}

BOOL func_133(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x5334 (21300)
{
	func_23(uParam0, 145, sParam1, iParam5, iParam6, 0);

	if (iParam4 > 7)
		if (iParam4 < 12)
			iParam4 = 7;

	Global_22449 = false;
	Global_22456 = 0;
	Global_22451 = 0;
	Global_23433 = 0;
	Global_23435 = 0;
	Global_23439 = 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23446, sParam3, 24);
	Global_2883585 = 0;
	return func_2(sParam2, iParam4, false);
}

BOOL func_134() // Position - 0x5388 (21384)
{
	if (iLocal_58 == 5)
		if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
					return true;
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
			if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
				return true;

	return false;
}

void func_135() // Position - 0x549B (21659)
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_148)
		{
			iLocal_150 = MISC::GET_GAME_TIMER();
			bLocal_148 = true;
		}
		else
		{
			iLocal_152 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_152 = 0;
		iLocal_151 = 0;
		bLocal_148 = false;
		bLocal_149 = false;
	}

	if (iLocal_152 - iLocal_150 > 3000 && iLocal_152 - iLocal_151 > 6000)
	{
		if (!func_61())
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_SLR", 4, 0, 0, 0);
		
			iLocal_151 = iLocal_152;
		}
	}

	if (iLocal_152 - iLocal_150 > 50000 && !bLocal_149)
	{
		func_129(false);
		func_55();
		BUILTIN::WAIT(0);
	
		if (!func_61())
		{
			if (iLocal_58 == 1)
			{
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 2)
			{
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 3)
			{
				if (!PED::IS_PED_INJURED(pedLocal_83))
					if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(pedLocal_83))
						TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
			
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 5)
			{
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_SLW", 4, 0, 0, 0);
			}
		
			bLocal_149 = true;
		}
	}

	if (iLocal_152 - iLocal_150 > 60000 && bLocal_149)
	{
		if (!PED::IS_PED_INJURED(pedLocal_83))
		{
			AUDIO::STOP_PED_SPEAKING(pedLocal_83, true);
		
			if (PED::IS_PED_IN_GROUP(pedLocal_83))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uLocal_91, 200f, 200f, 200f, false, true, 0))
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_83, uLocal_91, 1f, -1, 1048576000, 0, 1193033728);
					else
						TASK::TASK_WANDER_STANDARD(pedLocal_83, 1193033728, 0);
				
					if (iLocal_58 == 1)
						TASK::TASK_SMART_FLEE_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				
					PED::SET_PED_KEEP_TASK(pedLocal_83, true);
					PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
					func_60();
				}
			}
		}
	}

	return;
}

void func_136() // Position - 0x5665 (22117)
{
	if (!PED::IS_PED_INJURED(pedLocal_83))
	{
		if (PED::IS_PED_ON_FOOT(pedLocal_83))
		{
			if (!bLocal_145)
			{
				iLocal_146 = MISC::GET_GAME_TIMER();
				bLocal_145 = true;
			}
			else
			{
				iLocal_147 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			bLocal_145 = false;
		}
	}

	if (iLocal_147 - iLocal_146 > 90000)
	{
		func_129(false);
		func_55();
		BUILTIN::WAIT(0);
	
		if (iLocal_58 == 1)
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_WLK", 4, 0, 0, 0);
		else if (iLocal_58 == 2)
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_WLK", 4, 0, 0, 0);
		else if (iLocal_58 == 3)
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_WLK", 4, 0, 0, 0);
		else if (iLocal_58 == 5)
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_WLK", 4, 0, 0, 0);
	
		if (!PED::IS_PED_INJURED(pedLocal_83))
		{
			AUDIO::STOP_PED_SPEAKING(pedLocal_83, true);
		
			if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uLocal_91, 200f, 200f, 200f, false, true, 0))
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_83, uLocal_91, 1f, -1, 1048576000, 0, 1193033728);
			else
				TASK::TASK_WANDER_STANDARD(pedLocal_83, 1193033728, 0);
		
			if (iLocal_58 == 1)
				TASK::TASK_SMART_FLEE_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
		
			PED::SET_PED_KEEP_TASK(pedLocal_83, true);
		
			if (PED::IS_PED_IN_GROUP(pedLocal_83))
				PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
		
			func_60();
		}
	}

	return;
}

void func_137() // Position - 0x57A5 (22437)
{
	if (!PED::IS_PED_INJURED(pedLocal_83))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_VEHICLE(pedLocal_83, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_119))
					blLocal_119 = func_70(pedLocal_83, false, 145);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_81))
					HUD::REMOVE_BLIP(&blLocal_81);
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_81))
					blLocal_81 = func_138(uLocal_91, true);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_119))
					HUD::REMOVE_BLIP(&blLocal_119);
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(blLocal_119))
		{
			blLocal_119 = func_70(pedLocal_83, false, 145);
		}
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_91, 50f, 50f, 50f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			if (!HUD::DOES_BLIP_EXIST(blLocal_81))
				blLocal_81 = func_138(uLocal_91, true);
		else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_91, 50f, 50f, 50f, false, true, 0))
			if (HUD::DOES_BLIP_EXIST(blLocal_81))
				HUD::REMOVE_BLIP(&blLocal_81);
	}

	return;
}

Blip func_138(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x58DB (22747)
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

void func_139() // Position - 0x5907 (22791)
{
	if (!PED::IS_PED_INJURED(pedLocal_83))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, true) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_83, 5f, 5f, 5f, false, true, 0))
		{
			if (func_141())
			{
				func_57(0);
				bLocal_123 = false;
			}
		}
		else if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(pedLocal_83))
		{
			if (func_61() && !bLocal_123)
			{
				func_57(1);
				bLocal_123 = true;
			}
		}
	
		if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(pedLocal_83))
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(pedLocal_83, false);
	
		if (func_140("REHH3_CHT3_7"))
			TASK::TASK_USE_MOBILE_PHONE(pedLocal_83, true, 1);
	
		if (func_140("REHH3_CHT6_5"))
			TASK::TASK_USE_MOBILE_PHONE(pedLocal_83, false, 1);
	
		if (func_140("REHH3_CHT8_3"))
			TASK::TASK_USE_MOBILE_PHONE(pedLocal_83, true, 1);
	
		if (func_132("REHH3_CHT8M") || func_132("REHH3_CHT8F") || func_132("REHH3_CHT8T"))
			TASK::TASK_USE_MOBILE_PHONE(pedLocal_83, false, 1);
	}

	return;
}

BOOL func_140(char* sParam0) // Position - 0x59F2 (23026)
{
	var string2;

	if (func_61())
	{
		TEXT_LABEL_COPY(&string2, { func_67() }, 4);
	
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &string2))
			return true;
	}

	return false;
}

BOOL func_141() // Position - 0x5A1A (23066)
{
	if (Global_23453 == 1)
		return true;

	return false;
}

void func_142() // Position - 0x5A31 (23089)
{
	if (!PED::IS_PED_INJURED(pedLocal_83))
	{
		if (iLocal_58 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(pedLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!func_132("REHH1_CRASH"))
						{
							func_129(false);
							func_55();
							BUILTIN::WAIT(0);
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_CRASH", 4, 0, 0, 0);
						}
					}
				}
			}
		}
	
		if (!bLocal_142)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) && PED::IS_PED_IN_VEHICLE(pedLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					func_129(false);
					func_55();
					BUILTIN::WAIT(0);
				
					if (!func_61())
					{
						if (iLocal_58 == 1)
						{
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_OUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 2)
						{
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 3)
						{
							if (!PED::IS_PED_INJURED(pedLocal_83))
								if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(pedLocal_83))
									TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
						
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 5)
						{
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_GETOUT", 4, 0, 0, 0);
						}
					
						bLocal_142 = true;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(pedLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				bLocal_142 = false;
		}
	
		if (!bLocal_143)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_129(false);
				func_55();
				BUILTIN::WAIT(0);
			
				if (!func_61())
				{
					if (iLocal_58 == 1)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_JACK", 4, 0, 0, 0);
					else if (iLocal_58 == 2)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_JACK", 4, 0, 0, 0);
					else if (iLocal_58 == 3)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_JACK", 4, 0, 0, 0);
					else if (iLocal_58 == 5)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_JACK", 4, 0, 0, 0);
				
					bLocal_143 = true;
				}
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			bLocal_143 = false;
		}
	
		if (!bLocal_144)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_129(false);
				func_55();
				BUILTIN::WAIT(0);
			
				if (!func_61())
				{
					if (iLocal_58 == 1)
					{
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_GUN", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						if (!PED::IS_PED_INJURED(pedLocal_83))
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(pedLocal_83))
								TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
					
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_SHOOT", 4, 0, 0, 0);
					}
					else
					{
						iLocal_58 == 5;
					}
				
					bLocal_144 = true;
				}
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			bLocal_144 = false;
		}
	}

	return;
}

void func_143() // Position - 0x5CF5 (23797)
{
	if (func_145(uLocal_91))
	{
		func_129(false);
		func_55();
		BUILTIN::WAIT(0);
	
		if (iLocal_58 == 1)
		{
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_WAY", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 2)
		{
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			if (!PED::IS_PED_INJURED(pedLocal_83))
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(pedLocal_83))
					TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
		
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CULT", 4, 0, 0, 0);
		}
	}

	if (func_144())
	{
		func_129(false);
		func_55();
		BUILTIN::WAIT(0);
	
		if (iLocal_58 == 1)
		{
		}
		else if (iLocal_58 == 2)
		{
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			if (!PED::IS_PED_INJURED(pedLocal_83))
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(pedLocal_83))
					TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
		
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_NEAR", 4, 0, 0, 0);
		}
	}

	return;
}

BOOL func_144() // Position - 0x5E18 (24088)
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
	{
		if (func_59())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_33349)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_33349 = true;
				
					if (!Global_33348)
					{
						Global_33348 = true;
						return true;
					}
				}
			}
			else if (Global_33349)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_33349 = false;
			}
		}
	}

	return false;
}

BOOL func_145(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x5E93 (24211)
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
	{
		if (func_59() && !Global_33347)
		{
			if (fLocal_45 == -1f)
				fLocal_45 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0);
		
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0) > fLocal_45 + 200f || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_33347 = true;
				return true;
			}
		}
	}

	return false;
}

void func_146() // Position - 0x5F20 (24352)
{
	if (!func_131())
		func_129(true);

	if (!func_61())
	{
		switch (iLocal_106)
		{
			case 0:
				if (iLocal_58 == 1)
					iLocal_108 = MISC::GET_GAME_TIMER();
				else if (iLocal_58 == 2)
					iLocal_108 = MISC::GET_GAME_TIMER();
				else if (iLocal_58 == 3)
					iLocal_108 = MISC::GET_GAME_TIMER() + 2000;
				else if (iLocal_58 == 5)
					iLocal_108 = MISC::GET_GAME_TIMER();
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 1:
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_58 == 1)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_CHT", 4, 0, 0, 0);
					else if (iLocal_58 == 2)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT", 4, 0, 0, 0);
					else if (iLocal_58 == 3)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT", 4, 0, 0, 0);
					else if (iLocal_58 == 5)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHT", 4, 0, 0, 0);
				
					iLocal_106 = iLocal_106 + 1;
				}
				break;
		
			case 2:
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_58 == 1)
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_ASKM", 4, 0, 0, 0);
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_ASKF", 4, 0, 0, 0);
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_ASKT", 4, 0, 0, 0);
					else if (iLocal_58 == 2)
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHTm2", 4, 0, 0, 0);
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHTf2", 4, 0, 0, 0);
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHTt2", 4, 0, 0, 0);
					else if (iLocal_58 == 3)
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHTM", 4, 0, 0, 0);
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHTF", 4, 0, 0, 0);
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHTT", 4, 0, 0, 0);
					else if (iLocal_58 == 5)
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_RESPM", 4, 0, 0, 0);
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_RESPF", 4, 0, 0, 0);
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
							if (!bLocal_110)
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_RESPT", 4, 0, 0, 0);
				
					iLocal_106 = iLocal_106 + 1;
				}
				break;
		
			case 3:
				if (iLocal_58 == 1)
					iLocal_108 = MISC::GET_GAME_TIMER();
				else if (iLocal_58 == 2)
					iLocal_108 = MISC::GET_GAME_TIMER();
				else if (iLocal_58 == 3)
					iLocal_108 = MISC::GET_GAME_TIMER() + 500;
				else if (iLocal_58 == 5)
					iLocal_108 = MISC::GET_GAME_TIMER();
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 4:
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_58 == 1)
					{
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_CHT2", 4, 0, 0, 0);
						iLocal_106 = iLocal_106 + 1;
					}
					else if (iLocal_58 == 2)
					{
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT2", 4, 0, 0, 0);
						iLocal_106 = iLocal_106 + 1;
					}
					else if (iLocal_58 == 3)
					{
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT2", 4, 0, 0, 0);
						iLocal_106 = iLocal_106 + 1;
					}
					else if (iLocal_58 == 5)
					{
						if (bLocal_110 && !bLocal_112)
						{
							if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_OKM", 4, 0, 0, 0);
							else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_OKF", 4, 0, 0, 0);
							else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_OKT", 4, 0, 0, 0);
						
							iLocal_106 = iLocal_106 + 1;
						}
					}
				}
				break;
		
			case 5:
				if (iLocal_58 == 1)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_RESPM", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_RESPF", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_RESPT", 4, 0, 0, 0);
				else if (iLocal_58 == 2)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_pchatm", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_pchatf", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_pchatt", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT2M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT2F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT2T", 4, 0, 0, 0);
				else if (iLocal_58 == 5)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT1", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 6:
				if (iLocal_58 == 1)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_CHAT", 4, 0, 0, 0);
				else if (iLocal_58 == 2)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT3", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT3", 4, 0, 0, 0);
				else if (iLocal_58 == 5)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT1b", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT1c", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT1d", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 7:
				if (iLocal_58 == 1)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_CHATb", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_CHATc", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_CHATd", 4, 0, 0, 0);
				else if (iLocal_58 == 2)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT3M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT3F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT3T", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT3M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT3F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT3T", 4, 0, 0, 0);
				else if (iLocal_58 == 5)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT2", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 8:
				if (iLocal_58 == 1)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_CHATe", 4, 0, 0, 0);
				else if (iLocal_58 == 2)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT4", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT4", 4, 0, 0, 0);
				else if (iLocal_58 == 5)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT2b", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT2c", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT2d", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 9:
				if (iLocal_58 == 2)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT4M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT4F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT4T", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT4M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT4F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT4T", 4, 0, 0, 0);
				else if (iLocal_58 == 5)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT2e", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 10:
				if (iLocal_58 == 2)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT5", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT5", 4, 0, 0, 0);
				else if (iLocal_58 == 5)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT2f", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT2g", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT2h", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 11:
				if (iLocal_58 == 2)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT5M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT5F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT5T", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT5M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT5F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT5T", 4, 0, 0, 0);
				else if (iLocal_58 == 5)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT3", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 12:
				if (iLocal_58 == 2)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT6", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT6", 4, 0, 0, 0);
				else if (iLocal_58 == 5)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT3b", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT3c", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT3d", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 13:
				if (iLocal_58 == 2)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT6M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT6F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT6T", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT6M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT6F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT6T", 4, 0, 0, 0);
				else if (iLocal_58 == 5)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT4", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 14:
				if (iLocal_58 == 2)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT7", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT7", 4, 0, 0, 0);
				else if (iLocal_58 == 5)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT4b", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT4c", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHAT4d", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 15:
				if (iLocal_58 == 2)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT7M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT7F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT7T", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT7M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT7F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT7T", 4, 0, 0, 0);
				else if (iLocal_58 == 5)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_RUNOUT", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 16:
				if (iLocal_58 == 2)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT8", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT8", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 17:
				if (iLocal_58 == 3)
					iLocal_108 = MISC::GET_GAME_TIMER() + 700;
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 18:
				if (iLocal_58 == 2)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT8M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT8F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT8T", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT8M", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT8F", 4, 0, 0, 0);
					else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT8T", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 19:
				if (iLocal_58 == 2)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_CHT9", 4, 0, 0, 0);
				else if (iLocal_58 == 3)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT9", 4, 0, 0, 0);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 20:
				if (iLocal_58 == 3)
					iLocal_108 = MISC::GET_GAME_TIMER() + 300;
			
				iLocal_106 = iLocal_106 + 1;
				break;
		
			case 21:
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_58 == 3)
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT9M", 4, 0, 0, 0);
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT9F", 4, 0, 0, 0);
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT9T", 4, 0, 0, 0);
				
					iLocal_106 = iLocal_106 + 1;
				}
				break;
		
			case 22:
				if (!PED::IS_PED_INJURED(pedLocal_83))
					TASK::TASK_PLAY_ANIM(pedLocal_83, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0, false, false, false);
			
				iLocal_106 = iLocal_106 + 1;
				break;
		}
	}

	return;
}

void func_147() // Position - 0x6DDB (28123)
{
	if (iLocal_58 != 3)
	{
		if (func_150())
		{
			BUILTIN::SETTIMERA(0);
		
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_91, 3f, 3f, 2f, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uLocal_91, Global_22, false, true, 0))
				{
					if (func_149(true, false, true))
					{
						func_148();
					
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f + 2f, 3, false);
					
						TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
						iLocal_57 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_110)
	{
		if (PED::IS_PED_INJURED(pedLocal_84))
			iLocal_57 = 7;
	
		if (!PED::IS_PED_INJURED(pedLocal_83))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 805.501f, 1269.9261f, 361.4025f, 25f, 30f, 2f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, 824.8886f, 1275.6705f, 359.4312f, Global_22, true, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0))
			{
				func_55();
				BUILTIN::WAIT(0);
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_CHT10", 4, 0, 0, 0);
			
				if (!PED::IS_PED_INJURED(pedLocal_83) && !PED::IS_PED_INJURED(pedLocal_84))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_84, -1, SLF_EXTEND_YAW_LIMIT | 2048, 4);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 5f, 1f, 1073741824, 0);
						TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0, false, false, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_84, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					}
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f + 2f, 2, false);
			
				BUILTIN::SETTIMERA(0);
				iLocal_57 = 6;
			}
		}
	}

	return;
}

void func_148() // Position - 0x6FC2 (28610)
{
	Global_21308 = 0;
	func_22();
	return;
}

BOOL func_149(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6FD2 (28626)
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

BOOL func_150() // Position - 0x70B7 (28855)
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			if (!PED::IS_PED_INJURED(pedLocal_83))
				if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_83, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					return true;

	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_91, 50f, 50f, 50f, false, true, 0) && !PED::IS_PED_INJURED(pedLocal_83))
		if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false))
			return true;

	return false;
}

void func_151() // Position - 0x7138 (28984)
{
	if (bLocal_112)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_84))
		{
			if (PED::IS_PED_INJURED(pedLocal_84) || !ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_84, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_91) < 250f || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_95) < 250f || bLocal_114)
			{
				if (HUD::DOES_BLIP_EXIST(blLocal_120))
					HUD::REMOVE_BLIP(&blLocal_120);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_121))
					HUD::REMOVE_BLIP(&blLocal_121);
			
				if (!PED::IS_PED_INJURED(pedLocal_84))
				{
					AUDIO::PLAY_PAIN(pedLocal_84, 6, 0, 0);
					TASK::TASK_SMART_FLEE_PED(pedLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_84);
				}
			
				func_55();
				BUILTIN::WAIT(0);
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_CHT2", 4, 0, 0, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_84);
			
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_169))
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_169);
			
				bLocal_112 = false;
			}
			else
			{
				if (!bLocal_115)
				{
					if (!func_61())
					{
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_COMM", 4, 0, 0, 0);
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_COMF", 4, 0, 0, 0);
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_COMT", 4, 0, 0, 0);
					
						bLocal_115 = true;
					}
				}
			
				if (!PED::IS_PED_INJURED(pedLocal_84))
				{
					func_159(&pedLocal_84, &blLocal_120, &veLocal_169, &blLocal_121);
					func_158(&pedLocal_84, &blLocal_120, &veLocal_169, &blLocal_121);
					func_152(veLocal_169, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_183, &uLocal_186, &uLocal_188, &fLocal_187, &uLocal_191, 0f, 0f, 0f, 1500, 0f);
				
					if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_84, PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, false, true, 0))
					{
						if (iLocal_107 < MISC::GET_GAME_TIMER())
						{
							if (!func_61())
							{
								if (_GET_RANDOM_BOOL())
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_FHT", 4, 0, 0, 0);
								else
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_FEAR", 4, 0, 0, 0);
							
								iLocal_107 = MISC::GET_GAME_TIMER() + 8000;
							}
						}
					
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							if (!func_132("REHH5_SHO"))
							{
								func_55();
								BUILTIN::WAIT(0);
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
					
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(pedLocal_84))
							if (PED::IS_PED_ON_FOOT(pedLocal_84) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
								bLocal_114 = true;
					}
				
					if (!bLocal_113 && !PED::IS_PED_INJURED(pedLocal_84))
					{
						if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_84, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
						{
							TASK::TASK_COMBAT_PED(pedLocal_84, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_55();
							BUILTIN::WAIT(0);
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_GRM", 4, 0, 0, 0);
							bLocal_113 = true;
						}
					}
				}
			}
		}
	}

	return;
}

void func_152(Vehicle veParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, float fParam9, int iParam10, float fParam11) // Position - 0x7419 (29721)
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam1) && veParam0 != veParam1 && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(veParam1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(veParam1)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(veParam1)) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(veParam1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(veParam1) && func_157(veParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(veParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam2, *uParam3, fParam7) };
				*uParam3 = func_156(ENTITY::GET_ENTITY_COORDS(veParam0, true), ENTITY::GET_ENTITY_COORDS(veParam1, true));
				func_155(veParam1, uParam4, uParam5);
			}
		
			if (!ENTITY::IS_ENTITY_OCCLUDED(veParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if (MISC::GET_GAME_TIMER() - *uParam6 > iParam10)
			{
				if (func_154(veParam0, veParam1, true) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(veParam1, true), *uParam2, true) > 20f)
				{
					if (!func_153(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, false, false, false, false, false, false, 0);
							ENTITY::SET_ENTITY_COORDS(veParam0, *uParam2, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(veParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veParam0, 1084227584);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(veParam0, 10f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(veParam0, true, true, false);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
						else
						{
							offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uLocal_188, fLocal_187, fParam7) };
						
							if (!func_153(offsetFromCoordAndHeadingInWorldCoords))
							{
								if (!CAM::IS_SPHERE_VISIBLE(offsetFromCoordAndHeadingInWorldCoords, 2f))
								{
									MISC::CLEAR_AREA_OF_PEDS(offsetFromCoordAndHeadingInWorldCoords, 1.5f, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(offsetFromCoordAndHeadingInWorldCoords, 3f, false, false, false, false, false, false, 0);
									ENTITY::SET_ENTITY_COORDS(veParam0, offsetFromCoordAndHeadingInWorldCoords, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(veParam0, fLocal_187);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veParam0, 1084227584);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(veParam0, 10f);
									VEHICLE::SET_VEHICLE_ENGINE_ON(veParam0, true, true, false);
									*uParam6 = MISC::GET_GAME_TIMER();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}

	return;
}

BOOL func_153(float fParam0, var uParam1, var uParam2) // Position - 0x764E (30286)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

float func_154(Vehicle veParam0, Vehicle veParam1, BOOL bParam2) // Position - 0x7678 (30328)
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

void func_155(Vehicle veParam0, var uParam1, var uParam2) // Position - 0x76D6 (30422)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		{
			*uParam1 = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
			*uParam2 = ENTITY::GET_ENTITY_HEADING(veParam0);
		}
	}

	return;
}

float func_156(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x7706 (30470)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D(fParam3 - uParam0, fParam3.f_1 - uParam0.f_1);
}

BOOL func_157(Vehicle veParam0) // Position - 0x7720 (30496)
{
	Ped pedInVehicleSeat;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, -1, false))
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
					if (!ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat, false))
						return true;
			}
		}
	}

	return false;
}

void func_158(var uParam0, Blip* pblParam1, var uParam2, Blip* pblParam3) // Position - 0x776B (30571)
{
	int num;
	float blipCoords;
	float entityCoords;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, false))
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*uParam0, *uParam2, false))
				{
					if (HUD::DOES_BLIP_EXIST(*pblParam1))
						HUD::REMOVE_BLIP(pblParam1);
				
					num = 1;
				}
				else if (!HUD::DOES_BLIP_EXIST(*pblParam1))
				{
					*pblParam1 = func_70(*uParam0, true, 145);
				}
			}
		
			if (!HUD::DOES_BLIP_EXIST(*pblParam3))
			{
				if (num == 1)
				{
					*pblParam3 = func_138(ENTITY::GET_ENTITY_COORDS(*uParam2, true), false);
					HUD::SET_BLIP_COLOUR(*pblParam3, 1);
					HUD::SET_BLIP_PRIORITY(*pblParam3, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*pblParam3, "BLIP_VEH" /*Vehicle*/);
				}
			}
			else
			{
				blipCoords = { HUD::GET_BLIP_COORDS(*pblParam3) };
				entityCoords = { ENTITY::GET_ENTITY_COORDS(*uParam2, true) };
				blipCoords = blipCoords + (((entityCoords - blipCoords) / 1f) * BUILTIN::TIMESTEP());
				blipCoords.f_1 = blipCoords.f_1 + (((entityCoords.f_1 - blipCoords.f_1) / 1f) * BUILTIN::TIMESTEP());
				blipCoords.f_2 = blipCoords.f_2 + (((entityCoords.f_2 - blipCoords.f_2) / 1f) * BUILTIN::TIMESTEP());
				HUD::SET_BLIP_COORDS(*pblParam3, blipCoords);
			
				if (num == 0)
					HUD::REMOVE_BLIP(pblParam3);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*pblParam3))
				HUD::REMOVE_BLIP(pblParam3);
		
			if (!PED::IS_PED_INJURED(*uParam0))
				if (!HUD::DOES_BLIP_EXIST(*pblParam1))
					*pblParam1 = func_70(*uParam0, true, 145);
		}
	}

	return;
}

void func_159(Ped* ppedParam0, Blip* pblParam1, Vehicle* pveParam2, Blip* pblParam3) // Position - 0x78B6 (30902)
{
	int num;
	int num2;

	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (PED::IS_PED_INJURED(*ppedParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*pblParam1))
				HUD::REMOVE_BLIP(pblParam1);
		
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
		}
		else
		{
			num = 1;
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(*ppedParam0, false))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*pveParam2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*pveParam2, false))
					if (PED::IS_PED_IN_VEHICLE(*ppedParam0, *pveParam2, false))
						num2 = 1;
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(*pveParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*pveParam2, false))
		{
			if (num == 1 || num2 == 1)
			{
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*pveParam2);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*pveParam2);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*pveParam2, 0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam2);
			
				if (HUD::DOES_BLIP_EXIST(*pblParam3))
					HUD::REMOVE_BLIP(pblParam3);
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*pveParam2);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*pveParam2);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*pveParam2, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam2);
		
			if (HUD::DOES_BLIP_EXIST(*pblParam3))
				HUD::REMOVE_BLIP(pblParam3);
		}
	}

	return;
}

void func_160() // Position - 0x79A7 (31143)
{
	if (!PED::IS_PED_INJURED(pedLocal_84))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.0767f, 382.48657f, 77f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedLocal_84, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.0767f, 382.48657f, 77f, false, true, 0))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.71484f, 1270.1383f, 359.28552f, 6f, joaat("prop_fnclink_03gate1"), false))
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.71484f, 1270.1383f, 359.28552f, false, 0f, false);
		
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.29623f, 6f, joaat("prop_fnclink_03gate1"), false))
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.29623f, false, 0f, false);
		}
		else
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.71484f, 1270.1383f, 359.28552f, 6f, joaat("prop_fnclink_03gate1"), false))
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.71484f, 1270.1383f, 359.28552f, true, 0f, false);
		
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.29623f, 6f, joaat("prop_fnclink_03gate1"), false))
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.29623f, true, 0f, false);
		}
	}

	return;
}

void func_161() // Position - 0x7AFF (31487)
{
	if (!bLocal_110)
	{
		if (iLocal_58 == 3)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_102, 200f, 200f, 200f, false, true, 0))
			{
				STREAMING::REQUEST_MODEL(hLocal_99);
				STREAMING::REQUEST_CLIP_SET("move_m@brave");
			
				if (STREAMING::HAS_MODEL_LOADED(hLocal_99) && STREAMING::HAS_CLIP_SET_LOADED("move_m@brave"))
				{
					pedLocal_84 = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_99, uLocal_102, fLocal_105, true, true);
					PED::SET_PED_COMPONENT_VARIATION(pedLocal_84, PV_COMP_HEAD, 2, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(pedLocal_84, PV_COMP_UPPR, 0, 2, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_84, true);
					PED::SET_PED_CONFIG_FLAG(pedLocal_84, 42, true);
					PED::SET_PED_DIES_WHEN_INJURED(pedLocal_84, true);
					PED::SET_PED_MOVEMENT_CLIPSET(pedLocal_84, "move_m@brave", 1048576000);
					PED::SET_PED_CONFIG_FLAG(pedLocal_84, 137, true);
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_193, 4, pedLocal_84, sLocal_178, 0, 1);
					TASK::TASK_PLAY_ANIM(pedLocal_84, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0, false, false, false);
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_84, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 4);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_99);
					bLocal_110 = true;
				}
			}
		}
		else if (iLocal_58 == 5)
		{
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_77, true) > 320f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_VEHICLE(pedLocal_83, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), MISC::GET_RANDOM_INT_IN_RANGE(2, 5), &uLocal_64, 1, 1077936128, 0))
						{
							if (!CAM::IS_SPHERE_VISIBLE(uLocal_64, 7f) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_64) < 110f)
							{
								STREAMING::REQUEST_MODEL(hLocal_99);
							
								if (STREAMING::HAS_MODEL_LOADED(hLocal_99))
								{
									func_62();
									BUILTIN::WAIT(0);
								
									if (func_164(&uLocal_193, sLocal_176, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !PED::IS_PED_INJURED(pedLocal_83))
									{
										veLocal_169 = VEHICLE::CREATE_VEHICLE(hLocal_100, uLocal_64, func_162(uLocal_64, _GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), 1), true, true, false);
										VEHICLE::SET_VEHICLE_COLOURS(veLocal_169, 134, 134);
										VEHICLE::SET_VEHICLE_DIRT_LEVEL(veLocal_169, 0f);
										pedLocal_84 = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_169, PED_TYPE_MISSION, hLocal_99, -1, true, true);
										PED::SET_PED_COMPONENT_VARIATION(pedLocal_84, PV_COMP_HEAD, 1, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(pedLocal_84, PV_COMP_HAIR, 1, 0, 0);
										PED::SET_PED_CONFIG_FLAG(pedLocal_84, 42, true);
										AUDIO::STOP_PED_SPEAKING(pedLocal_84, true);
										_CONVERSATION_INITIALIZE_ACTOR(&uLocal_193, 4, pedLocal_84, sLocal_178, 0, 1);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_169, 1084227584);
										TASK::TASK_VEHICLE_MISSION_PED_TARGET(pedLocal_84, veLocal_169, pedLocal_83, 6, 60f, 786468, -1f, -1f, true);
										TASK::TASK_COMBAT_PED(pedLocal_84, PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_KEEP_TASK(pedLocal_84, true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_99);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_100);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(veLocal_169, ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) + 15f);
									
										if (HUD::DOES_BLIP_EXIST(blLocal_81))
											HUD::REMOVE_BLIP(&blLocal_81);
									
										func_62();
									
										while (func_61())
										{
											BUILTIN::WAIT(0);
										}
									
										func_133(&uLocal_193, sLocal_176, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
										bLocal_112 = true;
										bLocal_110 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

float func_162(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x7DBF (32191)
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - uParam0;
	num3 = fParam3.f_1 - uParam0.f_1;

	if (num3 != 0f)
		num = MISC::ATAN2(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x7E24 (32292)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

BOOL func_164(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x7E37 (32311)
{
	func_23(uParam0, 145, sParam1, iParam5, iParam6, 0);

	if (iParam4 > 7)
		if (iParam4 < 12)
			iParam4 = 7;

	Global_22449 = false;
	Global_22456 = 0;
	Global_22451 = 0;
	Global_23433 = 1;
	Global_23435 = 0;
	Global_23439 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_23446, sParam3, 24);
	Global_2883585 = 0;
	return func_2(sParam2, iParam4, false);
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x7E8B (32395)
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

void func_166() // Position - 0x7F26 (32550)
{
	if (!bLocal_174 && !func_61())
	{
		if (iLocal_172 == 6 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM1", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 6 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM2", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 7 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM3", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 7 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM4", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 8 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM5", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 8 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM6", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 9 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM7", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 9 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM8", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 10 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM9", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 10 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM10", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 11 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM11", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 11 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM12", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 12 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM13", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 12 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM14", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 13 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM15", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 13 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM16", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 14 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM17", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 14 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM18", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 15 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM19", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 15 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM20", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 16 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM21", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 16 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM22", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 17 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM23", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 17 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM24", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 18 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM25", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 18 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM26", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 19 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM27", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 19 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM28", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 20 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM29", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 20 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM30", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 21 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM31", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 21 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM32", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 22 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM33", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 22 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM34", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	
		if (iLocal_172 == 23 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
				_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TIM35", 4, 0, 0, 0);
		
			bLocal_174 = true;
		}
	}

	return;
}

void func_167() // Position - 0x852E (34094)
{
	iLocal_153 = func_172(func_173()) * 1000;
	iLocal_153 = iLocal_153 + (func_171(func_173()) * 1000 * 60);

	if (!bLocal_162)
		if (iLocal_172 >= 24 && iLocal_153 < 150000 || iLocal_172 >= 24 && iLocal_153 < 150000)
			func_168((((iLocal_172 * 1000 * 60) - (func_171(func_173()) * 1000 * 60)) + ((iLocal_171 * 1000) - (func_172(func_173()) * 1000))) - 1440000, "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		else
			func_168(((iLocal_172 * 1000 * 60) - (func_171(func_173()) * 1000 * 60)) + ((iLocal_171 * 1000) - (func_172(func_173()) * 1000)), "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	else if (iLocal_172 >= 24 && iLocal_153 < 150000 || iLocal_172 >= 24 && iLocal_153 < 150000)
		func_168((((iLocal_172 * 1000 * 60) - (func_171(func_173()) * 1000 * 60)) + ((iLocal_171 * 1000) - (func_172(func_173()) * 1000))) - 1440000, "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	else
		func_168(((iLocal_172 * 1000 * 60) - (func_171(func_173()) * 1000 * 60)) + ((iLocal_171 * 1000) - (func_172(func_173()) * 1000)), "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);

	if (iLocal_172 == func_171(func_173()) + 1 && iLocal_171 == func_172(func_173()) || iLocal_172 >= 24 && iLocal_153 < 150000 && iLocal_172 == func_171(func_173()) + 25 && iLocal_171 == func_172(func_173()))
	{
		if (!bLocal_161)
		{
			if (!func_132("REHH1_1HOUR") && !func_132("REHH4_1HOUR"))
				func_129(false);
		
			func_55();
			BUILTIN::WAIT(0);
		
			if (!func_61())
			{
				if (iLocal_58 == 1)
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_1HOUR", 4, 0, 0, 0);
			
				bLocal_161 = true;
			}
		}
	}

	if (iLocal_171 == 30)
	{
		if (iLocal_172 == func_171(func_173()) && iLocal_171 == func_172(func_173()) + 30 || iLocal_172 >= 24 && iLocal_153 < 150000 && iLocal_172 == func_171(func_173()) + 24 && iLocal_171 == func_172(func_173()) + 30)
		{
			if (!bLocal_162)
			{
				if (!func_132("REHH1_HHOUR") && !func_132("REHH4_HHOUR"))
					func_129(false);
			
				func_55();
				BUILTIN::WAIT(0);
			
				if (!func_61())
				{
					if (iLocal_58 == 1)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_HHOUR", 4, 0, 0, 0);
				
					bLocal_162 = true;
				}
			
				if (!bLocal_163)
				{
					iLocal_175 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_175, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_175, "countdown_fadein", 35f);
					AUDIO::START_AUDIO_SCENE("TIMER_SCENE");
					bLocal_163 = true;
				}
			}
		}
	
		if (iLocal_172 == func_171(func_173()) && iLocal_171 == func_172(func_173()) + 5 || iLocal_172 >= 24 && iLocal_153 < 150000 && iLocal_172 == func_171(func_173()) + 24 && iLocal_171 == func_172(func_173()) + 5)
		{
			if (!bLocal_164)
			{
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_175, "countdown_fast", 1f);
				bLocal_164 = true;
			}
		}
	}

	if (iLocal_171 == 0)
	{
		if (iLocal_172 == func_171(func_173()) + 1 && iLocal_171 == func_172(func_173()) - 30 || iLocal_172 >= 24 && iLocal_153 < 150000 && iLocal_172 == func_171(func_173()) + 25 && iLocal_171 == func_172(func_173()) - 30)
		{
			if (!bLocal_162)
			{
				if (!func_132("REHH1_HHOUR") && !func_132("REHH4_HHOUR"))
					func_129(false);
			
				func_55();
				BUILTIN::WAIT(0);
			
				if (!func_61())
				{
					if (iLocal_58 == 1)
						_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_HHOUR", 4, 0, 0, 0);
				
					bLocal_162 = true;
				}
			
				if (!bLocal_163)
				{
					iLocal_175 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_175, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_175, "countdown_fadein", 35f);
					AUDIO::START_AUDIO_SCENE("TIMER_SCENE");
					bLocal_163 = true;
				}
			}
		}
	
		if (iLocal_172 == func_171(func_173()) + 1 && iLocal_171 == func_172(func_173()) - 55 || iLocal_172 >= 24 && iLocal_153 < 150000 && iLocal_172 == func_171(func_173()) + 25 && iLocal_171 == func_172(func_173()) - 55)
		{
			if (!bLocal_164)
			{
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_175, "countdown_fast", 1f);
				bLocal_164 = true;
			}
		}
	}

	if (iLocal_172 >= 24 && iLocal_153 < 150000)
		if (iLocal_172 == func_171(func_173()) + 24 && iLocal_171 == func_172(func_173()))
			bLocal_173 = true;
	else if (iLocal_172 == func_171(func_173()) && iLocal_171 == func_172(func_173()))
		bLocal_173 = true;

	if (bLocal_173)
	{
		func_55();
		BUILTIN::WAIT(0);
		AUDIO::STOP_SOUND(iLocal_175);
		AUDIO::STOP_AUDIO_SCENE("TIMER_SCENE");
	
		if (iLocal_58 == 1)
			_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_TLATE", 4, 0, 0, 0);
	
		if (!PED::IS_PED_INJURED(pedLocal_83))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(pedLocal_83, false), 10.5f + 2f, 2, false);
				TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_83, 1, 0);
				PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_81))
					HUD::REMOVE_BLIP(&blLocal_81);
			}
		}
	
		iLocal_57 = 9;
	}

	return;
}

void func_168(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x8AEC (35564)
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_170(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1675264.f_1 = 1;
		func_169(7, num);
		Global_1675264.f_4714[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1675264.f_4714.f_11[num /*16*/], sParam1, 64);
		Global_1675264.f_4714.f_172[num] = iParam2;
		Global_1675264.f_4714.f_216[num] = iParam3;
		Global_1675264.f_4714.f_183[num] = iParam4;
		Global_1675264.f_4714.f_194[num] = iParam5;
		Global_1675264.f_4714.f_249[num] = iParam6;
		Global_1675264.f_4714.f_260[num] = iParam7;
		Global_1675264.f_4714.f_205[num] = iParam8;
		Global_1675264.f_4714.f_314[num] = iParam9;
		Global_1675264.f_4714.f_325[num] = iParam10;
		Global_1675264.f_4714.f_357[num] = iParam11;
		Global_1675264.f_4714.f_238[num] = iParam12;
		Global_1675264.f_4714.f_271[num] = iParam13;
		Global_1675264.f_4714.f_368[num] = iParam14;
		Global_1675264.f_4714.f_379[num] = iParam15;
		Global_1675264.f_4714.f_390[num] = iParam16;
		Global_1675264.f_4714.f_227[num] = iParam17;
	}

	return;
}

void func_169(int iParam0, int iParam1) // Position - 0x8C49 (35913)
{
	MISC::SET_BIT(&Global_1675264.f_7064[iParam0], iParam1);
	return;
}

BOOL func_170(int iParam0, int iParam1) // Position - 0x8C62 (35938)
{
	return IS_BIT_SET(Global_1675264.f_7064[iParam0], iParam1);
}

int func_171(int iParam0) // Position - 0x8C78 (35960)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_172(int iParam0) // Position - 0x8C8B (35979)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_173() // Position - 0x8C9E (35998)
{
	var unk;

	func_183(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_182(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_181(&unk, CLOCK::GET_CLOCK_HOURS());
	func_176(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_175(&unk, CLOCK::GET_CLOCK_MONTH());
	func_174(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_174(var uParam0, int iParam1) // Position - 0x8CE4 (36068)
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

void func_175(var uParam0, int iParam1) // Position - 0x8D6A (36202)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_176(var uParam0, int iParam1) // Position - 0x8D9D (36253)
{
	int num;
	int num2;

	num = func_180(*uParam0);
	num2 = func_178(*uParam0);

	if (iParam1 < 1 || iParam1 > func_177(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_177(int iParam0, int iParam1) // Position - 0x8DEE (36334)
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

int func_178(int iParam0) // Position - 0x8E90 (36496)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_179(BOOL bParam0, var uParam1, var uParam2) // Position - 0x8EB2 (36530)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_180(int iParam0) // Position - 0x8EC9 (36553)
{
	return iParam0 & 15;
}

void func_181(var uParam0, int iParam1) // Position - 0x8ED6 (36566)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_182(var uParam0, int iParam1) // Position - 0x8F10 (36624)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_183(var uParam0, int iParam1) // Position - 0x8F4B (36683)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_184() // Position - 0x8F87 (36743)
{
	if (!PED::IS_PED_INJURED(pedLocal_83))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(pedLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (HUD::DOES_BLIP_EXIST(blLocal_119))
					HUD::REMOVE_BLIP(&blLocal_119);
			
				if (!PED::IS_PED_IN_GROUP(pedLocal_83))
				{
					PED::SET_PED_AS_GROUP_MEMBER(pedLocal_83, func_128());
					PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_83, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_83, 0);
				}
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_81))
					blLocal_81 = func_138(uLocal_91, true);
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR && !func_58() && iLocal_58 != 1 && iLocal_58 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(blLocal_82))
					{
						blLocal_82 = func_138(uLocal_95, false);
						HUD::SET_BLIP_SPRITE(blLocal_82, BLIP_ALTRUIST);
						func_185();
					}
				}
			
				if (iLocal_58 == 1)
				{
					if (!func_61())
					{
						if (iLocal_58 == 1)
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_WTA", 4, 0, 0, 0);
					
						iLocal_172 = func_171(func_173()) + 2;
					
						if (func_172(func_173()) >= 30)
						{
							iLocal_171 = 0;
							iLocal_172 = iLocal_172 + 1;
						}
						else
						{
							iLocal_171 = 30;
						}
					
						bLocal_109 = true;
						BUILTIN::SETTIMERA(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 2)
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_WTB", 4, 0, 0, 0))
					{
						bLocal_109 = true;
						BUILTIN::SETTIMERA(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 3)
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_WTC", 4, 0, 0, 0))
					{
						bLocal_109 = true;
						BUILTIN::SETTIMERA(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 5)
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_WTE", 4, 0, 0, 0))
					{
						bLocal_109 = true;
						BUILTIN::SETTIMERA(0);
						iLocal_57 = 4;
					}
				}
			}
		}
	}

	return;
}

void func_185() // Position - 0x9120 (37152)
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
	{
		if (!Global_33346)
		{
			_DISPLAY_HELP_TEXT("CULT_BLIP_HELP" /*Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~*/, -1);
			Global_33346 = true;
		}
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x9144 (37188)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_187() // Position - 0x915B (37211)
{
	Ped pedInVehicleSeat;

	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_STO", 4, 0, 0, 0);
					iLocal_108 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500);
				}
			
				if (PED::IS_PED_FACING_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 24f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
					{
						fLocal_182 = func_154(pedLocal_83, PLAYER::PLAYER_PED_ID(), true);
					
						if (fLocal_182 > 5f)
							fLocal_182 = fLocal_182 - 1f;
						else
							fLocal_182 = fLocal_182 - 0.5f;
					
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 2f, 1073741824, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						iLocal_138 = iLocal_138 + 1;
					}
				}
				else if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 12f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
				{
					fLocal_182 = func_154(pedLocal_83, PLAYER::PLAYER_PED_ID(), true);
					fLocal_182 = fLocal_182 - 0.25f;
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 2f, 1073741824, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = iLocal_138 + 1;
				}
			}
			break;
	
		case 1:
			if (HUD::DOES_BLIP_EXIST(blLocal_119))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_119, true);
		
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_83, 5000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
					{
						if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 25f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
						{
							if (PED::IS_PED_FACING_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 4);
							
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_85, 0, false))
									TASK::TASK_OPEN_VEHICLE_DOOR(0, veLocal_85, -1, 0, 2f);
							
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
								iLocal_138 = iLocal_138 + 1;
							}
						}
					}
				}
				else if (!bLocal_139)
				{
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 7000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
				
					if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_NOV", 4, 0, 0, 0))
						bLocal_139 = true;
				}
			}
			break;
	
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (!PED::IS_PED_INJURED(pedLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
				{
					if (func_154(pedLocal_83, veLocal_85, true) < 25f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
					{
						if (ENTITY::GET_ENTITY_SPEED(veLocal_85) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(pedLocal_83))
							{
								if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_ASK", 4, 0, 0, 0))
								{
									BUILTIN::SETTIMERA(0);
									iLocal_138 = iLocal_138 + 1;
								}
							}
						}
					}
				}
			}
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(veLocal_85) < 2.5f && func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 25f)
						{
							if (!func_61())
							{
								if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_RPA", 4, 0, 0, 0);
									BUILTIN::SETTIMERA(0);
									iLocal_138 = iLocal_138 + 1;
								}
								else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_RPB", 4, 0, 0, 0);
									BUILTIN::SETTIMERA(0);
									iLocal_138 = iLocal_138 + 1;
								}
								else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_RPC", 4, 0, 0, 0);
									BUILTIN::SETTIMERA(0);
									iLocal_138 = iLocal_138 + 1;
								}
							}
						}
					}
				}
			}
			break;
	
		case 4:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 25f)
				{
					if (func_134())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(pedLocal_83, func_128());
								PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_83, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_83, 0);
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
								TASK::TASK_ENTER_VEHICLE(pedLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 2f, 1, 0, 0);
								func_188();
								iLocal_138 = iLocal_138 + 1;
							}
							else
							{
								pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
							
								if (PED::IS_PED_INJURED(pedInVehicleSeat))
								{
									iLocal_56 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(pedLocal_83);
									PED::SET_PED_AS_GROUP_MEMBER(pedLocal_83, func_128());
									PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_83, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_83, 1);
									TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
									iLocal_138 = iLocal_138 + 1;
								}
							}
						}
					}
					else if (!bLocal_140)
					{
						if (!func_61())
						{
							if (!func_194())
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_VEH", 4, 0, 0, 0);
							else
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_VEH2", 4, 0, 0, 0);
						
							bLocal_140 = true;
						}
					}
				}
			}
			break;
	
		case 5:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (func_134())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(pedLocal_83);
						bLocal_109 = true;
						iLocal_57 = 3;
					}
					else if (BUILTIN::TIMERA() > 60000)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_SLW", 4, 0, 0, 0))
							func_60();
					}
				
					if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) > 100f)
						func_60();
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = 4;
				}
			}
			break;
	}

	return;
}

void func_188() // Position - 0x979C (38812)
{
	if (!func_58())
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			Global_33344 = 1;

	return;
}

float func_189(Ped pedParam0, Ped pedParam1) // Position - 0x97B8 (38840)
{
	return func_154(pedParam0, pedParam1, true);
}

void func_190() // Position - 0x97C9 (38857)
{
	Ped pedInVehicleSeat;

	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (PED::IS_PED_FACING_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 12f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
					{
						fLocal_182 = func_154(pedLocal_83, PLAYER::PLAYER_PED_ID(), true);
					
						if (fLocal_182 > 5f)
							fLocal_182 = fLocal_182 - 1f;
						else
							fLocal_182 = fLocal_182 - 0.5f;
					
						TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2.5f, 0f, 0f, 1f, 5000, 1036831949, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						iLocal_138 = iLocal_138 + 1;
					}
				}
				else if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 8f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
				{
					fLocal_182 = func_154(pedLocal_83, PLAYER::PLAYER_PED_ID(), true);
					fLocal_182 = fLocal_182 - 0.25f;
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 1f, 1073741824, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = iLocal_138 + 1;
				}
			}
			break;
	
		case 1:
			if (HUD::DOES_BLIP_EXIST(blLocal_119))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_119, true);
		
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_83, 5000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
					{
						if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 10f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
						{
							if (PED::IS_PED_FACING_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 4);
							
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_85, 0, false))
									TASK::TASK_OPEN_VEHICLE_DOOR(0, veLocal_85, -1, 0, 1f);
							
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
								iLocal_138 = iLocal_138 + 1;
							}
						}
					}
				}
				else if (!bLocal_139)
				{
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 7000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
				
					if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_NOV", 4, 0, 0, 0))
						bLocal_139 = true;
				}
			}
			break;
	
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (!PED::IS_PED_INJURED(pedLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
				{
					if (func_154(pedLocal_83, veLocal_85, true) < 13f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
					{
						if (ENTITY::GET_ENTITY_SPEED(veLocal_85) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(pedLocal_83))
							{
								if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_ASK", 4, 0, 0, 0))
								{
									BUILTIN::SETTIMERA(0);
									iLocal_138 = iLocal_138 + 1;
								}
							}
						}
					}
				}
			}
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(pedLocal_83))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(veLocal_85) < 2.5f && func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
						{
							if (!func_61())
							{
								if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_RPA", 4, 0, 0, 0);
									BUILTIN::SETTIMERA(0);
									iLocal_138 = iLocal_138 + 1;
								}
								else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_RPB", 4, 0, 0, 0);
									BUILTIN::SETTIMERA(0);
									iLocal_138 = iLocal_138 + 1;
								}
								else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_RPC", 4, 0, 0, 0);
									BUILTIN::SETTIMERA(0);
									iLocal_138 = iLocal_138 + 1;
								}
							}
						}
					}
				}
			}
			break;
	
		case 4:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (func_134())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(pedLocal_83, func_128());
								PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_83, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_83, 0);
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
								TASK::TASK_ENTER_VEHICLE(pedLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0, 0);
								func_188();
								iLocal_138 = iLocal_138 + 1;
							}
							else
							{
								pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
							
								if (PED::IS_PED_INJURED(pedInVehicleSeat))
								{
									iLocal_56 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(pedLocal_83);
									PED::SET_PED_AS_GROUP_MEMBER(pedLocal_83, func_128());
									PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_83, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_83, 1);
									TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
									iLocal_138 = iLocal_138 + 1;
								}
							}
						}
					}
					else if (!bLocal_140)
					{
						if (!func_61())
						{
							if (!func_194())
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_VEH", 4, 0, 0, 0);
							else
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_VEH2", 4, 0, 0, 0);
						
							bLocal_140 = true;
						}
					}
				}
			}
			break;
	
		case 5:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (func_134())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedLocal_83, 1f);
				
					if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(pedLocal_83);
						bLocal_109 = true;
						iLocal_57 = 3;
					}
					else if (BUILTIN::TIMERA() > 60000)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_SLW", 4, 0, 0, 0))
							func_60();
					}
				
					if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) > 100f)
						func_60();
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = 4;
				}
			}
			break;
	}

	return;
}

void func_191() // Position - 0x9DE9 (40425)
{
	Ped pedInVehicleSeat;

	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (PED::IS_PED_FACING_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 12f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
					{
						fLocal_182 = func_154(pedLocal_83, PLAYER::PLAYER_PED_ID(), true);
					
						if (fLocal_182 > 5f)
							fLocal_182 = fLocal_182 - 1f;
						else
							fLocal_182 = fLocal_182 - 0.5f;
					
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 1f, 1073741824, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						iLocal_138 = iLocal_138 + 1;
					}
				}
				else if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 8f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
				{
					fLocal_182 = func_154(pedLocal_83, PLAYER::PLAYER_PED_ID(), true);
					fLocal_182 = fLocal_182 - 0.25f;
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 1f, 1073741824, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = iLocal_138 + 1;
				}
			}
			break;
	
		case 1:
			if (HUD::DOES_BLIP_EXIST(blLocal_119))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_119, true);
		
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_83, 5000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
					{
						if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 10f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
						{
							if (PED::IS_PED_FACING_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
							
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_85, 0, false))
									TASK::TASK_OPEN_VEHICLE_DOOR(0, veLocal_85, -1, 0, 1f);
							
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
								func_55();
								BUILTIN::WAIT(0);
								iLocal_138 = iLocal_138 + 1;
							}
						}
					}
				}
				else if (!bLocal_139)
				{
					TASK::CLEAR_PED_TASKS(pedLocal_83);
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 7000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
				
					if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_NOV", 4, 0, 0, 0))
						bLocal_139 = true;
				}
			}
			break;
	
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (!PED::IS_PED_INJURED(pedLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
				{
					if (func_154(pedLocal_83, veLocal_85, true) < 13f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
					{
						if (ENTITY::GET_ENTITY_SPEED(veLocal_85) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(pedLocal_83))
							{
								if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_ASK", 4, 0, 0, 0))
								{
									BUILTIN::SETTIMERA(0);
									iLocal_138 = iLocal_138 + 1;
								}
							}
						}
					}
				}
			}
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(pedLocal_83))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(veLocal_85) < 2.5f && func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
						{
							if (!func_61())
							{
								if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_RPA", 4, 0, 0, 0);
									BUILTIN::SETTIMERA(0);
									iLocal_138 = iLocal_138 + 1;
								}
								else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_RPB", 4, 0, 0, 0);
									BUILTIN::SETTIMERA(0);
									iLocal_138 = iLocal_138 + 1;
								}
								else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
								{
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_RPC", 4, 0, 0, 0);
									BUILTIN::SETTIMERA(0);
									iLocal_138 = iLocal_138 + 1;
								}
							}
						}
					}
				}
			}
			break;
	
		case 4:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (func_134())
					{
						veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(pedLocal_83, func_128());
								PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_83, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_83, 0);
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
								TASK::TASK_ENTER_VEHICLE(pedLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0, 0);
								func_188();
								iLocal_138 = iLocal_138 + 1;
							}
							else
							{
								pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
							
								if (PED::IS_PED_INJURED(pedInVehicleSeat))
								{
									iLocal_56 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(pedLocal_83);
									PED::SET_PED_AS_GROUP_MEMBER(pedLocal_83, func_128());
									PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_83, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_83, 1);
									TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
									iLocal_138 = iLocal_138 + 1;
								}
							}
						}
					}
					else if (!bLocal_140)
					{
						if (!func_61())
						{
							if (!func_194())
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_VEH", 4, 0, 0, 0);
							else
								_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_VEH2", 4, 0, 0, 0);
						
							bLocal_140 = true;
						}
					}
				}
			}
			break;
	
		case 5:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (!bLocal_101)
					if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
						if (!func_61())
							if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_INA", 4, 0, 0, 0))
								bLocal_101 = true;
			
				if (func_134())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedLocal_83, 1f);
				
					if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(pedLocal_83);
						bLocal_109 = true;
						iLocal_57 = 3;
					}
					else if (BUILTIN::TIMERA() > 60000)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_SLW", 4, 0, 0, 0))
							func_60();
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = 4;
				}
			
				if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) > 100f)
					func_60();
			}
			break;
	}

	return;
}

void func_192() // Position - 0xA446 (42054)
{
	Ped pedInVehicleSeat;

	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 12f || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 30f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_83, 5000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
				
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
							TASK::TASK_LOOK_AT_ENTITY(0, veLocal_85, 30000, SLF_FAST_TURN_RATE | 4 | 2048, 2);
							TASK::TASK_PLAY_ANIM(pedLocal_83, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						}
					
						iLocal_138 = iLocal_138 + 1;
					}
					else if (!bLocal_139)
					{
						TASK::CLEAR_PED_TASKS(pedLocal_83);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_FAST_TURN_RATE | 4 | 2048, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					
						if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_NOV", 8, 0, 0, 0))
							bLocal_139 = true;
					}
				}
			}
			break;
	
		case 1:
			if (HUD::DOES_BLIP_EXIST(blLocal_119))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_119, true);
		
			if (func_134())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				
					if (ENTITY::GET_ENTITY_SPEED(veLocal_85) < 10f)
					{
						if (!PED::IS_PED_INJURED(pedLocal_83))
						{
							if (PED::IS_PED_FACING_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 150f))
							{
								fLocal_182 = func_154(pedLocal_83, PLAYER::PLAYER_PED_ID(), true);
							
								if (fLocal_182 > 5f)
									fLocal_182 = fLocal_182 - 0.5f;
								else
									fLocal_182 = fLocal_182 - 0.25f;
							
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, veLocal_85, 10000, SLF_FAST_TURN_RATE | 4 | 2048, 2);
							
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_85, 0, false))
									TASK::TASK_OPEN_VEHICLE_DOOR(0, veLocal_85, -1, 0, 1f);
							
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
								iLocal_138 = iLocal_138 + 1;
							}
							else
							{
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, veLocal_85, 10000, SLF_FAST_TURN_RATE | 4 | 2048, 2);
								iLocal_138 = iLocal_138 + 1;
							}
						}
					}
				}
			}
			else if (!bLocal_139)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_FAST_TURN_RATE | 4 | 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				
					if (!func_61())
					{
						if (!func_194())
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_VEH", 4, 0, 0, 0);
						else
							_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_VEH2", 4, 0, 0, 0);
					
						bLocal_139 = true;
					}
				}
			}
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(pedLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(veLocal_85) < 2.5f)
				{
					func_148();
					iLocal_138 = iLocal_138 + 1;
				}
			}
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(pedLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(veLocal_85) < 2.5f)
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_ASK", 4, 0, 0, 0))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
						BUILTIN::SETTIMERA(0);
						iLocal_138 = iLocal_138 + 1;
					}
				}
			}
			break;
	
		case 4:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(pedLocal_83))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				}
			
				if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						veLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_85, false))
						{
							if (ENTITY::GET_ENTITY_SPEED(veLocal_85) < 2.5f)
							{
								if (!func_61())
								{
									if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
									{
										_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_RPA", 4, 0, 0, 0);
										BUILTIN::SETTIMERA(0);
										iLocal_138 = iLocal_138 + 1;
									}
									else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
									{
										_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_RPB", 4, 0, 0, 0);
										BUILTIN::SETTIMERA(0);
										iLocal_138 = iLocal_138 + 1;
									}
									else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
									{
										_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_RPC", 4, 0, 0, 0);
										BUILTIN::SETTIMERA(0);
										iLocal_138 = iLocal_138 + 1;
									}
								}
							}
						}
					}
					else if (!bLocal_139)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_NOV", 8, 0, 0, 0))
							bLocal_139 = true;
					}
				}
			}
			break;
	
		case 5:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_134())
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(pedLocal_83, func_128());
								PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_83, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_83, 0);
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
								TASK::TASK_ENTER_VEHICLE(pedLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0, 0);
								iLocal_138 = iLocal_138 + 1;
							}
							else
							{
								pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
							
								if (PED::IS_PED_INJURED(pedInVehicleSeat))
								{
									iLocal_56 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(pedLocal_83);
									PED::SET_PED_AS_GROUP_MEMBER(pedLocal_83, func_128());
									PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_83, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_83, 1);
									TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
									iLocal_138 = iLocal_138 + 1;
								}
							}
						}
						else if (!bLocal_140)
						{
							if (!func_61())
							{
								if (!func_194())
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_VEH", 4, 0, 0, 0);
								else
									_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_VEH2", 4, 0, 0, 0);
							
								bLocal_140 = true;
							}
						}
					}
					else if (!bLocal_139)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_NOV", 8, 0, 0, 0))
							bLocal_139 = true;
					}
				}
			}
			break;
	
		case 6:
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				if (func_134())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedLocal_83, 1f);
				
					if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(pedLocal_83);
						bLocal_109 = true;
						iLocal_57 = 3;
					}
					else if (BUILTIN::TIMERA() > 60000)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_NOH", 4, 0, 0, 0))
							func_60();
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = 5;
				}
			
				if (func_189(pedLocal_83, PLAYER::PLAYER_PED_ID()) > 100f)
					func_60();
			}
			break;
	}

	return;
}

void func_193() // Position - 0xAA86 (43654)
{
	int num;

	if (iLocal_156 - iLocal_155 > 1000)
		veLocal_170 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(pedLocal_83, false), 18f, 0, 4);

	if (veLocal_170 != 0)
	{
		iLocal_154 = iLocal_154 + 1;
		iLocal_155 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
			num = 1;
		else
			num = 2;
	
		if (iLocal_154 > num)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_170, true, false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_170, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_170, false))
				{
					if (iLocal_58 == 1)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH1_STO", 4, 0, 0, 0))
							if (!PED::IS_PED_INJURED(pedLocal_83))
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, veLocal_170, 3000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					
						iLocal_180 = MISC::GET_GAME_TIMER();
						iLocal_154 = 0;
					}
					else if (iLocal_58 == 2)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH2_STO", 4, 0, 0, 0))
							if (!PED::IS_PED_INJURED(pedLocal_83))
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, veLocal_170, 3000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					
						iLocal_180 = MISC::GET_GAME_TIMER();
						iLocal_154 = 0;
					}
					else if (iLocal_58 == 3)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH3_STO", 4, 0, 0, 0))
							if (!PED::IS_PED_INJURED(pedLocal_83))
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, veLocal_170, 3000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					
						iLocal_180 = MISC::GET_GAME_TIMER();
						iLocal_154 = 0;
					}
					else if (iLocal_58 == 5)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_193, sLocal_176, "REHH5_STO", 4, 0, 0, 0))
							if (!PED::IS_PED_INJURED(pedLocal_83))
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_83, veLocal_170, 3000, SLF_EXTEND_YAW_LIMIT | 2048, 2);
					
						iLocal_180 = MISC::GET_GAME_TIMER();
						iLocal_154 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_181 = MISC::GET_GAME_TIMER();
		
			if (iLocal_181 - iLocal_180 > 3500)
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_170);
		
			veLocal_170 = 0;
		}
	}

	return;
}

BOOL func_194() // Position - 0xAC0E (44046)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true))
			if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
				return true;

	return false;
}

void func_195() // Position - 0xAC79 (44153)
{
	if (iLocal_58 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83))
		{
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3024.265f, 660.8264f, 1.1982f, -3140.8235f, 803.707f, 35.131f, 93f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(pedLocal_83) || func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 12f)
				{
					func_196();
					iLocal_57 = 2;
				}
			}
		}
	}
	else if (iLocal_58 == 2)
	{
		if (!bLocal_165)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_88, 100f, 100f, 100f, false, true, 0) && !PED::IS_PED_INJURED(pedLocal_83))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 159.6669f, 4413.1973f, 74.8915f, 1f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, 1, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				bLocal_165 = true;
			}
		}
	}
	else if (iLocal_58 == 5)
	{
		if (!bLocal_165)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_88, 200f, 200f, 200f, false, true, 0) && !PED::IS_PED_INJURED(pedLocal_83))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 3);
				TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, false, false, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -343.4485f, 2826.2224f, 54.5089f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -365.6846f, 2809.1584f, 48.7646f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -382.4106f, 2818.3838f, 44.078f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -370.3838f, 2866.6768f, 41.0979f, 2f, -1, 0.25f, 1, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_83, iLocal_87);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				bLocal_165 = true;
			}
		}
	}

	if (iLocal_58 != 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83))
		{
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_83, 95f, 95f, 50f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(pedLocal_83) || func_189(PLAYER::PLAYER_PED_ID(), pedLocal_83) < 12f)
				{
					func_196();
					iLocal_57 = 2;
				}
			}
		}
	}

	return;
}

void func_196() // Position - 0xAF72 (44914)
{
	if (HUD::DOES_BLIP_EXIST(blLocal_118))
		HUD::REMOVE_BLIP(&blLocal_118);

	if (!PED::IS_PED_INJURED(pedLocal_83))
	{
		if (!HUD::DOES_BLIP_EXIST(blLocal_119))
		{
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
			{
				blLocal_119 = func_70(pedLocal_83, false, 145);
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_119, false);
			}
		}
	
		if (!func_229())
			func_204(true);
	
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_193, 3, pedLocal_83, sLocal_177, 0, 1);
	}

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_193, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_193, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_193, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);

	return;
}

void func_197() // Position - 0xB026 (45094)
{
	func_199(39, true);
	func_199(40, true);
	func_199(41, true);
	func_199(42, true);
	func_199(43, true);
	func_199(44, true);
	pedLocal_83 = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_98, uLocal_88, fLocal_94, true, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_98);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_83, true);
	PED::SET_PED_CAN_BE_TARGETTED(pedLocal_83, false);
	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_83, sLocal_179);
	PED::SET_PED_CONFIG_FLAG(pedLocal_83, 137, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_83, 206, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_83, 1024, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_83, 65536, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_83, 2, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_83, BF_AlwaysFlee, true);
	PED::SET_PED_MAX_TIME_IN_WATER(pedLocal_83, 60f);
	PED::SET_PED_LOD_MULTIPLIER(pedLocal_83, 5f);

	if (iLocal_58 == 1)
	{
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_HEAD, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_HAIR, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_UPPR, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_LOWR, 0, 2, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(hLocal_100, true);
		veLocal_169 = VEHICLE::CREATE_VEHICLE(hLocal_100, -3088.0684f, 730.4819f, 20.3028f, 332.2996f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_169, 150f);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(veLocal_169, 4, false, false);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_169, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_100);
		TASK::TASK_PLAY_ANIM(pedLocal_83, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, false, false, false);
	}
	else if (iLocal_58 == 2)
	{
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_HEAD, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_HAIR, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_UPPR, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_LOWR, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_ACCS, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_DECL, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(pedLocal_83, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_91 - { 20f, 50f, 50f }, uLocal_91 + { 20f, 50f, 50f }, false, true, true, true, 1);
		func_198(true);
	}
	else if (iLocal_58 == 3)
	{
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_HEAD, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_HAIR, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_UPPR, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_LOWR, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_83, PV_COMP_ACCS, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(pedLocal_83, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_91 - { 20f, 50f, 50f }, uLocal_91 + { 20f, 50f, 50f }, false, true, true, true, 1);
	}
	else
	{
		iLocal_58 == 5;
	}

	iLocal_57 = 1;
	return;
}

void func_198(BOOL bParam0) // Position - 0xB28B (45707)
{
	if (bParam0)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113218, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_113212 = 1;
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113218, "NULL", 24);
		Global_113212 = 0;
	}

	return;
}

void func_199(int iParam0, BOOL bParam1) // Position - 0xB2B7 (45751)
{
	if (bParam1)
		if (!func_203(iParam0, 2, true))
			func_202(iParam0, 2, true);
	else if (func_203(iParam0, 2, true))
		func_200(iParam0, 2, true);

	return;
}

void func_200(int iParam0, int iParam1, BOOL bParam2) // Position - 0xB2EE (45806)
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
		if (func_32() == 0)
		{
			address = func_52(func_201(iParam0), -1);
			MISC::CLEAR_BIT(&address, iParam1);
			func_49(func_201(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_114162.f_668[iParam0], iParam1);
	}

	return;
}

int func_201(int iParam0) // Position - 0xB35E (45918)
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

void func_202(int iParam0, int iParam1, BOOL bParam2) // Position - 0xB715 (46869)
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
		if (func_32() == 0)
		{
			address = func_52(func_201(iParam0), -1);
			MISC::SET_BIT(&address, iParam1);
			func_49(func_201(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_114162.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_203(int iParam0, int iParam1, BOOL bParam2) // Position - 0xB785 (46981)
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_101765.f_1421[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_32() == 0)
			return IS_BIT_SET(func_52(func_201(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114162.f_668[iParam0], iParam1);

	return false;
}

int func_204(BOOL bParam0) // Position - 0xB7E5 (47077)
{
	if (func_207())
	{
		Global_114152 = true;
		Global_114149 = MISC::GET_GAME_TIMER();
	
		if (func_37(Global_114151))
			func_205(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_37(Global_114151))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_205(int iParam0) // Position - 0xB838 (47160)
{
	switch (iParam0)
	{
		case 0:
			if (Global_114162.f_24999.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_206(iParam0), -1);
					Global_114162.f_24999.f_2 = Global_114162.f_24999.f_2 + 1;
					MISC::SET_BIT(&Global_114158, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_114158, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_206(iParam0), -1);
					Global_114162.f_24999.f_3 = Global_114162.f_24999.f_3 + 1;
					MISC::SET_BIT(&Global_114158, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_114158, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_206(iParam0), -1);
					Global_114162.f_24999.f_4 = Global_114162.f_24999.f_4 + 1;
					MISC::SET_BIT(&Global_114158, 2);
				}
			}
			break;
	}

	return;
}

char* func_206(int iParam0) // Position - 0xB913 (47379)
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

BOOL func_207() // Position - 0xB955 (47445)
{
	switch (func_208(&Global_33165, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_208(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xB98B (47499)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99166.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_212(0))
			return 0;
	
		Global_44163 = Global_44163 + 1;
		*uParam0 = Global_44163;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23848.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44199 = iParam2;
		Global_44161 = *uParam0;
		Global_44162 = iParam4;
		Global_44160 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44160 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44160; i = i + 1)
			{
				if (Global_44166[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44161 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44160 == 8)
			return 0;
	
		Global_44163 = Global_44163 + 1;
		*uParam0 = Global_44163;
		Global_44166[Global_44160 /*4*/] = Global_44163;
		Global_44166[Global_44160 /*4*/].f_1 = iParam1;
		Global_44166[Global_44160 /*4*/].f_2 = iParam2;
		Global_44166[Global_44160 /*4*/].f_3 = 0;
		Global_44160 = Global_44160 + 1;
	
		if (iParam4 != 0)
			func_209(uParam0, iParam4);
	}

	return 2;
}

void func_209(var uParam0, int iParam1) // Position - 0xBAC2 (47810)
{
	int i;

	if (Global_44160 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44160; i = i + 1)
	{
		if (Global_44166[i /*4*/] == *uParam0)
			Global_44166[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0xBB11 (47889)
{
	return func_211(iParam0, Global_44199);
}

BOOL func_211(int iParam0, int iParam1) // Position - 0xBB22 (47906)
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

BOOL func_212(int iParam0) // Position - 0xBD03 (48387)
{
	if (Global_44199 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL func_213() // Position - 0xBD25 (48421)
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		return true;

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), true))
			return true;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				return true;
	
		if (!bLocal_112)
		{
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_83, true), 10f, true) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_83, true) - { 10f, 10f, 10f }, ENTITY::GET_ENTITY_COORDS(pedLocal_83, true) + { 10f, 10f, 10f }, false))
				return true;
		}
		else if (PED::IS_PED_INJURED(pedLocal_84) && ENTITY::DOES_ENTITY_EXIST(pedLocal_84))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_84, PLAYER::PLAYER_PED_ID(), true) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
			{
				if (!PED::IS_PED_INJURED(pedLocal_83))
					AUDIO::PLAY_PAIN(pedLocal_83, 6, 0, 0);
			
				return true;
			}
		}
	
		if (!PED::IS_PED_IN_GROUP(pedLocal_83) && PED::IS_PED_FACING_PED(pedLocal_83, PLAYER::PLAYER_PED_ID(), 90f) && ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_83, PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, false, true, 0))
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_83) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_83))
				return true;
	}

	return false;
}

void func_214() // Position - 0xBE7B (48763)
{
	STREAMING::REQUEST_MODEL(hLocal_98);
	STREAMING::REQUEST_ANIM_DICT("random@hitch_lift");

	if (iLocal_58 == 1 || iLocal_58 == 5)
		STREAMING::REQUEST_MODEL(hLocal_100);

	if (iLocal_58 == 1)
	{
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("timer", false, -1);
	}
	else if (iLocal_58 == 3)
	{
		STREAMING::REQUEST_ANIM_DICT("facials@gen_female@base");
	}

	if (STREAMING::HAS_MODEL_LOADED(hLocal_98) && STREAMING::HAS_ANIM_DICT_LOADED("random@hitch_lift"))
	{
		if (iLocal_58 == 1 || iLocal_58 == 5)
			if (STREAMING::HAS_MODEL_LOADED(hLocal_100))
				bLocal_59 = true;
		else if (iLocal_58 == 3)
			if (STREAMING::HAS_ANIM_DICT_LOADED("facials@gen_female@base"))
				bLocal_59 = true;
		else
			bLocal_59 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(hLocal_98);
		STREAMING::REQUEST_ANIM_DICT("random@hitch_lift");
	
		if (iLocal_58 == 1 || iLocal_58 == 5)
			STREAMING::REQUEST_MODEL(hLocal_100);
		else if (iLocal_58 == 3)
			STREAMING::REQUEST_ANIM_DICT("facials@gen_female@base");
	}

	return;
}

void func_215() // Position - 0xBF55 (48981)
{
	if (iLocal_58 == 1)
	{
		uLocal_88 = { -3086.0525f, 735.5091f, 20.4883f };
		fLocal_94 = 17.9234f;
		uLocal_91 = { -1053.3442f, -2539.3267f, 19.0394f };
		hLocal_98 = joaat("A_M_M_Business_01");
		sLocal_176 = "REHH1AU";
		sLocal_177 = "BUSINESSMAN";
		sLocal_179 = "BUSINESSMAN";
		hLocal_100 = joaat("schafter2");
	}
	else if (iLocal_58 == 2)
	{
		uLocal_88 = { 196.7701f, 4427.7573f, 72.2673f };
		fLocal_94 = 75.9173f;
		uLocal_91 = { 3328.8276f, 5154.456f, 17.2894f };
		hLocal_98 = joaat("A_F_Y_Hiker_01");
		sLocal_176 = "REHH2AU";
		sLocal_177 = "REHH2Hiker";
		sLocal_179 = "REHH2Hiker";
	}
	else if (iLocal_58 == 3)
	{
		uLocal_88 = { 2745.0264f, 4386.8267f, 47.8636f };
		fLocal_94 = 19.4143f;
		uLocal_91 = { 814.455f, 1274.7966f, 359.5112f };
		uLocal_102 = { 804.2382f, 1269.5895f, 359.3557f };
		fLocal_105 = 340.7372f;
		hLocal_98 = joaat("A_F_Y_Hipster_03");
		hLocal_99 = joaat("S_M_M_Security_01");
		sLocal_176 = "REHH3AU";
		sLocal_177 = "REHH3Hipster";
		sLocal_179 = "REHH3Hipster";
		sLocal_178 = "REHH3Security";
	}
	else if (iLocal_58 == 5)
	{
		uLocal_88 = { -324.0379f, 2818.034f, 58.4498f };
		fLocal_94 = 56.5422f;
		uLocal_91 = { -344.0339f, 634.4108f, 171.2902f };
		hLocal_98 = joaat("IG_Bride");
		hLocal_99 = joaat("A_M_Y_Business_01");
		sLocal_176 = "REHH5AU";
		sLocal_177 = "REHH5Bride";
		sLocal_179 = "REHH5Bride";
		sLocal_178 = "REHH5Groom";
		hLocal_100 = joaat("patriot");
	}

	bLocal_60 = true;
	return;
}

BOOL func_216() // Position - 0xC0DC (49372)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_42) < 75f * 75f)
			return true;
	
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_227())
			return false;
	}

	if (func_223())
		return true;

	if (func_217(100f, true) != -1)
		return true;

	return false;
}

int func_217(float fParam0, BOOL bParam1) // Position - 0xC162 (49506)
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
		if (func_15(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_42();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_114162.f_18578[num /*6*/], 2) && !IS_BIT_SET(Global_114162.f_18578[num /*6*/], 3))
				{
					func_218(num, &unk);
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

void func_218(int iParam0, var uParam1) // Position - 0xC213 (49683)
{
	switch (iParam0)
	{
		case 0:
			func_219(uParam1, "Abigail1", func_221(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_220(iParam0), 1, 0);
			break;
	
		case 1:
			func_219(uParam1, "Abigail2", func_221(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_220(iParam0), 1, 0);
			break;
	
		case 2:
			func_219(uParam1, "Barry1", func_221(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_220(iParam0), 1, 0);
			break;
	
		case 3:
			func_219(uParam1, "Barry2", func_221(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_220(iParam0), 1, 1);
			break;
	
		case 4:
			func_219(uParam1, "Barry3", func_221(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 5:
			func_219(uParam1, "Barry3A", func_221(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 6:
			func_219(uParam1, "Barry3C", func_221(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 7:
			func_219(uParam1, "Barry4", func_221(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_220(iParam0), 0, 0);
			break;
	
		case 8:
			func_219(uParam1, "Dreyfuss1", func_221(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 9:
			func_219(uParam1, "Epsilon1", func_221(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 10:
			func_219(uParam1, "Epsilon2", func_221(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_220(iParam0), 1, 0);
			break;
	
		case 11:
			func_219(uParam1, "Epsilon3", func_221(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 12:
			func_219(uParam1, "Epsilon4", func_221(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 13:
			func_219(uParam1, "Epsilon5", func_221(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_220(iParam0), 1, 0);
			break;
	
		case 14:
			func_219(uParam1, "Epsilon6", func_221(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 15:
			func_219(uParam1, "Epsilon7", func_221(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 16:
			func_219(uParam1, "Epsilon8", func_221(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_220(iParam0), 1, 0);
			break;
	
		case 17:
			func_219(uParam1, "Extreme1", func_221(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 18:
			func_219(uParam1, "Extreme2", func_221(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 19:
			func_219(uParam1, "Extreme3", func_221(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 20:
			func_219(uParam1, "Extreme4", func_221(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 21:
			func_219(uParam1, "Fanatic1", func_221(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_220(iParam0), 1, 0);
			break;
	
		case 22:
			func_219(uParam1, "Fanatic2", func_221(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_220(iParam0), 1, 0);
			break;
	
		case 23:
			func_219(uParam1, "Fanatic3", func_221(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_220(iParam0), 0, 1);
			break;
	
		case 24:
			func_219(uParam1, "Hao1", func_221(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_220(iParam0), 0, 1);
			break;
	
		case 25:
			func_219(uParam1, "Hunting1", func_221(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 26:
			func_219(uParam1, "Hunting2", func_221(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 27:
			func_219(uParam1, "Josh1", func_221(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_220(iParam0), 1, 0);
			break;
	
		case 28:
			func_219(uParam1, "Josh2", func_221(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_220(iParam0), 1, 1);
			break;
	
		case 29:
			func_219(uParam1, "Josh3", func_221(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_220(iParam0), 1, 1);
			break;
	
		case 30:
			func_219(uParam1, "Josh4", func_221(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_220(iParam0), 1, 0);
			break;
	
		case 31:
			func_219(uParam1, "Maude1", func_221(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 32:
			func_219(uParam1, "Minute1", func_221(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 33:
			func_219(uParam1, "Minute2", func_221(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 34:
			func_219(uParam1, "Minute3", func_221(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 35:
			func_219(uParam1, "MrsPhilips1", func_221(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 36:
			func_219(uParam1, "MrsPhilips2", func_221(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 37:
			func_219(uParam1, "Nigel1", func_221(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_220(iParam0), 1, 0);
			break;
	
		case 38:
			func_219(uParam1, "Nigel1A", func_221(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_220(iParam0), 1, 1);
			break;
	
		case 39:
			func_219(uParam1, "Nigel1B", func_221(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_220(iParam0), 1, 1);
			break;
	
		case 40:
			func_219(uParam1, "Nigel1C", func_221(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_220(iParam0), 1, 1);
			break;
	
		case 41:
			func_219(uParam1, "Nigel1D", func_221(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_220(iParam0), 1, 1);
			break;
	
		case 42:
			func_219(uParam1, "Nigel2", func_221(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_220(iParam0), 1, 1);
			break;
	
		case 43:
			func_219(uParam1, "Nigel3", func_221(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_220(iParam0), 1, 1);
			break;
	
		case 44:
			func_219(uParam1, "Omega1", func_221(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 45:
			func_219(uParam1, "Omega2", func_221(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 46:
			func_219(uParam1, "Paparazzo1", func_221(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 47:
			func_219(uParam1, "Paparazzo2", func_221(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 48:
			func_219(uParam1, "Paparazzo3", func_221(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 49:
			func_219(uParam1, "Paparazzo3A", func_221(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 50:
			func_219(uParam1, "Paparazzo3B", func_221(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 51:
			func_219(uParam1, "Paparazzo4", func_221(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 52:
			func_219(uParam1, "Rampage1", func_221(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 54:
			func_219(uParam1, "Rampage3", func_221(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_220(iParam0), 1, 0);
			break;
	
		case 55:
			func_219(uParam1, "Rampage4", func_221(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_220(iParam0), 1, 0);
			break;
	
		case 56:
			func_219(uParam1, "Rampage5", func_221(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_220(iParam0), 0, 0);
			break;
	
		case 53:
			func_219(uParam1, "Rampage2", func_221(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_220(iParam0), 1, 0);
			break;
	
		case 57:
			func_219(uParam1, "TheLastOne", func_221(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 58:
			func_219(uParam1, "Tonya1", func_221(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 59:
			func_219(uParam1, "Tonya2", func_221(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 60:
			func_219(uParam1, "Tonya3", func_221(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 61:
			func_219(uParam1, "Tonya4", func_221(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		case 62:
			func_219(uParam1, "Tonya5", func_221(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_220(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_219(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0xD388 (54152)
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

int func_220(int iParam0) // Position - 0xD419 (54297)
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

struct<2> func_221(int iParam0) // Position - 0xD75F (55135)
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_222(iParam0) };

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

struct<2> func_222(int iParam0) // Position - 0xD795 (55189)
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

BOOL func_223() // Position - 0xDBE0 (56288)
{
	if (func_226() && !func_227())
		return true;

	if (func_225() && func_224())
		return true;

	return false;
}

BOOL func_224() // Position - 0xDC12 (56338)
{
	return Global_113880 > 0;
}

BOOL func_225() // Position - 0xDC20 (56352)
{
	if (Global_98610 != -1)
		return true;

	return false;
}

BOOL func_226() // Position - 0xDC35 (56373)
{
	if (Global_98610 != -1)
		return IS_BIT_SET(Global_92476[Global_98610 /*34*/].f_15, 20);

	return false;
}

BOOL func_227() // Position - 0xDC58 (56408)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_228() // Position - 0xDC75 (56437)
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_223())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_227())
			return false;

	if (func_217(100f, true) != -1)
		return true;

	return false;
}

BOOL func_229() // Position - 0xDCD7 (56535)
{
	if (Global_114151 == func_46() && MISC::GET_RANDOM_EVENT_FLAG() && Global_114152)
		return true;

	return false;
}

void func_230(int iParam0) // Position - 0xDD02 (56578)
{
	if (iParam0 == -1)
		iParam0 = func_46();

	if (iParam0 == -1)
		return;

	func_232(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114148 = 0;
	func_231();
	return;
}

void func_231() // Position - 0xDD38 (56632)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_232(int iParam0) // Position - 0xDD75 (56693)
{
	Global_114151 = iParam0;
	return;
}

BOOL func_233(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xDD83 (56707)
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_152751)
		return false;

	if (iParam3 == -1)
		iParam3 = func_46();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_42 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_227())
				return false;
		}
	
		if (!Global_114162.f_9089)
			return false;
	
		if (func_27(false))
			return false;
	
		if (func_223())
			return false;
	
		if (func_260())
			return false;
	
		if (Global_114151 != -1)
			return false;
	
		if (func_15(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_217(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_42.f_2 > 50f)
				return false;
	
		if (!func_259(iParam3))
			return false;
	
		if (func_15(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_258(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_258(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_15(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_257(iParam3, iParam4, 145))
				return false;
	
		if (!func_256(Global_114162.f_24999.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_114153 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_255())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_246(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_245(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_245(0, 0))
			return false;
	
		if (Global_33252)
			return false;
	
		if (func_259(30) && !func_245(30, 0))
			if (iParam3 != 30)
				if (BUILTIN::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_15(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_114162.f_2367.f_539.f_2300[i /*3*/] };
				num = Global_114162.f_2367.f_539.f_2296[i];
			
				if (func_244(num))
					if (func_235(i))
						if (!func_234(vector, 0f, 0f, 0f, false))
							if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_234(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0xE11D (57629)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_235(eCharacter echParam0) // Position - 0xE164 (57700)
{
	int num;

	num = Global_114162.f_2367.f_539.f_2296[echParam0];
	return func_236(num);
}

BOOL func_236(int iParam0) // Position - 0xE185 (57733)
{
	return func_237(iParam0, 1);
}

int func_237(int iParam0, int iParam1) // Position - 0xE194 (57748)
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_244(iParam0))
		return 0;

	func_238(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_238(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xE1E7 (57831)
{
	func_239(func_173(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_239(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xE205 (57861)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_243(iParam0, iParam1))
	{
		num = func_180(iParam1);
		num2 = func_178(iParam0);
		num3 = func_178(iParam0) - func_178(iParam1);
		num4 = func_180(iParam0) - func_180(iParam1);
		num5 = func_242(iParam0) - func_242(iParam1);
		num6 = func_171(iParam0) - func_171(iParam1);
		num7 = func_172(iParam0) - func_172(iParam1);
		num8 = func_241(iParam0) - func_241(iParam1);
	}
	else
	{
		num = func_180(iParam0);
		num2 = func_178(iParam1);
		num3 = func_178(iParam1) - func_178(iParam0);
		num4 = func_180(iParam1) - func_180(iParam0);
		num5 = func_242(iParam1) - func_242(iParam0);
		num6 = func_171(iParam1) - func_171(iParam0);
		num7 = func_172(iParam1) - func_172(iParam0);
		num8 = func_241(iParam1) - func_241(iParam0);
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
	
		num5 = num5 + func_177(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_240(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
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

float func_240(float fParam0, float fParam1, float fParam2) // Position - 0xE406 (58374)
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

int func_241(int iParam0) // Position - 0xE448 (58440)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_242(int iParam0) // Position - 0xE45B (58459)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 4) & 31;
}

BOOL func_243(int iParam0, int iParam1) // Position - 0xE46D (58477)
{
	int num;
	int num2;

	if (!func_244(iParam1) || !func_244(iParam0))
		return 1;

	num = func_178(iParam0);
	num2 = func_178(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_180(iParam0);
	num2 = func_180(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_242(iParam0);
	num2 = func_242(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_171(iParam0);
	num2 = func_171(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_172(iParam0);
	num2 = func_172(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_241(iParam0);
	num2 = func_241(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

BOOL func_244(int iParam0) // Position - 0xE579 (58745)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_241(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_172(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_171(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_178(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_180(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_242(iParam0);

	if (num6 < 1 || num6 > func_177(num5, num4))
		return false;

	return true;
}

BOOL func_245(int iParam0, int iParam1) // Position - 0xE655 (58965)
{
	if (IS_BIT_SET(Global_114162.f_24999.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_246(int iParam0) // Position - 0xE675 (58997)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_15(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_254() || Global_113209 || Global_33108 || func_253() || func_21(8, -1) || func_252() || func_251() || func_250() || func_249() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_254() || Global_33108 || func_253() || func_21(8, -1) || func_250() || func_252() || func_251() || func_249() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_254() || Global_113209 || Global_33108 || func_253() || func_21(8, -1) || func_250() || func_252() || func_251() || func_249() || Global_114162.f_7692.f_919[character] == 5 || Global_44746 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_254() || Global_113209 || Global_33108 || func_253() || func_21(8, -1) || func_252() || func_251() || func_249() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_254() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_21(8, -1) || func_249() || func_248() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_21(8, -1) || func_252() || func_251() || func_248() || func_247())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_254() || Global_33108 || func_253() || func_21(8, -1) || func_251() || func_250() || func_249() || Global_114162.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_254() || func_251() || Global_113209 || Global_33108 || func_253() || Global_45410 || func_21(8, -1) || func_250() || func_248() || func_249() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_254() || Global_113209 || Global_33108 || func_253() || func_21(8, -1) || func_250() || func_248() || func_252() || func_251() || func_249())
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

BOOL func_247() // Position - 0xED92 (60818)
{
	return Global_101752.f_1;
}

BOOL func_248() // Position - 0xEDA0 (60832)
{
	if (Global_98610 != -1)
		return IS_BIT_SET(Global_92476[Global_98610 /*34*/].f_15, 13);

	return false;
}

BOOL func_249() // Position - 0xEDC3 (60867)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_250() // Position - 0xEDDD (60893)
{
	if (Global_79825)
		return true;
	else if (Global_64320 && !Global_64326)
		return true;

	return false;
}

BOOL func_251() // Position - 0xEE07 (60935)
{
	return Global_101765.f_400 > 0;
}

BOOL func_252() // Position - 0xEE18 (60952)
{
	return Global_101765.f_399 > 0;
}

BOOL func_253() // Position - 0xEE29 (60969)
{
	return Global_1575086;
}

BOOL func_254() // Position - 0xEE35 (60981)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99166.f_44 == 1;

	return false;
}

BOOL func_255() // Position - 0xEE51 (61009)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_9758[Global_21083 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_256(int iParam0) // Position - 0xEE79 (61049)
{
	return func_243(func_173(), iParam0);
}

BOOL func_257(int iParam0, int iParam1, eCharacter echParam2) // Position - 0xEE8B (61067)
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

int func_258(eCharacter echParam0) // Position - 0xEF6F (61295)
{
	if (!func_15(echParam0))
		return 7;

	return Global_114162.f_7692.f_919[echParam0];
}

BOOL func_259(int iParam0) // Position - 0xEF93 (61331)
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_114162.f_24999, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_114162.f_24999.f_1, num);
	}

	return flag;
}

BOOL func_260() // Position - 0xEFEB (61419)
{
	Vehicle vehiclePedIsIn;

	if (Global_33257)
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

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xF02F (61487)
{
	int profileSetting;

	if (Global_153043 == 2)
		return true;
	else if (Global_153043 == 3)
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

void func_262() // Position - 0xF0E7 (61671)
{
	if (bLocal_141)
	{
		func_284(false);
	
		if (Global_33348)
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	
		func_283();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		func_198(false);
	
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			CAM::STOP_GAMEPLAY_HINT(false);
	
		if (CAM::IS_CODE_GAMEPLAY_HINT_ACTIVE())
			CAM::STOP_CODE_GAMEPLAY_HINT(false);
	
		Global_33446[0 /*7*/].f_6 = 0;
		func_274(false, true, true, false, false, false, false);
		func_62();
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83))
		{
			if (!PED::IS_PED_INJURED(pedLocal_83))
			{
				PED::SET_PED_CONFIG_FLAG(pedLocal_83, 317, true);
			
				if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_83, false))
					PED::RESET_PED_LAST_VEHICLE(pedLocal_83);
			
				if (iLocal_58 != 2)
					TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_83);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_83, SCRIPT_TASK_SMART_FLEE_PED) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_83, SCRIPT_TASK_SMART_FLEE_PED) != 0)
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_83, false);
			
				PED::SET_PED_CAN_BE_TARGETTED(pedLocal_83, true);
			
				if (PED::IS_PED_IN_GROUP(pedLocal_83))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_83);
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_84))
			if (!PED::IS_PED_INJURED(pedLocal_84))
				if (!PED::IS_PED_FLEEING(pedLocal_84))
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_84, false);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}

	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();

	if (func_229())
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.71484f, 1270.1383f, 359.28552f, 6f, joaat("prop_fnclink_03gate1"), false))
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.71484f, 1270.1383f, 359.28552f, false, 0f, false);
	
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.29623f, 6f, joaat("prop_fnclink_03gate1"), false))
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.29623f, false, 0f, false);
	}

	func_263(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_263(int iParam0) // Position - 0xF287 (62087)
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_46();

	if (iParam0 == -1)
		return;

	if (func_229())
	{
		func_267(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114153 = MISC::GET_GAME_TIMER();
		func_266(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_265(Global_114151, true), 64);
	
		if (func_45(Global_114151) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_114150, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_114148, MISC::GET_GAME_TIMER() - Global_114149, 0);
	}
	else if (IS_BIT_SET(Global_114158, 0) && Global_114162.f_24999.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114158, 0);
	}

	func_264(&Global_33165);
	Global_114152 = false;
	func_232(-1);
	return;
}

void func_264(var uParam0) // Position - 0xF339 (62265)
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

char* func_265(int iParam0, BOOL bParam1) // Position - 0xF376 (62326)
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

void func_266(int iParam0) // Position - 0xF5BF (62911)
{
	Global_44750 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_267(int iParam0) // Position - 0xF5D1 (62929)
{
	func_268(iParam0, 0, func_273(iParam0));
	return;
}

void func_268(int iParam0, int iParam1, int iParam2) // Position - 0xF5E6 (62950)
{
	int unk;
	var unk2;

	unk = func_173();
	func_271(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_270(iParam0, &unk);
	unk2 = { func_269(&unk) };
	return;
}

struct<16> func_269(var uParam0) // Position - 0xF615 (62997)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_171(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_172(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_241(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_242(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_180(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_178(*uParam0), 64);
	return unk;
}

void func_270(int iParam0, var uParam1) // Position - 0xF6E4 (63204)
{
	Global_114162.f_24999.f_43[iParam0] = *uParam1;
	return;
}

void func_271(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xF6FC (63228)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_178(*uParam0);
	i = func_180(*uParam0);
	num2 = func_242(*uParam0);
	j = func_171(*uParam0);
	k = func_172(*uParam0);
	l = func_241(*uParam0);

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

	for (m = func_177(i, num); num2 > m; m = func_177(i, num))
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
	func_272(uParam0, l, k, j, num2, i, num);
	return;
}

void func_272(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xF87E (63614)
{
	func_183(uParam0, iParam1);
	func_182(uParam0, iParam2);
	func_181(uParam0, iParam3);
	func_175(uParam0, iParam5);
	func_176(uParam0, iParam4);
	func_174(uParam0, iParam6);
	return;
}

int func_273(int iParam0) // Position - 0xF8B6 (63670)
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

void func_274(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xFA59 (64089)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_282(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21083.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_10())
				Global_21083.f_1 = 3;
		
			Global_22442 = 5;
		}
	
		func_281(true, bParam3, bParam2, false);
		Global_64332 = 1;
		Global_76661 = 1;
		Global_79562 = 1;
	}
	else
	{
		func_282(0);
		HUD::THEFEED_RESUME();
		Global_64332 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_281(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_279(PLAYER::PLAYER_ID()) && !func_276(PLAYER::PLAYER_ID(), 0) && !func_275() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_279(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		Global_79562 = 0;
	}

	return;
}

BOOL func_275() // Position - 0xFBA8 (64424)
{
	return IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_36.f_18, 14);
}

BOOL func_276(Player plParam0, int iParam1) // Position - 0xFBC2 (64450)
{
	BOOL flag;

	if (!func_278(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_277(-1, false) == 8;
	else
		flag = Global_1845270[plParam0 /*892*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_277(int iParam0, BOOL bParam1) // Position - 0xFC1B (64539)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_35();

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

BOOL func_278(Player plParam0) // Position - 0xFC5C (64604)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_279(Player plParam0) // Position - 0xFC7E (64638)
{
	if (func_276(plParam0, 0))
		return true;

	if (func_280())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_280() // Position - 0xFCBD (64701)
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_281(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFCCB (64715)
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

void func_282(int iParam0) // Position - 0xFCFE (64766)
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 13);
	else
		MISC::CLEAR_BIT(&Global_8919, 13);

	return;
}

void func_283() // Position - 0xFD21 (64801)
{
	Global_33344 = 0;
	Global_33345 = false;
	Global_33347 = false;
	Global_33348 = false;
	Global_33349 = false;
	return;
}

void func_284(BOOL bParam0) // Position - 0xFD3D (64829)
{
	int i;

	for (i = 0; i < 62; i = i + 1)
	{
		func_199(i, bParam0);
	}

	return;
}

Vector3 func_285() // Position - 0xFD60 (64864)
{
	float distanceBetweenCoords;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_68, true);
		iLocal_67 = 1;
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_71, true) < distanceBetweenCoords)
		{
			distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_71, true);
			iLocal_67 = 2;
		}
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_74, true) < distanceBetweenCoords)
		{
			distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_74, true);
			iLocal_67 = 3;
		}
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_77, true) < distanceBetweenCoords)
		{
			distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_77, true);
			iLocal_67 = 5;
		}
	
		if (iLocal_67 == 1)
		{
			iLocal_80 = 1;
			iLocal_58 = 1;
			return uLocal_68;
		}
		else if (iLocal_67 == 2)
		{
			iLocal_80 = 2;
			iLocal_58 = 2;
			return uLocal_71;
		}
		else if (iLocal_67 == 3)
		{
			iLocal_80 = 3;
			iLocal_58 = 3;
			return uLocal_74;
		}
		else if (iLocal_67 == 5)
		{
			iLocal_80 = 4;
			iLocal_58 = 5;
			return uLocal_77;
		}
	}

	return 0f, 0f, 0f;
}


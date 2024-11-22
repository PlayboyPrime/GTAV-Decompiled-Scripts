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
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	Vehicle veLocal_30 = 0;
	Vehicle veLocal_31 = 0;
	Vehicle veLocal_32 = 0;
	var uLocal_33 = 7;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 2;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	Ped pedLocal_44 = 0;
	Ped pedLocal_45 = 0;
	Ped pedLocal_46 = 0;
	Ped pedLocal_47 = 0;
	Ped pedLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	Blip blLocal_56 = 0;
	Blip blLocal_57 = 0;
	Blip blLocal_58 = 0;
	Blip blLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 7;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 2;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 2;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 2;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 2;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	Hash hLocal_112 = 0;
	Hash hLocal_113 = 0;
	float fLocal_114 = 0f;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	float fLocal_117 = 0f;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	float fLocal_120 = 0f;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 2;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	float fLocal_133 = 0f;
	char* sLocal_134 = 0;
	var uLocal_135 = 16;
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
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	Hash hLocal_300 = 0;
	Hash hLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	var uLocal_304 = 7;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	var uLocal_320 = 7;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 7;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	var uLocal_337 = 7;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 7;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 7;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 7;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 7;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 7;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	var uLocal_402 = 2;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 2;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	var uLocal_431 = 2;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 2;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 2;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 2;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 2;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 2;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 2;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	var uLocal_457 = 2;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 2;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	var uLocal_482 = 2;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	int iLocal_485 = 0;
#endregion

void main() // Position - 0x0
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
	fLocal_114 = { 27.7189f, -608.7927f, 30.6293f };
	uLocal_130 = { 903.1f, -1548.8f, 29.8f };
	fLocal_133 = 0f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
		func_226();
		func_225();
	}

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		HUD::REQUEST_ADDITIONAL_TEXT("FINPRB", 0);

	PED::ADD_RELATIONSHIP_GROUP("WorkerPedMainGroup", &hLocal_300);
	PED::ADD_RELATIONSHIP_GROUP("GuardMainGroup", &hLocal_301);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(569305213, true);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_301, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_300, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_301, hLocal_300);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_300, hLocal_301);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_301, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, hLocal_301);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_300, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, hLocal_300);

	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_FINPRB", 0);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, false);
	
		func_222();
	
		if (iLocal_315 == 0)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_221(27, 1);
				iLocal_315 = 1;
			}
		}
	
		if (iLocal_394 == 1)
			func_217();
	
		func_214();
		func_207();
		func_199();
		func_194();
		func_191();
	
		switch (iLocal_26)
		{
			case 0:
				func_190();
				break;
		
			case 1:
				func_187();
				break;
		
			case 2:
				func_163();
				break;
		
			case 3:
				func_161();
				break;
		
			case 4:
				func_132();
				break;
		
			case 5:
				func_21();
				break;
		
			case 6:
				func_1();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x1EC
{
	switch (iLocal_60)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
		
			switch (iLocal_28)
			{
				case 0:
					break;
			
				case 4:
					sLocal_134 = "FPB_FAIL1";
					break;
			
				case 3:
					sLocal_134 = "FPB_FAIL2";
					break;
			
				case 1:
					sLocal_134 = "FPB_FAIL3";
					break;
			
				case 2:
					sLocal_134 = "FPB_FAIL10";
					break;
			
				case 5:
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						sLocal_134 = "FPB_FAIL7";
				
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						sLocal_134 = "FPB_FAIL8";
				
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						sLocal_134 = "FPB_FAIL9";
					break;
			
				case 6:
					sLocal_134 = "FPB_FAIL11";
					break;
			}
		
			if (iLocal_28 == 0)
				_TRIGGER_MISSION_FAIL(0);
			else
				func_4(sLocal_134);
		
			iLocal_60 = 1;
			break;
	
		case 1:
			if (func_3())
			{
				func_2();
				func_225();
			}
			break;
	}

	return;
}

BOOL func_2() // Position - 0x2CD
{
	if (Global_101533 == 7)
		return true;

	return false;
}

BOOL func_3() // Position - 0x2E2
{
	if (Global_4)
		return true;

	if (Global_101533 == 7 || Global_101533 == 8)
		return true;

	return false;
}

void func_4(char* sParam0) // Position - 0x30F
{
	func_5(sParam0);
	_TRIGGER_MISSION_FAIL(0);
	return;
}

void func_5(char* sParam0) // Position - 0x322
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_79622, sParam0, 16);
			TEXT_LABEL_ASSIGN_STRING(&Global_79626, "", 16);
		
			if (RECORDING::IS_REPLAY_RECORDING())
				RECORDING::STOP_REPLAY_RECORDING();
		}
	}

	return;
}

void _TRIGGER_MISSION_FAIL(int iParam0) // Position - 0x361
{
	int num;

	if (Global_113969.f_9088 || _IS_MISSION_REPEAT_ACTIVE(false))
	{
		num = func_13();
	
		if (!func_7(num))
			return;
	
		MISC::SET_BIT(&(Global_92265[num /*5*/].f_1), 5);
		Global_101569 = iParam0;
	}

	return;
}

BOOL func_7(int iParam0) // Position - 0x3A6
{
	int num;
	int num2;

	func_12();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::START_FIRING_AMNESTY(5000);

	num = Global_92265[iParam0 /*5*/];
	num2 = Global_79660.f_109[num /*4*/];
	func_11(num2, true);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_8(&(Global_113969.f_2366.f_539), num2);

	if (Global_95688 == Global_101570)
		Global_113969.f_9088.f_330[num2 /*6*/].f_1 = Global_113969.f_9088.f_330[num2 /*6*/].f_1 + 1;

	if (!IS_BIT_SET(Global_92301[num2 /*34*/].f_15, 1))
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);

	Global_113969.f_9088.f_330[num2 /*6*/].f_2 = Global_113969.f_9088.f_330[num2 /*6*/].f_2 + 1;
	Global_95688 = Global_101570;

	if (iParam0 == -1)
	{
		Global_113969.f_9088;
		return false;
	}

	if (IS_BIT_SET(Global_92265[iParam0 /*5*/].f_1, 4))
		return false;

	if (IS_BIT_SET(Global_92265[iParam0 /*5*/].f_1, 5))
		return false;

	return true;
}

void func_8(var uParam0, int iParam1) // Position - 0x4B6
{
	int i;
	int num;
	var unk;
	float num2;

	if (iParam1 == 94)
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		num = Global_113969.f_18536[i];
	
		if (num == 8 || num == 9 || num == 10 || num == 11 || num == 34 || num == 72 || num == 73 && !IS_BIT_SET(Global_113969.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			unk = { 0f, 0f, 0f };
			num2 = 0f;
		
			if (!func_10(Global_113969.f_18536[i], &unk, &num2))
			{
				Global_113969.f_18536[i] = 318;
				func_9(&uParam0->f_2296[i]);
				uParam0->f_2300[i /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[i] = 0f;
				uParam0->f_2314[i] = 0;
				uParam0->f_2318[i /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[i] = 0;
				Global_98903[i /*29*/] = { 0f, 0f, 0f };
				Global_98903[i /*29*/].f_9 = 0f;
				Global_98903[i /*29*/].f_12 = 0f;
				Global_98903[i /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98903[i /*29*/].f_10 = 0f;
				Global_98903[i /*29*/].f_13 = 0f;
				Global_98903[i /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98903[i /*29*/].f_11 = 0f;
				Global_98903[i /*29*/].f_14 = 0f;
				Global_98903[i /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98903[i /*29*/].f_26 = 0f;
				Global_98903[i /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98903[i /*29*/].f_27 = 0f;
				Global_98903[i /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98903[i /*29*/].f_28 = 0f;
			}
		}
	}

	return;
}

void func_9(var uParam0) // Position - 0x67C
{
	*uParam0 = -15;
	return;
}

BOOL func_10(int iParam0, var uParam1, var uParam2) // Position - 0x68A
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return true;
	
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*uParam2 = 194.1887f;
			return true;
	
		case 9:
			return func_10(8, uParam1, uParam2);
	
		case 10:
			return func_10(8, uParam1, uParam2);
	
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return true;
	
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*uParam2 = 350.0509f;
			return true;
	
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*uParam2 = 0.7896f;
			return true;
	
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return true;
	
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*uParam2 = -129f;
			return true;
	
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*uParam2 = 267.1409f;
			return true;
	
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return true;
	
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return true;
	
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return true;
	
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = 250.4535f - 360f;
			return true;
	
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return true;
	
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return true;
	
		case 24:
			*uParam1 = { 744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f };
			*uParam2 = 51.7279f;
			return true;
	
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return true;
	
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*uParam2 = 156.8827f;
			return true;
	
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return true;
	
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*uParam2 = 97.2736f;
			return true;
	
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return true;
	
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return true;
	
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return true;
	
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*uParam2 = 32.2721f;
			return true;
	
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return true;
	
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
	
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
	
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return true;
	
		case 42:
			*uParam1 = { { 4.0205f, -2975.3408f, 798.4536f } + { 1f, 0f, 0f } };
			*uParam2 = 90f;
			return true;
	
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*uParam2 = 355.326f;
			return true;
	
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return true;
	
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*uParam2 = 46.8853f;
			return true;
	
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return true;
	
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*uParam2 = 221.228f;
			return true;
	
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = 42f + 180f;
			return true;
	
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return true;
	
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return true;
	
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return true;
	
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*uParam2 = -64.1366f;
			return true;
	
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return true;
	
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return true;
	
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*uParam2 = 90.0339f;
			return true;
	
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return true;
	
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return true;
	
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return true;
	
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return true;
	
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return true;
	
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
	
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
	
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		default:
			break;
	}

	return false;
}

void func_11(int iParam0, BOOL bParam1) // Position - 0xFF9
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_95498[iParam0 /*2*/] = 1;
	else
		Global_95498[iParam0 /*2*/] = 0;

	return;
}

void func_12() // Position - 0x1037
{
	Global_101568 = 1;

	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79622))
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_79622, "CMN_MARRE" /*~s~Michael was arrested.*/, 16);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_79622, "CMN_FARRE" /*~s~Franklin was arrested.*/, 16);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_79622, "CMN_TARRE" /*~s~Trevor was arrested.*/, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_79626, "", 16);
		}
	
		Global_101568 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79622))
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_79622, "CMN_MDIED" /*~s~Michael died.*/, 16);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_79622, "CMN_FDIED" /*~s~Franklin died.*/, 16);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_79622, "CMN_TDIED" /*~s~Trevor died.*/, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_79626, "", 16);
		}
	
		Global_101568 = 0;
		MISC::SET_BIT(&(Global_101533.f_20), 25);
	}

	return;
}

int func_13() // Position - 0x111E
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (IS_BIT_SET(Global_92265[i /*5*/].f_1, 2))
			return i;
	}

	return -1;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1150
{
	func_15();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_15() // Position - 0x1169
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_17(character) && !func_16(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_17(Global_113969.f_2366.f_539.f_4321))
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
			
				Global_113969.f_2366.f_539.f_4323 = character;
				Global_113969.f_2366.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != _CHAR_NULL)
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
		
			return;
		}
	}

	Global_113969.f_2366.f_539.f_4321 = 145;
	return;
}

BOOL func_16(int iParam0) // Position - 0x1266
{
	return Global_44042 == iParam0;
}

BOOL func_17(eCharacter echParam0) // Position - 0x1274
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1280
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x12BD
{
	if (func_17(character))
		return func_20(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_20(eCharacter echParam0) // Position - 0x12E2
{
	return Global_2169[echParam0 /*29*/];
}

void func_21() // Position - 0x12F1
{
	func_191();

	if (iLocal_60 == 0)
	{
		if (iLocal_302 == 1)
		{
			func_35();
			iLocal_302 = 0;
		}
	
		iLocal_316 = 0;
		iLocal_317 = 0;
		iLocal_318 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	
		if (func_34(pedLocal_44, 0))
		{
			if (!func_33(pedLocal_44))
			{
				while (!func_32(pedLocal_44, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	
		if (func_34(pedLocal_46, 0))
		{
			if (!func_33(pedLocal_46))
			{
				while (!func_32(pedLocal_46, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	
		if (func_34(pedLocal_45, 0))
		{
			if (!func_33(pedLocal_45))
			{
				while (!func_32(pedLocal_45, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_31())
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		
			func_28(veLocal_31, -1, 1);
		}
	
		if (!CAM::IS_SCREEN_FADED_IN())
			CAM::DO_SCREEN_FADE_IN(800);
	
		iLocal_394 = 1;
		iLocal_60 = 1;
	}

	if (iLocal_60 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
			{
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
				{
					if (func_34(pedLocal_46, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_46, veLocal_31, false))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_46);
							PED::REMOVE_PED_FROM_GROUP(pedLocal_46);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_46, true);
							TASK::TASK_LEAVE_VEHICLE(pedLocal_46, veLocal_31, 0);
						}
					}
				
					if (func_34(pedLocal_45, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_45, veLocal_31, false))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_45);
							PED::REMOVE_PED_FROM_GROUP(pedLocal_45);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_45, true);
							TASK::TASK_LEAVE_VEHICLE(pedLocal_45, veLocal_31, 0);
						}
					}
				}
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
				{
					if (func_34(pedLocal_44, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_44, veLocal_31, false))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_44);
							PED::REMOVE_PED_FROM_GROUP(pedLocal_44);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_44, true);
							TASK::TASK_LEAVE_VEHICLE(pedLocal_44, veLocal_31, 0);
						}
					}
				
					if (func_34(pedLocal_45, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_45, veLocal_31, false))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_45);
							PED::REMOVE_PED_FROM_GROUP(pedLocal_45);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_45, true);
							TASK::TASK_LEAVE_VEHICLE(pedLocal_45, veLocal_31, 0);
						}
					}
				}
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
				{
					if (func_34(pedLocal_44, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_44, veLocal_31, false))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_44);
							PED::REMOVE_PED_FROM_GROUP(pedLocal_44);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_44, true);
							TASK::TASK_LEAVE_VEHICLE(pedLocal_44, veLocal_31, 0);
						}
					}
				
					if (func_34(pedLocal_46, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_46, veLocal_31, false))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_46);
							PED::REMOVE_PED_FROM_GROUP(pedLocal_46);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_46, true);
							TASK::TASK_LEAVE_VEHICLE(pedLocal_46, veLocal_31, 0);
						}
					}
				}
			
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, false))
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, 0);
			}
		}
	
		SYSTEM::SETTIMERB(0);
		iLocal_60 = 2;
	}

	if (iLocal_60 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
			{
				if (iLocal_318 == 0)
				{
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
					{
						if (func_34(pedLocal_46, 0))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_46, veLocal_31, false))
								if (func_33(pedLocal_46))
									if (func_25(pedLocal_46))
										iLocal_318 = 1;
								else
									iLocal_318 = 1;
						else
							iLocal_316 = 1;
					
						if (func_34(pedLocal_45, 0))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_45, veLocal_31, false))
								if (func_33(pedLocal_45))
									if (func_25(pedLocal_45))
										iLocal_318 = 1;
								else
									iLocal_318 = 1;
						else
							iLocal_317 = 1;
					}
				
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
					{
						if (func_34(pedLocal_44, 0))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_44, veLocal_31, false))
								if (func_33(pedLocal_44))
									if (func_25(pedLocal_44))
										iLocal_318 = 1;
								else
									iLocal_318 = 1;
						else
							iLocal_316 = 1;
					
						if (func_34(pedLocal_45, 0))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_45, veLocal_31, false))
								if (func_33(pedLocal_45))
									if (func_25(pedLocal_45))
										iLocal_318 = 1;
								else
									iLocal_318 = 1;
						else
							iLocal_317 = 1;
					}
				
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
					{
						if (func_34(pedLocal_44, 0))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_44, veLocal_31, false))
								if (func_33(pedLocal_44))
									if (func_25(pedLocal_44))
										iLocal_318 = 1;
								else
									iLocal_318 = 1;
						else
							iLocal_316 = 1;
					
						if (func_34(pedLocal_46, 0))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_46, veLocal_31, false))
								if (func_33(pedLocal_46))
									if (func_25(pedLocal_46))
										iLocal_318 = 1;
								else
									iLocal_318 = 1;
						else
							iLocal_317 = 1;
					}
				
					if (iLocal_316 == 1 && iLocal_317 == 1)
						iLocal_318 = 1;
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, true))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_60 = 3;
				}
			}
		}
	}

	if (iLocal_60 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(veLocal_31, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_31, 2);
				ENTITY::FREEZE_ENTITY_POSITION(veLocal_31, true);
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_30))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_30, false))
				ENTITY::FREEZE_ENTITY_POSITION(veLocal_30, true);
	
		iLocal_60 = 4;
	}

	if (iLocal_60 == 4)
		func_22();

	return;
}

void func_22() // Position - 0x177E
{
	func_23(false, 0);
	func_225();
	return;
}

void func_23(BOOL bParam0, BOOL bParam1) // Position - 0x1790
{
	int num;
	int num2;
	int num3;

	if (!Global_64168)
		Global_64168 = bParam1;

	if (bParam0)
	{
		if (_IS_MISSION_REPEAT_ACTIVE(false) && Global_79636.f_1 == 1 && func_24(Global_79636))
		{
		}
		else
		{
			Global_64166 = 1;
		}
	}

	if (Global_113969.f_9088 || _IS_MISSION_REPEAT_ACTIVE(false))
	{
		num = func_13();
		num2 = Global_92265[num /*5*/];
		num3 = Global_79660.f_109[num2 /*4*/];
	
		if (num == -1)
		{
			Global_113969.f_9088;
			return;
		}
	
		if (IS_BIT_SET(Global_92265[num /*5*/].f_1, 4))
			return;
	
		if (IS_BIT_SET(Global_92265[num /*5*/].f_1, 5))
			return;
	
		MISC::SET_BIT(&(Global_92265[num /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_79638, 1);
		Global_79654 = num3;
		Global_79655 = MISC::GET_GAME_TIMER();
	}

	return;
}

BOOL func_24(int iParam0) // Position - 0x1860
{
	switch (iParam0)
	{
		case 71:
			return true;
	
		case 86:
			return true;
	
		case 91:
			return true;
	
		default:
			return false;
	}

	return false;
}

BOOL func_25(Ped pedParam0) // Position - 0x189E
{
	return false;
}

Ped func_26(eCharacter echParam0) // Position - 0x18F3
{
	if (echParam0 > CHAR_MULTIPLAYER)
		return 0;

	if (echParam0 == _GET_CURRENT_PLAYER_CHARACTER())
		return PLAYER::PLAYER_PED_ID();

	return Global_98991[func_27(echParam0)];
}

int func_27(eCharacter echParam0) // Position - 0x1924
{
	if (echParam0 == CHAR_MICHAEL)
		return 0;
	else if (echParam0 == CHAR_TREVOR)
		return 2;
	else if (echParam0 == CHAR_FRANKLIN)
		return 1;
	else if (echParam0 == _CHAR_NULL)
		return 3;

	return 4;
}

void func_28(Vehicle veParam0, int iParam1, int iParam2) // Position - 0x195F
{
	if (_IS_MISSION_REPLAY_IN_PROGRESS() && func_31())
	{
		while (Global_101528 != 6)
		{
			SYSTEM::WAIT(0);
		}
	
		MISC::SET_GAME_PAUSED(false);
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	
		if (veParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(veParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
	
		if (iParam2 == 1)
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_29(0);
	}

	return;
}

void func_29(int iParam0) // Position - 0x1A23
{
	if (iParam0 == 1)
		MISC::SET_BIT(&(Global_101533.f_20), 13);
	else
		MISC::CLEAR_BIT(&(Global_101533.f_20), 13);

	return;
}

BOOL _IS_MISSION_REPLAY_IN_PROGRESS() // Position - 0x1A4C
{
	if (Global_101533 == 10 || Global_101533 == 9)
		return true;

	return false;
}

BOOL func_31() // Position - 0x1A70
{
	return IS_BIT_SET(Global_101533.f_20, 13);
}

BOOL func_32(Ped pedParam0, int iParam1) // Position - 0x1A81
{
	return false;
}

BOOL func_33(Ped pedParam0) // Position - 0x1B02
{
	return false;
}

BOOL func_34(Ped pedParam0, int iParam1) // Position - 0x1B48
{
	return false;
}

void func_35() // Position - 0x1BA1
{
	iLocal_394 = 0;
	iLocal_454 = 0;
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	func_130();
	HUD::CLEAR_PRINTS();
	func_129();
	func_128();
	func_37();

	if (!func_31())
		func_36();

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	return;
}

void func_36() // Position - 0x1BF6
{
	switch (iLocal_26)
	{
		case 2:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.1766f, 29.4751f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
	
		case 3:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.1766f, 29.4751f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
	
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, false))
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, -1);
			break;
	
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, false))
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, -1);
			break;
	}

	return;
}

void func_37() // Position - 0x1CD3
{
	switch (iLocal_26)
	{
		case 3:
			iLocal_416 = 0;
			iLocal_417 = 0;
			iLocal_418 = 0;
			func_124();
		
			if (func_123() && func_120(7f, 7f, 7f, 1))
			{
				func_118();
			
				while (!func_117())
				{
					SYSTEM::WAIT(0);
				}
			
				veLocal_32 = func_38(818.8139f, -1610.4055f, 30.7951f, 264.412f);
			}
		
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
			break;
	
		case 4:
			iLocal_416 = 0;
			iLocal_417 = 0;
			iLocal_418 = 0;
			func_124();
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
				{
					ENTITY::SET_ENTITY_COORDS(veLocal_31, 89.2131f, -596.9456f, 30.6224f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(veLocal_31, 161.1163f);
				}
			}
		
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, true, true, false, false);
			break;
	
		case 5:
			iLocal_416 = 1;
			iLocal_417 = 1;
			iLocal_418 = 1;
			func_124();
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, true, true, false, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
				{
					ENTITY::SET_ENTITY_COORDS(veLocal_31, 28.4065f, -608.9371f, 30.6293f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(veLocal_31, 70.7778f);
				}
			}
		
			STREAMING::REQUEST_MODEL(-681004504);
		
			while (!STREAMING::HAS_MODEL_LOADED(-681004504))
			{
				SYSTEM::WAIT(0);
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_47))
			{
				pedLocal_47 = PED::CREATE_PED(PED_TYPE_MISSION, -681004504, 64.904f, -617.9949f, 30.7028f, 223.555f, true, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-681004504);
				PED::SET_PED_CONFIG_FLAG(pedLocal_47, 324, true);
			}
			break;
	}

	return;
}

Vehicle func_38(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x1E7C
{
	return func_39(&(Global_104530.f_2890), fParam0, fParam3, false);
}

Vehicle func_39(var uParam0, float fParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5) // Position - 0x1E96
{
	Vehicle vehicle;
	Vector3 entityCoords;
	BOOL flag;
	var result;
	int num;

	if (func_116(uParam0))
	{
		if (func_115(fParam1, 0f, 0f, 0f, false))
		{
			fParam1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
	
		if (uParam0->f_12.f_66 == -845961253 || uParam0->f_12.f_66 == 1233534620)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(fParam1, -816.87164f, 185.62384f, 71.40275f, -807.48944f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				fParam1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
	
		if (func_114(uParam0))
		{
			MISC::CLEAR_AREA(fParam1, 5f, true, false, false, false);
			func_113(fParam1, 5f, false);
			vehicle = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, fParam1, fParam4, true, true, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehicle))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(vehicle, true) };
			
				if (SYSTEM::VDIST2(entityCoords, -1151.15f, -1530.32f, 7.48925f) <= 3f)
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(vehicle, fParam1, false, false, true);
			
				func_82(vehicle, &(uParam0->f_12), false, true);
				flag = true;
			
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
					if (!WATER::TEST_PROBE_AGAINST_WATER(fParam1, fParam1.f_1, fParam1.f_2 + 30f, fParam1, fParam1.f_1, fParam1.f_2 - 30f, &result))
						flag = false;
			
				if (flag)
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(vehicle, 1084227584);
			
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(vehicle)))
							func_81(uParam0->f_11, 1);
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehicle)))
							func_81(uParam0->f_11, 2);
				
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(vehicle, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(vehicle, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(vehicle, true);
					func_80(vehicle, uParam0->f_11);
				}
				else if (!func_77(vehicle, uParam0->f_3, uParam0->f_8) && uParam0->f_10 && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					num = func_76(vehicle);
				
					if (num == -1)
						uParam0->f_10 = 0;
					else
						func_69(num);
				}
			
				if (Global_101533 != 13 && Global_101533 != 10 && Global_101533 != 11 && Global_101533 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_101533.f_3)) == Global_79167)
					{
						if (uParam0->f_12.f_66 == Global_113969.f_32753.f_69[21 /*78*/].f_66)
						{
							func_66(24, false);
							func_69(24);
						}
					}
				}
			
				if (uParam0->f_9 == 1)
					func_40(vehicle, uParam0->f_11);
			
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				entityCoords = { ENTITY::GET_ENTITY_COORDS(vehicle, true) };
			}
		
			return vehicle;
		}
	}

	return vehicle;
}

void func_40(Vehicle veParam0, eCharacter echParam1) // Position - 0x2147
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_46(veParam0))
		return;

	if (echParam1 != CHAR_MICHAEL && echParam1 != CHAR_FRANKLIN && echParam1 != CHAR_TREVOR)
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
			if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == 225514697)
				echParam1 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == -1692214353)
				echParam1 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == -1686040670)
				echParam1 = CHAR_TREVOR;
	
		if (echParam1 != CHAR_MICHAEL && echParam1 != CHAR_FRANKLIN && echParam1 != CHAR_TREVOR)
			echParam1 = Global_113969.f_2366.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_113969.f_32753.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113969.f_32753.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113969.f_32753.f_5038[i /*157*/][j /*78*/].f_1)))
					{
						Global_113969.f_32753.f_5038[i /*157*/][j /*78*/].f_66 = 0;
						Global_113969.f_32753.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_113969.f_32753.f_5600[i /*78*/].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113969.f_32753.f_5600[i /*78*/].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113969.f_32753.f_5600[i /*78*/].f_1)))
					Global_113969.f_32753.f_5600[i /*78*/].f_66 = 0;
	}

	Global_113969.f_32753.f_5590 = echParam1;
	Global_79084 = veParam0;
	Global_113969.f_32753.f_5588 = 1;
	func_41(veParam0, &(Global_113969.f_32753.f_5510));
	return;
}

void func_41(Vehicle veParam0, var uParam1) // Position - 0x2349
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_45(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(veParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
				
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_43(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_42(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_42(int iParam0) // Position - 0x25F2
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_43(var uParam0, var uParam1, var uParam2) // Position - 0x26A2
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			uParam1->[i] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
				uParam1->[i] = 1;
		}
		else if (modType == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_44(int iParam0) // Position - 0x2895
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return true;
	
		default:
		
	}

	return false;
}

void func_45(var uParam0) // Position - 0x28B5
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

BOOL func_46(Vehicle veParam0) // Position - 0x2965
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_64(veParam0, 0, false) || func_64(veParam0, 1, false) || func_64(veParam0, 2, false) || func_63(veParam0) != _CHAR_NULL || func_62(veParam0) || func_61(veParam0) || func_60(veParam0) || func_59(veParam0) || !func_47(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_61(veParam0);
		func_61(veParam0);
		func_64(veParam0, 0, false);
		func_64(veParam0, 1, false);
		func_64(veParam0, 2, false);
		func_63(veParam0) != _CHAR_NULL;
		return false;
	}

	return true;
}

BOOL func_47(Hash hParam0) // Position - 0x2A42
{
	if (hParam0 == 0)
		return false;

	if (!func_48(hParam0, false, -1))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0))
		return false;

	switch (hParam0)
	{
		case -713569950:
		case -1961627517:
		case -823509173:
		case -1207431159:
		case 782665360:
		case -1476447243:
		case 1074326203:
		case 1353720154:
		case -845979911:
		case -1323100960:
		case -442313018:
		case 1283517198:
		case -2072933068:
		case -1098802077:
		case 1941029835:
		case 1938952078:
		case -2007026063:
		case 1917016601:
		case 2053223216:
		case 524108981:
		case 850991848:
		case 1518533038:
		case -2140210194:
		case -2137348917:
		case 2112052861:
		case -2076478498:
		case 1886712733:
		case 444583674:
		case 48339065:
		case -1006919392:
		case -2130482718:
		case -784816453:
		case 475220373:
		case -1705304628:
		case -1700801569:
		case -947761570:
		case 1876516712:
		case 1951180813:
		case -1987130134:
		case -233098306:
		case 121658888:
		case -120287622:
		case 904750859:
		case -1050465301:
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case -34623805:
		case -1536924937:
		case -1779120616:
		case 456714581:
		case -956048545:
		case -671564942:
		case -902029319:
		case 771711535:
		case -1066334226:
		case -845961253:
			return false;
	}

	return true;
}

BOOL func_48(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x2C00
{
	int i;
	Hash outData;

	if (hParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(hParam0))
		return false;

	if (hParam0 == -915704871 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == 237764926 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == 349315417 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == -613725916 || hParam0 == -401643538 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;
	}
	else
	{
		for (i = 0; i < FILES::GET_NUM_DLC_VEHICLES(); i = i + 1)
		{
			if (FILES::GET_DLC_VEHICLE_DATA(i, &outData))
			{
				if (hParam0 == outData.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(outData))
						return false;
				
					break;
				}
			}
		}
	}

	if (hParam0 == -150975354)
		if (!func_57() && !func_56() && !func_55() && !func_54() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	if (hParam0 == 37348240 || hParam0 == 11251904 || hParam0 == 544021352)
	{
		if (IS_XBOX_PLATFORM() || MISC::IS_PC_VERSION() || IS_PLAYSTATION_PLATFORM())
		{
		}
		else if (!func_55())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_51(hParam0, iParam2))
			return false;

	if (!func_49(hParam0))
		return false;

	return true;
}

BOOL func_49(Hash hParam0) // Position - 0x2D85
{
	int num;
	var unk;
	var name;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return true;

	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);

	if (num == 4)
		return true;

	switch (hParam0)
	{
		case -827162039:
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_DUNE4_t0_v3", 64);
			break;
	
		case 989294410:
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case 941494461:
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_RUINER2_t0_v3", 64);
			break;
	
		case -1649536104:
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case 1180875963:
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case 682434785:
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case -1912017790:
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case -1590337689:
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&name))
		return false;

	return true;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x2E51
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_51(Hash hParam0, int iParam1) // Position - 0x2E68
{
	int cloudTimeAsInt;
	int num;

	if (Global_2707348)
		return true;

	if (!Global_2707349 && iParam1 >= 0 && iParam1 <= 517)
		if (IS_BIT_SET(Global_1586521[iParam1 /*142*/].f_103, 2))
			return true;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
	num = 0;

	switch (hParam0)
	{
		case -1240172147:
			num = Global_262145.f_35588[0];
			break;
	
		case -143587026:
			num = Global_262145.f_35588[1];
			break;
	
		case 1690421418:
			num = Global_262145.f_35588[2];
			break;
	
		case 258105345:
			num = Global_262145.f_35588[3];
			break;
	
		case 1249425552:
			num = Global_262145.f_35588[4];
			break;
	
		case -986656474:
			num = Global_262145.f_35588[5];
			break;
	
		case 1307736079:
			num = Global_262145.f_35588[6];
			break;
	
		case 1737348074:
			num = Global_262145.f_35588[7];
			break;
	
		case -223461503:
			num = Global_262145.f_35588[8];
			break;
	
		case 1121330119:
			num = Global_262145.f_35588[9];
			break;
	
		case -1628000569:
			num = Global_262145.f_35588[10];
			break;
	
		case -946047670:
			num = Global_262145.f_35588[11];
			break;
	
		case 1579902654:
			num = Global_262145.f_35588[12];
			break;
	
		case -773802025:
			num = Global_262145.f_35588[13];
			break;
	
		case 1968807591:
			num = Global_262145.f_35588[14];
			break;
	
		case -1958428933:
			num = Global_262145.f_35588[15];
			break;
	
		case 1881415402:
			num = Global_262145.f_35588[16];
			break;
	
		case -999594302:
			num = Global_262145.f_35588[17];
			break;
	
		case -1896488056:
			num = Global_262145.f_35588[18];
			break;
	
		case 1452003510:
			num = Global_262145.f_35588[19];
			break;
	
		case -1444856003:
			num = Global_262145.f_35588[20];
			break;
	}

	if (cloudTimeAsInt > num)
		return true;

	return false;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x30B9
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0x30CF
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_54() // Position - 0x30E5
{
	return false;
}

BOOL func_55() // Position - 0x30EE
{
	return true;
}

BOOL func_56() // Position - 0x30F7
{
	return true;
}

BOOL func_57() // Position - 0x3100
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x3119
{
	int profileSetting;

	if (Global_152848 == 2)
		return true;
	else if (Global_152848 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(1571103992, &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(1571103992, profileSetting, true);
			
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

BOOL func_59(Vehicle veParam0) // Position - 0x31D1
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == -810318068 && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_48(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_60(Vehicle veParam0) // Position - 0x3218
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98874[i]))
			if (Global_98874[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_61(Vehicle veParam0) // Position - 0x3253
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98844[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98844[i], false))
				if (Global_98844[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_98844[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_62(Vehicle veParam0) // Position - 0x32CF
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[24]))
		if (veParam0 == Global_78179.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (veParam0 == Global_78179.f_484[i])
					return true;
	}

	return false;
}

eCharacter func_63(Vehicle veParam0) // Position - 0x33B7
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return _CHAR_NULL;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return _CHAR_NULL;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98844[i]))
			if (Global_98844[i] == veParam0)
				return Global_98854[i];
	}

	return _CHAR_NULL;
}

BOOL func_64(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0x341A
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_65(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113969.f_7232[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_65(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x3488
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

void func_66(int iParam0, BOOL bParam1) // Position - 0x3560
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		if (!func_68(iParam0, 0))
		{
			func_67(iParam0, 1, false);
			func_67(iParam0, 2, false);
			func_67(iParam0, 3, false);
			func_67(iParam0, 4, false);
			func_67(iParam0, 0, true);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_67(iParam0, 0, false);
	}

	return;
}

void func_67(int iParam0, int iParam1, BOOL bParam2) // Position - 0x35BD
{
	if (iParam0 == -1)
		return;

	if (bParam2)
		MISC::SET_BIT(&Global_113969.f_32753[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&Global_113969.f_32753[iParam0], iParam1);

	return;
}

BOOL func_68(int iParam0, int iParam1) // Position - 0x35F8
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113969.f_32753[iParam0], iParam1);
}

void func_69(int iParam0) // Position - 0x3618
{
	BOOL flag;

	if (iParam0 == -1)
		return;

	if (func_73(&Global_78179.f_555[0 /*21*/], iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_139[iParam0]))
		{
			flag = true;
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78179.f_139[iParam0], false))
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_78179.f_139[iParam0], false))
						flag = false;
		
			if (flag)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_78179.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&Global_78179.f_139[iParam0]);
			}
		}
	
		Global_78179[iParam0] = 1;
	
		if (IS_BIT_SET(Global_78179.f_555[0 /*21*/].f_9, 13))
		{
			if (iParam0 == 24 && func_68(iParam0, 0) && Global_79088.f_66 == 0 && Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] != 0 && Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] > 3 && !func_71(0, Global_78179.f_555[0 /*21*/].f_12) || !func_71(1, Global_78179.f_555[0 /*21*/].f_12))
			{
				func_70(&Global_113969.f_32753.f_69[Global_78179.f_555[0 /*21*/].f_14 /*78*/], &Global_79088);
				Global_79166 = Global_113969.f_32753.f_5591;
			}
		
			func_66(iParam0, false);
		}
	}

	return;
}

void func_70(var uParam0, var uParam1) // Position - 0x3787
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

BOOL func_71(int iParam0, int iParam1) // Position - 0x3853
{
	int num;

	switch (iParam1)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (iParam0 < 0 || iParam0 >= func_72(&Global_113969.f_32753.f_5038[num /*157*/]))
		return false;

	return func_48(Global_113969.f_32753.f_5038[num /*157*/][iParam0 /*78*/].f_66, false, -1);
}

int func_72(var uParam0) // Position - 0x38C6
{
	return *uParam0;
}

BOOL func_73(var uParam0, int iParam1) // Position - 0x38D1
{
	BOOL num;
	int num2;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };

	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_74(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_74(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_74(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_74(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_74(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_74(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_74(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_74(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_74(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = -186537451;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = -1030275036;
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = 970356638;
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 26:
		case 27:
		case 28:
			num2 = iParam1 - 26;
			uParam0->f_14 = 12 + num2;
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 29:
		case 30:
		case 31:
			num2 = iParam1 - 29;
			uParam0->f_14 = 15 + num2;
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 32:
		case 33:
		case 34:
			num2 = iParam1 - 32;
			uParam0->f_14 = 18 + num2;
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = -1008861746;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = 356391690;
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = 850565707;
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = -1673356438;
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = 1394036463;
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = 771711535;
			MISC::SET_BIT(&(uParam0->f_9), 23);
			num = 1;
			break;
	
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = -1323100960;
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = 1917016601;
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = -823509173;
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = 338562499;
			num = 1;
			break;
	
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = 384071873;
			num = 1;
			break;
	
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = 1531094468;
			num = 1;
			break;
	
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = 1123216662;
			num = 1;
			break;
	
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = -1670998136;
			num = 1;
			break;
	
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = -1670998136;
			num = 1;
			break;
	
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = -1670998136;
			num = 1;
			break;
	
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = 771711535;
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = 1033245328;
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = 1126868326;
			num = 1;
			break;
	
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = -613725916;
			else
				uParam0->f_4 = -150975354;
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = -613725916;
			else
				uParam0->f_4 = -150975354;
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = -1269889662;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = -1066334226;
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			num = 1;
			break;
	
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = -326143852;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = -326143852;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = -901163259;
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = -901163259;
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	}

	if (IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113969.f_32753.f_69[uParam0->f_14 /*78*/].f_66;
	
		if (iParam1 == 14)
		{
			if (uParam0->f_4 == 165154707 || uParam0->f_4 == 1824333165 || uParam0->f_4 == 621481054 || uParam0->f_4 == -1214505995 || uParam0->f_4 == 1981688531 || uParam0->f_4 == -1214293858)
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
	
		if (!func_115(Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false))
			*uParam0 = { Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/] };
	
		if (Global_113969.f_32753.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = Global_113969.f_32753.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_115(Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_115(Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}

	return num;
}

Hash func_74(eCharacter echParam0, int iParam1) // Position - 0x4FC0
{
	int num;

	if (func_17(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_75(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_75(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x5002
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = -1008861746;
		
			if (Global_113969.f_9088.f_99.f_58[128] && !Global_113969.f_9088.f_99.f_58[131])
				num = -1883869285;
		
			switch (num)
			{
				case -1008861746:
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case -1883869285:
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case CHAR_TREVOR:
			num = -1435919434;
		
			switch (num)
			{
				case -1435919434:
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_113969.f_9088.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam2 == 1)
				num = 736902334;
			else if (iParam2 == 2)
				num = -2140431165;
			else if (Global_113969.f_9088.f_99.f_58[118])
				num = -2140431165;
			else
				num = 736902334;
		
			switch (num)
			{
				case -2140431165:
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case 736902334:
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

int func_76(Vehicle veParam0) // Position - 0x525E
{
	int i;
	var colorPrimary;
	var colorSecondary;
	var colorPrimary2;
	var colorSecondary2;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[i]) && !ENTITY::IS_ENTITY_DEAD(Global_78179.f_484[i], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78179.f_484[i], false))
		{
			VEHICLE::GET_VEHICLE_COLOURS(veParam0, &colorPrimary, &colorSecondary);
			VEHICLE::GET_VEHICLE_COLOURS(Global_78179.f_484[i], &colorPrimary2, &colorSecondary2);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == ENTITY::GET_ENTITY_MODEL(Global_78179.f_484[i]) && VEHICLE::GET_VEHICLE_LIVERY(veParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_78179.f_484[i]) && colorPrimary == colorSecondary && colorPrimary2 == colorSecondary2)
				return i;
		}
	}

	return -1;
}

BOOL func_77(Vehicle veParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x5321
{
	Hash entityModel;
	var sizeAndVehs;
	int pedNearbyVehicles;
	int i;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	sizeAndVehs = 3;

	switch (entityModel)
	{
		case -50547061:
			if (func_79(veParam0, Global_78179.f_139[38], false))
			{
				func_69(38);
				return true;
			}
			break;
	
		case 1938952078:
			if (func_79(veParam0, Global_78179.f_139[43], true))
			{
				func_69(43);
				return true;
			}
			break;
	
		case -644710429:
			pedNearbyVehicles = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &sizeAndVehs);
		
			for (i = 0; i <= pedNearbyVehicles - 1; i = i + 1)
			{
				if (func_79(veParam0, sizeAndVehs[i], true) && func_78(ENTITY::GET_ENTITY_COORDS(sizeAndVehs[i], true), 2136.133f, 4780.5635f, 39.9702f, 5f, false))
				{
					if (!bParam4 || func_115(uParam1, 0f, 0f, 0f, false) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(veParam0, true), ENTITY::GET_ENTITY_COORDS(sizeAndVehs[i], true), true) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&veParam0);
						return true;
					}
					else
					{
						return false;
					}
				}
			}
			break;
	
		case -1214293858:
			if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78179.f_484[14], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_78179.f_484[14]) == -1214293858 && VEHICLE::GET_VEHICLE_LIVERY(veParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_78179.f_484[14]))
				{
					func_69(14);
					return true;
				}
			}
			break;
	
		case 1075432268:
			if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78179.f_484[20], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_78179.f_484[20]) == 1075432268 && VEHICLE::GET_VEHICLE_LIVERY(veParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_78179.f_484[20]))
				{
					func_69(20);
					return true;
				}
			}
			break;
	}

	return false;
}

BOOL func_78(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7) // Position - 0x5529
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - fParam3) <= iParam6)
			if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= iParam6)
				if (MISC::ABSF(fParam0.f_2 - fParam3.f_2) <= iParam6)
					return true;
	else if (MISC::ABSF(fParam0 - fParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= iParam6)
			return true;

	return false;
}

BOOL func_79(Vehicle veParam0, Vehicle veParam1, BOOL bParam2) // Position - 0x55A4
{
	var colorPrimary;
	var colorSecondary;
	var colorPrimary2;
	var colorSecondary2;

	if (ENTITY::DOES_ENTITY_EXIST(veParam1) && !ENTITY::IS_ENTITY_DEAD(veParam1, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(veParam0, &colorPrimary, &colorSecondary);
			VEHICLE::GET_VEHICLE_COLOURS(veParam1, &colorPrimary2, &colorSecondary2);
		
			if (colorPrimary == colorPrimary2 && colorSecondary == colorSecondary2)
				return true;
		}
		else
		{
			return true;
		}
	}

	return false;
}

void func_80(Vehicle veParam0, eCharacter echParam1) // Position - 0x5605
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_98844[i]))
		{
			Global_98844[i] = veParam0;
			Global_98854[i] = echParam1;
			Global_98864[i] = ENTITY::GET_ENTITY_MODEL(veParam0);
		
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_98864[i]))
				Global_98892[echParam1 /*3*/][0] = -1;
			else
				Global_98892[echParam1 /*3*/][1] = -1;
		
			i = 9;
		}
	
		i == 8;
	}

	return;
}

void func_81(eCharacter echParam0, int iParam1) // Position - 0x5687
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98844[i]))
		{
			if (echParam0 == 145 || Global_98854[i] == echParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_98844[i]) == func_74(echParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98844[i], false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98844[i], false, true);
						VEHICLE::DELETE_VEHICLE(&Global_98844[i]);
						Global_98854[i] = _CHAR_NULL;
					}
				}
			}
		}
	}

	return;
}

void func_82(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5725
{
	int num;
	int num2;
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1->f_66 != 0;
	
		if (!func_104(veParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veParam0, &(uParam1->f_1));
		
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0, *uParam1);
		}
	
		if (uParam1->f_66 == 743478836)
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == 941800958)
		{
			num = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_42(num + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(num + 1));
			}
		}
		else if (uParam1->f_66 == -1189015600 || uParam1->f_66 == 989381445)
		{
			num2 = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_42(num2 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(num2 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			for (i = 1; i <= 9; i = i + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(i)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(i));
				}
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			for (j = 1; j <= 6; j = j + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(j)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(j));
				}
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			for (k = 1; k <= 11; k = k + 1)
			{
				if (k != 9 && k != 10)
				{
					if (IS_BIT_SET(uParam1->f_77, func_42(k)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_42(k));
					}
				}
			}
		}
		else if (uParam1->f_66 == -1035489563)
		{
			for (l = 1; l <= 2; l = l + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(l)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(l));
				}
			}
		}
		else if (uParam1->f_66 == -980573366)
		{
			if (IS_BIT_SET(uParam1->f_77, func_42(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(4));
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) != 0)
				MISC::SET_BIT(&(uParam1->f_77), 0);
		}
		else if (uParam1->f_66 == 1693751655)
		{
			MISC::SET_BIT(&(uParam1->f_77), func_42(1));
		}
		else if (uParam1->f_66 == 37348240)
		{
			for (m = 1; m <= 2; m = m + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(m)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(m));
				}
			}
		}
	
		if (uParam1->f_66 == 433954513)
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, false);
		
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) != -1)
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, true);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 13))
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0);
	
		if (IS_BIT_SET(uParam1->f_77, 12))
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0);
	
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_102(uParam1->f_5) || func_102(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(veParam0, uParam1->f_5, uParam1->f_6);
			}
		}
	
		if (uParam1->f_7 < 0)
			uParam1->f_7 = 0;
	
		if (uParam1->f_8 < 0)
			uParam1->f_8 = 0;
	
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veParam0, uParam1->f_7, uParam1->f_8);
	
		if (IS_BIT_SET(uParam1->f_77, 15) || func_101(veParam0) || uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0 && func_100())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
	
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
	
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, uParam1->f_65);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
			VEHICLE::SET_DRIFT_TYRES(veParam0, false);
		}
	
		if (bParam2)
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veParam0, uParam1->f_70);
	
		VEHICLE::SET_VEHICLE_NEON_COLOUR(veParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 2, IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 3, IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 0, IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 1, IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(veParam0, IS_BIT_SET(uParam1->f_77, 10));
	
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(veParam0) > 1 && uParam1->f_67 >= 0)
			VEHICLE::SET_VEHICLE_LIVERY(veParam0, uParam1->f_67);
	
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0)))
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0)))
					if (uParam1->f_69 == 6)
						func_99(veParam0, uParam1->f_69);
				else
					func_99(veParam0, uParam1->f_69);
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5)
				VEHICLE::RAISE_CONVERTIBLE_ROOF(veParam0, true);
			else
				VEHICLE::LOWER_CONVERTIBLE_ROOF(veParam0, true);
	
		if (bParam3)
			func_91(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			for (n = 0; n <= 11; n = n + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(n + 1)))
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
						VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, false);
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
					VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, true);
			}
		}
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == 819197656 || ENTITY::GET_ENTITY_MODEL(veParam0) == -777172681 || ENTITY::GET_ENTITY_MODEL(veParam0) == -1232836011)
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 0) == -1)
				VEHICLE::SET_VEHICLE_EXTRA(veParam0, 1, false);
	
		if (func_85() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(veParam0) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, -2118308144) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, func_84(true)))
			if (!IS_BIT_SET(uParam1->f_77, 23))
				if (!IS_BIT_SET(uParam1->f_77, 22) && func_83(veParam0, 5f))
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 3);
				else
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 2);
			else
				VEHICLE::CONTROL_LANDING_GEAR(veParam0, 4);
	
		if (IS_BIT_SET(uParam1->f_77, 27))
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", true);
		else
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", false);
	}

	return;
}

BOOL func_83(Vehicle veParam0, float fParam1) // Position - 0x5E28
{
	float entityCoords;
	var groundZ;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false) };
	
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &groundZ, false, false))
			if (MISC::ABSF(entityCoords.f_2 - groundZ) > fParam1)
				return true;
		else if (entityCoords.f_2 > PATHFIND::GET_APPROX_FLOOR_FOR_POINT(entityCoords, entityCoords.f_1) + fParam1)
			return true;
		else if (entityCoords.f_2 > 300f)
			return true;
	}

	return false;
}

Hash func_84(BOOL bParam0) // Position - 0x5E99
{
	if (bParam0)
		return -426933872;

	return -2118308144;
}

BOOL func_85() // Position - 0x5EB3
{
	if (*Global_4718592.f_117195 == 6 || *Global_4718592.f_117195 == 7 || *Global_4718592.f_117195 == 18 || *Global_4718592.f_117195 == 19 && Global_4718592.f_2 == 20)
		return false;

	if (func_89(7))
		if (func_87(Global_2672855.f_4.f_16) || func_86(Global_2672855.f_4.f_16))
			return false;

	return true;
}

BOOL func_86(int iParam0) // Position - 0x5F42
{
	int num;

	num = iParam0;

	if (num != -1)
		return Global_1882632[num /*146*/].f_82.f_63 != 0;

	return false;
}

BOOL func_87(Player plParam0) // Position - 0x5F66
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_88(plParam0, 9);

	return false;
}

BOOL func_88(Player plParam0, int iParam1) // Position - 0x5F84
{
	return IS_BIT_SET(Global_1887305[plParam0 /*610*/].f_10.f_4, iParam1);
}

BOOL func_89(int iParam0) // Position - 0x5F9C
{
	return func_90(&(Global_2672855.f_194), iParam0);
}

BOOL func_90(var uParam0, int iParam1) // Position - 0x5FB0
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

int func_91(var uParam0, var uParam1, var uParam2) // Position - 0x5FD3
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, uParam1->[i] > 0);
		}
		else if (modType == 22)
		{
			if (uParam1->[i] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, true);
			
				if (uParam1->[i] == 1)
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
				else
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, uParam1->[i] - 2);
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, modType) != uParam1->[i] - 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, modType);
		
			if (uParam1->[i] > 0)
			{
				if (modType == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[0] > 0);
				}
				else if (modType == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[1] > 0);
				}
				else if (func_97(*uParam0, modType, uParam1->[i] - 1))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, false);
				}
			}
		}
	}

	if (func_96(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != func_94(*uParam0, uParam1->[38] - 1))
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_94(*uParam0, uParam1->[38] - 1), false);

	func_93(uParam0);

	if (func_92(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
	}

	return 1;
}

BOOL func_92(Vehicle veParam0) // Position - 0x61AD
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
	
		for (i = 0; i < 49; i = i + 1)
		{
			modType = i;
		
			if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21 || modType == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(veParam0, modType) != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 32);
				hashKey = MISC::GET_HASH_KEY(&unk);
			
				if (hashKey != 0)
					if (hashKey == MISC::GET_HASH_KEY("MNU_CAGE" /*Roll Cage and Chassis Upgrade*/) || hashKey == MISC::GET_HASH_KEY("SABRE_CAG" /*Stunt Cage*/))
						return true;
			}
		}
	}

	return false;
}

void func_93(var uParam0) // Position - 0x6289
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case -1700874274:
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			else
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			break;
	
		case -1045911276:
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
	
		default:
			break;
	}

	return;
}

int func_94(Vehicle veParam0, int iParam1) // Position - 0x62E0
{
	int value;
	int value2;
	float num;
	int num2;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case -1797613329:
				switch (iParam1)
				{
					case 0:
						return 0;
				
					case 1:
						return 1;
				
					case 2:
						return 2;
				
					case 3:
						return 3;
				
					case 4:
						return 4;
				
					case 5:
						return 4;
				}
				break;
		
			case -2039755226:
				return 3;
		}
	
		value = func_95(veParam0, 38) + 1;
		value2 = func_95(veParam0, 24) + 1;
		num = SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(value);
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value2) * num) - 1;
	
		if (num2 < 0)
			num2 = 0;
	
		if (num2 >= value)
			num2 = value - 1;
	
		return num2;
	}

	return 0;
}

int func_95(Vehicle veParam0, int iParam1) // Position - 0x63C9
{
	int i;

	if (STREAMING::IS_MODEL_VALID(Global_152860) && VEHICLE::IS_VEHICLE_MODEL(veParam0, Global_152860) && Global_152861 == iParam1)
		return Global_152862;

	for (i = VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) - 1; i >= 0 && func_97(veParam0, iParam1, i); i = i - 1)
	{
	}

	return i;
}

BOOL func_96(Hash hParam0, int iParam1) // Position - 0x642B
{
	switch (hParam0)
	{
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
			return true;
	
		case 274946574:
		case -994371320:
		case 15214558:
		case -1356880839:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 223258115:
			if (!Global_262145.f_14701)
				return false;
			else
				return true;
			break;
	
		case -1797613329:
			if (!Global_262145.f_14702)
				return false;
			else
				return true;
			break;
	
		case -899509638:
			if (!Global_262145.f_14700)
				return false;
			else
				return true;
			break;
	
		case -1126264336:
			if (!Global_262145.f_14703)
				return false;
			else
				return true;
			break;
	
		case 1119641113:
			if (!Global_262145.f_14705)
				return false;
			else
				return true;
			break;
	
		case -2039755226:
			if (!Global_262145.f_14704)
				return false;
			else
				return true;
			break;
	
		case -295689028:
		case 633712403:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case -2022483795:
			if (Global_262145.f_18948)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1790834270:
			if (Global_262145.f_18950)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -757735410:
			if (Global_262145.f_18954)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 196747873:
			if (Global_262145.f_18951)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1093792632:
			if (Global_262145.f_18958)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -482719877:
			if (Global_262145.f_18956)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1074745671:
			if (Global_262145.f_18961)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1356124575:
			if (Global_262145.f_20834)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -1924433270:
			if (Global_262145.f_20835)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1717532765:
		case 1107404867:
		case -913589546:
			return true;
	}

	return false;
}

BOOL func_97(Vehicle veParam0, int iParam1, int iParam2) // Position - 0x680A
{
	if (!func_98() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(veParam0, iParam1, iParam2))
		return true;

	return false;
}

BOOL func_98() // Position - 0x682E
{
	return false;
}

void func_99(Vehicle veParam0, int iParam1) // Position - 0x6837
{
	int vehicleMod;
	int vehicleModVariation;

	if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
		vehicleMod = VEHICLE::GET_VEHICLE_MOD(veParam0, 24);
		vehicleModVariation = VEHICLE::GET_VEHICLE_MOD_VARIATION(veParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(veParam0, iParam1);
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == -1558399629 || ENTITY::GET_ENTITY_MODEL(veParam0) == -1804415708)
			return;
	
		if (vehicleMod == -1)
			VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 24);
		else
			VEHICLE::SET_VEHICLE_MOD(veParam0, 24, vehicleMod, vehicleModVariation == 1);
	}

	return;
}

BOOL func_100() // Position - 0x68AF
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

BOOL func_101(Vehicle veParam0) // Position - 0x68C0
{
	int _int;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
			{
				if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
					_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
			
				return IS_BIT_SET(_int, 4);
			}
		}
	}

	return false;
}

int func_102(var uParam0) // Position - 0x6908
{
	if (!func_98() && func_103(uParam0))
		return 1;

	return 0;
}

BOOL func_103(int iParam0) // Position - 0x6928
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return true;
	}

	return false;
}

BOOL func_104(Vehicle veParam0) // Position - 0x697B
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (!_IS_PLAYER_IN_VEHICLE_SEAT(PLAYER::PLAYER_ID(), -1))
			veParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	if (func_106(PLAYER::PLAYER_ID()) == 3)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (func_105(veParam0) != -1)
				return true;

	return false;
}

int func_105(Vehicle veParam0) // Position - 0x6A02
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", INT))
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "FMDeliverableID"))
			return DECORATOR::DECOR_GET_INT(veParam0, "FMDeliverableID");

	return -1;
}

int func_106(Player plParam0) // Position - 0x6A31
{
	if (func_110(plParam0) == 233)
		return func_107(plParam0);

	return -1;
}

int func_107(Player plParam0) // Position - 0x6A4E
{
	if (func_108(plParam0, false))
		return Global_1887305[plParam0 /*610*/].f_10.f_182;

	return -1;
}

BOOL func_108(Player plParam0, BOOL bParam1) // Position - 0x6A71
{
	if (func_109(plParam0))
		if (Global_1887305[plParam0 /*610*/].f_10.f_33 != -1 || bParam1 && Global_1887305[plParam0 /*610*/].f_10.f_32 != -1)
			return true;

	return false;
}

BOOL func_109(Player plParam0) // Position - 0x6AB5
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

int func_110(Player plParam0) // Position - 0x6AD7
{
	if (func_109(plParam0))
		if (func_108(plParam0, false))
			return Global_1887305[plParam0 /*610*/].f_10.f_33;

	return -1;
}

BOOL _IS_PLAYER_IN_VEHICLE_SEAT(Player plParam0, int iParam1) // Position - 0x6B03
{
	Vehicle vehiclePedIsIn;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(plParam0), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(plParam0), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, iParam1, false))
					return true;
		}
	}

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x6B50
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
				if (player == Global_2672855.f_3)
					return Global_2672855.f_2;
				else if (Global_2657971[player /*465*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_113(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x6BB0
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (func_73(&Global_78179.f_555[0 /*21*/], i))
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_78179.f_555[0 /*21*/], bParam4) <= fParam3)
				func_69(i);
	}

	return;
}

BOOL func_114(var uParam0) // Position - 0x6C00
{
	if (func_116(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66))
			return 1;
		else
			return 0;
	
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

BOOL func_115(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x6C35
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_116(var uParam0) // Position - 0x6C7C
{
	if (uParam0->f_12.f_66 == 0)
		return 0;

	if (!func_48(uParam0->f_12.f_66, false, -1))
		return 0;

	if (uParam0->f_12.f_66 == -2122757008 && func_78(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, false))
		return 0;

	return 1;
}

BOOL func_117() // Position - 0x6CDC
{
	return func_114(&(Global_104530.f_2890));
}

void func_118() // Position - 0x6CEF
{
	func_119(&(Global_104530.f_2890));
	return;
}

void func_119(var uParam0) // Position - 0x6D02
{
	if (func_116(uParam0))
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);

	return;
}

BOOL func_120(float fParam0, float fParam1, float fParam2, int iParam3) // Position - 0x6D20
{
	return func_121(Global_104530.f_2890.f_12.f_66, fParam0, iParam3);
}

int func_121(Hash hParam0, float fParam1, var uParam2, var uParam3, int iParam4) // Position - 0x6D3D
{
	var minimum;
	float maximum;

	if (hParam0 == 0)
		return 0;

	if (iParam4 == 1)
		fParam1 = { func_122() };

	MISC::GET_MODEL_DIMENSIONS(hParam0, &minimum, &maximum);

	if (maximum - minimum > fParam1)
		return 0;
	else if (maximum.f_1 - minimum.f_1 > fParam1.f_1)
		return 0;
	else if (maximum.f_2 - minimum.f_2 > fParam1.f_2)
		return 0;

	return 1;
}

Vector3 func_122() // Position - 0x6DA7
{
	return 2.55f, 5.665f, 2.55f;
}

BOOL func_123() // Position - 0x6DBE
{
	return func_116(&(Global_104530.f_2890));
}

void func_124() // Position - 0x6DD1
{
	STREAMING::REQUEST_MODEL(-1637149482);
	STREAMING::REQUEST_MODEL(569305213);
	STREAMING::REQUEST_MODEL(-673538407);
	STREAMING::REQUEST_MODEL(-681004504);
	STREAMING::REQUEST_MODEL(2072156101);

	while (!STREAMING::HAS_MODEL_LOADED(-1637149482) || !STREAMING::HAS_MODEL_LOADED(569305213) || !STREAMING::HAS_MODEL_LOADED(-673538407) || !STREAMING::HAS_MODEL_LOADED(-681004504) || !STREAMING::HAS_MODEL_LOADED(2072156101))
	{
		SYSTEM::WAIT(0);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_30))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010[1], true, true);
			veLocal_30 = Global_98010[1];
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(veLocal_30);
		}
		else
		{
			veLocal_30 = VEHICLE::CREATE_VEHICLE(-1637149482, 919.303f, -1553.8795f, 29.7789f, 167.1917f, true, true, false);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(veLocal_30);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_31))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010[2], true, true);
			veLocal_31 = Global_98010[2];
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_31, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_31, 7);
			func_127(veLocal_31, -1);
			func_126(veLocal_31, -1);
		}
		else
		{
			veLocal_31 = VEHICLE::CREATE_VEHICLE(569305213, 919.303f, -1553.8795f, 29.7789f, 167.1917f, true, true, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_31, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_31, 7);
			func_127(veLocal_31, -1);
			func_126(veLocal_31, -1);
		}
	}

	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(veLocal_31, veLocal_30, 0.5f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1637149482);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(569305213);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(2072156101);

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010.f_9[0], true, true);
			uLocal_33[0] = Global_98010.f_9[0];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[0], hLocal_300);
			func_125(uLocal_33[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[0], true);
		}
		else
		{
			uLocal_33[0] = PED::CREATE_PED(PED_TYPE_MISSION, -673538407, 912.34f, -1543.2975f, 29.6469f, 16.169f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[0], hLocal_300);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.3f, -1542.6f, 30.4f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_33[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
		
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[0], true);
			func_125(uLocal_33[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010.f_9[1], true, true);
			uLocal_33[1] = Global_98010.f_9[1];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[1], hLocal_300);
			func_125(uLocal_33[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[1], true);
		}
		else
		{
			uLocal_33[1] = PED::CREATE_PED(PED_TYPE_MISSION, -673538407, 917.5028f, -1517.4009f, 29.9673f, 158.5738f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[1], hLocal_300);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.5028f, -1517.4009f, 29.9673f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_33[1], 917.5028f, -1517.4009f, 29.9673f, 5f, 0);
		
			func_125(uLocal_33[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[1], true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[2]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_9[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010.f_9[2], true, true);
			uLocal_33[2] = Global_98010.f_9[2];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[2], hLocal_300);
			func_125(uLocal_33[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[2], true);
		}
		else
		{
			uLocal_33[2] = PED::CREATE_PED(PED_TYPE_MISSION, -673538407, 869.6423f, -1541.4226f, 29.2516f, 346.9848f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[2], hLocal_300);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.6423f, -1541.4226f, 29.2516f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_33[2], 869.6423f, -1541.4226f, 29.2516f, 5f, 0);
		
			func_125(uLocal_33[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[2], true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[3]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_9[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010.f_9[3], true, true);
			uLocal_33[3] = Global_98010.f_9[3];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[3], hLocal_300);
			func_125(uLocal_33[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[3], true);
		}
		else
		{
			uLocal_33[3] = PED::CREATE_PED(PED_TYPE_MISSION, -673538407, 884.3046f, -1573.1875f, 29.8247f, 182.9722f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[3], hLocal_300);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.3046f, -1573.1875f, 29.8247f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_33[3], 884.3046f, -1573.1875f, 29.8247f, 5f, 0);
		
			func_125(uLocal_33[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[3], true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[4]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_9[4]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010.f_9[4], true, true);
			uLocal_33[4] = Global_98010.f_9[4];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[4], hLocal_300);
			func_125(uLocal_33[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[4], true);
		}
		else
		{
			uLocal_33[4] = PED::CREATE_PED(PED_TYPE_MISSION, -673538407, 903.8805f, -1575.0199f, 29.8327f, 308.1952f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[4], hLocal_300);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(903.8805f, -1575.0199f, 29.8327f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_33[4], 903.8805f, -1575.0199f, 29.8327f, 5f, 0);
		
			func_125(uLocal_33[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[4], true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[5]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_9[5]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010.f_9[5], true, true);
			uLocal_33[5] = Global_98010.f_9[5];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[5], hLocal_300);
			func_125(uLocal_33[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[5], true);
		}
		else
		{
			uLocal_33[5] = PED::CREATE_PED(PED_TYPE_MISSION, -673538407, 906.2186f, -1575.1078f, 29.8125f, 55.9906f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[5], hLocal_300);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(906.2186f, -1575.1078f, 29.8125f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_33[5], 906.2186f, -1575.1078f, 29.8125f, 5f, 0);
		
			func_125(uLocal_33[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[5], true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[6]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_9[8]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010.f_9[8], true, true);
			uLocal_33[6] = Global_98010.f_9[8];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[6], hLocal_300);
			func_125(uLocal_33[6], 20f, 5f, 120f, -45f, 45f, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[6], true);
		}
		else
		{
			uLocal_33[6] = PED::CREATE_PED(PED_TYPE_MISSION, -673538407, 889.285f, -1561.4847f, 29.6539f, 22.2456f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[6], hLocal_300);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.285f, -1561.4847f, 29.6539f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_33[6], 889.285f, -1561.4847f, 29.6539f, 5f, 0);
		
			func_125(uLocal_33[6], 20f, 5f, 120f, -45f, 45f, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[6], true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_41[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_9[6]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010.f_9[6], true, true);
			uLocal_41[0] = Global_98010.f_9[6];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_41[0], hLocal_301);
			func_125(uLocal_41[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_41[0], true);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_41[0], 453432689, 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_41[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			uLocal_41[0] = PED::CREATE_PED(PED_TYPE_MISSION, -681004504, 863.1551f, -1564.5721f, 29.3231f, 130.7946f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_41[0], hLocal_301);
			func_125(uLocal_41[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_41[0], true);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_41[0], 453432689, 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_41[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_41[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010.f_9[7]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010.f_9[7], true, true);
			uLocal_41[1] = Global_98010.f_9[7];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_41[1], hLocal_301);
			func_125(uLocal_41[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_41[1], true);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_41[1], 453432689, 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_41[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			uLocal_41[1] = PED::CREATE_PED(PED_TYPE_MISSION, -681004504, 940.2881f, -1573.8774f, 29.3866f, 269.1856f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_41[1], hLocal_301);
			func_125(uLocal_41[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736, 1101004800, 1125515264);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_41[1], true);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_41[1], 453432689, 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_41[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-673538407);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-681004504);
	return;
}

void func_125(Ped pedParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x7973
{
	if (!PED::IS_PED_INJURED(pedParam0))
	{
		PED::SET_PED_SEEING_RANGE(pedParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(pedParam0, iParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(pedParam0, iParam3 / 2f);
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(pedParam0, iParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(pedParam0, iParam5);
		PED::SET_PED_ID_RANGE(pedParam0, iParam6);
		PED::SET_COMBAT_FLOAT(pedParam0, 10, iParam7);
	}

	return;
}

void func_126(Vehicle veParam0, int iParam1) // Position - 0x79C1
{
	Global_64177 = veParam0;
	Global_64178 = iParam1;
	return;
}

void func_127(Vehicle veParam0, int iParam1) // Position - 0x79D3
{
	int i;

	Global_64179 = veParam0;

	for (i = 0; i < Global_76261; i = i + 1)
	{
		if (iParam1 == -1 || Global_76262[i /*9*/] == iParam1)
		{
			if (Global_76262[i /*9*/].f_6 != veParam0)
			{
				Global_76262[i /*9*/].f_6 = veParam0;
				Global_76262[i /*9*/].f_7 = 1;
				Global_76262[i /*9*/].f_8 = 0;
			}
		}
	}

	return;
}

void func_128() // Position - 0x7A3E
{
	for (iLocal_61 = 0; iLocal_61 <= 6; iLocal_61 = iLocal_61 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_61]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_33[iLocal_61], true))
			PED::DELETE_PED(&uLocal_33[iLocal_61]);
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_41[0], true))
		PED::DELETE_PED(&uLocal_41[0]);

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_41[1], true))
		PED::DELETE_PED(&uLocal_41[1]);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_44) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_44, true))
		PED::DELETE_PED(&pedLocal_44);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_45) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_45, true))
		PED::DELETE_PED(&pedLocal_45);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_46) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_46, true))
		PED::DELETE_PED(&pedLocal_46);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_47) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_47, true))
		PED::DELETE_PED(&pedLocal_47);

	if (!func_31())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 519.1906f, -2980.9941f, 5.0443f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 270.1911f);
	}

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_30) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(veLocal_30, true))
		VEHICLE::DELETE_VEHICLE(&veLocal_30);

	if (ENTITY::DOES_ENTITY_EXIST(Global_98010[3]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010[3], true, false);
		VEHICLE::DELETE_VEHICLE(&Global_98010[3]);
	}

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_31) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(veLocal_31, true))
		VEHICLE::DELETE_VEHICLE(&veLocal_31);

	STREAMING::REMOVE_ANIM_DICT("cellphone@str");
	STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	MISC::CLEAR_AREA(889.5f, -1553.8f, 30f, 150f, true, false, false, false);
	return;
}

void func_129() // Position - 0x7C16
{
	if (HUD::DOES_BLIP_EXIST(blLocal_56))
		HUD::REMOVE_BLIP(&blLocal_56);

	if (HUD::DOES_BLIP_EXIST(blLocal_57))
		HUD::REMOVE_BLIP(&blLocal_57);

	if (HUD::DOES_BLIP_EXIST(blLocal_58))
		HUD::REMOVE_BLIP(&blLocal_58);

	if (HUD::DOES_BLIP_EXIST(blLocal_59))
		HUD::REMOVE_BLIP(&blLocal_59);

	return;
}

void func_130() // Position - 0x7C5A
{
	Global_21152 = 0;
	func_131();
	return;
}

void func_131() // Position - 0x7C6A
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9 || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}

	return;
}

void func_132() // Position - 0x7CC1
{
	func_155();

	if (iLocal_60 == 0)
	{
		if (iLocal_302 == 1)
		{
			func_35();
			iLocal_302 = 0;
		}
	
		iLocal_303 = 0;
		iLocal_312 = 0;
		iLocal_467 = 0;
		iLocal_107 = 0;
		iLocal_108 = 0;
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		STREAMING::REMOVE_ANIM_DICT("cellphone@str");
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
	
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			CAM::DO_SCREEN_FADE_IN(800);
		}
	
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		iLocal_394 = 1;
		iLocal_60 = 1;
	}

	if (iLocal_60 == 1)
	{
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 3, 0, "LESTER", 0, 1);
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	
		iLocal_60 = 2;
	}

	if (iLocal_60 == 2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
			{
				if (func_140(&uLocal_135, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, false))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_60 = 3;
				}
			}
		
			if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			{
				if (func_140(&uLocal_135, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, false))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_60 = 3;
				}
			}
		
			if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			{
				if (func_140(&uLocal_135, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, false))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_60 = 3;
				}
			}
		}
	}

	if (iLocal_60 == 3)
	{
		if (!HUD::DOES_BLIP_EXIST(blLocal_57))
			if (!func_139())
				if (SYSTEM::TIMERA() > 10500)
					blLocal_57 = func_137(fLocal_114, true);
	
		if (func_139())
			iLocal_60 = 4;
	}

	if (iLocal_60 == 4)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(veLocal_31))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_114, 4f, 4f, 2f, true, true, 2))
						{
							if (func_134(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4f, 3, 0.5f, false, true, false))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
							
								if (HUD::DOES_BLIP_EXIST(blLocal_57))
									HUD::REMOVE_BLIP(&blLocal_57);
							
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
								func_133(false, -1);
								iLocal_60 = 0;
								iLocal_26 = 5;
							}
						}
					}
				}
			}
		}
	}

	return;
}

void func_133(BOOL bParam0, int iParam1) // Position - 0x7EFF
{
	int i;

	if (Global_64174)
	{
	}

	Global_64174 = false;

	if (bParam0)
		Global_64175 = 1;

	i = 0;

	if (iParam1 == -1)
	{
		for (i = 0; i < Global_76261; i = i + 1)
		{
			if (Global_64391[Global_76262[i /*9*/] /*13*/] == 4)
			{
				Global_76262[i /*9*/].f_5 = 0;
				return;
			}
		}
	}
	else
	{
		for (i = 0; i < Global_76261; i = i + 1)
		{
			if (Global_76262[i /*9*/] > 0)
			{
				if (Global_76262[i /*9*/] == iParam1)
				{
					Global_76262[i /*9*/].f_5 = 0;
					return;
				}
			}
		}
	}

	return;
}

BOOL func_134(Vehicle veParam0, float fParam1, int iParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x7F99
{
	func_136(bParam5, bParam6);
	func_135(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_30 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_30 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= fParam3)
			return true;

	return false;
}

void func_135(Vehicle veParam0) // Position - 0x7FF0
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_136(BOOL bParam0, BOOL bParam1) // Position - 0x801C
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

Blip func_137(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x816D
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

var func_138(BOOL bParam0, var uParam1, var uParam2) // Position - 0x8199
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_139() // Position - 0x81B0
{
	if (Global_22286 == 0)
		return true;

	return false;
}

BOOL func_140(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x81C7
{
	func_153(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = true;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;

	if (iParam5 == 1)
		Global_22298 = 1;
	else
		Global_22298 = 0;

	Global_2883585 = 0;
	return func_141(sParam3, iParam4, bParam8);
}

BOOL func_141(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x8226
{
	Global_22287 = 0;

	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = false;
					Global_20929 = 0;
				}
				else
				{
					func_131();
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
	
		if (func_152(8, -1))
			return 0;
	
		Global_22362 = { Global_22356 };
		func_151();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
	
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20930.f_1 > 3)
					return 0;
			}
		
			if (Global_20896 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_149())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
					return 0;
			
				if (!Global_79389)
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
		
			if (func_148())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
			
				if (IS_BIT_SET(Global_8800, 9))
					return 0;
			}
		
			func_147();
			Global_22296 = bParam2;
		}
	
		Global_22288 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_146();
		func_142();
		return 1;
	}

	if (Global_22286 == 5)
		return 0;

	if (iParam1 < Global_22288 || iParam1 == Global_22288)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_131();
	}

	return 0;
}

void func_142() // Position - 0x84F4
{
	if (!func_143())
		return;

	if (Global_22292)
	{
		TEXT_LABEL_COPY(&(Global_1971465.f_1), { Global_21905 }, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}

	return;
}

BOOL func_143() // Position - 0x852B
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79389)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_144(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_144(Player plParam0) // Position - 0x858E
{
	return func_88(plParam0, 20);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x859E
{
	return -1;
}

void func_146() // Position - 0x85A7
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21154[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22286 = 1;
	return;
}

void func_147() // Position - 0x85D8
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	MISC::CLEAR_BIT(&Global_8801, 16);
	return;
}

BOOL func_148() // Position - 0x866D
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

BOOL func_149() // Position - 0x8694
{
	int num;
	int weaponHash;

	if (Global_79389)
	{
		num = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (weaponHash == 100416529 || weaponHash == 205991906 || weaponHash == 856002082)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x872D
{
	if (func_16(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
				Global_20930 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
				Global_20930 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
				Global_20930 = CHAR_TREVOR;
			else
				Global_20930 = CHAR_MICHAEL;
	}
	else
	{
		Global_20930 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20930 == _CHAR_NULL)
			Global_20930 = CHAR_MULTIPLAYER;
	
		if (Global_79389)
			Global_20930 = CHAR_MULTIPLAYER;
	
		if (Global_20930 > CHAR_MULTIPLAYER)
			Global_20930 = CHAR_MULTIPLAYER;
	}

	return;
}

void func_151() // Position - 0x87CF
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21575[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21575[i /*10*/].f_1), "", 24);
		Global_21575[i /*10*/].f_7 = 0;
		Global_21575[i /*10*/].f_8 = 0;
	}

	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_152(int iParam0, int iParam1) // Position - 0x8826
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1668667.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1668667.f_1048, iParam0);
}

void func_153(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x885E
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;

	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}

	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x88B4
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_79389)
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

void func_155() // Position - 0x894F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, false))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(veLocal_31))
			{
				if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HELP_1"))
					HUD::CLEAR_HELP(true);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_56))
					HUD::REMOVE_BLIP(&blLocal_56);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_59))
				{
					if (iLocal_393 == 1)
						if (MISC::GET_GAME_TIMER() < iLocal_107 + 7500)
							HUD::CLEAR_PRINTS();
				
					HUD::REMOVE_BLIP(&blLocal_59);
				}
			
				if (iLocal_26 == 4)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_467 == 0)
						{
							AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_LOST");
							iLocal_467 = 1;
						}
					
						if (iLocal_312 == 1)
						{
							if (MISC::GET_GAME_TIMER() < iLocal_108 + 7500)
								HUD::CLEAR_PRINTS();
						
							iLocal_312 = 0;
						}
					
						if (iLocal_60 > 3)
						{
							if (!HUD::DOES_BLIP_EXIST(blLocal_57))
								blLocal_57 = func_137(fLocal_114, true);
						
							if (iLocal_303 == 0)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									_SHOW_SUBTITLE_CLEAR_EXISTING("GOD_2", 7500, 1);
									iLocal_303 = 1;
								}
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(blLocal_57))
							HUD::REMOVE_BLIP(&blLocal_57);
					
						if (iLocal_312 == 0)
						{
							HUD::CLEAR_PRINTS();
							_SHOW_SUBTITLE_CLEAR_EXISTING("GOD_4", 7500, -1);
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_COPS");
							iLocal_108 = MISC::GET_GAME_TIMER();
							iLocal_312 = 1;
							iLocal_467 = 0;
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(blLocal_56))
					HUD::REMOVE_BLIP(&blLocal_56);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_57))
					HUD::REMOVE_BLIP(&blLocal_57);
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_30, false))
				{
					if (!HUD::DOES_BLIP_EXIST(blLocal_59))
					{
						blLocal_59 = func_157(veLocal_30, false, false);
						HUD::SET_BLIP_AS_FRIENDLY(blLocal_59, true);
					
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
							HUD::CLEAR_PRINTS();
					
						if (iLocal_393 == 0)
						{
							_SHOW_SUBTITLE_CLEAR_EXISTING("GOD_6", 7500, -1);
							iLocal_107 = MISC::GET_GAME_TIMER();
							iLocal_393 = 1;
						}
					
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HELP_1"))
							func_156("HELP_1");
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_59))
				HUD::REMOVE_BLIP(&blLocal_59);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_57))
				HUD::REMOVE_BLIP(&blLocal_57);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_56))
				{
					blLocal_56 = func_157(veLocal_31, false, false);
					HUD::SET_BLIP_AS_FRIENDLY(blLocal_56, true);
				}
			}
		
			if (iLocal_313 == 0)
			{
				HUD::CLEAR_PRINTS();
				_SHOW_SUBTITLE_CLEAR_EXISTING("GOD_5", 7500, -1);
				iLocal_313 = 1;
			}
		}
	}

	return;
}

void func_156(char* sParam0) // Position - 0x8B64
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

Blip func_157(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8B7A
{
	return func_158(veParam0, !bParam1, bParam2);
}

Blip func_158(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8B8D
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

void _SHOW_SUBTITLE_CLEAR_EXISTING(char* sParam0, int iParam1, int iParam2) // Position - 0x8C31
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x8C4A
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_161() // Position - 0x8C5D
{
	if (iLocal_60 > 1)
		func_155();

	if (iLocal_60 == 0)
	{
		if (iLocal_302 == 1)
		{
			func_35();
			iLocal_302 = 0;
		}
	
		iLocal_395 = 0;
		iLocal_396 = 0;
		iLocal_397 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_401 = 0;
		uLocal_402[0] = 0;
		uLocal_402[1] = 0;
		uLocal_405[0] = 0;
		uLocal_405[1] = 0;
		iLocal_408 = 0;
		iLocal_409 = 0;
		iLocal_410 = 0;
		iLocal_411 = 0;
		iLocal_412 = 0;
		iLocal_413 = 0;
		iLocal_414 = 0;
		iLocal_421 = 0;
		iLocal_422 = 0;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_426 = 0;
		iLocal_427 = 0;
		iLocal_428 = 0;
		iLocal_429 = 0;
		iLocal_430 = 0;
		uLocal_431[0] = 0;
		uLocal_431[1] = 0;
		uLocal_434[0] = 0;
		uLocal_434[1] = 0;
		uLocal_437[0] = 0;
		uLocal_437[1] = 0;
		uLocal_440[0] = 0;
		uLocal_440[1] = 0;
		uLocal_443[0] = 0;
		uLocal_443[1] = 0;
		uLocal_446[0] = 0;
		uLocal_446[1] = 0;
		uLocal_449[0] = 0;
		uLocal_449[1] = 0;
		iLocal_453 = 0;
		iLocal_456 = 0;
		uLocal_457[0] = 0;
		uLocal_460[0] = 0;
		uLocal_457[1] = 0;
		uLocal_460[1] = 0;
		iLocal_464 = 0;
		iLocal_465 = 0;
		iLocal_466 = 0;
		iLocal_480 = 0;
		iLocal_313 = 0;
		iLocal_314 = 0;
		iLocal_319 = 0;
		iLocal_385 = 0;
		iLocal_386 = 0;
		iLocal_387 = 0;
		iLocal_388 = 0;
		iLocal_389 = 0;
		iLocal_390 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_393 = 0;
		iLocal_415 = 0;
		iLocal_463 = 0;
		iLocal_481 = 0;
		iLocal_485 = 0;
		iLocal_452 = 0;
		iLocal_107 = 0;
		iLocal_108 = 0;
	
		for (iLocal_61 = 0; iLocal_61 <= 6; iLocal_61 = iLocal_61 + 1)
		{
			uLocal_304[iLocal_61] = 0;
			uLocal_353[iLocal_61] = 0;
			uLocal_369[iLocal_61] = 0;
			uLocal_377[iLocal_61] = 0;
			uLocal_361[iLocal_61] = 0;
		}
	
		STREAMING::REQUEST_ANIM_DICT("cellphone@str");
		STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
		{
			if (!HUD::DOES_BLIP_EXIST(blLocal_56))
			{
				blLocal_56 = func_157(veLocal_31, false, false);
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_56, true);
			}
		}
	
		PLAYER::SET_MAX_WANTED_LEVEL(0);
	
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_31())
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_32))
			{
				func_28(veLocal_32, -1, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_32);
			}
			else
			{
				func_28(0, -1, 1);
			}
		}
	
		if (!CAM::IS_SCREEN_FADED_IN())
			CAM::DO_SCREEN_FADE_IN(800);
	
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_START");
		MISC::CLEAR_AREA(43.5f, -615.8f, 32.4f, 50f, true, false, false, false);
		iLocal_394 = 1;
		iLocal_60 = 1;
	}

	if (iLocal_60 == 1)
	{
		if (iLocal_463 == 0)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
				_SHOW_SUBTITLE_CLEAR_EXISTING("GOD_1", 7500, 1);
				iLocal_463 = 1;
			}
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, false))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_TRUCK");
			
				if (HUD::DOES_BLIP_EXIST(blLocal_56))
					HUD::REMOVE_BLIP(&blLocal_56);
			
				func_162(656, false);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				iLocal_60 = 2;
			}
		}
	}

	if (iLocal_60 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(veLocal_31))
				{
					if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HELP_1"))
						HUD::CLEAR_HELP(true);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_56))
						HUD::REMOVE_BLIP(&blLocal_56);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_59))
						HUD::REMOVE_BLIP(&blLocal_59);
				
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(fLocal_117, uLocal_130, true) < 100f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_314 == 1)
							{
								if (MISC::GET_GAME_TIMER() < iLocal_108 + 7500)
								{
									HUD::CLEAR_PRINTS();
									iLocal_314 = 0;
								}
							}
						
							if (iLocal_415 == 0)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
								_SHOW_SUBTITLE_CLEAR_EXISTING("GOD_7", 7500, -1);
								iLocal_415 = 1;
							}
						}
						else if (iLocal_314 == 0)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
							AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_108 = MISC::GET_GAME_TIMER();
							_SHOW_SUBTITLE_CLEAR_EXISTING("GOD_4", 7500, -1);
							iLocal_314 = 1;
						}
					}
					else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						iLocal_60 = 0;
						iLocal_26 = 4;
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_56))
						HUD::REMOVE_BLIP(&blLocal_56);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_30, false))
					{
						if (!HUD::DOES_BLIP_EXIST(blLocal_59))
						{
							blLocal_59 = func_157(veLocal_30, false, false);
							HUD::SET_BLIP_AS_FRIENDLY(blLocal_59, true);
						
							if (HUD::IS_MESSAGE_BEING_DISPLAYED())
								HUD::CLEAR_PRINTS();
						
							if (iLocal_393 == 0)
							{
								_SHOW_SUBTITLE_CLEAR_EXISTING("GOD_6", 7500, -1);
								iLocal_393 = 1;
							}
						
							if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("HELP_1"))
								func_156("HELP_1");
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(blLocal_59))
					HUD::REMOVE_BLIP(&blLocal_59);
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
				{
					if (!HUD::DOES_BLIP_EXIST(blLocal_56))
					{
						blLocal_56 = func_157(veLocal_31, false, false);
						HUD::SET_BLIP_AS_FRIENDLY(blLocal_56, true);
					}
				}
			
				if (iLocal_313 == 0)
				{
					HUD::CLEAR_PRINTS();
					_SHOW_SUBTITLE_CLEAR_EXISTING("GOD_5", 7500, -1);
					iLocal_313 = 1;
				}
			}
		}
	}

	return;
}

void func_162(int iParam0, BOOL bParam1) // Position - 0x90F9
{
	int i;

	Global_64176 = iParam0;

	if (!Global_64174)
		Global_64174 = true;

	if (bParam1)
	{
		for (i = 0; i < Global_76261; i = i + 1)
		{
			if (Global_76262[i /*9*/] == iParam0)
				Global_76262[i /*9*/].f_1 = 0;
		}
	}

	return;
}

void func_163() // Position - 0x9143
{
	if (iLocal_60 == 0)
	{
		if (iLocal_302 == 1)
		{
			func_35();
			iLocal_302 = 0;
		}
	
		func_186();
		func_124();
	
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			CAM::DO_SCREEN_FADE_IN(800);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_98010[3]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98010[3], false))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_98010[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010[3], true, true);
					func_165(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
			
				if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_98010[3])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_98010[3])) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_98010[3])) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_98010[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98010[3], true, true);
					func_165(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
	
		func_164(79);
		iLocal_394 = 1;
		iLocal_60 = 1;
	}

	if (iLocal_60 == 1)
	{
		iLocal_60 = 0;
		iLocal_26 = 3;
	}

	return;
}

void func_164(int iParam0) // Position - 0x9270
{
	if (Global_98435 != -1)
	{
		if (iParam0 == Global_98435)
		{
			Global_98439 = 1;
			return;
		}
	}

	return;
}

void func_165(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5) // Position - 0x9294
{
	var unk;
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(Global_104530.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104530.f_4, false))
		{
			if (func_185(24) != Global_104530.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_182(ENTITY::GET_ENTITY_COORDS(Global_104530.f_4, true), iParam5, &unk, &num))
					{
						fParam0 = { unk };
						fParam3 = num;
					}
				}
			
				func_166(Global_104530.f_4, fParam0, fParam3, 24, false);
			}
		}
	}

	return;
}

void func_166(Vehicle veParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6) // Position - 0x930F
{
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (iParam5 != 24 && iParam5 != 25)
			return;
	
		if (iParam5 == 24)
			if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_78179.f_484[25], false))
				if (Global_78179.f_484[25] == veParam0)
					return;
	
		if (!bParam6)
			if (VEHICLE::IS_BIG_VEHICLE(veParam0) || ENTITY::GET_ENTITY_MODEL(veParam0) == -713569950 || ENTITY::GET_ENTITY_MODEL(veParam0) == 1941029835)
				return;
	
		func_181(iParam5);
		unk.f_9 = 49;
		unk.f_59 = 2;
		func_41(veParam0, &unk);
	
		if (func_115(uParam1, 0f, 0f, 0f, false))
		{
			uParam1 = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(veParam0);
		}
	
		if (iParam5 == 24)
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != 241912366)
				Global_79167 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	
		func_179(iParam5, &unk, uParam1, fParam4, func_63(veParam0));
		func_167(iParam5, veParam0, 0);
	}

	return;
}

void func_167(int iParam0, Vehicle veParam1, int iParam2) // Position - 0x9438
{
	Vehicle vehicle;

	if (iParam0 == -1)
		return;

	if (!func_73(&Global_78179.f_555[0 /*21*/], iParam0))
		return;

	if (!IS_BIT_SET(Global_78179.f_555[0 /*21*/].f_9, 12) && !IS_BIT_SET(Global_78179.f_555[0 /*21*/].f_9, 10))
		if (Global_78179.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(veParam1))
			return;

	if (Global_79086 != -1 && Global_79086 != iParam0)
		return;

	if (ENTITY::DOES_ENTITY_EXIST(veParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(veParam1))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veParam1, true, true);
		
			if (iParam0 == 24)
				Global_113969.f_32753.f_4801 = func_168();
		
			if (veParam1 != Global_78179.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					vehicle = func_185(iParam0);
				
					if (ENTITY::DOES_ENTITY_EXIST(vehicle) && VEHICLE::IS_VEHICLE_DRIVEABLE(vehicle, false) && veParam1 != vehicle)
						func_40(vehicle, _CHAR_NULL);
				}
			
				Global_79085 = veParam1;
				Global_79086 = iParam0;
				Global_79087 = iParam2;
			}
		}
	}

	return;
}

var func_168() // Position - 0x954F
{
	var unk;

	func_178(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_177(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_176(&unk, CLOCK::GET_CLOCK_HOURS());
	func_171(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_170(&unk, CLOCK::GET_CLOCK_MONTH());
	func_169(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_169(var uParam0, int iParam1) // Position - 0x9595
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

void func_170(var uParam0, int iParam1) // Position - 0x961B
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_171(var uParam0, int iParam1) // Position - 0x964E
{
	int num;
	int num2;

	num = func_175(*uParam0);
	num2 = func_173(*uParam0);

	if (iParam1 < 1 || iParam1 > func_172(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_172(int iParam0, int iParam1) // Position - 0x969F
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

int func_173(int iParam0) // Position - 0x9741
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_174(BOOL bParam0, var uParam1, var uParam2) // Position - 0x9763
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_175(int iParam0) // Position - 0x977A
{
	return iParam0 & 15;
}

void func_176(var uParam0, int iParam1) // Position - 0x9787
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_177(var uParam0, int iParam1) // Position - 0x97C1
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_178(var uParam0, int iParam1) // Position - 0x97FC
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_179(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, eCharacter echParam6) // Position - 0x9838
{
	if (func_73(&Global_78179.f_555[0 /*21*/], iParam0))
	{
		if (IS_BIT_SET(Global_78179.f_555[0 /*21*/].f_9, 10))
		{
			func_180(iParam0);
			func_70(uParam1, &Global_113969.f_32753.f_69[Global_78179.f_555[0 /*21*/].f_14 /*78*/]);
		
			if (IS_BIT_SET(Global_78179.f_555[0 /*21*/].f_9, 11))
			{
				Global_113969.f_32753.f_1864[Global_78179.f_555[0 /*21*/].f_14 /*3*/] = { uParam2 };
				Global_113969.f_32753.f_1934[Global_78179.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_113969.f_32753.f_1864[Global_78179.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113969.f_32753.f_1934[Global_78179.f_555[0 /*21*/].f_14] = -1f;
			}
		
			Global_113969.f_32753.f_1958[Global_78179.f_555[0 /*21*/].f_14] = echParam6 + 1;
			func_66(iParam0, true);
		}
	}

	return;
}

void func_180(int iParam0) // Position - 0x9931
{
	if (iParam0 == -1)
		return;

	if (func_73(&Global_78179.f_555[0 /*21*/], iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78179.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_78179.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_78179.f_139[iParam0]);
			Global_78179.f_139[iParam0] = 0;
		}
	
		if (IS_BIT_SET(Global_78179.f_555[0 /*21*/].f_9, 13))
			func_66(iParam0, false);
	}

	return;
}

void func_181(int iParam0) // Position - 0x99A8
{
	iParam0 != 24 && iParam0 != 25;
	func_180(iParam0);
	func_66(iParam0, false);
	return;
}

BOOL func_182(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) // Position - 0x99CF
{
	int num;

	num = func_183(uParam0, iParam3, 1);

	switch (num)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return true;
	
		case 1:
		case 2:
			*uParam4 = { 1992.5234f, 3813.9158f, 31.1008f };
			*uParam5 = 122.1498f;
			return true;
	
		case 3:
			*uParam4 = { -1184.2582f, -1496.5555f, 3.3895f };
			*uParam5 = 303.2098f;
			return true;
	
		case 4:
			*uParam4 = { 118.1067f, -1325.9058f, 28.3706f };
			*uParam5 = 123.5016f;
			return true;
	
		case 5:
			*uParam4 = { -18.118f, -1455.1265f, 29.5004f };
			*uParam5 = 273.2822f;
			return true;
	
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.46439f };
			*uParam5 = 310.7556f;
			return true;
	
		default:
			break;
	}

	return false;
}

int func_183(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x9AE5
{
	int i;
	float distanceBetweenCoords;
	float num;
	int num2;

	num = 1000000f;
	num2 = 10;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (Global_96551[i /*10*/].f_7 != 263)
		{
			if (Global_96551[i /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_184(i) || iParam4 == 0)
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_96551[i /*10*/].f_3, true);
				
					if (distanceBetweenCoords < num)
					{
						num = distanceBetweenCoords;
						num2 = i;
					}
				}
			}
		}
	}

	return num2;
}

BOOL func_184(int iParam0) // Position - 0x9B74
{
	return IS_BIT_SET(Global_113969.f_7232[iParam0], 0);
}

Vehicle func_185(int iParam0) // Position - 0x9B89
{
	if (iParam0 == -1)
		return 0;

	return Global_78179.f_139[iParam0];
}

void func_186() // Position - 0x9BA5
{
	Global_95691 = 1;
	return;
}

void func_187() // Position - 0x9BB2
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
	iLocal_51 = PED::ADD_SCENARIO_BLOCKING_AREA(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, false, true, true, true, 1);
	iLocal_52 = PED::ADD_SCENARIO_BLOCKING_AREA(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, false, true, true, true, 1);
	iLocal_53 = PED::ADD_SCENARIO_BLOCKING_AREA(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, false, true, true, true, 1);
	iLocal_54 = PED::ADD_SCENARIO_BLOCKING_AREA(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, false, true, true, true, 1);
	iLocal_49 = PED::ADD_SCENARIO_BLOCKING_AREA(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, false, true, true, true, 1);
	iLocal_50 = PED::ADD_SCENARIO_BLOCKING_AREA(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, false, true, true, true, 1);

	if (_IS_MISSION_REPLAY_IN_PROGRESS())
	{
		if (Global_95690 == 1)
		{
			func_189(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_481 = 1;
			iLocal_302 = 1;
			iLocal_60 = 0;
			iLocal_26 = 5;
		}
		else if (func_188() == 0)
		{
			if (func_123() && func_120(7f, 7f, 7f, 1))
				func_189(818.8139f, -1610.4055f, 30.7951f, 264.412f, 1, 0);
			else
				func_189(825.5603f, -1605.8247f, 30.9548f, 312.5221f, 1, 0);
		
			iLocal_302 = 1;
			iLocal_481 = 1;
			iLocal_60 = 0;
			iLocal_26 = 3;
		}
	}
	else if (_IS_MISSION_REPEAT_ACTIVE(false))
	{
		iLocal_302 = 1;
		iLocal_481 = 1;
		iLocal_60 = 0;
		iLocal_26 = 3;
	}
	else
	{
		iLocal_60 = 0;
		iLocal_26 = 2;
	}

	return;
}

int func_188() // Position - 0x9D7F
{
	if (!(Global_101533 == 10) && !(Global_101533 == 9))
		return 0;

	return Global_101533.f_2;
}

void func_189(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5) // Position - 0x9DA9
{
	if (_IS_MISSION_REPLAY_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_101533.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	
		Global_101529 = { fParam0 };
		Global_101532 = fParam3;
		Global_101528 = 1;
	
		if (iParam4 == 1)
			MISC::SET_BIT(&(Global_101533.f_20), 14);
		else
			MISC::CLEAR_BIT(&(Global_101533.f_20), 14);
	
		if (iParam5 == 1)
			MISC::SET_BIT(&(Global_101533.f_20), 24);
		else
			MISC::CLEAR_BIT(&(Global_101533.f_20), 24);
	
		func_29(1);
	}

	return;
}

void func_190() // Position - 0x9E3E
{
	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
		iLocal_26 = 1;
	else
		iLocal_26 = 1;

	return;
}

void func_191() // Position - 0x9E57
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_47))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 45f, -616.2f, 30.8f, true) < 150f)
		{
			STREAMING::REQUEST_MODEL(-681004504);
		
			if (STREAMING::HAS_MODEL_LOADED(-681004504))
			{
				pedLocal_47 = PED::CREATE_PED(PED_TYPE_MISSION, -681004504, 64.904f, -617.9949f, 30.7028f, 223.555f, true, true);
				PED::SET_PED_CONFIG_FLAG(pedLocal_47, 324, true);
			}
		
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-681004504);
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_47))
	{
		if (!PED::IS_PED_INJURED(pedLocal_47))
		{
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(65.2f, -617.2f, 30.8f, 5f, false))
			{
				if (iLocal_454 == 0)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_47))
						TASK::CLEAR_PED_TASKS(pedLocal_47);
					else
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_47);
				
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(pedLocal_47, 65.2f, -617.2f, 31f, 2f, 0);
					PED::SET_PED_KEEP_TASK(pedLocal_47, true);
					iLocal_111 = MISC::GET_GAME_TIMER();
					iLocal_454 = 1;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_111 + 5000)
				{
					if (!PED::IS_PED_USING_ANY_SCENARIO(pedLocal_47))
						iLocal_454 = 0;
				}
			}
		
			if (func_193(PLAYER::PLAYER_PED_ID(), pedLocal_47, true) < 20f)
			{
				if (iLocal_419 == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_47, PLAYER::PLAYER_PED_ID(), -1, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 3);
					iLocal_419 = 1;
				}
			}
			else if (iLocal_419 == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_47, PLAYER::PLAYER_PED_ID(), 1, 0, 2);
				iLocal_419 = 0;
			}
		}
	}

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 45f, -616.2f, 30.8f, true) < 50f)
	{
		if (iLocal_455 == 0)
		{
			hLocal_112 = 498972213;
			hLocal_113 = -512924631;
			OBJECT::ADD_DOOR_TO_SYSTEM(hLocal_112, -1184516519, 61f, -633f, 32f, true, true, false, 0);
			OBJECT::ADD_DOOR_TO_SYSTEM(hLocal_113, -1184516519, 66f, -618f, 32f, true, true, false, 0);
			iLocal_455 = 1;
		}
	
		if (iLocal_455 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (fLocal_117 > 35f)
				{
					if (fLocal_133 < 1f)
						fLocal_133 = fLocal_133 + 0.02f;
					else
						fLocal_133 = 1f;
				
					if (fLocal_133 <= 1f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hLocal_112, fLocal_133, false, true);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hLocal_113, fLocal_133, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_112, 4, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_113, 4, false, true);
						iLocal_420 = 0;
					}
				}
			
				if (fLocal_117 < 35f)
				{
					if (fLocal_133 > 0f)
						fLocal_133 = fLocal_133 - 0.02f;
					else
						fLocal_133 = 0f;
				
					if (fLocal_133 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hLocal_112, fLocal_133, false, true);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hLocal_113, fLocal_133, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_112, 4, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_113, 4, false, true);
						iLocal_420 = 0;
					}
				}
			}
			else if (iLocal_420 == 0)
			{
				if (fLocal_117 < 35f)
				{
					if (fLocal_133 > 0f)
						fLocal_133 = fLocal_133 - 0.02f;
					else
						fLocal_133 = 0f;
				
					if (fLocal_133 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hLocal_112, fLocal_133, false, true);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hLocal_113, fLocal_133, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_112, 4, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_113, 4, false, true);
						iLocal_420 = 1;
					}
				}
			}
		}
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 62.901512f, -638.6329f, 29.918798f, 70.78919f, -617.1338f, 36.917885f, 10.75f, false, true, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_47))
			{
				if (!PED::IS_PED_INJURED(pedLocal_47))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_417 == 0)
						{
							if (iLocal_416 == 0)
							{
								_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 4, pedLocal_47, "FHPBSecGuard", 0, 1);
							
								if (_CONVERSATION_ADD_LINE(&uLocal_135, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
									iLocal_416 = 1;
							}
						}
						else if (iLocal_418 == 0)
						{
							_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 4, pedLocal_47, "FHPBSecGuard", 0, 1);
						
							if (_CONVERSATION_ADD_LINE(&uLocal_135, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
								iLocal_418 = 1;
						}
					}
					else if (iLocal_417 == 0)
					{
						_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 4, pedLocal_47, "FHPBSecGuard", 0, 1);
					
						if (_CONVERSATION_ADD_LINE(&uLocal_135, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
							iLocal_417 = 1;
					}
				}
			}
		}
	}

	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA22D
{
	func_153(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_141(sParam2, iParam3, false);
}

float func_193(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0xA27B
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

void func_194() // Position - 0xA2D9
{
	int weaponHash;

	if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (iLocal_26 == 3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iLocal_29 == 0)
				{
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
					{
						if (iLocal_27 == 1)
						{
							if (iLocal_390 == 0)
							{
								if (func_196() && func_195())
								{
									if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_110 = MISC::GET_GAME_TIMER();
										iLocal_390 = 1;
									}
								}
							}
						}
					
						if (iLocal_27 == 1)
							if (iLocal_390 == 1 && MISC::GET_GAME_TIMER() > iLocal_110 + 7000)
								if (func_196() && func_195())
									if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
										iLocal_110 = MISC::GET_GAME_TIMER();
					}
				
					if (iLocal_27 == 2)
					{
						if (iLocal_428 == 0)
						{
							if (func_196())
							{
								if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_93 = MISC::GET_GAME_TIMER();
									iLocal_428 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_29 == 2 && iLocal_27 == 1)
				{
					if (iLocal_453 == 0)
					{
						if (func_196() && func_195())
						{
							if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_106 = MISC::GET_GAME_TIMER();
								iLocal_453 = 1;
							}
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_106 + 8000)
					{
						if (func_196() && func_195())
							if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
								iLocal_106 = MISC::GET_GAME_TIMER();
					}
				}
			
				if (iLocal_27 == 4)
				{
					if (iLocal_389 == 0)
					{
						func_130();
					
						if (func_196())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
						
							if (weaponHash != -1569615261 && weaponHash != 0)
							{
								if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_75 = MISC::GET_GAME_TIMER();
									iLocal_385 = 1;
									iLocal_389 = 1;
								}
							}
							else
							{
								iLocal_75 = MISC::GET_GAME_TIMER();
								iLocal_385 = 1;
								iLocal_389 = 1;
							}
						}
					}
				
					if (iLocal_389 == 1)
					{
						if (iLocal_385 == 0)
						{
							iLocal_75 = MISC::GET_GAME_TIMER();
							iLocal_385 = 1;
						}
					
						if (iLocal_385 == 1)
							if (MISC::GET_GAME_TIMER() > iLocal_75 + 9000)
								if (func_196())
									if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
										iLocal_385 = 0;
					}
				}
			
				if (iLocal_27 == 3)
				{
					if (iLocal_425 == 1)
						if (iLocal_387 == 0)
							if (iLocal_388 == 1)
								if (func_196())
									if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
										iLocal_387 = 1;
				
					if (iLocal_386 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, false))
								{
									if (func_196())
									{
										if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_76 = MISC::GET_GAME_TIMER();
											iLocal_387 = 1;
										}
									}
								}
							}
						}
					}
				
					if (MISC::GET_GAME_TIMER() > iLocal_76 + 10000)
						if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, false))
									if (func_196())
										if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
											iLocal_76 = MISC::GET_GAME_TIMER();
				
					if (iLocal_426 == 1)
						if (iLocal_427 == 0)
							if (func_196())
								if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
									iLocal_427 = 1;
				}
			}
		}
	}

	return;
}

BOOL func_195() // Position - 0xA617
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
	{
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		return 1;
	}

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
	{
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		return 1;
	}

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
	{
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		return 1;
	}

	return 0;
}

BOOL func_196() // Position - 0xA677
{
	Ped ped;

	for (iLocal_64 = 0; iLocal_64 <= 6; iLocal_64 = iLocal_64 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_64]))
		{
			if (!PED::IS_PED_INJURED(uLocal_33[iLocal_64]))
			{
				ped = func_197(PLAYER::PLAYER_PED_ID(), hLocal_300, 0, 0, -1);
			
				if (ENTITY::DOES_ENTITY_EXIST(ped))
					!PED::IS_PED_INJURED(ped);
			
				if (ped == uLocal_33[iLocal_64] && func_193(PLAYER::PLAYER_PED_ID(), ped, true) < 15f)
				{
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 5, uLocal_33[iLocal_64], "CONSTRUCTION3", 0, 1);
					return true;
				}
			}
		}
	}

	return false;
}

Ped func_197(Ped pedParam0, Hash hParam1, int iParam2, int iParam3, int iParam4) // Position - 0xA709
{
	int sizeAndPeds;
	int i;

	sizeAndPeds = 16;
	i = 0;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		PED::GET_PED_NEARBY_PEDS(pedParam0, &sizeAndPeds, iParam4);
	
		for (i = 0; i <= sizeAndPeds - 1; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(sizeAndPeds[i]))
				if (!PED::IS_PED_INJURED(sizeAndPeds[i]))
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(sizeAndPeds[i]) == hParam1)
						if (iParam2 <= 0)
							if (iParam3 == 1)
								if (ENTITY::IS_ENTITY_ON_SCREEN(sizeAndPeds[i]))
									return sizeAndPeds[i];
							else
								return sizeAndPeds[i];
						else if (i + iParam2 <= sizeAndPeds - 1)
							if (ENTITY::DOES_ENTITY_EXIST(sizeAndPeds[i + iParam2]))
								if (!PED::IS_PED_INJURED(sizeAndPeds[i + iParam2]))
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(sizeAndPeds[i + iParam2]) == hParam1)
										if (iParam3 == 1)
											if (ENTITY::IS_ENTITY_ON_SCREEN(sizeAndPeds[i + iParam2]))
												return sizeAndPeds[i + iParam2];
										else
											return sizeAndPeds[i + iParam2];
		}
	}

	return 0;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0xA810
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_199() // Position - 0xA832
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		else
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);

	func_206();

	if (uLocal_402[0])
	{
		if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 20f && PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()))
		{
			if (uLocal_431[0] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(uLocal_41[0], PLAYER::PLAYER_PED_ID(), -1, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 3);
				uLocal_431[0] = 1;
			}
		
			if (uLocal_431[0] == 1)
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_41[0], SCRIPT_TASK_LOOK_AT_ENTITY) != 0 || TASK::GET_SCRIPT_TASK_STATUS(uLocal_41[0], SCRIPT_TASK_LOOK_AT_ENTITY) != 1)
					uLocal_431[0] = 0;
		}
		else if (uLocal_431[0] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(uLocal_41[0], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			uLocal_431[0] = 0;
		}
	}

	if (uLocal_402[1])
	{
		if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 20f && PED::CAN_PED_SEE_HATED_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID()))
		{
			if (uLocal_431[1] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(uLocal_41[1], PLAYER::PLAYER_PED_ID(), -1, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 3);
				uLocal_431[1] = 1;
			}
		
			if (uLocal_431[1] == 1)
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_41[1], SCRIPT_TASK_LOOK_AT_ENTITY) != 0 || TASK::GET_SCRIPT_TASK_STATUS(uLocal_41[1], SCRIPT_TASK_LOOK_AT_ENTITY) != 1)
					uLocal_431[1] = 0;
		}
		else if (uLocal_431[1] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(uLocal_41[1], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			uLocal_431[1] = 0;
		}
	}

	if (uLocal_402[0] && uLocal_402[1])
	{
		if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true))
		{
			iLocal_397 = 1;
			iLocal_398 = 0;
		}
		else
		{
			iLocal_397 = 0;
			iLocal_398 = 1;
		}
	}
	else
	{
		if (uLocal_402[0] && !uLocal_402[1])
		{
			iLocal_397 = 1;
			iLocal_398 = 0;
		}
	
		if (uLocal_402[1] && !uLocal_402[0])
		{
			iLocal_397 = 0;
			iLocal_398 = 1;
		}
	}

	switch (iLocal_29)
	{
		case 0:
			if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
			{
				if (!TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
					TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", true);
			
				if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_41[0]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(uLocal_41[0]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(863.1551f, -1564.5721f, 29.3231f, 5f, true))
								{
									uLocal_103[0] = MISC::GET_GAME_TIMER();
								
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_41[0]))
									{
										if (uLocal_460[0] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_41[0], 863.1551f, -1564.5721f, 29.3231f, 5f, 0);
											uLocal_457[0] = 0;
											uLocal_460[0] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > uLocal_103[0] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_41[0], true), 863.1551f, -1564.5721f, 29.3231f, true) > 3f)
									{
										if (uLocal_457[0] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_41[0], 863.1551f, -1564.5721f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											uLocal_460[0] = 0;
											uLocal_457[0] = 1;
										}
									}
								}
							}
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[1]))
					{
						if (!PED::IS_PED_INJURED(uLocal_41[1]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(uLocal_41[1]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(940.2881f, -1573.8774f, 29.3866f, 5f, true))
								{
									uLocal_103[1] = MISC::GET_GAME_TIMER();
								
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_41[1]))
									{
										if (uLocal_460[1] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_41[1], 940.2881f, -1573.8774f, 29.3866f, 5f, 0);
											uLocal_457[1] = 0;
											uLocal_460[1] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > uLocal_103[1] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_41[1], true), 940.2881f, -1573.8774f, 29.3866f, true) > 3f)
									{
										if (uLocal_457[1] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_41[1], 940.2881f, -1573.8774f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											uLocal_460[1] = 0;
											uLocal_457[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[0]))
			{
				if (!PED::IS_PED_INJURED(uLocal_41[0]))
				{
					if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 20f)
					{
						if (func_205(PLAYER::PLAYER_PED_ID()) == -1569615261 || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_204(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_41[0], 100f) || PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.5804f, 28.817883f, 865.0807f, -1575.0884f, 30.933239f, 5.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.2284f, 28.277218f, 863.17645f, -1563.2878f, 33.313747f, 4.75f, false, true, 0))
								{
									if (uLocal_449[0] == 0)
									{
										if (!PED::IS_PED_FACING_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[0]))
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[0]);
											else
												TASK::CLEAR_PED_TASKS(uLocal_41[0]);
										
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_41[0], PLAYER::PLAYER_PED_ID(), 5000);
											uLocal_100[0] = MISC::GET_GAME_TIMER();
											func_203(uLocal_41[0]);
											uLocal_449[0] = 1;
										}
									}
								
									if (uLocal_449[0] == 1)
										if (MISC::GET_GAME_TIMER() > uLocal_100[0] + 5000)
											uLocal_449[0] = 0;
								
									if (uLocal_405[0] == 0 && uLocal_405[1] == 0)
									{
										if (iLocal_401 == 0)
										{
											func_201(uLocal_41[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6, false);
											iLocal_80 = MISC::GET_GAME_TIMER();
											iLocal_401 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_80 + 15000)
										{
											func_201(uLocal_41[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9, false);
											iLocal_80 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (uLocal_405[0] == 1)
										{
											if (iLocal_408 == 0)
											{
												func_201(uLocal_41[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9, false);
												iLocal_86 = MISC::GET_GAME_TIMER();
												iLocal_408 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_86 + 15000)
											{
												func_201(uLocal_41[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9, false);
												iLocal_86 = MISC::GET_GAME_TIMER();
											}
										}
									
										if (uLocal_405[1] == 1)
										{
											if (iLocal_409 == 0)
											{
												func_201(uLocal_41[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9, false);
												iLocal_87 = MISC::GET_GAME_TIMER();
												iLocal_409 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_87 + 15000)
											{
												func_201(uLocal_41[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9, false);
												iLocal_87 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[1]))
			{
				if (!PED::IS_PED_INJURED(uLocal_41[1]))
				{
					if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 15f)
					{
						if (func_205(PLAYER::PLAYER_PED_ID()) == -1569615261 || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_204(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_41[1], 100f))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.88617f, -1575.6354f, 28.597832f, 952.9254f, -1575.4835f, 33.194588f, 13.75f, false, true, 0))
								{
									if (uLocal_449[1] == 0)
									{
										if (!PED::IS_PED_FACING_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[1]))
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[1]);
											else
												TASK::CLEAR_PED_TASKS(uLocal_41[1]);
										
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_41[1], PLAYER::PLAYER_PED_ID(), 5000);
											uLocal_100[1] = MISC::GET_GAME_TIMER();
											func_203(uLocal_41[1]);
											uLocal_449[1] = 1;
										}
									}
								
									if (uLocal_449[1] == 1)
										if (MISC::GET_GAME_TIMER() > uLocal_100[1] + 5000)
											uLocal_449[1] = 0;
								
									if (uLocal_405[0] == 0 && uLocal_405[1] == 0)
									{
										if (iLocal_401 == 0)
										{
											func_201(uLocal_41[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6, false);
											iLocal_80 = MISC::GET_GAME_TIMER();
											iLocal_401 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_80 + 15000)
										{
											func_201(uLocal_41[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9, false);
											iLocal_80 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (uLocal_405[1] == 1)
										{
											if (iLocal_408 == 0)
											{
												func_201(uLocal_41[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6, false);
												iLocal_86 = MISC::GET_GAME_TIMER();
												iLocal_408 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_86 + 15000)
											{
												func_201(uLocal_41[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9, false);
												iLocal_86 = MISC::GET_GAME_TIMER();
											}
										}
									
										if (uLocal_405[0] == 1)
										{
											if (iLocal_409 == 0)
											{
												func_201(uLocal_41[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6, false);
												iLocal_87 = MISC::GET_GAME_TIMER();
												iLocal_409 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_87 + 15000)
											{
												func_201(uLocal_41[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9, false);
												iLocal_87 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	
		case 2:
			if (iLocal_481 == 0)
				iLocal_481 = 1;
		
			if (func_200() || iLocal_396 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_41[0]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()))
						{
							uLocal_97[0] = MISC::GET_GAME_TIMER();
							uLocal_443[0] = 1;
						
							if (uLocal_440[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[0]))
									TASK::CLEAR_PED_TASKS(uLocal_41[0]);
								else
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[0]);
							
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_41[0], BF_CanCharge, true);
								TASK::TASK_COMBAT_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_203(uLocal_41[0]);
								uLocal_440[0] = 1;
							}
						}
						else if (uLocal_446[0] == 0)
						{
							if (uLocal_443[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[0]))
									TASK::CLEAR_PED_TASKS(uLocal_41[0]);
								else
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[0]);
							
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_41[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_203(uLocal_41[0]);
								uLocal_446[0] = 1;
							}
						
							if (uLocal_443[0] == 1)
							{
								if (MISC::GET_GAME_TIMER() > uLocal_97[0] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[0]))
										TASK::CLEAR_PED_TASKS(uLocal_41[0]);
									else
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[0]);
								
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_41[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_203(uLocal_41[0]);
									uLocal_446[0] = 1;
								}
							}
						}
					}
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_41[1]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID()))
						{
							uLocal_97[1] = MISC::GET_GAME_TIMER();
							uLocal_443[1] = 1;
						
							if (uLocal_440[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[1]))
									TASK::CLEAR_PED_TASKS(uLocal_41[1]);
								else
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[1]);
							
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_41[1], BF_CanCharge, true);
								TASK::TASK_COMBAT_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_203(uLocal_41[1]);
								uLocal_440[1] = 1;
							}
						}
						else if (uLocal_446[1] == 0)
						{
							if (uLocal_443[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[1]))
									TASK::CLEAR_PED_TASKS(uLocal_41[1]);
								else
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[1]);
							
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_41[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_203(uLocal_41[1]);
								uLocal_446[1] = 1;
							}
						
							if (uLocal_443[1] == 1)
							{
								if (MISC::GET_GAME_TIMER() > uLocal_97[1] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[1]))
										TASK::CLEAR_PED_TASKS(uLocal_41[1]);
									else
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[1]);
								
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_41[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_203(uLocal_41[1]);
									uLocal_446[1] = 1;
								}
							}
						}
					}
				}
			
				if (func_200())
				{
					if (iLocal_410 == 0)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							iLocal_410 = 1;
						}
					}
				
					if (iLocal_397 == 1)
					{
						if (iLocal_399 == 0)
						{
							if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[0]))
								{
									func_201(uLocal_41[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11, false);
									iLocal_85 = MISC::GET_GAME_TIMER();
									iLocal_399 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_85 + 7000)
						{
							if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[0]))
								{
									func_201(uLocal_41[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9, false);
									iLocal_85 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				
					if (iLocal_398 == 1)
					{
						if (iLocal_399 == 0)
						{
							if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[1]))
								{
									func_201(uLocal_41[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9, false);
									iLocal_85 = MISC::GET_GAME_TIMER();
									iLocal_399 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_85 + 7000)
						{
							if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[1]))
								{
									func_201(uLocal_41[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9, false);
									iLocal_85 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_456 == 0)
					{
						pedLocal_48 = func_197(PLAYER::PLAYER_PED_ID(), -1533126372, 0, 0, 28);
					
						if (pedLocal_48 != 0)
							if (ENTITY::DOES_ENTITY_EXIST(pedLocal_48))
								if (!PED::IS_PED_INJURED(pedLocal_48))
									if (func_193(PLAYER::PLAYER_PED_ID(), pedLocal_48, true) < 35f)
										iLocal_456 = 1;
					}
				
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_456 == 0)
					{
						if (iLocal_397 == 1)
						{
							if (iLocal_400 == 0)
							{
								if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[0]))
									{
										func_201(uLocal_41[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9, false);
										iLocal_84 = MISC::GET_GAME_TIMER();
										iLocal_400 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_84 + 7000)
							{
								if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[0]))
									{
										func_201(uLocal_41[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9, false);
										iLocal_84 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					
						if (iLocal_398 == 1)
						{
							if (iLocal_400 == 0)
							{
								if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[1]))
									{
										func_201(uLocal_41[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9, false);
										iLocal_84 = MISC::GET_GAME_TIMER();
										iLocal_400 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_84 + 7000)
							{
								if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[1]))
									{
										func_201(uLocal_41[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9, false);
										iLocal_84 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
		
			if (!func_200())
			{
				if (iLocal_412 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 893.2f, -1556.5f, 30f, true) < 18f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[0]))
						{
							if (!PED::IS_PED_INJURED(uLocal_41[0]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_79 = MISC::GET_GAME_TIMER();
									iLocal_412 = 1;
								}
							}
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[1]))
						{
							if (!PED::IS_PED_INJURED(uLocal_41[1]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_79 = MISC::GET_GAME_TIMER();
									iLocal_412 = 1;
								}
							}
						}
					}
				}
			
				if (iLocal_396 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_41[0]))
						{
							if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()))
								{
									if (uLocal_434[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[0]))
											TASK::CLEAR_PED_TASKS(uLocal_41[0]);
										else
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[0]);
									
										TASK::TASK_GO_TO_ENTITY(uLocal_41[0], PLAYER::PLAYER_PED_ID(), -1, 1056964608, 1073741824, 1073741824, 0);
										func_203(uLocal_41[0]);
										uLocal_434[0] = 1;
									}
								
									uLocal_94[0] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > uLocal_94[0] + 500)
								{
									if (uLocal_437[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[0]))
											TASK::CLEAR_PED_TASKS(uLocal_41[0]);
										else
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[0]);
									
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_41[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_203(uLocal_41[0]);
										uLocal_437[0] = 1;
									}
								}
							}
							else if (uLocal_482[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[0]))
									TASK::CLEAR_PED_TASKS(uLocal_41[0]);
								else
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[0]);
							
								TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(iLocal_55, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_41[0], iLocal_55);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
								func_203(uLocal_41[0]);
								uLocal_482[0] = 1;
							}
						
							if (iLocal_452 == 0)
							{
								if (iLocal_429 == 0 || iLocal_401 == 1)
								{
									if (iLocal_395 == 0)
									{
										if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[0]))
											{
												func_201(uLocal_41[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1, false);
												iLocal_81 = MISC::GET_GAME_TIMER();
												iLocal_82 = MISC::GET_GAME_TIMER();
												iLocal_79 = MISC::GET_GAME_TIMER();
												iLocal_412 = 1;
												iLocal_395 = 1;
												uLocal_405[0] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_81 + 7000)
									{
										if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[0]))
											{
												func_201(uLocal_41[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11, false);
												iLocal_81 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_401 == 0)
								{
									if (iLocal_430 == 0)
									{
										if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[0]))
											{
												func_201(uLocal_41[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8, false);
												iLocal_395 = 1;
												iLocal_430 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_82 + 7000)
							{
								if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 15f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[0]))
									{
										func_201(uLocal_41[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11, false);
										iLocal_82 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[1]))
					{
						if (!PED::IS_PED_INJURED(uLocal_41[1]))
						{
							if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID()))
								{
									if (uLocal_434[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[1]))
											TASK::CLEAR_PED_TASKS(uLocal_41[1]);
										else
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[1]);
									
										TASK::TASK_GO_TO_ENTITY(uLocal_41[1], PLAYER::PLAYER_PED_ID(), -1, 1056964608, 1073741824, 1073741824, 0);
										func_203(uLocal_41[1]);
										uLocal_434[1] = 1;
									}
								
									uLocal_94[1] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > uLocal_94[1] + 500)
								{
									if (uLocal_437[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[1]))
											TASK::CLEAR_PED_TASKS(uLocal_41[1]);
										else
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[1]);
									
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_41[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_203(uLocal_41[1]);
										uLocal_437[1] = 1;
									}
								}
							}
							else if (uLocal_482[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_41[1]))
									TASK::CLEAR_PED_TASKS(uLocal_41[1]);
								else
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_41[1]);
							
								TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(iLocal_55, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_41[1], iLocal_55);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
								func_203(uLocal_41[1]);
								uLocal_482[1] = 1;
							}
						
							if (iLocal_452 == 0)
							{
								if (iLocal_429 == 0 || iLocal_401 == 1)
								{
									if (iLocal_395 == 0)
									{
										if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[1]))
											{
												func_201(uLocal_41[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9, false);
												iLocal_81 = MISC::GET_GAME_TIMER();
												iLocal_83 = MISC::GET_GAME_TIMER();
												iLocal_79 = MISC::GET_GAME_TIMER();
												iLocal_412 = 1;
												iLocal_395 = 1;
												uLocal_405[1] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_81 + 7000)
									{
										if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[1]))
											{
												func_201(uLocal_41[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11, false);
												iLocal_81 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_401 == 0)
								{
									if (iLocal_430 == 0)
									{
										if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[1]))
											{
												func_201(uLocal_41[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8, false);
												iLocal_395 = 1;
												iLocal_430 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_83 + 7000)
							{
								if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 10f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_41[1]))
									{
										func_201(uLocal_41[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11, false);
										iLocal_83 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				
					if (iLocal_412 == 1)
						if (iLocal_452 == 0)
							if (MISC::GET_GAME_TIMER() > iLocal_79 + 22000)
								iLocal_452 = 1;
				
					if (iLocal_412 == 1)
					{
						if (iLocal_396 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_79 + 30000)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
								iLocal_396 = 1;
							}
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, true))
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID()))
									iLocal_396 = 1;
						
							if (func_193(PLAYER::PLAYER_PED_ID(), veLocal_31, true) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID()))
									iLocal_396 = 1;
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[0]))
						if (!PED::IS_PED_INJURED(uLocal_41[0]))
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()))
										iLocal_396 = 1;
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[1]))
						if (!PED::IS_PED_INJURED(uLocal_41[1]))
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID()))
										iLocal_396 = 1;
				}
			}
			break;
	}

	return;
}

BOOL func_200() // Position - 0xBF16
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		for (iLocal_78 = 0; iLocal_78 <= 6; iLocal_78 = iLocal_78 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_78]))
				if (!PED::IS_PED_INJURED(uLocal_33[iLocal_78]))
					if (func_205(PLAYER::PLAYER_PED_ID()) != -1569615261 && !func_204(0))
						if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_78], PLAYER::PLAYER_PED_ID()))
							return true;
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[0]))
			if (!PED::IS_PED_INJURED(uLocal_41[0]))
				if (func_205(PLAYER::PLAYER_PED_ID()) != -1569615261 && !func_204(0))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()))
						return true;
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[1]))
			if (!PED::IS_PED_INJURED(uLocal_41[1]))
				if (func_205(PLAYER::PLAYER_PED_ID()) != -1569615261 && !func_204(0))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID()))
						return true;
	}

	return false;
}

void func_201(Ped pedParam0, char* sParam1, char* sParam2, int iParam3, BOOL bParam4) // Position - 0xC01D
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(pedParam0, sParam1, sParam2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3), bParam4);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xC037
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

void func_203(var uParam0) // Position - 0xC22C
{
	if (uParam0 == uLocal_41[0])
	{
		uLocal_431[0] = 0;
		uLocal_457[0] = 0;
		uLocal_460[0] = 0;
		uLocal_449[0] = 0;
		uLocal_440[0] = 0;
		uLocal_446[0] = 0;
		uLocal_434[0] = 0;
		uLocal_437[0] = 0;
		uLocal_482[0] = 0;
	}

	if (uParam0 == uLocal_41[1])
	{
		uLocal_431[1] = 0;
		uLocal_457[1] = 0;
		uLocal_460[1] = 0;
		uLocal_449[1] = 0;
		uLocal_440[1] = 0;
		uLocal_446[1] = 0;
		uLocal_434[1] = 0;
		uLocal_437[1] = 0;
		uLocal_482[1] = 0;
	}

	return;
}

BOOL func_204(int iParam0) // Position - 0xC2C6
{
	if (iParam0 == 1)
		if (Global_20930.f_1 > 3)
			if (IS_BIT_SET(Global_8800, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) > 0)
		return true;

	if (Global_20930.f_1 > 3)
		return true;

	return false;
}

int func_205(Ped pedParam0) // Position - 0xC31D
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
	return weaponHash;
}

void func_206() // Position - 0xC331
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			fLocal_117 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[0]))
		if (!PED::IS_PED_INJURED(uLocal_41[0]))
			uLocal_123[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_41[0], true) };

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[1]))
		if (!PED::IS_PED_INJURED(uLocal_41[1]))
			uLocal_123[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_41[1], true) };

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[0]))
		if (!PED::IS_PED_INJURED(uLocal_41[0]))
			uLocal_402[0] = 1;
		else
			uLocal_402[0] = 0;
	else
		uLocal_402[0] = 0;

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[1]))
		if (!PED::IS_PED_INJURED(uLocal_41[1]))
			uLocal_402[1] = 1;
		else
			uLocal_402[1] = 0;
	else
		uLocal_402[1] = 0;

	if (iLocal_29 != 0)
	{
		if (iLocal_29 == 1)
		{
			if (uLocal_402[0] == 1)
			{
				if (uLocal_402[1] == 1)
				{
					if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true))
					{
						if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 20f)
						{
							if (fLocal_117 < uLocal_123[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_41[0], 90f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.4764f, 33.304478f, 866.56354f, -1560.9844f, 28.904823f, 8.25f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.2284f, 28.277218f, 863.17645f, -1563.2878f, 33.313747f, 4.75f, false, true, 0))
							{
								iLocal_29 = 0;
								uLocal_457[0] = 0;
								uLocal_460[0] = 0;
								uLocal_457[1] = 0;
								uLocal_460[1] = 0;
								uLocal_103[0] = MISC::GET_GAME_TIMER();
								uLocal_103[1] = MISC::GET_GAME_TIMER();
							}
						}
						else if (fLocal_117 < uLocal_123[0 /*3*/])
						{
							iLocal_29 = 0;
							uLocal_457[0] = 0;
							uLocal_460[0] = 0;
							uLocal_457[1] = 0;
							uLocal_460[1] = 0;
							uLocal_103[0] = MISC::GET_GAME_TIMER();
							uLocal_103[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 15f)
					{
						if (fLocal_117 > uLocal_123[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_41[1], 90f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.3374f, 31.496609f, 936.3553f, -1581.9734f, 27.778118f, 8.25f, false, true, 0))
						{
							iLocal_29 = 0;
							uLocal_457[0] = 0;
							uLocal_460[0] = 0;
							uLocal_457[1] = 0;
							uLocal_460[1] = 0;
							uLocal_103[0] = MISC::GET_GAME_TIMER();
							uLocal_103[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (fLocal_117 > uLocal_123[1 /*3*/])
					{
						iLocal_29 = 0;
						uLocal_457[0] = 0;
						uLocal_460[0] = 0;
						uLocal_457[1] = 0;
						uLocal_460[1] = 0;
						uLocal_103[0] = MISC::GET_GAME_TIMER();
						uLocal_103[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true))
				{
					if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 15f)
					{
						if (fLocal_117 < uLocal_123[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_41[0], 90f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.4764f, 33.304478f, 866.56354f, -1560.9844f, 28.904823f, 8.25f, false, true, 0))
						{
							iLocal_29 = 0;
							uLocal_457[0] = 0;
							uLocal_460[0] = 0;
							uLocal_457[1] = 0;
							uLocal_460[1] = 0;
							uLocal_103[0] = MISC::GET_GAME_TIMER();
							uLocal_103[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (fLocal_117 < uLocal_123[0 /*3*/])
					{
						iLocal_29 = 0;
						uLocal_457[0] = 0;
						uLocal_460[0] = 0;
						uLocal_457[1] = 0;
						uLocal_460[1] = 0;
						uLocal_103[0] = MISC::GET_GAME_TIMER();
						uLocal_103[1] = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (uLocal_402[1] == 1)
			{
				if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 15f)
				{
					if (fLocal_117 > uLocal_123[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_41[1], 90f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.3374f, 31.496609f, 936.3553f, -1581.9734f, 27.778118f, 8.25f, false, true, 0))
					{
						iLocal_29 = 0;
						uLocal_457[0] = 0;
						uLocal_460[0] = 0;
						uLocal_457[1] = 0;
						uLocal_460[1] = 0;
						uLocal_103[0] = MISC::GET_GAME_TIMER();
						uLocal_103[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (fLocal_117 > uLocal_123[1 /*3*/])
				{
					iLocal_29 = 0;
					uLocal_457[0] = 0;
					uLocal_460[0] = 0;
					uLocal_457[1] = 0;
					uLocal_460[1] = 0;
					uLocal_103[0] = MISC::GET_GAME_TIMER();
					uLocal_103[1] = MISC::GET_GAME_TIMER();
				}
			}
		}
	
		if (iLocal_29 == 2)
		{
			if (iLocal_396 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.3374f, 31.496609f, 936.3553f, -1581.9734f, 27.778118f, 8.25f, false, true, 0) || fLocal_117 > 942f)
				{
					if (!PED::IS_PED_INJURED(uLocal_41[1]))
					{
						if (fLocal_117 > uLocal_123[1 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_41[1], 90f))
							{
								iLocal_29 = 0;
								uLocal_457[0] = 0;
								uLocal_460[0] = 0;
								uLocal_457[1] = 0;
								uLocal_460[1] = 0;
								uLocal_103[0] = MISC::GET_GAME_TIMER();
								uLocal_103[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (fLocal_117 > 942f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_41[1], 90f))
						{
							iLocal_29 = 0;
							uLocal_457[0] = 0;
							uLocal_460[0] = 0;
							uLocal_457[1] = 0;
							uLocal_460[1] = 0;
							uLocal_103[0] = MISC::GET_GAME_TIMER();
							uLocal_103[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
			
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.4764f, 33.304478f, 866.56354f, -1560.9844f, 28.904823f, 8.25f, false, true, 0) || fLocal_117 < 860f)
				{
					if (!PED::IS_PED_INJURED(uLocal_41[0]))
					{
						if (fLocal_117 < uLocal_123[0 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_41[0], 90f))
							{
								iLocal_29 = 0;
								uLocal_457[0] = 0;
								uLocal_460[0] = 0;
								uLocal_457[1] = 0;
								uLocal_460[1] = 0;
								uLocal_103[0] = MISC::GET_GAME_TIMER();
								uLocal_103[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (fLocal_117 < 860f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_41[0], 90f))
						{
							iLocal_29 = 0;
							uLocal_457[0] = 0;
							uLocal_460[0] = 0;
							uLocal_457[1] = 0;
							uLocal_460[1] = 0;
							uLocal_103[0] = MISC::GET_GAME_TIMER();
							uLocal_103[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}

	if (iLocal_29 != 1)
	{
		if (iLocal_29 != 2)
		{
			if (uLocal_402[0] == 1)
			{
				if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 20f)
				{
					if (func_205(PLAYER::PLAYER_PED_ID()) == -1569615261 || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_204(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.5804f, 28.817883f, 865.0807f, -1575.0884f, 30.933239f, 5.75f, false, true, 0))
							if (fLocal_117 > uLocal_123[0 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_41[0], 90f))
								iLocal_29 = 1;
					
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.2284f, 28.277218f, 863.17645f, -1563.2878f, 33.313747f, 4.75f, false, true, 0))
							iLocal_29 = 1;
					}
				}
			}
		
			if (uLocal_402[1] == 1)
				if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 15f)
					if (func_205(PLAYER::PLAYER_PED_ID()) == -1569615261 || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_204(0))
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.88617f, -1575.6354f, 28.597832f, 952.9254f, -1575.4835f, 33.194588f, 13.75f, false, true, 0))
							if (fLocal_117 < uLocal_123[1 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_41[1], 90f))
								iLocal_29 = 1;
		}
	}

	if (iLocal_29 != 2)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_29 = 2;
			iLocal_396 = 1;
		}
	
		if (iLocal_480 == 1)
		{
			iLocal_29 = 2;
			iLocal_396 = 1;
		}
	
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[0]))
			{
				if (!PED::IS_PED_INJURED(uLocal_41[0]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_29 = 2;
						iLocal_396 = 1;
					}
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_41[1]))
			{
				if (!PED::IS_PED_INJURED(uLocal_41[1]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_29 = 2;
						iLocal_396 = 1;
					}
				}
			}
		}
	
		if (iLocal_429 == 0)
		{
			if (iLocal_428 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_93 + 4000)
				{
					for (iLocal_92 = 0; iLocal_92 <= 6; iLocal_92 = iLocal_92 + 1)
					{
						if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_92]))
							{
								if (!PED::IS_PED_INJURED(uLocal_33[iLocal_92]))
								{
									if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(uLocal_33[iLocal_92]))
									{
										iLocal_29 = 2;
										iLocal_429 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
	
		if (iLocal_27 == 4 || iLocal_27 == 3 || iLocal_428 == 1)
		{
			iLocal_29 = 2;
			iLocal_425 = 1;
			iLocal_396 = 1;
		}
	
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (uLocal_402[0] == 1)
				if (func_205(PLAYER::PLAYER_PED_ID()) != -1569615261 && !func_204(0))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()))
						iLocal_29 = 2;
		
			if (uLocal_402[1] == 1)
				if (func_205(PLAYER::PLAYER_PED_ID()) != -1569615261 && !func_204(0))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID()))
						iLocal_29 = 2;
		}
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(fLocal_117, uLocal_130, true) < 36f)
		{
			if (uLocal_402[0] == 1)
			{
				if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()))
					iLocal_29 = 2;
			
				if (func_193(uLocal_41[0], PLAYER::PLAYER_PED_ID(), true) < 20f)
					if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_41[0]))
						iLocal_29 = 2;
			}
		
			if (uLocal_402[1] == 1)
			{
				if (fLocal_117.f_2 < 36f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID()))
						iLocal_29 = 2;
				
					if (func_193(uLocal_41[1], PLAYER::PLAYER_PED_ID(), true) < 20f)
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_41[1]))
							iLocal_29 = 2;
				}
			}
		}
	
		if (uLocal_402[0] == 1)
			if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[0], true) < 20f)
				if (fLocal_117 > uLocal_123[0 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.4764f, 33.304478f, 866.56354f, -1560.9844f, 28.904823f, 8.25f, false, true, 0))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[0], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_41[0]))
						iLocal_29 = 2;
	
		if (uLocal_402[1] == 1)
			if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_41[1], true) < 20f)
				if (fLocal_117 < uLocal_123[1 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.3374f, 31.496609f, 936.3553f, -1581.9734f, 27.778118f, 8.25f, false, true, 0))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_41[1], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_41[1]))
						iLocal_29 = 2;
	}

	return;
}

void func_207() // Position - 0xCF26
{
	for (iLocal_62 = 0; iLocal_62 <= 6; iLocal_62 = iLocal_62 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_62]))
		{
			if (!PED::IS_PED_INJURED(uLocal_33[iLocal_62]))
			{
				if (uLocal_328[iLocal_62] == 0)
					if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_62], true) > 20f)
						uLocal_328[iLocal_62] = 1;
			
				if (uLocal_328[iLocal_62] == 1)
					if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_62], true) < 20f)
						uLocal_328[iLocal_62] = 0;
			}
			else if (uLocal_328[iLocal_62] == 0)
			{
				uLocal_328[iLocal_62] = 1;
			}
		}
		else if (uLocal_328[iLocal_62] == 0)
		{
			uLocal_328[iLocal_62] = 1;
		}
	}

	if (uLocal_328[0] == 1 && uLocal_328[1] == 1 && uLocal_328[2] == 1 && uLocal_328[3] == 1 && uLocal_328[4] == 1 && uLocal_328[5] == 1)
		iLocal_336 = 1;
	else
		iLocal_336 = 0;

	for (iLocal_61 = 0; iLocal_61 <= 6; iLocal_61 = iLocal_61 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_61]))
		{
			if (!PED::IS_PED_INJURED(uLocal_33[iLocal_61]))
			{
				func_212(uLocal_33[iLocal_61]);
			
				if (iLocal_26 == 3 || iLocal_26 == 4)
				{
					if (iLocal_29 == 2 && iLocal_27 == 0)
					{
						func_211(1);
					
						if (iLocal_414 == 1)
							func_130();
					}
				
					if (PED::HAS_PED_RECEIVED_EVENT(uLocal_33[iLocal_61], 18))
					{
						if (iLocal_27 != 4)
						{
							func_211(4);
						
							if (iLocal_414 == 1)
								func_209();
						
							iLocal_480 = 1;
						}
					}
				
					if (iLocal_27 != 4)
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_211(4);
						
							if (iLocal_414 == 1)
								func_209();
						}
					}
				
					if (func_208(uLocal_33[iLocal_61], uLocal_33[0]) || func_208(uLocal_33[iLocal_61], uLocal_33[1]) || func_208(uLocal_33[iLocal_61], uLocal_33[2]) || func_208(uLocal_33[iLocal_61], uLocal_33[3]) || func_208(uLocal_33[iLocal_61], uLocal_33[4]) || func_208(uLocal_33[iLocal_61], uLocal_33[5]) || func_208(uLocal_33[iLocal_61], uLocal_33[6]) || func_208(uLocal_33[iLocal_61], uLocal_41[0]) || func_208(uLocal_33[iLocal_61], uLocal_41[1]))
					{
						if (iLocal_27 != 4)
						{
							func_211(4);
						
							if (iLocal_414 == 1)
								func_209();
						
							iLocal_480 = 1;
						}
					}
				
					if (func_205(PLAYER::PLAYER_PED_ID()) == -1569615261 || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_204(0))
					{
						if (iLocal_396 == 0)
						{
							if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_61], true) > 20f)
							{
								if (uLocal_320[iLocal_61] == 1)
									uLocal_320[iLocal_61] = 0;
							
								if (iLocal_336 == 1 && iLocal_27 != 0 && iLocal_27 != 2 && iLocal_27 != 3 && iLocal_27 != 4 && iLocal_29 != 2)
									func_211(0);
							}
						
							if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_61], true) < 20f && PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_27 != 1 && iLocal_27 != 2 && iLocal_27 != 3 && iLocal_27 != 4)
								{
									if (iLocal_429 == 0 && iLocal_396 == 0)
									{
										func_211(1);
									
										if (iLocal_414 == 1)
											func_130();
									}
									else
									{
										func_211(3);
									
										if (iLocal_414 == 1)
											func_209();
									}
								}
							}
						
							if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_61], true) < 20f && PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
							{
								if (uLocal_320[iLocal_61] == 0)
								{
									uLocal_67[iLocal_61] = MISC::GET_GAME_TIMER();
									uLocal_320[iLocal_61] = 1;
								}
							
								if (uLocal_320[iLocal_61] == 1)
								{
									if (MISC::GET_GAME_TIMER() > uLocal_67[iLocal_61] + 24000)
									{
										if (iLocal_27 != 2 && iLocal_27 != 3 && iLocal_27 != 4)
										{
											func_211(2);
										
											if (iLocal_414 == 1)
												func_209();
										}
									}
								}
							}
						}
					
						if (iLocal_396 == 1)
						{
							if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_61], true) < 20f && PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_27 != 3 && iLocal_27 != 4)
								{
									func_211(3);
								
									if (iLocal_414 == 1)
										func_209();
								}
							}
						}
					
						if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_411 == 0)
							{
								iLocal_88 = MISC::GET_GAME_TIMER();
								iLocal_411 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_88 + 3000)
							{
								if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_61], true) < 20f && PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_27 != 3 && iLocal_27 != 4)
									{
										func_211(3);
									
										if (iLocal_414 == 1)
											func_209();
									}
								}
							}
						}
						else if (iLocal_411 == 1)
						{
							iLocal_411 = 0;
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, true))
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_27 != 3 && iLocal_27 != 4)
										{
											iLocal_388 = 1;
											func_211(3);
										
											if (iLocal_414 == 1)
												func_209();
										}
									}
								}
							
								if (func_193(PLAYER::PLAYER_PED_ID(), veLocal_31, true) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_27 != 3 && iLocal_27 != 4)
										{
											iLocal_388 = 1;
											func_211(3);
										
											if (iLocal_414 == 1)
												func_209();
										}
									}
								
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 917.3436f, -1554.4198f, 29.266108f, 916.8774f, -1556.4407f, 33.006607f, 2.25f, false, true, 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[0]))
										{
											if (!PED::IS_PED_INJURED(uLocal_33[0]))
											{
												if (ENTITY::IS_ENTITY_AT_COORD(uLocal_33[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, false, true, 0))
												{
													if (iLocal_27 != 3 && iLocal_27 != 4)
													{
														iLocal_388 = 1;
														func_211(3);
													
														if (iLocal_414 == 1)
															func_209();
													}
												}
											}
										}
									}
								}
							}
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[6]))
						{
							if (!PED::IS_PED_INJURED(uLocal_33[6]))
							{
								if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[6], true) < 20f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 928.7163f, -1546.671f, 27.346033f, 921.8971f, -1549.7517f, 34.04724f, 6.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 931.868f, -1545.185f, 27.365303f, 925.8857f, -1547.3031f, 34.072052f, 3.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 929.49084f, -1524.8286f, 32.84098f, 929.3696f, -1545.2885f, 37.342575f, 5f, false, true, 0))
									{
										if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[6], PLAYER::PLAYER_PED_ID()))
										{
											if (fLocal_117.f_2 > 31f)
											{
												if (iLocal_27 != 3 && iLocal_27 != 4)
												{
													iLocal_426 = 1;
													func_211(3);
												
													if (iLocal_414 == 1)
														func_209();
												}
											}
											else if (iLocal_27 != 1 && iLocal_27 != 2 && iLocal_27 != 3 && iLocal_27 != 4)
											{
												func_211(1);
											
												if (iLocal_414 == 1)
													func_130();
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_319 == 0)
						{
							iLocal_66 = MISC::GET_GAME_TIMER();
							iLocal_319 = 1;
						}
					
						if (iLocal_319 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_66 + 4000 || iLocal_27 == 3)
							{
								if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_61], true) < 20f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_27 != 4)
										{
											func_211(4);
										
											if (iLocal_414 == 1)
												func_209();
										}
									}
								}
							}
						}
					
						if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_61], true) < 40f)
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_61], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_33[iLocal_61]))
								{
									if (iLocal_27 != 4)
									{
										func_211(4);
									
										if (iLocal_414 == 1)
											func_209();
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

BOOL func_208(Ped pedParam0, Ped pedParam1) // Position - 0xD787
{
	if (func_193(pedParam0, pedParam1, true) < 20f && PED::IS_PED_FACING_PED(pedParam0, pedParam1, 90f) && !PED::IS_PED_INJURED(pedParam0) && PED::IS_PED_INJURED(pedParam1))
		return true;

	return false;
}

void func_209() // Position - 0xD7CF
{
	Global_21152 = 0;
	func_210();
	return;
}

void func_210() // Position - 0xD7DF
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}

	return;
}

void func_211(int iParam0) // Position - 0xD800
{
	iLocal_27 = iParam0;
	iLocal_65 = 0;
	return;
}

void func_212(Ped pedParam0) // Position - 0xD80F
{
	for (iLocal_63 = 0; iLocal_63 <= 6; iLocal_63 = iLocal_63 + 1)
	{
		if (pedParam0 == uLocal_33[iLocal_63])
		{
			if (func_193(PLAYER::PLAYER_PED_ID(), pedParam0, true) < 20f && PED::CAN_PED_SEE_HATED_PED(pedParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (uLocal_337[iLocal_63] == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), -1, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 3);
					uLocal_337[iLocal_63] = 1;
				}
			}
			else if (uLocal_337[iLocal_63] == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), 1, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 3);
				uLocal_337[iLocal_63] = 0;
			}
		}
	}

	switch (iLocal_27)
	{
		case 0:
			if (iLocal_65 == 0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
			
				if (pedParam0 == uLocal_33[0])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
			
				if (pedParam0 == uLocal_33[1])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[1], 917.4f, -1517.4f, 30f, 20f, 0);
			
				if (pedParam0 == uLocal_33[2])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
			
				if (pedParam0 == uLocal_33[3])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[3], 884.2f, -1574.1f, 30f, 20f, 0);
			
				if (pedParam0 == uLocal_33[4])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[4], 904f, -1575f, 30f, 20f, 0);
			
				if (pedParam0 == uLocal_33[5])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
			
				if (pedParam0 == uLocal_33[6])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[6], 889.5f, -1562f, 29.7f, 20f, 0);
			
				iLocal_65 = iLocal_65 + 1;
			}
		
			if (iLocal_65 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[4]))
				{
					if (!PED::IS_PED_INJURED(uLocal_33[4]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[5]))
						{
							if (!PED::IS_PED_INJURED(uLocal_33[5]))
							{
								if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[4], true) < 25f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 926.455f, -1582.3844f, 29.327585f, 909.6322f, -1581.3743f, 31.589067f, 9.5f, false, true, 0) || fLocal_117.f_1 > -1573f)
									{
										if (iLocal_414 == 0)
										{
											_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 3, uLocal_33[4], "CONSTRUCTION2", 0, 1);
											_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 5, uLocal_33[5], "CONSTRUCTION3", 0, 1);
											TASK::TASK_LOOK_AT_ENTITY(uLocal_33[4], uLocal_33[5], -1, 0, 2);
											TASK::TASK_LOOK_AT_ENTITY(uLocal_33[5], uLocal_33[4], -1, 0, 2);
										
											if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														iLocal_414 = 1;
										}
									}
								}
							
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, false, true, 1))
								{
									if (iLocal_421 == 0)
									{
										iLocal_90 = MISC::GET_GAME_TIMER();
										iLocal_421 = 1;
									}
								
									if (iLocal_421 == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_90 + 4000)
										{
											if (iLocal_414 == 0)
											{
												_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 3, uLocal_33[4], "CONSTRUCTION2", 0, 1);
												_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 5, uLocal_33[5], "CONSTRUCTION3", 0, 1);
												TASK::TASK_LOOK_AT_ENTITY(uLocal_33[4], uLocal_33[5], -1, 0, 2);
												TASK::TASK_LOOK_AT_ENTITY(uLocal_33[5], uLocal_33[4], -1, 0, 2);
											
												if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														if (_CONVERSATION_ADD_LINE(&uLocal_135, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
															iLocal_414 = 1;
											}
										}
									}
								}
							
								if (iLocal_414 == 1 && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									if (iLocal_413 == 0)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(865f, -1558.1f, 29.5f, 3f, false))
										{
											TASK::TASK_CLEAR_LOOK_AT(uLocal_33[4]);
											TASK::TASK_CLEAR_LOOK_AT(uLocal_33[5]);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(uLocal_33[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_413 = 1;
										}
									}
								}
							}
						}
					}
				}
			
				if (pedParam0 == uLocal_33[6])
				{
					if (iLocal_422 == 0)
					{
						if (iLocal_423 == 0)
						{
							iLocal_91 = MISC::GET_GAME_TIMER();
							iLocal_423 = 1;
						}
					
						if (MISC::GET_GAME_TIMER() > iLocal_91 + 30000)
						{
							if (iLocal_422 == 0)
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(925f, -1561f, 30f, 3f, false))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(uLocal_33[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_422 = 1;
									iLocal_423 = 0;
								}
							}
						}
					}
				
					if (iLocal_422 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(uLocal_33[6], 925f, -1561f, 30f, 3f, 3f, 3f, false, true, 0))
						{
							if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[6], true) < 15f && fLocal_117.f_2 < 40f)
							{
								if (iLocal_424 == 0)
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(909.5f, -1515.5f, 30f, 3f, false))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_424 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	
		case 1:
			if (iLocal_65 == 0)
			{
				for (iLocal_63 = 0; iLocal_63 <= 6; iLocal_63 = iLocal_63 + 1)
				{
					if (iLocal_29 == 0)
					{
						if (pedParam0 == uLocal_33[iLocal_63])
						{
							if (func_193(PLAYER::PLAYER_PED_ID(), pedParam0, true) < 20f)
							{
								if (uLocal_345[iLocal_63] == 0)
								{
									if (PED::CAN_PED_SEE_HATED_PED(pedParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), pedParam0))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
									
										if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
											TASK::CLEAR_PED_TASKS(pedParam0);
									
										TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
										TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 1073741824, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
										TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_55);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
										uLocal_337[iLocal_63] = 0;
										uLocal_345[iLocal_63] = 1;
									}
								}
							
								if (uLocal_345[iLocal_63] == 1)
								{
									if (!PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 45f))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), 0);
										uLocal_345[iLocal_63] = 0;
									}
								}
							}
							else
							{
								if (uLocal_345[iLocal_63] == 1)
									uLocal_345[iLocal_63] = 0;
							
								if (pedParam0 == uLocal_33[0])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[0], true);
										}
									}
								}
							
								if (pedParam0 == uLocal_33[1])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[1], 917.4f, -1517.4f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[1], true);
										}
									}
								}
							
								if (pedParam0 == uLocal_33[2])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[2], true);
										}
									}
								}
							
								if (pedParam0 == uLocal_33[3])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[3], 884.2f, -1574.1f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[3], true);
										}
									}
								}
							
								if (pedParam0 == uLocal_33[4])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[4], 904f, -1575f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[4], true);
										}
									}
								}
							
								if (pedParam0 == uLocal_33[5])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[5], true);
										}
									}
								}
							
								if (pedParam0 == uLocal_33[6])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[6], 889.5f, -1562f, 29.7f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[6], true);
										}
									}
								}
							}
						}
					}
					else if (pedParam0 == uLocal_33[iLocal_63])
					{
						if (func_193(PLAYER::PLAYER_PED_ID(), pedParam0, true) < 20f)
						{
							if (uLocal_345[iLocal_63] == 0)
							{
								if (PED::CAN_PED_SEE_HATED_PED(pedParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), pedParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
								
									if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS(pedParam0);
								
									TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 3);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
									TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_55);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
									uLocal_337[iLocal_63] = 0;
									uLocal_345[iLocal_63] = 1;
								}
							}
						
							if (uLocal_345[iLocal_63] == 1)
							{
								if (!PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), 0);
									uLocal_345[iLocal_63] = 0;
								}
							}
						}
						else
						{
							if (uLocal_345[iLocal_63] == 1)
								uLocal_345[iLocal_63] = 0;
						
							if (pedParam0 == uLocal_33[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[0], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_33[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[1], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_33[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[2], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_33[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[3], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_33[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[4], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_33[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[5], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_33[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[6], true);
									}
								}
							}
						}
					}
				}
			}
			break;
	
		case 2:
			if (iLocal_481 == 0)
				iLocal_481 = 1;
		
			if (iLocal_65 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_300, 1862763509);
				iLocal_65 = iLocal_65 + 1;
			}
		
			if (iLocal_65 == 1)
			{
				for (iLocal_63 = 0; iLocal_63 <= 6; iLocal_63 = iLocal_63 + 1)
				{
					if (pedParam0 == uLocal_33[iLocal_63])
					{
						if (func_193(pedParam0, PLAYER::PLAYER_PED_ID(), true) < 15f)
						{
							if (func_193(pedParam0, PLAYER::PLAYER_PED_ID(), true) > 3f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PERFORM_SEQUENCE) != 0 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
								
									if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS(pedParam0);
								
									TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1f, 1f, 1073741824, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
									TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_55);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
									uLocal_337[iLocal_63] = 0;
								}
							}
						}
						else
						{
							if (pedParam0 == uLocal_33[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[0], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_33[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[1], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_33[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[2], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_33[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[3], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_33[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[4], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_33[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[5], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_33[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_33[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_33[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[6], true);
									}
								}
							}
						}
					}
				}
			}
			break;
	
		case 3:
			if (iLocal_481 == 0)
				iLocal_481 = 1;
		
			if (iLocal_391 == 0)
			{
				if (iLocal_392 == 0)
				{
					iLocal_77 = MISC::GET_GAME_TIMER();
					iLocal_392 = 1;
				}
			
				if (iLocal_392 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_77 + 9000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						iLocal_391 = 1;
					}
				}
			}
		
			if (iLocal_65 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_300, 1862763509);
				iLocal_65 = iLocal_65 + 1;
			}
		
			if (iLocal_65 == 1)
			{
				if (iLocal_26 == 3)
				{
					for (iLocal_63 = 0; iLocal_63 <= 6; iLocal_63 = iLocal_63 + 1)
					{
						if (pedParam0 == uLocal_33[iLocal_63])
						{
							if (func_193(pedParam0, PLAYER::PLAYER_PED_ID(), true) < 100f)
							{
								if (uLocal_353[iLocal_63] == 0)
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
									uLocal_353[iLocal_63] = 1;
								}
							
								if (uLocal_361[iLocal_63] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
								
									if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS(pedParam0);
								
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(pedParam0, 100f, 0);
									uLocal_337[iLocal_63] = 0;
									uLocal_361[iLocal_63] = 1;
								}
							}
						}
					}
				
					if (iLocal_466 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[0]))
						{
							if (!PED::IS_PED_INJURED(uLocal_33[0]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_31, true) && ENTITY::IS_ENTITY_AT_COORD(veLocal_31, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, false, true, 0))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_33[0]))
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_33[0]);
										
											if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_33[0]))
												TASK::CLEAR_PED_TASKS(uLocal_33[0]);
										
											TASK::OPEN_SEQUENCE_TASK(&iLocal_55);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
											TASK::TASK_PLAY_ANIM(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_55);
											TASK::TASK_PERFORM_SEQUENCE(uLocal_33[0], iLocal_55);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_55);
											iLocal_466 = 1;
										}
									}
								}
							}
						}
					}
				
					if (iLocal_466 == 1 && iLocal_485 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[0]))
						{
							if (!PED::IS_PED_INJURED(uLocal_33[0]))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(uLocal_33[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, false, true, 0))
								{
									_CONVERSATION_INITIALIZE_ACTOR(&uLocal_135, 3, uLocal_33[0], "FHPrepBWorker", 0, 1);
									func_201(uLocal_33[0], "FHPB_BBAA", "FHPrepBWorker", 4, false);
									iLocal_485 = 1;
								}
							}
						}
					}
				
					if (iLocal_465 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_77 + 3000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[5]))
							{
								if (!PED::IS_PED_INJURED(uLocal_33[5]))
								{
									TASK::TASK_PLAY_ANIM(uLocal_33[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, false, false, false);
									iLocal_109 = MISC::GET_GAME_TIMER();
									iLocal_465 = 1;
								}
							}
						}
					}
					else if (iLocal_464 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_109 + 5000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[5]))
							{
								if (!PED::IS_PED_INJURED(uLocal_33[5]))
								{
									TASK::CLEAR_PED_TASKS(uLocal_33[5]);
									TASK::TASK_COMBAT_PED(uLocal_33[5], PLAYER::PLAYER_PED_ID(), 0, 16);
									iLocal_464 = 1;
								}
							}
						}
					}
				}
			
				for (iLocal_63 = 0; iLocal_63 <= 6; iLocal_63 = iLocal_63 + 1)
				{
					if (uLocal_304[iLocal_63] == 0)
					{
						if (pedParam0 == uLocal_33[iLocal_63])
						{
							if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
							{
								if (!PED::IS_PED_INJURED(pedParam0))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
								
									if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
									{
										if (func_193(pedParam0, PLAYER::PLAYER_PED_ID(), true) > 200f)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
										
											if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
												TASK::CLEAR_PED_TASKS(pedParam0);
										
											TASK::TASK_SMART_FLEE_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
											uLocal_304[iLocal_63] = 1;
										}
									}
									else if (func_193(pedParam0, PLAYER::PLAYER_PED_ID(), true) > 100f)
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
									
										if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
											TASK::CLEAR_PED_TASKS(pedParam0);
									
										TASK::TASK_SMART_FLEE_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
										uLocal_304[iLocal_63] = 1;
									}
								}
							}
						}
					}
				}
			}
		
			if (iLocal_26 == 4)
			{
				for (iLocal_63 = 0; iLocal_63 <= 6; iLocal_63 = iLocal_63 + 1)
				{
					if (uLocal_304[iLocal_63] == 0)
					{
						if (pedParam0 == uLocal_33[iLocal_63])
						{
							if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
							{
								if (!PED::IS_PED_INJURED(pedParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
								
									if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS(pedParam0);
								
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
									TASK::TASK_SMART_FLEE_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
									PED::SET_PED_KEEP_TASK(pedParam0, true);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedParam0);
									uLocal_304[iLocal_63] = 1;
								}
							}
						}
					}
				}
			}
			break;
	
		case 4:
			if (iLocal_481 == 0)
				iLocal_481 = 1;
		
			if (iLocal_391 == 0)
			{
				if (iLocal_392 == 0)
				{
					iLocal_77 = MISC::GET_GAME_TIMER();
					iLocal_392 = 1;
				}
			
				if (iLocal_392 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_77 + 6000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						iLocal_391 = 1;
					}
				}
			}
		
			if (iLocal_65 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_300, 1862763509);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
				iLocal_65 = iLocal_65 + 1;
			}
		
			if (iLocal_65 == 1)
			{
				for (iLocal_63 = 0; iLocal_63 <= 6; iLocal_63 = iLocal_63 + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_63]))
					{
						if (!PED::IS_PED_INJURED(uLocal_33[iLocal_63]))
						{
							if (func_193(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_63], true) < 15f)
							{
								if (func_213(uLocal_33[iLocal_63], 6))
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_63], PLAYER::PLAYER_PED_ID()))
									{
										if (uLocal_377[iLocal_63] == 0)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_33[iLocal_63]))
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_33[iLocal_63]);
										
											if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_33[iLocal_63]))
												TASK::CLEAR_PED_TASKS(uLocal_33[iLocal_63]);
										
											TASK::TASK_HANDS_UP(uLocal_33[iLocal_63], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
											uLocal_377[iLocal_63] = 1;
											uLocal_369[iLocal_63] = 0;
											uLocal_337[iLocal_63] = 0;
											iLocal_89 = MISC::GET_GAME_TIMER();
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_89 + 300)
									{
										uLocal_369[iLocal_63] = 0;
									}
								}
								else if (uLocal_369[iLocal_63] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_33[iLocal_63]))
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_33[iLocal_63]);
								
									if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_33[iLocal_63]))
										TASK::CLEAR_PED_TASKS(uLocal_33[iLocal_63]);
								
									TASK::TASK_SMART_FLEE_PED(uLocal_33[iLocal_63], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
									uLocal_369[iLocal_63] = 1;
									uLocal_377[iLocal_63] = 0;
								}
							}
							else if (uLocal_369[iLocal_63] == 0)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_33[iLocal_63]))
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_33[iLocal_63]);
							
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_33[iLocal_63]))
									TASK::CLEAR_PED_TASKS(uLocal_33[iLocal_63]);
							
								TASK::TASK_SMART_FLEE_PED(uLocal_33[iLocal_63], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
								uLocal_369[iLocal_63] = 1;
								uLocal_377[iLocal_63] = 0;
							}
						}
					}
				}
			}
			break;
	}

	return;
}

BOOL func_213(Ped pedParam0, int iParam1) // Position - 0xF200
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !PED::IS_PED_INJURED(pedParam0))
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam1))
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
				return true;

	return false;
}

void func_214() // Position - 0xF24C
{
	pedLocal_44 = func_26(CHAR_MICHAEL);
	pedLocal_45 = func_26(CHAR_FRANKLIN);
	pedLocal_46 = func_26(CHAR_TREVOR);

	if (func_34(pedLocal_44, 0))
	{
		if (!PED::IS_PED_INJURED(pedLocal_44))
		{
			if (!func_33(pedLocal_44))
			{
				if (!func_216())
				{
					if (func_215(pedLocal_44))
					{
						if (func_32(pedLocal_44, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_44, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_44, true);
							TASK::CLEAR_PED_TASKS(pedLocal_44);
							iLocal_471 = 0;
							iLocal_474 = 0;
							iLocal_477 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_471 == 0)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						iLocal_471 = 1;
					else if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_44, false))
						if (!PED::IS_PED_IN_VEHICLE(pedLocal_44, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							iLocal_471 = 1;
			
				if (iLocal_471 == 0)
					if (func_216())
						iLocal_471 = 1;
			
				if (iLocal_468 == 1)
				{
					if (func_215(pedLocal_44) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_44, true) && iLocal_471 == 0)
					{
						fLocal_120 = { ENTITY::GET_ENTITY_COORDS(pedLocal_44, true) };
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fLocal_120, fLocal_120.f_1, fLocal_114, fLocal_114.f_1);
					
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_474 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_120, fLocal_120.f_1, fLocal_114, fLocal_114.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_44, PED::GET_VEHICLE_PED_IS_IN(pedLocal_44, false), fLocal_114, 4, 30f, 786468, 3f, 15f, false);
									iLocal_477 = 0;
									iLocal_474 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(fLocal_120, 200f, 1912215274, 32768)))
						{
							if (iLocal_477 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(pedLocal_44, PED::GET_VEHICLE_PED_IS_IN(pedLocal_44, false), VEHICLE::GET_CLOSEST_VEHICLE(fLocal_120, 200f, 1912215274, 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_474 = 0;
								iLocal_477 = 1;
							}
						}
						else if (iLocal_474 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_120, fLocal_120.f_1, fLocal_114, fLocal_114.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_44, PED::GET_VEHICLE_PED_IS_IN(pedLocal_44, false), fLocal_114, 4, 30f, 786468, 3f, 15f, false);
								iLocal_477 = 0;
								iLocal_474 = 1;
							}
						}
					}
					else
					{
						iLocal_471 = 1;
					}
				}
			
				if (iLocal_471 == 1)
					if (func_25(pedLocal_44))
						iLocal_471 = 0;
			}
		}
	}

	if (func_34(pedLocal_46, 0))
	{
		if (!PED::IS_PED_INJURED(pedLocal_46))
		{
			if (!func_33(pedLocal_46))
			{
				if (!func_216())
				{
					if (func_215(pedLocal_46))
					{
						if (func_32(pedLocal_46, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_46, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_46, true);
							TASK::CLEAR_PED_TASKS(pedLocal_46);
							iLocal_473 = 0;
							iLocal_475 = 0;
							iLocal_478 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_473 == 0)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						iLocal_473 = 1;
					else if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_46, false))
						if (!PED::IS_PED_IN_VEHICLE(pedLocal_46, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							iLocal_473 = 1;
			
				if (iLocal_473 == 0)
					if (func_216())
						iLocal_473 = 1;
			
				if (iLocal_469 == 1)
				{
					if (func_215(pedLocal_46) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_46, true) && iLocal_473 == 0)
					{
						fLocal_120 = { ENTITY::GET_ENTITY_COORDS(pedLocal_46, true) };
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fLocal_120, fLocal_120.f_1, fLocal_114, fLocal_114.f_1);
					
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_475 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_120, fLocal_120.f_1, fLocal_114, fLocal_114.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_46, PED::GET_VEHICLE_PED_IS_IN(pedLocal_46, false), fLocal_114, 4, 30f, 786468, 3f, 15f, false);
									iLocal_478 = 0;
									iLocal_475 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(fLocal_120, 200f, 1912215274, 32768)))
						{
							if (iLocal_478 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(pedLocal_46, PED::GET_VEHICLE_PED_IS_IN(pedLocal_46, false), VEHICLE::GET_CLOSEST_VEHICLE(fLocal_120, 200f, 1912215274, 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_475 = 0;
								iLocal_478 = 1;
							}
						}
						else if (iLocal_475 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_120, fLocal_120.f_1, fLocal_114, fLocal_114.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_46, PED::GET_VEHICLE_PED_IS_IN(pedLocal_46, false), fLocal_114, 4, 30f, 786468, 3f, 15f, false);
								iLocal_478 = 0;
								iLocal_475 = 1;
							}
						}
					}
					else
					{
						iLocal_473 = 1;
					}
				}
			
				if (iLocal_473 == 1)
					if (func_25(pedLocal_46))
						iLocal_473 = 0;
			}
		}
	}

	if (func_34(pedLocal_45, 0))
	{
		if (!PED::IS_PED_INJURED(pedLocal_45))
		{
			if (!func_33(pedLocal_45))
			{
				if (!func_216())
				{
					if (func_215(pedLocal_45))
					{
						if (func_32(pedLocal_45, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_45, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_45, true);
							TASK::CLEAR_PED_TASKS(pedLocal_45);
							iLocal_472 = 0;
							iLocal_476 = 0;
							iLocal_479 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_472 == 0)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						iLocal_472 = 1;
					else if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_45, false))
						if (!PED::IS_PED_IN_VEHICLE(pedLocal_45, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							iLocal_472 = 1;
			
				if (iLocal_472 == 0)
					if (func_216())
						iLocal_472 = 1;
			
				if (iLocal_470 == 1)
				{
					if (func_215(pedLocal_45) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_45, true) && iLocal_472 == 0)
					{
						fLocal_120 = { ENTITY::GET_ENTITY_COORDS(pedLocal_45, true) };
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fLocal_120, fLocal_120.f_1, fLocal_114, fLocal_114.f_1);
					
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_120, fLocal_120.f_1, fLocal_114, fLocal_114.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_45, PED::GET_VEHICLE_PED_IS_IN(pedLocal_45, false), fLocal_114, 4, 30f, 786468, 3f, 15f, false);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(fLocal_120, 200f, 1912215274, 32768)))
						{
							if (iLocal_479 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(pedLocal_45, PED::GET_VEHICLE_PED_IS_IN(pedLocal_45, false), VEHICLE::GET_CLOSEST_VEHICLE(fLocal_120, 200f, 1912215274, 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_120, fLocal_120.f_1, fLocal_114, fLocal_114.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_45, PED::GET_VEHICLE_PED_IS_IN(pedLocal_45, false), fLocal_114, 4, 30f, 786468, 3f, 15f, false);
								iLocal_479 = 0;
								iLocal_476 = 1;
							}
						}
					}
					else
					{
						iLocal_472 = 1;
					}
				}
			
				if (iLocal_472 == 1)
					if (func_25(pedLocal_45))
						iLocal_472 = 0;
			}
		}
	}

	return;
}

BOOL func_215(Ped pedParam0) // Position - 0xF875
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(pedParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == pedParam0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
					{
						if (PED::IS_PED_IN_VEHICLE(pedParam0, veLocal_31, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_31, -1, false) == pedParam0 && !ENTITY::IS_ENTITY_AT_COORD(veLocal_31, fLocal_114, 3f, 3f, 3f, false, true, 0))
						{
							if (pedParam0 == pedLocal_44)
								iLocal_468 = 1;
						
							if (pedParam0 == pedLocal_46)
								iLocal_469 = 1;
						
							if (pedParam0 == pedLocal_45)
								iLocal_470 = 1;
						
							return true;
						}
					}
				}
			}
		}
	}

	if (pedParam0 == pedLocal_44)
		iLocal_468 = 0;

	if (pedParam0 == pedLocal_46)
		iLocal_469 = 0;

	if (pedParam0 == pedLocal_45)
		iLocal_470 = 0;

	return false;
}

BOOL func_216() // Position - 0xF957
{
	return Global_23690;
}

void func_217() // Position - 0xF962
{
	if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_31, false))
		{
			func_220(3);
			return;
		}
		else
		{
			if (func_219(&veLocal_31))
			{
				func_220(2);
				return;
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_30))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_30, false))
				{
					func_220(1);
					return;
				}
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_30, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(veLocal_31))
					{
						if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(veLocal_30) || func_218(veLocal_30) || func_219(&veLocal_30))
						{
							func_220(1);
							return;
						}
					}
				}
			}
		}
	}

	if (iLocal_26 == 3 || iLocal_26 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_30))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_30, false))
			{
				if (func_193(veLocal_30, PLAYER::PLAYER_PED_ID(), true) > 600f)
				{
					func_220(5);
					return;
				}
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_47))
	{
		if (PED::IS_PED_INJURED(pedLocal_47))
		{
			func_220(6);
			return;
		}
	}

	return;
}

BOOL func_218(Vehicle veParam0) // Position - 0xFA4D
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

BOOL func_219(var uParam0) // Position - 0xFA90
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 1, 40000))
			return true;

	return false;
}

void func_220(int iParam0) // Position - 0xFAEA
{
	iLocal_28 = iParam0;

	if (iLocal_26 != 6)
	{
		iLocal_26 = 6;
		iLocal_60 = 0;
	}

	return;
}

void func_221(int iParam0, BOOL bParam1) // Position - 0xFB02
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_113969.f_9088.f_99.f_58[iParam0] == bParam1)
		return;

	Global_113969.f_9088.f_99.f_58[iParam0] = bParam1;
	return;
}

void func_222() // Position - 0xFB47
{
	if (iLocal_26 == 5)
		if (iLocal_481 == 0)
			func_223(657);

	return;
}

void func_223(int iParam0) // Position - 0xFB63
{
	BOOL flag;
	int i;

	Global_64167 = 0;

	if (!(Global_64391[iParam0 /*13*/] == 3))
		return;

	flag = false;
	i = 0;

	for (i = 0; i < Global_76261; i = i + 1)
	{
		if (Global_76262[i /*9*/] == iParam0)
		{
			flag = true;
			Global_76262[i /*9*/].f_1 = 1;
			Global_76262[i /*9*/].f_2 = 0f;
			Global_76262[i /*9*/].f_3 == 2;
		}
	}

	!flag;
	return;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xFBD4
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

void func_225() // Position - 0xFBFC
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(569305213, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(-2137348917, false);
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_49, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_50, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_51, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_52, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_53, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_54, false);

	if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
			TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", false);

	PLAYER::SET_MAX_WANTED_LEVEL(5);

	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hLocal_112))
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hLocal_112, 0);

	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hLocal_113))
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hLocal_113, 0);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_226() // Position - 0xFCBE
{
	int num;

	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", DEFAULT);

	if (Global_113969.f_9088 || _IS_MISSION_REPEAT_ACTIVE(false))
	{
		if (!func_227())
		{
			num = func_13();
		
			if (num != -1)
			{
				if (!func_7(num))
					return;
			
				MISC::SET_BIT(&(Global_92265[num /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}

	return;
}

BOOL func_227() // Position - 0xFD2F
{
	if (Global_101533 == 13 || Global_101533 == 10 || Global_101533 == 11 || Global_101533 == 12)
		return false;

	return true;
}


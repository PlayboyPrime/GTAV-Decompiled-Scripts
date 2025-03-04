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
	var uLocal_18 = 0;
	char* sLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	Ped pedLocal_67 = 0;
	Blip blLocal_68 = 0;
	Hash hLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	Ped pedLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 3;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	char* sLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 4;
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
	var uLocal_100 = 4;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 15;
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
	var uLocal_170 = 16;
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
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	var uLocal_339 = 5;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 5;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 5;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 5;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	int iLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	float fLocal_390 = 0f;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	BOOL bLocal_393 = 0;
	int iLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	float fLocal_409 = 0f;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	Object obLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	int iLocal_420 = 0;
	Object obLocal_421 = 0;
	int iLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	float fLocal_429 = 0f;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	var uLocal_438 = 8;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	Ped pedLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	Hash hLocal_471 = 0;
	int iLocal_472 = 0;
	Hash hLocal_473 = 0;
	char* sLocal_474 = 0;
	char* sLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	Cam caLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	BOOL bLocal_490 = 0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	iLocal_52 = -1;
	sLocal_84 = "null";
	iLocal_85 = -1;
	iLocal_86 = -1;
	iLocal_116 = 1;
	fLocal_390 = 200f;
	iLocal_411 = MISC::GET_GAME_TIMER();
	iLocal_412 = 10000;
	iLocal_464 = -1;
	hLocal_473 = joaat("LAYOUT_STANDARD");
	sLocal_474 = "std_ds_open_door_for_chop";
	sLocal_475 = "creatures@rottweiler@in_vehicle@std_car";
	iLocal_483 = MISC::GET_GAME_TIMER();
	iLocal_486 = MISC::GET_GAME_TIMER();
	iLocal_488 = AUDIO::GET_SOUND_ID();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_181();

	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}

	bLocal_490 = CAM::IS_GAMEPLAY_HINT_ACTIVE();
	uLocal_413 = { uScriptParam_0.f_1[0 /*3*/] };

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
		func_181();

	if (!func_180(63))
		func_181();

	if (!func_179(5) && !func_179(6))
		func_181();

	if (func_179(6) && func_178(uLocal_413, 1, 0) == 5)
		func_181();

	if (!func_171(CHAR_FRANKLIN))
		func_181();

	if (Global_33253 == 1)
		func_181();

	if (Global_98608 == 1)
		func_181();

	if (func_168(0))
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("sh_intro_f_hills")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("martin1")) == 0)
			func_181();

	if (func_167() == 206 || func_167() == 207 || func_167() == 204 || func_167() == 205 || func_167() == 203)
	{
		iLocal_391 = 1;
	}
	else if (func_167() == 47)
	{
		iLocal_392 = 1;
	}
	else
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_413, 154.0731f, 765.5721f, 209.6901f, true) <= 50f || MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_413, -268.139f, 415.2881f, 109.7258f, true) <= 50f || MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_413, 314.4171f, 965.207f, 208.4024f, true) <= 50f)
			func_181();
	
		iLocal_391 = 0;
		iLocal_392 = 0;
	
		if (Global_79562 == 1)
			func_181();
	}

	while (true)
	{
		if (!func_164())
		{
			switch (iLocal_48)
			{
				case 0:
					func_155();
					break;
			
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			func_181();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x2AC (684)
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	if (PED::IS_PED_INJURED(pedLocal_67))
		return;

	func_153();
	func_152();

	if (iLocal_49 != 11)
	{
		func_151();
		func_150();
		func_130();
		func_129();
		func_127();
	}

	func_2();
	return;
}

void func_2() // Position - 0x2F5 (757)
{
	int navmeshRouteDistanceRemaining;
	var isPathReady;
	var distanceRemaining;
	Vector3 offsetFromEntityInWorldCoords;
	float num;
	float distanceBetweenCoords;
	int i;
	int num2;

	switch (iLocal_49)
	{
		case 11:
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
			
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@sleep_in_kennel@"))
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
					{
						TASK::TASK_PLAY_ANIM(pedLocal_67, "creatures@rottweiler@amb@sleep_in_kennel@", "sleep_in_kennel", 1000f, -8f, -1, 1, 0, false, false, false);
						func_125(pedLocal_67, uLocal_395.f_5, uLocal_395.f_8, false, true);
					}
				
					iLocal_404 = MISC::GET_GAME_TIMER();
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_124())
				{
					STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
				
					if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@sleep_in_kennel@") && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
					{
						TASK::TASK_PLAY_ANIM(pedLocal_67, "creatures@rottweiler@amb@sleep_in_kennel@", "exit_kennel", 8f, -8f, -1, 0, 0, false, false, false);
						func_123("WHINE");
						iLocal_50 = iLocal_50 + 1;
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_67, SCRIPT_TASK_PLAY_ANIM) == 7)
				{
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
					func_123("PLAYFUL");
					func_122(1, 1);
				}
			}
			break;
	
		case 1:
			if (iLocal_406 == 0 && func_119(PLAYER::PLAYER_PED_ID(), 1))
			{
				func_122(18, 1);
			}
			else
			{
				func_118();
				func_117();
				func_116();
			}
			break;
	
		case 17:
			func_118();
			func_117();
		
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT(uLocal_80[0]);
				STREAMING::REQUEST_ANIM_DICT(uLocal_80[1]);
				STREAMING::REQUEST_ANIM_DICT(uLocal_80[2]);
			
				if (STREAMING::HAS_ANIM_DICT_LOADED(uLocal_80[0]) && STREAMING::HAS_ANIM_DICT_LOADED(uLocal_80[1]) && STREAMING::HAS_ANIM_DICT_LOADED(uLocal_80[2]))
				{
					TASK::TASK_PLAY_ANIM(pedLocal_67, uLocal_80[0], "enter", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (!func_114(pedLocal_67, SCRIPT_TASK_PLAY_ANIM) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_67, uLocal_80[0], "enter", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_67, uLocal_80[0], "enter") > 0.98f || ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_67, uLocal_80[1], sLocal_84, 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_67, uLocal_80[1], sLocal_84) > 0.98f)
				{
					if (iLocal_51 == 0)
					{
						if (iLocal_79 == 1)
						{
							TASK::TASK_PLAY_ANIM(pedLocal_67, uLocal_80[1], "base", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							sLocal_84 = "base";
							iLocal_50 = iLocal_50 + 1;
						}
						else
						{
							func_113();
						
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
								iLocal_50 = iLocal_50 + 1;
						}
					}
					else
					{
						if (iLocal_51 != 5)
							func_109("CHOP_WAIT", 0);
					
						TASK::TASK_PLAY_ANIM(pedLocal_67, uLocal_80[2], "exit", 1090519040, -1056964608, -1, 0, 0, false, false, false);
						iLocal_50 = 3;
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				if (!func_114(pedLocal_67, SCRIPT_TASK_PLAY_ANIM) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_67, uLocal_80[1], sLocal_84, 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_67, uLocal_80[1], sLocal_84) > 0.98f)
				{
					TASK::TASK_PLAY_ANIM(pedLocal_67, uLocal_80[2], "exit", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 3)
			{
				if (!func_114(pedLocal_67, SCRIPT_TASK_PLAY_ANIM))
				{
					iLocal_420 = 0;
				
					if (iLocal_51 == 0)
						func_122(1, 1);
					else
						func_122(iLocal_51, 1);
				}
			}
			break;
	
		case 18:
			func_117();
		
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@enter");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@idle_a");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@exit");
				TASK::TASK_GO_TO_ENTITY(pedLocal_67, PLAYER::PLAYER_PED_ID(), 20000, 3f, 1f, 1073741824, 0);
				iLocal_50 = iLocal_50 + 1;
			}
			else if (iLocal_50 == 1)
			{
				if (iLocal_51 == 0)
				{
					if (!func_114(pedLocal_67, SCRIPT_TASK_GO_TO_ENTITY))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@enter") && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@idle_a") && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@exit"))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_67, iLocal_117);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
							iLocal_50 = iLocal_50 + 1;
						}
					}
				}
				else
				{
					func_122(iLocal_51, 1);
				}
			}
			else if (iLocal_50 == 2)
			{
				if (func_108())
				{
					iLocal_406 = 1;
				
					if (iLocal_51 == 0)
						func_122(1, 1);
					else
						func_122(iLocal_51, 1);
				}
			}
			break;
	
		case 2:
			func_103();
		
			if (iLocal_50 == 0)
			{
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_67, false) && !PED::IS_PED_IN_GROUP(pedLocal_67))
					TASK::CLEAR_PED_TASKS(pedLocal_67);
			
				func_101();
				func_100(false, 0, false);
				func_99(true);
				iLocal_58 = -1;
				iLocal_338 = MISC::GET_GAME_TIMER();
				iLocal_60 = MISC::GET_GAME_TIMER();
				iLocal_61 = MISC::GET_GAME_TIMER() - 10000;
				uLocal_74 = { ENTITY::GET_ENTITY_COORDS(pedLocal_67, true) };
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
				iLocal_50 = iLocal_50 + 1;
			}
			else if (iLocal_50 == 1)
			{
				func_84();
				func_55();
				func_54();
				func_45();
				func_44();
				func_41();
				func_118();
			}
			break;
	
		case 3:
			if (iLocal_50 == 0)
			{
				func_123("WHINE");
				func_109("CHOP_GOHOME", 0);
				func_40(0);
				STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
			
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), false))
					WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"));
			
				if (PED::IS_PED_IN_GROUP(pedLocal_67))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_67);
			
				if (func_119(pedLocal_67, 1))
				{
					func_122(1, 1);
				}
				else if (func_39(pedLocal_67, uLocal_395, true) < 100f)
				{
					TASK::CLEAR_PED_TASKS(pedLocal_67);
				
					if (func_39(pedLocal_67, uLocal_395, true) < 20f)
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_67, uLocal_395, 1f, 20000, 0.25f, 32, uLocal_395.f_3);
					else
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_67, uLocal_395, 3f, 60000, 0.25f, 32, uLocal_395.f_3);
				
					iLocal_50 = iLocal_50 + 1;
				}
				else
				{
					func_122(4, 1);
				}
			}
			else if (iLocal_50 == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_67, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) == 7)
					if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_67, uLocal_395, 2.5f, 2.5f, 4f, false, true, 0))
						func_122(1, 1);
					else
						func_122(3, 1);
			}
			break;
	
		case 4:
			if (!func_114(pedLocal_67, SCRIPT_TASK_SMART_FLEE_PED))
				TASK::TASK_SMART_FLEE_PED(pedLocal_67, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			break;
	
		case 5:
			if (iLocal_50 == 0)
			{
				if (func_38())
				{
					if (func_35())
					{
						if (PED::IS_PED_IN_GROUP(pedLocal_67))
							PED::REMOVE_PED_FROM_GROUP(pedLocal_67);
					
						TASK::CLEAR_PED_TASKS(pedLocal_67);
						iLocal_54 = MISC::GET_GAME_TIMER();
						iLocal_56 = 1000;
						iLocal_407 = 0;
						iLocal_65 = -1;
						func_34();
						iLocal_50 = iLocal_50 + 1;
					}
					else
					{
						func_32();
					}
				}
			}
			else if (iLocal_50 == 1)
			{
				if (!func_24() || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_22() || iLocal_65 > -1 && MISC::GET_GAME_TIMER() - iLocal_65 > 30000 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_384, 1f, 1f, 1f, false, true, 0))
				{
					iLocal_50 = iLocal_50 + 1;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_67, uLocal_387, 3f, 3f, 4f, false, true, 0))
				{
					func_20();
				
					if (iLocal_65 == -1)
						iLocal_65 = MISC::GET_GAME_TIMER();
				}
				else
				{
					func_17();
				
					if (func_114(pedLocal_67, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
					{
						navmeshRouteDistanceRemaining = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(pedLocal_67, &distanceRemaining, &isPathReady);
					
						if (navmeshRouteDistanceRemaining == 2)
							iLocal_407 = iLocal_407 + 1;
						else if (navmeshRouteDistanceRemaining == 3)
							if (iLocal_407 != 0)
								iLocal_407 = 0;
					
						if (iLocal_407 > 9)
							func_32();
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_67, uLocal_387, 3f, -1, 3f, 36, 1193033728);
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				TASK::CLEAR_PED_TASKS(pedLocal_67);
				STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@indication@");
				func_122(2, 1);
			}
		
			func_103();
			break;
	
		case 6:
			if (iLocal_50 == 0)
			{
				if (PED::IS_PED_IN_GROUP(pedLocal_67))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_67);
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_67, false);
				iLocal_50 = iLocal_50 + 1;
			}
			else if (iLocal_50 == 1)
			{
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_114(pedLocal_67, SCRIPT_TASK_COMBAT) && !PED::IS_PED_IN_COMBAT(pedLocal_67, 0) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						iLocal_60 = MISC::GET_GAME_TIMER();
						func_122(2, 1);
					}
				}
			}
		
			func_103();
			break;
	
		case 7:
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
			
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_67);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
				
					if (!PED::IS_PED_FACING_PED(pedLocal_67, PLAYER::PLAYER_PED_ID(), 10f))
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "beg_enter", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "beg_exit", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_67, iLocal_117);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
					func_123("PLAYFUL");
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_108())
				{
					func_109("CHOP_RETURN1", 0);
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					func_16();
				}
			}
			break;
	
		case 8:
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
			
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_67);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
				
					if (!PED::IS_PED_FACING_PED(pedLocal_67, PLAYER::PLAYER_PED_ID(), 10f))
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_67, iLocal_117);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
					func_123("PLAYFUL");
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_108())
				{
					func_109("CHOP_RETURN1", 0);
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					func_16();
				}
			}
			break;
	
		case 9:
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
			
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_67);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
				
					if (!PED::IS_PED_FACING_PED(pedLocal_67, PLAYER::PLAYER_PED_ID(), 10f))
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "paw_right_enter", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "paw_right_exit", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_67, iLocal_117);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
					func_123("PLAYFUL");
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_108())
				{
					func_109("CHOP_RETURN1", 0);
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					func_16();
				}
			}
			break;
	
		case 10:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_UP_ONLY, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_LEFT_ONLY, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_RIGHT_ONLY, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_DOWN_ONLY, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_UD, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_LR, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_DUCK, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_COVER, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACKR, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACKQ, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_BLOCK, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_WEAPON, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_PREV_WEAPON, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SPRINT, true);
		
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_67, 0);
				iLocal_50 = iLocal_50 + 1;
			}
			else if (iLocal_50 == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY) == 7)
				{
					TASK::CLEAR_PED_TASKS(pedLocal_67);
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1f, 1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(offsetFromEntityInWorldCoords, &(offsetFromEntityInWorldCoords.f_2), false, false);
				
					if (func_39(pedLocal_67, offsetFromEntityInWorldCoords, false) > 0.3f)
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_67, offsetFromEntityInWorldCoords, 1f, 5000, 1048576000, 0, 1193033728);
				
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 2)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_67, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) == 7 || func_39(pedLocal_67, offsetFromEntityInWorldCoords, false) < 0.3f)
				{
					if (!PED::IS_PED_FACING_PED(pedLocal_67, PLAYER::PLAYER_PED_ID(), 15f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_67, PLAYER::PLAYER_PED_ID(), 0);
						iLocal_480 = 0;
					}
					else
					{
						iLocal_480 = 1;
					}
				
					if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), pedLocal_67, 15f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_67, 0);
						iLocal_481 = 0;
					}
					else
					{
						iLocal_481 = 1;
					}
				
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 3)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
			
				if (iLocal_480 == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_67, SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY) == 7 && iLocal_481 == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY) == 7 && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::TASK_PLAY_ANIM(pedLocal_67, "creatures@rottweiler@tricks@", "petting_chop", 8f, -8f, -1, 8, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@rottweiler@tricks@", "petting_franklin", 8f, -8f, -1, 8, 0, false, false, false);
					func_123("PLAYFUL");
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_67, SCRIPT_TASK_PLAY_ANIM) == 7)
				{
					func_109("CHOP_RETURN1", 0);
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					func_16();
				}
			}
			break;
	
		case 12:
			if (iLocal_50 == 0)
			{
				if (PED::IS_PED_IN_GROUP(pedLocal_67))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_67);
			
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
			
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_67);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4097, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_67, iLocal_117);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (!func_15())
				{
					STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				
					if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_67);
						TASK::TASK_PLAY_ANIM(pedLocal_67, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, false, false, false);
						func_109("CHOP_WALK", 0);
						iLocal_50 = iLocal_50 + 1;
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_67, SCRIPT_TASK_PLAY_ANIM) == 7)
				{
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					iLocal_60 = MISC::GET_GAME_TIMER();
					func_122(2, 1);
				}
			}
			break;
	
		case 13:
			if (iLocal_50 == 0)
			{
				if (PED::IS_PED_IN_GROUP(pedLocal_67))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_67);
			
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@move");
				STREAMING::REQUEST_PTFX_ASSET();
			
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@move") && STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					TASK::CLEAR_PED_TASKS(pedLocal_67);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "dump_enter", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "dump_loop", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "dump_exit", 8f, -8f, -1, 4096, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_67, iLocal_117);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
					func_123("AGITATED");
					iLocal_62 = MISC::GET_GAME_TIMER();
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_108())
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
				
					if (func_119(pedLocal_67, 0))
						func_122(1, 1);
					else
						func_122(2, 1);
				}
				else if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
				{
					if (iLocal_62 > -1 && MISC::GET_GAME_TIMER() - iLocal_62 > 4000)
						iLocal_77 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_anim_dog_poo", pedLocal_67, 0f, -0.15f, -0.2f, 0f, 0f, 0f, 1065353216, false, false, false);
				}
				else if (MISC::GET_GAME_TIMER() - iLocal_62 > 10000)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
					iLocal_62 = -1;
				}
			}
			break;
	
		case 14:
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_PTFX_ASSET();
			
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					if (PED::IS_PED_IN_GROUP(pedLocal_67))
						PED::REMOVE_PED_FROM_GROUP(pedLocal_67);
				
					func_123("AGITATED");
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 1)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@move");
			
				if (!func_114(pedLocal_67, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_67, ENTITY::GET_ENTITY_COORDS(obLocal_421, true), 2f, 20000, 0.25f, 36, 1193033728);
			
				if (func_39(pedLocal_67, ENTITY::GET_ENTITY_COORDS(obLocal_421, true), true) < 2f)
				{
					if (!IS_BIT_SET(Global_114162.f_10053.f_94, 10) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						MISC::SET_BIT(&(Global_114162.f_10053.f_94), 10);
				
					TASK::CLEAR_PED_TASKS(pedLocal_67);
				
					if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@move") && ENTITY::GET_ENTITY_SPEED(pedLocal_67) < 1f)
					{
						uLocal_423 = { ENTITY::GET_ENTITY_COORDS(pedLocal_67, true) };
						iLocal_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						fLocal_429 = func_14(uLocal_423, ENTITY::GET_ENTITY_COORDS(obLocal_421, true));
					
						if (iLocal_422 == 0)
							uLocal_426 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uLocal_423, fLocal_429, -0.5f, 1f, 0f) };
						else
							uLocal_426 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uLocal_423, fLocal_429, 0.5f, 1f, 0f) };
					
						TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, uLocal_426, 0);
					
						if (iLocal_422 == 0)
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_right_enter", 8f, -8f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_right_idle", 8f, -8f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_right_exit", 8f, -8f, -1, 0, 0, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_left_enter", 8f, -8f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_left_idle", 8f, -8f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_left_exit", 8f, -8f, -1, 0, 0, false, false, false);
						}
					
						TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_67, iLocal_117);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
						iLocal_62 = MISC::GET_GAME_TIMER();
						iLocal_50 = iLocal_50 + 1;
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				if (func_108())
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
				
					func_123("BARK");
					func_122(2, 1);
				}
				else if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
				{
					if (iLocal_62 > -1 && MISC::GET_GAME_TIMER() - iLocal_62 > 7000)
						if (iLocal_422 == 0)
							iLocal_77 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_anim_dog_peeing", pedLocal_67, 0.1f, -0.32f, -0.04f, 0f, 0f, 30f, 1065353216, false, false, false);
						else
							iLocal_77 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_anim_dog_peeing", pedLocal_67, -0.1f, -0.32f, -0.04f, 0f, 0f, 150f, 1065353216, false, false, false);
				}
				else if (MISC::GET_GAME_TIMER() - iLocal_62 > 16000)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
					iLocal_62 = -1;
				}
			}
			break;
	
		case 15:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				func_40(0);
				iLocal_60 = MISC::GET_GAME_TIMER();
				func_122(2, 1);
			}
			else
			{
				if (iLocal_50 == 0)
				{
					func_40(1);
				
					if (MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), hLocal_471, 50f, &uLocal_466, &pedLocal_465, false))
					{
						func_6(294, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
						iLocal_469 = 0;
						iLocal_470 = 0;
						iLocal_408 = 0;
					
						if (PED::IS_PED_IN_GROUP(pedLocal_67))
							PED::REMOVE_PED_FROM_GROUP(pedLocal_67);
					
						iLocal_472 = MISC::GET_GAME_TIMER();
						iLocal_50 = iLocal_50 + 1;
					}
				}
				else if (iLocal_50 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_465))
					{
						if (!ENTITY::IS_ENTITY_IN_WATER(pedLocal_465))
						{
							if (MISC::GET_GAME_TIMER() - iLocal_472 > 500)
							{
								if (func_5())
								{
									STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@move");
								
									if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@move"))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
									
										if (hLocal_471 == joaat("WEAPON_BALL"))
											TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "fetch_pickup", 8f, -8f, -1, 49152, 0, false, false, false);
									
										TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 4f, 3f, 1073741824, 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
										TASK::TASK_PERFORM_SEQUENCE(pedLocal_67, iLocal_117);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
									
										if (hLocal_471 == joaat("WEAPON_BALL"))
											iLocal_469 = 1;
									
										iLocal_50 = iLocal_50 + 1;
									}
								}
								else if (!func_114(pedLocal_67, SCRIPT_TASK_GO_TO_ENTITY))
								{
									TASK::TASK_GO_TO_ENTITY(pedLocal_67, pedLocal_465, 30000, 0.5f, 3f, 1073741824, 0);
									iLocal_408 = iLocal_408 + 1;
									iLocal_407 = 0;
								
									if (iLocal_408 > 3)
									{
										TASK::TASK_GO_TO_ENTITY(pedLocal_67, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 1073741824, 0);
										func_40(1);
										iLocal_50 = iLocal_50 + 1;
									}
								}
								else
								{
									navmeshRouteDistanceRemaining = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(pedLocal_67, &distanceRemaining, &isPathReady);
								
									if (navmeshRouteDistanceRemaining == 2)
									{
										fLocal_409 = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(pedLocal_465);
									
										if (fLocal_409 < 1f)
											iLocal_407 = iLocal_407 + 1;
									}
									else if (navmeshRouteDistanceRemaining == 3)
									{
										if (iLocal_470 == 0)
										{
											func_123("BARK");
										
											if (hLocal_471 == joaat("WEAPON_BALL"))
												func_109("CHOP_FETCH", 0);
										
											iLocal_470 = 1;
										}
									}
								
									if (iLocal_407 > 9)
									{
										TASK::TASK_GO_TO_ENTITY(pedLocal_67, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 1073741824, 0);
										func_40(1);
										iLocal_50 = iLocal_50 + 1;
									}
								}
							}
						}
						else
						{
							TASK::TASK_GO_TO_ENTITY(pedLocal_67, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 1073741824, 0);
							iLocal_50 = iLocal_50 + 1;
						}
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY(pedLocal_67, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 1073741824, 0);
						iLocal_50 = iLocal_50 + 1;
					}
				}
				else if (iLocal_50 == 2)
				{
					if (iLocal_469 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(pedLocal_465) && ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_67, "creatures@rottweiler@move", "fetch_pickup", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_67, "creatures@rottweiler@move", "fetch_pickup") > 0.25f)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(pedLocal_465, pedLocal_67, 28, 0.2042f, 0f, -0.0608f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							AUDIO::SET_AUDIO_FLAG("DisableBarks", true);
							iLocal_50 = iLocal_50 + 1;
						}
					}
					else
					{
						iLocal_50 = iLocal_50 + 1;
					}
				}
				else if (iLocal_50 == 3)
				{
					if (func_4(PLAYER::PLAYER_PED_ID(), pedLocal_67, true) < 5f)
					{
						if (hLocal_471 == joaat("WEAPON_BALL"))
						{
							if (iLocal_469 == 1)
							{
								STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@move");
							
								if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@move"))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "fetch_drop", 8f, -8f, -1, 16384, 0, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_67, iLocal_117);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
									func_109("CHOP_RETURN1", 0);
									AUDIO::SET_AUDIO_FLAG("DisableBarks", false);
									iLocal_50 = iLocal_50 + 1;
								}
							}
							else
							{
								func_123("BREATH_AGITATED");
								func_109("CHOP_RETURN2", 0);
								func_122(2, 1);
							}
						}
						else
						{
							func_123("BARK_WHINE");
							func_40(1);
							func_122(2, 1);
						}
					}
				}
				else if (iLocal_50 == 4)
				{
					if (!func_114(pedLocal_67, SCRIPT_TASK_PERFORM_SEQUENCE) && !ENTITY::DOES_ENTITY_EXIST(pedLocal_465))
					{
						if (func_3(0))
							func_100(false, 1, false);
						else if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON)
							func_100(false, 1, true);
						else
							func_100(true, 1, true);
					
						iLocal_60 = MISC::GET_GAME_TIMER();
						func_122(2, 1);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(pedLocal_465))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(pedLocal_465))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_67, "creatures@rottweiler@move", "fetch_drop", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_67, "creatures@rottweiler@move", "fetch_drop") > 0.4f)
								ENTITY::DETACH_ENTITY(pedLocal_465, true, true);
						}
						else
						{
							if (func_4(PLAYER::PLAYER_PED_ID(), pedLocal_465, true) < 1.5f || func_4(PLAYER::PLAYER_PED_ID(), pedLocal_465, true) > 20f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								func_40(1);
						
							if (!func_114(pedLocal_67, SCRIPT_TASK_PERFORM_SEQUENCE))
								func_101();
						}
					}
				}
			
				func_103();
			}
			break;
	
		case 16:
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@in_vehicle@std_car");
			
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@in_vehicle@std_car"))
				{
					if (PED::IS_PED_IN_GROUP(pedLocal_67))
						PED::REMOVE_PED_FROM_GROUP(pedLocal_67);
				
					ENTITY::ATTACH_ENTITY_TO_ENTITY(pedLocal_67, ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID()), 0, 0f, 0f, -6.1f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
					TASK::TASK_PLAY_ANIM(pedLocal_67, "creatures@rottweiler@in_vehicle@std_car", "sit", 1000f, -1000f, -1, 9, 0, false, false, false);
					iLocal_50 = iLocal_50 + 1;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
				{
					num = 99999f;
				
					for (i = 0; i < 4; i = i + 1)
					{
						distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_87[i /*3*/], true);
					
						if (distanceBetweenCoords < num)
						{
							num = distanceBetweenCoords;
							num2 = i;
						}
					}
				
					if (ENTITY::IS_ENTITY_ATTACHED(pedLocal_67))
						ENTITY::DETACH_ENTITY(pedLocal_67, true, true);
				
					func_125(pedLocal_67, uLocal_87[num2 /*3*/], uLocal_100[num2], false, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_67, false, false);
					iLocal_60 = MISC::GET_GAME_TIMER();
					func_122(2, 1);
				}
			}
			break;
	}

	return;
}

BOOL func_3(int iParam0) // Position - 0x1C73 (7283)
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

float func_4(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x1CCA (7370)
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

BOOL func_5() // Position - 0x1D28 (7464)
{
	float entityCoords;
	var groundZ;

	if (func_4(pedLocal_67, pedLocal_465, true) < 0.5f + 0.25f)
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_465, true) };
	
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, entityCoords.f_1, entityCoords.f_2 + 1f, &groundZ, false, false))
			if (MISC::ABSF(entityCoords.f_2 - groundZ) < 0.1f)
				return true;
	}

	return false;
}

void func_6(int iParam0, int iParam1, int iParam2) // Position - 0x1D85 (7557)
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
		func_7();

	return;
}

void func_7() // Position - 0x1E6B (7787)
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
		func_11(13, SYSTEM::FLOOR(Global_114162.f_10198.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79564)
		{
			if (func_10() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113896 = 0;
			
				if (!Global_64326)
					func_8();
			}
		}
	}

	return;
}

int func_8() // Position - 0x2329 (9001)
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_101752.f_8)
		if (Global_101752.f_10 > 0)
			return 0;
	else if (Global_101752.f_10 > 1)
		return 0;

	Global_101752.f_10 = Global_101752.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x2374 (9076)
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79813, 0);
}

int func_10() // Position - 0x239C (9116)
{
	return Global_33105;
}

BOOL func_11(int iParam0, int iParam1) // Position - 0x23A7 (9127)
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x23F8 (9208)
{
	if (iParam2 == -1)
		iParam2 = func_13();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_13() // Position - 0x2416 (9238)
{
	return Global_1574926;
}

float func_14(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x2422 (9250)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D(fParam3 - uParam0, fParam3.f_1 - uParam0.f_1);
}

BOOL func_15() // Position - 0x243C (9276)
{
	return Global_101765.f_399 > 0;
}

void func_16() // Position - 0x244D (9293)
{
	iLocal_60 = MISC::GET_GAME_TIMER();

	if (iLocal_73 == 0)
		func_122(1, 1);
	else
		func_122(2, 1);

	return;
}

void func_17() // Position - 0x2470 (9328)
{
	float num;

	if (MISC::GET_GAME_TIMER() - iLocal_54 > iLocal_56)
	{
		num = func_39(pedLocal_67, uLocal_387, true);
	
		if (num < 10f)
			func_123("BARK_SEQ");
		else
			func_123("BARK");
	
		iLocal_54 = MISC::GET_GAME_TIMER();
	
		if (num < 20f)
			iLocal_56 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000);
		else if (num < 50f)
			iLocal_56 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000);
		else
			iLocal_56 = MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000);
	
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !IS_BIT_SET(Global_114162.f_10053.f_94, 1) && !func_19() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			MISC::SET_BIT(&(Global_114162.f_10053.f_94), 1);
			_DISPLAY_HELP_TEXT("CHOP_H_HUNT" /*Chop will bark more often when he nears pickups.*/, -1);
		}
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x253A (9530)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_19() // Position - 0x2551 (9553)
{
	int weaponHash;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_67) || iLocal_49 == 10 && PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_AIM))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (weaponHash == joaat("WEAPON_UNARMED"))
			return true;
	}

	return false;
}

void func_20() // Position - 0x2598 (9624)
{
	if (!func_114(pedLocal_67, SCRIPT_TASK_PERFORM_SEQUENCE))
	{
		STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@indication@");
	
		if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@indication@"))
		{
			TASK::CLEAR_PED_TASKS(pedLocal_67);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, uLocal_384, 0);
			TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@indication@", func_21(), 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_67, iLocal_117);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
		}
	}

	return;
}

char* func_21() // Position - 0x260A (9738)
{
	char* str;
	var entityCoords;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_67, true) };
	
		if (entityCoords.f_2 + 1f < uLocal_384.f_2)
			str = "indicate_high";
		else if (entityCoords.f_2 - 1f > uLocal_384.f_2)
			str = "indicate_low";
		else
			str = "indicate_ahead";
	}

	return str;
}

BOOL func_22() // Position - 0x265E (9822)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) || func_23())
			return true;

	return false;
}

BOOL func_23() // Position - 0x269F (9887)
{
	Hash entityModel;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true));
	
		if (entityModel == joaat("caddy") || entityModel == joaat("caddy2") || entityModel == joaat("dune") || entityModel == joaat("airtug") || entityModel == joaat("blazer") || entityModel == joaat("blazer2") || entityModel == joaat("bulldozer") || entityModel == joaat("cutter") || entityModel == joaat("dump") || entityModel == joaat("forklift") || entityModel == joaat("handler") || entityModel == joaat("mower") || entityModel == joaat("rhino") || entityModel == joaat("tractor") || entityModel == joaat("tractor2") || entityModel == joaat("tractor3") || entityModel == MISC::GET_HASH_KEY("bifta" /*Bifta*/) || entityModel == joaat("blazer3") || entityModel == joaat("dune2"))
			return true;
	}

	return false;
}

BOOL func_24() // Position - 0x27D1 (10193)
{
	switch (iLocal_336)
	{
		case 2:
			if (!func_27(2))
			{
				func_109("CHOP_RETURN1", 1);
				return false;
			}
			break;
	
		case 1:
			if (!func_27(1))
			{
				func_109("CHOP_RETURN1", 1);
				return false;
			}
			break;
	
		case 0:
			if (!func_27(0))
			{
				func_109("CHOP_RETURN1", 1);
				return false;
			}
			break;
	
		case 3:
			if (func_26(iLocal_383))
			{
				func_109("CHOP_RETURN1", 1);
				return false;
			}
			break;
	
		case 4:
			if (func_25(iLocal_383))
			{
				func_109("CHOP_RETURN1", 1);
				return false;
			}
			break;
	}

	return true;
}

BOOL func_25(int iParam0) // Position - 0x287F (10367)
{
	if (iParam0 < 0 || iParam0 >= 50)
		return false;

	if (iParam0 <= 31)
		return IS_BIT_SET(Global_114162.f_10053.f_125, iParam0);

	return IS_BIT_SET(Global_114162.f_10053.f_125.f_1, iParam0 - 32);
}

BOOL func_26(int iParam0) // Position - 0x28C4 (10436)
{
	if (iParam0 < 0 || iParam0 >= 50)
		return false;

	if (iParam0 <= 31)
		return IS_BIT_SET(Global_114162.f_10053.f_122, iParam0);

	return IS_BIT_SET(Global_114162.f_10053.f_122.f_1, iParam0 - 32);
}

BOOL func_27(int iParam0) // Position - 0x2909 (10505)
{
	if (func_31())
		func_30(iParam0, iLocal_383);

	if (func_29())
	{
		if (func_28())
		{
			func_34();
			return false;
		}
	
		func_34();
	}

	return true;
}

BOOL func_28() // Position - 0x293C (10556)
{
	return Global_33353;
}

BOOL func_29() // Position - 0x2947 (10567)
{
	if (Global_33350 == 2)
		return true;

	return false;
}

void func_30(int iParam0, int iParam1) // Position - 0x295B (10587)
{
	if (Global_33350 == 0)
	{
		Global_33350 = 1;
		Global_33351 = iParam0;
		Global_33352 = iParam1;
	}

	return;
}

BOOL func_31() // Position - 0x2978 (10616)
{
	if (Global_33350 == 0)
		return true;

	return false;
}

void func_32() // Position - 0x298C (10636)
{
	var entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_67, true) };
	func_33(entityCoords);
	func_123("WHINE");
	func_109("CHOP_NONEAR", 0);
	func_16();
	return;
}

void func_33(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x29BB (10683)
{
	SYSTEM::VDIST(vParam0, vParam0) > 1f;
	return;
}

void func_34() // Position - 0x29D4 (10708)
{
	Global_33350 = 3;
	return;
}

BOOL func_35() // Position - 0x29E0 (10720)
{
	iLocal_383 = -1;
	uLocal_384 = { 0f, 0f, 0f };
	uLocal_387 = { 0f, 0f, 0f };
	func_36(0);

	if (iLocal_383 == -1)
		func_36(1);

	if (iLocal_383 > -1)
		return true;

	return false;
}

void func_36(int iParam0) // Position - 0x2A19 (10777)
{
	float num;
	int i;

	num = 9999f;
	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (uLocal_339[i] > -1 && uLocal_345[i] < num && func_37(iParam0, i))
		{
			num = uLocal_345[i];
			iLocal_383 = uLocal_339[i];
			iLocal_336 = i;
			uLocal_384 = { uLocal_351[i /*3*/] };
			uLocal_387 = { uLocal_367[i /*3*/] };
		}
	}

	return;
}

BOOL func_37(int iParam0, int iParam1) // Position - 0x2A99 (10905)
{
	if (iParam0 == 1)
		return true;

	if (iParam1 == 1 && ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) >= 200)
		return false;

	if (iParam1 == 0 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) >= 100)
		return false;

	return true;
}

BOOL func_38() // Position - 0x2AE2 (10978)
{
	if (iLocal_337 == 5)
		iLocal_337 = 0;

	switch (iLocal_337)
	{
		case 0:
			if (uLocal_339[0] > -1)
			{
				if (func_31())
					func_30(0, uLocal_339[0]);
			
				if (func_29())
				{
					if (func_28())
						uLocal_339[0] = -1;
				
					func_34();
					iLocal_337 = 1;
				}
			}
			else
			{
				iLocal_337 = 1;
			}
			break;
	
		case 1:
			if (uLocal_339[1] > -1)
			{
				if (func_31())
					func_30(1, uLocal_339[1]);
			
				if (func_29())
				{
					if (func_28())
						uLocal_339[1] = -1;
				
					func_34();
					iLocal_337 = 2;
				}
			}
			else
			{
				iLocal_337 = 2;
			}
			break;
	
		case 2:
			if (uLocal_339[2] > -1)
			{
				if (func_31())
					func_30(2, uLocal_339[2]);
			
				if (func_29())
				{
					if (func_28())
						uLocal_339[2] = -1;
				
					func_34();
					iLocal_337 = 3;
				}
			}
			else
			{
				iLocal_337 = 3;
			}
			break;
	
		case 3:
			if (uLocal_339[3] > -1)
				if (func_26(uLocal_339[3]))
					uLocal_339[3] = -1;
		
			if (uLocal_339[4] > -1)
				if (func_25(uLocal_339[4]))
					uLocal_339[4] = -1;
		
			iLocal_337 = 5;
			return true;
	}

	return false;
}

float func_39(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x2C26 (11302)
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}

void func_40(int iParam0) // Position - 0x2C60 (11360)
{
	Vector3 entityCoords;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_465))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_465, true) };
	
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(pedLocal_465))
			ENTITY::DETACH_ENTITY(pedLocal_465, true, true);
	
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&pedLocal_465);
	
		if (iParam0 == 1 && hLocal_471 == joaat("WEAPON_BALL"))
			MISC::CLEAR_AREA_OF_PROJECTILES(entityCoords, 0.1f, 0);
	}

	return;
}

void func_41() // Position - 0x2CBB (11451)
{
	Vector3 entityCoords;

	if (func_43() != 1 && MISC::GET_GAME_TIMER() - iLocal_60 > 10000 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iLocal_105 == 0 && hLocal_471 != joaat("WEAPON_BALL") && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f) == 0 && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(pedLocal_67, ENTITY::GET_ENTITY_COORDS(pedLocal_67, true), 100f) == 0)
	{
		STREAMING::REQUEST_PTFX_ASSET();
	
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_67, true) };
		
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, uLocal_74, false) < 1f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, uLocal_433, false) > 20f)
				{
					func_42(&obLocal_421, false);
					obLocal_421 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(entityCoords, 10f, joaat("prop_streetlight_01"), true, false, true);
				
					if (ENTITY::DOES_ENTITY_EXIST(obLocal_421))
					{
						uLocal_433 = { ENTITY::GET_ENTITY_COORDS(obLocal_421, true) };
						func_122(14, 1);
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, uLocal_430, false) > 20f)
				{
					uLocal_430 = { entityCoords };
					func_122(13, 1);
				}
			}
		
			uLocal_74 = { ENTITY::GET_ENTITY_COORDS(pedLocal_67, true) };
			iLocal_60 = MISC::GET_GAME_TIMER();
		}
	}

	return;
}

void func_42(Object* pobParam0, BOOL bParam1) // Position - 0x2DF0 (11760)
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0))
			ENTITY::DETACH_ENTITY(*pobParam0, true, true);
	
		if (!bParam1)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(pobParam0);
		else
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*pobParam0);
	}

	return;
}

int func_43() // Position - 0x2E2B (11819)
{
	if (Global_114162.f_20122.f_254.f_5)
		if (Global_114162.f_20122.f_254 > 66f)
			return 1;
		else if (Global_114162.f_20122.f_254 > 33f)
			return 0;
		else
			return 2;

	return 2;
}

void func_44() // Position - 0x2E78 (11896)
{
	if (!IS_BIT_SET(Global_114162.f_10053.f_94, 7) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_19() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		MISC::SET_BIT(&(Global_114162.f_10053.f_94), 7);
		_DISPLAY_HELP_TEXT("CHOP_H_BALL" /*When taking Chop for a walk, Franklin can play fetch using the ball in the weapon wheel.*/, -1);
	}

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_67, true))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &hLocal_471, true);
	
		if (hLocal_471 == joaat("WEAPON_BALL") || hLocal_471 == joaat("WEAPON_GRENADE") || hLocal_471 == joaat("WEAPON_SMOKEGRENADE") || hLocal_471 == joaat("WEAPON_STICKYBOMB") || hLocal_471 == joaat("WEAPON_MOLOTOV") || hLocal_471 == joaat("WEAPON_FLARE"))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_122(15, 1);
			}
			else if (MISC::GET_GAME_TIMER() - iLocal_61 > 10000 && ENTITY::GET_ENTITY_SPEED(pedLocal_67) < 1f && func_4(PLAYER::PLAYER_PED_ID(), pedLocal_67, true) < 5f)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@enter");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@idle_a");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@exit");
			
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@enter") && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@idle_a") && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@exit"))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_67);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_67, iLocal_117);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
					iLocal_61 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}

	return;
}

void func_45() // Position - 0x3058 (12376)
{
	if (func_15() && !func_46(4))
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67) && iLocal_105 == 0 && PED::IS_PED_IN_GROUP(pedLocal_67))
			PED::REMOVE_PED_FROM_GROUP(pedLocal_67);
	
		func_122(12, 1);
	}

	return;
}

BOOL func_46(int iParam0) // Position - 0x309C (12444)
{
	int i;

	if (func_15())
	{
		for (i = 0; i < 62; i = i + 1)
		{
			if (func_53(i) == iParam0)
				if (func_47(i))
					return true;
		}
	}

	return false;
}

BOOL func_47(int iParam0) // Position - 0x30D7 (12503)
{
	return func_48(iParam0, 5, true);
}

BOOL func_48(int iParam0, int iParam1, BOOL bParam2) // Position - 0x30E7 (12519)
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_101765.f_1421[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_10() == 0)
			return IS_BIT_SET(func_49(func_52(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114162.f_668[iParam0], iParam1);

	return false;
}

int func_49(int iParam0, int iParam1) // Position - 0x3147 (12615)
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

Hash func_50(int iParam0, int iParam1) // Position - 0x3176 (12662)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_51(iParam1));
}

int func_51(int iParam0) // Position - 0x318B (12683)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_13();
	
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

int func_52(int iParam0) // Position - 0x31BF (12735)
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

int func_53(int iParam0) // Position - 0x3576 (13686)
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
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
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	}

	return 6;
}

void func_54() // Position - 0x38B9 (14521)
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (iLocal_58 == -1)
		{
			iLocal_58 = MISC::GET_GAME_TIMER();
			iLocal_59 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000);
		}
	
		if (MISC::GET_GAME_TIMER() - iLocal_58 > iLocal_59)
		{
			func_123("SNARL");
			iLocal_58 = -1;
		}
	}

	return;
}

void func_55() // Position - 0x38FC (14588)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_105 > 1 && iLocal_105 < 8)
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 309, true);
	
		if (iLocal_115 == 1 && iLocal_105 == 1)
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 313, true);
	}

	switch (iLocal_105)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_476 = MISC::GET_GAME_TIMER();
				iLocal_63 = -1;
				iLocal_64 = -1;
				iLocal_55 = MISC::GET_GAME_TIMER();
				func_83();
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
				iLocal_489 = 1;
				iLocal_105 = 1;
			}
			else
			{
				if (hLocal_473 != 0)
					hLocal_473 = 0;
			
				iLocal_335 = 0;
				iLocal_57 = -1;
			
				if (func_82())
					func_122(3, 1);
			}
			break;
	
		case 1:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_105 = 15;
			}
			else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (func_81())
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) != PLAYER::PLAYER_PED_ID())
					{
						func_122(3, 1);
					}
					else
					{
						if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
						{
							pedLocal_78 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							func_80();
							func_79();
						}
					
						STREAMING::REQUEST_ANIM_DICT(sLocal_475);
					
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_475) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
						{
							if (PED::IS_PED_IN_GROUP(pedLocal_67))
								PED::REMOVE_PED_FROM_GROUP(pedLocal_67);
						
							if (func_78())
							{
								if (iLocal_63 == -1)
									iLocal_63 = MISC::GET_GAME_TIMER();
							
								if (func_77())
								{
									func_76(1);
									iLocal_105 = 6;
								}
								else
								{
									func_75();
								}
							}
							else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), pedLocal_78, 0, false, false))
							{
								if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(pedLocal_78, iLocal_116) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(pedLocal_78, 1) > 0.9f)
									iLocal_105 = 4;
								else
									iLocal_105 = 2;
							}
							else
							{
								func_76(1);
								iLocal_105 = 6;
							}
						}
					}
				}
				else if (func_22())
				{
					iLocal_105 = 14;
				}
				else
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !IS_BIT_SET(Global_114162.f_10053.f_94, 3) && !func_19() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_114162.f_10053.f_94), 3);
						_DISPLAY_HELP_TEXT("CHOP_H_NOVEH" /*Chop can only get into suitable cars with an empty front passenger seat.*/, -1);
					}
				
					func_122(3, 1);
				}
			}
			else
			{
				if (func_81())
				{
					STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
					func_75();
				}
			
				if (iLocal_335 == 0 && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
				{
					PED::SET_PED_CONFIG_FLAG(pedLocal_67, 185, false);
				
					if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !func_23())
					{
						if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) == joaat("taxi"))
						{
						}
						else if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) >= 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0, false))
						{
							if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								func_109("CHOP_RIDE", 0);
						}
					}
					else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) || func_23())
					{
						func_109("CHOP_FOLLOW", 0);
					}
				
					iLocal_335 = 1;
				}
			}
			break;
	
		case 2:
			func_73();
		
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_105 = 15;
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
			
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschop_vehicleenter_exit"))
				{
					func_72();
					iLocal_105 = 3;
				}
			}
			break;
	
		case 3:
			func_73();
		
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_105 = 15;
			}
			else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78) && func_71())
			{
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(pedLocal_78, iLocal_116))
					VEHICLE::SET_VEHICLE_DOOR_OPEN(pedLocal_78, iLocal_116, false, false);
			
				iLocal_487 = MISC::GET_GAME_TIMER();
				iLocal_63 = MISC::GET_GAME_TIMER();
				iLocal_105 = 4;
			}
			break;
	
		case 4:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_105 = 15;
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_475);
			
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
				{
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(pedLocal_78, iLocal_116) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(pedLocal_78, iLocal_116) < 0.95f)
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(pedLocal_78, iLocal_116, false, false);
						iLocal_487 = MISC::GET_GAME_TIMER();
					}
				
					if (func_77() && MISC::GET_GAME_TIMER() >= iLocal_487 + 300)
					{
						if (!func_114(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PLAY_ANIM) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_475))
						{
							func_73();
							func_70(1, 1);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_67);
							iLocal_106 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_106, pedLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(pedLocal_78, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_67, iLocal_106, sLocal_475, "get_in", 1000f, -8f, 4, 0, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_67, false, false);
							iLocal_105 = 5;
						}
					}
					else
					{
						func_75();
					}
				}
			}
			break;
	
		case 5:
			func_73();
		
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(caLocal_484))
					CAM::SET_USE_HI_DOF();
			
				STREAMING::REQUEST_ANIM_DICT(sLocal_475);
			
				if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_475) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_106) > 0.99f && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
				{
					func_70(0, 1);
					func_76(0);
					iLocal_105 = 6;
				}
			}
			break;
	
		case 6:
			func_73();
		
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
			
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschop_vehicleenter_exit") && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
				{
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(pedLocal_78, iLocal_116) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(pedLocal_78, 1) > 0.1f && !func_78())
						func_72();
				
					iLocal_105 = 7;
				}
			}
			break;
	
		case 7:
			func_73();
		
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78) && func_71())
			{
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(pedLocal_78, iLocal_116))
					VEHICLE::SET_VEHICLE_DOOR_SHUT(pedLocal_78, iLocal_116, false);
			
				iLocal_105 = 8;
			}
			break;
	
		case 8:
			func_73();
			func_68(&blLocal_68);
			func_40(1);
		
			if (iLocal_52 == -1)
			{
				iLocal_52 = MISC::GET_GAME_TIMER();
				iLocal_53 = 7000;
			}
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
			{
				if (func_67())
				{
					func_69(2f, 0f, 0f, 1);
				}
				else if (FIRE::IS_ENTITY_ON_FIRE(pedLocal_78))
				{
					func_69(2f, 0f, 0f, 1);
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SPEED(pedLocal_78) < 5f)
					{
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(pedLocal_78, iLocal_116))
							VEHICLE::SET_VEHICLE_DOOR_OPEN(pedLocal_78, iLocal_116, false, false);
					
						iLocal_105 = 12;
					}
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_VEH_EXIT))
				{
					if (ENTITY::IS_ENTITY_UPSIDEDOWN(pedLocal_78))
					{
						func_69(2f, 0f, 0f, 1);
					}
					else if (func_78())
					{
						iLocal_105 = 9;
					}
					else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), pedLocal_78, 0, false, false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(pedLocal_78, 10f, 1, false);
					
						if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(pedLocal_78, iLocal_116))
							iLocal_105 = 12;
						else
							iLocal_105 = 10;
					}
					else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), pedLocal_78, -1, false, false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(pedLocal_78, 10f, 1, false);
						func_69(-2f, 0f, 0f, 0);
					}
					else
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(pedLocal_78, 10f, 1, false);
						func_69(0f, -4f, 0f, 0);
					}
				}
				else
				{
					func_66();
					func_64();
					func_63();
				
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !IS_BIT_SET(Global_114162.f_10053.f_94, 2) && !func_19() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_114162.f_10053.f_94), 2);
						_DISPLAY_HELP_TEXT("CHOP_H_CAR" /*Chop will follow Franklin into suitable cars with an empty front passenger seat.*/, -1);
					}
				}
			}
			else
			{
				func_69(2f, 0f, 0f, 1);
			}
			break;
	
		case 9:
			func_73();
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_114(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE))
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				func_69(2f, 0f, 0f, 1);
			break;
	
		case 10:
			func_73();
		
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
			
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschop_vehicleenter_exit"))
				{
					func_72();
					iLocal_105 = 11;
				}
			}
			break;
	
		case 11:
			func_73();
		
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78) && func_71())
			{
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(pedLocal_78, iLocal_116))
					VEHICLE::SET_VEHICLE_DOOR_OPEN(pedLocal_78, iLocal_116, false, false);
			
				iLocal_105 = 12;
			}
			break;
	
		case 12:
			func_73();
			STREAMING::REQUEST_ANIM_DICT(sLocal_475);
		
			if (!func_114(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PLAY_ANIM) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_475) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_67);
				iLocal_106 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_106, pedLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(pedLocal_78, "seat_pside_f"));
				TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_67, iLocal_106, sLocal_475, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_67, false, false);
				iLocal_105 = 13;
			}
			break;
	
		case 13:
			func_73();
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && MISC::GET_GAME_TIMER() - iLocal_477 > 1500 && !func_114(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE))
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_106) > 0.99f)
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(pedLocal_67, pedLocal_67, 0f, 5f, 0f, 1f, 20000);
				iLocal_105 = 15;
			}
			break;
	
		case 14:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_105 = 15;
			}
			else
			{
				func_66();
			
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !IS_BIT_SET(Global_114162.f_10053.f_94, 5) && !func_19() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_114162.f_10053.f_94), 5);
					_DISPLAY_HELP_TEXT("CHOP_H_BIKE" /*Chop will follow bikes and other vehicles he cannot get inside.*/, -1);
				}
			}
			break;
	
		case 15:
			func_73();
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_58();
				func_100(false, 0, false);
				STREAMING::REMOVE_ANIM_DICT("misschop_vehicleenter_exit");
				STREAMING::REMOVE_ANIM_DICT(sLocal_475);
				iLocal_60 = MISC::GET_GAME_TIMER();
				func_57();
				func_56(&pedLocal_78);
				pedLocal_78 = 0;
				iLocal_52 = -1;
				TASK::CLEAR_PED_TASKS(pedLocal_67);
				ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_67, false, false);
				PED::SET_PED_CONFIG_FLAG(pedLocal_67, 185, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
				func_122(2, 1);
			}
			else if (!func_114(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			break;
	}

	return;
}

void func_56(Vehicle* pveParam0) // Position - 0x430A (17162)
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*pveParam0, false);
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
	}

	return;
}

void func_57() // Position - 0x4342 (17218)
{
	if (iLocal_489 == 1 && _DOES_ENTITY_EXIST_AND_IS_ALIVE(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) > 1 && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), iLocal_116))
		VEHICLE::SET_VEHICLE_DOOR_LATCHED(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), iLocal_116, false, true, false);

	return;
}

void func_58() // Position - 0x438B (17291)
{
	if (!HUD::DOES_BLIP_EXIST(blLocal_68) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_67, true))
	{
		if (func_180(126))
			func_62(139, false, false);
		else
			func_62(138, false, false);
	
		blLocal_68 = func_59(pedLocal_67, false, 145);
		HUD::SET_BLIP_SPRITE(blLocal_68, BLIP_CHOP);
	}

	return;
}

Blip func_59(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x43E5 (17381)
{
	Blip blip;

	blip = func_60(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2201[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2201[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_60(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x442F (17455)
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

var func_61(BOOL bParam0, var uParam1, var uParam2) // Position - 0x44D3 (17619)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_62(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x44EA (17642)
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
	
		if (Global_33482 == 1)
			Global_33483 = 1;
	
		Global_33482 = 1;
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

void func_63() // Position - 0x45EA (17898)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
	{
		if (iLocal_476 > -1)
		{
			if (MISC::GET_GAME_TIMER() - iLocal_476 > 500 && ENTITY::GET_ENTITY_SPEED(pedLocal_78) > 5f && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(pedLocal_78))
			{
				TASK::TASK_PLAY_ANIM(pedLocal_67, sLocal_475, "shunt_from_back", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_67, false, false);
				func_123("GROWL");
				iLocal_476 = -1;
				iLocal_55 = MISC::GET_GAME_TIMER();
			}
		}
		else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_67, sLocal_475, "shunt_from_back", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_67, sLocal_475, "shunt_from_back", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_67, sLocal_475, "shunt_from_back") > 0.98f)
		{
			TASK::TASK_PLAY_ANIM(pedLocal_67, sLocal_475, "sit", 8f, -8f, -1, 1, 0, false, false, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_67, false, false);
			iLocal_476 = MISC::GET_GAME_TIMER();
			iLocal_55 = MISC::GET_GAME_TIMER();
		}
	}

	return;
}

void func_64() // Position - 0x46DE (18142)
{
	if (iLocal_476 > -1 && MISC::GET_GAME_TIMER() - iLocal_52 > iLocal_53)
	{
		if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 7 || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 8 || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 9 || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 13)
		{
			func_65();
			iLocal_52 = MISC::GET_GAME_TIMER();
			iLocal_53 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000);
		}
	}

	return;
}

void func_65() // Position - 0x4743 (18243)
{
	if (MISC::GET_GAME_TIMER() - iLocal_55 > 500)
	{
		iLocal_55 = MISC::GET_GAME_TIMER();
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67) && PED::IS_PED_IN_ANY_VEHICLE(pedLocal_67, false))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
			TASK::TASK_PLAY_ANIM(0, sLocal_475, "bark", 4f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_475, "sit", 8f, -8f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_67, iLocal_117);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_67, false, false);
		}
	}

	return;
}

void func_66() // Position - 0x47C9 (18377)
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && bLocal_393 == true)
	{
		if (iLocal_57 == -1)
			iLocal_57 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - iLocal_57 > 10000 && iLocal_476 > -1 && func_38())
		{
			if (func_35())
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
					if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_67, false))
						func_65();
					else
						func_123("BARK");
		
			iLocal_57 = MISC::GET_GAME_TIMER();
		}
	}

	return;
}

BOOL func_67() // Position - 0x4844 (18500)
{
	float height;
	Vector3 entityCoords;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(pedLocal_78))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_78, true) };
		
			if (iLocal_66 == -1)
				iLocal_66 = MISC::GET_GAME_TIMER();
		
			if (WATER::GET_WATER_HEIGHT(entityCoords, &height))
			{
				if (height - entityCoords.f_2 > 1f)
				{
					return true;
				}
				else if (MISC::GET_GAME_TIMER() - iLocal_66 > 3000)
				{
					func_123("AGITATED");
					iLocal_66 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			iLocal_66 = -1;
		}
	}

	return false;
}

void func_68(Blip* pblParam0) // Position - 0x48B7 (18615)
{
	if (HUD::DOES_BLIP_EXIST(*pblParam0))
	{
		HUD::SET_BLIP_ROUTE(*pblParam0, false);
		HUD::REMOVE_BLIP(pblParam0);
	}

	return;
}

void func_69(float fParam0, float fParam1, float fParam2, int iParam3) // Position - 0x48D7 (18647)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
		{
			if (iParam3 == 1 && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(pedLocal_78, iLocal_116) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(pedLocal_78, 1) < 0.9f)
				VEHICLE::SET_VEHICLE_DOOR_OPEN(pedLocal_78, iLocal_116, false, false);
		
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106))
				PED::DETACH_SYNCHRONIZED_SCENE(iLocal_106);
		
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_67);
			func_125(pedLocal_67, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_78, fParam0), ENTITY::GET_ENTITY_HEADING(pedLocal_67), true, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_67, false, false);
			func_70(0, 0);
			iLocal_105 = 15;
		}
		else
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106))
				PED::DETACH_SYNCHRONIZED_SCENE(iLocal_106);
		
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_67);
			func_125(pedLocal_67, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), fParam0 + 1f, fParam0.f_1, fParam0.f_2), ENTITY::GET_ENTITY_HEADING(pedLocal_67), true, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_67, false, false);
			func_70(0, 0);
			iLocal_105 = 15;
		}
	}

	return;
}

void func_70(int iParam0, int iParam1) // Position - 0x49BC (18876)
{
	var unk;
	var unk4;
	int randomIntInRange;
	Vector3 worldPositionOfEntityBone;
	var offsetFromEntityGivenWorldCoords;
	Vector3 vector;

	if (iParam0 == 1)
	{
		if (!CAM::DOES_CAM_EXIST(caLocal_484) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		
			if (randomIntInRange == 0)
			{
				unk = { 1.11573f, -1.40338f, 0.555789f };
				unk4 = { 0.5f, 0f, 0.3f };
			}
			else if (randomIntInRange == 1)
			{
				unk = { -1.15872f, 1.75252f, 0.761228f };
				unk4 = { 0f, 0f, 0.3f };
			}
			else if (randomIntInRange == 2)
			{
				unk = { -1.89975f, 0.339287f, 0.661881f };
				unk4 = { 0f, 0f, 0.3f };
			}
			else
			{
				unk = { 1.38134f, -0.1248f, 0.580783f };
				unk4 = { 0f, 0f, 0.3f };
			}
		
			caLocal_484 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(pedLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(pedLocal_78, "seat_pside_f")) };
			offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(pedLocal_78, worldPositionOfEntityBone) };
			vector = { unk + offsetFromEntityGivenWorldCoords };
			CAM::ATTACH_CAM_TO_ENTITY(caLocal_484, pedLocal_78, vector, true);
			CAM::POINT_CAM_AT_ENTITY(caLocal_484, pedLocal_78, offsetFromEntityGivenWorldCoords + unk4, true);
			CAM::SET_CAM_FOV(caLocal_484, 50f);
			CAM::SHAKE_CAM(caLocal_484, "HAND_SHAKE", 0.3f);
			CAM::SET_CAM_DOF_PLANES(caLocal_484, 0f, 0f, 100000f, 100000f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
	}
	else if (CAM::DOES_CAM_EXIST(caLocal_484))
	{
		if (iParam1 == 1)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		}
	
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_ALL_CAMS(false);
	}

	return;
}

BOOL func_71() // Position - 0x4B49 (19273)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
		if (MISC::GET_GAME_TIMER() - iLocal_477 > 500 || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(pedLocal_78, iLocal_116) || func_78())
			return 1;

	return 0;
}

void func_72() // Position - 0x4B86 (19334)
{
	TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misschop_vehicleenter_exit", sLocal_474, 8f, -8f, -1, 40, 0, false, false, false);
	iLocal_477 = MISC::GET_GAME_TIMER();
	return;
}

void func_73() // Position - 0x4BB5 (19381)
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ENTER, true);
	return;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x4BCD (19405)
{
	if (Global_22442 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_75() // Position - 0x4BEF (19439)
{
	if (!func_114(pedLocal_67, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && func_4(PLAYER::PLAYER_PED_ID(), pedLocal_67, true) > 1f)
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_67, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), 2f, 0f, 0f), 2f, 20000, 1048576000, 0, 1193033728);

	return;
}

void func_76(int iParam0) // Position - 0x4C3D (19517)
{
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}

	func_68(&blLocal_68);
	ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_67, true, false);
	PED::SET_PED_INTO_VEHICLE(pedLocal_67, pedLocal_78, 0);
	TASK::TASK_PLAY_ANIM(pedLocal_67, sLocal_475, "sit", 8f, -8f, -1, 1, 0, false, false, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_67, false, false);
	return;
}

BOOL func_77() // Position - 0x4C96 (19606)
{
	float num;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
	{
		if (iLocal_64 == -1)
		{
			num = func_4(pedLocal_78, pedLocal_67, true);
			iLocal_64 = SYSTEM::FLOOR(num * 1000f);
		
			if (iLocal_64 < 5000)
				iLocal_64 = 5000;
		}
	
		if (func_39(pedLocal_67, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_78, 2f, 0f, 0f), false) < 1f || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ACCELERATE) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_BRAKE) || iLocal_63 > -1 && MISC::GET_GAME_TIMER() - iLocal_63 > iLocal_64)
			return true;
	}

	return false;
}

BOOL func_78() // Position - 0x4D2B (19755)
{
	Hash entityModel;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true));
	
		if (entityModel == joaat("airbus") || entityModel == joaat("barracks") || entityModel == joaat("barracks2") || entityModel == joaat("biff") || entityModel == joaat("bus") || entityModel == joaat("coach") || entityModel == joaat("hauler") || entityModel == joaat("mixer") || entityModel == joaat("mixer2") || entityModel == joaat("packer") || entityModel == joaat("pbus") || entityModel == joaat("phantom") || entityModel == joaat("pounder") || entityModel == joaat("riot") || entityModel == joaat("rubble") || entityModel == joaat("scrap") || entityModel == joaat("stockade") || entityModel == joaat("stockade3") || entityModel == joaat("tiptruck") || entityModel == joaat("tiptruck2") || entityModel == joaat("towtruck") || entityModel == joaat("towtruck2") || entityModel == MISC::GET_HASH_KEY("monster" /*Monster*/) || entityModel == MISC::GET_HASH_KEY("marshall"))
			return true;
	}

	return false;
}

void func_79() // Position - 0x4EA3 (20131)
{
	Hash entityModel;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedLocal_78);
	
		if (entityModel == joaat("coach"))
			iLocal_116 = 0;
		else
			iLocal_116 = 1;
	}

	return;
}

void func_80() // Position - 0x4ECF (20175)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
	{
		hLocal_473 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(pedLocal_78);
	
		switch (hLocal_473)
		{
			case joaat("LAYOUT_VAN"):
			case joaat("LAYOUT_VAN_BODHI"):
			case joaat("LAYOUT_VAN_BOXVILLE"):
			case joaat("LAYOUT_VAN_CADDY"):
			case joaat("LAYOUT_VAN_JOURNEY"):
			case joaat("LAYOUT_VAN_MULE"):
			case joaat("LAYOUT_VAN_POLICE"):
			case joaat("LAYOUT_VAN_TRASH"):
			case joaat("LAYOUT_4X4_DUBSTA"):
			case joaat("LAYOUT_VAN_ROOSEVELT"):
				sLocal_475 = "creatures@rottweiler@in_vehicle@van";
				sLocal_474 = "van_ds_open_door_for_chop";
				break;
		
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_DUNE"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_BLADE"):
			case joaat("LAYOUT_LOW_TURISMOR"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_LOW_OSIRIS"):
				sLocal_475 = "creatures@rottweiler@in_vehicle@low_car";
				sLocal_474 = "low_ds_open_door_for_chop";
				break;
		
			case joaat("LAYOUT_4X4"):
			case joaat("LAYOUT_BISON"):
			case joaat("LAYOUT_RANGER"):
			case joaat("LAYOUT_RANGER_SWAT"):
				sLocal_475 = "creatures@rottweiler@in_vehicle@4x4";
				sLocal_474 = "std_ds_open_door_for_chop";
				break;
		
			default:
				sLocal_475 = "creatures@rottweiler@in_vehicle@std_car";
				sLocal_474 = "std_ds_open_door_for_chop";
				break;
		}
	
		if (ENTITY::GET_ENTITY_MODEL(pedLocal_78) == joaat("brawler"))
		{
			sLocal_475 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_474 = "std_ds_open_door_for_chop";
		}
	}

	return;
}

BOOL func_81() // Position - 0x4FDD (20445)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, false) && !func_23())
		return true;

	return false;
}

BOOL func_82() // Position - 0x5073 (20595)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-14.5f, -1437.2f, 31.1f))
			return true;
	
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(7.6f, 537.3f, 176f))
			return true;
	
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(130.2632f, -1295.0345f, 28.2695f))
			return true;
	}

	return false;
}

void func_83() // Position - 0x50F1 (20721)
{
	var entityCoords;
	var offsetFromEntityInWorldCoords;
	var offsetFromEntityInWorldCoords2;
	Vector3 vector;
	Vector3 vector2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), 2f, 0f, 0f) };
	vector = { offsetFromEntityInWorldCoords - entityCoords };
	offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), -2f, 0f, 0f) };
	vector2 = { offsetFromEntityInWorldCoords2 - entityCoords };

	if (SYSTEM::VMAG(vector) < SYSTEM::VMAG(vector2))
		iLocal_115 = 1;
	else
		iLocal_115 = 0;

	return;
}

void func_84() // Position - 0x5169 (20841)
{
	Vector3 vector;
	float distanceBetweenCoords;
	int i;

	if (iLocal_337 != 5 || MISC::GET_GAME_TIMER() - iLocal_338 < 1000 || bLocal_393 == false)
		return;

	func_98();
	i = 0;

	for (i = 0; i < 102; i = i + 1)
	{
		if (func_97(i))
		{
			vector = { func_96(i, true) };
		
			if (!_IS_NULL_VECTOR(vector))
			{
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_67, true), vector, true);
			
				if (distanceBetweenCoords < uLocal_345[2] && distanceBetweenCoords < fLocal_390)
				{
					uLocal_339[2] = i;
					uLocal_345[2] = distanceBetweenCoords;
					uLocal_351[2 /*3*/] = { func_96(i, false) };
					uLocal_367[2 /*3*/] = { vector };
				}
			}
		}
	}

	i = 0;

	for (i = 0; i < 76; i = i + 1)
	{
		if (func_94(i))
		{
			vector = { func_93(i, true) };
		
			if (!_IS_NULL_VECTOR(vector))
			{
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_67, true), vector, true);
			
				if (distanceBetweenCoords < uLocal_345[1] && distanceBetweenCoords < fLocal_390)
				{
					uLocal_339[1] = i;
					uLocal_345[1] = distanceBetweenCoords;
					uLocal_351[1 /*3*/] = { func_93(i, false) };
					uLocal_367[1 /*3*/] = { vector };
				}
			}
		}
	}

	i = 0;

	for (i = 0; i < 45; i = i + 1)
	{
		if (func_92(i))
		{
			vector = { func_91(i, true) };
		
			if (!_IS_NULL_VECTOR(vector))
			{
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_67, true), vector, true);
			
				if (distanceBetweenCoords < uLocal_345[0] && distanceBetweenCoords < fLocal_390)
				{
					uLocal_339[0] = i;
					uLocal_345[0] = distanceBetweenCoords;
					uLocal_351[0 /*3*/] = { func_91(i, false) };
					uLocal_367[0 /*3*/] = { vector };
				}
			}
		}
	}

	if (func_90())
	{
		i = 0;
	
		for (i = 0; i < 50; i = i + 1)
		{
			if (!func_26(i) && func_89(i))
			{
				vector = { func_88(i, 1) };
			
				if (!_IS_NULL_VECTOR(vector))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_67, true), vector, true);
				
					if (distanceBetweenCoords < uLocal_345[3] && distanceBetweenCoords < fLocal_390)
					{
						uLocal_339[3] = i;
						uLocal_345[3] = distanceBetweenCoords;
						uLocal_351[3 /*3*/] = { func_88(i, 0) };
						uLocal_367[3 /*3*/] = { vector };
					}
				}
			}
		}
	}

	if (func_87())
	{
		i = 0;
	
		for (i = 0; i < 50; i = i + 1)
		{
			if (!func_25(i) && func_86(i))
			{
				vector = { func_85(i, 1) };
			
				if (!_IS_NULL_VECTOR(vector))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_67, true), vector, true);
				
					if (distanceBetweenCoords < uLocal_345[4] && distanceBetweenCoords < fLocal_390)
					{
						uLocal_339[4] = i;
						uLocal_345[4] = distanceBetweenCoords;
						uLocal_351[4 /*3*/] = { func_85(i, 0) };
						uLocal_367[4 /*3*/] = { vector };
					}
				}
			}
		}
	}

	iLocal_338 = MISC::GET_GAME_TIMER();
	return;
}

Vector3 func_85(int iParam0, int iParam1) // Position - 0x547C (21628)
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495.9f, 12.9448f;
	
		case 1:
			if (iParam1 == 1)
				return 606.8925f, -3250.1875f, 5.06951f;
			else
				return 634.5865f, -3232.7903f, -16.5774f;
			break;
	
		case 2:
			return 1590.5997f, -2810.174f, 3.4494f;
	
		case 3:
			if (iParam1 == 1)
				return 327.99f, -2757.61f, 4.99f;
			else
				return 338.4039f, -2762.1057f, 42.6543f;
			break;
	
		case 4:
			if (iParam1 == 1)
				return 1134.4216f, -2607.0237f, 14.77071f;
			else
				return 1133.6882f, -2605.0728f, 14.9729f;
			break;
	
		case 5:
			if (iParam1 == 1)
				return 368.93164f, -2118.5327f, 15.40341f;
			else
				return 369.945f, -2116.7556f, 16.1688f;
			break;
	
		case 6:
			if (iParam1 == 1)
				return 1741.82f, -1623.85f, 111.41f;
			else
				return 1742.0242f, -1618.7767f, 111.8313f;
			break;
	
		case 7:
			return 287.7294f, -1444.4f, 45.5095f;
	
		case 8:
			return 17.5926f, -1213.2073f, 28.3678f;
	
		case 9:
			if (iParam1 == 1)
				return -910.01715f, -1147.44f, 1.06785f;
			else
				return -900.3597f, -1165.5511f, 31.8047f;
			break;
	
		case 10:
			if (iParam1 == 1)
				return 1237.7278f, -1099.1497f, 37.52579f;
			else
				return 1231.9734f, -1102.3076f, 34.4289f;
			break;
	
		case 11:
			if (iParam1 == 1)
				return 87.69075f, 810.3736f, 210.12582f;
			else
				return 81.2213f, 814.0283f, 213.2917f;
			break;
	
		case 12:
			if (iParam1 == 1)
				return -1900.9506f, 1389.5819f, 218.1509f;
			else
				return -1907.5149f, 1388.69f, 217.9728f;
			break;
	
		case 13:
			if (iParam1 == 1)
				return 467.36896f, -730.75525f, 26.36373f;
			else
				return 469.8529f, -730.8f, 26.3985f;
			break;
	
		case 14:
			return 202.1081f, -569.7198f, 128.18f;
	
		case 15:
			if (iParam1 == 1)
				return 163.0531f, -566.3394f, 21.029f;
			else
				return 159.39f, -563.82f, 21f;
			break;
	
		case 16:
			if (iParam1 == 1)
				return -1183.1521f, -518.5386f, 38.53018f;
			else
				return -1182.5385f, -525.5859f, 39.9114f;
			break;
	
		case 17:
			return -228.0476f, -236.4184f, 49.1361f;
	
		case 18:
			return -407.7026f, -151.7918f, 63.5505f;
	
		case 19:
			if (iParam1 == 1)
				return -1169.3975f, -56.76701f, 44.45705f;
			else
				return -1175.4877f, -65.4649f, 44.6563f;
			break;
	
		case 20:
			if (iParam1 == 1)
				return 1679.0564f, 39.44059f, 160.77364f;
			else
				return 1684.664f, 40.7142f, 153.4074f;
			break;
	
		case 21:
			if (iParam1 == 1)
				return 1964.25f, 553.68f, 160.72f;
			else
				return 1965.58f, 555.99f, 160.79f;
			break;
	
		case 22:
			if (iParam1 == 1)
				return 24.21706f, 637.1212f, 206.38968f;
			else
				return 22.4492f, 638.8155f, 189.6085f;
			break;
	
		case 23:
			return 2901.204f, 796.1192f, 3.3556f;
	
		case 24:
			if (iParam1 == 1)
				return -1531.895f, 870.3203f, 180.67746f;
			else
				return -1529.7219f, 871.4257f, 180.6421f;
			break;
	
		case 25:
			return -404.3191f, 1100.889f, 331.535f;
	
		case 26:
			return -2809.3538f, 1449.643f, 99.928f;
	
		case 27:
			if (iParam1 == 1)
				return 3144.0452f, 2184.4133f, -5.2961f;
			else
				return 3144.0452f, 2184.4133f, -5.2961f;
			break;
	
		case 28:
			return 815.7574f, 1850.879f, 120.1796f;
	
		case 29:
			return -1944.24f, 1941.07f, 162.8f;
	
		case 30:
			if (iParam1 == 1)
				return -1452.23f, 2127.41f, 42.84f;
			else
				return -1436.87f, 2130.22f, 26.78f;
			break;
	
		case 31:
			return 1367.4128f, 2180.6316f, 96.6914f;
	
		case 32:
			if (iParam1 == 1)
				return 170.1652f, 2217.637f, 89.30811f;
			else
				return 172.1426f, 2220.1313f, 89.7842f;
			break;
	
		case 33:
			return 889.3209f, 2870.0522f, 55.2834f;
	
		case 34:
			if (iParam1 == 1)
				return 1980.2f, 2914.79f, 45.48f;
			else
				return 1963.55f, 2922.81f, 57.76f;
			break;
	
		case 35:
			return -390.384f, 2963.2605f, 18.2713f;
	
		case 36:
			return 71.6642f, 3279.3682f, 30.3918f;
	
		case 37:
			return 1924.1864f, 3471.2563f, 50.3238f;
	
		case 38:
			return -583.1569f, 3580.3752f, 266.2471f;
	
		case 39:
			if (iParam1 == 1)
				return 2514.3015f, 3789.5193f, 52.077f;
			else
				return 2516.98f, 3789.35f, 53.79f;
			break;
	
		case 40:
			if (iParam1 == 1)
				return 1517.6129f, 3803.926f, 30.95605f;
			else
				return 1486.0475f, 3857.2168f, 22.2905f;
			break;
	
		case 41:
			if (iParam1 == 1)
				return -530.27386f, 4474.3584f, 59.45993f;
			else
				return -528.8246f, 4440.6436f, 31.7384f;
			break;
	
		case 42:
			if (iParam1 == 1)
				return 3815.055f, 4447.343f, 2.06631f;
			else
				return 3820.8132f, 4441.683f, 1.8007f;
			break;
	
		case 43:
			if (iParam1 == 1)
				return -1946.95f, 4584.36f, 56.06f;
			else
				return -1943.0546f, 4585.1943f, 46.6362f;
			break;
	
		case 44:
			return 2437.5452f, 4779.9595f, 33.5101f;
	
		case 45:
			return -1441.4948f, 5414.888f, 23.3f;
	
		case 46:
			return 2196.2507f, 5599.034f, 52.7129f;
	
		case 47:
			if (iParam1 == 1)
				return -503.95f, 5673.55f, 51.24f;
			else
				return -503.2193f, 5665.6104f, 48.8487f;
			break;
	
		case 48:
			if (iParam1 == 1)
				return -378.41922f, 6080.782f, 30.44296f;
			else
				return -381.291f, 6086.949f, 38.6147f;
			break;
	
		case 49:
			return 440.9546f, 6459.6416f, 27.7432f;
	}

	return 0f, 0f, 0f;
}

BOOL func_86(int iParam0) // Position - 0x5CC8 (23752)
{
	switch (iParam0)
	{
		case 2:
		case 14:
		case 18:
		case 25:
			return false;
	
		case 16:
			if (IS_BIT_SET(Global_33265, 7))
				return false;
			break;
	}

	return true;
}

BOOL func_87() // Position - 0x5D0C (23820)
{
	return Global_114162.f_10053.f_125.f_2;
}

Vector3 func_88(int iParam0, int iParam1) // Position - 0x5D1F (23839)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
				return 1034.2743f, -3026.2754f, 4.90197f;
			else
				return 1026.7053f, -3026.0515f, 13.3323f;
			break;
	
		case 1:
			if (iParam1 == 1)
				return -1040.9789f, -2743.5093f, 12.94983f;
			else
				return -1048.6035f, -2734.218f, 12.8895f;
			break;
	
		case 2:
			if (iParam1 == 1)
				return -93.9012f, -2711.3145f, 5.01752f;
			else
				return -81.1199f, -2726.5112f, 7.74f;
			break;
	
		case 3:
			return -917.6909f, -2527.3843f, 22.3218f;
	
		case 4:
			if (iParam1 == 1)
				return 746.45f, -2310.32f, 26.03f;
			else
				return 748.922f, -2298.114f, 19.624f;
			break;
	
		case 5:
			if (iParam1 == 1)
				return 1509.7421f, -2126.0376f, 75.21973f;
			else
				return 1509.0994f, -2120.551f, 75.61f;
			break;
	
		case 6:
			return 76.0032f, -1970.4752f, 20.1302f;
	
		case 7:
			if (iParam1 == 1)
				return -1.82327f, -1732.6144f, 28.29367f;
			else
				return 0.067f, -1734.027f, 30.606f;
			break;
	
		case 8:
			if (iParam1 == 1)
				return -1377.7656f, -1409.837f, 4.63205f;
			else
				return -1380.4912f, -1404.3735f, 1.7273f;
			break;
	
		case 9:
			return 2864.8079f, -1372.8402f, 1.3151f;
	
		case 10:
			return -1035.8115f, -1273.0769f, 0.8919f;
	
		case 11:
			return -1821.1364f, -1201.3599f, 18.1698f;
	
		case 12:
			return 643.0116f, -1035.6504f, 35.8891f;
	
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
	
		case 14:
			if (iParam1 == 1)
				return -1243.1036f, -507.8057f, 30.10775f;
			else
				return -1238.7655f, -506.7138f, 37.6019f;
			break;
	
		case 15:
			if (iParam1 == 1)
				return 83.79993f, -431.9302f, 36.55315f;
			else
				return 86.4f, -433.9f, 36f;
			break;
	
		case 16:
			return 1095.9534f, -210.4642f, 54.9477f;
	
		case 17:
			return -1724.5217f, -196f, 57.2387f;
	
		case 18:
			return 265.374f, -199.546f, 60.795f;
	
		case 19:
			if (iParam1 == 1)
				return -3020.4749f, 36.55431f, 9.11777f;
			else
				return -3021.4f, 38f, 10.2945f;
			break;
	
		case 20:
			if (iParam1 == 1)
				return -347.52768f, 53.37161f, 52.97814f;
			else
				return -347.3f, 54.865f, 53.921f;
			break;
	
		case 21:
			return 1052.2484f, 167.611f, 87.7406f;
	
		case 22:
			return -2303.7976f, 217.4301f, 166.6017f;
	
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
	
		case 24:
			if (iParam1 == 1)
				return 688.1073f, 1204.6713f, 323.3438f;
			else
				return 682.4505f, 1204.9277f, 344.3322f;
			break;
	
		case 25:
			return -1548.7627f, 1380.1727f, 125.3728f;
	
		case 26:
			if (iParam1 == 1)
				return -432.14f, 1598.46f, 355.73f;
			else
				return -432.0034f, 1597.1292f, 356.613f;
			break;
	
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
	
		case 28:
			return -594.38f, 2092f, 130.57f;
	
		case 29:
			if (iParam1 == 1)
				return 3069.213f, 2160.9883f, 1.1327f;
			else
				return 3063.5828f, 2212.63f, 2.5863f;
			break;
	
		case 30:
			return 180.21f, 2263.83f, 91.87f;
	
		case 31:
			if (iParam1 == 1)
				return 926.96f, 2445.36f, 49.09f;
			else
				return 929.6946f, 2444.1155f, 48.43f;
			break;
	
		case 32:
			if (iParam1 == 1)
				return -2380.2124f, 2655.1758f, 0.832f;
			else
				return -2379.9482f, 2656.9534f, 1.4906f;
			break;
	
		case 33:
			return -861.38f, 2753.3f, 12.867f;
	
		case 34:
			return -289.0195f, 2848.8533f, 53.331f;
	
		case 35:
			if (iParam1 == 1)
				return 288.84085f, 2871.9116f, 42.6422f;
			else
				return 265.7415f, 2866.416f, 73.19f;
			break;
	
		case 36:
			if (iParam1 == 1)
				return 1297.378f, 2988.7102f, 40.11787f;
			else
				return 1294.2f, 3001.9f, 57.7f;
			break;
	
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
	
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
	
		case 39:
			if (iParam1 == 1)
				return -3.51812f, 4332.4507f, 31.21602f;
			else
				return -1.9585f, 4334.787f, 32.3702f;
			break;
	
		case 40:
			return 1336.7367f, 4307.1997f, 37.1325f;
	
		case 41:
			if (iParam1 == 1)
				return -1007.10284f, 4836.936f, 268.5488f;
			else
				return -1001.48f, 4851.322f, 273.6112f;
			break;
	
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
	
		case 43:
			if (iParam1 == 1)
				return 3366.0986f, 5182.4614f, 0.68317f;
			else
				return 3436.4526f, 5176.911f, 6.386f;
			break;
	
		case 44:
			if (iParam1 == 1)
				return -576.12f, 5472.24f, 59.28f;
			else
				return -578.8057f, 5470.164f, 59.0295f;
			break;
	
		case 45:
			return 444.6518f, 5571.7812f, 780.1888f;
	
		case 46:
			return -402.9948f, 6319.2793f, 31.2256f;
	
		case 47:
			return 1439.5989f, 6335.2075f, 22.9485f;
	
		case 48:
			if (iParam1 == 1)
				return 1466.109f, 6552.2656f, 12.95773f;
			else
				return 1469.6321f, 6552.1743f, 13.6854f;
			break;
	
		case 49:
			if (iParam1 == 1)
				return 66.19278f, 6668.8877f, 30.80633f;
			else
				return 66.7136f, 6663.1978f, 30.7821f;
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_89(int iParam0) // Position - 0x64FF (25855)
{
	switch (iParam0)
	{
		case 3:
		case 9:
		case 10:
		case 13:
		case 27:
		case 38:
			return false;
	
		case 14:
			if (IS_BIT_SET(Global_33265, 7))
				return false;
			break;
	}

	return true;
}

BOOL func_90() // Position - 0x654F (25935)
{
	return Global_114162.f_10053.f_122.f_2;
}

Vector3 func_91(int iParam0, BOOL bParam1) // Position - 0x6562 (25954)
{
	switch (iParam0)
	{
		case 0:
			return 473.1829f, -2643.1838f, 4.7209f;
	
		case 1:
			if (bParam1 == true)
				return 291.41f, -2090.78f, 16.29f;
			else
				return 289.2062f, -2091.221f, 16.0234f;
			break;
	
		case 2:
			if (bParam1 == true)
				return 1173.8392f, -1499.7808f, 33.84875f;
			else
				return 1173.5656f, -1495.7628f, 34.1121f;
			break;
	
		case 3:
			if (bParam1 == true)
				return -461.71393f, -1699.2019f, 17.85122f;
			else
				return -462f, -1701f, 18.8f;
			break;
	
		case 4:
			return -1384.6276f, -521.0416f, 30.084f;
	
		case 5:
			return -521.5692f, -601.7532f, 29.4482f;
	
		case 6:
			return -664.5f, 165.4552f, 58.3821f;
	
		case 7:
			return 329.3609f, -190.5986f, 53.2262f;
	
		case 8:
			if (bParam1 == true)
				return -477.44f, -1052.99f, 39.81f;
			else
				return -478.7744f, -1051.0792f, 40.93f;
			break;
	
		case 9:
			return -1268.0712f, -1917.4076f, 4.8583f;
	
		case 10:
			return -1221.908f, -2771.7622f, 13.0545f;
	
		case 11:
			return -3088.6682f, 652.9629f, 0.989f;
	
		case 12:
			if (bParam1 == true)
				return -629.3048f, 2036.0667f, 157.3307f;
			else
				return -627.2166f, 2035.032f, 157.5585f;
			break;
	
		case 13:
			if (bParam1 == true)
				return -2071.9026f, 3411.5042f, 30.36414f;
			else
				return -2048.4832f, 3406.1624f, 31.1504f;
			break;
	
		case 14:
			return -424.0321f, 4012.767f, 80.4744f;
	
		case 15:
			return 1983.1f, 5174.5f, 47.6f;
	
		case 16:
			if (bParam1 == true)
				return 2341.1f, 2576f, 45.7f;
			else
				return 2340.17f, 2573.89f, 45.77f;
			break;
	
		case 17:
			if (bParam1 == true)
				return 1663.9004f, -25.91945f, 172.77475f;
			else
				return 1663.96f, -24.1101f, 172.7747f;
			break;
	
		case 18:
			if (bParam1 == true)
				return 2614.4507f, 1695.1271f, 26.59907f;
			else
				return 2617.729f, 1693.4167f, 30.8743f;
			break;
	
		case 19:
			if (bParam1 == true)
				return -187.31f, 1545.16f, 314.07f;
			else
				return -187.0338f, 1555.6766f, 321.2431f;
			break;
	
		case 20:
			if (bParam1 == true)
				return 859.5025f, 2426.0396f, 53.18517f;
			else
				return 868.7573f, 2423.5361f, 60.8942f;
			break;
	
		case 21:
			if (bParam1 == true)
				return -1822.0751f, 805.7814f, 137.7265f;
			else
				return -1822.9667f, 803.8147f, 138.2005f;
			break;
	
		case 22:
			if (bParam1 == true)
				return -1852.9221f, 2054.4197f, 139.98405f;
			else
				return -1851.6283f, 2053.836f, 139.9841f;
			break;
	
		case 23:
			if (bParam1 == true)
				return -1075.5149f, 4898.4966f, 213.27675f;
			else
				return -1070.6506f, 4898.9336f, 213.2752f;
			break;
	
		case 24:
			if (bParam1 == true)
				return 1301.56f, 4306.6f, 36.39f;
			else
				return 1300.1f, 4308.1f, 37.3f;
			break;
	
		case 25:
			if (bParam1 == true)
				return -436.44f, 5983.5f, 30.49f;
			else
				return -437.94f, 5985.04f, 31.29f;
			break;
	
		case 26:
			if (bParam1 == true)
				return 1840.5687f, 3693.7703f, 33.2668f;
			else
				return 1838.577f, 3692.028f, 33.6172f;
			break;
	
		case 27:
			return 533.1f, -23.8f, 70.6f;
	
		case 28:
			if (bParam1 == true)
				return 445.83f, -986.48f, 29.69f;
			else
				return 446.4f, -988.5f, 29.77f;
			break;
	
		case 29:
			return -1119.4977f, -847.3371f, 18.6886f;
	
		case 30:
			return 391.2f, -1603.9f, 28.38f;
	
		case 31:
			return -890.8f, -2386.2f, 13.4f;
	
		case 32:
			if (bParam1 == true)
				return 282.75f, 953.05f, 209.95f;
			else
				return 284.7f, 954.2f, 210.1514f;
			break;
	
		case 33:
			return -2003.1145f, 544.7549f, 114.5077f;
	
		case 34:
			if (bParam1 == true)
				return -397.57858f, 1127.3531f, 321.72913f;
			else
				return -386.8739f, 1142.4197f, 321.5892f;
			break;
	
		case 35:
			return -1521.8113f, 1560.201f, 106.9392f;
	
		case 36:
			return 1391.9453f, 3616.6548f, 37.9259f;
	
		case 37:
			if (bParam1 == true)
				return 45.37f, -1911.45f, 20.79f;
			else
				return 40.5177f, -1910.727f, 20.9706f;
			break;
	
		case 38:
			if (bParam1 == true)
				return 68.14f, 3749.36f, 38.73f;
			else
				return 70.3786f, 3755.6055f, 38.7487f;
			break;
	
		case 39:
			return 119.45f, -755.29f, 258.15f;
	
		case 40:
			if (bParam1 == true)
				return 156.35f, -1192.1f, 28.37f;
			else
				return 160.4134f, -1191.7f, 28.87f;
			break;
	
		case 41:
			return 23.9296f, -633.9206f, 6.5084f;
	
		case 42:
			if (bParam1 == true)
				return 31.67f, 6542.78f, 30.44f;
			else
				return 30.9162f, 6546.791f, 30.4058f;
			break;
	
		case 43:
			if (bParam1)
				return 1333.0566f, 4381.278f, 43.3703f;
			else
				return 1331.3549f, 4392.887f, 44.012f;
			break;
	
		case 44:
			if (bParam1 == true)
				return -1147.31f, 4939.27f, 221.27f;
			else
				return -1149.3918f, 4938.771f, 221.3682f;
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_92(int iParam0) // Position - 0x6CF0 (27888)
{
	switch (iParam0)
	{
		case 33:
		case 39:
		case 41:
			return false;
	}

	return true;
}

Vector3 func_93(int iParam0, BOOL bParam1) // Position - 0x6D19 (27929)
{
	switch (iParam0)
	{
		case 0:
			return 131.2f, 6920.1f, 20.8f;
	
		case 1:
			if (bParam1 == true)
				return -1048.5695f, 4917.414f, 208.4216f;
			else
				return -1046.2772f, 4918.7393f, 211.5379f;
			break;
	
		case 2:
			return -2358.46f, 3251.397f, 100.5504f;
	
		case 3:
			if (bParam1 == true)
				return -247.62189f, 6331.341f, 31.42602f;
			else
				return -249.9504f, 6331.219f, 32.7262f;
			break;
	
		case 4:
			if (bParam1 == true)
				return -140.9f, -2491.45f, 43.45f;
			else
				return -141.0976f, -2498.239f, 40.0124f;
			break;
	
		case 5:
			if (bParam1 == true)
				return -2924.6968f, 46.50282f, 10.60369f;
			else
				return -2925.7f, 47.4f, 11.6f;
			break;
	
		case 6:
			return -793.1981f, -726.4421f, 26.28f;
	
		case 7:
			if (bParam1 == true)
				return 124.00925f, -673.00964f, 41.02729f;
			else
				return 123.5196f, -674.2917f, 41.4945f;
			break;
	
		case 8:
			if (bParam1 == true)
				return 1195.7374f, -1481.6945f, 33.8595f;
			else
				return 1194.7092f, -1482.4723f, 33.9594f;
			break;
	
		case 9:
			if (bParam1 == true)
				return -35.88743f, 1945.7378f, 189.18681f;
			else
				return -35.5254f, 1947.2894f, 189.186f;
			break;
	
		case 10:
			if (bParam1)
				return 753.4579f, 4174.9956f, 39.8011f;
			else
				return 751.72f, 4175.14f, 40.95f;
			break;
	
		case 11:
			if (bParam1 == true)
				return 1791.2565f, 4592.3833f, 36.68283f;
			else
				return 1789.8f, 4592.4f, 36.78f;
			break;
	
		case 12:
			return 341.311f, 2618.9182f, 43.5124f;
	
		case 13:
			return 442.3755f, -223.602f, 55.0215f;
	
		case 14:
			if (bParam1 == true)
				return 1291.02f, -1760.94f, 51.05f;
			else
				return 1286.5f, -1754.4f, 52f;
			break;
	
		case 15:
			if (bParam1 == true)
				return 1659.4376f, 5.4271f, 165.1176f;
			else
				return 1658.621f, 6.7752f, 166.1676f;
			break;
	
		case 16:
			if (bParam1 == true)
				return 1645.91f, 4866.72f, 40.98f;
			else
				return 1647.3992f, 4865.8394f, 41f;
			break;
	
		case 17:
			return -1144.5892f, -2004.4523f, 12.3803f;
	
		case 18:
			if (bParam1 == true)
				return -1047.3f, -520.6f, 35f;
			else
				return -1048.32f, -521.2f, 35.14f;
			break;
	
		case 19:
			if (bParam1 == true)
				return -1576.0459f, -587.82574f, 33.97909f;
			else
				return -1576.8167f, -586.3887f, 34.8528f;
			break;
	
		case 20:
			if (bParam1 == true)
				return 953.44f, -123.42f, 73.35f;
			else
				return 954.5f, -121.34f, 74.18f;
			break;
	
		case 21:
			if (bParam1 == true)
				return 1134.2009f, -665.94135f, 56.08261f;
			else
				return 1135.4014f, -663.7875f, 56.088f;
			break;
	
		case 22:
			if (bParam1 == true)
				return -2196.1975f, 248.9123f, 173.612f;
			else
				return -2195.0288f, 250.4256f, 173.6017f;
			break;
	
		case 23:
			return 29.2f, 3635.4f, 39.8f;
	
		case 24:
			if (bParam1 == true)
				return 1724.4291f, 3299.0234f, 40.2235f;
			else
				return 1721.9596f, 3300.4644f, 40.3835f;
			break;
	
		case 25:
			if (bParam1 == true)
				return 2617.3206f, 3659.452f, 100.38673f;
			else
				return 2612.7124f, 3662.5642f, 101.1074f;
			break;
	
		case 26:
			return -459.9625f, 1101.076f, 328.0211f;
	
		case 27:
			if (bParam1 == true)
				return 2432.6072f, 4994.3335f, 45.25828f;
			else
				return 2430.9065f, 4995.561f, 45.2685f;
			break;
	
		case 28:
			if (bParam1 == true)
				return 3722.4556f, 4521.837f, 20.39456f;
			else
				return 3724.5f, 4524.5f, 21.6f;
			break;
	
		case 29:
			if (bParam1 == true)
				return -446.9024f, 5997.598f, 30.3407f;
			else
				return -446.045f, 6000.882f, 31.9163f;
			break;
	
		case 30:
			return 3291.4f, 5192.5f, 18.4f;
	
		case 31:
			if (bParam1 == true)
				return 390.81f, -1436.07f, 28.45f;
			else
				return 388.7f, -1434.3f, 29.8f;
			break;
	
		case 32:
			return -445.26f, -442.49f, 32.26f;
	
		case 33:
			if (bParam1)
				return -1501.46f, 858.17f, 180.59f;
			else
				return -1500.08f, 857.59f, 180.59f;
			break;
	
		case 34:
			return 2822.2f, -741.4f, 1.8f;
	
		case 35:
			if (bParam1 == true)
				return -3166.9783f, 1102.6224f, 19.80827f;
			else
				return -3165.6125f, 1102.2405f, 19.8928f;
			break;
	
		case 36:
			if (bParam1 == true)
				return 1842.8818f, 3670.4568f, 32.68f;
			else
				return 1841.114f, 3675.253f, 34.086f;
			break;
	
		case 37:
			if (bParam1 == true)
				return 1828.7944f, 2605.504f, 44.61582f;
			else
				return 1830.535f, 2603.828f, 45.7491f;
			break;
	
		case 38:
			if (bParam1 == true)
				return -32.61f, -1089.67f, 25.42f;
			else
				return -40.0528f, -1084.016f, 26.6224f;
			break;
	
		case 39:
			if (bParam1 == true)
				return 1439.0122f, 6336.812f, 22.96477f;
			else
				return 1445.544f, 6334.057f, 23.975f;
			break;
	
		case 40:
			if (bParam1 == true)
				return -782.5126f, -1352.2454f, 8.0001f;
			else
				return -784.4851f, -1351.364f, 8.1001f;
			break;
	
		case 41:
			if (bParam1 == true)
				return 962.88055f, -1826.4192f, 30.07195f;
			else
				return 963.1673f, -1831.149f, 36.2055f;
			break;
	
		case 42:
			if (bParam1 == true)
				return -1246.155f, -1531.6471f, 3.2962f;
			else
				return -1246.494f, -1533.677f, 4.5262f;
			break;
	
		case 43:
			if (bParam1 == true)
				return -765.5466f, 698.8101f, 143.36932f;
			else
				return -761.1058f, 701.9452f, 145.05f;
			break;
	
		case 44:
			if (bParam1 == true)
				return -512.10944f, 28.86313f, 43.6153f;
			else
				return -513.4391f, 30.9069f, 43.9018f;
			break;
	
		case 45:
			if (bParam1 == true)
				return 781.38385f, 1292.073f, 359.29965f;
			else
				return 780.3879f, 1295.705f, 361.6941f;
			break;
	
		case 46:
			return 208.69f, 337.76f, 104.64f;
	
		case 47:
			if (bParam1 == true)
				return -1889.99f, 2078.38f, 140f;
			else
				return -1890.24f, 2073.26f, 140.11f;
			break;
	
		case 48:
			return 153.6156f, -3073.9983f, 4.8962f;
	
		case 49:
			if (bParam1)
				return -306.2449f, -1180.5382f, 22.711f;
			else
				return -304.0894f, -1180.886f, 23.9493f;
			break;
	
		case 50:
			return -2006.9866f, -556.4998f, 11.8813f;
	
		case 51:
			if (bParam1 == true)
				return -590.20795f, -289.8196f, 40.68631f;
			else
				return -588.1934f, -290.4782f, 43.7101f;
			break;
	
		case 52:
			return -1795.8262f, -855.7111f, 8.2048f;
	
		case 53:
			return -1557.108f, -1155.2465f, 2.9158f;
	
		case 54:
			if (bParam1 == true)
				return -1470.71f, -1389.33f, 1.58f;
			else
				return -1467.4833f, -1387.5068f, 3.1432f;
			break;
	
		case 55:
			return -684.8126f, -180.648f, 48.02f;
	
		case 56:
			if (bParam1 == true)
				return -1311.4127f, 640.11536f, 136.92444f;
			else
				return -1307.062f, 641.4211f, 138.0582f;
			break;
	
		case 57:
			return 2493.6855f, 4963.541f, 43.7358f;
	
		case 58:
			if (bParam1 == true)
				return 1392.76f, 3602.94f, 33.98f;
			else
				return 1392.6086f, 3605.7986f, 34.9939f;
			break;
	
		case 59:
			if (bParam1 == true)
				return -527.33f, 5295.7f, 73.17f;
			else
				return -535.4436f, 5297.496f, 76.3891f;
			break;
	
		case 60:
			if (bParam1 == true)
				return -564.26f, 5353.13f, 69.23f;
			else
				return -551.5837f, 5349.4043f, 75.253f;
			break;
	
		case 61:
			if (bParam1 == true)
				return 3.18f, -1827.1f, 24.22f;
			else
				return 0.1911f, -1825.9047f, 24.3295f;
			break;
	
		case 62:
			if (bParam1 == true)
				return 62.25f, 3681.06f, 38.84f;
			else
				return 63.8867f, 3683.49f, 39.1543f;
			break;
	
		case 63:
			return 155.384f, -741.179f, 258.6519f;
	
		case 64:
			if (bParam1 == true)
				return 126.61f, -1206.29f, 28.3f;
			else
				return 124.265f, -1205.882f, 28.2951f;
			break;
	
		case 65:
			return 27.449f, -625.31f, 15.462f;
	
		case 66:
			if (bParam1 == true)
				return -129.04f, -662.04f, 39.51f;
			else
				return -129.0374f, -659.2689f, 41.0016f;
			break;
	
		case 67:
			if (bParam1)
				return 1138.62f, -1598.56f, 33.69f;
			else
				return 1138.63f, -1596.61f, 35.07f;
			break;
	
		case 68:
			if (bParam1)
				return 1149.68f, -1525.56f, 33.84f;
			else
				return 1147.55f, -1527.83f, 36.01f;
			break;
	
		case 69:
			if (bParam1)
				return 297.48f, -1448.79f, 28.97f;
			else
				return 296.44f, -1450.75f, 30.4f;
			break;
	
		case 70:
			if (bParam1)
				return 324.21f, -1392.68f, 31.51f;
			else
				return 322.27f, -1393.75f, 32.79f;
			break;
	
		case 71:
			if (bParam1)
				return 293.2f, -597.92f, 42.28f;
			else
				return 294.3f, -598.1f, 43.73f;
			break;
	
		case 72:
			if (bParam1)
				return 358f, -592.66f, 27.79f;
			else
				return 357.07f, -590.63f, 29.08f;
			break;
	
		case 73:
			if (bParam1)
				return -495.45f, -326.18f, 33.5f;
			else
				return -496.4f, -324.7f, 34.75f;
			break;
	
		case 74:
			if (bParam1)
				return -450.91f, -351.93f, 33.5f;
			else
				return -449.82f, -353.49f, 34.75f;
			break;
	
		case 75:
			return -2258.833f, 323.9413f, 184.9015f;
	}

	return 0f, 0f, 0f;
}

BOOL func_94(int iParam0) // Position - 0x7AF1 (31473)
{
	switch (iParam0)
	{
		case 2:
		case 17:
		case 55:
		case 63:
		case 65:
			return false;
	}

	return true;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x7B26 (31526)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

Vector3 func_96(int iParam0, BOOL bParam1) // Position - 0x7B50 (31568)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1 == true)
				return -1760.36f, 428.6f, 126.31f;
			else
				return -1756.974f, 427.531f, 126.7f;
			break;
	
		case 1:
			return -1595.7422f, 2799.3706f, 16.0205f;
	
		case 2:
			if (bParam1 == true)
				return -197.14859f, 1482.6846f, 288.253f;
			else
				return -200.0114f, 1481.6971f, 289.4303f;
			break;
	
		case 3:
			return 256.77f, 2841.0466f, 42.6599f;
	
		case 4:
			return -1360.2231f, 4435.7515f, 27.7754f;
	
		case 5:
			return 64.63f, 7051.2534f, 15.8272f;
	
		case 6:
			return -456.2838f, 1593.7988f, 358.0119f;
	
		case 7:
			if (bParam1 == true)
				return -3114.617f, 749.84454f, 11.59352f;
			else
				return -3111.6143f, 749.2816f, 12.6285f;
			break;
	
		case 8:
			return 713.6797f, 4095.9688f, 33.765f;
	
		case 9:
			return 255.2671f, 2586.2815f, 43.9619f;
	
		case 10:
			return -1292.64f, -3345.82f, 23.27f;
	
		case 11:
			return 3111.531f, 2214.8481f, -8.6457f;
	
		case 12:
			if (bParam1 == true)
				return 555.82f, -839.05f, 39.84f;
			else
				return 555f, -837.81f, 55.08f;
			break;
	
		case 13:
			return -2360f, 3245f, 91.9f;
	
		case 14:
			return 1691.1517f, 2640.859f, 54.0693f;
	
		case 15:
			return 1982.37f, 6203.64f, 41.15f;
	
		case 16:
			return -2979f, 1588f, 23.3f;
	
		case 17:
			return 963.5308f, -1824.0399f, 30.0708f;
	
		case 18:
			return -295.41867f, 6188.7856f, 30.48932f;
	
		case 19:
			return -1778f, 124f, 67.9f;
	
		case 20:
			if (bParam1 == true)
				return 157.57587f, 3133.9941f, 42.45733f;
			else
				return 161.2925f, 3131.8538f, 42.5892f;
			break;
	
		case 21:
			return -888f, 5406f, 30.5f;
	
		case 22:
			return -1840f, 793f, 138.7f;
	
		case 23:
			if (bParam1 == true)
				return -495.80392f, -1750.2067f, 17.42509f;
			else
				return -495.9968f, -1747.231f, 18.5194f;
			break;
	
		case 24:
			if (bParam1 == true)
				return -1764.695f, -265.58093f, 47.6187f;
			else
				return -1763.3588f, -263.2062f, 47.1481f;
			break;
	
		case 25:
			if (bParam1 == true)
				return 548.0715f, -1642.4506f, 27.2033f;
			else
				return 548.5943f, -1642.603f, 27.4425f;
			break;
	
		case 26:
			return 736.0563f, 2595.556f, 72.9165f;
	
		case 27:
			if (bParam1 == true)
				return 701.0009f, -1179.7015f, 23.28737f;
			else
				return 699.2748f, -1181.6705f, 33.2608f;
			break;
	
		case 28:
			if (bParam1 == true)
				return -1146.74f, 4938.93f, 221.27f;
			else
				return -1149.437f, 4940.362f, 221.3282f;
			break;
	
		case 29:
			if (bParam1 == true)
				return 2543.91f, -432.76f, 93.12f;
			else
				return 2513.5347f, -442.8484f, 113.0888f;
			break;
	
		case 30:
			return -553.1764f, -2239.8767f, 121.3704f;
	
		case 31:
			if (bParam1 == true)
				return 987.16f, -108.02f, 73.3f;
			else
				return 987.15f, -105.88f, 74.13f;
			break;
	
		case 32:
			return -1048f, -836f, 10.5f;
	
		case 33:
			return 312.6026f, 6606.8965f, 27.8835f;
	
		case 34:
			return -37.21f, 2871.26f, 58.61f;
	
		case 35:
			if (bParam1 == true)
				return 61.91f, 3690.51f, 38.83f;
			else
				return 59f, 3692f, 38.92f;
			break;
	
		case 36:
			if (bParam1 == true)
				return 2933.33f, 4617.07f, 47.72f;
			else
				return 2934.499f, 4617.067f, 47.736f;
			break;
	
		case 37:
			return 57.8219f, -1932.1208f, 20.4939f;
	
		case 38:
			return 378.26f, -334.3f, 45.63f;
	
		case 39:
			if (bParam1 == true)
				return 2673.6624f, 2793.7021f, 31.8124f;
			else
				return 2676.0454f, 2793.2493f, 39.5934f;
			break;
	
		case 40:
			return -1582.278f, 770.3486f, 188.1942f;
	
		case 41:
			if (bParam1 == true)
				return -1641.139f, -1032.8152f, 4.63165f;
			else
				return -1640.5464f, -1034.1287f, 4.6074f;
			break;
	
		case 42:
			if (bParam1 == true)
				return -151.09f, -214.36f, 44.73f;
			else
				return -159.7137f, -209.1721f, 48.938f;
			break;
	
		case 43:
			return -1276.9862f, -2451.8862f, 72.0481f;
	
		case 44:
			if (bParam1 == true)
				return -403.58267f, 1056.2117f, 322.84143f;
			else
				return -402f, 1053f, 323f;
			break;
	
		case 45:
			return 2728.9866f, 1576.3821f, 65.5818f;
	
		case 46:
			if (bParam1 == true)
				return -221.27f, 6133.62f, 30.48f;
			else
				return -215.9002f, 6125.27f, 56.278f;
			break;
	
		case 47:
			return 2092.2253f, 2492.3015f, 89.4046f;
	
		case 48:
			return -1124.666f, -967.1614f, 5.6319f;
	
		case 49:
			if (bParam1 == true)
				return -405.5299f, 323.40634f, 107.72269f;
			else
				return -405f, 325f, 108.7f;
			break;
	
		case 50:
			return -1087.31f, -2429.3f, 13f;
	
		case 51:
			return -1042.6445f, 879.7763f, 160.2144f;
	
		case 52:
			if (bParam1 == true)
				return -1081.2289f, 678.94543f, 141.80563f;
			else
				return -1078.3499f, 682.2944f, 144.904f;
			break;
	
		case 53:
			return -402.0679f, 1355.0619f, 329.8384f;
	
		case 54:
			return 153.3876f, 713.6584f, 207.2551f;
	
		case 55:
			return 186.9f, 243.0269f, 140.55f;
	
		case 56:
			if (bParam1 == true)
				return 302.01f, -3254.45f, 4.8f;
			else
				return 304f, -3259f, 5f;
			break;
	
		case 57:
			if (bParam1 == true)
				return -398.57f, -1883.96f, 20.54f;
			else
				return -397f, -1885f, 21.5f;
			break;
	
		case 58:
			return 780.7208f, -211.0616f, 65.1143f;
	
		case 59:
			return -1755.0115f, 184.3929f, 63.3711f;
	
		case 60:
			if (bParam1 == true)
				return 788.84f, 2164.06f, 52.1f;
			else
				return 786.0139f, 2164.9507f, 52.0981f;
			break;
	
		case 61:
			return 1707.2278f, 4920.156f, 41.0637f;
	
		case 62:
			return -684.9417f, 5793.045f, 16.331f;
	
		case 63:
			return -2188f, 4251f, 48f;
	
		case 64:
			if (bParam1 == true)
				return -1099.08f, 2711.35f, 18.11f;
			else
				return -1103f, 2715f, 19f;
			break;
	
		case 65:
			return 581f, -2805f, 5.5f;
	
		case 66:
			if (bParam1 == true)
				return -663.95f, -1998.85f, 6.1f;
			else
				return -665.4316f, -2002.0398f, 7.5968f;
			break;
	
		case 67:
			return 1442.9049f, -1479.7588f, 62.2245f;
	
		case 68:
			if (bParam1 == true)
				return -361.92f, -141.76f, 37.58f;
			else
				return -356.5324f, -145.0359f, 41.7413f;
			break;
	
		case 69:
			return 624.0116f, 558.6531f, 129.2455f;
	
		case 70:
			return 2833f, 2807f, 56.3785f;
	
		case 71:
			if (bParam1 == true)
				return 92.14449f, 6360.1816f, 30.37612f;
			else
				return 94.0769f, 6356.961f, 30.3761f;
			break;
	
		case 72:
			return -2231.5142f, 3477.7915f, 29.3291f;
	
		case 73:
			return 377f, 3582f, 32.5f;
	
		case 74:
			if (bParam1 == true)
				return -2947.47f, 445.6f, 14.29f;
			else
				return -2948f, 441f, 15f;
			break;
	
		case 75:
			if (bParam1 == true)
				return 1292.88f, -3341.78f, 4.9f;
			else
				return 1296f, -3348f, 5.2f;
			break;
	
		case 76:
			if (bParam1 == true)
				return -1165.46f, -2054.09f, 13.2f;
			else
				return -1165.8832f, -2051.0264f, 13.2268f;
			break;
	
		case 77:
			if (bParam1 == true)
				return 1235.57f, -452.01f, 65.7f;
			else
				return 1235f, -450f, 66.5f;
			break;
	
		case 78:
			return -467.0458f, -934.8019f, 46.9844f;
	
		case 79:
			return 226.7f, -1761f, 28.5f;
	
		case 80:
			if (bParam1 == true)
				return 1218.07f, 1898.69f, 76.87f;
			else
				return 1221f, 1898f, 77.4f;
			break;
	
		case 81:
			if (bParam1 == true)
				return 1545.99f, 3802.7f, 32.42f;
			else
				return 1535.8291f, 3798.2166f, 33.4563f;
			break;
	
		case 82:
			return 756.8601f, 6462.329f, 30.4229f;
	
		case 83:
			return -2319f, 4124f, 26f;
	
		case 84:
			return -3185f, 1053f, 20.2f;
	
		case 85:
			return 818.9215f, -3188.1667f, 4.9007f;
	
		case 86:
			if (bParam1 == true)
				return -451.05f, -2264.24f, 6.61f;
			else
				return -457.3656f, -2262.646f, 7.5212f;
			break;
	
		case 87:
			if (bParam1 == true)
				return 1409.86f, -757.22f, 65.8f;
			else
				return 1410.091f, -752.1061f, 66.2362f;
			break;
	
		case 88:
			return 8.4875f, -441.2103f, 44.5639f;
	
		case 89:
			if (bParam1 == true)
				return -935.04f, 387.39f, 76.62f;
			else
				return -937.0176f, 391.544f, 80.2377f;
			break;
	
		case 90:
			if (bParam1 == true)
				return 2748.49f, 3463.02f, 54.77f;
			else
				return 2746.5537f, 3463.5254f, 54.7144f;
			break;
	
		case 91:
			return 1898.8965f, 4921.9746f, 47.8088f;
	
		case 92:
			if (bParam1 == true)
				return -315.51f, 6310.89f, 31.37f;
			else
				return -315.9772f, 6307.3853f, 31.4906f;
			break;
	
		case 93:
			return -1171f, 4927f, 224f;
	
		case 94:
			return -281.1712f, 2528.0125f, 73.6376f;
	
		case 95:
			if (bParam1 == true)
				return 68.45f, 3756.27f, 38.74f;
			else
				return 68.453f, 3758.9668f, 38.7395f;
			break;
	
		case 96:
			return 25.2888f, -634.2637f, 6.5084f;
	
		case 97:
			if (bParam1 == true)
				return -1146.67f, 4939.11f, 221.27f;
			else
				return -1145.2826f, 4940.2856f, 221.3038f;
			break;
	
		case 98:
			return 441.64f, 5570.38f, 780.45f;
	
		case 99:
			if (bParam1)
				return 1353.1516f, 4377.2227f, 43.3416f;
			else
				return 1357.2092f, 4388.445f, 43.872f;
			break;
	
		case 100:
			return -102.0671f, -968.1538f, 295.5635f;
	
		case 101:
			return 2492.6902f, 4963.014f, 43.6478f;
	}

	return 0f, 0f, 0f;
}

BOOL func_97(int iParam0) // Position - 0x8A8D (35469)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 11:
		case 13:
		case 14:
		case 30:
		case 34:
		case 43:
		case 45:
		case 50:
		case 55:
		case 88:
		case 96:
		case 98:
		case 100:
			return false;
	}

	return true;
}

void func_98() // Position - 0x8AFE (35582)
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		uLocal_339[i] = -1;
		uLocal_345[i] = 999999f;
		uLocal_351[i /*3*/] = { 0f, 0f, 0f };
		uLocal_367[i /*3*/] = { 0f, 0f, 0f };
	}

	return;
}

void func_99(BOOL bParam0) // Position - 0x8B47 (35655)
{
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Retriever"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Rottweiler"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Boar"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Coyote"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Deer"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_MtLion"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Pig"), bParam0);
	return;
}

void func_100(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x8B9C (35740)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL")) == 0)
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), 1, bParam0, bParam2);
		HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(joaat("WEAPON_BALL"));
	
		if (iParam1 == 1)
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_488, "PICKUP_WEAPON_BALL", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", true);
	}

	return;
}

void func_101() // Position - 0x8BFC (35836)
{
	if (!PED::IS_PED_IN_GROUP(pedLocal_67))
		PED::SET_PED_AS_GROUP_MEMBER(pedLocal_67, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));

	if (PED::IS_PED_IN_GROUP(pedLocal_67))
	{
		PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_67, true);
		PED::SET_GROUP_FORMATION_SPACING(func_102(), 1f, 0.9f, 3f);
		PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(pedLocal_67, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()), true);
	}

	return;
}

int func_102() // Position - 0x8C4A (35914)
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_103() // Position - 0x8C5A (35930)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		if (func_107(PLAYER::PLAYER_PED_ID(), pedLocal_67) > 10f || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WHIS" /*Press ~INPUT_DETONATE~ to whistle to make Chop return to Franklin.*/))
		{
			if (MISC::GET_GAME_TIMER() - iLocal_410 > 4000 && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_DETONATE))
			{
				iLocal_410 = MISC::GET_GAME_TIMER();
				func_104(PLAYER::PLAYER_PED_ID(), "CALL_CHOP", 3);
			
				if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WHIS" /*Press ~INPUT_DETONATE~ to whistle to make Chop return to Franklin.*/))
					HUD::CLEAR_HELP(true);
			
				if (iLocal_49 == 15 && iLocal_50 > 1)
				{
				}
				else
				{
					func_40(0);
				
					if (iLocal_49 == 2)
						func_122(2, 0);
					else
						func_122(2, 1);
				}
			}
		
			if (!IS_BIT_SET(Global_114162.f_10053.f_94, 8) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_19() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				MISC::SET_BIT(&(Global_114162.f_10053.f_94), 8);
				_DISPLAY_HELP_TEXT("CHOP_H_WHIS" /*Press ~INPUT_DETONATE~ to whistle to make Chop return to Franklin.*/, -1);
			}
		}
	}

	return;
}

void func_104(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x8D51 (36177)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_105(iParam2), 1);
	return;
}

char* func_105(int iParam0) // Position - 0x8D68 (36200)
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

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x8F5D (36701)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

float func_107(Ped pedParam0, Ped pedParam1) // Position - 0x8F70 (36720)
{
	return func_4(pedParam0, pedParam1, true);
}

BOOL func_108() // Position - 0x8F81 (36737)
{
	if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_67, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || PED::IS_PED_RAGDOLL(pedLocal_67) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(pedLocal_67))
	{
		WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(pedLocal_67);
		return true;
	}

	return false;
}

void func_109(char* sParam0, int iParam1) // Position - 0x8FBC (36796)
{
	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_170, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	_CONVERSATION_ADD_LINE_NO_SUBTITLE(&uLocal_170, "CHOP_AU", sParam0, 3, iParam1, 0);
	return;
}

void _CONVERSATION_ADD_LINE_NO_SUBTITLE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x8FE5 (36837)
{
	func_111(uParam0, 145, sParam1, iParam4, iParam5, 0);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	MISC::SET_BIT(&Global_21308, 0);
	Global_22445 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&Global_22432, sParam2, 24);
	return;
}

void func_111(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x9020 (36896)
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

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x9076 (36982)
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

void func_113() // Position - 0x9111 (37137)
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);

	if (randomIntInRange == 0)
	{
		TASK::TASK_PLAY_ANIM(pedLocal_67, uLocal_80[1], "idle_a", 1090519040, -1056964608, -1, 0, 0, false, false, false);
		sLocal_84 = "idle_a";
	}
	else if (randomIntInRange == 1)
	{
		TASK::TASK_PLAY_ANIM(pedLocal_67, uLocal_80[1], "idle_c", 1090519040, -1056964608, -1, 0, 0, false, false, false);
		sLocal_84 = "idle_c";
	}
	else
	{
		TASK::TASK_PLAY_ANIM(pedLocal_67, uLocal_80[1], "idle_b", 1090519040, -1056964608, -1, 0, 0, false, false, false);
		sLocal_84 = "idle_b";
	}

	return;
}

BOOL func_114(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x91A2 (37282)
{
	if (func_115(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_115(Ped pedParam0) // Position - 0x91D5 (37333)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

void func_116() // Position - 0x91F5 (37365)
{
	int randomIntInRange;
	int num;
	int randomIntInRange2;

	if (iLocal_463 == 0)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	
		if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_67, uLocal_438[randomIntInRange /*3*/], 2f, 2f, 4f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_438[randomIntInRange /*3*/], 2f, 2f, 4f, false, true, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_67, uLocal_438[randomIntInRange /*3*/], 1f, 20000, 0.25f, 8192, 1193033728);
			iLocal_463 = 1;
		}
	}
	else if (!func_114(pedLocal_67, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
	{
		if (func_43() == 2)
			num = 15;
		else if (func_43() == 0)
			num = 10;
		else
			num = -1;
	
		randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	
		if (randomIntInRange2 < num && iLocal_420 == 0)
		{
			iLocal_420 = 1;
			func_122(13, 1);
		}
		else if (randomIntInRange2 < 50)
		{
			iLocal_79 = 1;
			uLocal_80[0] = "creatures@rottweiler@amb@world_dog_barking@enter";
			uLocal_80[1] = "creatures@rottweiler@amb@world_dog_barking@base";
			uLocal_80[2] = "creatures@rottweiler@amb@world_dog_barking@exit";
			func_122(17, 1);
		}
		else
		{
			iLocal_79 = 0;
			uLocal_80[0] = "creatures@rottweiler@amb@world_dog_sitting@enter";
			uLocal_80[1] = "creatures@rottweiler@amb@world_dog_sitting@idle_a";
			uLocal_80[2] = "creatures@rottweiler@amb@world_dog_sitting@exit";
			func_122(17, 1);
		}
	}

	return;
}

void func_117() // Position - 0x9316 (37654)
{
	if (MISC::GET_GAME_TIMER() - iLocal_482 > 2000 && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_67, true), 5f, true))
	{
		func_123("WHINE");
		iLocal_482 = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_118() // Position - 0x9358 (37720)
{
	if (func_43() == 2 && MISC::GET_GAME_TIMER() - iLocal_411 > iLocal_412)
	{
		iLocal_411 = MISC::GET_GAME_TIMER();
		iLocal_412 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000);
		func_123("WHINE");
	}

	return;
}

BOOL func_119(Ped pedParam0, int iParam1) // Position - 0x9395 (37781)
{
	var entityCoords;
	var entityCoords2;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && func_121(pedParam0, uLocal_395, 30f))
	{
		if (iParam1 == 1)
		{
			if (func_120(&uLocal_118, ENTITY::GET_ENTITY_COORDS(pedParam0, true)))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_67, true) };
				entityCoords2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			
				if (MISC::ABSF(entityCoords.f_2 - entityCoords2.f_2) < 2.5f)
					return true;
			}
		}
		else
		{
			return true;
		}
	}

	return false;
}

BOOL func_120(var uParam0, float fParam1, var uParam2, var uParam3) // Position - 0x9418 (37912)
{
	BOOL flag;
	int num;
	int num2;

	uParam0->f_46 < 3;
	flag = false;
	num = 0;
	num2 = uParam0->f_46 - 1;

	while (num < uParam0->f_46)
	{
		if (uParam0->[num /*3*/].f_1 < fParam1.f_1 && uParam0->[num2 /*3*/].f_1 >= fParam1.f_1 || uParam0->[num2 /*3*/].f_1 < fParam1.f_1 && uParam0->[num /*3*/].f_1 >= fParam1.f_1)
			if (uParam0->[num /*3*/] + (((fParam1.f_1 - uParam0->[num /*3*/].f_1) / (uParam0->[num2 /*3*/].f_1 - uParam0->[num /*3*/].f_1)) * (uParam0->[num2 /*3*/] - uParam0->[num /*3*/])) < fParam1)
				flag = !flag;
	
		num2 = num;
		num = num + 1;
	}

	return flag;
}

BOOL func_121(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x94D4 (38100)
{
	var entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	num = { uParam1 - entityCoords };
	return (num * num) + (num.f_1 * num.f_1) <= fParam4 * fParam4;
}

void func_122(int iParam0, int iParam1) // Position - 0x9509 (38153)
{
	iLocal_105 = 0;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_67, true);
		WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(pedLocal_67);
	
		if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_67, false))
		{
			if (iParam1 == 1)
				TASK::CLEAR_PED_TASKS(pedLocal_67);
		
			ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_67, false, false);
		}
	}

	iLocal_49 = iParam0;
	iLocal_51 = 0;
	iLocal_50 = 0;
	iLocal_383 = -1;
	uLocal_384 = { 0f, 0f, 0f };
	uLocal_387 = { 0f, 0f, 0f };
	iLocal_337 = 5;
	func_34();
	iLocal_463 = 0;
	iLocal_437 = 0;
	iLocal_482 = MISC::GET_GAME_TIMER();
	AUDIO::SET_AUDIO_FLAG("DisableBarks", false);
	return;
}

void func_123(char* sParam0) // Position - 0x9587 (38279)
{
	AUDIO::PLAY_ANIMAL_VOCALIZATION(pedLocal_67, 3, sParam0);
	return;
}

BOOL func_124() // Position - 0x9598 (38296)
{
	if (func_119(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (MISC::GET_GAME_TIMER() - iLocal_404 > iLocal_405)
			return true;
	
		if (func_39(PLAYER::PLAYER_PED_ID(), uLocal_395.f_5, true) < 8f)
		{
			func_109("CHOP_KENNEL", 0);
			return true;
		}
	}

	return false;
}

BOOL func_125(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x95E5 (38373)
{
	BOOL groundZFor3dCoord;
	float groundZ;

	groundZFor3dCoord = false;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		if (bParam5 == true)
		{
			groundZ = 0f;
			groundZFor3dCoord = MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &groundZ, false, false);
		
			if (groundZFor3dCoord)
				vParam1.f_2 = groundZ;
		}
	
		ENTITY::SET_ENTITY_COORDS(pedParam0, vParam1, true, false, false, bParam6);
		ENTITY::SET_ENTITY_HEADING(pedParam0, fParam4);
	
		if (bParam5)
			return groundZFor3dCoord;
	
		return true;
	}

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x9641 (38465)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void func_127() // Position - 0x9662 (38498)
{
	if (MISC::GET_GAME_TIMER() - iLocal_486 > 60000)
	{
		iLocal_486 = MISC::GET_GAME_TIMER();
	
		if (iLocal_49 == 2 || iLocal_49 == 5 || iLocal_49 == 15)
			if (func_43() == 1)
				func_128(115, 1);
			else
				func_128(116, 1);
	}

	return;
}

void func_128(int iParam0, int iParam1) // Position - 0x96B5 (38581)
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

void func_129() // Position - 0x9712 (38674)
{
	if (MISC::GET_GAME_TIMER() - iLocal_483 > 500)
	{
		iLocal_483 = MISC::GET_GAME_TIMER();
	
		if (iLocal_49 != 15 && MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), 1.5f, &uLocal_466, &pedLocal_465, false))
			func_40(1);
	}

	return;
}

void func_130() // Position - 0x975A (38746)
{
	int num;

	if (func_145() && func_144() && !func_143() && iLocal_51 == 0 && iLocal_49 != 6 && func_19() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !PED::IS_PED_IN_COMBAT(pedLocal_67, 0) && !func_82() && !func_15() && !func_3(0) && !func_142())
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CHARACTER_WHEEL, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_COVER, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_WEAPON, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_PREV_WEAPON, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	
		if (iLocal_394 == 0)
			func_139(SYSTEM::FLOOR(Global_114162.f_20122.f_254), 100, "CHOP_H_HAPPY" /*Happiness*/, 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
		else
			func_139(100, 100, "CHOP_H_HAPPY" /*Happiness*/, 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
	
		if (func_138())
		{
			if (Global_33252 == 0)
				Global_33252 = 1;
		
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
			}
			else
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(pedLocal_67, 0f, 0f, 0f, true, -1, 1000, 1000, 193150208);
				bLocal_490 = false;
			}
		
			PAD::SET_INPUT_EXCLUSIVE(func_137(), func_136(0));
			PAD::SET_INPUT_EXCLUSIVE(func_137(), func_136(1));
			PAD::SET_INPUT_EXCLUSIVE(func_137(), func_136(2));
			PAD::SET_INPUT_EXCLUSIVE(func_137(), func_136(3));
			PAD::SET_INPUT_EXCLUSIVE(func_137(), func_136(4));
			PAD::SET_INPUT_EXCLUSIVE(func_137(), func_136(5));
		
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
			{
				PAD::DISABLE_CONTROL_ACTION(func_137(), func_136(0), true);
				PAD::DISABLE_CONTROL_ACTION(func_137(), func_136(1), true);
				PAD::DISABLE_CONTROL_ACTION(func_137(), func_136(2), true);
				PAD::DISABLE_CONTROL_ACTION(func_137(), func_136(3), true);
				PAD::DISABLE_CONTROL_ACTION(func_137(), func_136(4), true);
				PAD::DISABLE_CONTROL_ACTION(func_137(), func_136(5), true);
			}
		
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
		
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(func_137(), func_136(0)) && func_135())
			{
				switch (iLocal_49)
				{
					case 1:
					case 3:
					case 4:
						iLocal_73 = 1;
						func_134(0);
						func_123("PLAYFUL");
						func_109("CHOP_WALK", 0);
						func_122(2, 1);
						break;
				
					case 2:
					case 5:
					case 15:
						iLocal_73 = 0;
						func_134(0);
						func_122(3, 1);
						break;
				
					case 17:
					case 18:
						iLocal_73 = 1;
						func_134(0);
						func_109("CHOP_WALK", 0);
						iLocal_51 = 2;
						break;
				}
			
				if (iLocal_73 == 1 && STATS::STAT_GET_INT(joaat("SP_CHOP_WALK_DONE"), &iLocal_485, -1))
				{
					iLocal_485 = iLocal_485 + 1;
					STATS::STAT_SET_INT(joaat("SP_CHOP_WALK_DONE"), iLocal_485, true);
				}
			}
		
			if (bLocal_393 == true)
			{
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(1)) && func_135())
					if (iLocal_49 == 17 || iLocal_49 == 18)
						iLocal_51 = 5;
					else
						func_122(5, 1);
			
				if (func_43() == 2 && iLocal_394 == 0)
				{
					if (func_133() >= 1)
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(2)))
							func_109("CHOP_CANT", 0);
				
					if (func_133() >= 2)
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(3)))
							func_109("CHOP_CANT", 0);
				
					if (func_133() >= 3)
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(4)))
							func_109("CHOP_CANT", 0);
				
					if (func_133() >= 4)
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(5)))
							func_109("CHOP_CANT", 0);
				}
				else
				{
					if (func_133() >= 1)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(2)) && func_135())
						{
							func_109("CHOP_SIT", 0);
						
							if (iLocal_49 == 17 || iLocal_49 == 18)
								iLocal_51 = 8;
							else
								func_122(8, 1);
						}
					}
				
					if (func_133() >= 2)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(3)) && func_135())
						{
							func_109("CHOP_PAW", 0);
						
							if (iLocal_49 == 17 || iLocal_49 == 18)
								iLocal_51 = 9;
							else
								func_122(9, 1);
						}
					}
				
					if (func_133() >= 3)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(4)) && func_135())
						{
							func_109("CHOP_BEG", 0);
						
							if (iLocal_49 == 17 || iLocal_49 == 18)
								iLocal_51 = 7;
							else
								func_122(7, 1);
						}
					}
				
					if (func_133() >= 4)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(5)) && func_135())
						{
							func_109("CHOP_PET", 0);
						
							if (iLocal_49 == 17 || iLocal_49 == 18)
								iLocal_51 = 10;
							else
								func_122(10, 1);
						}
					}
				}
			}
		}
		else
		{
			HUD::CLEAR_HELP(true);
		
			if (!IS_BIT_SET(Global_114162.f_10053.f_94, 0))
				MISC::SET_BIT(&(Global_114162.f_10053.f_94), 0);
		
			if (bLocal_393 == false)
				bLocal_393 = func_132();
		
			if (bLocal_393 == true)
			{
				num = func_133();
			
				if (num > 4)
					num = 4;
			
				if (iLocal_49 == 1 || iLocal_49 == 17 || iLocal_49 == 18 || iLocal_49 == 3 || iLocal_49 == 4)
				{
					TEXT_LABEL_ASSIGN_STRING(&uLocal_107, "CHOP_H_WAIT_", 32);
					TEXT_LABEL_APPEND_INT(&uLocal_107, num, 32);
				
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
						TEXT_LABEL_APPEND_STRING(&uLocal_107, "_KM", 32);
				}
				else if (iLocal_49 == 2 || iLocal_49 == 15)
				{
					TEXT_LABEL_ASSIGN_STRING(&uLocal_107, "CHOP_H_WALK_", 32);
					TEXT_LABEL_APPEND_INT(&uLocal_107, num, 32);
				
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
						TEXT_LABEL_APPEND_STRING(&uLocal_107, "_KM", 32);
				}
			
				func_131(&uLocal_107);
			}
			else if (iLocal_49 == 2 || iLocal_49 == 15)
			{
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
					func_131("CHOP_H_HOME_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.*/);
				else
					func_131("CHOP_H_HOME" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.*/);
			}
			else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
			{
				func_131("CHOP_H_NO_AD_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.*/);
			}
			else
			{
				func_131("CHOP_H_NO_AD" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.*/);
			}
		}
	}
	else
	{
		func_134(1);
	}

	return;
}

void func_131(char* sParam0) // Position - 0x9D70 (40304)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

BOOL func_132() // Position - 0x9D86 (40326)
{
	if (Global_114162.f_20122.f_263)
		return 1;

	return 0;
}

int func_133() // Position - 0x9DA0 (40352)
{
	return Global_114162.f_20122.f_254.f_3;
}

void func_134(int iParam0) // Position - 0x9DB3 (40371)
{
	if (func_138())
		HUD::CLEAR_HELP(true);

	if (iParam0 == 1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_135() // Position - 0x9DDC (40412)
{
	if (iLocal_49 == 8 || iLocal_49 == 7 || iLocal_49 == 9 || iLocal_49 == 10)
		return false;

	return true;
}

// Unhandled jump detected. Output should be considered invalid
eControlAction func_136(int iParam0) // Position - 0x9E11 (40465)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
	{
		switch (iParam0)
		{
			case 0:
				return INPUT_ATTACK;
		
			case 1:
				return INPUT_JUMP;
		
			case 2:
				return INPUT_COVER;
		
			case 3:
				return INPUT_RELOAD;
		
			case 4:
				return INPUT_CONTEXT;
		
			case 5:
				return INPUT_ENTER;
		
			default:
				goto 0xA2;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return INPUT_SCRIPT_RB;
		
			case 1:
				return INPUT_SCRIPT_RT;
		
			case 2:
				return INPUT_SCRIPT_RLEFT;
		
			case 3:
				return INPUT_SCRIPT_RRIGHT;
		
			case 4:
				return INPUT_SCRIPT_RDOWN;
		
			case 5:
				return INPUT_SCRIPT_RUP;
		
			default:
			
		}
	}

	return INPUT_NEXT_CAMERA;
}

eControlType func_137() // Position - 0x9EB7 (40631)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
		return PLAYER_CONTROL;

	return FRONTEND_CONTROL;
}

BOOL func_138() // Position - 0x9ECF (40655)
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_0" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_1" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_2" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_3" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_4" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_HOME" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_0" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_1" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_2" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_3" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_4" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_NO_AD" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.*/))
			return true;

	if (MISC::IS_PC_VERSION())
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_0_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_1_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_2_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_3_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_4_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_HOME_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_0_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_1_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_2_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_3_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_4_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_NO_AD_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.*/))
				return true;

	return false;
}

void func_139(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39) // Position - 0xA03F (41023)
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_141(0, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1675263.f_1 = 1;
		func_140(0, num);
		Global_1675263.f_1177[num] = iParam0;
		Global_1675263.f_1177.f_11[num] = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_1675263.f_1177.f_22[num /*16*/], sParam2, 64);
		Global_1675263.f_1177.f_194[num] = iParam3;
		Global_1675263.f_1177.f_183[num] = iParam4;
		Global_1675263.f_1177.f_227[num] = iParam5;
		Global_1675263.f_1177.f_238[num /*3*/] = fParam6;
		Global_1675263.f_1177.f_238[num /*3*/].f_1 = fParam7;
		Global_1675263.f_1177.f_269[num] = iParam8;
		Global_1675263.f_1177.f_280[num] = iParam9;
		Global_1675263.f_1177.f_323[num] = iParam10;
		Global_1675263.f_1177.f_334[num] = iParam11;
		Global_1675263.f_1177.f_345[num] = iParam12;
		Global_1675263.f_1177.f_356[num] = iParam13;
		Global_1675263.f_1172 = 1;
		Global_1675263.f_1177.f_367[num] = iParam14;
		Global_1675263.f_1177.f_378[num] = iParam15;
		Global_1675263.f_1177.f_389[num] = iParam16;
		Global_1675263.f_1177.f_400[num] = iParam17;
		Global_1675263.f_1177.f_411[num] = iParam18;
		Global_1675263.f_1177.f_422[num] = iParam19;
		Global_1675263.f_1177.f_433[num] = iParam20;
		Global_1675263.f_1177.f_444[num] = iParam21;
		Global_1675263.f_1177.f_455[num] = iParam22;
		Global_1675263.f_1177.f_466[num] = iParam23;
		Global_1675263.f_1177.f_477[num] = iParam24;
		Global_1675263.f_1177.f_205[num] = iParam25;
		Global_1675263.f_1177.f_216[num] = iParam39;
		Global_1675263.f_1177.f_488[num] = iParam26;
		Global_1675263.f_1177.f_499[num] = iParam27;
		Global_1675263.f_1177.f_510[num] = iParam28;
		Global_1675263.f_1177.f_521[num] = iParam29;
		Global_1675263.f_1177.f_532[num] = iParam30;
		Global_1675263.f_1177.f_543[num] = iParam31;
		Global_1675263.f_1177.f_554[num] = iParam32;
		Global_1675263.f_1177.f_565[num] = iParam33;
		Global_1675263.f_1177.f_576[num] = iParam34;
		Global_1675263.f_1177.f_587[num] = iParam35;
		Global_1675263.f_1177.f_598[num] = iParam36;
		Global_1675263.f_1177.f_609[num] = iParam37;
		Global_1675263.f_1177.f_620[num] = iParam38;
	}

	return;
}

void func_140(int iParam0, int iParam1) // Position - 0xA306 (41734)
{
	MISC::SET_BIT(&Global_1675263.f_7064[iParam0], iParam1);
	return;
}

BOOL func_141(int iParam0, int iParam1) // Position - 0xA31F (41759)
{
	return IS_BIT_SET(Global_1675263.f_7064[iParam0], iParam1);
}

BOOL func_142() // Position - 0xA335 (41781)
{
	return Global_76658;
}

BOOL func_143() // Position - 0xA341 (41793)
{
	return MISC::GET_GAME_TIMER() <= Global_23987.f_6481 + 100;
}

int func_144() // Position - 0xA356 (41814)
{
	if (iLocal_49 == 12)
		return 0;

	if (iLocal_49 == 13 || iLocal_49 == 14 && func_114(pedLocal_67, SCRIPT_TASK_PERFORM_SEQUENCE))
	{
		if (iLocal_437 == 0 && PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_LT))
		{
			func_109("CHOP_BUSY", 0);
			iLocal_437 = 1;
		}
	
		return 0;
	}

	return 1;
}

int func_145() // Position - 0xA3B2 (41906)
{
	if (func_107(PLAYER::PLAYER_PED_ID(), pedLocal_67) < 10f)
	{
		if (iLocal_49 == 15 && iLocal_50 < 4)
		{
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			func_149(0);
			func_148(0);
			return 0;
		}
		else
		{
			func_146();
			func_149(1);
			func_148(1);
			return 1;
		}
	}

	func_149(0);
	func_148(0);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_INTRO" /*Hold ~INPUT_AIM~ when unarmed to interact with Chop.*/) || MISC::IS_PC_VERSION() && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_INTRO_KM" /*Hold ~INPUT_AIM~ when unarmed to interact with Chop.*/))
		HUD::CLEAR_HELP(true);

	return 0;
}

void func_146() // Position - 0xA442 (42050)
{
	if (!IS_BIT_SET(Global_114162.f_10053.f_94, 0) && !(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_INTRO" /*Hold ~INPUT_AIM~ when unarmed to interact with Chop.*/) || MISC::IS_PC_VERSION() && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_INTRO_KM" /*Hold ~INPUT_AIM~ when unarmed to interact with Chop.*/)) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PW_HELP_1" /*Use ~INPUT_CELLPHONE_EXTRA_OPTION~ to email the photograph to the LS Tourist Board.*/) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PW_HELP_2" /*Use ~INPUT_CELLPHONE_SELECT~ to send the email to the LS Tourist Board.*/) && !func_147() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_3(0) && !func_143() && !func_142())
	{
		if (iLocal_49 == 1 || iLocal_49 == 17 || iLocal_49 == 18)
		{
			if (func_119(PLAYER::PLAYER_PED_ID(), 1))
			{
				HUD::CLEAR_HELP(true);
			
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
					func_131("CHOP_H_INTRO_KM" /*Hold ~INPUT_AIM~ when unarmed to interact with Chop.*/);
				else
					func_131("CHOP_H_INTRO" /*Hold ~INPUT_AIM~ when unarmed to interact with Chop.*/);
			}
		}
	}

	if (MISC::IS_PC_VERSION() && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_INTRO_KM" /*Hold ~INPUT_AIM~ when unarmed to interact with Chop.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_INTRO" /*Hold ~INPUT_AIM~ when unarmed to interact with Chop.*/))
		if (func_147() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_3(0) || func_143() || func_142())
			HUD::CLEAR_HELP(true);

	return;
}

BOOL func_147() // Position - 0xA56D (42349)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

void func_148(int iParam0) // Position - 0xA587 (42375)
{
	if (iParam0 == 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_67, -1, SLF_WIDEST_YAW_LIMIT | 32, 2);
			iLocal_71 = 1;
		}
	}
	else if (iLocal_71 == 1 && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		iLocal_71 = 0;
	}

	return;
}

void func_149(int iParam0) // Position - 0xA5D1 (42449)
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);

	if (iLocal_72 == 1 && weaponHash != joaat("WEAPON_UNARMED"))
		iParam0 = 0;

	if (iParam0 == 1)
	{
		if (iLocal_72 == 0 && weaponHash == joaat("WEAPON_UNARMED"))
		{
			PED::SET_PED_CAN_BE_TARGETTED(pedLocal_67, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_67, true, 0);
			PED::SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(pedLocal_67, true);
			PED::SET_USE_CAMERA_HEADING_FOR_DESIRED_DIRECTION_LOCK_ON_TEST(pedLocal_67, true);
			iLocal_72 = 1;
		}
	}
	else if (iLocal_72 == 1)
	{
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_67, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_67, false, 0);
		PED::SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(pedLocal_67, false);
		iLocal_72 = 0;
	}

	return;
}

void func_150() // Position - 0xA658 (42584)
{
	int i;
	var sizeAndPeds;
	Ped targetPed;
	int weaponHash;
	Entity entity;
	Ped pedIndexFromEntityIndex;

	if (iLocal_49 != 6 && iLocal_105 == 0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (iLocal_49 == 2 || iLocal_49 == 5 || iLocal_49 == 15 || iLocal_49 == 14 && !func_114(pedLocal_67, SCRIPT_TASK_PERFORM_SEQUENCE))
		{
			if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f) > 0 || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(pedLocal_67, ENTITY::GET_ENTITY_COORDS(pedLocal_67, true), 100f) > 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
				sizeAndPeds = 5;
			
				for (i = 0; i < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1); i = i + 1)
				{
					if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(targetPed) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(sizeAndPeds[i]) && PED::IS_PED_IN_COMBAT(sizeAndPeds[i], PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COMBAT(sizeAndPeds[i], pedLocal_67) && !PED::IS_PED_IN_ANY_VEHICLE(sizeAndPeds[i], false) && sizeAndPeds[i] != pedLocal_67)
						targetPed = sizeAndPeds[i];
				}
			
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(targetPed))
				{
					TASK::TASK_COMBAT_PED(pedLocal_67, targetPed, 0, 16);
					func_109("CHOP_ATTACK2", 0);
				
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !IS_BIT_SET(Global_114162.f_10053.f_94, 6) && !func_19() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_114162.f_10053.f_94), 6);
						_DISPLAY_HELP_TEXT("CHOP_H_ATTACK" /*Chop will attack anyone who attacks Franklin.*/, -1);
					}
				
					func_40(0);
					func_122(6, 0);
				}
			}
			else
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
			
				if (weaponHash != joaat("WEAPON_BALL") && !(iLocal_49 == 15 && iLocal_50 == 1))
				{
					if (PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &entity) || PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &entity))
					{
						if (ENTITY::IS_ENTITY_A_PED(entity))
						{
							pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);
						
							if (!PED::IS_PED_INJURED(pedIndexFromEntityIndex) && pedIndexFromEntityIndex != pedLocal_67 && !PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false) && func_4(PLAYER::PLAYER_PED_ID(), pedIndexFromEntityIndex, true) < 50f)
							{
								TASK::TASK_COMBAT_PED(pedLocal_67, pedIndexFromEntityIndex, 0, 16);
								iLocal_478 = iLocal_478 + 1;
							
								if (iLocal_478 >= 3)
								{
									PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
								}
							
								func_109("CHOP_ATTACK1", 0);
							
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !IS_BIT_SET(Global_114162.f_10053.f_94, 11) && !func_19() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
								{
									MISC::SET_BIT(&(Global_114162.f_10053.f_94), 11);
									_DISPLAY_HELP_TEXT("CHOP_H_AIM" /*Chop will attack anyone who Franklin targets.*/, -1);
								}
							
								func_40(0);
								func_122(6, 0);
							}
						}
					}
				}
			}
		}
	}

	if (MISC::GET_GAME_TIMER() - iLocal_479 > 60000)
	{
		iLocal_479 = MISC::GET_GAME_TIMER();
	
		if (iLocal_478 > 0)
			iLocal_478 = iLocal_478 - 1;
	}

	return;
}

void func_151() // Position - 0xA925 (43301)
{
	if (iLocal_49 != 16 && Global_33111 == 1 && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(PLAYER::PLAYER_PED_ID()))
		func_122(16, 1);

	return;
}

void func_152() // Position - 0xA953 (43347)
{
	if (iLocal_436 == 0)
	{
		if (func_119(PLAYER::PLAYER_PED_ID(), 1))
		{
			func_109("CHOP_DUMP", 0);
			iLocal_436 = 1;
		}
	}

	return;
}

void func_153() // Position - 0xA97B (43387)
{
	if (iLocal_464 != func_154() && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
	{
		if (func_132())
		{
			iLocal_464 = func_154();
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_67, PV_COMP_UPPR, 0, iLocal_464, 0);
		}
		else if (iLocal_464 != 4)
		{
			iLocal_464 = 4;
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_67, PV_COMP_UPPR, 0, iLocal_464, 0);
		}
	}

	return;
}

int func_154() // Position - 0xA9CD (43469)
{
	return Global_114162.f_20122.f_254.f_4;
}

void func_155() // Position - 0xA9E0 (43488)
{
	int num;

	Global_33252 = 0;
	STREAMING::REQUEST_MODEL(func_163());

	if (!STREAMING::HAS_MODEL_LOADED(func_163()))
		return;

	if (func_179(6))
	{
		uLocal_395.f_4 = 6;
		uLocal_395 = { 18.1531f, 535.2469f, 169.6324f };
		uLocal_395.f_3 = 204.8112f;
		uLocal_395.f_5 = { 19.527712f, 537.43604f, 170.14302f };
		uLocal_395.f_8 = 151.30635f;
		uLocal_417 = { 19.45963f, 535.78174f, 169.6277f };
		uLocal_438[0 /*3*/] = { 17.36033f, 528.8973f, 169.6277f };
		uLocal_438[1 /*3*/] = { 19.46877f, 529.17847f, 169.6277f };
		uLocal_438[2 /*3*/] = { 20.82979f, 531.51685f, 169.6277f };
		uLocal_438[3 /*3*/] = { 22.83555f, 532.3281f, 169.6277f };
		uLocal_438[4 /*3*/] = { 20.79285f, 535.001f, 169.6277f };
		uLocal_438[5 /*3*/] = { 18.05178f, 535.63214f, 169.6277f };
		uLocal_438[6 /*3*/] = { 18.92047f, 534.09375f, 169.6277f };
		uLocal_438[7 /*3*/] = { 17.51333f, 533.4775f, 169.6277f };
		func_162(&uLocal_118);
		func_161(&uLocal_118, 12.41124f, 535.5469f, 169.6277f);
		func_161(&uLocal_118, 19.04497f, 538.5729f, 169.6277f);
		func_161(&uLocal_118, 25.00015f, 534.4414f, 169.6277f);
		func_161(&uLocal_118, 28.0998f, 527.76385f, 169.42769f);
		func_161(&uLocal_118, 17.75896f, 523.3129f, 169.22769f);
		func_160(&uLocal_118);
	}
	else
	{
		uLocal_395.f_4 = 5;
		uLocal_395 = { -10.25168f, -1422.907f, 29.67775f };
		uLocal_395.f_3 = 157.9037f;
		uLocal_395.f_5 = { -9.73f, -1421.55f, 30.1f };
		uLocal_395.f_8 = 148.26f;
		uLocal_417 = { -10.6379f, -1424.5605f, 29.67365f };
		uLocal_438[0 /*3*/] = { -10.03643f, -1423.5287f, 29.67602f };
		uLocal_438[1 /*3*/] = { -10.78779f, -1425.3057f, 29.70937f };
		uLocal_438[2 /*3*/] = { -12.7048f, -1424.748f, 29.72222f };
		uLocal_438[3 /*3*/] = { -12.47465f, -1422.4846f, 29.74699f };
		uLocal_438[4 /*3*/] = { -14.26666f, -1424.8552f, 29.71964f };
		uLocal_438[5 /*3*/] = { -14.55816f, -1423.0481f, 29.78372f };
		uLocal_438[6 /*3*/] = { -16.13293f, -1424.4891f, 29.76139f };
		uLocal_438[7 /*3*/] = { -16.25662f, -1423.325f, 29.81294f };
		func_162(&uLocal_118);
		func_161(&uLocal_118, -7.26821f, -1427.0648f, 29.67468f);
		func_161(&uLocal_118, -7.39631f, -1418.8508f, 29.5858f);
		func_161(&uLocal_118, -14.27201f, -1421.5902f, 29.76819f);
		func_161(&uLocal_118, -22.85347f, -1423.1727f, 29.74042f);
		func_161(&uLocal_118, -22.77974f, -1427.168f, 29.65953f);
		func_160(&uLocal_118);
	}

	bLocal_393 = func_132();
	func_157();

	if (func_43() == 2)
	{
		MISC::CLEAR_AREA_OF_OBJECTS(uLocal_417, 2f, 2);
		STREAMING::REQUEST_MODEL(joaat("prop_big_shit_02"));
	
		while (!STREAMING::HAS_MODEL_LOADED(joaat("prop_big_shit_02")))
		{
			SYSTEM::WAIT(0);
		}
	
		obLocal_416 = OBJECT::CREATE_OBJECT(joaat("prop_big_shit_02"), uLocal_417, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_big_shit_02"));
		iLocal_436 = 0;
	}
	else
	{
		iLocal_436 = 1;
	}

	iLocal_420 = 0;

	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		iLocal_405 = -1;
	else
		iLocal_405 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000);

	if (iLocal_391 == 1)
	{
		iLocal_49 = 7;
		iLocal_73 = 1;
	}
	else if (iLocal_392 == 1)
	{
		iLocal_49 = 2;
	}
	else if (iLocal_405 > -1)
	{
		iLocal_49 = 11;
		iLocal_73 = 0;
	}
	else
	{
		iLocal_49 = 1;
		iLocal_73 = 0;
	}

	iLocal_85 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(11.23f, 515.4f, 168f, 9f, 21f, 4f, func_156(113f), false, 7);
	iLocal_86 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(24f, 528f, 168f, 5f, 5f, 4f, func_156(113f), false, 7);
	uLocal_87[0 /*3*/] = { 444.1685f, 5569.016f, 780.1895f };
	uLocal_87[1 /*3*/] = { 443.8968f, 5574.931f, 780.1895f };
	uLocal_87[2 /*3*/] = { -739.1624f, 5596.7837f, 40.6594f };
	uLocal_87[3 /*3*/] = { -738.8002f, 5593.2686f, 40.6594f };
	uLocal_100[0] = 270f;
	uLocal_100[1] = 270f;
	uLocal_100[2] = 95f;
	uLocal_100[3] = 95f;
	func_98();
	iLocal_71 = 0;
	iLocal_406 = 0;
	iLocal_410 = MISC::GET_GAME_TIMER();
	num = func_133();

	if (num > 4)
		num = 4;

	TEXT_LABEL_ASSIGN_STRING(&uLocal_107, "CHOP_H_WAIT_", 32);
	TEXT_LABEL_APPEND_INT(&uLocal_107, num, 32);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
		TEXT_LABEL_APPEND_STRING(&uLocal_107, "_KM", 32);

	Global_33254 = 0;
	iLocal_48 = 1;
	return;
}

float func_156(float fParam0) // Position - 0xAEE6 (44774)
{
	return fParam0 * 0.017453292f;
}

void func_157() // Position - 0xAEF6 (44790)
{
	if (iLocal_391 == 1)
	{
		if (func_159())
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_67, true, true);
			TASK::CLEAR_PED_TASKS(pedLocal_67);
			func_153();
		
			while (func_147())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if (iLocal_392 == 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				pedLocal_78 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				func_80();
				func_79();
				func_158(&pedLocal_67, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, true);
			
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_67, true);
					PED::SET_PED_ALLOW_VEHICLES_OVERRIDE(pedLocal_67, true);
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedLocal_67, false);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pedLocal_67, false);
					func_101();
					ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_67, true, false);
					PED::SET_PED_INTO_VEHICLE(pedLocal_67, pedLocal_78, 0);
					iLocal_105 = 8;
					func_153();
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_67, false, false);
				}
			
				while (func_147())
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67) && !func_114(pedLocal_67, SCRIPT_TASK_PLAY_ANIM))
					{
						STREAMING::REQUEST_ANIM_DICT(sLocal_475);
					
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_475))
							TASK::TASK_PLAY_ANIM(pedLocal_67, sLocal_475, "sit", 8f, -8f, -1, 1, 0, false, false, false);
					}
				
					SYSTEM::WAIT(0);
				}
			}
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_67))
		func_158(&pedLocal_67, uLocal_395, uLocal_395.f_3, true);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
	{
		PED::ADD_RELATIONSHIP_GROUP("rel_group_chop", &hLocal_69);
		iLocal_70 = 1;
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), hLocal_69);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_69, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("CAT"), hLocal_69);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, hLocal_69, joaat("CAT"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_67, hLocal_69);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_67, true);
		PED::SET_PED_ALLOW_VEHICLES_OVERRIDE(pedLocal_67, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 185, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 26, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 32, false);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 29, false);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 116, false);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 118, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 132, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 268, false);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 107, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 281, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 137, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 146, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 157, false);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 45, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_67, 167, true);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedLocal_67, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pedLocal_67, false);
		WEAPON::GIVE_WEAPON_TO_PED(pedLocal_67, joaat("WEAPON_ANIMAL"), 1, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_67, BF_AlwaysFight, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_67, BF_CanUseCover, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_67, BF_CanFightArmedPedsWhenNotArmed, true);
		PED::SET_PED_HEARING_RANGE(pedLocal_67, 100f);
		PED::SET_PED_SEEING_RANGE(pedLocal_67, 100f);
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_67, 512, true);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(pedLocal_67, false);
		PED::SET_PED_MAX_HEALTH(pedLocal_67, 800);
		ENTITY::SET_ENTITY_HEALTH(pedLocal_67, 800, 0, 0);
		ENTITY::SET_ENTITY_LOD_DIST(pedLocal_67, 200);
	
		if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_67, false))
			func_58();
	
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_170, 3, pedLocal_67, "CHOP", 0, 1);
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_67, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_67, false, 0);
		PED::SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(pedLocal_67, false);
		iLocal_72 = 0;
		Global_33251 = 0;
		iLocal_478 = 0;
		iLocal_479 = MISC::GET_GAME_TIMER();
	}

	return;
}

int func_158(Ped* ppedParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0xB1D4 (45524)
{
	Hash model;

	model = func_163();
	STREAMING::REQUEST_MODEL(model);

	if (STREAMING::HAS_MODEL_LOADED(model))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
			PED::DELETE_PED(ppedParam0);
	
		*ppedParam0 = PED::CREATE_PED(PED_TYPE_MISSION, model, vParam1, iParam4, false, false);
		PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_HEAD, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_BERD, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_HAIR, 0, 0, 0);
	
		if (Global_114162.f_20122.f_263)
			PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_UPPR, 0, Global_114162.f_20122.f_254.f_4, 0);
		else
			PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_UPPR, 0, 4, 0);
	
		PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_LOWR, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_HAND, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_FEET, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_TEEF, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_ACCS, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_TASK, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_DECL, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_JBIB, 0, 0, 0);
		PED::CLEAR_ALL_PED_PROPS(*ppedParam0, 1);
	
		if (bParam5)
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
	
		return 1;
	}

	return 0;
}

BOOL func_159() // Position - 0xB2D9 (45785)
{
	var sizeAndPeds;
	int pedNearbyPeds;
	int i;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(Global_101434) && PED::IS_PED_MODEL(Global_101434, func_163()))
	{
		pedLocal_67 = Global_101434;
		return true;
	}

	sizeAndPeds = 10;
	pedNearbyPeds = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1);

	for (i = 0; i < pedNearbyPeds; i = i + 1)
	{
		if (sizeAndPeds[i] != 0 && _DOES_ENTITY_EXIST_AND_IS_ALIVE(sizeAndPeds[i]) && ENTITY::GET_ENTITY_MODEL(sizeAndPeds[i]) == func_163())
		{
			pedLocal_67 = sizeAndPeds[i];
			return true;
		}
	}

	return false;
}

void func_160(var uParam0) // Position - 0xB368 (45928)
{
	int i;
	float num;

	uParam0->f_51 == 0;
	uParam0->f_46 < 3;

	for (i = 0; i < uParam0->f_46; i = i + 1)
	{
		uParam0->f_47 = { uParam0->f_47 + uParam0->[i /*3*/] };
	}

	uParam0->f_47 = { uParam0->f_47 / F2V(SYSTEM::TO_FLOAT(i)) };

	for (i = 0; i < uParam0->f_46; i = i + 1)
	{
		num = SYSTEM::VDIST2(uParam0->f_47, uParam0->[i /*3*/]);
	
		if (num > uParam0->f_50)
			uParam0->f_50 = num;
	}

	uParam0->f_50 = SYSTEM::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
	return;
}

void func_161(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0xB408 (46088)
{
	uParam0->f_51 == 0;
	uParam0->f_46 >= 15;
	uParam0->[uParam0->f_46 /*3*/] = { fParam1 };
	uParam0->f_46 = uParam0->f_46 + 1;
	return;
}

void func_162(var uParam0) // Position - 0xB439 (46137)
{
	uParam0->f_51;
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
	return;
}

Hash func_163() // Position - 0xB460 (46176)
{
	return joaat("A_C_Chop");
}

BOOL func_164() // Position - 0xB46D (46189)
{
	float num;
	Vector3 entityCoords;
	float height;

	if (iLocal_48 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_67))
		{
			if (func_168(0) && Global_33111 == 0)
				return true;
		
			if (!func_171(CHAR_FRANKLIN))
				return true;
		
			if (Global_114152 == 1)
				return true;
		
			if (Global_79562 == 1 && Global_33111 == 0 && Global_8923 == 0 && Global_33361 == 0 && Global_33362 == 0 && Global_33363 == 0 && Global_61507 == 0 && !func_147() && !func_15() && Global_103884 == 0 && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && !func_166())
				return true;
		
			if (Global_98608 == 1)
				return true;
		
			if (ENTITY::IS_ENTITY_DEAD(pedLocal_67, false))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_67, PLAYER::PLAYER_PED_ID(), true))
				{
					Global_33251 = 1;
				
					if (!IS_BIT_SET(Global_114162.f_10053.f_94, 9) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_114162.f_10053.f_94), 9);
						_DISPLAY_HELP_TEXT("CHOP_H_DEAD" /*Franklin killed Chop. Chop will soon return to Franklin's safehouse, but he's not happy.*/, -1);
					}
				}
				else if (!IS_BIT_SET(Global_114162.f_10053.f_94, 12) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_114162.f_10053.f_94), 12);
					_DISPLAY_HELP_TEXT("CHOP_H_DEAD2" /*Chop was killed. Chop will soon return to Franklin's safehouse.*/, -1);
				}
			
				return true;
			}
			else
			{
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_165();
				}
				else
				{
					if (iLocal_49 == 2 || iLocal_49 == 5 || iLocal_49 == 15)
						num = 200f;
					else
						num = 100f;
				
					if (func_4(PLAYER::PLAYER_PED_ID(), pedLocal_67, true) > num)
					{
						if (!IS_BIT_SET(Global_114162.f_10053.f_94, 4) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							if (iLocal_49 == 1 || iLocal_49 == 17 || iLocal_49 == 11 || iLocal_49 == 4 || iLocal_49 == 3 || iLocal_49 == 13)
							{
							}
							else
							{
								MISC::SET_BIT(&(Global_114162.f_10053.f_94), 4);
								_DISPLAY_HELP_TEXT("CHOP_H_RANGE" /*Chop will stop following if left too far behind.*/, -1);
							}
						}
					
						return true;
					}
				}
			
				if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_67, false) && ENTITY::GET_ENTITY_HEALTH(pedLocal_67) > 0)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(pedLocal_67))
					{
						entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_67, true) };
					
						if (WATER::GET_WATER_HEIGHT(entityCoords, &height))
							if (height - entityCoords.f_2 > 0.1f)
								ENTITY::SET_ENTITY_HEALTH(pedLocal_67, 0, 0, 0);
					}
				
					if (FIRE::IS_ENTITY_ON_FIRE(pedLocal_67))
						ENTITY::SET_ENTITY_HEALTH(pedLocal_67, 0, 0, 0);
				}
			}
		}
		else
		{
			return true;
		}
	}

	return false;
}

void func_165() // Position - 0xB70D (46861)
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_INTRO" /*Hold ~INPUT_AIM~ when unarmed to interact with Chop.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_0" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_1" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_2" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_3" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_4" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_HOME" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_0" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_1" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_2" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_3" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_4" /*Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_HUNT" /*Chop will bark more often when he nears pickups.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_NOVEH" /*Chop can only get into suitable cars with an empty front passenger seat.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_CAR" /*Chop will follow Franklin into suitable cars with an empty front passenger seat.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_BIKE" /*Chop will follow bikes and other vehicles he cannot get inside.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_ATTACK" /*Chop will attack anyone who attacks Franklin.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_BALL" /*When taking Chop for a walk, Franklin can play fetch using the ball in the weapon wheel.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WHIS" /*Press ~INPUT_DETONATE~ to whistle to make Chop return to Franklin.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_AIM" /*Chop will attack anyone who Franklin targets.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_NO_AD" /*Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.*/))
			HUD::CLEAR_HELP(true);

	if (MISC::IS_PC_VERSION())
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_INTRO_KM" /*Hold ~INPUT_AIM~ when unarmed to interact with Chop.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_0_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_1_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_2_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_3_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WAIT_4_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_HOME_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_0_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_1_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_2_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_3_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_WALK_4_KM" /*Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CHOP_H_NO_AD_KM" /*Press ~INPUT_ATTACK~ to take Chop for a walk.*/))
				HUD::CLEAR_HELP(true);

	return;
}

BOOL func_166() // Position - 0xB90A (47370)
{
	return Global_98997;
}

int func_167() // Position - 0xB916 (47382)
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return Global_99823;

	if (func_147())
		return Global_99823;

	return 318;
}

BOOL func_168(int iParam0) // Position - 0xB93D (47421)
{
	if (Global_44199 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0xB95F (47455)
{
	return func_170(iParam0, Global_44199);
}

BOOL func_170(int iParam0, int iParam1) // Position - 0xB970 (47472)
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

BOOL func_171(eCharacter echParam0) // Position - 0xBB51 (47953)
{
	func_172();
	return echParam0 == Global_114162.f_2367.f_539.f_4321;
}

void func_172() // Position - 0xBB6D (47981)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114162.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_174(character) && !func_173(14) || Global_113110)
			{
				if (Global_114162.f_2367.f_539.f_4321 != character && func_174(Global_114162.f_2367.f_539.f_4321))
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

BOOL func_173(int iParam0) // Position - 0xBC6A (48234)
{
	return Global_44199 == iParam0;
}

BOOL func_174(eCharacter echParam0) // Position - 0xBC78 (48248)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xBC84 (48260)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xBCC1 (48321)
{
	if (func_174(character))
		return func_177(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_177(eCharacter echParam0) // Position - 0xBCE6 (48358)
{
	return Global_2201[echParam0 /*29*/];
}

int func_178(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0xBCF5 (48373)
{
	int i;
	float distanceBetweenCoords;
	float num;
	int num2;

	num = 1000000f;
	num2 = 10;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (Global_96726[i /*10*/].f_7 != 263)
		{
			if (Global_96726[i /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_179(i) || iParam4 == 0)
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_96726[i /*10*/].f_3, true);
				
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

BOOL func_179(int iParam0) // Position - 0xBD84 (48516)
{
	return IS_BIT_SET(Global_114162.f_7233[iParam0], 0);
}

BOOL func_180(int iParam0) // Position - 0xBD99 (48537)
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114162.f_9089.f_99.f_58[iParam0];
}

void func_181() // Position - 0xBDC6 (48582)
{
	BOOL flag;
	BOOL flag2;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
	{
	}
	else
	{
		Global_33252 = 0;
		func_148(0);
	
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE() && !bLocal_490)
			CAM::STOP_GAMEPLAY_HINT(false);
	
		func_68(&blLocal_68);
	
		if (func_180(63))
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				if (func_180(126))
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 19.3f, 528.24f, 169.63f, true) > 50f)
						func_62(139, 1, false);
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -11.15f, -1425.56f, 29.67f, true) > 50f)
					func_62(138, true, false);
	
		func_40(1);
		func_42(&obLocal_416, false);
		func_42(&obLocal_421, false);
	
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
	
		STREAMING::REMOVE_PTFX_ASSET();
	
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), false))
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"));
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && !func_173(0))
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_67))
		{
			if (func_190())
			{
				func_189(&pedLocal_67);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_67, false) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_GROUP(pedLocal_67))
						PED::REMOVE_PED_FROM_GROUP(pedLocal_67);
				
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106) || PED::IS_PED_IN_ANY_VEHICLE(pedLocal_67, false))
					{
						if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78))
						{
							flag = false;
						
							while (!flag)
							{
								SYSTEM::WAIT(0);
							
								if (!func_188() || func_185(pedLocal_78, 1093140480, 1, 1056964608, false, true, false))
									flag = true;
							}
						
							if (func_188())
							{
								if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(pedLocal_78, iLocal_116))
									VEHICLE::SET_VEHICLE_DOOR_OPEN(pedLocal_78, iLocal_116, false, false);
							
								STREAMING::REQUEST_ANIM_DICT(sLocal_475);
							
								while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_475))
								{
									SYSTEM::WAIT(0);
								}
							}
						
							if (func_188())
							{
								iLocal_106 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_106, pedLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(pedLocal_78, "seat_pside_f"));
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_67);
								TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_67, iLocal_106, sLocal_475, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_67, false, false);
								flag2 = false;
							
								while (!flag2)
								{
									SYSTEM::WAIT(0);
								
									if (!func_188() || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_106) > 0.99f)
										flag2 = true;
								}
							
								SYSTEM::WAIT(0);
							
								if (func_188() && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(pedLocal_78, iLocal_116))
									VEHICLE::SET_VEHICLE_DOOR_SHUT(pedLocal_78, iLocal_116, false);
							}
						}
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						{
							if (iLocal_49 == 2 || iLocal_49 == 15)
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_67);
								func_125(pedLocal_67, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 1.75f, 0f, 0f), ENTITY::GET_ENTITY_HEADING(pedLocal_67), true, true);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_67, false, false);
							}
						}
					}
				
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
					{
						PED::SET_PED_KEEP_TASK(pedLocal_67, true);
						TASK::TASK_SMART_FLEE_PED(pedLocal_67, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
					}
				}
			
				func_183(&pedLocal_67, true, 0, 1);
			}
		}
	
		func_57();
		func_56(&pedLocal_78);
		func_99(false);
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@move");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@enter");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@base");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@idle_a");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@exit");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@4x4");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@low_car");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@std_car");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@van");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@enter");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@idle_a");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@exit");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@indication@");
		STREAMING::REMOVE_ANIM_DICT("misschop_vehicleenter_exit");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
		func_182(&uLocal_170, 1);
		func_182(&uLocal_170, 3);
		func_165();
		CAM::DESTROY_ALL_CAMS(false);
	
		if (iLocal_85 > -1)
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_85);
	
		if (iLocal_86 > -1)
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_86);
	
		if (iLocal_70 == 1)
			PED::REMOVE_RELATIONSHIP_GROUP(hLocal_69);
	
		AUDIO::STOP_SOUND(iLocal_488);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_182(var uParam0, int iParam1) // Position - 0xC1B1 (49585)
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_183(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0xC1CE (49614)
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xC21E (49694)
{
	func_172();
	return Global_114162.f_2367.f_539.f_4321;
}

BOOL func_185(Ped pedParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC237 (49719)
{
	func_187(bParam5, bParam6);
	func_186(pedParam0);

	if (MISC::GET_GAME_TIMER() - Global_32 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(pedParam0, iParam1, iParam2, bParam4);

	Global_32 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(pedParam0)) <= iParam3)
			return true;

	return false;
}

void func_186(Ped pedParam0) // Position - 0xC28E (49806)
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(pedParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(pedParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(pedParam0, false);

	return;
}

void func_187(BOOL bParam0, BOOL bParam1) // Position - 0xC2BA (49850)
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

BOOL func_188() // Position - 0xC40B (50187)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_78) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
		return true;

	return false;
}

void func_189(Ped* ppedParam0) // Position - 0xC439 (50233)
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

BOOL func_190() // Position - 0xC47A (50298)
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106) || PED::IS_PED_IN_ANY_VEHICLE(pedLocal_67, false))
			return true;

	if (Global_33253 == 1)
		return true;

	if (Global_33254 == 1)
	{
		Global_33254 = 0;
		return true;
	}

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_67))
	{
		if (iLocal_49 == 11 && ENTITY::IS_ENTITY_OCCLUDED(pedLocal_67))
			return true;
	
		if (func_191(ENTITY::GET_ENTITY_COORDS(pedLocal_67, false), 1f, 1120403456))
			return false;
	}

	if (!func_168(0))
		return false;

	if (func_173(6) || func_173(2))
		return false;

	return true;
}

BOOL func_191(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4) // Position - 0xC525 (50469)
{
	if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam0, iParam4, iParam4, iParam4, false, false, 0))
			return false;
		else if (CAM::IS_SCREEN_FADED_OUT())
			return false;
		else
			return true;

	return false;
}


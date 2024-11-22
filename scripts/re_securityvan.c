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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 2;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	Vehicle veLocal_52 = 0;
	Vehicle veLocal_53 = 0;
	Object obLocal_54 = 0;
	Object obLocal_55 = 0;
	int iLocal_56 = 0;
	Blip blLocal_57 = 0;
	var uLocal_58 = 2;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	Blip blLocal_61 = 0;
	Blip blLocal_62 = 0;
	int iLocal_63 = 0;
	Hash hLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	float fLocal_75 = 0f;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	float fLocal_78 = 0f;
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
	float fLocal_100 = 0f;
	Hash hLocal_101 = 0;
	Hash hLocal_102 = 0;
	Hash hLocal_103 = 0;
	BOOL bLocal_104 = 0;
	BOOL bLocal_105 = 0;
	BOOL bLocal_106 = 0;
	BOOL bLocal_107 = 0;
	BOOL bLocal_108 = 0;
	BOOL bLocal_109 = 0;
	BOOL bLocal_110 = 0;
	BOOL bLocal_111 = 0;
	BOOL bLocal_112 = 0;
	BOOL bLocal_113 = 0;
	BOOL bLocal_114 = 0;
	BOOL bLocal_115 = 0;
	var uLocal_116 = 2;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	BOOL bLocal_119 = 0;
	BOOL bLocal_120 = 0;
	var uLocal_121 = 2;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	BOOL bLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	ScrHandle shLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	Pickup pkLocal_135 = 0;
	int iLocal_136 = 0;
	char* sLocal_137 = 0;
	var uLocal_138 = 16;
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
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = -1;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 1000;
	var uLocal_313 = 1000;
	var uLocal_314 = 0;
	var uLocal_315 = 8;
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
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
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
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
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
	var uLocal_462 = 1;
	int iLocal_463 = 0;
	BOOL bLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	float fLocal_467 = 0f;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	int iLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	float fLocal_478 = 0f;
	var uLocal_479 = 2;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	BOOL bLocal_494 = 0;
	BOOL bLocal_495 = 0;
	float fLocal_496 = 0f;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 2;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	int iLocal_505 = 0;
	float fLocal_506 = 0f;
	float fLocal_507 = 0f;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	var uLocal_510 = 2;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 2;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
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

void main() // Position - 0x0
{
	int i;
	int num;
	int num2;
	int num3;
	int randomIntInRange;
	int j;

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
	iLocal_16 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	uLocal_79 = { 0.0203f, -3.1441f, 0.5027f };
	uLocal_82 = { 90f, 0f, 0f };
	uLocal_88 = { 0f, 0f, 0f };
	uLocal_91 = { 0f, 0f, 0f };
	iLocal_127 = 1;
	iLocal_128 = 1;
	sLocal_137 = "RESECAU";
	iLocal_463 = -1;
	fLocal_467 = -3.55f;
	uLocal_468 = { 0.014f, -0.9111f, 1.2317f };
	uLocal_471 = { 0f, -3.4368f, 1.2317f };
	iLocal_492 = -1;
	iLocal_493 = -1;
	iLocal_505 = -1;
	uLocal_85 = { uLocal_85 };
	uLocal_85 = { uScriptParam_0.f_1[0 /*3*/] };

	if (SYSTEM::VDIST(uLocal_85, -337.3338f, -1460.373f, 29.5668f) < 5f)
		iLocal_45 = 1;
	else if (SYSTEM::VDIST(uLocal_85, -588.4711f, -866.9462f, 25.3292f) < 5f)
		iLocal_45 = 2;
	else if (SYSTEM::VDIST(uLocal_85, -389f, 6061f, 31f) < 5f)
		iLocal_45 = 3;
	else if (SYSTEM::VDIST(uLocal_85, -600f, -1094f, 22.76f) < 5f)
		iLocal_45 = 4;
	else if (SYSTEM::VDIST(uLocal_85, -1025f, -1086f, 2f) < 5f)
		iLocal_45 = 5;
	else if (SYSTEM::VDIST(uLocal_85, -595.5618f, -667.7235f, 31.0544f) < 5f)
		iLocal_45 = 6;
	else if (SYSTEM::VDIST(uLocal_85, 3018.3843f, 3634.0168f, 70.4076f) < 5f)
		iLocal_45 = 7;
	else if (SYSTEM::VDIST(uLocal_85, -2815.6614f, 2208.1707f, 27.8382f) < 5f)
		iLocal_45 = 8;
	else if (SYSTEM::VDIST(uLocal_85, 856.7742f, -2067.8452f, 29.0704f) < 5f)
		iLocal_45 = 9;
	else if (SYSTEM::VDIST(uLocal_85, 805.1932f, -703.1327f, 28.1632f) < 5f)
		iLocal_45 = 10;
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	if (Global_4)
	{
		if (iLocal_45 != 2)
			SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		{
			for (i = 0; i < iLocal_49; i = i + 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[i]))
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
						if (!PED::IS_PED_IN_VEHICLE(iLocal_49[i], veLocal_52, false))
							TASK::TASK_ENTER_VEHICLE(iLocal_49[i], veLocal_52, -1, func_248(veLocal_52), 1073741824, 1, 0, 0);
					else
						TASK::TASK_STAND_STILL(iLocal_49[i], 10000);
			}
		
			func_231();
		}
	
		if (!func_191(uLocal_85, 9, iLocal_45, true, false))
			SCRIPT::TERMINATE_THIS_THREAD();
		else
			func_188(-1);
	}

	func_187();
	iLocal_63 = PED::ADD_SCENARIO_BLOCKING_AREA(fLocal_75 + { 30f, 30f, 30f }, fLocal_75 - { 30f, 30f, 30f }, false, true, true, true, 1);

	while (true)
	{
		SYSTEM::WAIT(0);
		func_184(&uLocal_315);
	
		if (!func_183())
		{
			if (func_182())
				func_231();
		
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_SV", 0);
		
			switch (iLocal_508)
			{
				case 0:
					if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_170())
					{
						if (func_161())
						{
							if (iLocal_44 == 3 && !(CAM::IS_SPHERE_VISIBLE(fLocal_75, 3f) && func_160(PLAYER::PLAYER_PED_ID(), fLocal_75, true) < 150f) || iLocal_44 != 3)
							{
								if (iLocal_44 == 3)
								{
									if (!CAM::IS_SPHERE_VISIBLE(fLocal_75, 8f))
										MISC::CLEAR_AREA(fLocal_75, 4f, true, false, false, false);
								
									iLocal_46 = 4;
									bLocal_107 = true;
								}
								else
								{
									iLocal_46 = 1;
								}
							
								func_159();
							
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && iLocal_44 == 3)
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(veLocal_52, 5f);
							
								SYSTEM::SETTIMERA(0);
								iLocal_508 = iLocal_508 + 1;
							}
						}
					}
					else
					{
						func_231();
					}
					break;
			
				case 1:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veLocal_52, true)) < 10000f || !ENTITY::IS_ENTITY_OCCLUDED(veLocal_52) || !PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[1]))
							iLocal_508 = iLocal_508 + 1;
				
					if (func_158())
						iLocal_508 = iLocal_508 + 1;
				
					if (iLocal_508 != 1)
						SYSTEM::SETTIMERA(0);
					break;
			
				case 2:
					if (SYSTEM::TIMERA() > 2000)
						if (iLocal_44 != 3)
							func_153();
				
					if (ENTITY::DOES_ENTITY_EXIST(veLocal_52) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_44 == 3)
						{
							func_148();
						
							if (!ENTITY::IS_ENTITY_OCCLUDED(veLocal_52) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 100f || func_158())
								func_139(true);
						}
						else if (!ENTITY::IS_ENTITY_OCCLUDED(veLocal_52) && iLocal_46 == 4 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_94, uLocal_97, fLocal_100, false, true, 0) || func_158())
						{
							func_139(true);
						}
					
						if (iLocal_46 == 4 && ENTITY::IS_ENTITY_OCCLUDED(veLocal_52) && iLocal_44 != 3)
							if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veLocal_52, true)) > 100f)
								func_231();
							else
								func_139(true);
					}
					break;
			}
		
			if (iLocal_508 > 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && ENTITY::IS_ENTITY_OCCLUDED(veLocal_52))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veLocal_52, true)) > 62500f)
						func_231();
				
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veLocal_52, true)) > 10000f && !BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
						func_231();
				}
			}
		}
		else
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		
			if (!HUD::DOES_BLIP_EXIST(blLocal_61))
			{
				if (!func_138(2) && !bLocal_112)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						_DISPLAY_HELP_TEXT("SV_VANHELP1" /*If you blow off the doors or destroy a security truck, you will be able to get to the cash inside.*/, 15000);
						func_136(2);
					}
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
				{
					if (iLocal_509 != 0)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(obLocal_54, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_509 = 0;
							func_135(&uLocal_303, 0, false);
						}
					}
				}
				else if (bLocal_107 && !OBJECT::DOES_PICKUP_EXIST(pkLocal_135) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !bLocal_119)
				{
					if (iLocal_509 != 1)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(veLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_509 = 1;
							func_135(&uLocal_303, 0, false);
						}
					}
				}
				else if (OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
				{
					if (iLocal_509 != 2)
					{
						if (SYSTEM::VDIST2(OBJECT::GET_PICKUP_COORDS(pkLocal_135), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_509 = 2;
							func_135(&uLocal_303, 0, false);
						}
					}
				}
			
				if (iLocal_509 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
					{
						func_128(&uLocal_303, obLocal_54, 0, 0, true, true, true);
					
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(obLocal_54, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_509 = -1;
							func_135(&uLocal_303, 0, false);
						}
					}
				}
				else if (iLocal_509 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_52, true))
					{
						func_128(&uLocal_303, veLocal_52, 0, 0, true, true, true);
					
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(veLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_509 = -1;
							func_135(&uLocal_303, 0, false);
						}
					}
				}
				else if (iLocal_509 == 2)
				{
					if (OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
					{
						func_105(&uLocal_303, OBJECT::GET_PICKUP_COORDS(pkLocal_135), 0, 0, true, true, true);
					
						if (SYSTEM::VDIST2(OBJECT::GET_PICKUP_COORDS(pkLocal_135), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_509 = -1;
							func_135(&uLocal_303, 0, false);
						}
					}
				}
			
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_52, false) && bLocal_107 && !bLocal_109 && !func_138(0) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 741814745, false) && !func_138(1))
				{
					switch (iLocal_132)
					{
						case 0:
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(veLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 225f)
							{
								_DISPLAY_HELP_TEXT("SV_DOORHELP1" /*When attacking a Security Van damage the center of the rear doors to open them.*/, 15000);
								func_136(0);
								iLocal_132 = iLocal_132 + 1;
							}
							break;
					
						case 1:
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								iLocal_133 = MISC::GET_GAME_TIMER();
								iLocal_132 = iLocal_132 + 1;
							}
							break;
					
						case 2:
							if (MISC::GET_GAME_TIMER() - iLocal_133 > 2000 && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 741814745, false))
							{
								_DISPLAY_HELP_TEXT("SV_DOORHELP2" /*Alternatively, attach a sticky bomb to the rear doors of the van and detonate it to blow them open.*/, 15000);
								func_136(1);
								iLocal_132 = iLocal_132 + 1;
							}
							break;
					}
				}
			
				if (bLocal_109 || bLocal_119)
					if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("SV_DOORHELP1" /*When attacking a Security Van damage the center of the rear doors to open them.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("SV_DOORHELP2" /*Alternatively, attach a sticky bomb to the rear doors of the van and detonate it to blow them open.*/))
						HUD::CLEAR_HELP(true);
			}
		
			switch (iLocal_46)
			{
				case 1:
					func_153();
					break;
			
				case 2:
					func_96();
					break;
			
				case 3:
					func_94();
					break;
			
				case 4:
					func_148();
					break;
			
				case 5:
					func_90();
					break;
			
				case 6:
					func_86();
					break;
			
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_49[0]))
						if (PED::GET_PED_ALERTNESS(iLocal_49[0]) != 3)
							PED::SET_PED_ALERTNESS(iLocal_49[0], 3);
				
					if (!PED::IS_PED_INJURED(iLocal_49[1]))
						if (PED::GET_PED_ALERTNESS(iLocal_49[1]) != 3)
							PED::SET_PED_ALERTNESS(iLocal_49[1], 3);
				
					if (!PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false) && !PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
					{
						iLocal_127 = 1;
						func_79(iLocal_49[1]);
						func_77(0, true);
					}
					else if (iLocal_127 == 1)
					{
						if (PED::IS_PED_INJURED(iLocal_49[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
						{
							iLocal_48 = 0;
							iLocal_127 = 0;
						}
						else
						{
							func_79(iLocal_49[1]);
						}
					}
					else if (iLocal_127 == 0)
					{
						if (PED::IS_PED_INJURED(iLocal_49[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
							iLocal_127 = -1;
						else
							func_79(iLocal_49[0]);
					}
					break;
			
				case 8:
					func_71();
					break;
			
				case 9:
					func_231();
					break;
			}
		
			if (func_69())
				func_68(9);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_52, -1, false) == PLAYER::PLAYER_PED_ID() && !bLocal_111 && iLocal_46 != 8)
				if (bLocal_107)
					func_68(8);
				else
					func_68(5);
		
			if (bLocal_108)
			{
				if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(hLocal_64, 1862763509) != 5)
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_64, 1862763509);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, hLocal_64);
				}
			}
		
			if (bLocal_109)
				if (OBJECT::DOES_PICKUP_EXIST(pkLocal_135) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(pkLocal_135)) > 250f)
					func_68(9);
		
			if (!bLocal_119)
			{
				if (func_67())
					bLocal_119 = true;
			}
			else
			{
				num = 1;
				num2 = 0;
			
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[num2]))
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_49[num2], false) && !PED::IS_PED_INJURED(iLocal_49[num2]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 10000f)
						num = 0;
			
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_52))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_52, false))
							num3 = 1;
				
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(veLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(veLocal_52) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(veLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 62500f)
						num3 = 1;
				}
			
				if (num3 && num)
					func_43();
			}
		
			func_39();
			func_34();
			func_29();
		}
	
		if (!bLocal_105)
		{
			if (func_28())
			{
				iLocal_125 = MISC::GET_GAME_TIMER();
				bLocal_105 = true;
			}
		}
	
		if (bLocal_105)
		{
			if (!bLocal_106)
			{
				if (MISC::GET_GAME_TIMER() - iLocal_125 > 5000)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
				
					if (func_27() < 30f)
						if (_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_COPS", 8, 0, 0, 0))
							bLocal_106 = true;
					else
						bLocal_106 = true;
				}
			}
		}
	
		if (MISC::GET_GAME_TIMER() - iLocal_125 > 10000 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && !bLocal_124)
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		
			if (randomIntInRange == 0)
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			else if (randomIntInRange == 1)
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			else
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
		
			bLocal_124 = true;
		}
	
		if (bLocal_106)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(func_3(), true)) < SYSTEM::POW(50f, 2f))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					}
				
					PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
			}
		}
	
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && func_2())
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	
		if (func_1())
			func_68(9);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(veLocal_52, 0) > 0f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(veLocal_52, 1) > 0f)
				if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veLocal_52) == 3)
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_52, 1);
		
			if (!bLocal_110)
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_52, false))
					bLocal_110 = true;
		
			if (!bLocal_110)
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(veLocal_52, 0) == 0f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(veLocal_52, 1) == 0f)
					if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veLocal_52) == 1)
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_52, 3);
		}
	
		if (shLocal_129 != 0)
			if (iLocal_46 == 8 || iLocal_46 == 6 || iLocal_46 == 4)
				EVENT::REMOVE_SHOCKING_EVENT(shLocal_129);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
		{
			for (j = 0; j < iLocal_49; j = j + 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[j]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[j], false))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_54, iLocal_49[j]))
					{
						if (iLocal_46 == 1)
						{
							if (!uLocal_510[j])
							{
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[j], 0, "random@security_van", "sec_idle", 1090519040, true);
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[j], 1, "random@security_van", "sec_walk_calm", 1090519040, true);
								uLocal_510[j] = 1;
							}
						}
					
						if (iLocal_46 == 7)
						{
							if (!uLocal_513[j])
							{
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[j], 0, "random@security_van", "sec_idle", 1090519040, true);
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[j], 1, "random@security_van", "sec_walk_panic", 1090519040, true);
								uLocal_513[j] = 1;
							}
						}
					
						if (WEAPON::IS_PED_ARMED(iLocal_49[j], 4) && !bLocal_113)
						{
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(iLocal_49[j], true);
							bLocal_113 = true;
						}
					}
					else
					{
						if (uLocal_510[j])
						{
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[j], 0, -1056964608);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[j], 1, -1056964608);
							uLocal_510[j] = 0;
						}
					
						if (uLocal_513[j])
						{
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[j], 0, -1056964608);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[j], 1, -1056964608);
							uLocal_513[j] = 0;
						}
					
						if (uLocal_510[j] || uLocal_513[j])
						{
							uLocal_510[j] = 0;
							uLocal_513[j] = 0;
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[j], 0, -1056964608);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[j], 1, -1056964608);
						}
					
						if (WEAPON::IS_PED_ARMED(iLocal_49[j], 4) && bLocal_113)
						{
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(iLocal_49[j], true);
							bLocal_113 = false;
						}
					}
				}
			}
		}
		else
		{
			for (j = 0; j < iLocal_49; j = j + 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[j]))
				{
					if (uLocal_510[j] || uLocal_513[j])
					{
						uLocal_510[j] = 0;
						uLocal_513[j] = 0;
						PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[j], 0, -1056964608);
						PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[j], 1, -1056964608);
					}
				}
			}
		}
	
		if (!bLocal_107 && !bLocal_494)
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_54) && ENTITY::IS_ENTITY_ATTACHED(obLocal_54) && !PED::IS_PED_INJURED(iLocal_49[iLocal_128]) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[iLocal_128], "random@security_van", "sec_hand_override", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[iLocal_128], "random@security_van", "sec_case_into_van_panic", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[iLocal_128], "random@security_van", "sec_case_into_van_calm", 3))
				TASK::TASK_PLAY_ANIM(iLocal_49[iLocal_128], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, false, false, false);
	
		if (!bLocal_114)
		{
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_52))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_52, PLAYER::PLAYER_PED_ID(), true))
					bLocal_114 = true;
			
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(veLocal_52);
			}
		}
	}

	return;
}

BOOL func_1() // Position - 0x11BB
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98991.f_44 == 1;

	return false;
}

BOOL func_2() // Position - 0x11D7
{
	float xRadius;
	Ped randomPedAtCoord;
	Vehicle randomVehicleInSphere;

	xRadius = 50f;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && bLocal_112 && OBJECT::DOES_PICKUP_EXIST(pkLocal_135) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && OBJECT::DOES_PICKUP_EXIST(pkLocal_135) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veLocal_52, true)) < 20f && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(pkLocal_135)) < 20f)
	{
		randomPedAtCoord = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), xRadius, xRadius, xRadius, -1);
	
		if (!PED::IS_PED_INJURED(randomPedAtCoord))
			if (ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == 1581098148 || ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == 368603149)
				return true;
	
		randomPedAtCoord = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), xRadius, xRadius, xRadius, -1);
	
		if (!PED::IS_PED_INJURED(randomPedAtCoord))
			if (ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == 1581098148 || ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == 368603149)
				return true;
	
		randomVehicleInSphere = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), xRadius, 0, 1024);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(randomVehicleInSphere, false))
			return true;
	
		randomVehicleInSphere = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), xRadius, 0, 1024);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(randomVehicleInSphere, false))
			return true;
	}

	return false;
}

Ped func_3() // Position - 0x1337
{
	float num;
	int num2;

	num = 999999f;
	num2 = 0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[0]))
		{
			num = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true));
			num2 = 0;
		}
	
		if (!PED::IS_PED_INJURED(iLocal_49[1]))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true)) < num)
			{
				num = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true));
				num2 = 1;
			}
		}
	}

	return iLocal_49[num2];
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x13CA
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_5(sParam2, iParam3, false);
}

BOOL func_5(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1418
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
					func_25();
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
	
		if (func_24(8, -1))
			return 0;
	
		Global_22362 = { Global_22356 };
		func_23();
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
			
				if (func_14())
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
		
			if (func_13())
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
		
			func_12();
			Global_22296 = bParam2;
		}
	
		Global_22288 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_11();
		func_6();
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
		func_25();
	}

	return 0;
}

void func_6() // Position - 0x16E6
{
	if (!func_7())
		return;

	if (Global_22292)
	{
		TEXT_LABEL_COPY(&(Global_1971465.f_1), { Global_21905 }, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}

	return;
}

BOOL func_7() // Position - 0x171D
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79389)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_8(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_8(Player plParam0) // Position - 0x1780
{
	return func_9(plParam0, 20);
}

BOOL func_9(Player plParam0, int iParam1) // Position - 0x1790
{
	return IS_BIT_SET(Global_1887305[plParam0 /*610*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x17A8
{
	return -1;
}

void func_11() // Position - 0x17B1
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

void func_12() // Position - 0x17E3
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

BOOL func_13() // Position - 0x1878
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

BOOL func_14() // Position - 0x189F
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x1938
{
	if (func_22(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x19DA
{
	func_17();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_17() // Position - 0x19F3
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_18(character) && !func_22(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_18(Global_113969.f_2366.f_539.f_4321))
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

BOOL func_18(eCharacter echParam0) // Position - 0x1AF0
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1AFC
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1B39
{
	if (func_18(character))
		return func_21(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_21(eCharacter echParam0) // Position - 0x1B5E
{
	return Global_2169[echParam0 /*29*/];
}

BOOL func_22(int iParam0) // Position - 0x1B6D
{
	return Global_44042 == iParam0;
}

void func_23() // Position - 0x1B7B
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

BOOL func_24(int iParam0, int iParam1) // Position - 0x1BD3
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

void func_25() // Position - 0x1C0B
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1C62
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

float func_27() // Position - 0x1CB8
{
	float value;

	value = 999999f;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[0]))
			value = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true));
	
		if (!PED::IS_PED_INJURED(iLocal_49[1]))
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true)) < value)
				value = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true));
	}

	return SYSTEM::SQRT(value);
}

BOOL func_28() // Position - 0x1D42
{
	BOOL num;
	int i;

	num = 0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		for (i = 0; i < iLocal_49; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[i]))
				if (!PED::IS_PED_INJURED(iLocal_49[i]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[i], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(iLocal_49[i]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[i], false))
					num = 1;
		}
	
		if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]) && bLocal_114)
			num = 1;
	}

	return num;
}

void func_29() // Position - 0x1DE7
{
	if (!bLocal_119)
	{
		if (!bLocal_107)
		{
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(obLocal_54))
				{
					OBJECT::DELETE_OBJECT(&obLocal_54);
				
					if (!OBJECT::DOES_PICKUP_EXIST(pkLocal_135) && !bLocal_109)
						func_30(0f, 0f, 0f, false);
				}
				else if (MISC::GET_GAME_TIMER() - iLocal_134 > 3000)
				{
					if (PED::IS_PED_INJURED(iLocal_49[iLocal_128]) || PED::IS_PED_RAGDOLL(iLocal_49[iLocal_128]))
					{
						ENTITY::DETACH_ENTITY(obLocal_54, true, true);
						iLocal_134 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (!OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
			{
				if (PED::IS_PED_INJURED(iLocal_49[iLocal_128]) || !PED::IS_PED_INJURED(iLocal_49[iLocal_128]) && PED::IS_PED_RAGDOLL(iLocal_49[iLocal_128]) && !bLocal_109)
					func_30(0f, 0f, 0f, false);
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
			OBJECT::DELETE_OBJECT(&obLocal_54);
	
		if (OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
			OBJECT::REMOVE_PICKUP(pkLocal_135);
	}

	return;
}

void func_30(float fParam0, float fParam1, float fParam2, BOOL bParam3) // Position - 0x1ED4
{
	if (!bLocal_119 && !bLocal_109)
	{
		if (!bParam3)
			if (bLocal_107)
				fParam0 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, -3.3f, 0f), 1067030938, 1069547520) };
			else
				fParam0 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_49[iLocal_128], false), 1067030938, 1069547520) };
	
		MISC::SET_BIT(&iLocal_136, 3);
		MISC::SET_BIT(&iLocal_136, 4);
		MISC::SET_BIT(&iLocal_136, 1);
	
		if (bParam3)
			pkLocal_135 = OBJECT::CREATE_PICKUP_ROTATE(-562499202, fParam0, ENTITY::GET_ENTITY_ROTATION(obLocal_54, 2), 0, iLocal_126, 2, true, 0);
		else
			pkLocal_135 = OBJECT::CREATE_PICKUP(-562499202, fParam0, iLocal_136, iLocal_126, true, 0);
	
		if (!HUD::DOES_BLIP_EXIST(blLocal_62))
			blLocal_62 = func_31(pkLocal_135);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
			OBJECT::DELETE_OBJECT(&obLocal_54);
	
		bLocal_109 = true;
	}

	return;
}

Blip func_31(Pickup pkParam0) // Position - 0x1FA6
{
	return func_32(pkParam0);
}

Blip func_32(Pickup pkParam0) // Position - 0x1FB4
{
	Blip blip;

	if (!OBJECT::DOES_PICKUP_EXIST(pkParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_PICKUP(pkParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	return blip;
}

var func_33(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1FEC
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_34() // Position - 0x2003
{
	if (func_36())
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_55))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(veLocal_52, 2, false, false);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(veLocal_52, 3, false, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_55))
				OBJECT::DELETE_OBJECT(&obLocal_55);
		}
	}

	switch (iLocal_47)
	{
		case 0:
			if (bLocal_107)
				iLocal_47 = 1;
			break;
	
		case 1:
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(veLocal_52, 2) == 0f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(veLocal_52, 3) == 0f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(obLocal_54))
						ENTITY::DETACH_ENTITY(obLocal_54, true, true);
				
					ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_54, veLocal_52, 0, uLocal_79, uLocal_82, false, false, false, false, 2, true, 0);
					iLocal_47 = 2;
				}
			}
			break;
	
		case 2:
			if (!bLocal_109 && !bLocal_119)
			{
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_52, false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(veLocal_52, 2) > 0.25f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(veLocal_52, 3) > 0.25f || !VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(obLocal_54))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(AUDIO::GET_SOUND_ID(), "DOORS_BLOWN", ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_52, 13), "RE_SECURITY_VAN_SOUNDSET", false, 0, false);
								ENTITY::DETACH_ENTITY(obLocal_54, true, false);
								ENTITY::SET_ENTITY_COLLISION(obLocal_54, true, false);
								PHYSICS::ACTIVATE_PHYSICS(obLocal_54);
								OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(obLocal_54, true);
								uLocal_475 = { ENTITY::GET_ENTITY_COORDS(obLocal_54, true) - (ENTITY::GET_ENTITY_COORDS(veLocal_52, true) * { 1.5f, 1.5f, 1.5f }) };
							
								if (SYSTEM::VMAG(uLocal_475) > 10f)
								{
									uLocal_475 = { func_35(uLocal_475) };
									uLocal_475 = { uLocal_475 * { 10f, 10f, 10f } };
								}
							
								if (iLocal_131 < 100)
									bLocal_115 = true;
							
								ENTITY::APPLY_FORCE_TO_ENTITY(obLocal_54, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, true, true, true, false, true);
								iLocal_474 = MISC::GET_GAME_TIMER();
							}
							else if (MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(ENTITY::GET_ENTITY_COORDS(obLocal_54, true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, uLocal_468), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, uLocal_471), false) >= 1f)
							{
								iLocal_47 = 3;
								uLocal_121[0] = 0;
								uLocal_121[1] = 0;
							}
							else if (MISC::GET_GAME_TIMER() - iLocal_474 > 5000)
							{
								func_30(0f, 0f, 0f, false);
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(veLocal_52))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(veLocal_52, 2, false, false);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(veLocal_52, 3, false, false);
					func_30(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, 2f, 0f), false);
				}
			}
			break;
	
		case 3:
			if (iLocal_46 != 8)
				func_68(8);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_54) && !OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
			{
				if (ENTITY::GET_ENTITY_SPEED(obLocal_54) == 0f && MISC::GET_GAME_TIMER() - iLocal_474 > 1000)
				{
					func_30(ENTITY::GET_ENTITY_COORDS(obLocal_54, true), true);
					OBJECT::DELETE_OBJECT(&obLocal_54);
				}
				else if (MISC::GET_GAME_TIMER() - iLocal_474 > 5000)
				{
					func_30(0f, 0f, 0f, false);
				}
			}
			break;
	}

	return;
}

Vector3 func_35(float fParam0, var uParam1, var uParam2) // Position - 0x22B4
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

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

BOOL func_36() // Position - 0x22F3
{
	BOOL flag;

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_55) && ENTITY::IS_ENTITY_ATTACHED(obLocal_55))
	{
		if (!bLocal_464)
			if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(obLocal_55, true), 741814745, 0.25f, false) || OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(ENTITY::GET_ENTITY_COORDS(obLocal_55, true), 0.3f, WEAPON::GET_WEAPONTYPE_MODEL(741814745), false))
				bLocal_464 = true;
	
		flag = false;
		GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(obLocal_55, true), 0.1f, 255, 0, 0, 255);
	
		if (func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(obLocal_55, true), 1f, true) || FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(obLocal_55, true), 0.3f) && bLocal_464)
		{
			bLocal_115 = true;
			flag = true;
		}
	
		if (ENTITY::GET_ENTITY_HEALTH(obLocal_55) < iLocal_130 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(obLocal_55, PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_131 = iLocal_131 + (iLocal_130 - ENTITY::GET_ENTITY_HEALTH(obLocal_55));
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(obLocal_55);
		}
	
		if (MISC::GET_GAME_TIMER() - iLocal_465 > 200 && ENTITY::DOES_ENTITY_EXIST(veLocal_52))
		{
			if (MISC::IS_BULLET_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, 0f, 1.2195f - 0.27f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, fLocal_467, 1.2195f + 0.09f), 0.45f, true))
			{
				iLocal_465 = MISC::GET_GAME_TIMER();
				iLocal_466 = iLocal_466 + 1;
			}
		}
	
		if (iLocal_466 > 5)
			return true;
	
		if (iLocal_131 > 100 || flag)
			return true;
	
		iLocal_130 = ENTITY::GET_ENTITY_HEALTH(obLocal_55);
	}

	return false;
}

BOOL func_37(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10) // Position - 0x245C
{
	BOOL num;

	num = 0;

	if (!_IS_NULL_VECTOR(fParam0 + fParam3))
		if (FIRE::IS_EXPLOSION_IN_AREA(5, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(2, fParam3, fParam0) && !bParam10 || FIRE::IS_EXPLOSION_IN_AREA(20, fParam3, fParam0) && !bParam10 || FIRE::IS_EXPLOSION_IN_AREA(4, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(28, fParam3, fParam0) && !bParam10 || FIRE::IS_EXPLOSION_IN_AREA(32, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(25, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(9, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(3, fParam3, fParam0) && !bParam10 || FIRE::IS_EXPLOSION_IN_AREA(6, fParam3, fParam0) && !bParam10 || FIRE::IS_EXPLOSION_IN_AREA(0, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(1, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(23, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(34, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(14, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(30, fParam3, fParam0) && !bParam10 || FIRE::IS_EXPLOSION_IN_AREA(12, fParam3, fParam0) && !bParam10 || FIRE::IS_EXPLOSION_IN_AREA(7, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(21, fParam3, fParam0) && !bParam10 || FIRE::IS_EXPLOSION_IN_AREA(18, fParam3, fParam0) && !bParam10 || FIRE::IS_EXPLOSION_IN_AREA(15, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(10, fParam3, fParam0) || FIRE::IS_EXPLOSION_IN_AREA(27, fParam3, fParam0))
			num = 1;
	else if (FIRE::IS_EXPLOSION_IN_SPHERE(5, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(2, fParam6, iParam9) && !bParam10 || FIRE::IS_EXPLOSION_IN_SPHERE(20, fParam6, iParam9) && !bParam10 || FIRE::IS_EXPLOSION_IN_SPHERE(4, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(28, fParam6, iParam9) && !bParam10 || FIRE::IS_EXPLOSION_IN_SPHERE(32, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(25, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(9, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(3, fParam6, iParam9) && !bParam10 || FIRE::IS_EXPLOSION_IN_SPHERE(6, fParam6, iParam9) && !bParam10 || FIRE::IS_EXPLOSION_IN_SPHERE(0, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(1, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(23, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(34, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(14, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(30, fParam6, iParam9) && !bParam10 || FIRE::IS_EXPLOSION_IN_SPHERE(12, fParam6, iParam9) && !bParam10 || FIRE::IS_EXPLOSION_IN_SPHERE(7, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(21, fParam6, iParam9) && !bParam10 || FIRE::IS_EXPLOSION_IN_SPHERE(18, fParam6, iParam9) && !bParam10 || FIRE::IS_EXPLOSION_IN_SPHERE(15, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(10, fParam6, iParam9) || FIRE::IS_EXPLOSION_IN_SPHERE(27, fParam6, iParam9))
		num = 1;

	return num;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x2867
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_39() // Position - 0x2891
{
	int i;
	BOOL flag;
	var unk;

	if (!HUD::DOES_BLIP_EXIST(blLocal_61))
	{
		if (!bLocal_108)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !bLocal_119)
			{
				if (!bLocal_107)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_58[1]))
						uLocal_58[1] = func_42(iLocal_49[1], false, 145);
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_58[1]))
						HUD::REMOVE_BLIP(&uLocal_58[1]);
				
					if (!HUD::DOES_BLIP_EXIST(blLocal_57))
						blLocal_57 = func_40(veLocal_52, false, false);
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_58[1]))
					HUD::REMOVE_BLIP(&uLocal_58[1]);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_57))
					HUD::REMOVE_BLIP(&blLocal_57);
			}
		}
		else
		{
			unk = 2;
		
			if (HUD::DOES_BLIP_EXIST(uLocal_58[0]) && HUD::GET_BLIP_HUD_COLOUR(uLocal_58[0]) != 119)
				HUD::REMOVE_BLIP(&uLocal_58[0]);
		
			if (HUD::DOES_BLIP_EXIST(uLocal_58[1]) && HUD::GET_BLIP_HUD_COLOUR(uLocal_58[1]) != 119)
				HUD::REMOVE_BLIP(&uLocal_58[1]);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_57) && HUD::GET_BLIP_HUD_COLOUR(blLocal_57) != 119)
				HUD::REMOVE_BLIP(&blLocal_57);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
			{
				for (i = 0; i < iLocal_49; i = i + 1)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[i]))
						if (PED::IS_PED_IN_VEHICLE(iLocal_49[i], veLocal_52, false))
							flag = true;
				}
			}
		
			if (flag)
				if (!HUD::DOES_BLIP_EXIST(blLocal_57))
					blLocal_57 = func_40(veLocal_52, true, false);
			else if (HUD::DOES_BLIP_EXIST(blLocal_57))
				HUD::REMOVE_BLIP(&blLocal_57);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && HUD::DOES_BLIP_EXIST(blLocal_57) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_52, false))
					if (HUD::GET_BLIP_ALPHA(blLocal_57) != 0)
						HUD::SET_BLIP_ALPHA(blLocal_57, 0);
				else if (HUD::GET_BLIP_ALPHA(blLocal_57) != 255)
					HUD::SET_BLIP_ALPHA(blLocal_57, 255);
		
			for (i = 0; i < iLocal_49; i = i + 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[i]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!OBJECT::DOES_PICKUP_EXIST(pkLocal_135) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[i], false))
						if (!PED::IS_PED_FLEEING(iLocal_49[i]) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_49[i], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 30f)
							unk[i] = 1;
				
					if (iLocal_46 == 8 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[i], false))
						unk[i] = 1;
				
					if (iLocal_46 == 5)
						unk[i] = 0;
				}
			
				if (unk[i])
					if (!HUD::DOES_BLIP_EXIST(uLocal_58[i]))
						uLocal_58[i] = func_42(iLocal_49[i], true, 145);
				else if (HUD::DOES_BLIP_EXIST(uLocal_58[i]))
					HUD::REMOVE_BLIP(&uLocal_58[i]);
			}
		
			if (OBJECT::DOES_PICKUP_EXIST(pkLocal_135) && !bLocal_119)
				if (!HUD::DOES_BLIP_EXIST(blLocal_62))
					blLocal_62 = func_32(pkLocal_135);
			else if (HUD::DOES_BLIP_EXIST(blLocal_62))
				HUD::REMOVE_BLIP(&blLocal_62);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(veLocal_52) && ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(veLocal_52) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_52, 100f, 100f, 30f, false, true, 0) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[0]) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0], 100f, 100f, 30f, false, true, 0) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[1]) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 100f, 100f, 30f, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_52, 50f, 50f, 20f, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0], 50f, 50f, 20f, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 50f, 50f, 20f, false, true, 0))
			HUD::REMOVE_BLIP(&blLocal_61);
	}

	if (HUD::DOES_BLIP_EXIST(uLocal_58[0]))
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_58[0], bLocal_120);

	if (HUD::DOES_BLIP_EXIST(uLocal_58[1]))
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_58[1], bLocal_120);

	if (HUD::DOES_BLIP_EXIST(blLocal_57))
		HUD::SHOW_HEIGHT_ON_BLIP(blLocal_57, bLocal_120);

	if (HUD::DOES_BLIP_EXIST(blLocal_62))
		HUD::SHOW_HEIGHT_ON_BLIP(blLocal_62, bLocal_120);

	if (!bLocal_120)
		if (bLocal_108 || iLocal_47 == 3)
			bLocal_120 = false;

	return;
}

Blip func_40(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2D31
{
	return func_41(veParam0, !bParam1, bParam2);
}

Blip func_41(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2D44
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

Blip func_42(Entity eParam0, BOOL bParam1, int iParam2) // Position - 0x2DE8
{
	Blip blip;

	blip = func_41(eParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2169[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2169[iParam2 /*29*/].f_3));

	return blip;
}

void func_43() // Position - 0x2E32
{
	func_45(9, iLocal_45);

	while (!func_44())
	{
		SYSTEM::WAIT(0);
	}

	func_231();
	return;
}

BOOL func_44() // Position - 0x2E56
{
	return true;
}

void func_45(int iParam0, int iParam1) // Position - 0x2E5F
{
	if (iParam0 == -1)
		iParam0 = func_65();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_64(iParam0))
	{
		func_63(iParam0, iParam1);
	
		if (!func_62(51))
		{
			func_58("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_61(), 0, 138, 0);
			func_57(51);
		}
	
		if (func_56(iParam0))
			Global_113969.f_24998.f_2 = 3;
	
		if (func_55(iParam0, iParam1) != 322)
			func_47(func_55(iParam0, iParam1), uLocal_41, uLocal_41.f_1);
	
		Global_113957 = iParam1;
	
		if (Global_113955 == 0)
			if (Global_113958 == 1 || Global_113958 == 5 || Global_113958 == 11 || Global_113958 == 25)
				func_46(2);
			else if (Global_113958 == 26 || Global_113958 == 8 || Global_113958 == 17)
				func_46(7);
			else
				func_46(1);
	}

	return;
}

void func_46(int iParam0) // Position - 0x2F63
{
	Global_113955 = iParam0;
	return;
}

void func_47(int iParam0, var uParam1, var uParam2) // Position - 0x2F71
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

	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(-2044299740, 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(86701099, 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(-375571184, 50, 0);
	}

	if (flag)
		func_48();

	return;
}

void func_48() // Position - 0x3057
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
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_113969.f_10197[num /*12*/].f_5 == 1)
		{
			switch (Global_113969.f_10197[num /*12*/].f_6)
			{
				case 1:
					Global_113705 = Global_113705 + 1;
					num2 = num2 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113706 = Global_113706 + 1;
					num3 = num3 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113707 = Global_113707 + 1;
					num4 = num4 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113708 = Global_113708 + 1;
					num5 = num5 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113709 = Global_113709 + 1;
					num6 = num6 + (Global_113969.f_10197[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113710 = Global_113710 + 1;
					num7 = num7 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113711 = Global_113711 + 1;
					num8 = num8 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113688 > 0)
		if (Global_113705 == Global_113688)
			num2 = 55f;

	if (Global_113689 > 0)
		if (Global_113706 == Global_113689)
			num3 = 10f;

	if (Global_113690 > 0)
		if (Global_113707 == Global_113690)
			num4 = 0f;

	if (Global_113691 > 0)
		if (Global_113708 == Global_113691)
			num5 = 10f;

	if (Global_113692 > 0)
	{
		if (Global_113709 == Global_113692 || (Global_113692 * 10) / Global_113709 < 41 || Global_113709 > Global_113695 || Global_113709 == Global_113695)
		{
			if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(-2122623864, Global_113692, 0);
					MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113693 > 0)
		if (Global_113710 == Global_113693)
			num7 = 15f;

	if (Global_113694 > 0)
		if (Global_113711 == Global_113694)
			num8 = 5f;

	Global_113969.f_10197.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
		value2 = Global_113695;
	else
		value2 = Global_113709;

	STATS::STAT_SET_INT(-1055525200, Global_113705, true);
	STATS::STAT_SET_INT(-419750212, Global_113688, true);
	STATS::STAT_SET_INT(1331385274, Global_113706, true);
	STATS::STAT_SET_INT(542355616, Global_113689, true);
	STATS::STAT_SET_INT(1561233577, Global_113707, true);
	STATS::STAT_SET_INT(558499468, Global_113690, true);
	STATS::STAT_SET_INT(-852659719, Global_113708, true);
	STATS::STAT_SET_INT(-20401960, Global_113691, true);
	STATS::STAT_SET_INT(-2122623864, value2, true);
	STATS::STAT_SET_INT(-215705366, Global_113695, true);
	STATS::STAT_SET_INT(-131898641, Global_113711 + Global_113710, true);
	STATS::STAT_SET_INT(-2086369560, Global_113694 + Global_113693, true);
	Global_113712 = (Global_113705 * 100) / Global_113688;
	Global_113714 = ((Global_113707 + Global_113706) * 100) / (Global_113690 + Global_113689);
	Global_113713 = ((Global_113708 + value2) * 100) / (Global_113691 + Global_113695);
	Global_113715 = ((Global_113710 + Global_113711) * 100) / (Global_113693 + Global_113694);
	STATS::STAT_SET_FLOAT(1215094015, Global_113969.f_10197.f_3853, true);
	STATS::STAT_SET_INT(1813094653, Global_113712, true);
	STATS::STAT_SET_INT(-1205712980, Global_113713, true);
	STATS::STAT_SET_INT(480408826, Global_113714, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113969.f_10197.f_3853))
		func_52(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_51() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113703 = 0;
			
				if (!Global_64166)
					func_49();
			}
		}
	}

	return;
}

int func_49() // Position - 0x3515
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_101572.f_8)
		if (Global_101572.f_10 > 0)
			return 0;
	else if (Global_101572.f_10 > 1)
		return 0;

	Global_101572.f_10 = Global_101572.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x3560
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

int func_51() // Position - 0x3588
{
	return Global_32948;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0x3593
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x35E4
{
	if (iParam2 == -1)
		iParam2 = func_54();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_54() // Position - 0x3602
{
	return Global_1574926;
}

int func_55(int iParam0, int iParam1) // Position - 0x360E
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

BOOL func_56(int iParam0) // Position - 0x3982
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

void func_57(int iParam0) // Position - 0x39B1
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_113969.f_20413.f_150[i], offset);

	return;
}

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x39F3
{
	func_59(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_59(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x3A15
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

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_113969.f_20413[i /*16*/], sParam0))
			return;
	}

	if (Global_113969.f_20413.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = iParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
	
		Global_113969.f_20413.f_145 = Global_113969.f_20413.f_145 + 1;
		func_60();
	}

	return;
}

void func_60() // Position - 0x3BE9
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113969.f_20413.f_146[i] = 0;
	}

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 0))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[0])
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 1))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[1])
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 2))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[2])
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[i /*16*/].f_12;
	}

	return;
}

int func_61() // Position - 0x3D00
{
	func_17();

	switch (Global_113969.f_2366.f_539.f_4321)
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

BOOL func_62(int iParam0) // Position - 0x3D46
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113969.f_20413.f_150[i], num);

	return false;
}

void func_63(int iParam0, int iParam1) // Position - 0x3D86
{
	MISC::SET_BIT(&Global_113969.f_24998.f_8[iParam0], iParam1);
	return;
}

int func_64(int iParam0) // Position - 0x3DA1
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

int func_65() // Position - 0x3E52
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_66(unk);
	return num;
}

int func_66(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x3E6F
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case -60745600:
			return 23;
	
		case 1149455824:
			return 0;
	
		case 1889800404:
			return 15;
	
		case 737712801:
			return 1;
	
		case 976199832:
			return 26;
	
		case 1531173018:
			return 29;
	
		case 1154171352:
			return 24;
	
		case -1325807529:
			return 2;
	
		case -2118978003:
			return 17;
	
		case -1363545320:
			return 11;
	
		case -129069433:
			return 16;
	
		case 1158398451:
			return 18;
	
		case -1669765523:
			return 12;
	
		case -1538568960:
			return 3;
	
		case -396020015:
			return 27;
	
		case 786118124:
			return 20;
	
		case -770891250:
			return 19;
	
		case 190582896:
			return 4;
	
		case -911763748:
			return 13;
	
		case -881321240:
			return 28;
	
		case 1337652317:
			return 7;
	
		case 1492712482:
			return 25;
	
		case -1612307213:
			return 10;
	
		case -201963189:
			return 22;
	
		case -1176354303:
			return 21;
	
		case 1735157309:
			return 9;
	
		case -1631807569:
			return 5;
	
		case 847041036:
			return 6;
	
		case -167923910:
			return 14;
	
		case 59976311:
			return 30;
	
		case 996703443:
			return 31;
	
		case -2088549946:
			return 32;
	
		case -1148693293:
			return 33;
	}

	return -1;
}

BOOL func_67() // Position - 0x404A
{
	if (bLocal_109)
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(pkLocal_135))
			return true;

	return false;
}

void func_68(int iParam0) // Position - 0x4065
{
	iLocal_46 = iParam0;
	iLocal_48 = 0;
	return;
}

BOOL func_69() // Position - 0x4074
{
	if (!OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
	{
		if (bLocal_107)
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
				if (!func_70(veLocal_52))
					if (iLocal_463 == -1)
						iLocal_463 = MISC::GET_GAME_TIMER();
				else if (iLocal_463 != -1)
					iLocal_463 = -1;
	
		if (!bLocal_107)
			if (iLocal_128 != -1)
				if (!PED::IS_PED_INJURED(iLocal_49[iLocal_128]))
					if (!func_70(veLocal_52))
						if (iLocal_463 == -1)
							iLocal_463 = MISC::GET_GAME_TIMER();
					else if (iLocal_463 != -1)
						iLocal_463 = -1;
	
		if (iLocal_463 != -1)
		{
			if (MISC::GET_GAME_TIMER() - iLocal_463 > 3000)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_49[0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_49[1]);
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(veLocal_52, -1000f, true);
				ENTITY::SET_ENTITY_COLLISION(veLocal_52, true, false);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_52);
				return true;
			}
		}
	}
	else
	{
		if (iLocal_463 != -1)
			iLocal_463 = -1;
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST(OBJECT::GET_PICKUP_COORDS(pkLocal_135), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 300f)
			return true;
	}

	return false;
}

BOOL func_70(Vehicle veParam0) // Position - 0x417E
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veParam0, true)) < 150f)
			return true;
		else if (!ENTITY::IS_ENTITY_OCCLUDED(veParam0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veParam0, true)) < 300f)
			return true;

	return false;
}

void func_71() // Position - 0x41EF
{
	int i;
	int num;

	if (iLocal_505 == -1)
		iLocal_505 = MISC::GET_GAME_TIMER();

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_48)
		{
			case 0:
				bLocal_108 = true;
			
				if (!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]))
					if (func_27() < 30f && !PED::IS_PED_INJURED(uLocal_138[3 /*10*/]))
						_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_SHT1", 8, 0, 0, 0);
			
				for (i = 0; i < iLocal_49; i = i + 1)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[i]) && ENTITY::DOES_ENTITY_EXIST(obLocal_54))
					{
						if (i != iLocal_128 || bLocal_107 || !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_54, iLocal_49[i]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_49[i]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_56);
						
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[i], false))
							{
								if (bLocal_115)
								{
									if (STREAMING::HAS_CLIP_SET_LOADED("move_injured_generic"))
									{
										PED::SET_PED_MOVEMENT_CLIPSET(iLocal_49[i], "move_injured_generic", 1048576000);
										uLocal_116[i] = 1;
									}
								}
							
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
							}
						
							TASK::TASK_CLEAR_LOOK_AT(0);
						
							if (uLocal_116[i])
								TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000));
						
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_56);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[i], iLocal_56);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_56);
						}
					
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_0x66BB9FCC, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_CanUseCover, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_CanUseVehicles, false);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_49[i], CM_Defensive);
						PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_49[i], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[i], true);
					}
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_54) && ENTITY::IS_ENTITY_ATTACHED(obLocal_54) && !PED::IS_PED_INJURED(iLocal_49[iLocal_128]))
					TASK::CLEAR_PED_TASKS(iLocal_49[iLocal_128]);
			
				SYSTEM::SETTIMERA(0);
				iLocal_48 = iLocal_48 + 1;
				break;
		
			case 1:
				if (func_76(iLocal_128))
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iLocal_128]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[iLocal_128]);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_56);
					
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iLocal_128], false))
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
					
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_56);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iLocal_128], iLocal_56);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_56);
					}
				
					iLocal_48 = iLocal_48 + 1;
				}
				break;
		
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]))
				{
					if (PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]))
					{
						if (uLocal_138[3 /*10*/] != iLocal_49[1])
						{
							func_75(&uLocal_138, 3);
							func_75(&uLocal_138, 4);
							_CONVERSATION_INITIALIZE_ACTOR(&uLocal_138, 3, iLocal_49[1], "SECVANGUY1", 0, 1);
						}
					}
				
					for (i = 0; i < iLocal_49; i = i + 1)
					{
						if (!PED::IS_PED_INJURED(iLocal_49[i]))
						{
							if (iLocal_47 == 2 && !uLocal_121[i] && !ENTITY::IS_ENTITY_DEAD(veLocal_52, false))
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_49[i], veLocal_52, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, -4f, 0f), 5f, false);
								uLocal_121[i] = 1;
							}
						
							if (OBJECT::DOES_PICKUP_EXIST(pkLocal_135) && !uLocal_121[i] && iLocal_47 == 3 && !bLocal_119)
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_49[i], veLocal_52, OBJECT::GET_PICKUP_COORDS(pkLocal_135), 5f, false);
								uLocal_121[i] = 1;
							}
						
							if (bLocal_119)
							{
								if (uLocal_121[i])
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_49[i], false);
									uLocal_121[i] = 0;
								}
							}
						}
					}
				
					if ((float)MISC::GET_GAME_TIMER() - iLocal_498 > MISC::GET_RANDOM_FLOAT_IN_RANGE(10000f, 15000f))
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && func_27() < 30f)
							if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
								if (_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_SHT2", 8, 0, 0, 0))
									iLocal_498 = MISC::GET_GAME_TIMER();
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
					{
						if (!bLocal_107)
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_52, false) && MISC::GET_GAME_TIMER() - iLocal_505 > 5000)
							{
								if (func_27() > 30f + (30f / 10f))
									func_68(7);
							
								if (func_27() > 30f / 2f && !func_72())
									if (!bLocal_107)
										func_68(7);
									else
										func_68(6);
							
								if (iLocal_46 != 8)
								{
									uLocal_121[0] = 0;
									uLocal_121[1] = 0;
									iLocal_505 = -1;
								}
							}
						}
					}
				}
				break;
		}
	
		for (i = 0; i < iLocal_49; i = i + 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[i]))
			{
				if (i == 0)
					num = 7000;
				else
					num = 9000;
			
				if (SYSTEM::TIMERA() > num && uLocal_116[i])
				{
					PED::RESET_PED_MOVEMENT_CLIPSET(iLocal_49[i], 1048576000);
					uLocal_116[i] = 0;
				}
			}
		}
	}

	return;
}

BOOL func_72() // Position - 0x46BF
{
	int i;

	if (MISC::GET_GAME_TIMER() - uLocal_482 > 250)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			for (i = 0; i < iLocal_49; i = i + 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[i]))
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_49[i], PLAYER::PLAYER_PED_ID(), 19) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_49[i], PLAYER::PLAYER_PED_ID()))
						uLocal_479[i] = 1;
					else
						uLocal_479[i] = 0;
			}
		}
	}

	return uLocal_479[0] || uLocal_479[1];
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x474C
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x476E
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

void func_75(var uParam0, int iParam1) // Position - 0x4809
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

BOOL func_76(int iParam0) // Position - 0x4826
{
	BOOL flag;

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[iParam0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_54, iLocal_49[iParam0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_49[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						ENTITY::DETACH_ENTITY(obLocal_54, true, true);
						OBJECT::DELETE_OBJECT(&obLocal_54);
					}
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[iParam0], true);
					TASK::TASK_PLAY_ANIM(iLocal_49[iParam0], "weapons@holster_1h", "holster", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				}
			}
		}
	}

	flag = !ENTITY::DOES_ENTITY_EXIST(obLocal_54) || ENTITY::DOES_ENTITY_EXIST(obLocal_54) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_54, iLocal_49[iParam0]);

	if (flag)
		if (!PED::IS_PED_INJURED(iLocal_49[iParam0]))
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[iParam0], false);

	return flag;
}

void func_77(int iParam0, BOOL bParam1) // Position - 0x490A
{
	float dx;
	float heading;
	float heading2;
	var unk3;
	int i;
	BOOL flag;
	int taskSequenceId;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		dx = { func_35(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_52, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true))) };
		heading = ENTITY::GET_ENTITY_HEADING(veLocal_52) + MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1) + 45f;
		heading2 = (ENTITY::GET_ENTITY_HEADING(veLocal_52) + MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1)) - 45f;
		unk3 = 2;
		unk3[0 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_52, true), heading, 0f, 4.5f, 0f) };
		unk3[1 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_52, true), heading2, 0f, 4.5f, 0f) };
		func_78(&heading);
		func_78(&heading2);
	
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_499) > 2f)
			flag = true;
	
		for (i = 0; i < iLocal_49; i = i + 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[i]))
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_49[i], true), unk3[i /*3*/]) > 2f)
					flag = true;
		}
	
		if (flag)
		{
			for (i = 0; i < iLocal_49; i = i + 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[i]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_49[i], true), unk3[i /*3*/]) > 2f && MISC::GET_GAME_TIMER() - uLocal_502[i] > 1000 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[i], false) && !uLocal_479[i] && iParam0 == -1 || iParam0 == i)
				{
					if (bParam1)
					{
						if (func_72())
							uLocal_499 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
					
						if (func_72() || _IS_NULL_VECTOR(uLocal_499))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, unk3[i /*3*/], PLAYER::PLAYER_PED_ID(), 2f, false, 1056964608, 1082130432, true, 0, false, -957453492, 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, true);
						}
						else
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, unk3[i /*3*/], uLocal_499, 2f, false, 1056964608, 1082130432, true, 0, false, -957453492);
							TASK::TASK_AIM_GUN_AT_COORD(0, uLocal_499, -1, true, false);
						}
					
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_49[i], taskSequenceId);
						TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
					}
				
					uLocal_502[i] = MISC::GET_GAME_TIMER();
				}
			}
		}
	}

	return;
}

void func_78(var uParam0) // Position - 0x4B6F
{
	if (*uParam0 > 180f)
		*uParam0 = *uParam0 - 360f;
	else if (*uParam0 < -180f)
		*uParam0 = *uParam0 + 360f;

	return;
}

void func_79(Ped pedParam0) // Position - 0x4BAA
{
	float entityHeading;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
	{
		switch (iLocal_48)
		{
			case 0:
				if (!bLocal_107)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
					TASK::CLEAR_PED_TASKS(pedParam0);
					uLocal_483 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_52, 0) };
					uLocal_486 = { ENTITY::GET_ENTITY_ROTATION(veLocal_52, 2) };
					uLocal_489 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_panic", uLocal_483, uLocal_486, 0, 2) };
				
					if (!PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false) && !PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
					{
						if (func_27() < 20f)
							if (bLocal_108)
								_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_REC", 8, 0, 0, 0);
					
						if (OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
						{
							if (bLocal_108)
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedParam0, OBJECT::GET_PICKUP_COORDS(pkLocal_135), 2f, -1, 1048576000, 0, 1193033728);
							else
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedParam0, OBJECT::GET_PICKUP_COORDS(pkLocal_135), 1f, -1, 1048576000, 0, 1193033728);
						
							iLocal_48 = iLocal_48 + 1;
						}
						else
						{
							func_85(pedParam0);
							iLocal_48 = 2;
						}
					}
					else if (!PED::IS_PED_INJURED(pedParam0))
					{
						if (OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedParam0, OBJECT::GET_PICKUP_COORDS(pkLocal_135), 2f, -1, 1048576000, 0, 1193033728);
							iLocal_48 = iLocal_48 + 1;
						}
						else
						{
							func_85(pedParam0);
							iLocal_48 = 2;
						}
					}
				}
				else
				{
					iLocal_48 = 4;
				}
				break;
		
			case 1:
				if (!PED::IS_PED_INJURED(pedParam0) && OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, true), OBJECT::GET_PICKUP_COORDS(pkLocal_135), true) < 2f && !PED::IS_PED_RAGDOLL(pedParam0) && MISC::GET_GAME_TIMER() - iLocal_134 > 3000)
					{
						if (WEAPON::IS_PED_ARMED(pedParam0, 4))
							WEAPON::SET_CURRENT_PED_WEAPON(pedParam0, -1569615261, true);
					
						OBJECT::REMOVE_PICKUP(pkLocal_135);
						func_85(pedParam0);
						WEAPON::SET_CURRENT_PED_WEAPON(pedParam0, -1569615261, true);
						bLocal_109 = false;
						iLocal_128 = iLocal_127;
						iLocal_48 = iLocal_48 + 1;
					}
				}
				break;
		
			case 2:
				if (!PED::IS_PED_INJURED(pedParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) != 1)
					{
						if (bLocal_108)
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedParam0, uLocal_489, 2f, -1, 0.1f, 512, uLocal_486.f_2);
						else
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedParam0, uLocal_489, 1f, -1, 0.1f, 512, uLocal_486.f_2);
					
						iLocal_48 = iLocal_48 + 1;
					}
				}
				break;
		
			case 3:
				if (!PED::IS_PED_INJURED(pedParam0))
				{
					if (OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
					{
						iLocal_48 = 0;
					}
					else
					{
						entityHeading = ENTITY::GET_ENTITY_HEADING(pedParam0);
					
						if (entityHeading > 180f)
							entityHeading = entityHeading - 360f;
					
						if (entityHeading <= -180f)
							entityHeading = entityHeading + 360f;
					
						if (uLocal_486.f_2 > 180f)
							uLocal_486.f_2 = uLocal_486.f_2 - 360f;
					
						if (uLocal_486.f_2 <= -180f)
							uLocal_486.f_2 = uLocal_486.f_2 + 360f;
					
						if (SYSTEM::VDIST(uLocal_489, ENTITY::GET_ENTITY_COORDS(pedParam0, true)) < 0.3f)
						{
							if (MISC::ABSF(entityHeading - uLocal_486.f_2) < 15f)
							{
								PED::CLEAR_PED_ALTERNATE_WALK_ANIM(pedParam0, -1056964608);
								TASK::CLEAR_PED_TASKS(pedParam0);
								bLocal_494 = true;
								iLocal_492 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_483, uLocal_486, 2);
							
								if (bLocal_108)
								{
									TASK::TASK_SYNCHRONIZED_SCENE(pedParam0, iLocal_492, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(veLocal_52, iLocal_492, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									TASK::TASK_SYNCHRONIZED_SCENE(pedParam0, iLocal_492, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(veLocal_52, iLocal_492, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
							
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedParam0, false, false);
								iLocal_48 = iLocal_48 + 1;
							}
						}
						else if (ENTITY::IS_ENTITY_OCCLUDED(pedParam0) && !CAM::IS_SPHERE_VISIBLE(uLocal_483, 2f))
						{
							ENTITY::SET_ENTITY_COORDS(pedParam0, uLocal_483, true, false, false, true);
						}
					}
				}
				break;
		
			case 4:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492))
				{
					if (bLocal_108)
						fLocal_506 = 0.42f;
					else
						fLocal_506 = 0.3893f;
				
					if (bLocal_108)
						fLocal_507 = 0.52f;
					else
						fLocal_507 = 0.546243f;
				
					if (!bLocal_107)
					{
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_54) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_54, pedParam0) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > fLocal_506)
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_54, veLocal_52))
							{
								ENTITY::DETACH_ENTITY(obLocal_54, true, true);
								ENTITY::SET_ENTITY_COLLISION(obLocal_54, false, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_54, veLocal_52, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_52, ENTITY::GET_ENTITY_COORDS(obLocal_54, true)), 90f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						
							bLocal_107 = true;
						}
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > fLocal_507)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(veLocal_52, -4f, true);
						TASK::CLEAR_PED_TASKS(pedParam0);
					
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
						{
							bLocal_104 = false;
							VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_52, 2, true);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_52, 3, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, false);
							iLocal_48 = iLocal_48 + 1;
						}
					}
				}
				break;
		
			case 5:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > fLocal_507 || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492))
				{
					if (!bLocal_108)
						if (!PED::IS_PED_INJURED(iLocal_49[0]))
							TASK::TASK_ENTER_VEHICLE(iLocal_49[0], veLocal_52, -1, -1, 1f, 1, 0, 0);
				
					iLocal_48 = iLocal_48 + 1;
				}
				break;
		
			case 6:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
					if (bLocal_108)
						func_68(6);
					else
						func_68(4);
				else
					func_68(8);
				break;
		}
	}

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
		if (!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]))
			func_68(8);

	if (!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (!bLocal_107)
			if (func_27() < 10f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && func_72() || func_27() < 20f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || func_27() < 5f && bLocal_108 || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_80(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && func_80(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				func_68(8);

	if (iLocal_46 != 7)
	{
		if (bLocal_107)
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492))
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(veLocal_52, -8f, true);
	
		if (!PED::IS_PED_INJURED(pedParam0))
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, false);
	}

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && iLocal_46 != 7 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492))
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(veLocal_52, -8f, true);

	return;
}

BOOL func_80(Vehicle veParam0) // Position - 0x5292
{
	BOOL num;
	float minimum;
	float maximum;
	var unk5;
	var unk18;
	var unk31;
	var unk44;
	var unk57;
	float offsetY;
	float offsetX;

	num = 0;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && ENTITY::DOES_ENTITY_EXIST(veLocal_52))
	{
		unk5 = 4;
		unk18 = 4;
		unk31 = 4;
		unk44 = 4;
		unk57 = 4;
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veParam0), &minimum, &maximum);
		unk5[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, minimum, maximum.f_1, 0f) };
		unk5[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, maximum, maximum.f_1, 0f) };
		unk5[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, maximum, minimum.f_1, 0f) };
		unk5[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, minimum, minimum.f_1, 0f) };
		offsetY = -3.7f;
		offsetX = 1.35f;
		unk18[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, -offsetX - 0.25f, offsetY, 0f) };
		unk18[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, offsetX + 0.25f, offsetY, 0f) };
		unk18[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, offsetX - 0.25f, offsetY - 1.55f, 0f) };
		unk18[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, -offsetX + 0.25f, offsetY - 1.55f, 0f) };
		unk31[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, -offsetX, 0.5f, 0f) };
		unk31[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, -offsetX - 0.75f, 0.5f, 0f) };
		unk31[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, -offsetX - 0.75f, 1.5f, 0f) };
		unk31[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, -offsetX, 1.5f, 0f) };
		unk44[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, offsetX, 0.5f, 0f) };
		unk44[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, offsetX + 0.75f, 0.5f, 0f) };
		unk44[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, offsetX + 0.75f, 1.5f, 0f) };
		unk44[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, offsetX, 1.5f, 0f) };
	
		if (!bLocal_107)
			if (func_81(&unk18, &unk5, &unk57))
				num = 1;
	
		if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_IN_VEHICLE(iLocal_49[0], veLocal_52, true))
			if (func_81(&unk31, &unk5, &unk57))
				num = 1;
	
		if (!PED::IS_PED_INJURED(iLocal_49[1]) && !PED::IS_PED_IN_VEHICLE(iLocal_49[1], veLocal_52, true))
			if (func_81(&unk44, &unk5, &unk57))
				num = 1;
	}

	return num;
}

BOOL func_81(var uParam0, var uParam1, var uParam2) // Position - 0x54DE
{
	int i;
	int j;
	int num;
	int num2;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		num = i + 1;
	
		if (num == *uParam0)
			num = 0;
	
		for (j = 0; j < *uParam1; j = j + 1)
		{
			num2 = j + 1;
		
			if (num2 == *uParam1)
				num2 = 0;
		
			if (func_82(uParam0->[i /*3*/], uParam0->[num /*3*/], uParam1->[j /*3*/], uParam1->[num2 /*3*/], &uParam2->[i /*3*/]))
				return true;
		}
	}

	return false;
}

BOOL func_82(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8, float fParam9, var uParam10, var uParam11, var uParam12) // Position - 0x5562
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;
	float num13;

	num = fParam0;
	num2 = fParam3;
	num3 = fParam6;
	num4 = fParam9;
	num5 = fParam0.f_1;
	num6 = fParam3.f_1;
	num7 = fParam6.f_1;
	num8 = fParam9.f_1;
	num9 = ((num - num2) * (num7 - num8)) - ((num5 - num6) * (num3 - num4));

	if (num9 == 0f)
		return false;

	num10 = (num * num6) - (num5 * num2);
	num11 = (num3 * num8) - (num7 * num4);
	num12 = ((num10 * (num3 - num4)) - ((num - num2) * num11)) / num9;
	num13 = ((num10 * (num7 - num8)) - ((num5 - num6) * num11)) / num9;

	if (num12 < func_84(num, num2) || num12 > func_83(num, num2) || num12 < func_84(num3, num4) || num12 > func_83(num3, num4))
		return false;

	if (num13 < func_84(num5, num6) || num13 > func_83(num5, num6) || num13 < func_84(num7, num8) || num13 > func_83(num7, num8))
		return false;

	*uParam12 = num12;
	uParam12->f_1 = num13;
	uParam12->f_2 = fParam0.f_2;
	return true;
}

float func_83(float fParam0, float fParam1) // Position - 0x569A
{
	if (fParam0 > fParam1)
		return fParam0;

	return fParam1;
}

float func_84(float fParam0, float fParam1) // Position - 0x56B4
{
	if (fParam0 < fParam1)
		return fParam0;

	return fParam1;
}

void func_85(Ped pedParam0) // Position - 0x56CE
{
	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(obLocal_54))
		{
			obLocal_54 = OBJECT::CREATE_OBJECT(hLocal_103, fLocal_75, true, true, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(obLocal_54, false);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
			ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_54, pedParam0, PED::GET_PED_BONE_INDEX(pedParam0, 28422), uLocal_88, uLocal_91, true, false, false, false, 2, true, 0);
	}

	return;
}

void func_86() // Position - 0x5729
{
	int i;
	int num;
	int taskSequenceId;

	switch (iLocal_48)
	{
		case 0:
			for (i = 0; i < iLocal_49; i = i + 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[i]))
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[i], true);
			}
		
			bLocal_108 = true;
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_89()))
					if (!PED::IS_PED_INJURED(func_89()))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_52, -1, false) != func_89() && VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_52, -1, false))
							TASK::TASK_ENTER_VEHICLE(func_89(), veLocal_52, 20000, -1, 2f, 1, 0, 0);
			
				if (!PED::IS_PED_INJURED(iLocal_49[1]) && func_89() != iLocal_49[1])
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_52, 0, false) != iLocal_49[1] && VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_52, 0, false))
						TASK::TASK_ENTER_VEHICLE(iLocal_49[1], veLocal_52, -1, 0, 1073741824, 1, 0, 0);
			
				iLocal_48 = iLocal_48 + 1;
			}
			else
			{
				func_68(8);
			}
			break;
	
		case 1:
			if (func_88())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_89()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(func_89(), veLocal_52, PLAYER::PLAYER_PED_ID(), 8, 50f, 786484, 100f, 5f, true);
					iLocal_48 = iLocal_48 + 1;
				}
			}
			break;
	
		case 2:
			if (func_87())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_89()))
				{
					TASK::TASK_VEHICLE_MISSION(func_89(), veLocal_52, 0, 5, 0f, 786484, 100f, 100f, true);
					iLocal_48 = iLocal_48 + 1;
				}
			}
			break;
	
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
				if (ENTITY::GET_ENTITY_SPEED(veLocal_52) < 2f)
					func_68(8);
			break;
	}

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_52) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_52, -1, false)) && ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_52, -1, false), false) || PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_52, -1, false)))
	{
		num = 0;
	
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_52, -1, false) == iLocal_49[0])
			num = 1;
	
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(veLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 100f)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[num]) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[num], SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[num], 2, true);
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, veLocal_52, false);
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, veLocal_52, PLAYER::PLAYER_PED_ID(), 8, 50f, 786484, 100f, 5f, true);
				TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_49[num], taskSequenceId);
				TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			}
		}
		else
		{
			func_68(8);
		}
	}

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) || OBJECT::DOES_PICKUP_EXIST(pkLocal_135) || iLocal_47 == 3 || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(veLocal_52, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(veLocal_52, 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(veLocal_52, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(veLocal_52, 1, 40000) || iLocal_48 > 1 && !func_88())
	{
		!func_88();
		func_68(8);
	}

	return;
}

BOOL func_87() // Position - 0x5A3F
{
	if (ENTITY::DOES_ENTITY_EXIST(veLocal_52))
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_52, false))
			if (ENTITY::GET_ENTITY_HEALTH(veLocal_52) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(veLocal_52) < 200f || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_52, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_52, 1, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_52, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_52, 5, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_52, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_52, 4, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_52, 1, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_52, 5, false))
				return true;

	return false;
}

BOOL func_88() // Position - 0x5AEB
{
	BOOL num;

	num = 1;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
			if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], veLocal_52, false))
				num = 0;
	
		if (!PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
			if (!PED::IS_PED_IN_VEHICLE(iLocal_49[1], veLocal_52, false))
				num = 0;
	}
	else
	{
		num = 0;
	}

	return num;
}

Ped func_89() // Position - 0x5B68
{
	if (!PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
		return iLocal_49[0];

	if (!PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
		return iLocal_49[1];

	return 0;
}

void func_90() // Position - 0x5BC1
{
	int i;
	int taskSequenceId;

	switch (iLocal_48)
	{
		case 0:
			if (!bLocal_107)
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_54) && ENTITY::IS_ENTITY_ATTACHED(obLocal_54))
					ENTITY::DETACH_ENTITY(obLocal_54, true, true);
		
			if (!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_27() < 20f)
					_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_FFLEE", 8, 0, 0, 0);
			
				for (i = 0; i < iLocal_49; i = i + 1)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[i]))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_AlwaysFlee, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[i], 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[i], 16, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_CanUseVehicles, false);
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
					
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[i], true))
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_49[i], 0, 256);
					
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_49[i], taskSequenceId);
						TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
					}
				}
			}
		
			bLocal_111 = true;
			iLocal_48 = iLocal_48 + 1;
			break;
	
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
				if (func_91(veLocal_52, 1, false, false, false, false, true, false, true))
					iLocal_48 = iLocal_48 + 1;
			break;
	}

	return;
}

BOOL func_91(Vehicle veParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x5D17
{
	int i;
	int num;
	Ped ped;
	Player playerIndexFromPed;

	num = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0) + 1;

	if (bParam4 || !ENTITY::IS_ENTITY_DEAD(veParam0, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			ped = func_93(veParam0, i - 1, bParam6, bParam7);
		
			if (ENTITY::DOES_ENTITY_EXIST(ped))
			{
				if (bParam3 && ped == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(ped))
					{
						playerIndexFromPed = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped);
					
						if (!PED::IS_PED_INJURED(ped) && playerIndexFromPed != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(playerIndexFromPed, true, true) || bParam8)
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped)) == 0)
								if (!bParam5)
									return false;
							else
								return false;
					}
				}
				else if (iParam1 == 0)
				{
					return false;
				}
				else if (!PED::IS_PED_INJURED(ped))
				{
					return false;
				}
			}
		}
	}

	return true;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x5DFB
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

Ped func_93(Vehicle veParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5E5B
{
	Ped pedInVehicleSeat;

	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, iParam1, bParam3))
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, iParam1, bParam3);

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !ENTITY::IS_ENTITY_DEAD(veParam0, false))
		{
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, iParam1);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat, false))
				if (TASK::GET_SCRIPT_TASK_STATUS(pedInVehicleSeat, SCRIPT_TASK_LEAVE_VEHICLE) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedInVehicleSeat, SCRIPT_TASK_LEAVE_ANY_VEHICLE) == 1)
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veParam0, false), ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, false)) < 10f)
						return pedInVehicleSeat;
		
			pedInVehicleSeat = -1;
		}
	}

	return pedInVehicleSeat;
}

void func_94() // Position - 0x5EF6
{
	if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]))
	{
		switch (iLocal_48)
		{
			case 0:
				if (_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(obLocal_54) && ENTITY::IS_ENTITY_ATTACHED(obLocal_54))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_54, iLocal_49[0]))
							func_95(0);
						else
							TASK::CLEAR_PED_TASKS(iLocal_49[0]);
					
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_54, iLocal_49[1]))
							func_95(1);
						else
							TASK::CLEAR_PED_TASKS(iLocal_49[1]);
					
						iLocal_48 = iLocal_48 + 1;
					}
					else
					{
						func_95(0);
						func_95(1);
						iLocal_48 = 2;
					}
				}
				break;
		
			case 1:
				if (func_76(iLocal_128))
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iLocal_128]))
						func_95(iLocal_128);
				
					iLocal_48 = iLocal_48 + 1;
				}
				break;
		
			case 2:
				if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_CAR2", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_48 = iLocal_48 + 1;
					}
				}
				break;
		
			case 3:
				if (SYSTEM::TIMERA() > 12000 && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && _CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_CAR3", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_48 = iLocal_48 + 1;
				}
				break;
		
			case 4:
				if (SYSTEM::TIMERA() > 7000 && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && _CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_CAR4", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					func_68(8);
				}
				break;
		}
	}

	if (iLocal_48 > 0)
		func_77(-1, true);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_53))
	{
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_53, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veLocal_53, true), ENTITY::GET_ENTITY_COORDS(veLocal_52, true)) > 10f)
				func_68(7);
	
		if (ENTITY::IS_ENTITY_DEAD(veLocal_53, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_53, false) || !ENTITY::IS_ENTITY_UPRIGHT(veLocal_53, 1119092736) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_53, true))
			if (!func_80(veLocal_53))
				func_68(7);
			else
				func_68(8);
	}

	if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), true))
			func_68(8);

	if (!PED::IS_PED_INJURED(iLocal_49[1]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), true))
			func_68(8);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (bLocal_114)
			func_68(8);

	if (bLocal_119)
		func_68(8);

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_72() && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		func_68(2);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
		func_68(5);

	return;
}

void func_95(int iParam0) // Position - 0x61EB
{
	if (!PED::IS_PED_INJURED(iLocal_49[iParam0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(iLocal_49[iParam0]);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_56);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iParam0], false))
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
	
		TASK::TASK_CLEAR_LOOK_AT(0);
		TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_56);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iParam0], iLocal_56);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_56);
	
		if (shLocal_129 == 0)
			shLocal_129 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(EVENT_SHOCKING_SEEN_WEAPON_THREAT, ENTITY::GET_ENTITY_COORDS(iLocal_49[iParam0], true), -1082130432);
	}

	return;
}

void func_96() // Position - 0x6288
{
	BOOL flag;
	int i;
	int j;

	switch (iLocal_48)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_49[0]))
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[0], true);
		
			if (!PED::IS_PED_INJURED(iLocal_49[1]))
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[1], true);
		
			if (func_103())
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_ATT1", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					func_68(8);
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_102() || func_101())
					_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_ENT1", 8, 0, 0, 0);
				else if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
					_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_WEP1", 8, 0, 0, 0);
				else
					_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_WARN", 8, 0, 0, 0);
			
				SYSTEM::SETTIMERA(0);
			
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_54) && ENTITY::IS_ENTITY_ATTACHED(obLocal_54))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_54, iLocal_49[0]))
						func_95(0);
					else
						TASK::CLEAR_PED_TASKS(iLocal_49[0]);
				
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_54, iLocal_49[1]))
						func_95(1);
					else
						TASK::CLEAR_PED_TASKS(iLocal_49[1]);
				
					iLocal_48 = iLocal_48 + 1;
				}
				else
				{
					func_95(0);
					func_95(1);
					iLocal_48 = 2;
				}
			}
			break;
	
		case 1:
			if (func_76(iLocal_128))
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iLocal_128]))
					func_95(iLocal_128);
			
				iLocal_48 = iLocal_48 + 1;
			}
			break;
	
		case 2:
			if (!func_100())
			{
				if (!func_99(veLocal_52, 1000) && SYSTEM::TIMERA() > 10000)
					flag = true;
				else if (SYSTEM::TIMERA() > 7000)
					SYSTEM::SETTIMERA(7000);
			
				if (SYSTEM::TIMERA() > 5000)
					if (func_102())
						flag = true;
			
				if (SYSTEM::TIMERA() > 10000)
					if (func_101())
						flag = true;
			
				for (i = 0; i < iLocal_49; i = i + 1)
				{
					if (!func_99(iLocal_49[i], 1000) && func_27() < 2f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
						flag = true;
				
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_49[i], false))
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[i]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[i]))
							flag = true;
				}
			
				func_77(-1, true);
			
				if ((float)MISC::GET_GAME_TIMER() - iLocal_498 > MISC::GET_RANDOM_FLOAT_IN_RANGE(5000f, 7500f))
					if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						if (_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_WARN", 8, 0, 0, 0))
							iLocal_498 = MISC::GET_GAME_TIMER();
			
				if (flag)
				{
					func_97();
					func_68(8);
				}
			}
			break;
	}

	for (j = 0; j < iLocal_49; j = j + 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iLocal_49[j]))
			if (PED::IS_PED_INJURED(iLocal_49[j]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[j], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[j], PLAYER::PLAYER_PED_ID(), false))
				func_68(8);
	}

	if (PED::IS_PED_INJURED(iLocal_49[0]) || PED::IS_PED_INJURED(iLocal_49[1]) || bLocal_119)
		func_68(8);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_72())
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_52, PLAYER::PLAYER_PED_ID(), true))
			func_68(8);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
		func_68(5);

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		func_68(8);

	if (func_27() > 20f || !uLocal_479[0] && !uLocal_479[1] && func_27() > 5f)
		func_68(7);

	return;
}

void func_97() // Position - 0x6680
{
	Global_21152 = 0;
	func_98();
	return;
}

void func_98() // Position - 0x6690
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

BOOL func_99(Vehicle veParam0, int iParam1) // Position - 0x66B1
{
	BOOL num;

	num = 0;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		{
			if (ENTITY::IS_ENTITY_A_PED(veParam0) && !PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0)) || ENTITY::IS_ENTITY_A_VEHICLE(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam0), false))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veParam0, true)) > fLocal_496)
					num = 1;
			
				if (MISC::GET_GAME_TIMER() - iLocal_497 > iParam1)
				{
					fLocal_496 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veParam0, true));
					iLocal_497 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}

	return num;
}

BOOL func_100() // Position - 0x6751
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_52, 20f, 20f, 5f, false, true, 0) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			return true;

	return false;
}

BOOL func_101() // Position - 0x67A1
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, 1.7532f, 0.5984f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, 3.3477f, 3.5984f), 2.8f, false, true, 0))
			return true;
	
		for (i = 0; i < iLocal_49; i = i + 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[i]))
				if (!PED::IS_PED_IN_VEHICLE(iLocal_49[i], veLocal_52, false) && PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_52) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[i], true)) < 400f)
					return true;
		}
	}

	return false;
}

BOOL func_102() // Position - 0x6863
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == veLocal_52)
			if (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
				return 1;

	return 0;
}

BOOL func_103() // Position - 0x68A0
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (!PED::IS_PED_INJURED(iLocal_49[0]) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 5f, false, true, 0) || !PED::IS_PED_INJURED(iLocal_49[1]) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 5f, false, true, 0))
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				return 1;

	return 0;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* message) // Position - 0x692F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_105(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x6942
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		func_135(uParam0, 0, false);

	uParam0->f_6 = 2;
	func_106(uParam0, uParam1, iParam4, iParam5, bParam6, bParam7, bParam8);
	return;
}

void func_106(var uParam0, Vector3 vParam1, var uParam2, var uParam3, const char* sParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x6978
{
	const char* string2;

	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	string2 = sParam4;

	if (MISC::IS_STRING_NULL(string2))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			string2 = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			string2 = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
		func_127();

	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_122(uParam0, bParam6, bParam8, false))
			func_121(uParam0, vParam1, iParam5);
	
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_111(string2))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam7)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
						{
							_DISPLAY_HELP_TEXT(string2, -1);
							uParam0->f_3 = string2;
						
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, string2))
								func_110(true);
						}
					}
				}
			}
		}
		else if (func_111(string2))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2))
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam7)
				{
					if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
					{
						_DISPLAY_HELP_TEXT(string2, -1);
						uParam0->f_3 = string2;
					
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, string2))
							func_110(true);
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(string2))
			if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				HUD::CLEAR_HELP(true);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
					func_135(uParam0, string2, true);
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
					func_135(uParam0, string2, true);
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
					func_135(uParam0, string2, true);
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
					func_135(uParam0, string2, true);
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
					func_135(uParam0, string2, true);
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
				func_135(uParam0, string2, true);
	
		if (!func_122(uParam0, bParam6, bParam8, false))
			if (!*uParam0 && !uParam0->f_1 && !func_109(uParam0))
				func_107(uParam0);
	}

	return;
}

void func_107(var uParam0) // Position - 0x6C52
{
	if (func_108(PLAYER::PLAYER_PED_ID()))
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

BOOL func_108(Object obParam0) // Position - 0x6CBB
{
	if (ENTITY::DOES_ENTITY_EXIST(obParam0))
		if (ENTITY::IS_ENTITY_A_VEHICLE(obParam0))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(obParam0), false))
				return true;
		else if (ENTITY::IS_ENTITY_A_PED(obParam0))
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(obParam0)))
				return true;
		else if (ENTITY::IS_ENTITY_AN_OBJECT(obParam0))
			return true;

	return false;
}

BOOL func_109(var uParam0) // Position - 0x6D16
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

int func_110(BOOL bParam0) // Position - 0x6D41
{
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (bParam0)
				Global_113969.f_10052.f_100 = Global_113969.f_10052.f_100 + 1;
		
			return Global_113969.f_10052.f_100;
	
		case 4:
			if (bParam0)
				Global_113969.f_10052.f_101 = Global_113969.f_10052.f_101 + 1;
		
			return Global_113969.f_10052.f_101;
	
		case 5:
		case 15:
			if (bParam0)
				Global_113969.f_10052.f_102 = Global_113969.f_10052.f_102 + 1;
		
			return Global_113969.f_10052.f_102;
	
		default:
			break;
	}

	return 3;
}

BOOL func_111(const char* sParam0) // Position - 0x6DEB
{
	if (!func_112(true, true, false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/))
			HUD::CLEAR_HELP(true);
	
		return false;
	}

	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_110(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_110(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_110(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_112(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6E84
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

	if (func_120(0))
		return false;

	if (func_119())
		return false;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return false;

	if (Global_76498)
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1779901043) > 0)
		return false;

	if (Global_61347)
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

	if (func_118() || func_117(*Global_4718592.f_185586) || func_116())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			seatIndex = _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_TURRET_SEAT(vehiclePedIsIn, seatIndex) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 562680400 && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 1181327175 && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == -1693015116 && seatIndex == 0 && func_114(vehiclePedIsIn, 10) && VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 10) != -1)
				return false;
		}
	}

	if (Global_1955929)
		return false;

	if (func_113(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_113(Player plParam0) // Position - 0x70DD
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657971[plParam0 /*465*/].f_322.f_8 != -1;
		else if (Global_1575083 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657971[plParam0 /*465*/].f_322.f_8 != -1;

	return false;
}

BOOL func_114(Vehicle veParam0, int iParam1) // Position - 0x7143
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

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x71A5
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

BOOL func_116() // Position - 0x722A
{
	return Global_2684504.f_19;
}

BOOL func_117(int iParam0) // Position - 0x7238
{
	return iParam0 == 51;
}

BOOL func_118() // Position - 0x7245
{
	return Global_2684504.f_18;
}

BOOL func_119() // Position - 0x7253
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

BOOL func_120(int iParam0) // Position - 0x7268
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

void func_121(var uParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4) // Position - 0x72BF
{
	int blendOutDuration;
	int blendInDuration;
	eScriptLookAtFlags flags;
	int num;

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	blendOutDuration = uParam0->f_9;
	blendInDuration = uParam0->f_10;

	if (iParam4 == 1726668277)
	{
		if (blendOutDuration < 1500)
			blendOutDuration = 1500;
	
		if (blendInDuration < 1500)
			blendInDuration = 1500;
	}

	CAM::SET_GAMEPLAY_COORD_HINT(vParam1, -1, blendOutDuration, blendInDuration, iParam4);
	flags = SLF_WHILE_NOT_IN_FOV;
	num = 3;
	TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam1, -1, flags, num);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
	return;
}

BOOL func_122(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x735B
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
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_109(uParam0))
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
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
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
					if (!func_126(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_125(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_125(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					uParam0->f_5 = 0;
				else if (!func_126(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (func_124(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_123(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_123(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
						uParam0->f_5 = 0;
					else if (func_124(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_109(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_112(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_127();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_123(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x76C7
{
	if (!func_112(bParam0, bParam1, bParam2))
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

BOOL func_124(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7719
{
	if (!func_112(bParam0, bParam1, bParam2))
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

BOOL func_125(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7762
{
	if (!func_112(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_117)
				return true;
		}
	}

	return false;
}

BOOL func_126(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x77C1
{
	if (!func_112(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_117)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

void func_127() // Position - 0x7817
{
	MISC::SET_BIT(&Global_8801, 4);
	return;
}

void func_128(var uParam0, Vehicle veParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x7827
{
	func_129(uParam0, veParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_129(var uParam0, Object obParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x7844
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		func_135(uParam0, 0, false);

	uParam0->f_6 = 2;
	func_130(uParam0, obParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_130(var uParam0, Object obParam1, var uParam2, var uParam3, var uParam4, const char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x787C
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
		func_127();

	if (func_108(obParam1) && ENTITY::IS_ENTITY_VISIBLE(obParam1))
	{
		flag = false;
	
		if (ENTITY::IS_ENTITY_A_PED(obParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(obParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(obParam1), true);
		
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(obParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(obParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(obParam1));
		
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(obParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(obParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(obParam1));
		
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(obParam1)))
				flag = true;
		}
	
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_122(uParam0, bParam7, bParam9, false))
				func_131(uParam0, obParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_111(string2))
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
									func_110(true);
							}
						}
					}
				}
			}
			else if (func_111(string2))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(obParam1) && flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
						{
							_DISPLAY_HELP_TEXT(string2, -1);
							uParam0->f_3 = string2;
						
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, string2))
								func_110(true);
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
				if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam5))
					HUD::CLEAR_HELP(true);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
						func_135(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
						func_135(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
						func_135(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
						func_135(uParam0, string2, true);
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
						func_135(uParam0, string2, true);
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
					func_135(uParam0, string2, true);
		
			if (!func_122(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_109(uParam0))
					func_107(uParam0);
		}
	}
	else
	{
		func_135(uParam0, string2, false);
	}

	return;
}

void func_131(var uParam0, Object obParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5) // Position - 0x7BE9
{
	Ped pedIndexFromEntityIndex;
	int easeInTime;
	int easeOutTime;
	eScriptLookAtFlags flags;
	int num;

	if (Global_1582021 == 1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(obParam1, false))
		func_135(uParam0, 0, false);

	if (func_134(vParam2, 0f, 0f, 0f, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(obParam1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(obParam1);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false))
				if (PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
					if (!func_132())
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

	CAM::SET_GAMEPLAY_ENTITY_HINT(obParam1, vParam2, true, -1, easeInTime, easeOutTime, iParam5);
	flags = SLF_WHILE_NOT_IN_FOV;
	num = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), obParam1, -1, flags, num);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
	return;
}

BOOL func_132() // Position - 0x7CF9
{
	return func_133(PLAYER::PLAYER_ID());
}

BOOL func_133(Player plParam0) // Position - 0x7D09
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == -1667301416)
		return 1;

	return 0;
}

BOOL func_134(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x7D28
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_135(var uParam0, const char* sParam1, BOOL bParam2) // Position - 0x7D6F
{
	const char* str;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (IS_BIT_SET(Global_2738935.f_4712, 26))
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

void func_136(int iParam0) // Position - 0x7E49
{
	MISC::SET_BIT(&(Global_113969.f_24998.f_6), iParam0);
	return;
}

void _DISPLAY_HELP_TEXT(const char* text, int iParam1) // Position - 0x7E60
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_138(int iParam0) // Position - 0x7E77
{
	return IS_BIT_SET(Global_113969.f_24998.f_6, iParam0);
}

int func_139(BOOL bParam0) // Position - 0x7E8B
{
	if (func_142())
	{
		Global_113959 = true;
		Global_113956 = MISC::GET_GAME_TIMER();
	
		if (func_56(Global_113958))
			func_140(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_56(Global_113958))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_140(int iParam0) // Position - 0x7EDE
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_141(iParam0), -1);
					Global_113969.f_24998.f_2 = Global_113969.f_24998.f_2 + 1;
					MISC::SET_BIT(&Global_113965, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_113965, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_141(iParam0), -1);
					Global_113969.f_24998.f_3 = Global_113969.f_24998.f_3 + 1;
					MISC::SET_BIT(&Global_113965, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_113965, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_141(iParam0), -1);
					Global_113969.f_24998.f_4 = Global_113969.f_24998.f_4 + 1;
					MISC::SET_BIT(&Global_113965, 2);
				}
			}
			break;
	}

	return;
}

char* func_141(int iParam0) // Position - 0x7FB9
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

BOOL func_142() // Position - 0x7FFD
{
	switch (func_143(&Global_33008, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_143(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x8036
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98991.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_147(0))
			return 0;
	
		Global_44006 = Global_44006 + 1;
		*uParam0 = Global_44006;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23692.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44042 = iParam2;
		Global_44004 = *uParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44003; i = i + 1)
			{
				if (Global_44009[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44004 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44003 == 8)
			return 0;
	
		Global_44006 = Global_44006 + 1;
		*uParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003 = Global_44003 + 1;
	
		if (iParam4 != 0)
			func_144(uParam0, iParam4);
	}

	return 2;
}

void func_144(var uParam0, int iParam1) // Position - 0x816D
{
	int i;

	if (Global_44003 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44003; i = i + 1)
	{
		if (Global_44009[i /*4*/] == *uParam0)
			Global_44009[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x81BC
{
	return func_146(iParam0, Global_44042);
}

BOOL func_146(int iParam0, int iParam1) // Position - 0x81CD
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

BOOL func_147(int iParam0) // Position - 0x83AE
{
	if (Global_44042 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void func_148() // Position - 0x83D0
{
	int taskSequenceId;
	int taskSequenceId2;
	int taskSequenceId3;
	int i;
	int weaponHash;

	switch (iLocal_48)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[0], BF_0x66BB9FCC, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[1], BF_0x66BB9FCC, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[1], true);
				
					if (PED::IS_PED_IN_VEHICLE(iLocal_49[0], veLocal_52, false) && PED::IS_PED_IN_VEHICLE(iLocal_49[1], veLocal_52, false))
					{
						if (iLocal_45 == 2)
						{
							TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, veLocal_52, -574.6195f, -847.232f, 25.2925f, 10f, 0, 1747439474, 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_52, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], taskSequenceId);
							TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
							iLocal_48 = iLocal_48 + 1;
						}
						else if (iLocal_45 == 4)
						{
							TASK::OPEN_SEQUENCE_TASK(&taskSequenceId2);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, veLocal_52, -551.2968f, -1119.4176f, 20.4011f, 10f, 0, 1747439474, 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_52, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(taskSequenceId2);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], taskSequenceId2);
							TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId2);
							iLocal_48 = iLocal_48 + 1;
						}
						else if (iLocal_45 == 7)
						{
							TASK::OPEN_SEQUENCE_TASK(&taskSequenceId3);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, veLocal_52, 2786.7524f, 4358.032f, 48.6794f, 10f, 0, 1747439474, 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_52, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(taskSequenceId3);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], taskSequenceId3);
							TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId3);
							iLocal_48 = iLocal_48 + 1;
						}
						else
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_49[0], veLocal_52, 10f, 786603);
							iLocal_48 = iLocal_48 + 1;
						}
					}
					else
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], veLocal_52, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[0], SCRIPT_TASK_ENTER_VEHICLE) != 1)
							TASK::TASK_ENTER_VEHICLE(iLocal_49[0], veLocal_52, -1, -1, 1f, 8388608, 0, 0);
					
						if (!PED::IS_PED_IN_VEHICLE(iLocal_49[1], veLocal_52, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[1], SCRIPT_TASK_ENTER_VEHICLE) != 1)
							TASK::TASK_ENTER_VEHICLE(iLocal_49[1], veLocal_52, -1, 0, 1f, 8388608, 0, 0);
					}
				}
			}
			break;
	
		case 1:
			if (func_152() || func_151() || func_102() || func_101() || func_150() || func_149())
			{
				if (func_27() < 20f)
				{
					func_97();
					_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
			
				func_68(6);
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				for (i = 0; i < iLocal_49; i = i + 1)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[i]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[i], false))
						if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_49[i]))
							func_68(8);
					else
						func_68(6);
				}
			
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_52, true))
					func_68(8);
			}
			break;
	}

	if (iLocal_46 == 4)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
		
			if (weaponHash == 741814745 || weaponHash == 615608432 || weaponHash == -1813897027)
			{
				GRAPHICS::DRAW_DEBUG_TEXT("PLAYER HAS PROJECTILE WEAPON", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 0, 255, 255);
			
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, -3.44f, -3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, -13.44f, 3f), 2.3f, false, true, 0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veLocal_52, true)) < 225f)
					func_68(6);
			
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, -3.44f, -3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, -13.44f, 3f), 2.3f, false, true, 0))
					GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
			
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veLocal_52, true)) < 225f)
					GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
			
				PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID());
			}
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(veLocal_52, true), 25f, false) || !PED::IS_PED_INJURED(iLocal_49[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true), 20f, false) || !PED::IS_PED_INJURED(iLocal_49[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true), 20f, false))
			func_68(6);
	
		if (iLocal_46 != 4)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[0], BF_0x66BB9FCC, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[0], false);
			}
		
			if (!PED::IS_PED_INJURED(iLocal_49[1]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[1], BF_0x66BB9FCC, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[1], false);
			}
		}
	}

	return;
}

BOOL func_149() // Position - 0x891A
{
	float x2;
	float entityForwardVector;
	var offsetFromEntityGivenWorldCoords;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		x2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(veLocal_52, true) };
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(veLocal_52) };
		offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_52, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
	
		if (offsetFromEntityGivenWorldCoords.f_1 > 1f && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), veLocal_52) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), veLocal_52) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[1]) && MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(entityForwardVector, entityForwardVector.f_1, x2, x2.f_1)) < 60f && MISC::GET_ANGLE_BETWEEN_2D_VECTORS(entityForwardVector.f_2, entityForwardVector.f_1, x2.f_2, x2.f_1) < 30f)
			return true;
	}

	return false;
}

BOOL func_150() // Position - 0x8A0A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 2.7f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 2.7f, -3.25f, 3f), 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, -2.7f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, -2.7f, -3.25f, 3f), 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_52, 0f, 0f, 3f), 2.4f, false, true, 0))
			if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
				return true;

	return false;
}

BOOL func_151() // Position - 0x8ACB
{
	Vehicle vehiclePedIsIn;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			vehiclePedIsIn = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::DOES_ENTITY_EXIST(veLocal_52))
			return VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(vehiclePedIsIn, veLocal_52) && ENTITY::GET_ENTITY_SPEED(vehiclePedIsIn) > 10f;
	}

	return false;
}

BOOL func_152() // Position - 0x8B64
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (bLocal_114)
			return true;
	
		if (!PED::IS_PED_INJURED(iLocal_49[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), true))
				return true;
	
		if (!PED::IS_PED_INJURED(iLocal_49[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), true))
				return true;
	}

	return false;
}

void func_153() // Position - 0x8BE6
{
	float entityHeading;

	if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
	{
		switch (iLocal_48)
		{
			case 0:
				uLocal_483 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_52, 0) };
				uLocal_486 = { ENTITY::GET_ENTITY_ROTATION(veLocal_52, 2) };
				uLocal_489 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_calm", uLocal_483, uLocal_486, 0, 2) };
				bLocal_494 = false;
				bLocal_495 = false;
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_52, 1084227584);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_56);
				TASK::TASK_STAND_STILL(0, 5000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_489, 1f, -1, 0.1f, 512, uLocal_486.f_2);
				TASK::TASK_ACHIEVE_HEADING(0, uLocal_486.f_2, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_56);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_49[1], iLocal_56);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_56);
				iLocal_48 = iLocal_48 + 1;
				break;
		
			case 1:
				uLocal_483 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_52, 0) };
				uLocal_486 = { ENTITY::GET_ENTITY_ROTATION(veLocal_52, 2) };
				uLocal_489 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_calm", uLocal_483, uLocal_486, 0, 2) };
			
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fLocal_75) < 22500f && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(veLocal_52))
					{
						iLocal_493 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_483, uLocal_486, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[0], iLocal_493, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_493, true);
					}
				}
			
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[1], SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_56);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_489, 1f, -1, 0.1f, 512, uLocal_486.f_2);
					TASK::TASK_ACHIEVE_HEADING(0, uLocal_486.f_2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_56);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_49[1], iLocal_56);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_56);
				}
			
				entityHeading = ENTITY::GET_ENTITY_HEADING(iLocal_49[1]);
			
				if (entityHeading > 180f)
					entityHeading = entityHeading - 360f;
			
				if (entityHeading <= -180f)
					entityHeading = entityHeading + 360f;
			
				if (uLocal_486.f_2 > 180f)
					uLocal_486.f_2 = uLocal_486.f_2 - 360f;
			
				if (uLocal_486.f_2 <= -180f)
					uLocal_486.f_2 = uLocal_486.f_2 + 360f;
			
				if (MISC::ABSF(entityHeading - uLocal_486.f_2) < 15f && SYSTEM::VDIST(uLocal_489, ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true)) < 0.2f)
				{
					PED::CLEAR_PED_ALTERNATE_WALK_ANIM(iLocal_49[1], -1056964608);
					TASK::CLEAR_PED_TASKS(iLocal_49[1]);
					bLocal_494 = true;
					iLocal_492 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_483, uLocal_486, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[1], iLocal_492, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(veLocal_52, iLocal_492, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_48 = iLocal_48 + 1;
				}
				break;
		
			case 2:
				if (!bLocal_104)
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > 0.09f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) < 0.11f && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 20f, 20f, 5f, false, true, 0))
							if (_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_CHT1", 3, 0, 0, 0))
								bLocal_104 = true;
			
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492))
				{
					if (!bLocal_107)
					{
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_54) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_54, iLocal_49[1]) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > 0.3793f)
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_54, veLocal_52))
							{
								ENTITY::DETACH_ENTITY(obLocal_54, true, true);
								ENTITY::SET_ENTITY_COLLISION(obLocal_54, false, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_54, veLocal_52, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_52, ENTITY::GET_ENTITY_COORDS(obLocal_54, true)), 90f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						
							bLocal_107 = true;
						}
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > 0.546243f)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(veLocal_52, -4f, true);
					
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
						{
							bLocal_104 = false;
							VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_52, 2, true);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_52, 3, true);
							iLocal_48 = iLocal_48 + 1;
						}
					}
				}
				break;
		
			case 3:
				if (!bLocal_104)
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > 0.56f && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 20f, 20f, 5f, false, true, 0))
						if (_CONVERSATION_ADD_LINE(&uLocal_138, sLocal_137, "RESEC_CHT2", 3, 0, 0, 0))
							bLocal_104 = true;
			
				if (!bLocal_495)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > 0.6f || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493))
						{
							TASK::CLEAR_PED_TASKS(iLocal_49[0]);
							iLocal_493 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_483, uLocal_486, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[0], iLocal_493, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
					
						bLocal_495 = true;
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_493) >= 0.92f || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], veLocal_52, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[0], SCRIPT_TASK_ENTER_VEHICLE) != 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[0]);
						TASK::TASK_ENTER_VEHICLE(iLocal_49[0], veLocal_52, -1, -1, 1f, 1, 0, 0);
					}
				}
			
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_49[1], MISC::GET_HASH_KEY("ENDS_IN_WALK")))
				{
					TASK::CLEAR_PED_TASKS(iLocal_49[1]);
					TASK::TASK_ENTER_VEHICLE(iLocal_49[1], veLocal_52, -1, 0, 1f, 1, 0, 0);
					SYSTEM::SETTIMERA(0);
				}
			
				if (func_88() && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(veLocal_52, 0) == 0f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(veLocal_52, 1) == 0f)
					func_68(4);
				break;
		
			case 4:
				if (SYSTEM::TIMERA() > 15000)
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_52, 0, true);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_52, 1, true);
				}
				break;
		}
	
		if (!PED::IS_PED_INJURED(func_3()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(func_3(), true)) < 30f && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			func_68(8);
	}

	if (!PED::IS_PED_INJURED(iLocal_49[1]))
		if (OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
			func_68(7);

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (func_157())
			if (func_88())
				func_68(6);
			else
				func_68(8);
		else if (func_155())
			func_68(2);
		else if (func_154())
			func_68(3);

	if (iLocal_46 != 1)
	{
		if (iLocal_46 != 4)
		{
			func_97();
		
			if (!PED::IS_PED_INJURED(iLocal_49[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_45 != 2)
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_49[0], "random@security_van", "driver_exit_panic", uLocal_483, uLocal_486, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[0]);
						TASK::TASK_PLAY_ANIM(iLocal_49[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, false, false, false);
					}
				}
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492) && !PED::IS_PED_INJURED(iLocal_49[1]))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(veLocal_52, -1000f, true);
				TASK::CLEAR_PED_TASKS(iLocal_49[1]);
			}
		}
	
		if (bLocal_107 && !OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_52, 2, true);
			VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_52, 3, true);
		}
	}

	return;
}

BOOL func_154() // Position - 0x9385
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (func_80(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					veLocal_53 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					return true;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (func_80(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				fLocal_478 = fLocal_478 + MISC::GET_FRAME_TIME();
			else if (fLocal_478 > 0f)
				fLocal_478 = fLocal_478 - (MISC::GET_FRAME_TIME() * 10f);
			else if (fLocal_478 < 0f)
				fLocal_478 = 0f;
		
			if (fLocal_478 > 3f)
			{
				veLocal_53 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_155() // Position - 0x943B
{
	int i;

	for (i = 0; i < iLocal_49; i = i + 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_49[i]) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[i]) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[i], true)) < 9f && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) && func_72())
			return true;
	
		if (PED::IS_PED_RAGDOLL(iLocal_49[i]))
			return true;
	}

	if (func_101())
		return true;

	if (func_156() || func_102() && func_72())
		if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], veLocal_52, false) || !PED::IS_PED_IN_VEHICLE(iLocal_49[1], veLocal_52, false))
			return true;

	return false;
}

BOOL func_156() // Position - 0x953D
{
	int weaponHash;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || weaponHash == 883325847 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(iLocal_49[0]))
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
						return true;
			
				if (!PED::IS_PED_INJURED(iLocal_49[1]))
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
						return true;
			}
		}
	}

	return false;
}

BOOL func_157() // Position - 0x95EE
{
	int i;

	for (i = 0; i < iLocal_49; i = i + 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_49[i]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[i], PLAYER::PLAYER_PED_ID(), true) || !PED::IS_PED_INJURED(iLocal_49[i]) && PED::IS_PED_IN_COMBAT(iLocal_49[i], PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[i], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_52, PLAYER::PLAYER_PED_ID(), true) && func_72() || PED::IS_PED_INJURED(iLocal_49[i]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[i], false))
			return true;
	}

	if (func_150() || func_103())
		return true;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false))
	{
		for (i = 0; i < iLocal_49; i = i + 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[i]))
				if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_49[i]))
					return true;
		}
	
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_52, true))
			return true;
	}
	else
	{
		return true;
	}

	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_75, 25f, 25f, 20f, false, true, 0))
			return true;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_52, false) && func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(veLocal_52, true), 25f, false) || !PED::IS_PED_INJURED(iLocal_49[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true), 20f, false) || !PED::IS_PED_INJURED(iLocal_49[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true), 20f, false))
		return true;

	return false;
}

BOOL func_158() // Position - 0x97E1
{
	int i;

	for (i = 0; i < iLocal_49; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[i]))
		{
			if (!PED::IS_PED_INJURED(iLocal_49[i]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[i], false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_49[i], true), 5f, true) || func_37(ENTITY::GET_ENTITY_COORDS(iLocal_49[i], true) + { 5f, 10f, 10f }, ENTITY::GET_ENTITY_COORDS(iLocal_49[i], true) - { 5f, 5f, 5f }, 0f, 0f, 0f, 0, false) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[i], PLAYER::PLAYER_PED_ID(), true))
				{
					bLocal_108 = true;
					return true;
				}
			}
			else
			{
				bLocal_108 = true;
				return true;
			}
		}
	}

	return false;
}

void func_159() // Position - 0x98A6
{
	int i;

	veLocal_52 = VEHICLE::CREATE_VEHICLE(hLocal_102, fLocal_75, fLocal_78, true, true, false);
	obLocal_55 = OBJECT::CREATE_OBJECT(-1249748547, fLocal_75, true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_55, veLocal_52, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	ENTITY::SET_ENTITY_VISIBLE(obLocal_55, false, false);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(obLocal_55, veLocal_52, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_52, 1084227584);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_52, 3);
	ENTITY::SET_ENTITY_PROOFS(obLocal_55, false, true, true, true, true, true, false, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(veLocal_52, true, 0);
	ENTITY::SET_ENTITY_HEALTH(veLocal_52, 700, 0, 0);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(veLocal_52, false, 0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_52, true, 1);
	VEHICLE::SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP(veLocal_52, false);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(veLocal_52, true);
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fLocal_75 - 200f, fLocal_75.f_1 - 200f, fLocal_75 + 200f, fLocal_75.f_1 + 200f);

	if (iLocal_44 == 3)
	{
		iLocal_49[0] = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_52, PED_TYPE_MISSION, hLocal_101, -1, true, true);
		iLocal_49[1] = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_52, PED_TYPE_MISSION, hLocal_101, 0, true, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(veLocal_52, true, true, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_52, true, 1);
	}
	else
	{
		iLocal_49[1] = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_101, uLocal_65[1 /*3*/], uLocal_72[1], true, true);
		iLocal_49[0] = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_101, uLocal_65[0 /*3*/], uLocal_72[0], true, true);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_49[1], iLocal_49[0], -1, 0, 2);
	}

	func_85(iLocal_49[1]);
	PED::ADD_RELATIONSHIP_GROUP("Security_guards", &hLocal_64);

	for (i = 0; i < iLocal_49; i = i + 1)
	{
		PED::SET_PED_MONEY(iLocal_49[i], 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_CanUseVehicles, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_Aggressive, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_0x66BB9FCC, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_0xB4A13A5A, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[i], BF_0x7DF2CCFA, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[i], 512, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_49[i], 118, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[i], 128, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_49[i], false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_49[i], true, 0);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_49[i], true);
		PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iLocal_49[i], true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[i], 453432689, -1, false, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_49[i], hLocal_64);
		PED::SET_PED_KEEP_TASK(iLocal_49[i], true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_49[i], 250);
	}

	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_49[1], true, 1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, hLocal_64);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_64, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_64, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, hLocal_64);

	if (iLocal_44 == 1)
	{
		PED::SET_PED_PROP_INDEX(iLocal_49[0], 0, 1, 0, false, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_49[0], false);
		PED::SET_PED_PROP_INDEX(iLocal_49[1], 0, 1, 0, false, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_49[1], false);
	}

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_138, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_138, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_138, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);

	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_138, 3, iLocal_49[0], "SECVANGUY1", 0, 1);
	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_138, 4, iLocal_49[1], "SECVANGUY2", 0, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(hLocal_102, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(hLocal_101, true);
	iLocal_44 != 3;
	return;
}

float func_160(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x9C1D
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}

BOOL func_161() // Position - 0x9C57
{
	func_169(&uLocal_315, hLocal_101);
	func_169(&uLocal_315, hLocal_102);
	func_169(&uLocal_315, hLocal_103);
	func_167(&uLocal_315, "random@security_van");
	func_167(&uLocal_315, "weapons@holster_1h");
	func_167(&uLocal_315, "move_injured_generic");
	func_166(&uLocal_315, 3);
	return func_162(&uLocal_315);
}

BOOL func_162(var uParam0) // Position - 0x9CA9
{
	int i;

	if (!uParam0->f_145)
		return 1;

	for (i = 0; i < 8; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
				return 0;
		
			if (!func_163(&uParam0->[i /*18*/]))
				return 0;
		}
	}

	uParam0->f_145 = 0;
	return 1;
}

BOOL func_163(var uParam0) // Position - 0x9D05
{
	return func_164(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

BOOL func_164(int iParam0, const char* sParam1, Hash hParam2) // Position - 0x9D1C
{
	if (IS_BIT_SET(iParam0, 30))
	{
		if (IS_BIT_SET(iParam0, 29))
		{
			switch (func_165(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(hParam2);
			
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
			
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
			
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
			
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(hParam2, sParam1);
			
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
			
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, IS_BIT_SET(iParam0, 27), -1);
			
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(hParam2);
			
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(hParam2);
			
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
			
				default:
					break;
			}
		}
		else
		{
			return false;
		}
	}

	return false;
}

int func_165(int iParam0) // Position - 0x9E07
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (IS_BIT_SET(iParam0, i))
			return i;
	}

	return -1;
}

void func_166(var uParam0, int iParam1) // Position - 0x9E30
{
	if (iParam1 > 0)
		uParam0->f_147 = iParam1;

	return;
}

void func_167(var uParam0, char* sParam1) // Position - 0x9E47
{
	func_168(uParam0, 1, -1, sParam1, 0);
	return;
}

void func_168(var uParam0, int iParam1, Hash hParam2, char* sParam3, int iParam4) // Position - 0x9E5A
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (IS_BIT_SET(uParam0->[i /*18*/], iParam1))
			{
				if (hParam2 != -1)
					if (uParam0->[i /*18*/].f_1 == hParam2)
						return;
			
				if (iParam1 != 4)
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
						if (MISC::ARE_STRINGS_EQUAL(&(uParam0->[i /*18*/].f_2), sParam3))
							return;
			
				if (iParam1 == 9)
					return;
			}
		}
	}

	if (!uParam0->f_145)
		uParam0->f_145 = 1;

	for (i = 0; i < 8; i = i + 1)
	{
		if (!IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[i /*18*/].f_2), sParam3, 64);
			uParam0->[i /*18*/].f_1 = hParam2;
			uParam0->[i /*18*/] = iParam4;
			MISC::SET_BIT(&uParam0->[i /*18*/], iParam1);
			MISC::SET_BIT(&uParam0->[i /*18*/], 30);
			return;
		}
	}

	return;
}

void func_169(var uParam0, Hash hParam1) // Position - 0x9F39
{
	func_168(uParam0, 0, hParam1, "NULL", 0);
	return;
}

BOOL func_170() // Position - 0x9F4D
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_41) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_181())
			return false;
	}

	if (func_177())
		return true;

	if (func_171(100f, true) != -1)
		return true;

	return false;
}

int func_171(float fParam0, BOOL bParam1) // Position - 0x9FD3
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
		if (func_18(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_61();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113969.f_18577[num /*6*/], 2) && !IS_BIT_SET(Global_113969.f_18577[num /*6*/], 3))
				{
					func_172(num, &unk);
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

void func_172(int iParam0, var uParam1) // Position - 0xA084
{
	switch (iParam0)
	{
		case 0:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 1:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 2:
			func_173(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 3:
			func_173(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
	
		case 4:
			func_173(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 5:
			func_173(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 6:
			func_173(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 7:
			func_173(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_174(iParam0), 0, 0);
			break;
	
		case 8:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 9:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 10:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 11:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 12:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 13:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 14:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 15:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 16:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 17:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 18:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 19:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 20:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 21:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_174(iParam0), 1, 0);
			break;
	
		case 22:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_174(iParam0), 1, 0);
			break;
	
		case 23:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_174(iParam0), 0, 1);
			break;
	
		case 24:
			func_173(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_174(iParam0), 0, 1);
			break;
	
		case 25:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 26:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 27:
			func_173(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 28:
			func_173(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
	
		case 29:
			func_173(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
	
		case 30:
			func_173(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 31:
			func_173(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 32:
			func_173(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 33:
			func_173(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 34:
			func_173(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 35:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 36:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 37:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 38:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
	
		case 39:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
	
		case 40:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
	
		case 41:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
	
		case 42:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
	
		case 43:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
	
		case 44:
			func_173(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 45:
			func_173(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 46:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 47:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 48:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 49:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 50:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 51:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 52:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 54:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 55:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 56:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 53:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 57:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 58:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 59:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 60:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 61:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 62:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_173(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0xB2CB
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

int func_174(int iParam0) // Position - 0xB35C
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

struct<2> func_175(int iParam0) // Position - 0xB6A2
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_176(iParam0) };

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

struct<2> func_176(int iParam0) // Position - 0xB6DA
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

BOOL func_177() // Position - 0xBB27
{
	if (func_180() && !func_181())
		return true;

	if (func_179() && func_178())
		return true;

	return false;
}

BOOL func_178() // Position - 0xBB59
{
	return Global_113687 > 0;
}

BOOL func_179() // Position - 0xBB67
{
	if (Global_98435 != -1)
		return true;

	return false;
}

BOOL func_180() // Position - 0xBB7C
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 20);

	return false;
}

BOOL func_181() // Position - 0xBB9F
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_182() // Position - 0xBBBC
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_177())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_181())
			return false;

	if (func_171(100f, true) != -1)
		return true;

	return false;
}

BOOL func_183() // Position - 0xBC1E
{
	if (Global_113958 == func_65() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113959)
		return true;

	return false;
}

void func_184(var uParam0) // Position - 0xBC49
{
	int i;

	if (uParam0->f_145)
	{
		if (MISC::GET_FRAME_COUNT() >= uParam0->f_146 + uParam0->f_147 || IS_BIT_SET(Global_101533.f_20, 2) || IS_BIT_SET(Global_101533.f_20, 13))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				if (IS_BIT_SET(uParam0->[i /*18*/], 30))
				{
					if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
					{
						func_185(&uParam0->[i /*18*/]);
						uParam0->f_146 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
			}
		}
	}

	return;
}

void func_185(int* piParam0) // Position - 0xBCC7
{
	func_186(piParam0, &(piParam0->f_2), piParam0->f_1);
	return;
}

void func_186(int* piParam0, const char* sParam1, Hash hParam2) // Position - 0xBCDD
{
	if (IS_BIT_SET(*piParam0, 30))
	{
		switch (func_165(*piParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(hParam2);
				break;
		
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
		
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
		
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, IS_BIT_SET(*piParam0, 28));
				break;
		
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(hParam2, sParam1);
				break;
		
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
		
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, IS_BIT_SET(*piParam0, 27), -1);
				break;
		
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(hParam2);
				break;
		
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, hParam2);
				break;
		
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
		
			default:
				break;
		}
	
		MISC::SET_BIT(piParam0, 29);
	}

	return;
}

void func_187() // Position - 0xBDAE
{
	hLocal_103 = -1249748547;
	hLocal_102 = 1747439474;
	hLocal_101 = -1782092083;
	iLocal_126 = MISC::GET_RANDOM_INT_IN_RANGE(3000, 8000);

	switch (iLocal_45)
	{
		case 1:
			uLocal_94 = { -315.889f, -1550.5544f, 7.233013f };
			uLocal_97 = { -315.23523f, -1366.5808f, 45.29617f };
			fLocal_100 = 180f;
			fLocal_75 = { -331.8429f, -1461.042f, 30.153f };
			fLocal_78 = -64.3539f;
			uLocal_65[0 /*3*/] = { -335.564f, -1462.2369f, 29.5452f };
			uLocal_72[0] = 158.3857f;
			uLocal_65[1 /*3*/] = { -342.7024f, -1475.0432f, 29.6004f };
			uLocal_72[1] = 290.3041f;
			iLocal_44 = 1;
			break;
	
		case 2:
			uLocal_94 = { -538.2149f, -868.7426f, 17.96054f };
			uLocal_97 = { -663.8162f, -867.9987f, 53.66249f };
			fLocal_100 = 121.5f;
			fLocal_75 = { -588.51276f, -866.9584f, 25.32786f };
			fLocal_78 = -89.026794f;
			uLocal_65[0 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			uLocal_72[0] = 12.5464f;
			uLocal_65[1 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			uLocal_72[1] = 352.4951f;
			iLocal_44 = 1;
			break;
	
		case 3:
			uLocal_94 = { -468.6309f, 6101.9067f, 14.891197f };
			uLocal_97 = { -359.97336f, 5994.152f, 50.368435f };
			fLocal_100 = 152.25f;
			fLocal_75 = { -395.6852f, 6056.967f, 30.5001f };
			fLocal_78 = 188.9862f;
			uLocal_65[0 /*3*/] = { -398.4612f, 6051.2964f, 30.5003f };
			uLocal_72[0] = 251.7138f;
			uLocal_65[1 /*3*/] = { -378.408f, 6035.6895f, 30.498f };
			uLocal_72[1] = 154.0836f;
			iLocal_44 = 2;
			break;
	
		case 4:
			uLocal_94 = { -631.34076f, -1105.5807f, 7.220509f };
			uLocal_97 = { -462.17215f, -1103.5974f, 62.535828f };
			fLocal_100 = 177.25f;
			fLocal_75 = { -595.7766f, -1094.0891f, 21.1785f };
			fLocal_78 = 263.4662f;
			uLocal_65[0 /*3*/] = { -600.8182f, -1103.7783f, 21.3292f };
			uLocal_72[0] = 338.8304f;
			uLocal_65[1 /*3*/] = { -595.3461f, -1096.0538f, 21.1785f };
			uLocal_72[1] = 151.297f;
			iLocal_44 = 1;
			break;
	
		case 5:
			fLocal_75 = { -1042.7682f, -1049.2957f, 1.0825f };
			fLocal_78 = 26.9919f;
			iLocal_44 = 3;
			break;
	
		case 6:
			fLocal_75 = { -595.5618f, -667.7325f, 31.0544f };
			fLocal_78 = 271.1543f;
			iLocal_44 = 3;
			break;
	
		case 7:
			fLocal_75 = { 3018.3843f, 3634.0168f, 70.4076f };
			fLocal_78 = 335.9052f;
			iLocal_44 = 3;
			break;
	
		case 8:
			fLocal_75 = { -2815.6614f, 2208.1707f, 27.8382f };
			fLocal_78 = 119.1519f;
			iLocal_44 = 3;
			break;
	
		case 9:
			fLocal_75 = { 856.7742f, -2067.8452f, 29.0704f };
			fLocal_78 = 83.1204f;
			iLocal_44 = 3;
			break;
	
		case 10:
			fLocal_75 = { 805.1932f, -703.1327f, 28.1632f };
			fLocal_78 = 248.8625f;
			iLocal_44 = 3;
			break;
	
		default:
			break;
	}

	return;
}

void func_188(int iParam0) // Position - 0xC113
{
	if (iParam0 == -1)
		iParam0 = func_65();

	if (iParam0 == -1)
		return;

	func_190(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113955 = 0;
	func_189();
	return;
}

void func_189() // Position - 0xC149
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_190(int iParam0) // Position - 0xC186
{
	Global_113958 = iParam0;
	return;
}

BOOL func_191(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC194
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_152557)
		return false;

	if (iParam3 == -1)
		iParam3 = func_65();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_41 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_181())
				return false;
		}
	
		if (!Global_113969.f_9088)
			return false;
	
		if (_IS_MISSION_REPEAT_ACTIVE(false))
			return false;
	
		if (func_177())
			return false;
	
		if (func_229())
			return false;
	
		if (Global_113958 != -1)
			return false;
	
		if (func_18(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_171(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_41.f_2 > 50f)
				return false;
	
		if (!func_228(iParam3))
			return false;
	
		if (func_18(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_227(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_227(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_18(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_226(iParam3, iParam4, 145))
				return false;
	
		if (!func_225(Global_113969.f_24998.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113960 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_224())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_216(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_215(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_215(0, 0))
			return false;
	
		if (Global_33095)
			return false;
	
		if (func_228(30) && !func_215(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_18(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_113969.f_2366.f_539.f_2300[i /*3*/] };
				num = Global_113969.f_2366.f_539.f_2296[i];
			
				if (func_214(num))
					if (func_192(i))
						if (!func_134(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_192(eCharacter echParam0) // Position - 0xC52E
{
	int num;

	num = Global_113969.f_2366.f_539.f_2296[echParam0];
	return func_193(num);
}

BOOL func_193(int iParam0) // Position - 0xC54F
{
	return func_194(iParam0, 1);
}

int func_194(int iParam0, int iParam1) // Position - 0xC55E
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_214(iParam0))
		return 0;

	func_195(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_195(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xC5B1
{
	func_196(func_207(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_196(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xC5CF
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_206(iParam0, iParam1))
	{
		num = func_205(iParam1);
		num2 = func_203(iParam0);
		num3 = func_203(iParam0) - func_203(iParam1);
		num4 = func_205(iParam0) - func_205(iParam1);
		num5 = func_202(iParam0) - func_202(iParam1);
		num6 = func_201(iParam0) - func_201(iParam1);
		num7 = func_200(iParam0) - func_200(iParam1);
		num8 = func_199(iParam0) - func_199(iParam1);
	}
	else
	{
		num = func_205(iParam0);
		num2 = func_203(iParam1);
		num3 = func_203(iParam1) - func_203(iParam0);
		num4 = func_205(iParam1) - func_205(iParam0);
		num5 = func_202(iParam1) - func_202(iParam0);
		num6 = func_201(iParam1) - func_201(iParam0);
		num7 = func_200(iParam1) - func_200(iParam0);
		num8 = func_199(iParam1) - func_199(iParam0);
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
	
		num5 = num5 + func_198(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_197(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
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

float func_197(float fParam0, float fParam1, float fParam2) // Position - 0xC7D0
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

int func_198(int iParam0, int iParam1) // Position - 0xC812
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

int func_199(int iParam0) // Position - 0xC8B4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_200(int iParam0) // Position - 0xC8C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_201(int iParam0) // Position - 0xC8DA
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_202(int iParam0) // Position - 0xC8ED
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_203(int iParam0) // Position - 0xC8FF
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_204(BOOL bParam0, var uParam1, var uParam2) // Position - 0xC921
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_205(int iParam0) // Position - 0xC938
{
	return iParam0 & 15;
}

BOOL func_206(int iParam0, int iParam1) // Position - 0xC945
{
	int num;
	int num2;

	if (!func_214(iParam1) || !func_214(iParam0))
		return 1;

	num = func_203(iParam0);
	num2 = func_203(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_205(iParam0);
	num2 = func_205(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_202(iParam0);
	num2 = func_202(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_201(iParam0);
	num2 = func_201(iParam1);

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

	num = func_199(iParam0);
	num2 = func_199(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_207() // Position - 0xCA51
{
	var unk;

	func_213(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_212(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_211(&unk, CLOCK::GET_CLOCK_HOURS());
	func_210(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_209(&unk, CLOCK::GET_CLOCK_MONTH());
	func_208(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_208(var uParam0, int iParam1) // Position - 0xCA97
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

void func_209(var uParam0, int iParam1) // Position - 0xCB1D
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_210(var uParam0, int iParam1) // Position - 0xCB50
{
	int num;
	int num2;

	num = func_205(*uParam0);
	num2 = func_203(*uParam0);

	if (iParam1 < 1 || iParam1 > func_198(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_211(var uParam0, int iParam1) // Position - 0xCBA1
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_212(var uParam0, int iParam1) // Position - 0xCBDB
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_213(var uParam0, int iParam1) // Position - 0xCC16
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_214(int iParam0) // Position - 0xCC52
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_199(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_200(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_201(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_203(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_205(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_202(iParam0);

	if (num6 < 1 || num6 > func_198(num5, num4))
		return false;

	return true;
}

BOOL func_215(int iParam0, int iParam1) // Position - 0xCD2E
{
	if (IS_BIT_SET(Global_113969.f_24998.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_216(int iParam0) // Position - 0xCD4E
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_18(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_1() || Global_113016 || Global_32951 || func_223() || func_24(8, -1) || func_222() || func_221() || func_220() || func_219() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_1() || Global_32951 || func_223() || func_24(8, -1) || func_220() || func_222() || func_221() || func_219() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_1() || Global_113016 || Global_32951 || func_223() || func_24(8, -1) || func_220() || func_222() || func_221() || func_219() || Global_113969.f_7691.f_919[character] == 5 || Global_44589 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_1() || Global_113016 || Global_32951 || func_223() || func_24(8, -1) || func_222() || func_221() || func_219() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_1() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_24(8, -1) || func_219() || func_218() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_24(8, -1) || func_222() || func_221() || func_218() || func_217())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_1() || Global_32951 || func_223() || func_24(8, -1) || func_221() || func_220() || func_219() || Global_113969.f_7691.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_1() || func_221() || Global_113016 || Global_32951 || func_223() || Global_45250 || func_24(8, -1) || func_220() || func_218() || func_219() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_1() || Global_113016 || Global_32951 || func_223() || func_24(8, -1) || func_220() || func_218() || func_222() || func_221() || func_219())
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

BOOL func_217() // Position - 0xD46B
{
	return Global_101572.f_1;
}

BOOL func_218() // Position - 0xD479
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 13);

	return false;
}

BOOL func_219() // Position - 0xD49C
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1424752554) > 0)
		return true;

	return false;
}

BOOL func_220() // Position - 0xD4B6
{
	if (Global_79650)
		return true;
	else if (Global_64160 && !Global_64166)
		return true;

	return false;
}

BOOL func_221() // Position - 0xD4E0
{
	return Global_101585.f_394 > 0;
}

BOOL func_222() // Position - 0xD4F1
{
	return Global_101585.f_393 > 0;
}

BOOL func_223() // Position - 0xD502
{
	return Global_1575083;
}

BOOL func_224() // Position - 0xD50E
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_225(int iParam0) // Position - 0xD536
{
	return func_206(func_207(), iParam0);
}

BOOL func_226(int iParam0, int iParam1, eCharacter echParam2) // Position - 0xD548
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

int func_227(eCharacter echParam0) // Position - 0xD62C
{
	if (!func_18(echParam0))
		return 7;

	return Global_113969.f_7691.f_919[echParam0];
}

BOOL func_228(int iParam0) // Position - 0xD650
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_113969.f_24998, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_113969.f_24998.f_1, num);
	}

	return flag;
}

BOOL func_229() // Position - 0xD6A8
{
	Vehicle vehiclePedIsIn;

	if (Global_33100)
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

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xD6EC
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

void func_231() // Position - 0xD7A4
{
	if (func_183())
	{
		if (OBJECT::DOES_PICKUP_EXIST(pkLocal_135))
			if (HUD::DOES_BLIP_EXIST(blLocal_62))
				HUD::REMOVE_BLIP(&blLocal_62);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_55))
			OBJECT::DELETE_OBJECT(&obLocal_55);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
			if (ENTITY::IS_ENTITY_OCCLUDED(obLocal_54))
				OBJECT::DELETE_OBJECT(&obLocal_54);
			else
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_54);
	
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_102);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_101);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_103);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PED::SET_PED_MODEL_IS_SUPPRESSED(hLocal_101, false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(hLocal_102, false);
	}

	if (shLocal_129 != 0)
		EVENT::REMOVE_SHOCKING_EVENT(shLocal_129);

	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_63, false);
	func_135(&uLocal_303, 0, false);
	func_237(-1);
	func_232(&uLocal_315, false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_232(var uParam0, BOOL bParam1) // Position - 0xD852
{
	int i;

	if (!bParam1)
		func_234(uParam0);

	for (i = 0; i < 8; i = i + 1)
	{
		func_233(&uParam0->[i /*18*/]);
	}

	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
	return;
}

void func_233(var uParam0) // Position - 0xD88D
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "NULL", 64);
	return;
}

void func_234(var uParam0) // Position - 0xD8A6
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
			func_235(&uParam0->[i /*18*/]);
	}

	uParam0->f_145 = 1;
	return;
}

void func_235(var uParam0) // Position - 0xD8DC
{
	func_236(*uParam0, &(uParam0->f_2), uParam0->f_1);
	return;
}

void func_236(int iParam0, const char* sParam1, Hash hParam2) // Position - 0xD8F3
{
	if (IS_BIT_SET(iParam0, 30))
	{
		switch (func_165(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hParam2);
				break;
		
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
		
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
		
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
		
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(hParam2, sParam1);
				break;
		
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
		
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
		
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(hParam2);
				break;
		
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(hParam2, IS_BIT_SET(iParam0, 26));
				break;
		
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_237(int iParam0) // Position - 0xD9AD
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_65();

	if (iParam0 == -1)
		return;

	if (func_183())
	{
		func_241(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113960 = MISC::GET_GAME_TIMER();
		func_240(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_239(Global_113958, true), 64);
	
		if (func_64(Global_113958) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_113957, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_113955, MISC::GET_GAME_TIMER() - Global_113956, 0);
	}
	else if (IS_BIT_SET(Global_113965, 0) && Global_113969.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113965, 0);
	}

	func_238(&Global_33008);
	Global_113959 = false;
	func_190(-1);
	return;
}

void func_238(var uParam0) // Position - 0xDA5F
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44004))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
	return;
}

char* func_239(int iParam0, BOOL bParam1) // Position - 0xDA9C
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

void func_240(int iParam0) // Position - 0xDCE5
{
	Global_44593 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_241(int iParam0) // Position - 0xDCF7
{
	func_242(iParam0, 0, func_247(iParam0));
	return;
}

void func_242(int iParam0, int iParam1, int iParam2) // Position - 0xDD0C
{
	int unk;
	var unk2;

	unk = func_207();
	func_245(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_244(iParam0, &unk);
	unk2 = { func_243(&unk) };
	return;
}

struct<16> func_243(var uParam0) // Position - 0xDD3B
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_201(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_200(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_199(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_202(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_205(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_203(*uParam0), 64);
	return unk;
}

void func_244(int iParam0, var uParam1) // Position - 0xDE0C
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
	return;
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xDE24
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_203(*uParam0);
	i = func_205(*uParam0);
	num2 = func_202(*uParam0);
	j = func_201(*uParam0);
	k = func_200(*uParam0);
	l = func_199(*uParam0);

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

	for (m = func_198(i, num); num2 > m; m = func_198(i, num))
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
	func_246(uParam0, l, k, j, num2, i, num);
	return;
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xDFA6
{
	func_213(uParam0, iParam1);
	func_212(uParam0, iParam2);
	func_211(uParam0, iParam3);
	func_209(uParam0, iParam5);
	func_210(uParam0, iParam4);
	func_208(uParam0, iParam6);
	return;
}

int func_247(int iParam0) // Position - 0xDFDE
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

int func_248(Vehicle veParam0) // Position - 0xE181
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, -1, false))
			return -1;
	
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 0, false))
			return 0;
	
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 1, false))
			return 1;
	
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 2, false))
			return 2;
	
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 3, false))
			return 3;
	
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 4, false))
			return 4;
	
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 5, false))
			return 5;
	
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 6, false))
			return 6;
	
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 7, false))
			return 7;
	
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 8, false))
			return 8;
	}

	return -2;
}


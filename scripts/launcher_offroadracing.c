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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
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
	Ped pedLocal_83 = 0;
	Vehicle veLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	float fLocal_91 = 0f;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	eStackSize essLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = 0;
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	float fLocal_115 = 0f;
	BOOL bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 5;
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
	var uLocal_148 = 5;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	float fLocal_154 = 0f;
	Ped pedLocal_155 = 0;
	BOOL bLocal_156 = 0;
	BOOL bLocal_157 = 0;
	BOOL bLocal_158 = 0;
	BOOL bLocal_159 = 0;
	BOOL bLocal_160 = 0;
	var uLocal_161 = 16;
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
	int iLocal_326 = 0;
	int iLocal_327 = 5;
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
	var uLocal_398 = 5;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 5;
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
	var uLocal_424 = 1;
	var uLocal_425 = 0;
	var uLocal_426 = 1;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
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
	BOOL flag;
	float groundZ;
	BOOL flag2;
	BOOL flag3;
	int clockHours;
	int num;

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
	uLocal_43 = { 500f, 500f, 500f };
	iLocal_94 = -1;
	essLocal_95 = FRIEND;
	iLocal_96 = -1;
	iLocal_97 = -1;
	sLocal_99 = "CC_SUBSTR" /*~INPUT_CONTEXT~*/;
	fLocal_100 = 125f;
	iLocal_101 = 1;
	iLocal_103 = 263;
	fLocal_115 = 4f;
	bLocal_116 = true;
	iLocal_117 = 6;
	iLocal_118 = 18;
	iLocal_122 = -1;
	bLocal_156 = true;
	bLocal_157 = true;
	uLocal_88 = { uScriptParam_0.f_1[0 /*3*/] };
	uLocal_88 = { uLocal_88 };
	veLocal_84 = veLocal_84;
	uLocal_67 = { uLocal_67 };
	flag = false;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_153(true);

	pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_93 = 0;
	func_151(&Global_112617, 0);
	func_145();
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);

	if (func_144(iLocal_92, 1))
		iLocal_98 = 10;
	else
		iLocal_98 = 9;

	while (!Global_39381)
	{
		SYSTEM::WAIT(0);
	}

	if (!func_144(iLocal_92, 8))
		if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
			if (func_141(0, iLocal_97))
				func_153(false);
			else
				func_153(true);

	if (iLocal_97 != -1)
		if (!func_141(0, iLocal_97))
			bLocal_116 = false;

	if (func_144(iLocal_92, 8388608))
		func_153(true);

	if (func_144(iLocal_92, 524288) && func_140() && !func_139())
		func_153(true);

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_144(iLocal_92, 4194304))
	{
		if (iLocal_103 != 263)
		{
			func_138(iLocal_103, true, false);
			iLocal_103 = 263;
		}
	
		func_137(10);
	}

	while (true)
	{
		if (!func_144(iLocal_92, 268435456))
		{
			groundZ = 0f;
		
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(uScriptParam_0.f_1[0 /*3*/], &groundZ, false, false))
			{
				if (groundZ != 0f)
				{
					uScriptParam_0.f_1[0 /*3*/].f_2 = groundZ;
					func_136(&iLocal_92, 268435456);
				}
			}
		}
	
		pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	
		if (func_144(iLocal_92, 1048576))
			if (ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
				func_153(true);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83) && !ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
		{
			uLocal_85 = { ENTITY::GET_ENTITY_COORDS(pedLocal_83, true) };
			fLocal_91 = SYSTEM::VDIST2(uLocal_85, uScriptParam_0.f_1[0 /*3*/]);
			fLocal_91 = fLocal_91;
			uLocal_109 = { uLocal_85 };
			uLocal_112 = { uScriptParam_0.f_1[0 /*3*/] };
			uLocal_109.f_2 = 0f;
			uLocal_112.f_2 = 0f;
			fLocal_108 = SYSTEM::VDIST2(uLocal_109, uLocal_112);
		
			switch (iLocal_93)
			{
				case 0:
					if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) || func_144(iLocal_92, 16) && !func_144(iLocal_92, 524288))
					{
						iLocal_96 = -1;
						func_132();
						func_137(1);
					}
					else
					{
						if (fLocal_108 > fLocal_100 * fLocal_100)
						{
							if (iLocal_103 != 263)
							{
								func_138(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						
							func_137(10);
						}
					
						uLocal_85.f_2 - uScriptParam_0.f_1[0 /*3*/].f_2 > 500f;
					}
					break;
			
				case 1:
					if (func_130() && fLocal_91 > fLocal_115 * 1.5f * fLocal_115 * 1.5f)
					{
						iLocal_101 = iLocal_101;
						func_137(3);
					}
					else
					{
						func_132();
					}
					break;
			
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_153(true);
						return;
					}
				
					if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
					{
						if (!func_144(iLocal_92, 8))
						{
							flag2 = true;
						
							if (MISC::ARE_STRINGS_EQUAL(&(Global_101533.f_3), &uLocal_67))
							{
								uLocal_67 = { uLocal_51 };
								flag2 = false;
							}
						
							if (flag2)
							{
								func_153(false);
								break;
							}
						}
					}
				
					if (!func_144(iLocal_92, 4))
					{
						func_119();
						func_136(&iLocal_92, 4);
					}
				
					if (fLocal_108 > fLocal_100 * fLocal_100 && !Global_101567)
					{
						if (iLocal_103 != 263)
						{
							if (func_118(6) && !func_117(iLocal_103))
							{
							}
							else
							{
								func_138(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						}
					
						func_137(10);
					}
					else
					{
						uLocal_67 = { uLocal_51 };
						flag3 = !func_144(iLocal_92, 64);
						func_151(&iLocal_92, 128);
					
						if (!func_116(3) && !Global_101567)
						{
							if (func_144(iLocal_92, 2097152))
							{
								if (!func_144(iLocal_92, 1) || !ENTITY::DOES_ENTITY_EXIST(func_115()) && !Global_101567)
								{
									func_137(10);
									break;
								}
							}
						}
					
						if (func_144(iLocal_92, 524288) && func_140() && !func_139())
							func_153(true);
					
						if (func_114())
							func_153(true);
					
						if (!func_106(6) || Global_113016 || func_105())
							flag3 = false;
					
						if (!bLocal_116)
						{
							func_103(&iLocal_92, 128);
							flag3 = false;
						}
					
						if (func_144(iLocal_92, 1))
						{
							if (!func_102())
							{
								func_103(&iLocal_92, 128);
								flag3 = false;
							}
						}
					
						if (func_101(true))
							flag3 = false;
					
						if (Global_79389)
							flag3 = false;
					
						if (func_100())
							flag3 = false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
							flag3 = false;
					
						if (func_99() || func_98(8, -1))
							flag3 = false;
					
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
							flag3 = false;
					
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
							flag3 = false;
					
						if (func_97(0) || func_96())
							flag3 = false;
					
						if (flag3)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
								flag3 = false;
						
							clockHours = CLOCK::GET_CLOCK_HOURS();
						
							if (iLocal_117 > iLocal_118)
							{
								if (clockHours < iLocal_117 && clockHours >= iLocal_118)
								{
									func_103(&iLocal_92, 128);
									flag3 = false;
								
									if (fLocal_91 < (fLocal_115 * fLocal_115) + 4f)
									{
										if (!func_144(iLocal_92, 134217728))
										{
											func_95("MG_NA_TIME" /*This activity is not available at this time of day. Come back between ~1~:00 and ~1~:00 to participate in this activity.*/, iLocal_117, iLocal_118);
											func_103(&iLocal_92, 134217728);
										}
									}
									else
									{
										func_151(&iLocal_92, 134217728);
									}
								}
							}
							else if (clockHours < iLocal_117 || clockHours >= iLocal_118)
							{
								func_103(&iLocal_92, 128);
								flag3 = false;
							
								if (fLocal_91 < (fLocal_115 * fLocal_115) + 4f)
								{
									if (!func_144(iLocal_92, 134217728))
									{
										func_95("MG_NA_TIME" /*This activity is not available at this time of day. Come back between ~1~:00 and ~1~:00 to participate in this activity.*/, iLocal_117, iLocal_118);
										func_103(&iLocal_92, 134217728);
									}
								}
								else
								{
									func_151(&iLocal_92, 134217728);
								}
							}
						
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								flag3 = false;
						
							if (flag3)
							{
								PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
							
								if (func_94(veLocal_84))
								{
									if (iLocal_94 == -1)
									{
										_CONTEXT_ADD_HELP_TEXT(&iLocal_94, 4, sLocal_99, 0, 0, 0, 0);
										func_103(&iLocal_92, 2048);
									}
									else if (!func_144(iLocal_92, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
										func_151(&iLocal_92, 2048);
									}
								
									if (func_90(iLocal_94, true))
									{
										sLocal_99 = sLocal_99;
										_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
										func_151(&iLocal_92, 2048);
										SCRIPT::REQUEST_SCRIPT(&uLocal_67);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
										func_137(5);
									}
								}
								else
								{
									sLocal_99 = sLocal_99;
									_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
									func_151(&iLocal_92, 2048);
									SCRIPT::REQUEST_SCRIPT(&uLocal_67);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
									func_137(5);
								}
							}
						}
					
						if (!flag3)
						{
							if (iLocal_94 != -1)
							{
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
								func_151(&iLocal_92, 2048);
								HUD::CLEAR_HELP(false);
							}
						}
					}
				
					func_52();
					break;
			
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
				
					if (SCRIPT::HAS_SCRIPT_LOADED(&uLocal_67))
					{
						if (iLocal_94 != -1)
							_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
					
						num = 2;
						flag = false;
					
						if (func_144(iLocal_92, 1))
						{
							if (func_118(6) || func_118(7))
							{
								num = 1;
								flag = true;
							}
						}
					
						if (num != 1)
							num = func_49(&iLocal_96, 6, iLocal_98, false, 0);
					
						if (num == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(veLocal_84, false))
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_84);
						
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						
							func_48();
						
							if (Global_45250)
								func_39(PLAYER::PLAYER_PED_ID());
						
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_REMOVE_FIRES | 16 | 32);
							iLocal_50 = func_38();
							func_103(&iLocal_92, 2);
							func_137(6);
							func_34(&uLocal_105);
						
							if (iLocal_97 != -1)
							{
								func_33(iLocal_97);
								func_31(func_32(iLocal_97), 0, 0);
							}
						}
						else if (num == 2)
						{
							func_30();
						}
						else if (num == 0)
						{
							func_137(10);
						}
					}
					else
					{
						func_30();
					}
					break;
			
				case 6:
					if (func_144(Global_112617, 262144))
					{
						func_151(&Global_112617, 262144);
						func_29();
					}
				
					if (func_144(iLocal_92, 2097152))
						if (!func_116(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
							func_137(10);
				
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND(func_25(&uLocal_105) * 1000f), iLocal_97, false);
						func_24(&uLocal_105);
						func_151(&iLocal_92, 256);
						func_21();
					
						if (flag)
						{
							func_151(&iLocal_92, 2);
						}
						else if (func_144(iLocal_92, 2))
						{
							if (func_144(Global_112617, 0))
							{
								func_20(&iLocal_96);
								iLocal_96 = -1;
								func_151(&iLocal_92, 2);
							}
							else
							{
								func_20(&iLocal_96);
								iLocal_96 = -1;
								func_151(&iLocal_92, 2);
							}
						}
					
						func_137(0);
					
						if (iLocal_97 != -1)
						{
							if (func_144(Global_112617, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_32(iLocal_97), 0, Global_101570, 0);
								func_19(func_32(iLocal_97), 0, Global_101570, true, false);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_32(iLocal_97), 0, Global_101570, 0);
								func_19(func_32(iLocal_97), 0, Global_101570, false, false);
							}
						}
					
						func_5();
						func_151(&Global_112617, 0);
					
						if (func_144(iLocal_92, 16777216))
							func_153(true);
					
						if (iLocal_97 != -1)
							if (Global_113969.f_9088)
								if (!func_141(0, iLocal_97))
									func_153(true);
					}
				
					func_4();
					break;
			
				case 8:
					func_137(0);
					break;
			
				case 10:
					func_153(true);
					break;
			
				case 9:
					if (fLocal_108 > fLocal_100 * fLocal_100)
					{
						if (iLocal_103 != 263)
						{
							func_138(iLocal_103, true, false);
							iLocal_103 = 263;
						}
					
						func_137(10);
					}
					break;
			
				case 7:
					func_2();
				
					if (iLocal_103 != 263)
						func_138(iLocal_103, false, false);
				
					if (iLocal_94 != -1)
						_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_99))
						if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_99))
							HUD::CLEAR_HELP(true);
				
					func_137(4);
					break;
			
				case 4:
					if (iLocal_102 % 150 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_104 == 2)
							{
								if (iLocal_104 == 2)
								{
									if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) && func_141(0, iLocal_97))
									{
										func_145();
									
										if (iLocal_103 != 263)
											func_138(iLocal_103, true, false);
									
										func_137(0);
									}
								}
							}
							else if (iLocal_104 == 0)
							{
								if (fLocal_108 > fLocal_100 * fLocal_100)
								{
									if (iLocal_103 != 263)
									{
										func_138(iLocal_103, true, false);
										iLocal_103 = 263;
									}
								
									func_137(10);
								}
							}
							else if (iLocal_104 == 1)
							{
								if (fLocal_108 > (80f + 5f) * (80f + 5f))
								{
									func_145();
								
									if (iLocal_103 != 263)
										func_138(iLocal_103, true, false);
								
									func_137(0);
								}
							}
						}
						else
						{
							func_138(iLocal_103, true, false);
						}
					}
					else
					{
						iLocal_102 = iLocal_102 + 1;
					}
					break;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xB3C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2() // Position - 0xB4F
{
	char* scenarioGroup;

	func_3(&(iLocal_327.f_71));
	func_3(&(iLocal_327.f_77));
	func_3(&(iLocal_327.f_99));
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_b@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_c@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_aa_smoke@male@idle_a");
	STREAMING::REMOVE_ANIM_DICT("random@street_race");
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");

	switch (iLocal_122)
	{
		case 0:
			scenarioGroup = "CanyonCliffs_Start";
			break;
	
		case 1:
			scenarioGroup = "RidgeRun_Start";
			break;
	
		case 3:
			scenarioGroup = "ValleyTrail_Start";
			break;
	
		case 4:
			scenarioGroup = "LakesideSplash_Start";
			break;
	
		case 5:
			scenarioGroup = "EcoFriendly_Start";
			break;
	
		case 2:
			scenarioGroup = "MinewardSpiral_Start";
			break;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(scenarioGroup))
		if (TASK::DOES_SCENARIO_GROUP_EXIST(scenarioGroup))
			if (TASK::IS_SCENARIO_GROUP_ENABLED(scenarioGroup))
				TASK::SET_SCENARIO_GROUP_ENABLED(scenarioGroup, false);

	return;
}

void func_3(var uParam0) // Position - 0xC25
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0)
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->[i]);
	}

	return;
}

void func_4() // Position - 0xC55
{
	return;
}

void func_5() // Position - 0xC5D
{
	if (func_144(Global_113969.f_19019, 1))
	{
		func_151(&(Global_113969.f_19019), 1);
		func_18();
		func_8();
		func_6();
	}

	return;
}

int func_6() // Position - 0xC8D
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xCD8
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

void func_8() // Position - 0xD00
{
	if (Global_113969.f_19019.f_18 < Global_113969.f_19019.f_19[iLocal_122] || Global_113969.f_19019.f_19[iLocal_122] == 0)
	{
		Global_113969.f_19019.f_19[iLocal_122] = Global_113969.f_19019.f_18;
		Global_113969.f_19019.f_18 = 999;
	}

	if (iLocal_122 == Global_113969.f_19019.f_1 || Global_113969.f_19019.f_1 == -1)
	{
		if (Global_113969.f_19019.f_1 != 5)
		{
			Global_113969.f_19019.f_1 = Global_113969.f_19019.f_1 + 1;
		
			switch (Global_113969.f_19019.f_1)
			{
				case 1:
					func_138(70, true, false);
					func_17(70, true);
					func_138(71, true, false);
					break;
			
				case 2:
					func_138(70, true, false);
					func_17(70, true);
					func_138(71, true, false);
					func_17(71, true);
					func_138(72, true, false);
					break;
			
				case 3:
					func_138(70, true, false);
					func_17(70, true);
					func_138(71, true, false);
					func_17(71, true);
					func_138(72, true, false);
					func_17(72, true);
					func_138(73, true, false);
					break;
			
				case 4:
					func_138(70, true, false);
					func_17(70, true);
					func_138(71, true, false);
					func_17(71, true);
					func_138(72, true, false);
					func_17(72, true);
					func_138(73, true, false);
					func_17(73, true);
					func_138(74, true, false);
					break;
			
				case 5:
					func_138(70, true, false);
					func_17(70, true);
					func_138(71, true, false);
					func_17(71, true);
					func_138(72, true, false);
					func_17(72, true);
					func_138(73, true, false);
					func_17(73, true);
					func_138(74, true, false);
					func_17(74, true);
					func_138(75, true, false);
					break;
			}
		
			func_14("OFFR_NEW" /*New offroad race unlocked at ~BLIP_OFF_ROAD_RACING~*/, 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_138(70, true, false);
			func_17(70, true);
			func_138(71, true, false);
			func_17(71, true);
			func_138(73, true, false);
			func_17(73, true);
			func_138(74, true, false);
			func_17(74, true);
			func_138(75, true, false);
			func_17(75, true);
			func_138(72, true, false);
			func_17(72, true);
		}
	
		switch (Global_113969.f_19019.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
		
			case 1:
				func_13(71);
				func_9(72);
				break;
		
			case 2:
				func_13(72);
				func_9(73);
				break;
		
			case 3:
				func_13(73);
				func_9(74);
				break;
		
			case 4:
				func_13(74);
				func_9(75);
				break;
		
			case 5:
				func_13(75);
				break;
		}
	}

	return;
}

void func_9(int iParam0) // Position - 0xFD3
{
	func_12(iParam0, true, false);
	func_11(iParam0, true);
	func_10(iParam0, true);
	return;
}

void func_10(int iParam0, BOOL bParam1) // Position - 0xFF1
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33328[num /*23*/].f_11, 4))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 4);
	else
		MISC::CLEAR_BIT(&(Global_33328[num /*23*/].f_11), 4);

	if (Global_33325 == 1)
		Global_33326 = 1;

	Global_33325 = 1;
	MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 18);
	return;
}

void func_11(int iParam0, BOOL bParam1) // Position - 0x1074
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33328[num /*23*/].f_11, 5))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 5);
	else
		MISC::CLEAR_BIT(&(Global_33328[num /*23*/].f_11), 5);

	if (Global_33325 == 1)
		Global_33326 = 1;

	Global_33325 = 1;
	MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 18);
	return;
}

void func_12(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10F7
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33328[num /*23*/].f_11, 6))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 6);
	else
		MISC::CLEAR_BIT(&(Global_33328[num /*23*/].f_11), 6);

	if (bParam2)
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 11);
	else
		MISC::CLEAR_BIT(&(Global_33328[num /*23*/].f_11), 11);

	if (Global_33325 == 1)
		Global_33326 = 1;

	Global_33325 = 1;
	MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 18);
	return;
}

void func_13(int iParam0) // Position - 0x11A0
{
	func_12(iParam0, false, false);
	func_11(iParam0, true);
	func_10(iParam0, true);
	return;
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x11BE
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_15(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x11E0
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
		func_16();
	}

	return;
}

void func_16() // Position - 0x13B4
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

void func_17(int iParam0, BOOL bParam1) // Position - 0x14CB
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33328[num /*23*/].f_11, 20))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 20);
	else
		MISC::CLEAR_BIT(&(Global_33328[num /*23*/].f_11), 20);

	if (Global_33325 == 1)
		Global_33326 = 1;

	Global_33325 = 1;
	MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 20);
	return;
}

void func_18() // Position - 0x1551
{
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	TASK::RESET_SCENARIO_TYPES_ENABLED();

	switch (iLocal_122)
	{
		case 0:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
	
		case 1:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-509.12537f, 1987.582f, 205.3305f, -948.5215f, 2752.7415f, 25.351442f, 300f, 1);
			break;
	
		case 3:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1943.822f, 4462.2856f, 0f, -229.07834f, 4227.072f, 50f, 250f, 1);
			break;
	
		case 4:
			break;
	
		case 5:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
	
		case 2:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2809.9475f, 2993.644f, -9.3564f, 2952.9688f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}

	return;
}

void func_19(char* sParam0, int iParam1, Any anParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1662
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98583))
		return;

	if (MISC::COMPARE_STRINGS(sParam0, &Global_98583, false, -1) != 0)
		return;

	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, anParam2, bParam3, bParam4, Global_95690);
	TEXT_LABEL_ASSIGN_STRING(&Global_98583, "", 64);
	return;
}

void func_20(var uParam0) // Position - 0x16A7
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

void func_21() // Position - 0x16E4
{
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || IS_PLAYSTATION_PLATFORM())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "PRESENCE_0_STR" /*Playing story*/, 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &textLabel);
	}

	return;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x1727
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0x173D
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_24(var uParam0) // Position - 0x1753
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

float func_25(int* piParam0) // Position - 0x1769
{
	if (func_28(piParam0))
		if (func_27(piParam0))
			return piParam0->f_2;
		else
			return func_26(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_26(BOOL bParam0) // Position - 0x17A5
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

BOOL func_27(int* piParam0) // Position - 0x17FD
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_28(int* piParam0) // Position - 0x180A
{
	return IS_BIT_SET(*piParam0, 1);
}

int func_29() // Position - 0x1817
{
	func_8();
	return 1;
}

void func_30() // Position - 0x1824
{
	return;
}

void func_31(char* sParam0, int iParam1, int iParam2) // Position - 0x182C
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_98583))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_98583, 0, 0, false, true, false);
		TEXT_LABEL_ASSIGN_STRING(&Global_98583, "", 64);
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_98583, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, _IS_MISSION_REPEAT_ACTIVE(false));
	return;
}

char* func_32(int iParam0) // Position - 0x186E
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
	
		case 1:
			return "MGDT";
	
		case 2:
			return "MGGF";
	
		case 3:
			return "OJHU";
	
		case 4:
			return "MGOR";
	
		case 5:
			return "MGPS";
	
		case 6:
			return "MGRP";
	
		case 7:
			return "MGSEA";
	
		case 8:
			return "MGSTR";
	
		case 9:
			return "MGSC";
	
		case 10:
			return "MGSP";
	
		case 11:
			return "MGSRm";
	
		case 12:
			return "OJTX";
	
		case 13:
			return "MGTN";
	
		case 14:
			return "OJTW";
	
		case 15:
			return "OJDA";
	
		case 16:
			return "OJDG";
	
		case 17:
			return "MGTR";
	
		case 18:
			return "MGYG";
	
		case 19:
			return "MGCR";
	}

	return "INVALID!";
}

void func_33(int iParam0) // Position - 0x19C1
{
	int num;
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
	{
		num = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &num, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || IS_PLAYSTATION_PLATFORM())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "SPMG_", 24);
		TEXT_LABEL_APPEND_INT(&textLabel, iParam0, 24);
		TEXT_LABEL_APPEND_STRING(&textLabel, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &textLabel);
	}

	return;
}

void func_34(int* piParam0) // Position - 0x1A1A
{
	if (!func_28(piParam0))
		func_37(piParam0);
	else
		func_35(piParam0);

	return;
}

void func_35(int* piParam0) // Position - 0x1A3B
{
	func_36(piParam0, 0f);
	return;
}

void func_36(int* piParam0, float fParam1) // Position - 0x1A4A
{
	piParam0->f_1 = func_26(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_37(int* piParam0) // Position - 0x1A75
{
	if (!func_28(piParam0))
		func_35(piParam0);

	return;
}

int func_38() // Position - 0x1A8D
{
	struct<18> args;
	int i;
	int num;

	HUD::CLEAR_HELP(true);
	args.f_4 = 5;
	args.f_10 = 5;
	args = iLocal_122;
	args.f_1 = { uLocal_119 };
	i = 0;

	for (i = 0; i < args.f_4; i = i + 1)
	{
		args.f_4[i] = iLocal_327[i /*14*/];
		args.f_10[i] = iLocal_327[i /*14*/].f_1;
	}

	args.f_16 = iLocal_327.f_83;
	args.f_17 = iLocal_327.f_83.f_1;
	GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneNeutral", 0, true);
	SYSTEM::WAIT(400);
	num = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&uLocal_51, &args, 18, essLocal_95);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_51);
	return num;
}

void func_39(Ped pedParam0) // Position - 0x1B2A
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	num = func_47(pedParam0);

	if (!(num == -1))
	{
		num2 = Global_45036[num /*5*/];
		func_42(1, num2, 1);
		return;
	}

	num3 = func_41(pedParam0);

	if (num3 == -1)
		return;

	func_40(num3);
	return;
}

void func_40(int iParam0) // Position - 0x1B83
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_45005[iParam0 /*6*/].f_1 == 0))
		if (Global_45005[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_45248 = 0;

	Global_45005[iParam0 /*6*/] = 13;
	Global_45005[iParam0 /*6*/].f_1 = 0;
	Global_45005[iParam0 /*6*/].f_2 = 0;
	Global_45005[iParam0 /*6*/].f_3 = 0;
	Global_45005[iParam0 /*6*/].f_4 = 0;
	Global_45003 = Global_45003 - 1;

	if (Global_45003 < 0)
		Global_45003 = 0;

	return;
}

int func_41(Ped pedParam0) // Position - 0x1C06
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_45005[i /*6*/].f_1 == pedParam0)
			return i;
	}

	return -1;
}

void func_42(int iParam0, int iParam1, int iParam2) // Position - 0x1C37
{
	func_43(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1C4C
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_45(iParam0, iParam1, iParam2))
		return;

	num = func_44();

	if (num == -1)
		return;

	Global_45117[num /*6*/] = iParam0;
	Global_45117[num /*6*/].f_1 = iParam1;
	Global_45117[num /*6*/].f_2 = iParam2;
	Global_45117[num /*6*/].f_3 = iParam3;
	Global_45117[num /*6*/].f_4 = iParam4;
	Global_45117[num /*6*/].f_5 = iParam5;
	return;
}

int func_44() // Position - 0x1CCE
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_45117[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_45(int iParam0, int iParam1, int iParam2) // Position - 0x1CFF
{
	if (func_46(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_46(int iParam0, int iParam1, int iParam2) // Position - 0x1D1A
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_45117[i /*6*/].f_2)
			if (iParam0 == Global_45117[i /*6*/])
				if (iParam1 == Global_45117[i /*6*/].f_1)
					return i;
	}

	return -1;
}

int func_47(Ped pedParam0) // Position - 0x1D66
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_45036[i /*5*/] == -1))
			if (pedParam0 == Global_45036[i /*5*/].f_1)
				return i;
	}

	return -1;
}

void func_48() // Position - 0x1DAF
{
	if (Global_9605[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9605[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9605[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9605[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9605[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9605[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_8800, 25);
	MISC::SET_BIT(&Global_8801, 11);
	return;
}

int func_49(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x1E2C
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98991.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_51(0))
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
			func_50(uParam0, iParam4);
	}

	return 2;
}

void func_50(var uParam0, int iParam1) // Position - 0x1F63
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

BOOL func_51(int iParam0) // Position - 0x1FB2
{
	if (Global_44042 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void func_52() // Position - 0x1FD4
{
	float num;

	num = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_119);

	if (num < 62500f)
	{
		func_82();
		func_79();
	
		if (bLocal_157)
		{
			if (num < 64f)
			{
				func_78();
				bLocal_157 = false;
			}
		}
	
		if (num < 400f)
			func_56();
	}

	if (!bLocal_158)
	{
		if (func_54())
		{
			bLocal_158 = true;
			func_53();
		}
	}

	return;
}

void func_53() // Position - 0x203C
{
	iLocal_46 = iLocal_46 + 1;
	return;
}

BOOL func_54() // Position - 0x204A
{
	int i;

	for (i = 0; i < func_55(); i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_327[i /*14*/]) || !ENTITY::DOES_ENTITY_EXIST(iLocal_327[i /*14*/].f_1))
			return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_327.f_83) || !ENTITY::DOES_ENTITY_EXIST(iLocal_327.f_83.f_1))
		return false;

	return true;
}

int func_55() // Position - 0x20B2
{
	switch (iLocal_122)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
	
		case 1:
		case 4:
			return 4;
	}

	return 0;
}

void func_56() // Position - 0x20F4
{
	int num;
	char* str;

	if (!func_28(&uLocal_145))
	{
		func_37(&uLocal_145);
		return;
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_155) && !ENTITY::IS_ENTITY_DEAD(pedLocal_155, false))
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(pedLocal_155))
			return;

	if (func_25(&uLocal_145) >= 8f)
	{
		num = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3) + 1;
	
		if (num > 0 && num <= 3)
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_327[num - 1 /*14*/], false))
				return;
		
			switch (num)
			{
				case 1:
					str = "ORR_GUY1";
					break;
			
				case 2:
					str = "ORR_GUY2";
					break;
			
				case 3:
					str = "ORR_GUY3";
					break;
			}
		
			_CONVERSATION_ADD_LINE(&uLocal_161, "ORRAUD", str, 3, 0, 0, 0);
			func_35(&uLocal_145);
		}
	}

	return;
}

int _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x21BE
{
	func_77(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_58(sParam2, iParam3, false);
}

int func_58(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x220C
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
					func_76();
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
	
		if (func_98(8, -1))
			return 0;
	
		Global_22362 = { Global_22356 };
		func_75();
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
			
				if (func_67())
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
		
			if (func_66())
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
		
			func_65();
			Global_22296 = bParam2;
		}
	
		Global_22288 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_64();
		func_59();
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
		func_76();
	}

	return 0;
}

void func_59() // Position - 0x24DA
{
	if (!func_60())
		return;

	if (Global_22292)
	{
		TEXT_LABEL_COPY(&(Global_1971465.f_1), { Global_21905 }, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}

	return;
}

BOOL func_60() // Position - 0x2511
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79389)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_61(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_61(Player plParam0) // Position - 0x2574
{
	return func_62(plParam0, 20);
}

BOOL func_62(Player plParam0, int iParam1) // Position - 0x2584
{
	return IS_BIT_SET(Global_1887305[plParam0 /*610*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x259C
{
	return -1;
}

void func_64() // Position - 0x25A5
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

void func_65() // Position - 0x25D7
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

BOOL func_66() // Position - 0x266C
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

BOOL func_67() // Position - 0x2693
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x272C
{
	if (func_118(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x27CE
{
	func_70();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_70() // Position - 0x27E7
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_71(character) && !func_118(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_71(Global_113969.f_2366.f_539.f_4321))
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

BOOL func_71(eCharacter echParam0) // Position - 0x28E4
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x28F0
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x292D
{
	if (func_71(character))
		return func_74(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_74(eCharacter echParam0) // Position - 0x2952
{
	return Global_2169[echParam0 /*29*/];
}

void func_75() // Position - 0x2961
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

void func_76() // Position - 0x29B9
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

void func_77(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2A10
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

void func_78() // Position - 0x2A66
{
	int clockHours;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_327.f_83, false))
	{
		clockHours = CLOCK::GET_CLOCK_HOURS();
	
		if (clockHours <= iLocal_117 && clockHours >= iLocal_118)
		{
			bLocal_157 = false;
			return;
		}
	
		CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_327.f_83, 0f, 0f, 0.75f, true, 2000, 2000, 2000, 0);
	}

	return;
}

void func_79() // Position - 0x2AC2
{
	int clockHours;
	int taskSequenceId;
	int taskSequenceId2;

	clockHours = CLOCK::GET_CLOCK_HOURS();

	if (clockHours <= iLocal_117 && clockHours >= iLocal_118)
	{
		iLocal_326 = 0;
		return;
	}

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_155, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		switch (iLocal_326)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedLocal_155, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 64f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					bLocal_159 = false;
					bLocal_160 = false;
					iLocal_326 = 1;
				}
				break;
		
			case 1:
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_155, taskSequenceId);
				TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
				iLocal_326 = 2;
				break;
		
			case 2:
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_155, SCRIPT_TASK_PERFORM_SEQUENCE) != 1 || PED::IS_PED_FACING_PED(pedLocal_155, PLAYER::PLAYER_PED_ID(), 20f) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_155, PLAYER::PLAYER_PED_ID(), -1);
				
					if (!bLocal_160)
						func_80(pedLocal_155, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11, false);
					else
						func_80(pedLocal_155, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11, false);
				
					iLocal_326 = 3;
				}
				break;
		
			case 3:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(pedLocal_155))
				{
					func_35(&uLocal_142);
					TASK::TASK_PLAY_ANIM(pedLocal_155, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, false, false, false);
					iLocal_326 = 4;
				}
				break;
		
			case 4:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedLocal_155, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 225f)
				{
					TASK::OPEN_SEQUENCE_TASK(&taskSequenceId2);
					TASK::TASK_ACHIEVE_HEADING(0, iLocal_327.f_83.f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, iLocal_327.f_83.f_12, iLocal_327.f_83.f_13, 4f, -8f, -1, 1, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(taskSequenceId2);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_155, taskSequenceId2);
					TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId2);
					iLocal_326 = 0;
				}
			
				if (func_28(&uLocal_142))
				{
					if (func_25(&uLocal_142) >= 5f && !bLocal_159)
					{
						bLocal_159 = true;
						iLocal_326 = 1;
					}
					else if (func_25(&uLocal_142) >= 10f && !bLocal_160)
					{
						bLocal_160 = true;
						iLocal_326 = 1;
					}
				}
				break;
		
			case 5:
				break;
		}
	}

	return;
}

void func_80(Ped pedParam0, char* sParam1, char* sParam2, int iParam3, BOOL bParam4) // Position - 0x2CEF
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(pedParam0, sParam1, sParam2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3), bParam4);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x2D09
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

void func_82() // Position - 0x2EFE
{
	int randomIntInRange;
	int randomIntInRange2;
	int i;
	int taskSequenceId;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_327[i /*14*/].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_327[i /*14*/]))
		{
			if (func_87(iLocal_327[i /*14*/], true, false, false, false) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_327[i /*14*/].f_1, true))
			{
				func_85();
				func_84(iLocal_103);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		
			if (!PED::IS_PED_INJURED(iLocal_327[i /*14*/]))
			{
				if (func_28(&uLocal_123[i /*3*/]))
				{
					if (func_25(&uLocal_123[i /*3*/]) > uLocal_148[i])
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_327[i /*14*/].f_1, false) && PED::IS_PED_IN_VEHICLE(iLocal_327[i /*14*/], iLocal_327[i /*14*/].f_1, false))
						{
							randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
							randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
							TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
							TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_327[i /*14*/].f_1, 1, randomIntInRange);
							TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_327[i /*14*/].f_1, 31, randomIntInRange2);
							TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						
							if (!PED::IS_PED_INJURED(iLocal_327[i /*14*/]))
								TASK::TASK_PERFORM_SEQUENCE(iLocal_327[i /*14*/], taskSequenceId);
						
							TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
						}
					
						func_35(&uLocal_123[i /*3*/]);
						uLocal_148[i] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f);
					}
				}
				else
				{
					func_37(&uLocal_123[i /*3*/]);
				}
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_327[i /*14*/], false))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_327[i /*14*/]) && !PED::IS_PED_RAGDOLL(iLocal_327[i /*14*/]) && !TASK::IS_PED_GETTING_UP(iLocal_327[i /*14*/]))
				{
					iLocal_327[i /*14*/].f_11 = 1;
				}
				else if (iLocal_327[i /*14*/].f_11)
				{
					TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
					TASK::TASK_ACHIEVE_HEADING(0, iLocal_327[i /*14*/].f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, iLocal_327[i /*14*/].f_12, iLocal_327[i /*14*/].f_13, 4f, -8f, -1, 1, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_327[i /*14*/], taskSequenceId);
					TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
					iLocal_327[i /*14*/].f_11 = 0;
				}
			
				if (PED::IS_PED_RAGDOLL(iLocal_327[i /*14*/]) || TASK::IS_PED_GETTING_UP(iLocal_327[i /*14*/]))
				{
					if (!iLocal_327[i /*14*/].f_10 && PED::IS_PED_RAGDOLL(iLocal_327[i /*14*/]) || TASK::IS_PED_GETTING_UP(iLocal_327[i /*14*/]))
						iLocal_327.f_101 = iLocal_327.f_101 + 1;
				
					iLocal_327[i /*14*/].f_10 = 1;
				}
				else if (iLocal_327[i /*14*/].f_10)
				{
					TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
					TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", func_83(), 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_ACHIEVE_HEADING(0, iLocal_327[i /*14*/].f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, iLocal_327[i /*14*/].f_12, iLocal_327[i /*14*/].f_13, 4f, -8f, -1, 1, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_327[i /*14*/], taskSequenceId);
					TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
					iLocal_327[i /*14*/].f_10 = 0;
				}
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(iLocal_327.f_83.f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_327.f_83))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_327.f_83.f_1, false))
			veLocal_84 = iLocal_327.f_83.f_1;
	
		if (func_87(iLocal_327.f_83, true, false, false, false))
		{
			func_85();
			func_84(iLocal_103);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	
		if (!PED::IS_PED_INJURED(iLocal_327.f_83))
		{
			if (func_28(&uLocal_139))
			{
				if (func_25(&uLocal_139) > fLocal_154)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_327.f_83.f_1, false) && PED::IS_PED_IN_VEHICLE(iLocal_327.f_83, iLocal_327.f_83.f_1, false))
					{
						randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
						randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_327.f_83.f_1, 1, randomIntInRange);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_327.f_83.f_1, 31, randomIntInRange2);
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
					
						if (!PED::IS_PED_INJURED(iLocal_327.f_83))
							TASK::TASK_PERFORM_SEQUENCE(iLocal_327.f_83, taskSequenceId);
					
						TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
					}
				
					func_35(&uLocal_139);
					fLocal_154 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f);
				}
			}
			else
			{
				func_37(&uLocal_139);
			}
		}
	
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_327.f_83, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_327.f_83) && !PED::IS_PED_RAGDOLL(iLocal_327.f_83) && !TASK::IS_PED_GETTING_UP(iLocal_327.f_83))
			{
				iLocal_327.f_83.f_11 = 1;
			}
			else if (iLocal_327.f_83.f_11)
			{
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
				TASK::TASK_ACHIEVE_HEADING(0, iLocal_327.f_83.f_9, 1000);
				TASK::TASK_PLAY_ANIM(0, iLocal_327.f_83.f_12, iLocal_327.f_83.f_13, 4f, -8f, -1, 1, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_327.f_83, taskSequenceId);
				TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
				iLocal_327.f_83.f_11 = 0;
			}
		
			if (PED::IS_PED_RAGDOLL(iLocal_327.f_83) || TASK::IS_PED_GETTING_UP(iLocal_327.f_83))
			{
				if (!iLocal_327.f_83.f_10)
					iLocal_327.f_101 = iLocal_327.f_101 + 1;
			
				iLocal_327.f_83.f_10 = 1;
			}
			else if (iLocal_327.f_83.f_10)
			{
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", func_83(), 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_ACHIEVE_HEADING(0, iLocal_327.f_83.f_9, 1000);
				TASK::TASK_PLAY_ANIM(0, iLocal_327.f_83.f_12, iLocal_327.f_83.f_13, 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_327.f_83, taskSequenceId);
				TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
				iLocal_326 = 4;
				func_35(&uLocal_142);
				iLocal_327.f_83.f_10 = 0;
			}
		}
	}

	return;
}

char* func_83() // Position - 0x349C
{
	int num;
	char* str;

	num = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2;

	switch (num)
	{
		case 0:
			str = "gesture_what_hard";
			break;
	
		case 1:
		default:
			str = "gesture_what_soft";
			break;
	}

	return str;
}

void func_84(int iParam0) // Position - 0x34D8
{
	if (iLocal_93 < 5)
	{
		if (iParam0 != 263)
		{
			iParam0 < 0 || iParam0 >= 263;
			func_138(iParam0, false, false);
		}
	
		iLocal_103 = 263;
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
		iLocal_93 = 9;
	}

	return;
}

void func_85() // Position - 0x351B
{
	int sizeAndPeds;
	int taskSequenceId;
	int i;

	sizeAndPeds = 10;
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1);
	i = 0;

	for (i = 0; i < sizeAndPeds; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sizeAndPeds[i]) && !PED::IS_PED_INJURED(sizeAndPeds[i]))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				TASK::TASK_SMART_FLEE_PED(sizeAndPeds[i], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(300, 900));
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
				TASK::TASK_PERFORM_SEQUENCE(sizeAndPeds[i], taskSequenceId);
				TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			}
		}
	}

	switch (Global_113969.f_19019.f_1)
	{
		case 0:
			func_86(0);
			break;
	
		case 1:
			func_86(0);
			break;
	
		case 3:
			func_86(0);
			break;
	
		case 4:
			func_86(0);
			break;
	
		case 5:
			func_86(0);
			break;
	
		case 2:
			func_86(0);
			break;
	}

	return;
}

void func_86(int iParam0) // Position - 0x362B
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iParam0 == 0;
	}

	iLocal_104 = iParam0;
	iLocal_102 = 0;
	iLocal_93 = 7;
	return;
}

BOOL func_87(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x364C
{
	Ped target;
	float entityCoords;

	target = PLAYER::PLAYER_PED_ID();

	if (iLocal_327.f_101 >= 3)
		return true;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
		
			if (bParam1)
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
					return true;
		
			if (bParam2)
				if (PED::IS_PED_IN_COMBAT(pedParam0, target))
					return true;
		
			if (bParam4)
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(target, pedParam0))
					return true;
		
			if (bParam3)
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
					if (func_88(pedParam0, true) < 20f)
						return true;
		
			if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(pedParam0, false), target, true))
					return true;
		
			if (PED::IS_PED_FLEEING(pedParam0))
				return true;
		
			if (WEAPON::IS_PED_ARMED(target, 4))
				if (PED::IS_PED_SHOOTING(target))
					if (ENTITY::IS_ENTITY_AT_COORD(pedParam0, ENTITY::GET_ENTITY_COORDS(target, true), 45f, 45f, 45f, false, true, 0))
						return true;
		
			if (MISC::IS_BULLET_IN_AREA(entityCoords, 4f, true))
				return true;
		
			if (MISC::IS_PROJECTILE_IN_AREA(entityCoords - 5f, entityCoords.f_1 - 5f, entityCoords.f_2 - 5f, entityCoords + 5f, entityCoords.f_1 + 5f, entityCoords.f_2 + 5f, false))
				return true;
		
			if (PED::IS_PED_BEING_JACKED(pedParam0))
				if (PED::GET_PEDS_JACKER(pedParam0) == target)
					return true;
		
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, entityCoords, 25f) && !FIRE::IS_EXPLOSION_IN_SPHERE(11, entityCoords, 25f) && !FIRE::IS_EXPLOSION_IN_SPHERE(13, entityCoords, 25f))
				return true;
		
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedParam0);
		}
		else if (bParam1)
		{
			return true;
		}
	}

	return false;
}

float func_88(Ped pedParam0, BOOL bParam1) // Position - 0x3806
{
	return func_89(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), pedParam0, bParam1);
}

float func_89(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x381E
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

BOOL func_90(int iParam0, BOOL bParam1) // Position - 0x387C
{
	int num;

	num = func_91(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_97(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_44799[num /*32*/] == true && Global_44799[num /*32*/].f_4 == 1)
		{
			if (bParam1)
				if (Global_44799[num /*32*/].f_29)
					return false;
		
			Global_44799[num /*32*/].f_5 = 1;
			Global_44799[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_44799[num /*32*/] == false;
			Global_44799[num /*32*/].f_7;
		}
	}

	return false;
}

int func_91(int iParam0) // Position - 0x3934
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44799[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x396F
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_91(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_44799[num /*32*/])
		{
			Global_44799[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x39C6
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1974937116) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			_CONTEXT_REMOVE_HELP_TEXT(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_44799[i /*32*/])
		{
			Global_44799[i /*32*/] = true;
			Global_44799[i /*32*/].f_1 = Global_45000;
			Global_45000 = Global_45000 + 1;
			Global_44799[i /*32*/].f_4 = 0;
			Global_44799[i /*32*/].f_29 = 0;
			Global_44799[i /*32*/].f_5 = 0;
			Global_44799[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_44799[i /*32*/].f_8), sParam2, 16);
			Global_44799[i /*32*/].f_6 = iParam3;
			Global_44799[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44799[i /*32*/].f_7 = 0;
			Global_44799[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44799[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_44799[i /*32*/].f_13), sParam4, 64);
				Global_44799[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[i /*32*/].f_12 = 0;
				Global_44799[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_44799[i /*32*/].f_1;
			return;
		}
	}

	return;
}

BOOL func_94(Vehicle veParam0) // Position - 0x3AF1
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam0, false))
		return false;
	else
		return true;

	return true;
}

void func_95(char* sParam0, int iParam1, int iParam2) // Position - 0x3B1E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, -1);
	return;
}

BOOL func_96() // Position - 0x3B40
{
	return Global_76498;
}

BOOL func_97(int iParam0) // Position - 0x3B4C
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

BOOL func_98(int iParam0, int iParam1) // Position - 0x3BA3
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

BOOL func_99() // Position - 0x3BDB
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

BOOL func_100() // Position - 0x3BF0
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1424752554) > 0)
		return true;

	return false;
}

BOOL func_101(BOOL bParam0) // Position - 0x3C0A
{
	if (bParam0)
		return Global_23692.f_4 && Global_23692.f_104 == 4;

	return Global_23692.f_4;
}

BOOL func_102() // Position - 0x3C33
{
	return true;
}

void func_103(var uParam0, int iParam1) // Position - 0x3C3C
{
	func_104(uParam0, iParam1);
	return;
}

void func_104(var uParam0, int iParam1) // Position - 0x3C4C
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_105() // Position - 0x3C5D
{
	int weaponHash;
	BOOL flag;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return false;

	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);

	if (weaponHash == 0 || weaponHash == -1569615261 || weaponHash == -1833087301 || weaponHash == -72657034)
		flag = false;
	else
		flag = true;

	flag;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACK) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID());

	return flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_ATTACK) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_DETONATE) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID());
}

BOOL func_106(int iParam0) // Position - 0x3D67
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_71(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_113() || Global_113016 || Global_32951 || func_112() || func_98(8, -1) || func_111() || func_110() || func_109() || func_100() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_113() || Global_32951 || func_112() || func_98(8, -1) || func_109() || func_111() || func_110() || func_100() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_113() || Global_113016 || Global_32951 || func_112() || func_98(8, -1) || func_109() || func_111() || func_110() || func_100() || Global_113969.f_7691.f_919[character] == 5 || Global_44589 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_113() || Global_113016 || Global_32951 || func_112() || func_98(8, -1) || func_111() || func_110() || func_100() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_113() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_98(8, -1) || func_100() || func_108() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_98(8, -1) || func_111() || func_110() || func_108() || func_107())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_113() || Global_32951 || func_112() || func_98(8, -1) || func_110() || func_109() || func_100() || Global_113969.f_7691.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_113() || func_110() || Global_113016 || Global_32951 || func_112() || Global_45250 || func_98(8, -1) || func_109() || func_108() || func_100() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_113() || Global_113016 || Global_32951 || func_112() || func_98(8, -1) || func_109() || func_108() || func_111() || func_110() || func_100())
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

BOOL func_107() // Position - 0x4485
{
	return Global_101572.f_1;
}

BOOL func_108() // Position - 0x4493
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 13);

	return false;
}

BOOL func_109() // Position - 0x44B6
{
	if (Global_79650)
		return true;
	else if (Global_64160 && !Global_64166)
		return true;

	return false;
}

BOOL func_110() // Position - 0x44E0
{
	return Global_101585.f_394 > 0;
}

BOOL func_111() // Position - 0x44F1
{
	return Global_101585.f_393 > 0;
}

BOOL func_112() // Position - 0x4502
{
	return Global_1575083;
}

BOOL func_113() // Position - 0x450E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98991.f_44 == 1;

	return false;
}

BOOL func_114() // Position - 0x452A
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1196127390) > 0)
		return true;

	return false;
}

Entity func_115() // Position - 0x4544
{
	return Global_97345;
}

BOOL func_116(int iParam0) // Position - 0x4550
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_118(6) || func_118(7))
				return true;
			else
				return func_116(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_106(4))
					return true;
			break;
	}

	return false;
}

BOOL func_117(int iParam0) // Position - 0x45C2
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_33328[num /*23*/].f_19);
}

BOOL func_118(int iParam0) // Position - 0x45FE
{
	return Global_44042 == iParam0;
}

void func_119() // Position - 0x460C
{
	int clockHours;
	char* scenarioGroup;

	clockHours = CLOCK::GET_CLOCK_HOURS();

	if (clockHours <= iLocal_117 && clockHours >= iLocal_118 || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		return;

	if (bLocal_156)
	{
		func_129();
		func_128();
	
		switch (iLocal_122)
		{
			case 0:
				func_127(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.4417f, 4440.8657f, 37.2504f, 184.125f);
				func_127(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.7954f, 4438.275f, 37.402f, 78.7749f);
				func_127(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_127(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.2506f, 4438.761f, 36.9256f, 23.8377f);
				func_127(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.3187f, 4439.913f, 36.7166f, 250.6112f);
				func_126(-1939.5636f, 4443.3057f, 36.3803f, 262.3551f, -1936.2085f, 4444.125f, 36.8594f, 123.8187f);
				break;
		
			case 1:
				func_127(-520.2097f, 2010.8163f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_127(-516.9937f, 2013.9797f, 203.5907f, 19.3803f, -517.1741f, 2010.8132f, 203.8412f, 125.7555f);
				func_127(-518.3414f, 2005.4489f, 204.1878f, 20.7231f, -519.0882f, 2013.6492f, 203.3304f, 195.7951f);
				func_127(-514.8247f, 2008.5737f, 204.3629f, 20.2278f, -514.2933f, 2004.9231f, 204.5935f, 126.8655f);
				func_126(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.6216f, 204.5549f, 1.757f);
				break;
		
			case 3:
				func_127(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_127(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.2505f, 43.8681f, 179.3787f);
				func_127(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.1016f, 43.8909f, 311.8915f);
				func_127(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_127(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.6826f, 43.8597f, 28.0083f);
				func_126(-225.6736f, 4224.5034f, 43.8435f, 77.7579f, -227.2893f, 4224.6987f, 43.8335f, 36.55f);
				break;
		
			case 4:
				func_127(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.1633f, 32.9854f, 29.8332f);
				func_127(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.9076f, 3841.4924f, 32.9721f, 78.3f);
				func_127(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.0966f, 3842.6758f, 33.3217f, 198.5355f);
				func_127(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.4274f, 3837.3677f, 32.9989f, 9.9463f);
				func_126(1603.4052f, 3836.324f, 33.1144f, 305.055f, 1605.7883f, 3840.2363f, 33.2826f, 288.7775f);
				break;
		
			case 5:
				func_127(2046.7721f, 2130.4421f, 91.9486f, 233.1493f, 2036.1232f, 2133.9807f, 92.615f, 260.0519f);
				func_127(2045.3445f, 2126.3523f, 91.9358f, 236.3633f, 2044.4219f, 2128.9607f, 92.088f, 47.8797f);
				func_127(2036.512f, 2137.8071f, 92.6507f, 237.2446f, 2041.778f, 2131.3538f, 92.4544f, 226.7534f);
				func_127(2041.739f, 2134.3242f, 92.4013f, 232.956f, 2039.6033f, 2132.5635f, 92.6648f, 61.0834f);
				func_127(2039.7745f, 2130.025f, 92.5324f, 241.6337f, 2038.7444f, 2134.5232f, 92.6235f, 128.98f);
				func_126(2030.8984f, 2134.1968f, 92.5014f, 249.4471f, 2036.5801f, 2135.382f, 92.605f, 233.2111f);
				break;
		
			case 2:
				func_127(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.3918f, 42.1008f, 29.7228f);
				func_127(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.1204f, 2779.783f, 42.3128f, 286.9825f);
				func_127(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.2527f, 2783.97f, 42.5421f, 108.7426f);
				func_127(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.5823f, 2787.4763f, 42.6953f, 157.4885f);
				func_127(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.7188f, 2784.905f, 42.6444f, 213.8879f);
				func_126(2995.525f, 2775.5225f, 41.98f, 4.3249f, 2993.511f, 2776.9482f, 42.0941f, 305.3785f);
				break;
		}
	
		switch (iLocal_122)
		{
			case 0:
				scenarioGroup = "CanyonCliffs_Start";
				break;
		
			case 1:
				scenarioGroup = "RidgeRun_Start";
				break;
		
			case 3:
				scenarioGroup = "ValleyTrail_Start";
				break;
		
			case 4:
				scenarioGroup = "LakesideSplash_Start";
				break;
		
			case 5:
				scenarioGroup = "EcoFriendly_Start";
				break;
		
			case 2:
				scenarioGroup = "MinewardSpiral_Start";
				break;
		}
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(scenarioGroup))
			if (TASK::DOES_SCENARIO_GROUP_EXIST(scenarioGroup))
				if (!TASK::IS_SCENARIO_GROUP_ENABLED(scenarioGroup))
					TASK::SET_SCENARIO_GROUP_ENABLED(scenarioGroup, true);
	}

	func_120();
	return;
}

void func_120() // Position - 0x4CEF
{
	int taskSequenceId;
	int num;
	int num2;
	char* animDictionary;
	char* animationName;
	int i;

	if (fLocal_108 > 9f)
	{
		i = 0;
	
		for (i = 0; i < iLocal_327; i = i + 1)
		{
			if (!_IS_NULL_VECTOR(iLocal_327[i /*14*/].f_2))
			{
				iLocal_327[i /*14*/].f_1 = VEHICLE::CREATE_VEHICLE(func_124(false), iLocal_327[i /*14*/].f_2, iLocal_327[i /*14*/].f_5, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_327[i /*14*/].f_1, 1084227584);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_327[i /*14*/].f_1, true);
			
				if (_IS_NULL_VECTOR(iLocal_327[i /*14*/].f_6))
				{
					iLocal_327[i /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_327[i /*14*/].f_1, PED_TYPE_CIVMALE, func_123(), -1, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_327[i /*14*/].f_1, true, false, false);
				}
				else
				{
					iLocal_327[i /*14*/] = PED::CREATE_PED(PED_TYPE_CIVMALE, func_123(), iLocal_327[i /*14*/].f_6, iLocal_327[i /*14*/].f_9, true, true);
					num = i;
				
					switch (num)
					{
						case 0:
						case 3:
							animationName = "idle_a";
							break;
					
						case 1:
						case 4:
							animationName = "idle_b";
							break;
					
						default:
							animationName = "idle_c";
							break;
					}
				
					num2 = i;
				
					switch (num2)
					{
						case 0:
						case 4:
							animDictionary = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
					
						case 1:
						case 3:
							animDictionary = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
					
						case 2:
						case 5:
							animDictionary = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
				
					iLocal_327[i /*14*/].f_12 = animDictionary;
					iLocal_327[i /*14*/].f_13 = animationName;
					TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
					TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(100, 500));
					TASK::TASK_PLAY_ANIM(0, animDictionary, animationName, 8f, -8f, -1, 8193, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_327[i /*14*/], taskSequenceId);
					TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
				}
			
				PED::SET_PED_HELMET(iLocal_327[i /*14*/], true);
				PED::GIVE_PED_HELMET(iLocal_327[i /*14*/], true, 4096, -1);
			}
		}
	
		iLocal_327.f_83.f_1 = VEHICLE::CREATE_VEHICLE(func_124(true), iLocal_327.f_83.f_2, iLocal_327.f_83.f_5, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_327.f_83.f_1, 1084227584);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_327.f_83.f_1, true);
	
		if (_IS_NULL_VECTOR(iLocal_327.f_83.f_6))
		{
			iLocal_327.f_83 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_327.f_83.f_1, PED_TYPE_CIVMALE, func_123(), -1, true, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_327.f_83.f_1, true, false, false);
		}
		else
		{
			iLocal_327.f_83 = PED::CREATE_PED(PED_TYPE_CIVMALE, func_123(), iLocal_327.f_83.f_6, iLocal_327.f_83.f_9, true, true);
			num = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3;
		
			switch (num)
			{
				case 0:
					animationName = "idle_a";
					break;
			
				case 1:
					animationName = "idle_b";
					break;
			
				default:
					animationName = "idle_c";
					break;
			}
		
			iLocal_327.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			iLocal_327.f_83.f_13 = animationName;
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_STAND_STILL(0, func_122(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 1000, 1, 1000));
			TASK::TASK_PLAY_ANIM(0, "amb@world_human_aa_smoke@male@idle_a", animationName, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_327.f_83, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	}
	else if (fLocal_108 < 225f)
	{
	}

	pedLocal_155 = iLocal_327.f_83;

	if (!ENTITY::IS_ENTITY_DEAD(iLocal_327[0 /*14*/], false))
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_161, 1, iLocal_327[0 /*14*/], "MALE1", 0, 1);

	if (!ENTITY::IS_ENTITY_DEAD(iLocal_327[1 /*14*/], false))
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_161, 2, iLocal_327[1 /*14*/], "MALE2", 0, 1);

	if (!ENTITY::IS_ENTITY_DEAD(iLocal_327[2 /*14*/], false))
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_161, 3, iLocal_327[3 /*14*/], "MALE3", 0, 1);

	if (!func_28(&uLocal_145))
		func_37(&uLocal_145);
	else
		func_35(&uLocal_145);

	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x50C0
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

int func_122(int iParam0, int iParam1, int iParam2) // Position - 0x515B
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

Hash func_123() // Position - 0x5180
{
	return 1694362237;
}

Hash func_124(BOOL bParam0) // Position - 0x518D
{
	int randomIntInRange;
	int i;

	randomIntInRange = 0;
	i = 0;

	for (i = 0; i < iLocal_327.f_71; i = i + 1)
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(iLocal_327.f_71[i]))
			randomIntInRange = randomIntInRange + 1;
	}

	if (iLocal_122 == 1)
		if (!bParam0)
			randomIntInRange = randomIntInRange - 1;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, randomIntInRange);

	if (iLocal_327.f_71[randomIntInRange] == 0)
	{
		if (iLocal_327.f_71[0] == 0)
		{
			switch (iLocal_122)
			{
				case 0:
					return 788045382;
			
				case 1:
					return 914654722;
			
				case 3:
					return 788045382;
			
				case 4:
					return 788045382;
			
				case 5:
					return 914654722;
			
				case 2:
					return 788045382;
			}
		}
		else
		{
			return iLocal_327.f_71[0];
		}
	}

	return iLocal_327.f_71[randomIntInRange];
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x527F
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_126(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7) // Position - 0x52A9
{
	if (_IS_NULL_VECTOR(iLocal_327.f_83.f_2))
	{
		iLocal_327.f_83.f_2 = { fParam0 };
		iLocal_327.f_83.f_5 = fParam3;
		iLocal_327.f_83.f_6 = { fParam4 };
		iLocal_327.f_83.f_9 = fParam7;
	}

	return;
}

void func_127(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7) // Position - 0x52ED
{
	int i;
	BOOL flag;

	i = 0;
	flag = false;

	for (i = 0; i < iLocal_327; i = i + 1)
	{
		if (!flag && _IS_NULL_VECTOR(iLocal_327[i /*14*/].f_2))
		{
			iLocal_327[i /*14*/].f_2 = { fParam0 };
			iLocal_327[i /*14*/].f_5 = fParam3;
			iLocal_327[i /*14*/].f_6 = { fParam4 };
			iLocal_327[i /*14*/].f_9 = fParam7;
			flag = true;
		}
	}

	if (flag)
	{
	}

	return;
}

void func_128() // Position - 0x5368
{
	int i;

	i = 0;

	for (i = 0; i < iLocal_327; i = i + 1)
	{
		iLocal_327[i /*14*/].f_2 = { 0f, 0f, 0f };
		iLocal_327[i /*14*/].f_5 = 0f;
	}

	iLocal_327.f_83.f_2 = { 0f, 0f, 0f };
	iLocal_327.f_83.f_5 = 0f;
	return;
}

void func_129() // Position - 0x53B3
{
	switch (iLocal_122)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, true, false, true);
			MISC::CLEAR_AREA_OF_VEHICLES(-227.43f, 3888.9f, 36.41f, 50f, true, false, false, false, false, false, 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", false);
			break;
	
		case 1:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-509.12537f, 1987.582f, 205.3305f, -948.5215f, 2752.7415f, 25.351442f, 300f, false, false, true);
			break;
	
		case 3:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1943.822f, 4462.2856f, 0f, -229.07834f, 4227.072f, 50f, 250f, true, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1943.822f, 4462.2856f, 0f, -229.07834f, 4227.072f, 50f, 250f, false, false, false, false, false, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, true, false, true);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_EMPTY", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", false);
			break;
	
		case 4:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_EMPTY", true);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", true);
			break;
	
		case 5:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", false);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, true, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, false, false, false, false, false, 0, 0);
			break;
	
		case 2:
			TASK::SET_SCENARIO_GROUP_ENABLED("QUARRY", false);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2809.9475f, 2993.644f, -9.3564f, 2952.9688f, 2530.636f, 177.1921f, 500f, true, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2809.9475f, 2993.644f, -9.3564f, 2952.9688f, 2530.636f, 177.1921f, 500f, false, false, false, false, false, 0, 0);
			break;
	}

	return;
}

BOOL func_130() // Position - 0x55EF
{
	return func_131(&(iLocal_327.f_71)) && func_131(&(iLocal_327.f_77)) && func_131(&(iLocal_327.f_99)) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_a@idle_a") && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_b@idle_a") && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_c@idle_a") && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_aa_smoke@male@idle_a") && STREAMING::HAS_ANIM_DICT_LOADED("random@street_race") && STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual");
}

BOOL func_131(var uParam0) // Position - 0x5664
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

void func_132() // Position - 0x56AB
{
	var script;

	func_134(&(iLocal_327.f_77), 1694362237);
	func_134(&(iLocal_327.f_99), 1694362237);

	switch (iLocal_122)
	{
		case 0:
			func_134(&(iLocal_327.f_71), 788045382);
			func_134(&(iLocal_327.f_71), -2128233223);
			break;
	
		case 1:
			func_134(&(iLocal_327.f_71), 914654722);
			func_134(&(iLocal_327.f_71), 850565707);
			func_134(&(iLocal_327.f_71), -808457413);
			func_134(&(iLocal_327.f_71), -394074634);
			func_134(&(iLocal_327.f_71), 1126868326);
			break;
	
		case 3:
			func_134(&(iLocal_327.f_71), 788045382);
			func_134(&(iLocal_327.f_71), -2128233223);
			break;
	
		case 4:
			func_134(&(iLocal_327.f_71), 788045382);
			func_134(&(iLocal_327.f_71), -2128233223);
			break;
	
		case 5:
			func_134(&(iLocal_327.f_71), 914654722);
			func_134(&(iLocal_327.f_71), 1126868326);
			func_134(&(iLocal_327.f_71), 850565707);
			func_134(&(iLocal_327.f_71), -599568815);
			func_134(&(iLocal_327.f_71), -1207771834);
			break;
	
		case 2:
			func_134(&(iLocal_327.f_71), 788045382);
			func_134(&(iLocal_327.f_71), -2128233223);
			break;
	}

	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_a@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_b@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_c@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_aa_smoke@male@idle_a");
	STREAMING::REQUEST_ANIM_DICT("random@street_race");
	STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");

	if (iLocal_122 == 0)
	{
		STREAMING::REQUEST_MODEL(-253064476);
		STREAMING::REQUEST_MODEL(1512136012);
	}

	TEXT_LABEL_ASSIGN_STRING(&script, "offroadrace", 64);

	switch (iLocal_122)
	{
		case 0:
			TEXT_LABEL_APPEND_INT(&script, 1, 64);
			break;
	
		case 1:
			TEXT_LABEL_APPEND_INT(&script, 2, 64);
			break;
	
		case 2:
			TEXT_LABEL_APPEND_INT(&script, 6, 64);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_INT(&script, 3, 64);
			break;
	
		case 4:
			TEXT_LABEL_APPEND_INT(&script, 4, 64);
			break;
	
		case 5:
			TEXT_LABEL_APPEND_INT(&script, 5, 64);
			break;
	}

	TEXT_LABEL_APPEND_STRING(&script, "car", 64);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, &script);
	func_133(&(iLocal_327.f_77));
	func_133(&(iLocal_327.f_71));
	func_133(&(iLocal_327.f_99));
	return;
}

void func_133(var uParam0) // Position - 0x58EB
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0)
			STREAMING::REQUEST_MODEL(uParam0->[i]);
	}

	return;
}

int func_134(var uParam0, int iParam1) // Position - 0x591B
{
	int i;
	int num;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0)
			if (uParam0->[i] == iParam1)
				return 0;
	}

	num = func_135(uParam0);

	if (num < 0 || num >= *uParam0)
		return 0;

	uParam0->[num] = iParam1;
	return 1;
}

int func_135(var uParam0) // Position - 0x5978
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == 0)
			return i;
	}

	return -1;
}

void func_136(var uParam0, int iParam1) // Position - 0x59A4
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_137(int iParam0) // Position - 0x59B5
{
	iLocal_93 = iParam0;
	return;
}

void func_138(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x59C1
{
	int num;
	BOOL flag;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		flag = IS_BIT_SET(Global_33328[num /*23*/].f_11, 15);
	
		if (flag == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_33328[num /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 18);
	
		if (Global_33325 == 1)
			Global_33326 = 1;
	
		Global_33325 = 1;
	}

	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33328[num /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33328[num /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_33328[num /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33328[num /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33328[num /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}

	return;
}

BOOL func_139() // Position - 0x5AC1
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_140() // Position - 0x5ADE
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 20);

	return false;
}

BOOL func_141(int iParam0, int iParam1) // Position - 0x5B01
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return false;

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	flag = IS_BIT_SET(Global_113969.f_9088.f_99.f_219[iParam0], iParam1);
	return flag;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x5B4B
{
	return func_143(iParam0, Global_44042);
}

BOOL func_143(int iParam0, int iParam1) // Position - 0x5B5C
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

BOOL func_144(int iParam0, int iParam1) // Position - 0x5D3D
{
	return iParam0 && iParam1 != false;
}

void func_145() // Position - 0x5D4C
{
	TEXT_LABEL_ASSIGN_STRING(&uLocal_51, "Offroad_Races", 64);
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	fLocal_115 = 6f + 4f;
	iLocal_97 = 4;
	func_103(&iLocal_92, 4194304);
	essLocal_95 = 62500;
	veLocal_84 = 0;
	iLocal_117 = 0;
	iLocal_118 = 25;
	iLocal_101 = 0;
	iLocal_122 = func_149(uLocal_88, &uLocal_119);
	iLocal_103 = func_148(iLocal_122);
	fLocal_100 = SYSTEM::TO_FLOAT(func_147(iLocal_103)) + 5f;

	if (func_141(0, iLocal_97))
	{
		bLocal_156 = true;
	}
	else
	{
		func_84(iLocal_103);
		bLocal_156 = false;
	}

	if (iLocal_122 > Global_113969.f_19019.f_1)
	{
		func_117(func_148(iLocal_122));
		iLocal_103 = 263;
		func_84(iLocal_103);
	}

	if (!func_117(func_148(iLocal_122)) && CAM::IS_SCREEN_FADED_IN())
	{
		if (iLocal_103 != 263)
			if (func_146(iLocal_103, true))
				iLocal_103 = 263;
	
		func_84(iLocal_103);
	}

	if (iLocal_122 == 2)
	{
		iLocal_117 = 20;
		iLocal_118 = 3;
	}

	if (iLocal_122 == 1 || iLocal_122 == 5)
		sLocal_99 = "PLAY_OFFROAD_V" /*Press ~INPUT_CONTEXT~ to enter an offroad truck race.*/;
	else
		sLocal_99 = "PLAY_OFFROAD_M" /*Press ~INPUT_CONTEXT~ to enter an offroad motorcycle / ATV race.*/;

	return;
}

BOOL func_146(int iParam0, BOOL bParam1) // Position - 0x5E48
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	if (bParam1)
		return IS_BIT_SET(Global_33328[num /*23*/].f_11, 15);

	return IS_BIT_SET(Global_33328[num /*23*/].f_11, 0);
}

int func_147(int iParam0) // Position - 0x5E96
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
	
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
	
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
	}

	return -1;
}

int func_148(int iParam0) // Position - 0x5FAE
{
	switch (iParam0)
	{
		case 0:
			return 70;
	
		case 1:
			return 71;
	
		case 3:
			return 73;
	
		case 4:
			return 74;
	
		case 5:
			return 75;
	
		case 2:
			return 72;
	
		default:
		
	}

	return 263;
}

int func_149(Vector3 vParam0, var uParam1, var uParam2, var uParam3) // Position - 0x6002
{
	int num;
	var unk;
	float num2;
	int i;
	float num3;

	num = 0;
	unk = 7;
	unk[0 /*3*/] = { func_150(0) };
	unk[1 /*3*/] = { func_150(1) };
	unk[3 /*3*/] = { func_150(3) };
	unk[4 /*3*/] = { func_150(4) };
	unk[5 /*3*/] = { func_150(5) };
	unk[2 /*3*/] = { func_150(2) };
	unk[6 /*3*/] = { func_150(6) };
	num2 = SYSTEM::VDIST2(vParam0, unk[0 /*3*/]);
	i = 0;
	num3 = 0f;

	for (i = 1; i <= 7 - 1; i = i + 1)
	{
		num3 = SYSTEM::VDIST2(vParam0, unk[i /*3*/]);
	
		if (num3 < num2)
		{
			num = i;
			num2 = num3;
		}
	}

	*uParam3 = { unk[num /*3*/] };
	return num;
}

Vector3 func_150(int iParam0) // Position - 0x60C1
{
	if (iParam0 >= 7 || iParam0 <= -1)
		return 0f, 0f, 0f;

	switch (iParam0)
	{
		case 0:
			return -1939.4829f, 4443.9526f, 37.3474f;
	
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
	
		case 3:
			return -223.6755f, 4224.6436f, 43.7304f;
	
		case 4:
			return 1606.5785f, 3841.1882f, 33.2931f;
	
		case 5:
			return 2037.6644f, 2137.3862f, 92.7095f;
	
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

void func_151(int iParam0, int iParam1) // Position - 0x617A
{
	func_152(iParam0, iParam1);
	return;
}

void func_152(int iParam0, int iParam1) // Position - 0x618A
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_153(BOOL bParam0) // Position - 0x619F
{
	if (bParam0)
		if (iLocal_103 != 263)
			func_138(iLocal_103, 0, false);

	_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);

	if (func_144(iLocal_92, 2))
	{
		func_5();
		func_151(&iLocal_92, 2);
		func_20(&iLocal_96);
	}

	iLocal_96 = -1;
	func_154();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_154() // Position - 0x61E8
{
	func_151(&iLocal_92, 4);
	func_155();

	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);

	if (!MISC::IS_STRING_NULL(&uLocal_67))
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&uLocal_67) != 0)
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_67);

	return;
}

void func_155() // Position - 0x6225
{
	return;
}


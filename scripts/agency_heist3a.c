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
	char* sLocal_18 = NULL;
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
	float fLocal_46 = 0f;
	int iLocal_47[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_48 = 0;
	int iLocal_49[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<7> Local_50 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	struct<7> Local_59 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	struct<15> Local_68[5];
	struct<15> Local_69[2];
	struct<7> Local_70 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
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
	struct<4> Local_98 = { 0, 0, 0, 0 } ;
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
	struct<19> Local_119 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<13> Local_125 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<24> Local_137[2];
	struct<4> Local_138 = { 0, 0, 0, 0 } ;
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
	struct<13> Local_159 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<3> Local_171 = { 0, 0, 0 } ;
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
	struct<3> Local_193 = { 0, 0, 0 } ;
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
	struct<3> Local_215 = { 0, 0, 0 } ;
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
	struct<24> Local_237[2];
	struct<24> Local_238[2];
	struct<4> Local_239 = { 0, 0, 0, 0 } ;
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
	struct<13> Local_260 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<13> Local_272 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<19> Local_284 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	struct<4> Local_290 = { 0, 0, 0, 0 } ;
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
	struct<24> Local_311[4];
	struct<19> Local_312 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	struct<19> Local_318 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	struct<4> Local_324 = { 0, 0, 0, 0 } ;
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
	struct<25> Local_345[6];
	struct<32> Local_346[2];
	struct<32> Local_347[2];
	struct<25> Local_348 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	struct<32> Local_356[3];
	struct<32> Local_357[2];
	struct<32> Local_358[9];
	struct<27> Local_359 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	struct<32> Local_365[8];
	struct<32> Local_366[5];
	struct<32> Local_367[2];
	struct<22> Local_368 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<32> Local_379[7];
	struct<32> Local_380[2];
	struct<32> Local_381[4];
	struct<32> Local_382[1];
	struct<8> Local_383[34];
	struct<2> Local_384[12];
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
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 5;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 1065353216;
	var uLocal_479 = 1065353216;
	var uLocal_480 = 1036831949;
	var uLocal_481 = 1000593162;
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
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 5;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 1065353216;
	var uLocal_576 = 1065353216;
	var uLocal_577 = 1036831949;
	var uLocal_578 = 1000593162;
	struct<97> Local_579[2];
	struct<13> Local_580 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 49;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 2;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	int iLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 2;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 2;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 20;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = -1;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 1065353216;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = -1;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 1065353216;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = -1;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 1065353216;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = -1;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 1065353216;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = -1;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 1065353216;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = -1;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 1065353216;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = -1;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 1065353216;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = -1;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 1065353216;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = -1;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 1065353216;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = -1;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 1065353216;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = -1;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 1065353216;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = -1;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 1065353216;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = -1;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 1065353216;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = -1;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 1065353216;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = -1;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 1065353216;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = -1;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 1065353216;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = -1;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 1065353216;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = -1;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 1065353216;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = -1;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 1065353216;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = -1;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 1065353216;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 16;
	var uLocal_1810 = 0;
	var uLocal_1811 = -1082130432;
	var uLocal_1812 = 0;
	var uLocal_1813 = -1082130432;
	var uLocal_1814 = 0;
	var uLocal_1815 = -1082130432;
	var uLocal_1816 = 0;
	var uLocal_1817 = -1082130432;
	var uLocal_1818 = 0;
	var uLocal_1819 = -1082130432;
	var uLocal_1820 = 0;
	var uLocal_1821 = -1082130432;
	var uLocal_1822 = 0;
	var uLocal_1823 = -1082130432;
	var uLocal_1824 = 0;
	var uLocal_1825 = -1082130432;
	var uLocal_1826 = 0;
	var uLocal_1827 = -1082130432;
	var uLocal_1828 = 0;
	var uLocal_1829 = -1082130432;
	var uLocal_1830 = 0;
	var uLocal_1831 = -1082130432;
	var uLocal_1832 = 0;
	var uLocal_1833 = -1082130432;
	var uLocal_1834 = 0;
	var uLocal_1835 = -1082130432;
	var uLocal_1836 = 0;
	var uLocal_1837 = -1082130432;
	var uLocal_1838 = 0;
	var uLocal_1839 = -1082130432;
	var uLocal_1840 = 0;
	var uLocal_1841 = -1082130432;
	var uLocal_1842 = 16;
	var uLocal_1843 = 0;
	var uLocal_1844 = -1082130432;
	var uLocal_1845 = 0;
	var uLocal_1846 = -1082130432;
	var uLocal_1847 = 0;
	var uLocal_1848 = -1082130432;
	var uLocal_1849 = 0;
	var uLocal_1850 = -1082130432;
	var uLocal_1851 = 0;
	var uLocal_1852 = -1082130432;
	var uLocal_1853 = 0;
	var uLocal_1854 = -1082130432;
	var uLocal_1855 = 0;
	var uLocal_1856 = -1082130432;
	var uLocal_1857 = 0;
	var uLocal_1858 = -1082130432;
	var uLocal_1859 = 0;
	var uLocal_1860 = -1082130432;
	var uLocal_1861 = 0;
	var uLocal_1862 = -1082130432;
	var uLocal_1863 = 0;
	var uLocal_1864 = -1082130432;
	var uLocal_1865 = 0;
	var uLocal_1866 = -1082130432;
	var uLocal_1867 = 0;
	var uLocal_1868 = -1082130432;
	var uLocal_1869 = 0;
	var uLocal_1870 = -1082130432;
	var uLocal_1871 = 0;
	var uLocal_1872 = -1082130432;
	var uLocal_1873 = 0;
	var uLocal_1874 = -1082130432;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = -1082130432;
	var uLocal_1892 = -1082130432;
	var uLocal_1893 = 1;
	var uLocal_1894 = 1;
	var uLocal_1895 = 1;
	var uLocal_1896 = -1;
	var uLocal_1897 = -1;
	var uLocal_1898 = -1;
	int iLocal_1899 = 0;
	int iLocal_1900 = 0;
	int iLocal_1901 = 0;
	int iLocal_1902 = 0;
	int iLocal_1903 = 0;
	int iLocal_1904 = 0;
	int iLocal_1905 = 0;
	int iLocal_1906 = 0;
	int iLocal_1907 = 0;
	int iLocal_1908 = 0;
	int iLocal_1909 = 0;
	int iLocal_1910 = 0;
	int iLocal_1911 = 0;
	int iLocal_1912 = 0;
	bool bLocal_1913 = 0;
	bool bLocal_1914 = 0;
	int iLocal_1915 = 0;
	int iLocal_1916 = 0;
	bool bLocal_1917 = 0;
	int iLocal_1918 = 0;
	int iLocal_1919 = 0;
	int iLocal_1920 = 0;
	bool bLocal_1921 = 0;
	bool bLocal_1922 = 0;
	int iLocal_1923 = 0;
	int iLocal_1924 = 0;
	int iLocal_1925 = 0;
	bool bLocal_1926 = 0;
	bool bLocal_1927 = 0;
	int iLocal_1928 = 0;
	bool bLocal_1929 = 0;
	int iLocal_1930 = 0;
	int iLocal_1931 = 0;
	int iLocal_1932 = 0;
	int iLocal_1933 = 0;
	bool bLocal_1934 = 0;
	int iLocal_1935 = 0;
	int iLocal_1936 = 0;
	int iLocal_1937 = 0;
	bool bLocal_1938 = 0;
	int iLocal_1939 = 0;
	bool bLocal_1940 = 0;
	int iLocal_1941 = 0;
	bool bLocal_1942 = 0;
	int iLocal_1943 = 0;
	bool bLocal_1944 = 0;
	int iLocal_1945 = 0;
	bool bLocal_1946 = 0;
	int iLocal_1947 = 0;
	bool bLocal_1948 = 0;
	int iLocal_1949 = 0;
	int iLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	int iLocal_1954 = 0;
	int iLocal_1955 = 0;
	int iLocal_1956 = 0;
	int iLocal_1957 = 0;
	int iLocal_1958 = 0;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	int iLocal_1961 = 0;
	int iLocal_1962 = 0;
	int iLocal_1963 = 0;
	int iLocal_1964 = 0;
	int iLocal_1965 = 0;
	int iLocal_1966 = 0;
	int iLocal_1967 = 0;
	var uLocal_1968 = 0;
	int iLocal_1969 = 0;
	int iLocal_1970 = 0;
	int iLocal_1971 = 0;
	int iLocal_1972 = 0;
	int iLocal_1973 = 0;
	int iLocal_1974 = 0;
	int iLocal_1975 = 0;
	int iLocal_1976 = 0;
	int iLocal_1977 = 0;
	int iLocal_1978 = 0;
	int iLocal_1979 = 0;
	int iLocal_1980 = 0;
	int iLocal_1981 = 0;
	int iLocal_1982 = 0;
	int iLocal_1983 = 0;
	int iLocal_1984 = 0;
	int iLocal_1985 = 0;
	int iLocal_1986 = 0;
	int iLocal_1987 = 0;
	int iLocal_1988 = 0;
	int iLocal_1989 = 0;
	int iLocal_1990 = 0;
	int iLocal_1991 = 0;
	int iLocal_1992 = 0;
	int iLocal_1993 = 0;
	int iLocal_1994 = 0;
	int iLocal_1995[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1996 = 0;
	int iLocal_1997 = 0;
	int iLocal_1998 = 0;
	int iLocal_1999 = 0;
	int iLocal_2000 = 0;
	int iLocal_2001 = 0;
	int iLocal_2002 = 0;
	int iLocal_2003 = 0;
	int iLocal_2004 = 0;
	int iLocal_2005 = 0;
	int iLocal_2006 = 0;
	int iLocal_2007 = 0;
	int iLocal_2008 = 0;
	int iLocal_2009 = 0;
	int iLocal_2010 = 0;
	int iLocal_2011 = 0;
	int iLocal_2012 = 0;
	int iLocal_2013 = 0;
	int iLocal_2014 = 0;
	int iLocal_2015 = 0;
	int iLocal_2016 = 0;
	int iLocal_2017 = 0;
	int iLocal_2018 = 0;
	int iLocal_2019 = 0;
	int iLocal_2020 = 0;
	int iLocal_2021 = 0;
	int iLocal_2022 = 0;
	int iLocal_2023 = 0;
	int iLocal_2024 = 0;
	int iLocal_2025 = 0;
	int iLocal_2026 = 0;
	int iLocal_2027 = 0;
	int iLocal_2028 = 0;
	int iLocal_2029 = 0;
	int iLocal_2030 = 0;
	int iLocal_2031 = 0;
	int iLocal_2032 = 0;
	int iLocal_2033 = 0;
	int iLocal_2034 = 0;
	int iLocal_2035 = 0;
	int iLocal_2036 = 0;
	int iLocal_2037 = 0;
	int iLocal_2038 = 0;
	int iLocal_2039 = 0;
	int iLocal_2040 = 0;
	int iLocal_2041[2] = { 0, 0 };
	int iLocal_2042[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2043 = 0;
	int iLocal_2044 = 0;
	int iLocal_2045 = 0;
	int iLocal_2046 = 0;
	int iLocal_2047 = 0;
	int iLocal_2048 = 0;
	int iLocal_2049 = 0;
	int iLocal_2050 = 0;
	int iLocal_2051 = 0;
	int iLocal_2052 = 0;
	int iLocal_2053 = 0;
	int iLocal_2054 = 0;
	int iLocal_2055 = 0;
	int iLocal_2056 = 0;
	int iLocal_2057 = 0;
	int iLocal_2058 = 0;
	int iLocal_2059 = 0;
	int iLocal_2060 = 0;
	int iLocal_2061 = 0;
	int iLocal_2062 = 0;
	int iLocal_2063 = 0;
	int iLocal_2064 = 0;
	int iLocal_2065 = 0;
	int iLocal_2066 = 0;
	int iLocal_2067 = 0;
	int iLocal_2068 = 0;
	int iLocal_2069 = 0;
	int iLocal_2070 = 0;
	int iLocal_2071 = 0;
	int iLocal_2072 = 0;
	int iLocal_2073 = 0;
	int iLocal_2074 = 0;
	int iLocal_2075 = 0;
	int iLocal_2076 = 0;
	int iLocal_2077[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2078 = 0;
	int iLocal_2079[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2080[2] = { 0, 0 };
	int iLocal_2081[2] = { 0, 0 };
	int iLocal_2082[2] = { 0, 0 };
	int iLocal_2083 = 0;
	var uLocal_2084 = 0;
	int iLocal_2085 = 0;
	int iLocal_2086 = 0;
	int iLocal_2087 = 0;
	int iLocal_2088 = 0;
	int iLocal_2089 = 0;
	int iLocal_2090 = 0;
	int iLocal_2091 = 0;
	int iLocal_2092 = 0;
	int iLocal_2093 = 0;
	int iLocal_2094 = 0;
	int iLocal_2095 = 0;
	int iLocal_2096 = 0;
	int iLocal_2097 = 0;
	int iLocal_2098[2] = { 0, 0 };
	int iLocal_2099 = 0;
	int iLocal_2100 = 0;
	int iLocal_2101 = 0;
	int iLocal_2102 = 0;
	int iLocal_2103 = 0;
	int iLocal_2104 = 0;
	int iLocal_2105 = 0;
	int iLocal_2106[3] = { 0, 0, 0 };
	int iLocal_2107[4] = { 0, 0, 0, 0 };
	int iLocal_2108[4] = { 0, 0, 0, 0 };
	int iLocal_2109 = 0;
	int iLocal_2110 = 0;
	int iLocal_2111 = 0;
	int iLocal_2112 = 0;
	int iLocal_2113 = 0;
	int iLocal_2114 = 0;
	int iLocal_2115 = 0;
	int iLocal_2116 = 0;
	int iLocal_2117 = 0;
	int iLocal_2118 = 0;
	int iLocal_2119 = 0;
	int iLocal_2120 = 0;
	int iLocal_2121 = 0;
	int iLocal_2122 = 0;
	int iLocal_2123 = 0;
	int iLocal_2124 = 0;
	int iLocal_2125 = 0;
	int iLocal_2126 = 0;
	int iLocal_2127 = 0;
	int iLocal_2128 = 0;
	int iLocal_2129 = 0;
	int iLocal_2130 = 0;
	int iLocal_2131[2] = { 0, 0 };
	int iLocal_2132[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_2133[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_2134 = 0;
	int iLocal_2135 = 0;
	int iLocal_2136 = 0;
	int iLocal_2137[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_2138 = 0f;
	float fLocal_2139 = 0f;
	float fLocal_2140 = 0f;
	float fLocal_2141 = 0f;
	float fLocal_2142 = 0f;
	float fLocal_2143 = 0f;
	float fLocal_2144 = 0f;
	float fLocal_2145 = 0f;
	float fLocal_2146 = 0f;
	float fLocal_2147 = 0f;
	int iLocal_2148 = 0;
	int iLocal_2149 = 0;
	struct<3> Local_2150 = { 0, 0, 0 } ;
	struct<3> Local_2151 = { 0, 0, 0 } ;
	struct<3> Local_2152 = { 0, 0, 0 } ;
	struct<3> Local_2153 = { 0, 0, 0 } ;
	struct<3> Local_2154 = { 0, 0, 0 } ;
	struct<3> Local_2155[4];
	struct<3> Local_2156 = { 0, 0, 0 } ;
	struct<3> Local_2157 = { 0, 0, 0 } ;
	struct<3> Local_2158[3];
	float fLocal_2159 = 0f;
	float fLocal_2160 = 0f;
	char* sLocal_2161 = NULL;
	struct<2> Local_2162 = { 0, 0 } ;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	struct<2> Local_2165 = { 0, 0 } ;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	int iLocal_2168 = 0;
	int iLocal_2169 = 0;
	int iLocal_2170[4] = { 0, 0, 0, 0 };
	int iLocal_2171 = 0;
	int iLocal_2172 = 0;
	int iLocal_2173 = 0;
	int iLocal_2174 = 0;
	int iLocal_2175 = 0;
	int iLocal_2176 = 0;
	int iLocal_2177 = 0;
	int iLocal_2178 = 0;
	int iLocal_2179 = 0;
	var uLocal_2180 = 0;
	int iLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	int iLocal_2195 = 0;
	int iLocal_2196 = 0;
	int iLocal_2197 = 0;
	int iLocal_2198 = 0;
	int iLocal_2199 = 0;
	var uLocal_2200[3] = { 0, 0, 0 };
	int iLocal_2201[4] = { 0, 0, 0, 0 };
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 4;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 4;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 4;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 4;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 4;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 4;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 8;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 16;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	struct<6> Local_2440 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_2441 = 0;
	var uLocal_2442 = 1092616192;
	var uLocal_2443 = 1101004800;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 3;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	struct<18> Local_2460[15];
	struct<18> Local_2461[15];
	struct<18> Local_2462[15];
	struct<18> Local_2463[15];
	struct<18> Local_2464[15];
	struct<18> Local_2465[15];
	struct<18> Local_2466[10];
	int iLocal_2467 = 0;
	int iLocal_2468 = 0;
	int iLocal_2469[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_2470[2] = { 0, 0 };
	int iLocal_2471[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2472 = 4;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	int iLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 2;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	int iLocal_2488[18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2489 = 0;
	var uLocal_2490[3] = { 0, 0, 0 };
	var uLocal_2491 = 0;
	float fLocal_2492 = 0f;
	var uLocal_2493 = 0;
	struct<2> Local_2494 = { 0, 0 } ;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	struct<6> Local_2497 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_2498 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	int iLocal_2517 = 0;
	int iLocal_2518 = 0;
	int iLocal_2519 = 0;
	int iLocal_2520 = 0;
	int iLocal_2521 = 0;
	int iLocal_2522 = 0;
	int iLocal_2523 = 0;
	int iLocal_2524 = 0;
	int iLocal_2525 = 0;
	int iLocal_2526 = 0;
	int iLocal_2527 = 0;
	float fLocal_2528 = 0f;
	float fLocal_2529 = 0f;
	float fLocal_2530 = 0f;
	int iLocal_2531 = 0;
	float fLocal_2532 = 0f;
	float fLocal_2533 = 0f;
	float fLocal_2534 = 0f;
	char* sLocal_2535 = NULL;
	char* sLocal_2536 = NULL;
	char* sLocal_2537 = NULL;
	int iLocal_2538 = 0;
	char* sLocal_2539 = NULL;
	float fLocal_2540 = 0f;
	struct<3> Local_2541 = { 0, 0, 0 } ;
	struct<3> Local_2542 = { 0, 0, 0 } ;
	struct<3> Local_2543 = { 0, 0, 0 } ;
	struct<3> Local_2544 = { 0, 0, 0 } ;
	struct<3> Local_2545 = { 0, 0, 0 } ;
	struct<3> Local_2546 = { 0, 0, 0 } ;
	float fLocal_2547 = 0f;
	float fLocal_2548 = 0f;
	int iLocal_2549 = 0;
	int iLocal_2550 = 0;
	int iLocal_2551 = 0;
#endregion

void __EntryFunction__()
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
	fLocal_12 = 0,001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	uLocal_44 = unk_0x8CC13B3BF7A9890A();
	uLocal_45 = unk_0x2A3612A4B836469E();
	fLocal_46 = 1f;
	iLocal_1903 = 1;
	iLocal_1939 = 1;
	iLocal_1941 = 1;
	iLocal_2069 = -1;
	iLocal_2071 = 720000;
	iLocal_2123 = unk_0xCA369FBC0DE29517();
	iLocal_2124 = unk_0xCA369FBC0DE29517();
	iLocal_2125 = unk_0xCA369FBC0DE29517();
	iLocal_2126 = unk_0xCA369FBC0DE29517();
	iLocal_2127 = unk_0xCA369FBC0DE29517();
	iLocal_2128 = unk_0xCA369FBC0DE29517();
	iLocal_2129 = unk_0xCA369FBC0DE29517();
	iLocal_2130 = unk_0xCA369FBC0DE29517();
	iLocal_2136 = -1;
	fLocal_2138 = 0f;
	fLocal_2139 = 0f;
	fLocal_2140 = 0f;
	fLocal_2141 = 0f;
	fLocal_2142 = 0f;
	fLocal_2143 = 0f;
	fLocal_2144 = 0f;
	fLocal_2145 = 0f;
	fLocal_2146 = 0,15f;
	fLocal_2147 = 1f;
	fLocal_2159 = 0f;
	fLocal_2160 = 0f;
	fLocal_2492 = 0f;
	fLocal_2528 = 0,25f;
	fLocal_2529 = 0,62f;
	fLocal_2530 = 0,99f;
	iLocal_2531 = -1;
	fLocal_2532 = 0,683f;
	fLocal_2533 = 0,555f;
	fLocal_2534 = 0,603f;
	sLocal_2535 = "cellphone@str";
	sLocal_2536 = "cellphone_call_listen_c";
	sLocal_2537 = "shake_cam_all@";
	sLocal_2539 = "michaelToFiretruck";
	fLocal_2540 = 0f;
	unk_0x925970A93719CADE(1);
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_1213();
		func_1207();
	}
	func_1195();
	while (true)
	{
		system::wait(0);
		func_1194();
		func_1192();
		func_1189();
		if (!iLocal_1915)
		{
			if (func_1177())
			{
				func_1164();
			}
		}
		if ((iLocal_48 == 5 || iLocal_48 == 6) || iLocal_48 == 7)
		{
			unk_0x04FC75A7251431C6(unk_0x4A8C381C258A124D(), 0,6f);
		}
		func_1163();
		unk_0xECF30459397D5190("M_THE_BUREAU_RAID_COVERT", 0);
		switch (iLocal_48)
		{
			case 0:
				func_1154();
				break;
			
			case 1:
				iLocal_48 = 2;
				break;
			
			case 2:
				func_1142();
				break;
			
			case 4:
				func_1133();
				break;
			
			case 3:
				func_1131();
				break;
			
			case 5:
				func_1129();
				break;
			
			case 6:
				func_1099();
				break;
			
			case 7:
				func_1096();
				break;
			
			case 8:
				func_1091();
				break;
			
			case 9:
				func_1084();
				break;
			
			case 10:
				func_1076();
				break;
			
			case 11:
				func_1033();
				break;
			
			case 12:
				func_1032();
				break;
			
			case 13:
				func_1017();
				break;
			
			case 14:
				func_1007();
				break;
			
			case 15:
				func_1006();
				break;
			
			case 16:
				func_991();
				break;
			
			case 17:
				func_982();
				break;
			
			case 18:
				func_948();
				break;
			
			case 19:
				func_943();
				break;
			
			case 20:
				func_912();
				break;
			
			case 21:
				func_907();
				break;
			
			case 22:
				func_884();
				break;
			
			case 23:
				func_868();
				break;
			
			case 24:
				func_772();
				break;
			
			case 25:
				func_24();
				break;
			
			case 26:
				func_4();
				break;
			
			case 27:
				func_2();
				break;
			
			case 28:
				func_1();
				break;
		}
		if ((iLocal_48 == 5 || iLocal_48 == 6) || iLocal_48 == 7)
		{
			unk_0x3968AF3046718EAC();
			unk_0x98D2FC8206AB54E0(unk_0x259BE71D8A81D4FA());
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (func_3(&iLocal_1965, 2000))
	{
		unk_0xD25E9BDC14A0B649(unk_0x4A8C381C258A124D(), 2, 0, 0);
	}
}

int func_3(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1DD05E817C89C737();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	if (unk_0xFC8BFE4B41177C22(Local_119.f_0))
	{
		if (unk_0xA3736D76B0E93E93(Local_119.f_0))
		{
			unk_0x837D67618BF89034(Local_119.f_0, 1, 1);
			unk_0xC935F6A2D1890729(unk_0x4A8C381C258A124D());
			unk_0x4A46A67DB6AC487D(unk_0x4A8C381C258A124D(), 1048576000);
		}
	}
	if (unk_0xFC8BFE4B41177C22(Local_125.f_0))
	{
		if (unk_0xA3736D76B0E93E93(Local_125.f_0))
		{
			unk_0x837D67618BF89034(Local_125.f_0, 1, 1);
		}
	}
	if (func_23())
	{
		func_22(0);
		func_20(760,5546f, -983,6993f, 24,7744f, 82,4206f);
		func_17();
		func_5();
	}
}

void func_5()
{
	int iVar0;
	
	func_16();
	func_7();
	func_6(69);
	iVar0 = 0;
	while (iVar0 <= (Local_2460.f_0 - 1))
	{
		if (!Local_2460[iVar0 /*18*/].f_17)
		{
			unk_0x93E1EA1609ABF230(Local_2460[iVar0 /*18*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2461.f_0 - 1))
	{
		if (!Local_2461[iVar0 /*18*/].f_17)
		{
			unk_0x93E1EA1609ABF230(Local_2461[iVar0 /*18*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2462.f_0 - 1))
	{
		if (!Local_2462[iVar0 /*18*/].f_17)
		{
			unk_0x93E1EA1609ABF230(Local_2462[iVar0 /*18*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2463.f_0 - 1))
	{
		if (!Local_2463[iVar0 /*18*/].f_17)
		{
			unk_0x93E1EA1609ABF230(Local_2463[iVar0 /*18*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2464.f_0 - 1))
	{
		if (!Local_2464[iVar0 /*18*/].f_17)
		{
			unk_0x93E1EA1609ABF230(Local_2464[iVar0 /*18*/]);
		}
		iVar0++;
	}
	func_1207();
}

void func_6(int iParam0)
{
	if (Global_98435 != -1)
	{
		if (iParam0 == Global_98435)
		{
			Global_98439 = 1;
			return;
		}
	}
}

void func_7()
{
	func_8(27, 0, 0, 1, 0);
	func_8(26, 0, 0, 1, 0);
	func_8(34, 0, 0, 1, 0);
	func_8(36, 0, 0, 1, 0);
	func_8(28, 0, 0, 1, 0);
	func_8(29, 0, 0, 1, 0);
	func_8(30, 0, 0, 1, 0);
	func_8(31, 0, 0, 1, 0);
	func_8(32, 0, 0, 1, 0);
	func_8(33, 0, 0, 1, 0);
}

void func_8(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_79389)
		{
			Global_43576.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_113969.f_7264.f_227[iParam0] = iParam1;
		}
		Global_40582[iParam0] = iParam2;
		Global_40781[iParam0] = 1;
		func_11(iParam0, bParam3, iParam4, 0);
		func_9(iParam0, iParam1);
	}
}

void func_9(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0xCD04ECE71F3A9215("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0xCD04ECE71F3A9215("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x6866AF3D8691EDC0("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x6866AF3D8691EDC0("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_10(0, 0);
			}
			else
			{
				func_10(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0xCD04ECE71F3A9215("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0xCD04ECE71F3A9215("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xFAF6BF5476CB00A8("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0xC897319696131088("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0xC897319696131088("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0xC897319696131088("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0xC897319696131088("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_10(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_112604, iParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_112604, bParam0);
	}
	Global_112603 = 1;
}

bool func_11(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1919037 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_15(&Var3, iParam0);
	if (func_12())
	{
		iVar1 = Global_113969.f_7264.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_43576.f_227[iParam0];
	}
	iVar2 = Global_40980[iParam0];
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !bParam3)
	{
		Global_1919037 = 1;
	}
	else
	{
		bVar5 = true;
		if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) != unk_0x70E57E9927B6BA58("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_40582[iParam0] && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3, 1) < 200f)
				{
					bVar5 = false;
					Global_1919037 = 1;
				}
				if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || unk_0x7FB6C108C1694163(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0x15CCE8886267624F())
					{
						bVar5 = false;
						Global_1919037 = 1;
					}
				}
			}
		}
		if (unk_0x787F8EE1F6FBDC6D() && (!unk_0x3555462DB47B7AB1() || unk_0x6D231A0D52134FC1() != 5))
		{
			bVar5 = false;
			Global_1919037 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0xC94AE68759E1B3BD(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0xE226F16D30AF5945(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_42176[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[1 /*8*/]));
								Global_1919037 = 1;
							}
						}
						if ((unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES")) && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[2 /*8*/]));
								Global_1919037 = 1;
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(""))
						{
							if (!unk_0x5AEB336317DC4151(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xECFC57F5F11BCD83(&(Var3.f_8[0 /*8*/]));
								Global_1919037 = 1;
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_34)) != unk_0x70E57E9927B6BA58(""))
						{
							if (!unk_0x5AEB336317DC4151(&(Var3.f_34)))
							{
								unk_0xECFC57F5F11BCD83(&(Var3.f_34));
								Global_1919037 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x70E57E9927B6BA58(&(Var3.f_34)) != unk_0x70E57E9927B6BA58(""))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_34)))
							{
								unk_0x5373E9377066509E(&(Var3.f_34));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES")) && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(""))
						{
							if (!unk_0x5AEB336317DC4151(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xECFC57F5F11BCD83(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x70E57E9927B6BA58(&(Var3.f_34)) != unk_0x70E57E9927B6BA58(""))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_34)))
							{
								unk_0x5373E9377066509E(&(Var3.f_34));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES"))
						{
							if (!unk_0x5AEB336317DC4151(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xECFC57F5F11BCD83(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_41977[iParam0] = 1;
					Global_42176[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = unk_0x0556019E7EE8EC9A(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (unk_0x70E57E9927B6BA58(&(Var3.f_50)) != unk_0x70E57E9927B6BA58(""))
						{
							if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_50)))
							{
								unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES")) && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (!unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x907994FF361E5295(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES")) && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (!unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x907994FF361E5295(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES"))
							{
								if (!unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x907994FF361E5295(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xEEC112F70F9E6543(iVar6);
						}
					}
					Global_42176[iParam0] = 1;
					Global_41977[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0xED977E2AE2CB16EE(Var3, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 1) < 250f)
					{
						uVar4 = unk_0xC8C12645F5A0E13B(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0x502101046E18AD3F(uVar4))
						{
							if (iVar1 == 0)
							{
								unk_0xBF86159B8525B1AE(uVar4, 3);
								Global_42176[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xEB4069FA281FFD9B(uVar4) != 6 && unk_0xEB4069FA281FFD9B(uVar4) != 7) && unk_0xEB4069FA281FFD9B(uVar4) != 8)
								{
									unk_0xBF86159B8525B1AE(uVar4, 10);
									Global_42176[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0xD80C3522AC21FDB8(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x8744D2E3FC95740E(&(Global_40328[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x7C601010148C8DDB(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_40328[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_40781[iParam0] = 0;
				Global_40980[iParam0] = iVar1;
				if (!func_12())
				{
					if (!Global_41577[iParam0])
					{
						Global_41577[iParam0] = 1;
						Global_41776++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_12()
{
	if ((func_14() == -1 || func_14() == 999) && !func_13() == 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	return Global_32949;
}

int func_14()
{
	return Global_32948;
}

int func_15(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24,685f, 3032,92f, 40,331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24,685f, 3032,92f, 40,331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93,4f, 6410,9f, 36,8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890,3647f, -2367,289f, 28,10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020,5f, 663,41f, 154,75f };
			uParam0->f_58 = { -1018,913f, 603,2904f, 105,6611f };
			uParam0->f_61 = { -1038,913f, 639,2904f, 135,6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162,8918f, -2365,769f, 0f };
			uParam0->f_71 = { 190,75f, 31,25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95,2f, 6411,3f, 31,5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801,7f, -1810,8f, 23,3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787,3967f, -1808,858f, 29,8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163,4f, -745,7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178,534f, -668,835f, 37,2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105,4557f, -745,4835f, 44,7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670,3f, 41,9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			uParam0->f_79 = { 16,9757f, 3614,307f, 30,0677f };
			uParam0->f_82 = { 145,2451f, 3748,912f, 49,6958f };
			uParam0->f_85 = { 16,9757f, 3614,307f, 30,0677f };
			uParam0->f_88 = { 145,2451f, 3748,912f, 49,6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106,7f, 3732,1f, 40,8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106,7f, 3732,1f, 40,8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72,7f, 3695,4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72,7f, 3695,4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43,8f, 3699,7f, 41,3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43,8f, 3699,7f, 41,3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28,5f, 3668f, 40,4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28,5f, 3668f, 40,4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29,4838f, 3735,593f, 38,688f };
			uParam0->f_68 = { 31,134f, 3738,783f, 39,062f };
			uParam0->f_71 = { 13,6f, 20f, 8,9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29,4838f, 3735,593f, 38,688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450,595f, 4959,929f, 44,2575f };
			uParam0->f_79 = { 2383,756f, 4929,988f, 39,52461f };
			uParam0->f_82 = { 2505,756f, 5023,988f, 67,52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450,595f, 4959,929f, 44,2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444,8f, 4976,4f, 50,5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889,3f, -2910,9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600,619f, 4443,457f, 0,725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966,1f, -114,8f, 75,2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086,428f, 339,2523f, 6,3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675,178f, -1143,605f, 12,0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532,1309f, 4526,187f, 88,7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532,1309f, 4526,187f, 88,7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131,29f, -631,22f, 261,85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233,9f, -1355f, 30,3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234,4f, -1355,6f, 40,5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861,28f, 2402,11f, 58,53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327,46f, -274,82f, 54,25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697,32f, 3162,18f, 58,1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119,12f, 3058,21f, 53,25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804,25f, -2276,88f, 23,59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296,5f, 173,3f, 100,4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296,5f, 173,3f, 100,4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480,9554f, -1321,21f, 28,2037f };
			uParam0->f_85 = { 508,3f, -1299,3f, 39,4f };
			uParam0->f_88 = { 459,9f, -1363,2f, 21,4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088,6f, -1650,6f, 6,4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13,83f, -1455,45f, 31,81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277,629f, -2030,913f, 1,2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384,969f, 4277,583f, 30,379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577,881f, 3836,107f, 30,7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180,5771f, -1016,928f, 28,2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630,4205f, -236,7843f, 37,057f };
			uParam0->f_79 = { (-623,6868f - 11f), (-231,935f - 11f), (40,30703f - 3,25f) };
			uParam0->f_82 = { (-623,6868f + 11f), (-231,935f + 11f), (40,30703f + 3,25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583,1606f, -282,3967f, 35,394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14,651f, -604,3639f, 25,1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773,61f, 2835,327f, 35,1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743,682f, 3286,251f, 40,0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222,9f, 1877,9f, 79,9f };
			uParam0->f_58 = { 1206,8f, 1803f, 43,9f };
			uParam0->f_61 = { 1329f, 2060,4f, 143,9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44,02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391,81f, -962,71f, 41,97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424,2f, -1944,31f, 33,09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626,374f, 2949,869f, 39,1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626,374f, 2949,869f, 39,1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811,2679f, 179,3344f, 75,7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802,0311f, 172,9131f, 75,7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802,0311f, 172,9131f, 75,7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810,5301f, 187,7868f, 71,4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811,2679f, 179,3344f, 75,7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30,8793f, -1088,336f, 25,4221f };
			uParam0->f_68 = { -29,3f, -1086,35f, 25,57f };
			uParam0->f_71 = { 5,5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49,21f, -1090,28f, 25,42f };
			uParam0->f_68 = { -49,21f, -1090,28f, 25,42f };
			uParam0->f_71 = { 2,5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49,28f, -1092,66f, 25,42f };
			uParam0->f_68 = { -49,28f, -1092,66f, 25,42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53,07f, -1096,73f, 25,5f };
			uParam0->f_68 = { -53,07f, -1096,73f, 25,5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23,9346f, -669,7552f, 30,8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300,9423f, -586,1784f, 42,2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150,039f, -1521,761f, 9,6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150,039f, -1521,761f, 9,6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856,029f, 3682,998f, 33,2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440,5073f, 6018,766f, 30,49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487,31f, 5588,386f, 793,0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487,31f, 5588,386f, 793,0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96,4811f, -1291,294f, 28,2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139,5795f, -3092,962f, 8,64631f };
			uParam0->f_79 = { Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_82 = { Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_85 = { Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_88 = { Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203,7784f, -3131,767f, 7,041344f };
			uParam0->f_79 = { Vector(7,041344f, -3131,767f, 203,7784f) - Vector(2,5625f, 2,75f, 4,875f) };
			uParam0->f_82 = { Vector(7,041344f, -3131,767f, 203,7784f) + Vector(2,5625f, 2,75f, 4,875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144,7706f, -2982,659f, 7,952507f };
			uParam0->f_79 = { Vector(7,952507f, -2982,659f, 144,7706f) - Vector(3,125f, 3,4375f, 5,3125f) };
			uParam0->f_82 = { Vector(7,952507f, -2982,659f, 144,7706f) + Vector(3,125f, 3,4375f, 5,3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154,965f, -1520,983f, 9,132731f };
			uParam0->f_79 = { -1154,965f, -1520,983f, 9,132731f };
			uParam0->f_82 = { -1158,965f, -1524,983f, 11,63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052,204f, 371,9537f, 67,914f };
			uParam0->f_79 = { -1052,204f, 371,9537f, 67,914f };
			uParam0->f_82 = { -1048,064f, 368,0221f, 70,9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954,984f, 3792,991f, 30,3086f };
			uParam0->f_79 = { 1954,984f, 3792,991f, 30,3086f };
			uParam0->f_82 = { 1983,45f, 3830,78f, 36,2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122,202f, 48,5724f, 51,4652f };
			uParam0->f_79 = { -1122,202f, 48,5724f, 51,4652f };
			uParam0->f_82 = { -1076,233f, 92,1041f, 60,0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199,138f, 223,4648f, 181,1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242,785f, 263,4779f, 173,6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832,9f, 3665,5f, -23,4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814,7f, 4758,5f, 47,9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096,505f, 4,5754f, 49,8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781,6566f, 186,8937f, 71,8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55,7f, -1391,3f, 30,5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700,091f, -933,641f, 20,308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096,381f, -836,17f, 36,6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449,6558f, -980,1375f, 42,6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363,0175f, -1598,079f, 35,9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601,424f, 2808,213f, 16,2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23,7318f, -647,2123f, 37,9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12,9689f, -648,4698f, 9,7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459,127f, 486,1281f, 115,2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248,4916f, -2010,509f, 34,5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081,347f, -263,1502f, 38,7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136,1795f, -750,701f, 262,0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168,7f, 42,9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19,0568f, 536,4818f, 169,6277f };
			break;
	}
	return 1;
}

void func_16()
{
	func_8(70, 1, 0, 1, 0);
	func_8(71, 2, 0, 1, 0);
	func_8(73, 1, 0, 1, 0);
	func_8(72, 0, 0, 1, 0);
	func_8(74, 0, 0, 1, 0);
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_379.f_0 - 1))
	{
		if (unk_0xFC8BFE4B41177C22(Local_379[iVar0 /*32*/]))
		{
			unk_0x734A9F4537A31459(&(Local_379[iVar0 /*32*/]));
		}
		if (unk_0xC450B06E5AAA0985(Local_379[iVar0 /*32*/].f_2))
		{
			unk_0xFE54B8568B2ABD12(&(Local_379[iVar0 /*32*/].f_2));
		}
		func_19(&(Local_379[iVar0 /*32*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_346.f_0 - 1))
	{
		func_18(&(Local_346[iVar0 /*32*/]), 1);
		iVar0++;
	}
	if (unk_0x9CFFB7009B578840(iLocal_2479))
	{
		unk_0x182120534CCF9023(iLocal_2479, 0);
	}
	func_18(&(iLocal_2201[0]), 1);
	func_18(&(iLocal_2201[1]), 1);
}

void func_18(var uParam0, bool bParam1)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*uParam0))
		{
			if (!unk_0x7F420695E3F776FB(*uParam0, 0))
			{
				if (!unk_0x9D6DF8F3584AAC2B(*uParam0))
				{
					if (unk_0xB431D60610E7F85F(*uParam0))
					{
						unk_0x837D67618BF89034(*uParam0, 1, 1);
					}
				}
			}
			if (!unk_0xA3736D76B0E93E93(*uParam0))
			{
				unk_0x5D7CD709B34C90F0(*uParam0, 0);
			}
			if (!unk_0x7F420695E3F776FB(*uParam0, 0))
			{
				unk_0x44C48AC14D3C09ED(*uParam0, 1, 0);
			}
		}
		if (bParam1)
		{
			unk_0x734A9F4537A31459(uParam0);
		}
		else
		{
			unk_0xF09E30AF1B8FB379(uParam0);
		}
	}
}

void func_19(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
		bVar0 = true;
	}
	if (unk_0xC450B06E5AAA0985(uParam0->f_1))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_7))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_7, 0))
		{
			if (unk_0xA23AABF378361F85(uParam0->f_7))
			{
				unk_0x2BF2F8E20C19583C(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_20(struct<3> Param0, float fParam1)
{
	if (func_21(Global_79630, 0f, 0f, 0f, 0))
	{
		Global_79630 = { Param0 };
		Global_79633 = fParam1;
	}
}

bool func_21(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_22(int iParam0)
{
	Global_101533.f_21 = iParam0;
}

int func_23()
{
	if (Global_4)
	{
		return 1;
	}
	if (Global_101533 == 7 || Global_101533 == 8)
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	func_769();
	system::wait(0);
	func_768();
	func_16();
	func_7();
	switch (iLocal_2148)
	{
		case 0:
			func_656();
			break;
		
		case 1:
			func_654();
			break;
		
		case 2:
			func_651();
			break;
		
		case 3:
			func_647();
			break;
		
		case 4:
			func_617();
			break;
		
		case 5:
			func_616();
			break;
		
		case 6:
			func_615();
			break;
		
		case 7:
			func_614();
			break;
		
		case 8:
			func_611();
			break;
		
		case 9:
			func_559();
			break;
		
		case 10:
			func_25();
			break;
		
		case 11:
			func_25();
			break;
	}
}

void func_25()
{
	int iVar0;
	
	if (iLocal_2149)
	{
		func_558(57,477f, -742,8871f, 43,1195f, 339,1487f, 1, 0);
	}
	unk_0xEC9DAA34BBB4658C(func_556(1));
	unk_0xEC9DAA34BBB4658C(func_556(0));
	unk_0xEC9DAA34BBB4658C(Local_346[0 /*32*/].f_1);
	unk_0xEC9DAA34BBB4658C(Local_358[0 /*32*/].f_1);
	unk_0xEC9DAA34BBB4658C(Local_358[1 /*32*/].f_1);
	unk_0xEC9DAA34BBB4658C(Local_357[0 /*32*/].f_1);
	unk_0xEC9DAA34BBB4658C(Local_367[0 /*32*/].f_1);
	unk_0xEC9DAA34BBB4658C(Local_381[0 /*32*/].f_1);
	unk_0xEC9DAA34BBB4658C(Local_382[0 /*32*/].f_1);
	unk_0xEC9DAA34BBB4658C(Local_59.f_1);
	unk_0xEC9DAA34BBB4658C(Local_68[0 /*15*/].f_1);
	unk_0xEC9DAA34BBB4658C(Local_69[0 /*15*/].f_1);
	unk_0xEC9DAA34BBB4658C(Local_215.f_2);
	unk_0xEC9DAA34BBB4658C(Local_193.f_2);
	unk_0xA336AFF285251641("move_characters@franklin@fire");
	unk_0xA336AFF285251641("move_characters@michael@fire");
	unk_0xA336AFF285251641("move_m@fire");
	unk_0x80813AC549A1E8AE("missheist_agency3a_camera_men");
	unk_0xD04A772C411165F2("agency3a_crew_0_0");
	unk_0xD04A772C411165F2("agency3a_crew_1_0");
	unk_0xD04A772C411165F2("agency3a_michael_0");
	unk_0xD04A772C411165F2("agency3a_michael_1");
	unk_0xD04A772C411165F2("agency3a_michael_2");
	unk_0xD04A772C411165F2("agency3a_michael_3");
	unk_0xD04A772C411165F2("agency3a_michael_4");
	unk_0xD04A772C411165F2("agency3a_michael_5");
	unk_0xD04A772C411165F2("agency3a_michael_6");
	unk_0xD04A772C411165F2("agency3a_ambient_0");
	unk_0xD04A772C411165F2("agency3a_ambient_1");
	unk_0xD7E1DF759CD0FFF2("SCRIPT\FBI_Heist_5_Finale_02", 0, -1);
	unk_0x0C876A2D0F41B79C("AGENCY_HEIST_FIB_TOWER_ALARMS");
	unk_0x0C876A2D0F41B79C("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER");
	unk_0x8003D3C0115A1035();
	if (iLocal_2149)
	{
		func_552(0, -1, 1);
	}
	while ((((((((((((((((((((((((((((((((!unk_0x6252BC0DD8A320DB(func_556(1)) || !unk_0x6252BC0DD8A320DB(func_556(0))) || !unk_0x6252BC0DD8A320DB(Local_346[0 /*32*/].f_1)) || !unk_0x6252BC0DD8A320DB(Local_358[0 /*32*/].f_1)) || !unk_0x6252BC0DD8A320DB(Local_358[1 /*32*/].f_1)) || !unk_0x6252BC0DD8A320DB(Local_357[0 /*32*/].f_1)) || !unk_0x6252BC0DD8A320DB(Local_367[0 /*32*/].f_1)) || !unk_0x6252BC0DD8A320DB(Local_381[0 /*32*/].f_1)) || !unk_0x6252BC0DD8A320DB(Local_382[0 /*32*/].f_1)) || !unk_0x6252BC0DD8A320DB(Local_59.f_1)) || !unk_0x6252BC0DD8A320DB(Local_68[0 /*15*/].f_1)) || !unk_0x6252BC0DD8A320DB(Local_69[0 /*15*/].f_1)) || !unk_0x6252BC0DD8A320DB(Local_215.f_2)) || !unk_0x6252BC0DD8A320DB(Local_193.f_2)) || !unk_0xE100DD4F82A51BDE("move_characters@franklin@fire")) || !unk_0xE100DD4F82A51BDE("move_characters@michael@fire")) || !unk_0xE100DD4F82A51BDE("move_m@fire")) || !unk_0xE100DD4F82A51BDE("missheist_agency3a_camera_men")) || !unk_0xA08EEC7306CF6198("agency3a_crew_0_0")) || !unk_0xA08EEC7306CF6198("agency3a_crew_1_0")) || !unk_0xA08EEC7306CF6198("agency3a_michael_0")) || !unk_0xA08EEC7306CF6198("agency3a_michael_1")) || !unk_0xA08EEC7306CF6198("agency3a_michael_2")) || !unk_0xA08EEC7306CF6198("agency3a_michael_3")) || !unk_0xA08EEC7306CF6198("agency3a_michael_4")) || !unk_0xA08EEC7306CF6198("agency3a_michael_5")) || !unk_0xA08EEC7306CF6198("agency3a_michael_6")) || !unk_0xA08EEC7306CF6198("agency3a_ambient_0")) || !unk_0xA08EEC7306CF6198("agency3a_ambient_1")) || !unk_0xD7E1DF759CD0FFF2("SCRIPT\FBI_Heist_5_Finale_02", 0, -1)) || !unk_0x0C876A2D0F41B79C("AGENCY_HEIST_FIB_TOWER_ALARMS")) || !unk_0x0C876A2D0F41B79C("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER")) || !unk_0x6F13318788EDDAD8())
	{
		system::wait(0);
	}
	func_551(4, 1);
	func_550();
	func_8(27, 1, 0, 1, 0);
	func_8(26, 1, 0, 1, 0);
	func_8(34, 1, 0, 1, 0);
	func_8(36, 1, 0, 1, 0);
	func_8(29, 1, 0, 1, 0);
	func_8(30, 1, 0, 1, 0);
	func_8(31, 1, 0, 1, 0);
	func_8(32, 1, 0, 1, 0);
	func_8(33, 1, 0, 1, 0);
	unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
	unk_0xDAE61414743C8D1D(6);
	unk_0xD682DD0578BF5392(1);
	unk_0x425BBE19F25A57AB(0,1f);
	unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
	unk_0xD1B0AF388B711EBC(80,23f, -583,94f, 100f, -2,64f, -941,54f, -100f, 0, 1);
	unk_0xA7B0B03284E7503C(-25,7f, -820,1f, 50,3f, 330,1f, -664,3f, -100f, 0, 1, 1, 1, 1);
	unk_0x79CA429D8B4B057A(148f, 702f, 0f, 37f, -798f, 50f, 0, 0);
	unk_0x2094BC4B6731BA68(93,7743f, -749,4572f, 70,86904f, 1000f, 1, 0, 0, 0);
	iLocal_2470[0] = unk_0x56E8A6AA712B10C2("scr_fbi_falling_debris", 93,7743f, -749,4572f, 70,86904f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
	unk_0xF37CDE164C892195(iLocal_2124, "debris", 97f, -750f, 50f, "FBI_HEIST_RAID", 0, 0, 0);
	Local_59.f_0 = unk_0x5779387E956077A6(Local_59.f_1, 57,477f, -742,8871f, 43,1195f, 339,1487f, 1, 1, 0);
	unk_0x5FE0938FDE9B0958(Local_59.f_0, 1);
	unk_0x1DE99C193C7EC64B(Local_59.f_0, 1084227584);
	if (func_549() != 1)
	{
		func_503(1, 0);
	}
	unk_0x4669032A1DFBB449(unk_0x4A8C381C258A124D(), "move_characters@franklin@fire", 1048576000);
	unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_59.f_0, -1);
	func_489(unk_0x4A8C381C258A124D(), 12, 7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	unk_0x30325AB568E2F2EF(unk_0x4A8C381C258A124D());
	func_488(&uLocal_2275, 1, unk_0x4A8C381C258A124D(), "franklin", 0, 1);
	func_175(&(iLocal_2201[0]), 0, Local_59.f_0, 0, 1, 0, 0);
	unk_0x4669032A1DFBB449(iLocal_2201[0], "move_characters@michael@fire", 1048576000);
	func_174(iLocal_2201[0]);
	func_173(&(iLocal_2201[0]), 1);
	func_488(&uLocal_2275, 0, iLocal_2201[0], "michael", 0, 1);
	func_489(iLocal_2201[0], 12, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	Local_346[0 /*32*/] = func_162(func_170(3, iLocal_2086), Local_59.f_0, 1, 7, 1);
	unk_0x4669032A1DFBB449(Local_346[0 /*32*/], "move_m@fire", 1048576000);
	func_174(Local_346[0 /*32*/]);
	func_173(&(Local_346[0 /*32*/]), 1);
	unk_0xEB418CA245FFE897(Local_346[0 /*32*/], &(Local_346[0 /*32*/].f_28));
	if (Global_97971)
	{
		Local_346[1 /*32*/] = func_162(func_170(3, iLocal_2087), Local_59.f_0, 2, 7, 1);
		unk_0x4669032A1DFBB449(Local_346[1 /*32*/], "move_m@fire", 1048576000);
		func_174(Local_346[1 /*32*/]);
		func_173(&(Local_346[1 /*32*/]), 1);
		unk_0xEB418CA245FFE897(Local_346[1 /*32*/], &(Local_346[1 /*32*/].f_28));
	}
	iVar0 = 0;
	while (iVar0 <= (Local_68.f_0 - 1))
	{
		Local_68[iVar0 /*15*/] = unk_0x5779387E956077A6(Local_68[iVar0 /*15*/].f_1, Local_68[iVar0 /*15*/].f_3, Local_68[iVar0 /*15*/].f_6, 1, 1, 0);
		unk_0x4539850624F18A9E(Local_68[iVar0 /*15*/], 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		Local_69[iVar0 /*15*/] = unk_0x5779387E956077A6(Local_69[iVar0 /*15*/].f_1, 63,1439f, -728,0931f, 43,1153f, 340,5584f, 1, 1, 0);
		unk_0x4539850624F18A9E(Local_69[iVar0 /*15*/], 1);
		iVar0++;
	}
	func_161(&(Local_367[0 /*32*/]), &(Local_69[0 /*15*/]), -1);
	unk_0xFE54B8568B2ABD12(&(Local_367[0 /*32*/].f_2));
	func_161(&(Local_367[1 /*32*/]), &(Local_69[0 /*15*/]), 0);
	unk_0xFE54B8568B2ABD12(&(Local_367[1 /*32*/].f_2));
	while ((!func_160() || !func_159()) || !func_158())
	{
		func_154();
		func_146();
		func_143();
		system::wait(0);
	}
	func_142(&(Local_357[0 /*32*/]));
	Local_193.f_0 = unk_0x4E55EAB577C13329(Local_193.f_2, unk_0x0D1381B6E0F3987D(Local_357[0 /*32*/], 0f, 0f, 1f), 1, 1, 0);
	unk_0x4D306DD94DD6FDBA(Local_193.f_0, Local_357[0 /*32*/], unk_0x72F7E39FB49FC0BA(Local_357[0 /*32*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
	unk_0x10425721983AE158(Local_357[0 /*32*/], "missheist_agency3a_camera_men", "mcs2_crew_idle_m_camera", 1000f, -8f, -1, 17, 0, 0, 0, 0);
	unk_0xD8ED11B32DF72E0B(Local_357[0 /*32*/], 1, 0);
	func_142(&(Local_357[1 /*32*/]));
	Local_215.f_0 = unk_0x4E55EAB577C13329(Local_215.f_2, unk_0x0D1381B6E0F3987D(Local_357[1 /*32*/], 0f, 0f, 1f), 1, 1, 0);
	unk_0x4D306DD94DD6FDBA(Local_215.f_0, Local_357[1 /*32*/], unk_0x72F7E39FB49FC0BA(Local_357[1 /*32*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
	unk_0x10425721983AE158(Local_357[1 /*32*/], "missheist_agency3a_camera_men", "mcs2_crew_idle_m_boom", 1000f, -8f, -1, 17, 0, 0, 0, 0);
	unk_0xD8ED11B32DF72E0B(Local_357[1 /*32*/], 1, 0);
	unk_0x4C6BF3BC14C6F6D6("AGENCY_HEIST_FIB_TOWER_ALARMS", 1);
	unk_0x4C6BF3BC14C6F6D6("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER", 1);
	unk_0x4C6BF3BC14C6F6D6("AGENCY_HEIST_FIB_TOWER_ALARMS_UPPER_B", 1);
	system::wait(0);
	while (((!func_141(unk_0x4A8C381C258A124D()) || !func_141(iLocal_2201[0])) || !func_141(Local_346[0 /*32*/])) || (unk_0xFC8BFE4B41177C22(Local_346[1 /*32*/]) && !func_141(Local_346[1 /*32*/])))
	{
		system::wait(0);
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_2201[0]))
	{
		unk_0xD9101AFF302E59F6(iLocal_2201[0], fLocal_2146);
		unk_0xDD7B1A7458742205(iLocal_2201[0], fLocal_2147);
		unk_0xA681A230BE3E4A24(iLocal_2201[0], 87, 81, 68);
		unk_0xC91E7DFEE6F07739(iLocal_2201[0], 1);
	}
	if (!iLocal_2149)
	{
		unk_0xAC48F8E2BF2BEBF7(57,5341f, -742,9075f, 43,12f, func_140(0f, 0f, 339,1699f), 10f, 0);
		while (!unk_0x9E2D35FA908F57B4())
		{
			system::wait(0);
		}
		unk_0x6981C3213B841071();
	}
	iLocal_1965 = unk_0x1DD05E817C89C737();
	while (!func_3(&iLocal_1965, 1000))
	{
		system::wait(0);
	}
	if (func_139(25, 0))
	{
		func_137(&Local_79, 25);
	}
	else
	{
		bLocal_1946 = true;
		Local_79 = { 1062,718f, -1968,747f, 30,0144f };
	}
	func_124(0, 0, 0, 0, 1, 1);
	while (!unk_0x9390801B06EE998F())
	{
		system::wait(0);
	}
	unk_0xCAC4020CCF361AC8("AH_3A_GET_TO_LESTERS");
	func_26(10, "After getting back into the firetruck - returning to hideout", 1, 0, 0, 1);
	iLocal_48 = 23;
}

void func_26(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x1B79E937E91F40C3("FinaleC2", unk_0x1AF90EB93E0012D6()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_101570)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_101570)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_123(1);
		if (iParam0 <= Global_101570)
		{
		}
		iVar1 = func_121(unk_0x1AF90EB93E0012D6(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113969.f_9088.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_119(iVar1);
			cVar3 = { Global_92301[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113969.f_9088.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x375B1B37EF136A49(&cVar3, uVar2, Global_101570, iParam0);
		}
		else
		{
			iVar4 = func_114(unk_0x1AF90EB93E0012D6(), 1);
			if (iVar4 != -1)
			{
				Global_113969.f_18577[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_113(iVar4)}, 4);
				unk_0x375B1B37EF136A49(&uVar5, 0, Global_101570, iParam0);
			}
			else
			{
				iVar6 = func_112(&(Global_101533.f_3));
				if (iVar6 > -1)
				{
					Global_113969.f_24989.f_4[iVar6] = 0;
				}
			}
		}
		Global_95691 = iParam2;
		Global_101570 = iParam0;
		func_27(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x1B79E937E91F40C3(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_101570)
	{
	}
}

void func_27(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_28(&Global_107514, unk_0x1AF90EB93E0012D6(), iParam0, uParam1, iParam3, iParam2);
}

void func_28(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_549();
	uParam0->f_1 = func_101();
	unk_0x239D73A1DE006629(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_69(&(uParam0->f_2884), 0);
		func_68(unk_0x4A8C381C258A124D());
		func_61(unk_0x4A8C381C258A124D(), 0);
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113969.f_2366.f_539.f_294[iVar1];
		if (iVar1 == func_58())
		{
			func_49(unk_0x4A8C381C258A124D(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_101258[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_101258[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_101258[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_101258[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_101258[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_101258[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_101258[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_101258[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_101258[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_101258[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113969.f_2366.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113969.f_2366.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xDF7F16323520B858(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xDF7F16323520B858(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xDF7F16323520B858(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xDF7F16323520B858(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113969.f_20567.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_61340[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113969.f_2366.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113969.f_2366.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113969.f_2366.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113969.f_2366[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113969.f_2366[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xDF7F16323520B858(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0xDF7F16323520B858(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0xDF7F16323520B858(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_30(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_29(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_29(var uParam0)
{
	*uParam0 = Global_97362;
	uParam0->f_1 = Global_97363;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_30(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x4A8C381C258A124D();
	}
	if (unk_0xFC8BFE4B41177C22(iParam2))
	{
		uParam1->f_5 = func_48(iParam2);
	}
	if (func_45(iParam2, &iVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x2E6A27037F1DC473(iVar0, joaat("skylift")) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
			{
				func_31(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam2, 0))
	{
		func_33(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_32(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_101533.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(var uParam0, int iParam1, int iParam2)
{
	func_40(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_36(iParam1, 145, 0);
	uParam0->f_11 = func_35(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_34(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		uParam0->f_6 = unk_0xCFC0C995455A6204(iParam1);
		uParam0->f_3 = { unk_0xE5741C6B6539231F(iParam1) };
		if (unk_0x5105BE70DEF1F5FB(iParam1, -1154,326f, -1523,871f, 3,262189f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_6 = 305,6424f;
		}
		if (Global_79084 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[iVar0]))
		{
			if (iParam0 == Global_78179.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 145;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				return Global_98854[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_36(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				if (bParam1 == 145 || bParam1 == Global_98854[iVar0])
				{
					if (iParam2 == 0 || unk_0x4B423FAA24E8ABF0(iParam0) == func_37(bParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_37(bool bParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_39(bParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_38(bParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_38(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (bParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113969.f_9088.f_99.f_58[128] && !Global_113969.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113969.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113969.f_9088.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
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
}

bool func_39(bool bParam0)
{
	return bParam0 < 3;
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_44(uParam1);
		uParam1->f_66 = unk_0x4B423FAA24E8ABF0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCA7159F2C5FF745A(iParam0), 16);
		*uParam1 = unk_0x4F06416A18248EA0(iParam0);
		unk_0xFF4B16F297D9CB3E(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x741D9B0685E67684(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9D35AABAEE206518(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xDA63CE76F9AAB439(iParam0);
		uParam1->f_67 = unk_0xA089B04A208DBD0B(iParam0);
		uParam1->f_69 = unk_0x6A375D21624F9187(iParam0);
		uParam1->f_70 = unk_0x38A100E16C95161B(iParam0);
		unk_0x04434FA56DED5500(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x64FEACF0AD019F1F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xF1B79038130E3C08(iParam0, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 28);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 3))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 29);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 30);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_43(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			uParam1->f_68 = unk_0x54DA32C15F7A6ABA(iParam0);
		}
		if (unk_0x00C6FDED3EB75117(uParam1->f_66))
		{
			if (unk_0x61F41693A4648B46(iParam0))
			{
				switch (unk_0x68F7F7C5DF6717F8(iParam0))
				{
					case 3:
					case 0:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xE6BE8A525BA6BD44(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 9);
		}
		if (unk_0xFDA2576D37032738(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 10);
		}
		if (unk_0xA9D64A14804D119B(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 13);
			unk_0xD9B9D4D1CCED7CA6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x2C0B2BB7913E8DBA(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x0BCE48C8677F9824(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 11);
		}
		if (unk_0xD130E7CDEE903624(iParam0, "IgnoredByQuickSave") && unk_0x3F40AE65F056B43D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 27);
		}
	}
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				switch (unk_0xD6BA8C57BDF9DEB9(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x94C9CD3D66808551(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_44(var uParam0)
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_45(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				*uParam1 = unk_0xDC8D5832207C2EAD();
			}
			else
			{
				*uParam1 = unk_0x6EF03BE64E058E2F(iParam0, 1);
			}
			if (unk_0xFC8BFE4B41177C22(*uParam1))
			{
				if (unk_0xD9F5E1FEFD1329E4(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(*uParam1, 1), unk_0xD1A6A821F5AC81DB(iParam0, 1), 1) < 100f)
					{
						if (unk_0x2E6A27037F1DC473(*uParam1, joaat("taxi")))
						{
							if (unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != iParam0 && unk_0xFD5C5BBD1FE92BB7(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_46(*uParam1, func_549(), 1))
						{
							sVar0 = unk_0x1AF90EB93E0012D6();
							if (!unk_0x1B79E937E91F40C3(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x7F420695E3F776FB(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xD130E7CDEE903624(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x3F40AE65F056B43D(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x2E6A27037F1DC473(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_46(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_47(bParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113969.f_7232[iVar2], 0))
		{
			if (unk_0xFE448E8C2209CA31(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_556(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_49(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_48(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_57(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_56(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_39(bVar0))
		{
			uParam1->f_59 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_64;
		}
		else if (unk_0x76CD105BCAC6EB9F() && unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			if (func_54(161, iParam3))
			{
				uParam1->f_59 = func_50(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_50(753, iParam3);
			}
			uParam1->f_60 = func_50(754, iParam3);
			uParam1->f_61 = func_50(755, iParam3);
		}
		if (unk_0x76CD105BCAC6EB9F() && iParam0 == unk_0x4A8C381C258A124D())
		{
			if (func_54(161, iParam3))
			{
				uParam1->f_59 = func_50(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_50(753, iParam3);
			}
		}
	}
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_51(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_51(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_52(uParam1));
}

int func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_53();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_53()
{
	return Global_1574926;
}

int func_54(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_55(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_55(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_52(uParam1));
}

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xB204F40D393426B6(iParam0, iParam1, 1);
		*uParam3 = unk_0x0DC23FA727759F9F(iParam0, iParam1);
	}
	else
	{
		iVar0 = bParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x6DBAC05AFA907A23(iParam0) && unk_0xB34A70D5AC13FB8C(iParam0) != -1)
				{
					*uParam2 = unk_0xB34A70D5AC13FB8C(iParam0);
					*uParam3 = unk_0xAA6E5BB6733B4BB0(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_57(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xC0120BBCC298EA2F(iParam0, iParam1);
		*uParam3 = unk_0xD6AED6BFCC58AF7F(iParam0, iParam1);
		*uParam4 = unk_0xDAF263B0E792EAEC(iParam0, iParam1);
	}
	else
	{
		iVar0 = bParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_58()
{
	func_59();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_59()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_556(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_48(unk_0x4A8C381C258A124D());
			if (func_39(iVar0) && (!func_60(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_39(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_60(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_61(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	bVar0 = func_48(iParam0);
	if (func_39(bVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (iParam0 == unk_0x4A8C381C258A124D())
		{
			func_62(iParam0, &(Global_113969.f_2366.f_539.f_298[bVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113969.f_2366.f_539.f_1730[iVar2 /*4*/][bVar0] = unk_0xFCFCA9D377ED6568(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xAE146ED24909CAF4();
					if (Global_113969.f_2366.f_539.f_1730[iVar2 /*4*/][bVar0] == iVar1)
					{
						Global_113969.f_2366.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x755C848B9B13C696(unk_0x259BE71D8A81D4FA(), &uVar3);
			if (bVar0 == 0)
			{
				unk_0x1164A75E490C27B6(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (bVar0 == 1)
			{
				unk_0x1164A75E490C27B6(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (bVar0 == 2)
			{
				unk_0x1164A75E490C27B6(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_62(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	bool bVar10;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_67(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xBCEDAE6CA2B2046E(iParam0, func_67(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x1149D67DB429787A(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x6C81F95CADD1E6D0(iParam0, Var4.f_0);
					Var4.f_4 = unk_0xB92D606AB30C334C(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xACBE463290141D49(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_65(Var4.f_0, bVar1);
					while (iVar2 != 0)
					{
						if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, iVar2))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_65(Var4.f_0, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0xAFA659708600A8CD();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0xA40B513DA7201333(iVar5, &Var7) && !func_64(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0x4BFA043D318BF9AE(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x1149D67DB429787A(iParam0, Var4.f_0);
					if (unk_0x66B90BA528CFEBCE(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x6C81F95CADD1E6D0(iParam0, Var4.f_0);
						Var4.f_4 = unk_0xB92D606AB30C334C(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xACBE463290141D49(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					bVar10 = false;
					bVar1 = false;
					while (bVar1 < unk_0x0A334014DFD4952C(iVar5))
					{
						if (unk_0x38A1582CAC3F4E95(iVar5, bVar1, &Var8))
						{
							if (!func_63(Var8.f_3))
							{
								if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, Var8.f_3))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), bVar10);
								}
								bVar10++;
							}
						}
						bVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x66B90BA528CFEBCE(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo_slide"):
		case joaat("component_pistol_mk2_camo_02_slide"):
		case joaat("component_pistol_mk2_camo_03_slide"):
		case joaat("component_pistol_mk2_camo_04_slide"):
		case joaat("component_pistol_mk2_camo_05_slide"):
		case joaat("component_pistol_mk2_camo_06_slide"):
		case joaat("component_pistol_mk2_camo_07_slide"):
		case joaat("component_pistol_mk2_camo_08_slide"):
		case joaat("component_pistol_mk2_camo_09_slide"):
		case joaat("component_pistol_mk2_camo_10_slide"):
		case joaat("component_pistol_mk2_camo_ind_01_slide"):
		case joaat("component_snspistol_mk2_camo_slide"):
		case joaat("component_snspistol_mk2_camo_02_slide"):
		case joaat("component_snspistol_mk2_camo_03_slide"):
		case joaat("component_snspistol_mk2_camo_04_slide"):
		case joaat("component_snspistol_mk2_camo_05_slide"):
		case joaat("component_snspistol_mk2_camo_06_slide"):
		case joaat("component_snspistol_mk2_camo_07_slide"):
		case joaat("component_snspistol_mk2_camo_08_slide"):
		case joaat("component_snspistol_mk2_camo_09_slide"):
		case joaat("component_snspistol_mk2_camo_10_slide"):
		case joaat("component_snspistol_mk2_camo_ind_01_slide"):
		case joaat("component_pistol_mk2_varmod_xm3_slide"):
			return 1;
			break;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case joaat("weapon_metaldetector"):
			case joaat("weapon_precisionrifle"):
			case joaat("weapon_tacticalrifle"):
			case joaat("weapon_pistolxm3"):
			case joaat("weapon_candycane"):
			case joaat("weapon_railgunxm3"):
			case 350597077:
			case joaat("weapon_battlerifle"):
			case joaat("weapon_snowlauncher"):
			case -624951259:
				return 1;
				break;
			}
	}
	return 0;
}

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
				
				case 5:
					iVar0 = 1400690398;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
				
				case 7:
					iVar0 = joaat("component_microsmg_varmod_xm3");
					break;
				
				case 8:
					iVar0 = 1694268374;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
				
				case 10:
					iVar0 = 1605520746;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
				
				case 4:
					iVar0 = joaat("component_pumpshotgun_varmod_xm3");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 4:
					iVar0 = 221907180;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
				
				case 8:
					iVar0 = 302671608;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bat_varmod_xm3");
					break;
				
				case 1:
					iVar0 = joaat("component_bat_varmod_xm3_01");
					break;
				
				case 2:
					iVar0 = joaat("component_bat_varmod_xm3_02");
					break;
				
				case 3:
					iVar0 = joaat("component_bat_varmod_xm3_03");
					break;
				
				case 4:
					iVar0 = joaat("component_bat_varmod_xm3_04");
					break;
				
				case 5:
					iVar0 = joaat("component_bat_varmod_xm3_05");
					break;
				
				case 6:
					iVar0 = joaat("component_bat_varmod_xm3_06");
					break;
				
				case 7:
					iVar0 = joaat("component_bat_varmod_xm3_07");
					break;
				
				case 8:
					iVar0 = joaat("component_bat_varmod_xm3_08");
					break;
				
				case 9:
					iVar0 = joaat("component_bat_varmod_xm3_09");
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -1240142720;
					break;
			}
			break;
		
		case joaat("weapon_battlerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -292433650;
					break;
				
				case 1:
					iVar0 = 494808810;
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -1675905033;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_66(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x660FA55F8D417CAB(iVar1))
					{
						if (unk_0x737024F2814ABDDD(iVar1, iVar2, &Var5))
						{
							if (!func_63(Var5.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_66(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9A7818E159C72516();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xDF94727C5BBB298F(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_68(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_48(iParam0);
	if (func_39(bVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		Global_113969.f_2366.f_539.f_294[bVar0] = unk_0xE5E6F6EFCE07789A(iParam0);
	}
}

void func_69(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	uParam0->f_3 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
	uParam0->f_5 = unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D());
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		uParam0->f_4 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
	}
	if (system::vdist(*uParam0, 320,9934f, 265,2515f, 82,1221f) < 10f)
	{
		*uParam0 = { 301,2162f, 202,1357f, 103,3797f };
		uParam0->f_3 = 156,5144f;
	}
	else if (system::vdist(*uParam0, 377,153f, -717,567f, 10,0536f) < 10f)
	{
		*uParam0 = { 394,2567f, -713,5439f, 28,2853f };
		uParam0->f_3 = 276,6273f;
	}
	else if (system::vdist(*uParam0, -1425,564f, -244,3f, 15,8053f) < 10f)
	{
		*uParam0 = { -1423,472f, -214,2539f, 45,5004f };
		uParam0->f_3 = 353,8757f;
	}
	else if (unk_0x486FF5D06E9659F1(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4,2587f, 525,0214f, 173,6281f };
		uParam0->f_3 = 203,6746f;
	}
	else if (BitTest(Global_79638, 4))
	{
		*uParam0 = { 452,0255f, 5571,85f, 780,1859f };
		uParam0->f_3 = 78,9858f;
	}
	else if (BitTest(Global_79638, 5))
	{
		*uParam0 = { -745,4462f, 5595,146f, 40,6594f };
		uParam0->f_3 = 261,747f;
	}
	else if (BitTest(Global_79638, 6))
	{
		*uParam0 = { -1675,521f, -1125,59f, 12,091f };
		uParam0->f_3 = 271,8208f;
	}
	else if (BitTest(Global_79638, 7))
	{
		*uParam0 = { -1631,219f, -1112,805f, 12,0212f };
		uParam0->f_3 = 316,8879f;
	}
	else if (unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0556019E7EE8EC9A(1272,659f, -1715,467f, 53,7715f, "v_lesters"))
	{
		*uParam0 = { 1276,956f, -1725,189f, 53,6551f };
		uParam0->f_3 = 204,1703f;
	}
	else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -415,4365f, 2068,289f, 113,3002f, -564,9516f, 1884,703f, 134,0403f, 258,75f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -596,4706f, 2089,921f, 125,4128f, -581,2134f, 2036,256f, 136,2836f, 9,5f, 0, 1, 0))
	{
		*uParam0 = { -601,59f, 2099,197f, 128,8928f };
		uParam0->f_3 = 204,7498f;
	}
	else if (system::vdist(*uParam0, -1007,393f, -477,9584f, 52,5357f) < 8f)
	{
		*uParam0 = { -1018,376f, -483,9436f, 36,0964f };
		uParam0->f_3 = 114,7664f;
	}
	else if (system::vdist(*uParam0, 480,6662f, -1317,808f, 28,20303f) < 15f)
	{
		*uParam0 = { 497,7238f, -1310,932f, 28,2372f };
		uParam0->f_3 = 289,3663f;
	}
	else if (system::vdist(*uParam0, 2329,527f, 2571,311f, 45,6779f) < 5f)
	{
		*uParam0 = { 2316,93f, 2594,153f, 45,7199f };
		uParam0->f_3 = 348,1325f;
	}
	if (iParam1 == 1)
	{
		if (func_72(&iVar0))
		{
			if (func_71(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, 1, 0))
		{
			iVar3 = func_549();
			if (iVar3 == 0)
			{
				*uParam0 = { -65,1234f, 81,2517f, 70,5644f };
				uParam0->f_3 = 71,6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68,5531f, -1824,377f, 25,9424f };
				uParam0->f_3 = 215,8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220,8189f, -1162,302f, 22,0242f };
				uParam0->f_3 = 70,2711f;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 483,7175f, -1326,63f, 28,2135f, 474,9644f, -1307,998f, 34,49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495,4108f, -1306,08f, 29,2883f };
			uParam0->f_3 = 213,6273f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1146,77f, -1534,22f, 3,37f, -1158,453f, -1517,75f, 6,374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160,095f, -1515,407f, 3,1496f };
			uParam0->f_3 = 305,6424f;
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 439,5432f, -996,9769f, 24,88307f, 428,2935f, -997,0192f, 28,57458f, 8,5f, 0, 1, 0))
		{
			*uParam0 = { 431,8853f, -1013,133f, 28,7907f };
			uParam0->f_3 = 186,6814f;
		}
		else if (func_70(*uParam0, "v_hospital", 307,3065f, -589,9595f, 43,302f))
		{
			*uParam0 = { 279,4137f, -585,8815f, 43,2502f };
			uParam0->f_3 = 48,8028f;
		}
	}
}

int func_70(struct<3> Param0, char* sParam1, struct<3> Param2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7830326EF9D54DBB(Param0))
	{
		iVar0 = unk_0x0556019E7EE8EC9A(Param2, sParam1);
		if (!unk_0xF8A8852F99E201DD(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x91398220755C14BF(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_71(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829,842f, -191,7454f, 36,4386f };
			*uParam2 = 29,5061f;
			break;
		
		case 1:
			*uParam1 = { 129,8484f, -1716,528f, 28,0702f };
			*uParam2 = 50,3483f;
			break;
		
		case 2:
			*uParam1 = { -1296,913f, -1120,999f, 5,3951f };
			*uParam2 = 0,9933f;
			break;
		
		case 3:
			*uParam1 = { 1938,028f, 3718,736f, 31,3154f };
			*uParam2 = 118,2305f;
			break;
		
		case 4:
			*uParam1 = { 1197,866f, -469,3809f, 65,0885f };
			*uParam2 = 346,4477f;
			break;
		
		case 5:
			*uParam1 = { -32,2161f, -135,8212f, 56,0532f };
			*uParam2 = 186,0052f;
			break;
		
		case 6:
			*uParam1 = { -287,7696f, 6238,081f, 30,2902f };
			*uParam2 = 316,1349f;
			break;
		
		case 7:
			*uParam1 = { 99,2876f, -1395,16f, 28,2759f };
			*uParam2 = 320,2739f;
			break;
		
		case 8:
			*uParam1 = { 1679,445f, 4819,056f, 41,0035f };
			*uParam2 = 4,6192f;
			break;
		
		case 9:
			*uParam1 = { 411,3063f, -809,1863f, 28,1554f };
			*uParam2 = 1,8972f;
			break;
		
		case 10:
			*uParam1 = { -1088,054f, 2699,167f, 19,2748f };
			*uParam2 = 129,7382f;
			break;
		
		case 11:
			*uParam1 = { 1194,163f, 2695,644f, 36,9225f };
			*uParam2 = 1,1454f;
			break;
		
		case 12:
			*uParam1 = { -821,2829f, -1088,027f, 10,0499f };
			*uParam2 = 120,5883f;
			break;
		
		case 13:
			*uParam1 = { -3,3416f, 6521,303f, 30,2961f };
			*uParam2 = 316,4451f;
			break;
		
		case 14:
			*uParam1 = { -1208,417f, -785,9635f, 16,0139f };
			*uParam2 = 36,3181f;
			break;
		
		case 15:
			*uParam1 = { 623,1845f, 2739,191f, 40,9588f };
			*uParam2 = 3,5411f;
			break;
		
		case 16:
			*uParam1 = { 130,9555f, -198,2084f, 53,41f };
			*uParam2 = 251,3506f;
			break;
		
		case 17:
			*uParam1 = { -3164,065f, 1067,317f, 19,6778f };
			*uParam2 = 101,2229f;
			break;
		
		case 18:
			*uParam1 = { -713,2797f, -174,2767f, 35,8962f };
			*uParam2 = 29,8138f;
			break;
		
		case 19:
			*uParam1 = { -147,0616f, -306,4322f, 37,7912f };
			*uParam2 = 160,4526f;
			break;
		
		case 20:
			*uParam1 = { -1461,355f, -230,6092f, 48,3064f };
			*uParam2 = 318,7851f;
			break;
		
		case 21:
			*uParam1 = { -1347,739f, -1278,573f, 3,8952f };
			*uParam2 = 17,9365f;
			break;
		
		case 22:
			*uParam1 = { 325,6833f, 164,3263f, 102,4425f };
			*uParam2 = 68,6407f;
			break;
		
		case 23:
			*uParam1 = { 1858,774f, 3742,393f, 32,0779f };
			*uParam2 = 301,2329f;
			break;
		
		case 24:
			*uParam1 = { -286,3272f, 6202,802f, 30,3323f };
			*uParam2 = 225,1334f;
			break;
		
		case 25:
			*uParam1 = { -1161,596f, -1417,7f, 3,712f };
			*uParam2 = 246,9161f;
			break;
		
		case 26:
			*uParam1 = { 1308,952f, -1660,611f, 50,2362f };
			*uParam2 = 163,5456f;
			break;
		
		case 27:
			*uParam1 = { -3161,585f, 1074,214f, 19,6847f };
			*uParam2 = 98,6092f;
			break;
		
		case 28:
			*uParam1 = { 28,423f, -1110,814f, 28,2848f };
			*uParam2 = 85,2495f;
			break;
		
		case 29:
			*uParam1 = { 1704,966f, 3749,709f, 33,0188f };
			*uParam2 = 45,6778f;
			break;
		
		case 30:
			*uParam1 = { 223,949f, -38,7894f, 68,6483f };
			*uParam2 = 159,4265f;
			break;
		
		case 31:
			*uParam1 = { 837,7854f, -1017,963f, 26,3045f };
			*uParam2 = 181,0445f;
			break;
		
		case 32:
			*uParam1 = { -313,1914f, 6093,351f, 30,4625f };
			*uParam2 = 315,8405f;
			break;
		
		case 33:
			*uParam1 = { -663,4631f, -952,8069f, 20,3143f };
			*uParam2 = 92,6796f;
			break;
		
		case 34:
			*uParam1 = { -1323,06f, -392,8577f, 35,4596f };
			*uParam2 = 210,7398f;
			break;
		
		case 35:
			*uParam1 = { -1106,102f, 2684,35f, 18,0953f };
			*uParam2 = 127,0383f;
			break;
		
		case 36:
			*uParam1 = { -3157,932f, 1081,309f, 19,6953f };
			*uParam2 = 100,2942f;
			break;
		
		case 37:
			*uParam1 = { 2562,882f, 312,8641f, 107,4612f };
			*uParam2 = 179,205f;
			break;
		
		case 38:
			*uParam1 = { 822,48f, -2142,875f, 27,8496f };
			*uParam2 = 355,0598f;
			break;
		
		case 39:
			*uParam1 = { -1137,053f, -1993,916f, 12,1677f };
			*uParam2 = 43,1213f;
			break;
		
		case 40:
			*uParam1 = { 717,8107f, -1084,081f, 21,3094f };
			*uParam2 = 93,2649f;
			break;
		
		case 41:
			*uParam1 = { -387,6789f, -128,2568f, 37,6796f };
			*uParam2 = 119,1085f;
			break;
		
		case 42:
			*uParam1 = { 117,8835f, 6599,415f, 31,0134f };
			*uParam2 = 90,7225f;
			break;
		
		case 43:
			*uParam1 = { 1201,709f, 2664,813f, 36,8102f };
			*uParam2 = 133,9002f;
			break;
		
		case 44:
			*uParam1 = { -200,1521f, -1297,502f, 30,296f };
			*uParam2 = 269,0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_21(*uParam1, 0f, 0f, 0f, 0);
}

int func_72(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_100())
		{
			*uParam0 = func_77(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 6, -1, 0, 1, -1);
			if (func_76(*uParam0) && !func_73(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_73(int iParam0)
{
	return func_74(iParam0, 0, 1);
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_14() == 0)
		{
			return BitTest(func_50(func_75(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_76(int iParam0)
{
	return func_74(iParam0, 5, 1);
}

int func_77(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (iParam1 == 6 || iParam1 == func_99(iVar0))
		{
			if (!bParam3 || func_98(iVar0))
			{
				fVar1 = unk_0xED977E2AE2CB16EE(Param0, func_78(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_78(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_95(Global_103686);
			break;
		
		case 46:
			if (Global_1845111 != func_94())
			{
				if (func_93(Global_1845111))
				{
					return func_86(2, 2);
				}
				else if (func_85(Global_1845111))
				{
					return func_86(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return func_83(-9,9f, -0,5f, 1f);
			break;
		
		case 48:
			return -1422,197f, -3015,803f, -79,1603f;
			break;
		
		case 49:
			return 203,0799f, 5200,189f, -89,6f;
			break;
		
		case 52:
			return 2714,547f, -354,2701f, -55,1867f;
			break;
		
		case 50:
			return Global_1964427;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159,901f, 1075,213f, -25,36174f;
			break;
		
		case 55:
			return -2194,123f, 1103,805f, -24,2451f;
			break;
		
		case 56:
			switch (func_82())
			{
				case 155:
					return 379,4285f, -53,6067f, 111,7088f;
					break;
				
				case 156:
					return -1029,166f, -426,3766f, 72,2069f;
					break;
				
				case 157:
					return -581,9924f, -721,3945f, 121,3509f;
					break;
				
				case 158:
					return -1013,718f, -768,3539f, 69,4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_79();
			break;
		
		case 59:
			return 560f, -405f, -69,6591f;
			break;
		
		case 60:
			return -1299,691f, -3017,165f, -48,2612f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_79()
{
	if (!func_81(Global_1949748))
	{
		return Global_1949748;
	}
	switch (func_80())
	{
		case 0:
			return -29,532f, 6435,136f, 31,162f;
		
		case 1:
			return 1705,214f, 4819,167f, 41,75f;
		
		case 2:
			return 1795,522f, 3899,753f, 33,869f;
		
		case 3:
			return 1335,536f, 2758,746f, 51,099f;
		
		case 4:
			return 795,583f, 1210,78f, 338,962f;
		
		case 5:
			return -3192,67f, 1077,205f, 20,594f;
		
		case 6:
			return -789,719f, 5400,921f, 33,915f;
		
		case 7:
			return -24,384f, 3048,167f, 40,703f;
		
		case 8:
			return 2666,786f, 1469,324f, 24,237f;
		
		case 9:
			return -1454,966f, 2667,503f, 3,2f;
		
		case 10:
			return 2340,418f, 3054,188f, 47,888f;
		
		case 11:
			return 1509,183f, -2146,795f, 76,853f;
		
		case 12:
			return 1137,404f, -1358,654f, 34,322f;
		
		case 13:
			return -57,208f, -2658,793f, 5,737f;
		
		case 14:
			return 1905,017f, 565,222f, 175,558f;
		
		case 15:
			return 974,484f, -1718,798f, 30,296f;
		
		case 16:
			return 779,077f, -3266,297f, 5,719f;
		
		case 17:
			return -587,728f, -1637,208f, 19,611f;
		
		case 18:
			return 733,99f, -736,803f, 26,165f;
		
		case 19:
			return -1694,632f, -454,082f, 40,712f;
		
		case 20:
			return -1330,726f, -1163,948f, 4,313f;
		
		case 21:
			return -496,618f, 40,231f, 52,316f;
		
		case 22:
			return 275,527f, 66,509f, 94,108f;
		
		case 23:
			return 260,928f, -763,35f, 30,559f;
		
		case 24:
			return -478,025f, -741,45f, 30,299f;
		
		case 25:
			return 894,94f, 3603,911f, 32,56f;
		
		case 26:
			return -2166,511f, 4289,503f, 48,733f;
		
		case 27:
			return 1465,633f, 6553,67f, 13,771f;
		
		case 28:
			return 1101,032f, -335,172f, 66,944f;
		
		case 29:
			return 149,683f, -1655,674f, 29,028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_80()
{
	return Global_2652592.f_2671;
}

int func_81(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	return Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_8;
}

Vector3 func_83(struct<3> Param0)
{
	return unk_0xF10F2A2453AF1DFB(func_84(), 0f, Param0);
}

Vector3 func_84()
{
	return -880f, -2770f, -50f;
}

int func_85(int iParam0)
{
	if (iParam0 != func_94())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 0) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 1)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_86(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1845111 != func_94())
	{
		if (iParam1 == 3)
		{
			if (func_87(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 4))
			{
				if (func_87(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1845281[Global_1845111 /*883*/].f_268.f_292, 5))
			{
				if (func_87(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_87(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_92(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_92(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_90(iParam0) };
	}
	else
	{
		Var2 = { func_89(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_88(Var3, -Var0.f_3.f_2) };
	Var3 = { func_88(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_88(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = system::sin(fParam1);
	fVar2 = system::cos(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_89(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_90(int iParam0)
{
	return func_91(iParam0);
}

struct<6> func_91(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_92(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_93(int iParam0)
{
	if (iParam0 != func_94())
	{
		if ((BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 3) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 4)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_292, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_94()
{
	return -1;
}

Vector3 func_95(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return func_84();
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		case 15:
			return -1604,664f, -3012,583f, -79,9999f;
			break;
		
		case 16:
			return -1421,015f, -3012,587f, -80f;
			break;
		
		case 17:
			if (func_96() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_96()
{
	return func_97(unk_0x259BE71D8A81D4FA());
}

var func_97(int iParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

int func_98(int iParam0)
{
	return func_74(iParam0, 0, 0);
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

bool func_100()
{
	return Global_101585.f_393 > 0;
}

var func_101()
{
	var uVar0;
	
	func_111(&uVar0, unk_0x4BA5A16068183C5E());
	func_110(&uVar0, unk_0x18E502A71E28968C());
	func_109(&uVar0, unk_0x5295501D0862870D());
	func_104(&uVar0, unk_0xB12880C92EA6EE15());
	func_103(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_102(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_102(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || system::shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || system::shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_103(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_104(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_108(*uParam0);
	iVar1 = func_106(*uParam0);
	if (iParam1 < 1 || iParam1 > func_105(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_105(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
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
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_106(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_107(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_107(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_108(var uParam0)
{
	return uParam0 & 15;
}

void func_109(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_110(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_111(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_112(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x1B79E937E91F40C3("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x1B79E937E91F40C3("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_113(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_114(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x70E57E9927B6BA58(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_115(iVar0, &sVar1);
		if (unk_0x70E57E9927B6BA58(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_115(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_116(uParam1, "Abigail1", func_118(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 1:
			func_116(uParam1, "Abigail2", func_118(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 2:
			func_116(uParam1, "Barry1", func_118(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 3:
			func_116(uParam1, "Barry2", func_118(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 4:
			func_116(uParam1, "Barry3", func_118(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 5:
			func_116(uParam1, "Barry3A", func_118(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 6:
			func_116(uParam1, "Barry3C", func_118(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 7:
			func_116(uParam1, "Barry4", func_118(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_117(iParam0), 0, 0);
			break;
		
		case 8:
			func_116(uParam1, "Dreyfuss1", func_118(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 9:
			func_116(uParam1, "Epsilon1", func_118(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 10:
			func_116(uParam1, "Epsilon2", func_118(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 11:
			func_116(uParam1, "Epsilon3", func_118(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 12:
			func_116(uParam1, "Epsilon4", func_118(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 13:
			func_116(uParam1, "Epsilon5", func_118(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 14:
			func_116(uParam1, "Epsilon6", func_118(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 15:
			func_116(uParam1, "Epsilon7", func_118(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 16:
			func_116(uParam1, "Epsilon8", func_118(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 17:
			func_116(uParam1, "Extreme1", func_118(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 18:
			func_116(uParam1, "Extreme2", func_118(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 19:
			func_116(uParam1, "Extreme3", func_118(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 20:
			func_116(uParam1, "Extreme4", func_118(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 21:
			func_116(uParam1, "Fanatic1", func_118(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_117(iParam0), 1, 0);
			break;
		
		case 22:
			func_116(uParam1, "Fanatic2", func_118(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_117(iParam0), 1, 0);
			break;
		
		case 23:
			func_116(uParam1, "Fanatic3", func_118(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_117(iParam0), 0, 1);
			break;
		
		case 24:
			func_116(uParam1, "Hao1", func_118(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_117(iParam0), 0, 1);
			break;
		
		case 25:
			func_116(uParam1, "Hunting1", func_118(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 26:
			func_116(uParam1, "Hunting2", func_118(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 27:
			func_116(uParam1, "Josh1", func_118(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 28:
			func_116(uParam1, "Josh2", func_118(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 29:
			func_116(uParam1, "Josh3", func_118(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 30:
			func_116(uParam1, "Josh4", func_118(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 31:
			func_116(uParam1, "Maude1", func_118(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 32:
			func_116(uParam1, "Minute1", func_118(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 33:
			func_116(uParam1, "Minute2", func_118(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 34:
			func_116(uParam1, "Minute3", func_118(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 35:
			func_116(uParam1, "MrsPhilips1", func_118(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 36:
			func_116(uParam1, "MrsPhilips2", func_118(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 37:
			func_116(uParam1, "Nigel1", func_118(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 38:
			func_116(uParam1, "Nigel1A", func_118(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 39:
			func_116(uParam1, "Nigel1B", func_118(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
		
		case 40:
			func_116(uParam1, "Nigel1C", func_118(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
		
		case 41:
			func_116(uParam1, "Nigel1D", func_118(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
		
		case 42:
			func_116(uParam1, "Nigel2", func_118(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 43:
			func_116(uParam1, "Nigel3", func_118(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 44:
			func_116(uParam1, "Omega1", func_118(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 45:
			func_116(uParam1, "Omega2", func_118(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 46:
			func_116(uParam1, "Paparazzo1", func_118(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 47:
			func_116(uParam1, "Paparazzo2", func_118(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 48:
			func_116(uParam1, "Paparazzo3", func_118(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 49:
			func_116(uParam1, "Paparazzo3A", func_118(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 50:
			func_116(uParam1, "Paparazzo3B", func_118(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 51:
			func_116(uParam1, "Paparazzo4", func_118(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 52:
			func_116(uParam1, "Rampage1", func_118(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 54:
			func_116(uParam1, "Rampage3", func_118(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 55:
			func_116(uParam1, "Rampage4", func_118(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 56:
			func_116(uParam1, "Rampage5", func_118(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 53:
			func_116(uParam1, "Rampage2", func_118(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 57:
			func_116(uParam1, "TheLastOne", func_118(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 58:
			func_116(uParam1, "Tonya1", func_118(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 59:
			func_116(uParam1, "Tonya2", func_118(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 60:
			func_116(uParam1, "Tonya3", func_118(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 61:
			func_116(uParam1, "Tonya4", func_118(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 62:
			func_116(uParam1, "Tonya5", func_118(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_116(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_118(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_113(iParam0) };
	if (unk_0xD6F9DEE4765092A9(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_120(Global_113969.f_9088.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_120(Global_113969.f_9088.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_120(Global_113969.f_9088.f_99.f_205[11]);
			break;
		
		case 90:
			return func_120(Global_113969.f_9088.f_99.f_205[7]);
			break;
		
		case 93:
			return func_120(Global_113969.f_9088.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_121(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x70E57E9927B6BA58(sParam0);
	iVar1 = func_122(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_122(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_92301[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_123(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61348[iVar0 /*3*/][0] = Global_113969.f_20567[iVar0];
		Global_61348.f_31[iVar0 /*3*/][0] = Global_113969.f_20567.f_11[iVar0];
		Global_61348.f_62[iVar0 /*3*/][0] = Global_113969.f_20567.f_22[iVar0];
		Global_61348.f_93[iVar0 /*3*/][0] = Global_113969.f_20567.f_33[iVar0];
		Global_61348.f_124[iVar0 /*3*/][0] = Global_113969.f_20567.f_44[iVar0];
		Global_61348.f_155[iVar0 /*3*/][0] = Global_113969.f_20567.f_55[iVar0];
		Global_61348.f_186[iVar0 /*3*/][0] = Global_113969.f_20567.f_66[iVar0];
		Global_61348.f_217[iVar0 /*3*/][0] = Global_113969.f_20567.f_77[iVar0];
		Global_61348.f_248[iVar0 /*3*/][0] = Global_113969.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61348[iVar0 /*3*/][1] = Global_113969.f_20567[iVar0];
			Global_61348.f_31[iVar0 /*3*/][1] = Global_113969.f_20567.f_11[iVar0];
			Global_61348.f_62[iVar0 /*3*/][1] = Global_113969.f_20567.f_22[iVar0];
			Global_61348.f_93[iVar0 /*3*/][1] = Global_113969.f_20567.f_33[iVar0];
			Global_61348.f_124[iVar0 /*3*/][1] = Global_113969.f_20567.f_44[iVar0];
			Global_61348.f_155[iVar0 /*3*/][1] = Global_113969.f_20567.f_55[iVar0];
			Global_61348.f_186[iVar0 /*3*/][1] = Global_113969.f_20567.f_66[iVar0];
			Global_61348.f_217[iVar0 /*3*/][1] = Global_113969.f_20567.f_77[iVar0];
			Global_61348.f_248[iVar0 /*3*/][1] = Global_113969.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_124(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, int iParam5)
{
	func_127(0, 1, iParam5, 0, 0, 0, 0);
	unk_0x406CBCEA35499884();
	unk_0x428C32CC68809A35(1);
	if (bParam4)
	{
		func_125();
	}
	unk_0x747786364137DC63(1);
	unk_0x37B894853929BF1A(1);
	unk_0xD7C0EA10993D3214(0, 500);
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x3AA8CFEBC938A945(0);
		if (bParam1)
		{
			unk_0xE37AF9002E782BA0(0, 1, 3000, 1, 0, 0);
			unk_0x64BB72494B9DF6DC(fParam2);
			unk_0xD815D4BD1AE9E85A(fParam3, 1065353216);
		}
		else
		{
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			unk_0x64BB72494B9DF6DC(fParam2);
			unk_0xD815D4BD1AE9E85A(fParam3, 1065353216);
		}
		if (bParam0)
		{
			unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
		}
		unk_0x4A46DAA87A4C235E(unk_0x4A8C381C258A124D(), 0);
		unk_0xE0A0D0E41195BAC0(unk_0x259BE71D8A81D4FA(), 1, 0);
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	}
	unk_0x10B228D2FDB7AF16(800);
}

void func_125()
{
	Global_21152 = 0;
	func_126();
}

void func_126()
{
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0xC78B293A5F4EACF9();
		Global_23297 = 0;
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

void func_127(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_136(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_135())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_134(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_136(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_134(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_132(unk_0x259BE71D8A81D4FA())) && !func_129(unk_0x259BE71D8A81D4FA(), 0)) && !func_128()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_132(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_128()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_129(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_131(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_130(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			bVar0 = unk_0x1864096A95E36EBA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_130(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_53();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_131(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_132(int iParam0)
{
	if (func_129(iParam0, 0))
	{
		return 1;
	}
	if (func_133())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_133()
{
	return BitTest(Global_2621446, 3);
}

int func_134(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && uParam2)
		{
			unk_0x7882946B06ED216B(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_135()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_136(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 13);
	}
}

int func_137(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
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
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_37(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_37(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_37(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_37(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_37(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_37(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_37(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_37(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_37(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 14);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 27);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 24);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 11);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 10);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 11);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 9);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("trash");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 22);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_138())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_138())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), false);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113969.f_32753.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_21(Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_32753.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113969.f_32753.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113969.f_32753.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_21(Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_21(Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113969.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113969.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_138()
{
	var uVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
	{
		return 0;
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x76CA59C648318506())
				{
					uVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, false);
					unk_0xED11291F7127888E(uVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		if (BitTest(unk_0x38640D2193CB547F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_139(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

Vector3 func_140(struct<3> Param0)
{
	return (-system::sin(Param0.f_2) * system::cos(Param0.f_0)), (system::cos(Param0.f_2) * system::cos(Param0.f_0)), system::sin(Param0.f_0);
}

int func_141(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			if (unk_0x69CD279BFCFE278E(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_142(var uParam0)
{
	unk_0x2094BC4B6731BA68(uParam0->f_11, 4f, 1, 0, 0, 0);
	*uParam0 = unk_0xB1DBFEB95C0EFB88(26, uParam0->f_1, uParam0->f_11, uParam0->f_17, 1, 1);
	unk_0xD25E9BDC14A0B649(*uParam0, uParam0->f_18, 0, 0);
	unk_0x9E6CC93E007219AC(*uParam0, 1);
	unk_0x3F58BFCF656F0DF1(*uParam0, 0);
	unk_0xE915224DCA36212A(*uParam0, 0);
	unk_0x84D421ACEBF9E529(*uParam0, 0);
	unk_0x87EDE48547CC8942(*uParam0, 0, 0);
	unk_0x9FF00EA9A61211D2(*uParam0, 1);
	unk_0xAAA71DD7E9059338(*uParam0, 1);
	uParam0->f_24 = 1;
}

void func_143()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_382.f_0 - 1))
	{
		if (!unk_0x4FAFF4BCB7633475(Local_382[iVar0 /*32*/]))
		{
			if (iLocal_2108[iVar0] != 22)
			{
				if (func_145(&(Local_382[iVar0 /*32*/]), &(Local_382[iVar0 /*32*/].f_18), 0) || func_144(&(Local_382[iVar0 /*32*/]), 20f, 0))
				{
					iLocal_2108[iVar0] = 22;
				}
			}
			switch (iLocal_2108[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
						case 7:
						case 8:
						case 9:
							break;
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 22:
					unk_0x44FB298D6382876D(Local_382[iVar0 /*32*/], 1);
					unk_0xD844F5E50DAB6FF7(Local_382[iVar0 /*32*/], unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
					unk_0xF09E30AF1B8FB379(&(Local_382[iVar0 /*32*/]));
					unk_0x55098D9E9AD58806(Local_382[iVar0 /*32*/].f_1);
					iLocal_2108[iVar0] = 23;
					break;
				
				case 23:
					break;
			}
		}
		else if (!Local_382[iVar0 /*32*/].f_24)
		{
			unk_0x7DA9B8DF3A97D040("FIB_GROUP_2", 1);
			if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_382[iVar0 /*32*/].f_11, 1) < 150f)
			{
				unk_0xEC9DAA34BBB4658C(Local_382[iVar0 /*32*/].f_1);
				if (unk_0x6252BC0DD8A320DB(Local_382[iVar0 /*32*/].f_1))
				{
					if (unk_0x81E5E9AE1379B068(Local_382[iVar0 /*32*/].f_11, 0,5f, 1))
					{
						unk_0x2094BC4B6731BA68(Local_382[iVar0 /*32*/].f_11, 2f, 1, 0, 0, 0);
						Local_382[iVar0 /*32*/] = unk_0xB1DBFEB95C0EFB88(26, Local_382[iVar0 /*32*/].f_1, Local_382[iVar0 /*32*/].f_11, Local_382[iVar0 /*32*/].f_17, 1, 1);
						unk_0xD25E9BDC14A0B649(Local_382[iVar0 /*32*/], Local_382[iVar0 /*32*/].f_18, 0, 0);
						unk_0xC6E8E1D693021E9E(Local_382[iVar0 /*32*/], 0);
						unk_0xAAA71DD7E9059338(Local_382[iVar0 /*32*/], 1);
						unk_0xCDA51E8BE6E5790A(Local_382[iVar0 /*32*/], Local_382[iVar0 /*32*/].f_11, 0,5f, 0);
						unk_0xD8ED11B32DF72E0B(Local_382[iVar0 /*32*/], 0, 0);
						Local_382[iVar0 /*32*/].f_24 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_144(var uParam0, float fParam1, bool bParam2)
{
	if (!unk_0x4FAFF4BCB7633475(*uParam0))
	{
		if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(*uParam0, 1), 1) < fParam1)
		{
			if (unk_0x7E54CB377175F94E(*uParam0, unk_0x4A8C381C258A124D()))
			{
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 7))
				{
					if (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), *uParam0))
					{
						return 1;
					}
					if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), *uParam0))
					{
						return 1;
					}
				}
			}
			if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
			{
				return 1;
			}
		}
		if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(*uParam0, 1), 4f, 1))
		{
			return 1;
		}
		if (bParam2)
		{
			if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(*uParam0, 1), 1) < 1,5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_145(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(*iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*iParam0))
		{
			iVar0 = unk_0x8D91ADE44AC79BC9(*iParam0);
			if (((unk_0x9B3D4335E0EDB0BE(*iParam0, unk_0x4A8C381C258A124D(), 1) || iVar0 < *uParam1) || unk_0x81ECDD5A759C026D(*iParam0, 17)) || (iParam2 && unk_0x8BF5256C439DF778(*iParam0)))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_146()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_381.f_0 - 1))
	{
		if (!unk_0x4FAFF4BCB7633475(Local_381[iVar0 /*32*/]))
		{
			if (iLocal_2107[iVar0] != 22)
			{
				if (func_145(&(Local_381[iVar0 /*32*/]), &(Local_381[iVar0 /*32*/].f_18), 0) || func_144(&(Local_381[iVar0 /*32*/]), 20f, 0))
				{
					func_153();
				}
			}
			switch (iLocal_2107[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
						case 7:
						case 8:
						case 9:
							break;
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 22:
					unk_0xAAA71DD7E9059338(Local_381[iVar0 /*32*/], 0);
					unk_0x62A5310368A20EFA(Local_381[iVar0 /*32*/], unk_0x4A8C381C258A124D(), 0, 16);
					unk_0xF09E30AF1B8FB379(&(Local_381[iVar0 /*32*/]));
					unk_0x55098D9E9AD58806(Local_381[iVar0 /*32*/].f_1);
					iLocal_2107[iVar0] = 23;
					break;
				
				case 23:
					break;
			}
		}
		else if (!Local_381[iVar0 /*32*/].f_24)
		{
			unk_0x7DA9B8DF3A97D040("FIB_GROUP_2", 1);
			if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_381[iVar0 /*32*/].f_11, 1) < 150f)
			{
				unk_0xEC9DAA34BBB4658C(Local_381[iVar0 /*32*/].f_1);
				if (unk_0x6252BC0DD8A320DB(Local_381[iVar0 /*32*/].f_1))
				{
					if (unk_0x81E5E9AE1379B068(Local_381[iVar0 /*32*/].f_11, 0,5f, 1))
					{
						unk_0x2094BC4B6731BA68(Local_381[iVar0 /*32*/].f_11, 2f, 1, 0, 0, 0);
						func_147(&(Local_381[iVar0 /*32*/]), 1);
						unk_0x3C0F448853B71C92(Local_381[iVar0 /*32*/], joaat("weapon_unarmed"), 1);
						unk_0xFE54B8568B2ABD12(&(Local_381[iVar0 /*32*/].f_2));
						unk_0xCDA51E8BE6E5790A(Local_381[iVar0 /*32*/], Local_381[iVar0 /*32*/].f_11, 0,5f, 0);
						unk_0xD8ED11B32DF72E0B(Local_381[iVar0 /*32*/], 0, 0);
						Local_381[iVar0 /*32*/].f_24 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_147(var uParam0, bool bParam1)
{
	unk_0x2094BC4B6731BA68(uParam0->f_11, 2f, 1, 0, 0, 0);
	*uParam0 = unk_0xB1DBFEB95C0EFB88(26, uParam0->f_1, uParam0->f_11, uParam0->f_17, 1, 1);
	unk_0xC6E8E1D693021E9E(*uParam0, 0);
	unk_0x9E6CC93E007219AC(*uParam0, 1);
	unk_0x4BD214FCF7332FF6(*uParam0, 1);
	unk_0x87EDE48547CC8942(*uParam0, 1, 0);
	unk_0x44FB298D6382876D(*uParam0, 1);
	unk_0xB41DEC3AAC1AA107(*uParam0, uParam0->f_26, -1, 0, 1);
	unk_0xD25E9BDC14A0B649(*uParam0, uParam0->f_18, 0, 0);
	unk_0x36A20106D0B42723(*uParam0, uParam0->f_18);
	if (uParam0->f_22)
	{
		unk_0x1F7539C841C2A71F(*uParam0, 1);
	}
	if (uParam0->f_23)
	{
		unk_0x2E20E7B6C4BBA61D(*uParam0, 100);
	}
	unk_0xEB418CA245FFE897(*uParam0, &(uParam0->f_28));
	unk_0x25DBF9F9C6BDFFEA(*uParam0, 250f);
	unk_0x35365D1E3ADB7109(*uParam0, 250f);
	unk_0xC45887CFF81A1950(*uParam0, 250f);
	uParam0->f_2 = func_150(*uParam0, 1, 145);
	unk_0xF55F62DA99DB0C2F(uParam0->f_2, 2);
	unk_0x84D421ACEBF9E529(*uParam0, 1);
	if (bParam1)
	{
		func_149(uParam0, 1);
	}
	unk_0xC652B7E19CE29859(*uParam0, uParam0->f_20);
	func_148(*uParam0, 0);
	uParam0->f_24 = 1;
}

void func_148(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_64196[iVar0 /*2*/] != 0)
			{
				if (Global_64196[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_64195)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_64196[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_64196[iVar1 /*2*/] = iParam0;
	Global_64196[iVar1 /*2*/].f_1 = 7;
	Global_64195++;
}

void func_149(var uParam0, bool bParam1)
{
	unk_0xD414C47AFF81382A(1, iLocal_2517, joaat("player"));
	unk_0xD414C47AFF81382A(1, joaat("player"), iLocal_2517);
	unk_0xD414C47AFF81382A(5, joaat("player"), iLocal_2518);
	unk_0xD414C47AFF81382A(5, iLocal_2517, iLocal_2518);
	unk_0xD414C47AFF81382A(5, iLocal_2518, joaat("player"));
	unk_0xD414C47AFF81382A(5, iLocal_2518, iLocal_2517);
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*uParam0))
		{
			unk_0x3CEA1FD137ACE2D9(*uParam0, iLocal_2518);
			unk_0xBE8796DB2B90A437(*uParam0, 9, 0);
			unk_0xBE8796DB2B90A437(*uParam0, 29, 1);
			unk_0x570AAA413775DFFB(*uParam0, 1);
			unk_0x87EDE48547CC8942(*uParam0, 1, 0);
			if (bParam1)
			{
				unk_0xAAA71DD7E9059338(*uParam0, 1);
			}
			else
			{
				unk_0xAAA71DD7E9059338(*uParam0, 0);
			}
		}
	}
}

int func_150(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_151(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(iVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_151(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_152(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_152(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_152(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

float func_152(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_153()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_381.f_0 - 1))
	{
		iLocal_2107[iVar0] = 22;
		iVar0++;
	}
	bLocal_1944 = true;
}

void func_154()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_358.f_0 - 1))
	{
		if (!unk_0x4FAFF4BCB7633475(Local_358[iVar0 /*32*/]))
		{
			if (iLocal_2042[iVar0] != 22)
			{
				func_155();
				if (func_145(&(Local_358[iVar0 /*32*/]), &(Local_358[iVar0 /*32*/].f_18), 0) || func_144(&(Local_358[iVar0 /*32*/]), 20f, 0))
				{
					iLocal_2042[iVar0] = 22;
				}
			}
			switch (iLocal_2042[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
						case 7:
						case 8:
						case 9:
							break;
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 22:
					unk_0x44FB298D6382876D(Local_358[iVar0 /*32*/], 1);
					unk_0xD844F5E50DAB6FF7(Local_358[iVar0 /*32*/], unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
					unk_0xF09E30AF1B8FB379(&(Local_358[iVar0 /*32*/]));
					unk_0x55098D9E9AD58806(Local_358[iVar0 /*32*/].f_1);
					iLocal_2042[iVar0] = 23;
					break;
				
				case 23:
					break;
			}
		}
		else if (!Local_358[iVar0 /*32*/].f_24)
		{
			unk_0x7DA9B8DF3A97D040("FIB_GROUP_1", 1);
			if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_358[iVar0 /*32*/].f_11, 1) < 150f)
			{
				unk_0xEC9DAA34BBB4658C(Local_358[iVar0 /*32*/].f_1);
				if (unk_0x6252BC0DD8A320DB(Local_358[iVar0 /*32*/].f_1))
				{
					if (unk_0x81E5E9AE1379B068(Local_358[iVar0 /*32*/].f_11, 0,5f, 1))
					{
						unk_0x2094BC4B6731BA68(Local_358[iVar0 /*32*/].f_11, 2f, 1, 0, 0, 0);
						Local_358[iVar0 /*32*/] = unk_0xB1DBFEB95C0EFB88(26, Local_358[iVar0 /*32*/].f_1, Local_358[iVar0 /*32*/].f_11, Local_358[iVar0 /*32*/].f_17, 1, 1);
						unk_0xD25E9BDC14A0B649(Local_358[iVar0 /*32*/], Local_358[iVar0 /*32*/].f_18, 0, 0);
						unk_0xC6E8E1D693021E9E(Local_358[iVar0 /*32*/], 0);
						unk_0xAAA71DD7E9059338(Local_358[iVar0 /*32*/], 1);
						unk_0xCDA51E8BE6E5790A(Local_358[iVar0 /*32*/], Local_358[iVar0 /*32*/].f_11, 0,5f, 0);
						unk_0xD8ED11B32DF72E0B(Local_358[iVar0 /*32*/], 0, 0);
						Local_358[iVar0 /*32*/].f_24 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_155()
{
	int iVar0;
	
	if (func_3(&iLocal_2110, 12000))
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, Local_358.f_0);
		if (unk_0xFC8BFE4B41177C22(Local_358[iVar0 /*32*/]))
		{
			if (!unk_0x4FAFF4BCB7633475(Local_358[iVar0 /*32*/]))
			{
				if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 77,7f, -739,8f, 46,1f, 1) < 30f)
				{
					if (unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
					{
						switch (unk_0xC5935DFB3F39785A(0, 3))
						{
							case 0:
								func_156(Local_358[iVar0 /*32*/], "GENERIC_FRIGHTENED_MED", 24);
								break;
							
							case 1:
								unk_0xEBA2204AAD092B47(Local_358[iVar0 /*32*/], 7, 0f, 0);
								break;
							
							case 2:
								func_156(Local_358[iVar0 /*32*/], "GENERIC_FRIGHTENED_HIGH", 24);
								break;
						}
						iLocal_2110 = unk_0x1DD05E817C89C737();
					}
				}
			}
		}
	}
}

void func_156(int iParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(iParam0, sParam1, func_157(iParam2), 1);
}

int func_157(int iParam0)
{
	int iVar0;
	
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
	iVar0 = 0;
	return iVar0;
}

int func_158()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_382.f_0 - 1))
	{
		if (unk_0xFC8BFE4B41177C22(Local_382[iVar0 /*32*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == Local_382.f_0)
	{
		return 1;
	}
	return 0;
}

int func_159()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_381.f_0 - 1))
	{
		if (unk_0xFC8BFE4B41177C22(Local_381[iVar0 /*32*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == Local_381.f_0)
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_358.f_0 - 1))
	{
		if (unk_0xFC8BFE4B41177C22(Local_358[iVar0 /*32*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == Local_358.f_0)
	{
		return 1;
	}
	return 0;
}

void func_161(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = unk_0x8728A378EF2B46B2(*uParam1, 26, uParam0->f_1, iParam2, 1, 1);
	unk_0xC6E8E1D693021E9E(*uParam0, 0);
	unk_0x9E6CC93E007219AC(*uParam0, 1);
	unk_0x4BD214FCF7332FF6(*uParam0, 1);
	unk_0x87EDE48547CC8942(*uParam0, 1, 0);
	unk_0x44FB298D6382876D(*uParam0, 1);
	unk_0x0428AFDCAA63B06E(*uParam0, 132, 1);
	unk_0x0428AFDCAA63B06E(*uParam0, 188, 1);
	unk_0xB41DEC3AAC1AA107(*uParam0, uParam0->f_26, -1, 1, 1);
	unk_0xD25E9BDC14A0B649(*uParam0, uParam0->f_18, 0, 0);
	unk_0x36A20106D0B42723(*uParam0, uParam0->f_18);
	if (uParam0->f_22)
	{
		unk_0x1F7539C841C2A71F(*uParam0, 1);
	}
	if (uParam0->f_23)
	{
		unk_0x2E20E7B6C4BBA61D(*uParam0, 100);
	}
	uParam0->f_24 = 1;
	unk_0xEB418CA245FFE897(*uParam0, &(uParam0->f_28));
	unk_0x35365D1E3ADB7109(*uParam0, 250f);
	uParam0->f_2 = func_150(*uParam0, 1, 145);
	unk_0xF55F62DA99DB0C2F(uParam0->f_2, 2);
	unk_0x84D421ACEBF9E529(*uParam0, 1);
	func_149(uParam0, 1);
	unk_0xC652B7E19CE29859(*uParam0, uParam0->f_20);
	func_148(*uParam0, 0);
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = unk_0x8728A378EF2B46B2(iParam1, 26, Global_97388[iParam0 /*5*/].f_4, iParam2, 1, 1);
	func_167(iVar0, iParam0, iParam3, bParam4);
	unk_0xEE0BCDB1B5E36BCB(iVar0, 1, 0);
	if (func_166(iParam0) == 1)
	{
		unk_0x36A20106D0B42723(iVar0, func_163(iParam0, 0));
		unk_0xC652B7E19CE29859(iVar0, func_163(iParam0, 1));
		unk_0x39256A89E9D7464A(iVar0, func_163(iParam0, 2));
	}
	else
	{
		unk_0x36A20106D0B42723(iVar0, 100);
		unk_0xC652B7E19CE29859(iVar0, 25);
		unk_0x39256A89E9D7464A(iVar0, 40);
	}
	return iVar0;
}

int func_163(int iParam0, int iParam1)
{
	if (func_166(iParam0) != 1)
	{
		return -1;
	}
	return func_164(iParam0, iParam1);
}

int func_164(int iParam0, int iParam1)
{
	return func_165(iParam1, Global_113969.f_1.f_73[iParam0 /*3*/].f_1, Global_113969.f_1.f_73[iParam0 /*3*/].f_2);
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return system::shift_right(iParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return system::shift_right(iParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return -1;
}

int func_166(int iParam0)
{
	return Global_97388[iParam0 /*5*/];
}

void func_167(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_168(iParam0, "", bParam1, iParam2, bParam3);
}

void func_168(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = func_166(iParam2);
	switch (iVar0)
	{
		case 1:
			switch (iParam3)
			{
				case 0:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 6, Global_97388[iParam2 /*5*/].f_3, 0);
					func_169(iParam0, sParam1, 4, 6, Global_97388[iParam2 /*5*/].f_3, 0);
					func_169(iParam0, sParam1, 6, 1, 0, 0);
					func_169(iParam0, sParam1, 8, 0, 0, 0);
					func_169(iParam0, sParam1, 9, 0, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					func_169(iParam0, sParam1, 1, 1, 0, 0);
					if (iParam0 != 0)
					{
						unk_0x09397806857F5DFB(iParam0, 0, 1);
						unk_0x2F19C4305F0B8DA7(sParam1, iParam0, 0);
					}
					break;
				
				case 1:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 0, 0, 0);
					func_169(iParam0, sParam1, 4, 0, 0, 0);
					func_169(iParam0, sParam1, 6, 1, 0, 0);
					func_169(iParam0, sParam1, 8, 0, 0, 0);
					func_169(iParam0, sParam1, 9, 0, 0, 0);
					func_169(iParam0, sParam1, 10, 0, 0, 0);
					func_169(iParam0, sParam1, 1, 1, 0, 0);
					break;
				
				case 2:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 3, 0, 0);
					func_169(iParam0, sParam1, 4, 3, 0, 0);
					func_169(iParam0, sParam1, 6, 0, 0, 0);
					func_169(iParam0, sParam1, 8, 3, 0, 0);
					func_169(iParam0, sParam1, 9, 3, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					func_169(iParam0, sParam1, 1, 1, 0, 0);
					break;
				
				case 3:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 3, 0, 0);
					func_169(iParam0, sParam1, 4, 8, 0, 0);
					func_169(iParam0, sParam1, 6, 1, 0, 0);
					func_169(iParam0, sParam1, 8, 0, 0, 0);
					func_169(iParam0, sParam1, 9, 3, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					func_169(iParam0, sParam1, 1, 1, 0, 0);
					break;
				
				case 4:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 1, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 4, 0, 0);
					func_169(iParam0, sParam1, 4, 4, 0, 0);
					func_169(iParam0, sParam1, 6, 1, 0, 0);
					func_169(iParam0, sParam1, 8, 0, 0, 0);
					func_169(iParam0, sParam1, 9, 0, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					func_169(iParam0, sParam1, 1, 1, 0, 0);
					break;
				
				case 5:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 2, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 5, 0, 0);
					func_169(iParam0, sParam1, 4, 5, 0, 0);
					func_169(iParam0, sParam1, 6, 1, 0, 0);
					func_169(iParam0, sParam1, 8, 5, 0, 0);
					func_169(iParam0, sParam1, 9, 0, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					func_169(iParam0, sParam1, 1, 1, 0, 0);
					break;
				
				case 6:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 1, 1, 0, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 1, 0, 0);
					func_169(iParam0, sParam1, 4, 1, 0, 0);
					func_169(iParam0, sParam1, 6, 4, 0, 0);
					func_169(iParam0, sParam1, 8, 0, 0, 0);
					func_169(iParam0, sParam1, 9, 1, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					if (iParam0 != 0)
					{
						unk_0x7F08C4791E6D6969(iParam0, 0, 5, 0, false, 1);
						unk_0x2F19C4305F0B8DA7(sParam1, iParam0, 0);
					}
					else
					{
						unk_0x60A0A4CD710160D5(sParam1, 0, 5, 0, 0);
					}
					break;
				
				case 7:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 2, 0, 0);
					func_169(iParam0, sParam1, 4, 2, 0, 0);
					func_169(iParam0, sParam1, 6, 1, 0, 0);
					func_169(iParam0, sParam1, 8, 4, 0, 0);
					func_169(iParam0, sParam1, 9, 0, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					func_169(iParam0, sParam1, 1, 1, 0, 0);
					if (iParam0 != 0)
					{
						unk_0x7F08C4791E6D6969(iParam0, 0, 1, 0, false, 1);
						unk_0x2F19C4305F0B8DA7(sParam1, iParam0, 0);
					}
					else
					{
						unk_0x60A0A4CD710160D5(sParam1, 0, 1, 0, 0);
					}
					break;
				
				case 8:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, 0, 0, 0);
					func_169(iParam0, sParam1, 3, 8, 0, 0);
					func_169(iParam0, sParam1, 4, 8, 0, 0);
					func_169(iParam0, sParam1, 6, 1, 0, 0);
					func_169(iParam0, sParam1, 8, 7, 0, 0);
					func_169(iParam0, sParam1, 9, 2, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					func_169(iParam0, sParam1, 1, 1, 0, 0);
					break;
				
				case 9:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 7, 0, 0);
					func_169(iParam0, sParam1, 4, 7, 0, 0);
					func_169(iParam0, sParam1, 6, 1, 0, 0);
					func_169(iParam0, sParam1, 8, 6, 0, 0);
					func_169(iParam0, sParam1, 9, 0, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					func_169(iParam0, sParam1, 1, 1, 0, 0);
					break;
				
				case 10:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 5, 0, 0);
					func_169(iParam0, sParam1, 4, 5, 0, 0);
					func_169(iParam0, sParam1, 6, 1, 0, 0);
					func_169(iParam0, sParam1, 8, 0, 0, 0);
					func_169(iParam0, sParam1, 9, 0, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					func_169(iParam0, sParam1, 1, 1, 0, 0);
					break;
			}
			if (iParam2 == 11)
			{
				switch (iParam3)
				{
					case 0:
					case 7:
					case 8:
					case 9:
						if (iParam0 != 0)
						{
							unk_0x7F08C4791E6D6969(iParam0, 2, 1, 0, false, 1);
							unk_0x2F19C4305F0B8DA7(sParam1, iParam0, 0);
						}
						else
						{
							unk_0x60A0A4CD710160D5(sParam1, 2, 1, 0, 0);
						}
						break;
					}
			}
			break;
		
		case 2:
			switch (iParam3)
			{
				case 0:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, Global_97388[iParam2 /*5*/].f_3, 0, 0);
					if (iParam2 == 6 || iParam2 == 7)
					{
						func_169(iParam0, sParam1, 5, 0, 0, 0);
					}
					else
					{
						func_169(iParam0, sParam1, 5, 2, 0, 0);
					}
					func_169(iParam0, sParam1, 3, Global_97388[iParam2 /*5*/].f_3, 0, 0);
					func_169(iParam0, sParam1, 4, Global_97388[iParam2 /*5*/].f_3, 0, 0);
					func_169(iParam0, sParam1, 8, 0, 0, 0);
					if (iParam0 != 0)
					{
						unk_0x09397806857F5DFB(iParam0, 0, 1);
						unk_0x2F19C4305F0B8DA7(sParam1, iParam0, 0);
					}
					break;
				
				case 8:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, 2, 0, 0);
					func_169(iParam0, sParam1, 5, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 2, 0, 0);
					func_169(iParam0, sParam1, 4, 2, 0, 0);
					func_169(iParam0, sParam1, 8, 1, 0, 0);
					break;
				
				default:
					return;
					break;
			}
			break;
		
		case 3:
			switch (iParam3)
			{
				case 0:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 3, Global_97388[iParam2 /*5*/].f_3, 0);
					if (iParam2 == 13)
					{
						func_169(iParam0, sParam1, 4, 2, 0, 0);
					}
					else
					{
						func_169(iParam0, sParam1, 4, 2, Global_97388[iParam2 /*5*/].f_3, 0);
					}
					func_169(iParam0, sParam1, 8, 1, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					if (iParam0 != 0)
					{
						unk_0x09397806857F5DFB(iParam0, 0, 1);
						unk_0x2F19C4305F0B8DA7(sParam1, iParam0, 0);
					}
					break;
				
				case 9:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 5, 0, 0);
					func_169(iParam0, sParam1, 4, 4, 0, 0);
					func_169(iParam0, sParam1, 8, 0, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					break;
				
				case 10:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 3, 4, 2, 0);
					func_169(iParam0, sParam1, 4, 3, 2, 0);
					func_169(iParam0, sParam1, 8, 1, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					break;
				
				case 1:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 3, 0, 0, 0);
					func_169(iParam0, sParam1, 4, 0, 0, 0);
					func_169(iParam0, sParam1, 8, 1, 0, 0);
					func_169(iParam0, sParam1, 10, 0, 0, 0);
					break;
				
				case 8:
					func_169(iParam0, sParam1, 0, Global_97388[iParam2 /*5*/].f_2, 0, 0);
					func_169(iParam0, sParam1, 2, 1, 0, 0);
					func_169(iParam0, sParam1, 3, 2, 0, 0);
					func_169(iParam0, sParam1, 4, 3, 2, 0);
					func_169(iParam0, sParam1, 6, 0, 0, 0);
					func_169(iParam0, sParam1, 8, 1, 0, 0);
					func_169(iParam0, sParam1, 10, 1, 0, 0);
					break;
				
				default:
					return;
					break;
			}
			break;
	}
	if (iParam0 != 0)
	{
		if (bParam4)
		{
			unk_0x7F08C4791E6D6969(iParam0, 2, 0, 0, false, 1);
		}
		else
		{
			unk_0x09397806857F5DFB(iParam0, 2, 1);
		}
		unk_0x2F19C4305F0B8DA7(sParam1, iParam0, 0);
	}
}

void func_169(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam0 != 0)
	{
		unk_0xD1C578C204015E1F(iParam0, iParam2, iParam3, iParam4, iParam5);
	}
	unk_0xFE61105198EA3496(uParam1, iParam2, iParam3, iParam4, 0);
}

int func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_171(func_172(iParam0));
	if (iVar0 < 0)
	{
		return 15;
	}
	if (iVar0 >= 10)
	{
		return 15;
	}
	return Global_113969.f_1.f_12[iVar0 /*6*/][iParam1];
}

int func_171(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_205[iParam0];
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

void func_173(int iParam0, bool bParam1)
{
	unk_0xD414C47AFF81382A(1, iLocal_2517, joaat("player"));
	unk_0xD414C47AFF81382A(1, joaat("player"), iLocal_2517);
	unk_0xD414C47AFF81382A(5, joaat("player"), iLocal_2518);
	unk_0xD414C47AFF81382A(5, iLocal_2517, iLocal_2518);
	unk_0xD414C47AFF81382A(5, iLocal_2518, joaat("player"));
	unk_0xD414C47AFF81382A(5, iLocal_2518, iLocal_2517);
	if (unk_0xFC8BFE4B41177C22(*iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*iParam0))
		{
			unk_0x3CEA1FD137ACE2D9(*iParam0, iLocal_2517);
			unk_0x570AAA413775DFFB(*iParam0, 1);
			if (bParam1)
			{
				unk_0xAAA71DD7E9059338(*iParam0, 1);
			}
			else
			{
				unk_0xAAA71DD7E9059338(*iParam0, 0);
			}
		}
	}
}

void func_174(int iParam0)
{
	unk_0x9E6CC93E007219AC(iParam0, 0);
	unk_0x3F58BFCF656F0DF1(iParam0, 0);
	unk_0xE915224DCA36212A(iParam0, 0);
	unk_0x84D421ACEBF9E529(iParam0, 0);
	unk_0x87EDE48547CC8942(iParam0, 0, 0);
	unk_0x44FB298D6382876D(iParam0, 1);
	unk_0x0428AFDCAA63B06E(iParam0, 132, 1);
	unk_0x0428AFDCAA63B06E(iParam0, 32, 0);
	unk_0x0428AFDCAA63B06E(iParam0, 118, 0);
	unk_0x0428AFDCAA63B06E(iParam0, 208, 1);
	unk_0x0428AFDCAA63B06E(iParam0, 188, 1);
	unk_0x9FF00EA9A61211D2(iParam0, 0);
	unk_0x25DBF9F9C6BDFFEA(iParam0, 250f);
	unk_0x35365D1E3ADB7109(iParam0, 250f);
	unk_0xC45887CFF81A1950(iParam0, 250f);
}

int func_175(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	if (func_39(bParam1))
	{
		iVar0 = func_556(bParam1);
		unk_0xEC9DAA34BBB4658C(iVar0);
		if (unk_0x6252BC0DD8A320DB(iVar0))
		{
			if (unk_0xFC8BFE4B41177C22(*uParam0))
			{
				unk_0x734A9F4537A31459(uParam0);
			}
			if (unk_0xFC8BFE4B41177C22(iParam2) && unk_0xD9F5E1FEFD1329E4(iParam2, 0))
			{
				*uParam0 = unk_0x8728A378EF2B46B2(iParam2, 26, iVar0, iParam3, 1, 1);
				func_487(*uParam0, bParam1, bParam5);
				unk_0x6E544F5DBF10461B(*uParam0, 0, 0);
				func_480(*uParam0);
				func_468(*uParam0, 1, 0);
				func_467(*uParam0);
				func_464(*uParam0);
				func_177(*uParam0, bParam6);
				func_176(*uParam0);
				if (bParam4)
				{
					unk_0x55098D9E9AD58806(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_176(int iParam0)
{
	int iVar0;
	
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98882[iVar0]) && Global_98882[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xFC8BFE4B41177C22(Global_98882[iVar0]))
		{
			Global_98882[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_177(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_48(iParam0);
	if (func_463(bVar0))
	{
		func_462(bVar0, 0);
		func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_268(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (func_266(iParam0))
		{
			func_462(bVar0, 0);
			func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_268(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113969.f_9088.f_99.f_58[120] && !Global_113969.f_9088.f_99.f_58[122])
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113969.f_9088.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113969.f_9088.f_99.f_58[123])
			{
				Global_113969.f_9088.f_99.f_58[123] = 0;
				if (!unk_0x4FAFF4BCB7633475(iParam0))
				{
					if (func_246(iParam0, 3, 169))
					{
						func_489(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_246(iParam0, 12, 6))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_246(iParam0, 12, 17))
			{
				if (!func_178(unk_0x4B423FAA24E8ABF0(iParam0), 12, 17))
				{
					func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_246(iParam0, 12, 20))
			{
				if (!func_178(unk_0x4B423FAA24E8ABF0(iParam0), 12, 20))
				{
					func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_246(iParam0, 12, 21))
			{
				if (!func_178(unk_0x4B423FAA24E8ABF0(iParam0), 12, 21))
				{
					func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_246(iParam0, 12, 22))
			{
				if (!func_178(unk_0x4B423FAA24E8ABF0(iParam0), 12, 22))
				{
					func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_246(iParam0, 12, 11))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_246(iParam0, 12, 10))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_246(iParam0, 12, 50))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_246(iParam0, 14, 59))
			{
				func_489(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_246(iParam0, 8, 22))
			{
				func_489(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_246(iParam0, 12, 14))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 1:
			if (func_246(iParam0, 12, 13))
			{
				if (!func_178(unk_0x4B423FAA24E8ABF0(iParam0), 12, 13))
				{
					func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_246(iParam0, 12, 14))
			{
				if (!func_178(unk_0x4B423FAA24E8ABF0(iParam0), 12, 14))
				{
					func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_246(iParam0, 12, 15))
			{
				if (!func_178(unk_0x4B423FAA24E8ABF0(iParam0), 12, 15))
				{
					func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_246(iParam0, 12, 4))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_246(iParam0, 12, 3))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_246(iParam0, 14, 82))
			{
				func_489(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_246(iParam0, 8, 76))
			{
				func_489(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_246(iParam0, 12, 1))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 2:
			if (func_246(iParam0, 12, 12))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_246(iParam0, 12, 15))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_246(iParam0, 3, 71))
				{
					func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_246(iParam0, 12, 17))
			{
				if (!func_178(unk_0x4B423FAA24E8ABF0(iParam0), 12, 17))
				{
					func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_246(iParam0, 12, 18))
			{
				if (!func_178(unk_0x4B423FAA24E8ABF0(iParam0), 12, 18))
				{
					func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_246(iParam0, 12, 19))
			{
				if (!func_178(unk_0x4B423FAA24E8ABF0(iParam0), 12, 19))
				{
					func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_246(iParam0, 12, 7))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_246(iParam0, 12, 6))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_246(iParam0, 14, 88))
			{
				func_489(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_246(iParam0, 8, 17))
			{
				func_489(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_246(iParam0, 12, 11))
			{
				func_489(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_178(int iParam0, int iParam1, int iParam2)
{
	Global_79172[1 /*14*/] = { func_179(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_79172[1 /*14*/].f_6, 1);
}

struct<14> func_179(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_245();
	if (iParam0 == joaat("player_zero"))
	{
		func_227(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_208(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_180(iParam1, iParam2);
	}
	return Global_79172[0 /*14*/];
}

void func_180(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_207(iParam1);
			break;
		
		case 2:
			func_206(iParam1);
			break;
		
		case 3:
			func_203(iParam1);
			break;
		
		case 4:
			func_202(iParam1);
			break;
		
		case 6:
			func_201(iParam1);
			break;
		
		case 5:
			func_200(iParam1);
			break;
		
		case 8:
			func_199(iParam1);
			break;
		
		case 9:
			func_198(iParam1);
			break;
		
		case 10:
			func_197(iParam1);
			break;
		
		case 1:
			func_196(iParam1);
			break;
		
		case 7:
			func_195(iParam1);
			break;
		
		case 11:
			func_194(iParam1);
			break;
		
		case 12:
			func_193(iParam1);
			break;
		
		case 13:
			func_192(iParam1);
			break;
		
		case 14:
			func_181(iParam1);
			break;
	}
}

void func_181(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 155, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_182(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_189(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x70E57E9927B6BA58(sParam3) != unk_0x70E57E9927B6BA58("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), false);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 5);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 6);
		if (func_60(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x304A39EB177D246B(Global_2883588, joaat("rebreather"), 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_187(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_187(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_187(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_187(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_187(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_187(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		if (unk_0x4BFA043D318BF9AE(Global_2883589))
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_6), true);
			unk_0x8744D2E3FC95740E(&(uParam0->f_6), false);
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), false);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 5);
		if (func_186(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
		}
		if (func_186(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
		if (!func_186(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_60(14))
			{
				return;
			}
			uVar0 = func_50(func_185(iParam1, uParam0->f_2), Global_79169);
			if (BitTest(uVar0, uParam0->f_1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
			}
			uVar0 = func_50(func_184(iParam1, uParam0->f_2), Global_79169);
			if (BitTest(uVar0, uParam0->f_1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
			}
			if (func_183(iParam1, uParam0->f_2, &iVar1))
			{
				uVar0 = func_50(iVar1, Global_79169);
				if (!BitTest(uVar0, uParam0->f_1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
	}
}

bool func_183(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_184(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_185(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_186(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/][iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/][iParam3], bParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3], bParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3], bParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3], bParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3], bParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3], bParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3], bParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3], bParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3], bParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3], bParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3], bParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3], bParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3], bParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3], bParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3], bParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3], bParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3], bParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3], bParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3], bParam4);
		}
	}
	return 0;
}

int func_187(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_79169;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_188(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		uVar3 = func_50(iVar2, iVar0);
		return BitTest(uVar3, uVar1);
	}
	return 0;
}

bool func_188(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 14835;
	if ((bParam4 && Global_4540270) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_m_phead_15_0"):
					case joaat("dlc_mp_stunt_m_phead_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_1"):
					case joaat("dlc_mp_stunt_m_phead_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_2"):
					case joaat("dlc_mp_stunt_m_phead_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_3"):
					case joaat("dlc_mp_stunt_m_phead_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_4"):
					case joaat("dlc_mp_stunt_m_phead_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_5"):
					case joaat("dlc_mp_stunt_m_phead_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_6"):
					case joaat("dlc_mp_stunt_m_phead_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_7"):
					case joaat("dlc_mp_stunt_m_phead_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_0"):
					case joaat("dlc_mp_biker_m_special_2_0"):
					case joaat("dlc_mp_biker_m_special_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_1"):
					case joaat("dlc_mp_biker_m_special_2_1"):
					case joaat("dlc_mp_biker_m_special_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_2"):
					case joaat("dlc_mp_biker_m_special_2_2"):
					case joaat("dlc_mp_biker_m_special_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_3"):
					case joaat("dlc_mp_biker_m_special_2_3"):
					case joaat("dlc_mp_biker_m_special_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_4"):
					case joaat("dlc_mp_biker_m_special_2_4"):
					case joaat("dlc_mp_biker_m_special_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_5"):
					case joaat("dlc_mp_biker_m_special_2_5"):
					case joaat("dlc_mp_biker_m_special_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_7"):
					case joaat("dlc_mp_biker_m_special_2_7"):
					case joaat("dlc_mp_biker_m_special_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_8"):
					case joaat("dlc_mp_biker_m_special_2_8"):
					case joaat("dlc_mp_biker_m_special_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_11"):
					case joaat("dlc_mp_biker_m_special_2_11"):
					case joaat("dlc_mp_biker_m_special_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_m_phead_15_0"):
					case joaat("dlc_mp_stunt_m_phead_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_1"):
					case joaat("dlc_mp_stunt_m_phead_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_2"):
					case joaat("dlc_mp_stunt_m_phead_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_3"):
					case joaat("dlc_mp_stunt_m_phead_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_4"):
					case joaat("dlc_mp_stunt_m_phead_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_5"):
					case joaat("dlc_mp_stunt_m_phead_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_6"):
					case joaat("dlc_mp_stunt_m_phead_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_7"):
					case joaat("dlc_mp_stunt_m_phead_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_f_phead_15_0"):
					case joaat("dlc_mp_stunt_f_phead_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_1"):
					case joaat("dlc_mp_stunt_f_phead_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_2"):
					case joaat("dlc_mp_stunt_f_phead_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_3"):
					case joaat("dlc_mp_stunt_f_phead_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_4"):
					case joaat("dlc_mp_stunt_f_phead_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_5"):
					case joaat("dlc_mp_stunt_f_phead_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_6"):
					case joaat("dlc_mp_stunt_f_phead_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_7"):
					case joaat("dlc_mp_stunt_f_phead_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_f_phead_15_0"):
					case joaat("dlc_mp_stunt_f_phead_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_1"):
					case joaat("dlc_mp_stunt_f_phead_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_2"):
					case joaat("dlc_mp_stunt_f_phead_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_3"):
					case joaat("dlc_mp_stunt_f_phead_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_4"):
					case joaat("dlc_mp_stunt_f_phead_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_5"):
					case joaat("dlc_mp_stunt_f_phead_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_6"):
					case joaat("dlc_mp_stunt_f_phead_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_7"):
					case joaat("dlc_mp_stunt_f_phead_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4540270)
		{
			iVar0 = unk_0x82ADFEA98A0C26DC(iParam0);
		}
		else
		{
			iVar0 = unk_0x6F4B2AB7CFB2F472(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x82ADFEA98A0C26DC(iParam0);
	}
	else
	{
		iVar0 = unk_0x6F4B2AB7CFB2F472(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2592;
					break;
				
				case 52:
					*uParam2 = 2593;
					break;
				
				case 53:
					*uParam2 = 2594;
					break;
				
				case 54:
					*uParam2 = 2595;
					break;
				
				case 55:
					*uParam2 = 2596;
					break;
				
				case 56:
					*uParam2 = 2597;
					break;
				
				case 57:
					*uParam2 = 2598;
					break;
				
				case 58:
					*uParam2 = 2599;
					break;
				
				case 59:
					*uParam2 = 2600;
					break;
				
				case 60:
					*uParam2 = 2601;
					break;
				
				case 61:
					*uParam2 = 2602;
					break;
				
				case 62:
					*uParam2 = 3199;
					break;
				
				case 63:
					*uParam2 = 3200;
					break;
				
				case 64:
					*uParam2 = 3201;
					break;
				
				case 65:
					*uParam2 = 3202;
					break;
				
				case 66:
					*uParam2 = 3203;
					break;
				
				case 67:
					*uParam2 = 3204;
					break;
				
				case 68:
					*uParam2 = 3672;
					break;
				
				case 69:
					*uParam2 = 3673;
					break;
				
				case 70:
					*uParam2 = 3674;
					break;
				
				case 71:
					*uParam2 = 3675;
					break;
				
				case 72:
					*uParam2 = 3676;
					break;
				
				case 73:
					*uParam2 = 3677;
					break;
				
				case 74:
					*uParam2 = 3678;
					break;
				
				case 75:
					*uParam2 = 3679;
					break;
				
				case 76:
					*uParam2 = 3680;
					break;
				
				case 77:
					*uParam2 = 3681;
					break;
				
				case 78:
					*uParam2 = 3795;
					break;
				
				case 79:
					*uParam2 = 3796;
					break;
				
				case 80:
					*uParam2 = 3797;
					break;
				
				case 81:
					*uParam2 = 3798;
					break;
				
				case 82:
					*uParam2 = 3799;
					break;
				
				case 83:
					*uParam2 = 3800;
					break;
				
				case 84:
					*uParam2 = 3801;
					break;
				
				case 85:
					*uParam2 = 3802;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5340;
					break;
				
				case 90:
					*uParam2 = 5341;
					break;
				
				case 91:
					*uParam2 = 5342;
					break;
				
				case 92:
					*uParam2 = 5343;
					break;
				
				case 93:
					*uParam2 = 5344;
					break;
				
				case 94:
					*uParam2 = 5345;
					break;
				
				case 95:
					*uParam2 = 5346;
					break;
				
				case 96:
					*uParam2 = 5347;
					break;
				
				case 97:
					*uParam2 = 5348;
					break;
				
				case 98:
					*uParam2 = 5349;
					break;
				
				case 99:
					*uParam2 = 5350;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5351;
					break;
				
				case 101:
					*uParam2 = 5397;
					break;
				
				case 102:
					*uParam2 = 5398;
					break;
				
				case 103:
					*uParam2 = 5399;
					break;
				
				case 104:
					*uParam2 = 5400;
					break;
				
				case 105:
					*uParam2 = 5401;
					break;
				
				case 106:
					*uParam2 = 5402;
					break;
				
				case 107:
					*uParam2 = 5403;
					break;
				
				case 108:
					*uParam2 = 5404;
					break;
				
				case 109:
					*uParam2 = 5405;
					break;
				
				case 110:
					*uParam2 = 5406;
					break;
				
				case 111:
					*uParam2 = 5407;
					break;
				
				case 112:
					*uParam2 = 5408;
					break;
				
				case 113:
					*uParam2 = 5409;
					break;
				
				case 114:
					*uParam2 = 5410;
					break;
				
				case 115:
					*uParam2 = 5411;
					break;
				
				case 116:
					*uParam2 = 5412;
					break;
				
				case 117:
					*uParam2 = 5413;
					break;
				
				case 118:
					*uParam2 = 5414;
					break;
				
				case 119:
					*uParam2 = 5415;
					break;
				
				case 120:
					*uParam2 = 5416;
					break;
				
				case 121:
					*uParam2 = 5417;
					break;
				
				case 122:
					*uParam2 = 5418;
					break;
				
				case 123:
					*uParam2 = 5419;
					break;
				
				case 124:
					*uParam2 = 6125;
					break;
				
				case 125:
					*uParam2 = 6126;
					break;
				
				case 126:
					*uParam2 = 6127;
					break;
				
				case 127:
					*uParam2 = 6128;
					break;
				
				case 128:
					*uParam2 = 6129;
					break;
				
				case 129:
					*uParam2 = 6130;
					break;
				
				case 130:
					*uParam2 = 6131;
					break;
				
				case 131:
					*uParam2 = 6132;
					break;
				
				case 132:
					*uParam2 = 6133;
					break;
				
				case 133:
					*uParam2 = 6134;
					break;
				
				case 134:
					*uParam2 = 6135;
					break;
				
				case 135:
					*uParam2 = 6136;
					break;
				
				case 136:
					*uParam2 = 6137;
					break;
				
				case 137:
					*uParam2 = 6138;
					break;
				
				case 138:
					*uParam2 = 6139;
					break;
				
				case 139:
					*uParam2 = 6438;
					break;
				
				case 140:
					*uParam2 = 6439;
					break;
				
				case 141:
					*uParam2 = 6440;
					break;
				
				case 142:
					*uParam2 = 6441;
					break;
				
				case 143:
					*uParam2 = 6442;
					break;
				
				case 144:
					*uParam2 = 6443;
					break;
				
				case 145:
					*uParam2 = 6444;
					break;
				
				case 146:
					*uParam2 = 6445;
					break;
				
				case 147:
					*uParam2 = 6446;
					break;
				
				case 148:
					*uParam2 = 6447;
					break;
				
				case 149:
					*uParam2 = 6448;
					break;
				
				case 150:
					*uParam2 = 6449;
					break;
				
				case 151:
					*uParam2 = 6450;
					break;
				
				case 152:
					*uParam2 = 6451;
					break;
				
				case 153:
					*uParam2 = 6452;
					break;
				
				case 154:
					*uParam2 = 7269;
					break;
				
				case 155:
					*uParam2 = 7270;
					break;
				
				case 156:
					*uParam2 = 7271;
					break;
				
				case 157:
					*uParam2 = 7272;
					break;
				
				case 158:
					*uParam2 = 7273;
					break;
				
				case 159:
					*uParam2 = 7274;
					break;
				
				case 160:
					*uParam2 = 7275;
					break;
				
				case 161:
					*uParam2 = 7882;
					break;
				
				case 162:
					*uParam2 = 7883;
					break;
				
				case 163:
					*uParam2 = 7884;
					break;
				
				case 164:
					*uParam2 = 7885;
					break;
				
				case 165:
					*uParam2 = 7886;
					break;
				
				case 166:
					*uParam2 = 7887;
					break;
				
				case 167:
					*uParam2 = 7888;
					break;
				
				case 168:
					*uParam2 = 7889;
					break;
				
				case 169:
					*uParam2 = 7890;
					break;
				
				case 170:
					*uParam2 = 7891;
					break;
				
				case 171:
					*uParam2 = 7892;
					break;
				
				case 172:
					*uParam2 = 7893;
					break;
				
				case 173:
					*uParam2 = 7894;
					break;
				
				case 174:
					*uParam2 = 7895;
					break;
				
				case 175:
					*uParam2 = 7896;
					break;
				
				case 176:
					*uParam2 = 8302;
					break;
				
				case 177:
					*uParam2 = 8303;
					break;
				
				case 178:
					*uParam2 = 8304;
					break;
				
				case 179:
					*uParam2 = 8305;
					break;
				
				case 180:
					*uParam2 = 8306;
					break;
				
				case 181:
					*uParam2 = 8307;
					break;
				
				case 182:
					*uParam2 = 8308;
					break;
				
				case 183:
					*uParam2 = 8309;
					break;
				
				case 184:
					*uParam2 = 8310;
					break;
				
				case 185:
					*uParam2 = 8311;
					break;
				
				case 186:
					*uParam2 = 8312;
					break;
				
				case 187:
					*uParam2 = 8313;
					break;
				
				case 188:
					*uParam2 = 8314;
					break;
				
				case 189:
					*uParam2 = 8315;
					break;
				
				case 190:
					*uParam2 = 8316;
					break;
				
				case 191:
					*uParam2 = 8317;
					break;
				
				case 192:
					*uParam2 = 8318;
					break;
				
				case 193:
					*uParam2 = 8319;
					break;
				
				case 194:
					*uParam2 = 8320;
					break;
				
				case 195:
					*uParam2 = 8321;
					break;
				
				case 196:
					*uParam2 = 8322;
					break;
				
				case 197:
					*uParam2 = 8323;
					break;
				
				case 198:
					*uParam2 = 8324;
					break;
				
				case 199:
					*uParam2 = 8325;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8326;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9424;
					break;
				
				case 207:
					*uParam2 = 9425;
					break;
				
				case 208:
					*uParam2 = 9426;
					break;
				
				case 209:
					*uParam2 = 9427;
					break;
				
				case 210:
					*uParam2 = 9428;
					break;
				
				case 211:
					*uParam2 = 9429;
					break;
				
				case 212:
					*uParam2 = 9430;
					break;
				
				case 213:
					*uParam2 = 9431;
					break;
				
				case 214:
					*uParam2 = 9432;
					break;
				
				case 215:
					*uParam2 = 9433;
					break;
				
				case 216:
					*uParam2 = 9434;
					break;
				
				case 217:
					*uParam2 = 9435;
					break;
				
				case 218:
					*uParam2 = 9436;
					break;
				
				case 219:
					*uParam2 = 9437;
					break;
				
				case 220:
					*uParam2 = 9438;
					break;
				
				case 221:
					*uParam2 = 9439;
					break;
				
				case 222:
					*uParam2 = 9440;
					break;
				
				case 223:
					*uParam2 = 9441;
					break;
				
				case 224:
					*uParam2 = 9442;
					break;
				
				case 225:
					*uParam2 = 9443;
					break;
				
				case 226:
					*uParam2 = 9444;
					break;
				
				case 227:
					*uParam2 = 9445;
					break;
				
				case 228:
					*uParam2 = 9446;
					break;
				
				case 229:
					*uParam2 = 9447;
					break;
				
				case 230:
					*uParam2 = 9448;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10304;
					break;
				
				case 232:
					*uParam2 = 10305;
					break;
				
				case 233:
					*uParam2 = 10306;
					break;
				
				case 234:
					*uParam2 = 10307;
					break;
				
				case 235:
					*uParam2 = 10308;
					break;
				
				case 236:
					*uParam2 = 10309;
					break;
				
				case 237:
					*uParam2 = 10310;
					break;
				
				case 238:
					*uParam2 = 10311;
					break;
				
				case 239:
					*uParam2 = 10312;
					break;
				
				case 240:
					*uParam2 = 10313;
					break;
				
				case 241:
					*uParam2 = 10314;
					break;
				
				case 242:
					*uParam2 = 10315;
					break;
				
				case 243:
					*uParam2 = 10316;
					break;
				
				case 244:
					*uParam2 = 10317;
					break;
				
				case 245:
					*uParam2 = 10318;
					break;
				
				case 246:
					*uParam2 = 10319;
					break;
				
				case 247:
					*uParam2 = 10320;
					break;
				
				case 248:
					*uParam2 = 10321;
					break;
				
				case 249:
					*uParam2 = 10322;
					break;
				
				case 250:
					*uParam2 = 10323;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10420;
					break;
				
				case 252:
					*uParam2 = 10421;
					break;
				
				case 253:
					*uParam2 = 10422;
					break;
				
				case 254:
					*uParam2 = 10423;
					break;
				
				case 255:
					*uParam2 = 10424;
					break;
				
				case 256:
					*uParam2 = 10425;
					break;
				
				case 257:
					*uParam2 = 10426;
					break;
				
				case 258:
					*uParam2 = 10427;
					break;
				
				case 259:
					*uParam2 = 10428;
					break;
				
				case 260:
					*uParam2 = 10429;
					break;
				
				case 261:
					*uParam2 = 11847;
					break;
				
				case 262:
					*uParam2 = 11848;
					break;
				
				case 263:
					*uParam2 = 11849;
					break;
				
				case 264:
					*uParam2 = 11850;
					break;
				
				case 265:
					*uParam2 = 11851;
					break;
				
				case 266:
					*uParam2 = 11852;
					break;
				
				case 267:
					*uParam2 = 11853;
					break;
				
				case 268:
					*uParam2 = 11854;
					break;
				
				case 269:
					*uParam2 = 11855;
					break;
				
				case 270:
					*uParam2 = 11856;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11878;
					break;
				
				case 272:
					*uParam2 = 11879;
					break;
				
				case 273:
					*uParam2 = 11880;
					break;
				
				case 274:
					*uParam2 = 11881;
					break;
				
				case 275:
					*uParam2 = 11882;
					break;
				
				case 276:
					*uParam2 = 11883;
					break;
				
				case 277:
					*uParam2 = 11884;
					break;
				
				case 278:
					*uParam2 = 11885;
					break;
				
				case 279:
					*uParam2 = 11886;
					break;
				
				case 280:
					*uParam2 = 11887;
					break;
				
				case 281:
					*uParam2 = 11888;
					break;
				
				case 282:
					*uParam2 = 11889;
					break;
				
				case 283:
					*uParam2 = 11976;
					break;
				
				case 284:
					*uParam2 = 11977;
					break;
				
				case 285:
					*uParam2 = 11978;
					break;
				
				case 286:
					*uParam2 = 11979;
					break;
				
				case 287:
					*uParam2 = 11980;
					break;
				
				case 288:
					*uParam2 = 11981;
					break;
				
				case 289:
					*uParam2 = 11982;
					break;
				
				case 290:
					*uParam2 = 11983;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11984;
					break;
				
				case 292:
					*uParam2 = 11985;
					break;
				
				case 293:
					*uParam2 = 11986;
					break;
				
				case 294:
					*uParam2 = 11987;
					break;
				
				case 295:
					*uParam2 = 11988;
					break;
				
				case 296:
					*uParam2 = 11989;
					break;
				
				case 297:
					*uParam2 = 11990;
					break;
				
				case 298:
					*uParam2 = 12190;
					break;
				
				case 299:
					*uParam2 = 12191;
					break;
				
				case 300:
					*uParam2 = 12192;
					break;
				
				case 301:
					*uParam2 = 12193;
					break;
				
				case 302:
					*uParam2 = 12194;
					break;
				
				case 303:
					*uParam2 = 12195;
					break;
				
				case 304:
					*uParam2 = 12196;
					break;
				
				case 305:
					*uParam2 = 12197;
					break;
				
				case 306:
					*uParam2 = 12332;
					break;
				
				case 307:
					*uParam2 = 12333;
					break;
				
				case 308:
					*uParam2 = 12334;
					break;
				
				case 309:
					*uParam2 = 12335;
					break;
				
				case 310:
					*uParam2 = 12336;
					break;
			}
			break;
		
		case 2:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2603;
					break;
				
				case 52:
					*uParam2 = 2604;
					break;
				
				case 53:
					*uParam2 = 2605;
					break;
				
				case 54:
					*uParam2 = 2606;
					break;
				
				case 55:
					*uParam2 = 2607;
					break;
				
				case 56:
					*uParam2 = 2608;
					break;
				
				case 57:
					*uParam2 = 2609;
					break;
				
				case 58:
					*uParam2 = 2610;
					break;
				
				case 59:
					*uParam2 = 2611;
					break;
				
				case 60:
					*uParam2 = 2612;
					break;
				
				case 61:
					*uParam2 = 2613;
					break;
				
				case 62:
					*uParam2 = 3205;
					break;
				
				case 63:
					*uParam2 = 3206;
					break;
				
				case 64:
					*uParam2 = 3207;
					break;
				
				case 65:
					*uParam2 = 3208;
					break;
				
				case 66:
					*uParam2 = 3209;
					break;
				
				case 67:
					*uParam2 = 3210;
					break;
				
				case 68:
					*uParam2 = 3682;
					break;
				
				case 69:
					*uParam2 = 3683;
					break;
				
				case 70:
					*uParam2 = 3684;
					break;
				
				case 71:
					*uParam2 = 3685;
					break;
				
				case 72:
					*uParam2 = 3686;
					break;
				
				case 73:
					*uParam2 = 3687;
					break;
				
				case 74:
					*uParam2 = 3688;
					break;
				
				case 75:
					*uParam2 = 3689;
					break;
				
				case 76:
					*uParam2 = 3690;
					break;
				
				case 77:
					*uParam2 = 3691;
					break;
				
				case 78:
					*uParam2 = 3803;
					break;
				
				case 79:
					*uParam2 = 3804;
					break;
				
				case 80:
					*uParam2 = 3805;
					break;
				
				case 81:
					*uParam2 = 3806;
					break;
				
				case 82:
					*uParam2 = 3807;
					break;
				
				case 83:
					*uParam2 = 3808;
					break;
				
				case 84:
					*uParam2 = 3809;
					break;
				
				case 85:
					*uParam2 = 3810;
					break;
				
				case 86:
					*uParam2 = 3908;
					break;
				
				case 87:
					*uParam2 = 3909;
					break;
				
				case 88:
					*uParam2 = 3910;
					break;
				
				case 89:
					*uParam2 = 5352;
					break;
				
				case 90:
					*uParam2 = 5353;
					break;
				
				case 91:
					*uParam2 = 5354;
					break;
				
				case 92:
					*uParam2 = 5355;
					break;
				
				case 93:
					*uParam2 = 5356;
					break;
				
				case 94:
					*uParam2 = 5357;
					break;
				
				case 95:
					*uParam2 = 5358;
					break;
				
				case 96:
					*uParam2 = 5359;
					break;
				
				case 97:
					*uParam2 = 5360;
					break;
				
				case 98:
					*uParam2 = 5361;
					break;
				
				case 99:
					*uParam2 = 5362;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5363;
					break;
				
				case 101:
					*uParam2 = 5420;
					break;
				
				case 102:
					*uParam2 = 5421;
					break;
				
				case 103:
					*uParam2 = 5422;
					break;
				
				case 104:
					*uParam2 = 5423;
					break;
				
				case 105:
					*uParam2 = 5424;
					break;
				
				case 106:
					*uParam2 = 5425;
					break;
				
				case 107:
					*uParam2 = 5426;
					break;
				
				case 108:
					*uParam2 = 5427;
					break;
				
				case 109:
					*uParam2 = 5428;
					break;
				
				case 110:
					*uParam2 = 5429;
					break;
				
				case 111:
					*uParam2 = 5430;
					break;
				
				case 112:
					*uParam2 = 5431;
					break;
				
				case 113:
					*uParam2 = 5432;
					break;
				
				case 114:
					*uParam2 = 5433;
					break;
				
				case 115:
					*uParam2 = 5434;
					break;
				
				case 116:
					*uParam2 = 5435;
					break;
				
				case 117:
					*uParam2 = 5436;
					break;
				
				case 118:
					*uParam2 = 5437;
					break;
				
				case 119:
					*uParam2 = 5438;
					break;
				
				case 120:
					*uParam2 = 5439;
					break;
				
				case 121:
					*uParam2 = 5440;
					break;
				
				case 122:
					*uParam2 = 5441;
					break;
				
				case 123:
					*uParam2 = 5442;
					break;
				
				case 124:
					*uParam2 = 6140;
					break;
				
				case 125:
					*uParam2 = 6141;
					break;
				
				case 126:
					*uParam2 = 6142;
					break;
				
				case 127:
					*uParam2 = 6143;
					break;
				
				case 128:
					*uParam2 = 6144;
					break;
				
				case 129:
					*uParam2 = 6145;
					break;
				
				case 130:
					*uParam2 = 6146;
					break;
				
				case 131:
					*uParam2 = 6147;
					break;
				
				case 132:
					*uParam2 = 6148;
					break;
				
				case 133:
					*uParam2 = 6149;
					break;
				
				case 134:
					*uParam2 = 6150;
					break;
				
				case 135:
					*uParam2 = 6151;
					break;
				
				case 136:
					*uParam2 = 6152;
					break;
				
				case 137:
					*uParam2 = 6153;
					break;
				
				case 138:
					*uParam2 = 6154;
					break;
				
				case 139:
					*uParam2 = 6453;
					break;
				
				case 140:
					*uParam2 = 6454;
					break;
				
				case 141:
					*uParam2 = 6455;
					break;
				
				case 142:
					*uParam2 = 6456;
					break;
				
				case 143:
					*uParam2 = 6457;
					break;
				
				case 144:
					*uParam2 = 6458;
					break;
				
				case 145:
					*uParam2 = 6459;
					break;
				
				case 146:
					*uParam2 = 6460;
					break;
				
				case 147:
					*uParam2 = 6461;
					break;
				
				case 148:
					*uParam2 = 6462;
					break;
				
				case 149:
					*uParam2 = 6463;
					break;
				
				case 150:
					*uParam2 = 6464;
					break;
				
				case 151:
					*uParam2 = 6465;
					break;
				
				case 152:
					*uParam2 = 6466;
					break;
				
				case 153:
					*uParam2 = 6467;
					break;
				
				case 154:
					*uParam2 = 7276;
					break;
				
				case 155:
					*uParam2 = 7277;
					break;
				
				case 156:
					*uParam2 = 7278;
					break;
				
				case 157:
					*uParam2 = 7279;
					break;
				
				case 158:
					*uParam2 = 7280;
					break;
				
				case 159:
					*uParam2 = 7281;
					break;
				
				case 160:
					*uParam2 = 7282;
					break;
				
				case 161:
					*uParam2 = 7897;
					break;
				
				case 162:
					*uParam2 = 7898;
					break;
				
				case 163:
					*uParam2 = 7899;
					break;
				
				case 164:
					*uParam2 = 7900;
					break;
				
				case 165:
					*uParam2 = 7901;
					break;
				
				case 166:
					*uParam2 = 7902;
					break;
				
				case 167:
					*uParam2 = 7903;
					break;
				
				case 168:
					*uParam2 = 7904;
					break;
				
				case 169:
					*uParam2 = 7905;
					break;
				
				case 170:
					*uParam2 = 7906;
					break;
				
				case 171:
					*uParam2 = 7907;
					break;
				
				case 172:
					*uParam2 = 7908;
					break;
				
				case 173:
					*uParam2 = 7909;
					break;
				
				case 174:
					*uParam2 = 7910;
					break;
				
				case 175:
					*uParam2 = 7911;
					break;
				
				case 176:
					*uParam2 = 8327;
					break;
				
				case 177:
					*uParam2 = 8328;
					break;
				
				case 178:
					*uParam2 = 8329;
					break;
				
				case 179:
					*uParam2 = 8330;
					break;
				
				case 180:
					*uParam2 = 8331;
					break;
				
				case 181:
					*uParam2 = 8332;
					break;
				
				case 182:
					*uParam2 = 8333;
					break;
				
				case 183:
					*uParam2 = 8334;
					break;
				
				case 184:
					*uParam2 = 8335;
					break;
				
				case 185:
					*uParam2 = 8336;
					break;
				
				case 186:
					*uParam2 = 8337;
					break;
				
				case 187:
					*uParam2 = 8338;
					break;
				
				case 188:
					*uParam2 = 8339;
					break;
				
				case 189:
					*uParam2 = 8340;
					break;
				
				case 190:
					*uParam2 = 8341;
					break;
				
				case 191:
					*uParam2 = 8342;
					break;
				
				case 192:
					*uParam2 = 8343;
					break;
				
				case 193:
					*uParam2 = 8344;
					break;
				
				case 194:
					*uParam2 = 8345;
					break;
				
				case 195:
					*uParam2 = 8346;
					break;
				
				case 196:
					*uParam2 = 8347;
					break;
				
				case 197:
					*uParam2 = 8348;
					break;
				
				case 198:
					*uParam2 = 8349;
					break;
				
				case 199:
					*uParam2 = 8350;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8351;
					break;
				
				case 201:
					*uParam2 = 8946;
					break;
				
				case 202:
					*uParam2 = 8947;
					break;
				
				case 203:
					*uParam2 = 8948;
					break;
				
				case 204:
					*uParam2 = 8949;
					break;
				
				case 205:
					*uParam2 = 8950;
					break;
				
				case 206:
					*uParam2 = 9449;
					break;
				
				case 207:
					*uParam2 = 9450;
					break;
				
				case 208:
					*uParam2 = 9451;
					break;
				
				case 209:
					*uParam2 = 9452;
					break;
				
				case 210:
					*uParam2 = 9453;
					break;
				
				case 211:
					*uParam2 = 9454;
					break;
				
				case 212:
					*uParam2 = 9455;
					break;
				
				case 213:
					*uParam2 = 9456;
					break;
				
				case 214:
					*uParam2 = 9457;
					break;
				
				case 215:
					*uParam2 = 9458;
					break;
				
				case 216:
					*uParam2 = 9459;
					break;
				
				case 217:
					*uParam2 = 9460;
					break;
				
				case 218:
					*uParam2 = 9461;
					break;
				
				case 219:
					*uParam2 = 9462;
					break;
				
				case 220:
					*uParam2 = 9463;
					break;
				
				case 221:
					*uParam2 = 9464;
					break;
				
				case 222:
					*uParam2 = 9465;
					break;
				
				case 223:
					*uParam2 = 9466;
					break;
				
				case 224:
					*uParam2 = 9467;
					break;
				
				case 225:
					*uParam2 = 9468;
					break;
				
				case 226:
					*uParam2 = 9469;
					break;
				
				case 227:
					*uParam2 = 9470;
					break;
				
				case 228:
					*uParam2 = 9471;
					break;
				
				case 229:
					*uParam2 = 9472;
					break;
				
				case 230:
					*uParam2 = 9473;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10324;
					break;
				
				case 232:
					*uParam2 = 10325;
					break;
				
				case 233:
					*uParam2 = 10326;
					break;
				
				case 234:
					*uParam2 = 10327;
					break;
				
				case 235:
					*uParam2 = 10328;
					break;
				
				case 236:
					*uParam2 = 10329;
					break;
				
				case 237:
					*uParam2 = 10330;
					break;
				
				case 238:
					*uParam2 = 10331;
					break;
				
				case 239:
					*uParam2 = 10332;
					break;
				
				case 240:
					*uParam2 = 10333;
					break;
				
				case 241:
					*uParam2 = 10334;
					break;
				
				case 242:
					*uParam2 = 10335;
					break;
				
				case 243:
					*uParam2 = 10336;
					break;
				
				case 244:
					*uParam2 = 10337;
					break;
				
				case 245:
					*uParam2 = 10338;
					break;
				
				case 246:
					*uParam2 = 10339;
					break;
				
				case 247:
					*uParam2 = 10340;
					break;
				
				case 248:
					*uParam2 = 10341;
					break;
				
				case 249:
					*uParam2 = 10342;
					break;
				
				case 250:
					*uParam2 = 10343;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10430;
					break;
				
				case 252:
					*uParam2 = 10431;
					break;
				
				case 253:
					*uParam2 = 10432;
					break;
				
				case 254:
					*uParam2 = 10433;
					break;
				
				case 255:
					*uParam2 = 10434;
					break;
				
				case 256:
					*uParam2 = 10435;
					break;
				
				case 257:
					*uParam2 = 10436;
					break;
				
				case 258:
					*uParam2 = 10437;
					break;
				
				case 259:
					*uParam2 = 10438;
					break;
				
				case 260:
					*uParam2 = 10439;
					break;
				
				case 261:
					*uParam2 = 11857;
					break;
				
				case 262:
					*uParam2 = 11858;
					break;
				
				case 263:
					*uParam2 = 11859;
					break;
				
				case 264:
					*uParam2 = 11860;
					break;
				
				case 265:
					*uParam2 = 11861;
					break;
				
				case 266:
					*uParam2 = 11862;
					break;
				
				case 267:
					*uParam2 = 11863;
					break;
				
				case 268:
					*uParam2 = 11864;
					break;
				
				case 269:
					*uParam2 = 11865;
					break;
				
				case 270:
					*uParam2 = 11866;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11890;
					break;
				
				case 272:
					*uParam2 = 11891;
					break;
				
				case 273:
					*uParam2 = 11892;
					break;
				
				case 274:
					*uParam2 = 11893;
					break;
				
				case 275:
					*uParam2 = 11894;
					break;
				
				case 276:
					*uParam2 = 11895;
					break;
				
				case 277:
					*uParam2 = 11896;
					break;
				
				case 278:
					*uParam2 = 11897;
					break;
				
				case 279:
					*uParam2 = 11898;
					break;
				
				case 280:
					*uParam2 = 11899;
					break;
				
				case 281:
					*uParam2 = 11900;
					break;
				
				case 282:
					*uParam2 = 11901;
					break;
				
				case 283:
					*uParam2 = 11991;
					break;
				
				case 284:
					*uParam2 = 11992;
					break;
				
				case 285:
					*uParam2 = 11993;
					break;
				
				case 286:
					*uParam2 = 11994;
					break;
				
				case 287:
					*uParam2 = 11995;
					break;
				
				case 288:
					*uParam2 = 11996;
					break;
				
				case 289:
					*uParam2 = 11997;
					break;
				
				case 290:
					*uParam2 = 11998;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11999;
					break;
				
				case 292:
					*uParam2 = 12000;
					break;
				
				case 293:
					*uParam2 = 12001;
					break;
				
				case 294:
					*uParam2 = 12002;
					break;
				
				case 295:
					*uParam2 = 12003;
					break;
				
				case 296:
					*uParam2 = 12004;
					break;
				
				case 297:
					*uParam2 = 12005;
					break;
				
				case 298:
					*uParam2 = 12198;
					break;
				
				case 299:
					*uParam2 = 12199;
					break;
				
				case 300:
					*uParam2 = 12200;
					break;
				
				case 301:
					*uParam2 = 12201;
					break;
				
				case 302:
					*uParam2 = 12202;
					break;
				
				case 303:
					*uParam2 = 12203;
					break;
				
				case 304:
					*uParam2 = 12204;
					break;
				
				case 305:
					*uParam2 = 12205;
					break;
				
				case 306:
					*uParam2 = 12337;
					break;
				
				case 307:
					*uParam2 = 12338;
					break;
				
				case 308:
					*uParam2 = 12339;
					break;
				
				case 309:
					*uParam2 = 12340;
					break;
				
				case 310:
					*uParam2 = 12341;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 14835;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_190(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<10> Var9;
	int iVar10;
	int iVar11;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_79172[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = unk_0xF2DDA7CE028AB9CB(iVar1, 0);
			if (iVar4 > iVar3)
			{
				unk_0x808A8ABE207631DF(iVar3, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2.f_0;
				func_182(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_182(&(Global_79172[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x7A491C9A90975007(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = unk_0x7B6C0A0D604E68FA(iVar1, 10, -1, 1, -1, -1);
			if (iVar8 > iVar7)
			{
				unk_0x2DBB2D25D50A5392(iVar7, &Var5);
				if (Var5.f_6 == 0)
				{
					iVar6 = 9;
				}
				else if (Var5.f_6 == 1)
				{
					iVar6 = 10;
				}
				else if (Var5.f_6 == 2)
				{
					iVar6 = 2;
				}
				else if (Var5.f_6 == 3)
				{
					iVar6 = 3;
				}
				else if (Var5.f_6 == 4)
				{
					iVar6 = 4;
				}
				else if (Var5.f_6 == 5)
				{
					iVar6 = 5;
				}
				else if (Var5.f_6 == 6)
				{
					iVar6 = 6;
				}
				else if (Var5.f_6 == 7)
				{
					iVar6 = 7;
				}
				else if (Var5.f_6 == 8)
				{
					iVar6 = 8;
				}
				else
				{
					iVar6 = -1;
				}
				Global_2883588 = Var5.f_1;
				Global_2883589 = Var5.f_0;
				func_182(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, unk_0x304A39EB177D246B(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0x15D20F88F06530A5(&Var9);
		if (iParam3 != -1 && Global_79370)
		{
			unk_0xA5690D702773BED4(iParam3, &Var9);
			Global_2883588 = Var9.f_1;
			Global_2883589 = Var9.f_0;
			func_182(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x304A39EB177D246B(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = unk_0x7B6C0A0D604E68FA(iVar1, 10, -1, 0, -1, func_191(iParam0));
			if (iVar11 > iVar10)
			{
				unk_0xD36906FE7BBBDB62(iVar10, &Var9);
				Global_2883588 = Var9.f_1;
				Global_2883589 = Var9.f_0;
				func_182(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x304A39EB177D246B(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_192(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_190(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_193(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_194(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_195(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_196(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_197(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_190(iVar7, iParam0, 33, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_198(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_190(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_199(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_190(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_200(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_190(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_201(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_190(iVar7, iParam0, 84, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_202(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_190(iVar7, iParam0, 104, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_203(int iParam0)
{
	if (iParam0 < 136)
	{
		func_205(iParam0);
	}
	else
	{
		func_204(iParam0);
	}
	if (Global_79172[0 /*14*/].f_2 == -1)
	{
		func_190(3, iParam0, 242, -1);
	}
}

void func_204(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_205(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_206(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_207(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_190(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_208(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_226(iParam1);
			break;
		
		case 2:
			func_225(iParam1);
			break;
		
		case 3:
			func_221(iParam1);
			break;
		
		case 4:
			func_220(iParam1);
			break;
		
		case 6:
			func_219(iParam1);
			break;
		
		case 5:
			func_218(iParam1);
			break;
		
		case 8:
			func_217(iParam1);
			break;
		
		case 9:
			func_216(iParam1);
			break;
		
		case 10:
			func_215(iParam1);
			break;
		
		case 1:
			func_214(iParam1);
			break;
		
		case 7:
			func_213(iParam1);
			break;
		
		case 11:
			func_212(iParam1);
			break;
		
		case 12:
			func_211(iParam1);
			break;
		
		case 13:
			func_210(iParam1);
			break;
		
		case 14:
			func_209(iParam1);
			break;
	}
}

void func_209(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_210(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_211(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_212(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_190(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_213(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_214(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_215(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_216(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_217(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_218(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_190(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_219(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_190(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_220(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_190(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_221(int iParam0)
{
	if (iParam0 < 107)
	{
		func_224(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_223(iParam0);
	}
	else
	{
		func_222(iParam0);
	}
	if (Global_79172[0 /*14*/].f_2 == -1)
	{
		func_190(3, iParam0, 318, -1);
	}
}

void func_222(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_223(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_224(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_225(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_190(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_226(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_190(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_227(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_244(iParam1);
			break;
		
		case 2:
			func_243(iParam1);
			break;
		
		case 3:
			func_240(iParam1);
			break;
		
		case 4:
			func_239(iParam1);
			break;
		
		case 6:
			func_238(iParam1);
			break;
		
		case 5:
			func_237(iParam1);
			break;
		
		case 8:
			func_236(iParam1);
			break;
		
		case 9:
			func_235(iParam1);
			break;
		
		case 10:
			func_234(iParam1);
			break;
		
		case 1:
			func_233(iParam1);
			break;
		
		case 7:
			func_232(iParam1);
			break;
		
		case 11:
			func_231(iParam1);
			break;
		
		case 12:
			func_230(iParam1);
			break;
		
		case 13:
			func_229(iParam1);
			break;
		
		case 14:
			func_228(iParam1);
			break;
	}
}

void func_228(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_190(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_229(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_190(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_230(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_231(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_232(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_233(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_234(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_190(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_235(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_190(iVar7, iParam0, 20, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_236(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_190(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_237(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_190(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_238(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_190(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_239(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_240(int iParam0)
{
	if (iParam0 < 60)
	{
		func_242(iParam0);
	}
	else
	{
		func_241(iParam0);
	}
	if (Global_79172[0 /*14*/].f_2 == -1)
	{
		func_190(3, iParam0, 181, -1);
	}
}

void func_241(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_242(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_243(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_190(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_244(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_190(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_182(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_245()
{
	Global_79172[0 /*14*/].f_1 = -1;
	Global_79172[0 /*14*/].f_2 = -1;
	Global_79172[0 /*14*/].f_5 = -1;
	Global_79172[0 /*14*/].f_3 = -1;
	Global_79172[0 /*14*/].f_4 = -1;
	Global_79172[0 /*14*/].f_7 = 0;
	Global_79172[0 /*14*/].f_6 = 0;
	Global_79172[0 /*14*/].f_13 = -1;
	Global_79172[0 /*14*/].f_12 = 0;
	Global_79172[0 /*14*/] = 0;
	StringCopy(&(Global_79172[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_246(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	Global_79172[1 /*14*/] = { func_179(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_79172[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_262(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_246(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_257(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_246(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_79172[2 /*14*/] = { func_179(iVar0, 14, iVar4, -1) };
									if (Global_79172[2 /*14*/].f_12 == iVar3)
									{
										if (func_246(iParam0, 14, iVar4))
										{
											if (!func_249(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_79172[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_247(iParam0, iVar2);
						Global_79172[2 /*14*/] = { func_179(iVar0, iVar2, iVar1, -1) };
						if (!func_249(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_79172[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_257(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_246(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xB204F40D393426B6(iParam0, Global_79172[1 /*14*/].f_12, 1) == Global_79172[1 /*14*/].f_3 && (unk_0x0DC23FA727759F9F(iParam0, Global_79172[1 /*14*/].f_12) == Global_79172[1 /*14*/].f_4 || Global_79172[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_79172[1 /*14*/].f_3 == unk_0xC0120BBCC298EA2F(iParam0, func_191(iParam1)) && Global_79172[1 /*14*/].f_4 == unk_0xD6AED6BFCC58AF7F(iParam0, func_191(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x4FAFF4BCB7633475(iParam0))
	{
		return -99;
	}
	iVar0 = func_191(iParam1);
	iVar1 = unk_0xC0120BBCC298EA2F(iParam0, iVar0);
	iVar2 = unk_0xD6AED6BFCC58AF7F(iParam0, iVar0);
	return func_248(iParam0, iVar1, iVar2, iParam1);
}

int func_248(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_191(iParam3);
	iVar1 = unk_0x1A4EFE92822E3123(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + unk_0x8401C77F508D70FD(iParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

int func_249(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_257(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_256(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_255(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_254(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_250(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_255(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_254(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_250(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_255(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_254(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_250(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_250(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_251(iParam0, iParam2, 14, 3);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 1) || unk_0x304A39EB177D246B(func_251(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_251(iParam0, iParam2, 1, 3);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(func_251(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_251(iParam0, iParam2, 14, 4);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 1) || unk_0x304A39EB177D246B(func_251(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_251(iParam0, iParam2, 1, 4);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(func_251(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_251(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x7A491C9A90975007(&Var0);
		iVar1 = (iParam1 - func_253(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 1, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		unk_0x2DBB2D25D50A5392(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0x15D20F88F06530A5(&Var3);
		iVar4 = (iParam1 - func_252(iParam0, func_191(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_79322.f_26[iParam2] && iParam1 == Global_79322[iParam2]) && Global_79322.f_13[iParam2] != 0)
		{
			return Global_79322.f_13[iParam2];
		}
		iVar5 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_191(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		unk_0xD36906FE7BBBDB62(iVar4, &Var3);
		Global_79322.f_13[iParam2] = Var3.f_1;
		Global_79322[iParam2] = iParam1;
		Global_79322.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_252(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_254(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_251(iParam0, iParam2, 1, 3);
					}
					if (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(iParam3, joaat("hair_shrink"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_251(iParam0, iParam2, 1, 4);
					}
					if (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(iParam3, joaat("hair_shrink"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_255(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_251(iParam0, iParam2, 14, 3);
					}
					return unk_0x304A39EB177D246B(iParam3, joaat("glasses"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_251(iParam0, iParam2, 14, 4);
					}
					return unk_0x304A39EB177D246B(iParam3, joaat("glasses"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_256(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

struct<10> func_257(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_261(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_261(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_261(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_261(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_261(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_261(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_261(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_261(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_261(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_261(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_261(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_258(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_261(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_261(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_261(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_261(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_261(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_261(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_261(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_261(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_261(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_261(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_258(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_261(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_261(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_261(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_261(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_261(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_261(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_261(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_261(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_261(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_261(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_258(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_261(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_261(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_261(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_261(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_261(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_261(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_261(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_261(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_261(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_261(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_261(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_261(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_261(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_261(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_261(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_261(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_261(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_261(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_261(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_261(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_261(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_261(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_261(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_261(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_261(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_261(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_258(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_261(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_261(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_261(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_261(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_261(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_261(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_261(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_261(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_261(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_261(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_261(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_261(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_261(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_261(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_261(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_261(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_261(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_261(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_261(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_261(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_261(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_261(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_261(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_261(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_261(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_258(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_258(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x565B95D20273E8CD(iParam2, &Var1);
		if (!unk_0x4BFA043D318BF9AE(Var1.f_0))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0xCD4F2395AE80D510(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = func_259(iParam1, Var2.f_0, 14, iVar0);
					}
					else if (Var2.f_1 != -1)
					{
						(*iParam0)[Var2.f_2] = Var2.f_1;
					}
				}
				iVar3++;
			}
		}
	}
}

int func_259(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 12)
	{
		iVar2 = unk_0xF2DDA7CE028AB9CB(iParam3, 0);
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			unk_0x808A8ABE207631DF(iVar1, &Var0);
			if (Var0.f_1 == iParam1)
			{
				return (func_260(iParam0) + iVar1);
			}
			iVar1++;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 1, -1, -1);
		iVar3 = unk_0x289EDE99827978AD(iParam1);
		if (iVar3 != -1)
		{
			return (func_253(iParam0) + iVar3);
		}
	}
	else
	{
		unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_191(iParam2));
		iVar4 = unk_0x55FF07D3A2FE8317(iParam1);
		if (iVar4 != -1)
		{
			return (func_252(iParam0, func_191(iParam2)) + iVar4);
		}
	}
	return -99;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 53;
			break;
		
		case joaat("player_one"):
			return 47;
			break;
		
		case joaat("player_two"):
			return 48;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 26;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 28;
			break;
	}
	return -99;
}

void func_261(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_262(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_113969.f_9088.f_99.f_58[120])
					{
						func_265(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_265(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_265(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_265(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_265(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_265(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_265(&Var1, -99, -99, Global_113969.f_2366.f_539.f_196[0], Global_113969.f_2366.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_265(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_265(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_265(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_265(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_265(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_265(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_265(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_265(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_265(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_265(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_265(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_265(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_265(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_265(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_265(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_265(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_265(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_265(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_265(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_265(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_265(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_265(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_265(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_265(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_265(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_265(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_265(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_265(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_265(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_265(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_265(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_265(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_265(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_265(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_265(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_265(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_265(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_265(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_265(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_265(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_265(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_265(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_265(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_265(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_265(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_265(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_265(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_263(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_265(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_265(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_265(&Var1, -99, -99, Global_113969.f_2366.f_539.f_196[1], Global_113969.f_2366.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_265(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_265(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_265(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_265(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_265(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_265(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_265(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_265(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_265(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_265(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_265(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_265(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_265(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_265(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_265(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_265(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_265(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_265(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_265(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_265(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_265(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_265(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_265(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_265(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_265(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_265(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_265(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_265(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_265(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_265(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_265(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_265(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_265(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_265(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_265(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_265(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_265(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_265(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_265(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_265(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_265(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_265(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_265(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_265(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_263(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_265(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_265(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_265(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_265(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_265(&Var1, -99, -99, Global_113969.f_2366.f_539.f_196[2], Global_113969.f_2366.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_265(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_265(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_265(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_265(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_265(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_265(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_265(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_265(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_265(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_265(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_265(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_265(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_265(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_265(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_265(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_265(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_265(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_265(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_265(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_265(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_265(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_265(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_265(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_265(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_265(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_265(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_265(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_265(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_265(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_265(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_265(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_265(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_265(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_265(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_265(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_265(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_265(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_265(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_265(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_265(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_265(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_265(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_265(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_263(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_265(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_265(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_265(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_265(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_265(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_265(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_265(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_265(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_265(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_265(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_265(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_265(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_265(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_265(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_265(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_265(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_265(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_265(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_265(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_265(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_265(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_265(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_265(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_265(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_265(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_265(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_263(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_265(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_265(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_265(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_265(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_265(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_265(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_265(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_265(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_265(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_265(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_265(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_265(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_265(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_265(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_265(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_265(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_265(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_265(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_265(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_265(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_265(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_265(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_265(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_265(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_265(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_265(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_265(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_265(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_263(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_263(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0xF2DDA7CE028AB9CB(iVar0, 0);
	unk_0x808A8ABE207631DF((iParam2 - iParam3), &Var1);
	if (!unk_0x4BFA043D318BF9AE(Var1.f_0))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0xABE43EB6EBE5F2F5(Var1.f_1, iVar4, &Var2))
			{
				if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						unk_0x15D20F88F06530A5(&Var3);
						unk_0xA5690D702773BED4(Var2.f_0, &Var3);
						if (Var2.f_0 != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var2.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_264(Var2.f_2)] = Var2.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_264(Var2.f_2)] = func_259(iParam1, Var2.f_0, func_264(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*uParam0)[func_264(Var2.f_2)] = Var2.f_1;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_265(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

bool func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar0 = func_247(iParam0, 4);
	return func_267(iVar1, 4, iVar0);
}

int func_267(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_268(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_48(iParam0);
		if (func_39(bVar0))
		{
			if (bVar0 == 2)
			{
				iVar1 = func_461(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_460(bVar0);
					func_275(iParam0, &(Global_113969.f_2366.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_49(iParam0, &Var2, 1, -1);
			Global_101258[bVar0 /*65*/] = { Var2 };
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				func_270();
			}
			if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) != unk_0x70E57E9927B6BA58("clothes_shop_sp") || (unk_0x486FF5D06E9659F1(joaat("lester1")) == 0 && unk_0x486FF5D06E9659F1(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_60(0) && !func_60(1)) && !func_60(2)) && !func_60(3)) && !func_60(4)) && !func_60(9)) && !func_60(10)))
				{
					Global_113969.f_2366.f_539[bVar0 /*65*/] = { Var2 };
					Global_113969.f_2366.f_539.f_2391[bVar0] = func_269(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113969.f_2366.f_539.f_204[iVar3 /*4*/][bVar0] = func_247(iParam0, func_264(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113969.f_2366.f_539.f_204[iVar3 /*4*/][bVar0] = func_247(iParam0, func_264(iVar3));
						iVar3++;
					}
					if (bVar0 == 0)
					{
						if (Global_113969.f_9088.f_99.f_58[121])
						{
							Global_113969.f_9088.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_269(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = unk_0x1A4EFE92822E3123(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + unk_0x8401C77F508D70FD(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = unk_0x4D0F04723A52D0E9(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + unk_0x1D77F90D87ACD2BA(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_270()
{
	struct<50> Var0;
	
	if ((unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) || !func_39(func_549())) || !func_272())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_49(unk_0x4A8C381C258A124D(), &Var0, 1, -1);
	func_271(1306, Var0[0], -1);
	func_271(1307, Var0[1], -1);
	func_271(1308, Var0[2], -1);
	func_271(1309, Var0[3], -1);
	func_271(1310, Var0[4], -1);
	func_271(1311, Var0[5], -1);
	func_271(1312, Var0[6], -1);
	func_271(1313, Var0[7], -1);
	func_271(1314, Var0[8], -1);
	func_271(1315, Var0[9], -1);
	func_271(1316, Var0[10], -1);
	func_271(1317, Var0[11], -1);
	func_271(1318, Var0.f_13[0], -1);
	func_271(1319, Var0.f_13[1], -1);
	func_271(1320, Var0.f_13[2], -1);
	func_271(1321, Var0.f_13[3], -1);
	func_271(1322, Var0.f_13[4], -1);
	func_271(1323, Var0.f_13[5], -1);
	func_271(1324, Var0.f_13[6], -1);
	func_271(1325, Var0.f_13[7], -1);
	func_271(1326, Var0.f_13[8], -1);
	func_271(1327, Var0.f_13[9], -1);
	func_271(1328, Var0.f_13[10], -1);
	func_271(1329, Var0.f_13[11], -1);
	func_271(1330, Var0.f_26[0], -1);
	func_271(1331, Var0.f_26[1], -1);
	func_271(1332, Var0.f_26[2], -1);
	func_271(1333, Var0.f_26[3], -1);
	func_271(1334, Var0.f_26[4], -1);
	func_271(1335, Var0.f_26[5], -1);
	func_271(1336, Var0.f_26[6], -1);
	func_271(1337, Var0.f_26[7], -1);
	func_271(1338, Var0.f_26[8], -1);
	func_271(1339, Var0.f_26[9], -1);
	func_271(1340, Var0.f_26[10], -1);
	func_271(1341, Var0.f_26[11], -1);
	func_271(1342, Var0.f_39[0], -1);
	func_271(1343, Var0.f_39[1], -1);
	func_271(1344, Var0.f_39[2], -1);
	func_271(1345, Var0.f_39[3], -1);
	func_271(1346, Var0.f_39[4], -1);
	func_271(1347, Var0.f_39[5], -1);
	func_271(1348, Var0.f_39[6], -1);
	func_271(1349, Var0.f_39[7], -1);
	func_271(1350, Var0.f_39[8], -1);
	func_271(1351, Var0.f_49[0], -1);
	func_271(1352, Var0.f_49[1], -1);
	func_271(1353, Var0.f_49[2], -1);
	func_271(1354, Var0.f_49[3], -1);
	func_271(1355, Var0.f_49[4], -1);
	func_271(1356, Var0.f_49[5], -1);
	func_271(1357, Var0.f_49[6], -1);
	func_271(1358, Var0.f_49[7], -1);
	func_271(1359, Var0.f_49[8], -1);
	func_271(1360, func_549(), -1);
	unk_0xF1D0B0CE940F620D(joaat("clo_stored_initial"), 1, 1);
	Global_113969.f_2366.f_539.f_4315 = 1;
}

void func_271(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_53();
	}
	if (bParam1 < 0)
	{
		bParam1 = 255;
	}
	unk_0x0F575D68F532124C(iParam0, bParam1, iParam2);
}

int func_272()
{
	if (func_274() && func_273(0))
	{
		return 1;
	}
	return 0;
}

var func_273(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_274()
{
	return func_273(func_53() + 1);
}

void func_275(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0) || iParam5)
	{
		bVar0 = func_48(iParam0);
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0x1A4EFE92822E3123(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x8401C77F508D70FD(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0xD1C578C204015E1F(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= unk_0x4D0F04723A52D0E9(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0x1D77F90D87ACD2BA(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0x7F08C4791E6D6969(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false, 1);
			}
			else
			{
				unk_0x09397806857F5DFB(iParam0, iVar3, 1);
			}
			iVar3++;
		}
		if (func_39(bVar0))
		{
			Global_113969.f_2366.f_539[bVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113969.f_2366.f_539[bVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113969.f_2366.f_539[bVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_459(iParam0, iVar1, &iVar2, 0))
			{
				func_489(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113969.f_2366.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113969.f_2366.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113969.f_2366.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_457(iParam0, iVar1, &iVar2))
			{
				func_489(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0x76CD105BCAC6EB9F() && unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			bVar4 = func_454(iParam0);
			func_453(754, uParam1->f_60, Global_79169, 1);
			func_453(755, uParam1->f_61, Global_79169, 1);
			iVar5 = func_248(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("mp_m_freemode_01"))
				{
					iVar6 = func_451(iVar5);
				}
				else if (iVar1 == joaat("mp_f_freemode_01"))
				{
					iVar6 = func_449(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_280(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_79169, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_248(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_280(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_79169, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_277(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_280(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_79169, bVar4, 0, 0);
			}
		}
		if (unk_0x76CD105BCAC6EB9F() && iParam0 == unk_0x4A8C381C258A124D())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_451(iVar9);
			}
			else
			{
				iVar9 = func_449(iVar9);
			}
			func_453(753, iVar9, Global_79169, 1);
			func_453(2053, iVar9, Global_79169, 1);
			func_276(161, 1, -1, 1);
		}
		if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
		{
			iVar10 = unk_0x94B8A32AA940A6B5(iParam0, 1, unk_0xC0120BBCC298EA2F(iParam0, 1), unk_0xD6AED6BFCC58AF7F(iParam0, 1));
			iVar11 = unk_0x6B7AEB5F3D578298(iParam0, 1, unk_0xB204F40D393426B6(iParam0, 1, 1), unk_0x0DC23FA727759F9F(iParam0, 1));
			if (iVar10 == joaat("dlc_mp_arena_m_berd_13_0") || iVar10 == joaat("dlc_mp_arena_f_berd_13_0"))
			{
				if (!unk_0x304A39EB177D246B(iVar11, joaat("arena_draw_0"), 1))
				{
					unk_0x7A491C9A90975007(&Var12);
					if (iVar10 == joaat("dlc_mp_arena_m_berd_13_0"))
					{
						unk_0x2DBB2D25D50A5392(joaat("dlc_mp_arena_m_peyes_0_0"), &Var12);
					}
					else
					{
						unk_0x2DBB2D25D50A5392(joaat("dlc_mp_arena_f_peyes_0_0"), &Var12);
					}
					unk_0x7F08C4791E6D6969(iParam0, 1, Var12.f_3, Var12.f_4, false, 1);
				}
			}
			else if (unk_0x304A39EB177D246B(iVar11, joaat("arena_draw_0"), 1))
			{
				unk_0x09397806857F5DFB(iParam0, 1, 1);
			}
		}
	}
}

void func_276(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_55(iParam0, iParam2);
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, iParam3);
	}
}

int func_277(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_279(iParam3);
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar1 = unk_0x6B7AEB5F3D578298(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_259(unk_0x4B423FAA24E8ABF0(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_259(unk_0x4B423FAA24E8ABF0(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x4D0F04723A52D0E9(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x1D77F90D87ACD2BA(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_278(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_279(iParam3);
}

int func_278(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_280(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	var uVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	var uVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	var uVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if ((Global_1575010 != 4 && Global_1575010 != 5) && Global_1575010 != 7)
		{
			return 0;
		}
	}
	if (unk_0x4FAFF4BCB7633475(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x4A8C381C258A124D() && Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_233 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_79169;
	}
	Global_79170++;
	iVar5 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_79172[1 /*14*/] = { func_416(iVar5, iParam1, iParam2, -1) };
		if (!func_415(iParam3))
		{
			Global_79170 = (Global_79170 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_79170 > 1)
		{
		}
		else if (BitTest(Global_79172[1 /*14*/].f_6, 4))
		{
			func_412(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		unk_0x445E7F949766A0C7(iParam0, 1);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_79215 };
		}
		else
		{
			uVar14 = { func_262(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_79172[1 /*14*/] = { func_416(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0xD1C578C204015E1F(iParam0, func_191(iVar0), Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4, unk_0xDAF263B0E792EAEC(iParam0, func_191(iVar0)));
					}
					else
					{
						unk_0xD1C578C204015E1F(iParam0, func_191(iVar0), Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_79172[1 /*14*/].f_6, 1))
					{
						func_412(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_79172[1 /*14*/] = { func_416(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_79172[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar15 = 9;
							if (iParam5 == 1)
							{
								uVar15 = { Global_79232 };
							}
							else
							{
								uVar15 = { func_257(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_79172[1 /*14*/] = { func_416(iVar5, 14, uVar15[iVar1], -1) };
								func_411(iParam0, Global_79172[1 /*14*/].f_12, Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4);
								if (BitTest(Global_79172[1 /*14*/].f_6, 1))
								{
									func_412(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0xD1C578C204015E1F(iParam0, func_191(iVar0), Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4, unk_0xDAF263B0E792EAEC(iParam0, func_191(iVar0)));
								}
								else
								{
									unk_0xD1C578C204015E1F(iParam0, func_191(iVar0), Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_280(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_79172[1 /*14*/].f_6, 1))
							{
								func_412(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_79172[1 /*14*/] = { func_416(iVar5, iVar0, func_409(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_79172[1 /*14*/].f_6, 3))
				{
					uVar16 = { func_262(iVar5, 0) };
					func_280(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0xD1C578C204015E1F(iParam0, 1, unk_0xC0120BBCC298EA2F(iParam0, 1), unk_0xD6AED6BFCC58AF7F(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = func_408();
			if (iVar17 != -1)
			{
				func_405(iVar17, 0, iParam10);
			}
			func_403(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { func_257(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_79172[1 /*14*/] = { func_416(iVar5, 14, uVar18[iVar1], -1) };
			func_411(iParam0, Global_79172[1 /*14*/].f_12, Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4);
			if (BitTest(Global_79172[1 /*14*/].f_6, 1))
			{
				func_412(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_79170 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_401(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_280(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_411(iParam0, Global_79172[1 /*14*/].f_12, Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4);
		if (BitTest(Global_79172[1 /*14*/].f_6, 1))
		{
			func_412(iVar5, iParam1, iParam2, 1);
		}
		if (Global_79172[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_79172[1 /*14*/].f_6, 6) && unk_0x304A39EB177D246B(Global_2883588, joaat("shrink_hair"), 1))
			{
			}
			else if (unk_0xCA362C769B0F4F0E(iParam0, 1, joaat("hair_shrink")))
			{
				func_280(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_79172[1 /*14*/] = { func_416(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_79172[1 /*14*/].f_12 == 0)
		{
			func_394(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_79170 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_401(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_280(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_401(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_280(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		if ((iParam1 == 4 || iParam1 == 11) || iParam1 == 8)
		{
			iVar19 = func_191(iParam1);
			if (unk_0xC0120BBCC298EA2F(iParam0, iVar19) != Global_79172[1 /*14*/].f_3 || unk_0xD6AED6BFCC58AF7F(iParam0, iVar19) != Global_79172[1 /*14*/].f_4)
			{
				iVar20 = unk_0x94B8A32AA940A6B5(iParam0, 8, unk_0xC0120BBCC298EA2F(iParam0, 8), unk_0xD6AED6BFCC58AF7F(iParam0, 8));
				iVar21 = unk_0x94B8A32AA940A6B5(iParam0, 7, unk_0xC0120BBCC298EA2F(iParam0, 7), unk_0xD6AED6BFCC58AF7F(iParam0, 7));
				iVar22 = unk_0x94B8A32AA940A6B5(iParam0, 4, unk_0xC0120BBCC298EA2F(iParam0, 4), unk_0xD6AED6BFCC58AF7F(iParam0, 4));
				iVar23 = unk_0x94B8A32AA940A6B5(iParam0, 6, unk_0xC0120BBCC298EA2F(iParam0, 6), unk_0xD6AED6BFCC58AF7F(iParam0, 6));
				iVar24 = unk_0x94B8A32AA940A6B5(iParam0, 1, unk_0xC0120BBCC298EA2F(iParam0, 1), unk_0xD6AED6BFCC58AF7F(iParam0, 1));
				iVar25 = unk_0x6B7AEB5F3D578298(iParam0, 0, unk_0xB204F40D393426B6(iParam0, 0, 1), unk_0x0DC23FA727759F9F(iParam0, 0));
				if (((iParam1 == 11 && unk_0x304A39EB177D246B(iVar21, 307252627, 0)) || (iParam1 == 8 && unk_0x304A39EB177D246B(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && unk_0x304A39EB177D246B(iVar21, -2095729091, 0)))
				{
					unk_0xD1C578C204015E1F(iParam0, 7, 0, 0, unk_0xDAF263B0E792EAEC(iParam0, 7));
				}
				if ((iParam1 == 11 && unk_0x304A39EB177D246B(iVar20, 307252627, 0)) || (iParam1 == 4 && unk_0x304A39EB177D246B(iVar20, -2095729091, 0)))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						unk_0xD1C578C204015E1F(iParam0, 8, 15, 0, unk_0xDAF263B0E792EAEC(iParam0, 8));
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						unk_0xD1C578C204015E1F(iParam0, 8, 2, 0, unk_0xDAF263B0E792EAEC(iParam0, 8));
					}
				}
				if (iParam1 == 11 && unk_0x304A39EB177D246B(iVar25, 307252627, 1))
				{
					unk_0x09397806857F5DFB(iParam0, 0, 1);
				}
				if (iParam1 == 11 && unk_0x304A39EB177D246B(iVar22, joaat("morph_suit"), 0))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						unk_0xD1C578C204015E1F(iParam0, 4, 5, 0, 0);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						unk_0xD1C578C204015E1F(iParam0, 4, 14, 9, 0);
					}
				}
				if (iParam1 == 11 && unk_0x304A39EB177D246B(iVar23, joaat("morph_suit"), 0))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						unk_0xD1C578C204015E1F(iParam0, 6, 0, 10, 0);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						unk_0xD1C578C204015E1F(iParam0, 6, 1, 0, 0);
					}
				}
				if (iParam1 == 11 && unk_0x304A39EB177D246B(iVar24, joaat("morph_suit"), 0))
				{
					unk_0xD1C578C204015E1F(iParam0, 1, 0, 0, 0);
				}
				if (iParam1 == 11 && unk_0x304A39EB177D246B(iVar25, joaat("morph_suit"), 1))
				{
					unk_0x09397806857F5DFB(iParam0, 0, 1);
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar26 = -1;
				if (BitTest(Global_79172[1 /*14*/].f_6, 6) && unk_0x304A39EB177D246B(Global_2883588, joaat("CREW_COL"), 11))
				{
					unk_0xA3C0950202881572(iParam0, Global_1576240, Global_1576241, Global_1576242, 0);
					unk_0xA3C0950202881572(iParam0, Global_1576240, Global_1576241, Global_1576242, 1);
					unk_0xA3C0950202881572(iParam0, Global_1576240, Global_1576241, Global_1576242, 2);
					unk_0xA3C0950202881572(iParam0, Global_1576240, Global_1576241, Global_1576242, 3);
				}
				iVar27 = func_247(iParam0, 11);
				iVar28 = func_247(iParam0, 8);
				iVar29 = func_247(iParam0, 4);
				if (unk_0xCA362C769B0F4F0E(iParam0, 8, joaat("over_jacket")))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar26 = func_251(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar26 = func_251(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x304A39EB177D246B(iVar26, joaat("silk_robe"), 0) || unk_0x304A39EB177D246B(iVar26, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar26, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar26, -826135203, 0)) || unk_0x304A39EB177D246B(iVar26, joaat("morph_suit"), 0)) || unk_0x304A39EB177D246B(iVar26, joaat("gorka_suit"), 0)) || unk_0x304A39EB177D246B(iVar26, joaat("cat_suit"), 0))
					{
					}
					else
					{
						iVar8 = func_247(iParam0, 8);
					}
				}
				iVar30 = unk_0x94B8A32AA940A6B5(iParam0, 3, unk_0xC0120BBCC298EA2F(iParam0, 3), 0);
				if (unk_0x304A39EB177D246B(iVar30, joaat("gloves"), 0))
				{
					iVar31 = func_393(iVar5, iVar28, iVar27, iVar29);
					if (iVar31 == -99)
					{
						iVar31 = func_401(iParam0, iVar5, 11, iVar27, 3, 0);
					}
					switch (iVar30)
					{
						case joaat("dlc_mp_val_f_uppr0_0"):
						case joaat("dlc_mp_val_f_uppr0_1"):
						case joaat("dlc_mp_val_f_uppr0_2"):
						case joaat("dlc_mp_val_f_uppr0_3"):
						case joaat("dlc_mp_val_f_uppr0_4"):
						case joaat("dlc_mp_val_f_uppr0_5"):
							iVar31 = 11;
							iVar26 = func_251(iVar5, iParam2, 11, 4);
							if (!unk_0x304A39EB177D246B(iVar26, joaat("dress"), 0))
							{
								iVar31 = -99;
							}
							break;
					}
					if (iVar31 != -99)
					{
						iVar32 = 0;
						while (iVar32 < 18)
						{
							if (func_392(iVar5, iVar31, iVar32) == iVar30)
							{
								iVar10 = iVar32;
								iVar11 = unk_0xD6AED6BFCC58AF7F(iParam0, 3);
							}
							iVar32++;
						}
					}
				}
				iVar26 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x304A39EB177D246B(func_251(iVar5, iParam2, 11, 4), joaat("vest"), 0))
				{
					iVar27 = func_247(iParam0, 11);
					if (iVar27 >= 256)
					{
						iVar26 = func_251(iVar5, iVar27, 11, 4);
					}
					if (iVar27 >= 256 && unk_0x304A39EB177D246B(iVar26, joaat("vest_shirt"), 0))
					{
						iVar33 = func_390(iVar5, iVar27, iParam2, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
						if (iVar33 != -99)
						{
							func_280(iParam0, 8, iVar33, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_79172[1 /*14*/] = { func_416(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_389(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar27 >= 237)
						{
							iVar26 = func_251(iVar5, iVar27, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar27 >= 256)
						{
							iVar26 = func_251(iVar5, iVar27, 11, 4);
						}
					}
					iVar8 = -99;
					if (!func_389(iVar5, iVar27, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar27 >= 256) && (unk_0x304A39EB177D246B(iVar26, joaat("vest"), 0) || unk_0x304A39EB177D246B(iVar26, joaat("vest_shirt"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar27 >= 256) && ((((((((unk_0x304A39EB177D246B(iVar26, joaat("heist_draw_5"), 0) || unk_0x304A39EB177D246B(iVar26, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar26, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar26, joaat("heist_draw_11"), 0)) || unk_0x304A39EB177D246B(iVar26, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar26, -872449705, 0)) || unk_0x304A39EB177D246B(iVar26, joaat("apart_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar26, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar26, joaat("stunt_draw_9"), 0)))
						{
						}
						else
						{
							iVar34 = func_388(iParam0, iParam2);
							iVar35 = func_390(iVar5, iVar27, iParam2, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
							if (iVar35 != -99)
							{
								func_280(iParam0, 8, iVar35, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_79172[1 /*14*/] = { func_416(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar34 != -99 && (iParam0 == unk_0x4A8C381C258A124D() || iParam0 == Global_4540575))
							{
								func_280(iParam0, 8, iVar34, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_79172[1 /*14*/] = { func_416(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar36 = func_387(iVar5, 11, -1);
									Global_79172[1 /*14*/] = { func_416(iVar5, 11, iVar36, -1) };
									iVar35 = func_390(iVar5, iVar36, iParam2, Global_79172[1 /*14*/].f_4);
									iVar37 = func_251(iVar5, iParam2, 11, 3);
									if ((iVar35 == -99 || unk_0x304A39EB177D246B(iVar37, joaat("biker_vest"), 0)) || unk_0x304A39EB177D246B(iVar37, joaat("open_short"), 0))
									{
										iVar35 = 240;
									}
									else if (unk_0x304A39EB177D246B(iVar37, -1099375697, 0))
									{
										iVar35 = 80;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x304A39EB177D246B(func_251(iVar5, iParam2, 11, 4), joaat("biker_vest"), 0))
									{
										iVar35 = 120;
									}
									else
									{
										iVar35 = 48;
									}
								}
								func_280(iParam0, 8, iVar35, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_79172[1 /*14*/] = { func_416(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_79172[1 /*14*/] = { func_416(iVar5, 11, iVar27, -1) };
						iVar38 = Global_79172[1 /*14*/].f_3;
						Global_79172[1 /*14*/] = { func_416(iVar5, 11, iParam2, -1) };
						iVar39 = Global_79172[1 /*14*/].f_3;
						if (iVar38 != iVar39)
						{
							iVar41 = func_388(iParam0, iParam2);
							Global_79172[1 /*14*/] = { func_416(iVar5, 8, iVar28, -1) };
							iVar40 = Global_79172[1 /*14*/].f_4;
							iVar42 = func_386(iVar5, iVar28, iVar40);
							if (iVar41 != -99 && (iParam0 == unk_0x4A8C381C258A124D() || iParam0 == Global_4540575))
							{
								iVar43 = iVar41;
							}
							else if (iVar42 == -99)
							{
								iVar43 = iVar28;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar44 = func_251(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_385(iVar44) == 6) || unk_0x304A39EB177D246B(iVar44, joaat("biker_vest"), 0))
									{
										iVar42 = func_387(iVar5, 11, -1);
										Global_79172[1 /*14*/] = { func_416(iVar5, 11, iVar42, -1) };
										iVar43 = func_390(iVar5, iVar42, iParam2, Global_79172[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar28 == 32 || iVar28 == 33) || iVar28 == 119))
								{
									if (!unk_0x304A39EB177D246B(func_251(iVar5, iParam2, 11, 4), joaat("jacket_only"), 0))
									{
										iVar42 = func_387(iVar5, 11, -1);
										Global_79172[1 /*14*/] = { func_416(iVar5, 11, iVar42, -1) };
										iVar43 = func_390(iVar5, iVar42, iParam2, Global_79172[1 /*14*/].f_4);
									}
								}
								iVar45 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar45 = func_251(iVar5, iVar28, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar45 = func_251(iVar5, iVar28, 8, 4);
								}
								if (unk_0x304A39EB177D246B(iVar45, joaat("overcoat_accs"), 0))
								{
									iVar42 = func_387(iVar5, 11, -1);
									Global_79172[1 /*14*/] = { func_416(iVar5, 11, iVar42, -1) };
									iVar43 = func_390(iVar5, iVar42, iParam2, Global_79172[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar43 = func_390(iVar5, iVar42, iParam2, iVar40);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x304A39EB177D246B(func_251(iVar5, iParam2, 11, 3), joaat("low2_open_check"), 0))
									{
										if (!func_384(iVar5, func_247(iParam0, 4), iVar42))
										{
											iVar43 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x304A39EB177D246B(func_251(iVar5, iParam2, 11, 4), joaat("low2_open_check"), 0))
									{
										if (!func_384(iVar5, func_247(iParam0, 4), iVar42))
										{
											iVar43 = 48;
										}
									}
								}
							}
							if (iVar43 != -99)
							{
								func_280(iParam0, 8, iVar43, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar42 = func_387(iVar5, 11, -1);
								Global_79172[1 /*14*/] = { func_416(iVar5, 11, iVar42, -1) };
								iVar43 = func_390(iVar5, iVar42, iParam2, Global_79172[1 /*14*/].f_4);
								if (iVar43 == -99)
								{
									iVar43 = 240;
								}
								func_280(iParam0, 8, iVar43, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_280(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_79172[1 /*14*/] = { func_416(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_381(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0xD1C578C204015E1F(iParam0, 10, 0, 0, unk_0xDAF263B0E792EAEC(iParam0, 10));
				}
			}
			func_403(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_393(iVar5, func_409(iParam0, 8, -1), iParam2, func_409(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_50(2153, iParam10);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_50(2160, iParam10);
				}
				unk_0x894EE2587C8D8D1E(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar46 = -99;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar46 = func_451(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar46 = func_449(iParam2);
					}
					if (iVar46 != -99 && iParam2 != iVar46)
					{
						iParam2 = iVar46;
					}
				}
				func_325(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar47 = unk_0x94B8A32AA940A6B5(iParam0, 3, unk_0xC0120BBCC298EA2F(iParam0, 3), 0);
			if (unk_0x304A39EB177D246B(iVar47, joaat("gloves"), 0))
			{
				iVar48 = func_247(iParam0, 11);
				iVar49 = func_247(iParam0, 4);
				iVar50 = func_393(iVar5, iParam2, iVar48, iVar49);
				if (iVar50 == -99)
				{
					iVar50 = func_401(iParam0, iVar5, 11, iVar48, 3, 0);
				}
				switch (iVar47)
				{
					case joaat("dlc_mp_val_f_uppr0_0"):
					case joaat("dlc_mp_val_f_uppr0_1"):
					case joaat("dlc_mp_val_f_uppr0_2"):
					case joaat("dlc_mp_val_f_uppr0_3"):
					case joaat("dlc_mp_val_f_uppr0_4"):
					case joaat("dlc_mp_val_f_uppr0_5"):
						iVar50 = 11;
						iVar51 = func_251(iVar5, iParam2, 11, 4);
						if (!unk_0x304A39EB177D246B(iVar51, joaat("dress"), 0))
						{
							iVar50 = -99;
						}
						break;
				}
				if (iVar50 != -99)
				{
					iVar52 = 0;
					while (iVar52 < 18)
					{
						if (func_392(iVar5, iVar50, iVar52) == iVar47)
						{
							iVar10 = iVar52;
							iVar11 = unk_0xD6AED6BFCC58AF7F(iParam0, 3);
						}
						iVar52++;
					}
				}
			}
			func_403(iParam0, iParam1, iParam2, iParam6, 0);
			iVar53 = func_247(iParam0, 11);
			if (func_389(iVar5, iVar53, -1))
			{
				iVar54 = func_386(iVar5, iParam2, Global_79172[1 /*14*/].f_4);
				func_381(iVar5, iVar54);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_393(iVar5, iParam2, func_247(iParam0, 11), func_247(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar55 = func_247(iParam0, 7);
				if (!func_321(iVar5, iVar55, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0xD1C578C204015E1F(iParam0, func_191(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x304A39EB177D246B(Global_2883588, joaat("shrink_head"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x304A39EB177D246B(Global_2883588, joaat("shrink_head"), 0)))
			{
				iVar56 = func_50(2100, iParam10);
				iVar57 = func_50(2101, iParam10);
				iVar58 = func_50(2102, iParam10);
				uVar59 = func_320(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x0A5987DCA39E8BE5(iParam0, 0, 0, 0, iVar56, iVar57, iVar58, 0f, uVar59, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x0A5987DCA39E8BE5(iParam0, 21, 0, 0, iVar56, iVar57, iVar58, 0f, fVar59, 0f, false);
				}
				iVar60 = 0;
				while (iVar60 < 20)
				{
					unk_0xAAF9B08B469F707F(iParam0, iVar60, 0f);
					iVar60++;
				}
			}
			else
			{
				func_304(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar61 = func_247(iParam0, 11);
			iVar62 = func_247(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(func_251(iVar5, iVar61, 11, 3), joaat("low2_open_check"), 0))
				{
					if (!func_384(iVar5, iParam2, func_386(iVar5, iVar62, 0)))
					{
						func_280(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_79172[1 /*14*/] = { func_416(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(func_251(iVar5, iVar61, 11, 4), joaat("low2_open_check"), 0))
				{
					if (!func_384(iVar5, iParam2, func_386(iVar5, iVar62, 0)))
					{
						func_280(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_79172[1 /*14*/] = { func_416(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_393(iVar5, func_247(iParam0, 8), func_247(iParam0, 11), iParam2);
			}
			iVar63 = unk_0x94B8A32AA940A6B5(iParam0, 3, unk_0xC0120BBCC298EA2F(iParam0, 3), 0);
			if (unk_0x304A39EB177D246B(iVar63, joaat("gloves"), 0))
			{
				iVar64 = func_393(iVar5, iVar62, iVar61, iParam2);
				if (iVar64 == -99)
				{
					iVar64 = func_401(iParam0, iVar5, 11, iVar61, 3, 0);
				}
				switch (iVar63)
				{
					case joaat("dlc_mp_val_f_uppr0_0"):
					case joaat("dlc_mp_val_f_uppr0_1"):
					case joaat("dlc_mp_val_f_uppr0_2"):
					case joaat("dlc_mp_val_f_uppr0_3"):
					case joaat("dlc_mp_val_f_uppr0_4"):
					case joaat("dlc_mp_val_f_uppr0_5"):
						iVar64 = 11;
						iVar65 = func_251(iVar5, iParam2, 11, 4);
						if (!unk_0x304A39EB177D246B(iVar65, joaat("dress"), 0))
						{
							iVar64 = -99;
						}
						break;
				}
				if (iVar64 != -99)
				{
					iVar66 = 0;
					while (iVar66 < 18)
					{
						if (func_392(iVar5, iVar64, iVar66) == iVar63)
						{
							iVar10 = iVar66;
							iVar11 = unk_0xD6AED6BFCC58AF7F(iParam0, 3);
						}
						iVar66++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0xD1C578C204015E1F(iParam0, func_191(iParam1), Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4, unk_0xDAF263B0E792EAEC(iParam0, func_191(iParam1)));
		}
		else
		{
			unk_0xD1C578C204015E1F(iParam0, func_191(iParam1), Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_79170 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_401(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_280(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("dlc_mp_val_f_uppr0_0"):
								case joaat("dlc_mp_val_f_uppr0_1"):
								case joaat("dlc_mp_val_f_uppr0_2"):
								case joaat("dlc_mp_val_f_uppr0_3"):
								case joaat("dlc_mp_val_f_uppr0_4"):
								case joaat("dlc_mp_val_f_uppr0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_393(iVar5, iVar3, func_247(iParam0, 11), func_247(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_401(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_280(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_303(iParam0))
				{
					iVar67 = func_301(iParam0, iVar5, iParam1, iParam2);
					if (iVar67 > 0)
					{
						iVar67 = (iVar67 + unk_0xD6AED6BFCC58AF7F(iParam0, 9));
						if (!func_300(iParam0, 9, iVar67))
						{
							func_280(iParam0, 9, iVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_280(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (unk_0xCA362C769B0F4F0E(iParam0, 8, joaat("over_jacket")))
					{
						func_280(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar68 = func_50(2042, -1);
				if (unk_0xC0120BBCC298EA2F(iParam0, 5) != 0)
				{
					unk_0xD1C578C204015E1F(iParam0, 5, func_294(iParam0, iVar68), func_293(iParam0, iVar68), func_292(iParam0, iVar68));
				}
				if (iParam0 == unk_0x4A8C381C258A124D())
				{
					unk_0x740F6E63EE1C1D43(unk_0x259BE71D8A81D4FA(), 5, func_294(unk_0x4A8C381C258A124D(), iVar68), func_293(unk_0x4A8C381C258A124D(), iVar68), 0);
					unk_0xC02C4AB8A5C744D7(unk_0x259BE71D8A81D4FA(), func_292(unk_0x4A8C381C258A124D(), iVar68));
					func_290(unk_0x259BE71D8A81D4FA(), iVar68);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x304A39EB177D246B(Global_2883588, joaat("big_chain"), 0))
					{
						func_280(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar69 = func_409(iParam0, 4, -1);
					iVar70 = iParam2;
				}
				else
				{
					iVar69 = iParam2;
					iVar70 = func_409(iParam0, 11, -1);
				}
				if (func_289(iVar5, 11, iVar70, -1))
				{
					if (!func_288(iVar5, 4, iVar69, -1))
					{
						if (func_287(iVar5, 4, iVar69, &uVar71))
						{
							func_280(iParam0, 4, uVar71, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_288(iVar5, 4, iVar69, -1))
				{
					if (func_286(iVar5, 4, iVar69, &uVar71))
					{
						func_280(iParam0, 4, uVar71, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					else
					{
						func_280(iParam0, 4, 233, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar72 = unk_0xC0120BBCC298EA2F(iParam0, 6);
				iVar73 = unk_0xD6AED6BFCC58AF7F(iParam0, 6);
				iVar74 = unk_0x94B8A32AA940A6B5(iParam0, 6, iVar72, iVar73);
				iVar75 = unk_0xC0120BBCC298EA2F(iParam0, 4);
				iVar76 = unk_0xD6AED6BFCC58AF7F(iParam0, 4);
				iVar77 = unk_0x94B8A32AA940A6B5(iParam0, 4, iVar75, iVar76);
				iVar78 = func_247(iParam0, 4);
				iVar79 = func_247(iParam0, 6);
				if (func_285(iVar5, iVar74))
				{
					if (unk_0x304A39EB177D246B(iVar74, joaat("alt_feet"), 0) != func_284(iVar5, iVar78, iVar74))
					{
						iVar80 = unk_0x5A3F0A3B7ECCBD32(iVar74);
						iVar81 = 0;
						while (iVar81 < iVar80)
						{
							unk_0x0249B53AB91BF9D0(iVar74, iVar81, &iVar82, &uVar83, &iVar84);
							if (iVar84 == 6)
							{
								if (iVar82 != 0 && iVar82 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar79 = func_259(iVar5, iVar82, 6, 3);
										iVar74 = iVar82;
										func_280(iParam0, 6, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar79 = func_259(iVar5, iVar82, 6, 4);
										iVar74 = iVar82;
										func_280(iParam0, 6, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar81 = iVar80 + 1;
								}
							}
							iVar81++;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar77, joaat("alt_legs"), 0) != func_283(iVar5, iVar79, iVar77))
					{
						iVar80 = unk_0x5A3F0A3B7ECCBD32(iVar77);
						iVar81 = 0;
						while (iVar81 < iVar80)
						{
							unk_0x0249B53AB91BF9D0(iVar77, iVar81, &iVar82, &uVar83, &iVar84);
							if (iVar84 == 4)
							{
								if (iVar82 != 0 && iVar82 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar78 = func_259(iVar5, iVar82, 4, 3);
										iVar77 = iVar82;
										func_280(iParam0, 4, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar78 = func_259(iVar5, iVar82, 4, 4);
										iVar77 = iVar82;
										func_280(iParam0, 4, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar81 = iVar80 + 1;
								}
							}
							iVar81++;
						}
					}
				}
				if (func_285(iVar5, iVar77))
				{
					if (unk_0x304A39EB177D246B(iVar77, joaat("alt_legs"), 0) != func_283(iVar5, iVar79, iVar77))
					{
						iVar80 = unk_0x5A3F0A3B7ECCBD32(iVar77);
						iVar81 = 0;
						while (iVar81 < iVar80)
						{
							unk_0x0249B53AB91BF9D0(iVar77, iVar81, &iVar82, &uVar83, &iVar84);
							if (iVar84 == 4)
							{
								if (iVar82 != 0 && iVar82 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar78 = func_259(iVar5, iVar82, 4, 3);
										iVar77 = iVar82;
										func_280(iParam0, 4, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar78 = func_259(iVar5, iVar82, 4, 4);
										iVar77 = iVar82;
										func_280(iParam0, 4, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar81 = iVar80 + 1;
								}
							}
							iVar81++;
						}
					}
					else if (unk_0x304A39EB177D246B(iVar74, joaat("alt_feet"), 0) != func_284(iVar5, iVar78, iVar74))
					{
						iVar80 = unk_0x5A3F0A3B7ECCBD32(iVar74);
						iVar81 = 0;
						while (iVar81 < iVar80)
						{
							unk_0x0249B53AB91BF9D0(iVar74, iVar81, &iVar82, &uVar83, &iVar84);
							if (iVar84 == 6)
							{
								if (iVar82 != 0 && iVar82 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar79 = func_259(iVar5, iVar82, 6, 3);
										iVar74 = iVar82;
										func_280(iParam0, 6, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar79 = func_259(iVar5, iVar82, 6, 4);
										iVar74 = iVar82;
										func_280(iParam0, 6, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar81 = iVar80 + 1;
								}
							}
							iVar81++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_394(iParam0);
				iVar85 = unk_0xC0120BBCC298EA2F(iParam0, 1);
				iVar86 = unk_0xD6AED6BFCC58AF7F(iParam0, 1);
				iVar87 = unk_0x94B8A32AA940A6B5(iParam0, 1, iVar85, iVar86);
				if (unk_0x304A39EB177D246B(iVar87, joaat("force_prop"), 0))
				{
					iVar3 = func_401(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_280(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_401(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_280(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_281(iParam0, &uVar4))
		{
			func_280(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_280(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_280(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_280(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar88 = func_392(iVar5, func_409(iParam0, 3, -1), iVar10);
		if (iVar88 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_259(iVar5, iVar88, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar9 = func_259(iVar5, iVar88, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_280(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_79170 = (Global_79170 - 1);
	return 1;
}

int func_281(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_409(unk_0x4A8C381C258A124D(), 2, -1);
	if (func_50(754, Global_79169) != -99 && func_272())
	{
		if (func_282() == 4)
		{
			return 1;
		}
		if (func_50(754, Global_79169) == 0 && func_50(755, Global_79169) == 0)
		{
			if (func_54(161, Global_79169))
			{
				if (func_50(2053, Global_79169) == 0)
				{
					return 0;
				}
			}
			else if (func_50(753, Global_79169) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_50(754, Global_79169);
		iVar1 = func_50(755, Global_79169);
		if (!func_300(iParam0, iVar1, iVar0))
		{
			if (func_54(161, Global_79169))
			{
				*uParam1 = func_50(2053, Global_79169);
			}
			else
			{
				*uParam1 = func_50(753, Global_79169);
			}
			func_453(754, -99, Global_79169, 1);
			func_453(755, 2, Global_79169, 1);
			return 1;
		}
	}
	return 0;
}

int func_282()
{
	return Global_1575010;
}

int func_283(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_251(iParam0, iParam1, 6, 3);
			}
			if ((unk_0x304A39EB177D246B(iParam2, joaat("gun_draw_0"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("gun_draw_1"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("gorka_suit"), 0))
			{
				if ((unk_0x304A39EB177D246B(iVar0, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_1"), 0))
				{
					return 0;
				}
			}
			if (((unk_0x304A39EB177D246B(iParam2, joaat("biker_draw_0"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("biker_draw_1"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("biker_draw_3"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar0, -2005216901, 0))
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iParam2, joaat("has_alt_version"), 0))
			{
				if ((((((((((unk_0x304A39EB177D246B(iVar0, joaat("pilot_suit"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("cowboy_boots"), 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_251(iParam0, iParam1, 6, 4);
			}
			if ((unk_0x304A39EB177D246B(iParam2, joaat("gun_draw_0"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("gun_draw_1"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("gorka_suit"), 0))
			{
				if ((unk_0x304A39EB177D246B(iVar0, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_1"), 0))
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iParam2, joaat("has_alt_version"), 0))
			{
				if (((((((((unk_0x304A39EB177D246B(iVar0, joaat("pilot_suit"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_8"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_284(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_251(iParam0, iParam1, 4, 3);
				iVar1 = func_385(iVar0);
			}
			if (unk_0x304A39EB177D246B(iParam2, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("has_alt_version"), 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x304A39EB177D246B(iVar0, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("skinny"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("gorka_suit"), 0)) || unk_0x304A39EB177D246B(iVar0, -1854729816, 0))
				{
					iVar2 = 0;
				}
				if ((unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_0"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("gorka_suit"), 0))
				{
					if ((unk_0x304A39EB177D246B(iParam2, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("biker_draw_1"), 0))
					{
						iVar2 = 1;
					}
				}
				if (((unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_0"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_3"), 0))
				{
					if (unk_0x304A39EB177D246B(iParam2, -2005216901, 0))
					{
						iVar2 = 1;
					}
				}
				if (((unk_0x304A39EB177D246B(iParam2, joaat("smug_draw_0"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("smug_draw_1"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("battle_draw_1"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("battle_draw_2"), 0))
				{
					if ((((((unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_0"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("gorka_suit"), 0))
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_251(iParam0, iParam1, 4, 4);
				iVar1 = func_385(iVar0);
			}
			if (unk_0x304A39EB177D246B(iParam2, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("has_alt_version"), 0))
			{
				if ((unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_0"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("gun_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("gorka_suit"), 0))
				{
					if ((((((unk_0x304A39EB177D246B(iParam2, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iParam2, joaat("biker_draw_5"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("biker_draw_6"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("smug_draw_0"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("smug_draw_1"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iParam2, joaat("biker_draw_1"), 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("heist_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, -430330349, 0)) || unk_0x304A39EB177D246B(iVar0, -1103045158, 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("dungarees"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("h3_draw_5"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_285(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (unk_0x304A39EB177D246B(iParam1, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iParam1, joaat("has_alt_version"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (unk_0x304A39EB177D246B(iParam1, joaat("cowboy_boots"), 0) || unk_0x304A39EB177D246B(iParam1, joaat("has_alt_version"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_286(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_251(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x5A3F0A3B7ECCBD32(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0249B53AB91BF9D0(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0x304A39EB177D246B(iVar3, joaat("dress_legs"), 0))
										{
											*uParam3 = func_259(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_287(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_251(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x5A3F0A3B7ECCBD32(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0249B53AB91BF9D0(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0x304A39EB177D246B(iVar3, joaat("dress_legs"), 0))
										{
											*uParam3 = func_259(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_288(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_251(iParam0, iParam2, 4, 4);
						}
						if (unk_0x304A39EB177D246B(iParam3, joaat("dress_legs"), 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_289(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_251(iParam0, iParam2, 11, 4);
						}
						return unk_0x304A39EB177D246B(iParam3, joaat("dress"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_290(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_291(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		unk_0xD8FE716A11BE669A(iParam0, iVar0);
	}
	else
	{
		unk_0xBDAA517C3D10DB80(iParam0);
	}
}

int func_291(int iParam0)
{
	if (iParam0 > 66)
	{
		return joaat("reh_p_para_bag_reh_s_01a");
	}
	else if (iParam0 > 63)
	{
		return joaat("p_para_bag_tr_s_01a");
	}
	else if (iParam0 > 61)
	{
		return joaat("vw_p_para_bag_vine_s");
	}
	else if (iParam0 > 51)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	else if (iParam0 > 46)
	{
		return joaat("p_para_bag_xmas_s");
	}
	else if (iParam0 > 26)
	{
		return joaat("lts_p_para_bag_lts_s");
	}
	else if (iParam0 > 0)
	{
		return joaat("lts_p_para_bag_pilot2_s");
	}
	return joaat("p_parachute_s");
}

int func_292(int iParam0, int iParam1)
{
	return 0;
}

int func_293(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
		
		case 67:
			return 0;
			break;
	}
	return 0;
}

var func_294(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xC0120BBCC298EA2F(iParam0, 8);
	iVar1 = unk_0xC0120BBCC298EA2F(iParam0, 11);
	iVar2 = unk_0xC0120BBCC298EA2F(iParam0, 4);
	bVar3 = unk_0xC0120BBCC298EA2F(iParam0, 9) != false;
	iVar4 = unk_0x94B8A32AA940A6B5(iParam0, 8, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 8));
	iVar5 = unk_0x94B8A32AA940A6B5(iParam0, 11, iVar1, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
	iVar6 = unk_0x94B8A32AA940A6B5(iParam0, 4, iVar2, unk_0xD6AED6BFCC58AF7F(iParam0, 4));
	if (((((((bVar3 != Global_79361 || iParam1 != Global_79362) || iVar4 != Global_79363) || iVar5 != Global_79364) || iVar6 != Global_79365) || iVar0 != Global_79366) || iVar1 != Global_79367) || iVar2 != Global_79368)
	{
		Global_79361 = bVar3;
		Global_79362 = iParam1;
		Global_79363 = iVar4;
		Global_79364 = iVar5;
		Global_79365 = iVar6;
		Global_79366 = iVar0;
		Global_79367 = iVar1;
		Global_79368 = iVar2;
		Global_79369 = func_295(iParam0, iParam1);
	}
	return Global_79369;
}

int func_295(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0xC0120BBCC298EA2F(iParam0, 11);
	if (unk_0xC0120BBCC298EA2F(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar3 = unk_0x94B8A32AA940A6B5(iParam0, 8, unk_0xC0120BBCC298EA2F(iParam0, 8), unk_0xD6AED6BFCC58AF7F(iParam0, 8));
	if (unk_0x304A39EB177D246B(iVar3, joaat("over_jacket"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_2"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_1"), 8))
			{
				return func_299(iParam0, iParam1, 1);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_3"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_0"), 8))
			{
				return func_299(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_299(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_299(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_2"), 8))
			{
				return func_299(iParam0, iParam1, 6);
			}
			if ((unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_3"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_0"), 8)) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_1"), 8))
			{
				return func_299(iParam0, iParam1, 7);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_299(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_299(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		return func_299(iParam0, iParam1, 9);
	}
	if (func_298(iParam0))
	{
		if (bVar1)
		{
			return func_299(iParam0, iParam1, 7);
		}
		else
		{
			return func_299(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0x94B8A32AA940A6B5(iParam0, 11, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
		if (unk_0x304A39EB177D246B(iVar4, 98087521, 0))
		{
			return func_299(iParam0, iParam1, 0);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -135391604, 0))
		{
			return func_299(iParam0, iParam1, 1);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 1398721900, 0))
		{
			return func_299(iParam0, iParam1, 2);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 1030529416, 0))
		{
			return func_299(iParam0, iParam1, 3);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 873008833, 0))
		{
			return func_299(iParam0, iParam1, 4);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1646534043, 0))
		{
			return func_299(iParam0, iParam1, 5);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1868675094, 0))
		{
			return func_299(iParam0, iParam1, 6);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1500122155, 0))
		{
			return func_299(iParam0, iParam1, 7);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1741007074, 0))
		{
			return func_299(iParam0, iParam1, 8);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -226291902, 0))
		{
			return func_299(iParam0, iParam1, 9);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 607416996, 0))
		{
			return func_299(iParam0, iParam1, 10);
		}
		if (unk_0x304A39EB177D246B(iVar4, joaat("hipster_dress"), 0))
		{
			if (bVar1)
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -405912369, 0))
		{
			return func_299(iParam0, iParam1, 1);
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("dress"), 0))
		{
			if (bVar1)
			{
				return func_299(iParam0, iParam1, 5);
			}
			else
			{
				return func_299(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0))
		{
			return func_299(iParam0, iParam1, 8);
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("combat_gear"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("hooded_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_33"), 0))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_30"), 0))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_3"), 0))
		{
			iVar5 = func_297(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_299(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_299(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_385(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_299(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_385(iVar4);
						break;
					}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_bomb"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_4"), 0))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else
			{
				return func_299(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("heist_gear"), 0))
		{
			iVar6 = func_296(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_299(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_299(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_299(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_299(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_299(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_299(iParam0, iParam1, 9);
					}
					else
					{
						return func_299(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_299(iParam0, iParam1, 9);
					}
					else
					{
						return func_299(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_299(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_385(iVar4);
					break;
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("xmas2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 1);
			}
			else
			{
				return func_299(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else
			{
				return func_299(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 1);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 8);
			}
			else
			{
				return func_299(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_7"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_8"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(iVar4, joaat("air_draw_3"), 0))
				{
					return func_299(iParam0, iParam1, 10);
				}
				else
				{
					return func_299(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 1);
			}
		}
		else if ((unk_0x304A39EB177D246B(iVar4, -1086258388, 0) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_sweat"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_sweat"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 6);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else
			{
				return func_299(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 9);
				}
				else
				{
					return func_299(iParam0, iParam1, 1);
				}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 5);
				}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_299(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_299(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_299(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 2);
				}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_299(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else
			{
				return func_299(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else
			{
				return func_299(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_299(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("smug_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("air_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("assault_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 0);
			}
			else
			{
				return func_299(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_299(iParam0, iParam1, 10);
				}
				else
				{
					return func_299(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 1);
			}
			else
			{
				return func_299(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 3);
			}
			else
			{
				return func_299(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 1);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 9);
			}
			else
			{
				return func_299(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 10);
			}
			else
			{
				return func_299(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("vest_shirt"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("tails_jacket"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_299(iParam0, iParam1, 7);
			}
			else
			{
				return func_299(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("smoking_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_299(iParam0, iParam1, 2);
			}
			else
			{
				return func_299(iParam0, iParam1, 7);
			}
		}
		else if ((unk_0x304A39EB177D246B(iVar4, joaat("silk_pyjamas"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar4, -826135203, 0))
		{
			return func_299(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_385(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 6);
				}
				else
				{
					return func_299(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 2);
				}
				else
				{
					return func_299(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 2);
				}
				else
				{
					return func_299(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 2);
				}
				else
				{
					return func_299(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 2);
				}
				else
				{
					return func_299(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 6);
				}
				else
				{
					return func_299(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 5);
				}
				else
				{
					return func_299(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 6);
				}
				else
				{
					return func_299(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 3);
				}
				else
				{
					return func_299(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 5);
				}
				else
				{
					return func_299(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 6);
				}
				else
				{
					return func_299(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 6);
				}
				else
				{
					return func_299(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 6);
				}
				else
				{
					return func_299(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_299(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 6);
				}
				else
				{
					return func_299(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 7);
				}
				else
				{
					return func_299(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_299(iParam0, iParam1, 1);
				}
				else
				{
					return func_299(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_299(iParam0, iParam1, 0);
	return 0;
}

int func_296(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("heist_draw_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_297(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("luxe_draw_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_298(int iParam0)
{
	if (unk_0xCA362C769B0F4F0E(iParam0, 4, joaat("dungarees")))
	{
		return 1;
	}
	return 0;
}

int func_299(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 19;
					break;
				
				case 9:
					return 48;
					break;
				
				case 10:
					return 62;
					break;
			}
			break;
		
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
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 13;
					break;
				
				case 4:
					return 14;
					break;
				
				case 5:
					return 15;
					break;
				
				case 6:
					return 16;
					break;
				
				case 7:
					return 17;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 49;
					break;
				
				case 10:
					return 64;
					break;
			}
			break;
		
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
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				
				case 1:
					return 22;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 24;
					break;
				
				case 4:
					return 25;
					break;
				
				case 5:
					return 26;
					break;
				
				case 6:
					return 27;
					break;
				
				case 7:
					return 28;
					break;
				
				case 8:
					return 29;
					break;
				
				case 9:
					return 50;
					break;
				
				case 10:
					return 65;
					break;
			}
			break;
		
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				
				case 1:
					return 32;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 39;
					break;
				
				case 9:
					return 51;
					break;
				
				case 10:
					return 66;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				
				case 1:
					return 53;
					break;
				
				case 2:
					return 54;
					break;
				
				case 3:
					return 55;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 57;
					break;
				
				case 6:
					return 58;
					break;
				
				case 7:
					return 59;
					break;
				
				case 8:
					return 60;
					break;
				
				case 9:
					return 61;
					break;
				
				case 10:
					return 69;
					break;
			}
			break;
		
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				
				case 1:
					return 71;
					break;
				
				case 2:
					return 72;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 75;
					break;
				
				case 6:
					return 76;
					break;
				
				case 7:
					return 77;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 80;
					break;
			}
			break;
		
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				
				case 1:
					return 90;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 92;
					break;
				
				case 4:
					return 93;
					break;
				
				case 5:
					return 94;
					break;
				
				case 6:
					return 95;
					break;
				
				case 7:
					return 96;
					break;
				
				case 8:
					return 97;
					break;
				
				case 9:
					return 98;
					break;
				
				case 10:
					return 99;
					break;
			}
			break;
		
		case 67:
			switch (iParam2)
			{
				case 0:
					return 100;
					break;
				
				case 1:
					return 101;
					break;
				
				case 2:
					return 102;
					break;
				
				case 3:
					return 103;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 105;
					break;
				
				case 6:
					return 106;
					break;
				
				case 7:
					return 107;
					break;
				
				case 8:
					return 108;
					break;
				
				case 9:
					return 109;
					break;
				
				case 10:
					return 110;
					break;
			}
			break;
	}
	return 0;
}

int func_300(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	Global_79172[1 /*14*/] = { func_416(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_79172[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_262(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_300(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_257(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_300(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_79172[2 /*14*/] = { func_416(iVar0, 14, iVar6, -1) };
									if (Global_79172[2 /*14*/].f_12 == iVar5)
									{
										if (func_300(iParam0, 14, iVar6))
										{
											if (!func_249(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_79172[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_247(iParam0, iVar4);
						Global_79172[2 /*14*/] = { func_416(iVar0, iVar4, iVar1, -1) };
						if (!func_249(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_79172[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (func_50(1759, Global_79169) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_257(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_300(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xB204F40D393426B6(iParam0, Global_79172[1 /*14*/].f_12, 1) == Global_79172[1 /*14*/].f_3 && (unk_0x0DC23FA727759F9F(iParam0, Global_79172[1 /*14*/].f_12) == Global_79172[1 /*14*/].f_4 || Global_79172[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_79172[1 /*14*/].f_12 == 0 && BitTest(Global_79172[1 /*14*/].f_6, 6)) && unk_0x304A39EB177D246B(Global_2883588, joaat("helmet"), 1)) && unk_0xCD6EB4A3CCA20602(Global_2883588) > 0)
		{
			iVar16 = unk_0xCD6EB4A3CCA20602(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				unk_0x5C6B8DD2E15C6B3C(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					unk_0x7A491C9A90975007(&Var17);
					unk_0x09A485A642AEADEF(iVar13, &Var17);
					if (Var17.f_3 == unk_0xB204F40D393426B6(iParam0, Global_79172[1 /*14*/].f_12, 1) && Var17.f_4 == unk_0x0DC23FA727759F9F(iParam0, Global_79172[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_79172[1 /*14*/].f_3 == unk_0xC0120BBCC298EA2F(iParam0, func_191(iParam1)) && Global_79172[1 /*14*/].f_4 == unk_0xD6AED6BFCC58AF7F(iParam0, func_191(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_79171++;
			if (Global_79171 == 1)
			{
				if (func_289(iVar0, 11, func_247(iParam0, 11), -1))
				{
					if (func_287(iVar0, 4, iParam2, &uVar18))
					{
						return func_300(iParam0, 4, uVar18);
					}
				}
				else if (func_286(iVar0, 4, iParam2, &uVar18))
				{
					return func_300(iParam0, 4, uVar18);
				}
			}
			Global_79171 = (Global_79171 - 1);
		}
	}
	return 0;
}

int func_301(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (func_298(iParam0))
	{
		return -99;
	}
	if (func_302(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_251(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = unk_0x5A3F0A3B7ECCBD32(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						unk_0x0249B53AB91BF9D0(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != joaat("0"))
							{
								return func_259(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_251(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = unk_0x5A3F0A3B7ECCBD32(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						unk_0x0249B53AB91BF9D0(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != joaat("0"))
							{
								return func_259(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_302(int iParam0)
{
	if (unk_0xCA362C769B0F4F0E(iParam0, 8, joaat("x17_draw_6")))
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0xC0120BBCC298EA2F(iParam0, 9) != 0 && !unk_0xCA362C769B0F4F0E(iParam0, 9, -138631194))
		{
			return 1;
		}
	}
	return 0;
}

void func_304(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	
	if (!unk_0x4CEC77F224BCD884(iParam0))
	{
	}
	if (func_319())
	{
		return;
	}
	unk_0x5CB7287FD7611BC7(iParam0, &Var0);
	iVar1 = func_50(2097, iParam1);
	iVar2 = func_50(2098, iParam1);
	iVar3 = func_50(2099, iParam1);
	iVar4 = func_50(2100, iParam1);
	iVar5 = func_50(2101, iParam1);
	iVar6 = func_50(2102, iParam1);
	fVar7 = func_320(134, iParam1);
	fVar8 = func_320(135, iParam1);
	fVar9 = func_320(136, iParam1);
	bVar10 = func_54(160, iParam1);
	if (((((((((Var0.f_0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		unk_0x0A5987DCA39E8BE5(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = func_50(2103, iParam1);
		if (iVar11 > 0)
		{
			func_305(iParam0, iParam1, 0);
		}
	}
}

void func_305(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_318(iVar1);
		if (!bParam2)
		{
			fVar3 = func_320(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_316(iVar2, iParam1);
		}
		unk_0xAAF9B08B469F707F(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_315(iVar4);
		iVar6 = func_314(iVar5);
		iVar7 = func_313(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				uVar10 = func_312(iVar6, iParam1);
				uVar11 = func_320(iVar7, iParam1);
			}
			else
			{
				uVar10 = func_311(iVar6, iParam1);
				uVar11 = func_316(iVar7, iParam1);
			}
			unk_0xE5B6C9B29510B84E(iParam0, iVar5, uVar10, uVar11);
			iVar8 = func_310(iVar5);
			iVar9 = func_309(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_50(iVar8, iParam1);
					iVar14 = func_50(iVar9, iParam1);
				}
				else
				{
					iVar13 = func_308(iVar8, iParam1);
					iVar14 = func_308(iVar9, iParam1);
				}
				func_307(iVar13, &uVar12, &uVar15);
				unk_0x94965BB62753D4D6(iParam0, iVar5, uVar15, uVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_306(&iParam0, iParam1, bParam2);
}

void func_306(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_320(157, iParam1);
	}
	else
	{
		fVar0 = func_316(157, iParam1);
	}
	if (*iParam0 == unk_0x4A8C381C258A124D())
	{
	}
	unk_0x348FF3E632DCB635(*iParam0, system::round(fVar0));
}

void func_307(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = system::shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_308(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_51(iParam0, iParam1);
	if (unk_0x074484B0C0972EF8(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2161;
		
		case 1:
			return 2162;
		
		case 5:
			return 2163;
		
		case 8:
			return 2164;
		
		case 10:
			return 2159;
		
		default:
	}
	return -1;
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2154;
		
		case 1:
			return 2155;
		
		case 5:
			return 2156;
		
		case 8:
			return 2157;
		
		case 10:
			return 2158;
		
		default:
	}
	return -1;
}

int func_311(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_53();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = unk_0xC80B42F8AEC90782((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - unk_0xC24FF3ECDBA75CAC((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = unk_0xC80B42F8AEC90782((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - unk_0xC24FF3ECDBA75CAC((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = unk_0xC80B42F8AEC90782((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - unk_0xC24FF3ECDBA75CAC((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = unk_0xC80B42F8AEC90782((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - unk_0xC24FF3ECDBA75CAC((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = unk_0x443206C9783C69F1((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - unk_0xC24FF3ECDBA75CAC((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = unk_0x443206C9783C69F1((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - unk_0xC24FF3ECDBA75CAC((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - unk_0xC24FF3ECDBA75CAC((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - unk_0xC24FF3ECDBA75CAC((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - unk_0xC24FF3ECDBA75CAC((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - unk_0xC24FF3ECDBA75CAC((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - unk_0xC24FF3ECDBA75CAC((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - unk_0xC24FF3ECDBA75CAC((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - unk_0xC24FF3ECDBA75CAC((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - unk_0xC24FF3ECDBA75CAC((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - unk_0xC24FF3ECDBA75CAC((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - unk_0xC24FF3ECDBA75CAC((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - unk_0xC24FF3ECDBA75CAC((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - unk_0xC24FF3ECDBA75CAC((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - unk_0xC24FF3ECDBA75CAC((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - unk_0xC24FF3ECDBA75CAC((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
		iVar2 = ((iParam0 - 25538) - unk_0xC24FF3ECDBA75CAC((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
		iVar2 = ((iParam0 - 27258) - unk_0xC24FF3ECDBA75CAC((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
		iVar2 = ((iParam0 - 28483) - unk_0xC24FF3ECDBA75CAC((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
		iVar2 = ((iParam0 - 30483) - unk_0xC24FF3ECDBA75CAC((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 30707), 0, 1, iParam1, "_TUNERPSTAT_INT");
		iVar2 = ((iParam0 - 30707) - unk_0xC24FF3ECDBA75CAC((iParam0 - 30707)) * 8) * 8;
	}
	else if (iParam0 >= 32475 && iParam0 < 34123)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 32475), 0, 1, iParam1, "_FIXERPSTAT_INT");
		iVar2 = ((iParam0 - 32475) - unk_0xC24FF3ECDBA75CAC((iParam0 - 32475)) * 8) * 8;
	}
	else if (iParam0 >= 34763 && iParam0 < 36627)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 34763), 0, 1, iParam1, "_DLC12022PSTAT_INT");
		iVar2 = ((iParam0 - 34763) - unk_0xC24FF3ECDBA75CAC((iParam0 - 34763)) * 8) * 8;
	}
	else if (iParam0 >= 36947 && iParam0 < 41251)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 36947), 0, 1, iParam1, "_DLC22022PSTAT_INT");
		iVar2 = ((iParam0 - 36947) - unk_0xC24FF3ECDBA75CAC((iParam0 - 36947)) * 8) * 8;
	}
	else if (iParam0 >= 42083 && iParam0 < 42107)
	{
		iVar1 = unk_0x6B604293CA9BF4E0((iParam0 - 42083), 0, 1, iParam1, "_DLC12023PSTAT_INT");
		iVar2 = ((iParam0 - 42083) - unk_0xC24FF3ECDBA75CAC((iParam0 - 42083)) * 8) * 8;
	}
	if (!unk_0x77B8D5FD0CF3258F(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

var func_312(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_53();
	}
	return unk_0x03CFFD51CE515454(iParam0, iParam1);
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_314(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_316(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_317(iParam0, iParam1);
	if (unk_0xE1A5C172B921BBD6(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

var func_317(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(1, uParam0, func_52(uParam1));
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

int func_319()
{
	if (unk_0xF40767E41852FB72(Global_2640096.f_62) && !Global_2640096.f_61 == 0)
	{
		return 1;
	}
	return 0;
}

float func_320(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_317(iParam0, iParam1);
	if (unk_0x2F0966A034F5ADC6(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_321(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<7> Var21;
	int iVar22;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4540287 == iParam1)
		{
			iVar2 = Global_4540286;
			iVar1 = Global_4540285;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_251(iParam0, iParam1, 7, 3);
			iVar1 = func_385(iVar2);
			Global_4540287 = iParam1;
			Global_4540286 = iVar2;
			Global_4540285 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4540290 == iParam3)
		{
			iVar4 = Global_4540289;
			iVar3 = Global_4540288;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_251(iParam0, iParam3, 11, 3);
			iVar3 = func_385(iVar4);
			Global_4540290 = iParam3;
			Global_4540289 = iVar4;
			Global_4540288 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4540293 == iParam4)
		{
			iVar6 = Global_4540292;
			iVar5 = Global_4540291;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_251(iParam0, iParam4, 8, 3);
			iVar5 = func_385(iVar6);
			Global_4540293 = iParam4;
			Global_4540292 = iVar6;
			Global_4540291 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4540296 == iParam10)
		{
			iVar8 = Global_4540295;
			iVar7 = Global_4540294;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_251(iParam0, iParam10, 1, 3);
			iVar7 = func_385(iVar8);
			Global_4540296 = iParam10;
			Global_4540295 = iVar8;
			Global_4540294 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((unk_0x304A39EB177D246B(iVar4, joaat("morph_suit"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("scuba_gear"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("gorka_suit"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar8, joaat("headscarf"), 0) && !unk_0x304A39EB177D246B(iVar8, joaat("smug_draw_6"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (unk_0x304A39EB177D246B(iVar2, joaat("hoop_necklace"), 0))
		{
			if (func_389(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (unk_0x304A39EB177D246B(iVar2, -571765249, 0))
		{
			if (func_389(iParam0, iParam3, -1) && !func_324(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("pilot_suit"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar2, joaat("epsilon_chain_alt"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x304A39EB177D246B(iVar2, joaat("epsilon_chain"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar2, joaat("epsilon_chain_alt"), 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar2, 91564168, 0))
			{
				if (unk_0x304A39EB177D246B(iVar4, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar2, 91564168, 0))
			{
				if (unk_0x304A39EB177D246B(iVar6, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar2, 1536943816, 0))
			{
				if (unk_0x304A39EB177D246B(iVar4, -589305886, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (unk_0x304A39EB177D246B(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_251(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case joaat("dlc_mp_exec_m_phead_1_0"):
					case joaat("dlc_mp_beach_m_head0_0"):
					case joaat("dlc_mp_beach_m_head0_1"):
					case joaat("dlc_mp_beach_m_head0_2"):
					case joaat("dlc_mp_beach_m_head0_3"):
					case joaat("dlc_mp_beach_m_head0_4"):
					case joaat("dlc_mp_beach_m_head0_5"):
					case joaat("dlc_mp_stunt_m_phead_10_0"):
					case joaat("dlc_mp_stunt_m_phead_10_1"):
					case joaat("dlc_mp_stunt_m_phead_10_2"):
					case joaat("dlc_mp_stunt_m_phead_10_3"):
					case joaat("dlc_mp_stunt_m_phead_10_4"):
					case joaat("dlc_mp_stunt_m_phead_10_5"):
					case joaat("dlc_mp_stunt_m_phead_10_6"):
					case joaat("dlc_mp_stunt_m_phead_10_7"):
					case joaat("dlc_mp_stunt_m_phead_10_8"):
					case joaat("dlc_mp_stunt_m_phead_10_9"):
					case joaat("dlc_mp_stunt_m_phead_10_10"):
					case joaat("dlc_mp_stunt_m_phead_10_11"):
					case joaat("dlc_mp_stunt_m_phead_10_12"):
					case joaat("dlc_mp_stunt_m_phead_10_13"):
					case joaat("dlc_mp_stunt_m_phead_10_14"):
					case joaat("dlc_mp_stunt_m_phead_10_15"):
					case joaat("dlc_mp_stunt_m_phead_10_16"):
					case joaat("dlc_mp_stunt_m_phead_10_17"):
					case joaat("dlc_mp_stunt_m_phead_10_18"):
					case joaat("dlc_mp_stunt_m_phead_10_19"):
					case joaat("dlc_mp_stunt_m_phead_10_20"):
					case joaat("dlc_mp_gr_m_phead_7_0"):
					case joaat("dlc_mp_gr_m_phead_7_1"):
					case joaat("dlc_mp_gr_m_phead_7_2"):
					case joaat("dlc_mp_gr_m_phead_7_3"):
					case joaat("dlc_mp_gr_m_phead_7_4"):
					case joaat("dlc_mp_gr_m_phead_7_5"):
					case joaat("dlc_mp_gr_m_phead_7_6"):
					case joaat("dlc_mp_gr_m_phead_7_7"):
					case joaat("dlc_mp_gr_m_phead_7_8"):
					case joaat("dlc_mp_gr_m_phead_7_9"):
					case joaat("dlc_mp_gr_m_phead_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar8, joaat("headscarf"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("scarf"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar2, joaat("jacket_scarf"), 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((unk_0x304A39EB177D246B(iVar4, joaat("block_scarfs"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar4, -826135203, 0)) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar4, -102825006, 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_19"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0))
					{
						return 0;
					}
					else if (func_323(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (unk_0x304A39EB177D246B(iVar4, joaat("block_scarfs"), 0))
				{
					return 0;
				}
				else if (func_323(iParam0, iParam3))
				{
					return 0;
				}
				else if (unk_0x304A39EB177D246B(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (unk_0x304A39EB177D246B(iVar8, joaat("headscarf"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("luxe_scarf"), 0))
			{
				if (((unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_0"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("scarf"), 0)) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("big_chain"), 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_251(iParam0, iParam11, 4, 3);
				}
				if (unk_0x304A39EB177D246B(iVar10, joaat("dungarees"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("bead_necklace"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar4, joaat("sweat_vest"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("chain"), 0))
		{
			if (iParam3 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar2, joaat("big_chain"), 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (unk_0x304A39EB177D246B(iVar2, joaat("alt_chain"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x304A39EB177D246B(iVar4, joaat("block_chains"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("tux_jacket"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("combat_top"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("xmas2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, -1086258388, 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("scruffy_jacket"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_13"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_16"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar4, -826135203, 0)) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar4, -102825006, 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_19"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_21"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("jacket_only"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0))
				{
					return 0;
				}
				else if (!unk_0x304A39EB177D246B(iVar2, joaat("alt_chain"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || unk_0x304A39EB177D246B(iVar6, joaat("tux_vest"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("block_chains"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("stunt_draw_2"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("big_chain"), 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("pilot_suit"), 0))
		{
			if (iParam9 >= 327 && unk_0x304A39EB177D246B(func_251(iParam0, iParam9, 14, 3), joaat("pilot_suit"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x304A39EB177D246B(func_251(iParam0, iParam9, 14, 3), joaat("pilot_suit"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_bomb"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("LOW_BOMB"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("JAN_BOMB"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("combat_top"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("LOW2_BOMB"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_25"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("smug_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("assault_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar4, 44202077, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || unk_0x304A39EB177D246B(iVar6, joaat("ALLOW_TIES"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("vest_shirt"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("tux_vest"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("closed_collar"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("open_collar"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("tux_shirt"), 0)) || unk_0x304A39EB177D246B(iVar6, -118374880, 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("outfit_checks"), 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("high_roller_tie"), 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar6, joaat("high_roller_shirt"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("tie"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_389(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_4"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_21"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("sweat_vest"), 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("tux_shirt"), 0)))
				{
					if (unk_0x304A39EB177D246B(iVar6, joaat("high_roller_shirt"), 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_247(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_385(func_251(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_389(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_4"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("sweat_vest"), 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("vest_shirt"), 0))) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("tux_vest"), 0))) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("tux_shirt"), 0))) || unk_0x304A39EB177D246B(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("dlc_mp_val_m_accs0_0")) || iVar6 == joaat("dlc_mp_val_m_accs0_1")) || iVar6 == joaat("dlc_mp_val_m_accs0_2")) || iVar6 == joaat("dlc_mp_val_m_accs0_3")) || iVar6 == joaat("dlc_mp_val_m_accs0_4"))
				{
					if (unk_0x304A39EB177D246B(iVar6, joaat("high_roller_shirt"), 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_247(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_385(func_251(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x304A39EB177D246B(iVar6, joaat("sweat_vest"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("vest_tie"), 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_0"), 0)) || iVar4 == joaat("dlc_mp_busi_m_jbib4_0")) || iVar4 == joaat("dlc_mp_busi_m_jbib4_1")) || iVar4 == joaat("dlc_mp_busi_m_jbib4_2")) || iVar4 == joaat("dlc_mp_val_m_jbib0_0")) || iVar4 == joaat("dlc_mp_val_m_jbib0_1")) || iVar4 == joaat("dlc_mp_val_m_jbib0_2")) || iVar4 == joaat("dlc_mp_val_m_jbib0_3"))
				{
					if (!unk_0x304A39EB177D246B(iVar4, joaat("sweat_vest"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("vest_shirt"), 0))) || unk_0x304A39EB177D246B(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("dlc_mp_val_m_accs0_0")) || iVar6 == joaat("dlc_mp_val_m_accs0_1")) || iVar6 == joaat("dlc_mp_val_m_accs0_2")) || iVar6 == joaat("dlc_mp_val_m_accs0_3")) || iVar6 == joaat("dlc_mp_val_m_accs0_4"))
				{
					if (unk_0x304A39EB177D246B(iVar6, joaat("high_roller_shirt"), 0))
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!unk_0x304A39EB177D246B(iVar6, joaat("sweat_vest"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("tux_tie"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("tux_jacket"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("tux_vest"), 0)) && unk_0x304A39EB177D246B(iVar2, joaat("tux_tie_alt"), 0)) || (((iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("tux_shirt"), 0)) && !unk_0x304A39EB177D246B(iVar2, joaat("tux_tie_alt"), 0)) && !unk_0x304A39EB177D246B(iVar6, joaat("high_roller_shirt"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("loose_bowtie"), 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == joaat("dlc_mp_val_m_accs0_0")) || iVar6 == joaat("dlc_mp_val_m_accs0_1")) || iVar6 == joaat("dlc_mp_val_m_accs0_2")) || iVar6 == joaat("dlc_mp_val_m_accs0_3")) || iVar6 == joaat("dlc_mp_val_m_accs0_4")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_0")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_1")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_2")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_3")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_4")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_5")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_6")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_7")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_8")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_9")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_10")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_11")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_12")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_13")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_14")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_15")) || iVar6 == joaat("dlc_mp_ind_m_special_0_0")) || iVar6 == joaat("dlc_mp_ind_m_special_0_1")) || iVar6 == joaat("dlc_mp_ind_m_special_2_0")) || iVar6 == joaat("dlc_mp_ind_m_special_2_1")) || iVar6 == joaat("dlc_mp_ind_m_special_2_2")) || iVar6 == joaat("dlc_mp_ind_m_special_2_3")) || iVar6 == joaat("dlc_mp_ind_m_special_2_4")) || iVar6 == joaat("dlc_mp_ind_m_special_2_5")) || iVar6 == joaat("dlc_mp_ind_m_special_2_6")) || iVar6 == joaat("dlc_mp_ind_m_special_2_7")) || iVar6 == joaat("dlc_mp_ind_m_special_2_8")) || iVar6 == joaat("dlc_mp_biker_m_special_9_0")) || iVar6 == joaat("dlc_mp_biker_m_special_9_1")) || unk_0x304A39EB177D246B(iVar6, joaat("heist_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("draw_3"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("draw_7"), 0)) || unk_0x304A39EB177D246B(iVar6, joaat("draw_11"), 0))
				{
					if (!unk_0x304A39EB177D246B(iVar6, joaat("sweat_vest"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!unk_0x304A39EB177D246B(iVar6, joaat("sweat_vest"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("loose_tie"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || unk_0x304A39EB177D246B(iVar4, joaat("open_jacket"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == joaat("dlc_mp_val_m_accs0_0")) || iVar6 == joaat("dlc_mp_val_m_accs0_1")) || iVar6 == joaat("dlc_mp_val_m_accs0_2")) || iVar6 == joaat("dlc_mp_val_m_accs0_3")) || iVar6 == joaat("dlc_mp_val_m_accs0_4")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_0")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_1")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_2")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_3")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_4")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_5")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_6")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_7")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_8")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_9")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_10")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_11")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_12")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_13")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_14")) || iVar6 == joaat("dlc_mp_busi2_m_accs1_15")) || iVar6 == joaat("dlc_mp_ind_m_special_0_0")) || iVar6 == joaat("dlc_mp_ind_m_special_0_1")) || iVar6 == joaat("dlc_mp_biker_m_special_9_0")) || iVar6 == joaat("dlc_mp_biker_m_special_9_1")) || unk_0x304A39EB177D246B(iVar6, joaat("heist_draw_5"), 0))
				{
					if (!unk_0x304A39EB177D246B(iVar6, joaat("sweat_vest"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!unk_0x304A39EB177D246B(iVar6, joaat("sweat_vest"), 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("slack_tie"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || unk_0x304A39EB177D246B(iVar4, joaat("open_jacket"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_322(iVar6)) || (iVar6 != -1 && unk_0x304A39EB177D246B(iVar6, joaat("draw_12"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0x304A39EB177D246B(iVar2, joaat("scarf"), 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_4"), 0)) || (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("heist_draw_16"), 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar8, joaat("headscarf"), 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4540287 == iParam1)
		{
			iVar12 = Global_4540286;
			iVar11 = Global_4540285;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_251(iParam0, iParam1, 7, 4);
			iVar11 = func_385(iVar12);
			Global_4540287 = iParam1;
			Global_4540286 = iVar12;
			Global_4540285 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4540290 == iParam3)
		{
			iVar14 = Global_4540289;
			iVar13 = Global_4540288;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_251(iParam0, iParam3, 11, 4);
			iVar13 = func_385(iVar14);
			Global_4540290 = iParam3;
			Global_4540289 = iVar14;
			Global_4540288 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4540293 == iParam4)
		{
			iVar16 = Global_4540292;
			iVar15 = Global_4540291;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_251(iParam0, iParam4, 8, 4);
			iVar15 = func_385(iVar16);
			Global_4540293 = iParam4;
			Global_4540292 = iVar16;
			Global_4540291 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4540296 == iParam10)
		{
			iVar18 = Global_4540295;
			iVar17 = Global_4540294;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_251(iParam0, iParam10, 1, 4);
			iVar17 = func_385(iVar18);
			Global_4540296 = iParam10;
			Global_4540295 = iVar18;
			Global_4540294 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_251(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if ((((unk_0x304A39EB177D246B(iVar14, joaat("morph_suit"), 0) && !unk_0x304A39EB177D246B(iVar14, -716211525, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("scuba_gear"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("cat_suit"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("gorka_suit"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar18, joaat("headscarf"), 0) && !unk_0x304A39EB177D246B(iVar18, joaat("smug_draw_6"), 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("cuff"), 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar18, joaat("headscarf"), 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("earring"), 0)))
				{
					return 0;
				}
			}
		}
		if (unk_0x304A39EB177D246B(iVar12, joaat("hoop_necklace"), 0))
		{
			if (func_389(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (unk_0x304A39EB177D246B(iVar12, -571765249, 0))
		{
			if (func_389(iParam0, iParam3, -1) && !func_324(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar14, joaat("pilot_suit"), 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("pilot_suit"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar12, joaat("epsilon_chain_alt"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar14, joaat("arena_draw_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x304A39EB177D246B(iVar12, joaat("epsilon_chain"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar14, joaat("arena_draw_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar12, joaat("epsilon_chain_alt"), 0))
			{
				if (iParam4 == 66)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar12, 91564168, 0))
			{
				if (unk_0x304A39EB177D246B(iVar14, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar12, 91564168, 0))
			{
				if (unk_0x304A39EB177D246B(iVar16, 91564168, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x304A39EB177D246B(iVar12, 1536943816, 0))
			{
				if (unk_0x304A39EB177D246B(iVar14, -148268191, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar12 == joaat("DLC_MP_APA_F_TEETH_0_0") || iVar12 == 653911448) || iVar12 == -1519558015)
		{
			if (iParam9 != -99)
			{
				switch (iVar19)
				{
					case 1446628467:
					case -1938048778:
					case 2041418586:
					case -1342898200:
					case 2026483804:
					case -1977527541:
					case -1670449242:
					case -1385031204:
					case -1088111295:
					case -1530918836:
					case -1221415631:
					case -629869643:
					case joaat("dlc_mp_exec_f_phead_1_0"):
					case joaat("dlc_mp_stunt_f_phead_10_0"):
					case joaat("dlc_mp_stunt_f_phead_10_1"):
					case joaat("dlc_mp_stunt_f_phead_10_2"):
					case joaat("dlc_mp_stunt_f_phead_10_3"):
					case joaat("dlc_mp_stunt_f_phead_10_4"):
					case joaat("dlc_mp_stunt_f_phead_10_5"):
					case joaat("dlc_mp_stunt_f_phead_10_6"):
					case joaat("dlc_mp_stunt_f_phead_10_7"):
					case joaat("dlc_mp_stunt_f_phead_10_8"):
					case joaat("dlc_mp_stunt_f_phead_10_9"):
					case joaat("dlc_mp_stunt_f_phead_10_10"):
					case joaat("dlc_mp_stunt_f_phead_10_11"):
					case joaat("dlc_mp_stunt_f_phead_10_12"):
					case joaat("dlc_mp_stunt_f_phead_10_13"):
					case joaat("dlc_mp_stunt_f_phead_10_14"):
					case joaat("dlc_mp_stunt_f_phead_10_15"):
					case joaat("dlc_mp_stunt_f_phead_10_16"):
					case joaat("dlc_mp_stunt_f_phead_10_17"):
					case joaat("dlc_mp_stunt_f_phead_10_18"):
					case joaat("dlc_mp_stunt_f_phead_10_19"):
					case joaat("dlc_mp_stunt_f_phead_10_20"):
					case joaat("dlc_mp_gr_f_phead_7_0"):
					case joaat("dlc_mp_gr_f_phead_7_1"):
					case joaat("dlc_mp_gr_f_phead_7_2"):
					case joaat("dlc_mp_gr_f_phead_7_3"):
					case joaat("dlc_mp_gr_f_phead_7_4"):
					case joaat("dlc_mp_gr_f_phead_7_5"):
					case joaat("dlc_mp_gr_f_phead_7_6"):
					case joaat("dlc_mp_gr_f_phead_7_7"):
					case joaat("dlc_mp_gr_f_phead_7_8"):
					case joaat("dlc_mp_gr_f_phead_7_9"):
					case joaat("dlc_mp_gr_f_phead_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar18, joaat("headscarf"), 0))
				{
					return 0;
				}
			}
			if (unk_0x304A39EB177D246B(iVar16, joaat("over_jacket"), 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("scarf"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar12, joaat("jacket_scarf"), 0))
				{
					if ((((((((((((((((unk_0x304A39EB177D246B(iVar14, joaat("block_scarfs"), 0) || unk_0x304A39EB177D246B(iVar14, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar14, -826135203, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("air_draw_0"), 0))
					{
						return 0;
					}
					else if (func_323(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_323(iParam0, iParam3) || unk_0x304A39EB177D246B(iVar14, joaat("block_scarfs"), 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (unk_0x304A39EB177D246B(iVar18, joaat("headscarf"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("luxe_scarf"), 0))
			{
				if ((((unk_0x304A39EB177D246B(iVar14, joaat("luxe_draw_0"), 0) || unk_0x304A39EB177D246B(iVar14, joaat("luxe_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("luxe2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("luxe2_draw_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("scarf"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar16, joaat("block_scarfs"), 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("chain"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar16, joaat("block_chains"), 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("pilot_suit"), 0))
		{
			if (iParam9 >= 327 && unk_0x304A39EB177D246B(func_251(iParam0, iParam9, 14, 4), joaat("pilot_suit"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0x304A39EB177D246B(func_251(iParam0, iParam9, 14, 4), joaat("pilot_suit"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("scarf"), 0)) || (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("big_chain"), 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = func_251(iParam0, iParam11, 4, 4);
				}
				if (unk_0x304A39EB177D246B(iVar20, joaat("dungarees"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (unk_0x304A39EB177D246B(iVar12, joaat("tie"), 0) || unk_0x304A39EB177D246B(iVar12, joaat("bowtie"), 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_5"), 0) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_11"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar14, -872449705, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_25"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_9"), 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_9"), 0) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_11"), 0)) || unk_0x304A39EB177D246B(iVar14, 144417099, 0))
				{
					if (unk_0x304A39EB177D246B(iVar12, joaat("bowtie"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 == 8)
			{
				if (unk_0x304A39EB177D246B(iVar16, joaat("open_collar"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("closed_collar"), 0))
				{
					if (unk_0x304A39EB177D246B(iVar12, joaat("tie"), 0))
					{
						if (unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_8"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_9"), 0))
						{
							if (unk_0x304A39EB177D246B(iVar12, joaat("alt_tie"), 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x304A39EB177D246B(iVar12, joaat("alt_tie"), 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != -99)
		{
			if ((iVar19 != -1 && unk_0x304A39EB177D246B(iVar19, joaat("earring"), 1)) || (iVar19 != -1 && unk_0x304A39EB177D246B(iVar19, joaat("block_earrings"), 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("earring"), 0)))
				{
					return 0;
				}
			}
		}
		if (unk_0x304A39EB177D246B(iVar12, joaat("hoop_necklace"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar14, joaat("dress"), 0))
			{
				return 1;
			}
		}
		if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("chain"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((((unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_5"), 0) || unk_0x304A39EB177D246B(iVar14, -102825006, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("block_chains"), 0))
				{
					return 0;
				}
				else if (func_389(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("luxe_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("luxe2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, -430330349, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_21"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("exec_draw_14"), 0)) || iVar14 == joaat("dlc_mp_ind_f_jbib_1_0")) || iVar14 == joaat("dlc_mp_ind_f_jbib_1_1")) || unk_0x304A39EB177D246B(iVar14, joaat("smug_draw_5"), 0))
				{
					if (!unk_0x304A39EB177D246B(iVar12, joaat("alt_chain"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || unk_0x304A39EB177D246B(iVar14, joaat("dress"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("vest_shirt"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("vest"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("pilot_suit"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("combat_top"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("COMBAT_SWEAT"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("xmas2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, -1086258388, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_13"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar14, -826135203, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("LOW2_DRAW_8"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, -1103045158, 0)) || unk_0x304A39EB177D246B(iVar14, -102825006, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("air_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, 891044832, 0))
				{
					return 0;
				}
				else if (unk_0x304A39EB177D246B(iVar12, joaat("alt_chain"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || unk_0x304A39EB177D246B(iVar16, joaat("OFF_SHOULDER_ACCS"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_12"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_10"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("luxe_draw_11"), 0)) || iVar16 == joaat("dlc_mp_heist_f_special_12_0")) || iVar16 == joaat("dlc_mp_heist_f_special_12_1")) || iVar16 == joaat("dlc_mp_hips_f_accs3_0")) || iVar16 == joaat("dlc_mp_hips_f_accs3_1")) || iVar16 == joaat("dlc_mp_hips_f_accs3_2")) || iVar16 == joaat("dlc_mp_hips_f_accs3_3")) || iVar16 == joaat("dlc_mp_val_f_accs0_0")) || iVar16 == joaat("dlc_mp_val_f_accs0_1")) || iVar16 == joaat("dlc_mp_val_f_accs0_2")) || iVar16 == joaat("dlc_mp_val_f_accs1_0")) || iVar16 == joaat("dlc_mp_val_f_accs1_1")) || iVar16 == joaat("dlc_mp_val_f_accs1_2")) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low2_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("apart_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("apart_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("EXEC_DRAW_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("EXEC_DRAW_4"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("EXEC_DRAW_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("EXEC_DRAW_17"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("biker_draw_33"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("smug_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("block_chains"), 0))
				{
					if (!unk_0x304A39EB177D246B(iVar12, joaat("alt_chain"), 0))
					{
						return 0;
					}
				}
				else if (((((((unk_0x304A39EB177D246B(iVar16, joaat("vest_shirt"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar16, 1353777856, 0)) || unk_0x304A39EB177D246B(iVar16, joaat("apart_draw_1"), 0))
				{
					return 0;
				}
				else if (func_386(iParam0, iParam4, 0) != -99)
				{
					if (unk_0x304A39EB177D246B(iVar12, joaat("alt_chain"), 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("bead_necklace"), 0))
			{
				if (unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_21"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && unk_0x304A39EB177D246B(iVar12, joaat("cuff"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("combat_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("long_sleeve"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x304A39EB177D246B(func_251(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x304A39EB177D246B(iVar19, joaat("cuff"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("combat_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("long_sleeve"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x304A39EB177D246B(func_251(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x304A39EB177D246B(iVar19, joaat("cuff"), 1))
				{
					unk_0x09A485A642AEADEF(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("combat_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("long_sleeve"), 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0x304A39EB177D246B(func_251(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x304A39EB177D246B(iVar19, joaat("cuff"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("vest_shirt"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("combat_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("heist_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_3"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("luxe_sweat"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("luxe_draw_4"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("low_sweat"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("low_draw_0"), 0))) || unk_0x304A39EB177D246B(iVar14, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar14, -826135203, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar14, -430330349, 0)) || unk_0x304A39EB177D246B(iVar14, -102825006, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_21"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("exec_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("biker_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("biker_draw_15"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("biker_draw_16"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("morph_suit"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("air_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("assault_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, -15805237, 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && unk_0x304A39EB177D246B(iVar12, joaat("long_necklace"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("combat_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("heist_gear"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("heist_draw_3"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("draw_0"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("luxe_sweat"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("luxe_draw_4"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("low_sweat"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("low_draw_0"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("low_draw_3"), 0))) || unk_0x304A39EB177D246B(iVar14, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar14, -826135203, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("vest_shirt"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar14, -430330349, 0)) || unk_0x304A39EB177D246B(iVar14, -102825006, 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_21"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("exec_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("biker_draw_19"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("air_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar14, joaat("block_chains"), 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("long_sleeve"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("vest"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("combat_gear"), 0))) || unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_7"), 0))
				{
					if (iParam1 >= 55 && unk_0x304A39EB177D246B(iVar12, joaat("long_necklace"), 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar16, joaat("vest_shirt"), 0))
				{
					if (unk_0x304A39EB177D246B(iVar12, joaat("long_necklace"), 0))
					{
						return 0;
					}
				}
				else if (((unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_1"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_4"), 0))
				{
					return 0;
				}
				else if ((unk_0x304A39EB177D246B(iVar16, joaat("ALT_SPECIAL_4"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("alt_special_5"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("alt_special_6"), 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && unk_0x304A39EB177D246B(iVar19, joaat("cuff"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("vest"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("dress"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("luxe_sweat"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("low_sweat"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("vest"), 0))) || (iParam3 >= 256 && unk_0x304A39EB177D246B(iVar14, joaat("dress"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar16, joaat("sweat_vest"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("basic_vest"), 0))
				{
					return 0;
				}
				else if (((unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_1"), 0) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar16, joaat("stunt_draw_4"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar18, joaat("headscarf"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x304A39EB177D246B(iVar12, joaat("high_roller_tie"), 0))
		{
			if (iParam4 != -99)
			{
				if (unk_0x304A39EB177D246B(iVar16, joaat("high_roller_shirt"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0x304A39EB177D246B(iVar12, joaat("braces"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && unk_0x304A39EB177D246B(iVar14, joaat("low2_draw_7"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar22 = -1;
				if (iParam11 >= 256)
				{
					iVar22 = func_251(iParam0, iParam11, 4, 4);
				}
				if (unk_0x304A39EB177D246B(iVar22, joaat("high_waist"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_322(int iParam0)
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("dlc_mp_busi_m_accs4_0"):
		case joaat("dlc_mp_busi_m_accs5_0"):
		case joaat("dlc_mp_busi_m_accs4_1"):
		case joaat("dlc_mp_busi_m_accs5_1"):
		case joaat("dlc_mp_busi_m_accs4_2"):
		case joaat("dlc_mp_busi_m_accs5_2"):
		case joaat("dlc_mp_busi_m_accs4_3"):
		case joaat("dlc_mp_busi_m_accs5_3"):
		case joaat("dlc_mp_busi_m_accs4_4"):
		case joaat("dlc_mp_busi_m_accs5_4"):
		case joaat("dlc_mp_busi_m_accs4_5"):
		case joaat("dlc_mp_busi_m_accs5_5"):
		case joaat("dlc_mp_busi_m_accs4_6"):
		case joaat("dlc_mp_busi_m_accs5_6"):
		case joaat("dlc_mp_busi_m_accs4_7"):
		case joaat("dlc_mp_busi_m_accs5_7"):
		case joaat("dlc_mp_busi_m_accs4_8"):
		case joaat("dlc_mp_busi_m_accs5_8"):
		case joaat("dlc_mp_busi_m_accs4_9"):
		case joaat("dlc_mp_busi_m_accs5_9"):
		case joaat("dlc_mp_busi_m_accs4_10"):
		case joaat("dlc_mp_busi_m_accs5_10"):
		case joaat("dlc_mp_busi_m_accs4_11"):
		case joaat("dlc_mp_busi_m_accs5_11"):
		case joaat("dlc_mp_busi_m_accs4_12"):
		case joaat("dlc_mp_busi_m_accs5_12"):
		case joaat("dlc_mp_busi_m_accs4_13"):
		case joaat("dlc_mp_busi_m_accs5_13"):
		case joaat("dlc_mp_busi_m_accs4_14"):
		case joaat("dlc_mp_busi_m_accs5_14"):
		case joaat("dlc_mp_busi_m_accs4_15"):
		case joaat("dlc_mp_busi_m_accs5_15"):
			return 1;
			break;
	}
	return 0;
}

int func_323(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_251(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((unk_0x304A39EB177D246B(iVar0, joaat("low_draw_0"), 0) || unk_0x304A39EB177D246B(iVar0, joaat("low_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("LOW_DRAW_7"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("LOW_DRAW_8"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar0, -826135203, 0)) || unk_0x304A39EB177D246B(iVar0, joaat("jan_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("jan_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("low2_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_5"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_4"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("apart_draw_14"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("air_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar0, joaat("use_jacket_scarf"), 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (unk_0x304A39EB177D246B(iVar0, joaat("silk_pyjamas"), 0))
			{
				return 1;
			}
		}
		return func_389(iParam0, iParam1, -1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_251(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_385(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || unk_0x304A39EB177D246B(iVar1, joaat("jacket"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("combat_top"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("heist_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("heist_draw_9"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("smoking_jacket"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("silk_pyjamas"), 0)) || unk_0x304A39EB177D246B(iVar1, -826135203, 0)) || unk_0x304A39EB177D246B(iVar1, joaat("low2_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar1, -102825006, 0)) || unk_0x304A39EB177D246B(iVar1, joaat("apart_draw_18"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("apart_draw_20"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("apart_draw_24"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_0"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_1"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_2"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_3"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_6"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_7"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("stunt_draw_8"), 0)) || unk_0x304A39EB177D246B(iVar1, joaat("air_draw_0"), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (((iParam1 >= 48 && iParam1 < 64) || (iParam1 >= 64 && iParam1 < 80)) || (iParam1 >= 108 && iParam1 < 124))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 256)
			{
				iParam2 = func_251(iParam0, iParam1, 11, 3);
			}
			if (unk_0x304A39EB177D246B(iParam2, joaat("open_jacket"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 256)
			{
				iParam2 = func_251(iParam0, iParam1, 11, 4);
			}
			if (unk_0x304A39EB177D246B(iParam2, joaat("open_jacket"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_325(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	func_380(unk_0x70E57E9927B6BA58("hairOverlay"), iParam0);
	iVar1 = func_379(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_79169;
		}
		func_405(iVar1, 1, iParam2);
	}
	func_326(iParam0, bParam3, 0, -1, 1);
}

void func_326(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<9> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = Global_79169;
		unk_0x98E00E3ED7D61628(iParam0);
		bVar1 = func_374(iParam0, 0);
		bVar2 = func_366(iParam0);
		bVar3 = func_365(iParam0, iParam3);
		if (bParam1)
		{
			bVar2 = true;
		}
		if (bParam2)
		{
			bVar2 = false;
		}
		if ((!bParam4 || iVar0 != func_53()) || Global_1980303)
		{
			iVar5 = func_364(iParam0);
			iVar6 = 0;
			while (iVar6 < 127)
			{
				if (func_361(iVar6, iVar0))
				{
					if (func_354(&Var4, iVar6, iVar5, iParam0, -1))
					{
						if (func_351(iParam0, &Var4, iVar6, Var4.f_4, Var4.f_8, bVar1, bVar2, bParam1, bVar3))
						{
							unk_0x49A5A17556C31561(iParam0, Var4.f_4, Var4.f_5);
						}
					}
				}
				iVar6++;
			}
			if (func_361(123, iVar0))
			{
				if (unk_0x50CA4ACB66148FF0(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
				{
					unk_0x49A5A17556C31561(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
				}
			}
			iVar8 = unk_0x82D6E3FDBD0A80B6(iVar5);
			iVar7 = 0;
			while (iVar7 < iVar8)
			{
				if (unk_0xC8FF7E3E267EBEF5(iVar5, iVar7, &Var9))
				{
					if (!unk_0x4BFA043D318BF9AE(Var9.f_0))
					{
						iVar10 = (129 + iVar7);
						if (func_361(iVar10, iVar0))
						{
							if (func_351(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar1, bVar2, bParam1, bVar3))
							{
								if (!func_331(Var9.f_2, Var9.f_3, iVar10))
								{
									unk_0x49A5A17556C31561(iParam0, Var9.f_2, Var9.f_3);
									func_330(iParam0, Var9.f_2, Var9.f_3);
								}
							}
						}
					}
				}
				iVar7++;
			}
		}
		else
		{
			func_327(iParam0, bVar2, bVar3, bVar1, bParam1, 0, 0);
		}
	}
}

void func_327(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	struct<9> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!Global_1980302)
	{
		func_328(&iParam0);
	}
	iVar0 = 0;
	iVar3 = func_364(iParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar4 = Global_1980274[iVar0];
		if (iVar4 <= -1)
		{
		}
		else if (iVar4 < 129)
		{
			if (!bParam5)
			{
				if (func_354(&Var2, iVar4, iVar3, iParam0, -1))
				{
					if (func_351(iParam0, &Var2, iVar4, Var2.f_4, Var2.f_8, bParam3, bParam1, bParam4, bParam2))
					{
						unk_0x49A5A17556C31561(iParam0, Var2.f_4, Var2.f_5);
					}
				}
			}
		}
		else if (iVar4 == 123)
		{
			if (unk_0x50CA4ACB66148FF0(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				unk_0x49A5A17556C31561(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		else
		{
			iVar5 = (iVar4 - 129);
			if (unk_0xC8FF7E3E267EBEF5(iVar3, iVar5, &Var1))
			{
				if (!unk_0x4BFA043D318BF9AE(Var1.f_0))
				{
					if (func_351(iParam0, &(Var1.f_7), iVar4, Var1.f_2, Var1.f_6, bParam3, bParam1, bParam4, bParam2))
					{
						if (iParam6 || !func_331(Var1.f_2, Var1.f_3, iVar4))
						{
							unk_0x49A5A17556C31561(iParam0, Var1.f_2, Var1.f_3);
							func_330(iParam0, Var1.f_2, Var1.f_3);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_328(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar2 = func_364(*uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		Global_1980274[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 127)
	{
		if (func_361(iVar0, -1))
		{
			func_329(iVar0, 1);
		}
		iVar0++;
	}
	iVar4 = unk_0x82D6E3FDBD0A80B6(iVar2);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (unk_0xC8FF7E3E267EBEF5(iVar2, iVar3, &uVar1))
		{
			if (!unk_0x4BFA043D318BF9AE(uVar1))
			{
				iVar5 = (129 + iVar3);
				if (func_361(iVar5, -1))
				{
					func_329((129 + iVar3), 1);
				}
			}
		}
		iVar3++;
	}
	Global_1980302 = 1;
}

void func_329(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 26;
	while (iVar1 >= 0)
	{
		if (bParam1)
		{
			if (Global_1980274[iVar1] == iParam0)
			{
				return;
			}
			else if (Global_1980274[iVar1] == -1)
			{
				iVar0 = iVar1;
			}
		}
		else if (Global_1980274[iVar1] == iParam0)
		{
			Global_1980274[iVar1] = -1;
			return;
		}
		iVar1 = (iVar1 + -1);
	}
	if (bParam1 && iVar0 >= 0)
	{
		Global_1980274[iVar0] = iParam0;
	}
}

void func_330(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1310977332:
			switch (iParam2)
			{
				case -335678317:
					unk_0x49A5A17556C31561(iParam0, 1310977332, -745372680);
					break;
				
				case -679031819:
					unk_0x49A5A17556C31561(iParam0, 1310977332, 842187071);
					break;
			}
			break;
		
		case 1841427399:
			switch (iParam2)
			{
				case -507124931:
					unk_0x49A5A17556C31561(iParam0, 1841427399, -435695677);
					break;
				
				case -2045170715:
					unk_0x49A5A17556C31561(iParam0, 1841427399, 1684098164);
					break;
			}
			break;
		
		case joaat("mpsecurity_overlays"):
			switch (iParam2)
			{
				case -1698823936:
					unk_0x49A5A17556C31561(iParam0, joaat("mpsecurity_overlays"), -1282588017);
					break;
				
				case 543067199:
					unk_0x49A5A17556C31561(iParam0, joaat("mpsecurity_overlays"), 884393080);
					break;
			}
			break;
		
		case joaat("mptuner_overlays"):
			switch (iParam2)
			{
				case -129339642:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 1959383570);
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -543063956);
					break;
				
				case 887263619:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -543063956);
					break;
				
				case -598443208:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -1160700813);
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -543063956);
					break;
				
				case -619123295:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -543063956);
					break;
				
				case -2139930425:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -543063956);
					break;
				
				case 991513037:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 847416951);
					break;
				
				case -675149090:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 847416951);
					break;
				
				case 2021781367:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -1625184579);
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 1294359428);
					break;
				
				case -436866133:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 1294359428);
					break;
				
				case 457275657:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 429414924);
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 1294359428);
					break;
				
				case -250832592:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 1294359428);
					break;
				
				case -798760789:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), 1294359428);
					break;
				
				case -1634791241:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -2021672848);
					break;
				
				case -1227437948:
					unk_0x49A5A17556C31561(iParam0, joaat("mptuner_overlays"), -2021672848);
					break;
			}
			break;
		
		case joaat("mpheist4_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Heist4_Tee_039_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_040_M"));
					break;
				
				case joaat("MP_Heist4_Tee_041_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_042_M"));
					break;
				
				case joaat("MP_Heist4_Tee_043_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_044_M"));
					break;
				
				case joaat("MP_Heist4_Tee_049_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_050_M"));
					break;
				
				case joaat("MP_Heist4_Tee_051_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_052_M"));
					break;
				
				case joaat("MP_Heist4_Tee_055_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_056_M"));
					break;
				
				case joaat("MP_Heist4_Tee_057_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_058_M"));
					break;
				
				case joaat("MP_Heist4_Tee_059_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_060_M"));
					break;
				
				case joaat("MP_Heist4_Tee_061_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_062_M"));
					break;
				
				case joaat("MP_Heist4_Tee_063_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_064_M"));
					break;
				
				case joaat("MP_Heist4_Tee_065_M"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_066_M"));
					break;
				
				case joaat("MP_Heist4_Tee_039_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_040_F"));
					break;
				
				case joaat("MP_Heist4_Tee_041_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_042_F"));
					break;
				
				case joaat("MP_Heist4_Tee_043_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_044_F"));
					break;
				
				case joaat("MP_Heist4_Tee_049_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_050_F"));
					break;
				
				case joaat("MP_Heist4_Tee_051_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_052_F"));
					break;
				
				case joaat("MP_Heist4_Tee_055_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_056_F"));
					break;
				
				case joaat("MP_Heist4_Tee_057_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_058_F"));
					break;
				
				case joaat("MP_Heist4_Tee_059_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_060_F"));
					break;
				
				case joaat("MP_Heist4_Tee_061_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_062_F"));
					break;
				
				case joaat("MP_Heist4_Tee_063_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_064_F"));
					break;
				
				case joaat("MP_Heist4_Tee_065_F"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_066_F"));
					break;
			}
			break;
		
		case joaat("mpVinewood_overlays"):
			switch (iParam2)
			{
				case joaat("CasinoTop_M_0"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_M"));
					break;
				
				case joaat("CasinoTop_M_1"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
				
				case joaat("CasinoTop_M_2"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
				
				case joaat("CasinoTop_M_3"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
				
				case joaat("CasinoTop_M_4"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
				
				case joaat("CasinoTop_M_5"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
				
				case joaat("CasinoTop_M_6"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
				
				case joaat("CasinoTop_M_7"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_M"));
					break;
				
				case joaat("CasinoTop_M_8"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_M"));
					break;
				
				case joaat("CasinoTop_M_9"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
				
				case joaat("CasinoTop_M_10"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
				
				case joaat("CasinoTop_M_11"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_M"));
					break;
				
				case joaat("CasinoTop_M_12"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_M"));
					break;
				
				case joaat("CasinoTop_M_13"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_M"));
					break;
				
				case joaat("CasinoTop_M_14"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_M"));
					break;
				
				case joaat("CasinoTop_M_15"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_M"));
					break;
				
				case joaat("CasinoTop_M_16"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_M"));
					break;
				
				case joaat("CasinoTop_M_17"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_M"));
					break;
				
				case joaat("CasinoTop_M_18"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_M"));
					break;
				
				case joaat("CasinoTop_M_19"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_M"));
					break;
				
				case joaat("CasinoTop_M_20"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_M"));
					break;
				
				case joaat("CasinoTop_M_21"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
				
				case joaat("CasinoTop_M_22"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
				
				case joaat("CasinoTop_M_23"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_M"));
					break;
				
				case joaat("CasinoTop_M_24"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
				
				case joaat("CasinoTop_M_25"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
				
				case joaat("CasinoTop_M_26"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_M"));
					break;
				
				case joaat("CasinoTop_M_27"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
				
				case joaat("CasinoTop_M_28"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
				
				case joaat("CasinoTop_M_29"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
				
				case joaat("CasinoTop_M_30"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
				
				case joaat("CasinoTop_M_31"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
				
				case joaat("CasinoTop_M_32"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
				
				case joaat("CasinoTop_M_33"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
				
				case joaat("CasinoTop_M_34"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
				
				case joaat("CasinoTop_M_35"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
				
				case joaat("CasinoTop_M_36"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
				
				case joaat("CasinoTop_M_37"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
				
				case joaat("CasinoTop_M_38"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
				
				case joaat("CasinoTop_M_39"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
				
				case joaat("CasinoTop_M_40"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
				
				case joaat("CasinoTop_M_41"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
				
				case joaat("CasinoTop_M_42"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
				
				case joaat("CasinoTop_M_43"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
				
				case joaat("CasinoTop_M_44"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
			}
			switch (iParam2)
			{
				case joaat("CasinoTop_F_0"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_F"));
					break;
				
				case joaat("CasinoTop_F_1"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
				
				case joaat("CasinoTop_F_2"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
				
				case joaat("CasinoTop_F_3"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
				
				case joaat("CasinoTop_F_4"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
				
				case joaat("CasinoTop_F_5"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
				
				case joaat("CasinoTop_F_6"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
				
				case joaat("CasinoTop_F_7"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_F"));
					break;
				
				case joaat("CasinoTop_F_8"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_F"));
					break;
				
				case joaat("CasinoTop_F_9"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
				
				case joaat("CasinoTop_F_10"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
				
				case joaat("CasinoTop_F_11"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_F"));
					break;
				
				case joaat("CasinoTop_F_12"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_F"));
					break;
				
				case joaat("CasinoTop_F_13"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_F"));
					break;
				
				case joaat("CasinoTop_F_14"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_F"));
					break;
				
				case joaat("CasinoTop_F_15"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_F"));
					break;
				
				case joaat("CasinoTop_F_16"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_F"));
					break;
				
				case joaat("CasinoTop_F_17"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_F"));
					break;
				
				case joaat("CasinoTop_F_18"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_F"));
					break;
				
				case joaat("CasinoTop_F_19"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_F"));
					break;
				
				case joaat("CasinoTop_F_20"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_F"));
					break;
				
				case joaat("CasinoTop_F_21"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
				
				case joaat("CasinoTop_F_22"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
				
				case joaat("CasinoTop_F_23"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_F"));
					break;
				
				case joaat("CasinoTop_F_24"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
				
				case joaat("CasinoTop_F_25"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
				
				case joaat("CasinoTop_F_26"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_F"));
					break;
				
				case joaat("CasinoTop_F_27"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
				
				case joaat("CasinoTop_F_28"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
				
				case joaat("CasinoTop_F_29"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
				
				case joaat("CasinoTop_F_30"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
				
				case joaat("CasinoTop_F_31"):
					unk_0x49A5A17556C31561(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
				
					break;
		
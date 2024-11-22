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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	BOOL bLocal_45 = 0;
	eViewMode evmLocal_46 = THIRD_PERSON_NEAR;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	BOOL bLocal_60 = 0;
	char* sLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
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
	BOOL bLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	Ped pedLocal_94 = 0;
	Ped pedLocal_95 = 0;
	Vehicle veLocal_96 = 0;
	Vehicle veLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	Cam caLocal_100 = 0;
	Cam caLocal_101 = 0;
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
	var uLocal_120 = 16;
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
	var uLocal_285 = 1;
	var uLocal_286 = 0;
	var uLocal_287 = 3;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	Hash hLocal_305 = 0;
	var uLocal_306 = 4;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 4;
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
	var uLocal_358 = 0;
	float fLocal_359 = 0f;
	var uLocal_360 = 0;
	float fLocal_361 = 0f;
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
	var uLocal_396 = 15;
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
	var uLocal_466 = 0;
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
	var uLocal_478 = 0;
	var uLocal_479 = 0;
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
	var uLocal_563 = 0;
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
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
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
	var uLocal_639 = 0;
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
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 1;
	Ped pedScriptParam_0 = 0;
#endregion

void main() // Position - 0x0
{
	BOOL flag;

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
	uLocal_54 = { 0f, 0f, 0f };
	iLocal_72 = -1;
	iLocal_74 = -1;
	iLocal_75 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_85 = -1;
	iLocal_291 = -1;
	fLocal_359 = (0.05f + 0.275f) - 0.01f;
	fLocal_361 = 0f;

	if (Global_4)
		SCRIPT::TERMINATE_THIS_THREAD();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_554(PLAYER::PLAYER_ID(), true))
			SCRIPT::TERMINATE_THIS_THREAD();
	
		if (func_553(PLAYER::PLAYER_ID(), true))
			SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (func_552(13) || func_552(14))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (!func_551() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(35))
		{
			func_542();
			func_541(true);
			func_536(&uLocal_396);
		}
	}

	SYSTEM::WAIT(0);
	pedLocal_94 = pedScriptParam_0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_535();
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, false, PLAYER::PLAYER_ID());
		_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}

	func_529();
	func_528(128);

	while (bLocal_60)
	{
		flag = true;
		func_525(&uLocal_396);
	
		if (func_551())
		{
			if (func_524(1024))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						func_528(1024);
						PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
					}
				}
			}
		
			if (!func_524(1024) && func_524(2048))
				SCRIPT::TERMINATE_THIS_THREAD();
		
			if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_94))
			{
				flag = false;
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
			{
				flag = false;
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
			}
		}
	
		if (!func_551() || !func_524(2048))
		{
			func_517();
		
			if (func_551())
			{
				func_516();
			
				if (func_524(128))
					bLocal_60 = false;
			}
		
			if (func_511())
			{
				if (flag)
				{
					if (iLocal_292 > 0)
						func_506(&uLocal_396);
				
					func_504();
					func_502();
				
					switch (iLocal_292)
					{
						case 0:
							if (iLocal_291 == -1)
							{
								if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_94))
									iLocal_291 = func_501();
								else if (func_499())
									iLocal_291 = 4;
							}
							else if (func_494())
							{
								if (func_493())
									if (func_551())
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
											TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_94, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
										else
											NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
									else
										TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_94, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
							
								iLocal_292 = 1;
								func_492("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
					
						case 1:
							if (func_491(iLocal_47, 4096))
								func_490();
						
							if (IS_CUSTOMER_A_PLAYER())
							{
								iLocal_292 = 2;
								func_492("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
						
							if (func_484())
							{
								iLocal_292 = 3;
								func_482(&iLocal_47, 64);
								Global_33102 = true;
								func_492("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
					
						case 2:
							func_98(&uLocal_396);
							break;
					
						case 3:
							func_3();
							break;
					
						default:
							break;
					}
				}
			}
			else
			{
				func_2(false);
			}
		
			func_1();
		}
	
		SYSTEM::WAIT(0);
	}

	func_491(iLocal_47, 2);
	func_492(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_542();
	func_536(&uLocal_396);
	return;
}

void func_1() // Position - 0x365
{
	return;
}

void func_2(BOOL bParam0) // Position - 0x36D
{
	if (bParam0)
		bLocal_60 = true;
	else
		bLocal_60 = false;

	return;
}

void func_3() // Position - 0x383
{
	if (iLocal_293 > 0)
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_96, false))
			if (!PED::IS_PED_INJURED(pedLocal_95))
				if (!PED::IS_PED_IN_VEHICLE(pedLocal_95, veLocal_96, false))
					func_97();

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_95) || ENTITY::IS_ENTITY_DEAD(pedLocal_95, false))
		func_96(15);

	switch (iLocal_293)
	{
		case 0:
			if (!(iLocal_294 == 0))
				iLocal_293 = 1;
			break;
	
		case 1:
			func_89();
			break;
	
		case 2:
			func_88();
			break;
	
		case 3:
			func_71();
			break;
	
		case 4:
			func_62();
			break;
	
		case 5:
			func_59();
			break;
	
		case 6:
			if (!PED::IS_PED_INJURED(pedLocal_95))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
				{
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = iLocal_63 - iLocal_62;
				
					if (iLocal_64 >= 10000 || !ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_94, pedLocal_95, 12f, 12f, 5f, false, true, 0))
					{
						func_492("prostitute WAITING TO END");
						func_97();
					}
				}
			}
			else
			{
				func_97();
			}
			break;
	
		case 7:
			if (!PATHFIND::ARE_NODES_LOADED_FOR_AREA(func_58(0), func_58(1), func_58(2), func_58(3)))
			{
				PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(func_58(0), func_58(1), func_58(2), func_58(3));
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(pedLocal_95, veLocal_96, uLocal_88, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(veLocal_96) * 0.65f, 0, 0, 786859, 4f, -1f);
				iLocal_293 = 8;
			}
			break;
	
		case 8:
			if (SYSTEM::VDIST2(uLocal_88, ENTITY::GET_ENTITY_COORDS(pedLocal_94, true)) < 25f && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_95, SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD) != 1)
			{
				iLocal_295 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				iLocal_293 = 11;
			}
		
			if (func_55(pedLocal_95))
				func_96(15);
			break;
	
		case 11:
			func_4();
			break;
	
		case 12:
			func_96(15);
			break;
	
		case 15:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_94) && ENTITY::DOES_ENTITY_EXIST(veLocal_96))
				if (PED::IS_PED_IN_VEHICLE(pedLocal_94, veLocal_96, false))
					if (!ENTITY::IS_ENTITY_DEAD(pedLocal_95, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_95, SCRIPT_TASK_LEAVE_ANY_VEHICLE) != 1)
							TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_94, 0, 16842752);
				else
					func_2(false);
			break;
	}

	return;
}

void func_4() // Position - 0x5C3
{
	switch (iLocal_300)
	{
		case 0:
			PED::SET_SCRIPTED_ANIM_SEAT_OFFSET(pedLocal_94, 0.916f);
		
			if (func_42(pedLocal_95))
			{
				func_40(&uLocal_117);
				iLocal_300 = 1;
			}
			break;
	
		case 1:
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(pedLocal_94, false)) < 22500f)
				func_38();
		
			func_35(veLocal_96);
		
			if (func_33(pedLocal_95))
			{
				_CONVERSATION_ADD_LINE(&uLocal_120, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_96(15);
			}
		
			if (func_7(&uLocal_117) > 1f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
				{
					func_5(&iLocal_47, 512);
					iLocal_300 = 3;
				}
			}
			break;
	
		case 3:
			func_96(15);
			break;
	
		case 5:
			func_96(15);
			break;
	}

	return;
}

void func_5(var uParam0, int iParam1) // Position - 0x691
{
	func_6(uParam0, iParam1);
	return;
}

void func_6(var uParam0, int iParam1) // Position - 0x6A1
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_7(int* piParam0) // Position - 0x6B6
{
	if (func_10(piParam0))
		if (func_9(piParam0))
			return piParam0->f_2;
		else
			return func_8(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_8(BOOL bParam0) // Position - 0x6F2
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

BOOL func_9(int* piParam0) // Position - 0x74A
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_10(int* piParam0) // Position - 0x757
{
	return IS_BIT_SET(*piParam0, 1);
}

int _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x764
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_12(sParam2, iParam3, false);
}

int func_12(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x7B2
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
					func_31();
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
	
		if (func_30(8, -1))
			return 0;
	
		Global_22362 = { Global_22356 };
		func_29();
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
			
				if (func_21())
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
		
			if (func_20())
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
		
			func_19();
			Global_22296 = bParam2;
		}
	
		Global_22288 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_18();
		func_13();
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
		func_31();
	}

	return 0;
}

void func_13() // Position - 0xA80
{
	if (!func_14())
		return;

	if (Global_22292)
	{
		TEXT_LABEL_COPY(&(Global_1971465.f_1), { Global_21905 }, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}

	return;
}

BOOL func_14() // Position - 0xAB7
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79389)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_15(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_15(Player plParam0) // Position - 0xB1A
{
	return func_16(plParam0, 20);
}

BOOL func_16(Player plParam0, int iParam1) // Position - 0xB2A
{
	return IS_BIT_SET(Global_1887305[plParam0 /*610*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0xB42
{
	return -1;
}

void func_18() // Position - 0xB4B
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

void func_19() // Position - 0xB7D
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

BOOL func_20() // Position - 0xC12
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

BOOL func_21() // Position - 0xC39
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xCD2
{
	if (func_552(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xD74
{
	func_24();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_24() // Position - 0xD8D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_25(character) && !func_552(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_25(Global_113969.f_2366.f_539.f_4321))
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

BOOL func_25(eCharacter echParam0) // Position - 0xE8A
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xE96
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xED3
{
	if (func_25(character))
		return func_28(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_28(eCharacter echParam0) // Position - 0xEF8
{
	return Global_2169[echParam0 /*29*/];
}

void func_29() // Position - 0xF07
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

BOOL func_30(int iParam0, int iParam1) // Position - 0xF5F
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

void func_31() // Position - 0xF97
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xFEE
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

BOOL func_33(Ped pedParam0) // Position - 0x1044
{
	if (func_34())
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(pedParam0), ENTITY::GET_ENTITY_COORDS(pedParam0, true), true))
			return true;

	return false;
}

BOOL func_34() // Position - 0x106E
{
	if (Global_23322)
		return true;

	return false;
}

void func_35(Vehicle veParam0) // Position - 0x1084
{
	if (iLocal_295 != 1 && iLocal_295 != 2)
		return;

	if (func_37())
		func_36(&veParam0);

	return;
}

void func_36(var uParam0) // Position - 0x10AE
{
	Vector3 vector;
	Vector3 vector2;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		vector = { 0f, 0f, -0.1f };
		vector2 = { 0f, 0f, 0f };
		ENTITY::APPLY_FORCE_TO_ENTITY(*uParam0, 1, vector, vector2, 0, true, true, true, true, false);
	}

	return;
}

BOOL func_37() // Position - 0x10E9
{
	return ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_94, 876132797);
}

void func_38() // Position - 0x10FC
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_39();
	return;
}

void func_39() // Position - 0x110C
{
	Global_23692.f_134 = 1;
	return;
}

void func_40(int* piParam0) // Position - 0x111A
{
	func_41(piParam0, 0f);
	return;
}

void func_41(int* piParam0, float fParam1) // Position - 0x1129
{
	piParam0->f_1 = func_8(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

BOOL func_42(Ped pedParam0) // Position - 0x1154
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_61))
	{
		sLocal_61 = func_50(pedParam0, false, false);
		return false;
	}

	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_61))
	{
		return false;
	}
	else
	{
		func_43(pedLocal_94, func_49(), true, SYSTEM::FLOOR(15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_70) / 2f))), true);
	
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
			func_43(pedParam0, func_49(), false, SYSTEM::FLOOR(15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_70) / 2f))), true);
	
		func_492("anim_dict has loaded, triggering anims?");
		func_482(&iLocal_47, 512);
		return true;
	}

	return false;
}

void func_43(Ped pedParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x11E3
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

	evmLocal_46 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && func_48(false, true))
		if (evmLocal_46 != FIRST_PERSON)
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(FIRST_PERSON);

	flag = func_47(vehiclePedIsIn);
	animDict = func_50(pedParam0, false, false);

	if (!STREAMING::HAS_ANIM_DICT_LOADED(animDict))
	{
		STREAMING::REQUEST_ANIM_DICT(animDict);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_PLAY_ANIM(0, animDict, func_44(0, bParam2, bParam1, flag), 8f, -8f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_44(1, bParam2, bParam1, flag), 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_44(2, bParam2, bParam1, flag), 8f, -4f, iParam3, 1, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_44(3, bParam2, bParam1, flag), 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_44(4, bParam2, bParam1, flag), 4f, -2f, -1, 0, 0, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
	
		if (bParam4)
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}

	return;
}

char* func_44(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1328
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_46(18);
					else
						str = func_46(23);
				else if (bParam1)
					str = func_46(8);
				else
					str = func_46(13);
			else if (bParam2)
				if (bParam1)
					str = func_45(18);
				else
					str = func_45(23);
			else if (bParam1)
				str = func_45(8);
			else
				str = func_45(13);
			break;
	
		case 1:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_46(19);
					else
						str = func_46(24);
				else if (bParam1)
					str = func_46(9);
				else
					str = func_46(14);
			else if (bParam2)
				if (bParam1)
					str = func_45(19);
				else
					str = func_45(24);
			else if (bParam1)
				str = func_45(9);
			else
				str = func_45(14);
			break;
	
		case 2:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_46(20);
					else
						str = func_46(25);
				else if (bParam1)
					str = func_46(10);
				else
					str = func_46(15);
			else if (bParam2)
				if (bParam1)
					str = func_45(20);
				else
					str = func_45(25);
			else if (bParam1)
				str = func_45(10);
			else
				str = func_45(15);
			break;
	
		case 3:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_46(21);
					else
						str = func_46(26);
				else if (bParam1)
					str = func_46(11);
				else
					str = func_46(16);
			else if (bParam2)
				if (bParam1)
					str = func_45(21);
				else
					str = func_45(26);
			else if (bParam1)
				str = func_45(11);
			else
				str = func_45(16);
			break;
	
		case 4:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_46(22);
					else
						str = func_46(27);
				else if (bParam1)
					str = func_46(12);
				else
					str = func_46(17);
			else if (bParam2)
				if (bParam1)
					str = func_45(22);
				else
					str = func_45(27);
			else if (bParam1)
				str = func_45(12);
			else
				str = func_45(17);
			break;
	
		case 5:
			if (bParam3)
				if (bParam1)
					str = func_46(3);
				else
					str = func_46(2);
			else if (bParam1)
				str = func_45(3);
			else
				str = func_45(2);
			break;
	
		case 6:
			break;
	}

	return str;
}

char* func_45(int iParam0) // Position - 0x160A
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

char* func_46(int iParam0) // Position - 0x17C8
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

BOOL func_47(Vehicle veParam0) // Position - 0x1986
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
			case -508485403:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -1297908787:
			case -1901288301:
			case -1949393167:
			case 1509896619:
			case -2093548880:
			case 801538932:
				return true;
		}
	}

	return false;
}

BOOL func_48(BOOL bParam0, BOOL bParam1) // Position - 0x1A8F
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

BOOL func_49() // Position - 0x1ABE
{
	return iLocal_295 == 0;
}

char* func_50(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1ACB
{
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			if (func_47(vehiclePedIsIn))
				if (!func_48(false, true) || bParam2 && !bParam1)
					return func_54();
				else
					return func_53();
			else if (ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 1456336509)
				return "anim@mini@prostitutes@sex@veh_vstr@";
	}

	if (!func_48(false, true) || bParam2 && !bParam1)
		return func_52();

	return func_51();
}

char* func_51() // Position - 0x1B65
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_52() // Position - 0x1B71
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_53() // Position - 0x1B7D
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_54() // Position - 0x1B89
{
	return "mini@prostitutes@sexlow_veh";
}

BOOL func_55(Ped pedParam0) // Position - 0x1B95
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		if (PED::IS_PED_BEING_JACKED(pedParam0) || !func_57(pedParam0, veLocal_96, -1))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
			PED::SET_PED_FLEE_ATTRIBUTES(pedParam0, 196624, true);
		
			if (_GET_RANDOM_BOOL())
				TASK::TASK_SMART_FLEE_COORD(pedParam0, entityCoords, 300f, -1, true, true);
			else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_PEDS_JACKER(pedParam0), false))
				TASK::TASK_COMBAT_PED(pedParam0, PED::GET_PEDS_JACKER(pedParam0), 0, 16);
			else
				TASK::TASK_SMART_FLEE_COORD(pedParam0, entityCoords, 300f, -1, true, true);
		}
	}

	return false;
}

BOOL _GET_RANDOM_BOOL() // Position - 0x1C27
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

BOOL func_57(Ped pedParam0, Vehicle veParam1, int iParam2) // Position - 0x1C45
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !ENTITY::IS_ENTITY_DEAD(veParam1, false))
		if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, veParam1))
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, iParam2, false) == pedParam0)
				return true;

	return false;
}

float func_58(int iParam0) // Position - 0x1C83
{
	float entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_94, true) };
	num = { uLocal_88 };

	if (iParam0 == 0)
		if (entityCoords < num)
			return entityCoords - 20f;
		else
			return num - 20f;

	if (iParam0 == 1)
		if (entityCoords.f_1 < num.f_1)
			return entityCoords.f_1 - 20f;
		else
			return num.f_1 - 20f;

	if (iParam0 == 2)
		if (entityCoords > num)
			return entityCoords + 20f;
		else
			return num + 20f;

	if (entityCoords.f_1 > num.f_1)
		return entityCoords.f_1 + 20f;

	return num.f_1 + 20f;
}

void func_59() // Position - 0x1D4A
{
	if (!PED::IS_PED_INJURED(pedLocal_95))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_96, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_95, veLocal_96, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(pedLocal_94) > 0)
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_94, veLocal_96, false))
						{
							func_492("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_96, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_95, iLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
							uLocal_88 = { func_60(ENTITY::GET_ENTITY_COORDS(pedLocal_94, true)) };
							STREAMING::REQUEST_ANIM_DICT(func_50(pedLocal_94, false, false));
							iLocal_293 = 7;
							iLocal_62 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}

	return;
}

Vector3 func_60(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1E1B
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 32; i = i + 1)
	{
		if (SYSTEM::VDIST2(vParam0, func_61(i)) < SYSTEM::VDIST2(vParam0, func_61(num)))
			num = i;
	}

	return func_61(num);
}

Vector3 func_61(int iParam0) // Position - 0x1E63
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { -1449.0748f, -634.0139f, 29.094f };
			break;
	
		case 1:
			unk = { -1266.2913f, -1361.1747f, 3.222f };
			break;
	
		case 2:
			unk = { -227.0429f, 311.6679f, 91.1655f };
			break;
	
		case 3:
			unk = { -1310.9777f, -235.9881f, 41.1789f };
			break;
	
		case 4:
			unk = { -545.299f, -874.6625f, 26.1981f };
			break;
	
		case 5:
			unk = { -192.1116f, -1332.3854f, 30.3304f };
			break;
	
		case 6:
			unk = { 196.6188f, -1850.3964f, 26.2005f };
			break;
	
		case 7:
			unk = { 322.9744f, -1000.2299f, 28.2401f };
			break;
	
		case 8:
			unk = { 38.824f, -98.3984f, 55.2507f };
			break;
	
		case 9:
			unk = { -1800.7599f, -404.1213f, 43.8109f };
			break;
	
		case 10:
			unk = { 1421.3337f, -1618.8297f, 58.3324f };
			break;
	
		case 11:
			unk = { 983.5914f, -2360.14f, 29.5098f };
			break;
	
		case 12:
			unk = { 97.9046f, -2501.28f, 5.0001f };
			break;
	
		case 13:
			unk = { 1591.9209f, 6516.8413f, 16.3155f };
			break;
	
		case 14:
			unk = { 1278.7299f, 3624.059f, 32.0408f };
			break;
	
		case 15:
			unk = { 2464.6675f, 5526.8154f, 44.2143f };
			break;
	
		case 16:
			unk = { 2052.5796f, 4637.4766f, 39.642f };
			break;
	
		case 17:
			unk = { 1435.6084f, 4483.9507f, 49.2513f };
			break;
	
		case 18:
			unk = { 218.214f, 4439.288f, 66.9056f };
			break;
	
		case 19:
			unk = { 16.9496f, 3632.3499f, 39.2848f };
			break;
	
		case 20:
			unk = { 2.0464f, 3293.74f, 40.2594f };
			break;
	
		case 21:
			unk = { -1195.701f, 2639.13f, 15.1653f };
			break;
	
		case 22:
			unk = { -1663.6412f, 2477.778f, 30.9941f };
			break;
	
		case 23:
			unk = { -2505.643f, 3677.8252f, 12.1719f };
			break;
	
		case 24:
			unk = { -2179.2092f, 4264.236f, 47.9904f };
			break;
	
		case 25:
			unk = { -758.9616f, 5612.7803f, 29.4536f };
			break;
	
		case 26:
			unk = { -276.8032f, 6327.1885f, 31.4262f };
			break;
	
		case 27:
			unk = { 1483.8394f, 6366.199f, 22.6875f };
			break;
	
		case 28:
			unk = { 949.013f, 3551.7532f, 32.9687f };
			break;
	
		case 29:
			unk = { 180.9372f, 3051.7812f, 42.1131f };
			break;
	
		case 30:
			unk = { -462.9046f, 6115.419f, 28.8805f };
			break;
	
		case 31:
			unk = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}

	return unk;
}

void func_62() // Position - 0x21F6
{
	float entitySpeed;

	if (!PED::IS_PED_INJURED(pedLocal_95))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_96, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_95, veLocal_96, false))
			{
				entitySpeed = ENTITY::GET_ENTITY_SPEED(veLocal_96);
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_95, pedLocal_94, 15f, 15f, 5f, false, true, 0) && entitySpeed <= 1f)
				{
					func_69(pedLocal_94);
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = iLocal_63 - iLocal_62;
				
					if (iLocal_64 >= iLocal_66)
					{
						if (func_551())
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_95))
								TASK::TASK_CLEAR_LOOK_AT(pedLocal_95);
						else
							TASK::TASK_CLEAR_LOOK_AT(pedLocal_95);
					
						iLocal_66 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
					
						if (iLocal_66 > 2500)
						{
							TASK::CLEAR_PED_TASKS(pedLocal_94);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
							TASK::TASK_ENTER_VEHICLE(0, veLocal_96, -1, 0, 1f, 8388609, 0, 0);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_94, iLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
							func_492("other GIVES MONEY");
							iLocal_293 = 5;
						}
						else
						{
							func_68();
							func_63();
						
							if (!PED::IS_PED_INJURED(pedLocal_95))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_96, false))
								{
									if (PED::IS_PED_IN_VEHICLE(pedLocal_95, veLocal_96, false))
									{
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
										TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 2000));
										TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_96, 10f, 786603);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
										TASK::TASK_PERFORM_SEQUENCE(pedLocal_95, iLocal_99);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
										iLocal_62 = MISC::GET_GAME_TIMER();
									}
								}
							}
						
							func_492("prostitute REFUSED MONEY 2");
						
							if (func_551())
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_95))
									TASK::TASK_CLEAR_LOOK_AT(pedLocal_95);
							else
								TASK::TASK_CLEAR_LOOK_AT(pedLocal_95);
						
							iLocal_293 = 6;
						}
					}
				}
				else
				{
					if (func_551())
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_95))
							TASK::TASK_CLEAR_LOOK_AT(pedLocal_95);
					else
						TASK::TASK_CLEAR_LOOK_AT(pedLocal_95);
				
					func_97();
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
			
				if (func_551())
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_95))
						TASK::TASK_CLEAR_LOOK_AT(pedLocal_95);
				else
					TASK::TASK_CLEAR_LOOK_AT(pedLocal_95);
			
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}

	return;
}

BOOL func_63() // Position - 0x23E9
{
	int taskSequenceId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_94) || PED::IS_PED_INJURED(pedLocal_94))
		return true;

	if (!func_551())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_94, true))
		{
			TASK::TASK_WANDER_STANDARD(pedLocal_94, 1193033728, 0);
		}
		else if (func_491(iLocal_47, 4194304))
		{
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		
			if (func_491(iLocal_73, 524288))
				TASK::TASK_PLAY_ANIM(0, func_67(iLocal_291), func_66(7), 8f, -1.5f, -1, 0, 0, false, false, false);
		
			func_64(true);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_94, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			func_482(&iLocal_47, 16384);
			func_40(&uLocal_111);
		}
	
		return true;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_94, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
		{
			TASK::TASK_WANDER_STANDARD(pedLocal_94, 1193033728, 0);
			return true;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
		}
	}

	switch (iLocal_52)
	{
		case 0:
			if (func_491(iLocal_47, 4194304))
				iLocal_52 = 1;
			break;
	
		case 1:
			if (func_491(iLocal_73, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
				{
					TASK::TASK_PLAY_ANIM(pedLocal_94, func_67(iLocal_291), func_66(7), 8f, -1.5f, -1, 0, 0, false, false, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
					return false;
				}
			}
		
			iLocal_52 = 2;
			break;
	
		case 2:
			if (func_491(iLocal_73, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_PLAY_ANIM) == 7)
					{
						func_64(false);
						iLocal_52 = 3;
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
			{
				func_64(false);
				iLocal_52 = 3;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
			}
			break;
	
		case 3:
			func_482(&iLocal_47, 16384);
			func_40(&uLocal_111);
			return true;
	}

	return false;
}

void func_64(BOOL bParam0) // Position - 0x25B9
{
	Vector3 entityCoords;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(pedLocal_94) || TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_94) || PED::IS_PED_USING_SCENARIO(pedLocal_94, func_65(0)) || PED::IS_PED_USING_SCENARIO(pedLocal_94, func_65(1)))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_94, true) };

	if (!TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(entityCoords, func_65(0), 20f, true) && !TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(entityCoords, func_65(1), 20f, true))
	{
		if (bParam0)
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
		else
			TASK::TASK_WANDER_STANDARD(pedLocal_94, 1193033728, 0);
	
		return;
	}

	if (!bParam0)
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(pedLocal_94, entityCoords, 20f, 0);
	else
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, entityCoords, 20f, 0);

	return;
}

char* func_65(int iParam0) // Position - 0x2680
{
	if (iParam0 == 0)
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";

	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_66(int iParam0) // Position - 0x269A
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
	
		case 1:
			return "idle_a";
	
		case 2:
			return "idle_b";
	
		case 3:
			return "idle_c";
	
		case 4:
			return "idle_wait";
	
		case 5:
			return "idle_reject";
	
		case 8:
			return "idle_reject_loop_a";
	
		case 9:
			return "idle_reject_loop_b";
	
		case 10:
			return "idle_reject_loop_c";
	
		case 11:
			return "idle_outro";
	
		case 6:
			return "reject_2_idle";
	
		case 7:
			return "reject_outro";
	}

	return "";
}

char* func_67(int iParam0) // Position - 0x276D
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "mini@hookers_spcrackhead";
			break;
	
		case 1:
			str = "mini@hookers_spcokehead";
			break;
	
		case 3:
		case 4:
			str = "mini@hookers_spfrench";
			break;
	
		case 2:
		default:
			str = "mini@hookers_spvanilla";
			break;
	}

	return str;
}

void func_68() // Position - 0x27C0
{
	if (PED::IS_PED_INJURED(pedLocal_94))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94))
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		else
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

void func_69(Ped pedParam0) // Position - 0x2807
{
	if (!PED::IS_PED_INJURED(pedParam0))
		if (func_70(pedParam0))
			PED::SET_PED_RESET_FLAG(pedParam0, 109, true);

	return;
}

BOOL func_70(Ped pedParam0) // Position - 0x282B
{
	if (!PED::IS_PED_INJURED(pedParam0))
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_67(iLocal_291), func_66(1), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_67(iLocal_291), func_66(2), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_67(iLocal_291), func_66(3), 3))
			return true;

	return false;
}

void func_71() // Position - 0x288A
{
	float entitySpeed;

	if (!PED::IS_PED_INJURED(pedLocal_95))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_96, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_95, veLocal_96, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(pedLocal_94) > 1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_94, pedLocal_95, 20f, 20f, 10f, false, true, 0))
						{
							entitySpeed = ENTITY::GET_ENTITY_SPEED(veLocal_96);
						
							if (entitySpeed <= 1f)
							{
								func_72(false);
								iLocal_62 = MISC::GET_GAME_TIMER();
								iLocal_66 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000);
								func_492("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_293 = 4;
							}
						}
						else
						{
							func_492("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_97();
						}
					}
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}

	return;
}

BOOL func_72(BOOL bParam0) // Position - 0x2957
{
	int randomIntInRange;
	int taskSequenceId;

	if (!func_551())
	{
		if (bParam0)
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(pedLocal_94, "PROSTITUTE_GROUP", 0);
			func_87("PROSTITUTES_SOLICIT_SCENE");
		}
	
		func_73();
	
		if (func_491(iLocal_47, 4194304))
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_291), func_66(0), 2f, -2f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_291), func_66(randomIntInRange), 2f, -2f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_291), func_66(4), 2f, -2f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_94, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	
		return true;
	}

	switch (iLocal_51)
	{
		case 0:
			if (bParam0)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(pedLocal_94, "PROSTITUTE_GROUP", 0);
				func_87("PROSTITUTES_SOLICIT_SCENE");
			}
		
			func_73();
			iLocal_51 = 1;
			break;
	
		case 1:
			if (func_491(iLocal_47, 4194304))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
				{
					TASK::TASK_PLAY_ANIM(pedLocal_94, func_67(iLocal_291), func_66(0), 2f, -2f, -1, 0, 0, false, false, false);
					iLocal_51 = 2;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
				}
			}
			break;
	
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_PLAY_ANIM) == 7)
				{
					randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
					TASK::TASK_PLAY_ANIM(pedLocal_94, func_67(iLocal_291), func_66(randomIntInRange), 2f, -2f, -1, 0, 0, false, false, false);
					iLocal_51 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
			}
			break;
	
		case 3:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_PLAY_ANIM) == 7)
				{
					TASK::TASK_PLAY_ANIM(pedLocal_94, func_67(iLocal_291), func_66(4), 2f, -2f, -1, 1, 0, false, false, false);
					iLocal_51 = 4;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
			}
			break;
	
		case 4:
			iLocal_51 = 0;
			return true;
	}

	return false;
}

void func_73() // Position - 0x2B39
{
	if (PED::IS_PED_INJURED(pedLocal_94))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94))
	{
		switch (_GET_CURRENT_PLAYER_CHARACTER())
		{
			case CHAR_MICHAEL:
				if (!func_74(pedLocal_94))
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				else
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				break;
		
			case CHAR_FRANKLIN:
				if (!func_74(pedLocal_94))
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				else
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				break;
		
			case CHAR_TREVOR:
				if (!func_74(pedLocal_94))
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				else
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				break;
		}
	}

	return;
}

BOOL func_74(Ped pedParam0) // Position - 0x2BFC
{
	int num;

	num = func_77(pedParam0);
	return func_75(num);
}

BOOL func_75(int iParam0) // Position - 0x2C12
{
	if (func_76(iParam0) > 0)
		return true;

	return false;
}

int func_76(int iParam0) // Position - 0x2C29
{
	int num;

	num = 0;

	if (iParam0 == -1)
		return 0;

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
		num = Global_113969.f_10052.f_1[iParam0 /*11*/][0];
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
		num = Global_113969.f_10052.f_1[iParam0 /*11*/][1];
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
		num = Global_113969.f_10052.f_1[iParam0 /*11*/][2];

	return num;
}

int func_77(Ped pedParam0) // Position - 0x2C94
{
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (func_76(i) > 0)
				if (func_83(pedParam0, i) && func_79(pedParam0, i) && func_78(pedParam0, i))
					return i;
		}
	}

	return -1;
}

BOOL func_78(Ped pedParam0, int iParam1) // Position - 0x2CEF
{
	if (PED::IS_PED_MODEL(pedParam0, Global_113969.f_10052.f_1[iParam1 /*11*/].f_10))
		return true;

	return false;
}

int func_79(Ped pedParam0, int iParam1) // Position - 0x2D14
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_80(pedParam0, iParam1, i))
			return 0;
	}

	return 1;
}

BOOL func_80(Ped pedParam0, int iParam1, int iParam2) // Position - 0x2D41
{
	ePedComponentType componentId;

	componentId = func_82(iParam2);
	return PED::GET_PED_TEXTURE_VARIATION(pedParam0, componentId) == func_81(iParam1, iParam2);
}

int func_81(int iParam0, int iParam1) // Position - 0x2D62
{
	if (func_75(iParam0))
		return Global_113969.f_10052.f_1[iParam0 /*11*/].f_7[iParam1];

	return -1;
}

ePedComponentType func_82(int iParam0) // Position - 0x2D8A
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 2;
			break;
	}

	return num;
}

int func_83(Ped pedParam0, int iParam1) // Position - 0x2DB3
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_84(pedParam0, iParam1, i))
			return 0;
	}

	return 1;
}

BOOL func_84(Ped pedParam0, int iParam1, int iParam2) // Position - 0x2DE0
{
	ePedComponentType componentId;

	componentId = func_86(iParam2);
	return PED::GET_PED_DRAWABLE_VARIATION(pedParam0, componentId) == func_85(iParam1, iParam2);
}

int func_85(int iParam0, int iParam1) // Position - 0x2E01
{
	if (func_75(iParam0))
		return Global_113969.f_10052.f_1[iParam0 /*11*/].f_4[iParam1];

	return -1;
}

ePedComponentType func_86(int iParam0) // Position - 0x2E29
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 2;
			break;
	}

	return num;
}

void func_87(char* sParam0) // Position - 0x2E52
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		AUDIO::START_AUDIO_SCENE(sParam0);

	return;
}

void func_88() // Position - 0x2E6B
{
	float entitySpeed;
	var maximum;
	var minimum;
	var unk5;
	float offsetFromEntityInWorldCoords;
	Vector3 offsetFromEntityInWorldCoords2;
	Vector3 entityCoords;

	if (!PED::IS_PED_INJURED(pedLocal_95))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_96, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_95, veLocal_96, false))
			{
				entitySpeed = ENTITY::GET_ENTITY_SPEED(veLocal_96);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_95, SCRIPT_TASK_VEHICLE_PARK) == 7 || entitySpeed <= 1f)
				{
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veLocal_96), &minimum, &maximum);
					unk5 = { maximum - minimum };
					unk5 = { unk5 / { 2f, 2f, 2f } };
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_96, 0.2f, 0.2f, 0f) };
					offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_96, 0.2f, 0.2f, 0f) };
					entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_94, true) };
				
					if (SYSTEM::VDIST(entityCoords, offsetFromEntityInWorldCoords2) < SYSTEM::VDIST(entityCoords, offsetFromEntityInWorldCoords))
						offsetFromEntityInWorldCoords = { offsetFromEntityInWorldCoords2 };
				
					TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, offsetFromEntityInWorldCoords, offsetFromEntityInWorldCoords.f_1, offsetFromEntityInWorldCoords.f_2, 1f, -1, 0.5f, 8192, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_95, 0);
					TASK::TASK_STAND_STILL(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_94, iLocal_99);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
					func_492("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_293 = 3;
				}
				else
				{
					func_492("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF VEHICLE");
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}

	return;
}

void func_89() // Position - 0x2FBE
{
	Vector3 entityCoords;

	if (!PED::IS_PED_INJURED(pedLocal_95))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_96, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_95, veLocal_96, false))
			{
				if (func_91(&veLocal_96))
				{
					if (func_90(ENTITY::GET_ENTITY_COORDS(pedLocal_95, true), 1106247680))
						return;
				
					entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_94, true) };
				
					if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(entityCoords, &entityCoords, 8, 1077936128, 0))
					{
						PED::SET_DRIVER_ABILITY(pedLocal_95, 1f);
						PED::SET_DRIVER_RACING_MODIFIER(pedLocal_95, 0.2f);
						PED::SET_DRIVER_AGGRESSIVENESS(pedLocal_95, 0.05f);
						TASK::TASK_VEHICLE_PARK(pedLocal_95, veLocal_96, entityCoords, 0f, 3, 360f, true);
						TASK::TASK_LOOK_AT_ENTITY(pedLocal_95, pedLocal_94, -1, SLF_WHILE_NOT_IN_FOV, 4);
						func_492("OTHER TOLD TO PULL OVER");
						iLocal_293 = 2;
					}
				}
				else
				{
					func_492("EXIT - Vehicle is not suitable");
					func_96(15);
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				func_96(15);
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_96(15);
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_96(15);
	}

	return;
}

BOOL func_90(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x30B3
{
	if (func_551())
		return PED::IS_COP_PED_IN_AREA_3D(uParam0 - { iParam3, iParam3, iParam3 }, uParam0 + { iParam3, iParam3, iParam3 });

	return VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(uParam0 - { iParam3, iParam3, iParam3 }, uParam0 + { iParam3, iParam3, iParam3 }) || PED::IS_COP_PED_IN_AREA_3D(uParam0 - { iParam3, iParam3, iParam3 }, uParam0 + { iParam3, iParam3, iParam3 });
}

BOOL func_91(var uParam0) // Position - 0x3119
{
	Hash entityModel;
	int vehicleNumberOfPassengers;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(*uParam0);
	
		if (func_95(entityModel, false) && func_93(*uParam0))
		{
			if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0) > 0)
			{
				vehicleNumberOfPassengers = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(*uParam0, false, true);
			
				if (vehicleNumberOfPassengers == 0 && VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 0, false) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*uParam0, 1) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*uParam0, 0) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, 0, false) == pedLocal_94)
				{
					if (func_47(*uParam0))
					{
						if (!func_491(iLocal_47, 32768))
						{
							func_482(&iLocal_47, 32768);
						
							if (!func_491(iLocal_47, 8))
							{
								STREAMING::REQUEST_CLIP_SET(func_92());
								func_482(&iLocal_47, 8);
							}
						}
					}
					else
					{
						if (func_491(iLocal_47, 32768))
							func_5(&iLocal_47, 32768);
					
						if (func_491(iLocal_47, 8))
						{
							if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
							{
								STREAMING::REMOVE_CLIP_SET(func_92());
								func_5(&iLocal_47, 8);
							}
						}
					}
				
					return true;
				}
			}
		}
	}

	return false;
}

char* func_92() // Position - 0x322A
{
	return "clipset@veh@low@ps@female@base";
}

int func_93(Vehicle veParam0) // Position - 0x3236
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (func_94(ENTITY::GET_ENTITY_MODEL(veParam0)))
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
			case -1804415708:
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 4))
					return 0;
				break;
		
			case 1107404867:
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 4) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case -1728685474:
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case -1958428933:
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case -682108547:
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == -1)
					return 0;
				break;
		
			case 1717532765:
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case -452604007:
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
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
			case -508485403:
			case 237329608:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -541039502:
			case 2126816039:
			case -1297908787:
			case -1901288301:
			case 1830236137:
			case -1707715210:
			case -1236346590:
			case -428411780:
			case -1149121978:
			case -1282491670:
			case -1949393167:
			case -201773865:
			case 1509896619:
			case -2093548880:
			case 801538932:
			case 1478163132:
			case -1920284504:
			case -1174301217:
			case -1736391383:
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
				return 1;
		}
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == 931866387 && ENTITY::GET_ENTITY_MODEL(veParam0) == 729783779)
			return 1;
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == 1480261038 && ENTITY::GET_ENTITY_MODEL(veParam0) == 1644055914 || ENTITY::GET_ENTITY_MODEL(veParam0) == 1429622905)
			return 1;
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == 1480261038 && ENTITY::GET_ENTITY_MODEL(veParam0) == 15214558)
			return 1;
	}

	return 0;
}

BOOL func_94(Hash hParam0) // Position - 0x3724
{
	switch (hParam0)
	{
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case 353883353:
		case -34623805:
		case 456714581:
		case -1779120616:
		case -1536924937:
		case -1683328900:
		case 1922257928:
			return true;
	
		case -1233767450:
		case 741586030:
		case -1674384553:
		case 1249425552:
		case 1452003510:
		case 1737348074:
		case -1628000569:
		case -773802025:
			return true;
	}

	return false;
}

int func_95(Hash hParam0, BOOL bParam1) // Position - 0x37B4
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0) || VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0))
		return 0;

	if (func_94(hParam0))
		return 0;

	if (!bParam1)
		if (hParam0 == 2046537925 || hParam0 == -1627000575 || hParam0 == 1912215274 || hParam0 == -1973172295 || hParam0 == 1127131465 || hParam0 == -1647941228 || hParam0 == 1147287684 || hParam0 == -537896628)
			return 0;

	if (hParam0 == -1177863319 || hParam0 == 37348240 || hParam0 == 1051415893 || hParam0 == -1297672541 || hParam0 == -1106353882 || hParam0 == 886810209 || hParam0 == -212993243 || hParam0 == -121446169 || hParam0 == 1909189272 || hParam0 == 1617472902 || hParam0 == 1031562256 || hParam0 == 500482303 || hParam0 == 444994115 || hParam0 == -941272559 || hParam0 == -507495760 || hParam0 == 408825843 || hParam0 == 1141395928 || hParam0 == 1486521356 || hParam0 == 775514032 || hParam0 == -1933242328)
		return 0;

	return 1;
}

void func_96(int iParam0) // Position - 0x3997
{
	iLocal_293 = iParam0;
	return;
}

void func_97() // Position - 0x39A4
{
	if (func_551())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
		{
			TASK::CLEAR_PED_TASKS(pedLocal_94);
			TASK::TASK_CLEAR_LOOK_AT(pedLocal_94);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(pedLocal_94);
		TASK::TASK_CLEAR_LOOK_AT(pedLocal_94);
	}

	pedLocal_95 = 0;
	veLocal_96 = 0;
	TASK::TASK_PLAY_ANIM(pedLocal_94, func_67(iLocal_291), func_66(4), 2f, -2f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.9f), false, false, false);
	func_96(0);
	iLocal_294 = 0;
	iLocal_292 = 1;
	return;
}

void func_98(var uParam0) // Position - 0x3A11
{
	if (!func_491(iLocal_47, 32))
		iLocal_292 = 1;

	if (iLocal_293 > 1 && iLocal_293 != 12)
	{
		if (!func_491(iLocal_47, 33554432))
		{
			if (func_551())
			{
				if (Global_1919967 || func_474())
				{
					func_473(false);
					func_482(&iLocal_47, 33554432);
				}
			}
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (func_491(iLocal_47, 1048576) || func_491(iLocal_47, 8192))
				{
					func_473(false);
					func_482(&iLocal_47, 33554432);
				}
			}
		}
	}

	switch (iLocal_293)
	{
		case 0:
			if (func_491(iLocal_47, 16384) || func_491(iLocal_47, 8388608))
			{
				if (!func_10(&uLocal_111))
					func_472(&uLocal_111);
			
				if (func_471(&uLocal_111, 25f))
				{
					func_5(&iLocal_47, 16384);
					func_5(&iLocal_47, 8388608);
				}
			}
			else if (iLocal_294 != 0 && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_NO_MONEY" /*You need more cash to pick up a prostitute.*/))
			{
				func_64(false);
			
				switch (_GET_CURRENT_PLAYER_CHARACTER())
				{
					case CHAR_MICHAEL:
						_CONVERSATION_INITIALIZE_ACTOR(&uLocal_120, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						break;
				
					case CHAR_FRANKLIN:
						_CONVERSATION_INITIALIZE_ACTOR(&uLocal_120, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						break;
				
					case CHAR_TREVOR:
						_CONVERSATION_INITIALIZE_ACTOR(&uLocal_120, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						break;
				}
			
				iLocal_293 = 1;
			}
			else
			{
				func_468();
				iLocal_294 = 2;
			}
			break;
	
		case 1:
			func_455(uParam0);
			break;
	
		case 2:
			func_442(uParam0);
			break;
	
		case 3:
			func_441();
			break;
	
		case 4:
			func_429(uParam0);
			break;
	
		case 5:
			func_411();
			break;
	
		case 6:
			func_410(uParam0);
			break;
	
		case 7:
			func_389();
			func_381();
			break;
	
		case 8:
			func_378();
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			func_232();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
		
			if (func_551())
				func_226(uParam0);
			break;
	
		case 9:
			func_223();
			break;
	
		case 10:
			func_220();
			break;
	
		case 11:
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			func_125();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			func_122(uParam0);
		
			if (func_551())
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 433, true);
				func_226(uParam0);
			}
			break;
	
		case 12:
			func_490();
			break;
	
		case 13:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			func_103();
			break;
	
		case 14:
			func_102();
			break;
	
		case 15:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			func_99(uParam0);
			break;
	}

	return;
}

void func_99(var uParam0) // Position - 0x3D00
{
	if (!func_551())
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), false, false), func_101(true), 3))
			return;

	if (func_491(iLocal_47, 16))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			func_5(&iLocal_47, 16);
		}
	}

	if (func_491(iLocal_47, 2))
	{
		func_100(1);
		func_492("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}

	func_542();

	if (func_551())
		func_536(uParam0);

	return;
}

void func_100(int iParam0) // Position - 0x3D7D
{
	return;
}

char* func_101(BOOL bParam0) // Position - 0x3D85
{
	if (!func_491(iLocal_47, 32768))
		if (bParam0)
			return func_45(6);
		else
			return func_45(7);

	if (bParam0)
		return func_46(6);

	return func_46(7);
}

void func_102() // Position - 0x3DCB
{
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_70 == 0)
		{
			if (func_491(iLocal_47, 134217728))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_94, 32768, false);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_94, 196624, true);
			}
		
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_96(15);
		}
	}

	return;
}

void func_103() // Position - 0x3E1E
{
	switch (iLocal_301)
	{
		case 0:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94) || func_121(&uLocal_105) > 4f)
			{
				func_116(pedLocal_94);
			
				if (func_76(func_77(pedLocal_94)) == 1)
				{
					iLocal_301 = 2;
				}
				else
				{
					func_115(&uLocal_105);
					func_114("PROS_RESPONSE" /*Choose response:~n~~INPUT_FRONTEND_X~ Disgust~n~~INPUT_FRONTEND_ACCEPT~ Sarcasm~n~~INPUT_FRONTEND_CANCEL~ Sympathy*/);
					iLocal_301 = 1;
				}
			}
			break;
	
		case 1:
			func_113();
		
			if (AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94) || _CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_LEAVE_CAMERA_CONTROL_ON);
				func_482(&iLocal_47, 2048);
			}
			else
			{
				if (!func_10(&uLocal_105))
					func_40(&uLocal_105);
			
				if (func_121(&uLocal_105) > 15f || iLocal_304 != 0)
				{
					HUD::CLEAR_HELP(true);
					func_111();
					iLocal_301 = 2;
				}
			}
			break;
	
		case 2:
			if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
				iLocal_301 = 3;
			break;
	
		case 3:
			func_106(false);
			func_104();
			func_96(15);
			break;
	}

	return;
}

int func_104() // Position - 0x3F19
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x3F64
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

void func_106(BOOL bParam0) // Position - 0x3F8C
{
	if (!PED::IS_PED_INJURED(pedLocal_94))
		if (CAM::IS_SCREEN_FADED_OUT())
			PED::DELETE_PED(&pedLocal_94);
		else
			func_107(pedLocal_94, bParam0);

	return;
}

void func_107(Ped pedParam0, BOOL bParam1) // Position - 0x3FB6
{
	int taskSequenceId;
	float randomFloatInRange;

	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), false, false), func_110(true), 3))
		TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), false, false), func_101(true), 4f, -8f, -1, 0, 0, false, false, false);

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (func_551())
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam0))
				PED::RESET_PED_IN_VEHICLE_CONTEXT(pedParam0);
		else
			PED::RESET_PED_IN_VEHICLE_CONTEXT(pedParam0);
	
		if (func_491(iLocal_47, 33554432))
			TASK::CLEAR_PED_TASKS(pedParam0);
	
		if (bParam1)
		{
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
		
			if (randomFloatInRange <= 0.25f)
				func_482(&iLocal_47, 134217728);
		}
	
		if (func_491(iLocal_47, 134217728))
		{
			PED::SET_PED_FLEE_ATTRIBUTES(pedParam0, 32768, true);
			TASK::TASK_SMART_FLEE_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 300f, -1, true, false);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(pedParam0, 196624, true);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			{
				if (!VEHICLE::IS_VEHICLE_STOPPED(PED::GET_VEHICLE_PED_IS_IN(pedParam0, false)))
				{
					func_109(pedParam0, 1);
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_50(pedParam0, false, false), func_110(false), 3))
						if (iLocal_70 > 0)
							TASK::TASK_PLAY_ANIM(0, func_50(pedParam0, false, false), func_101(false), 4f, -4f, -1, 0, 0, false, false, false);
						else
							TASK::TASK_PLAY_ANIM(0, func_50(pedParam0, false, false), func_108(false), 4f, -4f, -1, 0, 0, false, false, false);
				
					func_109(pedParam0, 1);
				}
			}
		
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	
		if (func_551())
			if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(pedLocal_94))
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(pedLocal_94)))
					PED::SET_PED_KEEP_TASK(pedParam0, true);
		else
			PED::SET_PED_KEEP_TASK(pedParam0, true);
	}

	return;
}

char* func_108(BOOL bParam0) // Position - 0x4185
{
	if (!func_491(iLocal_47, 32768))
		if (bParam0)
			return func_45(4);
		else
			return func_45(5);

	if (bParam0)
		return func_46(4);

	return func_46(5);
}

void func_109(Ped pedParam0, int iParam1) // Position - 0x41CB
{
	if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedParam0, PED::GET_VEHICLE_PED_IS_IN(pedParam0, false), 0, false, false))
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16842752);
	else
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);

	return;
}

char* func_110(BOOL bParam0) // Position - 0x41FD
{
	if (!func_491(iLocal_47, 32768))
		if (bParam0)
			return func_45(2);
		else
			return func_45(3);

	if (bParam0)
		return func_46(2);

	return func_46(3);
}

void func_111() // Position - 0x4243
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);

	if (randomIntInRange <= 333 && iLocal_304 == 0 || iLocal_304 == 3)
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	else if (randomIntInRange > 333 && randomIntInRange <= 666 && iLocal_304 == 0 || iLocal_304 == 1)
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	else if (iLocal_304 == 0 || iLocal_304 == 2)
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x42E8
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_113() // Position - 0x430A
{
	if (iLocal_304 == 0)
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_X);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL);
	
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_X))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_304 = 3;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_304 = 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_304 = 2;
		}
	}

	return;
}

void func_114(char* sParam0) // Position - 0x43B4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

void func_115(int* piParam0) // Position - 0x43CA
{
	piParam0->f_1 = 0f;
	piParam0->f_2 = 0f;
	*piParam0 = 0;
	return;
}

void func_116(Ped pedParam0) // Position - 0x43E0
{
	int num;

	num = func_77(pedParam0);

	if (num > -1)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(pedParam0))
			AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedParam0);
	
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedParam0))
		{
			func_118(pedParam0);
			func_117(num);
		}
	}

	return;
}

void func_117(int iParam0) // Position - 0x441B
{
	int num;
	var unk;

	num = func_76(iParam0);

	if (num < 6)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "pbpro_H", 24);
		TEXT_LABEL_APPEND_INT(&unk, iParam0 + 1, 24);
		TEXT_LABEL_APPEND_STRING(&unk, "V", 24);
		TEXT_LABEL_APPEND_INT(&unk, num, 24);
		_CONVERSATION_ADD_LINE(&uLocal_120, "pbproau", &unk, 4, 0, 0, 0);
	}

	return;
}

void func_118(Ped pedParam0) // Position - 0x4463
{
	int num;

	num = func_77(pedParam0);

	if (num > -1)
	{
		func_120(&uLocal_120, 4);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_120, 6, pedParam0, func_119(num), 0, 1);
	}

	return;
}

char* func_119(int iParam0) // Position - 0x4491
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "Hooker1";
			break;
	
		case 1:
			str = "Hooker2";
			break;
	
		case 2:
			str = "Hooker3";
			break;
	
		case 3:
			str = "Hooker4";
			break;
	
		case 4:
			str = "Hooker5";
			break;
	
		case 5:
			str = "Hooker6";
			break;
	
		case 6:
			str = "Hooker7";
			break;
	
		case 7:
			str = "Hooker8";
			break;
	
		default:
			str = "UPRO N/A";
	}

	return str;
}

void func_120(var uParam0, int iParam1) // Position - 0x4520
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

float func_121(int* piParam0) // Position - 0x453D
{
	if (func_10(piParam0))
		if (func_9(piParam0))
			return piParam0->f_2;
		else
			return func_8(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return 0f;
}

void func_122(var uParam0) // Position - 0x4576
{
	BOOL flag;
	Vehicle vehiclePedIsIn;

	if (!func_551())
		return;

	flag = false;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) != PLAYER::PLAYER_PED_ID())
					flag = true;
			
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false) != pedLocal_94)
					flag = true;
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(vehiclePedIsIn, false, true) > 2)
					flag = true;
			
				if (flag)
				{
					func_123(false);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_542();
					func_536(uParam0);
				}
			}
		}
	}

	return;
}

void func_123(BOOL bParam0) // Position - 0x4604
{
	var entityRotation;

	if (bParam0)
	{
		entityRotation = { ENTITY::GET_ENTITY_ROTATION(veLocal_97, 2) };
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(180f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5.5f - entityRotation, 1065353216);
	}

	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_124(&uLocal_311[0 /*7*/]);
	func_124(&uLocal_311[3 /*7*/]);
	func_124(&uLocal_311[2 /*7*/]);
	func_124(&uLocal_311[1 /*7*/]);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_CAM_TOG" /*Use ~INPUTGROUP_LOOK~ to move the camera.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_CAM_OC" /*Use ~INPUTGROUP_LOOK~ to move the camera.~n~*/))
		HUD::CLEAR_HELP(true);

	return;
}

void func_124(var uParam0) // Position - 0x4688
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	
		if (CAM::IS_CAM_ACTIVE(*uParam0))
			CAM::SET_CAM_ACTIVE(*uParam0, false);
	
		CAM::DESTROY_CAM(*uParam0, false);
	}

	return;
}

void func_125() // Position - 0x46C0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_97, false))
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(veLocal_97, true);

	if (iLocal_300 != 5)
	{
		if (!func_219(iLocal_74) && !func_219(iLocal_75) && !func_219(iLocal_76) && !func_219(iLocal_77) && !func_219(iLocal_78) && !func_219(iLocal_79) && !func_219(iLocal_80))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedLocal_94) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(PLAYER::PLAYER_PED_ID()))
				iLocal_300 = 5;
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					iLocal_300 = 5;
		}
	}

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);
	func_213(0);

	switch (iLocal_300)
	{
		case 0:
			if (func_551())
				func_212(1089, -1);
		
			func_40(&uLocal_117);
			func_211(func_49(), func_491(iLocal_47, 32768));
			iLocal_300 = 1;
			func_492("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
	
		case 1:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_HUD_SPECIAL, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			func_203();
			func_196();
			func_134();
		
			if (!func_48(false, true))
				func_133();
		
			if (func_7(&uLocal_117) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_47, 512);
					iLocal_303 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
				
					if (iLocal_70 >= 3)
					{
						func_130();
						iLocal_300 = 5;
					}
					else
					{
						func_129();
						CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(evmLocal_46);
						iLocal_300 = 3;
					}
				}
			}
			break;
	
		case 2:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_HUD_SPECIAL, true);
			func_203();
		
			if (!func_48(false, true))
				func_133();
		
			if (func_48(false, true))
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
		
			if (func_7(&uLocal_117) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_47, 512);
					iLocal_303 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_70 = 3;
				
					if (iLocal_70 >= 3)
					{
						func_130();
						iLocal_300 = 5;
						func_115(&uLocal_102);
					}
				}
			}
			break;
	
		case 3:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
		
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94))
			{
				func_131("PROSTITUTES_SOLICIT_SCENE");
				func_131("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_299 = 0;
				iLocal_300 = 0;
				func_128();
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(evmLocal_46);
				iLocal_293 = 8;
			}
			break;
	
		case 5:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
		
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94))
			{
				if (iLocal_70 > 0)
				{
					if (func_127(pedLocal_94))
						func_126();
					else
						func_473(false);
				}
				else
				{
					func_492("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_473(true);
				}
			}
			break;
	}

	return;
}

void func_126() // Position - 0x496D
{
	if (PED::IS_PED_INJURED(pedLocal_94))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_70 == 0)
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_127(pedLocal_94))
		{
			func_40(&uLocal_105);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_LEAVE_CAMERA_CONTROL_ON | 512);
			func_482(&iLocal_47, 2048);
			iLocal_293 = 13;
		}
	}

	return;
}

BOOL func_127(Ped pedParam0) // Position - 0x49D0
{
	int num;

	num = func_77(pedParam0);

	if (num == -1)
		return false;

	return func_76(num) < 6;
}

void func_128() // Position - 0x49F2
{
	if (!Global_2672855.f_990.f_10)
		Global_2672855.f_990.f_10 = 1;

	return;
}

void func_129() // Position - 0x4A11
{
	if (PED::IS_PED_INJURED(pedLocal_94))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94))
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

void func_130() // Position - 0x4A3E
{
	if (PED::IS_PED_INJURED(pedLocal_94))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94))
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

void func_131(char* sParam0) // Position - 0x4A6B
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		AUDIO::STOP_AUDIO_SCENE(sParam0);

	return;
}

BOOL func_132() // Position - 0x4A82
{
	if (iLocal_303 == 6)
		return true;

	return false;
}

void func_133() // Position - 0x4A96
{
	CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
	return;
}

void func_134() // Position - 0x4AA6
{
	float num;
	BOOL flag;
	BOOL flag2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(func_50(PLAYER::PLAYER_PED_ID(), false, false)))
		return;

	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_50(PLAYER::PLAYER_PED_ID(), false, false)))
		return;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);

	flag = func_49();
	flag2 = func_491(iLocal_47, 32768);

	if (!func_48(false, true))
		func_190(&iLocal_81);

	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);
	func_189(23, true);

	switch (iLocal_303)
	{
		case 0:
			func_5(&iLocal_47, 256);
		
			if (!func_48(false, true))
				func_184(&iLocal_81);
		
			func_183(pedLocal_94, 0);
		
			if (!func_551())
				func_182(flag, flag2);
		
			func_181(flag, flag2);
			iLocal_303 = 1;
			break;
	
		case 1:
			func_180(iLocal_74);
		
			if (func_219(iLocal_75))
			{
				if (!func_491(iLocal_48, 4))
				{
					if (!func_551())
						num = 0.925f;
					else
						num = 0.986f;
				
					if (func_179(iLocal_75) >= num)
						func_482(&iLocal_48, 4);
				}
			}
		
			if (func_219(iLocal_74))
			{
				if (!func_491(iLocal_48, 8))
				{
					if (!func_551())
						num = 0.925f;
					else
						num = 0.986f;
				
					if (func_179(iLocal_74) >= num)
						func_482(&iLocal_48, 8);
				}
			}
		
			if (func_491(iLocal_48, 4) && func_491(iLocal_48, 8))
			{
				if (!func_551())
					func_178(flag, flag2);
			
				func_177(flag, flag2);
				iLocal_303 = 2;
			}
			break;
	
		case 2:
			func_180(iLocal_76);
		
			if (func_219(iLocal_76))
			{
				if (!func_491(iLocal_48, 16))
				{
					if (!func_551())
						num = 0.98f;
					else
						num = 0.986f;
				
					if (func_179(iLocal_76) >= num)
						func_482(&iLocal_48, 16);
				}
			}
		
			if (func_491(iLocal_48, 16))
			{
				if (!func_551())
					func_176(flag, flag2);
			
				func_175(flag, flag2);
				iLocal_303 = 3;
			}
			break;
	
		case 3:
			func_180(iLocal_77);
		
			if (func_219(iLocal_77))
			{
				if (!func_491(iLocal_48, 64))
				{
					if (!func_491(iLocal_47, 16777216))
					{
						if (!func_551())
							num = 0.975f;
						else
							num = 0.986f;
					
						if (func_179(iLocal_77) >= num)
						{
							func_482(&iLocal_47, 16777216);
							iLocal_71 = iLocal_71 + 1;
						}
					}
					else
					{
						if (!func_551())
							num = 0.975f;
						else
							num = 0.986f;
					
						if (func_179(iLocal_77) < num)
							func_5(&iLocal_47, 16777216);
					}
				
					if (iLocal_71 >= func_551() ? func_174() : func_169())
					{
						func_482(&iLocal_48, 64);
						func_5(&iLocal_47, 16777216);
					}
				}
			}
			else if (!func_491(iLocal_48, 64))
			{
				func_482(&iLocal_48, 64);
			}
		
			if (func_491(iLocal_48, 64))
			{
				if (!func_551())
					func_167(flag, flag2);
			
				func_166(flag, flag2);
				iLocal_303 = 4;
			}
			break;
	
		case 4:
			func_180(iLocal_78);
		
			if (func_219(iLocal_78))
			{
				if (!func_491(iLocal_48, 256))
				{
					if (!func_551())
						num = 0.925f;
					else
						num = 0.986f;
				
					if (func_179(iLocal_78) >= num)
						func_482(&iLocal_48, 256);
				}
			}
			else if (!func_491(iLocal_48, 256))
			{
				func_482(&iLocal_48, 256);
			}
		
			if (func_491(iLocal_48, 256))
			{
				if (!func_551())
					func_160(flag, flag2);
			
				func_158(flag, flag2);
				iLocal_303 = 5;
			}
			break;
	
		case 5:
			func_180(iLocal_79);
		
			if (func_219(iLocal_79))
			{
				if (!func_491(iLocal_48, 1024))
				{
					if (!func_551())
						num = 0.975f;
					else
						num = 0.986f;
				
					if (func_179(iLocal_79) >= num)
						func_482(&iLocal_48, 1024);
				}
			}
			else if (!func_491(iLocal_48, 1024))
			{
				func_482(&iLocal_48, 1024);
			}
		
			if (func_219(iLocal_80))
			{
				if (!func_491(iLocal_48, 2048))
				{
					if (!func_551())
						num = 0.975f;
					else
						num = 0.986f;
				
					if (func_179(iLocal_80) >= num)
						func_482(&iLocal_48, 2048);
				}
			}
			else if (!func_491(iLocal_48, 2048))
			{
				func_482(&iLocal_48, 2048);
			}
		
			if (func_491(iLocal_48, 1024) && func_491(iLocal_48, 2048))
			{
				func_183(pedLocal_94, 0);
				TASK::TASK_PLAY_ANIM(pedLocal_94, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(iLocal_303, true, flag, flag2), 4f, -4f, -1, 1, 0, false, false, false);
				func_183(PLAYER::PLAYER_PED_ID(), -1);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(iLocal_303, false, flag, flag2), 4f, -4f, -1, 1, 0, false, false, false);
				func_123(true);
				iLocal_48 = 0;
				iLocal_71 = 0;
				iLocal_59 = 0;
				func_135();
				iLocal_303 = 6;
			}
			break;
	}

	return;
}

void func_135() // Position - 0x4FA0
{
	int num;

	if (iLocal_70 == 0 && !func_551())
	{
		if (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()) == CHAR_MICHAEL)
			func_157();
	
		func_152(296, 0, 0);
		num = func_77(pedLocal_94);
	
		if (num > -1)
			func_151(num);
		else
			func_143(pedLocal_94);
	}

	iLocal_70 = iLocal_70 + 1;
	func_136();
	return;
}

void func_136() // Position - 0x4FF9
{
	switch (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()))
	{
		case CHAR_MICHAEL:
			Global_113969.f_10052.f_90[0] = Global_113969.f_10052.f_90[0] + 1;
			func_137(0, 1, 1);
			break;
	
		case CHAR_FRANKLIN:
			Global_113969.f_10052.f_90[1] = Global_113969.f_10052.f_90[1] + 1;
			func_137(1, 1, 1);
			break;
	
		case CHAR_TREVOR:
			Global_113969.f_10052.f_90[2] = Global_113969.f_10052.f_90[2] + 1;
			func_137(2, 1, 1);
			break;
	
		case CHAR_MULTIPLAYER:
			func_137(3, 1, 1);
			break;
	}

	return;
}

void func_137(int iParam0, int iParam1, int iParam2) // Position - 0x509C
{
	int num;
	int num2;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] = Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2;
			break;
	
		case 3:
			num2 = 14835;
		
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
		
			if (num2 != 14835)
			{
				num = func_142(num2, -1);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_138(num2, num, -1, true);
			}
			break;
	}

	return;
}

void func_138(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x518A
{
	Hash statName;

	if (iParam0 != 14835)
	{
		statName = func_139(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_139(int iParam0, int iParam1) // Position - 0x51B8
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_140(iParam1));
}

int func_140(int iParam0) // Position - 0x51CD
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_141();
	
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

int func_141() // Position - 0x5201
{
	return Global_1574926;
}

int func_142(int iParam0, int iParam1) // Position - 0x520D
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_139(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_143(Ped pedParam0) // Position - 0x523C
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return;

	num = func_150();

	if (num == -1)
		return;

	func_151(num);
	PED::SET_PED_NAME_DEBUG(pedParam0, func_148(num));
	Global_113969.f_10052.f_1[num /*11*/].f_10 = ENTITY::GET_ENTITY_MODEL(pedParam0);

	for (i = 0; i < 2; i = i + 1)
	{
		num2 = i;
		num3 = func_147(pedParam0, num2);
		func_146(num, num2, num3);
	}

	for (i = 0; i < 2; i = i + 1)
	{
		num4 = i;
		num3 = func_145(pedParam0, num4);
		func_144(num, num4, num3);
	}

	return;
}

void func_144(int iParam0, int iParam1, int iParam2) // Position - 0x52DB
{
	if (iParam0 > -1)
		Global_113969.f_10052.f_1[iParam0 /*11*/].f_7[iParam1] = iParam2;

	return;
}

int func_145(Ped pedParam0, int iParam1) // Position - 0x52FE
{
	return PED::GET_PED_TEXTURE_VARIATION(pedParam0, func_82(iParam1));
}

void func_146(int iParam0, int iParam1, int iParam2) // Position - 0x5312
{
	if (iParam0 > -1)
		Global_113969.f_10052.f_1[iParam0 /*11*/].f_4[iParam1] = iParam2;

	return;
}

int func_147(Ped pedParam0, int iParam1) // Position - 0x5335
{
	return PED::GET_PED_DRAWABLE_VARIATION(pedParam0, func_86(iParam1));
}

char* func_148(int iParam0) // Position - 0x5349
{
	return func_149(iParam0);
}

char* func_149(int iParam0) // Position - 0x5357
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "UPRO BABS";
			break;
	
		case 1:
			str = "UPRO DANA";
			break;
	
		case 2:
			str = "UPRO LIZZIE";
			break;
	
		case 3:
			str = "UPRO AMANDA";
			break;
	
		case 4:
			str = "UPRO ASHLEY";
			break;
	
		case 5:
			str = "UPRO KRISTEN";
			break;
	
		case 6:
			str = "UPRO SASHA";
			break;
	
		case 7:
			str = "UPRO JACQUELINE";
			break;
	
		default:
			str = "UPRO N/A";
	}

	return str;
}

int func_150() // Position - 0x53E6
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (func_76(i) == 0)
			return i;
	}

	return -1;
}

void func_151(int iParam0) // Position - 0x5411
{
	if (iParam0 > -1)
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
			Global_113969.f_10052.f_1[iParam0 /*11*/][0] = Global_113969.f_10052.f_1[iParam0 /*11*/][0] + 1;
		else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			Global_113969.f_10052.f_1[iParam0 /*11*/][1] = Global_113969.f_10052.f_1[iParam0 /*11*/][1] + 1;
		else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			Global_113969.f_10052.f_1[iParam0 /*11*/][2] = Global_113969.f_10052.f_1[iParam0 /*11*/][2] + 1;

	return;
}

void func_152(int iParam0, int iParam1, int iParam2) // Position - 0x54A3
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
		Global_113969.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(-2044299740, 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(86701099, 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(-375571184, 50, 0);
	}

	if (flag)
		func_153();

	return;
}

void func_153() // Position - 0x5589
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
		func_155(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_154() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113703 = 0;
			
				if (!Global_64166)
					func_104();
			}
		}
	}

	return;
}

int func_154() // Position - 0x5A47
{
	return Global_32948;
}

BOOL func_155(int iParam0, int iParam1) // Position - 0x5A52
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x5AA3
{
	if (iParam2 == -1)
		iParam2 = func_141();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_157() // Position - 0x5AC1
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (i < 1)
			Global_97975[i] = Global_97975[i + 1];
		else
			Global_97975[i] = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_158(BOOL bParam0, BOOL bParam1) // Position - 0x5B02
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_159(pedLocal_94, iLocal_79, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(4, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	func_159(PLAYER::PLAYER_PED_ID(), iLocal_80, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(4, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	return;
}

void func_159(Ped pedParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9) // Position - 0x5B7B
{
	if (func_551())
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam1);
	else
		TASK::TASK_SYNCHRONIZED_SCENE(pedParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);

	return;
}

void func_160(BOOL bParam0, BOOL bParam1) // Position - 0x5BAB
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_162(&iLocal_79, 1, false, false);
	func_161(pedLocal_94, iLocal_79, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(4, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	func_162(&iLocal_80, 0, false, false);
	func_161(PLAYER::PLAYER_PED_ID(), iLocal_80, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(4, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	return;
}

void func_161(Ped pedParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8) // Position - 0x5C34
{
	if (func_551())
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(pedParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);

	return;
}

void func_162(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5C5A
{
	var unk;

	unk = { 0f, 0f, 0f };
	*uParam0 = func_165(unk, 0f, 0f, 0f, bParam3, bParam2, 2);

	if (iParam1 == 0)
		func_164(*uParam0, veLocal_97, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_97, "seat_dside_f"));
	else if (iParam1 == 1)
		func_164(*uParam0, veLocal_97, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_97, "seat_pside_f"));

	func_163(*uParam0, unk, 0f, 0f, 0f, false);
	return;
}

void func_163(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, BOOL bParam7) // Position - 0x5CC0
{
	if (!func_551())
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iParam0, vParam1, fParam4, bParam7);

	return;
}

void func_164(int iParam0, Vehicle veParam1, int iParam2) // Position - 0x5CE0
{
	if (ENTITY::IS_ENTITY_DEAD(veParam1, false))
		return;

	if (func_551())
		NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0, veParam1, iParam2);
	else
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0, veParam1, iParam2);

	return;
}

int func_165(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Position - 0x5D13
{
	int sceneID;

	if (func_551())
	{
		if (bParam6)
			bParam7 = false;
	
		sceneID = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vParam0, fParam3, iParam8, bParam6, bParam7, 1065353216, 0, 1065353216);
	}
	else
	{
		sceneID = PED::CREATE_SYNCHRONIZED_SCENE(vParam0, fParam3, iParam8);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(sceneID, bParam6);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(sceneID, bParam7);
	}

	return sceneID;
}

void func_166(BOOL bParam0, BOOL bParam1) // Position - 0x5D6E
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_159(pedLocal_94, iLocal_78, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(3, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	func_159(PLAYER::PLAYER_PED_ID(), iLocal_78, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(3, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	return;
}

void func_167(BOOL bParam0, BOOL bParam1) // Position - 0x5DE7
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_162(&iLocal_78, 0, false, true);
	func_161(pedLocal_94, iLocal_78, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(3, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	func_161(PLAYER::PLAYER_PED_ID(), iLocal_78, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(3, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	return;
}

var func_168(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5E67
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_169() // Position - 0x5E7E
{
	int num;
	int num2;

	num = func_170();

	if (num < 48)
		num2 = 2;
	else if (num >= 48 && num < 85)
		num2 = 3;
	else
		num2 = 4;

	return num2;
}

int func_170() // Position - 0x5EB6
{
	if (func_551())
		return func_142(65, -1);

	return func_171(_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()), 1);
}

int func_171(eCharacter echParam0, int iParam1) // Position - 0x5EDF
{
	var outValue;
	Hash statHash;

	statHash = func_172(echParam0, iParam1);
	STATS::STAT_GET_INT(statHash, &outValue, -1);
	return outValue;
}

Hash func_172(eCharacter echParam0, int iParam1) // Position - 0x5EFD
{
	var unk;
	var unk2;

	func_173(echParam0, iParam1, &unk, &unk2);
	return unk;
}

void func_173(eCharacter echParam0, int iParam1, var uParam2, var uParam3) // Position - 0x5F13
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1322098561;
					break;
			
				case 1:
					*uParam2 = 583576226;
					break;
			
				case 3:
					*uParam2 = 1939246781;
					break;
			
				case 2:
					*uParam2 = -1872025703;
					break;
			
				case 4:
					*uParam2 = 297038448;
					break;
			
				case 5:
					*uParam2 = 2024531174;
					break;
			
				case 6:
					*uParam2 = -1266079991;
					break;
			
				case 7:
					*uParam2 = 577288081;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1372388259;
					break;
			
				case 1:
					*uParam2 = 626982837;
					break;
			
				case 3:
					*uParam2 = 1815853850;
					break;
			
				case 2:
					*uParam2 = -1205308189;
					break;
			
				case 4:
					*uParam2 = 2111310536;
					break;
			
				case 5:
					*uParam2 = -376705475;
					break;
			
				case 6:
					*uParam2 = -886696809;
					break;
			
				case 7:
					*uParam2 = -412283869;
					break;
			}
			break;
	
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 95446082;
					break;
			
				case 1:
					*uParam2 = 2105689774;
					break;
			
				case 3:
					*uParam2 = 2123663283;
					break;
			
				case 2:
					*uParam2 = 1327096153;
					break;
			
				case 4:
					*uParam2 = 1810848047;
					break;
			
				case 5:
					*uParam2 = 2010093328;
					break;
			
				case 6:
					*uParam2 = 708474090;
					break;
			
				case 7:
					*uParam2 = -801407253;
					break;
			}
			break;
	
		case CHAR_MULTIPLAYER:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
			
				case 1:
					*uParam3 = 65;
					break;
			
				case 3:
					*uParam3 = 67;
					break;
			
				case 2:
					*uParam3 = 66;
					break;
			
				case 4:
					*uParam3 = 68;
					break;
			
				case 5:
					*uParam3 = 69;
					break;
			
				case 6:
					*uParam3 = 70;
					break;
			
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}

	return;
}

int func_174() // Position - 0x616A
{
	int num;

	if (iLocal_295 != 0)
		if (iLocal_59 < 2)
			num = 3;
		else if (iLocal_59 == 2)
			num = 4;
		else if (iLocal_59 == 3)
			num = 5;
		else
			num = 6;
	else if (iLocal_59 < 3)
		num = 2;
	else
		num = 3;

	return num;
}

void func_175(BOOL bParam0, BOOL bParam1) // Position - 0x61B4
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_159(pedLocal_94, iLocal_77, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(2, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	func_159(PLAYER::PLAYER_PED_ID(), iLocal_77, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(2, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	return;
}

void func_176(BOOL bParam0, BOOL bParam1) // Position - 0x622D
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_162(&iLocal_77, 0, true, false);
	func_161(pedLocal_94, iLocal_77, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(2, true, bParam0, bParam1), 1000f, -1000f, num, 0, 1148846080);
	func_161(PLAYER::PLAYER_PED_ID(), iLocal_77, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(2, false, bParam0, bParam1), 1000f, -1000f, num, 0, 1148846080);
	return;
}

void func_177(BOOL bParam0, BOOL bParam1) // Position - 0x62AD
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_159(pedLocal_94, iLocal_76, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(1, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	func_159(PLAYER::PLAYER_PED_ID(), iLocal_76, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(1, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	return;
}

void func_178(BOOL bParam0, BOOL bParam1) // Position - 0x6326
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_162(&iLocal_76, 0, false, true);
	func_161(pedLocal_94, iLocal_76, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(1, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	func_161(PLAYER::PLAYER_PED_ID(), iLocal_76, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(1, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	return;
}

float func_179(int iParam0) // Position - 0x63A6
{
	float synchronizedScenePhase;

	if (func_551())
		synchronizedScenePhase = PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0));
	else
		synchronizedScenePhase = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0);

	return synchronizedScenePhase;
}

void func_180(int iParam0) // Position - 0x63CE
{
	if (!func_219(iParam0))
		return;

	return;
}

void func_181(BOOL bParam0, BOOL bParam1) // Position - 0x63E3
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_159(pedLocal_94, iLocal_74, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(0, true, bParam0, bParam1), 8f, -0.7f, num, 0, 1000f, 0);
	func_159(PLAYER::PLAYER_PED_ID(), iLocal_75, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(0, false, bParam0, bParam1), 8f, -0.7f, num, 0, 1000f, 0);
	return;
}

void func_182(BOOL bParam0, BOOL bParam1) // Position - 0x645C
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_162(&iLocal_74, 1, false, true);
	func_161(pedLocal_94, iLocal_74, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(0, true, bParam0, bParam1), 4f, -1000f, num, 0, 1148846080);
	func_162(&iLocal_75, 0, false, true);
	func_161(PLAYER::PLAYER_PED_ID(), iLocal_75, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(0, false, bParam0, bParam1), 4f, -1000f, num, 0, 1148846080);
	return;
}

void func_183(Ped pedParam0, int iParam1) // Position - 0x64DD
{
	if (!PED::IS_PED_IN_VEHICLE(pedParam0, veLocal_97, false))
		if (!func_551())
			PED::SET_PED_INTO_VEHICLE(pedParam0, veLocal_97, iParam1);
		else if (!PED::IS_PED_IN_VEHICLE(pedParam0, veLocal_97, false))
			TASK::TASK_ENTER_VEHICLE(pedParam0, veLocal_97, -1, iParam1, 2f, 16, 0, 0);

	return;
}

void func_184(var uParam0) // Position - 0x6524
{
	float num;
	float num2;
	float entityRotation;
	float entityHeading;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;

	num = func_186(func_187(2), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_97, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_97, "windscreen")));
	num2 = func_186(func_187(1), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_97, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_97, "windscreen")));
	entityRotation = { ENTITY::GET_ENTITY_ROTATION(veLocal_97, 2) };
	entityHeading = ENTITY::GET_ENTITY_HEADING(veLocal_97);

	if (entityHeading >= 180f)
		num3 = entityHeading - 180f;
	else
		num3 = entityHeading + 180f;

	num4 = -7f - entityRotation.f_1;
	num5 = -5f - entityRotation;
	num6 = -2.5f + entityRotation;
	num7 = (0f - (0.7f * entityRotation)) + (0.3f * entityRotation.f_1);

	if (!CAM::DOES_CAM_EXIST(uLocal_311[2 /*7*/]))
		func_185(&uLocal_311[2 /*7*/], func_187(2), num4, entityRotation, num, 50f);

	if (!CAM::DOES_CAM_EXIST(uLocal_311[1 /*7*/]))
		func_185(&uLocal_311[1 /*7*/], func_187(1), num7, -entityRotation.f_1, num2, 37.3f);

	if (!CAM::DOES_CAM_EXIST(uLocal_311[0 /*7*/]))
		func_185(&uLocal_311[0 /*7*/], func_187(0), num5, -entityRotation.f_1, num3, 50f);

	if (!CAM::DOES_CAM_EXIST(uLocal_311[3 /*7*/]))
		func_185(&uLocal_311[3 /*7*/], func_187(3), num6, entityRotation.f_1, entityHeading, 45f);

	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SET_CAM_ACTIVE(uLocal_311[*uParam0 /*7*/], true);
	return;
}

void func_185(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7) // Position - 0x668F
{
	uParam0->f_1 = { fParam4 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, vParam1, uParam0->f_1, fParam7, 0, 1, 1, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	return;
}

float func_186(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x66E1
{
	return MISC::GET_HEADING_FROM_VECTOR_2D(fParam3 - uParam0, fParam3.f_1 - uParam0.f_1);
}

Vector3 func_187(int iParam0) // Position - 0x66FB
{
	var offsetFromEntityInWorldCoords;
	var minimum;
	var maximum;
	Vector3 worldPositionOfEntityBone;
	var offsetFromEntityGivenWorldCoords;

	!ENTITY::IS_ENTITY_DEAD(pedLocal_94, false);
	!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_97, false);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veLocal_97), &minimum, &maximum);
	worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_97, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_97, "windscreen")) };
	offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_97, worldPositionOfEntityBone) };

	switch (iParam0)
	{
		case 0:
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_97, 0f, maximum.f_1 + 1.4f, offsetFromEntityGivenWorldCoords.f_2) };
			break;
	
		case 1:
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_97, 1.5f, maximum.f_1 + 1.2f, offsetFromEntityGivenWorldCoords.f_2 - 0.1f) };
			break;
	
		case 2:
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_97, -3.7f, 0.7f, offsetFromEntityGivenWorldCoords.f_2) };
			break;
	
		case 3:
			offsetFromEntityInWorldCoords = { func_188() };
			break;
	}

	return offsetFromEntityInWorldCoords;
}

Vector3 func_188() // Position - 0x67D4
{
	Vector3 worldPositionOfEntityBone;
	var offsetFromEntityGivenWorldCoords;
	var minimum;
	var maximum;

	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veLocal_97), &minimum, &maximum);
	worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_97, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_97, "windscreen")) };
	offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_97, worldPositionOfEntityBone) };
	offsetFromEntityGivenWorldCoords.f_2 = offsetFromEntityGivenWorldCoords.f_2 + 0.09f;
	minimum.f_1 = minimum.f_1 - 1f;
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_97, 0f, -MISC::ABSF(minimum.f_1), offsetFromEntityGivenWorldCoords.f_2);
}

void func_189(int iParam0, BOOL bParam1) // Position - 0x6838
{
	if (bParam1)
		MISC::SET_BIT(&Global_33197, iParam0);
	else
		MISC::CLEAR_BIT(&Global_33197, iParam0);

	return;
}

void func_190(var uParam0) // Position - 0x685A
{
	if (!CAM::DOES_CAM_EXIST(uLocal_311[*uParam0 /*7*/]))
		return;

	if (!CAM::IS_CAM_RENDERING(uLocal_311[*uParam0 /*7*/]))
		return;

	CAM::SHAKE_CAM(uLocal_311[*uParam0 /*7*/], "HAND_SHAKE", 0.25f);

	if (!HUD::IS_PAUSE_MENU_ACTIVE())
		func_193(&uLocal_311[*uParam0 /*7*/]);

	if (func_192())
	{
		if (!func_551())
			if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_CAM_OC" /*Use ~INPUTGROUP_LOOK~ to move the camera.~n~*/))
				func_114("PROS_CAM_OC" /*Use ~INPUTGROUP_LOOK~ to move the camera.~n~*/);
	}
	else
	{
		if (!func_551())
			if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_CAM_TOG" /*Use ~INPUTGROUP_LOOK~ to move the camera.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~*/))
				func_114("PROS_CAM_TOG" /*Use ~INPUTGROUP_LOOK~ to move the camera.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~*/);
	
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_NEXT_CAMERA) && !HUD::IS_PAUSE_MENU_ACTIVE() && !func_48(false, true))
		{
			func_191(uParam0);
			CAM::SET_CAM_ACTIVE(uLocal_311[*uParam0 /*7*/], true);
		}
	}

	return;
}

void func_191(var uParam0) // Position - 0x6925
{
	if (*uParam0 < 3)
		*uParam0 = *uParam0 + 1;
	else if (*uParam0 == 3)
		*uParam0 = 0;

	if (*uParam0 == 0)
		if (func_491(iLocal_49, 16))
			*uParam0 = *uParam0 + 1;

	if (*uParam0 == 1)
		if (func_491(iLocal_49, 128))
			*uParam0 = *uParam0 + 1;

	if (*uParam0 == 2)
		if (func_491(iLocal_49, 64))
			*uParam0 = *uParam0 + 1;

	return;
}

BOOL func_192() // Position - 0x6998
{
	if (func_491(iLocal_49, 16) && func_491(iLocal_49, 64) && func_491(iLocal_49, 128))
		return true;

	return false;
}

void func_193(var uParam0) // Position - 0x69CA
{
	var unk;
	float num;
	float num2;
	float num3;

	unk = 4;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(FRONTEND_CONTROL);
	func_195(&unk[0], &unk[1], &unk[2], &unk[3], false, false);
	num.f_2 = -(SYSTEM::TO_FLOAT(unk[2]) / 127f) * 10f;
	num.f_1 = (-num.f_2 * 3f) / 10f;

	if (PAD::IS_LOOK_INVERTED())
		num = (SYSTEM::TO_FLOAT(unk[3]) / 127f) * 10f;
	else
		num = -(SYSTEM::TO_FLOAT(unk[3]) / 127f) * 10f;

	num2 = 30f * SYSTEM::TIMESTEP();
	num3 = { num };

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
	{
		uParam0->f_4 = func_194(uParam0->f_4 + (num3 * 0.05f), -3f, 3f);
		uParam0->f_4.f_1 = func_194(uParam0->f_4.f_1 + (num3.f_1 * 0.05f), -3f, 3f);
		uParam0->f_4.f_2 = func_194(uParam0->f_4.f_2 + (num3.f_2 * 0.05f), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = uParam0->f_4 + func_194((num3 - uParam0->f_4) * 0.05f * num2, -3f, 3f);
		uParam0->f_4.f_1 = uParam0->f_4.f_1 + func_194((num3.f_1 - uParam0->f_4.f_1) * 0.05f * num2, -3f, 3f);
		uParam0->f_4.f_2 = uParam0->f_4.f_2 + func_194((num3.f_2 - uParam0->f_4.f_2) * 0.05f * num2, -3f, 3f);
	}

	CAM::SET_CAM_ROT(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
	return;
}

float func_194(float fParam0, float fParam1, float fParam2) // Position - 0x6B64
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_195(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x6B8B
{
	*uParam0 = SYSTEM::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	*uParam1 = SYSTEM::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	*uParam2 = SYSTEM::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	*uParam3 = SYSTEM::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);

	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X))
			*uParam0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y))
			*uParam1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X))
			*uParam2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y))
			*uParam3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);
	}

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
				*uParam3 = *uParam3 * -1;
		
			if (PAD::IS_MOUSE_LOOK_INVERTED())
				*uParam3 = *uParam3 * -1;
		}
	}

	return;
}

void func_196() // Position - 0x6C8F
{
	int localSceneFromNetworkId;
	float synchronizedScenePhase;

	if (!func_201())
	{
		if (func_200(pedLocal_94))
		{
			if (!func_491(iLocal_47, 256))
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			
				if (iLocal_70 == 1)
				{
					if (!func_551())
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 15, true, 0);
				
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 4000, 252);
				}
				else if (iLocal_70 == 2)
				{
					if (!func_551())
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 10, true, 0);
				
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 4000, 210);
				}
				else
				{
					if (!func_551())
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 5, true, 0);
				
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 3000, 168);
				}
			
				func_482(&iLocal_47, 256);
			}
		}
	}
	else
	{
		switch (iLocal_296)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_94, 876132797))
				{
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 84);
					ENTITY::APPLY_FORCE_TO_ENTITY(veLocal_97, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_198();
				}
				break;
		
			case 1:
			case 2:
				if (func_491(iLocal_47, 32768))
				{
					if (func_551())
						localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_77);
					else
						localSceneFromNetworkId = iLocal_77;
				
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId))
					{
						synchronizedScenePhase = PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId);
					
						if (synchronizedScenePhase > 0.01f && synchronizedScenePhase < 0.019f || synchronizedScenePhase > 0.093f && synchronizedScenePhase < 0.1f || synchronizedScenePhase > 0.165f && synchronizedScenePhase < 0.172f || synchronizedScenePhase > 0.231f && synchronizedScenePhase < 0.239f || synchronizedScenePhase > 0.308f && synchronizedScenePhase < 0.317f || synchronizedScenePhase > 0.37f && synchronizedScenePhase < 0.378f || synchronizedScenePhase > 0.437f && synchronizedScenePhase < 0.443f || synchronizedScenePhase > 0.507f && synchronizedScenePhase < 0.518f || synchronizedScenePhase > 0.58f && synchronizedScenePhase < 0.587f || synchronizedScenePhase > 0.651f && synchronizedScenePhase < 0.659f || synchronizedScenePhase > 0.72f && synchronizedScenePhase < 0.729f || synchronizedScenePhase > 0.788f && synchronizedScenePhase < 0.794f || synchronizedScenePhase > 0.862f && synchronizedScenePhase < 0.87f || synchronizedScenePhase > 0.937f && synchronizedScenePhase < 0.946f)
						{
							if (!func_524(512))
							{
								PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 252);
								ENTITY::APPLY_FORCE_TO_ENTITY(veLocal_97, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
								func_198();
								func_197(512);
							}
						}
						else
						{
							func_528(512);
						}
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_94, 876132797))
				{
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 252);
					ENTITY::APPLY_FORCE_TO_ENTITY(veLocal_97, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_198();
				}
				break;
		}
	}

	return;
}

void func_197(int iParam0) // Position - 0x6FB4
{
	if (!func_491(iLocal_50, iParam0))
		func_482(&iLocal_50, iParam0);

	return;
}

void func_198() // Position - 0x6FD0
{
	int entityHealth;

	entityHealth = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	entityHealth = entityHealth + 1 + iLocal_295;

	if (entityHealth > ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()))
		entityHealth = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());

	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), entityHealth, 0, 0);
	func_199();
	return;
}

void func_199() // Position - 0x7013
{
	if (!func_551())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		iLocal_57 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());

	return;
}

BOOL func_200(Ped pedParam0) // Position - 0x703B
{
	return ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_54(), func_46(11), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_54(), func_46(21), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_52(), func_45(11), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_52(), func_45(21), 3);
}

BOOL func_201() // Position - 0x7099
{
	return ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_94, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_202(pedLocal_94, func_49(), true), 3);
}

char* func_202(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x70BD
{
	char* str;
	Vehicle vehiclePedIsIn;

	str = "";

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			if (func_47(vehiclePedIsIn))
				if (bParam1)
					if (bParam2)
						str = func_46(20);
					else
						str = func_46(25);
				else if (bParam2)
					str = func_46(10);
				else
					str = func_46(15);
			else if (bParam1)
				if (bParam2)
					str = func_45(20);
				else
					str = func_45(25);
			else if (bParam2)
				str = func_45(10);
			else
				str = func_45(15);
	}

	return str;
}

void func_203() // Position - 0x7167
{
	if (!func_201())
		return;

	if (func_551())
		func_208();

	if (AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94) || AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
		return;

	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5000) > 2500)
		func_204();

	return;
}

void func_204() // Position - 0x71B1
{
	if (PED::IS_PED_INJURED(pedLocal_94))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94) && !AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_295 == 0)
			func_131("PROSTITUTES_BJ_SPEECH_SCENE");
	
		if (!func_10(&uLocal_105))
		{
			func_472(&uLocal_105);
		}
		else if (func_7(&uLocal_105) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 5f))
		{
			if (!func_491(iLocal_47, 65536))
			{
				func_482(&iLocal_47, 65536);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_205(iLocal_296);
			}
			else
			{
				func_5(&iLocal_47, 65536);
				func_40(&uLocal_105);
			}
		}
	}

	return;
}

void func_205(int iParam0) // Position - 0x7252
{
	switch (iParam0)
	{
		case 0:
			func_87("PROSTITUTES_BJ_SPEECH_SCENE");
		
			if (func_206(PLAYER::PLAYER_ID()))
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			else
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			break;
	
		case 1:
		case 2:
			if (func_206(PLAYER::PLAYER_ID()))
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			else
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			break;
	}

	return;
}

BOOL func_206(Player plParam0) // Position - 0x72D9
{
	if (!func_207(plParam0))
		return true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	return Global_2657971[plParam0 /*465*/].f_241;
}

BOOL func_207(Player plParam0) // Position - 0x7309
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

void func_208() // Position - 0x732B
{
	if (PED::IS_PED_INJURED(pedLocal_94))
		return;

	if (func_209(0.4f))
		func_197(4);

	if (func_524(4))
	{
		if (!func_10(&uLocal_108))
		{
			func_472(&uLocal_108);
		}
		else if (func_7(&uLocal_108) > 2f)
		{
			if (!func_524(16) && !func_209(0.4f))
			{
				func_197(16);
				iLocal_59 = iLocal_59 + 1;
			}
			else if (func_524(16))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94))
				{
					func_528(4);
					func_528(16);
					func_40(&uLocal_108);
				}
			}
		}
	}

	return;
}

BOOL func_209(float fParam0) // Position - 0x73C2
{
	float playerLoudness;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
	{
		playerLoudness = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
	
		if (playerLoudness > fParam0)
			return true;
	}

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x73EE
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

void func_211(BOOL bParam0, BOOL bParam1) // Position - 0x744E
{
	if (!func_551())
		return;

	func_182(bParam0, bParam1);
	func_178(bParam0, bParam1);
	func_176(bParam0, bParam1);
	func_167(bParam0, bParam1);
	func_160(bParam0, bParam1);
	return;
}

void func_212(int iParam0, int iParam1) // Position - 0x7489
{
	int num;

	num = func_142(iParam0, func_140(iParam1));
	num = num + 1;
	func_138(iParam0, num, iParam1, true);
	return;
}

void func_213(int iParam0) // Position - 0x74B0
{
	if (func_218())
		return;

	if (!(Global_20930.f_1 == 1))
	{
		if (func_217(0))
			func_214(iParam0);
	
		MISC::SET_BIT(&Global_8801, 2);
	}

	return;
}

void func_214(int iParam0) // Position - 0x74E3
{
	if (func_218())
		return;

	if (Global_21145)
		if (func_216())
			func_215(true, true);
		else
			func_215(false, false);

	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		MISC::SET_BIT(&Global_8801, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22286 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 30);
	else
		MISC::CLEAR_BIT(&Global_8800, 30);

	if (!func_20())
		Global_20930.f_1 = 3;

	return;
}

void func_215(BOOL bParam0, BOOL bParam1) // Position - 0x756D
{
	if (bParam0)
	{
		if (func_217(0))
		{
			Global_21145 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
		
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == true)
	{
		Global_21145 = false;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
	}

	return;
}

BOOL func_216() // Position - 0x75E1
{
	return IS_BIT_SET(Global_1956920, 5);
}

BOOL func_217(int iParam0) // Position - 0x75EF
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

BOOL func_218() // Position - 0x7646
{
	return IS_BIT_SET(Global_1956920, 19);
}

BOOL func_219(int iParam0) // Position - 0x7655
{
	BOOL isSynchronizedSceneRunning;

	if (func_551())
		isSynchronizedSceneRunning = PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0));
	else
		isSynchronizedSceneRunning = PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0);

	return isSynchronizedSceneRunning;
}

void func_220() // Position - 0x767D
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_222(), true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_221());
		func_542();
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		PED::DELETE_PED(&pedLocal_94);
	}

	return;
}

float func_221() // Position - 0x76C5
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			return 116.6356f;
	
		case CHAR_FRANKLIN:
			return 175.0504f;
	
		case CHAR_TREVOR:
			return 299.5673f;
	}

	return 0f;
}

Vector3 func_222() // Position - 0x770A
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			return -820.4975f, 176.9618f, 70.6166f;
	
		case CHAR_FRANKLIN:
			return -14.6005f, -1444.6244f, 29.6472f;
	
		case CHAR_TREVOR:
			return 1979.9609f, 3816.0178f, 31.3641f;
	}

	return 0f, 0f, 0f;
}

void func_223() // Position - 0x776F
{
	int duration;

	if (func_225(&uLocal_102, 3f) && !CAM::IS_CAM_ACTIVE(caLocal_101))
	{
		duration = SYSTEM::FLOOR((func_224() - 2f) * 1000f);
		CAM::SET_CAM_ACTIVE(caLocal_100, false);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_101, caLocal_100, duration, 1, 1);
	}

	if (func_225(&uLocal_102, func_224()))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		iLocal_293 = 10;
	}

	return;
}

float func_224() // Position - 0x77CB
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			return 10f;
	
		case CHAR_FRANKLIN:
			return 12f;
	
		case CHAR_TREVOR:
			return 10f;
	}

	return 0f;
}

BOOL func_225(int* piParam0, float fParam1) // Position - 0x7810
{
	if (func_10(piParam0))
		if (func_7(piParam0) > fParam1)
			return true;

	return false;
}

void func_226(var uParam0) // Position - 0x7832
{
	int i;
	eEventType eventAtIndex;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case EVENT_NETWORK_DAMAGE_ENTITY:
				func_227(i, uParam0);
				break;
		}
	}

	return;
}

void func_227(int iParam0, var uParam1) // Position - 0x7871
{
	struct<13> eventData;

	if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 13))
		func_228(&eventData, uParam1);

	return;
}

void func_228(var uParam0, var uParam1) // Position - 0x788F
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(*uParam0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam0))
					{
						func_123(false);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						func_542();
						func_536(uParam1);
					}
				}
			}
		}
	}

	return;
}

void func_229(var uParam0) // Position - 0x78ED
{
	int entityHealth;

	if (!func_551())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_94))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			entityHealth = ENTITY::GET_ENTITY_HEALTH(pedLocal_94);
		
			if (entityHealth - iLocal_58 < 0)
			{
				func_123(false);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_542();
				func_536(uParam0);
			}
		}
	}

	return;
}

void func_230(var uParam0) // Position - 0x793C
{
	int entityHealth;

	if (!func_551())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			entityHealth = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		
			if (entityHealth - iLocal_57 < 0)
			{
				func_123(false);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_542();
				func_536(uParam0);
			}
		}
	}

	return;
}

void func_231(var uParam0) // Position - 0x798F
{
	Vehicle vehiclePedIsIn;
	Vector3 entityCoords;

	if (!func_551())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
			
				if (SYSTEM::VDIST2(uLocal_54, entityCoords) >= 4f)
				{
					func_123(false);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_542();
					func_536(uParam0);
				}
			}
		}
	}

	return;
}

void func_232() // Position - 0x7A00
{
	int num;
	var unk;
	eViewMode followPedCamViewMode;
	var unk5;
	int num2;
	var unk6;
	var unk7;
	int pedMoney;

	if (!func_491(iLocal_47, 16))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
	
		func_482(&iLocal_47, 16);
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		veLocal_97 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_551())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_97))
			{
				VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_97, true);
				VEHICLE::SET_VEHICLE_LIGHTS(veLocal_97, 4);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(veLocal_97, true);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(veLocal_97, false, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_97, true);
			VEHICLE::SET_VEHICLE_LIGHTS(veLocal_97, 4);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(veLocal_97, true);
		}
	
		if (!func_377() || !PED::IS_PED_IN_VEHICLE(pedLocal_94, veLocal_97, false))
		{
			func_473(false);
			return;
		}
	}
	else
	{
		func_473(false);
		return;
	}

	func_213(0);

	if (!VEHICLE::IS_VEHICLE_STOPPED(veLocal_97) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !func_491(iLocal_47, 1024))
	{
		iLocal_293 = 7;
		func_375(true, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\\HUD_321_GO", true, -1);
		iLocal_299 = 0;
		func_492("WAITING FOR VEHICLE TO STOP ");
		return;
	}

	num = 0;
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);

	switch (iLocal_299)
	{
		case 0:
		case 1:
			if (func_551())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false);
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
									return;
								}
							}
						}
						else
						{
							NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
							return;
						}
					}
				}
			}
		
			func_374();
			func_373();
			func_199();
		
			if (func_370())
			{
				func_131("PROSTITUTES_DRIVE_SCENE");
				func_87("PROSTITUTES_PARKED_SCENE");
				func_369();
			
				if (func_551())
				{
					func_197(2);
				
					if (func_551())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4);
									VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
								}
							}
						}
					}
				}
			
				PED::RESET_PED_IN_VEHICLE_CONTEXT(pedLocal_94);
				iLocal_299 = 2;
			}
			break;
	
		case 2:
			if (func_368(iLocal_302))
			{
				func_367(&iLocal_302);
				func_5(&iLocal_73, 2);
			}
		
			func_365(pedLocal_94, false);
		
			if (func_365(PLAYER::PLAYER_PED_ID(), true))
			{
				if (func_363(&unk, 0))
				{
					evmLocal_46 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
					followPedCamViewMode = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
				
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (followPedCamViewMode != FIRST_PERSON && evmLocal_46 == FIRST_PERSON)
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(FIRST_PERSON);
						else if (followPedCamViewMode == FIRST_PERSON && evmLocal_46 != FIRST_PERSON)
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(THIRD_PERSON_MEDIUM);
				
					func_351();
					iLocal_299 = 3;
					func_492("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					_DISPLAY_HELP_TEXT(&unk, -1);
					func_40(&uLocal_111);
					iLocal_295 = 3;
					iLocal_299 = 4;
				}
			}
			break;
	
		case 3:
			if (HUD::IS_PAUSE_MENU_ACTIVE())
				return;
		
			HUD::SHOW_HUD_COMPONENT_THIS_FRAME(HUD_CASH);
			func_331();
			func_295(true, -1, true, false, true, -1082130432, false, false, -1);
			func_294(&unk5, &num2, &unk6, &unk7, false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_HUD_SPECIAL, true);
			PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN);
			PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_UP);
			PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);
			num = 0;
		
			if (MISC::IS_PC_VERSION())
			{
				if (PAD::IS_USING_CURSOR(FRONTEND_CONTROL))
				{
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_ACCEPT, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_CANCEL, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_SCROLL_UP, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_SCROLL_DOWN, true);
					func_290(false, false, false, true);
					func_289(false, -1, true);
				
					if (func_288())
					{
						if (Global_4541816 != iLocal_68)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							iLocal_68 = Global_4541816;
							func_492("Player highlighted a new option using the mouse!");
						}
						else
						{
							num = 1;
						}
					}
				}
			}
		
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_MOVE_DOWN_ONLY) || MISC::IS_PC_VERSION() && !PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && num2 > 100 && MISC::GET_GAME_TIMER() - iLocal_87 > 300)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_492("DOWN pressed!");
			
				if (iLocal_68 < iLocal_69)
					iLocal_68 = iLocal_68 + 1;
				else
					iLocal_68 = 0;
			
				iLocal_87 = MISC::GET_GAME_TIMER();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_MOVE_UP_ONLY) || MISC::IS_PC_VERSION() && !PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && num2 < -100 && MISC::GET_GAME_TIMER() - iLocal_87 > 300)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_492("UP pressed!");
			
				if (iLocal_68 > 0)
					iLocal_68 = iLocal_68 - 1;
				else
					iLocal_68 = iLocal_69;
			
				iLocal_87 = MISC::GET_GAME_TIMER();
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || num == 1)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_CASH);
				func_284();
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
				iLocal_299 = 4;
			}
		
			func_283(iLocal_68, true, 1);
			break;
	
		case 4:
			pedMoney = PED::GET_PED_MONEY(pedLocal_94);
		
			if (iLocal_295 == 3)
			{
				func_375(true, -1);
				func_282();
				func_281(false);
				iLocal_62 = MISC::GET_GAME_TIMER();
				func_131("PROSTITUTES_PARKED_SCENE");
				func_492("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_293 = 6;
			
				if (iLocal_70 > 0)
				{
					if (func_127(pedLocal_94))
						func_126();
					else
						func_473(false);
				
					return;
				}
				else
				{
					if (func_276() >= 20)
					{
						pedMoney = pedMoney + 20;
						func_234(20);
						PED::SET_PED_MONEY(pedLocal_94, pedMoney);
					}
				
					func_473(true);
					return;
				}
			}
		
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_50(PLAYER::PLAYER_PED_ID(), false, false)))
			{
			}
			else
			{
				func_375(true, -1);
				func_282();
			
				if (MISC::IS_AUSSIE_VERSION())
				{
					func_482(&iLocal_47, 1024);
					iLocal_295 = 3;
					func_492("AUSSIE VERSION IS TRUE!?!?!");
				}
			
				if (iLocal_295 != 3)
				{
					if (func_276() > func_233(iLocal_295))
					{
						func_234(func_233(iLocal_295));
						pedMoney = pedMoney + func_233(iLocal_295);
					}
				
					func_41(&uLocal_105, 14f - 4f);
					func_492("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_128();
					iLocal_293 = 11;
				}
			
				PED::SET_PED_MONEY(pedLocal_94, pedMoney);
				iLocal_62 = MISC::GET_GAME_TIMER();
			}
			break;
	}

	return;
}

int func_233(int iParam0) // Position - 0x807A
{
	if (MISC::IS_AUSSIE_VERSION())
		if (iParam0 == 0)
			return 70;
		else if (iParam0 == 1)
			return 70;
		else if (iParam0 == 2)
			return 70;
		else
			return 0;

	if (iParam0 == 0)
		return 50;

	if (iParam0 == 1)
		return 70;

	if (iParam0 == 2)
		return 100;

	return 0;
}

void func_234(int iParam0) // Position - 0x80E5
{
	var unk;

	if (!func_551())
		func_248(_GET_CURRENT_PLAYER_CHARACTER(), 1, iParam0);
	else if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		MONEY::NETWORK_SPENT_PROSTITUTES(iParam0, false, false);
	else
		_NETSHOPPING_PROCESS_TRANSACTION(-1359375127, iParam0, &unk, false, false, false);

	return;
}

void _NETSHOPPING_PROCESS_TRANSACTION(Hash hParam0, int iParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x8127
{
	int num;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return;

	num = 1;

	if (bParam4)
		num = 4;
	else if (bParam3)
		num = 2;
	else if (bParam5)
		num = 8;

	switch (hParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 2115896461:
		case 797947947:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_27935)
				func_236(uParam2, -1135378931, 537254313, 1474183246, hParam0, iParam1, num, 7);
			break;
	
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_236(uParam2, -1135378931, 1445302971, 1474183246, hParam0, iParam1, num, 7);
			break;
	}

	switch (hParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
		case -2081984382:
		case 1089562091:
		case 1989973742:
			if (iParam1 > 0 || Global_262145.f_27935)
				func_236(uParam2, -1135378931, 537254313, 1474183246, hParam0, iParam1, num, 7);
			break;
	
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
		case 883337077:
		case -1274418755:
		case -1853979468:
		case -239888995:
		case 1163066566:
		case -955087020:
		case 1874391251:
		case 1633116913:
		case 15168061:
		case 99792878:
		case 1866258778:
		case -178394060:
		case 409592287:
		case 593836803:
		case 1973036520:
		case 2063456538:
		case -728008329:
		case 119239868:
		case -456458353:
		case 1900048468:
		case 333526332:
		case -2091351051:
		case -373571001:
		case -367430800:
		case 1823444356:
		case 649031587:
		case -1539520895:
		case 560526114:
		case -256590568:
		case -470808433:
		case 1245164680:
		case -1433838369:
		case 1648751987:
		case 674719198:
		case 617724895:
		case 1424147761:
		case 2131157548:
		case 1237940902:
		case -1688538833:
		case 918785029:
		case -1343182760:
		case -1725871206:
		case 1435585629:
		case 1851118721:
		case -1961446392:
		case -1726080156:
		case 300207193:
			func_236(uParam2, -1135378931, 1445302971, 1474183246, hParam0, iParam1, num, 7);
			break;
	}

	return;
}

int func_236(var uParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, int iParam6, int iParam7) // Position - 0x8A70
{
	BOOL flag;
	BOOL flag2;
	int i;
	BOOL flag3;
	int transactionId;
	BOOL flag4;

	flag = false;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		flag = true;

	flag2 = 1;

	if (!flag)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_141()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537456 = 1;
			return 0;
		}
	
		if (Global_2697635)
		{
			if (hParam3 == 1067618600 || hParam3 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}

	flag3 = false;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4535950[i /*85*/].f_66.f_2 == 0)
			flag3 = true;
	}

	if (!flag3)
		return 0;

	*uParam0 = 15;
	transactionId = 2147483647;

	if (flag || flag2 || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&transactionId, hParam3, hParam4, hParam2, iParam5, iParam6))
	{
		if (flag || flag2 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(transactionId))
		{
			*uParam0 = func_243(transactionId, iParam1, hParam4, hParam2, hParam3, iParam5, false, iParam6, iParam7, 1, true);
		
			if (flag2 && !flag)
			{
			}
		
			if (flag)
			{
				if (*uParam0 != -1)
				{
					Global_4535950[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535950[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
		
			Global_4537437 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537455 = 1;
			Global_4537458 = hParam4;
			Global_4537460 = hParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
	
		if (iParam7 & 8 != 0)
		{
			Global_4537458 = hParam4;
			Global_4537460 = hParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
	
		flag4 = false;
	
		if (flag4)
		{
			func_242(1, hParam4);
			Global_4537455 = 0;
		}
	
		if (iParam7 & 4 != 0)
			func_237(-1, hParam4, iParam6, iParam5, -1);
	}

	return 0;
}

void func_237(int iParam0, Hash hParam1, int iParam2, int iParam3, int iParam4) // Position - 0x8C1D
{
	switch (hParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_127.f_71), 0);
			break;
	}

	if (iParam0 != -1)
		func_238(iParam0);

	return;
}

void func_238(int iParam0) // Position - 0x8C55
{
	BOOL flag;

	flag = false;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		flag = true;

	if (iParam0 != -1)
	{
		if (func_241(iParam0))
			if (!flag)
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
		else if (!flag)
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535950[iParam0 /*85*/].f_66);
	
		func_239(&Global_4535950[iParam0 /*85*/]);
	}

	return;
}

void func_239(var uParam0) // Position - 0x8CA9
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_240(&(uParam0->f_14));
	func_240(&(uParam0->f_14.f_13));
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_26), "", 32);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_34), "", 24);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_40), "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
	return;
}

void func_240(var uParam0) // Position - 0x8DB9
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	return;
}

BOOL func_241(int iParam0) // Position - 0x8E01
{
	if (iParam0 >= 0 && iParam0 < 15)
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;

	return false;
}

void func_242(int iParam0, Hash hParam1) // Position - 0x8E2C
{
	Global_2698856 = hParam1;
	Global_2698855 = iParam0;
	return;
}

int func_243(int iParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x8E40
{
	int i;

	i = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4535950[i /*85*/].f_66.f_2 == 0)
		{
			if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
				iParam0 = i + 900;
		
			Global_4535950[i /*85*/].f_66.f_2 = 1;
			Global_4535950[i /*85*/].f_66.f_1 = iParam5;
			Global_4535950[i /*85*/].f_66.f_3 = iParam1;
			Global_4535950[i /*85*/].f_66.f_4 = hParam2;
			Global_4535950[i /*85*/].f_66.f_7 = hParam3;
			Global_4535950[i /*85*/].f_66.f_5 = 0;
			Global_4535950[i /*85*/].f_66 = iParam0;
			Global_4535950[i /*85*/].f_66.f_6 = hParam4;
			Global_4535950[i /*85*/].f_66.f_11 = iParam8;
			Global_4535950[i /*85*/].f_66.f_10 = iParam7;
			Global_4535950[i /*85*/].f_66.f_13 = iParam9;
			Global_4535950[i /*85*/].f_66.f_12 = 0;
			Global_4535950[i /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535950[i /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
		
			if (bParam6)
				Global_4535950[i /*85*/].f_66.f_5 = 1;
		
			if (iParam1 == -1135378931 && bParam10)
				func_244(Global_4535950[i /*85*/], i);
		
			return i;
		}
	}

	return -1;
}

void func_244(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85) // Position - 0x8F7D
{
	Hash eventData;
	int playerBits;

	if (iParam85 < 0)
		return;

	eventData.f_3 = 2147483647;
	eventData = -710178565;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = { uParam0.f_66 };
	eventData.f_3.f_33 = iParam85;
	playerBits = func_246(eventData.f_1);

	if (Global_262145.f_23711 && !Global_262145.f_23712 && !Global_262145.f_23713)
		return;

	if (!(playerBits == 0))
	{
		func_245();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 37, playerBits, eventData);
	}

	return;
}

void func_245() // Position - 0x9011
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
	return;
}

int func_246(Player plParam0) // Position - 0x9021
{
	var address;

	if (func_207(plParam0))
		MISC::SET_BIT(&address, plParam0);

	return address;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x903C
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

int func_248(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x9053
{
	if (func_275(echParam0) == 3)
		return 0;

	if (func_275(echParam0) == 4)
		return 0;

	return func_249(func_275(echParam0), 0, iParam1, iParam2, false);
}

int func_249(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x9087
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_274();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_273(99, 1);
					func_272(-656546900, iParam3);
					break;
			
				case 1:
					func_272(-2098183071, iParam3);
					break;
			
				case 2:
					func_272(1578119842, iParam3);
					break;
			}
		
			func_258(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_256(5))
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
							func_272(-1190521599, iParam3);
							break;
					
						case 1:
							func_272(490143716, iParam3);
							break;
					
						case 2:
							func_272(121069433, iParam3);
							break;
					}
				
					if (func_256(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_272(219506691, iParam3);
							break;
					
						case 1:
							func_272(1871505786, iParam3);
							break;
					
						case 2:
							func_272(-2024399847, iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_272(27639974, iParam3);
							break;
					
						case 1:
							func_272(422258364, iParam3);
							break;
					
						case 2:
							func_272(316202960, iParam3);
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
							func_272(1806738963, iParam3);
							break;
					
						case 1:
							func_272(1576781520, iParam3);
							break;
					
						case 2:
							func_272(671882196, iParam3);
							break;
					}
					break;
			
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case -123529621:
							switch (iParam0)
							{
								case 0:
									func_272(408653638, iParam3);
									break;
							
								case 1:
									func_272(-424799277, iParam3);
									break;
							
								case 2:
									func_272(-558138038, iParam3);
									break;
							}
							break;
					
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_272(2038531975, iParam3);
									break;
							
								case 1:
									func_272(-572903575, iParam3);
									break;
							
								case 2:
									func_272(-953947924, iParam3);
									break;
							}
						
							if (func_256(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_272(-445823242, iParam3);
									break;
							
								case 1:
									func_272(-1386757215, iParam3);
									break;
							
								case 2:
									func_272(-727828275, iParam3);
									break;
							}
							break;
					
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_272(-1744069936, iParam3);
									break;
							
								case 1:
									func_272(799609312, iParam3);
									break;
							
								case 2:
									func_272(181688102, iParam3);
									break;
							}
						
							func_255(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_273(95, iParam3);
					break;
			
				case 1:
					func_273(97, iParam3);
					break;
			
				case 2:
					func_273(96, iParam3);
					break;
			}
		
			func_273(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_252(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_252(num2);
	}

	num6 = Global_61340[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_61340[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_61340[num3] = 2147483647;
				else
					Global_61340[num3] = Global_61340[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_272(-330339780, iParam3);
					break;
			
				case 1:
					func_272(1697564429, iParam3);
					break;
			
				case 2:
					func_272(1674823841, iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_61340[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_61340[num3];
			Global_61340[num3] = Global_61340[num3] - iParam3;
		
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
		Global_113969.f_20567.f_233[num3 /*69*/].f_2[Global_113969.f_20567.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_113969.f_20567.f_233[num3 /*69*/].f_2[Global_113969.f_20567.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113969.f_20567.f_233[num3 /*69*/].f_2[Global_113969.f_20567.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113969.f_20567.f_233[num3 /*69*/] = Global_113969.f_20567.f_233[num3 /*69*/] + 1;
		Global_113969.f_20567.f_233[num3 /*69*/].f_1 = Global_113969.f_20567.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_113969.f_20567.f_233[num3 /*69*/].f_1 > 10)
			Global_113969.f_20567.f_233[num3 /*69*/].f_1 = 0;
	}

	func_251(iParam0);

	if (Global_44042 == 15)
		func_250(false);

	return 1;
}

void func_250(BOOL bParam0) // Position - 0x9686
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_113969.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_113969.f_20567.f_233[i /*69*/].f_2[j /*6*/];
			Global_113969.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_113969.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_113969.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_113969.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_61348[i /*3*/][0] = Global_113969.f_20567[i];
		Global_61348.f_31[i /*3*/][0] = Global_113969.f_20567.f_11[i];
		Global_61348.f_62[i /*3*/][0] = Global_113969.f_20567.f_22[i];
		Global_61348.f_93[i /*3*/][0] = Global_113969.f_20567.f_33[i];
		Global_61348.f_124[i /*3*/][0] = Global_113969.f_20567.f_44[i];
		Global_61348.f_155[i /*3*/][0] = Global_113969.f_20567.f_55[i];
		Global_61348.f_186[i /*3*/][0] = Global_113969.f_20567.f_66[i];
		Global_61348.f_217[i /*3*/][0] = Global_113969.f_20567.f_77[i];
		Global_61348.f_248[i /*3*/][0] = Global_113969.f_20567.f_88[i];
	
		if (!bParam0)
		{
			Global_61348[i /*3*/][1] = Global_113969.f_20567[i];
			Global_61348.f_31[i /*3*/][1] = Global_113969.f_20567.f_11[i];
			Global_61348.f_62[i /*3*/][1] = Global_113969.f_20567.f_22[i];
			Global_61348.f_93[i /*3*/][1] = Global_113969.f_20567.f_33[i];
			Global_61348.f_124[i /*3*/][1] = Global_113969.f_20567.f_44[i];
			Global_61348.f_155[i /*3*/][1] = Global_113969.f_20567.f_55[i];
			Global_61348.f_186[i /*3*/][1] = Global_113969.f_20567.f_66[i];
			Global_61348.f_217[i /*3*/][1] = Global_113969.f_20567.f_77[i];
			Global_61348.f_248[i /*3*/][1] = Global_113969.f_20567.f_88[i];
		}
	}

	return;
}

void func_251(int iParam0) // Position - 0x9908
{
	int value;

	value = Global_61340[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(52740893, value, true);
			break;
	
		case 1:
			STATS::STAT_SET_INT(1153264002, value, true);
			break;
	
		case 2:
			STATS::STAT_SET_INT(-1921710979, value, true);
			break;
	}

	return;
}

void func_252(int iParam0) // Position - 0x9962
{
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
		func_138(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_138(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_138(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_138(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_138(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_138(8277, 0, -1, true);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_113969.f_20567.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_113969.f_20567.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_254() /*5570*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_254() /*5570*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*You have redeemed your promotion for ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x9ADC
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
	
		default:
			break;
	}

	return "";
}

int func_254() // Position - 0x9BDF
{
	int num;

	num = 0;
	return num;
}

void func_255(int iParam0) // Position - 0x9BEC
{
	func_273(93, iParam0);
	func_273(29, iParam0);
	func_273(30, iParam0);
	return;
}

BOOL func_256(int iParam0) // Position - 0x9C0C
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
		num = func_142(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_142(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_142(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_142(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_142(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_142(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_113969.f_20567.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_254() /*5570*/].f_681.f_10, iParam0);
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x9DAC
{
	if (iParam1 == -1)
		iParam1 = func_141();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_258(BOOL bParam0) // Position - 0x9DC8
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(-656546900, &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(-2098183071, &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(1578119842, &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(-422142831, &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(-422142831, value, true);
		func_155(27, value);
	}

	if (value < 200000000)
		return 0;

	func_259(27, 1);
	return 1;
}

int func_259(int iParam0, int iParam1) // Position - 0x9E7F
{
	if (iParam0 >= 78)
		return 0;

	return func_260(iParam0, iParam1);
}

int func_260(int iParam0, int iParam1) // Position - 0x9E9A
{
	if (func_552(14) && !func_271(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_33199 != 0 && !Global_79389)
		return 0;

	if (func_270(&Global_4543384))
	{
		if (func_268(&Global_4543384, iParam0))
			return 0;
	
		if (func_261(&Global_4543384, iParam0))
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

BOOL func_261(var uParam0, int iParam1) // Position - 0x9F37
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_552(14) && !func_271(iParam1))
		return false;

	if (func_268(uParam0, iParam1))
		return false;

	if (func_267(uParam0) < 0f)
		func_266(uParam0, 0);

	func_264(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_262(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_262(var uParam0, int iParam1) // Position - 0x9FE8
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_552(14) && !func_271(iParam1))
		return 0;

	if (func_268(uParam0, iParam1))
		return 0;

	if (func_267(uParam0) < 0f)
		func_266(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_263(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_263(var uParam0, int iParam1) // Position - 0xA063
{
	return uParam0->[iParam1] == 78;
}

void func_264(var uParam0) // Position - 0xA074
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_265(uParam0, i);
	}

	func_266(uParam0, Global_4543383 - 0.5f);
	return;
}

void func_265(var uParam0, int iParam1) // Position - 0xA0A8
{
	uParam0->[iParam1] = 78;
	return;
}

void func_266(var uParam0, int iParam1) // Position - 0xA0B8
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_267(var uParam0) // Position - 0xA0D5
{
	return uParam0->f_80;
}

BOOL func_268(var uParam0, int iParam1) // Position - 0xA0E1
{
	return func_269(uParam0, iParam1) != -1;
}

int func_269(var uParam0, int iParam1) // Position - 0xA0F3
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_270(var uParam0) // Position - 0xA120
{
	return uParam0->f_79 == 1;
}

BOOL func_271(int iParam0) // Position - 0xA12E
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

void func_272(Hash hParam0, int iParam1) // Position - 0xA17E
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_273(int iParam0, int iParam1) // Position - 0xA1A1
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_59908[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_59908[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59908[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_59908[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_274() // Position - 0xA1FE
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(52740893, &outValue, -1);
	
		if (!(Global_61340[0] == outValue))
			Global_61340[0] = outValue;
	
		STATS::STAT_GET_INT(1153264002, &outValue, -1);
	
		if (!(Global_61340[1] == outValue))
			Global_61340[1] = outValue;
	
		STATS::STAT_GET_INT(-1921710979, &outValue, -1);
	
		if (!(Global_61340[2] == outValue))
			Global_61340[2] = outValue;
	}

	return;
}

int func_275(eCharacter echParam0) // Position - 0xA273
{
	return Global_2169[echParam0 /*29*/].f_17;
}

int func_276() // Position - 0xA284
{
	if (func_551())
		return func_278(PLAYER::PLAYER_ID());

	return _GET_PLAYER_CASH(_GET_CURRENT_PLAYER_CHARACTER());
}

int _GET_PLAYER_CASH(eCharacter echParam0) // Position - 0xA2A9
{
	int outValue;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			STATS::STAT_GET_INT(52740893, &outValue, -1);
			return outValue;
	
		case CHAR_FRANKLIN:
			STATS::STAT_GET_INT(1153264002, &outValue, -1);
			return outValue;
	
		case CHAR_TREVOR:
			STATS::STAT_GET_INT(-1921710979, &outValue, -1);
			return outValue;
	
		default:
		
	}

	return 0;
}

int func_278(Player plParam0) // Position - 0xA301
{
	int num;

	num = func_279(plParam0);
	return num;
}

int func_279(Player plParam0) // Position - 0xA313
{
	if (plParam0 > -1)
		if (plParam0 == PLAYER::PLAYER_ID())
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		else if (func_280(plParam0))
			return Global_1845281[plParam0 /*883*/].f_206.f_3;
		else
			return 0;

	return 0;
}

BOOL func_280(Player plParam0) // Position - 0xA356
{
	if (!func_207(plParam0))
		return false;

	return IS_BIT_SET(Global_2672855.f_1, plParam0);
}

void func_281(BOOL bParam0) // Position - 0xA375
{
	if (AUDIO::GET_PLAYER_RADIO_STATION_INDEX() != 255)
	{
		AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(bParam0);
		AUDIO::SET_MOBILE_PHONE_RADIO_STATE(bParam0);
	}

	return;
}

void func_282() // Position - 0xA392
{
	Global_23692.f_5 = 0;
	return;
}

void func_283(int iParam0, BOOL bParam1, int iParam2) // Position - 0xA3A0
{
	int i;
	int num;

	Global_23831.f_6342 = iParam0;
	Global_23831.f_6477 = iParam2;

	if (Global_23831.f_6342 < Global_23831.f_6341)
	{
		Global_23831.f_6341 = Global_23831.f_6342;
	}
	else if (Global_23831.f_6332 && Global_23831.f_6342 > Global_23831.f_6343 || !Global_23831.f_6332 && Global_23831.f_6342 >= Global_23831.f_6341 + Global_23831.f_5828)
	{
		for (i = Global_23831.f_6341; i <= Global_23831.f_6342; i = i + 1)
		{
			if (i >= 0 && i < 127)
				if (Global_23831.f_5692[i] != 0)
					num = num + 1;
		}
	
		while (num > Global_23831.f_5828 && Global_23831.f_6341 < 128)
		{
			Global_23831.f_6341 = Global_23831.f_6341 + 1;
			num = 0;
		
			for (i = Global_23831.f_6341; i <= Global_23831.f_6342; i = i + 1)
			{
				if (i >= 0 && i < 127)
					if (Global_23831.f_5692[i] != 0)
						num = num + 1;
			}
		}
	}

	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;

	if (bParam1)
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_23831.f_5241), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4541740.f_21), "", 16);
	}

	return;
}

void func_284() // Position - 0xA4F2
{
	if (iLocal_68 == iLocal_69)
	{
		iLocal_295 = 3;
	}
	else
	{
		iLocal_296 = uLocal_287[iLocal_68];
		func_285();
	
		if (iLocal_296 == 0)
		{
			func_87("PROSTITUTES_BJ_SCENE");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PROSTITUTE_BLOWJOB", false, -1);
			iLocal_295 = 0;
		}
		else if (iLocal_296 == 1)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			iLocal_295 = 1;
		}
		else if (iLocal_296 == 2)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			iLocal_295 = 2;
		}
	}

	return;
}

void func_285() // Position - 0xA560
{
	switch (iLocal_296)
	{
		case 0:
			func_287();
			break;
	
		case 1:
		case 2:
			func_286();
			break;
	}

	return;
}

void func_286() // Position - 0xA590
{
	iLocal_44 = iLocal_44 + 1;
	bLocal_45 = true;
	return;
}

void func_287() // Position - 0xA5A1
{
	iLocal_43 = iLocal_43 + 1;
	bLocal_45 = true;
	return;
}

BOOL func_288() // Position - 0xA5B2
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (Global_4541816 > -1)
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
				return true;

	return false;
}

int func_289(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0xA5D9
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return 0;

	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		return 0;

	if (bParam2)
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();

	if (Global_4541816 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
	
		if (bParam0 && PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			return 1;
		}
		else
		{
			Global_4541816 = -1;
			return 0;
		}
	}

	if (Global_4541816 > -1 || Global_4541816 == -3 || Global_4541816 == -2 || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}

	if (Global_4541816 == -1 && bParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4541816 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}

	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

void func_290(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA6B9
{
	float x;
	float y;
	float x2;
	float y2;
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	int num7;
	int num8;
	int num9;
	int num10;

	num3 = 0.034722f / 2f;
	num10 = -1;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		Global_4541816 = -1;
		return;
	}

	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	x = Global_23828;
	x2 = x + Global_23830;
	y2 = Global_23831.f_6333;
	y = Global_23831.f_6333 - ((float)Global_23831.f_6335 * 0.034722f);

	if (bParam2)
	{
		y2 = y2 + 0.034722f;
		y = y + 0.034722f;
	}

	if (Global_23831.f_6335 < 1)
		y = Global_23831.f_6333 - 0.034722f;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num = x;
	num2 = y;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x, y, &x, &y);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x2, y2, &x2, &y2);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_293();

	if (Global_4541816 == -6)
		return;

	Global_4541816 = -1;
	num4 = Global_4541810;
	num5 = Global_4541811;

	if (Global_23831.f_6336 > Global_23831.f_6335)
	{
		if (Global_4541810 >= x && Global_4541810 <= x2 && Global_4541811 >= y2 && Global_4541811 < y2 + num3)
		{
			Global_4541816 = -2;
		
			if (bParam3)
				func_292(false);
		
			return;
		}
	
		if (Global_4541810 >= x && Global_4541810 <= x2 && Global_4541811 >= y2 + num3 && Global_4541811 < y2 + 0.034722f)
		{
			Global_4541816 = -3;
		
			if (bParam3)
				func_292(false);
		
			return;
		}
	}

	if (num4 >= x && num4 <= x2 && num5 >= y && num5 <= y2)
	{
		num6 = num5 - y;
		num10 = SYSTEM::FLOOR(num6 / 0.034722f);
	
		if (Global_23831.f_6336 == -1)
		{
			Global_4541816 = 0;
			num10 = 0;
			return;
		}
	
		num8 = 148;
		num9 = num8 / Global_23831.f_6335;
		num7 = 32 + (num8 - (num9 * num10));
	
		if (bParam3)
		{
			if (!bParam1 || num10 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_291(num, num2 + ((float)num10 * 0.034722f), Global_23830, 0.034722f - 0.0015f, 255, 255, 255, num7);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
	
		Global_4541816 = Global_23831.f_8737[num10];
		return;
	}

	if (!bParam0)
	{
		if (num4 < x2)
		{
			Global_4541816 = -4;
			return;
		}
	
		if (num5 > 0.9f)
		{
			Global_4541816 = -5;
			return;
		}
	}
	else if (num4 < x2 && num5 < y2 + 0.25f)
	{
		Global_4541816 = -4;
		return;
	}

	Global_4541816 = -1;
	return;
}

void func_291(float fParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0xA965
{
	GRAPHICS::DRAW_RECT(fParam0 + (iParam2 * 0.5f), fParam1 + (fParam3 * 0.5f), iParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
	return;
}

void func_292(BOOL bParam0) // Position - 0xA994
{
	float num;
	float num2;
	float num3;
	int num4;

	num3 = 0.034722f / 2f;

	if (bParam0)
		num4 = 48;
	else
		num4 = 210;

	num = Global_23828;
	num2 = Global_23831.f_6333;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);

	if (Global_4541816 == -2)
		func_291(num, num2, Global_23830, num3, 255, 255, 255, num4);
	else if (Global_4541816 == -3)
		func_291(num, num2 + num3, Global_23830, num3, 255, 255, 255, num4);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_293() // Position - 0xAA1D
{
	Global_4541812 = Global_4541810;
	Global_4541813 = Global_4541811;
	Global_4541810 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X);
	Global_4541811 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y);
	Global_4541814 = Global_4541810 - Global_4541812;
	Global_4541815 = Global_4541811 - Global_4541813;
	return;
}

void func_294(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xAA65
{
	*uParam0 = SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	*uParam1 = SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	*uParam2 = SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	*uParam3 = SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);

	if (bParam4)
	{
		if ((float)*uParam0 == 0f && (float)*uParam1 == 0f)
		{
			*uParam0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
			*uParam1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
		}
	
		if ((float)*uParam2 == 0f && (float)*uParam3 == 0f)
		{
			*uParam2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
			*uParam3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);
		}
	}

	return;
}

void func_295(BOOL bParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Position - 0xAB3A
{
	int num;
	int r;
	int g;
	int b;
	int a;
	int i;
	int numberOfLinesForString;
	int j;
	int k;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int l;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;
	int num13;
	int num14;
	int num15;
	int num16;
	int num17;
	int num18;
	int num19;
	int num20;
	int num21;
	int num22;
	int num23;
	BOOL flag;
	BOOL flag2;
	float num24;
	float y;
	float width;
	float height;
	float textureResolution;
	BOOL flag3;
	float x;
	float screenWidthOfDisplayText;
	float num25;
	float num26;
	float num27;
	int red;
	int green;
	int blue;
	int alpha;
	float num28;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	float height2;
	float height3;
	float num29;
	float num30;
	var unk3;
	var unk4;
	float num31;
	var textureDict;
	var textureName;
	float num32;
	float size;
	float size2;
	int num33;
	float num34;
	float num35;
	int m;
	int r2;
	int g2;
	int b2;
	int a2;
	int num36;
	var text;
	float value;
	float value2;
	float num37;
	float num38;
	float num39;

	if (!func_330(&num, false, iParam1))
		return;

	num == -1;

	if (!func_328(false, bParam6))
		return;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	height3 = 0f;

	if (Global_23831)
		if (func_326(29, true, true, &width, &height, bParam7))
			num29 = height / width;
		else
			Global_23831 = false;

	if (iParam5 == -1f)
		iParam5 = Global_23830;

	height3 = iParam5 * num29;

	if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) == MISC::GET_HASH_KEY("HIDE"))
		num30 = Global_23829;
	else
		num30 = Global_23829 + height3 + 0.034722f + 0f;

	num31 = 1f;
	func_324(bParam7, &unk3, &unk4, &num31);

	if (bParam3)
	{
		if (Global_23831.f_5821 <= 1)
		{
			func_320(Global_23831.f_5821 + 1, "DFLT_MNU_OPT" /*Exit*/, 0, true, 0, false, 0);
			Global_23831.f_6617 = 1;
		}
	}

	for (i = 0; i < 2; i = i + 1)
	{
		if (i == 1 && Global_23831.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				num28 = Global_23829;
			}
			else
			{
				if (Global_23831)
				{
					TEXT_LABEL_ASSIGN_STRING(&textureDict, func_319(29), 64);
					TEXT_LABEL_ASSIGN_STRING(&textureName, func_316(29, true), 64);
				
					if (MISC::GET_HASH_KEY(&Global_23831.f_7680[29 /*16*/]) == -1487683087)
					{
						func_291(Global_23828, Global_23829, iParam5, height3, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&textureDict, &textureName, Global_23828 + (iParam5 * 0.5f), Global_23829 + (height3 * 0.5f), iParam5, height3, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&textureDict, &textureName, Global_23828 + (iParam5 * 0.5f), Global_23829 + (height3 * 0.5f), iParam5, height3, 0f, 255, 255, 255, 255, false, 0);
					}
				}
			
				if (Global_23831.f_9086)
				{
					r = Global_23831.f_9082;
					g = Global_23831.f_9083;
					b = Global_23831.f_9084;
					a = Global_23831.f_9085;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
			
				func_291(Global_23828, Global_23829 + height3, iParam5, 0.034722f, r, g, b, a);
				num28 = Global_23829 + height3 + 0.034722f + 0f;
			
				if (MISC::GET_HASH_KEY(&(Global_23831.f_1)) != 0)
				{
					func_315();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_1));
					num7 = 0;
					num8 = 0;
					num9 = 0;
					num10 = 0;
				
					for (l = 0; l < Global_23831.f_74; l = l + 1)
					{
						if (Global_23831.f_5[l] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_10[num7]);
							num7 = num7 + 1;
						}
						else if (Global_23831.f_5[l] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_14[num8], Global_23831.f_18[num8]);
							num8 = num8 + 1;
						}
						else if (Global_23831.f_5[l] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_23831.f_5[l] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_23831.f_5[l] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23831.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23831.f_5[l] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23831.f_5[l] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23831.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23831.f_5[l] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23831.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
					}
				
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(Global_23828 + 0.00390625f, Global_23829 + height3 + 0.00416664f, 0);
				}
			
				if (Global_23831.f_6338)
				{
					func_315();
					func_313((Global_23828 + iParam5) - 0.00390625f - func_314("CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23831.f_6339, Global_23831.f_6340), Global_23829 + height3 + 0.00416664f, "CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23831.f_6339, Global_23831.f_6340);
				}
				else if (Global_23831.f_6334 > Global_23831.f_5828)
				{
					if (Global_23831.f_6337 != 0)
					{
						func_315();
						func_313((Global_23828 + iParam5) - 0.00390625f - func_314("CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23831.f_6337, Global_23831.f_6336), Global_23829 + height3 + 0.00416664f, "CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23831.f_6337, Global_23831.f_6336);
					}
				}
			}
		
			numberOfLinesForString = Global_23831.f_6341;
			num2 = 0;
			num32 = num28;
		
			if (Global_23831.f_9096)
			{
				r = Global_23831.f_9092;
				g = Global_23831.f_9093;
				b = Global_23831.f_9094;
				a = Global_23831.f_9095;
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
			}
		
			while (num2 < Global_23831.f_5828 && numberOfLinesForString <= Global_23831.f_5821)
			{
				if (numberOfLinesForString >= 0)
				{
					if (Global_23831.f_6088[numberOfLinesForString])
					{
						if (Global_23831.f_5959[numberOfLinesForString] && numberOfLinesForString != Global_23831.f_6341)
							num28 = num28 + 0.00277776f;
					
						height2 = 0.034722f;
					
						if (Global_23831.f_6348[numberOfLinesForString] != 0f)
							height2 = Global_23831.f_6348[numberOfLinesForString];
					
						num28 = num28 + height2;
						num2 = num2 + 1;
					}
				}
			
				numberOfLinesForString = numberOfLinesForString + 1;
			}
		
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23828 + (iParam5 * 0.5f), (num32 + ((num28 - num32) * 0.5f)) - 0.00138888f, iParam5, num28 - num32, 0f, 255, 255, 255, 255, false, 0);
		
			if (Global_23831.f_6334 > Global_23831.f_5828)
			{
				if (Global_23831.f_9101)
				{
					r = Global_23831.f_9097;
					g = Global_23831.f_9098;
					b = Global_23831.f_9099;
					a = Global_23831.f_9100;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 204;
				}
			
				func_291(Global_23828, num28 + 0f, iParam5, 0.034722f, r, g, b, a);
				textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				textureResolution = textureResolution * (0.5f / num31);
				textureResolution.f_1 = textureResolution.f_1 * (0.5f / num31);
			
				if (Global_23831.f_9114)
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
				}
			
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", Global_23828 + (iParam5 * 0.5f), num28 + 0f + (0.034722f * 0.5f), (textureResolution / 1280f) * num31, (textureResolution.f_1 / 720f) * num31, 0f, r, g, b, a, false, 0);
				num28 = num28 + 0f + 0.034722f;
			}
		
			if (MISC::GET_HASH_KEY(&(Global_23831.f_5241)) != 0 && Global_23831.f_5323 != -1)
			{
				num28 = num28 + (0.00277776f * 2f);
				x = Global_23828 + 0.0046875f;
			
				if (Global_23831.f_5325 != 0)
				{
					func_326(Global_23831.f_5325, true, true, &width, &height, bParam7);
					x = (Global_23828 + width + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_312(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23831.f_5319; l = l + 1)
				{
					if (Global_23831.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23831.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[num8], Global_23831.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23831.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num28 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_291(Global_23828, num28 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23831.f_9106)
				{
					r = Global_23831.f_9102;
					g = Global_23831.f_9103;
					b = Global_23831.f_9104;
					a = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23828 + (iParam5 * 0.5f), (num28 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_312(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23831.f_5319; l = l + 1)
				{
					if (Global_23831.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23831.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[num8], Global_23831.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23831.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, num28 + 0.00277776f, 0);
			
				if (Global_23831.f_5325 != 0)
				{
					func_326(Global_23831.f_5325, true, true, &width, &height, bParam7);
					func_311(Global_23831.f_5325, true, &red, &green, &blue, &alpha);
					GRAPHICS::DRAW_SPRITE(func_319(Global_23831.f_5325), func_316(Global_23831.f_5325, true), Global_23828 + (width * 0.5f) + (0.00078125f * 2f), (num28 + (height * 0.5f)) - (0.00138888f * 4f), width, height, 0f, red, green, blue, alpha, false, 0);
				}
			
				num28 = num28 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_5247)))
				{
					num28 = num28 + (0.00138888f * 6f);
					func_312(x);
					size = 0.35f;
				
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23831.f_5247))) > 600)
						size = 0.35f * 0.625f;
				
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5247));
					numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num28 + 0.00277776f);
					HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
					func_291(Global_23828, num28 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
				
					if (Global_23831.f_9106)
					{
						r = Global_23831.f_9102;
						g = Global_23831.f_9103;
						b = Global_23831.f_9104;
						a = Global_23831.f_9105;
					}
					else
					{
						HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
					}
				
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23828 + (iParam5 * 0.5f), (num28 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
					func_312(x);
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5247));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, num28 + 0.00277776f, 0);
					num28 = num28 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
				}
			
				if (Global_23831.f_5323 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_23831.f_5324 > Global_23831.f_5323)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_23831.f_5241), "", 24);
						Global_23831.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_5247)))
			{
				num28 = num28 + (0.00277776f * 2f);
				x = Global_23828 + 0.0046875f;
				size2 = 0.35f;
			
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23831.f_5247))) > 600)
					size2 = 0.35f * 0.625f;
			
				func_312(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23831.f_5247));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23831.f_5319; l = l + 1)
				{
					if (Global_23831.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23831.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_5262[num8], Global_23831.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23831.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23831.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23831.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num28 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_291(Global_23828, num28 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23831.f_9106)
				{
					r = Global_23831.f_9102;
					g = Global_23831.f_9103;
					b = Global_23831.f_9104;
					a = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23828 + (iParam5 * 0.5f), (num28 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
				func_312(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23831.f_5247));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, num28 + 0.00277776f, 0);
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4541740.f_21)) != 0 && Global_4541740.f_65 != -1)
			{
				num28 = num28 + (0.00277776f * 2f);
				x = Global_23828 + 0.0046875f;
			
				if (Global_4541740.f_67 != 0)
				{
					func_326(Global_4541740.f_67, true, true, &width, &height, bParam7);
					x = (Global_23828 + width + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_312(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4541740.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4541740.f_61; l = l + 1)
				{
					if (Global_4541740.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541740.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4541740.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541740.f_34[num8], Global_4541740.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4541740.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4541740.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4541740.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4541740.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4541740.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4541740.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4541740.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4541740.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4541740.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4541740.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4541740.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4541740.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num28 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_291(Global_23828, num28 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23831.f_9106)
				{
					r = Global_23831.f_9102;
					g = Global_23831.f_9103;
					b = Global_23831.f_9104;
					a = Global_23831.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23828 + (iParam5 * 0.5f), (num28 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_312(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4541740.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4541740.f_61; l = l + 1)
				{
					if (Global_4541740.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541740.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4541740.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4541740.f_34[num8], Global_4541740.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4541740.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4541740.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4541740.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4541740.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4541740.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4541740.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4541740.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4541740.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4541740.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4541740.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4541740.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4541740.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, num28 + 0.00277776f, 0);
			
				if (Global_4541740.f_67 != 0)
				{
					func_326(Global_4541740.f_67, true, true, &width, &height, bParam7);
					func_311(Global_4541740.f_67, true, &red, &green, &blue, &alpha);
					GRAPHICS::DRAW_SPRITE(func_319(Global_4541740.f_67), func_316(Global_4541740.f_67, true), Global_23828 + (width * 0.5f) + (0.00078125f * 2f), (num28 + (height * 0.5f)) - (0.00138888f * 4f), width, height, 0f, red, green, blue, alpha, false, 0);
				}
			
				num28 = num28 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (Global_4541740.f_65 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_4541740.f_66 > Global_4541740.f_65)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_4541740.f_21), "", 16);
						Global_4541740.f_65 = -1;
					}
				}
			}
		
			func_304(unk3, iParam1, iParam8, false, false, false, bParam4, 1, false);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
	
		if (i == 1 || !Global_23831.f_6331)
		{
			num11 = 0;
			num15 = 0;
			num12 = 0;
			num13 = 0;
			num14 = 0;
			num2 = 0;
			num3 = 0;
			num4 = 0;
			num5 = 0;
			num6 = 0;
			num33 = Global_23831.f_5821;
		
			if (Global_23831.f_6332)
				num33 = Global_23831.f_6335 - 1;
		
			num34 = 0f;
			num35 = 0f;
		
			for (j = 0; j <= num33; j = j + 1)
			{
				height2 = 0.034722f;
			
				if (Global_23831.f_6348[numberOfLinesForString] != 0f)
					height2 = Global_23831.f_6348[numberOfLinesForString];
			
				if (Global_23831.f_6332)
					numberOfLinesForString = Global_23831.f_8737[j];
				else
					numberOfLinesForString = j;
			
				num5 = num6;
				flag2 = false;
			
				if (numberOfLinesForString >= Global_23831.f_6341 && num2 < Global_23831.f_5828)
				{
					flag2 = true;
				
					if (Global_23831.f_6342 == numberOfLinesForString)
						num35 = num34;
				
					if (Global_23831.f_5959[numberOfLinesForString])
						num5 = num5 + 1;
				
					y = num30 + num34 + (0.00277776f * (float)num5) + 0.00277776f;
				}
			
				Global_23831.f_6482[numberOfLinesForString] = y;
				num24 = Global_23828 + 0.0046875f;
				flag3 = false;
				flag = Global_23831.f_6342 == numberOfLinesForString;
			
				if (flag && i == 1 && flag2)
				{
					r2 = 255;
					g2 = 255;
					b2 = 255;
					a2 = 255;
				
					if (Global_23831.f_9108)
						HUD::GET_HUD_COLOUR(Global_23831.f_9107, &r2, &g2, &b2, &a2);
					else
						HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r2, &g2, &b2, &a2);
				
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", Global_23828 + (iParam5 * 0.5f), num30 + num35 + (0.00277776f * (float)num5) + (height2 * 0.5f), iParam5, height2, 0f, r2, g2, b2, a2, false, 0);
					Global_23831.f_6480 = y;
				}
			
				for (k = 0; k < Global_23831.f_5829; k = k + 1)
				{
					if (IS_BIT_SET(Global_23831.f_5692[numberOfLinesForString], k) || Global_23831.f_5659[k] == 5)
					{
						if (Global_23831.f_6332)
						{
							num11 = Global_23831.f_8753[(num2 * Global_23831.f_5829) + k];
							num12 = Global_23831.f_8794[(num2 * Global_23831.f_5829) + k];
							num13 = Global_23831.f_8835[(num2 * Global_23831.f_5829) + k];
							num14 = Global_23831.f_8876[(num2 * Global_23831.f_5829) + k];
							num15 = Global_23831.f_8917[(num2 * Global_23831.f_5829) + k];
						}
						else
						{
							Global_23831.f_8753[(num2 * Global_23831.f_5829) + k] = num11;
							Global_23831.f_8794[(num2 * Global_23831.f_5829) + k] = num12;
							Global_23831.f_8835[(num2 * Global_23831.f_5829) + k] = num13;
							Global_23831.f_8876[(num2 * Global_23831.f_5829) + k] = num14;
							Global_23831.f_8917[(num2 * Global_23831.f_5829) + k] = num15;
						}
					
						num36 = 0;
						flag7 = false;
					
						if (Global_23831.f_6614[0] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_23831.f_6611[0])
							{
								flag7 = true;
								num36 = 0;
							}
						}
					
						if (Global_23831.f_6614[1] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_23831.f_6611[1])
							{
								flag7 = true;
								num36 = 1;
							}
						}
					
						if (Global_23831.f_5665[k] != -1f)
							num24 = Global_23828 + 0.0046875f + Global_23831.f_5665[k];
					
						if (k < 4 && Global_23831.f_5665[k + 1] != -1f && num24 < Global_23831.f_5665[k + 1])
							num27 = Global_23831.f_5665[k + 1] - num24;
						else
							num27 = (Global_23828 + Global_23830) - 0.0046875f - num24;
					
						if (Global_23831.f_5678[k] && Global_23831.f_6477 && flag)
							flag6 = true;
						else
							flag6 = false;
					
						switch (Global_23831.f_5659[k])
						{
							case 0:
								break;
						
							case 1:
								num16 = num11;
							
								if (flag2)
								{
									if (!Global_23831.f_6332)
									{
										screenWidthOfDisplayText = 0f;
										num25 = 0f;
										num17 = 0;
										num18 = 0;
										num19 = 0;
										num20 = 0;
										num21 = 0;
									
										if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0)
										{
											flag4 = false;
											flag5 = false;
										
											for (l = 0; l < 4; l = l + 1)
											{
												if (Global_23831.f_2387[num16 /*5*/][l] == 5 || Global_23831.f_2387[num16 /*5*/][l] == 8)
													flag5 = true;
												else if (Global_23831.f_2387[num16 /*5*/][l] == 9)
													flag4 = true;
											}
										
											if (Global_23831.f_2130[num16])
												flag5 = true;
										
											func_302(flag, Global_23831.f_1616[num16], Global_23831.f_1873[num16], flag7, num36, flag5, flag4);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_23831.f_79[num16 /*6*/]);
										}
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_23831.f_2387[num16 /*5*/][l] == 1)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_23831.f_2387[num16 /*5*/][l] == 8)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_23831.f_2387[num16 /*5*/][l] == 5)
											{
												if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696724[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23831.f_2387[num16 /*5*/][l] == 6)
											{
												if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2696724[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23831.f_2387[num16 /*5*/][l] == 7)
											{
												if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696724[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23831.f_2387[num16 /*5*/][l] == 9)
											{
												if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696724[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23831.f_2387[num16 /*5*/][l] == 2)
											{
												if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[num12 + num18]);
											
												num18 = num18 + 1;
											}
											else if (Global_23831.f_2387[num16 /*5*/][l] == 3)
											{
												if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[num13 + num19], Global_23831.f_4855[num13 + num19]);
											
												num19 = num19 + 1;
											}
											else if (Global_23831.f_2387[num16 /*5*/][l] == 4)
											{
												num20 = num20 + 1;
											}
										}
									
										if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0)
											screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
									
										if (num20 > 0)
										{
											for (l = 0; l < num20; l = l + 1)
											{
												if (func_326(Global_23831.f_4984[num14 + l], flag, false, &width, &height, bParam7))
												{
													num25 = num25 + width;
												
													if (l > 0)
														num25 = num25 - (0.00078125f * 4f);
												
													if (Global_23831.f_4984[num14 + l] == 2 || Global_23831.f_4984[num14 + l] == 54 || Global_23831.f_4984[num14 + l] == 64)
														num25 = num25 - (0.00078125f * 5f);
												}
											}
										}
									
										x = 0f;
									
										if (Global_23831.f_5686[k] == 2)
											x = x + (num27 - (screenWidthOfDisplayText + num25)) + (0.00078125f * 1f);
										else if (Global_23831.f_5686[k] == 0)
											x = x + (((num27 - num24) * 0.5f) - ((screenWidthOfDisplayText + num25) * 0.5f));
									
										Global_23831.f_8958[(num2 * Global_23831.f_5829) + k] = x;
										Global_23831.f_8999[(num2 * Global_23831.f_5829) + k] = screenWidthOfDisplayText;
										Global_23831.f_9040[(num2 * Global_23831.f_5829) + k] = num25;
									
										if (Global_23831.f_5686[k] == 2)
										{
											for (m = k - 1; m >= 0; m = m + -1)
											{
												if (Global_23831.f_5686[m] == 2)
													Global_23831.f_8958[(num2 * Global_23831.f_5829) + m] = Global_23831.f_8958[(num2 * Global_23831.f_5829) + m] - Global_23831.f_5671[k];
											}
										}
									}
									else
									{
										x = Global_23831.f_8958[(num2 * Global_23831.f_5829) + k];
										screenWidthOfDisplayText = Global_23831.f_8999[(num2 * Global_23831.f_5829) + k];
										num25 = Global_23831.f_9040[(num2 * Global_23831.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_326(26, true, false, &width, &height, bParam7))
										{
											if (Global_23831.f_5686[k] == 2)
												x = x - (width * 2f);
										
											num26 = width * 0.5f;
										
											if (func_326(26, true, true, &width, &height, bParam7))
											{
												func_311(26, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_319(26), func_316(26, true), num24 + x + num26, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									
										if (func_326(27, true, false, &width, &height, bParam7))
										{
											x = x + width;
											num26 = width * 0.5f;
										
											if (func_326(27, true, true, &width, &height, bParam7))
											{
												func_311(27, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_319(27), func_316(27, true), num24 + x + num26 + screenWidthOfDisplayText + num25, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									}
								
									num17 = 0;
									num18 = 0;
									num19 = 0;
									num20 = 0;
									num21 = 0;
									num23 = 0;
								
									if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										flag4 = false;
										flag5 = false;
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_23831.f_2387[num16 /*5*/][l] == 5 || Global_23831.f_2387[num16 /*5*/][l] == 8)
												flag5 = true;
											else if (Global_23831.f_2387[num16 /*5*/][l] == 9)
												flag4 = true;
										}
									
										if (Global_23831.f_2130[num16])
											flag5 = true;
									
										func_302(flag, Global_23831.f_1616[num16], Global_23831.f_1873[num16], flag7, 0, flag5, flag4);
									
										if (Global_23831.f_9112 && Global_23831.f_9113 == numberOfLinesForString)
											func_301(flag);
									
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Global_23831.f_79[num16 /*6*/]);
									}
								
									for (l = 0; l < 4; l = l + 1)
									{
										if (Global_23831.f_2387[num16 /*5*/][l] == 1)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_79[num16 + num17 /*6*/]);
										
											num23 = 1;
										}
										else if (Global_23831.f_2387[num16 /*5*/][l] == 8)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_79[num16 + num17 /*6*/]);
										
											num23 = 8;
										}
										else if (Global_23831.f_2387[num16 /*5*/][l] == 5)
										{
											if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696724[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 5;
										}
										else if (Global_23831.f_2387[num16 /*5*/][l] == 6)
										{
											if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2696724[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 6;
										}
										else if (Global_23831.f_2387[num16 /*5*/][l] == 7)
										{
											if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696724[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 7;
										}
										else if (Global_23831.f_2387[num16 /*5*/][l] == 9)
										{
											if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696724[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 9;
										}
										else if (Global_23831.f_2387[num16 /*5*/][l] == 2)
										{
											if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[num12 + num18]);
										
											num18 = num18 + 1;
											num23 = 2;
										}
										else if (Global_23831.f_2387[num16 /*5*/][l] == 3)
										{
											if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[num13 + num19], Global_23831.f_4855[num13 + num19]);
										
											num19 = num19 + 1;
											num23 = 3;
										}
										else if (Global_23831.f_2387[num16 /*5*/][l] == 4)
										{
											if (Global_23831.f_4984[num14 + num20] == 2 || Global_23831.f_4984[num14 + num20] == 54 || Global_23831.f_4984[num14 + num20] == 64)
											{
												if (func_326(Global_23831.f_4984[num14 + num20], flag, false, &width, &height, bParam7))
												{
													x = x + (width * 0.5f);
												
													if (func_326(Global_23831.f_4984[num14 + num20], flag, true, &width, &height, bParam7))
													{
														func_311(Global_23831.f_4984[num14 + num20], flag, &red, &green, &blue, &alpha);
													
														if (i == 1)
															if (Global_23831.f_5686[k] == 2)
																GRAPHICS::DRAW_SPRITE(func_319(Global_23831.f_4984[num14 + num20]), func_316(Global_23831.f_4984[num14 + num20], flag), ((num24 + x) - (0.00078125f * 8f)) + (0.00078125f * 4f), (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
															else
																GRAPHICS::DRAW_SPRITE(func_319(Global_23831.f_4984[num14 + num20]), func_316(Global_23831.f_4984[num14 + num20], flag), (num24 + x) - (0.00078125f * 8f), (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
													
														x = x + (0.00078125f * 3f);
													}
												}
											}
										
											num20 = num20 + 1;
											num23 = 4;
										}
									}
								
									if (MISC::GET_HASH_KEY(&Global_23831.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										if (num23 == 4 && Global_23831.f_5686[k] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(num24 + x + (0.00078125f * 7f), y, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(num24 + x, y, 0);
										
											if (IS_ROCKSTAR_DEV() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1768762336) > 0)
											{
												if (k == 0)
												{
													if (Global_23831.f_2130[num16])
														flag5 = true;
												
													func_302(false, Global_23831.f_1616[num16], Global_23831.f_1873[num16], flag7, 0, flag5, flag4);
													TEXT_LABEL_ASSIGN_STRING(&text, "TEST_LABEL", 16);
													value = 0f;
													value2 = 55f;
													num37 = 0.0185f;
													num38 = 0.004f;
													num39 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, 0.35f * 0.7f);
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT(num24 - (num39 * 0.6f), y + (num37 * 0.75f), 0.0175f, 0.035f, SYSTEM::FLOOR(value), SYSTEM::FLOOR(value), SYSTEM::FLOOR(value), SYSTEM::FLOOR(value2), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&text);
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_6341 + num22);
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT(num24 - num39, y + num38, 0);
													num22 = num22 + 1;
												}
											}
										}
									}
								
									if (num20 > 0)
									{
										x = x + (6f * 0.00078125f);
									
										for (l = 0; l < num20; l = l + 1)
										{
											if (Global_23831.f_4984[num14 + l] != 2 && Global_23831.f_4984[num14 + l] != 54 && Global_23831.f_4984[num14 + l] != 64)
											{
												if (func_326(Global_23831.f_4984[num14 + l], flag, false, &width, &height, bParam7))
												{
													x = x + (width * 0.5f);
												
													if (i == 1)
													{
														if (func_326(Global_23831.f_4984[num14 + l], flag, true, &width, &height, bParam7))
														{
															func_311(Global_23831.f_4984[num14 + l], flag, &red, &green, &blue, &alpha);
														
															if (Global_23831.f_4984[num14 + l] == 30)
																GRAPHICS::DRAW_SPRITE(func_319(Global_23831.f_4984[num14 + l]), func_316(Global_23831.f_4984[num14 + l], flag), Global_23828 + (width * 0.5f), (y + 0.00277776f + (height * 0.5f)) - (0.00078125f * 11f), width, height, 0f, red, green, blue, alpha, false, 0);
															else if (Global_23831.f_5686[k] == 2)
																GRAPHICS::DRAW_SPRITE(func_319(Global_23831.f_4984[num14 + l]), func_316(Global_23831.f_4984[num14 + l], flag), ((num24 + x + screenWidthOfDisplayText) - (0.00078125f * 8f)) + (0.00078125f * 4f), (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
															else
																GRAPHICS::DRAW_SPRITE(func_319(Global_23831.f_4984[num14 + l]), func_316(Global_23831.f_4984[num14 + l], flag), (num24 + x + screenWidthOfDisplayText) - (0.00078125f * 12f), (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
														}
													}
												
													x = x + (12f * 0.00078125f);
												}
											}
										}
									}
								}
							
								flag3 = true;
								num11 = num11 + 1;
							
								for (l = 0; l < 4; l = l + 1)
								{
									if (Global_23831.f_2387[num16 /*5*/][l] == 1)
										num11 = num11 + 1;
									else if (Global_23831.f_2387[num16 /*5*/][l] == 8)
										num11 = num11 + 1;
									else if (Global_23831.f_2387[num16 /*5*/][l] == 2)
										num12 = num12 + 1;
									else if (Global_23831.f_2387[num16 /*5*/][l] == 3)
										num13 = num13 + 1;
									else if (Global_23831.f_2387[num16 /*5*/][l] == 4)
										num14 = num14 + 1;
									else if (Global_23831.f_2387[num16 /*5*/][l] == 5)
										num15 = num15 + 1;
									else if (Global_23831.f_2387[num16 /*5*/][l] == 6)
										num15 = num15 + 1;
									else if (Global_23831.f_2387[num16 /*5*/][l] == 7)
										num15 = num15 + 1;
									else if (Global_23831.f_2387[num16 /*5*/][l] == 9)
										num15 = num15 + 1;
								}
								break;
						
							case 2:
								if (flag2)
								{
									if (!Global_23831.f_6332)
									{
										func_302(flag, Global_23831.f_1616[num16], Global_23831.f_1873[num16], flag7, 0, false, false);
									
										if (Global_23831.f_9112 && Global_23831.f_9113 == numberOfLinesForString)
											func_301(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[num12]);
										screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										x = 0f;
									
										if (Global_23831.f_5686[k] == 2)
											x = x + (num27 - screenWidthOfDisplayText) + (0.00078125f * 1f);
										else if (Global_23831.f_5686[k] == 0)
											x = x + (((num27 - num24) * 0.5f) - (screenWidthOfDisplayText * 0.5f));
									
										Global_23831.f_8958[(num2 * Global_23831.f_5829) + k] = x;
										Global_23831.f_8999[(num2 * Global_23831.f_5829) + k] = screenWidthOfDisplayText;
									}
									else
									{
										x = Global_23831.f_8958[(num2 * Global_23831.f_5829) + k];
										screenWidthOfDisplayText = Global_23831.f_8999[(num2 * Global_23831.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_326(26, true, false, &width, &height, bParam7))
										{
											if (Global_23831.f_5686[k] == 2)
												x = x - (width * 2f);
										
											num26 = width * 0.5f;
										
											if (func_326(26, true, true, &width, &height, bParam7))
											{
												func_311(26, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_319(26), func_316(26, true), num24 + x + num26, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									
										if (func_326(27, true, false, &width, &height, bParam7))
										{
											x = x + width;
											num26 = width * 0.5f;
										
											if (func_326(27, true, true, &width, &height, bParam7))
											{
												func_311(27, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_319(27), func_316(27, true), num24 + x + num26 + screenWidthOfDisplayText + num25, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									}
								
									if (i == 1)
									{
										func_302(flag, Global_23831.f_1616[num16], Global_23831.f_1873[num16], flag7, 0, false, false);
										func_299(num24 + x, y, "NUMBER" /*~1~*/, Global_23831.f_4469[num12], 0);
									}
								}
							
								flag3 = true;
								num12 = num12 + 1;
								break;
						
							case 3:
								if (flag2)
								{
									if (!Global_23831.f_6332)
									{
										func_302(flag, Global_23831.f_1616[num16], Global_23831.f_1873[num16], flag7, 0, false, false);
									
										if (Global_23831.f_9112 && Global_23831.f_9113 == numberOfLinesForString)
											func_301(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[num13], Global_23831.f_4855[num13]);
										screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										x = 0f;
									
										if (Global_23831.f_5686[k] == 2)
											x = x + (num27 - screenWidthOfDisplayText) + (0.00078125f * 1f);
										else if (Global_23831.f_5686[k] == 0)
											x = x + (((num27 - num24) * 0.5f) - (screenWidthOfDisplayText * 0.5f));
									
										Global_23831.f_8958[(num2 * Global_23831.f_5829) + k] = x;
										Global_23831.f_8999[(num2 * Global_23831.f_5829) + k] = screenWidthOfDisplayText;
									}
									else
									{
										x = Global_23831.f_8958[(num2 * Global_23831.f_5829) + k];
										screenWidthOfDisplayText = Global_23831.f_8999[(num2 * Global_23831.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_326(26, true, false, &width, &height, false))
										{
											if (Global_23831.f_5686[k] == 2)
												x = x - (width * 2f);
										
											num26 = width * 0.5f;
										
											if (func_326(26, true, true, &width, &height, bParam7))
											{
												func_311(26, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_319(26), func_316(26, true), num24 + x + num26, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									
										if (func_326(27, true, false, &width, &height, bParam7))
										{
											x = x + width;
											num26 = width * 0.5f;
										
											if (func_326(27, true, true, &width, &height, bParam7))
											{
												func_311(27, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_319(27), func_316(27, true), num24 + x + num26 + screenWidthOfDisplayText + num25, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									}
								
									func_302(flag, Global_23831.f_1616[num16], Global_23831.f_1873[num16], flag7, 0, false, false);
									func_298(num24 + x, y, "NUMBER" /*~1~*/, Global_23831.f_4726[num13], Global_23831.f_4855[num13]);
								}
							
								flag3 = true;
								num13 = num13 + 1;
								break;
						
							case 4:
								if (flag2)
								{
									if (func_326(Global_23831.f_4984[num14], flag, false, &width, &height, bParam7))
									{
										if (!Global_23831.f_6332)
										{
											num25 = width;
											x = 0f;
										
											if (Global_23831.f_5686[k] == 2)
												x = x + (num27 - num25) + (0.00078125f * 1f);
											else if (Global_23831.f_5686[k] == 0)
												x = x + (((num27 - num24) * 0.5f) - (num25 * 0.5f));
										
											Global_23831.f_8958[(num2 * Global_23831.f_5829) + k] = x;
											Global_23831.f_9040[(num2 * Global_23831.f_5829) + k] = num25;
										}
										else
										{
											x = Global_23831.f_8958[(num2 * Global_23831.f_5829) + k];
											num25 = Global_23831.f_9040[(num2 * Global_23831.f_5829) + k];
										}
									
										if (flag6)
										{
											if (func_326(26, true, false, &width, &height, bParam7))
											{
												if (Global_23831.f_5686[k] == 2)
													x = x - (width * 2f);
											
												num26 = width * 0.5f;
											
												if (func_326(26, true, true, &width, &height, bParam7))
												{
													func_311(26, true, &red, &green, &blue, &alpha);
												
													if (i == 1)
														GRAPHICS::DRAW_SPRITE(func_319(26), func_316(26, true), num24 + x + num26, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
												}
											}
										
											if (func_326(27, true, false, &width, &height, bParam7))
											{
												x = x + width;
												num26 = width * 0.5f;
											
												if (func_326(27, true, true, &width, &height, bParam7))
												{
													func_311(27, true, &red, &green, &blue, &alpha);
												
													if (i == 1)
														GRAPHICS::DRAW_SPRITE(func_319(27), func_316(27, true), num24 + x + num26 + screenWidthOfDisplayText + num25, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
												}
											}
										}
									
										if (i == 1)
										{
											if (func_326(Global_23831.f_4984[num14], flag, true, &width, &height, bParam7))
											{
												func_311(Global_23831.f_4984[num14], flag, &red, &green, &blue, &alpha);
												GRAPHICS::DRAW_SPRITE(func_319(Global_23831.f_4984[num14]), func_316(Global_23831.f_4984[num14], flag), num24 + x + (width * 0.5f), (y - 0.00277776f) + (height2 * 0.5f), width * func_297(Global_23831.f_4984[num14]), height * func_297(Global_23831.f_4984[num14]), 0f, red, green, blue, alpha, false, 0);
											}
										}
									}
								}
							
								flag3 = true;
								num14 = num14 + 1;
								break;
						
							case 5:
								flag3 = true;
								break;
						}
					
						if (Global_23831.f_5659[k] == 5)
						{
							if (Global_23831.f_5671[k] > 0.05f)
								num24 = num24 + Global_23831.f_5671[k];
							else
								num24 = num24 + 0.05f;
						}
						else
						{
							num24 = num24 + Global_23831.f_5671[k];
						
							if (Global_23831.f_5678[k])
								if (func_326(26, true, true, &width, &height, bParam7))
									num24 = num24 - width;
						}
					}
					else
					{
						num24 = num24 + Global_23831.f_5671[k];
					}
				}
			
				if (flag3)
				{
					if (flag2)
					{
						Global_23831.f_8737[num2] = numberOfLinesForString;
						Global_23831.f_6343 = numberOfLinesForString;
						num2 = num2 + 1;
					
						if (Global_23831.f_5959[numberOfLinesForString])
							num6 = num6 + 1;
					
						if (Global_23831.f_6348[numberOfLinesForString] != 0f)
							num34 = num34 + Global_23831.f_6348[numberOfLinesForString];
						else
							num34 = num34 + 0.034722f;
					}
				
					if (!Global_23831.f_6331)
					{
						Global_23831.f_6088[numberOfLinesForString] = true;
					
						if (Global_23831.f_5830[numberOfLinesForString])
						{
							if (flag)
								Global_23831.f_6337 = 0;
						}
						else
						{
							num4 = num4 + 1;
						
							if (flag)
								Global_23831.f_6337 = num4;
						}
					
						num3 = num3 + 1;
					}
				}
			}
		
			if (!Global_23831.f_6331)
			{
				Global_23831.f_6333 = num30 + num34 + (0.00277776f * (float)num5);
				Global_23831.f_6336 = num4;
				Global_23831.f_6334 = num3;
				Global_23831.f_6331 = 1;
			}
		}
	
		if (!Global_23831.f_6332)
		{
			Global_23831.f_6335 = num2;
			Global_23831.f_6332 = 1;
		}
	}

	Global_23831.f_6479 = num28;
	Global_23831.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23831.f_6479);

	if (!Global_23831.f_9081)
		func_213(0);

	Global_23831.f_9081 = 0;

	if (bParam2)
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);

	if (bParam0)
		func_296(1);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_296(int iParam0) // Position - 0xDCF8
{
	Global_1670224.f_1163 = iParam0;
	return;
}

float func_297(int iParam0) // Position - 0xDD09
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 56:
		case 47:
		case 48:
		case 49:
			return 0.85f;
	}

	return 1f;
}

void func_298(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4) // Position - 0xDD78
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

void func_299(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0xDD97
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0xDDB5
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_301(BOOL bParam0) // Position - 0xDDC6
{
	int r;
	int g;
	int b;
	var a;

	if (bParam0)
		HUD::GET_HUD_COLOUR(Global_23831.f_9109[0], &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(Global_23831.f_9109[1], &r, &g, &b, &a);

	HUD::SET_TEXT_COLOUR(r, g, b, 255);
	return;
}

void func_302(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xDE0C
{
	int r;
	int g;
	int b;
	int a;

	if (bParam2)
	{
		if (bParam3)
		{
			func_303(Global_23831.f_6614[iParam4], &r, &g, &b);
		
			if (r < 20 && g < 20 && b < 20)
			{
				if (bParam0 == false)
					HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
			}
			else if (r > 230 && g > 230 && b > 230)
			{
				if (bParam0)
				{
					r = 0;
					g = 0;
					b = 0;
				}
			}
		
			HUD::SET_TEXT_COLOUR(r, g, b, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_YELLOWDARK, &r, &g, &b, &a);
				HUD::SET_TEXT_COLOUR(r, g, b, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_YELLOW, &r, &g, &b, &a);
				HUD::SET_TEXT_COLOUR(r, g, b, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR(255f * 0.8f));
		}
		else
		{
			HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
			HUD::SET_TEXT_COLOUR(r, g, b, a);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}

	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);

	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}

	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_303(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xDFBA
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
	
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
	
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
	
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
	
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
	
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
	
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
	
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
	
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
	
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
	
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
	
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
	
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
	
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
	
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
	
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
	
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
	
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
	
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
	
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
	
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
	
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
	
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
	
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
	
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
	
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
	
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}

	return;
}

void func_304(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0xE244
{
	int num;
	int i;
	int j;
	int timestamp;
	int timestamp2;

	if (!func_330(&num, false, iParam1))
		return;

	uParam0 = uParam0;

	if (bParam3 && !func_328(bParam4, bParam8))
		return;

	if (func_309())
		return;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return;

	if (iParam7 == 0)
		if (func_307(PLAYER::PLAYER_ID(), 0))
			return;

	if (MISC::IS_PC_VERSION())
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return;

	if (Global_23831.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
		{
			for (i = 0; i < Global_23831.f_5326; i = i + 1)
			{
				if (Global_23831.f_5625[i] != 365)
					TEXT_LABEL_ASSIGN_STRING(&Global_23831.f_5328[i /*16*/], PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_23831.f_5625[i], true), 64);
				else if (Global_23831.f_5640[i] != 32)
					TEXT_LABEL_ASSIGN_STRING(&Global_23831.f_5328[i /*16*/], PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_23831.f_5640[i], true), 64);
			}
		
			Global_23831.f_5327 = 0;
		}
	
		if (!Global_23831.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[num /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[num /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f - (Global_23831.f_5684 / 100f));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[num /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			for (i = 0; i < Global_23831.f_5326; i = i + 1)
			{
				if (MISC::GET_HASH_KEY(&Global_23831.f_5553[i /*4*/]) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[num /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					func_306(&Global_23831.f_5328[i /*16*/]);
				
					for (j = i + 1; j < 14 && MISC::GET_HASH_KEY(&Global_23831.f_5553[j /*4*/]) == MISC::GET_HASH_KEY("PREV"); j = j + 1)
					{
						func_306(&Global_23831.f_5328[j /*16*/]);
					}
				
					if (Global_23831.f_5610[i] == -1)
					{
						func_305(&Global_23831.f_5553[i /*4*/]);
					}
					else
					{
						timestamp = Global_23831.f_5610[i];
					
						if (iParam2 >= 0)
							timestamp = iParam2;
					
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_23831.f_5553[i /*4*/]);
					
						if (bParam5)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp, 70);
						else
							HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp);
					
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23831.f_5625[i] != 365 && IS_BIT_SET(Global_23831.f_5655, i))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23831.f_5625[i]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4541740.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[num /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23831.f_5326);
				func_306(&Global_4541740);
			
				if (Global_4541740.f_20 == -1)
				{
					func_305(&(Global_4541740.f_16));
				}
				else
				{
					timestamp2 = Global_23831.f_5610[i];
				
					if (iParam2 >= 0)
						timestamp2 = iParam2;
				
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541740.f_16));
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[num /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[num /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
		
			if (Global_23831.f_5685)
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			else
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23831.f_5327 = 1;
		}
	
		for (i = 0; i < Global_23831.f_5326; i = i + 1)
		{
			if (Global_23831.f_5610[i] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_23831.f_5553[i /*4*/]);
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
	
		if (Global_4541740.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541740.f_16));
			
				if (bParam5)
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				else
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
			
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
	
		if (bParam6)
		{
			if (!Global_23831.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, 0f, -0.0375f);
				Global_23831.f_9116 = 1;
			}
		}
		else if (Global_23831.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
			Global_23831.f_9116 = 0;
		}
	
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	
		if (Global_23831.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23831.f_6263[num /*10*/], Global_23831.f_5656, Global_23831.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23831.f_6263[num /*10*/], 255, 255, 255, 255, 0);
		}
	}

	return;
}

void func_305(char* sParam0) // Position - 0xE749
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_306(char* sParam0) // Position - 0xE75B
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

BOOL func_307(Player plParam0, int iParam1) // Position - 0xE769
{
	BOOL flag;

	if (!func_207(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_308(-1, false) == 8;
	else
		flag = Global_1845281[plParam0 /*883*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_308(int iParam0, BOOL bParam1) // Position - 0xE7C2
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_141();

	if (Global_1575063[num2] == 1)
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

BOOL func_309() // Position - 0xE803
{
	var position;

	if (Global_20930.f_1 > 3)
		return true;

	if (func_310())
	{
		position = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&position);
	
		if (Global_20875 == 0)
			if (position.f_1 > -119f)
				return true;
			else
				return false;
		else if (position.f_1 > -101f)
			return true;
		else
			return false;
	}

	return false;
}

BOOL func_310() // Position - 0xE871
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) > 0)
		return true;

	return false;
}

void func_311(int iParam0, BOOL bParam1, int* piParam2, int* piParam3, int* piParam4, int* piParam5) // Position - 0xE88B
{
	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, piParam2, piParam3, piParam4, piParam5);
	*piParam5 = 255;

	switch (iParam0)
	{
		case 28:
			*piParam2 = 194;
			*piParam3 = 80;
			*piParam4 = 80;
			break;
	
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 56:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 47:
		case 48:
		case 49:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
			if (bParam1)
			{
				*piParam2 = 0;
				*piParam3 = 0;
				*piParam4 = 0;
			}
			break;
	
		case 57:
			*piParam5 = 100;
			break;
	
		case 65:
			*piParam5 = 100;
			break;
	
		case 58:
			HUD::GET_HUD_COLOUR(HUD_COLOUR_PINK, piParam2, piParam3, piParam4, piParam5);
			*piParam5 = 255;
			break;
	}

	return;
}

void func_312(float fParam0) // Position - 0xE9AC
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	HUD::SET_TEXT_WRAP(fParam0, (Global_23828 + Global_23830) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_313(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0xEA0B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

float func_314(char* sParam0, int iParam1, int iParam2) // Position - 0xEA2E
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_315();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_315() // Position - 0xEA70
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);

	if (Global_23831.f_9091)
	{
		r = Global_23831.f_9087;
		g = Global_23831.f_9088;
		b = Global_23831.f_9089;
		a = Global_23831.f_9090;
	}

	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	HUD::SET_TEXT_WRAP(Global_23828 + 0.0046875f, (Global_23828 + Global_23830) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

char* func_316(int iParam0, BOOL bParam1) // Position - 0xEAFA
{
	var unk;
	var txdName;
	var netHandle;

	unk = 2;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23831.f_7680[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_23831.f_7680[iParam0 /*16*/]) == -1487683087)
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
		
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName))
				return func_317(&txdName);
		}
		else
		{
			return func_317(&Global_23831.f_7680[iParam0 /*16*/]);
		}
	}

	switch (iParam0)
	{
		case 3:
			unk[0] = "MP_hostCrown";
			unk[1] = "MP_hostCrown";
			break;
	
		case 21:
			unk[0] = "MP_SpecItem_Coke";
			unk[1] = "MP_SpecItem_Coke";
			break;
	
		case 22:
			unk[0] = "MP_SpecItem_Heroin";
			unk[1] = "MP_SpecItem_Heroin";
			break;
	
		case 23:
			unk[0] = "MP_SpecItem_Weed";
			unk[1] = "MP_SpecItem_Weed";
			break;
	
		case 24:
			unk[0] = "MP_SpecItem_Meth";
			unk[1] = "MP_SpecItem_Meth";
			break;
	
		case 25:
			unk[0] = "MP_SpecItem_Cash";
			unk[1] = "MP_SpecItem_Cash";
			break;
	
		case 1:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 2:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 4:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 6:
			unk[0] = "Shop_Box_CrossB";
			unk[1] = "Shop_Box_Cross";
			break;
	
		case 7:
			unk[0] = "Shop_Box_BlankB";
			unk[1] = "Shop_Box_Blank";
			break;
	
		case 5:
			unk[0] = "Shop_Box_TickB";
			unk[1] = "Shop_Box_Tick";
			break;
	
		case 8:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 9:
			unk[0] = "Shop_Clothing_Icon_B";
			unk[1] = "Shop_Clothing_Icon_A";
			break;
	
		case 10:
			unk[0] = "Shop_GunClub_Icon_B";
			unk[1] = "Shop_GunClub_Icon_A";
			break;
	
		case 17:
			unk[0] = "Shop_Ammo_Icon_B";
			unk[1] = "Shop_Ammo_Icon_A";
			break;
	
		case 18:
			unk[0] = "Shop_Armour_Icon_B";
			unk[1] = "Shop_Armour_Icon_A";
			break;
	
		case 19:
			unk[0] = "Shop_Health_Icon_B";
			unk[1] = "Shop_Health_Icon_A";
			break;
	
		case 20:
			unk[0] = "Shop_MakeUp_Icon_B";
			unk[1] = "Shop_MakeUp_Icon_A";
			break;
	
		case 11:
			unk[0] = "Shop_Tattoos_Icon_B";
			unk[1] = "Shop_Tattoos_Icon_A";
			break;
	
		case 12:
			unk[0] = "Shop_Garage_Icon_B";
			unk[1] = "Shop_Garage_Icon_A";
			break;
	
		case 13:
			unk[0] = "Shop_Garage_Bike_Icon_B";
			unk[1] = "Shop_Garage_Bike_Icon_A";
			break;
	
		case 14:
			unk[0] = "Shop_Barber_Icon_B";
			unk[1] = "Shop_Barber_Icon_A";
			break;
	
		case 15:
			unk[0] = "shop_Lock";
			unk[1] = "shop_Lock";
			break;
	
		case 16:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 26:
			unk[0] = "arrowleft";
			unk[1] = "arrowleft";
			break;
	
		case 27:
			unk[0] = "arrowright";
			unk[1] = "arrowright";
			break;
	
		case 28:
			unk[0] = "MP_AlertTriangle";
			unk[1] = "MP_AlertTriangle";
			break;
	
		case 29:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 31:
			unk[0] = "Shop_Michael_Icon_B";
			unk[1] = "Shop_Michael_Icon_A";
			break;
	
		case 32:
			unk[0] = "Shop_Franklin_Icon_B";
			unk[1] = "Shop_Franklin_Icon_A";
			break;
	
		case 33:
			unk[0] = "Shop_Trevor_Icon_B";
			unk[1] = "Shop_Trevor_Icon_A";
			break;
	
		case 54:
			unk[0] = "SaleIcon";
			unk[1] = "SaleIcon";
			break;
	
		case 55:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 57:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 58:
			unk[0] = "Shop_Lock_Arena";
			unk[1] = "Shop_Lock_Arena";
			break;
	
		case 59:
			unk[0] = "Card_Suit_Clubs";
			unk[1] = "Card_Suit_Clubs";
			break;
	
		case 60:
			unk[0] = "Card_Suit_Hearts";
			unk[1] = "Card_Suit_Hearts";
			break;
	
		case 61:
			unk[0] = "Card_Suit_Spades";
			unk[1] = "Card_Suit_Spades";
			break;
	
		case 62:
			unk[0] = "Card_Suit_Diamonds";
			unk[1] = "Card_Suit_Diamonds";
			break;
	
		case 63:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 65:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 64:
			unk[0] = "Shop_Chips_A";
			unk[1] = "Shop_Chips_B";
			break;
	
		case 0:
			unk[0] = "";
			unk[1] = "";
			break;
	}

	if (bParam1)
		return unk[0];

	return unk[1];
}

char* func_317(char* sParam0) // Position - 0xF024
{
	return sParam0;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0xF02E
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

char* func_319(int iParam0) // Position - 0xF045
{
	var txdName;
	var netHandle;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23831.f_6623[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_23831.f_6623[iParam0 /*16*/]) == -1487683087)
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName);
			return func_317(&txdName);
		}
		else
		{
			return func_317(&Global_23831.f_6623[iParam0 /*16*/]);
		}
	}

	if (iParam0 == 54)
		return "MPShopSale";

	return "CommonMenu";
}

void func_320(int iParam0, char* sParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0xF0BA
{
	int num;
	float num2;
	float num3;
	var unk;
	float num4;

	if (Global_23831.f_5821 > iParam0)
		return;

	if (Global_23831.f_5821 >= 128)
		return;

	if (Global_23831.f_5823 >= 256)
		return;

	if (Global_23831.f_6346 < Global_23831.f_6344)
		return;

	if (Global_23831.f_5821 != iParam0)
	{
		Global_23831.f_5821 = iParam0;
		Global_23831.f_5822 = 0;
	}

	num = Global_23831.f_5659[Global_23831.f_5822];

	if (num != 1)
	{
		while (Global_23831.f_5822 < 4 && num != 1)
		{
			Global_23831.f_5822 = Global_23831.f_5822 + 1;
			num = Global_23831.f_5659[Global_23831.f_5822];
		}
	
		if (num != 1)
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_23831.f_79[Global_23831.f_5823 /*6*/], sParam1, 24);
	!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1);
	Global_23831.f_1616[Global_23831.f_5823] = bParam3;
	Global_23831.f_1873[Global_23831.f_5823] = iParam4;
	Global_23831.f_2130[Global_23831.f_5823] = iParam6;
	Global_23831.f_5823 = Global_23831.f_5823 + 1;

	if (!bParam3)
		func_323(Global_23831.f_5821, true);
	else
		func_323(Global_23831.f_5821, false);

	if (iParam2 == 0)
	{
		num2 = func_322(&Global_23831.f_79[Global_23831.f_5823 /*6*/]);
	
		if (Global_23831.f_5678[Global_23831.f_5822])
		{
			func_326(26, true, false, &num3, &unk, false);
			num2 = num2 + (num3 * 2f);
		}
	
		if (num2 > Global_23831.f_5671[Global_23831.f_5822])
			Global_23831.f_5671[Global_23831.f_5822] = num2;
	}

	if (bParam5)
	{
		if (iParam2 == 0)
		{
			num4 = func_321(&Global_23831.f_79[Global_23831.f_5823 /*6*/]);
		
			if (num4 > Global_23831.f_6348[iParam0])
				Global_23831.f_6348[iParam0] = num4;
		}
	}

	MISC::SET_BIT(&Global_23831.f_5692[iParam0], Global_23831.f_5822);
	Global_23831.f_5822 = Global_23831.f_5822 + 1;
	Global_23831.f_6347 = 1;
	Global_23831.f_6345 = Global_23831.f_5823 - 1;
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = iParam2;
	return;
}

float func_321(char* sParam0) // Position - 0xF2D6
{
	!HUD::DOES_TEXT_LABEL_EXIST(sParam0);
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_322(char* sParam0) // Position - 0xF2F2
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_302(false, true, false, false, 0, false, false);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_323(int iParam0, BOOL bParam1) // Position - 0xF32F
{
	int num;

	num = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(iParam0) / 32f);

	if (bParam1)
		MISC::SET_BIT(&Global_23831.f_6618[num], iParam0 - (num * 32));
	else
		MISC::CLEAR_BIT(&Global_23831.f_6618[num], iParam0 - (num * 32));

	return;
}

void func_324(BOOL bParam0, int* piParam1, int* piParam2, var uParam3) // Position - 0xF37B
{
	float num;
	float value;
	float aspectRatio;

	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(piParam1, piParam2);
		return;
	}

	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(piParam1, piParam2);
	num = SYSTEM::TO_FLOAT(*piParam1);
	value = SYSTEM::TO_FLOAT(*piParam2);
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (func_325(*piParam1, *piParam2))
	{
		*uParam3 = 1f;
		*piParam1 = SYSTEM::ROUND(value * aspectRatio);
		*piParam2 = SYSTEM::ROUND(value);
		return;
	}

	*uParam3 = num / value / aspectRatio;
	*piParam1 = SYSTEM::ROUND(num / *uParam3);
	*piParam2 = SYSTEM::ROUND(value / *uParam3);
	return;
}

BOOL func_325(int iParam0, int iParam1) // Position - 0xF403
{
	return SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1) > 3.5f;
}

BOOL func_326(int iParam0, BOOL bParam1, BOOL bParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0xF41E
{
	var textureDict;
	var textureName;
	int num;
	int num2;
	float num3;
	float textureResolution;
	float num4;

	TEXT_LABEL_ASSIGN_STRING(&textureDict, func_319(iParam0), 64);
	TEXT_LABEL_ASSIGN_STRING(&textureName, func_316(iParam0, bParam1), 64);

	if (MISC::GET_HASH_KEY(&textureName) != 0)
	{
		num3 = 1f;
		func_324(bParam5, &num, &num2, &num3);
		textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION(&textureDict, &textureName) };
		num4 = func_327(iParam0) / num3;
		textureResolution = { textureResolution * { num4, num4, num4 } };
	
		if (!bParam2)
		{
			textureResolution = textureResolution - 2f;
			textureResolution.f_1 = textureResolution.f_1 - 2f;
		}
	
		if (iParam0 == 30)
		{
			textureResolution = 288f;
			textureResolution.f_1 = 106f;
		}
	
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&Global_23831.f_7680[29 /*16*/]) == -1487683087)
		{
			textureResolution = 106f;
			textureResolution.f_1 = 106f;
		}
	
		*uParam3 = (textureResolution / (float)num) * (float)num / num2;
		*uParam4 = (textureResolution.f_1 / (float)num2 / textureResolution / (float)num) * *uParam3;
	
		if (!bParam5)
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
				*uParam3 = *uParam3 * 1.33f;
	
		if (iParam0 == 29)
		{
			if (*uParam3 > Global_23830)
			{
				*uParam4 = *uParam4 * (Global_23830 / *uParam3);
				*uParam3 = Global_23830;
			}
		}
	
		return true;
	}

	return false;
}

float func_327(int iParam0) // Position - 0xF54A
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0.5f;
	
		case 64:
			return 0.8f;
	}

	return 1f;
}

BOOL func_328(BOOL bParam0, BOOL bParam1) // Position - 0xF61E
{
	if (Global_2672855.f_1728.f_701 != 0)
		return true;

	if (!CAM::IS_SCREEN_FADED_IN() || func_30(8, -1) && func_329() != 65 || HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1 || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0 || NETWORK::IS_COMMERCE_STORE_OPEN() || Global_79650 || Global_23831.f_9115 || HUD::IS_WARNING_MESSAGE_ACTIVE() || Global_101585.f_1482)
		return false;

	return true;
}

int func_329() // Position - 0xF6BB
{
	return Global_1575011;
}

BOOL func_330(var uParam0, BOOL bParam1, int iParam2) // Position - 0xF6C7
{
	var unk;
	Hash hashKey;
	int i;
	int num;

	if (iParam2 == -1)
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam2, 64);
	hashKey = MISC::GET_HASH_KEY(&unk);
	num = -1;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_23831.f_6324[i] == hashKey)
		{
			*uParam0 = i;
			return true;
		}
		else if (Global_23831.f_6324[i] == 0)
		{
			num = i;
		}
	}

	if (bParam1)
	{
		if (num != -1)
		{
			Global_23831.f_6324[num] = hashKey;
			*uParam0 = num;
			return true;
		}
	}

	return false;
}

void func_331() // Position - 0xF764
{
	if (!func_368(iLocal_302))
	{
		iLocal_302 = func_349();
		func_340(&iLocal_302, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 2), 0, 0, 0);
	}
	else if (!func_491(iLocal_73, 2))
	{
		if (func_332(iLocal_302))
		{
			iLocal_302 = func_349();
			func_340(&iLocal_302, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 2), 0, 0, 0);
			func_482(&iLocal_73, 2);
		}
	}
	else if (func_332(iLocal_302))
	{
		func_282();
		func_473(false);
	}

	return;
}

BOOL func_332(int iParam0) // Position - 0xF7DE
{
	return func_333(func_349(), iParam0);
}

BOOL func_333(int iParam0, int iParam1) // Position - 0xF7F0
{
	int num;
	int num2;

	if (!func_368(iParam1) || !func_368(iParam0))
		return 1;

	num = func_339(iParam0);
	num2 = func_339(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_338(iParam0);
	num2 = func_338(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_337(iParam0);
	num2 = func_337(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_336(iParam0);
	num2 = func_336(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_335(iParam0);
	num2 = func_335(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_334(iParam0);
	num2 = func_334(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_334(int iParam0) // Position - 0xF8FC
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_335(int iParam0) // Position - 0xF90F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_336(int iParam0) // Position - 0xF922
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_337(int iParam0) // Position - 0xF935
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_338(int iParam0) // Position - 0xF947
{
	return iParam0 & 15;
}

int func_339(int iParam0) // Position - 0xF954
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

void func_340(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xF976
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_339(*uParam0);
	i = func_338(*uParam0);
	num2 = func_337(*uParam0);
	j = func_336(*uParam0);
	k = func_335(*uParam0);
	l = func_334(*uParam0);

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

	for (m = func_348(i, num); num2 > m; m = func_348(i, num))
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
	func_341(uParam0, l, k, j, num2, i, num);
	return;
}

void func_341(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xFAF8
{
	func_347(uParam0, iParam1);
	func_346(uParam0, iParam2);
	func_345(uParam0, iParam3);
	func_344(uParam0, iParam5);
	func_343(uParam0, iParam4);
	func_342(uParam0, iParam6);
	return;
}

void func_342(var uParam0, int iParam1) // Position - 0xFB30
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

void func_343(var uParam0, int iParam1) // Position - 0xFBB6
{
	int num;
	int num2;

	num = func_338(*uParam0);
	num2 = func_339(*uParam0);

	if (iParam1 < 1 || iParam1 > func_348(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_344(var uParam0, int iParam1) // Position - 0xFC07
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_345(var uParam0, int iParam1) // Position - 0xFC3A
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_346(var uParam0, int iParam1) // Position - 0xFC74
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_347(var uParam0, int iParam1) // Position - 0xFCAF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_348(int iParam0, int iParam1) // Position - 0xFCEB
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

int func_349() // Position - 0xFD8D
{
	var unk;

	func_347(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_346(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_345(&unk, CLOCK::GET_CLOCK_HOURS());
	func_343(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_344(&unk, CLOCK::GET_CLOCK_MONTH());
	func_342(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0xFDD3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_351() // Position - 0xFDEA
{
	int num;
	int num2;
	int num3;

	func_362(true);
	func_281(true);
	HUD::DISPLAY_RADAR(false);
	func_361(false, false);
	func_360(1, 1, 0, 0, 0);
	func_359(1, 2, 1, 1, 1);
	func_358("PROS_OPTS" /*Services Available*/);
	func_357(INPUT_FRONTEND_ACCEPT, "PROS_SELECT" /*Select*/, -1, false);
	iLocal_69 = 0;
	num = func_233(0);
	num2 = func_233(1);
	num3 = func_233(2);

	if (func_276() >= num)
	{
		func_320(iLocal_69, "PROS_DOLLAR" /*$~1~*/, 1, 1, 0, false, 0);
		func_354(num, false);
		uLocal_287[iLocal_69] = 0;
		iLocal_69 = iLocal_69 + 1;
	}

	if (func_276() >= num2 && func_353(veLocal_97))
	{
		func_320(iLocal_69, "PROS_DOLLAR" /*$~1~*/, 1, true, 0, false, 0);
		func_354(num2, false);
		uLocal_287[iLocal_69] = 1;
		iLocal_69 = iLocal_69 + 1;
	}

	if (func_276() >= num3 && func_353(veLocal_97))
	{
		func_320(iLocal_69, "PROS_DOLLAR" /*$~1~*/, 1, true, 0, false, 0);
		func_354(num3, false);
		uLocal_287[iLocal_69] = 2;
		iLocal_69 = iLocal_69 + 1;
	}

	func_320(iLocal_69, "PROS_QUIT" /*Decline Service*/, 0, true, 0, false, 0);
	iLocal_68 = 0;
	func_283(iLocal_68, true, 1);
	func_352();
	iLocal_87 = MISC::GET_GAME_TIMER();
	iLocal_299 = 3;
	return;
}

void func_352() // Position - 0xFF0C
{
	Global_23692.f_5 = 1;
	return;
}

BOOL func_353(Vehicle veParam0) // Position - 0xFF1A
{
	Hash entityModel;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	
		if (entityModel == 418536135 || entityModel == -1622444098 || entityModel == -2098947590 || entityModel == 1545842587 || entityModel == -1696146015 || entityModel == -1291952903 || entityModel == -1566741232 || entityModel == -1775728740 || entityModel == -431692672 || entityModel == -2095439403 || entityModel == 1426219628 || entityModel == 234062309 || entityModel == -1232836011 || entityModel == 2067820283 || entityModel == -1405937764)
			return false;
	}

	return true;
}

void func_354(int iParam0, BOOL bParam1) // Position - 0x10008
{
	float num;
	float num2;
	var unk;
	float num3;

	if (Global_23831.f_5825 >= 256)
		return;

	if (Global_23831.f_6346 >= 4)
		return;

	if (Global_23831.f_6347 != 1)
		return;

	if (Global_23831.f_6346 >= Global_23831.f_6344)
		return;

	Global_23831.f_4469[Global_23831.f_5825] = iParam0;
	Global_23831.f_5825 = Global_23831.f_5825 + 1;
	Global_23831.f_2387[Global_23831.f_6345 /*5*/][Global_23831.f_6346] = 2;
	Global_23831.f_6346 = Global_23831.f_6346 + 1;

	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		num = func_356();
	
		if (Global_23831.f_5678[Global_23831.f_5822] && Global_23831.f_6346 == Global_23831.f_6344)
		{
			func_326(26, true, false, &num2, &unk, false);
			num = num + (num2 * 2f);
		}
	
		if (num > Global_23831.f_5671[Global_23831.f_5822 - 1])
			Global_23831.f_5671[Global_23831.f_5822 - 1] = num;
	}

	if (bParam1)
	{
		if (Global_23831.f_6346 >= Global_23831.f_6344)
		{
			num3 = func_355();
		
			if (num3 > Global_23831.f_6348[Global_23831.f_5821])
				Global_23831.f_6348[Global_23831.f_5821] = num3;
		}
	}

	return;
}

float func_355() // Position - 0x10143
{
	int i;
	int num;
	float num2;
	var unk;
	float num3;

	for (i = 0; i < Global_23831.f_6346; i = i + 1)
	{
		if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 4)
			num = num + 1;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (Global_23831.f_4984[(Global_23831.f_5827 - num) + i] != 0)
			if (func_326(Global_23831.f_4984[(Global_23831.f_5827 - num) + i], true, false, &unk, &num3, false))
				if (num3 > num2)
					num2 = num3;
	}

	if (num2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
		return num2;

	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_356() // Position - 0x101F6
{
	float screenWidthOfDisplayText;
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int num7;
	int num8;

	for (i = 0; i < Global_23831.f_6346; i = i + 1)
	{
		if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 1)
		{
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 8)
		{
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 2)
		{
			num = num + 1;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 3)
		{
			num2 = num2 + 1;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 4)
		{
			num3 = num3 + 1;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 5)
		{
			num4 = num4 + 1;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 6)
		{
			num4 = num4 + 1;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 7)
		{
			num4 = num4 + 1;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 9)
		{
			num4 = num4 + 1;
		}
	}

	func_302(false, true, false, false, 0, num4 > 0, false);

	if (MISC::GET_HASH_KEY(&Global_23831.f_79[Global_23831.f_6345 /*6*/]) != 0)
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_23831.f_79[Global_23831.f_6345 /*6*/]);

	for (i = 0; i < Global_23831.f_6346; i = i + 1)
	{
		if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 1)
		{
			num5 = num5 + 1;
		
			if (MISC::GET_HASH_KEY(&Global_23831.f_79[Global_23831.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_79[Global_23831.f_6345 + num5 /*6*/]);
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 8)
		{
			num5 = num5 + 1;
		
			if (MISC::GET_HASH_KEY(&Global_23831.f_79[Global_23831.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23831.f_79[Global_23831.f_6345 + num5 /*6*/]);
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 2)
		{
			if (MISC::GET_HASH_KEY(&Global_23831.f_79[Global_23831.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23831.f_4469[(Global_23831.f_5825 - num) + num6]);
		
			num6 = num6 + 1;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 3)
		{
			if (MISC::GET_HASH_KEY(&Global_23831.f_79[Global_23831.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23831.f_4726[(Global_23831.f_5826 - num2) + num7], Global_23831.f_4855[(Global_23831.f_5826 - num2) + num7]);
		
			num7 = num7 + 1;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 5)
		{
			if (MISC::GET_HASH_KEY(&Global_23831.f_79[Global_23831.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696724[(Global_23831.f_5824 - num4) + num8 /*16*/]);
		
			num8 = num8 + 1;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 6)
		{
			if (MISC::GET_HASH_KEY(&Global_23831.f_79[Global_23831.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2696724[(Global_23831.f_5824 - num4) + num8 /*16*/]);
		
			num8 = num8 + 1;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 7)
		{
			if (MISC::GET_HASH_KEY(&Global_23831.f_79[Global_23831.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696724[(Global_23831.f_5824 - num4) + num8 /*16*/]);
		
			num8 = num8 + 1;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][i] == 9)
		{
			if (MISC::GET_HASH_KEY(&Global_23831.f_79[Global_23831.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696724[(Global_23831.f_5824 - num4) + num8 /*16*/]);
		
			num8 = num8 + 1;
		}
	}

	if (MISC::GET_HASH_KEY(&Global_23831.f_79[Global_23831.f_6345 /*6*/]) != 0)
		screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);

	for (i = 0; i < num3; i = i + 1)
	{
		if (Global_23831.f_4984[(Global_23831.f_5827 - num3) + i] != 0)
		{
			func_326(Global_23831.f_4984[(Global_23831.f_5827 - num3) + i], true, false, &unk, &unk2, false);
			screenWidthOfDisplayText = screenWidthOfDisplayText + unk;
		}
	}

	return screenWidthOfDisplayText;
}

void func_357(eControlAction ecaParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x1063D
{
	const char* controlInstructionalButtonsString;

	controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, ecaParam0, true);

	if (Global_23831.f_5326 >= 14)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_4541740, controlInstructionalButtonsString, 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}

	if (!bParam3)
		MISC::SET_BIT(&(Global_23831.f_5655), Global_23831.f_5326);

	TEXT_LABEL_ASSIGN_STRING(&Global_23831.f_5328[Global_23831.f_5326 /*16*/], controlInstructionalButtonsString, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_23831.f_5553[Global_23831.f_5326 /*4*/], sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = ecaParam0;
	Global_23831.f_5640[Global_23831.f_5326] = 32;
	Global_23831.f_5326 = Global_23831.f_5326 + 1;
	return;
}

void func_358(char* sParam0) // Position - 0x106F2
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_23831.f_1), sParam0, 16);
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23831.f_5[i] = 0;
	}

	return;
}

void func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1073D
{
	Global_23831.f_5686[0] = iParam0;
	Global_23831.f_5686[1] = iParam1;
	Global_23831.f_5686[2] = iParam2;
	Global_23831.f_5686[3] = iParam3;
	Global_23831.f_5686[4] = iParam4;
	return;
}

void func_360(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1077C
{
	Global_23831.f_5659[0] = iParam0;
	Global_23831.f_5659[1] = iParam1;
	Global_23831.f_5659[2] = iParam2;
	Global_23831.f_5659[3] = iParam3;
	Global_23831.f_5659[4] = iParam4;
	Global_23831.f_5829 = 0;

	if (iParam0 != 0)
		Global_23831.f_5829 = Global_23831.f_5829 + 1;

	if (iParam1 != 0)
		Global_23831.f_5829 = Global_23831.f_5829 + 1;

	if (iParam2 != 0)
		Global_23831.f_5829 = Global_23831.f_5829 + 1;

	if (iParam3 != 0)
		Global_23831.f_5829 = Global_23831.f_5829 + 1;

	if (iParam4 != 0)
		Global_23831.f_5829 = Global_23831.f_5829 + 1;

	return;
}

void func_361(BOOL bParam0, BOOL bParam1) // Position - 0x10826
{
	int i;
	int j;
	float aspectRatio;

	for (i = 0; i < 256; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23831.f_79[i /*6*/], "", 24);
	
		for (j = 0; j < 4; j = j + 1)
		{
			Global_23831.f_2387[i /*5*/][j] = 0;
		}
	}

	for (i = 0; i < 50; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_2696724[i /*16*/], "", 64);
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_23831.f_4469[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_23831.f_4726[i] = 0f;
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_23831.f_4984[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_23831.f_5692[i] = 0;
		Global_23831.f_5830[i] = false;
		Global_23831.f_5959[i] = false;
		Global_23831.f_6482[i] = 0f;
		Global_23831.f_6088[i] = false;
		Global_23831.f_6348[i] = 0f;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		Global_23831.f_5659[i] = 0;
		Global_23831.f_5671[i] = 0f;
		Global_23831.f_5665[i] = -1f;
		Global_23831.f_5678[i] = false;
		Global_23831.f_5686[i] = 1;
	}

	for (i = 0; i < 14; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23831.f_5553[i /*4*/], "", 16);
		Global_23831.f_5610[i] = -1;
		Global_23831.f_5625[i] = 365;
		Global_23831.f_5640[i] = 32;
	}

	for (i = 0; i < 66; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23831.f_6623[i /*16*/], "", 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_23831.f_7680[i /*16*/], "", 64);
	}

	if (bParam1)
	{
		for (i = 0; i < 256; i = i + 1)
		{
			Global_23831.f_1616[i] = false;
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_4541740.f_16), "", 16);
	Global_4541740.f_20 = -1;
	Global_23831 = false;
	Global_23831.f_5821 = 0;
	Global_23831.f_5822 = 0;
	Global_23831.f_5823 = 0;
	Global_23831.f_5825 = 0;
	Global_23831.f_5826 = 0;
	Global_23831.f_5827 = 0;
	Global_23831.f_5824 = 0;
	Global_23831.f_6477 = 0;
	Global_23831.f_6617 = 0;
	Global_23831.f_6342 = 0;
	Global_23831.f_6341 = 0;
	Global_23831.f_6343 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23831.f_5241), "", 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = 0;
	Global_23831.f_5324 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23831.f_5253[i] = 0;
	}

	Global_23831.f_5325 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4541740.f_21), "", 16);
	Global_4541740.f_61 = 0;
	Global_4541740.f_62 = 0;
	Global_4541740.f_63 = 0;
	Global_4541740.f_64 = 0;
	Global_4541740.f_65 = 0;
	Global_4541740.f_66 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_4541740.f_25[i] = 0;
	}

	Global_4541740.f_67 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23831.f_1), "", 16);
	Global_23831.f_5677 = 0f;
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23831.f_5[i] = 0;
	}

	Global_23831.f_6347 = 0;
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = 0;
	Global_23831.f_6345 = 0;
	Global_23831.f_5326 = 0;
	Global_23831.f_5327 = 0;
	Global_23831.f_5828 = 10;
	Global_23831.f_5829 = 0;
	Global_23831.f_6479 = 0f;
	Global_23831.f_6480 = 0f;
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	Global_23831.f_6333 = 0f;
	Global_23831.f_6334 = 0;
	Global_23831.f_6336 = 0;
	Global_23831.f_6335 = 0;
	Global_23831.f_6337 = 0;
	Global_23831.f_6338 = 0;
	Global_23831.f_6339 = 0;
	Global_23831.f_6340 = 0;
	Global_23831.f_9112 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_23831.f_6611[i] = -1;
		Global_23831.f_6614[i] = -1;
	}

	Global_23831.f_5684 = 0f;
	Global_23831.f_5655 = 0;
	Global_23831.f_5685 = 0;

	for (i = 0; i < Global_23831.f_6618; i = i + 1)
	{
		Global_23831.f_6618[i] = 0;
	}

	Global_23831.f_9091 = 0;
	Global_23831.f_9086 = 0;
	Global_23831.f_9096 = 0;
	Global_23831.f_9101 = 0;
	Global_23831.f_9106 = 0;
	Global_23831.f_9108 = 0;
	Global_23831.f_9114 = 0;
	Global_23828 = 0.05f;
	Global_23829 = 0.05f;
	Global_23830 = 0.225f;
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (bParam0)
		Global_23830 = 0.225f * (1.7777778f / aspectRatio);
	else if (aspectRatio < 1.77777f)
		Global_23830 = 0.225f * (1.7777778f / aspectRatio);
	else
		Global_23830 = 0.225f;

	return;
}

void func_362(BOOL bParam0) // Position - 0x10D19
{
	if (!bParam0)
		Global_112608 = MISC::GET_GAME_TIMER() + 250;

	Global_112605 = bParam0;
	return;
}

BOOL func_363(char* sParam0, int iParam1) // Position - 0x10D37
{
	if (func_276() < func_233(iParam1))
	{
		TEXT_LABEL_ASSIGN_STRING(sParam0, "PROS_NO_MONEY" /*You need more cash to pick up a prostitute.*/, 16);
		return false;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_364(PLAYER::PLAYER_ID()))
	{
		TEXT_LABEL_ASSIGN_STRING(sParam0, "PIM_HHIDCR" /*Not available while a key player in a Freemode Event.*/, 16);
		return false;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 16);
	return true;
}

BOOL func_364(Player plParam0) // Position - 0x10D81
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1887305[player /*610*/].f_1, 0);

	return false;
}

BOOL func_365(Ped pedParam0, BOOL bParam1) // Position - 0x10DA4
{
	int pedDrawableVariation;

	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_50(PLAYER::PLAYER_PED_ID(), false, false)))
	{
	}
	else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_110(bParam1), 3) && TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PLAY_ANIM) != 1)
	{
		if (func_551())
		{
			if (pedParam0 == PLAYER::PLAYER_PED_ID())
			{
				if (!func_206(PLAYER::PLAYER_ID()))
				{
					pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_FEET);
				
					if (!func_524(256))
					{
						func_197(256);
						iLocal_84 = pedDrawableVariation;
						iLocal_85 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_FEET);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_FEET, 1, 0, 0);
						func_197(1024);
					}
				}
			
				TASK::TASK_PLAY_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_366(bParam1), 2f, -8f, -1, 0, 0, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_366(bParam1), 2f, -8f, -1, 0, 0, false, false, false);
			}
		}
		else
		{
			TASK::TASK_PLAY_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_366(bParam1), 2f, -8f, -1, 0, 0, false, false, false);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_366(bParam1), 3))
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_366(bParam1)) >= 0.95f)
				TASK::TASK_PLAY_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_110(bParam1), 8f, -2f, -1, 1, 0, false, false, false);
	
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_110(bParam1), 3))
			return true;
	}

	return false;
}

char* func_366(BOOL bParam0) // Position - 0x10F36
{
	if (!func_491(iLocal_47, 32768))
		if (bParam0)
			return func_45(0);
		else
			return func_45(1);

	if (bParam0)
		return func_46(0);

	return func_46(1);
}

void func_367(var uParam0) // Position - 0x10F7C
{
	*uParam0 = -15;
	return;
}

BOOL func_368(int iParam0) // Position - 0x10F8A
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_334(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_335(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_336(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_339(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_338(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_337(iParam0);

	if (num6 < 1 || num6 > func_348(num5, num4))
		return false;

	return true;
}

void func_369() // Position - 0x11066
{
	if (PED::IS_PED_INJURED(pedLocal_94))
		return;

	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedLocal_94);

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94))
		if (iLocal_70 < 1)
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		else
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

BOOL func_370() // Position - 0x110B1
{
	if (func_371(0, -1, false) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\\HUD_321_GO", true, -1))
		return true;

	return false;
}

BOOL func_371(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x110D7
{
	int num;
	BOOL flag;
	BOOL flag2;

	if (!func_330(&num, true, iParam1))
		return false;

	flag = true;
	TEXT_LABEL_ASSIGN_STRING(&Global_23831.f_6238[num /*4*/], sParam0, 16);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23831.f_6238[num /*4*/]))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_23831.f_6238[num /*4*/], 9);
		Global_23831.f_6231[num] = true;
	
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&Global_23831.f_6238[num /*4*/], 9))
			flag = false;
	}

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
		flag = false;

	Global_23831.f_6217[num] = true;

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
		flag = false;

	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23831.f_6224[num] = true;
	
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
			flag = false;
	}

	flag2 = false;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23831.f_6263[num /*10*/].f_1), "instructional_buttons", 24);
	flag2 = func_372(&Global_23831.f_6263[num /*10*/]);
	!flag || !flag2;
	return flag && flag2;
}

BOOL func_372(int* piParam0) // Position - 0x111E5
{
	switch (piParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
			{
				*piParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(piParam0->f_1));
				piParam0->f_9 = 1;
			
				if (piParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
					{
						piParam0->f_8 = MISC::GET_GAME_TIMER();
						piParam0->f_9 = 2;
					}
				}
			}
			else
			{
				piParam0->f_8 = MISC::GET_GAME_TIMER();
				piParam0->f_9 = 2;
			}
			break;
	
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
			{
				piParam0->f_8 = MISC::GET_GAME_TIMER();
				piParam0->f_9 = 2;
			}
			break;
	
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
				piParam0->f_9 = 0;
			break;
	}

	return piParam0->f_9 == 2;
}

void func_373() // Position - 0x11287
{
	if (!func_551())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_94))
		iLocal_58 = ENTITY::GET_ENTITY_HEALTH(pedLocal_94);

	return;
}

void func_374() // Position - 0x112AB
{
	Vehicle vehiclePedIsIn;

	if (!func_551())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
				uLocal_54 = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
		}
	}

	return;
}

void func_375(BOOL bParam0, int iParam1) // Position - 0x112F4
{
	int num;

	if (!func_330(&num, false, iParam1))
		return;

	if (Global_23831.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
		Global_23831.f_9116 = 0;
	}

	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);

	if (Global_23831.f_6231[num])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23831.f_6231[num] = false;
	}

	if (Global_23831.f_6217[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23831.f_6217[num] = false;
	}

	if (Global_23831.f_6224[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23831.f_6224[num] = false;
	}

	if (bParam0)
	{
		func_376(&Global_23831.f_6263[num /*10*/]);
		Global_23831.f_6324[num] = 0;
	}
	else
	{
		Global_23831.f_6324[num] = 0;
	}

	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
	return;
}

void func_376(int* piParam0) // Position - 0x113BA
{
	if (piParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(piParam0);
	
		*piParam0 = 0;
		piParam0->f_9 = 0;
	}

	return;
}

BOOL func_377() // Position - 0x113E6
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				veLocal_97 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (!(veLocal_97 == 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_97, false) && !FIRE::IS_ENTITY_ON_FIRE(veLocal_97) && !ENTITY::IS_ENTITY_UPSIDEDOWN(veLocal_97))
					{
						if (func_91(&veLocal_97))
						{
							func_5(&iLocal_47, 1);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

void func_378() // Position - 0x1145B
{
	if (iLocal_70 == 0)
	{
		if (!func_491(iLocal_49, 1) && !func_491(iLocal_49, 16))
			if (func_379(0))
				func_482(&iLocal_49, 1);
	
		if (!func_491(iLocal_49, 4) && !func_491(iLocal_49, 64))
			if (func_379(2))
				func_482(&iLocal_49, 4);
	
		if (!func_491(iLocal_49, 8) && !func_491(iLocal_49, 128))
			if (func_379(1))
				func_482(&iLocal_49, 8);
	}

	return;
}

BOOL func_379(int iParam0) // Position - 0x114E3
{
	Vector3 vector;
	Vector3 entityCoords;
	int hit;
	var endCoords;
	var surfaceNormal;
	var entityHit;

	vector = { func_187(iParam0) };
	entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_97, true) };

	if (uLocal_306[iParam0] == 0)
	{
		if (ENTITY::GET_ENTITY_MODEL(veLocal_97) == -376434238)
			uLocal_306[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(vector, entityCoords, 0.1f, 511, veLocal_97, 3);
		else if (ENTITY::GET_ENTITY_MODEL(veLocal_97) == 941800958 || ENTITY::GET_ENTITY_MODEL(veLocal_97) == -1566741232 || ENTITY::GET_ENTITY_MODEL(veLocal_97) == 1617472902 || ENTITY::GET_ENTITY_MODEL(veLocal_97) == 579912970 || ENTITY::GET_ENTITY_MODEL(veLocal_97) == -122993285)
			uLocal_306[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(vector, entityCoords, 0.15f, 511, veLocal_97, 3);
		else
			uLocal_306[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(vector, entityCoords, 0.25f, 511, veLocal_97, 3);
	}
	else
	{
		switch (SHAPETEST::GET_SHAPE_TEST_RESULT(uLocal_306[iParam0], &hit, &endCoords, &surfaceNormal, &entityHit))
		{
			case 2:
				uLocal_306[iParam0] = 0;
			
				if (hit != 0)
				{
					func_380(iParam0);
					return false;
				}
				else
				{
					return true;
				}
				break;
		
			case 1:
				break;
		
			case 0:
				uLocal_306[iParam0] = 0;
				break;
		}
	}

	return false;
}

void func_380(int iParam0) // Position - 0x1162E
{
	switch (iParam0)
	{
		case 0:
			if (!func_491(iLocal_49, 16))
			{
				func_482(&iLocal_49, 16);
				func_5(&iLocal_49, 1);
			}
			break;
	
		case 1:
			if (!func_491(iLocal_49, 128))
			{
				func_482(&iLocal_49, 128);
				func_5(&iLocal_49, 8);
			}
			break;
	
		case 2:
			if (!func_491(iLocal_49, 64))
			{
				func_482(&iLocal_49, 64);
				func_5(&iLocal_49, 4);
			}
			break;
	
		case 3:
			if (!func_491(iLocal_49, 32))
			{
				func_482(&iLocal_49, 32);
				func_5(&iLocal_49, 2);
			}
			break;
	}

	return;
}

void func_381() // Position - 0x116CE
{
	if (func_386() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iLocal_293 = 9;
		func_384(pedLocal_94);
		func_384(PLAYER::PLAYER_PED_ID());
		func_382();
		func_40(&uLocal_102);
	}

	return;
}

void func_382() // Position - 0x11709
{
	Vector3 vector;
	Vector3 vector2;

	if (!CAM::DOES_CAM_EXIST(caLocal_100))
		caLocal_100 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);

	if (!CAM::DOES_CAM_EXIST(caLocal_101))
		caLocal_101 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);

	func_383(&vector, &vector2);
	CAM::SET_CAM_COORD(caLocal_100, vector);
	CAM::SET_CAM_ROT(caLocal_100, vector.f_3, 2);
	CAM::SET_CAM_FOV(caLocal_100, vector.f_6);
	CAM::SET_CAM_COORD(caLocal_101, vector2);
	CAM::SET_CAM_ROT(caLocal_101, vector2.f_3, 2);
	CAM::SET_CAM_FOV(caLocal_101, vector2.f_6);
	CAM::SET_CAM_ACTIVE(caLocal_100, true);
	CAM::SET_CAM_ACTIVE(caLocal_101, false);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	return;
}

void func_383(var uParam0, var uParam1) // Position - 0x1179F
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
	
		case CHAR_FRANKLIN:
			*uParam0 = { -20.162f, -1443.9158f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.9202f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
	
		case CHAR_TREVOR:
			*uParam0 = { 1972.2477f, 3804.8054f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.1941f, 3807.5408f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}

	return;
}

void func_384(Ped pedParam0) // Position - 0x118D9
{
	int taskSequenceId;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16842752);
	
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_385(), 1f, -1, 0.5f, 8192, 1193033728);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}

	return;
}

Vector3 func_385() // Position - 0x11938
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			return -819.88f, 177.47f, 70.63f;
	
		case CHAR_FRANKLIN:
			return -14.57f, -1437.56f, 30.12f;
	
		case CHAR_TREVOR:
			return 1972.16f, 3817.47f, 32.43f;
	}

	return 0f, 0f, 0f;
}

BOOL func_386() // Position - 0x1199D
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_388()) < func_387() * func_387();
}

float func_387() // Position - 0x119C0
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			return 20.75f;
	
		case CHAR_FRANKLIN:
			return 10f;
	
		case CHAR_TREVOR:
			return 14f;
	}

	return 0f;
}

Vector3 func_388() // Position - 0x11A05
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			return -827.04f, 172.26f, 69.48f;
	
		case CHAR_FRANKLIN:
			return -16.98f, -1451.59f, 29.57f;
	
		case CHAR_TREVOR:
			return 1983.22f, 3820.64f, 31.37f;
	}

	return 0f, 0f, 0f;
}

void func_389() // Position - 0x11A6A
{
	func_331();
	func_404();

	if (!func_10(&uLocal_105))
		func_472(&uLocal_105);

	if (func_403())
		return;

	if (!func_10(&uLocal_114))
		func_472(&uLocal_114);

	if (func_377() && PED::IS_PED_IN_VEHICLE(pedLocal_94, veLocal_97, false))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(veLocal_97) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(veLocal_97))
		{
			if (func_396() && !func_386() && !func_395())
			{
				func_394();
			
				if (func_7(&uLocal_114) > 2.5f)
				{
					iLocal_83 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(ENTITY::GET_ENTITY_COORDS(veLocal_97, false), 40f, 40f, 40f, ENTITY::GET_ENTITY_HEADING(veLocal_97), false, 7);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REENABLE_CONTROL_ON_DEATH | 256 | 512);
					func_482(&iLocal_47, 2048);
					iLocal_98 = 0;
					PED::ADD_RELATIONSHIP_GROUP("ProstituteInPlay", &hLocal_305);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_305, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_94, hLocal_305);
					func_492("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_47, 1024);
					iLocal_302 = -15;
					func_128();
					func_393();
					iLocal_81 = 3;
				
					if (func_48(false, true))
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				
					iLocal_293 = 8;
				}
			}
			else
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && func_7(&uLocal_105) > 15f && func_392())
				{
					if (!func_491(iLocal_48, 4096))
					{
						_DISPLAY_HELP_TEXT("PROS_SPOT" /*Go somewhere more secluded.*/, -1);
						func_482(&iLocal_48, 4096);
					}
				
					func_391();
					func_40(&uLocal_105);
				}
			
				func_40(&uLocal_114);
			}
		}
		else
		{
			func_40(&uLocal_114);
			func_390();
		}
	}
	else if (!func_386())
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_94))
			if (!PED::IS_PED_INJURED(pedLocal_94))
				TASK::CLEAR_PED_TASKS(pedLocal_94);
	
		func_473(false);
	}

	return;
}

void func_390() // Position - 0x11C1C
{
	iLocal_49 = 0;
	uLocal_306[0] = 0;
	uLocal_306[1] = 0;
	uLocal_306[2] = 0;
	uLocal_306[3] = 0;
	return;
}

void func_391() // Position - 0x11C43
{
	if (PED::IS_PED_INJURED(pedLocal_94))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94))
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

BOOL func_392() // Position - 0x11C70
{
	if (!func_491(iLocal_49, 256))
		return true;

	return func_491(iLocal_49, 32);
}

void func_393() // Position - 0x11C91
{
	if (func_551())
	{
		PED::SET_PED_CONFIG_FLAG(pedLocal_94, 229, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_94, 26, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_94, 115, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_94, true);
	}

	return;
}

void func_394() // Position - 0x11CC2
{
	Vector3 entityCoords;
	Vector3 offsetFromEntityInWorldCoords;
	float groundZ;
	int materialHash;
	int hit;
	var endCoords;
	var surfaceNormal;
	var entityHit;

	if (!func_491(iLocal_47, 2097152))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_82)
		{
			if (iLocal_98 == 0)
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_97, true) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &groundZ, false, false);
				entityCoords.f_2 = groundZ + 0.15f;
				offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_97, 0f, 0f, -2f) };
				iLocal_98 = SHAPETEST::START_SHAPE_TEST_CAPSULE(entityCoords, offsetFromEntityInWorldCoords, 2f, 511, veLocal_97, 7);
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(iLocal_98, &hit, &endCoords, &surfaceNormal, &materialHash, &entityHit) == 2)
			{
				if (hit != 0)
					if (materialHash == -1447280105 || materialHash == 1925605558 || materialHash == 2128369009)
						func_40(&uLocal_114);
			
				iLocal_82 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_98 = 0;
			}
		}
	}

	return;
}

BOOL func_395() // Position - 0x11D8D
{
	Vehicle vehiclePedIsIn;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, 0, false))
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				return true;

	return false;
}

BOOL func_396() // Position - 0x11DD9
{
	Entity outPed;
	Vector3 entityCoords;
	var unk3;
	Interior interiorFromEntity;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			veLocal_97 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	
		if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(entityCoords, func_65(0), 12f, false) || TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(entityCoords, func_65(1), 12f, false))
			return false;
	
		if (func_402())
			return false;
	
		if (func_401(veLocal_97, &unk3))
			if (!func_400(unk3))
				if (!func_399(entityCoords) || func_398(entityCoords))
					return false;
	
		if (func_90(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f * 0.5f))
			return false;
	
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_94, veLocal_97, 0, false, false))
			return false;
	
		PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(true);
	
		if (PED::GET_CLOSEST_PED(entityCoords, 20f, true, true, &outPed, false, true, -1))
			if (ENTITY::DOES_ENTITY_EXIST(outPed))
				if (!ENTITY::IS_ENTITY_DEAD(outPed, false))
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(outPed, veLocal_97, 17))
						return false;
			else
				func_492("NO VEHICLES FOUND");
	
		interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	
		if (!(interiorFromEntity == 0))
		{
			func_492("IN AN INTERIOR");
			return false;
		}
	
		if (func_397())
			return false;
	}

	return true;
}

BOOL func_397() // Position - 0x11F2D
{
	func_482(&iLocal_49, 256);

	if (!func_491(iLocal_49, 2))
	{
		if (func_379(3))
		{
			func_482(&iLocal_49, 2);
			func_5(&iLocal_49, 32);
		}
	
		return true;
	}
	else
	{
		func_378();
	}

	return false;
}

BOOL func_398(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x11F6C
{
	if (SYSTEM::VDIST(vParam0, 491.76f, -515.73f, 29.51f) <= 12f || SYSTEM::VDIST(vParam0, -1453.3849f, -594.2627f, 29.7966f) <= 12f || SYSTEM::VDIST(vParam0, -633.6086f, -332.3337f, 33.81f) <= 25f || SYSTEM::VDIST(vParam0, -1493.1909f, -693.9906f, 26.0665f) <= 25f || SYSTEM::VDIST(vParam0, -1512.938f, -675.6082f, 27.4202f) <= 25f || SYSTEM::VDIST(vParam0, -1388.642f, -1342.2657f, 3.1626f) <= 25f || SYSTEM::VDIST(vParam0, 50.2024f, -1392.3063f, 28.4166f) <= 12f || SYSTEM::VDIST(vParam0, 25.9811f, -1392.2893f, 28.3356f) <= 12f || SYSTEM::VDIST(vParam0, 10.0435f, -1391.5956f, 28.3074f) <= 12f || SYSTEM::VDIST(vParam0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
		return true;

	return false;
}

BOOL func_399(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x120D4
{
	if (SYSTEM::VDIST(vParam0, -1582.7823f, 5168.163f, 18.5615f) <= 15f || SYSTEM::VDIST(vParam0, -1445.7297f, -640.8375f, 28.7804f) <= 15f || SYSTEM::VDIST(vParam0, -348.7544f, 292.5813f, 83.9843f) <= 15f || SYSTEM::VDIST(vParam0, -273f, 317.8898f, 92.2549f) <= 15f || SYSTEM::VDIST(vParam0, -1627.9353f, -1083.4431f, 3.2819f) <= 40f || SYSTEM::VDIST(vParam0, -1661.0979f, -1057.7303f, 2.5729f) <= 40f || SYSTEM::VDIST(vParam0, -1518.3582f, -553.8981f, 32.1463f) <= 15f)
	{
		func_482(&iLocal_47, 2097152);
		return true;
	}

	func_5(&iLocal_47, 2097152);
	return false;
}

BOOL func_400(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x121E7
{
	int nthClosestVehicleNodeId;

	nthClosestVehicleNodeId = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1, 1, 1077936128, 0);
	PATHFIND::GET_VEHICLE_NODE_POSITION(nthClosestVehicleNodeId, &vParam0);

	if (PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(nthClosestVehicleNodeId))
	{
		if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(nthClosestVehicleNodeId))
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam0) > 400f)
				return true;
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam0) > 56.25f)
			return true;
	}
	else if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(nthClosestVehicleNodeId))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam0) > 400f)
			return true;
	}
	else
	{
		nthClosestVehicleNodeId = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1, 8, 1077936128, 0);
		PATHFIND::GET_VEHICLE_NODE_POSITION(nthClosestVehicleNodeId, &vParam0);
	
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam0) > 400f)
			return true;
	}

	return false;
}

BOOL func_401(Vehicle veParam0, Vector3* pvParam1) // Position - 0x122CD
{
	var unk;

	unk = 4;
	unk[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, 2f, 0f, 0f) };
	unk[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, -2f, 0f, 0f) };
	unk[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, 0f, 2f, 0f) };
	unk[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, 0f, -2f, 0f) };

	if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(unk[0 /*3*/], pvParam1, 1077936128, 0))
		return true;
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(unk[1 /*3*/], pvParam1, 1077936128, 0))
		return true;
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(unk[2 /*3*/], pvParam1, 1077936128, 0))
		return true;
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(unk[3 /*3*/], pvParam1, 1077936128, 0))
		return true;

	return false;
}

BOOL func_402() // Position - 0x12394
{
	return Global_76498;
}

BOOL func_403() // Position - 0x123A0
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1622245081) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1239896389) > 0)
		return true;

	return false;
}

void func_404() // Position - 0x123CC
{
	if (!func_491(iLocal_47, 128))
	{
		func_405(39, true);
		func_405(40, true);
		func_405(41, true);
		func_405(42, true);
		func_405(43, true);
		func_405(44, true);
		func_482(&iLocal_47, 128);
	}

	return;
}

void func_405(int iParam0, BOOL bParam1) // Position - 0x12412
{
	if (bParam1)
		if (!func_409(iParam0, 2, true))
			func_408(iParam0, 2, true);
	else if (func_409(iParam0, 2, true))
		func_406(iParam0, 2, true);

	return;
}

void func_406(int iParam0, int iParam1, BOOL bParam2) // Position - 0x12449
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::CLEAR_BIT(&Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_154() == 0)
		{
			address = func_142(func_407(iParam0), -1);
			MISC::CLEAR_BIT(&address, iParam1);
			func_138(func_407(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113969.f_668[iParam0], iParam1);
	}

	return;
}

int func_407(int iParam0) // Position - 0x124B9
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
			return 12924;
	
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
	
		default:
			break;
	}

	return 14835;
}

void func_408(int iParam0, int iParam1, BOOL bParam2) // Position - 0x12861
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::SET_BIT(&Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_154() == 0)
		{
			address = func_142(func_407(iParam0), -1);
			MISC::SET_BIT(&address, iParam1);
			func_138(func_407(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113969.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_409(int iParam0, int iParam1, BOOL bParam2) // Position - 0x128D1
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_101585.f_1414[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_154() == 0)
			return IS_BIT_SET(func_142(func_407(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_113969.f_668[iParam0], iParam1);

	return false;
}

void func_410(var uParam0) // Position - 0x12931
{
	if (func_491(iLocal_47, 2))
	{
		if (!func_63())
			return;
	
		func_100(1);
	}

	func_68();
	func_542();

	if (func_551())
		func_536(uParam0);

	return;
}

void func_411() // Position - 0x12968
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_94, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_94, PLAYER::PLAYER_PED_ID(), 5f, 5f, 5f, false, true, 0) || func_491(iLocal_47, 8192))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
			PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(pedLocal_94, false))
			{
				ENTITY::SET_ENTITY_LOD_DIST(pedLocal_94, 50);
				PED::SET_PED_LOD_MULTIPLIER(pedLocal_94, 5f);
			
				if (func_491(iLocal_47, 16))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
						func_5(&iLocal_47, 16);
					}
				}
			
				veLocal_97 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_97, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_94, veLocal_97) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_97, false))
					{
						func_492("***** prostitute IN VEHICLE****** ");
					
						if (func_491(iLocal_47, 8))
							if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
								if (func_428(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								else if (func_427(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								else if (func_426(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								else if (func_425(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								else if (func_424(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								else if (func_423(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								else if (func_422(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								else if (func_421(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								else if (func_420(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ITALIGTO_PASSENGER"));
								else if (func_419(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_SCHLAGEN_PASSENGER"));
								else if (func_418(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_NEO_PASSENGER"));
								else if (func_417(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_PEYOTE2_PASSENGER"));
								else if (func_416(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ZR350_PASSENGER"));
								else if (func_415(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_IGNUS_PASSENGER"));
								else if (func_414(veLocal_97))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ZENO_PASSENGER"));
								else
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_PASSENGER"));
					
						if (func_551())
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_94, false, false);
						else
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_94, true, true);
					
						func_183(pedLocal_94, 0);
						func_391();
						iLocal_62 = MISC::GET_GAME_TIMER();
						func_40(&uLocal_105);
						iLocal_293 = 7;
					}
					else
					{
						func_492("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if (func_413(pedLocal_94, PLAYER::PLAYER_PED_ID(), true) > 11f || func_412(20f) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_97, false))
				{
					func_115(&uLocal_111);
				
					if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_94, false))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_94);
						func_473(false);
						func_492("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_96(15);
					}
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_97, false))
					{
						veLocal_97 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					}
					else if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_94, veLocal_97, 0, false, false))
					{
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						{
							if (!func_491(iLocal_73, 1))
							{
								func_40(&uLocal_117);
								func_482(&iLocal_73, 1);
							}
							else if (func_7(&uLocal_117) > 20f)
							{
								func_126();
								func_492("prostitute couldn't get into the car");
								iLocal_293 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_491(iLocal_73, 1))
		{
			func_492("PLAYER out of range for entering VEHICLE or wanted level");
			TASK::CLEAR_PED_TASKS(pedLocal_94);
			func_96(15);
		}
	}

	return;
}

BOOL func_412(float fParam0) // Position - 0x12D1E
{
	if (!func_10(&uLocal_111))
		func_40(&uLocal_111);

	return func_121(&uLocal_111) > fParam0;
}

float func_413(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x12D3F
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

BOOL func_414(Vehicle veParam0) // Position - 0x12D9D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case -1949393167:
				return true;
		}
	}

	return false;
}

BOOL func_415(Vehicle veParam0) // Position - 0x12DC8
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case -1901288301:
				return true;
		}
	}

	return false;
}

BOOL func_416(Vehicle veParam0) // Position - 0x12DF3
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case -1297908787:
				return true;
		}
	}

	return false;
}

BOOL func_417(Vehicle veParam0) // Position - 0x12E1E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case -627376728:
				return true;
		}
	}

	return false;
}

BOOL func_418(Vehicle veParam0) // Position - 0x12E49
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case 986556497:
				return true;
		}
	}

	return false;
}

BOOL func_419(Vehicle veParam0) // Position - 0x12E74
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case -988377294:
				return true;
		}
	}

	return false;
}

BOOL func_420(Vehicle veParam0) // Position - 0x12E9F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case 510359473:
				return true;
		}
	}

	return false;
}

BOOL func_421(Vehicle veParam0) // Position - 0x12ECA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case 1212243433:
				return true;
		}
	}

	return false;
}

BOOL func_422(Vehicle veParam0) // Position - 0x12EF5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case 570040040:
			case -193022774:
				return true;
		}
	}

	return false;
}

BOOL func_423(Vehicle veParam0) // Position - 0x12F26
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case 1192783831:
				return true;
		}
	}

	return false;
}

BOOL func_424(Vehicle veParam0) // Position - 0x12F51
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case -1546132012:
				return true;
		}
	}

	return false;
}

BOOL func_425(Vehicle veParam0) // Position - 0x12F7C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case 1837596901:
			case 2013836096:
				return true;
		}
	}

	return false;
}

BOOL func_426(Vehicle veParam0) // Position - 0x12FAD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case 1697345049:
			case -635697407:
				return true;
		}
	}

	return false;
}

BOOL func_427(Vehicle veParam0) // Position - 0x12FDE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case -782720499:
			case -38413156:
			case 2071837743:
				return true;
		}
	}

	return false;
}

BOOL func_428(Vehicle veParam0) // Position - 0x13015
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
			case 2130662788:
			case 1410462333:
			case -317944664:
			case 1240573865:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case 1509896619:
			case -2093548880:
			case 801538932:
			case -1174301217:
				return true;
		}
	}

	return false;
}

void func_429(var uParam0) // Position - 0x1309A
{
	int scriptTaskStatus;

	if (!func_438(false))
		return;

	if (!func_491(iLocal_47, 16))
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		func_482(&iLocal_47, 16);
	}

	if (!func_10(&uLocal_111))
		func_472(&uLocal_111);

	if (func_121(&uLocal_111) >= 20f || !ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_94, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
	{
		if (func_491(iLocal_73, 524288))
		{
			func_115(&uLocal_111);
			iLocal_293 = 6;
		}
		else if (func_437())
		{
			func_40(&uLocal_111);
			func_482(&iLocal_73, 524288);
		}
	}

	func_69(pedLocal_94);

	if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_94, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0) || func_491(iLocal_73, 1) && !func_217(0) && !func_402())
	{
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_94, veLocal_97, 0, false, false))
		{
			if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				if (!func_491(iLocal_73, 1))
				{
					func_40(&uLocal_117);
					func_482(&iLocal_73, 1);
				}
				else if (func_7(&uLocal_117) > 10f)
				{
					func_68();
					TASK::CLEAR_PED_TASKS(pedLocal_94);
					func_492("prostitute couldn't get into the car");
					iLocal_293 = 6;
				}
			}
		}
		else
		{
			func_430();
		}
	}
	else if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_ACCEPT" /*Press ~INPUT_CONTEXT~ or honk your horn to invite the prostitute into the vehicle.*/))
	{
		func_5(&iLocal_47, 1048576);
		func_468();
	
		if (func_551())
		{
			scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_PLAY_ANIM);
		
			if (scriptTaskStatus != 1 && scriptTaskStatus != 0)
			{
				func_542();
				func_536(uParam0);
			}
		}
	}

	return;
}

void func_430() // Position - 0x13215
{
	var unk;

	if (iLocal_293 != 5 && func_363(&unk, 0))
	{
		func_433();
	
		if (func_431(iLocal_72, true) || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_482(&iLocal_47, 8192);
			func_40(&uLocal_111);
		}
	
		if (func_491(iLocal_47, 8192))
		{
			func_468();
			Global_33100 = true;
			Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_430 = 1;
			func_131("PROSTITUTES_SOLICIT_SCENE");
			func_87("PROSTITUTES_DRIVE_SCENE");
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_ENTER_VEHICLE) != 1 && !PED::IS_PED_IN_VEHICLE(pedLocal_94, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true))
					TASK::TASK_ENTER_VEHICLE(pedLocal_94, veLocal_97, -1, 0, 1f, 8388609, 0, 0);
		
			sLocal_61 = func_50(PLAYER::PLAYER_PED_ID(), true, false);
			STREAMING::REQUEST_ANIM_DICT(sLocal_61);
			sLocal_61 = func_50(PLAYER::PLAYER_PED_ID(), false, true);
			STREAMING::REQUEST_ANIM_DICT(sLocal_61);
			func_40(&uLocal_105);
			iLocal_293 = 5;
		}
	}

	return;
}

BOOL func_431(int iParam0, BOOL bParam1) // Position - 0x13311
{
	int num;

	num = func_432(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_217(0))
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

int func_432(int iParam0) // Position - 0x133C9
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

void func_433() // Position - 0x13404
{
	if (Global_33100)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
			return;
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
	
		if (!func_491(iLocal_47, 8192))
			if (iLocal_72 == -1)
				_CONTEXT_ADD_HELP_TEXT(&iLocal_72, 5, "PROS_ACCEPT" /*Press ~INPUT_CONTEXT~ or honk your horn to invite the prostitute into the vehicle.*/, 0, 0, 0, 0);
	}
	else if (_CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(iLocal_72, 0))
	{
		func_468();
	}

	return;
}

BOOL _CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(int iParam0, int iParam1) // Position - 0x13466
{
	int num;
	BOOL flag;

	num = func_432(iParam0);

	if (iParam1 == 0)
		if (num == -1)
			return false;
	else
		num = iParam0;

	if (num < 0)
		return false;

	if (Global_44799[num /*32*/].f_6)
		return false;

	flag = false;

	if (!Global_44799[num /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44799[num /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44994);
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44799[num /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44994);
	
		if (Global_44799[num /*32*/].f_30)
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_44799[num /*32*/].f_13));
		else
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_44799[num /*32*/].f_13));
	
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}

	return flag;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x1351B
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

void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x13646
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_432(*uParam0);

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

BOOL func_437() // Position - 0x1369D
{
	int randomIntInRange;
	int taskSequenceId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_94) || PED::IS_PED_INJURED(pedLocal_94))
		return true;

	if (!func_551())
	{
		func_68();
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_94, true))
		{
			TASK::TASK_WANDER_STANDARD(pedLocal_94, 1193033728, 0);
		}
		else if (func_491(iLocal_47, 4194304))
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(8, 11);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_291), func_66(5), 2f, -2f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_291), func_66(randomIntInRange), 8f, -8f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_94, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	
		return true;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_94, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
		{
			TASK::TASK_WANDER_STANDARD(pedLocal_94, 1193033728, 0);
			return true;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
			return false;
		}
	}

	switch (iLocal_53)
	{
		case 0:
			if (func_491(iLocal_47, 4194304))
			{
				func_68();
				iLocal_53 = 1;
			}
			break;
	
		case 1:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
			{
				TASK::TASK_PLAY_ANIM(pedLocal_94, func_67(iLocal_291), func_66(5), 2f, -2f, -1, 0, 0, false, false, false);
				iLocal_53 = 2;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
			}
			break;
	
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_PLAY_ANIM) == 7)
				{
					randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(8, 11);
					TASK::TASK_PLAY_ANIM(pedLocal_94, func_67(iLocal_291), func_66(randomIntInRange), 8f, -8f, -1, 1, 0, false, false, false);
					iLocal_53 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
			}
			break;
	
		case 3:
			iLocal_53 = 0;
			return true;
	}

	return false;
}

BOOL func_438(BOOL bParam0) // Position - 0x13854
{
	if (ENTITY::IS_ENTITY_DEAD(pedLocal_94, false))
		return false;

	func_491(iLocal_47, 8192);

	if (func_413(pedLocal_94, PLAYER::PLAYER_PED_ID(), true) > 11f)
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return false;

	if (func_551())
		if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, true) > 1)
			return false;

	if (bParam0)
		if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 2f)
			return false;

	if (func_90(ENTITY::GET_ENTITY_COORDS(pedLocal_94, true), 1106247680))
	{
		if (!func_491(iLocal_48, 8192) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			_DISPLAY_HELP_TEXT("PROS_COPS" /*Prostitutes will ignore you if police are nearby.*/, -1);
			func_482(&iLocal_48, 8192);
		}
	
		return false;
	}

	if (!func_377())
	{
		if (!func_551())
		{
			if (!bLocal_86 && !Global_113016 && _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == -1)
			{
				_DISPLAY_HELP_TEXT("PROS_CAR" /*You cannot pick up Prostitutes in this vehicle.*/, -1);
				bLocal_86 = true;
			}
		
			func_439();
		}
		else if (!func_524(4096))
		{
			_DISPLAY_HELP_TEXT("PROS_CAR" /*You cannot pick up Prostitutes in this vehicle.*/, -1);
			func_197(4096);
		}
	
		return false;
	}

	return true;
}

void func_439() // Position - 0x1397F
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	if (!func_491(iLocal_47, 1))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_94))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_482(&iLocal_47, 1);
		}
	}

	return;
}

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x139D0
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

void func_441() // Position - 0x13A55
{
	if (func_438(false))
	{
		func_430();
	
		if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 && !func_491(iLocal_47, 8192))
		{
			if (func_72(true))
			{
				func_115(&uLocal_111);
				iLocal_62 = MISC::GET_GAME_TIMER();
				func_492("prostitute proposition player VEHICLE");
				iLocal_293 = 4;
			}
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(pedLocal_94);
		func_96(15);
	}

	return;
}

void func_442(var uParam0) // Position - 0x13AB7
{
	if (func_438(false))
	{
		func_430();
	
		if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || func_491(iLocal_47, 8192))
		{
			iLocal_293 = 3;
		}
		else if (func_412(20f))
		{
			func_115(&uLocal_111);
			func_473(false);
		}
		else
		{
			func_443(uParam0);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(pedLocal_94);
		func_96(15);
	}

	return;
}

void func_443(var uParam0) // Position - 0x13B20
{
	float num;
	var maximum;
	var minimum;
	float offsetFromEntityInWorldCoords;
	Vector3 offsetFromEntityInWorldCoords2;
	Vector3 entityCoords;
	int taskSequenceId;

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_97))
		return;

	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veLocal_97), &minimum, &maximum);
	num = { maximum - minimum };
	num = { num / { 2f, 2f, 2f } };
	offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_97, -(num + 0.2f), 0f, 0f) };
	offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_97, num + 0.2f, 0f, 0f) };
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_94, true) };

	if (SYSTEM::VDIST(entityCoords, offsetFromEntityInWorldCoords2) < SYSTEM::VDIST(entityCoords, offsetFromEntityInWorldCoords))
		offsetFromEntityInWorldCoords = { offsetFromEntityInWorldCoords2 };

	if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_ENTER_VEHICLE) != 1 || !func_491(iLocal_47, 8192) && SYSTEM::VDIST2(uLocal_91, offsetFromEntityInWorldCoords) > 0f)
	{
		if (func_551())
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_94))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_94, false, true);
		
			func_453(&uLocal_285, func_67(iLocal_291));
			func_447(uParam0, true);
			func_444(&uLocal_285, uParam0);
		}
	
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, offsetFromEntityInWorldCoords, offsetFromEntityInWorldCoords.f_1, offsetFromEntityInWorldCoords.f_2, 1f, -1, 1f, 8192, 1193033728);
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f), 0);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_94, taskSequenceId);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		uLocal_91 = { offsetFromEntityInWorldCoords };
	}

	return;
}

void func_444(var uParam0, var uParam1) // Position - 0x13C6E
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL(uParam0->[i]))
			func_445(uParam1, uParam0->[i]);
	}

	return;
}

void func_445(var uParam0, const char* sParam1) // Position - 0x13CA4
{
	func_446(uParam0, 1, -1, sParam1, 0);
	return;
}

void func_446(var uParam0, int iParam1, int iParam2, const char* sParam3, int iParam4) // Position - 0x13CB7
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (IS_BIT_SET(uParam0->[i /*18*/], iParam1))
			{
				if (iParam2 != -1)
					if (uParam0->[i /*18*/].f_1 == iParam2)
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

	if (!uParam0->f_271)
		uParam0->f_271 = 1;

	for (i = 0; i < 15; i = i + 1)
	{
		if (!IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[i /*18*/].f_2), sParam3, 64);
			uParam0->[i /*18*/].f_1 = iParam2;
			uParam0->[i /*18*/] = iParam4;
			MISC::SET_BIT(&uParam0->[i /*18*/], iParam1);
			MISC::SET_BIT(&uParam0->[i /*18*/], 30);
			return;
		}
	}

	return;
}

void func_447(var uParam0, BOOL bParam1) // Position - 0x13D98
{
	int i;

	if (!bParam1)
		func_449(uParam0);

	for (i = 0; i < 15; i = i + 1)
	{
		func_448(&uParam0->[i /*18*/]);
	}

	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
	return;
}

void func_448(var uParam0) // Position - 0x13DDB
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "NULL", 64);
	return;
}

void func_449(var uParam0) // Position - 0x13DF4
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
			func_450(&uParam0->[i /*18*/]);
	}

	uParam0->f_271 = 1;
	return;
}

void func_450(var uParam0) // Position - 0x13E2B
{
	func_451(*uParam0, &(uParam0->f_2), uParam0->f_1);
	return;
}

void func_451(int iParam0, const char* sParam1, Hash hParam2) // Position - 0x13E42
{
	if (IS_BIT_SET(iParam0, 30))
	{
		switch (func_452(iParam0))
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

int func_452(int iParam0) // Position - 0x13EFC
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (IS_BIT_SET(iParam0, i))
			return i;
	}

	return -1;
}

int func_453(var uParam0, char* sParam1) // Position - 0x13F25
{
	int i;
	int num;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL(uParam0->[i]))
			if (MISC::ARE_STRINGS_EQUAL(uParam0->[i], sParam1))
				return 0;
	}

	num = func_454(uParam0);

	if (num < 0 || num >= *uParam0)
		return 0;

	uParam0->[num] = sParam1;
	return 1;
}

int func_454(var uParam0) // Position - 0x13F8A
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (MISC::IS_STRING_NULL(uParam0->[i]))
			return i;
	}

	return -1;
}

void func_455(var uParam0) // Position - 0x13FB9
{
	var string1;

	if (func_438(true))
	{
		if (!func_10(&uLocal_111))
			func_472(&uLocal_111);
	
		func_482(&iLocal_47, 4);
		Global_33101 = 1;
		func_430();
	
		if (func_471(&uLocal_111, 2f) || func_491(iLocal_47, 8192))
		{
			func_482(&iLocal_47, 2);
		
			if (func_363(&string1, 0))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_94, -1, SLF_WHILE_NOT_IN_FOV, 4);
				func_443(uParam0);
				func_482(&iLocal_47, 4);
				Global_33100 = true;
				Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_430 = 1;
				iLocal_293 = 2;
			}
			else
			{
				if (MISC::ARE_STRINGS_EQUAL(func_467(&string1), "PIM_HHIDCR" /*Not available while a key player in a Freemode Event.*/))
				{
					_DISPLAY_HELP_TEXT_NO_SOUND(&string1, 30000);
					func_464(true);
				}
				else
				{
					_DISPLAY_HELP_TEXT(&string1, -1);
				}
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&string1) && MISC::ARE_STRINGS_EQUAL(&string1, "PROS_NO_MONEY" /*You need more cash to pick up a prostitute.*/))
					func_456();
			
				func_96(0);
				iLocal_294 = 0;
				func_482(&iLocal_47, 8388608);
				func_5(&iLocal_47, 4);
				Global_33100 = false;
				Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_430 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_47, 4);
		Global_33101 = 0;
	}

	return;
}

void func_456() // Position - 0x140DD
{
	if (!func_524(64))
	{
		func_457(false, 31, 5);
		func_197(64);
	}

	return;
}

void func_457(BOOL bParam0, int iParam1, int iParam2) // Position - 0x140FD
{
	int instructionalKey;

	if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_461(PLAYER::PLAYER_ID(), true, false))
		return;

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE))
		return;

	if (HUD::GET_PAUSE_MENU_STATE() != 0)
		return;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return;

	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
		return;

	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		return;

	if (func_460())
		return;

	if (!func_458())
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || bParam0)
	{
		if (!Global_101585.f_1482 && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			instructionalKey = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /*Alert*/, "BRDISTEX" /*You have insufficient funds. You can add GTA Dollars to your in-game account.*/, instructionalKey, "BRSHETEX" /*Would you like to visit the Store?*/, false, -1, 0, 0, true, 0);
			Global_2697526 = iParam1;
			Global_101585.f_1482 = 1;
			Global_101585.f_1483 = iParam2;
		}
	}

	return;
}

BOOL func_458() // Position - 0x141D8
{
	if (func_459())
		return false;

	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == false)
		return false;

	return true;
}

BOOL func_459() // Position - 0x141F8
{
	return Global_2696684;
}

BOOL func_460() // Position - 0x14204
{
	return Global_2697635;
}

BOOL func_461(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x14210
{
	if (bParam1)
		if (func_462(plParam0))
			return true;

	!bParam2;

	if (Global_1845281[plParam0 /*883*/] == -1)
		return false;

	return true;
}

BOOL func_462(Player plParam0) // Position - 0x14242
{
	return func_463(plParam0);
}

BOOL func_463(Player plParam0) // Position - 0x14250
{
	return IS_BIT_SET(Global_1845281[plParam0 /*883*/].f_11.f_1, 0);
}

void func_464(BOOL bParam0) // Position - 0x14267
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);

	if (bParam0 && !func_465())
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);

	return;
}

BOOL func_465() // Position - 0x14296
{
	return Global_2672855.f_2557[0 /*80*/].f_1 != 0;
}

void _DISPLAY_HELP_TEXT_NO_SOUND(const char* text, int iParam1) // Position - 0x142AC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
	return;
}

const char* func_467(const char* sParam0) // Position - 0x142C3
{
	return sParam0;
}

void func_468() // Position - 0x142CD
{
	if (iLocal_72 != -1)
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_72);

	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x142E1
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

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x1437C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_471(int* piParam0, float fParam1) // Position - 0x1438F
{
	if (func_225(piParam0, fParam1))
	{
		func_115(piParam0);
		return true;
	}

	return false;
}

void func_472(int* piParam0) // Position - 0x143AD
{
	if (!func_10(piParam0))
		func_40(piParam0);

	return;
}

void func_473(BOOL bParam0) // Position - 0x143C5
{
	BOOL flag;

	func_126();

	if (bParam0 || iLocal_70 == 0)
	{
		flag = true;
	
		if (func_551())
			flag = false;
	
		func_106(flag);
		func_96(14);
	}
	else
	{
		func_106(false);
		func_96(15);
	}

	return;
}

int func_474() // Position - 0x14407
{
	if (func_481() || func_480() || func_479() || func_478() || func_475() || Global_2625211 || Global_2625211.f_1 != 0)
		return 1;

	return 0;
}

BOOL func_475() // Position - 0x1445B
{
	if (func_477() || func_476())
		return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_96 == 8;

	return false;
}

BOOL func_476() // Position - 0x14488
{
	return Global_2684504.f_737;
}

BOOL func_477() // Position - 0x14497
{
	return IS_BIT_SET(Global_2684504.f_2, 11);
}

BOOL func_478() // Position - 0x144A8
{
	return IS_BIT_SET(Global_2684504, 5);
}

BOOL func_479() // Position - 0x144B6
{
	return IS_BIT_SET(Global_2684504, 2);
}

BOOL func_480() // Position - 0x144C4
{
	return IS_BIT_SET(Global_2684504, 20);
}

BOOL func_481() // Position - 0x144D3
{
	return Global_2684504.f_700;
}

void func_482(var uParam0, int iParam1) // Position - 0x144E2
{
	func_483(uParam0, iParam1);
	return;
}

void func_483(var uParam0, int iParam1) // Position - 0x144F2
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_484() // Position - 0x14503
{
	if (Global_33102)
		return false;

	if (func_551())
		return false;

	if (!func_488())
		return false;

	if (func_485())
	{
		iLocal_294 = 4;
		return true;
	}

	return false;
}

BOOL func_485() // Position - 0x1453C
{
	Hash entityModel;

	veLocal_96 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(pedLocal_94, true), 15f, 0, 6);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_96) && !ENTITY::IS_ENTITY_DEAD(veLocal_96, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_96, false))
		{
			if (func_91(&veLocal_96) && !func_487(veLocal_96, true))
			{
				pedLocal_95 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_96, -1, false);
			
				if (!(pedLocal_95 == 0))
				{
					if (func_486(&pedLocal_95))
					{
						entityModel = ENTITY::GET_ENTITY_MODEL(veLocal_96);
					
						if (!(entityModel == -956048545) && !(entityModel == -956048545))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_95))
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_95, true, false);
						
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(veLocal_96))
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_96, true, false);
						
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_95, true);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_95, false, 1);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_96, false, 1);
							return true;
						}
					}
				}
			}
		}
	}

	veLocal_96 = 0;
	pedLocal_95 = 0;
	return false;
}

BOOL func_486(var uParam0) // Position - 0x14611
{
	if (!PED::IS_PED_INJURED(*uParam0))
		if (PED::IS_PED_MALE(*uParam0))
			return true;

	return false;
}

BOOL func_487(Vehicle veParam0, BOOL bParam1) // Position - 0x14633
{
	if (Global_79389)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Company_SUV" /*Company SUV*/))
				return true;

	return false;
}

BOOL func_488() // Position - 0x14672
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) || ENTITY::IS_ENTITY_DEAD(pedLocal_94, false))
		return false;

	return true;
}

BOOL IS_CUSTOMER_A_PLAYER() // Position - 0x14698
{
	if (!func_488() || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_491(iLocal_47, 4096))
		return false;

	if (func_491(iLocal_47, 32))
	{
		iLocal_294 = 2;
		func_100(2);
		func_492("IS_CUSTOMER_A_PLAYER is TRUE");
		return true;
	}

	return false;
}

void func_490() // Position - 0x146EC
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_94, false))
	{
		if (!PED::IS_PED_FLEEING(pedLocal_94))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_SMART_FLEE_PED) != 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_94, false);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_94, 196628, true);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(pedLocal_94);
				TASK::TASK_SMART_FLEE_PED(pedLocal_94, PLAYER::PLAYER_PED_ID(), 300f, -1, true, false);
				PED::SET_PED_KEEP_TASK(pedLocal_94, true);
				func_96(15);
			}
		}
	}

	return;
}

BOOL func_491(int iParam0, int iParam1) // Position - 0x1474F
{
	return iParam0 && iParam1 != false;
}

void func_492(char* sParam0) // Position - 0x1475E
{
	return;
}

BOOL func_493() // Position - 0x14766
{
	if (PED::IS_PED_INJURED(pedLocal_94))
		return false;

	if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_ANY) == 1)
		return false;

	if (PED::IS_PED_USING_ANY_SCENARIO(pedLocal_94))
		return false;

	return true;
}

BOOL func_494() // Position - 0x1479C
{
	switch (iLocal_298)
	{
		case 0:
			if (!func_551())
			{
				func_453(&uLocal_285, func_67(iLocal_291));
				func_444(&uLocal_285, &uLocal_396);
				func_492("Moving to PROSTITUTE_INIT_STREAMING");
			}
		
			if (func_551())
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
			}
		
			iLocal_298 = 1;
			break;
	
		case 1:
			if (!func_551())
			{
				if (func_495(&uLocal_396))
				{
					func_482(&iLocal_47, 4194304);
					func_492("Moving to PROSTITUTE_INIT_INIT");
					iLocal_298 = 2;
				}
			}
			else if (func_551())
			{
				func_482(&iLocal_47, 4194304);
				func_492("Moving to PROSTITUTE_INIT_INIT");
				iLocal_298 = 2;
			}
			break;
	
		case 2:
			iLocal_295 = 0;
			iLocal_67 = iLocal_295;
			func_5(&iLocal_47, 512);
			func_5(&iLocal_47, 1024);
			iLocal_294 = 0;
			pedLocal_95 = 0;
			veLocal_96 = 0;
			func_492("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_298 = 3;
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(pedLocal_94))
			{
				if (!func_551())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_94, false);
					PED::SET_PED_CAN_EVASIVE_DIVE(pedLocal_94, false);
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_120, 4, pedLocal_94, "Prostitutes", 0, 1);
					return true;
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_94);
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_94, false);
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_120, 4, pedLocal_94, "Prostitutes", 0, 1);
					PED::SET_PED_CAN_EVASIVE_DIVE(pedLocal_94, false);
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedLocal_94);
					return true;
				}
			}
			break;
	}

	return false;
}

BOOL func_495(var uParam0) // Position - 0x14900
{
	return func_496(uParam0);
}

BOOL func_496(var uParam0) // Position - 0x1490E
{
	int i;

	if (!uParam0->f_271)
		return 1;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
				return 0;
		
			if (!func_497(&uParam0->[i /*18*/]))
				return 0;
		}
	}

	uParam0->f_271 = 0;
	return 1;
}

BOOL func_497(var uParam0) // Position - 0x1496C
{
	return func_498(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

BOOL func_498(int iParam0, const char* sParam1, Hash hParam2) // Position - 0x14983
{
	if (IS_BIT_SET(iParam0, 30))
	{
		if (IS_BIT_SET(iParam0, 29))
		{
			switch (func_452(iParam0))
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

BOOL func_499() // Position - 0x14A6E
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
		{
			if (func_500(pedLocal_94, 537.0014f, 119.0252f, 96.0997f, true) <= 8f)
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_94, true))
					if (func_551())
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_94, false, false);
					else
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_94, true, true);
			
				return true;
			}
		}
	}

	return false;
}

float func_500(Ped pedParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x14ACE
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, fParam1, bParam4);
}

int func_501() // Position - 0x14B08
{
	if (PED::IS_PED_USING_SCENARIO(pedLocal_94, func_65(0)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(pedLocal_94, "amb@world_human_prostitute@crackhooker@base", "base"))
			return 0;
	
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(pedLocal_94, "amb@world_human_prostitute@cokehead@base", "base"))
			return 1;
	}

	if (PED::IS_PED_USING_SCENARIO(pedLocal_94, func_65(1)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(pedLocal_94, "amb@world_human_prostitute@french@base", "base"))
			return 3;
	
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(pedLocal_94, "amb@world_human_prostitute@hooker@base", "base"))
			return 2;
	}

	return -1;
}

void func_502() // Position - 0x14B81
{
	if (ENTITY::IS_ENTITY_DEAD(pedLocal_94, false))
		return;

	if (iLocal_292 != 3 && iLocal_292 != 4)
		func_503(PLAYER::PLAYER_PED_ID());
	else if (iLocal_292 == 3)
		func_503(pedLocal_95);

	return;
}

void func_503(Ped pedParam0) // Position - 0x14BC0
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return;

	if (func_551())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedParam0);
			return;
		}
	}

	if (func_413(pedParam0, pedLocal_94, true) < 30f)
	{
		if (!PED::IS_PED_HEADTRACKING_PED(pedLocal_94, pedParam0))
		{
			if (func_551())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
				{
					TASK::TASK_CLEAR_LOOK_AT(pedLocal_94);
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_94, pedParam0, -1, SLF_WHILE_NOT_IN_FOV, 4);
				}
			}
			else
			{
				TASK::TASK_CLEAR_LOOK_AT(pedLocal_94);
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_94, pedParam0, -1, SLF_WHILE_NOT_IN_FOV, 4);
			}
		}
	}
	else if (PED::IS_PED_HEADTRACKING_PED(pedLocal_94, pedParam0))
	{
		if (func_551())
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
				TASK::TASK_CLEAR_LOOK_AT(pedLocal_94);
		else
			TASK::TASK_CLEAR_LOOK_AT(pedLocal_94);
	}

	return;
}

void func_504() // Position - 0x14C74
{
	if (Global_33100)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_97, false))
			if (PED::IS_PED_IN_VEHICLE(pedLocal_94, veLocal_97, false))
				func_505();
	
		return;
	}

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedLocal_94, false) || !ENTITY::DOES_ENTITY_EXIST(pedLocal_94))
	{
		if (Global_33104 != SCRIPT::GET_ID_OF_THIS_THREAD() && func_491(iLocal_47, 32))
			func_5(&iLocal_47, 32);
	
		return;
	}

	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedLocal_94, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < Global_33103 || Global_33103 == 0f && iLocal_294 != 4)
	{
		Global_33103 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedLocal_94, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		Global_33104 = SCRIPT::GET_ID_OF_THIS_THREAD();
		func_482(&iLocal_47, 32);
	}
	else if (Global_33104 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_33103 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedLocal_94, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	else
	{
		func_5(&iLocal_47, 32);
	}

	return;
}

void func_505() // Position - 0x14D6D
{
	if (func_551())
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
			PED::SET_PED_RESET_FLAG(pedLocal_94, 323, true);
	else
		PED::SET_PED_RESET_FLAG(pedLocal_94, 323, true);

	return;
}

void func_506(var uParam0) // Position - 0x14D9C
{
	if (!(iLocal_293 == 12))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_94, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_510())
			{
				if (func_551())
				{
					func_123(false);
					PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_94, 196624, true);
				
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_94))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_94, true, false);
				
					TASK::TASK_SMART_FLEE_PED(pedLocal_94, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_94, true);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_542();
					func_536(uParam0);
				}
				else
				{
					func_96(12);
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_94, PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_65 = iLocal_65 + 1;
			
				if (iLocal_65 >= 2)
				{
					func_492("prostitute CLASSED AS UNDER ATTACK");
					iLocal_293 = 12;
				}
				else
				{
					func_492("prostitute BEEN HIT BY PLAYER");
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_94);
				}
			}
			else if (func_508())
			{
				func_507();
				iLocal_293 = 12;
			}
		}
	}

	return;
}

void func_507() // Position - 0x14E7A
{
	if (PED::IS_PED_INJURED(pedLocal_94))
		return;

	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedLocal_94);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_94, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
	return;
}

BOOL func_508() // Position - 0x14EA3
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return false;

	if (!func_509())
		return false;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		return false;

	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
		return VEHICLE::IS_VEHICLE_SIREN_ON(vehiclePedIsIn);

	return false;
}

BOOL func_509() // Position - 0x14EF7
{
	if (!func_551())
	{
		return true;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false);
				
					return true;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
		}
	}

	return false;
}

BOOL func_510() // Position - 0x14F9D
{
	Vector3 entityCoords;

	if (!func_491(iLocal_47, 4096))
	{
		if (func_413(pedLocal_94, PLAYER::PLAYER_PED_ID(), true) < 30f)
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_94, true) };
		
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_EXPLOSION, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_GUNSHOT_FIRED, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_GUN_FIGHT, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_PED_SHOT, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_SEEN_PED_KILLED, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_SEEN_MELEE_ACTION, entityCoords, 30f) && !func_551() || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_551())
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_94, false);
			
				func_482(&iLocal_47, 4096);
				return true;
			}
		}
	}

	return false;
}

BOOL func_511() // Position - 0x15081
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_94) && !ENTITY::IS_ENTITY_DEAD(pedLocal_94, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_551())
		{
			if (func_553(PLAYER::PLAYER_ID(), false))
			{
				func_492("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
			
				if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_94, false))
					func_106(false);
			
				func_96(15);
				return false;
			}
		}
	
		if (!PED::IS_PED_INJURED(pedLocal_94))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_94, false))
			{
				if (!func_513(9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(pedLocal_94, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_94, PLAYER::PLAYER_PED_ID(), 100f, 100f, 50f, false, true, 0))
						{
							return true;
						}
						else
						{
							func_492("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_96(15);
						}
					}
				}
				else if (!(func_512() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
				{
					func_492("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_96(15);
				}
				else
				{
					return true;
				}
			}
			else if (iLocal_293 == 0)
			{
				func_492("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_513(9) && !func_513(5))
			{
				return true;
			}
			else if (!(func_512() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_403()))
			{
				func_492("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_106(false);
				func_96(15);
			}
			else
			{
				return true;
			}
		}
		else
		{
			func_492("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_94))
		func_492("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");

	if (ENTITY::IS_ENTITY_DEAD(pedLocal_94, false))
		func_492("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		func_492("prostitute SCRIPT SHOULD EXIT - Player is dead");

	return false;
}

BOOL func_512() // Position - 0x15224
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1424752554) > 0)
		return true;

	return false;
}

BOOL func_513(int iParam0) // Position - 0x1523E
{
	if (Global_44042 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x15260
{
	return func_515(iParam0, Global_44042);
}

BOOL func_515(int iParam0, int iParam1) // Position - 0x15271
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

void func_516() // Position - 0x15452
{
	int i;
	eEventType eventAtIndex;
	struct<3> eventData;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		if (eventAtIndex == EVENT_NETWORK_SCRIPT_EVENT)
		{
			SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 3);
		
			if (eventData == 666659573)
				if (eventData.f_1 == PLAYER::PLAYER_ID())
					func_197(128);
		}
	}

	return;
}

void func_517() // Position - 0x154A6
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		return;

	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != 1)
		if (func_518(1, false, true))
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= 1)
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);

	return;
}

BOOL func_518(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x154E6
{
	return func_519(0, iParam0, true, bParam1, bParam2);
}

BOOL func_519(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x154FA
{
	int num;
	int num2;

	if (!IS_BIT_SET(Global_1681448, 0))
		return 0;

	if (bParam2 && !bParam3 && iParam1 <= func_523(iParam0) - func_522(iParam0, false))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
				num = iParam1 - func_522(iParam0, false);
			else
				num = iParam1;
		
			num2 = func_523(iParam0) - func_521(iParam0);
		}
		else
		{
			if (bParam2)
				num = iParam1 - func_522(iParam0, false);
			else
				num = iParam1;
		
			num2 = func_523(iParam0) - func_522(iParam0, true);
		}
	
		if (!bParam4 && Global_1845281[PLAYER::PLAYER_ID() /*883*/] != 3)
			num2 = num2 - func_520(iParam0);
	
		if (num < num2)
			return 1;
	}

	return 0;
}

int func_520(int iParam0) // Position - 0x155C0
{
	switch (iParam0)
	{
		case 0:
			return 10;
	
		case 1:
			return 10;
	
		case 2:
			return 10;
	}

	return 0;
}

int func_521(int iParam0) // Position - 0x155FA
{
	switch (iParam0)
	{
		case 0:
			return Global_1681448.f_1;
	
		case 1:
			return Global_1681448.f_2;
	
		case 2:
			return Global_1681448.f_3;
	}

	return 0;
}

int func_522(int iParam0, BOOL bParam1) // Position - 0x15640
{
	Player player;

	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
				return Global_2657971[player /*465*/].f_220;
			else
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			break;
	
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
				return Global_2657971[player /*465*/].f_221;
			else
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			break;
	
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
				return Global_2657971[player /*465*/].f_222;
			else
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			break;
	}

	return 0;
}

int func_523(int iParam0) // Position - 0x156DD
{
	switch (iParam0)
	{
		case 0:
			return Global_1681456;
	
		case 1:
			return Global_1681457;
	
		case 2:
			return Global_1681458;
	}

	return 0;
}

BOOL func_524(int iParam0) // Position - 0x1571D
{
	return func_491(iLocal_50, iParam0);
}

void func_525(var uParam0) // Position - 0x1572D
{
	int i;

	if (uParam0->f_271)
	{
		if (MISC::GET_FRAME_COUNT() >= uParam0->f_272 + uParam0->f_273 || IS_BIT_SET(Global_101533.f_20, 2) || IS_BIT_SET(Global_101533.f_20, 13))
		{
			for (i = 0; i < 15; i = i + 1)
			{
				if (IS_BIT_SET(uParam0->[i /*18*/], 30))
				{
					if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
					{
						func_526(&uParam0->[i /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
			}
		}
	}

	return;
}

void func_526(int* piParam0) // Position - 0x157AF
{
	func_527(piParam0, &(piParam0->f_2), piParam0->f_1);
	return;
}

void func_527(int* piParam0, const char* sParam1, Hash hParam2) // Position - 0x157C5
{
	if (IS_BIT_SET(*piParam0, 30))
	{
		switch (func_452(*piParam0))
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

void func_528(int iParam0) // Position - 0x15896
{
	if (func_491(iLocal_50, iParam0))
		func_5(&iLocal_50, iParam0);

	return;
}

void func_529() // Position - 0x158B1
{
	func_2(false);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_94))
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_94, false))
			func_2(true);
		else
			func_492("Prostitue: not continuing, prostitue is dead");
	else
		func_492("Prostitue: not continuing, prostitue doesn't exist");

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_2(false);
		func_492("Prostitue: not continuing, player isn't player or is dead");
	}

	return;
}

int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0x15915
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bNoTerminate)
				func_534();
			else
				return 0;
	
		if (!func_533(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bNoTerminate)
						func_534();
					else
						return 0;
			
				if (func_532())
					if (!bNoTerminate)
						func_534();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bNoTerminate)
						func_534();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bNoTerminate)
					func_534();
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
			if (!bNoTerminate)
				func_534();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bNoTerminate)
			func_534();
		else
			return 0;

	return 1;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x15A2B
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_532() // Position - 0x15A42
{
	return Global_2684504.f_695;
}

BOOL func_533(BOOL bParam0) // Position - 0x15A51
{
	bParam0;
	return Global_1575055;
}

void func_534() // Position - 0x15A62
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_535() // Position - 0x15A6E
{
	func_197(1);
	return;
}

void func_536(var uParam0) // Position - 0x15A7B
{
	func_540();

	if (func_48(false, true))
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);

	if (!PED::IS_PED_INJURED(pedLocal_94))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_94))
		{
			if (func_551() && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_SMART_FLEE_PED) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_0xF10822AA) != 1)
			{
				TASK::TASK_WANDER_STANDARD(pedLocal_94, 1193033728, 0);
			
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
					PED::SET_PED_KEEP_TASK(pedLocal_94, true);
			
				if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(pedLocal_94))
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_94);
			
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedLocal_94);
			}
			else
			{
				if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(pedLocal_94))
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_94);
			
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedLocal_94);
			}
		}
	}

	iLocal_47 = 0;

	if (func_491(iLocal_47, 64))
		Global_33102 = false;

	if (!PED::IS_PED_INJURED(pedLocal_95))
		TASK::CLEAR_PED_TASKS(pedLocal_95);

	pedLocal_95 = 0;
	iLocal_294 = 0;

	if (func_491(iLocal_47, 2048))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);

	func_5(&iLocal_47, 2048);

	if (!func_539())
		func_538();

	if (func_551())
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_83))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_83);

	veLocal_96 = 0;
	func_540();
	func_537();
	Global_33103 = 0f;

	if (!Global_1949771.f_5890 && !Global_1949771.f_5894)
		STREAMING::CLEAR_FOCUS();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_524(256))
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_FEET, iLocal_84, iLocal_85, 0);
			func_197(1024);
		}
	}

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_ACCEPT" /*Press ~INPUT_CONTEXT~ or honk your horn to invite the prostitute into the vehicle.*/) && !Global_33100)
		HUD::CLEAR_HELP(true);

	if (Global_33104 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_33100 = false;
		Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_430 = 0;
	}

	func_447(uParam0, false);

	if (func_551())
		func_197(2048);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	return;
}

void func_537() // Position - 0x15C46
{
	return;
}

void func_538() // Position - 0x15C4E
{
	if (Global_2672855.f_990.f_10)
		Global_2672855.f_990.f_10 = 0;

	return;
}

BOOL func_539() // Position - 0x15C6C
{
	return IS_BIT_SET(Global_1956945, 3);
}

void func_540() // Position - 0x15C7A
{
	return;
}

void func_541(BOOL bParam0) // Position - 0x15C82
{
	if (!PED::IS_PED_INJURED(pedLocal_94))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_94, false))
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_94, SCRIPT_TASK_LEAVE_ANY_VEHICLE) != 1)
				TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_94, 0, 65536);
	
		if (bParam0)
			if (func_551())
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_94))
					if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(pedLocal_94))
						if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(pedLocal_94)))
							PED::SET_PED_KEEP_TASK(pedLocal_94, true);
			else
				PED::SET_PED_KEEP_TASK(pedLocal_94, true);
	}

	return;
}

void func_542() // Position - 0x15CF4
{
	if (!func_551())
		if (iLocal_293 == 11 || iLocal_293 == 13)
			return;

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_94, false))
	{
		if (!PED::IS_PED_FLEEING(pedLocal_94))
		{
			func_96(0);
			iLocal_292 = 1;
		}
	
		if (func_551())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_94))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_94, false);
				PED::RESET_PED_IN_VEHICLE_CONTEXT(pedLocal_94);
			}
		}
		else
		{
			PED::RESET_PED_IN_VEHICLE_CONTEXT(pedLocal_94);
		}
	
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(pedLocal_94, 0);
	}

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_97, false) && !ENTITY::IS_ENTITY_DEAD(veLocal_97, false))
	{
		if (func_551())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_97))
			{
				if (Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_35 <= 0 && !IS_BIT_SET(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 11))
				{
					VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_97, false);
					VEHICLE::SET_VEHICLE_LIGHTS(veLocal_97, 3);
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(veLocal_97, false);
				}
			
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(veLocal_97, true, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_97, false);
			VEHICLE::SET_VEHICLE_LIGHTS(veLocal_97, 3);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(veLocal_97, false);
		}
	}

	func_550(iLocal_74);
	func_550(iLocal_75);
	func_550(iLocal_76);
	func_550(iLocal_77);
	func_550(iLocal_78);
	func_550(iLocal_79);
	func_550(iLocal_80);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	
		if (func_551() && iLocal_295 != 3 && func_491(iLocal_47, 2048))
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
	}

	if (func_491(iLocal_47, 2048))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);

	func_5(&iLocal_47, 2048);
	PAD::ENABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
	PAD::ENABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);

	if (!func_539())
		func_538();

	iLocal_294 = 0;

	if (func_491(iLocal_47, 4))
	{
		func_5(&iLocal_47, 4);
		Global_33100 = false;
		Global_33101 = 0;
		Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_430 = 0;
	}

	if (func_491(iLocal_47, 8))
		if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
			STREAMING::REMOVE_CLIP_SET(func_92());

	func_549();
	func_468();

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_ACCEPT" /*Press ~INPUT_CONTEXT~ or honk your horn to invite the prostitute into the vehicle.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_CAM_TOG" /*Use ~INPUTGROUP_LOOK~ to move the camera.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_RESPONSE" /*Choose response:~n~~INPUT_FRONTEND_X~ Disgust~n~~INPUT_FRONTEND_ACCEPT~ Sarcasm~n~~INPUT_FRONTEND_CANCEL~ Sympathy*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_CAM_OC" /*Use ~INPUTGROUP_LOOK~ to move the camera.~n~*/))
	{
		func_5(&iLocal_47, 1048576);
		HUD::CLEAR_HELP(true);
	}

	func_362(false);
	HUD::DISPLAY_RADAR(true);

	if (func_491(iLocal_47, 8))
		if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
			STREAMING::REMOVE_CLIP_SET(func_92());

	func_131("PROSTITUTES_SOLICIT_SCENE");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_123(false);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	func_543();

	if (func_551())
	{
		if (func_524(2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
					}
				}
			}
			else if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(veLocal_97))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_97))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_97, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(veLocal_97, false);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(veLocal_97, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(veLocal_97);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_97, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(veLocal_97, false);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(veLocal_97, false);
				}
			}
		}
	}

	func_189(23, false);
	iLocal_47 = 0;
	iLocal_49 = 0;
	return;
}

void func_543() // Position - 0x1602A
{
	var unk;
	var unk18;

	if (!func_548())
		return;

	if (!bLocal_45)
		return;

	unk = 2;
	unk18 = 2;
	TEXT_LABEL_ASSIGN_STRING(&unk[0 /*8*/], "GameType", 32);
	TEXT_LABEL_ASSIGN_STRING(&unk[1 /*8*/], "Type", 32);
	TEXT_LABEL_ASSIGN_STRING(&unk18[0 /*6*/], "SP", 24);
	TEXT_LABEL_ASSIGN_STRING(&unk18[1 /*6*/], "????", 24);

	if (_LEADERBOARDS2_TRY_BEGIN_WRITE_DATA(275, &unk18, &unk, 2, -1, false, false))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, func_546(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(117, func_545(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(118, func_544(), 0f);
	}

	return;
}

int func_544() // Position - 0x160AF
{
	return iLocal_44;
}

int func_545() // Position - 0x160B9
{
	return iLocal_43;
}

int func_546() // Position - 0x160C3
{
	return 0;
}

BOOL _LEADERBOARDS2_TRY_BEGIN_WRITE_DATA(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x160CC
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
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2693440.f_3)
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&num, &(Global_1928632.f_10));
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

BOOL func_548() // Position - 0x16200
{
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN() && NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
		return true;

	return false;
}

void func_549() // Position - 0x16226
{
	if (func_491(iLocal_47, 128))
	{
		func_405(39, false);
		func_405(40, false);
		func_405(41, false);
		func_405(42, false);
		func_405(43, false);
		func_405(44, false);
		func_5(&iLocal_47, 128);
	}

	return;
}

void func_550(int iParam0) // Position - 0x1626B
{
	if (func_551())
		if (func_219(iParam0))
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0);

	return;
}

BOOL func_551() // Position - 0x16289
{
	return func_524(1);
}

BOOL func_552(int iParam0) // Position - 0x16296
{
	return Global_44042 == iParam0;
}

BOOL func_553(Player plParam0, BOOL bParam1) // Position - 0x162A4
{
	Ped playerPed;
	int i;
	Player player;
	Vehicle vehiclePedIsIn;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
	{
		playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, bParam1))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
		
			for (i = 0; i < 32; i = i + 1)
			{
				player = PLAYER::INT_TO_PLAYERINDEX(i);
			
				if (_NETWORK_IS_PLAYER_VALID(player, true, true))
					if (PLAYER::GET_PLAYER_PED(player) != playerPed)
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(player), vehiclePedIsIn, bParam1))
							return true;
			}
		}
	}

	return false;
}

BOOL func_554(Player plParam0, BOOL bParam1) // Position - 0x1631A
{
	if (bParam1)
		if (func_462(plParam0))
			return true;

	if (Global_1845281[plParam0 /*883*/] == 2 || Global_1845281[plParam0 /*883*/] == 1 || Global_1845281[plParam0 /*883*/] == 0 || Global_1845281[plParam0 /*883*/] == 3 || Global_1845281[plParam0 /*883*/] == 8)
		return true;

	return false;
}


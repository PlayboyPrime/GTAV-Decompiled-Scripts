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
	Blip blLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	eBlipSprite ebsLocal_44 = BLIP_HIGHER;
	eBlipSprite ebsLocal_45 = BLIP_HIGHER;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	BOOL bLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	BOOL bLocal_61 = 0;
	BOOL bLocal_62 = 0;
	BOOL bLocal_63 = 0;
	BOOL bLocal_64 = 0;
	BOOL bLocal_65 = 0;
	BOOL bLocal_66 = 0;
	BOOL bLocal_67 = 0;
	Cam caLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	eCharacter echLocal_71 = CHAR_MICHAEL;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	const char* sLocal_107 = 0;
	Hash hLocal_108 = 0;
	Object obLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 12;
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
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
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
	var uLocal_702 = 0;
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
	var uLocal_729 = 0;
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
	var uLocal_759 = 0;
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
	var uLocal_786 = 0;
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
	var uLocal_812 = 1065353216;
	int iLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	var uLocal_827 = 40;
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
	var uLocal_843 = 0;
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
	var uLocal_873 = 0;
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
	var uLocal_900 = 0;
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
	var uLocal_930 = 0;
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
	int iLocal_948 = 0;
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
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
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	int iLocal_990 = 0;
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
	ebsLocal_44 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	ebsLocal_45 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_69 = 1076369579;
	iLocal_70 = 1076631591;
	fLocal_73 = 0.22f;
	fLocal_74 = 50f;
	fLocal_75 = -4f;
	fLocal_76 = 4f;
	fLocal_77 = -89f;
	fLocal_78 = 89f;
	fLocal_79 = 4f;
	fLocal_82 = 0f;
	fLocal_84 = 0.4f;
	fLocal_85 = 0.6f;
	fLocal_86 = 0.201f;
	fLocal_87 = 0.351f;
	iLocal_90 = -1;
	iLocal_105 = -1;
	iLocal_106 = -1;
	sLocal_107 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X, true);
	hLocal_108 = joaat("prop_taxi_meter_2");
	iLocal_110 = 3;
	iLocal_824 = -1;
	iLocal_825 = 263;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_952, "oddjobs@taxi@driver", 32);
	uLocal_963 = { 0f, 0f, 0f };
	uLocal_966 = { 0f, 0f, 0f };
	uLocal_978 = { 0f, -0.25f, 0.55f };
	uLocal_981 = { -0.3f, 1f, 0.35f };
	uLocal_984 = { -0.01f, 0.6f, 0.24f };
	uLocal_987 = { -5f, 0f, 0f };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 64)
			func_238(false);
		else
			func_238(true);
	
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (!func_231())
		func_238(true);

	while (true)
	{
		if (!func_230())
			func_238(true);
	
		if (func_229(iLocal_950))
			func_238(true);
	
		switch (iLocal_950)
		{
			case 1:
				func_64();
				break;
		
			case 2:
				func_1();
				break;
		
			case 3:
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x1D4 (468)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_113182)
		{
			Global_113182 = false;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			}
		
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
		
			if (iLocal_949 == 2 || iLocal_949 == 3 || iLocal_949 == 4)
				func_7();
		}
	}

	func_5();

	if (func_3(Global_113166) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113166, true))
	{
		if (!func_2(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE) && !func_2(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_VEHICLE))
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
	else
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!PED::IS_PED_INJURED(Global_113167) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_113167, Global_113166, false))
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Global_113167, Global_113166, PLAYER::PLAYER_PED_ID(), 8, 25f, 790564, 300f, 15f, true);
				else if (!PED::IS_PED_FLEEING(Global_113167))
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						TASK::TASK_SMART_FLEE_PED(Global_113167, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			
				PED::SET_PED_KEEP_TASK(Global_113167, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113167, false);
			}
		}
		else if (!PED::IS_PED_INJURED(Global_113167) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
		{
			if (PED::IS_PED_IN_VEHICLE(Global_113167, Global_113166, false))
				if (!func_2(Global_113167, SCRIPT_TASK_VEHICLE_DRIVE_WANDER))
					TASK::TASK_VEHICLE_DRIVE_WANDER(Global_113167, Global_113166, 12f, 790699);
		
			PED::SET_PED_KEEP_TASK(Global_113167, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113167, false);
		}
	
		func_238(true);
	}

	return;
}

BOOL func_2(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x3A2 (930)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			if (!PED::IS_PED_INJURED(pedParam0))
				if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
					return true;

	return false;
}

BOOL func_3(Vehicle veParam0) // Position - 0x3EA (1002)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x414 (1044)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

void func_5() // Position - 0x435 (1077)
{
	int sizeInMembers;
	var unk;
	Ped pedAsGroupMember;

	if (PED::DOES_GROUP_EXIST(func_6()))
	{
		PED::GET_GROUP_SIZE(func_6(), &unk, &sizeInMembers);
	
		if (sizeInMembers > 0)
		{
			pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 0);
		
			if (!PED::IS_PED_INJURED(pedAsGroupMember))
			{
				TASK::CLEAR_PED_TASKS(pedAsGroupMember);
			
				if (!ENTITY::IS_ENTITY_DEAD(Global_113166, false))
					if (PED::IS_PED_IN_VEHICLE(pedAsGroupMember, Global_113166, false))
						TASK::TASK_LEAVE_VEHICLE(pedAsGroupMember, Global_113166, 64);
			}
		
			if (sizeInMembers > 1)
			{
				pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 1);
			
				if (!PED::IS_PED_INJURED(pedAsGroupMember))
				{
					TASK::CLEAR_PED_TASKS(pedAsGroupMember);
				
					if (!ENTITY::IS_ENTITY_DEAD(Global_113166, false))
						if (PED::IS_PED_IN_VEHICLE(pedAsGroupMember, Global_113166, false))
							TASK::TASK_LEAVE_VEHICLE(pedAsGroupMember, Global_113166, 64);
				}
			}
		}
	}

	return;
}

int func_6() // Position - 0x4E4 (1252)
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_7() // Position - 0x4F4 (1268)
{
	BOOL flag;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
	{
		if (!PED::IS_PED_INJURED(Global_113167))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113167, Global_113166))
			{
				if (!func_62())
				{
					flag = true;
				
					if (_GET_PLAYER_CASH(_GET_CURRENT_PLAYER_CHARACTER()) >= iLocal_101)
					{
						if (bLocal_65)
						{
							if (iLocal_101 > 0)
							{
								if (fLocal_72 > 75f)
									iLocal_826 = 6;
								else
									iLocal_826 = 5;
							
								func_45(Global_113167, &iLocal_826);
								func_9(_GET_CURRENT_PLAYER_CHARACTER(), 21, iLocal_101);
								flag = false;
							}
						}
						else if (bLocal_66 || iLocal_949 == 3)
						{
							if (iLocal_101 > 0)
							{
								iLocal_826 = 13;
								func_45(Global_113167, &iLocal_826);
								func_9(_GET_CURRENT_PLAYER_CHARACTER(), 21, iLocal_101);
								flag = false;
							}
						}
						else if (ENTITY::GET_ENTITY_SPEED(Global_113166) > 5f)
						{
							if (!func_8())
							{
								iLocal_826 = 12;
								func_45(Global_113167, &iLocal_826);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							}
						}
						else
						{
							iLocal_826 = 13;
							func_45(Global_113167, &iLocal_826);
						
							if (iLocal_101 > 0)
								func_9(_GET_CURRENT_PLAYER_CHARACTER(), 21, iLocal_101);
						
							flag = false;
						}
					}
				
					if (flag)
					{
						if (iLocal_101 > 0)
						{
							iLocal_826 = 7;
							func_45(Global_113167, &iLocal_826);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_8() // Position - 0x644 (1604)
{
	if (Global_101688 == 13 || Global_101688 == 10 || Global_101688 == 11 || Global_101688 == 12)
		return false;

	return true;
}

int func_9(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x682 (1666)
{
	if (func_44(echParam0) == 3)
		return 0;

	if (func_44(echParam0) == 4)
		return 0;

	return func_10(func_44(echParam0), 0, iParam1, iParam2, false);
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x6B6 (1718)
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_43();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_42(99, 1);
					func_41(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_41(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_41(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_25(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_22(5))
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
							func_41(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_41(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_41(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_22(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_41(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_41(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_41(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_41(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_41(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_41(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_41(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_41(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_41(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_41(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_41(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_41(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_22(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_41(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_41(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_41(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_41(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_21(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_42(95, iParam3);
					break;
			
				case 1:
					func_42(97, iParam3);
					break;
			
				case 2:
					func_42(96, iParam3);
					break;
			}
		
			func_42(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_13(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_13(num2);
	}

	num6 = Global_61482[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_61482[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_61482[num3] = 2147483647;
				else
					Global_61482[num3] = Global_61482[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_41(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_41(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_41(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_61482[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_61482[num3];
			Global_61482[num3] = Global_61482[num3] - iParam3;
		
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
		Global_114135.f_20568.f_233[num3 /*69*/].f_2[Global_114135.f_20568.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_114135.f_20568.f_233[num3 /*69*/].f_2[Global_114135.f_20568.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114135.f_20568.f_233[num3 /*69*/].f_2[Global_114135.f_20568.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114135.f_20568.f_233[num3 /*69*/] = Global_114135.f_20568.f_233[num3 /*69*/] + 1;
		Global_114135.f_20568.f_233[num3 /*69*/].f_1 = Global_114135.f_20568.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_114135.f_20568.f_233[num3 /*69*/].f_1 > 10)
			Global_114135.f_20568.f_233[num3 /*69*/].f_1 = 0;
	}

	func_12(iParam0);

	if (Global_44181 == 15)
		func_11(false);

	return 1;
}

void func_11(BOOL bParam0) // Position - 0xCB5 (3253)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_114135.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_114135.f_20568.f_233[i /*69*/].f_2[j /*6*/];
			Global_114135.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_114135.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_114135.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_114135.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_61490[i /*3*/][0] = Global_114135.f_20568[i];
		Global_61490.f_31[i /*3*/][0] = Global_114135.f_20568.f_11[i];
		Global_61490.f_62[i /*3*/][0] = Global_114135.f_20568.f_22[i];
		Global_61490.f_93[i /*3*/][0] = Global_114135.f_20568.f_33[i];
		Global_61490.f_124[i /*3*/][0] = Global_114135.f_20568.f_44[i];
		Global_61490.f_155[i /*3*/][0] = Global_114135.f_20568.f_55[i];
		Global_61490.f_186[i /*3*/][0] = Global_114135.f_20568.f_66[i];
		Global_61490.f_217[i /*3*/][0] = Global_114135.f_20568.f_77[i];
		Global_61490.f_248[i /*3*/][0] = Global_114135.f_20568.f_88[i];
	
		if (!bParam0)
		{
			Global_61490[i /*3*/][1] = Global_114135.f_20568[i];
			Global_61490.f_31[i /*3*/][1] = Global_114135.f_20568.f_11[i];
			Global_61490.f_62[i /*3*/][1] = Global_114135.f_20568.f_22[i];
			Global_61490.f_93[i /*3*/][1] = Global_114135.f_20568.f_33[i];
			Global_61490.f_124[i /*3*/][1] = Global_114135.f_20568.f_44[i];
			Global_61490.f_155[i /*3*/][1] = Global_114135.f_20568.f_55[i];
			Global_61490.f_186[i /*3*/][1] = Global_114135.f_20568.f_66[i];
			Global_61490.f_217[i /*3*/][1] = Global_114135.f_20568.f_77[i];
			Global_61490.f_248[i /*3*/][1] = Global_114135.f_20568.f_88[i];
		}
	}

	return;
}

void func_12(int iParam0) // Position - 0xF37 (3895)
{
	int value;

	value = Global_61482[iParam0];

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

void func_13(int iParam0) // Position - 0xF91 (3985)
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
		func_16(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_16(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_16(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_16(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_16(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_16(8277, 0, -1, true);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_114135.f_20568.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_114135.f_20568.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_114135.f_20568.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_15() /*5571*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_114135.f_20568.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_15() /*5571*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*You have redeemed your promotion for ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_14(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_14(int iParam0) // Position - 0x1108 (4360)
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

int func_15() // Position - 0x11FC (4604)
{
	int num;

	num = 0;
	return num;
}

void func_16(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1209 (4617)
{
	Hash statName;

	if (iParam0 != 15468)
	{
		statName = func_17(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_17(int iParam0, int iParam1) // Position - 0x1237 (4663)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_18(iParam1));
}

int func_18(int iParam0) // Position - 0x124C (4684)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_19();
	
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

int func_19() // Position - 0x1280 (4736)
{
	return Global_1574926;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x128C (4748)
{
	if (iParam2 == -1)
		iParam2 = func_19();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_21(int iParam0) // Position - 0x12AA (4778)
{
	func_42(93, iParam0);
	func_42(29, iParam0);
	func_42(30, iParam0);
	return;
}

BOOL func_22(int iParam0) // Position - 0x12CA (4810)
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
		num = func_23(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_23(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_23(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_23(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_23(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_23(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_114135.f_20568.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_15() /*5571*/].f_681.f_10, iParam0);
}

int func_23(int iParam0, int iParam1) // Position - 0x146A (5226)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15468)
	{
		statHash = func_17(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x1499 (5273)
{
	if (iParam1 == -1)
		iParam1 = func_19();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_25(BOOL bParam0) // Position - 0x14B5 (5301)
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
		func_40(27, value);
	}

	if (value < 200000000)
		return 0;

	func_26(27, 1);
	return 1;
}

int func_26(int iParam0, int iParam1) // Position - 0x156C (5484)
{
	if (iParam0 >= 78)
		return 0;

	return func_27(iParam0, iParam1);
}

int func_27(int iParam0, int iParam1) // Position - 0x1587 (5511)
{
	if (func_39(14) && !func_38(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_33338 != 0 && !Global_79539)
		return 0;

	if (func_37(&Global_4546323))
	{
		if (func_35(&Global_4546323, iParam0))
			return 0;
	
		if (func_28(&Global_4546323, iParam0))
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

BOOL func_28(var uParam0, int iParam1) // Position - 0x1624 (5668)
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_39(14) && !func_38(iParam1))
		return false;

	if (func_35(uParam0, iParam1))
		return false;

	if (func_34(uParam0) < 0f)
		func_33(uParam0, 0);

	func_31(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_29(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_29(var uParam0, int iParam1) // Position - 0x16D5 (5845)
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_39(14) && !func_38(iParam1))
		return 0;

	if (func_35(uParam0, iParam1))
		return 0;

	if (func_34(uParam0) < 0f)
		func_33(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_30(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_30(var uParam0, int iParam1) // Position - 0x1750 (5968)
{
	return uParam0->[iParam1] == 78;
}

void func_31(var uParam0) // Position - 0x1761 (5985)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_32(uParam0, i);
	}

	func_33(uParam0, Global_4546322 - 0.5f);
	return;
}

void func_32(var uParam0, int iParam1) // Position - 0x1795 (6037)
{
	uParam0->[iParam1] = 78;
	return;
}

void func_33(var uParam0, int iParam1) // Position - 0x17A5 (6053)
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_34(var uParam0) // Position - 0x17C2 (6082)
{
	return uParam0->f_80;
}

BOOL func_35(var uParam0, int iParam1) // Position - 0x17CE (6094)
{
	return func_36(uParam0, iParam1) != -1;
}

int func_36(var uParam0, int iParam1) // Position - 0x17E0 (6112)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_37(var uParam0) // Position - 0x180D (6157)
{
	return uParam0->f_79 == 1;
}

BOOL func_38(int iParam0) // Position - 0x181B (6171)
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

BOOL func_39(int iParam0) // Position - 0x186B (6251)
{
	return Global_44181 == iParam0;
}

BOOL func_40(int iParam0, int iParam1) // Position - 0x1879 (6265)
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

void func_41(Hash hParam0, int iParam1) // Position - 0x18CA (6346)
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_42(int iParam0, int iParam1) // Position - 0x18ED (6381)
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_60050[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60050[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60050[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_60050[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_43() // Position - 0x194A (6474)
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61482[0] == outValue))
			Global_61482[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61482[1] == outValue))
			Global_61482[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61482[2] == outValue))
			Global_61482[2] = outValue;
	}

	return;
}

int func_44(eCharacter echParam0) // Position - 0x19BF (6591)
{
	return Global_2201[echParam0 /*29*/].f_17;
}

void func_45(Ped pedParam0, var uParam1) // Position - 0x19D0 (6608)
{
	BOOL isAmbientSpeechDisabled;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (!func_51(pedParam0, false))
		{
			if (!(*uParam1 == 0))
			{
				if (*uParam1 == 1)
				{
					func_49(pedParam0, "TAXID_WHERE_TO", 7);
					*uParam1 = 22;
				}
				else if (*uParam1 == 2)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_46();
						*uParam1 = 3;
					}
				}
				else if (*uParam1 == 3)
				{
					func_49(pedParam0, "TAXID_BEGIN_JOURNEY", 7);
					*uParam1 = 22;
				}
				else if (*uParam1 == 4)
				{
					func_49(pedParam0, "TAXID_BANTER", 24);
					*uParam1 = 22;
				}
				else if (*uParam1 == 5)
				{
					func_49(pedParam0, "TAXID_ARRIVE_AT_DEST", 7);
					*uParam1 = 23;
				}
				else if (*uParam1 == 6)
				{
					func_49(pedParam0, "TAXID_CLOSE_AS_POSS", 7);
					*uParam1 = 22;
				}
				else if (*uParam1 == 7)
				{
					func_49(pedParam0, "TAXID_NO_MONEY", 7);
					*uParam1 = 22;
				}
				else if (*uParam1 == 9)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						isAmbientSpeechDisabled = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
					
						if (isAmbientSpeechDisabled)
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
					
						func_49(PLAYER::PLAYER_PED_ID(), "TAXI_CHANGE_DEST", 7);
					
						if (isAmbientSpeechDisabled)
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
					
						*uParam1 = 10;
					}
				}
				else if (*uParam1 == 10)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_46();
						*uParam1 = 11;
					}
				}
				else if (*uParam1 == 11)
				{
					func_49(pedParam0, "TAXID_CHANGE_DEST", 7);
					*uParam1 = 22;
				}
				else if (*uParam1 == 12)
				{
					func_49(pedParam0, "TAXID_RUN_AWAY", 7);
					*uParam1 = 22;
				}
				else if (*uParam1 == 13)
				{
					func_49(pedParam0, "TAXID_GET_OUT_EARLY", 7);
					*uParam1 = 22;
				}
				else if (*uParam1 == 14)
				{
					func_49(pedParam0, "TAXID_TRASHED", 7);
					*uParam1 = 22;
				}
				else if (*uParam1 == 15)
				{
					if (!Global_113187)
					{
						func_49(pedParam0, "TAXID_AFFORD_PART_JOURNEY", 7);
						Global_113187 = true;
					}
				
					*uParam1 = 22;
				}
				else if (*uParam1 == 16)
				{
					func_49(pedParam0, "TAXID_TAKE_FIRST_CAB", 7);
					*uParam1 = 22;
				}
				else if (*uParam1 == 17)
				{
					*uParam1 = 18;
				}
				else if (*uParam1 == 18)
				{
					if (AUDIO::IS_RADIO_RETUNING())
					{
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 4000)
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							isAmbientSpeechDisabled = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						
							if (isAmbientSpeechDisabled)
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
						
							switch (AUDIO::GET_PLAYER_RADIO_STATION_INDEX())
							{
								case 0:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_VIBE", 7);
									break;
							
								case 1:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_LRR", 7);
									break;
							
								case 2:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_JNR", 7);
									break;
							
								case 3:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_MASSIVEB", 7);
									break;
							
								case 4:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_K109", 7);
									break;
							
								case 5:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_WKTT", 7);
									break;
							
								case 6:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_LCHC", 7);
									break;
							
								case 7:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_JOURNEY", 7);
									break;
							
								case 8:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_FUSION", 7);
									break;
							
								case 9:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_BEAT", 7);
									break;
							
								case 10:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_BROKER", 7);
									break;
							
								case 11:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_VLADIVOSTOK", 7);
									break;
							
								case 12:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_PLR", 7);
									break;
							
								case 13:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_SANJUAN", 7);
									break;
							
								case 14:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_FRANCOIS", 7);
									break;
							
								case 15:
									func_49(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_CLASSICS", 7);
									break;
							}
						
							if (isAmbientSpeechDisabled)
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
						}
					
						*uParam1 = 22;
					}
				}
				else if (*uParam1 == 19)
				{
					*uParam1 = 22;
				}
				else if (*uParam1 == 20)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						isAmbientSpeechDisabled = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
					
						if (isAmbientSpeechDisabled)
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
					
						func_49(PLAYER::PLAYER_PED_ID(), "TAXI_STEP_ON_IT", 7);
					
						if (isAmbientSpeechDisabled)
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
					
						*uParam1 = 21;
					}
				}
				else if (*uParam1 == 21)
				{
					func_49(pedParam0, "TAXID_SPEED_UP", 7);
					*uParam1 = 22;
				}
				else if (*uParam1 == 23)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						isAmbientSpeechDisabled = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
					
						if (isAmbientSpeechDisabled)
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
					
						func_49(PLAYER::PLAYER_PED_ID(), "THANKS", 7);
					
						if (isAmbientSpeechDisabled)
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
					
						*uParam1 = 22;
					}
				}
				else if (*uParam1 == 22)
				{
					if (!func_51(pedParam0, false))
						*uParam1 = 0;
				}
			}
		}
	}

	return;
}

void func_46() // Position - 0x1E7D (7805)
{
	char* str;
	BOOL isAmbientSpeechDisabled;

	str = func_47();

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		isAmbientSpeechDisabled = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
	
		if (isAmbientSpeechDisabled)
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
	
		func_49(PLAYER::PLAYER_PED_ID(), str, 7);
	
		if (isAmbientSpeechDisabled)
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
	}

	return;
}

char* func_47() // Position - 0x1EC9 (7881)
{
	var string2;

	TEXT_LABEL_ASSIGN_STRING(&string2, ZONE::GET_NAME_OF_ZONE(func_48(blLocal_41)), 32);

	if (MISC::ARE_STRINGS_EQUAL("SanAnd" /*San Andreas*/, &string2))
		return "LOCATION_SAN_ANDREAS";
	else if (MISC::ARE_STRINGS_EQUAL("Alamo" /*Alamo Sea*/, &string2))
		return "LOCATION_ALAMO_SEA";
	else if (MISC::ARE_STRINGS_EQUAL("Alta" /*Alta*/, &string2))
		return "LOCATION_ALTA";
	else if (MISC::ARE_STRINGS_EQUAL("Airp" /*Los Santos International Airport*/, &string2))
		return "LOCATION_LOS_SANTOS_INTERNATIONAL_AIRPORT";
	else if (MISC::ARE_STRINGS_EQUAL("ArmyB" /*Fort Zancudo*/, &string2))
		return "LOCATION_FORT_ZANCUDO";
	else if (MISC::ARE_STRINGS_EQUAL("BhamCa" /*Banham Canyon*/, &string2))
		return "LOCATION_BANHAM_CANYON";
	else if (MISC::ARE_STRINGS_EQUAL("Banning" /*Banning*/, &string2))
		return "LOCATION_BANNING";
	else if (MISC::ARE_STRINGS_EQUAL("Baytre" /*Baytree Canyon*/, &string2))
		return "LOCATION_BAYTREE_CANYON";
	else if (MISC::ARE_STRINGS_EQUAL("Beach" /*Vespucci Beach*/, &string2))
		return "LOCATION_VESPUCCI_BEACH";
	else if (MISC::ARE_STRINGS_EQUAL("BradT" /*Braddock Tunnel*/, &string2))
		return "LOCATION_BRADDOCK_TUNNEL";
	else if (MISC::ARE_STRINGS_EQUAL("BradP" /*Braddock Pass*/, &string2))
		return "LOCATION_BRADDOCK_PASS";
	else if (MISC::ARE_STRINGS_EQUAL("Burton" /*Burton*/, &string2))
		return "LOCATION_BURTON";
	else if (MISC::ARE_STRINGS_EQUAL("CANNY" /*Raton Canyon*/, &string2))
		return "LOCATION_RATON_CANYON";
	else if (MISC::ARE_STRINGS_EQUAL("CCreak" /*Cassidy Creek*/, &string2))
		return "LOCATION_CASSIDY_CREEK";
	else if (MISC::ARE_STRINGS_EQUAL("CalafB" /*Calafia Bridge*/, &string2))
		return "LOCATION_CALAFIA_BRIDGE";
	else if (MISC::ARE_STRINGS_EQUAL("ChamH" /*Chamberlain Hills*/, &string2))
		return "LOCATION_CHAMBERLAIN_HILLS";
	else if (MISC::ARE_STRINGS_EQUAL("CHU" /*Chumash*/, &string2))
		return "LOCATION_CHUMASH";
	else if (MISC::ARE_STRINGS_EQUAL("CHIL" /*Vinewood Hills*/, &string2))
		return "LOCATION_VINEWOOD_HILLS";
	else if (MISC::ARE_STRINGS_EQUAL("COSI" /*Countryside*/, &string2))
		return "LOCATION_COUNTRYSIDE";
	else if (MISC::ARE_STRINGS_EQUAL("CMSW" /*Chiliad Mountain State Wilderness*/, &string2))
		return "LOCATION_CHILIAD_MOUNTAIN_STATE_WILDERNESS";
	else if (MISC::ARE_STRINGS_EQUAL("Cypre" /*Cypress Flats*/, &string2))
		return "LOCATION_CYPRESS_FLATS";
	else if (MISC::ARE_STRINGS_EQUAL("Davis" /*Davis*/, &string2))
		return "LOCATION_DAVIS";
	else if (MISC::ARE_STRINGS_EQUAL("Desrt" /*Grand Senora Desert*/, &string2))
		return "LOCATION_GRAND_SENORA_DESERT";
	else if (MISC::ARE_STRINGS_EQUAL("DelBe" /*Del Perro Beach*/, &string2))
		return "LOCATION_DEL_PERRO_BEACH";
	else if (MISC::ARE_STRINGS_EQUAL("DelPe" /*Del Perro*/, &string2))
		return "LOCATION_DEL_PERRO";
	else if (MISC::ARE_STRINGS_EQUAL("DelSol" /*La Puerta*/, &string2))
		return "LOCATION_LA_PUERTA";
	else if (MISC::ARE_STRINGS_EQUAL("Downt" /*Downtown*/, &string2))
		return "LOCATION_DOWNTOWN";
	else if (MISC::ARE_STRINGS_EQUAL("DTVine" /*Downtown Vinewood*/, &string2))
		return "LOCATION_DOWNTOWN_VINEWOOD";
	else if (MISC::ARE_STRINGS_EQUAL("Eclips" /*Eclipse*/, &string2))
		return "LOCATION_ECLIPSE";
	else if (MISC::ARE_STRINGS_EQUAL("ELSant" /*East Los Santos*/, &string2))
		return "LOCATION_EAST_LOS_SANTOS";
	else if (MISC::ARE_STRINGS_EQUAL("EBuro" /*El Burro Heights*/, &string2))
		return "LOCATION_EL_BURRO_HEIGHTS";
	else if (MISC::ARE_STRINGS_EQUAL("ELGorl" /*El Gordo Lighthouse*/, &string2))
		return "LOCATION_EL_GORDO_LIGHTHOUSE";
	else if (MISC::ARE_STRINGS_EQUAL("Elysian" /*Elysian Island*/, &string2))
		return "LOCATION_ELYSIAN_ISLAND";
	else if (MISC::ARE_STRINGS_EQUAL("Galli" /*Galileo Park*/, &string2))
		return "LOCATION_GALILEO_PARK";
	else if (MISC::ARE_STRINGS_EQUAL("Galfish" /*Galilee*/, &string2))
		return "LOCATION_GALILEE";
	else if (MISC::ARE_STRINGS_EQUAL("Greatc" /*Great Chaparral*/, &string2))
		return "LOCATION_GREAT_CHAPARRAL";
	else if (MISC::ARE_STRINGS_EQUAL("Golf" /*GWC and Golfing Society*/, &string2))
		return "LOCATION_GWC_AND_GOLFING_SOCIETY";
	else if (MISC::ARE_STRINGS_EQUAL("GrapeS" /*Grapeseed*/, &string2))
		return "LOCATION_GRAPESEED";
	else if (MISC::ARE_STRINGS_EQUAL("Hawick" /*Hawick*/, &string2))
		return "LOCATION_HAWICK";
	else if (MISC::ARE_STRINGS_EQUAL("Harmo" /*Harmony*/, &string2))
		return "LOCATION_HARMONY";
	else if (MISC::ARE_STRINGS_EQUAL("Heart" /*Heart Attacks Beach*/, &string2))
		return "LOCATION_HEART_ATTACKS_BEACH";
	else if (MISC::ARE_STRINGS_EQUAL("HumLab" /*Humane Labs and Research*/, &string2))
		return "LOCATION_HUMANE_LABS_AND_RESEARCH";
	else if (MISC::ARE_STRINGS_EQUAL("HORS" /*Vinewood Racetrack*/, &string2))
		return "LOCATION_VINEWOOD_RACETRACK";
	else if (MISC::ARE_STRINGS_EQUAL("Koreat" /*Little Seoul*/, &string2))
		return "LOCATION_LITTLE_SEOUL";
	else if (MISC::ARE_STRINGS_EQUAL("Jail" /*Bolingbroke Penitentiary*/, &string2))
		return "LOCATION_BOLINGBROKE_PENITENTIARY";
	else if (MISC::ARE_STRINGS_EQUAL("LAct" /*Land Act Reservoir*/, &string2))
		return "LOCATION_LAND_ACT_RESERVOIR";
	else if (MISC::ARE_STRINGS_EQUAL("LDam" /*Land Act Dam*/, &string2))
		return "LOCATION_LAND_ACT_DAM";
	else if (MISC::ARE_STRINGS_EQUAL("Lago" /*Lago Zancudo*/, &string2))
		return "LOCATION_LAGO_ZANCUDO";
	else if (MISC::ARE_STRINGS_EQUAL("LegSqu" /*Legion Square*/, &string2))
		return "LOCATION_LEGION_SQUARE";
	else if (MISC::ARE_STRINGS_EQUAL("LosSF" /*Los Santos Freeway*/, &string2))
		return "LOCATION_LOS_SANTOS_FREEWAY";
	else if (MISC::ARE_STRINGS_EQUAL("LMesa" /*La Mesa*/, &string2))
		return "LOCATION_LA_MESA";
	else if (MISC::ARE_STRINGS_EQUAL("LosPuer" /*La Puerta*/, &string2))
		return "LOCATION_LA_PUERTA";
	else if (MISC::ARE_STRINGS_EQUAL("LosPFy" /*La Puerta Fwy*/, &string2))
		return "LOCATION_LA_PUERTA_FWY";
	else if (MISC::ARE_STRINGS_EQUAL("Mirr" /*Mirror Park*/, &string2))
		return "LOCATION_MIRROR_PARK";
	else if (MISC::ARE_STRINGS_EQUAL("Morn" /*Morningwood*/, &string2))
		return "LOCATION_MORNINGWOOD";
	else if (MISC::ARE_STRINGS_EQUAL("Murri" /*Murrieta Heights*/, &string2))
		return "LOCATION_MURRIETA_HEIGHTS";
	else if (MISC::ARE_STRINGS_EQUAL("MTChil" /*Mount Chiliad*/, &string2))
		return "LOCATION_MOUNT_CHILIAD";
	else if (MISC::ARE_STRINGS_EQUAL("MTJose" /*Mount Josiah*/, &string2))
		return "LOCATION_MOUNT_JOSIAH";
	else if (MISC::ARE_STRINGS_EQUAL("MTGordo" /*Mount Gordo*/, &string2))
		return "LOCATION_MOUNT_GORDO";
	else if (MISC::ARE_STRINGS_EQUAL("Movie" /*Richards Majestic*/, &string2))
		return "LOCATION_RICHARDS_MAJESTIC";
	else if (MISC::ARE_STRINGS_EQUAL("NCHU" /*North Chumash*/, &string2))
		return "LOCATION_NORTH_CHUMASH";
	else if (MISC::ARE_STRINGS_EQUAL("Oceana" /*Pacific Ocean*/, &string2))
		return "LOCATION_PACIFIC_OCEAN";
	else if (MISC::ARE_STRINGS_EQUAL("Observ" /*Galileo Observatory*/, &string2))
		return "LOCATION_GALILEO_OBSERVATORY";
	else if (MISC::ARE_STRINGS_EQUAL("Palmpow" /*Palmer-Taylor Power Station*/, &string2))
		return "LOCATION_PALMER-TAYLOR_POWER_STATION";
	else if (MISC::ARE_STRINGS_EQUAL("PBOX" /*Pillbox Hill*/, &string2))
		return "LOCATION_PILLBOX_HILL";
	else if (MISC::ARE_STRINGS_EQUAL("PBluff" /*Pacific Bluffs*/, &string2))
		return "LOCATION_PACIFIC_BLUFFS";
	else if (MISC::ARE_STRINGS_EQUAL("Paleto" /*Paleto Bay*/, &string2))
		return "LOCATION_PALETO_BAY";
	else if (MISC::ARE_STRINGS_EQUAL("PalCov" /*Paleto Cove*/, &string2))
		return "LOCATION_PALETO_COVE";
	else if (MISC::ARE_STRINGS_EQUAL("PalFor" /*Paleto Forest*/, &string2))
		return "LOCATION_PALETO_FOREST";
	else if (MISC::ARE_STRINGS_EQUAL("PalHigh" /*Palomino Highlands*/, &string2))
		return "LOCATION_PALOMINO_HIGHLANDS";
	else if (MISC::ARE_STRINGS_EQUAL("ProcoB" /*Procopio Beach*/, &string2))
		return "LOCATION_PROCOPIO_BEACH";
	else if (MISC::ARE_STRINGS_EQUAL("Prol" /*North Yankton*/, &string2))
		return "LOCATION_NORTH_YANKTON";
	else if (MISC::ARE_STRINGS_EQUAL("RTRAK" /*Redwood Lights Track*/, &string2))
		return "LOCATION_REDWOOD_LIGHTS_TRACK";
	else if (MISC::ARE_STRINGS_EQUAL("Rancho" /*Rancho*/, &string2))
		return "LOCATION_RANCHO";
	else if (MISC::ARE_STRINGS_EQUAL("RGLEN" /*Richman Glen*/, &string2))
		return "LOCATION_RICHMAN_GLEN";
	else if (MISC::ARE_STRINGS_EQUAL("Richm" /*Richman*/, &string2))
		return "LOCATION_RICHMAN";
	else if (MISC::ARE_STRINGS_EQUAL("Rockf" /*Rockford Hills*/, &string2))
		return "LOCATION_ROCKFORD_HILLS";
	else if (MISC::ARE_STRINGS_EQUAL("SANDY" /*Sandy Shores*/, &string2))
		return "LOCATION_SANDY_SHORES";
	else if (MISC::ARE_STRINGS_EQUAL("TongvaH" /*Tongva Hills*/, &string2))
		return "LOCATION_TONGVA_HILLS";
	else if (MISC::ARE_STRINGS_EQUAL("TongvaV" /*Tongva Valley*/, &string2))
		return "LOCATION_TONGVA_VALLEY";
	else if (MISC::ARE_STRINGS_EQUAL("East_V" /*East Vinewood*/, &string2))
		return "LOCATION_EAST_VINEWOOD";
	else if (MISC::ARE_STRINGS_EQUAL("Zenora" /*Senora Freeway*/, &string2))
		return "LOCATION_SENORA_FREEWAY";
	else if (MISC::ARE_STRINGS_EQUAL("Slab" /*Stab City*/, &string2))
		return "LOCATION_SLAB_CITY";
	else if (MISC::ARE_STRINGS_EQUAL("SKID" /*Mission Row*/, &string2))
		return "LOCATION_MISSION_ROW";
	else if (MISC::ARE_STRINGS_EQUAL("SLSant" /*South Los Santos*/, &string2))
		return "LOCATION_SOUTH_LOS_SANTOS";
	else if (MISC::ARE_STRINGS_EQUAL("Stad" /*Maze Bank Arena*/, &string2))
		return "LOCATION_MAZE_BANK_ARENA";
	else if (MISC::ARE_STRINGS_EQUAL("Tatamo" /*Tataviam Mountains*/, &string2))
		return "LOCATION_TATAVIAM_MOUNTAINS";
	else if (MISC::ARE_STRINGS_EQUAL("Termina" /*Terminal*/, &string2))
		return "LOCATION_TERMINAL";
	else if (MISC::ARE_STRINGS_EQUAL("TEXTI" /*Textile City*/, &string2))
		return "LOCATION_TEXTILE_CITY";
	else if (MISC::ARE_STRINGS_EQUAL("WVine" /*West Vinewood*/, &string2))
		return "LOCATION_WEST_VINEWOOD";
	else if (MISC::ARE_STRINGS_EQUAL("UtopiaG" /*Utopia Gardens*/, &string2))
		return "LOCATION_UTOPIA_GARDENS";
	else if (MISC::ARE_STRINGS_EQUAL("Vesp" /*Vespucci*/, &string2))
		return "LOCATION_VESPUCCI";
	else if (MISC::ARE_STRINGS_EQUAL("VCana" /*Vespucci Canals*/, &string2))
		return "LOCATION_VESPUCCI_CANALS";
	else if (MISC::ARE_STRINGS_EQUAL("Vine" /*Vinewood*/, &string2))
		return "LOCATION_VINEWOOD";
	else if (MISC::ARE_STRINGS_EQUAL("WMirror" /*West Mirror Drive*/, &string2))
		return "LOCATION_W_MIRROR_DRIVE";
	else if (MISC::ARE_STRINGS_EQUAL("WindF" /*Ron Alternates Wind Farm*/, &string2))
		return "LOCATION_RON_ALTERNATES_WIND_WARM";
	else if (MISC::ARE_STRINGS_EQUAL("Zancudo" /*Zancudo River*/, &string2))
		return "LOCATION_ZANCUDO_RIVER";
	else if (MISC::ARE_STRINGS_EQUAL("SanChia" /*San Chianski Mountain Range*/, &string2))
		return "LOCATION_SAN_CHIANSKI_MOUNTAIN_RANGE";
	else if (MISC::ARE_STRINGS_EQUAL("STRAW" /*Strawberry*/, &string2))
		return "LOCATION_STRAWBERRY";
	else if (MISC::ARE_STRINGS_EQUAL("zQ_UAR" /*Davis Quartz*/, &string2))
		return "LOCATION_DAVIS_QUARTZ";
	else if (MISC::ARE_STRINGS_EQUAL("ZP_ORT" /*Port of South Los Santos*/, &string2))
		return "LOCATION_PORT_OF_SOUTH_LOS_SANTOS";

	return "";
}

Vector3 func_48(Blip blParam0) // Position - 0x27F2 (10226)
{
	var entityCoords;
	Vehicle blipInfoIdEntityIndex;
	Ped pedIndexFromEntityIndex;
	Object objectIndexFromEntityIndex;
	Pickup blipInfoIdPickupIndex;
	int blipInfoIdType;

	entityCoords = { 0f, 0f, 0f };
	blipInfoIdType = HUD::GET_BLIP_INFO_ID_TYPE(blParam0);

	if (blipInfoIdType == 1)
	{
		blipInfoIdEntityIndex = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(blParam0);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(blipInfoIdEntityIndex, false))
			entityCoords = { ENTITY::GET_ENTITY_COORDS(blipInfoIdEntityIndex, true) };
	}
	else if (blipInfoIdType == 2)
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(blParam0));
	
		if (!PED::IS_PED_INJURED(pedIndexFromEntityIndex))
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedIndexFromEntityIndex, true) };
	}
	else if (blipInfoIdType == 3)
	{
		objectIndexFromEntityIndex = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(blParam0));
	
		if (ENTITY::DOES_ENTITY_EXIST(objectIndexFromEntityIndex))
			entityCoords = { ENTITY::GET_ENTITY_COORDS(objectIndexFromEntityIndex, true) };
	}
	else if (blipInfoIdType == 4)
	{
		entityCoords = { HUD::GET_BLIP_COORDS(blParam0) };
	}
	else if (blipInfoIdType == 6)
	{
		blipInfoIdPickupIndex = HUD::GET_BLIP_INFO_ID_PICKUP_INDEX(blParam0);
	
		if (OBJECT::DOES_PICKUP_EXIST(blipInfoIdPickupIndex))
			entityCoords = { OBJECT::GET_PICKUP_COORDS(blipInfoIdPickupIndex) };
	}
	else if (blipInfoIdType == 5)
	{
		entityCoords = { HUD::GET_BLIP_COORDS(blParam0) };
	}

	return entityCoords;
}

void func_49(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x28CD (10445)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_50(iParam2), 1);
	return;
}

char* func_50(int iParam0) // Position - 0x28E4 (10468)
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

BOOL func_51(Ped pedParam0, BOOL bParam1) // Position - 0x2AD9 (10969)
{
	Ped pedAsGroupMember;
	int sizeInMembers;
	int i;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(pedParam0))
		{
			func_53("\\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\\n");
			return true;
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			func_53("\\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\\n");
			return true;
		}
	}

	if (func_52())
	{
		func_53("\\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\\n");
		return true;
	}

	if (bParam1)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			func_53("\\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\\n");
			return true;
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::DOES_GROUP_EXIST(func_6()))
		{
			PED::GET_GROUP_SIZE(func_6(), &i, &sizeInMembers);
		
			if (sizeInMembers > 0)
			{
				for (i = 0; i < sizeInMembers; i = i + 1)
				{
					pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_6(), i);
				
					if (!PED::IS_PED_INJURED(pedAsGroupMember))
					{
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(pedAsGroupMember))
						{
							func_53("\\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\\n");
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_52() // Position - 0x2BB4 (11188)
{
	if (Global_22425 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_53(char* sParam0) // Position - 0x2BD6 (11222)
{
	func_54(sParam0);
	return;
}

void func_54(char* sParam0) // Position - 0x2BE4 (11236)
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}

int _GET_PLAYER_CASH(eCharacter echParam0) // Position - 0x2BF7 (11255)
{
	int outValue;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		case CHAR_FRANKLIN:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		case CHAR_TREVOR:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		default:
		
	}

	return 0;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2C4F (11343)
{
	func_57();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_57() // Position - 0x2C68 (11368)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_58(character) && !func_39(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_58(Global_114135.f_2367.f_539.f_4321))
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

BOOL func_58(eCharacter echParam0) // Position - 0x2D65 (11621)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x2D71 (11633)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2DAE (11694)
{
	if (func_58(character))
		return func_61(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_61(eCharacter echParam0) // Position - 0x2DD3 (11731)
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_62() // Position - 0x2DE2 (11746)
{
	if (func_63(1) == _GET_CURRENT_PLAYER_CHARACTER())
		return true;

	return false;
}

eCharacter func_63(int iParam0) // Position - 0x2DFB (11771)
{
	return Global_114135.f_24908[iParam0 /*4*/];
}

void func_64() // Position - 0x2E0E (11790)
{
	if (func_227())
	{
		func_225();
		func_224();
		func_223();
	
		if (!func_220())
			func_214();
	
		func_213();
	
		if (iLocal_949 != 4)
		{
			func_45(Global_113167, &iLocal_826);
		
			if (iLocal_949 != 0)
			{
				if (func_211())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_111))
					{
						func_188();
						bLocal_58 = true;
					}
				}
			
				func_179();
			}
		}
	
		switch (iLocal_949)
		{
			case 0:
				if (!PED::IS_PED_INJURED(Global_113167) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113167, Global_113166))
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_idle", 3))
							if (!func_2(Global_113167, SCRIPT_TASK_VEHICLE_TEMP_ACTION))
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_113167, Global_113166, 1, 1000000);
			
				if (func_178())
				{
					if (func_177() && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_188();
						iLocal_826 = 1;
						iLocal_948 = 0;
						Global_113203 = 0;
						iLocal_88 = 0;
						bLocal_66 = false;
						bLocal_56 = false;
						bLocal_58 = true;
						func_176();
						iLocal_949 = 1;
					}
				}
				break;
		
			case 1:
				if (!PED::IS_PED_INJURED(Global_113167) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113167, Global_113166))
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_idle", 3))
							if (!func_2(Global_113167, SCRIPT_TASK_VEHICLE_TEMP_ACTION))
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_113167, Global_113166, 1, 1000000);
			
				func_175(&Global_113166, iLocal_990);
			
				if (func_174())
				{
					STATS::STAT_INCREMENT(joaat("SP_NUMBER_OF_TAXIS_USED"), 1f);
					bLocal_58 = true;
					iLocal_949 = 2;
				}
				break;
		
			case 2:
				if (func_174())
					func_171();
				break;
		
			case 3:
				func_170();
				break;
		
			case 4:
				func_80();
				break;
		}
	
		func_65();
	}
	else
	{
		iLocal_950 = 2;
	}

	return;
}

void func_65() // Position - 0x3012 (12306)
{
	const char* controlInstructionalButtonsString;

	if (!func_220())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_112))
		{
			if (iLocal_949 != 0)
			{
				controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X, true);
			
				if (!MISC::ARE_STRINGS_EQUAL(sLocal_107, controlInstructionalButtonsString))
				{
					sLocal_107 = controlInstructionalButtonsString;
					bLocal_58 = true;
				}
			
				if (bLocal_58)
				{
					uLocal_814 = { func_79() };
					func_77(&uLocal_113);
					func_76(0, 75, "TXM_EXIT" /*Exit*/, &uLocal_113, false, 365);
				
					if (iLocal_91 > 1)
						func_76(2, 218, "TXM_CDES" /*Change Destination*/, &uLocal_113, false, 365);
				
					if (!bLocal_60)
					{
						if (iLocal_91 > 0)
							func_76(2, 176, "TXM_SLCT" /*Choose Destination*/, &uLocal_113, false, 365);
					}
					else if (iLocal_949 == 2)
					{
						func_76(2, 177, "TXM_STOP" /*Stop*/, &uLocal_113, false, 365);
					
						if (bLocal_59)
							func_76(2, 176, "TXM_SLCT" /*Choose Destination*/, &uLocal_113, false, 365);
					
						if (func_75())
							func_76(2, 176, "TXM_SKIP" /*Skip (Extra Cost)*/, &uLocal_113, false, 365);
					
						if (!bLocal_64)
							func_76(2, 179, "TXM_HURY" /*Hurry*/, &uLocal_113, false, 365);
					}
					else if (iLocal_949 == 3)
					{
						func_76(2, 177, "TXM_STRT" /*Start*/, &uLocal_113, false, 365);
					
						if (bLocal_59)
							func_76(2, 176, "TXM_SLCT" /*Choose Destination*/, &uLocal_113, false, 365);
					}
				
					bLocal_58 = false;
				}
			
				HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
				func_74(1);
				func_73(1);
				func_66(&iLocal_112, &uLocal_814, &uLocal_113, func_72(&uLocal_113));
			}
		}
		else
		{
			iLocal_112 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
	}
	else
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_112);
		bLocal_58 = true;
	}

	return;
}

void func_66(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x317E (12670)
{
	int i;
	eControlType control;
	eControlAction action;
	eControlAction action2;
	eControlType control2;
	int controlGroup;

	if (bParam3 == true || PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
	{
		*uParam2 = 0;
	
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		func_71(uParam2);
	}

	if (Global_1577951 < 2)
		func_73(1);

	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
	
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
		
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			i = 0;
		
			for (i = 0; i < uParam2->f_693; i = i + 1)
			{
				if (IS_BIT_SET(uParam2->f_689, i))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				
					if (!IS_BIT_SET(uParam2->f_690, i))
					{
						control = uParam2->f_1[i /*57*/].f_54;
						action = uParam2->f_1[i /*57*/].f_55;
						action2 = uParam2->f_1[i /*57*/].f_56;
						func_70(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(control, action, true));
					
						if (action2 < 365)
							func_70(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(control, action2, true));
					}
					else
					{
						control2 = uParam2->f_1[i /*57*/].f_54;
						controlGroup = uParam2->f_1[i /*57*/].f_55;
						func_70(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(control2, controlGroup, true));
					}
				
					if (IS_BIT_SET(uParam2->f_686, i))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[i /*57*/].f_32));
					
						if (uParam2->f_694 == i)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[i /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[i /*57*/].f_36);
						
							if (IS_BIT_SET(uParam2->f_687, i))
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[i /*57*/].f_37);
						}
					
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (IS_BIT_SET(uParam2->f_688, i))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[i /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[i /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_69(&(uParam2->f_1[i /*57*/].f_32));
					}
				
					if (MISC::IS_PC_VERSION())
					{
						if (IS_BIT_SET(uParam2->f_691, i))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[i /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					func_70(&uParam2->f_1[i /*57*/]);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[i /*57*/].f_16)))
						func_70(&(uParam2->f_1[i /*57*/].f_16));
				
					if (IS_BIT_SET(uParam2->f_686, i))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[i /*57*/].f_32));
					
						if (uParam2->f_694 == i)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[i /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[i /*57*/].f_36);
						
							if (IS_BIT_SET(uParam2->f_687, i))
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[i /*57*/].f_37);
						}
					
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (IS_BIT_SET(uParam2->f_688, i))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[i /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[i /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_69(&(uParam2->f_1[i /*57*/].f_32));
					}
				
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}

	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;

	if (*uParam2 == 1 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		func_68(*uParam0, uParam1);

	func_67();
	return;
}

void func_67() // Position - 0x3526 (13606)
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	return;
}

void func_68(int iParam0, var uParam1) // Position - 0x3544 (13636)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
	return;
}

void func_69(const char* sParam0) // Position - 0x3563 (13667)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_70(const char* sParam0) // Position - 0x3575 (13685)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

void func_71(var uParam0) // Position - 0x3583 (13699)
{
	Global_1981195 = 0;
	uParam0->f_692 = 0;
	return;
}

BOOL func_72(var uParam0) // Position - 0x3596 (13718)
{
	return Global_1981195 || uParam0->f_692;
}

void func_73(int iParam0) // Position - 0x35AD (13741)
{
	Global_1577951 = iParam0;
	return;
}

void func_74(int iParam0) // Position - 0x35BB (13755)
{
	Global_1675212.f_1163 = iParam0;
	return;
}

BOOL func_75() // Position - 0x35CC (13772)
{
	if (iLocal_949 != 2)
		return false;

	if (bLocal_59)
		return false;

	if (fLocal_83 < 50f)
		return false;

	if (CAM::DOES_CAM_EXIST(caLocal_68))
		if (CAM::IS_CAM_ACTIVE(caLocal_68))
			return false;

	return true;
}

void func_76(int iParam0, int iParam1, char* sParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x360E (13838)
{
	int offset;

	if (uParam3->f_693 >= 12)
		return;

	offset = uParam3->f_693;
	TEXT_LABEL_ASSIGN_STRING(&(uParam3->f_1[offset /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), offset);
	uParam3->f_1[offset /*57*/].f_54 = iParam0;
	uParam3->f_1[offset /*57*/].f_55 = iParam1;
	uParam3->f_1[offset /*57*/].f_56 = iParam5;

	if (bParam4)
	{
		MISC::SET_BIT(&(uParam3->f_691), offset);
		iParam5 < 365;
	}

	uParam3->f_693 = uParam3->f_693 + 1;
	return;
}

void func_77(var uParam0) // Position - 0x368B (13963)
{
	func_78(uParam0);
	uParam0->f_692 = 1;
	return;
}

void func_78(var uParam0) // Position - 0x369F (13983)
{
	int i;

	*uParam0 = 0;
	i = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&uParam0->f_1[i /*57*/], "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1[i /*57*/].f_16), "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1[i /*57*/].f_32), "", 16);
		uParam0->f_1[i /*57*/].f_36 = 0;
		uParam0->f_1[i /*57*/].f_37 = 0;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1[i /*57*/].f_38), "", 64);
		uParam0->f_1[i /*57*/].f_54 = 2;
		uParam0->f_1[i /*57*/].f_55 = 365;
		uParam0->f_1[i /*57*/].f_56 = 365;
	}

	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
	Global_1981195 = 0;
	return;
}

struct<9> func_79() // Position - 0x3789 (14217)
{
	float num;

	num = 0.5f;
	num.f_1 = 0.5f;
	num.f_2 = 1f;
	num.f_3 = 1f;
	num.f_4 = 255;
	num.f_5 = 255;
	num.f_6 = 255;
	num.f_7 = 200;
	num.f_8 = 0f;
	return num;
}

void func_80() // Position - 0x37CD (14285)
{
	BOOL flag;
	BOOL flag2;
	float groundZ;

	groundZ = 1f;
	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(CAMERA_CONTROL);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(FRONTEND_CONTROL);

	switch (iLocal_951)
	{
		case 0:
			func_162(true);
		
			if (func_161(iLocal_89, 500))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				AUDIO::START_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
				iLocal_951 = 1;
			}
			break;
	
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && AUDIO::IS_AUDIO_SCENE_ACTIVE("FADE_OUT_WORLD_250MS_SCENE"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_113166, false);
			
				HUD::CLEAR_PRINTS();
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			
				if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /*Taxi*/))
					HUD::RELEASE_NAMED_RENDERTARGET("taxi" /*Taxi*/);
			
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_109))
				{
					OBJECT::DELETE_OBJECT(&obLocal_109);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_108);
				}
			
				if (CAM::IS_CAM_ACTIVE(caLocal_68))
				{
					GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
					Global_113183 = 0;
					CAM::SET_CAM_ACTIVE(caLocal_68, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					HUD::UNLOCK_MINIMAP_POSITION();
					HUD::UNLOCK_MINIMAP_ANGLE();
					HUD::SET_RADAR_ZOOM(0);
				}
			
				func_159(iLocal_990);
				iLocal_89 = MISC::GET_GAME_TIMER();
			
				if (bLocal_59)
				{
					bLocal_61 = false;
					bLocal_59 = false;
					blLocal_41 = { uLocal_827[iLocal_92 /*3*/] };
				}
			
				if (!bLocal_61)
				{
					iLocal_88 = 0;
					iLocal_948 = 0;
					iLocal_951 = 2;
				}
				else
				{
					func_158();
					iLocal_951 = 3;
				}
			}
			else
			{
				AUDIO::START_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
			}
			break;
	
		case 2:
			if (func_125(&blLocal_41, &Global_113173, &Global_113179))
			{
				func_158();
				iLocal_951 = 3;
			}
			break;
	
		case 3:
			if (Global_79555 == -1)
			{
				func_124();
				func_123();
				func_121();
				func_117();
				func_116();
				MISC::CLEAR_AREA(Global_113173, 5f, true, false, false, false);
				func_112(1097859072);
			
				if (!PED::IS_PED_INJURED(Global_113167) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
				{
					ENTITY::SET_ENTITY_COORDS(Global_113166, Global_113173, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Global_113166, Global_113179);
					ENTITY::FREEZE_ENTITY_POSITION(Global_113166, true);
				}
			
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				STREAMING::NEW_LOAD_SCENE_STOP();
				MISC::CLEAR_AREA(Global_113173, 5000f, true, false, false, false);
				MISC::CLEAR_AREA_OF_OBJECTS(Global_113173, 5000f, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Global_113173, 30f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Global_113173, 5000f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Global_113173, 5000f);
			
				if (Global_98585 != -1)
				{
					func_111(Global_98585, true);
					func_110(Global_98585);
				}
			
				iLocal_823 = func_109(blLocal_41);
			
				if (iLocal_823 != -1)
					func_111(iLocal_823, true);
			
				bLocal_57 = false;
				iLocal_951 = 4;
			}
			break;
	
		case 4:
			if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Global_113173, 4500f, 0))
			{
				bLocal_57 = true;
				iLocal_951 = 5;
			}
			else if (func_161(iLocal_89, 2500))
			{
				iLocal_951 = 5;
			}
			break;
	
		case 5:
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					if (iLocal_823 != -1)
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						bLocal_57 = false;
						func_107(iLocal_823);
						func_111(iLocal_823, false);
					}
				
					iLocal_951 = 6;
				}
				else if (func_161(iLocal_89, 20000))
				{
					if (iLocal_823 != -1)
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						bLocal_57 = false;
						func_107(iLocal_823);
						func_111(iLocal_823, false);
					}
				
					iLocal_951 = 6;
				}
			}
			else
			{
				if (iLocal_823 != -1)
				{
					func_107(iLocal_823);
					func_111(iLocal_823, false);
				}
			
				bLocal_57 = false;
				iLocal_951 = 6;
			}
			break;
	
		case 6:
			func_106();
			PED::INSTANTLY_FILL_PED_POPULATION();
			VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
			MISC::POPULATE_NOW();
		
			if (iLocal_823 != -1)
			{
				flag2 = true;
			
				if (Global_92451[iLocal_823 /*34*/].f_13 == -1 && Global_92451[iLocal_823 /*34*/].f_14 == -1)
					flag2 = false;
			
				if (flag2)
					if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL && !IS_BIT_SET(Global_92451[iLocal_823 /*34*/].f_15, 8) || _GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN && !IS_BIT_SET(Global_92451[iLocal_823 /*34*/].f_15, 9) || _GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR && !IS_BIT_SET(Global_92451[iLocal_823 /*34*/].f_15, 10))
						flag2 = false;
			
				if (flag2)
					if (func_104(Global_92451[iLocal_823 /*34*/].f_13, Global_92451[iLocal_823 /*34*/].f_14))
						flag2 = false;
			
				if (flag2)
					CLOCK::ADVANCE_CLOCK_TIME_TO(Global_92451[iLocal_823 /*34*/].f_13, 0, 0);
			}
		
			iLocal_105 = func_97(1129381888, true);
			iLocal_951 = 7;
			break;
	
		case 7:
			flag = true;
		
			if (func_96(iLocal_105))
				flag = false;
		
			if (!func_86(Global_113173))
				flag = false;
		
			if (!func_85())
				flag = false;
		
			if (!VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED())
				flag = false;
		
			if (bLocal_57)
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						flag = false;
		
			if (iLocal_823 != -1 && Global_98590)
				flag = false;
		
			if (func_161(iLocal_89, 29500))
				flag = true;
		
			if (flag)
			{
				if (bLocal_57)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						STREAMING::NEW_LOAD_SCENE_STOP();
				
					bLocal_57 = false;
				}
			
				if (bLocal_67)
				{
					bLocal_67 = false;
					MISC::GET_GROUND_Z_FOR_3D_COORD(Global_113173 + { 100f, 0f, 0f }, &groundZ, false, false);
				
					if (groundZ > Global_113173.f_2)
						Global_113173.f_2 = groundZ + 0.5f;
				}
			
				func_112(12f);
				func_82();
			
				if (!PED::IS_PED_INJURED(Global_113167) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_113166, false);
					ENTITY::SET_ENTITY_HEADING(Global_113166, Global_113179);
					ENTITY::SET_ENTITY_COORDS(Global_113166, Global_113173, true, false, false, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_113166, 1084227584);
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_113167, Global_113166, 24, 5000);
				}
			
				iLocal_89 = MISC::GET_GAME_TIMER();
				iLocal_951 = 8;
			}
			break;
	
		case 8:
			if (func_161(iLocal_89, 500))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FADE_OUT_WORLD_250MS_SCENE"))
					AUDIO::STOP_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_113166, true);
			
				if (!func_81())
					CAM::DO_SCREEN_FADE_IN(250);
			
				iLocal_951 = 9;
			}
			break;
	
		case 9:
			if (CAM::IS_SCREEN_FADED_IN() || func_81())
			{
				if (!Global_98591 && iLocal_823 != -1 && iLocal_823 != 72 && iLocal_823 != 87)
					func_110(iLocal_823);
			
				func_162(false);
			
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113166, true))
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			
				TASK::TASK_VEHICLE_TEMP_ACTION(Global_113167, Global_113166, 24, 5000);
				PED::SET_PED_KEEP_TASK(Global_113167, true);
				bLocal_65 = true;
				iLocal_950 = 2;
				iLocal_951 = 10;
			}
			break;
	
		case 10:
			break;
	}

	return;
}

BOOL func_81() // Position - 0x3E37 (15927)
{
	return IS_BIT_SET(Global_101688.f_20, 13);
}

void func_82() // Position - 0x3E48 (15944)
{
	float num;
	float distanceBetweenCoords;

	switch (iLocal_824)
	{
		case 92:
			num = { func_84(229, 0) };
			distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_113173, num, true);
		
			if (distanceBetweenCoords < 100f)
			{
				num = { func_83(Global_113173 - num) };
				num = { Global_113173 + (num * (float)100 - SYSTEM::ROUND(distanceBetweenCoords)), Global_113173.f_1 + (num.f_1 * (float)100 - SYSTEM::ROUND(distanceBetweenCoords)), Global_113173.f_2 };
				PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(num, &Global_113173, &Global_113179, 1, 1077936128, 0);
				ENTITY::SET_ENTITY_COORDS(Global_113166, Global_113173, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Global_113166, Global_113179);
			}
			break;
	}

	return;
}

Vector3 func_83(float fParam0, var uParam1, var uParam2) // Position - 0x3F03 (16131)
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

Vector3 func_84(int iParam0, int iParam1) // Position - 0x3F42 (16194)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return 0f, 0f, 0f;

	return Global_33467[num /*23*/][iParam1 /*3*/];
}

BOOL func_85() // Position - 0x3F80 (16256)
{
	return !Global_78329.f_553;
}

BOOL func_86(var uParam0, var uParam1, var uParam2) // Position - 0x3F90 (16272)
{
	int num;

	num = func_94(uParam0);

	if (!func_93(&uLocal_50))
	{
		iLocal_49 = 0;
		func_91(&uLocal_50, 0f);
	}

	if (num == iLocal_49 || func_88(&uLocal_50) > 8f)
	{
		func_87(&uLocal_50);
		iLocal_49 = 0;
		return true;
	}

	return false;
}

void func_87(var uParam0) // Position - 0x3FDE (16350)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

float func_88(int* piParam0) // Position - 0x3FF4 (16372)
{
	if (func_93(piParam0))
		if (func_90(piParam0))
			return piParam0->f_2;
		else
			return func_89(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_89(BOOL bParam0) // Position - 0x4031 (16433)
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

BOOL func_90(int* piParam0) // Position - 0x4089 (16521)
{
	return IS_BIT_SET(*piParam0, 2);
}

void func_91(int* piParam0, float fParam1) // Position - 0x4096 (16534)
{
	if (!func_93(piParam0))
		func_92(piParam0, fParam1);

	return;
}

void func_92(int* piParam0, float fParam1) // Position - 0x40B0 (16560)
{
	piParam0->f_1 = func_89(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

BOOL func_93(int* piParam0) // Position - 0x40DB (16603)
{
	return IS_BIT_SET(*piParam0, 1);
}

int func_94(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x40E8 (16616)
{
	int num;
	int i;
	float num2;

	num = 0;

	if (func_95(0, 4))
	{
		for (i = 70; i <= 72; i = i + 1)
		{
			num2 = SYSTEM::VDIST2(func_84(i, 0), vParam0);
		
			if (num2 <= 1225f)
				num = num + 1;
		}
	}

	if (func_95(0, 0))
	{
		for (i = 125; i <= 137; i = i + 1)
		{
			num2 = SYSTEM::VDIST2(func_84(i, 0), vParam0);
		
			if (num2 <= 1225f)
				num = num + 1;
		}
	}

	if (func_95(0, 10))
	{
		i = 125;
		num2 = SYSTEM::VDIST2(func_84(i, 0), vParam0);
	
		if (num2 <= 1225f)
			num = num + 1;
	}

	return num;
}

BOOL func_95(int iParam0, int iParam1) // Position - 0x41A3 (16803)
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return false;

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	flag = IS_BIT_SET(Global_114135.f_9089.f_99.f_219[iParam0], iParam1);
	return flag;
}

BOOL func_96(int iParam0) // Position - 0x41ED (16877)
{
	if (iParam0 != -1)
		if (!Global_113222[iParam0 /*10*/].f_1)
			return true;

	return false;
}

int func_97(int iParam0, BOOL bParam1) // Position - 0x420E (16910)
{
	var unk;
	int num;
	int num2;
	int num3;
	int distanceBetweenCoords;
	int num4;
	int i;
	BOOL flag;

	num2 = -1;
	num3 = iParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_58(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_103();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_114135.f_18578[num /*6*/], 2) && !IS_BIT_SET(Global_114135.f_18578[num /*6*/], 3))
				{
					func_98(num, &unk);
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

void func_98(int iParam0, var uParam1) // Position - 0x42BF (17087)
{
	switch (iParam0)
	{
		case 0:
			func_99(uParam1, "Abigail1", func_101(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
	
		case 1:
			func_99(uParam1, "Abigail2", func_101(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
	
		case 2:
			func_99(uParam1, "Barry1", func_101(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
	
		case 3:
			func_99(uParam1, "Barry2", func_101(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
	
		case 4:
			func_99(uParam1, "Barry3", func_101(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 5:
			func_99(uParam1, "Barry3A", func_101(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 6:
			func_99(uParam1, "Barry3C", func_101(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 7:
			func_99(uParam1, "Barry4", func_101(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_100(iParam0), 0, 0);
			break;
	
		case 8:
			func_99(uParam1, "Dreyfuss1", func_101(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 9:
			func_99(uParam1, "Epsilon1", func_101(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 10:
			func_99(uParam1, "Epsilon2", func_101(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
	
		case 11:
			func_99(uParam1, "Epsilon3", func_101(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 12:
			func_99(uParam1, "Epsilon4", func_101(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 13:
			func_99(uParam1, "Epsilon5", func_101(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
	
		case 14:
			func_99(uParam1, "Epsilon6", func_101(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 15:
			func_99(uParam1, "Epsilon7", func_101(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 16:
			func_99(uParam1, "Epsilon8", func_101(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_100(iParam0), 1, 0);
			break;
	
		case 17:
			func_99(uParam1, "Extreme1", func_101(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 18:
			func_99(uParam1, "Extreme2", func_101(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 19:
			func_99(uParam1, "Extreme3", func_101(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 20:
			func_99(uParam1, "Extreme4", func_101(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 21:
			func_99(uParam1, "Fanatic1", func_101(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_100(iParam0), 1, 0);
			break;
	
		case 22:
			func_99(uParam1, "Fanatic2", func_101(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_100(iParam0), 1, 0);
			break;
	
		case 23:
			func_99(uParam1, "Fanatic3", func_101(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_100(iParam0), 0, 1);
			break;
	
		case 24:
			func_99(uParam1, "Hao1", func_101(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_100(iParam0), 0, 1);
			break;
	
		case 25:
			func_99(uParam1, "Hunting1", func_101(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 26:
			func_99(uParam1, "Hunting2", func_101(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 27:
			func_99(uParam1, "Josh1", func_101(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
	
		case 28:
			func_99(uParam1, "Josh2", func_101(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
	
		case 29:
			func_99(uParam1, "Josh3", func_101(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
	
		case 30:
			func_99(uParam1, "Josh4", func_101(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
	
		case 31:
			func_99(uParam1, "Maude1", func_101(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 32:
			func_99(uParam1, "Minute1", func_101(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 33:
			func_99(uParam1, "Minute2", func_101(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 34:
			func_99(uParam1, "Minute3", func_101(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 35:
			func_99(uParam1, "MrsPhilips1", func_101(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 36:
			func_99(uParam1, "MrsPhilips2", func_101(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 37:
			func_99(uParam1, "Nigel1", func_101(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
	
		case 38:
			func_99(uParam1, "Nigel1A", func_101(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
	
		case 39:
			func_99(uParam1, "Nigel1B", func_101(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_100(iParam0), 1, 1);
			break;
	
		case 40:
			func_99(uParam1, "Nigel1C", func_101(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_100(iParam0), 1, 1);
			break;
	
		case 41:
			func_99(uParam1, "Nigel1D", func_101(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_100(iParam0), 1, 1);
			break;
	
		case 42:
			func_99(uParam1, "Nigel2", func_101(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
	
		case 43:
			func_99(uParam1, "Nigel3", func_101(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 1, 1);
			break;
	
		case 44:
			func_99(uParam1, "Omega1", func_101(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 45:
			func_99(uParam1, "Omega2", func_101(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 46:
			func_99(uParam1, "Paparazzo1", func_101(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 47:
			func_99(uParam1, "Paparazzo2", func_101(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 48:
			func_99(uParam1, "Paparazzo3", func_101(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 49:
			func_99(uParam1, "Paparazzo3A", func_101(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 50:
			func_99(uParam1, "Paparazzo3B", func_101(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 51:
			func_99(uParam1, "Paparazzo4", func_101(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 52:
			func_99(uParam1, "Rampage1", func_101(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 54:
			func_99(uParam1, "Rampage3", func_101(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
	
		case 55:
			func_99(uParam1, "Rampage4", func_101(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
	
		case 56:
			func_99(uParam1, "Rampage5", func_101(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_100(iParam0), 0, 0);
			break;
	
		case 53:
			func_99(uParam1, "Rampage2", func_101(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_100(iParam0), 1, 0);
			break;
	
		case 57:
			func_99(uParam1, "TheLastOne", func_101(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 58:
			func_99(uParam1, "Tonya1", func_101(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 59:
			func_99(uParam1, "Tonya2", func_101(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 60:
			func_99(uParam1, "Tonya3", func_101(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 61:
			func_99(uParam1, "Tonya4", func_101(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		case 62:
			func_99(uParam1, "Tonya5", func_101(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_100(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_99(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x5474 (21620)
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

int func_100(int iParam0) // Position - 0x5505 (21765)
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

struct<2> func_101(int iParam0) // Position - 0x584B (22603)
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_102(iParam0) };

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

struct<2> func_102(int iParam0) // Position - 0x5882 (22658)
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

int func_103() // Position - 0x5CCE (23758)
{
	func_57();

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

BOOL func_104(int iParam0, int iParam1) // Position - 0x5D14 (23828)
{
	return func_105(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

BOOL func_105(int iParam0, int iParam1, int iParam2) // Position - 0x5D28 (23848)
{
	BOOL flag;
	int num;
	int num2;

	if (iParam1 == 24)
		iParam1 = 0;

	if (iParam1 < 0 || iParam1 >= 24)
		return 0;

	if (iParam2 == 24)
		iParam2 = 0;

	if (iParam2 < 0 || iParam2 >= 24)
		return 0;

	if (iParam1 == iParam2)
		return 1;

	flag = iParam2 < iParam1;
	num = iParam1;
	num2 = iParam2;

	if (flag)
		num2 = 24;

	if (iParam0 >= num && iParam0 < num2)
		return 1;

	if (!flag)
		return 0;

	num = 0;
	num2 = iParam2;

	if (iParam0 >= num && iParam0 < num2)
		return 1;

	return 0;
}

void func_106() // Position - 0x5DD1 (24017)
{
	Global_78329.f_553 = 1;
	Global_78329.f_554 = 0;
	return;
}

void func_107(int iParam0) // Position - 0x5DE9 (24041)
{
	if (func_108(iParam0))
	{
		Global_98586 = iParam0;
		Global_98590 = true;
		return;
	}

	return;
}

BOOL func_108(int iParam0) // Position - 0x5E08 (24072)
{
	switch (iParam0)
	{
		case 67:
		case 90:
		case 0:
		case 31:
		case 27:
		case 28:
		case 50:
		case 51:
		case 52:
		case 53:
		case 56:
		case 57:
			return false;
	}

	return true;
}

int func_109(Blip blParam0) // Position - 0x5E67 (24167)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_98596[i /*17*/])
			if (Global_98596[i /*17*/].f_9 != 263)
				if (Global_33467[Global_98596[i /*17*/].f_9 /*23*/].f_19 == blParam0)
					return Global_98596[i /*17*/].f_5;
	}

	return -1;
}

void func_110(int iParam0) // Position - 0x5EC1 (24257)
{
	if (Global_98585 != -1)
	{
		if (iParam0 == Global_98585)
		{
			Global_98589 = 1;
			return;
		}
	}

	return;
}

void func_111(int iParam0, BOOL bParam1) // Position - 0x5EE5 (24293)
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_95648[iParam0 /*2*/] = true;
	else
		Global_95648[iParam0 /*2*/] = false;

	return;
}

void func_112(int iParam0) // Position - 0x5F23 (24355)
{
	int num;
	BOOL flag;
	int nthClosest;
	Vector3 outPosition;

	if (!(func_115(89) || func_115(88) || func_115(92) || func_115(33) || func_114() == 89 || func_114() == 88 || func_114() == 92 || func_114() == 33))
		return;

	num = 0;
	flag = false;
	nthClosest = 1;
	outPosition = { Global_113173 };

	while (!flag && nthClosest < 10)
	{
		flag = true;
	
		if (func_113(&num, outPosition, iParam0))
		{
			flag = false;
		
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Global_113173, nthClosest, &outPosition, 1, 1077936128, 0))
				nthClosest = nthClosest + 1;
		}
	}

	if (SYSTEM::VDIST2(outPosition, Global_113173) > 2f)
		PATHFIND::GET_SAFE_COORD_FOR_PED(outPosition, false, &Global_113173, 0);

	return;
}

BOOL func_113(var uParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4) // Position - 0x600B (24587)
{
	int num;
	int i;

	num = 5;
	num[0] = joaat("crusader");
	num[1] = joaat("barracks");
	num[2] = joaat("trash");
	num[3] = joaat("boxville3");
	num[4] = joaat("fbi2");

	for (i = 0; i < num; i = i + 1)
	{
		*uParam0 = VEHICLE::GET_CLOSEST_VEHICLE(vParam1, iParam4, num[i], 67590);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

int func_114() // Position - 0x6080 (24704)
{
	return Global_79802;
}

BOOL func_115(int iParam0) // Position - 0x608C (24716)
{
	int i;

	if (iParam0 == 94 || iParam0 == -1)
		return false;

	if (Global_95648[iParam0 /*2*/])
		return true;

	for (i = 0; i < Global_92415; i = i + 1)
	{
		if (Global_92415[i /*5*/] != -1)
			if (Global_79810.f_109[Global_92415[i /*5*/] /*4*/] == iParam0)
				return true;
	}

	return false;
}

void func_116() // Position - 0x60F4 (24820)
{
	int i;

	i = 0;

	for (i = 0; i < Global_76403; i = i + 1)
	{
		switch (Global_64533[Global_76404[i /*9*/] /*13*/])
		{
			case 1:
				Global_76404[i /*9*/].f_3 = 3;
				break;
		
			case 4:
				if (Global_64316)
					Global_76404[i /*9*/].f_3 = 3;
				break;
		}
	}

	return;
}

void func_117() // Position - 0x6154 (24916)
{
	float num;
	int value;
	int minutes;

	value = 0;
	minutes = 0;

	if (value == 0)
		minutes == 0;

	num = func_120(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_113173);

	if (bLocal_64)
	{
		value = SYSTEM::FLOOR(num / 200f / 60f);
		minutes = SYSTEM::ROUND((num / 200f) - (60f * SYSTEM::TO_FLOAT(value)));
	}
	else
	{
		value = SYSTEM::FLOOR(num / 100f / 60f);
		minutes = SYSTEM::ROUND((num / 100f) - (60f * SYSTEM::TO_FLOAT(value)));
	}

	CLOCK::ADD_TO_CLOCK_TIME(value, minutes, 0);
	func_118(SYSTEM::TO_FLOAT((value * 60) + minutes) / 60f);
	return;
}

void func_118(float fParam0) // Position - 0x6207 (25095)
{
	int i;
	int j;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_93(&(Global_114135.f_18107.f_175[i /*19*/].f_5)))
			func_119(&(Global_114135.f_18107.f_175[i /*19*/].f_5), fParam0 * 60f);
	}

	for (j = 0; j < 6; j = j + 1)
	{
		if (func_93(&Global_114135.f_18107.f_362[j /*3*/]))
			func_119(&Global_114135.f_18107.f_362[j /*3*/], fParam0 * 60f);
	}

	AUDIO::SKIP_RADIO_FORWARD();
	return;
}

void func_119(int* piParam0, float fParam1) // Position - 0x6298 (25240)
{
	if (func_93(piParam0))
		func_92(piParam0, func_88(piParam0) + fParam1);

	return;
}

float func_120(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x62BB (25275)
{
	return SYSTEM::VMAG(uParam3 - uParam0) * 1.3f;
}

void func_121() // Position - 0x62D6 (25302)
{
	float value;
	int value2;

	value = (func_120(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_113173) / 50f) * fLocal_73 * 2.4f;
	value2 = SYSTEM::FLOOR(fLocal_82) + SYSTEM::ROUND(value);
	value = SYSTEM::TO_FLOAT(value2);
	value = value * 1.33f;
	value2 = SYSTEM::ROUND(value);
	iLocal_101 = iLocal_101 + value2;
	fLocal_82 = fLocal_82 + (float)iLocal_101;
	func_122();
	return;
}

void func_122() // Position - 0x633E (25406)
{
	iLocal_103 = iLocal_103 + SYSTEM::ROUND(MISC::GET_FRAME_TIME() * 1000f);

	if (iLocal_103 > 5000)
	{
		fLocal_82 = fLocal_82 + fLocal_73;
		iLocal_103 = 0;
	}

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), uLocal_972, false) > 50f)
	{
		fLocal_82 = fLocal_82 + fLocal_73;
		iLocal_103 = 0;
		uLocal_972 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	}

	iLocal_101 = SYSTEM::CEIL(fLocal_82);

	if (iLocal_101 != iLocal_102)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SET_TAXI_PRICE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_101);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		fLocal_83 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_113173);
		iLocal_102 = iLocal_101;
	}

	return;
}

void func_123() // Position - 0x63DC (25564)
{
	Hash statName;
	float value;

	switch (echLocal_71)
	{
		case CHAR_MICHAEL:
			statName = joaat("SP0_DIST_AS_PASSENGER_TAXI");
			break;
	
		case CHAR_FRANKLIN:
			statName = joaat("SP1_DIST_AS_PASSENGER_TAXI");
			break;
	
		case CHAR_TREVOR:
			statName = joaat("SP2_DIST_AS_PASSENGER_TAXI");
			break;
	
		default:
			!func_39(14);
			break;
	}

	if (!func_39(14))
	{
		value = PATHFIND::CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_113173);
		STATS::STAT_INCREMENT(statName, value);
	}

	return;
}

void func_124() // Position - 0x644F (25679)
{
	STREAMING::NEW_LOAD_SCENE_STOP();

	if (STREAMING::STREAMVOL_IS_VALID(Global_112842.f_218))
		STREAMING::STREAMVOL_DELETE(Global_112842.f_218);

	return;
}

BOOL func_125(var uParam0, float fParam1, float* pfParam2) // Position - 0x6472 (25714)
{
	Vector3 vector;

	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		switch (iLocal_948)
		{
			case 0:
				iLocal_110 = 3;
				uLocal_960 = { func_48(*uParam0) };
			
				if (HUD::DOES_BLIP_EXIST(Global_113171) && *uParam0 == Global_113171)
				{
					*fParam1 = { Global_113176 };
					*pfParam2 = Global_113180;
					vector = { uLocal_960 - *fParam1 };
					vector.f_2 = 0f;
					fLocal_72 = SYSTEM::VMAG(vector);
					iLocal_110 = 7;
					iLocal_948 = 4;
					return true;
				}
				else
				{
					if (func_145(uLocal_960, fParam1, pfParam2))
					{
						vector = { uLocal_960 - *fParam1 };
						vector.f_2 = 0f;
						fLocal_72 = SYSTEM::VMAG(vector);
						iLocal_110 = 7;
						iLocal_948 = 4;
						return true;
					}
				
					iLocal_948 = 1;
					return false;
				}
				break;
		
			case 1:
				if (func_134(uLocal_960, fParam1, pfParam2, 1))
				{
					vector = { uLocal_960 - *fParam1 };
					vector.f_2 = 0f;
					fLocal_72 = SYSTEM::VMAG(vector);
					iLocal_110 = 7;
					iLocal_948 = 4;
					return true;
				}
				else
				{
					iLocal_88 = 0;
					iLocal_948 = 2;
					return false;
				}
				break;
		
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Global_113166))
				{
					if (func_126(&Global_113166, ENTITY::GET_ENTITY_COORDS(Global_113166, false), uLocal_960, fParam1, pfParam2, &iLocal_88, uParam0, 1000))
					{
						iLocal_948 = 3;
						return false;
					}
					else
					{
						return false;
					}
				}
				break;
		
			case 3:
				if (func_145(*fParam1, fParam1, pfParam2))
				{
					vector = { uLocal_960 - *fParam1 };
					vector.f_2 = 0f;
					fLocal_72 = SYSTEM::VMAG(vector);
					iLocal_110 = 7;
				}
			
				iLocal_948 = 4;
				return true;
		
			case 4:
				return true;
		
			case 5:
				break;
		}
	}

	return false;
}

BOOL func_126(Vehicle veParam0, var uParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6, float fParam7, float* pfParam8, var uParam9, var uParam10, int iParam11) // Position - 0x662F (26159)
{
	float num;
	float num2;
	Vector3 vector;
	var unk3;
	var unk6;
	int num3;
	int outNumLanes;
	int value;
	int value2;
	float xOffset;
	float num4;
	float approxFloorForArea;
	int nthClosestVehicleNodeId;
	BOOL flag;
	int nodeFlags;
	BOOL p10;
	BOOL flag2;
	BOOL flag3;
	int num5;
	int num6;
	int flags;
	var density;

	num = 3f;
	num2 = 2.5f;
	num3 = 0;
	flag = false;
	nodeFlags = 1;

	if (!func_133(vParam4))
		nodeFlags = 9;

	p10 = true;
	num5 = *uParam9 + 2;
	num6 = 50;
	func_131(uParam1, vParam4, &uLocal_963, &uLocal_966, iParam11);

	if (func_130(uLocal_963, uLocal_966))
	{
		while (!flag && *uParam9 < num5)
		{
			if (vParam4.f_2 == 1f)
				num = 0f;
		
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam4, *uParam9, fParam7, pfParam8, &outNumLanes, nodeFlags, num, num2))
			{
				nthClosestVehicleNodeId = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*fParam7, 1, nodeFlags, 1077936128, 0);
			
				if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(nthClosestVehicleNodeId))
				{
					if (PATHFIND::GET_CLOSEST_ROAD(*fParam7, 1f, 1, &unk6, &unk3, &value2, &value, &num4, p10))
					{
						if (*pfParam8 < 90f || *pfParam8 >= 270f)
							flag3 = true;
						else
							flag3 = false;
					
						flag2 = false;
					
						if (flag3)
							if (outNumLanes == value2)
								flag2 = true;
						else if (outNumLanes == value)
							flag2 = true;
					
						if (num4 < 0f)
						{
							xOffset = 0f;
						}
						else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(nthClosestVehicleNodeId) || !PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(nthClosestVehicleNodeId))
						{
							xOffset = 0f;
						}
						else
						{
							if (flag3)
							{
								if (flag2)
									xOffset = 4.2f * SYSTEM::TO_FLOAT(value2) * 0.5f;
								else
									xOffset = 4.2f * SYSTEM::TO_FLOAT(value2);
							
								if (flag2)
									if (value2 > 2)
										xOffset = xOffset + ((float)value2 - 2 * 1f);
								else if (value2 > 1)
									xOffset = xOffset + ((float)value2 - 1 * 1f);
							}
							else
							{
								if (flag2)
									xOffset = 4.2f * SYSTEM::TO_FLOAT(value) * 0.5f;
								else
									xOffset = 4.2f * SYSTEM::TO_FLOAT(value);
							
								if (flag2)
									if (value > 2)
										xOffset = xOffset + ((float)value - 2 * 1f);
								else if (value > 1)
									xOffset = xOffset + ((float)value - 1 * 1f);
							}
						
							if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(*fParam7, &density, &flags))
							{
								if (!(flags & 64 == 0))
									xOffset = xOffset + (0.9f * num4);
							
								if (!(flags & 4 == 0))
									xOffset = xOffset + -0.7f;
							}
						}
					
						approxFloorForArea = vParam4.f_2 - fParam7->f_2;
					
						if (approxFloorForArea < 0f)
							approxFloorForArea = approxFloorForArea * -1f;
					
						if (func_129(vParam4, *fParam7) || approxFloorForArea < 0.5f || func_127(uParam10))
						{
							*fParam7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*fParam7, *pfParam8, xOffset, 0f, 0f) };
						
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(*veParam0, false))
								num3 = *veParam0;
						
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(*fParam7, 3f, 3f, 3f, num3))
							{
								func_134(*fParam7, fParam7, pfParam8, 1);
								flag = true;
							}
						}
					}
				}
			}
		
			*uParam9 = *uParam9 + 1;
		
			if (*uParam9 >= num6)
			{
				*fParam7 = { vParam4 };
			
				if (fParam7->f_2 == 1f)
				{
					approxFloorForArea = 1f;
					approxFloorForArea = PATHFIND::GET_APPROX_FLOOR_FOR_AREA(*fParam7 - 2f, fParam7->f_1 - 2f, *fParam7 + 2f, fParam7->f_1 + 2f);
				
					if (approxFloorForArea > 1f)
					{
						bLocal_67 = true;
						fParam7->f_2 = approxFloorForArea;
						fParam7->f_2 = fParam7->f_2 + 0.5f;
					}
				}
			
				flag = true;
			}
		}
	
		if (flag)
		{
			vector = { vParam4 - *fParam7 };
			vector.f_2 = 0f;
			fLocal_72 = SYSTEM::VMAG(vector);
			fLocal_72 != 0f;
			return true;
		}
	}

	return false;
}

BOOL func_127(var uParam0) // Position - 0x6988 (27016)
{
	if (HUD::DOES_BLIP_EXIST(*uParam0) && func_128(*uParam0) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
		return true;

	return false;
}

eBlipSprite func_128(Blip blParam0) // Position - 0x69B0 (27056)
{
	eBlipSprite blipSprite;

	if (HUD::DOES_BLIP_EXIST(blParam0))
		blipSprite = HUD::GET_BLIP_SPRITE(blParam0);

	return blipSprite;
}

BOOL func_129(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x69CB (27083)
{
	float num;
	float num2;

	num2 = vParam3.f_2 - vParam0.f_2;

	if (num2 < 0f)
		num2 = num2 * -1f;

	if (vParam0.f_2 <= 1f)
	{
		func_53("\\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\\n");
		return true;
	}

	num = SYSTEM::VDIST(vParam0, vParam3);
	num = num / 1.75f;

	if (num2 < num)
	{
		func_53("\\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\\n");
		return true;
	}

	return false;
}

BOOL func_130(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x6A2D (27181)
{
	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fParam0, fParam0.f_1, fParam3, fParam3.f_1))
		return true;

	return false;
}

void func_131(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8) // Position - 0x6A4D (27213)
{
	float num;
	float num2;

	if (fParam3 <= fParam0)
	{
		num = fParam3;
		num2 = fParam0;
	}
	else
	{
		num = fParam0;
		num2 = fParam3;
	}

	if (fParam3.f_1 <= fParam0.f_1)
	{
		num.f_1 = fParam3.f_1;
		num2.f_1 = fParam0.f_1;
	}
	else
	{
		num.f_1 = fParam0.f_1;
		num2.f_1 = fParam3.f_1;
	}

	num = { num - { (float)iParam8, (float)iParam8, (float)iParam8 } };
	num2 = { num2 + { (float)iParam8, (float)iParam8, (float)iParam8 } };

	if (!func_132(num, *uParam6, 1056964608, false) || !func_132(num, *uParam6, 1056964608, false))
	{
		*uParam6 = { num };
		*uParam7 = { num2 };
	}

	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
	return;
}

BOOL func_132(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7) // Position - 0x6B18 (27416)
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

BOOL func_133(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x6B93 (27539)
{
	const char* nameOfZone;

	nameOfZone = ZONE::GET_NAME_OF_ZONE(vParam0);

	if (MISC::ARE_STRINGS_EQUAL("SanAnd" /*San Andreas*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Alamo" /*Alamo Sea*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("ArmyB" /*Fort Zancudo*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("BhamCa" /*Banham Canyon*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Baytre" /*Baytree Canyon*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("BradT" /*Braddock Tunnel*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("BradP" /*Braddock Pass*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CANNY" /*Raton Canyon*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CCreak" /*Cassidy Creek*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("ChamH" /*Chamberlain Hills*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CHU" /*Chumash*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("COSI" /*Countryside*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CMSW" /*Chiliad Mountain State Wilderness*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Cypre" /*Cypress Flats*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Desrt" /*Grand Senora Desert*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("ELGorl" /*El Gordo Lighthouse*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Galli" /*Galileo Park*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Galfish" /*Galilee*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Harmo" /*Harmony*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("HumLab" /*Humane Labs and Research*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Jail" /*Bolingbroke Penitentiary*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("LAct" /*Land Act Reservoir*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("LDam" /*Land Act Dam*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Lago" /*Lago Zancudo*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("MTChil" /*Mount Chiliad*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("MTJose" /*Mount Josiah*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("MTGordo" /*Mount Gordo*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("NCHU" /*North Chumash*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Oceana" /*Pacific Ocean*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Palmpow" /*Palmer-Taylor Power Station*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PBluff" /*Pacific Bluffs*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Paleto" /*Paleto Bay*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PalCov" /*Paleto Cove*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PalFor" /*Paleto Forest*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PalHigh" /*Palomino Highlands*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("RTRAK" /*Redwood Lights Track*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Rancho" /*Rancho*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("SANDY" /*Sandy Shores*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("TongvaH" /*Tongva Hills*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("TongvaV" /*Tongva Valley*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Zenora" /*Senora Freeway*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Slab" /*Stab City*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("WindF" /*Ron Alternates Wind Farm*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Zancudo" /*Zancudo River*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("SanChia" /*San Chianski Mountain Range*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("zQ_UAR" /*Davis Quartz*/, nameOfZone))
		return true;

	return false;
}

BOOL func_134(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float* pfParam4, int iParam5) // Position - 0x6E87 (28295)
{
	int endRange;
	Vector3 vector;
	var unk3;
	int num;
	float num2;
	float num3;
	int i;
	var unk22;
	float num4;
	float num5;
	var unk25;
	float num6;
	float num7;
	BOOL flag;

	if (func_144(vParam0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*fParam3 = { 1261.5804f, -3332.6846f, 5.4191f };
		*pfParam4 = 163.87f;
		return true;
	}
	else if (func_144(vParam0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*fParam3 = { -1577.1599f, 5166.5103f, 19.1864f };
		*pfParam4 = 0f;
		return true;
	}
	else if (func_144(vParam0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
	{
		*fParam3 = { -856.6151f, 163.7361f, 65.093f };
		*pfParam4 = 355.3355f;
		return true;
	}
	else if (func_144(vParam0, -39.2005f, -1473.5498f, -100f, 10.6133f, -1430.0988f, 100f))
	{
		*fParam3 = { -15.5181f, -1456.3999f, 29.4244f };
		*pfParam4 = 94.6893f;
		return true;
	}
	else if (func_144(vParam0, 1964.7421f, 3792.59f, -100f, 1992.6361f, 3840.2532f, 100f))
	{
		*fParam3 = { 1996.3718f, 3818.8308f, 31.1612f };
		*pfParam4 = 170.0221f;
		return true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -68.218704f, -1086.951f, -100f, -10.545177f, -1106.8953f, 100f, 43.5f, false, true))
	{
		*fParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*pfParam4 = 324.1257f;
		return true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 398.78986f, -1651.4174f, -100f, 423.83725f, -1619.4325f, 100f, 45f, false, true))
	{
		*fParam3 = { 416.871f, -1613.0814f, 28.1401f };
		*pfParam4 = 227.9333f;
		return true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -988.8535f, -2553.1775f, -100f, -1041.4865f, -2644.97f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*fParam3 = { -1039.5425f, -2574.467f, 12.7566f };
		*pfParam4 = 162.2744f;
		return true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -906.90204f, -2600.4607f, -100f, -959.76514f, -2692.0571f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*fParam3 = { -911.1597f, -2676.1316f, 12.7567f };
		*pfParam4 = 338.9414f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 28f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -209.33719f, -2011.0995f, 26.620369f, -257.22247f, -2076.9631f, 36.620373f, 30f, false, true))
	{
		*fParam3 = { -211.8546f, -2030.7715f, 26.6204f };
		*pfParam4 = 154.4302f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 159f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -804.05005f, 4216.4116f, 204.4872f, -509.06787f, 4135.1904f, 123.25017f, 250f, false, true))
	{
		*fParam3 = { -623.3622f, 3996f, 120.7669f };
		*pfParam4 = 37.8784f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 180f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -2203.1675f, 183.35495f, 167.40219f, -2311.5874f, 434.3828f, 195.46692f, 138.5f, false, true))
	{
		*fParam3 = { -2294.9446f, 376.2506f, 173.4669f };
		*pfParam4 = 296.6963f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 10f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -2041.478f, -553.21594f, -0.089962f, -1787.0801f, -768.08856f, 37.999176f, 220f, false, true))
	{
		*fParam3 = { -1897.0765f, -557.3334f, 10.7279f };
		*pfParam4 = 228.7709f;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -1882.8832f, -541.7442f, 4.675224f, -1929.6265f, -598.6026f, 40.4298f, 35f, false, true))
		{
			return true;
		}
		else
		{
			unk3 = 6;
			unk3[0 /*3*/] = { -1962.4679f, -503.4229f, 10.8349f };
			unk3[1 /*3*/] = { -1924.4722f, -534.7357f, 10.8181f };
			unk3[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			unk3[3 /*3*/] = { -1850.6611f, -595.8367f, 10.4649f };
			unk3[4 /*3*/] = { -1808.9995f, -632.1207f, 10.0016f };
			unk3[5 /*3*/] = { -1745.0428f, -694.4053f, 9.1245f };
			num = -1;
			num2 = 99999f;
		
			for (i = 0; i <= 5; i = i + 1)
			{
				num3 = SYSTEM::VDIST(unk3[i /*3*/], vector);
			
				if (num3 < num2)
				{
					num2 = num3;
					num = i;
				}
			}
		
			*fParam3 = { unk3[num /*3*/] };
		
			if (num == 0)
				*pfParam4 = 234.3999f;
			else if (num == 1)
				*pfParam4 = 232.2255f;
			else if (num == 2)
				*pfParam4 = 228.2855f;
			else if (num == 3)
				*pfParam4 = 231.4914f;
			else if (num == 4)
				*pfParam4 = 230.6703f;
			else if (num == 5)
				*pfParam4 = 228.7709f;
		
			return true;
		}
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 330f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -446.12f, 1057.4515f, 318.61685f, -405.83362f, 1194.4865f, 337.09656f, 106.25f, false, true))
	{
		*fParam3 = { -411.3629f, 1174.5865f, 324.6421f };
		*pfParam4 = 255.2881f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 20f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -1362.0906f, -29.26777f, -100f, -1377.9531f, 152.23888f, 100f, 50f, false, true))
	{
		endRange = iParam5 % 8;
	
		switch (endRange)
		{
			case 1:
				*fParam3 = { -1380.1006f, 95.1566f, 53.5054f };
				*pfParam4 = 4.555f;
				break;
		
			case 2:
				*fParam3 = { -1379.1394f, 84.2472f, 53.0592f };
				*pfParam4 = 6.9278f;
				break;
		
			case 3:
				*fParam3 = { -1378.4266f, 74.5077f, 52.6622f };
				*pfParam4 = 2.6813f;
				break;
		
			case 4:
				*fParam3 = { -1384.1774f, 73.9207f, 52.7438f };
				*pfParam4 = 5.542f;
				break;
		
			case 5:
				*fParam3 = { -1381.1179f, 35.7838f, 52.659f };
				*pfParam4 = 7.6687f;
				break;
		
			case 6:
				*fParam3 = { -1383.7413f, 64.1491f, 52.6647f };
				*pfParam4 = 2.5572f;
				break;
		
			case 7:
				*fParam3 = { -1382.6162f, 49.6876f, 52.6585f };
				*pfParam4 = 3.0185f;
				break;
		
			default:
				*fParam3 = { -1383.2987f, 54.4598f, 52.6562f };
				*pfParam4 = 6.2155f;
				break;
		}
	
		return true;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 48.31006f, -1120.6694f, 28.030502f, -12.123452f, -1112.0841f, 36.08567f, 60f, false, true))
		{
			endRange = iParam5 % 8;
		
			switch (endRange)
			{
				case 1:
					*fParam3 = { 50.9889f, -1092.5254f, 28.2152f };
					*pfParam4 = 150.8833f;
					break;
			
				case 2:
					*fParam3 = { 46.7725f, -1099.7506f, 28.1639f };
					*pfParam4 = 149.4322f;
					break;
			
				case 3:
					*fParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*pfParam4 = 154.1378f;
					break;
			
				case 4:
					*fParam3 = { 38.1922f, -1113.3936f, 28.1507f };
					*pfParam4 = 146.3778f;
					break;
			
				case 5:
					*fParam3 = { 13.0436f, -1124.7668f, 27.7359f };
					*pfParam4 = 91.163f;
					break;
			
				case 6:
					*fParam3 = { 1.4336f, -1125.0425f, 27.1705f };
					*pfParam4 = 91.0578f;
					break;
			
				case 7:
					*fParam3 = { -11.1811f, -1125.8105f, 26.3688f };
					*pfParam4 = 91.866f;
					break;
			
				default:
					*fParam3 = { 21.9431f, -1124.5731f, 27.9417f };
					*pfParam4 = 91.6961f;
					break;
			}
		
			return true;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1061.0181f, -2540.235f, 18.669323f, -1023.33246f, -2562.1145f, 31.576157f, 250f, false, true))
		{
			endRange = iParam5 % 8;
		
			switch (endRange)
			{
				case 1:
					*fParam3 = { -1023.9825f, -2489.8818f, 19.0755f };
					*pfParam4 = 148.7004f;
					break;
			
				case 2:
					*fParam3 = { -1029.9678f, -2500.4377f, 19.0803f };
					*pfParam4 = 148.7144f;
					break;
			
				case 3:
					*fParam3 = { -1070.5457f, -2570.8594f, 19.0836f };
					*pfParam4 = 150.0955f;
					break;
			
				case 4:
					*fParam3 = { -1056.0647f, -2545.6619f, 19.0809f };
					*pfParam4 = 149.5649f;
					break;
			
				case 5:
					*fParam3 = { -1050.578f, -2536.2185f, 19.0824f };
					*pfParam4 = 150.7363f;
					break;
			
				case 6:
					*fParam3 = { -1036.0316f, -2510.902f, 19.0794f };
					*pfParam4 = 147.2113f;
					break;
			
				case 7:
					*fParam3 = { -1044.4872f, -2525.5342f, 19.079f };
					*pfParam4 = 150.7597f;
					break;
			
				default:
					*fParam3 = { -1064.5002f, -2560.6528f, 19.0905f };
					*pfParam4 = 150.7081f;
					break;
			}
		
			return true;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1061.0587f, -2540.2537f, 10.944668f, -1023.2968f, -2562.0525f, 18.516848f, 250f, false, true))
		{
			endRange = iParam5 % 8;
		
			switch (endRange)
			{
				case 1:
					*fParam3 = { -1044.7413f, -2528.786f, 12.7568f };
					*pfParam4 = 150.9439f;
					break;
			
				case 2:
					*fParam3 = { -1050.7631f, -2539.4978f, 12.7566f };
					*pfParam4 = 150.851f;
					break;
			
				case 3:
					*fParam3 = { -1054.9523f, -2546.8596f, 12.7566f };
					*pfParam4 = 149.9285f;
					break;
			
				case 4:
					*fParam3 = { -1060.3972f, -2556.898f, 12.6066f };
					*pfParam4 = 150.8244f;
					break;
			
				case 5:
					*fParam3 = { -1020.7437f, -2490.0842f, 12.6396f };
					*pfParam4 = 148.6134f;
					break;
			
				case 6:
					*fParam3 = { -1076.9043f, -2589.1794f, 12.6858f };
					*pfParam4 = 149.0112f;
					break;
			
				case 7:
					*fParam3 = { -1026.3866f, -2501.9521f, 12.6923f };
					*pfParam4 = 149.7553f;
					break;
			
				default:
					*fParam3 = { -1070.5065f, -2578.3892f, 12.6932f };
					*pfParam4 = 148.5232f;
					break;
			}
		
			return true;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1043.3641f, -2747.29f, 16.960567f, -991.5368f, -2657.6816f, 69.12349f, 200f, false, true))
		{
			endRange = iParam5 % 8;
		
			switch (endRange)
			{
				case 1:
					*fParam3 = { -1067.8463f, -2708.9397f, 19.0588f };
					*pfParam4 = 230.9025f;
					break;
			
				case 2:
					*fParam3 = { -1058.2238f, -2716.2166f, 19.06f };
					*pfParam4 = 237.1285f;
					break;
			
				case 3:
					*fParam3 = { -1004.5667f, -2744.797f, 19.0811f };
					*pfParam4 = 255.6885f;
					break;
			
				case 4:
					*fParam3 = { -1049.5092f, -2721.58f, 19.0546f };
					*pfParam4 = 242.3581f;
					break;
			
				case 5:
					*fParam3 = { -1017.1544f, -2740.1174f, 19.0525f };
					*pfParam4 = 243.5798f;
					break;
			
				case 6:
					*fParam3 = { -1042.0872f, -2726.0767f, 19.0452f };
					*pfParam4 = 240.2381f;
					break;
			
				case 7:
					*fParam3 = { -1027.353f, -2734.4617f, 19.0509f };
					*pfParam4 = 239.8703f;
					break;
			
				default:
					*fParam3 = { -1033.7404f, -2730.7458f, 19.0521f };
					*pfParam4 = 239.9237f;
					break;
			}
		
			return true;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1047.6465f, -2754.947f, 2.941969f, -991.73145f, -2653.1533f, 16.892282f, 200f, false, true))
		{
			endRange = iParam5 % 8;
		
			switch (endRange)
			{
				case 1:
					*fParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*pfParam4 = 265.8022f;
					break;
			
				case 2:
					*fParam3 = { -980.6166f, -2748.535f, 12.757f };
					*pfParam4 = 263.5472f;
					break;
			
				case 3:
					*fParam3 = { -987.6072f, -2747.2734f, 12.6069f };
					*pfParam4 = 257.2886f;
					break;
			
				case 4:
					*fParam3 = { -1006.8151f, -2739.345f, 12.6334f };
					*pfParam4 = 242.1315f;
					break;
			
				case 5:
					*fParam3 = { -1051.8304f, -2713.5527f, 12.6333f };
					*pfParam4 = 239.9312f;
					break;
			
				case 6:
					*fParam3 = { -1041.0035f, -2719.6467f, 12.6402f };
					*pfParam4 = 240.1081f;
					break;
			
				case 7:
					*fParam3 = { -1023.8323f, -2729.4646f, 12.6445f };
					*pfParam4 = 239.6737f;
					break;
			
				default:
					*fParam3 = { -1012.8478f, -2735.1724f, 12.6656f };
					*pfParam4 = 237.6545f;
					break;
			}
		
			return true;
		}
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 20f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 845.7216f, -990.7473f, 37.469604f, 846.3397f, -1066.8805f, 16.966232f, 90f, false, true))
	{
		endRange = iParam5 % 8;
	
		switch (endRange)
		{
			case 1:
				*fParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*pfParam4 = 93.132f;
				break;
		
			case 2:
				*fParam3 = { 859.283f, -996.4102f, 28.7865f };
				*pfParam4 = 92.2581f;
				break;
		
			case 3:
				*fParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*pfParam4 = 92.714f;
				break;
		
			case 4:
				*fParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*pfParam4 = 92.8628f;
				break;
		
			case 5:
				*fParam3 = { 831.2605f, -1009.556f, 25.599f };
				*pfParam4 = 268.6186f;
				break;
		
			case 6:
				*fParam3 = { 844.6506f, -1010.0903f, 26.9894f };
				*pfParam4 = 270.076f;
				break;
		
			case 7:
				*fParam3 = { 852.2498f, -1010.1324f, 27.8091f };
				*pfParam4 = 269.722f;
				break;
		
			default:
				*fParam3 = { 861.4028f, -1010.0249f, 28.808f };
				*pfParam4 = 270.7686f;
				break;
		}
	
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 20f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 767.3736f, -1077.4288f, -10.786545f, 682.82837f, -1080.6858f, 79.673035f, 60f, false, true))
	{
		endRange = iParam5 % 8;
	
		switch (endRange)
		{
			case 1:
				*fParam3 = { 703.2726f, -1067.6997f, 21.4765f };
				*pfParam4 = 181.3629f;
				break;
		
			case 2:
				*fParam3 = { 715.2089f, -1070.3993f, 21.2708f };
				*pfParam4 = 175.43623f;
				break;
		
			case 3:
				*fParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*pfParam4 = 181.0347f;
				break;
		
			case 4:
				*fParam3 = { 709.6841f, -1086.78f, 21.419f };
				*pfParam4 = 233.169f;
				break;
		
			case 5:
				*fParam3 = { 703.807f, -1057.8665f, 21.4152f };
				*pfParam4 = 170.1609f;
				break;
		
			case 6:
				*fParam3 = { 708.1994f, -1048.1937f, 21.216f };
				*pfParam4 = 134.2729f;
				break;
		
			case 7:
				*fParam3 = { 711.1124f, -1069.4229f, 21.3129f };
				*pfParam4 = 177.9198f;
				break;
		
			default:
				*fParam3 = { 703.545f, -1078.7177f, 21.3987f };
				*pfParam4 = 180.5686f;
				break;
		}
	
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 31f;

	if (func_141(3, vector))
	{
		if (func_140(vector, 3, 0, false))
		{
			*fParam3 = { -1520.1213f, 2731.511f, 16.6437f };
			*pfParam4 = 48.1572f;
			return true;
		}
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 77.2f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 1535.9866f, -2041.497f, 68.21275f, 1529.3566f, -2204.4634f, 96.111946f, 105f, false, true))
	{
		*fParam3 = { 1540.75f, -2051.49f, 76.85f };
		*pfParam4 = 255.41f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 51.1739f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 1185.8104f, -1768.3672f, 28.311447f, 1369.068f, -1701.4515f, 66.25389f, 70f, true, true))
	{
		if (func_139(vector, 1283.3257f, -1731.5222f, 51.78555f, 17f))
		{
			*fParam3 = { 1283.3257f, -1731.5222f, 51.78555f };
			*pfParam4 = 275.4274f;
			return true;
		}
	
		if (func_139(vector, 1334.3861f, -1709.7625f, 55.70131f, 41f))
		{
			*fParam3 = { 1334.3861f, -1709.7625f, 55.70131f };
			*pfParam4 = 275.4411f;
			return true;
		}
	
		if (func_139(vector, 1246.1661f, -1750.6246f, 45.35691f, 28f))
		{
			*fParam3 = { 1246.1661f, -1750.6246f, 45.35691f };
			*pfParam4 = 301.2981f;
			return true;
		}
	
		if (func_139(vector, 1196.2716f, -1753.0505f, 37.63976f, 32f))
		{
			*fParam3 = { 1196.2716f, -1753.0505f, 37.63976f };
			*pfParam4 = 209.4354f;
			return true;
		}
	
		*fParam3 = { 1283.3257f, -1731.5222f, 51.78555f };
		*pfParam4 = 275.4274f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 25f;

	if (func_139(vector, -1693.3018f, -1109.1305f, 17.89778f, 240f))
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -1538.9806f, -941.1323f, 10.566226f, -1715.5703f, -1139.7659f, 52.203613f, 110f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -1739.989f, -1115.973f, 10.087262f, -1800.5149f, -1187.1798f, 52.0172f, 25f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -1801.7664f, -1180.2517f, 4.017236f, -1857.7177f, -1244.6284f, 38.49653f, 85f, false, true))
		{
			*fParam3 = { -1624.4452f, -976.9755f, 12.0175f };
			*pfParam4 = 141.167f;
			return true;
		}
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 10f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -1140.8896f, -1573.1349f, -6.566939f, -1067.0844f, -1675.9756f, 23.531528f, 52f, false, true))
	{
		*fParam3 = { -1095.63f, -1577.24f, 3.82f };
		*pfParam4 = 216.12f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 114f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
	{
		endRange = 3;
	
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange))
		{
			case 0:
				*fParam3 = { 1369.246f, 1147.6527f, 112.7592f };
				*pfParam4 = 182.0998f;
				break;
		
			case 1:
				*fParam3 = { 1360.8483f, 1139.121f, 112.7592f };
				*pfParam4 = 83.3356f;
				break;
		
			case 2:
				*fParam3 = { 1364.7513f, 1154.3668f, 112.7592f };
				*pfParam4 = 223.2795f;
				break;
		}
	
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 40f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 1737.3901f, 3287.7954f, 35.13897f, 1724.3452f, 3337.854f, 57.200382f, 40f, false, true))
	{
		*fParam3 = { 1782.1903f, 3300.076f, 40.4593f };
		*pfParam4 = 142.426f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 7f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -695.7981f, -1379.6785f, 24.481243f, -777.3731f, -1491.13f, -3.594945f, 72f, false, true))
	{
		*fParam3 = { -658.2056f, -1388.7886f, 9.499f };
		*pfParam4 = 174.6945f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 325f;

	if (SYSTEM::VDIST2(vector, -75.59782f, -818.60815f, 325.1745f) < 58f * 58f)
	{
		*fParam3 = { -142.367f, -895.0251f, 28.191f };
		*pfParam4 = 71.6555f;
		return true;
	}

	if (!func_137())
	{
		vector = { vParam0 };
	
		if (vParam0.f_2 == 1f)
			vector.f_2 = 36.1141f;
	
		if (func_141(7, vector))
		{
			if (func_140(vector, 7, 0, false))
			{
				*fParam3 = { -1012.3105f, -465.1634f, 36.1141f };
				*pfParam4 = 112.1485f;
				return true;
			}
		}
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 12.7091f;

	if (func_141(2, vector))
	{
		if (func_140(vector, 2, 0, false))
		{
			endRange = 4;
		
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange))
				{
					case 0:
						*fParam3 = { -979.95f, -2746.1086f, 12.7091f };
						*pfParam4 = 91.4929f;
						break;
				
					case 1:
						*fParam3 = { -1025.1935f, -2728.2175f, 12.6647f };
						*pfParam4 = 239.0041f;
						break;
				
					case 2:
						*fParam3 = { -1051.315f, -2713.0686f, 12.6676f };
						*pfParam4 = 236.4666f;
						break;
				
					case 3:
						*fParam3 = { -1095.7417f, -2637.8713f, 12.6461f };
						*pfParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				endRange = iParam5 % 8;
			
				switch (endRange)
				{
					case 1:
						*fParam3 = { -1023.9825f, -2489.8818f, 19.0755f };
						*pfParam4 = 148.7004f;
						break;
				
					case 2:
						*fParam3 = { -1029.9678f, -2500.4377f, 19.0803f };
						*pfParam4 = 148.7144f;
						break;
				
					case 3:
						*fParam3 = { -1070.5457f, -2570.8594f, 19.0836f };
						*pfParam4 = 150.0955f;
						break;
				
					case 4:
						*fParam3 = { -1056.0647f, -2545.6619f, 19.0809f };
						*pfParam4 = 149.5649f;
						break;
				
					case 5:
						*fParam3 = { -1050.578f, -2536.2185f, 19.0824f };
						*pfParam4 = 150.7363f;
						break;
				
					case 6:
						*fParam3 = { -1036.0316f, -2510.902f, 19.0794f };
						*pfParam4 = 147.2113f;
						break;
				
					case 7:
						*fParam3 = { -1044.4872f, -2525.5342f, 19.079f };
						*pfParam4 = 150.7597f;
						break;
				
					default:
						*fParam3 = { -1064.5002f, -2560.6528f, 19.0905f };
						*pfParam4 = 150.7081f;
						break;
				}
			}
		
			return true;
		}
	}

	unk22 = { -509.5746f, 4938.9185f, 146.3271f };
	num4 = 232.0109f;
	num5 = func_136(vParam0, unk22);
	unk25 = { 2450.6035f, 5129.2236f, 45.9722f };
	num6 = 241.1957f;
	num7 = func_136(vParam0, unk25);
	vector = { vParam0 };
	flag = false;

	if (vParam0.f_2 == 1f)
		vector.f_2 = 400f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -148.87766f, 4862.2036f, 305.6442f, 454.62744f, 5573.104f, 804.097f, 250f, false, true))
		flag = true;

	if (vParam0.f_2 == 1f)
		vector.f_2 = 200f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -482.89307f, 4990.2554f, 155.16011f, 7.830751f, 5009.3706f, 430.76038f, 250f, false, true))
		flag = true;

	if (flag)
	{
		*fParam3 = { unk22 };
		*pfParam4 = num4;
	
		if (num7 < num5)
		{
			*fParam3 = { unk25 };
			*pfParam4 = num6;
		}
	
		return true;
	}

	flag = false;

	if (vParam0.f_2 == 1f)
		vector.f_2 = 700f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.26465f, 250f, false, true))
		flag = true;

	if (vParam0.f_2 == 1f)
		vector.f_2 = 300f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 954.1139f, 5641.051f, 646.50543f, 2140.375f, 5377.7534f, 149.12209f, 250f, false, true))
		flag = true;

	if (vParam0.f_2 == 1f)
		vector.f_2 = 100f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 2117.3477f, 5377.2593f, 173.32973f, 2439.9338f, 5297.445f, 62.686623f, 100f, false, true))
		flag = true;

	if (vParam0.f_2 == 1f)
		vector.f_2 = 65f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 2393.3474f, 5321.5796f, 107.06242f, 2523.9456f, 5124.7456f, 41.68384f, 70f, false, true))
		flag = true;

	if (flag)
	{
		*fParam3 = { unk25 };
		*pfParam4 = num6;
	
		if (num5 < num7)
		{
			*fParam3 = { unk22 };
			*pfParam4 = num4;
		}
	
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 6f;

	if (func_135(vector, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 85.05448f, -2511.8838f, -2.996267f, -57.599766f, -2412.7163f, 15.000947f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 7.516524f, -2546.741f, 1.331557f, -177.32684f, -2417.0466f, 19.160444f, 80f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -260.03537f, -2419.9783f, 1.399635f, -27.26375f, -2423.8484f, 25.00064f, 80f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -187.4256f, -2516.0857f, -6.849975f, -186.7518f, -2438.1487f, 25.001602f, 40f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -73.60813f, -2538.5637f, -6.989857f, -183.25558f, -2465.145f, 25.020298f, 70f, false, true))
		{
			endRange = 2;
		
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange) == 0)
			{
				*fParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*pfParam4 = 253.9545f;
			}
			else
			{
				*fParam3 = { -189.6824f, -2531.6492f, 5.0031f };
				*pfParam4 = 0.0408f;
			}
		
			return true;
		}
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 28.4f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 412.27902f, 6481.8677f, 25.808207f, 468.9353f, 6442.7524f, 45.607273f, 24f, false, true))
	{
		*fParam3 = { 445.231f, 6476.948f, 28.4862f };
		*pfParam4 = 219.4788f;
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 28.2065f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 476.5394f, -1301.548f, 44.824577f, 499.58224f, -1339.0245f, 26.31703f, 35f, false, true))
	{
		*fParam3 = { 498.185f, -1288.5354f, 28.1923f };
		*pfParam4 = 181.3208f;
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 28.2065f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 496.98163f, -1412.2551f, 43.293907f, 497.269f, -1339.3639f, 26.316479f, 40f, false, true))
	{
		*fParam3 = { 504.1738f, -1421.2511f, 28.2065f };
		*pfParam4 = 83.2905f;
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 73f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 951.1704f, -147.00467f, 71.54326f, 1005.24493f, -98.44745f, 95.626785f, 70f, false, true))
	{
		*fParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*pfParam4 = 58.9938f;
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 52f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 1137.0221f, 89.068535f, 74.89022f, 1267.8208f, 292.01062f, 102.99044f, 195f, false, true))
	{
		*fParam3 = { 1118.7509f, 262.0209f, 79.8555f };
		*pfParam4 = 52.3086f;
		return true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 1137.0221f, 89.068535f, 71.89022f, 1010.04596f, -91.566986f, 103.45676f, 180f, false, true))
	{
		*fParam3 = { 1134.0535f, 53.1835f, 79.7553f };
		*pfParam4 = 145.5134f;
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 30.6f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 191.87312f, -723.55304f, 40.235764f, 79.586555f, -687.6684f, 29.547338f, 85f, false, true))
	{
		endRange = 2;
	
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange) == 0)
		{
			*fParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*pfParam4 = 162.0019f;
		}
		else
		{
			*fParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*pfParam4 = 341.8541f;
		}
	
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 33.5f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, false, true))
	{
		*fParam3 = { -88.4f, -660.9f, 35f };
		*pfParam4 = -20f;
		return true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, false, true))
	{
		*fParam3 = { 61.4f, -653.2f, 32f };
		*pfParam4 = 160f;
		return true;
	}

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.2583f, 5.7109f, 10f, false, true))
	{
		*fParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*pfParam4 = 140.7302f;
		return true;
	}

	return false;
}

BOOL func_135(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x8FAA (36778)
{
	return SYSTEM::VDIST2(vParam0, fParam3) <= fParam6 * fParam6;
}

float func_136(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x8FC4 (36804)
{
	return SYSTEM::VDIST2(fParam0, fParam0.f_1, 0f, fParam3, fParam3.f_1, 0f);
}

BOOL func_137() // Position - 0x8FDE (36830)
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (character == CHAR_MICHAEL)
	{
		if (func_138(65))
			return true;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) > 0)
			return true;
	}
	else if (character == CHAR_FRANKLIN)
	{
		if (func_138(66))
			return true;
	}
	else if (character == CHAR_TREVOR)
	{
		if (func_138(65))
			return true;
	}

	return false;
}

BOOL func_138(int iParam0) // Position - 0x903D (36925)
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114135.f_9089.f_99.f_58[iParam0];
}

BOOL func_139(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x906A (36970)
{
	float num;

	num = { fParam3 - uParam0 };
	return (num * num) + (num.f_1 * num.f_1) <= fParam6 * fParam6;
}

BOOL func_140(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x9094 (37012)
{
	var unk;
	var unk47;
	var unk93;
	int num;
	int i;
	BOOL debug;
	int num2;

	unk = 15;
	unk47 = 15;
	unk93 = 15;
	debug = false;

	switch (iParam3)
	{
		case 1:
			unk[0 /*3*/] = { -1332.2113f, 100.46083f, 40.384373f };
			unk47[0 /*3*/] = { -1094.2382f, 148.42744f, 73f };
			unk93[0] = 171.25f;
			unk[1 /*3*/] = { -999.7344f, -110.22309f, 25.257057f };
			unk47[1 /*3*/] = { -1149.4938f, 109.25583f, 73f };
			unk93[1] = 132f;
			unk[2 /*3*/] = { -1035.1129f, -84.958855f, 28.274601f };
			unk47[2 /*3*/] = { -1261.1031f, 50.081482f, 73f };
			unk93[2] = 132f;
			num = 3;
			break;
	
		case 2:
			unk[0 /*3*/] = { -804.3439f, -3346.5005f, 10f };
			unk47[0 /*3*/] = { -1816.9539f, -2768.8933f, (float)250 + iParam4 };
			unk93[0] = 247f;
			unk[1 /*3*/] = { -1911.4879f, -2934.197f, 10f };
			unk47[1 /*3*/] = { -968.6236f, -3477.7476f, (float)250 + iParam4 };
			unk93[1] = 149f;
			unk[2 /*3*/] = { -844.9433f, -2802.7852f, 10f };
			unk47[2 /*3*/] = { -1011.08105f, -3086.9038f, (float)250 + iParam4 };
			unk93[2] = 185.5f;
			unk[3 /*3*/] = { -1021.0861f, -2952.277f, 10f };
			unk47[3 /*3*/] = { -1599.0082f, -2616.2705f, (float)250 + iParam4 };
			unk93[3] = 250f;
			unk[4 /*3*/] = { -1027.1364f, -2436.457f, 10f };
			unk47[4 /*3*/] = { -1392.6105f, -2226.7634f, (float)250 + iParam4 };
			unk93[4] = 193.5f;
			unk[5 /*3*/] = { -1497.5493f, -2408.7122f, 10f };
			unk47[5 /*3*/] = { -1136.9174f, -2617.9546f, (float)250 + iParam4 };
			unk93[5] = 234.5f;
			unk[6 /*3*/] = { -982.79236f, -2831.7087f, 12.93313f };
			unk47[6 /*3*/] = { -966.46765f, -2803.458f, 16.68313f };
			unk93[6] = 16f;
			unk[7 /*3*/] = { -1110.0831f, -3496.8057f, 12f };
			unk47[7 /*3*/] = { -1955.2982f, -3010.4314f, (float)250 + iParam4 };
			unk93[7] = 80f;
			unk[8 /*3*/] = { -1886.8994f, -3193.0237f, 12f };
			unk47[8 /*3*/] = { -1836.143f, -3105.2683f, (float)250 + iParam4 };
			unk93[8] = 142f;
			unk[9 /*3*/] = { -1134.3367f, -3535.6482f, 12f };
			unk47[9 /*3*/] = { -1259.6486f, -3463.4863f, (float)250 + iParam4 };
			unk93[9] = 30.75f;
			unk[10 /*3*/] = { -969.12787f, -3463.8994f, 12f };
			unk47[10 /*3*/] = { -896.3734f, -3505.7148f, (float)250 + iParam4 };
			unk93[10] = 150f;
			unk[11 /*3*/] = { -1369.4913f, -2173.5789f, 10f };
			unk47[11 /*3*/] = { -1685.6256f, -2720.3635f, (float)250 + iParam4 };
			unk93[11] = 29.25f;
			unk[12 /*3*/] = { -1010.9256f, -3550.9434f, 10f };
			unk47[12 /*3*/] = { -1110.1978f, -3493.6172f, (float)250 + iParam4 };
			unk93[12] = 43f;
			num = 13;
			break;
	
		case 3:
			unk[0 /*3*/] = { -1773.944f, 3287.3342f, 30f };
			unk47[0 /*3*/] = { -2029.7765f, 2845.0833f, (float)250 + iParam4 };
			unk93[0] = 255f;
			unk[1 /*3*/] = { -2725.8894f, 3291.0986f, 30f };
			unk47[1 /*3*/] = { -2009.1815f, 2879.8352f, (float)250 + iParam4 };
			unk93[1] = 180f;
			unk[2 /*3*/] = { -2442.0261f, 3326.6987f, 30f };
			unk47[2 /*3*/] = { -2033.9279f, 3089.0488f, (float)250 + iParam4 };
			unk93[2] = 205f;
			unk[3 /*3*/] = { -1917.1654f, 3374.209f, 30f };
			unk47[3 /*3*/] = { -2016.7909f, 3195.058f, (float)250 + iParam4 };
			unk93[3] = 86.25f;
			unk[4 /*3*/] = { -2192.753f, 3373.2778f, 30f };
			unk47[4 /*3*/] = { -2191.5444f, 3150.4165f, (float)250 + iParam4 };
			unk93[4] = 150.5f;
			unk[5 /*3*/] = { -2077.6633f, 3344.5142f, 30f };
			unk47[5 /*3*/] = { -2191.5444f, 3150.4165f, (float)250 + iParam4 };
			unk93[5] = 140.5f;
			unk[6 /*3*/] = { -2861.7554f, 3352.6606f, 30f };
			unk47[6 /*3*/] = { -2715.8708f, 3269.9155f, (float)250 + iParam4 };
			unk93[6] = 90f;
			unk[7 /*3*/] = { -2005.5745f, 3364.5327f, 30f };
			unk47[7 /*3*/] = { -1977.5688f, 3330.8882f, (float)250 + iParam4 };
			unk93[7] = 100f;
			unk[8 /*3*/] = { -1682.235f, 3004.2852f, 30f };
			unk47[8 /*3*/] = { -1942.747f, 2947.4412f, (float)250 + iParam4 };
			unk93[8] = 248.75f;
			unk[9 /*3*/] = { -2393.2954f, 2936.406f, 31.680103f };
			unk47[9 /*3*/] = { -2453.0366f, 3006.863f, 52.310028f };
			unk93[9] = 128f;
			unk[10 /*3*/] = { -2347.1848f, 3023.8298f, 31.56573f };
			unk47[10 /*3*/] = { -2517.3298f, 2989.0635f, 49.956444f };
			unk93[10] = 140f;
			unk[11 /*3*/] = { -2259.9219f, 3358.0398f, 29.999718f };
			unk47[11 /*3*/] = { -2299.772f, 3385.79f, 38.060143f };
			unk93[11] = 16f;
			unk[12 /*3*/] = { -2476.3093f, 3363.914f, 31.679329f };
			unk47[12 /*3*/] = { -2431.9807f, 3287.6694f, 39.978264f };
			unk93[12] = 214.25f;
			unk[13 /*3*/] = { -2103.0813f, 2797.7834f, 29.37864f };
			unk47[13 /*3*/] = { -2096.8213f, 2874.4233f, 57.80989f };
			unk93[13] = 65.75f;
		
			if (bParam5)
				num2 = iParam4;
			else
				num2 = 0;
		
			unk47[9 /*3*/].f_2 = unk47[9 /*3*/].f_2 + (float)num2;
			unk47[10 /*3*/].f_2 = unk47[10 /*3*/].f_2 + (float)num2;
			unk47[11 /*3*/].f_2 = unk47[11 /*3*/].f_2 + (float)num2;
			unk47[12 /*3*/].f_2 = unk47[12 /*3*/].f_2 + (float)num2;
			unk47[13 /*3*/].f_2 = unk47[13 /*3*/].f_2 + (float)num2;
			num = 14;
			break;
	
		case 4:
			unk[0 /*3*/] = { 1541.6072f, 2527.555f, 40f };
			unk47[0 /*3*/] = { 1815.5753f, 2535.0596f, (float)150 + iParam4 };
			unk93[0] = 114f;
			unk[1 /*3*/] = { 1788.8787f, 2445.7273f, 40f };
			unk47[1 /*3*/] = { 1716.9603f, 2502.957f, (float)150 + iParam4 };
			unk93[1] = 88.5f;
			unk[2 /*3*/] = { 1601.1575f, 2436.2441f, 40f };
			unk47[2 /*3*/] = { 1650.0776f, 2515.9226f, (float)150 + iParam4 };
			unk93[2] = 133.25f;
			unk[3 /*3*/] = { 1706.3307f, 2407.5972f, 40f };
			unk47[3 /*3*/] = { 1698.5546f, 2460.2078f, (float)150 + iParam4 };
			unk93[3] = 104.5f;
			unk[4 /*3*/] = { 1712.4517f, 2756.2175f, 40f };
			unk47[4 /*3*/] = { 1718.8477f, 2589.1616f, (float)150 + iParam4 };
			unk93[4] = 121.75f;
			unk[5 /*3*/] = { 1830.2278f, 2661.2402f, 40f };
			unk47[5 /*3*/] = { 1774.8124f, 2679.4187f, (float)150 + iParam4 };
			unk93[5] = 84.5f;
			unk[6 /*3*/] = { 1559.0503f, 2632.2205f, 40f };
			unk47[6 /*3*/] = { 1657.2083f, 2595.4844f, (float)150 + iParam4 };
			unk93[6] = 103.75f;
			unk[7 /*3*/] = { 1612.0209f, 2716.869f, 40f };
			unk47[7 /*3*/] = { 1657.1647f, 2669.721f, (float)150 + iParam4 };
			unk93[7] = 104.25f;
			unk[8 /*3*/] = { 1809.8721f, 2729.827f, 40f };
			unk47[8 /*3*/] = { 1789.8551f, 2705.0369f, (float)150 + iParam4 };
			unk93[8] = 91f;
			unk[9 /*3*/] = { 1818.7888f, 2605.9478f, 40f };
			unk47[9 /*3*/] = { 1783.1143f, 2606.7832f, (float)150 + iParam4 };
			unk93[9] = 51.25f;
			num = 10;
			break;
	
		case 5:
			unk[0 /*3*/] = { 3411.002f, 3663.1846f, 20f };
			unk47[0 /*3*/] = { 3615.583f, 3626.1936f, (float)40 + iParam4 };
			unk93[0] = 45.75f;
			unk[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			unk47[1 /*3*/] = { 3643.8008f, 3694.3618f, (float)40 + iParam4 };
			unk93[1] = 99f;
			unk[2 /*3*/] = { 3446.0364f, 3795.6882f, 20f };
			unk47[2 /*3*/] = { 3650.9143f, 3766.1516f, (float)40 + iParam4 };
			unk93[2] = 81.5f;
			num = 3;
			break;
	
		case 6:
			unk[0 /*3*/] = { 526.05304f, -3391.4968f, -10f };
			unk47[0 /*3*/] = { 523.22894f, -3118.678f, (float)10 + iParam4 };
			unk93[0] = 120f;
			unk[1 /*3*/] = { 459.4397f, -3199.9895f, 4.819676f };
			unk47[1 /*3*/] = { 593.89276f, -3199.998f, 30.069256f };
			unk93[1] = 170f;
			unk[2 /*3*/] = { 552.8467f, -3111.0537f, 4.819394f };
			unk47[2 /*3*/] = { 585.3137f, -3111.8442f, 17.569231f };
			unk93[2] = 12.5f;
			unk[3 /*3*/] = { 598.46655f, -3140.1475f, 4.819257f };
			unk47[3 /*3*/] = { 597.4973f, -3117.0627f, 17.319258f };
			unk93[3] = 9.75f;
			num = 4;
			break;
	
		case 7:
			unk[0 /*3*/] = { -1108.5497f, -570.87976f, 20f };
			unk47[0 /*3*/] = { -1187.8108f, -477.50366f, (float)50 + iParam4 };
			unk93[0] = 162f;
			unk[1 /*3*/] = { -1201.3776f, -485.96732f, 20f };
			unk47[1 /*3*/] = { -1215.7959f, -464.82806f, (float)50 + iParam4 };
			unk93[1] = 124f;
			unk[2 /*3*/] = { -985.6311f, -525.42334f, 20f };
			unk47[2 /*3*/] = { -1013.3932f, -475.20575f, (float)50 + iParam4 };
			unk93[2] = 55f;
			unk[3 /*3*/] = { -1055.8492f, -477.8226f, 20f };
			unk47[3 /*3*/] = { -1073.3325f, -498.717f, (float)50 + iParam4 };
			unk93[3] = 142f;
			num = 4;
			break;
	
		case 8:
			unk[0 /*3*/] = { 461.5684f, -984.57196f, 29.439508f };
			unk47[0 /*3*/] = { 471.17004f, -984.4292f, 40.14212f };
			unk93[0] = 7.75f;
			unk[1 /*3*/] = { 457.3404f, -984.75604f, 34.439507f };
			unk47[1 /*3*/] = { 457.20837f, -993.71893f, 29.389584f };
			unk93[1] = 14.75f;
			unk[2 /*3*/] = { 477.62268f, -986.60004f, 40.00819f };
			unk47[2 /*3*/] = { 424.8687f, -986.3279f, 48.712406f };
			unk93[2] = 31.5f;
			unk[3 /*3*/] = { 474.38895f, -974.4613f, 39.557606f };
			unk47[3 /*3*/] = { 474.0358f, -1021.9721f, 49.10033f };
			unk93[3] = 30.5f;
			unk[4 /*3*/] = { 442.17685f, -974.1888f, 29.689508f };
			unk47[4 /*3*/] = { 442.18552f, -979.8635f, 33.439507f };
			unk93[4] = 6.75f;
			num = 5;
			break;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, unk[i /*3*/], unk47[i /*3*/], unk93[i], debug, true))
			return true;
	}

	return false;
}

BOOL func_141(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x9DE8 (40424)
{
	return SYSTEM::VDIST2(vParam1, func_143(iParam0)) < func_142(iParam0);
}

float func_142(int iParam0) // Position - 0x9E05 (40453)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
	
		case 2:
			return 1000000f;
	
		case 3:
			return 1500000f;
	
		case 4:
			return 500000f;
	
		case 5:
			return 500000f;
	
		case 6:
			return 500000f;
	
		case 7:
			return 500000f;
	
		case 8:
			return 500000f;
	}

	return 0f;
}

Vector3 func_143(int iParam0) // Position - 0x9E9D (40605)
{
	switch (iParam0)
	{
		case 1:
			return -1155.8766f, 48.3426f, 52.4985f;
	
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
	
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
	
		case 4:
			return 1701.6664f, 2586.2612f, 51.4925f;
	
		case 5:
			return 3525.0576f, 3711.3232f, 35.6423f;
	
		case 6:
			return 548.1421f, -3157.9612f, 5.0696f;
	
		case 7:
			return -1142.4111f, -526.4487f, 31.6878f;
	
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
	}

	return 0f, 0f, 0f;
}

BOOL func_144(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8) // Position - 0x9F87 (40839)
{
	if (fParam0 > fParam3 && fParam0 < fParam6 && fParam0.f_1 > fParam3.f_1 && fParam0.f_1 < fParam6.f_1 && fParam0.f_2 > fParam3.f_2 && fParam0.f_2 < fParam6.f_2)
		return true;

	return false;
}

BOOL func_145(var uParam0, var uParam1, var uParam2, float fParam3, float* pfParam4) // Position - 0x9FDE (40926)
{
	float num;
	float num2;
	float num3;

	num = 100000000f;
	num2 = 100000000f;
	num3 = 100000000f;
	func_157(&uParam0, &iLocal_824, &num);
	func_155(&uParam0, &iLocal_106, &num2);
	func_152(&uParam0, &iLocal_825, &num3);

	if (num < num2 && num < num3)
		if (func_151(iLocal_824, uParam0))
			if (func_150(iLocal_824, fParam3, pfParam4))
				return true;
	else if (num2 < num && num2 < num3)
		if (func_149(iLocal_106, uParam0))
			if (func_148(iLocal_106, fParam3, pfParam4))
				return true;
	else if (num3 != 100000000f)
		if (func_147(iLocal_825, uParam0))
			if (func_146(iLocal_825, fParam3, pfParam4))
				return true;

	return false;
}

BOOL func_146(int iParam0, float fParam1, float* pfParam2) // Position - 0xA0C4 (41156)
{
	switch (iParam0)
	{
		case 76:
			*fParam1 = { -1094.7108f, -2641.9817f, 12.7071f };
			*pfParam2 = 188.2694f;
			return true;
	
		case 70:
			*fParam1 = { -1917.7191f, 4445.7495f, 38.6592f };
			*pfParam2 = 45.822f;
			return true;
	
		case 71:
			*fParam1 = { -482.5762f, 1993.8499f, 206.3482f };
			*pfParam2 = 263.9373f;
			return true;
	
		case 73:
			*fParam1 = { -208.3305f, 4195.3413f, 43.1714f };
			*pfParam2 = 333.4403f;
			return true;
	
		case 74:
			*fParam1 = { 1619.446f, 3820.9602f, 33.9381f };
			*pfParam2 = 129.6464f;
			return true;
	
		case 75:
			*fParam1 = { 2045.1687f, 2155.8872f, 94.3423f };
			*pfParam2 = 347.9475f;
			return true;
	
		case 72:
			*fParam1 = { 2952.7668f, 2807.028f, 40.7635f };
			*pfParam2 = 121.2574f;
			return true;
	
		case 105:
		case 106:
			*fParam1 = { 2119.6763f, 4747.1978f, 40.1793f };
			*pfParam2 = 305.2213f;
			return true;
	
		case 125:
			*fParam1 = { -817.3487f, -1303.8899f, 4.0005f };
			*pfParam2 = 253.9379f;
			return true;
	
		case 126:
			*fParam1 = { 1118.7509f, 262.0209f, 79.8555f };
			*pfParam2 = 52.3086f;
			return true;
	
		case 127:
			*fParam1 = { 2414.0632f, 1503.7697f, 35.6614f };
			*pfParam2 = 124.0994f;
			return true;
	
		case 128:
			*fParam1 = { -203.2552f, 6536.0894f, 10.0979f };
			*pfParam2 = 311.0677f;
			return true;
	
		case 129:
			*fParam1 = { -142.367f, -895.0251f, 28.191f };
			*pfParam2 = 71.6555f;
			return true;
	
		case 131:
			*fParam1 = { -1214.2524f, 4629.887f, 133.873f };
			*pfParam2 = 123.1562f;
			return true;
	
		case 132:
			*fParam1 = { -767.9527f, 4521.882f, 91.6871f };
			*pfParam2 = 85.6363f;
			return true;
	
		case 134:
			*fParam1 = { -1363.1832f, 4468.6914f, 23.1468f };
			*pfParam2 = 272.2546f;
			return true;
	
		case 135:
			*fParam1 = { 2477.0884f, 4948.6772f, 44.0936f };
			*pfParam2 = 49.3948f;
			return true;
	
		case 136:
			*fParam1 = { 1047.9314f, -203.879f, 69.0164f };
			*pfParam2 = 62.0197f;
			return true;
	
		case 107:
			*fParam1 = { -1200.8625f, -2049.4602f, 12.9248f };
			*pfParam2 = 334.965f;
			return true;
	
		case 65:
			*fParam1 = { 1960.3881f, 3124.797f, 46.877f };
			*pfParam2 = 233.484f;
			return true;
	}

	return false;
}

BOOL func_147(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xA3FA (41978)
{
	switch (iParam0)
	{
		case 76:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 15f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -1157.5951f, -2726.6357f, 12.944641f, -1110.7938f, -2679.33f, 22.944656f, 26f, false, true))
				return true;
			break;
	
		case 70:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 38.5f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -1908.0653f, 4432.693f, 51.384197f, -1962.2119f, 4473.8f, 22.939892f, 70f, false, true))
				return true;
			break;
	
		case 71:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 206.5f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -541.8311f, 2050.5989f, 186.39044f, -499.78702f, 1968.3253f, 228.01833f, 70f, false, true))
				return true;
			break;
	
		case 73:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 43.1f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -179.85881f, 4216.1665f, 30.265049f, -246.31996f, 4226.6533f, 53.77886f, 70f, false, true))
				return true;
			break;
	
		case 74:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 34f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 1634.1221f, 3858.0493f, 28.339115f, 1573.2587f, 3800.4417f, 48.354755f, 70f, false, true))
				return true;
			break;
	
		case 75:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 94f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 2057.873f, 2059.1975f, 63.880737f, 1999.0454f, 2190.5437f, 122.2642f, 110f, false, true))
				return true;
			break;
	
		case 72:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 40.7f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 3028.0845f, 2768.167f, 57.729843f, 2944.284f, 2772.836f, 30.230679f, 85f, false, true))
				return true;
			break;
	
		case 105:
		case 106:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 305f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 2097.951f, 4820.308f, 55.481686f, 2151.2542f, 4726.398f, 31.073204f, 120f, false, true))
				return true;
			break;
	
		case 125:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 4.7f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -763.5086f, -1297.9799f, 2.000373f, -864.1372f, -1278.0072f, 24.150381f, 85f, false, true))
				return true;
			break;
	
		case 126:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 52f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 1137.0221f, 89.068535f, 74.89022f, 1267.8208f, 292.01062f, 102.99044f, 195f, false, true))
				return true;
			break;
	
		case 127:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 35.6f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 2512.3047f, 1519.4615f, 28.555042f, 2380.3738f, 1521.5872f, 58.809845f, 90f, false, true))
				return true;
			break;
	
		case 128:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 10.0979f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -193.5583f, 6533.4395f, -1.902109f, -299.2512f, 6645.0493f, 20.459734f, 120f, false, true))
				return true;
			break;
	
		case 129:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 325f;
		
			if (SYSTEM::VDIST2(vParam1, -75.59782f, -818.60815f, 325.1745f) < 58f * 58f)
				return true;
			break;
	
		case 131:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 133f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -1171.1467f, 4647.8896f, 203.79369f, -1280.1493f, 4457.5967f, 5.653551f, 120f, false, true))
				return true;
			break;
	
		case 132:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 91.6f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -687.974f, 4499.5195f, 114.78101f, -826.0081f, 4496.864f, 49.883595f, 140f, false, true))
				return true;
			break;
	
		case 134:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 23f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -1364.7009f, 4490.626f, 49.52477f, -1367.1693f, 4340.34f, -1.682158f, 100f, false, true))
				return true;
			break;
	
		case 135:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 44f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 2566.1895f, 5007.0073f, 97.36896f, 2491.7136f, 4923.261f, 30.434944f, 80f, false, true))
				return true;
			break;
	
		case 136:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 69f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 1009.91705f, -163.46835f, 102.10279f, 1113.4741f, -221.32953f, 49.874504f, 90f, false, true))
				return true;
			break;
	
		case 107:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 12f;
		
			if (SYSTEM::VDIST2(vParam1, -1230.6222f, -2049.97f, 12.8882f) < 75f * 75f)
				return true;
			break;
	
		case 65:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 47f;
		
			if (SYSTEM::VDIST2(vParam1, -1968.1f, 3116.7f, 46.8882f) < 30f * 30f)
				return true;
			break;
	}

	return false;
}

BOOL func_148(int iParam0, float fParam1, float* pfParam2) // Position - 0xAA1E (43550)
{
	int endRange;

	switch (iParam0)
	{
		case 9:
			endRange = 2;
		
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange))
			{
				case 0:
					*fParam1 = { -1646.1178f, 4206.7427f, 82.9658f };
					*pfParam2 = 251.0217f;
					break;
			
				case 1:
					*fParam1 = { -1582.8895f, 4201.4087f, 79.5905f };
					*pfParam2 = 95.4232f;
					break;
			}
		
			return true;
	
		case 11:
			endRange = 2;
		
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange))
			{
				case 0:
					*fParam1 = { 1885.4458f, 4738.6123f, 39.4154f };
					*pfParam2 = 43.9908f;
					break;
			
				case 1:
					*fParam1 = { 1702.4242f, 4687.697f, 41.9431f };
					*pfParam2 = 2.4487f;
					break;
			}
		
			return true;
	
		case 12:
			endRange = 2;
		
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange))
			{
				case 0:
					*fParam1 = { 1885.4458f, 4738.6123f, 39.4154f };
					*pfParam2 = 43.9908f;
					break;
			
				case 1:
					*fParam1 = { 1702.4242f, 4687.697f, 41.9431f };
					*pfParam2 = 2.4487f;
					break;
			}
		
			return true;
	
		case 14:
			endRange = 2;
		
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange))
			{
				case 0:
					*fParam1 = { -2934.6604f, 3238.404f, 9.4456f };
					*pfParam2 = 228.5574f;
					break;
			
				case 1:
					*fParam1 = { -2842.0232f, 3145.0862f, 9.24f };
					*pfParam2 = 45.7287f;
					break;
			}
		
			return true;
	
		case 17:
			*fParam1 = { -204.0333f, 1313.9728f, 303.4189f };
			*pfParam2 = 126.7738f;
			return true;
	
		case 18:
			*fParam1 = { -906.4329f, -2694.2803f, 12.8182f };
			*pfParam2 = 329.3241f;
			return true;
	
		case 19:
			*fParam1 = { -142.367f, -895.0251f, 28.191f };
			*pfParam2 = 71.6555f;
			return true;
	
		case 20:
			*fParam1 = { 1753.9014f, 107.8206f, 170.2481f };
			*pfParam2 = 288.8676f;
			return true;
	
		case 21:
			*fParam1 = { -1859.5427f, -411.3196f, 44.9677f };
			*pfParam2 = 242.8712f;
			return true;
	
		case 22:
			*fParam1 = { 827.072f, 1282.2883f, 359.2872f };
			*pfParam2 = 90f;
			return true;
	
		case 23:
			*fParam1 = { -640.2675f, 6050.9805f, 7.4082f };
			*pfParam2 = 138.3021f;
			return true;
	
		case 24:
			*fParam1 = { -92.2052f, -1254.8276f, 28.1682f };
			*pfParam2 = 349.959f;
			return true;
	
		case 26:
			*fParam1 = { -701.0541f, 5819.116f, 16.198f };
			*pfParam2 = 336.3649f;
			return true;
	
		case 28:
		case 29:
			*fParam1 = { 569.276f, -1730.9674f, 28.1277f };
			*pfParam2 = 246.5764f;
			return true;
	
		case 30:
			*fParam1 = { -1110.0881f, 253.6757f, 63.5431f };
			*pfParam2 = 279.1973f;
			return true;
	
		case 33:
			*fParam1 = { 67.1562f, 4560.1343f, 97.8678f };
			*pfParam2 = 113.412f;
			return true;
	
		case 37:
			*fParam1 = { -1069.0764f, 789.2375f, 164.9551f };
			*pfParam2 = 98.4554f;
			return true;
	
		case 39:
			*fParam1 = { -1073.1289f, 364.1223f, 67.3617f };
			*pfParam2 = 359.3075f;
			return true;
	
		case 43:
			*fParam1 = { -91.4237f, -1305.5577f, 28.1569f };
			*pfParam2 = 2.2198f;
			return true;
	
		case 44:
			*fParam1 = { 2479.249f, 3401.2341f, 48.9551f };
			*pfParam2 = 35.1009f;
			return true;
	
		case 47:
			*fParam1 = { -60.0571f, 292.1416f, 104.6818f };
			*pfParam2 = 74.4771f;
			return true;
	
		case 49:
			*fParam1 = { 166.2055f, 194.86f, 104.9587f };
			*pfParam2 = 247.5814f;
			return true;
	
		case 50:
			*fParam1 = { 1149.9778f, -506.4045f, 63.7076f };
			*pfParam2 = 97.5469f;
			return true;
	
		case 58:
		case 59:
		case 62:
			*fParam1 = { -27.2198f, -1467.9329f, 29.8592f };
			*pfParam2 = 273.1409f;
			return true;
	}

	return false;
}

BOOL func_149(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xAEF0 (44784)
{
	switch (iParam0)
	{
		case 9:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 83.3f;
		
			if (SYSTEM::VDIST2(vParam1, -1619.53f, 4204.1f, 83.3f) < 20f * 20f)
				return true;
			break;
	
		case 11:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 35f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 1882.7897f, 4725.034f, 34.74373f, 1701.4972f, 4677.47f, 47.89289f, 159.5f, false, true))
				return true;
			break;
	
		case 12:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 35f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 1882.7897f, 4725.034f, 34.74373f, 1701.4972f, 4677.47f, 47.89289f, 159.5f, false, true))
				return true;
			break;
	
		case 14:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 11.66f;
		
			if (SYSTEM::VDIST2(vParam1, -2892.93f, 3192.37f, 11.66f) < 50f * 50f)
				return true;
			break;
	
		case 17:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 302.86f;
		
			if (SYSTEM::VDIST2(vParam1, -188.22f, 1296.1f, 302.86f) < 50f * 50f)
				return true;
			break;
	
		case 18:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 14.64f;
		
			if (SYSTEM::VDIST2(vParam1, -954.19f, -2760.05f, 14.64f) < 50f * 50f)
				return true;
			break;
	
		case 19:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 325f;
		
			if (SYSTEM::VDIST2(vParam1, -75.59782f, -818.60815f, 325.1745f) < 58f * 58f)
				return true;
			break;
	
		case 20:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 170.29f;
		
			if (SYSTEM::VDIST2(vParam1, 1732.27f, 96.36f, 170.29f) < 50f * 50f)
				return true;
			break;
	
		case 21:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 44.9677f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -1903.3223f, -401.2384f, 19.234562f, -1844.8792f, -445.7261f, 73.56197f, 115f, false, true))
				return true;
			break;
	
		case 22:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 359f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 794.2453f, 1277.4425f, -100f, 833.82153f, 1277.1084f, 400f, 19f, false, true))
				return true;
			break;
	
		case 23:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 5f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -1015.5258f, 6287.513f, -10.944491f, -761.3104f, 5895.0137f, 45.337265f, 167.75f, false, true))
				return true;
			break;
	
		case 24:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 29.6f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -72.13491f, -1267.5868f, 27.683605f, -72.18015f, -1256.7122f, 31f, 30f, false, true))
				return true;
			break;
	
		case 26:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 16.3f;
		
			if (SYSTEM::VDIST2(vParam1, -683.4159f, 5841.0435f, 16.3306f) < 20f * 20f)
				return true;
			break;
	
		case 28:
		case 29:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 29f;
		
			if (SYSTEM::VDIST2(vParam1, 566.1639f, -1773.8171f, 29f) < 50f * 50f)
				return true;
			break;
	
		case 30:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 63.1146f;
		
			if (SYSTEM::VDIST2(vParam1, -1103.6277f, 288.1084f, 63.1146f) < 50f * 50f)
				return true;
			break;
	
		case 33:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 100f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -21.123615f, 4518.907f, 119.783615f, 43.132828f, 4538.9287f, 72.589554f, 48f, false, true))
				return true;
			break;
	
		case 37:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 67.5f;
		
			if (SYSTEM::VDIST2(vParam1, -1099.5017f, 790.26135f, 163.39977f) < 30f * 30f)
				return true;
			break;
	
		case 39:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 67.5f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -1088.4253f, 372.07227f, 62.758965f, -967.02997f, 363.59756f, 101.34832f, 75f, false, true))
				return true;
			break;
	
		case 43:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 28.2f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -91.456764f, -1296.9753f, 26.154373f, 40.67288f, -1297.4586f, 58.293682f, 110f, false, true))
				return true;
			break;
	
		case 44:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 49.9f;
		
			if (SYSTEM::VDIST2(vParam1, 2468.51f, 3437.39f, 49.9f) < 30f * 30f)
				return true;
			break;
	
		case 47:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 110f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -78.38029f, 285.52542f, 102.62859f, -51.1546f, 357.5217f, 122.06169f, 40f, false, true))
				return true;
			break;
	
		case 49:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 100f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 420.5196f, 116.28917f, 77.57532f, 212.29375f, 193.67944f, 131.8767f, 250f, false, true))
				return true;
			break;
	
		case 50:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 64f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 1140.158f, -540.9644f, 49.99944f, 972.37164f, -535.1002f, 85.64397f, 168.25f, false, true))
				return true;
			break;
	
		case 58:
		case 59:
		case 62:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 29.6f;
		
			if (SYSTEM::VDIST2(vParam1, -16.5304f, -1473.1208f, 29.611f) < 8f * 8f)
				return true;
			break;
	}

	return false;
}

BOOL func_150(int iParam0, float fParam1, float* pfParam2) // Position - 0xB5FE (46590)
{
	int endRange;

	switch (iParam0)
	{
		case 3:
			*fParam1 = { -1456.3473f, -962.5814f, 6.3112f };
			*pfParam2 = 140.57f;
			return true;
	
		case 8:
			*fParam1 = { 147.6034f, -404.7993f, 40.0892f };
			*pfParam2 = 164.0206f;
			return true;
	
		case 32:
		case 38:
			*fParam1 = { 1361.6746f, -2040.5747f, 51.0214f };
			*pfParam2 = 281.5022f;
			return true;
	
		case 41:
		case 47:
			endRange = 2;
		
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange))
			{
				case 0:
					*fParam1 = { -43.9252f, -1460.4318f, 30.7052f };
					*pfParam2 = 104.5827f;
					break;
			
				case 1:
					*fParam1 = { 14.0313f, -1460.4801f, 29.4397f };
					*pfParam2 = 61.9499f;
					break;
			}
		
			return true;
	
		case 48:
			*fParam1 = { -2313.9f, 450.9f, 173.47f };
			*pfParam2 = 178.6132f;
			return true;
	
		case 45:
			endRange = 3;
		
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange))
			{
				case 0:
					*fParam1 = { 1369.246f, 1147.6527f, 112.7592f };
					*pfParam2 = 182.0998f;
					break;
			
				case 1:
					*fParam1 = { 1360.8483f, 1139.121f, 112.7592f };
					*pfParam2 = 83.3356f;
					break;
			
				case 2:
					*fParam1 = { 1364.7513f, 1154.3668f, 112.7592f };
					*pfParam2 = 223.2795f;
					break;
			}
		
			return true;
	
		case 24:
			endRange = 2;
			*fParam1 = { 1430.0966f, -2588.0654f, 47.0326f };
			*pfParam2 = 353.6747f;
			return true;
	
		case 60:
			*fParam1 = { -943.9154f, -487.7569f, 35.7331f };
			*pfParam2 = 27.4f;
			return true;
	
		case 86:
			*fParam1 = { 764.6179f, -972.5101f, 24.903f };
			*pfParam2 = 162.2939f;
			return true;
	
		case 87:
			*fParam1 = { 185.1471f, -3047.2285f, 4.7824f };
			*pfParam2 = 163.8686f;
			return true;
	
		case 78:
			endRange = 2;
		
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange))
			{
				case 0:
					*fParam1 = { 504.1742f, -1652.4719f, 28.1893f };
					*pfParam2 = 52.3367f;
					break;
			
				case 1:
					*fParam1 = { 275.9677f, -1554.2201f, 28.0311f };
					*pfParam2 = 303.3013f;
					break;
			}
		
			return true;
	
		case 79:
			endRange = 2;
		
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange))
			{
				case 0:
					*fParam1 = { 853.9595f, -1590.9219f, 30.5996f };
					*pfParam2 = 7.148f;
					break;
			
				case 1:
					*fParam1 = { 847.5631f, -1559.7194f, 28.7923f };
					*pfParam2 = 20.965f;
					break;
			}
		
			return true;
	
		case 83:
			endRange = 2;
		
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange))
			{
				case 0:
					*fParam1 = { 2602.4272f, 2852.1726f, 35.28f };
					*pfParam2 = 19.36f;
					break;
			
				case 1:
					*fParam1 = { 2686.4038f, 2957.3896f, 35.4683f };
					*pfParam2 = 106.36f;
					break;
			}
		
			return true;
	
		case 76:
		case 84:
			*fParam1 = { 135.4725f, -1309.8962f, 28.0485f };
			*pfParam2 = 301.12f;
			return true;
	}

	return false;
}

BOOL func_151(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xB9A3 (47523)
{
	switch (iParam0)
	{
		case 3:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 7f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -1535.754f, -922.10095f, 4.122119f, -1487.8695f, -961.3929f, 26.71922f, 50f, false, true))
				return true;
			break;
	
		case 8:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 40f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 53.128983f, -463.9999f, 36.9208f, 99.3761f, -329.34763f, 118.04542f, 125f, false, true))
				return true;
			break;
	
		case 32:
		case 38:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 51.0214f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 1420.3473f, -2036.5577f, 47.360718f, 1341.1105f, -2103.8438f, 72.32651f, 55f, false, true))
				return true;
			break;
	
		case 41:
		case 47:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 51.0214f;
		
			if (SYSTEM::VDIST2(vParam1, -13.89061f, -1449.2897f, 29.64636f) < 36f * 36f)
				return true;
			break;
	
		case 48:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 173.47f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -2306.9802f, 435.30377f, 171.46657f, -2303.291f, 366.31995f, 179.60176f, 65.5f, false, true))
				return true;
			break;
	
		case 45:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 114f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
				return true;
			break;
	
		case 24:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 46f;
		
			if (SYSTEM::VDIST2(vParam1, 1330.389f, -2553.744f, 45.9221f) < 30f * 30f)
				return true;
			break;
	
		case 60:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 34.5f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, -995.97797f, -517.43243f, 11.377625f, -1060.7251f, -547.55884f, 65.33043f, 35.75f, false, true))
				return true;
			break;
	
		case 86:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 23.18f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 682.6544f, -968.7439f, 19.97575f, 762.8684f, -964.40643f, 43.037125f, 53f, false, true))
				return true;
			break;
	
		case 87:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 5f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 148.8361f, -3029.1465f, 4.277727f, 148.13957f, -3342.3435f, 22.903791f, 97.75f, false, true))
				return true;
			break;
	
		case 78:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 28.1893f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 446.8174f, -1691.7081f, 23.282328f, 288.5565f, -1552.3518f, 108.31166f, 155f, false, true))
				return true;
			break;
	
		case 79:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 28.1893f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 910.9382f, -1749.9097f, 14.506144f, 921.74146f, -1455.2479f, 99.67125f, 210f, false, true))
				return true;
			break;
	
		case 83:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 37f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 2657.3025f, 2974.5286f, 34.53447f, 2591.657f, 2880.2231f, 68.08156f, 78.75f, false, true))
				return true;
			break;
	
		case 76:
		case 84:
			if (vParam1.f_2 == 1f)
				vParam1.f_2 = 28f;
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam1, 83.32325f, -1312.1722f, 23.33694f, 148.38303f, -1273.5532f, 49.466507f, 65f, false, true))
				return true;
			break;
	}

	return false;
}

int func_152(var uParam0, var uParam1, var uParam2) // Position - 0xBDFB (48635)
{
	int num;
	float num2;
	float num3;
	int i;
	Vector3 vector;

	num = 263;
	num2 = 999999f;

	for (i = 65; i <= 111; i = i + 1)
	{
		*uParam1 = i;
	
		if (func_154(uParam1))
		{
			if (func_153(*uParam1))
			{
				vector = { func_84(*uParam1, 0) };
			
				if (uParam0->f_2 == 1f)
					vector.f_2 = 1f;
			
				num3 = SYSTEM::VDIST(*uParam0, vector);
			
				if (num3 < num2)
				{
					if (num3 < 35f)
					{
						num2 = num3;
						num = *uParam1;
					}
				}
			}
		}
	}

	for (i = 125; i <= 137; i = i + 1)
	{
		*uParam1 = i;
	
		if (func_154(uParam1))
		{
			if (func_153(*uParam1))
			{
				vector = { func_84(*uParam1, 0) };
			
				if (uParam0->f_2 == 1f)
					vector.f_2 = 1f;
			
				num3 = SYSTEM::VDIST(*uParam0, vector);
			
				if (num3 < num2)
				{
					if (num3 < 35f)
					{
						num2 = num3;
						num = *uParam1;
					}
				}
			}
		}
	}

	if (num != 263)
	{
		*uParam1 = num;
		*uParam2 = num2;
		return 1;
	}

	*uParam1 = 263;
	*uParam2 = 999999f;
	return 0;
}

BOOL func_153(int iParam0) // Position - 0xBF14 (48916)
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_33467[num /*23*/].f_19);
}

BOOL func_154(var uParam0) // Position - 0xBF50 (48976)
{
	if (*uParam0 == 70 || *uParam0 == 71 || *uParam0 == 73 || *uParam0 == 74 || *uParam0 == 75 || *uParam0 == 72 || *uParam0 == 76 || *uParam0 == 105 || *uParam0 == 106 || *uParam0 == 125 || *uParam0 == 126 || *uParam0 == 127 || *uParam0 == 128 || *uParam0 == 129 || *uParam0 == 131 || *uParam0 == 132 || *uParam0 == 134 || *uParam0 == 135 || *uParam0 == 136 || *uParam0 == 107 || *uParam0 == 65)
		return true;

	return false;
}

int func_155(var uParam0, var uParam1, var uParam2) // Position - 0xC057 (49239)
{
	int num;
	float num2;
	float num3;
	Vector3 vector;
	int i;
	var unk3;

	num = -1;
	num2 = 999999f;
	i = 0;

	for (i = 0; i < 63; i = i + 1)
	{
		*uParam1 = i;
	
		if (IS_BIT_SET(Global_114135.f_18578[*uParam1 /*6*/], 0) && !IS_BIT_SET(Global_114135.f_18578[*uParam1 /*6*/], 3))
		{
			func_98(*uParam1, &unk3);
		
			if (IS_BIT_SET(unk3.f_26, func_156()))
			{
				vector = { unk3.f_6 };
			
				if (uParam0->f_2 == 1f)
					vector.f_2 = 1f;
			
				num3 = SYSTEM::VDIST(*uParam0, vector);
			
				if (num3 < num2)
				{
					if (num3 < 209f)
					{
						num2 = num3;
						num = i;
					}
				}
			}
		}
	}

	if (num != -1)
	{
		*uParam2 = num2;
		*uParam1 = num;
		return 1;
	}

	*uParam1 = -1;
	*uParam2 = 999999f;
	return 0;
}

eCharacter func_156() // Position - 0xC120 (49440)
{
	if (func_39(14))
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
				return CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
				return CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
				return CHAR_TREVOR;
			else
				return CHAR_MULTIPLAYER;
		else
			return CHAR_MULTIPLAYER;

	return _GET_CURRENT_PLAYER_CHARACTER();
}

int func_157(var uParam0, var uParam1, var uParam2) // Position - 0xC1A4 (49572)
{
	int num;
	float num2;
	float num3;
	Vector3 blipCoords;
	int i;

	num = -1;
	num2 = 999999f;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_98596[i /*17*/])
		{
			if (Global_98596[i /*17*/].f_9 != 263)
			{
				if (HUD::DOES_BLIP_EXIST(Global_33467[Global_98596[i /*17*/].f_9 /*23*/].f_19))
				{
					blipCoords = { HUD::GET_BLIP_COORDS(Global_33467[Global_98596[i /*17*/].f_9 /*23*/].f_19) };
				
					if (uParam0->f_2 == 1f)
						blipCoords.f_2 = 1f;
				
					num3 = SYSTEM::VDIST(*uParam0, blipCoords);
				
					if (num3 < num2)
					{
						if (num3 < Global_98596[i /*17*/].f_10.f_2)
						{
							num2 = num3;
							num = i;
						}
					}
				}
			}
		}
	}

	if (num != -1)
	{
		*uParam2 = num2;
		*uParam1 = Global_98596[num /*17*/].f_5;
		return 1;
	}

	*uParam1 = -1;
	*uParam2 = 999999f;
	return 0;
}

void func_158() // Position - 0xC27C (49788)
{
	if (Global_114135.f_9089)
		Global_79556 = 1;

	return;
}

void func_159(int iParam0) // Position - 0xC293 (49811)
{
	int sizeInMembers;
	var unk;
	Ped pedAsGroupMember;
	int seatIndex;

	if (PED::DOES_GROUP_EXIST(func_6()))
	{
		PED::GET_GROUP_SIZE(func_6(), &unk, &sizeInMembers);
	
		if (sizeInMembers > 0)
		{
			if (sizeInMembers > 1)
			{
				pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 1);
			
				if (!PED::IS_PED_INJURED(pedAsGroupMember))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(pedAsGroupMember, Global_113166))
					{
						seatIndex = 0;
					
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, seatIndex, false))
						{
							seatIndex = func_160(&Global_113166);
						
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, seatIndex, false))
							{
								TASK::CLEAR_PED_TASKS(pedAsGroupMember);
								PED::SET_PED_INTO_VEHICLE(pedAsGroupMember, Global_113166, seatIndex);
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(pedAsGroupMember);
							PED::SET_PED_INTO_VEHICLE(pedAsGroupMember, Global_113166, seatIndex);
						}
					}
				}
			}
		
			pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 0);
		
			if (!PED::IS_PED_INJURED(pedAsGroupMember))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(pedAsGroupMember, Global_113166))
				{
					TASK::CLEAR_PED_TASKS(pedAsGroupMember);
					seatIndex = 1;
				
					if (iParam0 == 1)
						seatIndex = 2;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, seatIndex, false))
					{
						seatIndex = func_160(&Global_113166);
					
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, seatIndex, false))
						{
							TASK::CLEAR_PED_TASKS(pedAsGroupMember);
							PED::SET_PED_INTO_VEHICLE(pedAsGroupMember, Global_113166, seatIndex);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(pedAsGroupMember);
						PED::SET_PED_INTO_VEHICLE(pedAsGroupMember, Global_113166, seatIndex);
					}
				}
			}
		}
	}

	return;
}

int func_160(Vehicle veParam0) // Position - 0xC3BB (50107)
{
	if (ENTITY::DOES_ENTITY_EXIST(*veParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*veParam0, false))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(*veParam0, 0, false))
				return 0;
		
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(*veParam0, 1, false))
				return 1;
		
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(*veParam0, 2, false))
				return 2;
		}
	}

	return -2;
}

BOOL func_161(int iParam0, int iParam1) // Position - 0xC40C (50188)
{
	return MISC::GET_GAME_TIMER() - iParam0 > iParam1;
}

void func_162(BOOL bParam0) // Position - 0xC41E (50206)
{
	if (bParam0)
	{
		func_169();
	
		if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
			MISC::SET_BIT(&Global_8920, 16);
	
		Global_21066.f_1 = 1;
	
		if (func_168(0))
			func_163(0);
	}
	else if (Global_21066.f_1 == 1)
	{
		if (!(Global_21066.f_1 == 0))
			Global_21066.f_1 = 3;
	}

	return;
}

void func_163(int iParam0) // Position - 0xC481 (50305)
{
	if (func_167())
		return;

	if (Global_21284)
		if (func_166())
			func_165(true, true);
		else
			func_165(false, false);

	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22425 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_164())
		Global_21066.f_1 = 3;

	return;
}

BOOL func_164() // Position - 0xC50B (50443)
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

void func_165(BOOL bParam0, BOOL bParam1) // Position - 0xC532 (50482)
{
	if (bParam0)
	{
		if (func_168(0))
		{
			Global_21284 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21003);
		
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
	else if (Global_21284 == true)
	{
		Global_21284 = false;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21003);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
	}

	return;
}

BOOL func_166() // Position - 0xC5A6 (50598)
{
	return IS_BIT_SET(Global_1957675, 5);
}

BOOL func_167() // Position - 0xC5B4 (50612)
{
	return IS_BIT_SET(Global_1957675, 19);
}

BOOL func_168(int iParam0) // Position - 0xC5C3 (50627)
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

void func_169() // Position - 0xC61A (50714)
{
	if (Global_21066.f_1 == 9 || Global_21066.f_1 == 10)
	{
		Global_22478 = 0;
		Global_22474 = 1;
	}

	return;
}

void func_170() // Position - 0xC643 (50755)
{
	Vector3 entityCoords;
	float entityHeading;

	if (!PED::IS_PED_INJURED(Global_113167) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113167, Global_113166))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(Global_113166))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_idle", 3))
					if (!func_2(Global_113167, SCRIPT_TASK_VEHICLE_TEMP_ACTION))
						TASK::TASK_VEHICLE_TEMP_ACTION(Global_113167, Global_113166, 1, 1000000);
					else
						func_176();
			
				func_175(&Global_113166, iLocal_990);
			}
			else if (!func_2(Global_113167, SCRIPT_TASK_VEHICLE_PARK))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_113166, true) };
				entityHeading = ENTITY::GET_ENTITY_HEADING(Global_113166);
				TASK::TASK_VEHICLE_PARK(Global_113167, Global_113166, entityCoords, entityHeading, 3, 60f, false);
			}
		}
	}

	return;
}

void func_171() // Position - 0xC722 (50978)
{
	int driveMode;
	float speed;

	if (bLocal_60)
	{
		if (bLocal_61)
		{
			func_122();
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
			{
				if (!PED::IS_PED_INJURED(Global_113167))
				{
					if (func_173())
					{
						if (ENTITY::GET_ENTITY_SPEED(Global_113166) < 2f)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113166, true))
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_113167, Global_113166, 24, 5000);
							PED::SET_PED_KEEP_TASK(Global_113167, true);
							bLocal_65 = true;
							iLocal_950 = 2;
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_idle", 3))
					{
						if (PED::IS_PED_HEADTRACKING_PED(Global_113167, PLAYER::PLAYER_PED_ID()))
							TASK::TASK_CLEAR_LOOK_AT(Global_113167);
					
						TASK::TASK_PLAY_ANIM(Global_113167, &uLocal_952, "leanover_exit", 4f, -4f, -1, 0, 0, false, false, false);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_exit", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(Global_113167, &uLocal_952, "leanover_exit", 1.2f);
						iLocal_90 = MISC::GET_GAME_TIMER();
						func_175(&Global_113166, iLocal_990);
					}
					else if (!func_2(Global_113167, SCRIPT_TASK_PERFORM_SEQUENCE))
					{
						if (func_172(&iLocal_90, iLocal_990))
						{
							if (!func_2(Global_113167, SCRIPT_TASK_VEHICLE_TEMP_ACTION))
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_113167, Global_113166, 1, 1000000);
						}
						else
						{
							bLocal_56 = false;
						
							if (bLocal_64)
							{
								speed = 25f;
								driveMode = iLocal_70;
							}
							else
							{
								speed = 12f;
								driveMode = iLocal_69;
							}
						
							TASK::CLEAR_PED_TASKS(Global_113167);
							TASK::TASK_CLEAR_LOOK_AT(Global_113167);
							PED::SET_DRIVER_ABILITY(Global_113167, 0.5f);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_813);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, Global_113166, Global_113173, speed, driveMode, 45f);
							TASK::TASK_VEHICLE_PARK(0, Global_113166, Global_113173, Global_113179, iLocal_110, 60f, true);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_813);
							TASK::TASK_PERFORM_SEQUENCE(Global_113167, iLocal_813);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_813);
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_172(var uParam0, int iParam1) // Position - 0xC91A (51482)
{
	int sizeInMembers;
	var unk;
	Ped pedInVehicleSeat;
	Ped pedAsGroupMember;
	BOOL flag;
	BOOL flag2;
	int seatIndex;

	if (func_161(*uParam0, 2000) || *uParam0 == -1)
		return false;

	if (!PED::DOES_GROUP_EXIST(func_6()))
	{
		*uParam0 = -1;
		return false;
	}

	PED::GET_GROUP_SIZE(func_6(), &unk, &sizeInMembers);

	if (sizeInMembers < 1)
	{
		*uParam0 = -1;
		return false;
	}

	flag = true;
	flag2 = false;
	pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 0);

	if (!PED::IS_PED_INJURED(pedAsGroupMember))
	{
		seatIndex = 1;
	
		if (iParam1 == 1)
			seatIndex = 2;
	
		flag = true;
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113166, seatIndex, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			if (pedInVehicleSeat == PLAYER::PLAYER_PED_ID())
				flag = false;
			else if (pedInVehicleSeat == pedAsGroupMember)
				flag = false;
	
		if (PED::GET_PED_CONFIG_FLAG(pedAsGroupMember, 167, false))
			flag = false;
	
		if (func_2(pedAsGroupMember, SCRIPT_TASK_ENTER_VEHICLE))
		{
			flag = false;
			flag2 = true;
		}
	
		if (flag)
		{
			TASK::TASK_ENTER_VEHICLE(pedAsGroupMember, Global_113166, 20000, seatIndex, 2f, 9437185, 0, 0);
			flag2 = true;
		}
	}

	if (sizeInMembers > 1)
	{
		pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 1);
	
		if (!PED::IS_PED_INJURED(pedAsGroupMember))
		{
			flag = true;
			seatIndex = 0;
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113166, seatIndex, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
				if (pedInVehicleSeat == PLAYER::PLAYER_PED_ID())
					flag = false;
				else if (pedInVehicleSeat == pedAsGroupMember)
					flag = false;
		
			if (PED::GET_PED_CONFIG_FLAG(pedAsGroupMember, 167, false))
				flag = false;
		
			if (func_2(pedAsGroupMember, SCRIPT_TASK_ENTER_VEHICLE))
			{
				flag = false;
				flag2 = true;
			}
		
			if (flag)
			{
				TASK::TASK_ENTER_VEHICLE(pedAsGroupMember, Global_113166, 20000, seatIndex, 2f, 9437185, 0, 0);
				flag2 = true;
			}
		}
	}

	if (flag2)
		return true;

	return false;
}

BOOL func_173() // Position - 0xCAA1 (51873)
{
	if (ENTITY::IS_ENTITY_AT_COORD(Global_113166, Global_113173, 45f, 45f, 20f, false, true, 0) || bLocal_56 || iLocal_949 == 4)
	{
		bLocal_56 = true;
	
		if (TASK::GET_SCRIPT_TASK_STATUS(Global_113167, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
			return true;
	}

	return false;
}

BOOL func_174() // Position - 0xCAF8 (51960)
{
	if (bLocal_60)
	{
		if (bLocal_61)
		{
			return true;
		}
		else if (func_125(&blLocal_41, &Global_113173, &Global_113179))
		{
			iLocal_103 = 0;
			uLocal_972 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			fLocal_83 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_113173);
			bLocal_61 = true;
			return true;
		}
	}

	return false;
}

void func_175(Vehicle veParam0, int iParam1) // Position - 0xCB50 (52048)
{
	int sizeInMembers;
	var unk;
	Ped pedAsGroupMember;
	Ped pedInVehicleSeat;
	BOOL flag;
	int seatIndex;

	if (PED::DOES_GROUP_EXIST(func_6()))
	{
		PED::GET_GROUP_SIZE(func_6(), &unk, &sizeInMembers);
	
		if (sizeInMembers > 0)
		{
			pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 0);
		
			if (!PED::IS_PED_INJURED(pedAsGroupMember))
			{
				seatIndex = 1;
			
				if (iParam1 == 1)
					seatIndex = 2;
			
				flag = true;
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*veParam0, seatIndex, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
					if (pedInVehicleSeat == PLAYER::PLAYER_PED_ID())
						flag = false;
					else if (pedInVehicleSeat == pedAsGroupMember)
						flag = false;
			
				if (PED::GET_PED_CONFIG_FLAG(pedAsGroupMember, 167, false))
					flag = false;
			
				if (func_2(pedAsGroupMember, SCRIPT_TASK_ENTER_VEHICLE))
					flag = false;
			
				if (flag)
					TASK::TASK_ENTER_VEHICLE(pedAsGroupMember, *veParam0, 20000, seatIndex, 2f, 9437185, 0, 0);
			}
		
			if (sizeInMembers > 1)
			{
				pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_6(), 1);
			
				if (!PED::IS_PED_INJURED(pedAsGroupMember))
				{
					flag = true;
					seatIndex = 0;
					pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*veParam0, seatIndex, false);
				
					if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
						if (pedInVehicleSeat == PLAYER::PLAYER_PED_ID())
							flag = false;
						else if (pedInVehicleSeat == pedAsGroupMember)
							flag = false;
				
					if (PED::GET_PED_CONFIG_FLAG(pedAsGroupMember, 167, false))
						flag = false;
				
					if (func_2(pedAsGroupMember, SCRIPT_TASK_ENTER_VEHICLE))
						flag = false;
				
					if (flag)
						TASK::TASK_ENTER_VEHICLE(pedAsGroupMember, *veParam0, 20000, seatIndex, 2f, 9437185, 0, 0);
				}
			}
		}
	}

	return;
}

int func_176() // Position - 0xCC8A (52362)
{
	if (!PED::IS_PED_INJURED(Global_113167) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113167, Global_113166))
		{
			STREAMING::REQUEST_ANIM_DICT(&uLocal_952);
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&uLocal_952))
			{
				if (PED::IS_PED_HEADTRACKING_PED(Global_113167, PLAYER::PLAYER_PED_ID()))
					TASK::TASK_CLEAR_LOOK_AT(Global_113167);
			
				TASK::OPEN_SEQUENCE_TASK(&iLocal_813);
				TASK::TASK_PLAY_ANIM(0, &uLocal_952, "leanover_enter", 4f, -8f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, &uLocal_952, "leanover_idle", 4f, -8f, -1, 1, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_813);
				TASK::TASK_PERFORM_SEQUENCE(Global_113167, iLocal_813);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_813);
				return 1;
			}
		}
	}

	return 0;
}

BOOL func_177() // Position - 0xCD38 (52536)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_109))
		return true;

	if (ENTITY::DOES_ENTITY_EXIST(Global_113166))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
		{
			obLocal_109 = OBJECT::CREATE_OBJECT(hLocal_108, ENTITY::GET_ENTITY_COORDS(Global_113166, true), true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_109, Global_113166, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Global_113166, "Chassis"), uLocal_984, uLocal_987, false, false, false, false, 2, true, 0);
			VEHICLE::SET_TAXI_LIGHTS(Global_113166, false);
		
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /*Taxi*/))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("taxi" /*Taxi*/, false);
				HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(obLocal_109));
			}
		
			iLocal_93 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("taxi" /*Taxi*/);
		}
	}

	return false;
}

BOOL func_178() // Position - 0xCDD3 (52691)
{
	STREAMING::REQUEST_MODEL(hLocal_108);
	iLocal_111 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("taxi_display");
	iLocal_112 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
	STREAMING::REQUEST_ANIM_DICT(&uLocal_952);

	if (STREAMING::HAS_MODEL_LOADED(hLocal_108) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_111) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_112) && STREAMING::HAS_ANIM_DICT_LOADED(&uLocal_952))
		return true;

	return false;
}

void func_179() // Position - 0xCE2C (52780)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
		return;

	if (!CAM::DOES_CAM_EXIST(caLocal_68))
	{
		if (!func_187() && !func_186(8, -1))
		{
			caLocal_68 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			CAM::ATTACH_CAM_TO_ENTITY(caLocal_68, Global_113166, uLocal_978, true);
			func_183();
			CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(caLocal_68, true);
		}
	}
	else if (!bLocal_60 || bLocal_59)
	{
		if (!func_187() && !func_186(8, -1))
		{
			if (!CAM::IS_CAM_ACTIVE(caLocal_68))
			{
				func_182(4, 1, -1);
				CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(caLocal_68, true);
				func_181();
				CAM::SET_CAM_ACTIVE(caLocal_68, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				Global_113183 = 1;
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(true);
				func_183();
				bLocal_58 = true;
			}
			else
			{
				func_183();
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
		}
	}
	else if (CAM::IS_CAM_ACTIVE(caLocal_68))
	{
		CAM::SET_CAM_ACTIVE(caLocal_68, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		Global_113183 = 0;
		GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
		HUD::UNLOCK_MINIMAP_POSITION();
		HUD::UNLOCK_MINIMAP_ANGLE();
		HUD::SET_RADAR_ZOOM(0);
		bLocal_58 = true;
		func_180();
	}

	return;
}

void func_180() // Position - 0xCF49 (53065)
{
	int i;

	i = 0;

	for (i = 0; i < iLocal_91; i = i + 1)
	{
		if (bLocal_60)
			if (blLocal_41 == uLocal_827[i /*3*/])
				iLocal_92 = i;
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "HIGHLIGHT_DESTINATION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_92);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_181() // Position - 0xCF91 (53137)
{
	float blipCoords;

	if (HUD::DOES_BLIP_EXIST(blLocal_41))
	{
		blipCoords = { HUD::GET_BLIP_COORDS(blLocal_41) };
	
		if (CAM::DOES_CAM_EXIST(caLocal_68) && CAM::IS_CAM_ACTIVE(caLocal_68))
		{
			HUD::LOCK_MINIMAP_POSITION(blipCoords, blipCoords.f_1);
			HUD::LOCK_MINIMAP_ANGLE(0);
			HUD::SET_RADAR_ZOOM(1400);
		}
	}

	return;
}

void func_182(int iParam0, BOOL bParam1, int iParam2) // Position - 0xCFD6 (53206)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
				Global_1673655.f_137[iParam2] = bParam1;
			break;
	
		default:
			if (bParam1)
				MISC::SET_BIT(&(Global_1673655.f_1046), iParam0);
			else
				MISC::CLEAR_BIT(&(Global_1673655.f_1046), iParam0);
			break;
	}

	return;
}

void func_183() // Position - 0xD025 (53285)
{
	if (CAM::DOES_CAM_EXIST(caLocal_68))
	{
		func_184(Global_113166, &caLocal_68, uLocal_981);
		CAM::SET_CAM_FOV(caLocal_68, fLocal_74);
		CAM::SET_CAM_NEAR_CLIP(caLocal_68, 0.01f);
		CAM::SET_CAM_IS_INSIDE_VEHICLE(caLocal_68, true);
		CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
	}

	return;
}

void func_184(Vehicle veParam0, var uParam1, Vector3 vParam2, var uParam3, var uParam4) // Position - 0xD064 (53348)
{
	var entityRotation;
	float rotX;
	float rotZ;
	float rotY;
	var unk3;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
	{
		if (CAM::DOES_CAM_EXIST(*uParam1))
		{
			entityRotation = { ENTITY::GET_ENTITY_ROTATION(veParam0, 2) };
			rotY = entityRotation.f_1;
			unk3 = { func_83(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_113166, vParam2) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_113166, uLocal_978)) };
			func_185(unk3, &rotX, &rotZ, 1);
			CAM::SET_CAM_ROT(*uParam1, rotX, rotY, rotZ, 2);
		}
	}

	return;
}

void func_185(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0xD0CF (53455)
{
	float num;

	if (fParam0.f_1 != 0f)
		*uParam4 = MISC::ATAN2(fParam0, fParam0.f_1);
	else if (fParam0 < 0f)
		*uParam4 = -90f;
	else
		*uParam4 = 90f;

	if (iParam5 == 1)
	{
		*uParam4 = *uParam4 * -1f;
	
		if (*uParam4 < 0f)
			*uParam4 = *uParam4 + 360f;
	}

	num = SYSTEM::SQRT((fParam0 * fParam0) + (fParam0.f_1 * fParam0.f_1));

	if (num != 0f)
		*uParam3 = MISC::ATAN2(fParam0.f_2, num);
	else if (fParam0.f_2 < 0f)
		*uParam3 = -90f;
	else
		*uParam3 = 90f;

	return;
}

BOOL func_186(int iParam0, int iParam1) // Position - 0xD174 (53620)
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

BOOL func_187() // Position - 0xD1AC (53676)
{
	return Global_23829;
}

void func_188() // Position - 0xD1B7 (53687)
{
	int i;
	int r;
	int g;
	int b;
	var a;
	Vector3 entityCoords;
	int num;

	i = 0;
	func_193();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "CLEAR_TAXI_DISPLAY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	for (i = 0; i < iLocal_91; i = i + 1)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_827[i /*3*/]))
		{
		}
		else if (func_128(uLocal_827[i /*3*/]) == INVALID)
		{
		}
		else if (func_132(HUD::GET_BLIP_COORDS(uLocal_827[i /*3*/]), 0f, 0f, 0f, 1056964608, false))
		{
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "ADD_TAXI_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(HUD::GET_BLIP_SPRITE(uLocal_827[i /*3*/]));
			HUD::GET_HUD_COLOUR(HUD::GET_BLIP_HUD_COLOUR(uLocal_827[i /*3*/]), &r, &g, &b, &a);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(r);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(g);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(b);
			num = func_191(uLocal_827[i /*3*/]);
		
			if (num == -1)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(uLocal_827[i /*3*/]);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_189(num));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		
			if (HUD::GET_BLIP_INFO_ID_TYPE(uLocal_827[i /*3*/]) == 2)
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uLocal_827[i /*3*/]))))
					entityCoords = { ENTITY::GET_ENTITY_COORDS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uLocal_827[i /*3*/])), true) };
			else if (HUD::GET_BLIP_INFO_ID_TYPE(uLocal_827[i /*3*/]) == 1)
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uLocal_827[i /*3*/]), false))
					entityCoords = { ENTITY::GET_ENTITY_COORDS(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uLocal_827[i /*3*/]), true) };
			else
				entityCoords = { HUD::GET_BLIP_COORDS(uLocal_827[i /*3*/]) };
		
			func_69(ZONE::GET_NAME_OF_ZONE(entityCoords));
		
			if (uLocal_827[i /*3*/].f_2 == 0)
			{
				if (uLocal_827[i /*3*/].f_1 != 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(uLocal_827[i /*3*/].f_1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM2" /*~a~ and ~a~*/);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(uLocal_827[i /*3*/].f_1);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(uLocal_827[i /*3*/].f_2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		
			if (bLocal_60)
				if (blLocal_41 == uLocal_827[i /*3*/])
					iLocal_92 = i;
		}
	}

	if (bLocal_60)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SHOW_TAXI_DESTINATION");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "HIGHLIGHT_DESTINATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_92);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SET_TAXI_PRICE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_101);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SHOW_TAXI_DESTINATION");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "HIGHLIGHT_DESTINATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_92);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

char* func_189(int iParam0) // Position - 0xD425 (54309)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL" /*Barber Shop*/;
	
		case 1:
			return "SB_BAR" /*Barber Shop*/;
	
		case 2:
			return "SB_BAR" /*Barber Shop*/;
	
		case 3:
			return "SB_BAR" /*Barber Shop*/;
	
		case 4:
			return "SB_BAR" /*Barber Shop*/;
	
		case 5:
			return "SB_BAR" /*Barber Shop*/;
	
		case 6:
			return "SB_BAR" /*Barber Shop*/;
	
		case 7:
			return func_190(iParam0, 0, false);
	
		case 8:
			return func_190(iParam0, 0, false);
	
		case 9:
			return func_190(iParam0, 0, false);
	
		case 10:
			return func_190(iParam0, 0, false);
	
		case 11:
			return func_190(iParam0, 0, false);
	
		case 12:
			return func_190(iParam0, 0, false);
	
		case 13:
			return func_190(iParam0, 0, false);
	
		case 14:
			return func_190(iParam0, 0, false);
	
		case 15:
			return func_190(iParam0, 0, false);
	
		case 16:
			return func_190(iParam0, 0, false);
	
		case 17:
			return func_190(iParam0, 0, false);
	
		case 18:
			return func_190(iParam0, 0, false);
	
		case 19:
			return func_190(iParam0, 0, false);
	
		case 20:
			return func_190(iParam0, 0, false);
	
		case 21:
			return func_190(iParam0, 0, false);
	
		case 22:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 23:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 24:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 25:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 26:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 27:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 28:
			return "SB_AMU2" /*Ammu-Nation with Range*/;
	
		case 29:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 30:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 31:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 32:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 33:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 34:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 35:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 36:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 37:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 38:
			return "SB_AMU2" /*Ammu-Nation with Range*/;
	
		case 39:
			return func_190(iParam0, 0, false);
	
		case 40:
			return func_190(iParam0, 0, false);
	
		case 41:
			return func_190(iParam0, 0, false);
	
		case 42:
			return func_190(iParam0, 0, false);
	
		case 43:
			return func_190(iParam0, 0, false);
	
		case 44:
			return func_190(iParam0, 0, false);
	
		case 45:
			return func_190(iParam0, 0, false);
	
		case 46:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 47:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 48:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 49:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 52:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 50:
			return "SB_BAR" /*Barber Shop*/;
	
		case 51:
			return "S_CL_BL" /*Casino Store*/;
	
		case 53:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 54:
			return "SB_TAT" /*Tattoo Parlor*/;
	
		case 55:
			return func_190(iParam0, 0, false);
	
		case 56:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 57:
			return func_190(iParam0, 0, false);
	
		case 58:
			return func_190(iParam0, 0, false);
	
		case 59:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 60:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 61:
			return "SB_AMU" /*Ammu-Nation*/;
	}

	return "SHOP_BLIP_INV";
}

char* func_190(int iParam0, int iParam1, BOOL bParam2) // Position - 0xD87C (55420)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM" /*Empty Shop*/;
	
		case 0:
			return "S_H_01" /*Bob Mulét Hair & Beauty*/;
	
		case 1:
			return "S_H_02" /*Herr Kutz Barber*/;
	
		case 2:
			return "S_H_03" /*Beachcombover Barbers*/;
	
		case 3:
			return "S_H_04" /*O'Sheas Barbers*/;
	
		case 4:
			return "S_H_05" /*Herr Kutz Barber*/;
	
		case 5:
			return "S_H_06" /*Hair On Hawick Barbers*/;
	
		case 6:
			return "S_H_07" /*Herr Kutz Barber*/;
	
		case 7:
			return "S_CL_01" /*Discount Store*/;
	
		case 8:
			return "S_CL_02" /*Discount Store*/;
	
		case 9:
			return "S_CL_03" /*Binco Clothing*/;
	
		case 10:
			return "S_CL_04" /*Discount Store*/;
	
		case 11:
			return "S_CL_05" /*Discount Store*/;
	
		case 12:
			return "S_CL_06" /*Binco Clothing*/;
	
		case 13:
			return "S_CL_07" /*Discount Store*/;
	
		case 14:
			return "S_CM_01" /*Suburban*/;
	
		case 15:
			return "S_CM_03" /*Suburban*/;
	
		case 16:
			return "S_CM_04" /*Suburban*/;
	
		case 17:
			return "S_CM_05" /*Suburban*/;
	
		case 18:
			return "S_CH_01" /*Ponsonbys*/;
	
		case 19:
			return "S_CH_02" /*Ponsonbys*/;
	
		case 20:
			return "S_CH_03" /*Ponsonbys*/;
	
		case 21:
			return "S_CA_01" /*Vespucci Movie Masks*/;
	
		case 22:
			return "S_T_01" /*Blazing Tattoo*/;
	
		case 23:
			return "S_T_02" /*Alamo Tattoo Studio*/;
	
		case 24:
			return "S_T_03" /*Paleto Tattoo Studio*/;
	
		case 25:
			return "S_T_04" /*The Pit*/;
	
		case 26:
			return "S_T_05" /*Los Santos Tattoos*/;
	
		case 27:
			return "S_T_06" /*Ink Inc Tattoos*/;
	
		case 28:
			return "S_G_01" /*Ammu-Nation*/;
	
		case 29:
			return "S_G_02" /*Ammu-Nation*/;
	
		case 30:
			return "S_G_03" /*Ammu-Nation*/;
	
		case 31:
			return "S_G_04" /*Ammu-Nation*/;
	
		case 32:
			return "S_G_05" /*Ammu-Nation*/;
	
		case 33:
			return "S_G_06" /*Ammu-Nation*/;
	
		case 34:
			return "S_G_07" /*Ammu-Nation*/;
	
		case 35:
			return "S_G_08" /*Ammu-Nation*/;
	
		case 36:
			return "S_G_09" /*Ammu-Nation*/;
	
		case 37:
			return "S_G_10" /*Ammu-Nation*/;
	
		case 38:
			return "S_G_11" /*Ammu-Nation*/;
	
		case 39:
			return "S_MO_01" /*Los Santos Customs*/;
	
		case 40:
			return "S_MO_05" /*Los Santos Customs*/;
	
		case 41:
			return "S_MO_06" /*Los Santos Customs*/;
	
		case 42:
			return "S_MO_07" /*Beeker's Garage*/;
	
		case 43:
			return "S_MO_08" /*Los Santos Customs*/;
	
		case 44:
			return "S_MO_09" /*Benny's Original Motor Works*/;
	
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					else
						return "S_MO_10" /*Custom Mod Shop*/;
					break;
			
				case 5:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					else
						return "S_MO_10" /*Custom Mod Shop*/;
					break;
			
				case 11:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					else
						return "S_MO_B" /*Bunker Vehicle Workshop*/;
					break;
			
				case 10:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					else
						return "S_MO_T" /*Weapon & Vehicle Workshop*/;
					break;
			
				case 12:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					else
						return "S_MO_HA" /*Hangar Aircraft Workshop*/;
					break;
			
				case 13:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 14:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 15:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 23:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_DEN";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 16:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 17:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 18:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 19:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 20:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 21:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			}
		
			return "S_MO_11" /*Custom Auto Shop*/;
	
		case 46:
			return "S_G_12" /*MOC Armory*/;
	
		case 47:
			return "S_G_13" /*Avenger Armory*/;
	
		case 48:
			return "S_G_14" /*Terrorbyte Armory*/;
	
		case 49:
			return "S_G_15" /*Arena Armory*/;
	
		case 52:
			return "S_G_16" /*Arcade Armory*/;
	
		case 53:
			return "S_G_17" /*Kosatka Armory*/;
	
		case 50:
			return "S_H_08" /*Penthouse Barber*/;
	
		case 51:
			return "S_CL_09" /*Casino Store*/;
	
		case 54:
			return "S_T_07" /*LS Car Meet Tattoos*/;
	
		case 55:
			return "S_CL_10" /*Merch Shop*/;
	
		case 56:
			return "S_G_18" /*Fixer Armory*/;
	
		case 57:
			return "S_CL_11" /*Record A Studios*/;
	
		case 58:
			return "S_G_19" /*Gun Van*/;
	
		case 59:
			return "S_G_20";
	
		case 60:
			return "S_G_21";
	
		case 61:
			return "S_G_22";
	}

	return "SHOP_NAME_EMPTY";
}

int func_191(Blip blParam0) // Position - 0xDE57 (56919)
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 62; i = i + 1)
	{
		num = i;
		num2 = func_192(num);
	
		if (Global_33467[num2 /*23*/].f_19 == blParam0)
			return num;
	}

	return -1;
}

int func_192(int iParam0) // Position - 0xDE92 (56978)
{
	switch (iParam0)
	{
		case -1:
			return 263;
	
		case 0:
			return 19;
	
		case 1:
			return 20;
	
		case 2:
			return 21;
	
		case 3:
			return 22;
	
		case 4:
			return 23;
	
		case 5:
			return 24;
	
		case 6:
			return 25;
	
		case 7:
			return 26;
	
		case 8:
			return 27;
	
		case 9:
			return 28;
	
		case 10:
			return 29;
	
		case 11:
			return 30;
	
		case 12:
			return 31;
	
		case 13:
			return 32;
	
		case 14:
			return 33;
	
		case 15:
			return 35;
	
		case 16:
			return 36;
	
		case 17:
			return 37;
	
		case 18:
			return 38;
	
		case 19:
			return 39;
	
		case 20:
			return 40;
	
		case 21:
			return 41;
	
		case 22:
			return 42;
	
		case 23:
			return 43;
	
		case 24:
			return 44;
	
		case 25:
			return 45;
	
		case 26:
			return 46;
	
		case 27:
			return 47;
	
		case 28:
			return 48;
	
		case 29:
			return 49;
	
		case 30:
			return 50;
	
		case 31:
			return 51;
	
		case 32:
			return 52;
	
		case 33:
			return 53;
	
		case 34:
			return 54;
	
		case 35:
			return 55;
	
		case 36:
			return 56;
	
		case 37:
			return 57;
	
		case 38:
			return 58;
	
		case 39:
			return 59;
	
		case 40:
			return 60;
	
		case 41:
			return 61;
	
		case 42:
			return 62;
	
		case 43:
			return 63;
	
		case 44:
			return 64;
	
		case 45:
			return 64;
	
		case 46:
			return 48;
	
		case 47:
			return 48;
	
		case 48:
			return 48;
	
		case 49:
			return 48;
	
		case 52:
			return 48;
	
		case 50:
			return 25;
	
		case 51:
			return 40;
	
		case 53:
			return 48;
	
		case 54:
			return 42;
	
		case 55:
			return 40;
	
		case 56:
			return 48;
	
		case 57:
			return 40;
	
		case 58:
			return 48;
	
		case 59:
			return 48;
	
		case 60:
			return 48;
	
		case 61:
			return 48;
	
		default:
			break;
	}

	return 263;
}

void func_193() // Position - 0xE21A (57882)
{
	int i;

	iLocal_91 = 0;
	func_210();
	func_197(ebsLocal_44, false);
	func_197(ebsLocal_45, false);
	func_197(32, false);
	func_197(BLIP_OBJECTIVE_BLUE, false);
	func_197(BLIP_OBJECTIVE_GREEN, false);
	func_197(BLIP_OBJECTIVE_RED, false);
	func_197(BLIP_OBJECTIVE_YELLOW, false);
	func_197(BLIP_MICHAEL_FAMILY, false);
	func_197(BLIP_TREVOR_FAMILY, false);
	func_197(BLIP_FRANKLIN_FAMILY, false);
	func_197(BLIP_MICHAEL_TREVOR_FAMILY, false);
	func_197(BLIP_MICHAEL_FAMILY_EXILE, false);
	func_197(BLIP_TREVOR_FAMILY_EXILE, false);
	func_197(BLIP_SIMEON_FAMILY, false);
	func_197(BLIP_LAMAR_FAMILY, false);
	func_197(BLIP_LESTER_FAMILY, false);
	func_197(BLIP_CHINESE_STRAND, false);
	func_197(BLIP_FBI_OFFICERS_STRAND, false);
	func_197(BLIP_FINANCIER_STRAND, false);
	func_197(BLIP_SOLOMON_STRAND, false);
	func_197(BLIP_MARTIN_MADRAZZO, false);
	func_197(BLIP_FINALE_BANK_HEIST, false);
	func_197(BLIP_BIOLAB_HEIST, false);
	func_197(BLIP_DOCKS_HEIST, false);
	func_197(BLIP_FBI_HEIST, false);
	func_197(BLIP_JEWELRY_HEIST, false);
	func_197(BLIP_NICE_HOUSE_HEIST, false);
	func_197(BLIP_RURAL_BANK_HEIST, false);
	func_197(BLIP_FINANCIER_STRAND_GREY, true);
	func_197(BLIP_TREVOR_FAMILY_GREY, true);
	func_197(BLIP_TREVOR_FAMILY_RED, true);
	func_197(BLIP_FRANKLIN_FAMILY_GREY, true);
	func_197(BLIP_FRANKLIN_FAMILY_BLUE, true);
	func_197(BLIP_FRANKLIN_A, true);
	func_197(BLIP_FRANKLIN_B, true);
	func_197(BLIP_FRANKLIN_C, true);
	func_197(BLIP_FIRETRUCK, true);
	func_197(BLIP_SPIKES, true);
	func_197(BLIP_DRILL, true);
	func_197(BLIP_MINIGUN2, true);
	func_197(BLIP_CHINOOK, true);
	func_197(BLIP_SUBMARINE, true);
	func_197(BLIP_GAS_GRENADE, true);
	func_197(BLIP_BUGSTAR, true);
	func_197(BLIP_GETAWAY_CAR, true);
	func_197(BLIP_TOW, true);
	func_197(BLIP_GARBAGE, true);
	func_197(BLIP_HEIST_PREP, false);
	func_197(BLIP_DEVIN, false);
	func_197(BLIP_STINGER, true);
	func_197(BLIP_ZTYPE, true);
	func_197(BLIP_PROPERTY, true);
	func_197(BLIP_FAIRGROUND, true);
	func_197(BLIP_MONROE, true);
	func_197(BLIP_ABIGAIL, false);
	func_197(BLIP_BARRY, false);
	func_197(BLIP_CLETUS, false);
	func_197(BLIP_DOM, false);
	func_197(BLIP_EPSILON, false);
	func_197(BLIP_FANATIC, false);
	func_197(BLIP_JOSH, false);
	func_197(BLIP_MARYANN, false);
	func_197(BLIP_MINUTE, false);
	func_197(BLIP_OMEGA, false);
	func_197(BLIP_PAPARAZZO, false);
	func_197(BLIP_TONYA, false);
	func_197(BLIP_CELEBRITY_THEFT, false);
	func_197(BLIP_RANDOM_CHARACTER, false);
	func_197(BLIP_RANDOM_MALE, false);
	func_197(BLIP_RANDOM_FEMALE, false);
	func_197(BLIP_SHRINK, true);
	func_197(BLIP_PLANNING_LOCATIONS, false);
	func_197(BLIP_SAFEHOUSE, true);
	func_197(BLIP_GARAGE, true);
	func_197(BLIP_DOCK, true);
	func_197(BLIP_HANGAR, true);
	func_197(BLIP_GUN_SHOP, true);
	func_197(BLIP_POLICE_STATION, true);
	func_197(BLIP_POLICE, true);
	func_197(BLIP_HOSPITAL, true);
	func_197(BLIP_BUSINESS, true);
	func_197(BLIP_BUSINESS_FOR_SALE, true);
	func_197(BLIP_HELICOPTER, true);
	func_197(165, true);
	func_197(166, true);
	func_197(167, true);
	func_197(168, true);
	func_197(169, true);
	func_197(170, true);
	func_197(172, true);
	func_197(BLIP_FRIEND, true);
	func_197(BLIP_ACTIVITIES, true);
	func_197(BLIP_ARMS_DEALING, true);
	func_197(BLIP_ASSASSINS_MARK, false);
	func_197(BLIP_BASKETBALL, true);
	func_197(BLIP_CABARET_CLUB, true);
	func_197(BLIP_COMEDY_CLUB, true);
	func_197(BLIP_CINEMA, true);
	func_197(BLIP_DARTS, true);
	func_197(BLIP_FLIGHT_SCHOOL, true);
	func_197(BLIP_GOLF, true);
	func_197(BLIP_HUNTING, true);
	func_197(BLIP_MUSIC_VENUE, true);
	func_197(BLIP_OFF_ROAD_RACING, true);
	func_197(BLIP_POOL, true);
	func_197(BLIP_RACEFLAG, true);
	func_197(BLIP_RAMPAGE, true);
	func_197(BLIP_SHOOTING_RANGE, true);
	func_197(BLIP_STRIP_CLUB, true);
	func_197(BLIP_TENNIS, true);
	func_197(BLIP_TOW_TRUCK, true);
	func_197(BLIP_TRIATHLON, true);
	func_197(BLIP_VINEWOOD_TOURS, true);
	func_197(BLIP_WEED_STASH, true);
	func_197(BLIP_YOGA, true);
	func_197(BLIP_POI, true);
	func_197(BLIP_RACE_LAND, true);
	func_197(BLIP_BARBER, true);
	func_197(BLIP_CAR_MOD_SHOP, true);
	func_197(BLIP_BENNYS, true);
	func_197(BLIP_GANG_VEHICLE, true);
	func_197(BLIP_CLOTHES_STORE, true);
	func_197(BLIP_INTERNET_CAFE, true);
	func_197(BLIP_TATTOO, true);
	func_197(BLIP_BAR, true);
	func_197(98, true);
	func_197(117, true);
	iLocal_94 = func_194();
	iLocal_95 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();

	if (MISC::GET_MISSION_FLAG())
	{
		if (iLocal_94 == 0)
		{
			if (HUD::DOES_BLIP_EXIST(Global_113170))
			{
				for (i = 0; i < 40; i = i + 1)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_827[i /*3*/]))
					{
						if (uLocal_827[i /*3*/] == Global_113170)
						{
							iLocal_92 = i;
							i = 40;
						}
					}
				}
			}
		}
	}
	else if (!(Global_113170 == 0))
	{
		Global_113170 = 0;
	}

	if (MISC::GET_MISSION_FLAG())
	{
		if (!(Global_113172 == -1))
		{
			for (i = 0; i < 40; i = i + 1)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_827[i /*3*/]))
				{
					if (func_128(uLocal_827[i /*3*/]) == Global_113172)
					{
						iLocal_92 = i;
						i = 40;
					}
				}
			}
		}
	}
	else if (!(Global_113172 == INVALID))
	{
		Global_113172 = INVALID;
	}

	return;
}

int func_194() // Position - 0xE694 (59028)
{
	int num;
	Blip i;

	num = 0;

	for (i = HUD::GET_FIRST_BLIP_INFO_ID(ebsLocal_44); HUD::DOES_BLIP_EXIST(i); i = HUD::GET_NEXT_BLIP_INFO_ID(ebsLocal_44))
	{
		if (func_196(i))
		{
			if (HUD::GET_BLIP_INFO_ID_TYPE(i) == 4 || HUD::GET_BLIP_INFO_ID_TYPE(i) == 6 || HUD::GET_BLIP_INFO_ID_TYPE(i) == 3)
				num = num + 1;
		
			if (HUD::GET_BLIP_INFO_ID_TYPE(i) == 2 || HUD::GET_BLIP_INFO_ID_TYPE(i) == 1)
				if (func_195(i))
					num = num + 1;
		}
	}

	for (i = HUD::GET_FIRST_BLIP_INFO_ID(ebsLocal_45); HUD::DOES_BLIP_EXIST(i); i = HUD::GET_NEXT_BLIP_INFO_ID(ebsLocal_45))
	{
		if (func_196(i))
			if (HUD::GET_BLIP_INFO_ID_TYPE(i) == 4)
				num = num + 1;
	}

	return num;
}

BOOL func_195(Blip blParam0) // Position - 0xE750 (59216)
{
	if (HUD::GET_BLIP_HUD_COLOUR(blParam0) == 9 || HUD::GET_BLIP_HUD_COLOUR(blParam0) == 11 || HUD::GET_BLIP_HUD_COLOUR(blParam0) == 10 || HUD::GET_BLIP_HUD_COLOUR(blParam0) == 61)
		return true;

	return false;
}

BOOL func_196(Blip blParam0) // Position - 0xE796 (59286)
{
	int blipInfoIdDisplay;

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		blipInfoIdDisplay = HUD::GET_BLIP_INFO_ID_DISPLAY(blParam0);
	
		if (!(blipInfoIdDisplay == 0) && !(blipInfoIdDisplay == 1))
			return true;
	}

	return false;
}

void func_197(eBlipSprite ebsParam0, BOOL bParam1) // Position - 0xE7C6 (59334)
{
	var unk;
	BOOL flag;
	Blip firstBlipInfoId;
	int num;
	int blipInfoIdType;
	int num2;

	firstBlipInfoId = HUD::GET_FIRST_BLIP_INFO_ID(ebsParam0);
	num = 20;

	while (HUD::DOES_BLIP_EXIST(firstBlipInfoId))
	{
		if (iLocal_98 >= num)
		{
			SYSTEM::WAIT(0);
			iLocal_98 = 0;
		
			if (!func_230())
				func_238(true);
		
			func_183();
			func_225();
			func_224();
		}
	
		if (iLocal_91 < 40)
		{
			if (func_196(firstBlipInfoId))
			{
				if (func_209(firstBlipInfoId))
				{
					if (!func_207(&firstBlipInfoId))
					{
						flag = false;
					
						switch (ebsParam0)
						{
							case 32:
							case BLIP_OBJECTIVE_BLUE:
							case BLIP_OBJECTIVE_GREEN:
							case BLIP_OBJECTIVE_RED:
							case BLIP_OBJECTIVE_YELLOW:
							case BLIP_MICHAEL_FAMILY:
							case BLIP_TREVOR_FAMILY:
							case BLIP_FRANKLIN_FAMILY:
							case BLIP_MICHAEL_TREVOR_FAMILY:
							case BLIP_MICHAEL_FAMILY_EXILE:
							case BLIP_TREVOR_FAMILY_EXILE:
							case BLIP_SIMEON_FAMILY:
							case BLIP_LAMAR_FAMILY:
							case BLIP_LESTER_FAMILY:
							case BLIP_CHINESE_STRAND:
							case BLIP_FBI_OFFICERS_STRAND:
							case BLIP_FINANCIER_STRAND:
							case BLIP_SOLOMON_STRAND:
							case BLIP_MARTIN_MADRAZZO:
							case BLIP_FINALE_BANK_HEIST:
							case BLIP_BIOLAB_HEIST:
							case BLIP_DOCKS_HEIST:
							case BLIP_FBI_HEIST:
							case BLIP_JEWELRY_HEIST:
							case BLIP_NICE_HOUSE_HEIST:
							case BLIP_RURAL_BANK_HEIST:
							case BLIP_ASSASSINS_MARK:
							case BLIP_ABIGAIL:
							case BLIP_BARRY:
							case BLIP_CLETUS:
							case BLIP_DOM:
							case BLIP_EPSILON:
							case BLIP_FANATIC:
							case BLIP_JOSH:
							case BLIP_MARYANN:
							case BLIP_MINUTE:
							case BLIP_OMEGA:
							case BLIP_PAPARAZZO:
							case BLIP_TONYA:
							case BLIP_CELEBRITY_THEFT:
							case BLIP_RANDOM_CHARACTER:
							case BLIP_RANDOM_MALE:
							case BLIP_RANDOM_FEMALE:
							case BLIP_PLANNING_LOCATIONS:
							case BLIP_SAFEHOUSE:
							case BLIP_GARAGE:
							case BLIP_DOCK:
							case BLIP_HANGAR:
							case BLIP_GUN_SHOP:
							case BLIP_POLICE_STATION:
							case BLIP_POLICE:
							case BLIP_HOSPITAL:
							case BLIP_BUSINESS:
							case BLIP_BUSINESS_FOR_SALE:
							case BLIP_HELICOPTER:
							case BLIP_ACTIVITIES:
							case BLIP_ARMS_DEALING:
							case BLIP_BASKETBALL:
							case BLIP_CABARET_CLUB:
							case BLIP_COMEDY_CLUB:
							case BLIP_CINEMA:
							case BLIP_DARTS:
							case BLIP_FLIGHT_SCHOOL:
							case BLIP_GOLF:
							case BLIP_HUNTING:
							case BLIP_MUSIC_VENUE:
							case BLIP_OFF_ROAD_RACING:
							case BLIP_POOL:
							case BLIP_RACEFLAG:
							case BLIP_RAMPAGE:
							case BLIP_SHOOTING_RANGE:
							case BLIP_STRIP_CLUB:
							case BLIP_TENNIS:
							case BLIP_TOW_TRUCK:
							case BLIP_TRIATHLON:
							case BLIP_VINEWOOD_TOURS:
							case BLIP_WEED_STASH:
							case BLIP_BARBER:
							case BLIP_CAR_MOD_SHOP:
							case BLIP_BENNYS:
							case BLIP_GANG_VEHICLE:
							case BLIP_CLOTHES_STORE:
							case BLIP_INTERNET_CAFE:
							case BLIP_TATTOO:
							case BLIP_BAR:
							case 98:
							case 117:
							case BLIP_RACE_LAND:
							case BLIP_YOGA:
							case BLIP_POI:
							case BLIP_SHRINK:
							case BLIP_FINANCIER_STRAND_GREY:
							case BLIP_TREVOR_FAMILY_GREY:
							case BLIP_TREVOR_FAMILY_RED:
							case BLIP_FRANKLIN_FAMILY_GREY:
							case BLIP_FRANKLIN_FAMILY_BLUE:
							case BLIP_FRANKLIN_A:
							case BLIP_FRANKLIN_B:
							case BLIP_FRANKLIN_C:
							case 165:
							case 166:
							case 167:
							case 168:
							case 169:
							case 170:
							case 172:
							case BLIP_FRIEND:
							case BLIP_DEVIN:
							case BLIP_STINGER:
							case BLIP_ZTYPE:
							case BLIP_PROPERTY:
							case BLIP_FAIRGROUND:
							case BLIP_MONROE:
							case BLIP_FIRETRUCK:
							case BLIP_SPIKES:
							case BLIP_DRILL:
							case BLIP_MINIGUN2:
							case BLIP_CHINOOK:
							case BLIP_SUBMARINE:
							case BLIP_GAS_GRENADE:
							case BLIP_BUGSTAR:
							case BLIP_GETAWAY_CAR:
							case BLIP_TOW:
							case BLIP_GARBAGE:
								flag = true;
								break;
						
							case BLIP_HEIST_PREP:
								num2 = func_206(&firstBlipInfoId);
							
								if (num2 == 33 || num2 == 92 || num2 == 89 || num2 == 88)
									flag = false;
								else
									flag = true;
								break;
						
							default:
								flag = false;
							
								if (ebsParam0 == ebsLocal_45)
									flag = true;
								else if (ebsParam0 == ebsLocal_44)
									if (func_205(&firstBlipInfoId))
										flag = true;
								break;
						}
					
						if (HUD::DOES_BLIP_EXIST(Global_113169))
							if (func_128(firstBlipInfoId) == ebsLocal_44)
								if (!(Global_113169 == firstBlipInfoId))
									flag = false;
					
						if (flag)
						{
							flag = false;
						
							if (func_196(firstBlipInfoId))
							{
								blipInfoIdType = HUD::GET_BLIP_INFO_ID_TYPE(firstBlipInfoId);
							
								if (blipInfoIdType == 4 || blipInfoIdType == 5 || blipInfoIdType == 2 || blipInfoIdType == 1)
									flag = true;
							}
						
							if (flag)
							{
								func_204(&firstBlipInfoId, &unk);
								func_198(unk, bParam1);
							}
						}
					}
				}
			}
		}
	
		iLocal_98 = iLocal_98 + 1;
		firstBlipInfoId = HUD::GET_NEXT_BLIP_INFO_ID(ebsParam0);
	}

	return;
}

void func_198(Blip blParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0xEC1C (60444)
{
	int i;
	int num;

	i = 0;
	num = 0;

	if (func_128(blParam0) == INVALID)
		return;

	for (i = 0; i < 40; i = i + 1)
	{
		if (func_128(uLocal_827[i /*3*/]) == func_128(blParam0))
		{
			num = i;
			i = 40;
		}
		else if (i == iLocal_91)
		{
			num = i;
			i = 40;
		}
	}

	i = 0;

	for (i = 0; i < 40; i = i + 1)
	{
		if (i < num)
			i = num;
	
		if (i < iLocal_91)
		{
			if (func_128(uLocal_827[i /*3*/]) == func_128(blParam0))
			{
				if (func_202(blParam0, uLocal_827[i /*3*/]))
				{
					if (bParam3)
					{
						func_201(blParam0, i);
						i = 40;
						return;
					}
					else
					{
						func_199(blParam0, i);
						iLocal_91 = iLocal_91 + 1;
						i = 40;
						return;
					}
				}
				else if (bParam3)
				{
					i = 40;
					return;
				}
			}
			else
			{
				func_199(blParam0, i);
				iLocal_91 = iLocal_91 + 1;
				i = 40;
				return;
			}
		}
		else
		{
			func_199(blParam0, i);
			iLocal_91 = iLocal_91 + 1;
			i = 40;
			return;
		}
	}

	return;
}

void func_199(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xED3B (60731)
{
	func_200(iParam3);
	uLocal_827[iParam3 /*3*/] = { uParam0 };

	if (func_128(uLocal_827[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		iLocal_97 = iParam3;
		uLocal_975 = { HUD::GET_BLIP_COORDS(uLocal_827[iParam3 /*3*/]) };
	}

	return;
}

void func_200(int iParam0) // Position - 0xED7C (60796)
{
	int i;
	var unk;

	for (i = 39; i > iParam0; i = i - 1)
	{
		unk = { uLocal_827[i - 1 /*3*/] };
		uLocal_827[i /*3*/] = { unk };
	
		if (i - 1 == iLocal_97)
			iLocal_97 = i;
	}

	return;
}

void func_201(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xEDC1 (60865)
{
	uLocal_827[iParam3 /*3*/] = { uParam0 };

	if (func_128(uLocal_827[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		iLocal_97 = iParam3;
		uLocal_975 = { HUD::GET_BLIP_COORDS(uLocal_827[iParam3 /*3*/]) };
	}

	return;
}

BOOL func_202(Blip blParam0, var uParam1, var uParam2, Blip blParam3, var uParam4, var uParam5) // Position - 0xEDFC (60924)
{
	if (func_203(blParam0) < func_203(blParam3))
		return true;

	return false;
}

float func_203(Blip blParam0) // Position - 0xEE19 (60953)
{
	Vector3 vector;

	vector = { 0f, 0f, 10000000f };

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (HUD::DOES_BLIP_EXIST(blParam0))
			vector = { func_48(blParam0) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	return SYSTEM::VMAG(vector);
}

void func_204(var uParam0, var uParam1) // Position - 0xEE5C (61020)
{
	Vector3 vector;

	*uParam1 = *uParam0;

	if (!(*uParam1 == Global_113171))
	{
		vector = { func_48(*uParam1) };
		PATHFIND::GET_STREET_NAME_AT_COORD(vector, &(uParam1->f_1), &(uParam1->f_2));
	}
	else
	{
		PATHFIND::GET_STREET_NAME_AT_COORD(Global_113173, &(uParam1->f_1), &(uParam1->f_2));
	}

	return;
}

BOOL func_205(var uParam0) // Position - 0xEEA6 (61094)
{
	int blipHudColour;

	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		blipHudColour = HUD::GET_BLIP_HUD_COLOUR(*uParam0);
	
		if (blipHudColour == 9 || blipHudColour == 11 || blipHudColour == 10 || blipHudColour == 61)
			return true;
		else if (blipHudColour == 12 || blipHudColour == 14 || blipHudColour == 13)
			return true;
	}

	return false;
}

int func_206(var uParam0) // Position - 0xEF14 (61204)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_98596[i /*17*/])
			if (Global_98596[i /*17*/].f_9 != 263)
				if (HUD::DOES_BLIP_EXIST(Global_33467[Global_98596[i /*17*/].f_9 /*23*/].f_19))
					if (Global_33467[Global_98596[i /*17*/].f_9 /*23*/].f_19 == *uParam0)
						return Global_98596[i /*17*/].f_5;
	}

	return -1;
}

BOOL func_207(var uParam0) // Position - 0xEF87 (61319)
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
		return true;

	if (Global_113168 == *uParam0)
		return true;

	if (HUD::GET_BLIP_COLOUR(*uParam0) == 39)
		return true;

	if (func_208(HUD::GET_BLIP_COORDS(*uParam0), 0f, 0f, 0f, false))
		return true;

	if (func_128(*uParam0) == INVALID)
		return true;

	return false;
}

BOOL func_208(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0xEFE2 (61410)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_209(Blip blParam0) // Position - 0xF029 (61481)
{
	float num;

	if (!(func_128(blParam0) == ebsLocal_44))
	{
		num = func_203(blParam0);
	
		if (num > 50f)
			return true;
	}
	else
	{
		return true;
	}

	return false;
}

void func_210() // Position - 0xF05D (61533)
{
	int i;

	for (i = 0; i < 40; i = i + 1)
	{
		uLocal_827[i /*3*/] = 0;
	}

	iLocal_91 = 0;
	iLocal_97 = -1;
	uLocal_975 = { 0f, 0f, 0f };
	iLocal_98 = 0;
	return;
}

BOOL func_211() // Position - 0xF091 (61585)
{
	BOOL flag;
	var blipCoords;
	Blip firstBlipInfoId;

	flag = false;

	if (!HUD::DOES_BLIP_EXIST(uLocal_827[iLocal_92 /*3*/]))
		if (iLocal_92 != iLocal_97)
			return true;

	if (SYSTEM::TIMERB() > 250)
	{
		if (!flag)
		{
			if (iLocal_95 != HUD::GET_NUMBER_OF_ACTIVE_BLIPS())
				flag = true;
		
			iLocal_95 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
		
			if (iLocal_96 != func_212())
				flag = true;
		
			iLocal_96 = func_212();
		}
	
		if (!flag)
		{
			if (iLocal_97 != -1)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_827[iLocal_97 /*3*/]))
				{
					if (func_128(uLocal_827[iLocal_97 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
					{
						blipCoords = { HUD::GET_BLIP_COORDS(uLocal_827[iLocal_97 /*3*/]) };
					
						if (!func_132(blipCoords, uLocal_975, 1056964608, false))
							flag = true;
					}
				}
				else
				{
					firstBlipInfoId = HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID());
				
					if (HUD::DOES_BLIP_EXIST(firstBlipInfoId))
					{
						blipCoords = { HUD::GET_BLIP_COORDS(firstBlipInfoId) };
					
						if (!func_132(blipCoords, uLocal_975, 1056964608, false))
							flag = true;
					}
				}
			}
		}
	
		SYSTEM::SETTIMERB(0);
	}

	return flag;
}

int func_212() // Position - 0xF185 (61829)
{
	int num;

	num = 0;

	if (func_3(Global_113166))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, -1, false))
			num = num + 1;
	
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, 0, false))
			num = num + 1;
	
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, 1, false))
			num = num + 1;
	
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, 2, false))
			num = num + 1;
	}

	return num;
}

void func_213() // Position - 0xF1ED (61933)
{
	if (iLocal_949 != 0)
	{
		HUD::SET_TEXT_RENDER_ID(iLocal_93);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_111, fLocal_86, fLocal_87, fLocal_84, fLocal_85, 0, 0, 0, 255, 0);
	}

	return;
}

void func_214() // Position - 0xF22C (61996)
{
	int num;
	var unk;
	var unk2;
	var unk3;

	if (iLocal_949 != 0)
	{
		if (iLocal_91 > 1)
		{
			func_219(&num, &unk, &unk2, &unk3, false);
		
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD);
			}
		
			if (num > 28 || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
			{
				if (!bLocal_62)
				{
					if (bLocal_60)
					{
						if (bLocal_59)
							func_218();
						else
							bLocal_58 = true;
					
						bLocal_59 = true;
					}
					else
					{
						func_218();
					}
				
					iLocal_104 = MISC::GET_GAME_TIMER();
					bLocal_62 = true;
				}
			}
			else
			{
				bLocal_62 = false;
			}
		
			if (num < -28 || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
			{
				if (!bLocal_63)
				{
					if (bLocal_60)
					{
						if (bLocal_59)
							func_216();
						else
							bLocal_58 = true;
					
						bLocal_59 = true;
					}
					else
					{
						func_216();
					}
				
					iLocal_104 = MISC::GET_GAME_TIMER();
					bLocal_63 = true;
				}
			}
			else
			{
				bLocal_63 = false;
			}
		}
	
		if (!bLocal_60)
		{
			if (iLocal_91 > 0)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_827[iLocal_92 /*3*/]))
					{
						iLocal_826 = 2;
						blLocal_41 = { uLocal_827[iLocal_92 /*3*/] };
						bLocal_56 = false;
						iLocal_90 = MISC::GET_GAME_TIMER();
						iLocal_99 = MISC::GET_GAME_TIMER();
						iLocal_100 = MISC::GET_GAME_TIMER();
						iLocal_88 = 0;
						iLocal_948 = 0;
						bLocal_60 = true;
						bLocal_58 = true;
						bLocal_59 = false;
					}
				}
			}
		}
		else
		{
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		
			if (iLocal_949 == 2)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_CANCEL))
				{
					iLocal_826 = 13;
					bLocal_58 = true;
				
					if (!PED::IS_PED_INJURED(Global_113167))
						TASK::CLEAR_PED_TASKS(Global_113167);
				
					iLocal_949 = 3;
				}
			
				if (!bLocal_64)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION))
					{
						iLocal_826 = 20;
						bLocal_64 = true;
						bLocal_58 = true;
						fLocal_73 = 0.22f * 2f;
					
						if (!PED::IS_PED_INJURED(Global_113167))
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_enter", 3))
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_idle", 3))
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_exit", 3))
										TASK::CLEAR_PED_TASKS(Global_113167);
					}
				}
			
				if (func_75())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT))
					{
						if (bLocal_61)
						{
							bLocal_58 = true;
							iLocal_89 = MISC::GET_GAME_TIMER();
							iLocal_951 = 0;
							iLocal_949 = 4;
						}
					}
				}
			
				if (iLocal_826 == 0)
				{
					if (iLocal_99 != -1)
					{
						if (func_161(iLocal_99, 68000))
						{
							iLocal_826 = 4;
							iLocal_99 = -1;
						}
					}
				}
			
				if (iLocal_826 == 0)
				{
					if (iLocal_100 != -1)
					{
						if (func_161(iLocal_100, 5000))
						{
							if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_VEH_NEXT_RADIO) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_VEH_PREV_RADIO) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_VEH_RADIO_WHEEL))
							{
								iLocal_826 = 17;
								iLocal_99 = -1;
							}
						}
					}
				}
			}
			else if (iLocal_949 == 3)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_CANCEL))
				{
					iLocal_826 = 3;
					bLocal_58 = true;
					iLocal_949 = 2;
				}
			}
		
			if (bLocal_59)
			{
				if (func_215())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_827[iLocal_92 /*3*/]))
						{
							iLocal_826 = 9;
							bLocal_61 = false;
						
							if (iLocal_949 == 3)
								iLocal_949 = 2;
						
							bLocal_58 = true;
							blLocal_41 = { uLocal_827[iLocal_92 /*3*/] };
							bLocal_56 = false;
							iLocal_90 = MISC::GET_GAME_TIMER();
							iLocal_88 = 0;
							iLocal_948 = 0;
						
							if (!PED::IS_PED_INJURED(Global_113167))
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_enter", 3))
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_idle", 3))
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_exit", 3))
											TASK::CLEAR_PED_TASKS(Global_113167);
						
							iLocal_104 = MISC::GET_GAME_TIMER();
							bLocal_59 = false;
						}
					}
				
					if (func_161(iLocal_104, 3000))
						bLocal_59 = false;
				}
			}
		}
	}

	return;
}

BOOL func_215() // Position - 0xF595 (62869)
{
	if (CAM::DOES_CAM_EXIST(caLocal_68))
		if (CAM::IS_CAM_ACTIVE(caLocal_68))
			return true;

	if (bLocal_59)
		return true;

	return false;
}

void func_216() // Position - 0xF5BD (62909)
{
	float blipCoords;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_92 = iLocal_92 - 1;

	if (iLocal_92 < 0)
		iLocal_92 = iLocal_91 - 1;

	if (HUD::DOES_BLIP_EXIST(uLocal_827[iLocal_92 /*3*/]))
	{
		blipCoords = { HUD::GET_BLIP_COORDS(uLocal_827[iLocal_92 /*3*/]) };
	
		if (!func_217(blipCoords))
			HUD::LOCK_MINIMAP_POSITION(blipCoords, blipCoords.f_1);
	}

	return;
}

BOOL func_217(float fParam0, var uParam1, var uParam2) // Position - 0xF622 (63010)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_218() // Position - 0xF64C (63052)
{
	float blipCoords;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_92 = iLocal_92 + 1;

	if (iLocal_92 > iLocal_91 - 1)
		iLocal_92 = 0;

	if (HUD::DOES_BLIP_EXIST(uLocal_827[iLocal_92 /*3*/]))
	{
		blipCoords = { HUD::GET_BLIP_COORDS(uLocal_827[iLocal_92 /*3*/]) };
	
		if (!func_217(blipCoords))
			HUD::LOCK_MINIMAP_POSITION(blipCoords, blipCoords.f_1);
	}

	return;
}

void func_219(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xF6B1 (63153)
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

BOOL func_220() // Position - 0xF786 (63366)
{
	if (iLocal_949 == 4)
		return true;

	if (func_222())
		return true;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return true;

	if (func_221())
		return true;

	if (func_186(8, -1))
		return true;

	if (func_168(0))
		return true;

	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
		return true;

	if (func_187())
		return true;

	if (Global_79800 || Global_79801)
		return true;

	return false;
}

BOOL func_221() // Position - 0xF800 (63488)
{
	return MISC::GET_GAME_TIMER() <= Global_23970.f_6481 + 100;
}

BOOL func_222() // Position - 0xF815 (63509)
{
	return Global_76640;
}

void func_223() // Position - 0xF821 (63521)
{
	if (!(Global_113171 == 0))
		if (!HUD::DOES_BLIP_EXIST(Global_113171))
			Global_113171 = 0;

	return;
}

void func_224() // Position - 0xF844 (63556)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 2);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 3);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 4);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 5);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 15);
	}

	return;
}

void func_225() // Position - 0xF895 (63637)
{
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(PLAYER_CONTROL);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(CAMERA_CONTROL);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(FRONTEND_CONTROL);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
	func_226();
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);

	if (func_222() || func_168(0))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);

	return;
}

void func_226() // Position - 0xF902 (63746)
{
	MISC::SET_BIT(&Global_8920, 4);
	return;
}

BOOL func_227() // Position - 0xF912 (63762)
{
	Ped pedInVehicleSeat;

	if (Global_113167 == 0)
		return false;

	if (!PED::IS_PED_INJURED(Global_113167))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Global_113167, Global_113166))
				return false;
		else
			return false;
	else
		return false;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (func_228(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
				
					if (!(pedInVehicleSeat == PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(pedInVehicleSeat))
						{
							Global_113182 = true;
							PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
							return true;
						}
					}
				}
			}
		}
	}

	if (CAM::DOES_CAM_EXIST(caLocal_68))
	{
		if (CAM::IS_CAM_ACTIVE(caLocal_68))
		{
			GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
			Global_113183 = 0;
		}
	
		CAM::SET_CAM_ACTIVE(caLocal_68, false);
		CAM::DESTROY_CAM(caLocal_68, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::UNLOCK_MINIMAP_POSITION();
		HUD::UNLOCK_MINIMAP_ANGLE();
		HUD::SET_RADAR_ZOOM(0);
	}

	return false;
}

BOOL func_228(Vehicle veParam0) // Position - 0xFA21 (64033)
{
	if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("taxi")))
		return true;

	return false;
}

BOOL func_229(int iParam0) // Position - 0xFA3C (64060)
{
	Vector3 entityCoords;
	float num;
	float num2;
	float num3;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return true;

	if (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()) != echLocal_71)
		return true;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_113166))
		return true;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
		return true;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_113167))
		return true;

	if (PED::IS_PED_INJURED(Global_113167))
		return true;

	if (iLocal_949 != 4)
	{
		if (iParam0 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				return true;
		
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_113166, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_113166, 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_113166, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_113166, 1, 7000))
				return true;
		}
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_113166, false) };
	
		if (MISC::IS_BULLET_IN_AREA(entityCoords, 7f, false))
			return true;
	
		num = 15f;
		num2 = { entityCoords };
		num3 = { num2 };
		num2 = num2 - num;
		num2.f_1 = num2.f_1 - num;
		num2.f_2 = num2.f_2 - num;
		num3 = num3 + num;
		num3.f_1 = num3.f_1 + num;
		num3.f_2 = num3.f_2 + num;
	
		if (MISC::IS_PROJECTILE_IN_AREA(num2, num3, true))
			return true;
	}

	return false;
}

BOOL func_230() // Position - 0xFB8E (64398)
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return false;

	if (Global_98583 == 1)
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (Global_113186)
		return false;

	if (Global_5)
		return false;

	if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
		return false;

	return true;
}

BOOL func_231() // Position - 0xFBDD (64477)
{
	Vehicle vehiclePedIsIn;
	Ped pedInVehicleSeat;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iLocal_95 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
	
		if (func_235(&vehiclePedIsIn, func_237(), func_236()))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false);
			func_223();
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 1, false) == PLAYER::PLAYER_PED_ID())
				iLocal_990 = 1;
			else
				iLocal_990 = 2;
		
			if (func_233(&vehiclePedIsIn, &pedInVehicleSeat, true))
			{
				uLocal_969 = { ENTITY::GET_ENTITY_COORDS(Global_113166, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				uLocal_969.f_2 = 0f;
				fLocal_72 = SYSTEM::VMAG(uLocal_969);
				echLocal_71 = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
				func_232();
				iLocal_96 = func_212();
				bLocal_58 = true;
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
				Global_113182 = true;
				iLocal_949 = 0;
				iLocal_950 = 1;
				return true;
			}
		}
	}

	return false;
}

void func_232() // Position - 0xFCC1 (64705)
{
	Ped pedInVehicleSeat;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, 1, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113166, 1, false);
		
			if (PLAYER::PLAYER_PED_ID() != pedInVehicleSeat)
				if (!PED::IS_PED_GROUP_MEMBER(pedInVehicleSeat, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
					TASK::TASK_SMART_FLEE_PED(pedInVehicleSeat, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
		}
	
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, 2, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113166, 2, false);
		
			if (PLAYER::PLAYER_PED_ID() != pedInVehicleSeat)
				if (!PED::IS_PED_GROUP_MEMBER(pedInVehicleSeat, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
					TASK::TASK_SMART_FLEE_PED(pedInVehicleSeat, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
		}
	}

	return;
}

BOOL func_233(var uParam0, var uParam1, BOOL bParam2) // Position - 0xFD63 (64867)
{
	if (!(*uParam0 == Global_113166) && !(Global_113166 == 0))
		func_234();

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		{
			if (!PED::IS_PED_INJURED(*uParam1))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam1, *uParam0))
				{
					Global_113166 = *uParam0;
					Global_113167 = *uParam1;
					Global_113181 = 1;
				
					if (bParam2)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113167, true, true);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113166, true, true);
						TEXT_LABEL_ASSIGN_STRING(&Global_113197, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_113167))
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113167, true, false);
					
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_113166))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113166, true, false);
							TEXT_LABEL_ASSIGN_STRING(&Global_113197, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
						}
					}
				
					PED::SET_PED_CONFIG_FLAG(Global_113167, 251, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_113167, BF_AlwaysFight, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_113167, BF_AlwaysFlee, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Global_113167, 512, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113167, true);
					AUDIO::SET_AMBIENT_VOICE_NAME(Global_113167, "A_M_M_EASTSA_02_LATINO_FULL_01");
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_113166, 1);
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_113166, true);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_113166, false, 0);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_113166, true);
					return true;
				}
			}
		}
	}

	return false;
}

void func_234() // Position - 0xFEA7 (65191)
{
	int taskSequenceId;

	if (ENTITY::DOES_ENTITY_EXIST(Global_113167))
	{
		if (!PED::IS_PED_INJURED(Global_113167))
		{
			PED::SET_PED_CONFIG_FLAG(Global_113167, 251, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113167, false);
		
			if (!PED::IS_PED_FLEEING(Global_113167) && !PED::IS_PED_IN_COMBAT(Global_113167, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_113167, false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_113166))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113167, Global_113166))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Global_113167, SCRIPT_TASK_VEHICLE_DRIVE_WANDER) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_113167, SCRIPT_TASK_VEHICLE_DRIVE_WANDER) != 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
								
									if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, 1, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, 2, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113166, 0, false))
										TASK::TASK_PAUSE(0, 2000);
									else
										TASK::TASK_PAUSE(0, 500);
								
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, Global_113166, 12f, 790699);
									TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
									TASK::TASK_PERFORM_SEQUENCE(Global_113167, taskSequenceId);
									TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Global_113167, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							}
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Global_113167, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Global_113167, SCRIPT_TASK_WANDER_STANDARD) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_113167, SCRIPT_TASK_WANDER_STANDARD) != 0)
				{
					TASK::TASK_WANDER_STANDARD(Global_113167, 1193033728, 0);
				}
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_113167))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_113167))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_113167, false))
			{
				if (!PED::IS_PED_INJURED(Global_113167))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_113167, false, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113167, false);
				}
			
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Global_113167);
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_113166))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_113166))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_113166, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_113166, false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_113166, true, 0);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_113166, false);
				}
			
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_113166);
			}
		}
	}

	Global_113167 = 0;
	Global_113166 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_113197, "NULL", 24);
	Global_113203 = -1;
	return;
}

BOOL func_235(var uParam0, Hash hParam1, Hash hParam2) // Position - 0x100E6 (65766)
{
	Ped pedInVehicleSeat;
	int vehicleDoorLockStatus;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) == hParam1)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, -1, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
				{
					if (!PED::IS_PED_INJURED(pedInVehicleSeat))
					{
						if (!PED::IS_PED_FLEEING(pedInVehicleSeat))
						{
							if (!PED::IS_PED_IN_COMBAT(pedInVehicleSeat, 0))
							{
								if (PED::IS_PED_MODEL(pedInVehicleSeat, hParam2))
								{
									if (ENTITY::IS_ENTITY_UPRIGHT(*uParam0, 1119092736))
									{
										vehicleDoorLockStatus = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(*uParam0);
									
										if (vehicleDoorLockStatus != 3 && vehicleDoorLockStatus != 2)
											return true;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return false;
}

Hash func_236() // Position - 0x1017A (65914)
{
	return joaat("A_M_Y_StLat_01");
}

Hash func_237() // Position - 0x10187 (65927)
{
	return joaat("taxi");
}

void func_238(BOOL bParam0) // Position - 0x10194 (65940)
{
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /*Taxi*/))
		HUD::RELEASE_NAMED_RENDERTARGET("taxi" /*Taxi*/);

	if (CAM::DOES_CAM_EXIST(caLocal_68))
	{
		if (CAM::IS_CAM_ACTIVE(caLocal_68))
			GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	
		CAM::SET_CAM_ACTIVE(caLocal_68, false);
		CAM::DESTROY_CAM(caLocal_68, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::UNLOCK_MINIMAP_POSITION();
		HUD::UNLOCK_MINIMAP_ANGLE();
		HUD::SET_RADAR_ZOOM(0);
	}

	Global_113183 = 0;

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_109))
	{
		OBJECT::DELETE_OBJECT(&obLocal_109);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_108);
	}

	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_111);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_112);

	if (func_239(Global_113167))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_enter", 3))
			ENTITY::STOP_ENTITY_ANIM(Global_113167, "leanover_enter", &uLocal_952, -2f);
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_idle", 3))
			ENTITY::STOP_ENTITY_ANIM(Global_113167, "leanover_idle", &uLocal_952, -2f);
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113167, &uLocal_952, "leanover_exit", 3))
			ENTITY::STOP_ENTITY_ANIM(Global_113167, "leanover_exit", &uLocal_952, -2f);
	
		if (PED::IS_PED_HEADTRACKING_PED(Global_113167, PLAYER::PLAYER_PED_ID()))
			TASK::TASK_CLEAR_LOOK_AT(Global_113167);
	}

	STREAMING::REMOVE_ANIM_DICT(&uLocal_952);

	if (iLocal_949 == 4)
	{
		if (iLocal_951 != 10)
		{
			if (bLocal_57)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					STREAMING::NEW_LOAD_SCENE_STOP();
			
				bLocal_57 = false;
			}
		
			func_162(false);
		
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FADE_OUT_WORLD_250MS_SCENE"))
				AUDIO::STOP_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
		
			if (ENTITY::DOES_ENTITY_EXIST(Global_113166))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113166, false))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_113166, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_113166, false);
				}
			}
		
			if (bParam0)
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					if (!CAM::IS_SCREEN_FADING_IN())
						if (!func_81() && !func_8() && Global_101688 != 10)
							CAM::DO_SCREEN_FADE_IN(250);
		}
	}

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (func_3(Global_113166))
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113166, true))
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113166, -1, false) != PLAYER::PLAYER_PED_ID())
					if (!func_2(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE) && !func_2(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_VEHICLE))
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);

	func_5();
	func_234();
	Global_113203 = -1;
	Global_113182 = false;
	Global_113186 = false;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_239(Ped pedParam0) // Position - 0x103F2 (66546)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			if (!PED::IS_PED_INJURED(pedParam0))
				return true;

	return false;
}


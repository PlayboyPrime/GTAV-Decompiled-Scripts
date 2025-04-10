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
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	eControlAction ecaLocal_34 = INPUT_NEXT_CAMERA;
	eControlAction ecaLocal_35 = INPUT_NEXT_CAMERA;
	eControlAction ecaLocal_36 = INPUT_NEXT_CAMERA;
	eControlAction ecaLocal_37 = INPUT_NEXT_CAMERA;
	eControlAction ecaLocal_38 = INPUT_NEXT_CAMERA;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	Ped pedLocal_43 = 0;
	Ped pedLocal_44 = 0;
	Ped pedLocal_45 = 0;
	Object obLocal_46 = 0;
	var uLocal_47 = 4;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 4;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 4;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 4;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 4;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 4;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 4;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
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
	var uLocal_114 = 2;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 2;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 20;
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
	var uLocal_169 = 20;
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
	var uLocal_191 = 5;
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
	var uLocal_202 = 2;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 22;
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
	var uLocal_235 = 22;
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
	var uLocal_280 = 22;
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
	var uLocal_305 = 9;
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
	var uLocal_342 = 9;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 9;
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
	var uLocal_374 = 11;
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
	var uLocal_398 = 32;
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
	var uLocal_465 = 7;
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
	var uLocal_480 = 7;
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
	var uLocal_511 = 8;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 20;
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
	var uLocal_544 = -1;
	var uLocal_545 = -1;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 4;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 3;
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
	var uLocal_577 = 16;
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
	sLocal_16 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	ecaLocal_34 = INPUT_FRONTEND_CANCEL;
	ecaLocal_35 = INPUT_FRONTEND_ACCEPT;
	ecaLocal_36 = INPUT_ATTACK;
	ecaLocal_37 = INPUT_FRONTEND_CANCEL;
	ecaLocal_38 = INPUT_AIM;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	iLocal_92 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_350();

	func_349(0);
	func_337(&(uLocal_93.f_1), func_348(Global_97717[6 /*19*/], Global_97717[7 /*19*/]));
	func_336(&uLocal_93, 3);

	while (!func_335(2))
	{
		if (!Global_79835)
		{
			func_333();
		
			if (func_332(3, 0))
			{
				if (!func_331(66))
				{
					if (!IS_BIT_SET(iLocal_39, 8))
					{
						uLocal_93.f_1.f_141[0 /*2*/] = 302;
						uLocal_93.f_1.f_141[0 /*2*/].f_1 = 191;
						uLocal_93.f_1.f_141[1 /*2*/] = 309;
						uLocal_93.f_1.f_141[1 /*2*/].f_1 = 109;
						uLocal_93.f_1.f_141[2 /*2*/] = 196;
						uLocal_93.f_1.f_141[2 /*2*/].f_1 = 318;
						uLocal_93.f_1.f_141[3 /*2*/] = 220;
						uLocal_93.f_1.f_141[3 /*2*/].f_1 = 227;
						MISC::SET_BIT(&iLocal_39, 8);
					}
				}
				else if (!IS_BIT_SET(iLocal_39, 9))
				{
					uLocal_93.f_1.f_141[0 /*2*/] = 0;
					uLocal_93.f_1.f_141[0 /*2*/].f_1 = 0;
					uLocal_93.f_1.f_141[1 /*2*/] = 0;
					uLocal_93.f_1.f_141[1 /*2*/].f_1 = 0;
					uLocal_93.f_1.f_141[2 /*2*/] = 0;
					uLocal_93.f_1.f_141[2 /*2*/].f_1 = 0;
					uLocal_93.f_1.f_141[3 /*2*/] = 0;
					uLocal_93.f_1.f_141[3 /*2*/].f_1 = 0;
					MISC::SET_BIT(&iLocal_39, 9);
				}
			}
		
			func_332(3, 0);
		
			if (Global_114162.f_7265.f_227[71] == 1 && !func_330(14))
			{
				func_319(&uLocal_93, 40f, 50f);
				func_317(&uLocal_93);
				func_294();
				func_156();
			}
			else if (IS_BIT_SET(uLocal_93.f_449, 0))
			{
				func_152(&uLocal_93);
			}
		
			if (_CAN_ENTER_FREEROAM_STATE(0) || IS_BIT_SET(uLocal_93.f_449, 2))
			{
				func_68(&uLocal_93);
				func_6(&uLocal_93);
				func_5(&uLocal_93);
			}
		}
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("agency_heist3a")) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("agency_heist3b")) > 0)
			func_4();
	
		if (func_335(12))
			if (!func_3(false))
				if (!IS_BIT_SET(Global_114162.f_1.f_120[3], 8))
					func_2(3, 8, true);
			else if (IS_BIT_SET(Global_114162.f_1.f_120[3], 8))
				func_2(3, 8, false);
		else if (IS_BIT_SET(Global_114162.f_1.f_120[3], 8))
			func_2(3, 8, false);
	
		SYSTEM::WAIT(0);
	}

	func_1(0);
	func_350();
	return;
}

int func_1(int iParam0) // Position - 0x2D5 (725)
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114162.f_9089.f_99.f_219[num], offset))
	{
		MISC::CLEAR_BIT(&Global_114162.f_9089.f_99.f_219[num], offset);
		return 1;
	}

	return 0;
}

void func_2(int iParam0, int iParam1, BOOL bParam2) // Position - 0x32C (812)
{
	if (bParam2)
		MISC::SET_BIT(&Global_114162.f_1.f_120[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&Global_114162.f_1.f_120[iParam0], iParam1);

	MISC::SET_BIT(&Global_97696, iParam0);
	return;
}

BOOL func_3(BOOL bParam0) // Position - 0x36A (874)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79813, 0);
}

void func_4() // Position - 0x392 (914)
{
	int num;

	if (Global_79825)
		return;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return;

	num = SYSTEM::ROUND(1f + (1000f * SYSTEM::TIMESTEP()));
	Global_97908.f_8 = Global_97908.f_8 + num;
	return;
}

void func_5(var uParam0) // Position - 0x3D4 (980)
{
	if (IS_BIT_SET(Global_97696, *uParam0))
	{
		if (IS_BIT_SET(uParam0->f_449, 1))
		{
			MISC::SET_BIT(&(uParam0->f_449), 15);
			MISC::SET_BIT(&(uParam0->f_449), 16);
			MISC::SET_BIT(&(uParam0->f_449), 14);
			MISC::CLEAR_BIT(&Global_97696, *uParam0);
		}
	}

	return;
}

void func_6(var uParam0) // Position - 0x41D (1053)
{
	int num;
	int num2;

	num = func_66(func_67(*uParam0));

	if (num < 0 || num >= 5)
		return;

	num2 = num;

	if (num2 != uParam0->f_464 && !(num2 == 2 && uParam0->f_464 == 4) && !(*uParam0 == 1 && num2 == 3 && uParam0->f_464 == 4))
		if (IS_BIT_SET(uParam0->f_449, 2))
			func_7(uParam0, num2, 0);
		else
			uParam0->f_464 = num2;

	return;
}

void func_7(var uParam0, int iParam1, int iParam2) // Position - 0x4A8 (1192)
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_65(uParam0);
			uParam0->f_464 = iParam1;
			func_8(uParam0, iParam1, iParam2);
		}
	}

	return;
}

void func_8(var uParam0, int iParam1, int iParam2) // Position - 0x4DA (1242)
{
	switch (iParam1)
	{
		case 0:
			func_64(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			break;
	
		case 1:
			func_64(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
	
		case 2:
			func_36(uParam0, uParam0->f_417, iParam2);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			uParam0->f_457 = MISC::GET_GAME_TIMER();
			break;
	
		case 3:
			func_19(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			MISC::SET_BIT(&(uParam0->f_449), 9);
			uParam0->f_457 = MISC::GET_GAME_TIMER();
			break;
	
		case 4:
			func_15(&uParam0->f_1.f_108[0 /*4*/], 1);
			func_15(&uParam0->f_1.f_108[1 /*4*/], 1);
			Global_114162.f_1.f_6[*uParam0] = true;
			HUD::CLEAR_HELP(false);
			func_13(uParam0, false);
			func_64(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::SET_BIT(&(uParam0->f_449), 4);
			uParam0->f_457 = MISC::GET_GAME_TIMER();
			break;
	}

	func_9(uParam0);
	return;
}

void func_9(var uParam0) // Position - 0x607 (1543)
{
	const char* controlGroupInstructionalButtonsString;
	const char* controlGroupInstructionalButtonsString2;
	const char* controlInstructionalButtonsString;
	const char* controlGroupInstructionalButtonsString3;
	const char* controlInstructionalButtonsString2;
	const char* controlInstructionalButtonsString3;
	BOOL flag;

	controlGroupInstructionalButtonsString = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, 13, true);
	controlGroupInstructionalButtonsString2 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, 11, true);
	controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_MOVE_UP_ONLY, true);
	controlGroupInstructionalButtonsString3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true);
	controlInstructionalButtonsString2 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT, true);
	controlInstructionalButtonsString3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL, true);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		controlGroupInstructionalButtonsString = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, 6, true);
		controlGroupInstructionalButtonsString2 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, 7, true);
		controlInstructionalButtonsString = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 29, true);
	}

	flag = func_12(1, *uParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.6f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	switch (uParam0->f_464)
	{
		case 0:
			if (IS_BIT_SET(uParam0->f_449, 2))
			{
				if (flag)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_11(controlInstructionalButtonsString);
					func_10("PB_H_ZOOM" /*Zoom*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_11(controlGroupInstructionalButtonsString3);
					func_10("PB_H_LOOK" /*Look Around*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_11(controlInstructionalButtonsString);
					func_10("PB_H_ZOOM" /*Zoom*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_11(controlGroupInstructionalButtonsString3);
					func_10("PB_H_LOOK" /*Look Around*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_11(controlInstructionalButtonsString3);
					func_10("PB_H_EXIT" /*Exit*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
	
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	
		case 2:
			if (IS_BIT_SET(uParam0->f_449, 2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			
				if (*uParam0 == 2)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_11(controlGroupInstructionalButtonsString);
					func_10("PB_H_SELCT" /*Browse*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_11(controlGroupInstructionalButtonsString3);
					func_10("PB_H_LOOK" /*Look Around*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_11(controlInstructionalButtonsString2);
					func_10("PB_H_TRIG" /*Select*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
					func_11(controlGroupInstructionalButtonsString);
					func_10("PB_H_SELCT" /*Browse*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_11(controlGroupInstructionalButtonsString3);
					func_10("PB_H_LOOK" /*Look Around*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_11(controlInstructionalButtonsString3);
					func_10("PB_H_UNDO" /*Back*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_11(controlInstructionalButtonsString2);
					func_10("PB_H_TRIG" /*Select*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
	
		case 3:
			if (IS_BIT_SET(uParam0->f_449, 2))
			{
				if (IS_BIT_SET(uParam0->f_449, 9))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_11(controlGroupInstructionalButtonsString2);
					func_10("PB_H_SELCT" /*Browse*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_11(controlGroupInstructionalButtonsString3);
					func_10("PB_H_LOOK" /*Look Around*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_11(controlGroupInstructionalButtonsString2);
					func_10("PB_H_SELCT" /*Browse*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_11(controlGroupInstructionalButtonsString3);
					func_10("PB_H_LOOK" /*Look Around*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_11(controlInstructionalButtonsString2);
					func_10("PB_H_TRIG" /*Select*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
	
		case 4:
			if (IS_BIT_SET(uParam0->f_449, 2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				func_11(controlInstructionalButtonsString);
				func_10("PB_H_ZOOM" /*Zoom*/);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				func_11(controlGroupInstructionalButtonsString3);
				func_10("PB_H_LOOK" /*Look Around*/);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_11(controlInstructionalButtonsString3);
				func_10("PB_H_UNDO" /*Back*/);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_11(controlInstructionalButtonsString2);
				func_10("PB_H_CONF" /*Confirm*/);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
	}

	return;
}

void func_10(char* sParam0) // Position - 0xAD4 (2772)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_11(const char* sParam0) // Position - 0xAE6 (2790)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

BOOL func_12(int iParam0, int iParam1) // Position - 0xAF4 (2804)
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return false;

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	flag = IS_BIT_SET(Global_114162.f_9089.f_99.f_219[iParam0], iParam1);
	return flag;
}

void func_13(var uParam0, BOOL bParam1) // Position - 0xB3E (2878)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_449), 18);
	
		if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uParam0->f_1.f_20[0 /*4*/]) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uParam0->f_1.f_20[1 /*4*/]) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uParam0->f_1.f_108[0 /*4*/]) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uParam0->f_1.f_108[1 /*4*/]))
			HUD::CLEAR_HELP(false);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_449), 18);
	}

	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* message) // Position - 0xBB3 (2995)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_15(const char* sParam0, int iParam1) // Position - 0xBC6 (3014)
{
	int i;
	int j;

	if (Global_112799 && iParam1)
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
			HUD::CLEAR_HELP(false);

	for (i = 0; i < Global_114162.f_20414.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_114162.f_20414[i /*16*/]))
		{
			for (j = i; j <= Global_114162.f_20414.f_145 - 2; j = j + 1)
			{
				func_18(j, j + 1);
			}
		
			func_17(Global_114162.f_20414.f_145 - 1);
			Global_114162.f_20414.f_145 = Global_114162.f_20414.f_145 - 1;
			func_16();
			return;
		}
	}

	return;
}

void func_16() // Position - 0xC73 (3187)
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

void func_17(int iParam0) // Position - 0xD8A (3466)
{
	TEXT_LABEL_ASSIGN_STRING(&Global_114162.f_20414[iParam0 /*16*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_114162.f_20414[iParam0 /*16*/].f_4), "", 16);
	Global_114162.f_20414[iParam0 /*16*/].f_8 = 0;
	Global_114162.f_20414[iParam0 /*16*/].f_9 = 0;
	Global_114162.f_20414[iParam0 /*16*/].f_11 = 0;
	Global_114162.f_20414[iParam0 /*16*/].f_10 = -1;
	Global_114162.f_20414[iParam0 /*16*/].f_12 = 0;
	Global_114162.f_20414[iParam0 /*16*/].f_13 = 0;
	Global_114162.f_20414[iParam0 /*16*/].f_14 = 0;
	Global_114162.f_20414[iParam0 /*16*/].f_15 = 0;
	return;
}

void func_18(int iParam0, int iParam1) // Position - 0xE24 (3620)
{
	Global_114162.f_20414[iParam0 /*16*/] = { Global_114162.f_20414[iParam1 /*16*/] };
	Global_114162.f_20414[iParam0 /*16*/].f_4 = { Global_114162.f_20414[iParam1 /*16*/].f_4 };
	Global_114162.f_20414[iParam0 /*16*/].f_8 = Global_114162.f_20414[iParam1 /*16*/].f_8;
	Global_114162.f_20414[iParam0 /*16*/].f_10 = Global_114162.f_20414[iParam1 /*16*/].f_10;
	Global_114162.f_20414[iParam0 /*16*/].f_9 = Global_114162.f_20414[iParam1 /*16*/].f_9;
	Global_114162.f_20414[iParam0 /*16*/].f_11 = Global_114162.f_20414[iParam1 /*16*/].f_11;
	Global_114162.f_20414[iParam0 /*16*/].f_12 = Global_114162.f_20414[iParam1 /*16*/].f_12;
	Global_114162.f_20414[iParam0 /*16*/].f_13 = Global_114162.f_20414[iParam1 /*16*/].f_13;
	Global_114162.f_20414[iParam0 /*16*/].f_14 = Global_114162.f_20414[iParam1 /*16*/].f_14;
	Global_114162.f_20414[iParam0 /*16*/].f_15 = Global_114162.f_20414[iParam1 /*16*/].f_15;
	return;
}

void func_19(var uParam0) // Position - 0xF34 (3892)
{
	int num;
	int num2;

	func_35(uParam0);
	func_33(uParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	num = func_66(func_32(*uParam0));

	if (num != 0)
	{
		if (num == func_31(*uParam0, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else if (num == func_31(*uParam0, 1))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}

	num2 = uParam0->f_1.f_16 + uParam0->f_1.f_18;
	num2.f_1 = uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1;
	func_27(uParam0, &num2, uParam0->f_1.f_10);
	func_25(uParam0, 1, 1);
	func_13(uParam0, false);
	func_20(uParam0);
	return;
}

void func_20(var uParam0) // Position - 0x1007 (4103)
{
	int num;

	if (IS_BIT_SET(uParam0->f_449, 7))
	{
		if (!IS_BIT_SET(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_114162.f_1[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_20[0 /*4*/], ""))
							func_23(&uParam0->f_1.f_20[0 /*4*/], 3, 0, -1, 10000, 7, 0, 0, 0);
					
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_20[1 /*4*/], ""))
							func_23(&uParam0->f_1.f_20[1 /*4*/], 3, 1000, -1, 10000, 7, 0, 0, 0);
					
						Global_114162.f_1[*uParam0] = true;
					}
					else if (func_22() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!IS_BIT_SET(uParam0->f_449, 11) && !IS_BIT_SET(uParam0->f_449, 10) && !func_21() && uParam0->f_483 == 0)
						{
							HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_CHOICE" /*Select an approach for this heist.*/);
							HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
						}
					}
					break;
			
				case 2:
					if (!Global_114162.f_1.f_6[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_108[0 /*4*/], ""))
							func_23(&uParam0->f_1.f_108[0 /*4*/], 3, 0, -1, 10000, 7, 0, 0, 0);
					
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_108[1 /*4*/], ""))
							func_23(&uParam0->f_1.f_108[1 /*4*/], 3, 1000, -1, 10000, 7, 0, 0, 0);
					
						Global_114162.f_1.f_6[*uParam0] = true;
					}
					else if (func_22() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!IS_BIT_SET(uParam0->f_449, 10))
						{
							if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PB_H_GUNM" /*Select a gunman to hire.*/) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PB_H_HACK" /*Select a hacker to hire.*/) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PB_H_DRIV" /*Select a driver to hire.*/))
							{
								num = func_66(func_32(*uParam0));
							
								if (uParam0->f_417 < 5)
								{
									if (!IS_BIT_SET(uParam0->f_449, 11) && !IS_BIT_SET(uParam0->f_449, 10) && !func_21() && uParam0->f_483 == 0)
									{
										switch (Global_97717[num /*19*/].f_1[uParam0->f_417])
										{
											case 1:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_GUNM" /*Select a gunman to hire.*/);
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
												break;
										
											case 2:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_HACK" /*Select a hacker to hire.*/);
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
												break;
										
											case 3:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_DRIV" /*Select a driver to hire.*/);
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
												break;
										}
									}
								}
							}
						}
					}
					break;
			}
		}
	}

	return;
}

BOOL func_21() // Position - 0x1267 (4711)
{
	if (Global_22442 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

BOOL func_22() // Position - 0x1289 (4745)
{
	if (Global_114162.f_20414.f_145 > 0)
		return false;

	return true;
}

void func_23(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x12A6 (4774)
{
	func_24(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_24(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x12C7 (4807)
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
		func_16();
	}

	return;
}

void func_25(var uParam0, int iParam1, int iParam2) // Position - 0x149A (5274)
{
	if (!IS_BIT_SET(uParam0->f_1.f_303, iParam1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_280[iParam1 /*2*/], ""))
		{
			func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[iParam1 /*2*/], iParam2);
			MISC::SET_BIT(&(uParam0->f_1.f_303), iParam1);
		}
	}

	return;
}

void func_26(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x14F1 (5361)
{
	if (uParam0->f_483 == 3)
		return;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam3))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { uParam1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { uParam3 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam5;
		uParam0->f_483 = uParam0->f_483 + 1;
	}

	return;
}

void func_27(var uParam0, var uParam1, float fParam2) // Position - 0x1551 (5457)
{
	var unk;

	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = MISC::GET_GAME_TIMER() + 1000;
	unk = { func_29(uParam0, &(uParam0->f_411)) };
	func_28(&(uParam0->f_649), unk, fParam2);
	return;
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x1596 (5526)
{
	uParam0->f_11 = { uParam1 };

	if (fParam4 != -1f)
		uParam0->f_7 = fParam4;

	return;
}

Vector3 func_29(var uParam0, var uParam1) // Position - 0x15B5 (5557)
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	var unk;
	var unk2;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;
	float num13;

	num = uParam0->f_1.f_4;
	num2 = uParam0->f_1.f_5;
	func_30(uParam0, uParam1, &num3, &num4);
	num5 = num * (num3 - 0.5f);
	num6 = -num2 * (num4 - 0.5f);
	unk = uParam0->f_404;
	unk2 = { uParam0->f_401 };
	unk2 = { unk2 + { num6, num5 * SYSTEM::COS(90f - unk), num5 * SYSTEM::SIN(90f - unk) } };
	num7 = num5;
	num8 = MISC::ATAN(num7 / uParam0->f_1.f_8);
	num9 = uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2;
	num10 = unk2.f_2 - uParam0->f_649.f_1.f_2;
	num11 = num10 - num9;
	num12 = MISC::ATAN(num11 / uParam0->f_1.f_8);
	num13 = (num8 * 3f) / 18f;
	return num12 * 0.95f, num13, -num8 * 0.85f;
}

void func_30(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x169A (5786)
{
	int value;
	int value2;

	value = uParam0->f_1.f_2;
	value2 = uParam0->f_1.f_3;

	if (*uParam1 < 0 || *uParam1 > value)
		return;

	if (uParam1->f_1 < 0 || uParam1->f_1 > value2)
		return;

	*uParam2 = SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(value);
	*uParam3 = SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(value2);
	return;
}

int func_31(int iParam0, int iParam1) // Position - 0x1705 (5893)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
			
				case 1:
					return 1;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
			
				case 1:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
			
				case 1:
					return 7;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				case 1:
					return 9;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

int func_32(int iParam0) // Position - 0x17EB (6123)
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 7;
			break;
	
		case 1:
			num = 8;
			break;
	
		case 2:
			num = 9;
			break;
	
		case 3:
			num = 10;
			break;
	
		case 4:
			num = 11;
			break;
	}

	return num;
}

void func_33(var uParam0) // Position - 0x183C (6204)
{
	int num;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_16));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_16.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_34(uParam0);

	switch (*uParam0)
	{
		case 0:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	
		case 4:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_332(*uParam0, uParam0->f_1.f_29));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	num = func_66(func_32(*uParam0));

	if (num != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	
		if (num == func_31(*uParam0, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else if (num == func_31(*uParam0, 1))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_34(var uParam0) // Position - 0x1AA9 (6825)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_LABELS");
	func_10("H_CRW_NAME" /*Name*/);
	func_10("H_CRW_TYPE" /*Expertise*/);
	func_10("H_CRW_SKILLS" /*Skills*/);

	switch (*uParam0)
	{
		case 0:
			func_10("H_LBL_JWL" /*JEWEL STORE*/);
			break;
	
		case 1:
			func_10("H_LBL_DOC" /*LS PORT*/);
			break;
	
		case 2:
			func_10("H_LBL_RUR" /*PALETO*/);
			break;
	
		case 3:
			func_10("H_LBL_AGN" /*BUREAU*/);
			break;
	
		case 4:
			func_10("H_LBL_FA" /*BIG SCORE A*/);
			func_10("H_LBL_FB" /*BIG SCORE B*/);
			break;
	}

	if (*uParam0 != 1)
		func_10("H_LBL_CRW" /*CREW*/);

	func_10("H_LBL_TODO" /*TODO*/);

	if (*uParam0 != 2)
		func_10("H_LBL_APP" /*APPROACH*/);

	switch (*uParam0)
	{
		case 0:
			func_10("H_LBL_J1" /*CCTV*/);
			func_10("H_LBL_J2" /*VENT*/);
			func_10("H_LBL_J3" /*ALARM*/);
			func_10("H_LBL_J4" /*TUNNEL*/);
			func_10("HC_J_IMPACT" /*LOUD*/);
			func_10("HC_J_STEALTH" /*SMART*/);
			break;
	
		case 1:
			func_10("HC_D_BLOW_UP" /*FREIGHTER*/);
			func_10("HC_D_DEEP_SEA" /*OFFSHORE*/);
			break;
	
		case 2:
			func_10("H_LBL_R1" /*plan A*/);
			func_10("H_LBL_R2" /*plan B?*/);
			func_10("H_LBL_R3" /*67 secs*/);
			func_10("H_LBL_R4" /*8+ Cops*/);
			func_10("H_LBL_R5" /*4 Cars*/);
			func_10("H_LBL_R6" /*Banker's wife*/);
			func_10("H_LBL_R7" /*$$$*/);
			func_10("H_LBL_R8" /*Need military grade hardware*/);
			func_10("H_LBL_R9" /*8/10 Smash it!*/);
			func_10("H_LBL_R10" /*Military Hardware Route*/);
			func_10("H_LBL_R11" /*Every 2 or 3hrs*/);
			func_10("H_LBL_R12" /*BOAT*/);
			break;
	
		case 3:
			func_10("H_LBL_A1" /*Davis fire station*/);
			func_10("H_LBL_A2" /*floor 53*/);
			func_10("H_LBL_A3" /*Bomb*/);
			func_10("H_LBL_A4" /*Drive 10*/);
			func_10("H_LBL_A5" /*83QSL722*/);
			func_10("HC_A_FIRETRUCK" /*FIRE CREW*/);
			func_10("HC_A_HELICOPTER" /*ROOF ENTRY*/);
			break;
	
		case 4:
			func_10("H_LBL_F1" /*DROP-OFF*/);
			func_10("H_LBL_F2" /*HOLE*/);
			func_10("H_LBL_F3" /*SECURITY*/);
			func_10("H_LBL_F4" /*GETAWAY*/);
			func_10("H_LBL_F5" /*TUNNEL AMBUSH*/);
			func_10("HC_F_TRAFFCONT" /*SUBTLE*/);
			func_10("HC_F_HELI" /*OBVIOUS*/);
			break;
	}

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_35(var uParam0) // Position - 0x1CAB (7339)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_36(var uParam0, int iParam1, int iParam2) // Position - 0x1CCD (7373)
{
	int num;
	int num2;
	int num3;

	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_96)
		return;

	func_25(uParam0, 2, 1);
	num = func_66(func_32(*uParam0));
	num2 = Global_97717[num /*19*/].f_1[iParam1];

	switch (num2)
	{
		case 1:
			func_63(uParam0, num, 1);
			break;
	
		case 2:
			func_63(uParam0, num, 3);
			break;
	
		case 3:
			func_63(uParam0, num, 2);
			break;
	}

	func_62(uParam0, uParam0->f_417);
	func_37(uParam0, uParam0->f_417);
	uParam0->f_450 = iParam1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_27(uParam0, &uParam0->f_1.f_97[iParam1 /*2*/], uParam0->f_1.f_10);

	if (iParam2 != 0)
	{
		num3 = 0;
	
		while (uParam0->f_418[num3] != iParam2)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			num3 = num3 + 1;
		
			if (num3 > 7)
				return;
		}
	}

	func_13(uParam0, false);
	func_20(uParam0);
	return;
}

void func_37(var uParam0, int iParam1) // Position - 0x1E03 (7683)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int i;
	int num6;

	num = func_32(*uParam0);
	num2 = func_66(num);
	num3 = Global_97717[num2 /*19*/].f_1[iParam1];
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_97[iParam1 /*2*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_97[iParam1 /*2*/].f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_34(uParam0);
	num4 = 0;

	if (Global_114162.f_1.f_12[num2 /*6*/][iParam1] != 0)
	{
		num5 = Global_114162.f_1.f_12[num2 /*6*/][iParam1];
		func_42(uParam0->f_413, num5, iParam1, num4, num5);
	}
	else
	{
		for (i = 0; i < 14; i = i + 1)
		{
			num6 = i;
		
			if (func_41(num6) == num3)
			{
				if (func_40(num6))
				{
					if (!func_39(num6))
					{
						if (!func_38(uParam0, num6))
						{
							if (!(num6 == 11 && *uParam0 == 3))
							{
								func_42(uParam0->f_413, num6, iParam1, num4, i);
								uParam0->f_418[num4] = num6;
								num4 = num4 + 1;
							}
						}
					}
				}
			}
		}
	}

	if (Global_114162.f_1.f_12[num2 /*6*/][iParam1] != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_38(var uParam0, int iParam1) // Position - 0x1F8D (8077)
{
	int num;
	int i;

	num = func_66(func_32(*uParam0));

	for (i = 0; i < uParam0->f_417; i = i + 1)
	{
		if (Global_114162.f_1.f_12[num /*6*/][i] == iParam1)
			return true;
	}

	return false;
}

BOOL func_39(int iParam0) // Position - 0x1FD2 (8146)
{
	return IS_BIT_SET(Global_114162.f_1.f_118, iParam0);
}

BOOL func_40(int iParam0) // Position - 0x1FE5 (8165)
{
	return IS_BIT_SET(Global_114162.f_1.f_116, iParam0);
}

int func_41(int iParam0) // Position - 0x1FF8 (8184)
{
	return Global_97563[iParam0 /*5*/];
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x2008 (8200)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	func_10(func_60(iParam1));
	func_10(func_59(iParam1));

	switch (func_41(iParam1))
	{
		case 1:
			func_10(func_58(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 0));
			func_10(func_58(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 1));
			func_10(func_58(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 2));
			func_10(func_58(3));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 3));
			break;
	
		case 2:
			func_10(func_54(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 0));
			func_10(func_54(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 1));
			func_10(func_54(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 2));
			break;
	
		case 3:
			func_10(func_49(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 0));
			func_10(func_49(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 1));
			func_10(func_49(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 2));
			break;
	}

	func_10("H_CRW_CUT" /*Cut*/);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_43(iParam1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

int func_43(int iParam0) // Position - 0x2144 (8516)
{
	return Global_97563[iParam0 /*5*/].f_1;
}

int func_44(int iParam0, int iParam1) // Position - 0x2156 (8534)
{
	return SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_46(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_45(iParam1))) * 100f);
}

int func_45(int iParam0) // Position - 0x217F (8575)
{
	switch (iParam0)
	{
		case 0:
			return 100;
	
		case 1:
			return 100;
	
		case 2:
			return 100;
	}

	return 0;
}

int func_46(int iParam0, int iParam1) // Position - 0x21B9 (8633)
{
	if (func_41(iParam0) != 3)
		return -1;

	return func_47(iParam0, iParam1);
}

int func_47(int iParam0, int iParam1) // Position - 0x21D7 (8663)
{
	return func_48(iParam1, Global_114162.f_1.f_73[iParam0 /*3*/].f_1, Global_114162.f_1.f_73[iParam0 /*3*/].f_2);
}

int func_48(int iParam0, int iParam1, int iParam2) // Position - 0x2201 (8705)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return SYSTEM::SHIFT_RIGHT(iParam1, 15 * iParam0) & 32767;
	
		case 2:
		case 3:
			return SYSTEM::SHIFT_RIGHT(iParam2, 15 * (iParam0 - 2)) & 32767;
	}

	return -1;
}

char* func_49(int iParam0) // Position - 0x2255 (8789)
{
	return func_50(3, iParam0);
}

char* func_50(int iParam0, int iParam1) // Position - 0x2264 (8804)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1" /*Max Health*/;
			
				case 1:
					return "HC_STA_G2" /*Accuracy*/;
			
				case 2:
					return "HC_STA_G3" /*Shoot Rate*/;
			
				case 3:
					return "HC_STA_G4" /*Weapon Choice*/;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1" /*Sys Knowledge*/;
			
				case 1:
					return "HC_STA_H2" /*Decryption Skill*/;
			
				case 2:
					return "HC_STA_H3" /*Access Speed*/;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1" /*Driving Skill*/;
			
				case 1:
					return "HC_STA_D2" /*Composure*/;
			
				case 2:
					return "HC_STA_D3" /*Vehicle Choice*/;
			}
			break;
	}

	return "ERROR!";
}

int func_51(int iParam0, int iParam1) // Position - 0x2347 (9031)
{
	return SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_53(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_52(iParam1))) * 100f);
}

int func_52(int iParam0) // Position - 0x2370 (9072)
{
	switch (iParam0)
	{
		case 0:
			return 100;
	
		case 1:
			return 100;
	
		case 2:
			return 100;
	}

	return 0;
}

int func_53(int iParam0, int iParam1) // Position - 0x23AA (9130)
{
	if (func_41(iParam0) != 2)
		return -1;

	return func_47(iParam0, iParam1);
}

char* func_54(int iParam0) // Position - 0x23C8 (9160)
{
	return func_50(2, iParam0);
}

int func_55(int iParam0, int iParam1) // Position - 0x23D7 (9175)
{
	return SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_57(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_56(iParam1))) * 100f);
}

int func_56(int iParam0) // Position - 0x2400 (9216)
{
	switch (iParam0)
	{
		case 0:
			return 1000;
	
		case 1:
			return 100;
	
		case 2:
			return 100;
	
		case 3:
			return 100;
	}

	return 0;
}

int func_57(int iParam0, int iParam1) // Position - 0x2449 (9289)
{
	if (func_41(iParam0) != 1)
		return -1;

	return func_47(iParam0, iParam1);
}

char* func_58(int iParam0) // Position - 0x2467 (9319)
{
	return func_50(1, iParam0);
}

char* func_59(int iParam0) // Position - 0x2476 (9334)
{
	switch (Global_97563[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G" /*Gunman*/;
	
		case 2:
			return "HC_TYPE_H" /*Hacker*/;
	
		case 3:
			return "HC_TYPE_D" /*Driver*/;
	}

	return "ERROR!";
}

char* func_60(int iParam0) // Position - 0x24BF (9407)
{
	return func_61(iParam0);
}

char* func_61(int iParam0) // Position - 0x24CD (9421)
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS" /*Gustavo Mota*/;
	
		case 2:
			return "HC_N_KAR" /*Karl Abolaji*/;
	
		case 10:
			return "HC_N_PAC" /*Packie McReary*/;
	
		case 11:
			return "HC_N_CHE" /*Chef*/;
	
		case 3:
			return "HC_N_HUG" /*Hugh Welsh*/;
	
		case 4:
			return "HC_N_NOR" /*Norm Richards*/;
	
		case 5:
			return "HC_N_DAR" /*Daryl Johns*/;
	
		case 6:
			return "HC_N_PAI" /*Paige Harris*/;
	
		case 7:
			return "HC_N_CHR" /*Christian Feltz*/;
	
		case 12:
			return "HC_N_RIC" /*Rickie Lukens*/;
	
		case 8:
			return "HC_N_EDD" /*Eddie Toh*/;
	
		case 13:
			return "HC_N_TAL" /*Taliana Martinez*/;
	
		case 9:
			return "HC_N_KRM" /*Karim Denz*/;
	}

	return "ERROR!";
}

void func_62(var uParam0, int iParam1) // Position - 0x25B0 (9648)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_63(var uParam0, int iParam1, int iParam2) // Position - 0x25CF (9679)
{
	int i;

	if (!IS_BIT_SET(Global_97717[iParam1 /*19*/].f_18, iParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&Global_97717[iParam1 /*19*/].f_7[iParam2 /*2*/], ""))
		{
			func_26(uParam0, uParam0->f_1.f_276, Global_97717[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			MISC::SET_BIT(&(Global_97717[iParam1 /*19*/].f_18), iParam2);
		
			for (i = 0; i < 10; i = i + 1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&Global_97717[iParam1 /*19*/].f_7[iParam2 /*2*/], &Global_97717[i /*19*/].f_7[iParam2 /*2*/]))
					MISC::SET_BIT(&(Global_97717[i /*19*/].f_18), iParam2);
			}
		}
	}

	return;
}

void func_64(var uParam0) // Position - 0x2677 (9847)
{
	func_27(uParam0, &(uParam0->f_1.f_12), 45f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_20(uParam0);
	return;
}

void func_65(var uParam0) // Position - 0x26AD (9901)
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}

	HUD::CLEAR_HELP(false);
	return;
}

int func_66(int iParam0) // Position - 0x26F0 (9968)
{
	if (iParam0 == 13 || iParam0 == -1)
		return 0;

	return Global_114162.f_9089.f_99.f_205[iParam0];
}

int func_67(int iParam0) // Position - 0x271D (10013)
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 4;
	
		case 3:
			return 5;
	
		case 4:
			return 6;
	}

	return -1;
}

void func_68(var uParam0) // Position - 0x276E (10094)
{
	if (IS_BIT_SET(uParam0->f_449, 1))
		func_69(uParam0);

	return;
}

void func_69(var uParam0) // Position - 0x2786 (10118)
{
	BOOL flag;
	float dx;
	float headingFromVector2d;
	float num;
	float num2;
	BOOL flag2;

	flag = false;

	if (!IS_BIT_SET(uParam0->f_449, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_149(0))
			{
				if (func_140(8))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_401) < 4f)
					{
						dx = { uParam0->f_401 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
						num = MISC::ABSF(uParam0->f_404 - headingFromVector2d);
					
						if (num <= 70f)
						{
							flag = true;
						}
						else
						{
							num2 = uParam0->f_404;
						
							if (num2 > 180f)
								num2 = num2 - 360f;
							else if (num2 < -180f)
								num2 = num2 + 360f;
						
							if (num2 - headingFromVector2d < num)
								num = MISC::ABSF(num2 - headingFromVector2d);
						
							if (num <= 70f)
							{
								flag = true;
							}
							else
							{
								if (headingFromVector2d > 180f)
									headingFromVector2d = headingFromVector2d - 360f;
								else if (headingFromVector2d < -180f)
									headingFromVector2d = headingFromVector2d + 360f;
							
								if (uParam0->f_404 - headingFromVector2d < num)
									num = MISC::ABSF(uParam0->f_404 - headingFromVector2d);
							
								if (num <= 70f)
								{
									flag = true;
								}
								else
								{
									if (num2 - headingFromVector2d < num)
										num = MISC::ABSF(num2 - headingFromVector2d);
								
									if (num <= 70f)
										flag = true;
								}
							}
						}
					}
				}
			}
		}
	
		if (flag)
		{
			if (uParam0->f_451 == -1)
			{
				_CONTEXT_ADD_HELP_TEXT(&(uParam0->f_451), 3, "PB_H_ENT" /*Press ~INPUT_CONTEXT~ to view the plans.*/, 0, 0, 0, 0);
			}
			else if (func_138(uParam0->f_451, true))
			{
				func_136(&(uParam0->f_451));
				func_122(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_136(&(uParam0->f_451));
		}
	}
	else
	{
		flag2 = func_12(1, *uParam0);
		func_80(uParam0);
	
		if (!flag2 && uParam0->f_453 > 15 && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_34) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL) || IS_BIT_SET(uParam0->f_449, 8))
		{
			MISC::CLEAR_BIT(&(uParam0->f_449), 8);
			func_70(uParam0, false);
		}
	}

	return;
}

void func_70(var uParam0, BOOL bParam1) // Position - 0x299F (10655)
{
	Vector3 vector;
	Interior interiorAtCoords;

	uParam0->f_453 = 0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	
		if (!bParam1)
		{
			vector = { uParam0->f_401 };
			vector = { vector + { 0f, 1f * SYSTEM::COS(180f - uParam0->f_404), 1f * SYSTEM::SIN(180f - uParam0->f_404) } };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &(vector.f_2), false, false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vector, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_AMBIENT_SCRIPT | 4 | 128);

	HUD::DISPLAY_RADAR(true);
	func_73(false);
	func_72();
	HUD::THEFEED_RESUME();
	HUD::RESET_HUD_COMPONENT_VALUES(HUD_SAVING_GAME);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(false);
	func_71(&(uParam0->f_649), false, true);
	func_15(&uParam0->f_1.f_20[0 /*4*/], 1);
	func_15(&uParam0->f_1.f_20[1 /*4*/], 1);
	func_15(&uParam0->f_1.f_108[0 /*4*/], 1);
	func_15(&uParam0->f_1.f_108[1 /*4*/], 1);
	HUD::CLEAR_HELP(true);

	while (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
		SYSTEM::WAIT(0);
	}

	interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_401);

	if (interiorAtCoords != 0)
		INTERIOR::UNPIN_INTERIOR(interiorAtCoords);

	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_65(uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 7);
	MISC::CLEAR_BIT(&(uParam0->f_449), 2);
	Global_97695 = 0;
	return;
}

void func_71(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2B24 (11044)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (bParam2)
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, bParam1, 0);
	
		if (CAM::IS_CAM_ACTIVE(*uParam0))
			CAM::SET_CAM_ACTIVE(*uParam0, false);
	
		CAM::DESTROY_CAM(*uParam0, bParam1);
	}

	if (uParam0->f_23)
	{
		HUD::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_23 = 0;
	}

	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
	return;
}

void func_72() // Position - 0x2BBE (11198)
{
	Global_23848.f_5 = 0;
	return;
}

void func_73(BOOL bParam0) // Position - 0x2BCC (11212)
{
	if (bParam0)
	{
		func_79();
	
		if (Global_21083.f_1 == 10 || Global_21083.f_1 == 9)
			MISC::SET_BIT(&Global_8920, 16);
	
		Global_21083.f_1 = 1;
	
		if (func_149(0))
			func_74(0);
	}
	else if (Global_21083.f_1 == 1)
	{
		if (!(Global_21083.f_1 == 0))
			Global_21083.f_1 = 3;
	}

	return;
}

void func_74(int iParam0) // Position - 0x2C2F (11311)
{
	if (func_78())
		return;

	if (Global_21301)
		if (func_77())
			func_76(true, true);
		else
			func_76(false, false);

	if (Global_21083.f_1 == 10 || Global_21083.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22442 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_75())
		Global_21083.f_1 = 3;

	return;
}

BOOL func_75() // Position - 0x2CB9 (11449)
{
	if (Global_21083.f_1 == 1 || Global_21083.f_1 == 0)
		return true;

	return false;
}

void func_76(BOOL bParam0, BOOL bParam1) // Position - 0x2CE0 (11488)
{
	if (bParam0)
	{
		if (func_149(0))
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

BOOL func_77() // Position - 0x2D54 (11604)
{
	return IS_BIT_SET(Global_1958240, 5);
}

BOOL func_78() // Position - 0x2D62 (11618)
{
	return IS_BIT_SET(Global_1958240, 19);
}

void func_79() // Position - 0x2D71 (11633)
{
	if (Global_21083.f_1 == 9 || Global_21083.f_1 == 10)
	{
		Global_22495 = 0;
		Global_22491 = 1;
	}

	return;
}

void func_80(var uParam0) // Position - 0x2D9A (11674)
{
	const char* controlGroupInstructionalButtonsString;
	BOOL flag;
	Vector3 vector;

	controlGroupInstructionalButtonsString = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true);

	if (!MISC::ARE_STRINGS_EQUAL(controlGroupInstructionalButtonsString, uParam0->f_466))
		func_9(uParam0);

	uParam0->f_466 = controlGroupInstructionalButtonsString;
	func_120();
	func_110(uParam0);
	func_88(uParam0);

	if (uParam0->f_464 == 1)
		func_85(uParam0);

	if (func_22())
		func_20(uParam0);

	flag = uParam0->f_454 > MISC::GET_GAME_TIMER();
	func_81(&(uParam0->f_649), IS_BIT_SET(uParam0->f_449, 4), IS_BIT_SET(uParam0->f_449, 5) && !flag, true, false, 1045220557, true, 1065353216, false);

	if (IS_BIT_SET(uParam0->f_449, 7))
		if (!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN() && !HUD::IS_PAUSE_MENU_ACTIVE())
			if (uParam0->f_464 != 1)
				if (uParam0->f_464 == 0 || !IS_BIT_SET(uParam0->f_449, 11) && !IS_BIT_SET(uParam0->f_449, 10) && !func_21() && uParam0->f_483 == 0)
					if (!IS_BIT_SET(uParam0->f_449, 18) || uParam0->f_464 == 2)
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_414, 255, 255, 255, 0, 0);

	HUD::DISPLAY_RADAR(false);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WANTED_STARS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_CASH);
	HUD::THEFEED_HIDE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(HUD_SAVING_GAME, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();

	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);

	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_UP);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT);

	if (!IS_BIT_SET(uParam0->f_449, 7))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			vector = { uParam0->f_401 };
			vector = { vector + { 0.5f, 2.9f * SYSTEM::COS(180f - uParam0->f_404), 2.9f * SYSTEM::SIN(180f - uParam0->f_404) } };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &(vector.f_2), false, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_AMBIENT_SCRIPT | 4 | 128);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vector, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			MISC::SET_BIT(&(uParam0->f_449), 7);
		}
	}

	return;
}

void func_81(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x2FD7 (12247)
{
	var unk;
	float controlUnboundNormal;
	float controlUnboundNormal2;
	float num;
	float num2;
	float num3;
	float num4;
	eControlAction action;
	eControlAction action2;

	unk = 4;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(FRONTEND_CONTROL);
	func_84(&unk[0], &unk[1], &unk[2], &unk[3], false, false);

	if (PAD::IS_LOOK_INVERTED())
		unk[3] = unk[3] * -1;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		controlUnboundNormal = PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X);
		controlUnboundNormal2 = PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y);
		num = controlUnboundNormal - uParam0->f_29;
		num2 = controlUnboundNormal2 - uParam0->f_30;
		uParam0->f_29 = controlUnboundNormal;
		uParam0->f_30 = controlUnboundNormal2;
	
		if (bParam4)
		{
			unk[2] = -SYSTEM::ROUND(num * iParam5 * 127f);
			unk[3] = -SYSTEM::ROUND(num2 * iParam5 * 127f);
		}
		else
		{
			unk[2] = SYSTEM::ROUND(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCALED_LOOK_LR) * iParam5 * 127f);
			unk[3] = SYSTEM::ROUND(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCALED_LOOK_UD) * iParam5 * 127f);
		}
	
		unk[2] = func_83(unk[2] + uParam0->f_24, -127, 127);
		unk[3] = func_83(unk[3] + uParam0->f_25, -127, 127);
	}

	if (uParam0->f_24 == unk[2] && uParam0->f_25 == unk[3])
	{
		if (uParam0->f_27 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
		
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				unk[2] = 0;
				unk[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = unk[2];
		uParam0->f_25 = unk[3];
		uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
		uParam0->f_28 = 0;
	}

	if (bParam2)
	{
		uParam0->f_8.f_2 = -(SYSTEM::TO_FLOAT(unk[2]) / 127f) * (float)uParam0->f_20;
		uParam0->f_8.f_1 = (-uParam0->f_8.f_2 * (float)uParam0->f_22) / (float)uParam0->f_20;
		uParam0->f_8 = -(SYSTEM::TO_FLOAT(unk[3]) / 127f) * (float)uParam0->f_21;
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}

	num3 = 30f * SYSTEM::TIMESTEP();
	num4 = { uParam0->f_8 + uParam0->f_11 };

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && bParam2 && !uParam0->f_28)
	{
		uParam0->f_14 = num4;
		uParam0->f_14.f_1 = num4.f_1;
		uParam0->f_14.f_2 = num4.f_2;
	}
	else
	{
		uParam0->f_14 = uParam0->f_14 + func_82((num4 - uParam0->f_14) * 0.05f * num3 * iParam7, -3f, 3f);
		uParam0->f_14.f_1 = uParam0->f_14.f_1 + func_82((num4.f_1 - uParam0->f_14.f_1) * 0.05f * num3 * iParam7, -3f, 3f);
		uParam0->f_14.f_2 = uParam0->f_14.f_2 + func_82((num4.f_2 - uParam0->f_14.f_2) * 0.05f * num3 * iParam7, -3f, 3f);
	}

	if (uParam0->f_26)
	{
		uParam0->f_14 = func_82(uParam0->f_14, SYSTEM::TO_FLOAT(-uParam0->f_21), SYSTEM::TO_FLOAT(uParam0->f_21));
		uParam0->f_14.f_1 = func_82(uParam0->f_14.f_1, SYSTEM::TO_FLOAT(-uParam0->f_22), SYSTEM::TO_FLOAT(uParam0->f_22));
		uParam0->f_14.f_2 = func_82(uParam0->f_14.f_2, SYSTEM::TO_FLOAT(-uParam0->f_20), SYSTEM::TO_FLOAT(uParam0->f_20));
	}

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL) && bParam1)
		if (uParam0->f_28)
			uParam0->f_17 = uParam0->f_7;
	else
		uParam0->f_17 = uParam0->f_7;

	if (bParam1)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
		{
			action = INPUT_SNIPER_ZOOM_IN_ONLY;
			action2 = INPUT_SNIPER_ZOOM_OUT_ONLY;
		
			if (bParam6)
			{
				action = INPUT_CURSOR_SCROLL_UP;
				action2 = INPUT_CURSOR_SCROLL_DOWN;
			}
		
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, action))
			{
				uParam0->f_17 = uParam0->f_17 - 5f;
				uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, action2))
			{
				uParam0->f_17 = uParam0->f_17 + 5f;
				uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
		
			if (bParam3)
				uParam0->f_17 = func_82(uParam0->f_17, uParam0->f_7 - uParam0->f_19, uParam0->f_7);
			else
				uParam0->f_17 = func_82(uParam0->f_17, uParam0->f_7 - uParam0->f_19, uParam0->f_7 + uParam0->f_19);
		}
		else if (bParam8)
		{
			unk[1] = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_LT);
			unk[3] = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_RT);
		
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(unk[3]) > 127f)
					uParam0->f_17 = uParam0->f_17 - (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[3]) / 128f) * (uParam0->f_19 / 2f));
			}
			else
			{
				uParam0->f_17 = uParam0->f_17 + (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[1]) / 128f) * uParam0->f_19);
				uParam0->f_17 = uParam0->f_17 - (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[3]) / 128f) * uParam0->f_19);
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(unk[1]) < 0f)
				uParam0->f_17 = uParam0->f_17 + (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[1]) / 128f) * uParam0->f_19);
		}
		else
		{
			uParam0->f_17 = uParam0->f_17 + (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[1]) / 128f) * uParam0->f_19);
		}
	}

	uParam0->f_18 = uParam0->f_18 + ((uParam0->f_17 - uParam0->f_18) * 0.06f * num3);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);

	if (CAM::DOES_CAM_EXIST(*uParam0))
		if (CAM::IS_CAM_ACTIVE(*uParam0))
			if (CAM::IS_CAM_RENDERING(*uParam0))
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();

	return;
}

float func_82(float fParam0, float fParam1, float fParam2) // Position - 0x352B (13611)
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

int func_83(int iParam0, int iParam1, int iParam2) // Position - 0x3552 (13650)
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

void func_84(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x3577 (13687)
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

void func_85(var uParam0) // Position - 0x367B (13947)
{
	BOOL flag;
	int i;

	if (!func_12(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (IS_BIT_SET(uParam0->f_449, 19))
					uParam0->f_452 = MISC::GET_GAME_TIMER() + 500;
				else
					uParam0->f_452 = MISC::GET_GAME_TIMER();
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_452)
			{
				flag = false;
			
				for (i = 0; i < uParam0->f_1.f_369; i = i + 1)
				{
					if (!flag)
					{
						if (!IS_BIT_SET(uParam0->f_1.f_303, i + 4))
						{
							func_87(uParam0, i);
						
							if (IS_BIT_SET(uParam0->f_1.f_370, i))
								MISC::SET_BIT(&(uParam0->f_449), 19);
							else
								MISC::CLEAR_BIT(&(uParam0->f_449), 19);
						
							flag = true;
						}
					}
				}
			
				if (!flag)
					func_86(3, *uParam0, true);
			}
		}
	}

	return;
}

void func_86(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3751 (14161)
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return;

	if (iParam1 < 0 || iParam1 >= 32)
		return;

	flag = IS_BIT_SET(Global_114162.f_9089.f_99.f_219[iParam0], iParam1);

	if (flag == bParam2)
		return;

	if (bParam2)
		MISC::SET_BIT(&Global_114162.f_9089.f_99.f_219[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&Global_114162.f_9089.f_99.f_219[iParam0], iParam1);

	return;
}

void func_87(var uParam0, int iParam1) // Position - 0x37D3 (14291)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_27(uParam0, &uParam0->f_1.f_371[iParam1 /*2*/], uParam0->f_1.f_11);
	func_25(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
	return;
}

void func_88(var uParam0) // Position - 0x381A (14362)
{
	int i;
	int j;

	if (!func_21() && CAM::IS_SCREEN_FADED_IN() && !CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (uParam0->f_483 > 0)
		{
			if (!IS_BIT_SET(uParam0->f_449, 13))
			{
				if (_CONVERSATION_ADD_LINE(&(uParam0->f_484), &uParam0->f_467[0 /*5*/], &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
				
					if (uParam0->f_467[0 /*5*/].f_4)
						MISC::CLEAR_BIT(&(uParam0->f_449), 11);
					else
						MISC::SET_BIT(&(uParam0->f_449), 11);
				
					for (i = 0; i < 2; i = i + 1)
					{
						uParam0->f_467[i /*5*/] = { uParam0->f_467[i + 1 /*5*/] };
						uParam0->f_467[i /*5*/].f_2 = { uParam0->f_467[i + 1 /*5*/].f_2 };
						uParam0->f_467[i /*5*/].f_4 = uParam0->f_467[i + 1 /*5*/].f_4;
					}
				
					uParam0->f_483 = uParam0->f_483 - 1;
				}
			}
			else
			{
				for (j = 0; j < 2; j = j + 1)
				{
					uParam0->f_467[j /*5*/] = { uParam0->f_467[j + 1 /*5*/] };
					uParam0->f_467[j /*5*/].f_2 = { uParam0->f_467[j + 1 /*5*/].f_2 };
					uParam0->f_467[j /*5*/].f_4 = uParam0->f_467[j + 1 /*5*/].f_4;
				}
			
				uParam0->f_483 = uParam0->f_483 - 1;
				MISC::CLEAR_BIT(&(uParam0->f_449), 13);
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (IS_BIT_SET(uParam0->f_449, 11))
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
		
			if (IS_BIT_SET(uParam0->f_449, 13))
				MISC::CLEAR_BIT(&(uParam0->f_449), 13);
		
			uParam0->f_455 = uParam0->f_455 + 1;
		}
	}

	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x39C8 (14792)
{
	func_109(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_90(sParam2, iParam3, false);
}

BOOL func_90(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x3A16 (14870)
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
					func_108();
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
	
		if (func_107(8, -1))
			return 0;
	
		Global_22518 = { Global_22512 };
		func_106();
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
			
				if (func_98())
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
		
			if (func_75())
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
		
			func_97();
			Global_22452 = bParam2;
		}
	
		Global_22444 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22061, sParam0, 24);
		Global_21308 = 0;
		func_96();
		func_91();
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
		func_108();
	}

	return 0;
}

void func_91() // Position - 0x3CE4 (15588)
{
	if (!func_92())
		return;

	if (Global_22448)
	{
		TEXT_LABEL_COPY(&(Global_1973514.f_1), { Global_22061 }, 4);
		Global_1973514 = Global_8234;
		Global_1973514.f_6 = Global_22452;
	}

	return;
}

BOOL func_92() // Position - 0x3D1B (15643)
{
	if (!Global_262145.f_28435)
		return false;

	if (!Global_79564)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_93(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_93(Player plParam0) // Position - 0x3D7E (15742)
{
	return func_94(plParam0, 20);
}

BOOL func_94(Player plParam0, int iParam1) // Position - 0x3D8E (15758)
{
	return IS_BIT_SET(Global_1887694[plParam0 /*611*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x3DA6 (15782)
{
	return -1;
}

void func_96() // Position - 0x3DAF (15791)
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

void func_97() // Position - 0x3DE0 (15840)
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

BOOL func_98() // Position - 0x3E75 (15989)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x3F0E (16142)
{
	if (func_330(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x3FB0 (16304)
{
	func_101();
	return Global_114162.f_2367.f_539.f_4321;
}

void func_101() // Position - 0x3FC9 (16329)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114162.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_102(character) && !func_330(14) || Global_113110)
			{
				if (Global_114162.f_2367.f_539.f_4321 != character && func_102(Global_114162.f_2367.f_539.f_4321))
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

BOOL func_102(eCharacter echParam0) // Position - 0x40C7 (16583)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x40D3 (16595)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x4110 (16656)
{
	if (func_102(character))
		return func_105(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_105(eCharacter echParam0) // Position - 0x4135 (16693)
{
	return Global_2201[echParam0 /*29*/];
}

void func_106() // Position - 0x4144 (16708)
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

BOOL func_107(int iParam0, int iParam1) // Position - 0x419B (16795)
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

void func_108() // Position - 0x41D3 (16851)
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

void func_109(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x422A (16938)
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

void func_110(var uParam0) // Position - 0x4280 (17024)
{
	int num;
	int num2;
	int i;
	int num3;
	BOOL flag;
	int j;
	int num4;
	int k;
	int num5;
	int l;
	int num6;
	int scaleformMovieMethodReturnValueInt;
	int m;
	int scaleformMovieMethodReturnValueInt2;
	int value;
	int scaleformMovieMethodReturnValueInt3;
	var unk;

	uParam0->f_453 = uParam0->f_453 + 1;

	if (PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
		func_9(uParam0);

	if (!IS_BIT_SET(uParam0->f_449, 11))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_35) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_37) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_36) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_38))
		{
			func_118();
		
			if (IS_BIT_SET(uParam0->f_449, 12))
			{
				MISC::SET_BIT(&(uParam0->f_449), 13);
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
				MISC::CLEAR_BIT(&(uParam0->f_449), 10);
			}
		
			MISC::CLEAR_BIT(&(uParam0->f_449), 12);
		}
	}

	func_84(&uParam0->f_458[0], &uParam0->f_458[1], &uParam0->f_458[2], &uParam0->f_458[3], false, false);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		uParam0->f_458[2] = uParam0->f_458[2] / 10;
		uParam0->f_458[3] = uParam0->f_458[3] / 10;
		uParam0->f_458[2] = func_83(uParam0->f_458[2] + uParam0->f_649.f_24, -127, 127);
		uParam0->f_458[3] = func_83(uParam0->f_458[3] + uParam0->f_649.f_25, -127, 127);
	}

	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];

	if (PAD::IS_LOOK_INVERTED())
		uParam0->f_458[3] = -uParam0->f_458[3];

	if (uParam0->f_454 > MISC::GET_GAME_TIMER())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}

	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
		if (uParam0->f_453 > 15)
			MISC::SET_BIT(&(uParam0->f_449), 4);
		else
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);

	if (!IS_BIT_SET(uParam0->f_449, 10))
	{
		if (!IS_BIT_SET(uParam0->f_449, 11))
		{
			if (MISC::GET_GAME_TIMER() - uParam0->f_456 > 200)
			{
				if (uParam0->f_464 == 2 || uParam0->f_464 == 3 || uParam0->f_464 == 4)
				{
					if (MISC::GET_GAME_TIMER() - uParam0->f_457 > 25000)
					{
						func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 8000);
					}
				}
			
				if (uParam0->f_464 == 2)
				{
					if (uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85 || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
					else if (uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85 || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CURSOR_SCROLL_DOWN))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
				}
			
				if (uParam0->f_464 == 3)
				{
					if (uParam0->f_458[1] < -85 || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SNIPER_ZOOM_IN_ONLY))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					
						if (uParam0->f_416 != 0)
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
					
						uParam0->f_416 = 0;
					
						if (IS_BIT_SET(uParam0->f_449, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_449), 9);
							func_9(uParam0);
						}
					
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
					else if (uParam0->f_458[1] > 85 || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SNIPER_ZOOM_OUT_ONLY))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					
						if (uParam0->f_416 != 1)
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
					
						uParam0->f_416 = 1;
					
						if (IS_BIT_SET(uParam0->f_449, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_449), 9);
							func_9(uParam0);
						}
					
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
				}
			
				if (!func_21() || IS_BIT_SET(uParam0->f_449, 13))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_35) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_36))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_21())
								{
									if (!IS_BIT_SET(uParam0->f_449, 9))
									{
										uParam0->f_456 = MISC::GET_GAME_TIMER();
										num = func_32(*uParam0);
									
										if (num != -1)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
											func_13(uParam0, true);
											func_15(&uParam0->f_1.f_20[0 /*4*/], 1);
											func_15(&uParam0->f_1.f_20[1 /*4*/], 1);
											Global_114162.f_1[*uParam0] = true;
											HUD::CLEAR_HELP(false);
										}
									}
								}
								break;
						
							case 2:
								if (!func_12(4, *uParam0))
								{
									num = func_32(*uParam0);
									num2 = func_66(num);
								
									if (uParam0->f_450 < Global_97717[num2 /*19*/])
									{
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
										func_13(uParam0, true);
									}
								}
								break;
						
							case 4:
								if (*uParam0 != 1)
								{
									func_86(4, *uParam0, true);
								
									if (!func_3(false))
										func_116(*uParam0);
								}
								else
								{
									func_86(5, *uParam0, true);
								}
							
								AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								num = func_32(*uParam0);
								num2 = func_66(num);
							
								for (i = 0; i < Global_97717[num2 /*19*/]; i = i + 1)
								{
									if (Global_114162.f_1.f_12[num2 /*6*/][i] == 0 || func_41(Global_114162.f_1.f_12[num2 /*6*/][i]) != Global_97717[num2 /*19*/].f_1[i])
									{
										flag = false;
									
										for (j = 0; j < 14; j = j + 1)
										{
											if (!flag)
											{
												flag = true;
												num3 = j;
											
												if (num3 != 0)
												{
													if (Global_97563[num3 /*5*/] != Global_97717[num2 /*19*/].f_1[i])
														flag = false;
												
													if (!IS_BIT_SET(Global_114162.f_1.f_116, num3))
														flag = false;
												
													if (IS_BIT_SET(Global_114162.f_1.f_118, num3))
														flag = false;
												
													if (num3 == 11 && *uParam0 == 3)
														flag = false;
												
													if (func_38(uParam0, num3))
														flag = false;
												}
												else
												{
													flag = false;
												}
											}
										}
									
										Global_114162.f_1.f_12[num2 /*6*/][i] = num3;
									}
								}
							
								func_13(uParam0, true);
								func_63(uParam0, num2, 4);
								break;
						}
					
						uParam0->f_427 = 0;
					}
				
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_37) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_38))
					{
						switch (uParam0->f_464)
						{
							case 2:
								num = func_32(*uParam0);
								num2 = func_66(num);
							
								if (uParam0->f_450 > 0)
								{
									func_13(uParam0, true);
									uParam0->f_450 = uParam0->f_450 - 1;
									uParam0->f_417 = uParam0->f_450;
									num4 = Global_114162.f_1.f_12[num2 /*6*/][uParam0->f_450];
									Global_114162.f_1.f_12[num2 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_97717[num2 /*19*/].f_1[uParam0->f_450];
									func_36(uParam0, uParam0->f_450, num4);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
									uParam0->f_427 = 0;
									uParam0->f_456 = MISC::GET_GAME_TIMER();
								}
								else if (!func_335(0))
								{
									if (*uParam0 != 2)
									{
										for (k = 0; k < uParam0->f_1.f_96; k = k + 1)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(k);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(k);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
										}
									
										AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
									
										for (k = 0; k < 2; k = k + 1)
										{
											if (uParam0->f_1.f_30[k] != 13)
												func_2(*uParam0, uParam0->f_1.f_30[k], false);
										}
									
										uParam0->f_427 = 0;
										func_13(uParam0, true);
										uParam0->f_456 = MISC::GET_GAME_TIMER();
										uParam0->f_465 = 0;
										func_115(0, 1);
									}
								}
								break;
						
							case 4:
								if (*uParam0 != 1)
								{
									num = func_32(*uParam0);
									num2 = func_66(num);
									uParam0->f_450 = uParam0->f_450 - 1;
									uParam0->f_417 = uParam0->f_450;
									num5 = Global_114162.f_1.f_12[num2 /*6*/][uParam0->f_450];
									Global_114162.f_1.f_12[num2 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_97717[num2 /*19*/].f_1[uParam0->f_450];
									func_7(uParam0, 2, num5);
								}
								else
								{
									for (l = 0; l < 2; l = l + 1)
									{
										if (uParam0->f_1.f_30[l] != 13)
											func_2(*uParam0, uParam0->f_1.f_30[l], false);
									}
								
									func_114(8, 0);
									func_86(5, 1, false);
									uParam0->f_427 = 0;
									func_13(uParam0, true);
									uParam0->f_456 = MISC::GET_GAME_TIMER();
									func_7(uParam0, 3, 0);
								}
							
								AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
								break;
						}
					}
				}
			}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		num = func_32(*uParam0);
		num2 = func_66(num);
	
		if (uParam0->f_450 >= Global_97717[num2 /*19*/] || *uParam0 == 1 && uParam0->f_450 > uParam0->f_415)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			func_25(uParam0, 0, 1);
			func_7(uParam0, 4, 0);
		}
		else
		{
			if (!IS_BIT_SET(uParam0->f_449, 17))
			{
				num6 = Global_114162.f_1.f_12[num2 /*6*/][uParam0->f_450];
				Global_114162.f_1.f_12[num2 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_97717[num2 /*19*/].f_1[uParam0->f_450];
				func_36(uParam0, uParam0->f_450, num6);
			}
		
			MISC::CLEAR_BIT(&(uParam0->f_449), 17);
		}
	
		uParam0->f_457 = MISC::GET_GAME_TIMER();
		MISC::CLEAR_BIT(&(uParam0->f_449), 10);
	}
	else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uParam0->f_1.f_108[0 /*4*/]) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uParam0->f_1.f_108[1 /*4*/]) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uParam0->f_1.f_20[0 /*4*/]) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uParam0->f_1.f_20[1 /*4*/]))
			HUD::CLEAR_HELP(true);
	}

	if (uParam0->f_680 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_680))
		{
			scaleformMovieMethodReturnValueInt = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_680);
			num2 = func_31(*uParam0, scaleformMovieMethodReturnValueInt);
			num = func_32(*uParam0);
			func_114(num, num2);
		
			if (!func_3(false))
				func_113(*uParam0);
		
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_63(uParam0, num2, 0);
		
			if (uParam0->f_1.f_30[scaleformMovieMethodReturnValueInt] != 13)
				func_2(*uParam0, uParam0->f_1.f_30[scaleformMovieMethodReturnValueInt], true);
		
			for (m = 0; m < uParam0->f_1.f_96; m = m + 1)
			{
				func_62(uParam0, m);
			
				if (m < Global_97717[num2 /*19*/])
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(m);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(m);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		
			if (*uParam0 != 1)
			{
				func_86(5, *uParam0, true);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_449), 10);
				uParam0->f_450 = uParam0->f_450 + 1;
			}
		
			HUD::CLEAR_HELP(false);
			uParam0->f_680 = 0;
		}
	}

	if (uParam0->f_681 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_681))
		{
			scaleformMovieMethodReturnValueInt2 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_681);
			num = func_32(*uParam0);
			num2 = func_66(num);
			Global_114162.f_1.f_12[num2 /*6*/][uParam0->f_450] = uParam0->f_418[scaleformMovieMethodReturnValueInt2];
			value = Global_114162.f_1.f_12[num2 /*6*/][uParam0->f_450];
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "UPDATE_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_450);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(scaleformMovieMethodReturnValueInt2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
			MISC::CLEAR_BIT(&(uParam0->f_449), 17);
			func_112(uParam0, value);
			uParam0->f_450 = uParam0->f_450 + 1;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = MISC::GET_GAME_TIMER();
			uParam0->f_457 = uParam0->f_456;
			MISC::SET_BIT(&(uParam0->f_449), 10);
		
			if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uParam0->f_1.f_108[0 /*4*/]) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&uParam0->f_1.f_108[1 /*4*/]))
				HUD::CLEAR_HELP(false);
		
			uParam0->f_681 = 0;
		}
	}

	if (uParam0->f_682 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_682))
		{
			scaleformMovieMethodReturnValueInt3 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_682);
		
			if (scaleformMovieMethodReturnValueInt3 != -1)
			{
				unk = uParam0->f_418[scaleformMovieMethodReturnValueInt3];
			
				if (unk != uParam0->f_427)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
			
				uParam0->f_427 = unk;
			}
		
			uParam0->f_682 = 0;
		}
	}

	if (uParam0->f_427 != 0)
		func_111(uParam0, uParam0->f_427);

	return;
}

void func_111(var uParam0, int iParam1) // Position - 0x5028 (20520)
{
	if (!func_21())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (IS_BIT_SET(Global_114162.f_1.f_119, 14))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_304[14 /*2*/], ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_114162.f_1.f_119), 14);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
			
				case 13:
					if (IS_BIT_SET(Global_114162.f_1.f_119, 16))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_304[16 /*2*/], ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_114162.f_1.f_119), 16);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
			
				case 12:
					if (IS_BIT_SET(Global_114162.f_1.f_119, 15))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_304[15 /*2*/], ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_114162.f_1.f_119), 15);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
			
				case 11:
					if (IS_BIT_SET(Global_114162.f_1.f_119, 17))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_304[17 /*2*/], ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_114162.f_1.f_119), 17);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
			}
		}
	}

	return;
}

void func_112(var uParam0, int iParam1) // Position - 0x5238 (21048)
{
	if (!IS_BIT_SET(uParam0->f_463, iParam1))
	{
		if (!IS_BIT_SET(Global_114162.f_1.f_119, iParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_304[iParam1 /*2*/], ""))
			{
				func_26(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[iParam1 /*2*/], 1);
				MISC::SET_BIT(&(Global_114162.f_1.f_119), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 1:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 0))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							break;
					
						case 10:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 1))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							break;
					}
					break;
			
				case 3:
					switch (iParam1)
					{
						case 12:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 3))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							break;
					
						case 9:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 6))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							break;
					
						case 1:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 0))
								if (IS_BIT_SET(Global_114162.f_1.f_117, 7))
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								else
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							else if (IS_BIT_SET(Global_114162.f_1.f_117, 7))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							break;
					
						case 10:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 1))
								if (IS_BIT_SET(Global_114162.f_1.f_117, 8))
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								else
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							else if (IS_BIT_SET(Global_114162.f_1.f_117, 8))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							break;
					
						case 6:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 4))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							break;
					
						case 7:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 2))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							break;
					
						case 8:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 5))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							break;
					}
					break;
			
				case 4:
					switch (iParam1)
					{
						case 12:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 15))
								if (IS_BIT_SET(Global_114162.f_1.f_117, 3))
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								else
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							break;
					
						case 7:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 2))
								if (IS_BIT_SET(Global_114162.f_1.f_117, 14))
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								else
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
							else if (IS_BIT_SET(Global_114162.f_1.f_117, 14))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							break;
					
						case 9:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 18))
								if (IS_BIT_SET(Global_114162.f_1.f_117, 6))
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								else
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							break;
					
						case 4:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 17))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							break;
					
						case 5:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 12))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							break;
					
						case 1:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 10))
								if (IS_BIT_SET(Global_114162.f_1.f_117, 0))
									if (IS_BIT_SET(Global_114162.f_1.f_117, 7))
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									else
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								else
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							break;
					
						case 10:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 11))
								if (IS_BIT_SET(Global_114162.f_1.f_117, 1))
									if (IS_BIT_SET(Global_114162.f_1.f_117, 8))
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									else
										func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								else
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							break;
					
						case 3:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 13))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							break;
					
						case 6:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 19))
								if (IS_BIT_SET(Global_114162.f_1.f_117, 4))
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								else
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							break;
					
						case 8:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 16))
								if (IS_BIT_SET(Global_114162.f_1.f_117, 5))
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								else
									func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							break;
					
						case 13:
							if (IS_BIT_SET(Global_114162.f_1.f_117, 20))
								func_26(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							break;
					}
					break;
			}
		}
	
		MISC::SET_BIT(&(uParam0->f_463), iParam1);
	}

	return;
}

void func_113(int iParam0) // Position - 0x5963 (22883)
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = Global_114162.f_9089.f_99.f_205[7];
		
			if (num == 1)
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_JEWEL_STEALTH"), true, true);
			else
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_JEWEL_STEALTH"), false, true);
			break;
	
		case 1:
			num = Global_114162.f_9089.f_99.f_205[8];
		
			if (num == 3)
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_DOCKS_SINK_SHIP"), true, true);
			else
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_DOCKS_SINK_SHIP"), false, true);
			break;
	
		case 3:
			num = Global_114162.f_9089.f_99.f_205[10];
		
			if (num == 6)
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_BUREAU_FIRECREW"), true, true);
			else
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_BUREAU_FIRECREW"), false, true);
			break;
	
		case 4:
			num = Global_114162.f_9089.f_99.f_205[11];
		
			if (num == 8)
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_BIGS_TRAFFIC"), true, true);
			else
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_BIGS_TRAFFIC"), false, true);
			break;
	}

	return;
}

void func_114(int iParam0, int iParam1) // Position - 0x5A5E (23134)
{
	if (iParam0 == 13 || iParam0 == -1)
		return;

	if (Global_114162.f_9089.f_99.f_205[iParam0] == iParam1)
		return;

	Global_114162.f_9089.f_99.f_205[iParam0] = iParam1;
	return;
}

void func_115(int iParam0, int iParam1) // Position - 0x5AA3 (23203)
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_114162.f_9089.f_99.f_58[iParam0] == iParam1)
		return;

	Global_114162.f_9089.f_99.f_58[iParam0] = iParam1;
	return;
}

void func_116(int iParam0) // Position - 0x5AE8 (23272)
{
	int i;
	int num;

	func_117(iParam0);

	switch (iParam0)
	{
		case 0:
			num = Global_114162.f_9089.f_99.f_205[7];
		
			for (i = 0; i < Global_97717[num /*19*/]; i = i + 1)
			{
				switch (Global_114162.f_1.f_12[num /*6*/][i])
				{
					case 1:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 0);
						break;
				
					case 10:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 1);
						MISC::CLEAR_BIT(&(Global_114162.f_1.f_119), 14);
						break;
				
					case 7:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 2);
						break;
				
					case 12:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 3);
						MISC::CLEAR_BIT(&(Global_114162.f_1.f_119), 15);
						break;
				
					case 6:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 4);
						break;
				
					case 8:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 5);
						break;
				
					case 9:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 6);
						break;
				}
			
				MISC::SET_BIT(&(Global_114162.f_1.f_119), Global_114162.f_1.f_12[num /*6*/][i]);
			}
			break;
	
		case 2:
			num = Global_114162.f_9089.f_99.f_205[9];
		
			for (i = 0; i < Global_97717[num /*19*/]; i = i + 1)
			{
				switch (Global_114162.f_1.f_12[num /*6*/][i])
				{
					case 1:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 7);
						break;
				
					case 10:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 8);
						MISC::CLEAR_BIT(&(Global_114162.f_1.f_119), 14);
						break;
				
					case 11:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 9);
						MISC::CLEAR_BIT(&(Global_114162.f_1.f_119), 17);
						break;
				}
			
				MISC::SET_BIT(&(Global_114162.f_1.f_119), Global_114162.f_1.f_12[num /*6*/][i]);
			}
			break;
	
		case 3:
			num = Global_114162.f_9089.f_99.f_205[10];
		
			for (i = 0; i < Global_97717[num /*19*/]; i = i + 1)
			{
				switch (Global_114162.f_1.f_12[num /*6*/][i])
				{
					case 1:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 10);
						break;
				
					case 10:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 11);
						MISC::CLEAR_BIT(&(Global_114162.f_1.f_119), 14);
						break;
				
					case 5:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 12);
						break;
				
					case 3:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 13);
						break;
				
					case 4:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 17);
						break;
				
					case 7:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 14);
						break;
				
					case 12:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 15);
						MISC::CLEAR_BIT(&(Global_114162.f_1.f_119), 15);
						break;
				
					case 6:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 19);
						break;
				
					case 8:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 16);
						break;
				
					case 9:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 18);
						break;
				
					case 13:
						MISC::SET_BIT(&(Global_114162.f_1.f_117), 20);
						MISC::CLEAR_BIT(&(Global_114162.f_1.f_119), 16);
						break;
				}
			
				MISC::SET_BIT(&(Global_114162.f_1.f_119), Global_114162.f_1.f_12[num /*6*/][i]);
			}
			break;
	}

	return;
}

void func_117(int iParam0) // Position - 0x5E65 (24165)
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 0);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 1);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 2);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 3);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 4);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 5);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 6);
			break;
	
		case 2:
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 7);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 8);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 9);
			break;
	
		case 3:
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 10);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 11);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 12);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 13);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 14);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 15);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 16);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 17);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 18);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 19);
			MISC::CLEAR_BIT(&(Global_114162.f_1.f_117), 20);
			break;
	}

	return;
}

void func_118() // Position - 0x5FAD (24493)
{
	Global_21308 = 0;
	func_119();
	return;
}

void func_119() // Position - 0x5FBD (24509)
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

void func_120() // Position - 0x5FDE (24542)
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_121();
	return;
}

void func_121() // Position - 0x5FEE (24558)
{
	Global_23848.f_134 = 1;
	return;
}

void func_122(var uParam0) // Position - 0x5FFC (24572)
{
	Vector3 vector;
	Interior interiorAtCoords;

	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	MISC::SET_BIT(&(uParam0->f_449), 9);
	func_13(uParam0, false);

	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_45410 == true)
				func_127(PLAYER::PLAYER_PED_ID());
		
			vector = { uParam0->f_401 };
			vector = { vector + { 0.5f, 2.9f * SYSTEM::COS(180f - uParam0->f_404), 2.9f * SYSTEM::SIN(180f - uParam0->f_404) } };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &(vector.f_2), false, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_AMBIENT_SCRIPT | 4 | 128);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vector, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		}
	
		MISC::SET_BIT(&(uParam0->f_449), 7);
	}

	HUD::DISPLAY_RADAR(false);
	func_73(true);
	func_126();
	HUD::THEFEED_PAUSE();
	MISC::CLEAR_AREA(uParam0->f_401, 5f, true, true, false, false);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam0->f_401, 5f);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(true);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(HUD_SAVING_GAME, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_125(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, false);
	interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_401);

	if (interiorAtCoords != 0)
		INTERIOR::PIN_INTERIOR_IN_MEMORY(interiorAtCoords);

	INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME(&(Global_97634[uParam0->f_1.f_1 /*15*/].f_7));

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_KEY(INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(PLAYER::PLAYER_PED_ID()));

	func_124(false);
	func_123();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);

	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	uParam0->f_466 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, 10, true);
	MISC::SET_BIT(&(uParam0->f_449), 2);
	Global_97695 = 1;
	func_8(uParam0, uParam0->f_464, 0);
	return;
}

void func_123() // Position - 0x61EE (25070)
{
	int i;

	for (i = 0; i < Global_114162.f_20414.f_145; i = i + 1)
	{
		func_17(i);
	}

	Global_114162.f_20414.f_145 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_114162.f_20414.f_146[i] = 0;
	}

	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		HUD::CLEAR_HELP(true);

	return;
}

void func_124(BOOL bParam0) // Position - 0x624C (25164)
{
	if (!bParam0)
		Global_112801 = MISC::GET_GAME_TIMER() + 250;

	Global_112798 = bParam0;
	return;
}

void func_125(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12, int iParam13, int iParam14, BOOL bParam15) // Position - 0x626A (25194)
{
	uParam0->f_1 = { uParam1 };
	uParam0->f_4 = { uParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = uParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);

	if (!bParam15)
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);

	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);

	if (iParam14 > 0f)
		CAM::SET_CAM_NEAR_CLIP(*uParam0, iParam14);

	if (uParam0->f_23)
		HUD::LOCK_MINIMAP_ANGLE(iParam13);

	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
	return;
}

void func_126() // Position - 0x6362 (25442)
{
	Global_23848.f_5 = 1;
	return;
}

void func_127(Ped pedParam0) // Position - 0x6370 (25456)
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	num = func_135(pedParam0);

	if (!(num == -1))
	{
		num2 = Global_45196[num /*5*/];
		func_130(1, num2, 1);
		return;
	}

	num3 = func_129(pedParam0);

	if (num3 == -1)
		return;

	func_128(num3);
	return;
}

void func_128(int iParam0) // Position - 0x63C9 (25545)
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_45165[iParam0 /*6*/].f_1 == 0))
		if (Global_45165[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_45408 = 0;

	Global_45165[iParam0 /*6*/] = 13;
	Global_45165[iParam0 /*6*/].f_1 = 0;
	Global_45165[iParam0 /*6*/].f_2 = 0;
	Global_45165[iParam0 /*6*/].f_3 = 0;
	Global_45165[iParam0 /*6*/].f_4 = 0;
	Global_45163 = Global_45163 - 1;

	if (Global_45163 < 0)
		Global_45163 = 0;

	return;
}

int func_129(Ped pedParam0) // Position - 0x644C (25676)
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_45165[i /*6*/].f_1 == pedParam0)
			return i;
	}

	return -1;
}

void func_130(int iParam0, int iParam1, int iParam2) // Position - 0x647D (25725)
{
	func_131(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x6492 (25746)
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_133(iParam0, iParam1, iParam2))
		return;

	num = func_132();

	if (num == -1)
		return;

	Global_45277[num /*6*/] = iParam0;
	Global_45277[num /*6*/].f_1 = iParam1;
	Global_45277[num /*6*/].f_2 = iParam2;
	Global_45277[num /*6*/].f_3 = iParam3;
	Global_45277[num /*6*/].f_4 = iParam4;
	Global_45277[num /*6*/].f_5 = iParam5;
	return;
}

int func_132() // Position - 0x6514 (25876)
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_45277[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_133(int iParam0, int iParam1, int iParam2) // Position - 0x6545 (25925)
{
	if (func_134(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_134(int iParam0, int iParam1, int iParam2) // Position - 0x6560 (25952)
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_45277[i /*6*/].f_2)
			if (iParam0 == Global_45277[i /*6*/])
				if (iParam1 == Global_45277[i /*6*/].f_1)
					return i;
	}

	return -1;
}

int func_135(Ped pedParam0) // Position - 0x65AC (26028)
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_45196[i /*5*/] == -1))
			if (pedParam0 == Global_45196[i /*5*/].f_1)
				return i;
	}

	return -1;
}

void func_136(var uParam0) // Position - 0x65F5 (26101)
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_137(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_44959[num /*32*/])
		{
			Global_44959[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

int func_137(int iParam0) // Position - 0x664C (26188)
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44959[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

BOOL func_138(int iParam0, BOOL bParam1) // Position - 0x6687 (26247)
{
	int num;

	num = func_137(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_149(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_44959[num /*32*/] == true && Global_44959[num /*32*/].f_4 == 1)
		{
			if (bParam1)
				if (Global_44959[num /*32*/].f_29)
					return false;
		
			Global_44959[num /*32*/].f_5 = 1;
			Global_44959[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_44959[num /*32*/] == false;
			Global_44959[num /*32*/].f_7;
		}
	}

	return false;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x673F (26431)
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			func_136(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_44959[i /*32*/])
		{
			Global_44959[i /*32*/] = true;
			Global_44959[i /*32*/].f_1 = Global_45160;
			Global_45160 = Global_45160 + 1;
			Global_44959[i /*32*/].f_4 = 0;
			Global_44959[i /*32*/].f_29 = 0;
			Global_44959[i /*32*/].f_5 = 0;
			Global_44959[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_44959[i /*32*/].f_8), sParam2, 16);
			Global_44959[i /*32*/].f_6 = iParam3;
			Global_44959[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44959[i /*32*/].f_7 = 0;
			Global_44959[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44959[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_44959[i /*32*/].f_13), sParam4, 64);
				Global_44959[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44959[i /*32*/].f_12 = 0;
				Global_44959[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_44959[i /*32*/].f_1;
			return;
		}
	}

	return;
}

BOOL func_140(int iParam0) // Position - 0x686A (26730)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_102(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_148() || Global_113209 || Global_33108 || func_147() || func_107(8, -1) || func_146() || func_145() || func_144() || func_143() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_148() || Global_33108 || func_147() || func_107(8, -1) || func_144() || func_146() || func_145() || func_143() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_148() || Global_113209 || Global_33108 || func_147() || func_107(8, -1) || func_144() || func_146() || func_145() || func_143() || Global_114162.f_7692.f_919[character] == 5 || Global_44746 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_148() || Global_113209 || Global_33108 || func_147() || func_107(8, -1) || func_146() || func_145() || func_143() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_148() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_107(8, -1) || func_143() || func_142() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_107(8, -1) || func_146() || func_145() || func_142() || func_141())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_148() || Global_33108 || func_147() || func_107(8, -1) || func_145() || func_144() || func_143() || Global_114162.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_148() || func_145() || Global_113209 || Global_33108 || func_147() || Global_45410 || func_107(8, -1) || func_144() || func_142() || func_143() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_148() || Global_113209 || Global_33108 || func_147() || func_107(8, -1) || func_144() || func_142() || func_146() || func_145() || func_143())
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

BOOL func_141() // Position - 0x6F87 (28551)
{
	return Global_101752.f_1;
}

BOOL func_142() // Position - 0x6F95 (28565)
{
	if (Global_98610 != -1)
		return IS_BIT_SET(Global_92476[Global_98610 /*34*/].f_15, 13);

	return false;
}

BOOL func_143() // Position - 0x6FB8 (28600)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_144() // Position - 0x6FD2 (28626)
{
	if (Global_79825)
		return true;
	else if (Global_64320 && !Global_64326)
		return true;

	return false;
}

BOOL func_145() // Position - 0x6FFC (28668)
{
	return Global_101765.f_400 > 0;
}

BOOL func_146() // Position - 0x700D (28685)
{
	return Global_101765.f_399 > 0;
}

BOOL func_147() // Position - 0x701E (28702)
{
	return Global_1575086;
}

BOOL func_148() // Position - 0x702A (28714)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99166.f_44 == 1;

	return false;
}

BOOL func_149(int iParam0) // Position - 0x7046 (28742)
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

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x709D (28829)
{
	return func_151(iParam0, Global_44199);
}

BOOL func_151(int iParam0, int iParam1) // Position - 0x70AE (28846)
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

BOOL func_152(var uParam0) // Position - 0x728F (29327)
{
	if (IS_BIT_SET(uParam0->f_449, 1))
		func_154(uParam0);

	if (IS_BIT_SET(uParam0->f_449, 0))
		func_153(uParam0);

	return true;
}

void func_153(var uParam0) // Position - 0x72B8 (29368)
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_03"));

	if (uParam0->f_413 != 0)
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_413));

	if (uParam0->f_414 != 0)
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_414));

	HUD::CLEAR_ADDITIONAL_TEXT(5, false);
	MISC::CLEAR_BIT(&Global_97698, *uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 0);
	return;
}

void func_154(var uParam0) // Position - 0x7322 (29474)
{
	if (IS_BIT_SET(uParam0->f_449, 1))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			if (IS_BIT_SET(uParam0->f_449, 2))
				func_70(uParam0, false);
	
		func_155(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_449), 1);
		MISC::CLEAR_BIT(&Global_97697, *uParam0);
	}

	return;
}

void func_155(var uParam0) // Position - 0x7368 (29544)
{
	int i;

	for (i = 0; i < uParam0->f_1.f_33; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[i]))
			OBJECT::DELETE_OBJECT(&uParam0->f_428[i]);
	}

	return;
}

void func_156() // Position - 0x73A4 (29604)
{
	int i;
	var args;

	if (func_335(7))
	{
		if (!IS_BIT_SET(iLocal_39, 7))
		{
			CUTSCENE::REQUEST_CUTSCENE("AH_2_EXT_P4", 8);
			SCRIPT::REQUEST_SCRIPT("lesterHandler");
			STREAMING::REQUEST_MODEL(joaat("prop_laptop_01a"));
			MISC::SET_BIT(&iLocal_39, 7);
		}
		else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
		}
	}

	if (func_335(8))
	{
		if (func_335(7))
		{
			if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("AH_2_EXT_P4") && SCRIPT::HAS_SCRIPT_LOADED("lesterHandler") && STREAMING::HAS_MODEL_LOADED(joaat("prop_laptop_01a")))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!func_3(false) || _GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, joaat("Player_Zero"), 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_47[0], "MICHAEL", 2, joaat("Player_Zero"), 0);
						MISC::SET_BIT(&iLocal_39, 12);
					}
				}
			
				if (func_3(false))
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_43))
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_43, "FRANKLIN", 1, joaat("Player_One"), 0);
			
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_44, "LESTER", 2, joaat("IG_LesterCrest"), 0);
				MISC::SET_BIT(&iLocal_39, 10);
				func_293(false);
				func_124(true);
				func_284(true, true, true, false, false, false, false);
				func_73(true);
			
				for (i = 0; i < func_283(3); i = i + 1)
				{
					if (func_281(3, i) == 12)
						func_267(406771743);
				}
			
				CUTSCENE::START_CUTSCENE(256);
			
				if (func_3(false))
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			
				func_115(7, 0);
				iLocal_42 = MISC::GET_GAME_TIMER();
			}
		}
		else if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			func_120();
		
			if (IS_BIT_SET(iLocal_39, 5))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("Player_Zero"))))
					ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("Player_Zero")), true, false);
			
				MISC::CLEAR_BIT(&iLocal_39, 5);
			}
		
			if (_GET_CURRENT_PLAYER_CHARACTER() != CHAR_MICHAEL)
			{
				if (IS_BIT_SET(iLocal_39, 12))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("Player_Zero"))))
					{
						uLocal_47[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("Player_Zero")));
						MISC::CLEAR_BIT(&iLocal_39, 12);
					}
				}
			}
		
			if (IS_BIT_SET(iLocal_39, 10))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", joaat("IG_LesterCrest"))))
				{
					pedLocal_44 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", joaat("IG_LesterCrest")));
					MISC::CLEAR_BIT(&iLocal_39, 10);
				}
			}
		
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				if (_GET_CURRENT_PLAYER_CHARACTER() != CHAR_MICHAEL)
				{
					pedLocal_43 = PLAYER::PLAYER_PED_ID();
					func_262(&uLocal_47, 0);
					func_198(&uLocal_47, true, false, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
				}
			
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_FOOT) == FIRST_PERSON)
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, true, false, 0);
				
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 208, false);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 118, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 213, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
					iLocal_41 = MISC::GET_GAME_TIMER();
				}
			}
		
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LESTER", joaat("IG_LesterCrest")))
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_44, false))
				{
					args = pedLocal_44;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &args, 1, DEFAULT);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("lesterHandler");
				}
			}
		
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				func_293(true);
		}
		else
		{
			if (func_3(false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_43))
					PED::DELETE_PED(&pedLocal_43);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_44))
					PED::DELETE_PED(&pedLocal_44);
			
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			else
			{
				Global_64326 = false;
				Global_101752 = 0;
				func_197();
			}
		
			func_284(false, true, true, false, false, false, false);
			func_73(false);
			func_196(20000);
			func_194(&(Global_114162.f_2367.f_539), 67);
			func_164(&(Global_114162.f_2367.f_539), 67);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_laptop_01a"));
			func_163(&iLocal_40);
			MISC::CLEAR_BIT(&iLocal_39, 2);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_FOOT) == FIRST_PERSON)
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, true, false, 0);
			}
		
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_91, false);
		
			if (iLocal_92 != -1)
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_92))
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_92);
		
			PED::CLEAR_PED_NON_CREATION_AREA();
			PATHFIND::SET_PED_PATHS_IN_AREA(uLocal_93.f_1.f_394 - uLocal_93.f_1.f_397, uLocal_93.f_1.f_394 + uLocal_93.f_1.f_397, true, 0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_157(3, false);
			func_115(8, 0);
		}
	}
	else if (!func_335(7))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("AH_2_EXT_P4"))
			CUTSCENE::REMOVE_CUTSCENE();
	}

	if (iLocal_41 != -1)
	{
		if (MISC::GET_GAME_TIMER() - iLocal_41 > 2000)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			iLocal_41 = -1;
		}
	}

	return;
}

void func_157(int iParam0, BOOL bParam1) // Position - 0x7826 (30758)
{
	int i;
	int num;

	for (i = 0; i < 14; i = i + 1)
	{
		num = i;
	
		if (func_40(num) || func_39(num))
		{
			if (!(num == 11 && iParam0 == 3))
			{
				switch (num)
				{
					case 1:
						func_160(4, true);
						break;
				
					case 4:
						func_160(8, true);
						break;
				
					case 6:
						func_160(10, true);
						break;
				
					case 7:
						func_160(1, true);
						break;
				
					case 8:
						func_160(3, true);
						break;
				
					case 9:
						func_160(6, true);
						break;
				
					case 10:
						func_160(9, true);
						break;
				
					case 12:
						func_160(11, true);
						break;
				
					case 13:
						func_160(12, true);
						break;
				
					case 11:
						if (func_331(91))
							func_160(0, true);
						break;
				
					case 5:
						if (func_331(91))
							func_160(2, true);
						break;
				
					case 3:
						if (func_331(67))
							func_160(5, true);
						break;
				
					case 2:
						if (func_331(77))
							func_160(7, true);
						break;
				}
			}
		}
	}

	if (!func_40(10) && IS_BIT_SET(Global_114162.f_24999.f_8[4], 0))
		func_160(9, true);

	if (!func_40(13) && IS_BIT_SET(Global_114162.f_24999.f_8[16], 0))
		func_160(12, true);

	if (!func_40(12))
		if (iParam0 == 4)
			func_160(11, true);

	if (!bParam1)
	{
		if (!func_159(69))
			func_23("DI_HLP_HST" /*Heist characters become available in Rockstar Editor's Director Mode after being up for selection on a GTAV heist.*/, 2, 0, 20000, 10000, 7, 0, 209, 0);
	
		func_158("DI_FEED_HST" /*Heist crew members*/);
	}

	return;
}

void func_158(char* sParam0) // Position - 0x79EC (31212)
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
	HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", false, 0, "DI_FEED_CHAR" /*Director Mode Actor Unlock*/, sParam0);
	return;
}

BOOL func_159(int iParam0) // Position - 0x7A10 (31248)
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

void func_160(int iParam0, BOOL bParam1) // Position - 0x7A50 (31312)
{
	int offset;

	offset = iParam0;

	if (offset >= 0 && offset <= 31)
	{
		if (!func_162(iParam0))
		{
			MISC::SET_BIT(&(Global_114162.f_26438.f_1), offset);
		
			if (!bParam1)
				func_158(func_161(iParam0));
		}
	}

	return;
}

char* func_161(int iParam0) // Position - 0x7A99 (31385)
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE" /*Chef*/;
	
		case 1:
			return "CM_HSTCHR" /*Christian Feltz*/;
	
		case 2:
			return "CM_HSTDAR" /*Daryl Johns*/;
	
		case 3:
			return "CM_HSTEDD" /*Eddie Toh*/;
	
		case 4:
			return "CM_HSTGUS" /*Gustavo Mota*/;
	
		case 5:
			return "CM_HSTHUG" /*Hugh Welsh*/;
	
		case 6:
			return "CM_HSTKRM" /*Karim Denz*/;
	
		case 7:
			return "CM_HSTKAR" /*Karl Abolaji*/;
	
		case 8:
			return "CM_HSTNOR" /*Norm Richards*/;
	
		case 9:
			return "CM_HSTPAC" /*Packie McReary*/;
	
		case 10:
			return "CM_HSTPAI" /*Paige Harris*/;
	
		case 11:
			return "CM_HSTRIC" /*Rickie Lukens*/;
	
		case 12:
			return "CM_HSTTAL" /*Taliana Martinez*/;
	}

	return "ERROR!";
}

BOOL func_162(int iParam0) // Position - 0x7B7C (31612)
{
	if (iParam0 != -1 && iParam0 != 13)
		return IS_BIT_SET(Global_114162.f_26438.f_1, iParam0);

	return false;
}

void func_163(var uParam0) // Position - 0x7BA8 (31656)
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

void func_164(var uParam0, int iParam1) // Position - 0x7BE5 (31717)
{
	switch (iParam1)
	{
		case 17:
			func_165(uParam0, 0, 12);
			break;
	
		case 19:
			func_165(uParam0, 1, 13);
			break;
	
		case 29:
			func_165(uParam0, 1, 14);
			break;
	
		case 30:
			func_165(uParam0, 2, 15);
			func_165(uParam0, 1, 29);
			break;
	
		case 32:
			func_165(uParam0, 1, 16);
			func_165(uParam0, 0, 17);
			break;
	
		case 39:
			func_165(uParam0, 0, 21);
			func_165(uParam0, 1, 20);
			break;
	
		case 31:
			func_165(uParam0, 0, 18);
			break;
	
		case 20:
			func_165(uParam0, 2, 22);
			break;
	
		case 66:
			func_165(uParam0, 1, 23);
			break;
	
		case 68:
			func_165(uParam0, 1, 24);
			break;
	
		case 70:
			func_165(uParam0, 1, 67);
			break;
	
		case 8:
			func_165(uParam0, 1, 25);
			func_165(uParam0, 2, 26);
			break;
	
		case 67:
			func_165(uParam0, 1, 27);
			break;
	
		case 9:
			func_165(uParam0, 2, 28);
			break;
	
		case 38:
			func_165(uParam0, 2, 30);
			func_165(uParam0, 1, 19);
			break;
	
		case 83:
			func_165(uParam0, 2, 33);
			break;
	
		case 45:
			func_165(uParam0, 1, 35);
			break;
	
		case 64:
			func_165(uParam0, 0, 36);
			func_165(uParam0, 1, 37);
			break;
	
		case 91:
			func_165(uParam0, 0, 41);
			break;
	
		case 42:
			func_165(uParam0, 0, 58);
			Global_101117[0 /*98*/] = 0;
			func_165(uParam0, 2, 59);
			Global_101117[2 /*98*/] = 0;
			break;
	
		case 41:
			func_165(uParam0, 1, 42);
			func_165(uParam0, 2, 42);
			break;
	
		case 15:
			func_165(uParam0, 0, 46);
			func_165(uParam0, 1, 47);
			break;
	
		case 16:
			func_165(uParam0, 0, 48);
			break;
	
		case 48:
			func_165(uParam0, 1, 50);
			func_165(uParam0, 2, 51);
			break;
	
		case 74:
			func_165(uParam0, 0, 52);
			func_165(uParam0, 1, 66);
			break;
	
		case 76:
			func_165(uParam0, 1, 53);
			func_165(uParam0, 2, 54);
			func_165(uParam0, 0, 62);
			break;
	
		case 75:
			func_165(uParam0, 0, 61);
			func_165(uParam0, 1, 31);
			break;
	
		case 69:
			func_165(uParam0, 1, 63);
			break;
	
		case 84:
			func_165(uParam0, 0, 68);
			func_165(uParam0, 2, 69);
			break;
	
		case 85:
			func_165(uParam0, 0, 64);
			func_165(uParam0, 2, 65);
			break;
	
		case 93:
			func_165(uParam0, 1, 38);
			func_165(uParam0, 2, 39);
			break;
	
		case 11:
			func_165(uParam0, 2, 55);
			break;
	
		case 77:
			func_165(uParam0, 1, 56);
			func_165(uParam0, 2, 57);
			break;
	
		default:
			break;
	}

	return;
}

int func_165(var uParam0, int iParam1, int iParam2) // Position - 0x7F2E (32558)
{
	int num;
	var unk;
	var unk99;
	var unk102;
	var unk103;
	var unk106;

	if (!IS_BIT_SET(Global_114162.f_9089.f_99.f_219[0], 9))
	{
		num = Global_114162.f_18537[iParam1];
	
		if (num == 11)
			return 0;
	
		if (num == 8 || num == 9 || num == 10)
			return 0;
	}

	Global_114162.f_18537[iParam1] = iParam2;
	uParam0->f_2296[iParam1] = func_183();

	if (!func_182(iParam2, &uParam0->f_2300[iParam1 /*3*/], &uParam0->f_2310[iParam1]))
		return 0;

	if (!func_181(uParam0->f_2300[iParam1 /*3*/], 0f, 0f, 0f, false))
	{
		if (!func_181(Global_100152[iParam2 /*3*/], 0f, 0f, 0f, false))
		{
			unk.f_11 = 12;
			unk.f_31 = 49;
			unk.f_81 = 2;
		
			if (func_166(iParam1, iParam2, &unk, &unk99, &unk102, &unk103, &unk106))
				Global_101117[iParam1 /*98*/] = { unk };
		}
	}

	uParam0->f_2314[iParam1] = 0;
	uParam0->f_2318[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_2328[iParam1] = 0;
	return 1;
}

BOOL func_166(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x804C (32844)
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;

	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_101117[iParam0 /*98*/] };
		
			if (Global_101412[iParam0] != 2)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_101420[iParam0 /*3*/], -829.7478f, 192.11703f, 76.73248f, -827.13837f, 153.85951f, 59.961723f, 33.25f, false, true))
				{
					if (Global_101412[iParam0] == 1)
					{
						*uParam3 = { Global_101420[iParam0 /*3*/] - Global_114162.f_2367.f_539.f_2300[iParam0 /*3*/] };
						*uParam4 = Global_101430[iParam0] - Global_114162.f_2367.f_539.f_2310[iParam0];
					
						if (SYSTEM::VMAG2(*uParam3) > 5f * 5f)
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return false;
						}
					}
				}
			
				*uParam3 = { Global_101420[iParam0 /*3*/] - Global_114162.f_2367.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = Global_101430[iParam0] - Global_114162.f_2367.f_539.f_2310[iParam0];
			
				if (SYSTEM::VMAG2(*uParam3) < 0.5f * 0.5f)
					*uParam3 = { *uParam3 * { 1.5f, 1.5f, 1.5f } };
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
		
			return true;
	
		case 6:
			*uParam2 = { Global_101117[iParam0 /*98*/] };
		
			if (Global_101412[iParam0] != 2)
			{
				*uParam3 = { Global_101420[iParam0 /*3*/] - Global_114162.f_2367.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = Global_101430[iParam0] - Global_114162.f_2367.f_539.f_2310[iParam0];
			
				if (SYSTEM::VMAG2(*uParam3) < 0.5f * 0.5f)
					*uParam3 = { *uParam3 * { 1.5f, 1.5f, 1.5f } };
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
		
			return true;
	
		case 7:
			*uParam2 = { Global_101117[iParam0 /*98*/] };
		
			if (Global_101412[iParam0] != 2)
			{
				*uParam3 = { Global_101420[iParam0 /*3*/] - Global_114162.f_2367.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = Global_101430[iParam0] - Global_114162.f_2367.f_539.f_2310[iParam0];
			
				if (SYSTEM::VMAG2(*uParam3) < 0.5f * 0.5f)
					*uParam3 = { *uParam3 * { 1.5f, 1.5f, 1.5f } };
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
		
			return true;
	
		case 11:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return true;
	
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { { 28.826f, -1277.56f, -90.961f } - { 28.3203f, -1324.1947f, -90.0089f } };
			*uParam4 = 1.27f - 194.1887f;
			return true;
	
		case 9:
			return func_166(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 10:
			return func_166(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 13:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return true;
	
		case 14:
			func_168(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { { 4.8006f, -2965.4985f, 782.1644f } - { 4.0205f, -2975.3408f, 798.4536f } };
			*uParam4 = 246.1684f - 90f;
			return true;
	
		case 56:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return true;
	
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { { 28.764f, -1431.464f, 66.028f } - { 28.2954f, -1351.5203f, 37.5988f } };
			*uParam4 = 141.28f - 90.0339f;
			return true;
	
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return true;
	
		case 16:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return true;
	
		case 17:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 18:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 19:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return true;
	
		case 20:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 23:
			return func_166(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 24:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 67:
			func_168(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return true;
	
		case 58:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 59:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 60:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return true;
	
		case 74:
			func_168(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return true;
	
		case 38:
			func_168(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 41:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return true;
	
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { { 29.17f, -1417.047f, 54.081f } - { 28.2915f, -1464.6798f, 72.2278f } };
			*uParam4 = 0.72f - 156.8827f;
			return true;
	
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { { 24.9f, -938.8f, 792.3f } - { 24.2312f, -906f, 763f } };
			*uParam4 = 2.23f - 7.2736f;
			return true;
	
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { { 28.701f, -1090.07f, 306.036f } - { 28.3684f, -1120.7855f, 257.9167f } };
			*uParam4 = -1f - 97.2736f;
			return true;
	
		case 40:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return true;
	
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 234:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return true;
	
		case 75:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 76:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { { 4.8006f, -2965.4985f, 782.1644f } - { 4.0205f, -2975.3408f, 798.4536f } };
			*uParam4 = 246.1684f - 90f;
			return true;
	
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { { 5.4446f, -2912.043f, 659.5297f } - { 5.0589f, -2916.4788f, 709.0244f } };
			*uParam4 = 247.4806f - 355.326f;
			return true;
	
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { { 5.1176f, -2936.8425f, 656.9753f } - { 5.1337f, -2917.325f, 643.5248f } };
			*uParam4 = 253.776f - 334.1068f;
			return true;
	
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { { 5.681f, -2769.795f, 593.033f } - { 5.0558f, -2819.0852f, 594.4415f } };
			*uParam4 = 2.62f - 299.0519f;
			return true;
	
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 49:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return true;
	
		case 48:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = 164.2466f - 180f;
			return true;
	
		case 50:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { { 28.1755f, -550.2679f, -1170.7203f } - { 30.2361f, -526.9999f, -1257.5f } };
			*uParam4 = 310.4708f - 220.9554f;
			return true;
	
		case 52:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return true;
	
		case 66:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return true;
	
		case 61:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 62:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 63:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return true;
	
		case 64:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { { 36.5734f, -85.1799f, -737.1358f } - { 54f, 111f, -852f } };
			*uParam4 = 64.1848f - 180f;
			return true;
	
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
		
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
		
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
		
			return true;
	
		case 112:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return true;
	
		case 113:
			if (func_166(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return true;
			}
			break;
	
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return true;
	
		case 119:
			if (func_166(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return true;
			}
			break;
	
		case 120:
			if (func_166(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return true;
			}
			break;
	
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return true;
	
		case 114:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return true;
	
		case 105:
			func_168(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return true;
	
		case 106:
			return func_166(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 107:
			return func_166(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 98:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return true;
	
		case 99:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return true;
	
		case 100:
			return func_166(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 101:
			return func_166(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 102:
			return func_166(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 123:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return true;
	
		case 125:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return true;
	
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 89:
		case 90:
		case 127:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return true;
	
		case 91:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return true;
	
		case 93:
			if (func_166(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return true;
			}
			break;
	
		case 121:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return true;
	
		case 115:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 43.517f, -33.7052f, -531.6035f } - { 45.6141f, -21.87f, -511.73f } };
			*uParam4 = 177.259f - 180f - 69f;
			return true;
	
		case 116:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return true;
	
		case 117:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return true;
	
		case 94:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return true;
	
		case 96:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return true;
	
		case 108:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return true;
	
		case 109:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return true;
	
		case 135:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return true;
	
		case 136:
			if (func_166(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return true;
			}
			break;
	
		case 137:
			if (func_166(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return true;
			}
			break;
	
		case 138:
			if (func_166(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return true;
			}
			break;
	
		case 139:
			if (func_166(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return true;
			}
			break;
	
		case 140:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 141:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return true;
			}
			break;
	
		case 142:
			func_168(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return true;
	
		case 143:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 144:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 145:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 146:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 147:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return true;
			}
			break;
	
		case 148:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 149:
			if (func_166(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 151:
			if (func_166(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return true;
			}
			break;
	
		case 162:
			if (func_166(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return true;
			}
			break;
	
		case 158:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return true;
	
		case 166:
			return func_166(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 170:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return true;
	
		case 171:
			return func_166(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 172:
			return func_166(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 208:
			func_168(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return true;
	
		case 209:
			return func_166(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 210:
			return func_166(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 211:
			func_167(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return true;
	
		case 212:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return true;
	
		case 213:
			if (func_166(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return true;
			}
			break;
	
		case 214:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return true;
	
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { { 183.8081f, 578.5989f, 174.7651f } - { 176.086f, 551.7596f, 10.9694f } };
			*uParam6 = 10f;
			return true;
	
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { { 29.4846f, -1457.9152f, -17.4132f } - { 31.1932f, -1441.1821f, -14.8689f } };
			*uParam4 = 89.0026f - -1.5f;
			*uParam5 = { { 33.6125f, -1563.4609f, -147.0307f } - { 31.1932f, -1441.1821f, -14.8689f } };
			*uParam6 = 10f;
			return true;
	
		case 221:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 43.5168f, -33.5909f, -531.4f } - { 45.2617f, -28.54f, -521.13f } };
			*uParam4 = 357.1407f - 84.96f;
			return true;
	
		case 216:
			if (func_166(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return true;
			}
			break;
	
		case 217:
			if (func_166(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return true;
			}
			break;
	
		case 232:
		case 233:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { { 28.225f, -1015.1096f, -70.4456f } - { 27.5447f, -1019.2347f, -78.4023f } };
			*uParam4 = 162.09804f - 109.0206f;
			return true;
	
		case 192:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 3.403f, -1531.113f, -1190.0171f } - { 4.7514f, -1573.632f, -1174.458f } };
			*uParam4 = 302.182f - 105.981f;
			return true;
	
		case 193:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 3.403f, -1531.113f, -1190.0171f } - { 4.3599f, -1573.692f, -1175.298f } };
			*uParam4 = 302.182f - 172.9187f;
			return true;
	
		case 194:
			if (func_166(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return true;
			}
			break;
	
		case 195:
			if (func_166(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return true;
			}
			break;
	
		case 200:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 28.4055f, -1607.5681f, 44.4802f } - { (28.2858f - 0.5f) + 1.5f, -1607.2864f, 2.8895f } };
			*uParam4 = 318.2674f - 310.879f - 180f;
			return true;
	
		case 201:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 28.1773f, -1592.7875f, 3.6009f } - { 29.2903f, -1607.2864f, 2.8895f } };
			*uParam4 = 322.6286f - 130.879f;
			return true;
	
		case 202:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return true;
	
		case 222:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return true;
	
		case 223:
			if (func_166(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return true;
			}
			break;
	
		case 224:
			return func_166(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 226:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 28.7f, -1356.9f, 24.6f } - { 29.3437f, -1351.412f, 28.986f } };
			*uParam4 = 270.1767f - 160f - 180f;
			return true;
	
		case 227:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return true;
	
		case 228:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return true;
	
		case 229:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return true;
	
		case 230:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return true;
	
		case 238:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return true;
	
		case 250:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return true;
	
		case 251:
			if (func_166(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return true;
			}
			break;
	
		case 252:
			if (func_166(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return true;
			}
			break;
	
		case 253:
			if (func_166(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return true;
			}
			break;
	
		case 281:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return true;
	
		case 282:
			if (func_166(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
				return true;
			break;
	
		case 283:
			if (func_166(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
				return true;
			break;
	
		case 284:
			if (func_166(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_91 = 0;
				return true;
			}
			break;
	
		case 275:
			func_167(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return true;
	
		case 276:
			return func_166(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 277:
			return func_166(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 280:
			if (!Global_4)
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
		
			*uParam3 = { { -0.6187f, -1440.4209f, 2779.759f } - { 0.3109f, -1453.731f, 2789.845f } };
			uParam3->f_2 = uParam3->f_2 + 0.5f;
			*uParam4 = 340.0835f - 4.44f;
			*uParam3 = { { -0.7f, 16.55f, -3.3962f } + { 0.5f, 0.5f, -0.5f } };
			*uParam4 = 23.6441f + 90f;
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * { 1.1f, 1.1f, 1.1f } };
			return true;
	
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = (-114f - 43f) + 133f;
			return true;
	
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return true;
	
		case 309:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, 0.9455f - 1.7f };
			*uParam4 = -138.6056f;
			return true;
	
		case 305:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 33.8797f, 3597.0466f, 1399.6621f } - { 37.9419f, 3602.284f, 1394.2081f } };
			*uParam4 = 315.9865f - 122.5269f;
			return true;
	
		case 310:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return true;
	
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return true;
	
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return true;
	
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return true;
	
		case 256:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 7.1164f, -1094.2047f, -1243.6498f } - { 7.1f, -1105.15f, -1242.68f } };
			*uParam4 = 14.0848f - 120f;
			return true;
	
		case 257:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 6.8143f, -930.5448f, -1672.5349f } - { 6.479f, -974.7168f, -1667.148f } };
			*uParam4 = 144.9416f - 171.253f;
			return true;
	
		case 258:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 30.3025f, 6276.1196f, -267.5488f } - { 30.5054f, 6250.9f, -301.4778f } };
			*uParam4 = 130.9896f - 10.247f;
			return true;
	
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return true;
	}

	switch (iParam1)
	{
		case 110:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 32.5629f, -387.5143f, -147.166f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 341.4322f - 133f;
			return true;
	
		case 111:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 24.4283f, -689.1462f, -1306.7816f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 214.6826f - 33f;
			return true;
	
		case 153:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 79.3324f, 254.0631f, -708.9244f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 115.2022f - -176.25f;
			return true;
	
		case 154:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 79.3324f, 254.0631f, -708.9244f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 115.2022f - -147.192f;
			return true;
	
		case 165:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 35.0054f, -441.1681f, -1100.8779f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 297.5568f - -144.622f;
			return true;
	
		case 159:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 36.3852f, -199.5354f, -825.3141f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 29.4869f - -62.5f;
			return true;
	
		case 160:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 36.2086f, -144.1027f, -730.8218f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 28.532f - 119f;
			return true;
	
		case 167:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 31.7307f, -523.2257f, -1144.1743f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 299.2956f - -22.32f;
			return true;
	
		case 152:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 60.9436f, 314.6989f, -1421.7998f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 335.4134f - 72f;
			return true;
	
		case 157:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 79.469f, 255.3143f, -706.187f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 117.3069f - 37.27f;
			return true;
	
		case 225:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 28.7165f, -1677.7335f, 185.4888f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 54.2538f - -83.8f;
			return true;
	
		case 218:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 28.3218f, -1405.1594f, -17.556f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 91.3098f - -70.4124f;
			return true;
	
		case 219:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 30.2611f, -1492.1511f, -219.3172f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 139.2572f - -12f;
			return true;
	
		case 220:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 25.3018f, -1811.6935f, -22.6138f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 141.0423f - -117.356f;
			return true;
	
		case 206:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 208.5337f, 773.6719f, 164.1308f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 136.3104f - -36f;
			return true;
	
		case 207:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 108.9995f, 396.924f, -263.3745f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 284.4611f - -95.588f;
			return true;
	
		case 274:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 139.5782f, 2030.4458f, -1883.836f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 340.5746f - 9f;
			return true;
	
		case 312:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 10.0296f, 6560.5566f, -200.684f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 134.5505f - 110.5931f;
			return true;
	
		case 271:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 6.4647f, -1083.7513f, -1278.0234f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 115.8919f - 26.3597f;
			return true;
	
		case 248:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 102.4417f, 164.5124f, 325.8113f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 68.4108f - 10.77f;
			return true;
	
		case 242:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 56.616f, -122.9896f, -1622.2205f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 210.8653f - 13.7207f;
			return true;
	
		case 254:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 53.0019f, -213.7796f, 172.442f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 250.3032f - -40f;
			return true;
	
		case 287:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 17.3426f, -836.0328f, -887.9977f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 270.8607f - -81f;
			return true;
	
		case 286:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 4.8359f, -1182.7039f, -1264.2178f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 298.4328f - -150f;
			return true;
	
		case 239:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 104.8218f, 289.0073f, -80.4564f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 247.6446f - -122f;
			return true;
	
		case 243:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 28.2762f, -1477.2819f, 434.9171f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 228.6353f - 18f;
			return true;
	
		case 244:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 28.2762f, -1477.2819f, 434.9171f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 228.6353f - -51f;
			return true;
	
		case 249:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 103.1881f, 177.7729f, 288.977f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 68.9831f - 138f - 180f;
			return true;
	
		case 273:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 32.7794f, -432.4635f, -161.4589f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 340.0368f - -153f;
			return true;
	
		case 92:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 202.1143f, 828.3607f, -806.8813f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 101.1612f - -54.347f;
			return true;
	
		case 103:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 12.0174f, -1108.081f, -1724.72f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 319.8931f - 143.4931f;
			return true;
	
		case 109:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 10.2248f, -628.4899f, -1859.5045f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 229.0784f - 99f;
			return true;
	
		case 81:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 53.1469f, 90.4242f, -1393.4424f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 123.1782f - -45f;
			return true;
	
		case 95:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 101.921f, 186.1865f, 370.5876f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 159.7861f - 70f;
			return true;
	
		case 97:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 45.9871f, -188.5636f, -1391.1559f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 36.5172f - -45f;
			return true;
	
		case 134:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 46.0567f, 3076.742f, 2001.9182f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 328.101f - -33.128f;
			return true;
	
		case 88:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 60.9442f, 314.7191f, -1421.8212f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 336.5938f - -132f;
			return true;
	
		case 306:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 37.4888f, 5643.7256f, -569.3535f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f);
			return true;
	
		case 307:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 47.4526f, 4717.728f, -1555.5929f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f);
			return true;
	
		case 308:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 22.7549f, 4629.148f, -1553.861f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f);
			return true;
	
		case 278:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 35.9161f, -1009.7451f, 631.8275f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 98.8128f - -33.77f;
			return true;
	
		case 279:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 234.6825f, 900.8749f, -111.9033f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 6.1087f - 155.68f;
			return true;
	
		case 240:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 33.5351f, 3636.151f, 1546.3232f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 298.4009f - -4.124f;
			return true;
	
		case 241:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 30.512f, 6439.6665f, -179.4242f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 225.5593f - 108f;
			return true;
	
		case 264:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 28.2977f, -1390.5446f, 486.7419f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 178.298f - -90f;
			return true;
	
		case 266:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 10.5662f, 143.2342f, -3052.8945f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 85.3429f - 68.8227f;
			return true;
	
		case 267:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 39.9155f, 4934.08f, 2202.3752f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 314.2654f - 56.2037f;
			return true;
	
		case 269:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 28.149f, -782.0952f, 401.2502f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 179.9905f - -106.6605f;
			return true;
	
		case 246:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 3.3919f, -1534.5072f, -1195.2559f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 305.8221f - -165f;
			return true;
	
		case 263:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 12.8792f, -1241.2125f, -573.3765f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 316.9941f - -171f;
			return true;
	
		case 259:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 4.0002f, -1298.5391f, -724.429f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 230.5715f - -32.488f;
			return true;
	
		case 260:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 61.203f, 250.8387f, -1309.1135f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 10.7756f - -29.093f;
			return true;
	
		case 261:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 79.764f, 60.3233f, 917.6678f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = 148.021f - 229.6085f;
			return true;
	
		case 270:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { { 350f, 8588f, 2919f } - Global_100152[iParam1 /*3*/] };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return true;
	
		case 289:
			func_168(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return true;
	}

	return false;
}

void func_167(int iParam0, var uParam1, int iParam2) // Position - 0xB4BE (46270)
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("tailgater");
		
			if (Global_114162.f_9089.f_99.f_58[128] && !Global_114162.f_9089.f_99.f_58[131])
				num = joaat("premier");
		
			switch (num)
			{
				case joaat("tailgater"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("premier"):
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
	
		case 2:
			num = joaat("bodhi2");
		
			switch (num)
			{
				case joaat("bodhi2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_114162.f_9089.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case 1:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (Global_114162.f_9089.f_99.f_58[118])
				num = joaat("bagger");
			else
				num = joaat("buffalo2");
		
			switch (num)
			{
				case joaat("bagger"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("buffalo2"):
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

int func_168(int iParam0, var uParam1, int iParam2) // Position - 0xB71A (46874)
{
	if (Global_101117[iParam0 /*98*/] == 0)
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (Global_101117[iParam0 /*98*/] == joaat("blimp"))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (func_180(iParam0))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(Global_101117[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_101117[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_101117[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_101117[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (iParam2 == 1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_CAR(Global_101117[iParam0 /*98*/]))
		{
			func_167(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Global_101117[iParam0 /*98*/]))
		{
			func_167(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}

	if (!func_169(Global_101117[iParam0 /*98*/], false, -1))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (iParam2 != 0)
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
	
		if (Global_101117[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_101117[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_167(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
	
		if (Global_101117[iParam0 /*98*/] == *uParam1)
		{
			func_167(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
	
		func_167(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
	
		if (Global_101117[iParam0 /*98*/] == *uParam1)
		{
			func_167(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
	
		*uParam1 = { Global_101117[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}

	func_167(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

BOOL func_169(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xB952 (47442)
{
	int i;
	Hash outData;

	if (hParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(hParam0))
		return false;

	if (hParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("blimp2") || hParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
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

	if (hParam0 == joaat("blimp"))
		if (!func_178() && !func_177() && !func_176() && !func_175() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	if (hParam0 == joaat("hotknife") || hParam0 == joaat("carbonrs") || hParam0 == joaat("khamelion"))
	{
		if (func_174() || MISC::IS_PC_VERSION() || func_173())
		{
		}
		else if (!func_176())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_172(hParam0, iParam2))
			return false;

	if (!func_170(hParam0))
		return false;

	return true;
}

BOOL func_170(Hash hParam0) // Position - 0xBAD7 (47831)
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
		case joaat("dune4"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_DUNE4_t0_v3", 64);
			break;
	
		case joaat("voltic2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case joaat("ruiner2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_RUINER2_t0_v3", 64);
			break;
	
		case joaat("phantom2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case joaat("technical2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case joaat("boxville5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case joaat("wastelander"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case joaat("blazer5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&name))
		return false;

	return true;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0xBBA3 (48035)
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_172(Hash hParam0, int iParam1) // Position - 0xBBBA (48058)
{
	int cloudTimeAsInt;
	int num;
	int i;

	if (Global_2707806)
		return true;

	if (!Global_2707807 && iParam1 >= 0 && iParam1 <= 547)
		if (IS_BIT_SET(Global_1586543[iParam1 /*143*/].f_104, 2))
			return true;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
	num = 0;

	switch (hParam0)
	{
		case -1321131184:
			num = Global_262145.f_36169[0];
			break;
	
		case -1289225626:
			num = Global_262145.f_36169[1];
			break;
	
		case -362690998:
			num = Global_262145.f_36169[2];
			break;
	
		case -1948949064:
			num = Global_262145.f_36169[3];
			break;
	
		case -1466692365:
			num = Global_262145.f_36169[4];
			break;
	
		case joaat("cargobob5"):
			num = Global_262145.f_36169[5];
			break;
	
		case 2042703219:
			num = Global_262145.f_36169[6];
			break;
	
		case 1484920335:
			num = Global_262145.f_36169[7];
			break;
	
		case 1891140410:
			num = Global_262145.f_36169[8];
			break;
	
		case 1992041063:
			num = Global_262145.f_36169[9];
			break;
	
		case 858355070:
			num = Global_262145.f_36169[10];
			break;
	
		case joaat("URANUS"):
			num = Global_262145.f_36169[11];
			break;
	
		case 84351789:
			num = Global_262145.f_36169[12];
			break;
	
		case -660007725:
			num = Global_262145.f_36169[13];
			break;
	
		case -973016778:
			num = Global_262145.f_36169[14];
			break;
	
		case 127317925:
			num = Global_262145.f_36169[15];
			break;
	
		case joaat("taco"):
			num = Global_262145.f_36169[16];
			break;
	
		case joaat("predator"):
			num = Global_262145.f_36169[17];
			break;
	}

	if (cloudTimeAsInt > num)
		return true;

	for (i = 0; i < 10; i = i + 1)
	{
		if (hParam0 == Global_1835471[i])
			return true;
	}

	return false;
}

BOOL func_173() // Position - 0xBDE7 (48615)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_174() // Position - 0xBDFD (48637)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_175() // Position - 0xBE13 (48659)
{
	return false;
}

BOOL func_176() // Position - 0xBE1C (48668)
{
	return true;
}

BOOL func_177() // Position - 0xBE25 (48677)
{
	return true;
}

BOOL func_178() // Position - 0xBE2E (48686)
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xBE47 (48711)
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

BOOL func_180(int iParam0) // Position - 0xBEFF (48895)
{
	if (Global_101117[iParam0 /*98*/] == joaat("blimp") || Global_101117[iParam0 /*98*/] == joaat("blimp2"))
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("submersible") || Global_101117[iParam0 /*98*/] == joaat("submersible2"))
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("freight"))
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("packer"))
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("asea2"))
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("burrito2") || Global_101117[iParam0 /*98*/] == joaat("fbi2"))
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("entityxf") && !Global_114162.f_9089.f_330[8 /*6*/])
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("cheetah") && !Global_114162.f_9089.f_330[8 /*6*/])
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("policeb") && !Global_114162.f_9089.f_330[8 /*6*/])
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("ztype") && !Global_114162.f_9089.f_330[9 /*6*/])
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("polmav") && !Global_114162.f_9089.f_330[9 /*6*/])
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("jb700") && !Global_114162.f_9089.f_330[10 /*6*/])
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("monroe") && !Global_114162.f_9089.f_330[11 /*6*/])
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("firetruk"))
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("handler"))
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("monroe"))
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("phantom"))
		return true;

	if (Global_101117[iParam0 /*98*/] == joaat("gauntlet") && !Global_114162.f_9089.f_330[80 /*6*/] && !Global_114162.f_9089.f_330[81 /*6*/] && !Global_114162.f_9089.f_330[82 /*6*/])
		return true;

	return false;
}

BOOL func_181(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0xC180 (49536)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_182(int iParam0, var uParam1, var uParam2) // Position - 0xC1C7 (49607)
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
			return func_182(8, uParam1, uParam2);
	
		case 10:
			return func_182(8, uParam1, uParam2);
	
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

int func_183() // Position - 0xCB36 (52022)
{
	var unk;

	func_193(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_192(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_191(&unk, CLOCK::GET_CLOCK_HOURS());
	func_186(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_185(&unk, CLOCK::GET_CLOCK_MONTH());
	func_184(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_184(var uParam0, int iParam1) // Position - 0xCB7C (52092)
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

void func_185(var uParam0, int iParam1) // Position - 0xCC02 (52226)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_186(var uParam0, int iParam1) // Position - 0xCC35 (52277)
{
	int num;
	int num2;

	num = func_190(*uParam0);
	num2 = func_188(*uParam0);

	if (iParam1 < 1 || iParam1 > func_187(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_187(int iParam0, int iParam1) // Position - 0xCC86 (52358)
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

int func_188(int iParam0) // Position - 0xCD28 (52520)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_189(BOOL bParam0, var uParam1, var uParam2) // Position - 0xCD4A (52554)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_190(int iParam0) // Position - 0xCD61 (52577)
{
	return iParam0 & 15;
}

void func_191(var uParam0, int iParam1) // Position - 0xCD6E (52590)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_192(var uParam0, int iParam1) // Position - 0xCDA8 (52648)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_193(var uParam0, int iParam1) // Position - 0xCDE3 (52707)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_194(var uParam0, int iParam1) // Position - 0xCE1F (52767)
{
	int i;
	int num;
	var unk;
	float num2;

	if (iParam1 == 94)
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		num = Global_114162.f_18537[i];
	
		if (num == 8 || num == 9 || num == 10 || num == 11 || num == 34 || num == 72 || num == 73 && !IS_BIT_SET(Global_114162.f_9089.f_99.f_219[0], 9))
		{
		}
		else
		{
			unk = { 0f, 0f, 0f };
			num2 = 0f;
		
			if (!func_182(Global_114162.f_18537[i], &unk, &num2))
			{
				Global_114162.f_18537[i] = 318;
				func_195(&uParam0->f_2296[i]);
				uParam0->f_2300[i /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[i] = 0f;
				uParam0->f_2314[i] = 0;
				uParam0->f_2318[i /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[i] = 0;
				Global_99078[i /*29*/] = { 0f, 0f, 0f };
				Global_99078[i /*29*/].f_9 = 0f;
				Global_99078[i /*29*/].f_12 = 0f;
				Global_99078[i /*29*/].f_3 = { 0f, 0f, 0f };
				Global_99078[i /*29*/].f_10 = 0f;
				Global_99078[i /*29*/].f_13 = 0f;
				Global_99078[i /*29*/].f_6 = { 0f, 0f, 0f };
				Global_99078[i /*29*/].f_11 = 0f;
				Global_99078[i /*29*/].f_14 = 0f;
				Global_99078[i /*29*/].f_17 = { 0f, 0f, 0f };
				Global_99078[i /*29*/].f_26 = 0f;
				Global_99078[i /*29*/].f_20 = { 0f, 0f, 0f };
				Global_99078[i /*29*/].f_27 = 0f;
				Global_99078[i /*29*/].f_23 = { 0f, 0f, 0f };
				Global_99078[i /*29*/].f_28 = 0f;
			}
		}
	}

	return;
}

void func_195(var uParam0) // Position - 0xCFE5 (53221)
{
	*uParam0 = -15;
	return;
}

void func_196(int iParam0) // Position - 0xCFF3 (53235)
{
	Global_44750 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

int func_197() // Position - 0xD005 (53253)
{
	if (func_3(false))
		return 0;

	if (Global_101752.f_8)
		if (Global_101752.f_10 > 0)
			return 0;
	else if (Global_101752.f_10 > 1)
		return 0;

	Global_101752.f_10 = Global_101752.f_10 + 1;
	return 1;
}

int func_198(var uParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0xD050 (53328)
{
	Ped ped;
	eCharacter character;
	eCharacter character2;
	float num;
	int i;
	int num2;
	var unk;
	Ped ped2;
	var script;
	const char* entityScript;

	if (!uParam0->f_39)
		if (uParam0->f_7 == 4)
			return 1;

	if (uParam0->[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
	}

	if (!PED::IS_PED_INJURED(uParam0->[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && uParam0->[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			else
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (PED::IS_PED_RAGDOLL(uParam0->[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE(uParam0->[uParam0->f_7]) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->[uParam0->f_7]))
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->[uParam0->f_7]);
			else
				TASK::CLEAR_PED_TASKS(uParam0->[uParam0->f_7]);
		}
	
		ped = PLAYER::PLAYER_PED_ID();
		character = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (!uParam0->f_23)
			func_249(ped, false);
	
		func_247(character, &ped);
		PED::SET_PED_CONFIG_FLAG(ped, 32, true);
		PED::SET_PED_CONFIG_FLAG(ped, 250, true);
		character2 = func_246(uParam0->f_7);
		func_249(uParam0->[uParam0->f_7], false);
		num = ((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(uParam0->[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(uParam0->[uParam0->f_7])) - 100f)) * 100f;
	
		switch (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()))
		{
			case CHAR_MICHAEL:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
			
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				break;
		
			case CHAR_FRANKLIN:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
			
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				break;
		
			case CHAR_TREVOR:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
			
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				break;
		}
	
		if (func_102(_GET_CURRENT_PLAYER_CHARACTER()))
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
	
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), uParam0->[uParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_CASH);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_CASH_CHANGE);
	
		if (iParam3 & 1 != 0)
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
	
		if (func_245(0) || func_245(3))
		{
			if (Global_23848.f_13)
			{
				for (i = 0; i < 7; i = i + 1)
				{
					if (IS_BIT_SET(Global_92440[i /*5*/].f_1, 2))
					{
						num2 = Global_92440[i /*5*/];
						TEXT_LABEL_ASSIGN_STRING(&unk, "MISS_SWITCH_", 64);
						TEXT_LABEL_APPEND_STRING(&unk, &Global_92476[Global_79835.f_109[num2 /*4*/] /*34*/], 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&unk), 1f);
					}
				}
			}
		}
	
		Global_23848.f_13 = 0;
		uParam0->f_5 = func_244(character);
	
		if (uParam0->f_5 == 4)
			uParam0->f_5 = 3;
	
		uParam0->[uParam0->f_5] = ped;
		uParam0->[uParam0->f_7] = 0;
		uParam0->f_6 = func_244(character2);
		uParam0->f_7 = 4;
		ped2 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		func_243(ped2);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(ped2, false, 0);
	
		if (num < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND(((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f), 0, 0);
	
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(ped))
			{
				ENTITY::SET_ENTITY_VISIBLE(ped, true, false);
				func_243(ped);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(ped, false, 0);
				PED::SET_PED_STEALTH_MOVEMENT(ped, false, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(ped))
		{
			entityScript = ENTITY::GET_ENTITY_SCRIPT(ped, &script);
		
			if (!MISC::IS_STRING_NULL(entityScript))
			{
				if (!MISC::ARE_STRINGS_EQUAL(entityScript, SCRIPT::GET_THIS_SCRIPT_NAME()))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, false, true);
			
				PED::DELETE_PED(&ped);
			}
		}
	
		Global_98970 = 1;
		func_241(PLAYER::PLAYER_PED_ID());
		func_240();
		func_239(character2);
		func_229();
		func_222(character2);
		func_205(func_220(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), func_335(67));
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), func_335(68));
	
		func_202(character2, &ped2);
	
		if (func_330(0) || func_330(3) || func_330(2) || func_330(4))
		{
			PED::SET_PED_CONFIG_FLAG(ped2, 32, false);
			PED::SET_PED_CONFIG_FLAG(ped2, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(ped2, 32, true);
			PED::SET_PED_CONFIG_FLAG(ped2, 250, true);
		}
	
		if (!func_201())
			func_199();
	
		Global_98607 = 0;
		return 1;
	}
	else
	{
		PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
		PED::IS_PED_INJURED(uParam0->[uParam0->f_7]);
		PLAYER::PLAYER_PED_ID() == uParam0->[uParam0->f_7];
	}

	return 0;
}

void func_199() // Position - 0xD540 (54592)
{
	if (Global_99000)
	{
		func_101();
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_200(Global_114162.f_2367.f_539.f_4321));
	}
	else
	{
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
	}

	return;
}

char* func_200(eCharacter echParam0) // Position - 0xD572 (54642)
{
	echParam0 = echParam0;
	return "";
}

BOOL func_201() // Position - 0xD581 (54657)
{
	return Global_23846;
}

void func_202(eCharacter echParam0, var uParam1) // Position - 0xD58C (54668)
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			func_203(4, *uParam1);
			func_203(7, *uParam1);
			func_203(8, *uParam1);
			func_203(11, *uParam1);
			break;
	
		case CHAR_FRANKLIN:
			if (Global_114162.f_9089.f_330[2 /*6*/])
				func_203(4, *uParam1);
		
			func_203(7, *uParam1);
			func_203(8, *uParam1);
			func_203(11, *uParam1);
		
			if (Global_114162.f_9089.f_99.f_58[126])
				func_203(12, *uParam1);
			break;
	
		case CHAR_TREVOR:
			if (Global_114162.f_9089.f_330[20 /*6*/])
				func_203(4, *uParam1);
		
			func_203(7, *uParam1);
			func_203(8, *uParam1);
			func_203(11, *uParam1);
			break;
	}

	return;
}

void func_203(int iParam0, Ped pedParam1) // Position - 0xD658 (54872)
{
	int i;
	Ped ped;
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (func_204(iParam0, pedParam1))
		return;

	if (Global_42895[iParam0 /*31*/].f_24 < 5)
	{
		Global_42895[iParam0 /*31*/].f_25[Global_42895[iParam0 /*31*/].f_24] = pedParam1;
		Global_42895[iParam0 /*31*/].f_24 = Global_42895[iParam0 /*31*/].f_24 + 1;
	}
	else
	{
		flag = false;
	
		for (i = 0; i < 5; i = i + 1)
		{
			ped = Global_42895[iParam0 /*31*/].f_25[i];
		
			if (!ENTITY::DOES_ENTITY_EXIST(ped) || PED::IS_PED_INJURED(ped))
			{
				Global_42895[iParam0 /*31*/].f_25[i] = pedParam1;
				flag = true;
				i = 6;
			}
		}
	
		!flag;
	}

	return;
}

BOOL func_204(int iParam0, Entity eParam1) // Position - 0xD70A (55050)
{
	int i;

	for (i = 0; i < Global_42895[iParam0 /*31*/].f_24; i = i + 1)
	{
		if (eParam1 == Global_42895[iParam0 /*31*/].f_25[i])
			return true;
	}

	return false;
}

void func_205(int iParam0) // Position - 0xD743 (55107)
{
	if (iParam0 == 10)
		return;

	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&Global_39559[38 / 32], 38 % 32);
			func_206(38, 0);
			MISC::SET_BIT(&Global_39559[41 / 32], 41 % 32);
			func_206(41, 0);
			MISC::SET_BIT(&Global_39559[43 / 32], 43 % 32);
			func_206(43, 0);
			MISC::SET_BIT(&Global_39559[42 / 32], 42 % 32);
			func_206(42, 0);
			MISC::SET_BIT(&Global_39559[44 / 32], 44 % 32);
			func_206(44, 0);
			break;
	
		case 1:
			MISC::SET_BIT(&Global_39559[51 / 32], 51 % 32);
			func_206(51, 0);
			break;
	
		case 2:
			MISC::SET_BIT(&Global_39559[51 / 32], 51 % 32);
			func_206(51, 0);
			break;
	
		case 3:
			MISC::SET_BIT(&Global_39559[53 / 32], 53 % 32);
			func_206(53, 0);
			break;
	
		case 4:
			MISC::SET_BIT(&Global_39559[81 / 32], 81 % 32);
			func_206(81, 0);
			MISC::SET_BIT(&Global_39559[82 / 32], 82 % 32);
			func_206(82, 0);
			break;
	
		case 5:
			MISC::SET_BIT(&Global_39559[47 / 32], 47 % 32);
			func_206(47, 0);
			MISC::SET_BIT(&Global_39559[50 / 32], 50 % 32);
			func_206(50, 0);
			break;
	
		case 6:
			MISC::SET_BIT(&Global_39559[50 / 32], 50 % 32);
			func_206(50, 0);
			break;
	}

	return;
}

void func_206(int iParam0, int iParam1) // Position - 0xD8D3 (55507)
{
	int num;

	if (iParam0 != 226)
	{
		if (Global_79564)
			num = Global_43733[iParam0];
		else
			num = Global_114162.f_7265[iParam0];
	
		if (num != iParam1 || IS_BIT_SET(Global_39559[iParam0 / 32], iParam0 % 32))
		{
			if (iParam1 == 4 || iParam1 == 3 || iParam1 == 5 || iParam1 == 6 || iParam1 == 2)
			{
				MISC::SET_BIT(&Global_39568[iParam0 / 32], iParam0 % 32);
				Global_40031[iParam0] = iParam1;
			}
			else if (Global_79564)
			{
				Global_43733[iParam0] = iParam1;
			}
			else
			{
				Global_114162.f_7265[iParam0] = iParam1;
			}
		
			MISC::SET_BIT(&Global_39559[iParam0 / 32], iParam0 % 32);
			func_208(iParam0);
		
			if (IS_BIT_SET(Global_39559[iParam0 / 32], iParam0 % 32))
				func_207(iParam0);
		}
	}

	return;
}

void func_207(int iParam0) // Position - 0xD9C0 (55744)
{
	if (!IS_BIT_SET(Global_40502.f_228[iParam0 / 32], iParam0 % 23))
	{
		MISC::SET_BIT(&Global_40502.f_228[iParam0 / 32], iParam0 % 23);
		Global_40502[Global_40502.f_227] = iParam0;
		Global_40502.f_227 = Global_40502.f_227 + 1;
	}

	return;
}

void func_208(int iParam0) // Position - 0xDA0B (55819)
{
	Vector3 vector;
	BOOL flag;
	BOOL flag2;
	int num;
	float distanceBetweenCoords;
	Interior interior;
	Interior interiorAtCoords;
	BOOL flag3;
	Interior interiorFromEntity;
	Interior interiorAtCoords2;

	if (!func_217())
		return;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	vector = { func_216(iParam0) };

	if (IS_BIT_SET(vector.f_4, 2))
		func_213(iParam0, &vector);

	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(vector.f_5))
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
			return;

	flag = false;
	flag2 = false;
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vector, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);

	if (IS_BIT_SET(Global_39568[iParam0 / 32], iParam0 % 32) && Global_40031[iParam0] == 2 && distanceBetweenCoords > 210f)
	{
		MISC::CLEAR_BIT(&Global_39568[iParam0 / 32], iParam0 % 32);
		Global_39577[iParam0] = 0;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
	{
		if (IS_BIT_SET(Global_39804[iParam0 / 32], iParam0 % 32))
		{
			if (distanceBetweenCoords < 25f)
			{
				if (Global_101765.f_397 == 0)
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						Global_101765.f_397 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
			
				interior = Global_101765.f_397;
				interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(vector);
			
				if (interior == interiorAtCoords && interior != 0)
				{
					MISC::SET_BIT(&Global_39568[iParam0 / 32], iParam0 % 32);
					Global_40031[iParam0] = 3;
					MISC::SET_BIT(&Global_39559[iParam0 / 32], iParam0 % 32);
				}
			}
		
			MISC::CLEAR_BIT(&Global_39804[iParam0 / 32], iParam0 % 32);
		}
	}

	if (IS_BIT_SET(Global_39568[iParam0 / 32], iParam0 % 32))
	{
		num = Global_40031[iParam0];
	}
	else if (IS_BIT_SET(vector.f_4, 0))
	{
		if (Global_114162.f_9089)
			num = func_210(iParam0);
		else
			num = 0;
	
		if (func_330(14))
			num = 0;
	}
	else if (IS_BIT_SET(vector.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) == 0)
	{
		if (func_209())
			num = 0;
		else
			num = 1;
	}
	else
	{
		num = Global_114162.f_7265[iParam0];
	}

	if (Global_40258[iParam0] != num)
		flag = true;

	if (IS_BIT_SET(Global_39559[iParam0 / 32], iParam0 % 32))
		if (!IS_BIT_SET(Global_39568[iParam0 / 32], iParam0 % 32) || Global_39577[iParam0] == 0 && Global_40031[iParam0] != 2)
			flag = true;

	if (flag)
	{
		if (!Global_39558)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(vector.f_5))
				OBJECT::ADD_DOOR_TO_SYSTEM(vector.f_5, vector.f_3, vector, false, false, false, 0);
		
			switch (num)
			{
				case 1:
					if (IS_BIT_SET(vector.f_4, 3))
					{
						flag3 = true;
					}
					else if (distanceBetweenCoords > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(vector.f_5)) <= 0.015f)
					{
						interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						interiorAtCoords2 = INTERIOR::GET_INTERIOR_AT_COORDS(vector);
					
						if (interiorFromEntity != interiorAtCoords2 || interiorFromEntity == 0)
							flag3 = true;
					}
				
					if (flag3)
					{
						if (vector.f_6 != 0f)
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
					
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
						flag2 = true;
					}
					break;
			
				case 4:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				case 2:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				case 0:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, true);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				case 3:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, 0, false, true);
					flag2 = true;
					break;
			
				case 5:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				case 6:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				default:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			}
		}
	
		if (flag2)
		{
			MISC::CLEAR_BIT(&Global_39559[iParam0 / 32], iParam0 % 32);
			Global_40258[iParam0] = num;
		}
	}

	if (IS_BIT_SET(Global_39568[iParam0 / 32], iParam0 % 32) && Global_40031[iParam0] != 2)
	{
		MISC::SET_BIT(&Global_39559[iParam0 / 32], iParam0 % 32);
		func_207(iParam0);
	
		if (Global_39577[iParam0] < 2)
			Global_39577[iParam0] = Global_39577[iParam0] + 1;
	}

	return;
}

BOOL func_209() // Position - 0xDED1 (57041)
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		return false;

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			if (Global_114162.f_9089.f_99.f_58[65])
				return true;
			break;
	
		case CHAR_FRANKLIN:
			if (Global_114162.f_9089.f_99.f_58[66])
				return true;
			break;
	
		case CHAR_TREVOR:
			if (Global_114162.f_9089.f_99.f_58[65])
				return true;
			break;
	}

	return false;
}

int func_210(int iParam0) // Position - 0xDF50 (57168)
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (func_211(iParam0))
		return 1;

	if (iParam0 == 49)
	{
		if (character == CHAR_FRANKLIN)
			if (IS_BIT_SET(Global_114162.f_7233[5], 0) || IS_BIT_SET(Global_114162.f_7233[6], 0))
				return 0;
	
		if (func_102(character))
			if (IS_BIT_SET(Global_96715[5], character))
				return 0;
	}

	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (character == CHAR_MICHAEL)
				if (IS_BIT_SET(Global_114162.f_7233[0], 0))
					return 0;
		
			if (func_102(character))
				if (IS_BIT_SET(Global_96715[0], character))
					if (iParam0 != 40)
						return 0;
					else
						return 1;
			break;
	
		case 47:
		case 48:
		case 49:
			if (character == CHAR_FRANKLIN)
				if (IS_BIT_SET(Global_114162.f_7233[5], 0))
					return 0;
		
			if (func_102(character))
				if (IS_BIT_SET(Global_96715[5], character))
					return 0;
			break;
	
		case 50:
			if (character == CHAR_FRANKLIN)
				if (IS_BIT_SET(Global_114162.f_7233[6], 0))
					return 0;
		
			if (func_102(character))
				if (IS_BIT_SET(Global_96715[6], character))
					return 0;
			break;
	
		case 51:
		case 52:
			if (character == CHAR_TREVOR)
			{
				if (IS_BIT_SET(Global_114162.f_7233[2], 0))
					return 0;
			
				if (func_102(character))
					if (IS_BIT_SET(Global_96715[2], character))
						return 0;
			}
			else if (character == CHAR_MICHAEL)
			{
				if (IS_BIT_SET(Global_114162.f_7233[1], 0))
					return 0;
			
				if (func_102(character))
					if (IS_BIT_SET(Global_96715[1], character))
						return 0;
			}
			break;
	
		case 53:
			if (character == CHAR_TREVOR)
				if (IS_BIT_SET(Global_114162.f_7233[3], 0))
					return 0;
		
			if (func_102(character))
				if (IS_BIT_SET(Global_96715[3], character))
					return 0;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_211(int iParam0) // Position - 0xE178 (57720)
{
	Hash entityModel;

	if (iParam0 == 40 || iParam0 == 49 || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(func_212(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)));
			
				switch (entityModel)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return true;
				}
			}
		}
	}

	return false;
}

Vehicle func_212(Vehicle veParam0) // Position - 0xE1E4 (57828)
{
	return veParam0;
}

void func_213(int iParam0, var uParam1) // Position - 0xE1EE (57838)
{
	int num;
	int num2;

	if (!IS_BIT_SET(uParam1->f_4, 2))
		return;

	num = func_183();
	num2 = func_215(num);

	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_214(iParam0))
			{
				if (num2 < 19)
				{
					if (num2 >= 7)
					{
						Global_114162.f_7265[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (num2 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			else if (num2 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_214(iParam0))
			{
				if (num2 < 18)
				{
					if (num2 >= 7)
					{
						Global_114162.f_7265[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (num2 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			else if (num2 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 141:
		case 142:
			if (func_214(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1")) == 0 && !Global_114162.f_9089.f_99.f_58[4])
				{
					if (num2 < 21)
					{
						if (num2 >= 7)
						{
							Global_114162.f_7265[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_114162.f_9089.f_99.f_58[4])
				{
					Global_114162.f_7265[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			else if (Global_114162.f_9089.f_99.f_58[4])
			{
				Global_114162.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (num2 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_114162.f_7265[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
					}
				}
				else if (num2 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_114162.f_7265[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
					}
				}
			}
			break;
	
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_214(iParam0))
			{
				if (num2 < 20)
				{
					if (num2 >= 9)
					{
						Global_114162.f_7265[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (num2 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			else if (num2 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 147:
		case 148:
			if (!func_214(iParam0))
			{
				Global_114162.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
			}
			break;
	
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_214(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) == 0)
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) > 0)
			{
				Global_114162.f_7265[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
			}
			break;
	
		case 158:
		case 159:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92476[70 /*34*/].f_6) == 0)
			{
				if (!func_214(iParam0))
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 160:
		case 161:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("omega2")) == 0)
			{
				if (!func_214(iParam0))
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 70:
		case 71:
		case 72:
			if (!func_214(iParam0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92476[26 /*34*/].f_6) == 0)
			{
				Global_114162.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
			}
			else
			{
				return;
			}
			break;
	
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_214(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92476[43 /*34*/].f_6) == 0)
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 190:
		case 191:
			if (!func_214(iParam0))
			{
				Global_114162.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
			}
			break;
	
		case 193:
			if (!func_214(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92476[93 /*34*/].f_6) > 0)
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 198:
			if (!func_214(iParam0))
			{
				Global_114162.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
			}
			break;
	
		case 80:
			if (!func_214(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92476[8 /*34*/].f_6) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92476[10 /*34*/].f_6) == 0)
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 205:
		case 206:
			if (!func_214(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92476[47 /*34*/].f_6) == 0)
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 207:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92476[70 /*34*/].f_6) == 0)
			{
				if (!func_214(iParam0))
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92476[48 /*34*/].f_6) == 0)
			{
				if (!func_214(iParam0))
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 99:
		case 100:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92476[39 /*34*/].f_6) == 0)
			{
				if (!func_214(iParam0))
				{
					Global_114162.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 216:
			if (!func_214(iParam0))
			{
				Global_114162.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
			}
			break;
	
		case 217:
		case 218:
			if (!func_214(iParam0))
			{
				Global_114162.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
			}
			break;
	
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_214(iParam0))
			{
				Global_114162.f_7265[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114162.f_7265[iParam0], true, true);
			}
			break;
	}

	return;
}

BOOL func_214(int iParam0) // Position - 0xEB86 (60294)
{
	var unk;
	int doorState;

	unk = { func_216(iParam0) };
	doorState = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(unk.f_5);
	return doorState == 1 || doorState == 4 || doorState == 2;
}

int func_215(int iParam0) // Position - 0xEBBA (60346)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

struct<7> func_216(int iParam0) // Position - 0xEBCD (60365)
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { 133f, -1711f, 29f };
			unk.f_5 = 1804701345;
			break;
	
		case 1:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { -1287.8568f, -1115.7416f, 7.1401f };
			unk.f_5 = 1403601067;
			break;
	
		case 2:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { 1932.9518f, 3725.1536f, 32.9944f };
			unk.f_5 = -2031139496;
			break;
	
		case 3:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { 1207.8732f, -470.063f, 66.358f };
			unk.f_5 = 1796834809;
			break;
	
		case 4:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { -29.8692f, -148.1571f, 57.2265f };
			unk.f_5 = 96153298;
			break;
	
		case 5:
			unk.f_3 = joaat("v_ilev_bs_door");
			unk = { -280.7851f, 6232.7817f, 31.8455f };
			unk.f_5 = -281080954;
			break;
	
		case 6:
			unk.f_3 = joaat("v_ilev_hd_door_l");
			unk = { -824f, -187f, 38f };
			unk = { -823.2001f, -187.0831f, 37.819f };
			unk.f_5 = 183249434;
			break;
	
		case 7:
			unk.f_3 = joaat("v_ilev_hd_door_r");
			unk = { -823f, -188f, 38f };
			unk = { -822.4442f, -188.3924f, 37.819f };
			unk.f_5 = 758345384;
			break;
	
		case 8:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { 82.3186f, -1392.7518f, 29.5261f };
			unk.f_5 = -1069262641;
			break;
	
		case 9:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { 82.3186f, -1390.4758f, 29.5261f };
			unk.f_5 = 1968521986;
			break;
	
		case 10:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { 1686.9832f, 4821.7407f, 42.2131f };
			unk.f_5 = -2143706301;
			break;
	
		case 11:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { 1687.2817f, 4819.4844f, 42.2131f };
			unk.f_5 = -1403421822;
			break;
	
		case 12:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { 418.637f, -806.457f, 29.6396f };
			unk.f_5 = -1950137670;
			break;
	
		case 13:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { 418.637f, -808.733f, 29.6396f };
			unk.f_5 = 1226259807;
			break;
	
		case 14:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { -1096.6613f, 2705.4458f, 19.2578f };
			unk.f_5 = 1090833557;
			break;
	
		case 15:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { -1094.9652f, 2706.9636f, 19.2578f };
			unk.f_5 = 897332612;
			break;
	
		case 16:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { 1196.825f, 2703.221f, 38.3726f };
			unk.f_5 = 1095946640;
			break;
	
		case 17:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { 1199.101f, 2703.221f, 38.3726f };
			unk.f_5 = 801975945;
			break;
	
		case 18:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { -818.7642f, -1079.5444f, 11.4781f };
			unk.f_5 = -167996547;
			break;
	
		case 19:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { -816.7932f, -1078.4065f, 11.4781f };
			unk.f_5 = -1935818563;
			break;
	
		case 20:
			unk.f_3 = joaat("v_ilev_cs_door01");
			unk = { -0.0564f, 6517.461f, 32.0278f };
			unk.f_5 = 1891185217;
			break;
	
		case 21:
			unk.f_3 = joaat("v_ilev_cs_door01_r");
			unk = { -1.7253f, 6515.9136f, 32.0278f };
			unk.f_5 = 1236591681;
			break;
	
		case 22:
			unk.f_3 = joaat("v_ilev_clothmiddoor");
			unk = { -1201.4349f, -776.8566f, 17.9918f };
			unk.f_5 = 1980808685;
			break;
	
		case 23:
			unk.f_3 = joaat("v_ilev_clothmiddoor");
			unk = { 617.2458f, 2751.0222f, 42.7578f };
			unk.f_5 = 1352749757;
			break;
	
		case 24:
			unk.f_3 = joaat("v_ilev_clothmiddoor");
			unk = { 127.8201f, -211.8274f, 55.2275f };
			unk.f_5 = -566554453;
			break;
	
		case 25:
			unk.f_3 = joaat("v_ilev_clothmiddoor");
			unk = { -3167.75f, 1055.5358f, 21.5329f };
			unk.f_5 = 1284749450;
			break;
	
		case 26:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -716.6754f, -155.42f, 37.6749f };
			unk.f_5 = 261851994;
			break;
	
		case 27:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -715.6154f, -157.2561f, 37.6749f };
			unk.f_5 = 217646625;
			break;
	
		case 28:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -157.0924f, -306.4413f, 39.994f };
			unk.f_5 = 1801139578;
			break;
	
		case 29:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -156.4022f, -304.4366f, 39.994f };
			unk.f_5 = -2123275866;
			break;
	
		case 30:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -1454.7819f, -231.7927f, 50.0565f };
			unk.f_5 = 1312689981;
			break;
	
		case 31:
			unk.f_3 = joaat("v_ilev_ch_glassdoor");
			unk = { -1456.2007f, -233.3682f, 50.0565f };
			unk.f_5 = -595055661;
			break;
	
		case 32:
			unk.f_3 = joaat("v_ilev_ta_door");
			unk = { 321.81f, 178.36f, 103.68f };
			unk.f_5 = -265260897;
			break;
	
		case 33:
			unk.f_3 = joaat("v_ilev_ml_door1");
			unk = { 1859.89f, 3749.79f, 33.18f };
			unk.f_5 = -1284867488;
			break;
	
		case 34:
			unk.f_3 = joaat("v_ilev_ml_door1");
			unk = { -289.1752f, 6199.1123f, 31.637f };
			unk.f_5 = 302307081;
			break;
	
		case 35:
			unk.f_3 = joaat("v_ilev_ta_door");
			unk = { -1155.4541f, -1424.0079f, 5.0461f };
			unk.f_5 = -681886015;
			break;
	
		case 36:
			unk.f_3 = joaat("v_ilev_ta_door");
			unk = { 1321.2856f, -1650.5967f, 52.3663f };
			unk.f_5 = -2086556500;
			break;
	
		case 37:
			unk.f_3 = joaat("v_ilev_ta_door");
			unk = { -3167.7888f, 1074.7668f, 20.9209f };
			unk.f_5 = -1496386696;
			break;
	
		case 38:
			unk.f_3 = joaat("v_ilev_mm_doorm_l");
			unk = { -817f, 179f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -2097039789;
			break;
	
		case 39:
			unk.f_3 = joaat("v_ilev_mm_doorm_r");
			unk = { -816f, 178f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -2127416656;
			break;
	
		case 40:
			unk.f_3 = joaat("prop_ld_garaged_01");
			unk = { -815f, 186f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1986583853;
			unk.f_6 = 6.5f;
			break;
	
		case 41:
			unk.f_3 = joaat("prop_bh1_48_backdoor_l");
			unk = { -797f, 177f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 776026812;
			break;
	
		case 42:
			unk.f_3 = joaat("prop_bh1_48_backdoor_r");
			unk = { -795f, 178f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 698422331;
			break;
	
		case 43:
			unk.f_3 = joaat("prop_bh1_48_backdoor_l");
			unk = { -793f, 181f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 535076355;
			break;
	
		case 44:
			unk.f_3 = joaat("prop_bh1_48_backdoor_r");
			unk = { -794f, 183f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 474675599;
			break;
	
		case 45:
			unk.f_3 = joaat("prop_bh1_48_gate_1");
			unk = { -849f, 179f, 70f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1978427516;
			break;
	
		case 46:
			unk.f_3 = joaat("v_ilev_mm_windowwc");
			unk = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1700375831;
			break;
	
		case 47:
			unk.f_3 = joaat("v_ilev_fa_frontdoor");
			unk = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 613961892;
			break;
	
		case 48:
			unk.f_3 = joaat("v_ilev_fh_frntdoor");
			unk = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -272570634;
			break;
	
		case 49:
			unk.f_3 = joaat("prop_sc1_21_g_door_01");
			unk = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1040675994;
			break;
	
		case 50:
			unk.f_3 = joaat("v_ilev_fh_frontdoor");
			unk = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 1201219326;
			break;
	
		case 51:
			unk.f_3 = joaat("v_ilev_trevtraildr");
			unk = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = joaat("DOORHASH_T_TRAILER_CS");
			break;
	
		case 52:
			unk.f_3 = joaat("prop_cs4_10_tr_gd_01");
			unk = { 1972.7874f, 3824.5537f, 32.5831f };
			unk.f_5 = 1113956670;
			unk.f_6 = 12f;
			break;
	
		case 53:
			unk.f_3 = joaat("v_ilev_trev_doorfront");
			unk = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1361617046;
			break;
	}

	switch (iParam0)
	{
		case 54:
			unk.f_3 = joaat("prop_com_ls_door_01");
			unk = { -1145.9f, -1991.14f, 14.18f };
			unk.f_5 = -1871080926;
			unk.f_6 = 25f;
			break;
	
		case 55:
			unk.f_3 = joaat("prop_id2_11_gdoor");
			unk = { 723.12f, -1088.83f, 23.28f };
			unk.f_5 = 1168079979;
			unk.f_6 = 25f;
			break;
	
		case 56:
			unk.f_3 = joaat("prop_com_ls_door_01");
			unk = { -356.09f, -134.77f, 40.01f };
			unk.f_5 = 1206354175;
			unk.f_6 = 25f;
			break;
	
		case 57:
			unk.f_3 = joaat("v_ilev_carmod3door");
			unk = { 108.8502f, 6617.8765f, 32.673f };
			unk.f_5 = -1038180727;
			unk.f_6 = 25f;
			break;
	
		case 58:
			unk.f_3 = joaat("v_ilev_carmod3door");
			unk = { 114.3206f, 6623.226f, 32.7161f };
			unk.f_5 = 1200466273;
			unk.f_6 = 25f;
			break;
	
		case 59:
			unk.f_3 = joaat("v_ilev_carmod3door");
			unk = { 1182.3054f, 2645.2422f, 38.807f };
			unk.f_5 = 1391004277;
			unk.f_6 = 25f;
			break;
	
		case 60:
			unk.f_3 = joaat("v_ilev_carmod3door");
			unk = { 1174.6542f, 2645.2422f, 38.6826f };
			unk.f_5 = -459199009;
			unk.f_6 = 25f;
			break;
	
		case 225:
			unk.f_3 = joaat("lr_prop_supermod_door_01");
			unk = { -205.7007f, -1310.6917f, 30.2957f };
			unk.f_5 = -288764223;
			unk.f_6 = 25f;
			break;
	
		case 61:
			unk.f_3 = joaat("v_ilev_janitor_frontdoor");
			unk = { -107.5401f, -9.0258f, 70.6696f };
			unk.f_5 = -252283844;
			break;
	
		case 62:
			unk.f_3 = joaat("v_ilev_ss_door8");
			unk = { 717f, -975f, 25f };
			unk.f_5 = -826072862;
			break;
	
		case 63:
			unk.f_3 = joaat("v_ilev_ss_door7");
			unk = { 719f, -975f, 25f };
			unk.f_5 = 763780711;
			break;
	
		case 64:
			unk.f_3 = joaat("v_ilev_ss_door02");
			unk = { 709.9813f, -963.5311f, 30.5453f };
			unk.f_5 = -874851305;
			break;
	
		case 65:
			unk.f_3 = joaat("v_ilev_ss_door03");
			unk = { 709.9894f, -960.6675f, 30.5453f };
			unk.f_5 = -1480820165;
			break;
	
		case 66:
			unk.f_3 = joaat("v_ilev_store_door");
			unk = { 707.8046f, -962.4564f, 30.5453f };
			unk.f_5 = 949391213;
			break;
	
		case 67:
			unk.f_3 = joaat("v_ilev_ml_door1");
			unk = { 1393f, 3599f, 35f };
			unk.f_5 = 212192855;
			break;
	
		case 68:
			unk.f_3 = joaat("v_ilev_ml_door1");
			unk = { 1395f, 3600f, 35f };
			unk.f_5 = -126474752;
			break;
	
		case 69:
			unk.f_3 = joaat("v_ilev_ss_door04");
			unk = { 1387f, 3614f, 39f };
			unk.f_5 = 1765671336;
			break;
	
		case 70:
			unk.f_3 = joaat("prop_ron_door_01");
			unk = { 1083.5471f, -1975.4354f, 31.6222f };
			unk.f_5 = 792295685;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 71:
			unk.f_3 = joaat("prop_ron_door_01");
			unk = { 1065.237f, -2006.0791f, 32.2329f };
			unk.f_5 = 563273144;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 72:
			unk.f_3 = joaat("prop_ron_door_01");
			unk = { 1085.3069f, -2018.5613f, 41.6289f };
			unk.f_5 = -726993043;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 73:
			unk.f_3 = joaat("v_ilev_bank4door02");
			unk = { -111f, 6464f, 32f };
			unk.f_5 = 178228075;
			break;
	
		case 74:
			unk.f_3 = joaat("v_ilev_bank4door01");
			unk = { -110f, 6462f, 32f };
			unk.f_5 = 1852297978;
			break;
	
		case 75:
			unk.f_3 = joaat("v_ilev_lester_doorfront");
			unk = { 1274f, -1721f, 55f };
			unk.f_5 = -565026078;
			break;
	
		case 76:
			unk.f_3 = joaat("v_ilev_lester_doorveranda");
			unk = { 1271.89f, -1707.57f, 53.79f };
			unk.f_5 = 1646172266;
			break;
	
		case 77:
			unk.f_3 = joaat("v_ilev_lester_doorveranda");
			unk = { 1270.77f, -1708.1f, 53.75f };
			unk.f_5 = 204467342;
			break;
	
		case 78:
			unk.f_3 = joaat("v_ilev_deviantfrontdoor");
			unk = { -127.5f, -1456.18f, 37.94f };
			unk.f_5 = 2047070410;
			break;
	
		case 79:
			unk.f_3 = joaat("prop_com_gar_door_01");
			unk = { 483.56f, -1316.08f, 32.18f };
			unk.f_5 = 1417775309;
			break;
	
		case 80:
			unk.f_3 = joaat("v_ilev_cs_door");
			unk = { 483f, -1312f, 29f };
			unk.f_5 = -106474626;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 81:
			unk.f_3 = joaat("prop_strip_door_01");
			unk = { 128f, -1299f, 29f };
			unk.f_5 = 1840510598;
			break;
	
		case 82:
			unk.f_3 = joaat("prop_magenta_door");
			unk = { 96f, -1285f, 29f };
			unk.f_5 = 1382825971;
			break;
	
		case 83:
			unk.f_3 = joaat("prop_motel_door_09");
			unk = { 549f, -1773f, 34f };
			unk.f_5 = 232536303;
			break;
	
		case 84:
			unk.f_3 = joaat("v_ilev_gangsafedoor");
			unk = { 974f, -1839f, 36f };
			unk.f_5 = 1267246609;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 85:
			unk.f_3 = joaat("v_ilev_gangsafedoor");
			unk = { 977f, -105f, 75f };
			unk.f_5 = -1900237971;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 86:
			unk.f_3 = joaat("v_ilev_ra_door1_l");
			unk = { 1391f, 1163f, 114f };
			unk.f_5 = 2077901353;
			break;
	
		case 87:
			unk.f_3 = joaat("v_ilev_ra_door1_r");
			unk = { 1391f, 1161f, 114f };
			unk.f_5 = -2102079126;
			break;
	
		case 88:
			unk.f_3 = joaat("prop_cs6_03_door_l");
			unk = { 1396f, 1143f, 115f };
			unk.f_5 = -1905793212;
			break;
	
		case 89:
			unk.f_3 = joaat("prop_cs6_03_door_r");
			unk = { 1396f, 1141f, 115f };
			unk.f_5 = -1797032505;
			break;
	
		case 90:
			unk.f_3 = joaat("v_ilev_ra_door1_l");
			unk = { 1409f, 1146f, 114f };
			unk.f_5 = -62235167;
			break;
	
		case 91:
			unk.f_3 = joaat("v_ilev_ra_door1_r");
			unk = { 1409f, 1148f, 114f };
			unk.f_5 = -1727188163;
			break;
	
		case 92:
			unk.f_3 = joaat("v_ilev_ra_door1_l");
			unk = { 1408f, 1159f, 114f };
			unk.f_5 = -562748873;
			break;
	
		case 93:
			unk.f_3 = joaat("v_ilev_ra_door1_r");
			unk = { 1408f, 1161f, 114f };
			unk.f_5 = 1976429759;
			break;
	
		case 94:
			unk.f_3 = joaat("prop_gar_door_01");
			unk = { -1067f, -1666f, 5f };
			unk.f_5 = 1341041543;
			break;
	
		case 95:
			unk.f_3 = joaat("prop_gar_door_02");
			unk = { -1065f, -1669f, 5f };
			unk.f_5 = -1631467220;
			break;
	
		case 96:
			unk.f_3 = joaat("prop_map_door_01");
			unk = { -1104.66f, -1638.48f, 4.68f };
			unk.f_5 = -1788473129;
			break;
	
		case 97:
			unk.f_3 = joaat("v_ilev_fib_door1");
			unk = { -31.72f, -1101.85f, 26.57f };
			unk.f_5 = -1831288286;
			break;
	
		case 98:
			unk.f_3 = joaat("v_ilev_tort_door");
			unk = { 134.4f, -2204.1f, 7.52f };
			unk.f_5 = 963876966;
			break;
	
		case 99:
			unk.f_3 = joaat("v_ilev_bl_shutter2");
			unk = { 3628f, 3747f, 28f };
			unk.f_5 = 1773088812;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 100:
			unk.f_3 = joaat("v_ilev_bl_shutter2");
			unk = { 3621f, 3752f, 28f };
			unk.f_5 = -1332101528;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 101:
			unk.f_3 = joaat("v_ilev_rc_door3_l");
			unk = { -608.73f, -1610.32f, 27.16f };
			unk.f_5 = -1811763714;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 102:
			unk.f_3 = joaat("v_ilev_rc_door3_r");
			unk = { -611.32f, -1610.09f, 27.16f };
			unk.f_5 = 1608500665;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 103:
			unk.f_3 = joaat("v_ilev_rc_door3_l");
			unk = { -592.94f, -1631.58f, 27.16f };
			unk.f_5 = -1456048340;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 104:
			unk.f_3 = joaat("v_ilev_rc_door3_r");
			unk = { -592.71f, -1628.99f, 27.16f };
			unk.f_5 = 943854909;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 105:
			unk.f_3 = joaat("v_ilev_ss_door04");
			unk = { 1991f, 3053f, 47f };
			unk.f_5 = -89065356;
			break;
	
		case 106:
			unk.f_3 = joaat("v_ilev_fh_door4");
			unk = { 1988.3529f, 3054.411f, 47.3204f };
			unk.f_5 = -925491840;
			break;
	
		case 107:
			unk.f_3 = joaat("prop_epsilon_door_l");
			unk = { -700.17f, 47.31f, 44.3f };
			unk.f_5 = 1999872275;
			break;
	
		case 108:
			unk.f_3 = joaat("prop_epsilon_door_r");
			unk = { -697.94f, 48.35f, 44.3f };
			unk.f_5 = 1999872275;
			break;
	
		case 109:
			unk.f_3 = joaat("v_ilev_epsstoredoor");
			unk = { 241.3574f, 361.0488f, 105.8963f };
			unk.f_5 = 1538555582;
			break;
	
		case 110:
			unk.f_3 = joaat("prop_ch2_09c_garage_door");
			unk = { -689.11f, 506.97f, 110.64f };
			unk.f_5 = -961994186;
			break;
	
		case 111:
			unk.f_3 = joaat("v_ilev_door_orangesolid");
			unk = { -1055.96f, -236.43f, 44.17f };
			unk.f_5 = -1772472848;
			break;
	
		case 112:
			unk.f_3 = joaat("prop_magenta_door");
			unk = { 29f, 3661f, 41f };
			unk.f_5 = -46374650;
			break;
	
		case 113:
			unk.f_3 = joaat("prop_cs4_05_tdoor");
			unk = { 32f, 3667f, 41f };
			unk.f_5 = -358302761;
			break;
	
		case 114:
			unk.f_3 = joaat("v_ilev_housedoor1");
			unk = { 87f, -1959f, 21f };
			unk.f_5 = -1237936041;
			break;
	
		case 115:
			unk.f_3 = joaat("v_ilev_fh_frntdoor");
			unk = { 0f, -1823f, 30f };
			unk.f_5 = 1487374207;
			break;
	
		case 116:
			unk.f_3 = joaat("p_cut_door_03");
			unk = { 23.34f, -1897.6f, 23.05f };
			unk.f_5 = -199126299;
			break;
	
		case 117:
			unk.f_3 = joaat("p_cut_door_02");
			unk = { 524.2f, 3081.14f, 41.16f };
			unk.f_5 = -897071863;
			break;
	
		case 118:
			unk.f_3 = joaat("v_ilev_po_door");
			unk = { -1910.58f, -576.01f, 19.25f };
			unk.f_5 = -864465775;
			break;
	
		case 119:
			unk.f_3 = joaat("prop_ss1_10_door_l");
			unk = { -720.39f, 256.86f, 80.29f };
			unk.f_5 = -208439480;
			break;
	
		case 120:
			unk.f_3 = joaat("prop_ss1_10_door_r");
			unk = { -718.42f, 257.79f, 80.29f };
			unk.f_5 = -1001088805;
			break;
	
		case 121:
			unk.f_3 = joaat("v_ilev_fibl_door02");
			unk = { 106.38f, -742.7f, 46.18f };
			unk.f_5 = 756894459;
			break;
	
		case 122:
			unk.f_3 = joaat("v_ilev_fibl_door01");
			unk = { 105.76f, -746.65f, 46.18f };
			unk.f_5 = 476981677;
			break;
	
		case 123:
			unk.f_3 = joaat("v_ilev_ct_door01");
			unk = { -2343.53f, 3265.37f, 32.96f };
			unk.f_5 = 2081647379;
			break;
	
		case 124:
			unk.f_3 = joaat("v_ilev_ct_door01");
			unk = { -2342.23f, 3267.62f, 32.96f };
			unk.f_5 = 2081647379;
			break;
	
		case 125:
			unk.f_3 = joaat("ap1_02_door_l");
			unk = { -1041.9326f, -2748.1675f, 22.0308f };
			unk.f_5 = 169965357;
			break;
	
		case 126:
			unk.f_3 = joaat("ap1_02_door_r");
			unk = { -1044.8408f, -2746.4888f, 22.0308f };
			unk.f_5 = 311232516;
			break;
	
		case 128:
			unk.f_3 = joaat("v_ilev_fb_doorshortl");
			unk = { -1045.1199f, -232.004f, 39.4379f };
			unk.f_5 = -1563127729;
			break;
	
		case 129:
			unk.f_3 = joaat("v_ilev_fb_doorshortr");
			unk = { -1046.5161f, -229.3581f, 39.4379f };
			unk.f_5 = 759145763;
			break;
	
		case 130:
			unk.f_3 = joaat("v_ilev_fb_door01");
			unk = { -1083.6201f, -260.4167f, 38.1867f };
			unk.f_5 = -84399179;
			break;
	
		case 131:
			unk.f_3 = joaat("v_ilev_fb_door02");
			unk = { -1080.9744f, -259.0204f, 38.1867f };
			unk.f_5 = -461898059;
			break;
	
		case 127:
			unk.f_3 = joaat("v_ilev_gtdoor");
			unk = { -1042.57f, -240.6f, 38.11f };
			unk.f_5 = 1259065971;
			break;
	
		case 132:
			unk.f_3 = joaat("prop_damdoor_01");
			unk = { 1385.2578f, -2079.9495f, 52.7638f };
			unk.f_5 = -884051216;
			break;
	
		case 133:
			unk.f_3 = joaat("v_ilev_genbankdoor2");
			unk = { 1656.57f, 4849.66f, 42.35f };
			unk.f_5 = 243782214;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 134:
			unk.f_3 = joaat("v_ilev_genbankdoor1");
			unk = { 1656.25f, 4852.24f, 42.35f };
			unk.f_5 = 714115627;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 135:
			unk.f_3 = joaat("prop_sec_barrier_ld_01a");
			unk = { -1051.4019f, -474.6847f, 36.6199f };
			unk.f_5 = 1668106976;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 136:
			unk.f_3 = joaat("prop_sec_barrier_ld_01a");
			unk = { -1049.2853f, -476.6376f, 36.7584f };
			unk.f_5 = 1382347031;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 137:
			unk.f_3 = joaat("prop_sec_barrier_ld_02a");
			unk = { -1210.9567f, -580.8765f, 27.2373f };
			unk.f_5 = -966790948;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 138:
			unk.f_3 = joaat("prop_sec_barrier_ld_02a");
			unk = { -1212.4453f, -578.4401f, 27.2373f };
			unk.f_5 = -2068750132;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 139:
			unk.f_3 = joaat("v_ilev_roc_door4");
			unk = { -565.1712f, 276.6259f, 83.2863f };
			unk.f_5 = -1716533184;
			break;
	
		case 140:
			unk.f_3 = joaat("v_ilev_roc_door4");
			unk = { -561.2863f, 293.5043f, 87.7771f };
			unk.f_5 = 2146505927;
			break;
	
		case 141:
			unk.f_3 = joaat("p_jewel_door_l");
			unk = { -631.96f, -236.33f, 38.21f };
			unk.f_5 = 1874948872;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 142:
			unk.f_3 = joaat("p_jewel_door_r1");
			unk = { -630.43f, -238.44f, 38.21f };
			unk.f_5 = -1965020851;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 145:
			unk.f_3 = joaat("prop_ld_bankdoors_01");
			unk = { 231.62f, 216.23f, 106.4f };
			unk.f_5 = 1951546856;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 146:
			unk.f_3 = joaat("prop_ld_bankdoors_01");
			unk = { 232.72f, 213.88f, 106.4f };
			unk.f_5 = -431382051;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 143:
			unk.f_3 = joaat("hei_prop_hei_bankdoor_new");
			unk = { 258.32f, 203.84f, 106.43f };
			unk.f_5 = -293975210;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 144:
			unk.f_3 = joaat("hei_prop_hei_bankdoor_new");
			unk = { 260.76f, 202.95f, 106.43f };
			unk.f_5 = -785215289;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 148:
			unk.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			unk = { 256.31f, 220.66f, 106.43f };
			unk.f_5 = -366143778;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 147:
			unk.f_3 = joaat("v_ilev_bk_door");
			unk = { 266.36f, 217.57f, 110.43f };
			unk.f_5 = 440819155;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 149:
			unk.f_3 = joaat("v_ilev_shrf2door");
			unk = { -442.66f, 6015.2217f, 31.8663f };
			unk.f_5 = -588495243;
			break;
	
		case 150:
			unk.f_3 = joaat("v_ilev_shrf2door");
			unk = { -444.4985f, 6017.06f, 31.8663f };
			unk.f_5 = 1815504139;
			break;
	
		case 151:
			unk.f_3 = joaat("v_ilev_shrfdoor");
			unk = { 1855.6848f, 3683.9302f, 34.5928f };
			unk.f_5 = 1344911780;
			break;
	
		case 152:
			unk.f_3 = joaat("prop_bhhotel_door_l");
			unk = { -1223.35f, -172.41f, 39.98f };
			unk.f_5 = -320891223;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 153:
			unk.f_3 = joaat("prop_bhhotel_door_r");
			unk = { -1220.93f, -173.68f, 39.98f };
			unk.f_5 = 1511747875;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 154:
			unk.f_3 = joaat("prop_bhhotel_door_l");
			unk = { -1211.99f, -190.57f, 39.98f };
			unk.f_5 = -1517722103;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 155:
			unk.f_3 = joaat("prop_bhhotel_door_r");
			unk = { -1213.26f, -192.98f, 39.98f };
			unk.f_5 = -1093199712;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 156:
			unk.f_3 = joaat("prop_bhhotel_door_l");
			unk = { -1217.77f, -201.54f, 39.98f };
			unk.f_5 = 1902048492;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 157:
			unk.f_3 = joaat("prop_bhhotel_door_r");
			unk = { -1219.04f, -203.95f, 39.98f };
			unk.f_5 = -444768985;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 158:
			unk.f_3 = joaat("prop_ch3_04_door_01l");
			unk = { 2514.32f, -317.34f, 93.32f };
			unk.f_5 = 404057594;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 159:
			unk.f_3 = joaat("prop_ch3_04_door_01r");
			unk = { 2512.42f, -319.26f, 93.32f };
			unk.f_5 = -1417472813;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 160:
			unk.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			unk = { 2333.23f, 2574.97f, 47.03f };
			unk.f_5 = -1376084479;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 161:
			unk.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			unk = { 2329.65f, 2576.64f, 47.03f };
			unk.f_5 = 457472151;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 162:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 16.1279f, -1114.6055f, 29.9469f };
			unk.f_5 = 1071759151;
			break;
	
		case 163:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 18.572f, -1115.4951f, 29.9469f };
			unk.f_5 = -2119023917;
			break;
	
		case 165:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 1698.1763f, 3751.5056f, 34.8553f };
			unk.f_5 = -1488490473;
			break;
	
		case 166:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 1699.9371f, 3753.4202f, 34.8553f };
			unk.f_5 = -511187813;
			break;
	
		case 167:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 244.7274f, -44.0791f, 70.91f };
			unk.f_5 = -248569395;
			break;
	
		case 168:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 243.8379f, -46.5232f, 70.91f };
			unk.f_5 = 989443413;
			break;
	
		case 169:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 845.3624f, -1024.5391f, 28.3448f };
			unk.f_5 = 2022251829;
			break;
	
		case 170:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 842.7684f, -1024.5391f, 23.3448f };
			unk.f_5 = 649820567;
			break;
	
		case 171:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -326.1122f, 6075.2695f, 31.6047f };
			unk.f_5 = 537455378;
			break;
	
		case 172:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -324.273f, 6077.109f, 31.6047f };
			unk.f_5 = 1121431731;
			break;
	
		case 173:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -665.2424f, -944.3256f, 21.9792f };
			unk.f_5 = -1437380438;
			break;
	
		case 174:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -662.6414f, -944.3256f, 21.9792f };
			unk.f_5 = -946336965;
			break;
	
		case 175:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -1313.8259f, -389.1259f, 36.8457f };
			unk.f_5 = 1893144650;
			break;
	
		case 176:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -1314.465f, -391.6472f, 36.8457f };
			unk.f_5 = 435841678;
			break;
	
		case 177:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -1114.0089f, 2689.77f, 18.7041f };
			unk.f_5 = 948508314;
			break;
	
		case 178:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -1112.0708f, 2691.5046f, 18.7041f };
			unk.f_5 = -1796714665;
			break;
	
		case 179:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { -3164.8452f, 1081.3917f, 20.9887f };
			unk.f_5 = -1155247245;
			break;
	
		case 180:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { -3163.8115f, 1083.7784f, 20.9887f };
			unk.f_5 = 782482084;
			break;
	
		case 181:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 2570.9045f, 303.3556f, 108.8848f };
			unk.f_5 = -1194470801;
			break;
	
		case 182:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 2568.3037f, 303.3556f, 108.8848f };
			unk.f_5 = -2129698061;
			break;
	
		case 183:
			unk.f_3 = joaat("v_ilev_gc_door04");
			unk = { 813.1779f, -2148.2695f, 29.7689f };
			unk.f_5 = 1071759151;
			break;
	
		case 184:
			unk.f_3 = joaat("v_ilev_gc_door03");
			unk = { 810.5769f, -2148.2695f, 29.7689f };
			unk.f_5 = -2119023917;
			break;
	
		case 164:
			unk.f_3 = joaat("v_ilev_gc_door01");
			unk = { 6.8179f, -1098.2095f, 29.9469f };
			unk.f_5 = 1487704245;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 185:
			unk.f_3 = joaat("v_ilev_gc_door01");
			unk = { 827.5342f, -2160.4927f, 29.7688f };
			unk.f_5 = 1529812051;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 186:
			unk.f_3 = joaat("prop_lrggate_01c_l");
			unk = { -1107.01f, 289.38f, 64.76f };
			unk.f_5 = 904342475;
			break;
	
		case 187:
			unk.f_3 = joaat("prop_lrggate_01c_r");
			unk = { -1101.62f, 290.36f, 64.76f };
			unk.f_5 = -795418380;
			break;
	
		case 188:
			unk.f_3 = joaat("prop_lrggate_01c_l");
			unk = { -1138.64f, 300.82f, 67.18f };
			unk.f_5 = -1502457334;
			break;
	
		case 189:
			unk.f_3 = joaat("prop_lrggate_01c_r");
			unk = { -1137.05f, 295.59f, 67.18f };
			unk.f_5 = -1994188940;
			break;
	
		case 190:
			unk.f_3 = joaat("v_ilev_bl_doorel_l");
			unk = { -2053.16f, 3239.49f, 30.5f };
			unk.f_5 = -621770121;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 191:
			unk.f_3 = joaat("v_ilev_bl_doorel_r");
			unk = { -2054.39f, 3237.23f, 30.5f };
			unk.f_5 = 1018580481;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 192:
			unk.f_3 = joaat("v_ilev_cbankcountdoor01");
			unk = { -108.91f, 6469.11f, 31.91f };
			unk.f_5 = 421926217;
			break;
	
		case 193:
			unk.f_3 = joaat("prop_fnclink_03gate5");
			unk = { -182.91f, 6168.37f, 32.14f };
			unk.f_5 = -1331552374;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	}

	switch (iParam0)
	{
		case 196:
			unk.f_3 = joaat("v_ilev_csr_door_l");
			unk = { -59.89f, -1092.95f, 26.88f };
			unk.f_5 = -293141277;
			break;
	
		case 197:
			unk.f_3 = joaat("v_ilev_csr_door_r");
			unk = { -60.55f, -1094.75f, 26.89f };
			unk.f_5 = 506750037;
			break;
	
		case 194:
			unk.f_3 = joaat("v_ilev_csr_door_l");
			unk = { -39.13f, -1108.22f, 26.72f };
			unk.f_5 = 1496005418;
			break;
	
		case 195:
			unk.f_3 = joaat("v_ilev_csr_door_r");
			unk = { -37.33f, -1108.87f, 26.72f };
			unk.f_5 = -1863079210;
			break;
	
		case 198:
			unk.f_3 = joaat("prop_ron_door_01");
			unk = { 1943.73f, 3803.63f, 32.31f };
			unk.f_5 = -2018911784;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 199:
			unk.f_3 = joaat("v_ilev_genbankdoor2");
			unk = { 316.39f, -276.49f, 54.52f };
			unk.f_5 = -93934272;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 200:
			unk.f_3 = joaat("v_ilev_genbankdoor1");
			unk = { 313.96f, -275.6f, 54.52f };
			unk.f_5 = 667682830;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 201:
			unk.f_3 = joaat("v_ilev_genbankdoor2");
			unk = { -2965.71f, 484.22f, 16.05f };
			unk.f_5 = 1876735830;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 202:
			unk.f_3 = joaat("v_ilev_genbankdoor1");
			unk = { -2965.82f, 481.63f, 16.05f };
			unk.f_5 = -2112857171;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 205:
			unk.f_3 = joaat("v_ilev_abbmaindoor");
			unk = { 962.1f, -2183.83f, 31.06f };
			unk.f_5 = 2046930518;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 206:
			unk.f_3 = joaat("v_ilev_abbmaindoor2");
			unk = { 961.79f, -2187.08f, 31.06f };
			unk.f_5 = 1208502884;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 207:
			unk.f_3 = joaat("prop_ch3_04_door_02");
			unk = { 2508.43f, -336.63f, 115.76f };
			unk.f_5 = 1986432421;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 208:
			unk.f_3 = joaat("prop_ch1_07_door_01l");
			unk = { -2255.19f, 322.26f, 184.93f };
			unk.f_5 = -722798986;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 209:
			unk.f_3 = joaat("prop_ch1_07_door_01r");
			unk = { -2254.06f, 319.7f, 184.93f };
			unk.f_5 = 204301578;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 210:
			unk.f_3 = joaat("prop_ch1_07_door_01l");
			unk = { -2301.13f, 336.91f, 184.93f };
			unk.f_5 = -320140460;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 211:
			unk.f_3 = joaat("prop_ch1_07_door_01r");
			unk = { -2298.57f, 338.05f, 184.93f };
			unk.f_5 = 65222916;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 212:
			unk.f_3 = joaat("prop_ch1_07_door_01l");
			unk = { -2222.32f, 305.86f, 184.93f };
			unk.f_5 = -920027322;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 213:
			unk.f_3 = joaat("prop_ch1_07_door_01r");
			unk = { -2221.19f, 303.3f, 184.93f };
			unk.f_5 = -58432001;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 214:
			unk.f_3 = joaat("prop_ch1_07_door_01l");
			unk = { -2280.6f, 265.43f, 184.93f };
			unk.f_5 = -2007378629;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 215:
			unk.f_3 = joaat("prop_ch1_07_door_01r");
			unk = { -2278.04f, 266.57f, 184.93f };
			unk.f_5 = 418772613;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 216:
			unk.f_3 = joaat("prop_gar_door_04");
			unk = { 778.31f, -1867.49f, 30.66f };
			unk.f_5 = 1679064921;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 217:
			unk.f_3 = joaat("prop_gate_tep_01_l");
			unk = { -721.35f, 91.01f, 56.68f };
			unk.f_5 = 412198396;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 218:
			unk.f_3 = joaat("prop_gate_tep_01_r");
			unk = { -728.84f, 88.64f, 56.68f };
			unk.f_5 = -1053755588;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 219:
			unk.f_3 = joaat("prop_artgallery_02_dr");
			unk = { -2287.62f, 363.9f, 174.93f };
			unk.f_5 = -53446139;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 220:
			unk.f_3 = joaat("prop_artgallery_02_dl");
			unk = { -2289.78f, 362.91f, 174.93f };
			unk.f_5 = 1333960556;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 221:
			unk.f_3 = joaat("prop_artgallery_02_dr");
			unk = { -2289.86f, 362.88f, 174.93f };
			unk.f_5 = -41786493;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 222:
			unk.f_3 = joaat("prop_artgallery_02_dl");
			unk = { -2292.01f, 361.89f, 174.93f };
			unk.f_5 = 1750120734;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 223:
			unk.f_3 = joaat("prop_fnclink_07gate1");
			unk = { 1803.94f, 3929.01f, 33.72f };
			unk.f_5 = 1661506222;
			break;
	
		case 203:
			unk.f_3 = joaat("v_ilev_genbankdoor2");
			unk = { -348.81f, -47.26f, 49.39f };
			unk.f_5 = -2116116146;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 204:
			unk.f_3 = joaat("v_ilev_genbankdoor1");
			unk = { -351.26f, -46.41f, 49.39f };
			unk.f_5 = -74083138;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 224:
			unk.f_3 = joaat("prop_abat_slide");
			unk = { 962.9084f, -2105.8137f, 34.6432f };
			unk.f_5 = -1670085357;
			break;
	}

	return unk;
}

BOOL func_217() // Position - 0x117D7 (71639)
{
	if (func_219() == -1 || func_219() == 999 && !(func_218() == 0))
		return true;

	return false;
}

int func_218() // Position - 0x11807 (71687)
{
	return Global_33106;
}

int func_219() // Position - 0x11812 (71698)
{
	return Global_33105;
}

int func_220(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x1181D (71709)
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
				if (func_221(i) || iParam4 == 0)
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

BOOL func_221(int iParam0) // Position - 0x118AC (71852)
{
	return IS_BIT_SET(Global_114162.f_7233[iParam0], 0);
}

void func_222(eCharacter echParam0) // Position - 0x118C1 (71873)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		func_223(echParam0, i);
	}

	return;
}

void func_223(eCharacter echParam0, int iParam1) // Position - 0x118E4 (71908)
{
	int outValue;
	float modifier;
	Hash statHash;
	int num;

	if (echParam0 != CHAR_MICHAEL || echParam0 != CHAR_FRANKLIN || echParam0 != CHAR_TREVOR || echParam0 != CHAR_MULTIPLAYER)
		return;

	func_228(echParam0, iParam1, &statHash, &num);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		outValue = func_224(num, -1);
	else
		STATS::STAT_GET_INT(statHash, &outValue, -1);

	switch (iParam1)
	{
		case 2:
			modifier = 0.8f + (0.4f * (SYSTEM::TO_FLOAT(outValue) / 100f));
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), modifier, true);
			break;
	
		case 7:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("armenian3")) != 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("trevor3")) != 0)
			{
				Global_98971 = 1;
			}
			else
			{
				modifier = 1f - (SYSTEM::TO_FLOAT(outValue) / 100f);
				PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), modifier);
				PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), modifier);
				PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), modifier);
			}
			break;
	}

	return;
}

int func_224(int iParam0, int iParam1) // Position - 0x119D0 (72144)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 17239)
	{
		statHash = func_225(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_225(int iParam0, int iParam1) // Position - 0x119FF (72191)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_226(iParam1));
}

int func_226(int iParam0) // Position - 0x11A14 (72212)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_227();
	
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

int func_227() // Position - 0x11A48 (72264)
{
	return Global_1574926;
}

void func_228(eCharacter echParam0, int iParam1, var uParam2, var uParam3) // Position - 0x11A54 (72276)
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
	
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
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

void func_229() // Position - 0x11CAB (72875)
{
	var unk;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !func_102(_GET_CURRENT_PLAYER_CHARACTER()) || !func_236())
		return;

	unk = 12;
	unk.f_13 = 12;
	unk.f_26 = 12;
	unk.f_39 = 9;
	unk.f_49 = 9;
	func_231(PLAYER::PLAYER_PED_ID(), &unk, 1, -1);
	func_230(1306, unk[0], -1);
	func_230(1307, unk[1], -1);
	func_230(1308, unk[2], -1);
	func_230(1309, unk[3], -1);
	func_230(1310, unk[4], -1);
	func_230(1311, unk[5], -1);
	func_230(1312, unk[6], -1);
	func_230(1313, unk[7], -1);
	func_230(1314, unk[8], -1);
	func_230(1315, unk[9], -1);
	func_230(1316, unk[10], -1);
	func_230(1317, unk[11], -1);
	func_230(1318, unk.f_13[0], -1);
	func_230(1319, unk.f_13[1], -1);
	func_230(1320, unk.f_13[2], -1);
	func_230(1321, unk.f_13[3], -1);
	func_230(1322, unk.f_13[4], -1);
	func_230(1323, unk.f_13[5], -1);
	func_230(1324, unk.f_13[6], -1);
	func_230(1325, unk.f_13[7], -1);
	func_230(1326, unk.f_13[8], -1);
	func_230(1327, unk.f_13[9], -1);
	func_230(1328, unk.f_13[10], -1);
	func_230(1329, unk.f_13[11], -1);
	func_230(1330, unk.f_26[0], -1);
	func_230(1331, unk.f_26[1], -1);
	func_230(1332, unk.f_26[2], -1);
	func_230(1333, unk.f_26[3], -1);
	func_230(1334, unk.f_26[4], -1);
	func_230(1335, unk.f_26[5], -1);
	func_230(1336, unk.f_26[6], -1);
	func_230(1337, unk.f_26[7], -1);
	func_230(1338, unk.f_26[8], -1);
	func_230(1339, unk.f_26[9], -1);
	func_230(1340, unk.f_26[10], -1);
	func_230(1341, unk.f_26[11], -1);
	func_230(1342, unk.f_39[0], -1);
	func_230(1343, unk.f_39[1], -1);
	func_230(1344, unk.f_39[2], -1);
	func_230(1345, unk.f_39[3], -1);
	func_230(1346, unk.f_39[4], -1);
	func_230(1347, unk.f_39[5], -1);
	func_230(1348, unk.f_39[6], -1);
	func_230(1349, unk.f_39[7], -1);
	func_230(1350, unk.f_39[8], -1);
	func_230(1351, unk.f_49[0], -1);
	func_230(1352, unk.f_49[1], -1);
	func_230(1353, unk.f_49[2], -1);
	func_230(1354, unk.f_49[3], -1);
	func_230(1355, unk.f_49[4], -1);
	func_230(1356, unk.f_49[5], -1);
	func_230(1357, unk.f_49[6], -1);
	func_230(1358, unk.f_49[7], -1);
	func_230(1359, unk.f_49[8], -1);
	func_230(1360, _GET_CURRENT_PLAYER_CHARACTER(), -1);
	STATS::STAT_SET_BOOL(joaat("CLO_STORED_INITIAL"), true, true);
	Global_114162.f_2367.f_539.f_4315 = 1;
	return;
}

void func_230(int iParam0, eCharacter echParam1, int iParam2) // Position - 0x12051 (73809)
{
	if (iParam2 == -1)
		iParam2 = func_227();

	if (echParam1 < 0)
		echParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, echParam1, iParam2);
	return;
}

void func_231(Ped pedParam0, var uParam1, int iParam2, int iParam3) // Position - 0x12079 (73849)
{
	eCharacter character;
	ePedComponentType i;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);
	
		for (i = PV_COMP_HEAD; i < PV_COMP_MAX; i = i + 1)
		{
			func_235(pedParam0, i, &uParam1->f_13[i], &uParam1->[i], &uParam1->f_26[i], iParam2, 145);
		}
	
		for (i = PV_COMP_HEAD; i < PV_COMP_TASK; i = i + 1)
		{
			func_234(pedParam0, i, &uParam1->f_39[i], &uParam1->f_49[i], iParam2, 145);
		}
	
		if (func_102(character))
		{
			uParam1->f_59 = Global_114162.f_2367.f_539[character /*65*/].f_59;
			uParam1->f_60 = Global_114162.f_2367.f_539[character /*65*/].f_60;
			uParam1->f_61 = Global_114162.f_2367.f_539[character /*65*/].f_61;
			uParam1->f_62 = Global_114162.f_2367.f_539[character /*65*/].f_62;
			uParam1->f_63 = Global_114162.f_2367.f_539[character /*65*/].f_63;
			uParam1->f_64 = Global_114162.f_2367.f_539[character /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(pedParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_232(161, iParam3))
				uParam1->f_59 = func_224(2053, iParam3);
			else
				uParam1->f_59 = func_224(753, iParam3);
		
			uParam1->f_60 = func_224(754, iParam3);
			uParam1->f_61 = func_224(755, iParam3);
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && pedParam0 == PLAYER::PLAYER_PED_ID())
			if (func_232(161, iParam3))
				uParam1->f_59 = func_224(2053, iParam3);
			else
				uParam1->f_59 = func_224(753, iParam3);
	}

	return;
}

BOOL func_232(int iParam0, int iParam1) // Position - 0x12213 (74259)
{
	Hash statHash;
	BOOL outValue;

	statHash = func_233(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_233(int iParam0, int iParam1) // Position - 0x12237 (74295)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_226(iParam1));
}

void func_234(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, int iParam4, eCharacter echParam5) // Position - 0x1224C (74316)
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (pedParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
	}
	else
	{
		character = echParam5;
	}

	if (iParam4 == 0)
		return;

	if (epctParam1 == PV_COMP_HEAD)
	{
		if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
		{
			if (pedParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(pedParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(pedParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(pedParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(pedParam0);
				}
			}
		}
	}

	switch (character)
	{
		case CHAR_MICHAEL:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 7)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
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
			else if (epctParam1 == PV_COMP_BERD)
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
	
		case CHAR_FRANKLIN:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 2)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
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
	
		case CHAR_TREVOR:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 9)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20 || *uParam2 == 2)
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

	return;
}

void func_235(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, var uParam4, int iParam5, eCharacter echParam6) // Position - 0x12795 (75669)
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (pedParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, epctParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(pedParam0, epctParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(pedParam0, epctParam1);
	}
	else
	{
		character = echParam6;
	}

	if (iParam5 == 0)
		return;

	switch (character)
	{
		case CHAR_MICHAEL:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
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
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
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
	
		case CHAR_FRANKLIN:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
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
			else if (epctParam1 == PV_COMP_TASK)
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
	
		case CHAR_TREVOR:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
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

	return;
}

BOOL func_236() // Position - 0x129D6 (76246)
{
	if (func_238() && func_237(0))
		return true;

	return false;
}

var func_237(int iParam0) // Position - 0x129F4 (76276)
{
	return Global_1574538[iParam0];
}

var func_238() // Position - 0x12A04 (76292)
{
	return func_237(func_227() + 1);
}

void func_239(eCharacter echParam0) // Position - 0x12A16 (76310)
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_96691, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_96691);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_96692, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_96692);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_96693, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_96693);
			break;
	
		case CHAR_FRANKLIN:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_96691, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_96691);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_96692, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_96692);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_96693, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_96693);
			break;
	
		case CHAR_TREVOR:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_96691, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_96691);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_96692, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_96692);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_96693, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_96693);
			break;
	
		default:
			break;
	}

	return;
}

void func_240() // Position - 0x12BCA (76746)
{
	Blip mainPlayerBlipId;
	eCharacter character;

	func_101();
	mainPlayerBlipId = HUD::GET_MAIN_PLAYER_BLIP_ID();

	if (HUD::DOES_BLIP_EXIST(mainPlayerBlipId))
	{
		character = Global_114162.f_2367.f_539.f_4321;
	
		if (func_330(14))
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
	
		if (character == CHAR_MICHAEL)
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(mainPlayerBlipId, "BLIP_MICHAEL" /*Michael*/);
		else if (character == CHAR_FRANKLIN)
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(mainPlayerBlipId, "BLIP_FRANKLIN" /*Franklin*/);
		else if (character == CHAR_TREVOR)
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(mainPlayerBlipId, "BLIP_TREV" /*Trevor*/);
		else
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(mainPlayerBlipId, "BLIP_PLAYER" /*Player*/);
	}

	return;
}

void func_241(Ped pedParam0) // Position - 0x12C4D (76877)
{
	int i;
	var ammo;
	Hash weaponSlot;
	Hash pedWeapontypeInSlot;
	int j;
	int numDlcWeapons;
	var outData;

	for (i = 0; i < 44; i = i + 1)
	{
		weaponSlot = func_242(i);
	
		if (weaponSlot != 0)
		{
			pedWeapontypeInSlot = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(pedParam0, weaponSlot);
		
			if (pedWeapontypeInSlot != 0 && pedWeapontypeInSlot != joaat("WEAPON_UNARMED") && pedWeapontypeInSlot != joaat("OBJECT"))
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot) == -1)
					if (WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &ammo))
						WEAPON::SET_PED_INFINITE_AMMO(pedParam0, false, pedWeapontypeInSlot);
		}
	}

	numDlcWeapons = FILES::GET_NUM_DLC_WEAPONS();

	for (j = 0; j < numDlcWeapons; j = j + 1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(j, &outData))
		{
			pedWeapontypeInSlot = outData.f_1;
		
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot) == -1)
				if (WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &ammo))
					WEAPON::SET_PED_INFINITE_AMMO(pedParam0, false, pedWeapontypeInSlot);
		}
	}

	return;
}

Hash func_242(int iParam0) // Position - 0x12D0F (77071)
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("SLOT_UNARMED");
			break;
	
		case 1:
			num = joaat("SLOT_KNIFE");
			break;
	
		case 2:
			num = joaat("SLOT_NIGHTSTICK");
			break;
	
		case 3:
			num = joaat("SLOT_HAMMER");
			break;
	
		case 4:
			num = joaat("SLOT_BAT");
			break;
	
		case 5:
			num = joaat("SLOT_CROWBAR");
			break;
	
		case 6:
			num = joaat("SLOT_GOLFCLUB");
			break;
	
		case 7:
			num = joaat("SLOT_STUNGUN");
			break;
	
		case 8:
			num = joaat("SLOT_PISTOL");
			break;
	
		case 9:
			num = joaat("SLOT_COMBATPISTOL");
			break;
	
		case 10:
			num = joaat("SLOT_APPISTOL");
			break;
	
		case 11:
			num = joaat("SLOT_MICROSMG");
			break;
	
		case 12:
			num = joaat("SLOT_SMG");
			break;
	
		case 13:
			num = joaat("SLOT_ASSAULTRIFLE");
			break;
	
		case 14:
			num = joaat("SLOT_CARBINERIFLE");
			break;
	
		case 15:
			num = joaat("SLOT_ADVANCEDRIFLE");
			break;
	
		case 16:
			num = joaat("SLOT_MG");
			break;
	
		case 17:
			num = joaat("SLOT_COMBATMG");
			break;
	
		case 18:
			num = joaat("SLOT_PUMPSHOTGUN");
			break;
	
		case 19:
			num = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
	
		case 20:
			num = joaat("SLOT_ASSAULTSHOTGUN");
			break;
	
		case 21:
			num = joaat("SLOT_SNIPERRIFLE");
			break;
	
		case 22:
			num = joaat("SLOT_HEAVYSNIPER");
			break;
	
		case 23:
			num = joaat("SLOT_GRENADELAUNCHER");
			break;
	
		case 24:
			num = joaat("SLOT_RPG");
			break;
	
		case 25:
			num = joaat("SLOT_MINIGUN");
			break;
	
		case 26:
			num = joaat("SLOT_GRENADE");
			break;
	
		case 27:
			num = joaat("SLOT_STICKYBOMB");
			break;
	
		case 28:
			num = joaat("SLOT_SMOKEGRENADE");
			break;
	
		case 29:
			num = joaat("SLOT_MOLOTOV");
			break;
	
		case 30:
			num = joaat("SLOT_FIREEXTINGUISHER");
			break;
	
		case 31:
			num = joaat("SLOT_PETROLCAN");
			break;
	
		case 33:
			num = joaat("SLOT_PARACHUTE");
			break;
	
		case 34:
			num = joaat("SLOT_DIGISCANNER");
			break;
	
		case 35:
			num = joaat("SLOT_OBJECT");
			break;
	
		case 36:
			num = joaat("SLOT_ASSAULTSMG");
			break;
	
		case 37:
			num = joaat("SLOT_BULLPUPSHOTGUN");
			break;
	
		case 38:
			num = joaat("SLOT_PISTOL50");
			break;
	}

	return num;
}

void func_243(Ped pedParam0) // Position - 0x12F83 (77699)
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_102(character) && !PED::IS_PED_INJURED(pedParam0))
	{
		if (pedParam0 == PLAYER::PLAYER_PED_ID() && PED::GET_PED_MAX_HEALTH(pedParam0) == 200)
			PED::SET_PED_MAX_HEALTH(pedParam0, SYSTEM::ROUND((float)PED::GET_PED_MAX_HEALTH(pedParam0) * Global_262145.f_104));
	
		if (Global_114162.f_2367.f_539.f_290[character] <= 0f)
			Global_114162.f_2367.f_539.f_290[character] = 100f;
		else if (Global_114162.f_2367.f_539.f_290[character] <= 10f)
			Global_114162.f_2367.f_539.f_290[character] = 10f;
	
		ENTITY::SET_ENTITY_HEALTH(pedParam0, SYSTEM::ROUND(((Global_114162.f_2367.f_539.f_290[character] / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(pedParam0)) - 100f)) + 100f), 0, 0);
	}

	return;
}

int func_244(eCharacter echParam0) // Position - 0x13071 (77937)
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

BOOL func_245(int iParam0) // Position - 0x130AC (77996)
{
	if (Global_44199 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

eCharacter func_246(int iParam0) // Position - 0x130CE (78030)
{
	if (iParam0 == 0)
		return CHAR_MICHAEL;
	else if (iParam0 == 2)
		return CHAR_TREVOR;
	else if (iParam0 == 1)
		return CHAR_FRANKLIN;

	return _CHAR_NULL;
}

void func_247(eCharacter echParam0, var uParam1) // Position - 0x130FC (78076)
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			func_248(4, *uParam1, false);
			func_248(7, *uParam1, false);
			func_248(8, *uParam1, false);
			func_248(11, *uParam1, false);
			break;
	
		case CHAR_FRANKLIN:
			func_248(4, *uParam1, false);
			func_248(7, *uParam1, false);
			func_248(8, *uParam1, false);
			func_248(11, *uParam1, false);
		
			if (Global_114162.f_9089.f_99.f_58[126])
				func_248(12, *uParam1, false);
			break;
	
		case CHAR_TREVOR:
			func_248(4, *uParam1, false);
			func_248(7, *uParam1, false);
			func_248(8, *uParam1, false);
			func_248(11, *uParam1, false);
			break;
	}

	return;
}

void func_248(int iParam0, Entity eParam1, BOOL bParam2) // Position - 0x131B4 (78260)
{
	int i;
	BOOL flag;

	if (!bParam2)
		if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
			return;

	if (Global_42895[iParam0 /*31*/].f_24 == 0)
		return;

	flag = false;

	for (i = 0; i < Global_42895[iParam0 /*31*/].f_24; i = i + 1)
	{
		if (flag)
		{
			Global_42895[iParam0 /*31*/].f_25[i - 1] = Global_42895[iParam0 /*31*/].f_25[i];
			Global_42895[iParam0 /*31*/].f_25[i] = 0;
		}
		else if (eParam1 == Global_42895[iParam0 /*31*/].f_25[i])
		{
			Global_42895[iParam0 /*31*/].f_25[i] = 0;
			flag = true;
		}
	}

	if (flag)
		Global_42895[iParam0 /*31*/].f_24 = Global_42895[iParam0 /*31*/].f_24 - 1;

	return;
}

void func_249(Ped pedParam0, BOOL bParam1) // Position - 0x13270 (78448)
{
	func_261(pedParam0);
	func_255(pedParam0, bParam1);
	func_254(pedParam0);
	func_253(pedParam0);
	func_252(pedParam0);
	func_251(pedParam0);
	func_250(pedParam0);
	return;
}

void func_250(Ped pedParam0) // Position - 0x132A4 (78500)
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_102(character) && !PED::IS_PED_INJURED(pedParam0))
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
			Global_114162.f_2367.f_539.f_2328[character] = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());

	return;
}

void func_251(Ped pedParam0) // Position - 0x132EB (78571)
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_102(character) && !PED::IS_PED_INJURED(pedParam0))
		Global_114162.f_2367.f_539.f_2318[character /*3*/] = { ENTITY::GET_ENTITY_VELOCITY(pedParam0) };

	return;
}

void func_252(Ped pedParam0) // Position - 0x13329 (78633)
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_102(character) && !PED::IS_PED_INJURED(pedParam0))
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
				return;
	
		Global_114162.f_2367.f_539.f_2300[character /*3*/] = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
		Global_114162.f_2367.f_539.f_2310[character] = ENTITY::GET_ENTITY_HEADING(pedParam0);
		Global_114162.f_2367.f_539.f_2314[character] = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(pedParam0);
	
		if (Global_114162.f_2367.f_539.f_2300[character /*3*/] >= 8000f)
			Global_114162.f_2367.f_539.f_2300[character /*3*/] = 7500f;
		else if (Global_114162.f_2367.f_539.f_2300[character /*3*/] <= -8000f)
			Global_114162.f_2367.f_539.f_2300[character /*3*/] = -7500f;
	
		if (Global_114162.f_2367.f_539.f_2300[character /*3*/].f_1 >= 8000f)
			Global_114162.f_2367.f_539.f_2300[character /*3*/].f_1 = 7500f;
		else if (Global_114162.f_2367.f_539.f_2300[character /*3*/].f_1 <= -8000f)
			Global_114162.f_2367.f_539.f_2300[character /*3*/].f_1 = -7500f;
	
		if (Global_114162.f_2367.f_539.f_2300[character /*3*/].f_2 >= 2500f)
			Global_114162.f_2367.f_539.f_2300[character /*3*/].f_2 = 2000f;
	}

	return;
}

void func_253(Ped pedParam0) // Position - 0x134B6 (79030)
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_102(character) && !PED::IS_PED_INJURED(pedParam0))
		Global_114162.f_2367.f_539.f_294[character] = PED::GET_PED_ARMOUR(pedParam0);

	return;
}

void func_254(Ped pedParam0) // Position - 0x134F2 (79090)
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_102(character) && !PED::IS_PED_INJURED(pedParam0))
		Global_114162.f_2367.f_539.f_290[character] = ((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(pedParam0)) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(pedParam0)) - 100f)) * 100f;

	return;
}

void func_255(Ped pedParam0, BOOL bParam1) // Position - 0x1354F (79183)
{
	eCharacter character;
	Hash weaponWheelCurrentlyHighlighted;
	int i;
	int tintIndex;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_102(character) && !PED::IS_PED_INJURED(pedParam0))
	{
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_256(pedParam0, &Global_114162.f_2367.f_539.f_298[character /*477*/]);
		
			for (i = 0; i <= 8 - 1; i = i + 1)
			{
				Global_114162.f_2367.f_539.f_1730[i /*4*/][character] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(i);
			
				if (bParam1)
				{
					weaponWheelCurrentlyHighlighted = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
				
					if (Global_114162.f_2367.f_539.f_1730[i /*4*/][character] == weaponWheelCurrentlyHighlighted)
						Global_114162.f_2367.f_539.f_1763 = i;
				}
			}
		
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &tintIndex);
		
			if (character == CHAR_MICHAEL)
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), tintIndex, true);
			else if (character == CHAR_FRANKLIN)
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), tintIndex, true);
			else if (character == CHAR_TREVOR)
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), tintIndex, true);
		}
	}

	return;
}

void func_256(Ped pedParam0, var uParam1) // Position - 0x13642 (79426)
{
	int i;
	int j;
	Hash k;
	Hash hash;
	Hash pedWeapontypeInSlot;
	int l;
	int numDlcWeaponsSp;
	Hash outData;
	var ComponentDataPtr;
	int num;
	int offset;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			uParam1->[i /*5*/].f_1 = 0;
		}
	
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			hash = func_242(i);
		
			if (hash != 0)
			{
				pedWeapontypeInSlot = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(pedParam0, func_242(i));
				pedWeapontypeInSlot.f_1 = 0;
				pedWeapontypeInSlot.f_2 = 0;
				pedWeapontypeInSlot.f_3 = 0;
				pedWeapontypeInSlot.f_4 = 0;
			
				if (pedWeapontypeInSlot != 0 && pedWeapontypeInSlot != joaat("WEAPON_UNARMED"))
				{
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot == joaat("GADGET_PARACHUTE"))
						pedWeapontypeInSlot.f_1 = 1;
				
					pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
					pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->[i /*5*/].f_1 = pedWeapontypeInSlot.f_1;
					j = 0;
				
					for (k = func_259(pedWeapontypeInSlot, j); k != 0; k = func_259(pedWeapontypeInSlot, j))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, k))
							MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), j);
					
						j = j + 1;
					}
				}
			
				uParam1->[i /*5*/] = { pedWeapontypeInSlot };
			}
		}
	
		for (i = 0; i <= 50; i = i + 1)
		{
			uParam1->f_221[i /*5*/].f_1 = 0;
		}
	
		numDlcWeaponsSp = FILES::GET_NUM_DLC_WEAPONS_SP();
	
		for (l = 0; l < numDlcWeaponsSp; l = l + 1)
		{
			if (FILES::GET_DLC_WEAPON_DATA_SP(l, &outData) && !func_258(outData.f_1) && num < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(outData))
				{
					pedWeapontypeInSlot = outData.f_1;
					pedWeapontypeInSlot.f_1 = 0;
					pedWeapontypeInSlot.f_2 = 0;
					pedWeapontypeInSlot.f_3 = 0;
					pedWeapontypeInSlot.f_4 = 0;
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false))
					{
						pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
						pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
					}
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->f_221[num /*5*/].f_1 = pedWeapontypeInSlot.f_1;
					offset = 0;
				
					for (j = 0; j < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(l); j = j + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(l, j, &ComponentDataPtr))
						{
							if (!func_257(ComponentDataPtr.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, ComponentDataPtr.f_3))
									MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), offset);
							
								offset = offset + 1;
							}
						}
					}
				}
			
				if (pedWeapontypeInSlot != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false))
					{
						pedWeapontypeInSlot = 0;
						pedWeapontypeInSlot.f_1 = 0;
					}
				}
			
				uParam1->f_221[num /*5*/] = { pedWeapontypeInSlot };
				num = num + 1;
			}
		}
	}

	return;
}

BOOL func_257(int iParam0) // Position - 0x138CA (80074)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case 1011473080:
			return true;
	}

	return false;
}

BOOL func_258(int iParam0) // Position - 0x1396B (80235)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
		
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
		
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
		
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
		
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
		
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
		
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
		
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case 465894841:
			case 1703483498:
			case -22923932:
			case 350597077:
			case joaat("WEAPON_BATTLERIFLE"):
			case 62870901:
			case -624951259:
			case -1916886713:
				return true;
		}
	}

	return false;
}

Hash func_259(Hash hParam0, int iParam1) // Position - 0x13B63 (80739)
{
	int num;
	int dlcWeaponIndex;
	int i;
	int num2;
	var unk;
	var ComponentDataPtr;

	num = 0;

	switch (hParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			
				case 5:
					num = joaat("COMPONENT_COMBATPISTOL_VARMOD_XMAS23");
					break;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			
				case 5:
					num = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			
				case 6:
					num = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			
				case 7:
					num = joaat("COMPONENT_MICROSMG_VARMOD_XM3");
					break;
			
				case 8:
					num = joaat("COMPONENT_MICROSMG_VARMOD_FRN");
					break;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_SMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_SMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_SMG_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 8:
					num = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 8:
					num = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 8:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 9:
					num = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			
				case 10:
					num = joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH");
					break;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_SR_SUPP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			
				case 3:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
			
				case 4:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 4:
					num = joaat("COMPONENT_HEAVYSNIPER_VARMOD_XMAS23");
					break;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 7:
					num = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			
				case 8:
					num = joaat("COMPONENT_SPECIALCARBINE_VARMOD_XMAS23");
					break;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
			
				case 1:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
			
				case 2:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
			
				case 3:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
			
				case 4:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
			
				case 5:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
			
				case 6:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
			
				case 7:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
			
				case 8:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
			
				case 1:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
			
				case 2:
					num = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_BAT_VARMOD_XM3");
					break;
			
				case 1:
					num = joaat("COMPONENT_BAT_VARMOD_XM3_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_BAT_VARMOD_XM3_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_BAT_VARMOD_XM3_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_BAT_VARMOD_XM3_04");
					break;
			
				case 5:
					num = joaat("COMPONENT_BAT_VARMOD_XM3_05");
					break;
			
				case 6:
					num = joaat("COMPONENT_BAT_VARMOD_XM3_06");
					break;
			
				case 7:
					num = joaat("COMPONENT_BAT_VARMOD_XM3_07");
					break;
			
				case 8:
					num = joaat("COMPONENT_BAT_VARMOD_XM3_08");
					break;
			
				case 9:
					num = joaat("COMPONENT_BAT_VARMOD_XM3_09");
					break;
			}
			break;
	
		case joaat("WEAPON_RPG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_RPG_VARMOD_TVR");
					break;
			}
			break;
	
		case joaat("WEAPON_BATTLERIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_BATTLERIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_BATTLERIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_STUNGUN_MP"):
			switch (iParam1)
			{
				case 0:
					num = -1675905033;
					break;
			}
			break;
	
		case -1916886713:
			switch (iParam1)
			{
				case 0:
					num = -584965981;
					break;
			
				case 1:
					num = 291145905;
					break;
			
				case 2:
					num = 1978284360;
					break;
			}
			break;
	
		default:
			if (hParam0 != 0)
			{
				dlcWeaponIndex = func_260(hParam0, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
						{
							if (!func_257(ComponentDataPtr.f_3))
							{
								if (num2 == iParam1)
									return ComponentDataPtr.f_3;
							
								num2 = num2 + 1;
							}
						}
					}
				}
			}
			break;
	}

	return num;
}

int func_260(Hash hParam0, Any* panParam1) // Position - 0x148E6 (84198)
{
	int i;
	int numDlcWeapons;

	numDlcWeapons = FILES::GET_NUM_DLC_WEAPONS();

	for (i = 0; i < numDlcWeapons; i = i + 1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(i, panParam1))
			if (panParam1->f_1 == hParam0)
				return i;
	}

	return -1;
}

void func_261(Ped pedParam0) // Position - 0x14921 (84257)
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_102(character) && !PED::IS_PED_INJURED(pedParam0))
		Global_114162.f_2367.f_539.f_2296[character] = func_183();

	return;
}

int func_262(var uParam0, int iParam1) // Position - 0x1495B (84315)
{
	BOOL flag;
	BOOL flag2;

	if (!uParam0->f_39)
	{
		uParam0->f_7 = 4;
		uParam0->f_39 = 1;
	}

	if (iParam1 != 0 && iParam1 != 2 && iParam1 != 1)
	{
	}
	else
	{
		flag = uParam0->f_34[iParam1] == 2;
	
		if (func_244(_GET_CURRENT_PLAYER_CHARACTER()) != iParam1 || flag)
		{
			flag2 = false;
		
			if (flag || uParam0->f_24[iParam1] != 0 || func_266(iParam1) && func_263(iParam1) && !uParam0->f_18[iParam1])
				if (!uParam0->f_23)
					if (!PED::IS_PED_INJURED(uParam0->[iParam1]) || flag)
						if (uParam0->f_34[iParam1] != 1 && uParam0->f_34[iParam1] != 3)
							flag2 = true;
				else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !IS_BIT_SET(Global_99166.f_47, iParam1))
					flag2 = true;
			else if (!(IS_BIT_SET(Global_114162.f_9089.f_2[27 /*3*/], 1) && !Global_4 && !func_3(false)))
				if (uParam0->f_23)
					flag2 = true;
		
			if (flag2)
			{
				uParam0->f_7 = iParam1;
				return 1;
			}
		}
	}

	uParam0->f_39 = 0;
	return 0;
}

int func_263(int iParam0) // Position - 0x14AB0 (84656)
{
	if (Global_114162.f_9089 || Global_4)
		if (!Global_79564 || Global_79564 && iParam0 != func_244(func_265()))
			if (!func_264(func_246(iParam0)))
				return 0;

	return 1;
}

BOOL func_264(eCharacter echParam0) // Position - 0x14B00 (84736)
{
	if (func_102(echParam0))
		if (Global_114162.f_9089 || Global_4 || func_3(false))
			return Global_114162.f_2367.f_539.f_2348[echParam0];
		else
			return true;

	return false;
}

eCharacter func_265() // Position - 0x14B4E (84814)
{
	return Global_114162.f_2367.f_539.f_4323;
}

int func_266(int iParam0) // Position - 0x14B63 (84835)
{
	if (Global_114162.f_9089 || Global_4 || func_3(false))
		if (!Global_79564 || Global_79564 && iParam0 != func_244(func_265()))
			if (iParam0 == 0 && !func_335(115) || iParam0 == 1 && !func_335(116) || iParam0 == 2 && !func_335(117))
				return 0;

	return 1;
}

int func_267(int iParam0) // Position - 0x14BEF (84975)
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < Global_114162.f_7692.f_136; i = i + 1)
	{
		if (Global_114162.f_7692[i /*15*/] == iParam0)
		{
			if (Global_44746 != i)
			{
				func_280(i);
				func_272(iParam0);
				num = 1;
			}
		}
	}

	for (i = 0; i < Global_114162.f_7692.f_198; i = i + 1)
	{
		if (Global_114162.f_7692.f_137[i /*15*/] == iParam0)
		{
			func_272(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_114162.f_7692.f_650; i = i + 1)
	{
		if (Global_114162.f_7692.f_199[i /*15*/] == iParam0)
		{
			func_271(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_114162.f_7692.f_764; i = i + 1)
	{
		if (Global_114162.f_7692.f_651[i /*14*/] == iParam0)
		{
			func_269(i);
			num = 1;
		}
	}

	for (i = 0; i < Global_114162.f_7692.f_866; i = i + 1)
	{
		if (Global_114162.f_7692.f_765[i /*10*/] == iParam0)
		{
			func_268(i);
			num = 1;
		}
	}

	return num;
}

void func_268(int iParam0) // Position - 0x14D16 (85270)
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_114162.f_7692.f_866)
		return;

	if (Global_114162.f_7692.f_866 > 1)
	{
		for (i = iParam0; i <= Global_114162.f_7692.f_866 - 2; i = i + 1)
		{
			Global_114162.f_7692.f_765[i /*10*/] = { Global_114162.f_7692.f_765[i + 1 /*10*/] };
		}
	}

	if (Global_114162.f_7692.f_866 > 0)
	{
		Global_114162.f_7692.f_765[Global_114162.f_7692.f_866 - 1 /*10*/] = { unk };
		Global_114162.f_7692.f_866 = Global_114162.f_7692.f_866 - 1;
	}

	return;
}

void func_269(int iParam0) // Position - 0x14DCF (85455)
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_114162.f_7692.f_764)
		return;

	if (Global_114162.f_7692.f_764 > 1)
	{
		for (i = iParam0; i <= Global_114162.f_7692.f_764 - 2; i = i + 1)
		{
			Global_114162.f_7692.f_651[i /*14*/] = { Global_114162.f_7692.f_651[i + 1 /*14*/] };
		}
	}

	if (Global_114162.f_7692.f_764 > 0)
	{
		Global_114162.f_7692.f_651[Global_114162.f_7692.f_764 - 1 /*14*/] = { unk };
		Global_114162.f_7692.f_764 = Global_114162.f_7692.f_764 - 1;
	}

	func_270(CHAR_MICHAEL);
	func_270(CHAR_FRANKLIN);
	func_270(CHAR_TREVOR);
	return;
}

void func_270(eCharacter echParam0) // Position - 0x14E97 (85655)
{
	int i;
	int num;
	int j;

	num = 0;

	if (!func_102(echParam0))
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

void func_271(int iParam0) // Position - 0x14F55 (85845)
{
	var unk;
	int i;
	int j;

	for (i = 0; i < Global_114162.f_7692.f_650; i = i + 1)
	{
		if (Global_114162.f_7692.f_199[i /*15*/] == iParam0)
		{
			for (j = i; j <= Global_114162.f_7692.f_650 - 2; j = j + 1)
			{
				Global_114162.f_7692.f_199[j /*15*/] = { Global_114162.f_7692.f_199[j + 1 /*15*/] };
			}
		
			Global_114162.f_7692.f_199[Global_114162.f_7692.f_650 - 1 /*15*/] = { unk };
			Global_114162.f_7692.f_650 = Global_114162.f_7692.f_650 - 1;
			return;
		}
	}

	return;
}

void func_272(int iParam0) // Position - 0x15002 (86018)
{
	var unk;
	int i;
	int j;

	for (i = 0; i < Global_114162.f_7692.f_198; i = i + 1)
	{
		if (Global_114162.f_7692.f_137[i /*15*/] == iParam0)
		{
			func_273(Global_114162.f_7692.f_137[i /*15*/].f_6);
		
			for (j = i; j <= Global_114162.f_7692.f_198 - 2; j = j + 1)
			{
				Global_114162.f_7692.f_137[j /*15*/] = { Global_114162.f_7692.f_137[j + 1 /*15*/] };
			}
		
			Global_114162.f_7692.f_137[Global_114162.f_7692.f_198 - 1 /*15*/] = { unk };
			Global_114162.f_7692.f_198 = Global_114162.f_7692.f_198 - 1;
			return;
		}
	}

	return;
}

int func_273(int iParam0) // Position - 0x150BE (86206)
{
	eCharacter character;

	if (Global_120[iParam0 /*10*/].f_8 != 184)
	{
		if (func_279(iParam0, Global_21083) == 1)
		{
			func_278(iParam0, Global_21083, 0);
		
			if (func_277(iParam0, Global_21083) == 0)
			{
				character = Global_21083;
				func_274(iParam0, character);
			}
		
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_274(int iParam0, eCharacter echParam1) // Position - 0x15114 (86292)
{
	eCharacter character;

	if (Global_120[iParam0 /*10*/].f_8 != 184)
	{
		if (echParam1 > CHAR_MULTIPLAYER)
		{
		}
		else
		{
			character = echParam1;
			func_276(iParam0, character, 0);
			func_275(iParam0, character, 0);
		}
	}

	return;
}

void func_275(int iParam0, eCharacter echParam1, int iParam2) // Position - 0x15149 (86345)
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2201[iParam0 /*29*/].f_24[echParam1] = iParam2;

	if (iParam0 < 162)
		Global_114162.f_28055[iParam0 /*29*/].f_24[echParam1] = iParam2;

	return;
}

void func_276(int iParam0, eCharacter echParam1, int iParam2) // Position - 0x1518E (86414)
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2201[iParam0 /*29*/].f_12[echParam1] = iParam2;

	if (iParam0 < 162)
		Global_114162.f_28055[iParam0 /*29*/].f_12[echParam1] = iParam2;

	return;
}

int func_277(int iParam0, eCharacter echParam1) // Position - 0x151D3 (86483)
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2201[iParam0 /*29*/].f_24[echParam1];
}

void func_278(int iParam0, eCharacter echParam1, int iParam2) // Position - 0x151FD (86525)
{
	Global_2201[iParam0 /*29*/].f_19[echParam1] = iParam2;

	if (iParam0 < 162)
		Global_114162.f_28055[iParam0 /*29*/].f_19[echParam1] = iParam2;

	return;
}

int func_279(int iParam0, eCharacter echParam1) // Position - 0x1522E (86574)
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2201[iParam0 /*29*/].f_19[echParam1];
}

void func_280(eCharacter echParam0) // Position - 0x15258 (86616)
{
	eCharacter i;
	int num;
	var unk;

	if (echParam0 < 0 || echParam0 >= Global_114162.f_7692.f_136)
		return;

	num = Global_114162.f_7692[echParam0 /*15*/].f_2;

	if (Global_114162.f_7692.f_136 > 1)
	{
		for (i = echParam0; i <= Global_114162.f_7692.f_136 - 2; i = i + 1)
		{
			Global_114162.f_7692[i /*15*/] = { Global_114162.f_7692[i + 1 /*15*/] };
		}
	}

	if (Global_114162.f_7692.f_136 > 0)
	{
		Global_114162.f_7692[Global_114162.f_7692.f_136 - 1 /*15*/] = { unk };
		Global_114162.f_7692.f_136 = Global_114162.f_7692.f_136 - 1;
	}

	for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
	{
		if (IS_BIT_SET(num, i))
			func_270(i);
	}

	return;
}

int func_281(int iParam0, int iParam1) // Position - 0x15330 (86832)
{
	int num;

	num = func_66(func_282(iParam0));

	if (num < 0)
		return 15;

	if (num >= 10)
		return 15;

	return Global_114162.f_1.f_12[num /*6*/][iParam1];
}

int func_282(int iParam0) // Position - 0x15371 (86897)
{
	switch (iParam0)
	{
		case 0:
			return 7;
	
		case 1:
			return 8;
	
		case 2:
			return 9;
	
		case 3:
			return 10;
	
		case 4:
			return 11;
	}

	return -1;
}

int func_283(int iParam0) // Position - 0x153C6 (86982)
{
	int num;

	num = func_66(func_282(iParam0));
	return Global_97717[num /*19*/];
}

void func_284(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x153E2 (87010)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_292(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21083.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_75())
				Global_21083.f_1 = 3;
		
			Global_22442 = 5;
		}
	
		func_291(true, bParam3, bParam2, false);
		Global_64332 = 1;
		Global_76661 = 1;
		Global_79562 = 1;
	}
	else
	{
		func_292(0);
		HUD::THEFEED_RESUME();
		Global_64332 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_291(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_289(PLAYER::PLAYER_ID()) && !func_286(PLAYER::PLAYER_ID(), 0) && !func_285() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_289(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		Global_79562 = 0;
	}

	return;
}

BOOL func_285() // Position - 0x15531 (87345)
{
	return IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_36.f_18, 14);
}

BOOL func_286(Player plParam0, int iParam1) // Position - 0x1554B (87371)
{
	BOOL flag;

	if (!func_288(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_287(-1, false) == 8;
	else
		flag = Global_1845270[plParam0 /*892*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_287(int iParam0, BOOL bParam1) // Position - 0x155A4 (87460)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_227();

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

BOOL func_288(Player plParam0) // Position - 0x155E5 (87525)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_289(Player plParam0) // Position - 0x15607 (87559)
{
	if (func_286(plParam0, 0))
		return true;

	if (func_290())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_290() // Position - 0x15646 (87622)
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_291(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x15654 (87636)
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

void func_292(int iParam0) // Position - 0x15687 (87687)
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 13);
	else
		MISC::CLEAR_BIT(&Global_8919, 13);

	return;
}

void func_293(BOOL bParam0) // Position - 0x156AA (87722)
{
	if (!bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_46))
			OBJECT::DELETE_OBJECT(&obLocal_46);
	
		ENTITY::CREATE_MODEL_HIDE(707.3041f, -967.6456f, 30.376f, 1f, joaat("prop_laptop_01a"), false);
	}
	else
	{
		ENTITY::REMOVE_MODEL_HIDE(707.3041f, -967.6456f, 30.376f, 1f, joaat("prop_laptop_01a"), false);
	
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_laptop_01a")))
		{
			obLocal_46 = OBJECT::CREATE_OBJECT(joaat("prop_laptop_01a"), 707.3041f, -967.6456f, 30.376f, true, true, false);
			ENTITY::SET_ENTITY_HEADING(obLocal_46, 183.14f);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_46, true);
		}
	}

	return;
}

void func_294() // Position - 0x15739 (87865)
{
	if (func_335(6))
	{
		if (!func_3(false))
		{
			if (!IS_BIT_SET(iLocal_39, 6))
			{
				CUTSCENE::REQUEST_CUTSCENE("AH_2_EXT_ALT", 8);
				STREAMING::REQUEST_MODEL(joaat("prop_laptop_01a"));
				uLocal_93.f_1.f_141[2 /*2*/] = 0;
				uLocal_93.f_1.f_141[2 /*2*/].f_1 = 0;
				uLocal_93.f_1.f_141[3 /*2*/] = 0;
				uLocal_93.f_1.f_141[3 /*2*/].f_1 = 0;
				uLocal_93.f_1.f_141[7 /*2*/] = 0;
				uLocal_93.f_1.f_141[7 /*2*/].f_1 = 0;
				uLocal_93.f_1.f_141[8 /*2*/] = 0;
				uLocal_93.f_1.f_141[8 /*2*/].f_1 = 0;
				MISC::SET_BIT(&iLocal_39, 6);
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
			}
		
			if (func_331(67))
			{
				if (!func_245(0))
				{
					if (func_315(&iLocal_40, 0, 0, false, 0) == 1)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_314();
					
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							PLAYER::SET_MAX_WANTED_LEVEL(0);
						}
					
						iLocal_91 = PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_93.f_1.f_394 - uLocal_93.f_1.f_397, uLocal_93.f_1.f_394 + uLocal_93.f_1.f_397, false, true, true, true, 1);
						iLocal_92 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(uLocal_93.f_1.f_394, uLocal_93.f_1.f_397 * { 1.5f, 1.5f, 1.5f }, 0f, false, 7);
						PED::SET_PED_NON_CREATION_AREA(uLocal_93.f_1.f_394 - uLocal_93.f_1.f_397, uLocal_93.f_1.f_394 + uLocal_93.f_1.f_397);
						PATHFIND::SET_PED_PATHS_IN_AREA(uLocal_93.f_1.f_394 - uLocal_93.f_1.f_397, uLocal_93.f_1.f_394 + uLocal_93.f_1.f_397, false, 0);
						MISC::SET_BIT(&iLocal_39, 2);
					}
				}
			}
		
			if (IS_BIT_SET(iLocal_39, 2))
			{
				if (func_313("AH_2_EXT_ALT") && STREAMING::HAS_MODEL_LOADED(joaat("prop_laptop_01a")))
				{
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_98185.f_9[0]) && !ENTITY::IS_ENTITY_DEAD(Global_98185.f_9[0], false))
						{
							pedLocal_44 = Global_98185.f_9[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_44, false, true);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_44, "LESTER", 1, joaat("IG_LesterCrest"), 0);
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(Global_98185.f_28[0]) && !ENTITY::IS_ENTITY_DEAD(Global_98185.f_28[0], false))
						{
							pedLocal_45 = Global_98185.f_28[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98185.f_28[0], false, true);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_45, "WALKINGSTICK_LESTER", 1, joaat("prop_cs_walking_stick"), 0);
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(Global_98185.f_9[1]) && !ENTITY::IS_ENTITY_DEAD(Global_98185.f_9[1], false))
						{
							uLocal_47[0] = Global_98185.f_9[1];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_47[0], false, true);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_47[0], "MICHAEL", 0, joaat("Player_Zero"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_47[0], "MICHAEL", 2, joaat("Player_Zero"), 0);
							MISC::SET_BIT(&iLocal_39, 12);
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							pedLocal_43 = PLAYER::PLAYER_PED_ID();
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_43, "FRANKLIN", 1, joaat("Player_One"), 0);
						}
					
						_CONVERSATION_INITIALIZE_ACTOR(&(uLocal_93.f_484), 0, 0, "MICHAEL", 1, 1);
						_CONVERSATION_INITIALIZE_ACTOR(&(uLocal_93.f_484), 1, 0, "FRANKLIN", 1, 1);
						_CONVERSATION_INITIALIZE_ACTOR(&(uLocal_93.f_484), 3, 0, "LESTER", 1, 1);
						func_73(true);
						func_284(true, true, true, false, false, false, false);
						func_293(false);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(949391213, 3, true, false);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(949391213, 0f, true, false);
						CUTSCENE::START_CUTSCENE(2048);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						iLocal_42 = MISC::GET_GAME_TIMER();
					}
					else
					{
						func_120();
					
						if (ENTITY::DOES_ENTITY_EXIST(Global_98185[0]) && !ENTITY::IS_ENTITY_DEAD(Global_98185[0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98185[0], false, true);
							func_296(Global_98185[0], 0, CHAR_FRANKLIN);
							VEHICLE::DELETE_VEHICLE(&Global_98185[0]);
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							Global_98185[0] = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98185[0], false, true);
							func_296(Global_98185[0], 0, _GET_CURRENT_PLAYER_CHARACTER());
							VEHICLE::DELETE_VEHICLE(&Global_98185[0]);
						}
					
						if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1) == 7)
							PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0, 1);
					
						if (!IS_BIT_SET(iLocal_39, 13))
						{
							if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
								CAM::DO_SCREEN_FADE_IN(800);
						
							MISC::SET_BIT(&iLocal_39, 13);
						}
					
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
							MISC::SET_BIT(&iLocal_39, 14);
					
						if (IS_BIT_SET(iLocal_39, 14))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (!IS_BIT_SET(iLocal_39, 1))
								{
									func_295();
									MISC::SET_BIT(&iLocal_39, 1);
								}
							
								if (!IS_BIT_SET(iLocal_39, 3))
								{
									func_2(3, 3, true);
									MISC::SET_BIT(&iLocal_39, 3);
								}
							}
						}
					
						if (IS_BIT_SET(iLocal_39, 12))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("Player_Zero"))))
							{
								uLocal_47[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("Player_Zero")));
								MISC::CLEAR_BIT(&iLocal_39, 12);
							}
						}
					
						if (!IS_BIT_SET(iLocal_39, 3))
						{
							if (MISC::GET_GAME_TIMER() - iLocal_42 > 15848)
							{
								func_2(3, 3, true);
								MISC::SET_BIT(&iLocal_39, 3);
							}
						}
					
						if (!IS_BIT_SET(iLocal_39, 1))
						{
							if (MISC::GET_GAME_TIMER() - iLocal_42 > 5000)
							{
								func_295();
								MISC::SET_BIT(&iLocal_39, 1);
							}
						}
					
						if (!IS_BIT_SET(iLocal_39, 4))
						{
							if (MISC::GET_GAME_TIMER() - iLocal_42 > 71550)
							{
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0)))
									if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0), false))
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0), false, false);
							
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0)))
									if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0), false))
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0), false, false);
							
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0)))
									if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0)))
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0), false, false);
							
								MISC::SET_BIT(&iLocal_39, 4);
							}
						}
					
						if (!IS_BIT_SET(iLocal_39, 5))
						{
							if (MISC::GET_GAME_TIMER() - iLocal_42 > 73900)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
									ENTITY::SET_ENTITY_VISIBLE(uLocal_47[0], false, false);
							
								MISC::SET_BIT(&iLocal_39, 5);
							}
						}
					
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", joaat("Player_Zero")))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_47[0], false))
							{
								PED::SET_PED_CONFIG_FLAG(uLocal_47[0], 208, true);
								PED::SET_PED_CONFIG_FLAG(uLocal_47[0], 118, false);
								PED::SET_PED_CONFIG_FLAG(uLocal_47[0], 213, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_47[0], true);
							}
						
							if (_GET_CURRENT_PLAYER_CHARACTER() != CHAR_MICHAEL)
							{
								func_262(&uLocal_47, 0);
								func_198(&uLocal_47, false, false, 0);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
								_CONVERSATION_INITIALIZE_ACTOR(&(uLocal_93.f_484), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 1, 1);
							}
						
							if (!IS_BIT_SET(iLocal_39, 1))
							{
								func_295();
								MISC::SET_BIT(&iLocal_39, 1);
							}
						
							func_115(6, 0);
						}
					
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
						{
							func_293(true);
						
							if (!IS_BIT_SET(iLocal_39, 4))
							{
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0)))
									if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0), false))
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0), false, false);
							
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0)))
									if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0), false))
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0), false, false);
							
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0)))
									if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0)))
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0), false, false);
							
								MISC::SET_BIT(&iLocal_39, 4);
							}
						
							if (!IS_BIT_SET(iLocal_39, 5))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_47[0]))
									ENTITY::SET_ENTITY_VISIBLE(uLocal_47[0], false, false);
							
								MISC::SET_BIT(&iLocal_39, 5);
							}
						}
					}
				}
			}
		}
		else
		{
			if (_CAN_ENTER_FREEROAM_STATE(0))
				if (func_315(&iLocal_40, 0, 0, false, 0) == 1)
					MISC::SET_BIT(&iLocal_39, 2);
		
			if (IS_BIT_SET(iLocal_39, 2))
			{
				_CONVERSATION_INITIALIZE_ACTOR(&(uLocal_93.f_484), 0, 0, "MICHAEL", 1, 1);
				_CONVERSATION_INITIALIZE_ACTOR(&(uLocal_93.f_484), 1, 0, "FRANKLIN", 1, 1);
				_CONVERSATION_INITIALIZE_ACTOR(&(uLocal_93.f_484), 3, 0, "LESTER", 1, 1);
				func_295();
				func_115(6, 0);
			}
		}
	}
	else
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("AH_2_EXT_ALT"))
			CUTSCENE::REMOVE_CUTSCENE();
	
		if (IS_BIT_SET(iLocal_39, 6))
			MISC::CLEAR_BIT(&iLocal_39, 6);
	}

	return;
}

void func_295() // Position - 0x15F18 (89880)
{
	func_86(1, 3, true);
	func_86(2, 3, true);
	func_317(&uLocal_93);
	func_68(&uLocal_93);
	return;
}

int func_296(Vehicle veParam0, int iParam1, eCharacter echParam2) // Position - 0x15F3A (89914)
{
	var script;
	const char* entityScript;

	if (iParam1 == 0)
	{
		entityScript = ENTITY::GET_ENTITY_SCRIPT(veParam0, &script);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(entityScript))
			if (MISC::GET_HASH_KEY(entityScript) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
				return 0;
	}

	func_297(veParam0, echParam2);
	return 1;
}

void func_297(Vehicle veParam0, eCharacter echParam1) // Position - 0x15F7A (89978)
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_303(veParam0))
		return;

	if (echParam1 != CHAR_MICHAEL && echParam1 != CHAR_FRANKLIN && echParam1 != CHAR_TREVOR)
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
			if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_Zero"))
				echParam1 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_One"))
				echParam1 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_Two"))
				echParam1 = CHAR_TREVOR;
	
		if (echParam1 != CHAR_MICHAEL && echParam1 != CHAR_FRANKLIN && echParam1 != CHAR_TREVOR)
			echParam1 = Global_114162.f_2367.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_114162.f_32754.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114162.f_32754.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_114162.f_32754.f_5038[i /*157*/][j /*78*/].f_1)))
					{
						Global_114162.f_32754.f_5038[i /*157*/][j /*78*/].f_66 = 0;
						Global_114162.f_32754.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_114162.f_32754.f_5600[i /*78*/].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114162.f_32754.f_5600[i /*78*/].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_114162.f_32754.f_5600[i /*78*/].f_1)))
					Global_114162.f_32754.f_5600[i /*78*/].f_66 = 0;
	}

	Global_114162.f_32754.f_5590 = echParam1;
	Global_79259 = veParam0;
	Global_114162.f_32754.f_5588 = 1;
	func_298(veParam0, &(Global_114162.f_32754.f_5510));
	return;
}

void func_298(Vehicle veParam0, var uParam1) // Position - 0x1617C (90492)
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_302(uParam1);
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
	
		if (uParam1->f_65 == -1 && !func_301(uParam1->f_66))
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
	
		func_300(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_299(i + 1));
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

int func_299(int iParam0) // Position - 0x16427 (91175)
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

int func_300(var uParam0, var uParam1, var uParam2) // Position - 0x164D7 (91351)
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

BOOL func_301(int iParam0) // Position - 0x166CA (91850)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return true;
	
		default:
		
	}

	return false;
}

void func_302(var uParam0) // Position - 0x166EA (91882)
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

BOOL func_303(Vehicle veParam0) // Position - 0x1679A (92058)
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_310(veParam0, 0, false) || func_310(veParam0, 1, false) || func_310(veParam0, 2, false) || func_309(veParam0) != 145 || func_308(veParam0) || func_307(veParam0) || func_306(veParam0) || func_305(veParam0) || !func_304(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_307(veParam0);
		func_307(veParam0);
		func_310(veParam0, 0, false);
		func_310(veParam0, 1, false);
		func_310(veParam0, 2, false);
		func_309(veParam0) != 145;
		return false;
	}

	return true;
}

BOOL func_304(Hash hParam0) // Position - 0x16877 (92279)
{
	if (hParam0 == 0)
		return false;

	if (!func_169(hParam0, false, -1))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0))
		return false;

	switch (hParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case -671564942:
		case -902029319:
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
	}

	return true;
}

BOOL func_305(Vehicle veParam0) // Position - 0x16A35 (92725)
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_169(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_306(Vehicle veParam0) // Position - 0x16A7C (92796)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99049[i]))
			if (Global_99049[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_307(Vehicle veParam0) // Position - 0x16AB7 (92855)
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_99019[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_99019[i], false))
				if (Global_99019[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_99019[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_308(Vehicle veParam0) // Position - 0x16B33 (92979)
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(Global_78354.f_484[24]))
		if (veParam0 == Global_78354.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78354.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (veParam0 == Global_78354.f_484[i])
					return true;
	}

	return false;
}

int func_309(Vehicle veParam0) // Position - 0x16C1B (93211)
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 145;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 145;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99019[i]))
			if (Global_99019[i] == veParam0)
				return Global_99029[i];
	}

	return 145;
}

BOOL func_310(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0x16C7E (93310)
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_311(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114162.f_7233[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_311(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x16CEC (93420)
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

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x16DC4 (93636)
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

BOOL func_313(char* sParam0) // Position - 0x16E5F (93791)
{
	BOOL hasThisCutsceneLoaded;

	hasThisCutsceneLoaded = CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sParam0);

	if (!Global_79563)
		if (!hasThisCutsceneLoaded)
			Global_79563 = true;

	return hasThisCutsceneLoaded;
}

void func_314() // Position - 0x16E84 (93828)
{
	Global_101752 = 1;
	return;
}

int func_315(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x16E91 (93841)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99166.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_245(0))
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
			func_316(uParam0, iParam4);
	}

	return 2;
}

void func_316(var uParam0, int iParam1) // Position - 0x16FC8 (94152)
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

void func_317(var uParam0) // Position - 0x17017 (94231)
{
	if (func_12(2, *uParam0))
	{
		if (IS_BIT_SET(uParam0->f_449, 1))
		{
			if (IS_BIT_SET(uParam0->f_449, 2))
			{
				func_70(uParam0, func_318(*uParam0));
				func_86(2, *uParam0, false);
			}
			else
			{
				func_122(uParam0);
				func_86(2, *uParam0, false);
			}
		}
	}

	return;
}

BOOL func_318(int iParam0) // Position - 0x17066 (94310)
{
	switch (iParam0)
	{
		case 0:
			return func_335(18);
	
		case 1:
			return func_335(22);
	
		case 2:
			return func_335(40);
	
		case 3:
			return func_335(8);
	
		case 4:
			return func_335(26);
	
		default:
			break;
	}

	return false;
}

void func_319(var uParam0, float fParam1, float fParam2) // Position - 0x170D3 (94419)
{
	float num;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		num = SYSTEM::VDIST2(uParam0->f_401, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	
		if (IS_BIT_SET(uParam0->f_449, 1))
			func_327(uParam0);
		else if (num < fParam1 * fParam1 || IS_BIT_SET(Global_97697, *uParam0))
			if (IS_BIT_SET(uParam0->f_449, 0))
				if (func_326(uParam0))
					if (IS_BIT_SET(Global_97697, *uParam0))
						if (IS_BIT_SET(Global_97699, *uParam0))
							func_321(uParam0);
					else
						func_321(uParam0);
			else
				func_320(uParam0);
	
		if (num > fParam2 * fParam2 && !IS_BIT_SET(Global_97697, *uParam0))
		{
			if (IS_BIT_SET(uParam0->f_449, 0))
			{
				if (IS_BIT_SET(uParam0->f_449, 1))
					func_154(uParam0);
			
				func_153(uParam0);
			}
		}
	}

	return;
}

void func_320(var uParam0) // Position - 0x171A4 (94628)
{
	if (!AUDIO::HAS_LOADED_SP_DATA_SET())
		return;

	HUD::REQUEST_ADDITIONAL_TEXT(&(uParam0->f_1.f_272), 5);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, -1);

	if (*uParam0 != 1)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_03"));
	}

	uParam0->f_413 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE(&(uParam0->f_1.f_268));
	uParam0->f_414 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	MISC::SET_BIT(&Global_97696, *uParam0);
	MISC::SET_BIT(&(uParam0->f_449), 0);
	return;
}

void func_321(var uParam0) // Position - 0x17222 (94754)
{
	int i;

	if (!IS_BIT_SET(uParam0->f_449, 1))
	{
		for (i = 0; i < uParam0->f_1.f_96; i = i + 1)
		{
			func_37(uParam0, i);
		}
	
		func_34(uParam0);
		func_33(uParam0);
		func_325(uParam0);
		func_324(uParam0);
		func_322(uParam0);
		MISC::SET_BIT(&(uParam0->f_449), 1);
	}

	return;
}

void func_322(var uParam0) // Position - 0x1727C (94844)
{
	int i;
	Hash modelHash;
	float pitch;
	float num;
	Vector3 vector;

	for (i = 0; i < uParam0->f_1.f_33; i = i + 1)
	{
		if (func_332(*uParam0, uParam0->f_1.f_75[i]))
		{
			switch (i % 3)
			{
				case 0:
					modelHash = joaat("prop_ld_planning_pin_01");
					break;
			
				case 1:
					modelHash = joaat("prop_ld_planning_pin_02");
					break;
			
				case 2:
					modelHash = joaat("prop_ld_planning_pin_03");
					break;
			}
		
			pitch = SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767) / 4000f;
			num = SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767) / 4000f;
			vector = { func_323(uParam0, &uParam0->f_1.f_34[i /*2*/]) };
			uParam0->f_428[i] = OBJECT::CREATE_OBJECT(modelHash, vector, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_428[i], pitch, 0f, uParam0->f_404 + num, 2, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_428[i], true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_428[i], true, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_428[i], false, false);
			ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_428[i], false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_428[i], true);
		}
	}

	MISC::CLEAR_BIT(&Global_97699, *uParam0);
	return;
}

Vector3 func_323(var uParam0, var uParam1) // Position - 0x173B2 (95154)
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	var unk;
	var unk2;

	num = uParam0->f_1.f_4;
	num2 = uParam0->f_1.f_5;
	func_30(uParam0, uParam1, &num3, &num4);
	num5 = num * (num3 - 0.5f);
	num6 = -num2 * (num4 - 0.5f);
	unk = uParam0->f_404;
	unk2 = { uParam0->f_401 };
	unk2 = { unk2 + { num6, num5 * SYSTEM::COS(90f - unk), num5 * SYSTEM::SIN(90f - unk) } };
	return unk2;
}

void func_324(var uParam0) // Position - 0x17430 (95280)
{
	int i;
	int num;
	int num2;
	BOOL value;

	num = *uParam0;

	for (i = 0; i < uParam0->f_1.f_117; i = i + 1)
	{
		num2 = uParam0->f_1.f_186[i];
		value = IS_BIT_SET(Global_114162.f_1.f_120[num], num2);
	
		if (uParam0->f_1.f_141[i /*2*/] == 0 && uParam0->f_1.f_141[i /*2*/].f_1 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[i]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[i]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[i /*2*/]));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[i /*2*/].f_1));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}

	return;
}

void func_325(var uParam0) // Position - 0x1750D (95501)
{
	int num;
	int value;
	int i;
	int value2;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_14));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_14.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	num = *uParam0;
	value = 0;

	for (i = 0; i < uParam0->f_1.f_209; i = i + 1)
	{
		if (func_332(num, uParam0->f_1.f_248[i]))
		{
			value2 = 0;
		
			if (func_332(num, uParam0->f_1.f_258[i]))
				value2 = 1;
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
			func_10(&uParam0->f_1.f_211[i /*4*/]);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			value = value + 1;
		}
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (func_332(*uParam0, uParam0->f_1.f_210))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

BOOL func_326(var uParam0) // Position - 0x1764D (95821)
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_413))
		return false;

	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_414))
		return false;

	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(5))
		return false;

	if (AUDIO::HAS_LOADED_SP_DATA_SET())
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, -1))
			return false;
	else
		return false;

	if (*uParam0 != 1)
		if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_02")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_03")))
			return false;

	MISC::SET_BIT(&Global_97698, *uParam0);
	return true;
}

void func_327(var uParam0) // Position - 0x176E8 (95976)
{
	float num;
	float num2;

	if (func_332(*uParam0, 0))
	{
		func_328(uParam0);
		num = -uParam0->f_1.f_4 * 0.5f;
		num2 = uParam0->f_1.f_5 * 0.5f;
		GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(uParam0->f_413, uParam0->f_401 + { num2, num * SYSTEM::COS(90f - uParam0->f_404), num * SYSTEM::SIN(90f - uParam0->f_404) }, 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}

	return;
}

void func_328(var uParam0) // Position - 0x17771 (96113)
{
	int i;
	int num;
	BOOL value;
	Hash modelHash;
	float pitch;
	float num2;
	Vector3 vector;

	if (IS_BIT_SET(Global_97696, *uParam0))
	{
		MISC::SET_BIT(&(uParam0->f_449), 16);
		MISC::SET_BIT(&(uParam0->f_449), 15);
		MISC::SET_BIT(&(uParam0->f_449), 14);
		MISC::CLEAR_BIT(&Global_97696, *uParam0);
	}

	if (IS_BIT_SET(uParam0->f_449, 16))
	{
		for (i = 0; i < uParam0->f_1.f_117; i = i + 1)
		{
			num = uParam0->f_1.f_186[i];
			value = func_332(*uParam0, num);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[i]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		MISC::CLEAR_BIT(&(uParam0->f_449), 16);
	}

	if (IS_BIT_SET(uParam0->f_449, 15))
	{
		for (i = 0; i < uParam0->f_1.f_33; i = i + 1)
		{
			if (func_332(*uParam0, uParam0->f_1.f_75[i]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[i]))
				{
					switch (i % 3)
					{
						case 0:
							modelHash = joaat("prop_ld_planning_pin_01");
							break;
					
						case 1:
							modelHash = joaat("prop_ld_planning_pin_02");
							break;
					
						case 2:
							modelHash = joaat("prop_ld_planning_pin_03");
							break;
					}
				
					pitch = SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767) / 4000f;
					num2 = SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767) / 4000f;
					vector = { func_323(uParam0, &uParam0->f_1.f_34[i /*2*/]) };
					uParam0->f_428[i] = OBJECT::CREATE_OBJECT(modelHash, vector, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_428[i], pitch, 0f, uParam0->f_404 + num2, 2, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_428[i], true, false);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_428[i], true, false);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_428[i], false, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_428[i], false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_428[i], true);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[i]))
			{
				OBJECT::DELETE_OBJECT(&uParam0->f_428[i]);
			}
		}
	
		MISC::CLEAR_BIT(&(uParam0->f_449), 15);
	}

	if (IS_BIT_SET(uParam0->f_449, 14))
	{
		func_329(uParam0);
		func_34(uParam0);
		func_325(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_449), 14);
	}

	return;
}

void func_329(var uParam0) // Position - 0x179B2 (96690)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_330(int iParam0) // Position - 0x179D6 (96726)
{
	return Global_44199 == iParam0;
}

BOOL func_331(int iParam0) // Position - 0x179E4 (96740)
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114162.f_9089.f_330[iParam0 /*6*/];
}

BOOL func_332(int iParam0, int iParam1) // Position - 0x17A10 (96784)
{
	return IS_BIT_SET(Global_114162.f_1.f_120[iParam0], iParam1);
}

void func_333() // Position - 0x17A27 (96807)
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (func_102(character))
	{
		if (!func_245(0))
		{
			if (!func_331(69) && !func_331(70))
			{
				if (func_334(69) || func_334(70))
				{
					if (Global_114162.f_7265.f_227[70] != 1)
					{
						Global_114162.f_7265.f_227[70] = 1;
						Global_40739[70] = 0;
						Global_40938[70] = 1;
					}
				
					if (Global_114162.f_7265.f_227[71] != 2)
					{
						Global_114162.f_7265.f_227[71] = 2;
						Global_40739[71] = 0;
						Global_40938[71] = 1;
					}
				
					if (Global_114162.f_7265.f_227[73] != 1)
					{
						Global_114162.f_7265.f_227[73] = 1;
						Global_40739[73] = 0;
						Global_40938[73] = 1;
					}
				
					if (Global_114162.f_7265.f_227[72] != 0)
					{
						Global_114162.f_7265.f_227[72] = 0;
						Global_40739[72] = 0;
						Global_40938[72] = 1;
					}
				
					if (Global_114162.f_7265.f_227[74] != 0)
					{
						Global_114162.f_7265.f_227[74] = 0;
						Global_40739[74] = 0;
						Global_40938[74] = 1;
					}
				}
			}
		}
	}

	return;
}

int func_334(int iParam0) // Position - 0x17B5D (97117)
{
	int i;

	if (iParam0 == 94 || iParam0 == -1)
		return 0;

	if (Global_95673[iParam0 /*2*/])
		return 1;

	for (i = 0; i < Global_92440; i = i + 1)
	{
		if (Global_92440[i /*5*/] != -1)
			if (Global_79835.f_109[Global_92440[i /*5*/] /*4*/] == iParam0)
				return 1;
	}

	return 0;
}

BOOL func_335(int iParam0) // Position - 0x17BC5 (97221)
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114162.f_9089.f_99.f_58[iParam0];
}

void func_336(var uParam0, int iParam1) // Position - 0x17BF2 (97266)
{
	var unk;
	var unk4;

	*uParam0 = iParam1;
	unk = { Global_97634[uParam0->f_1.f_1 /*15*/].f_3 };
	unk4 = Global_97634[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { unk };
	uParam0->f_404 = unk4;
	uParam0->f_405 = { unk + { 0f, -uParam0->f_1.f_8 * SYSTEM::COS(360f - unk4), -uParam0->f_1.f_8 * SYSTEM::SIN(360f - unk4) } };
	uParam0->f_408 = { -0.85f, 0f, unk4 };
	MISC::SET_BIT(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	MISC::CLEAR_BIT(&(uParam0->f_449), 0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 1);
	MISC::CLEAR_BIT(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
	return;
}

void func_337(var uParam0, var uParam1) // Position - 0x17CBE (97470)
{
	func_347(uParam0, 1, "HEIST_AGENCY", "BOARD5", "AHFAUD", "CRWAUD", 3, 0, 6, 13, uParam1, 708.99567f, -965.25604f, 31.395329f, 5.5f, 6.25f, 2f);
	func_346(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 136, 411, 268, 415, 401, 418, 482, 413, 0, 0, 670, 350, 0, 85, 684, 106);
	func_345(uParam0, 20f, 22f, 28f);
	func_344(uParam0, "", "", "", "", "AHP12", "", "AHP13", "AHLONG");
	func_343(uParam0, 1, "CRW_GM", "");
	func_343(uParam0, 3, "CRW_HW", "");
	func_343(uParam0, 4, "CRW_NR", "");
	func_343(uParam0, 5, "CRW_DJ", "");
	func_343(uParam0, 6, "CRW_PH", "");
	func_343(uParam0, 7, "CRW_CF", "");
	func_343(uParam0, 8, "CRW_ET", "");
	func_343(uParam0, 9, "CRW_KD", "");
	func_343(uParam0, 10, "CRW_PM", "CRM_PM");
	func_343(uParam0, 12, "CRW_RL", "CRM_RL");
	func_343(uParam0, 13, "CRW_TM", "CRM_TM");
	func_342(uParam0, 24, "AHRIC1");
	func_342(uParam0, 26, "AHKAR1");
	func_342(uParam0, 18, "AHJH");
	func_342(uParam0, 19, "AHPAL");
	func_342(uParam0, 21, "AHBOTH");
	func_341(uParam0, 3, 0, 0, 0);
	func_341(uParam0, 2, 0, 0, 0);
	func_341(uParam0, 7, 0, 0, 0);
	func_341(uParam0, 8, 0, 0, 0);
	func_341(uParam0, 5, 2, 0, 0);
	func_341(uParam0, 6, 2, 0, 0);
	func_341(uParam0, 4, 2, 0, 0);
	func_341(uParam0, 9, 2, 0, 0);
	func_341(uParam0, 0, 3, 0, 0);
	func_341(uParam0, 1, 3, 0, 0);
	func_340(uParam0, 0, 1, "H_TD_JANI" /*Janitor ID*/);
	func_340(uParam0, 1, 3, "H_TD_BLUP" /*Architect blueprints*/);
	func_340(uParam0, 2, 4, "H_TD_PLAN" /*Decide approach*/);
	func_340(uParam0, 2, 5, "H_TD_CREW" /*Pick crew*/);
	func_340(uParam0, 6, 7, "H_TD_FIRE" /*Fire crew equip*/);
	func_340(uParam0, 6, 8, "H_TD_GETA" /*Getaway Vehicle*/);
	func_339(uParam0, 2, 70, 71);
	func_339(uParam0, 2, 44, 174);
	func_339(uParam0, 2, 45, 209);
	func_339(uParam0, 3, 178, 68);
	func_339(uParam0, 3, 321, 65);
	func_339(uParam0, 2, 538, 52);
	func_339(uParam0, 2, 470, 82);
	func_339(uParam0, 2, 455, 207);
	func_339(uParam0, 2, 566, 207);
	func_339(uParam0, 2, 673, 339);
	func_339(uParam0, 2, 679, 442);
	func_339(uParam0, 2, 689, 63);
	func_338(uParam0, 2, "AHP8", 55, 197, true);
	func_338(uParam0, 2, "AHP9", 252, 150, true);
	func_338(uParam0, 2, "AHP10", 70, 97, true);
	func_338(uParam0, 2, "AHP11", 504, 106, true);
	return;
}

void func_338(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x17FD5 (98261)
{
	var unk;

	if (uParam0->f_369 < 7)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam2, 8);
		uParam0->f_386[uParam0->f_369] = iParam1;
		uParam0->f_371[uParam0->f_369 /*2*/] = iParam3;
		uParam0->f_371[uParam0->f_369 /*2*/].f_1 = iParam4;
		uParam0->f_280[uParam0->f_369 + 4 /*2*/] = { unk };
	
		if (bParam5)
			MISC::SET_BIT(&(uParam0->f_370), uParam0->f_369);
	
		uParam0->f_369 = uParam0->f_369 + 1;
	}

	return;
}

void func_339(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x18050 (98384)
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33 = uParam0->f_33 + 1;
	}

	return;
}

void func_340(var uParam0, int iParam1, int iParam2, char* sParam3) // Position - 0x18094 (98452)
{
	var unk;

	if (uParam0->f_209 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam3, 32);
		uParam0->f_248[uParam0->f_209] = iParam1;
		uParam0->f_258[uParam0->f_209] = iParam2;
		TEXT_LABEL_COPY(&uParam0->f_211[uParam0->f_209 /*4*/], { unk }, 4);
		uParam0->f_209 = uParam0->f_209 + 1;
	}

	return;
}

void func_341(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x180E4 (98532)
{
	if (uParam0->f_117 < 22)
	{
		uParam0->f_118[uParam0->f_117] = iParam1;
		uParam0->f_186[uParam0->f_117] = iParam2;
		uParam0->f_141[uParam0->f_117 /*2*/] = iParam3;
		uParam0->f_141[uParam0->f_117 /*2*/].f_1 = iParam4;
		uParam0->f_117 = uParam0->f_117 + 1;
	}

	return;
}

void func_342(var uParam0, int iParam1, char* sParam2) // Position - 0x18134 (98612)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam2, 8);

	if (MISC::ARE_STRINGS_EQUAL(sParam2, ""))
		return;

	uParam0->f_304[iParam1 /*2*/] = { unk };
	return;
}

void func_343(var uParam0, int iParam1, char* sParam2, char* sParam3) // Position - 0x18160 (98656)
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam2, 8);
	TEXT_LABEL_ASSIGN_STRING(&unk3, sParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { unk };

	if (!MISC::ARE_STRINGS_EQUAL(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_304[14 /*2*/] = { unk3 };
				break;
		
			case 13:
				uParam0->f_304[16 /*2*/] = { unk3 };
				break;
		
			case 12:
				uParam0->f_304[15 /*2*/] = { unk3 };
				break;
		
			case 11:
				uParam0->f_304[17 /*2*/] = { unk3 };
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_344(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8) // Position - 0x181FA (98810)
{
	var unk;
	var unk5;
	var unk9;
	var unk13;
	var unk17;
	var unk19;
	var unk21;
	var unk23;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 16);
	TEXT_LABEL_ASSIGN_STRING(&unk5, sParam2, 16);
	TEXT_LABEL_ASSIGN_STRING(&unk9, sParam3, 16);
	TEXT_LABEL_ASSIGN_STRING(&unk13, sParam4, 16);
	TEXT_LABEL_ASSIGN_STRING(&unk17, sParam5, 8);
	TEXT_LABEL_ASSIGN_STRING(&unk19, sParam6, 8);
	TEXT_LABEL_ASSIGN_STRING(&unk21, sParam7, 8);
	TEXT_LABEL_ASSIGN_STRING(&unk23, sParam8, 8);
	uParam0->f_20[0 /*4*/] = { unk };
	uParam0->f_20[1 /*4*/] = { unk5 };
	uParam0->f_108[0 /*4*/] = { unk9 };
	uParam0->f_108[1 /*4*/] = { unk13 };
	uParam0->f_280[1 /*2*/] = { unk17 };
	uParam0->f_280[2 /*2*/] = { unk19 };
	uParam0->f_280[0 /*2*/] = { unk21 };
	uParam0->f_280[3 /*2*/] = { unk23 };
	return;
}

void func_345(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x1829E (98974)
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
	return;
}

void func_346(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25) // Position - 0x182B8 (99000)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_12.f_1 = iParam9;
	uParam0->f_97[0 /*2*/] = iParam10;
	uParam0->f_97[0 /*2*/].f_1 = iParam11;
	uParam0->f_97[1 /*2*/] = iParam12;
	uParam0->f_97[1 /*2*/].f_1 = iParam13;
	uParam0->f_97[2 /*2*/] = iParam14;
	uParam0->f_97[2 /*2*/].f_1 = iParam15;
	uParam0->f_97[3 /*2*/] = iParam16;
	uParam0->f_97[3 /*2*/].f_1 = iParam17;
	uParam0->f_97[4 /*2*/] = iParam18;
	uParam0->f_97[4 /*2*/].f_1 = iParam19;
	uParam0->f_16 = iParam20;
	uParam0->f_16.f_1 = iParam21;
	uParam0->f_18 = iParam22;
	uParam0->f_18.f_1 = iParam23;
	uParam0->f_14 = iParam24;
	uParam0->f_14.f_1 = iParam25;
	return;
}

void func_347(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, float fParam16) // Position - 0x18386 (99206)
{
	uParam0->f_1 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_268), sParam2, 16);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_272), sParam3, 16);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_276), sParam4, 8);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_278), sParam5, 8);
	uParam0->f_29 = iParam6;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_210 = iParam7;
	uParam0->f_96 = uParam10;
	uParam0->f_394 = { fParam11 };
	uParam0->f_397 = { fParam14 };
	return;
}

var func_348(var uParam0, var uParam1) // Position - 0x183F2 (99314)
{
	if (uParam0 > uParam1)
		return uParam0;

	return uParam1;
}

int func_349(int iParam0) // Position - 0x18408 (99336)
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114162.f_9089.f_99.f_219[num], offset))
		return 0;

	MISC::SET_BIT(&Global_114162.f_9089.f_99.f_219[num], offset);
	return 1;
}

void func_350() // Position - 0x1845F (99423)
{
	while (!func_152(&uLocal_93))
	{
		SYSTEM::WAIT(0);
	}

	func_115(6, 0);
	func_115(8, 0);
	func_115(7, 0);
	func_86(1, 3, 0);
	func_86(2, 3, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_91, false);

	if (iLocal_92 != -1)
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_92))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_92);

	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_IN_AREA(uLocal_93.f_1.f_394 - uLocal_93.f_1.f_397, uLocal_93.f_1.f_394 + uLocal_93.f_1.f_397, true, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	CUTSCENE::REMOVE_CUTSCENE();

	if (iLocal_40 != -1)
		func_163(&iLocal_40);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


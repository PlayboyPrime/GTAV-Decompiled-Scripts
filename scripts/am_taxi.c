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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
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
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	eBlipSprite ebsLocal_65 = BLIP_HIGHER;
	eBlipSprite ebsLocal_66 = BLIP_HIGHER;
	var uLocal_67 = 1;
	var uLocal_68 = 0;
	var uLocal_69 = 10;
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
	var uLocal_80 = 1;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = -1;
	var uLocal_89 = -1;
	var uLocal_90 = -1;
	var uLocal_91 = -1;
	var uLocal_92 = 0;
	var uLocal_93 = 9;
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
	var uLocal_114 = -1;
	var uLocal_115 = -1;
	var uLocal_116 = -1;
	var uLocal_117 = -1;
	var uLocal_118 = 0;
	var uLocal_119 = 9;
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
	var uLocal_140 = -1;
	var uLocal_141 = -1;
	var uLocal_142 = -1;
	var uLocal_143 = -1;
	var uLocal_144 = 0;
	var uLocal_145 = 9;
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
	var uLocal_166 = -1;
	var uLocal_167 = -1;
	var uLocal_168 = -1;
	var uLocal_169 = -1;
	var uLocal_170 = 0;
	var uLocal_171 = 9;
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
	var uLocal_192 = -1;
	var uLocal_193 = -1;
	var uLocal_194 = -1;
	var uLocal_195 = -1;
	var uLocal_196 = 0;
	var uLocal_197 = 9;
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
	var uLocal_218 = -1;
	var uLocal_219 = -1;
	var uLocal_220 = -1;
	var uLocal_221 = -1;
	var uLocal_222 = 0;
	var uLocal_223 = 9;
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
	var uLocal_244 = -1;
	var uLocal_245 = -1;
	var uLocal_246 = -1;
	var uLocal_247 = -1;
	var uLocal_248 = 0;
	var uLocal_249 = 9;
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
	var uLocal_270 = -1;
	var uLocal_271 = -1;
	var uLocal_272 = -1;
	var uLocal_273 = -1;
	var uLocal_274 = 0;
	var uLocal_275 = 9;
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
	var uLocal_302 = 8;
	var uLocal_303 = 0;
	var uLocal_304 = -1;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = -1;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = -1;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = -1;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = -1;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = -1;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = -1;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = -1;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 32;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = 0;
	var uLocal_340 = -1;
	var uLocal_341 = -1;
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
	var uLocal_359 = -1;
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
	var uLocal_384 = -1;
	var uLocal_385 = 8;
	var uLocal_386 = 1;
	var uLocal_387 = 0;
	var uLocal_388 = 1;
	var uLocal_389 = 0;
	var uLocal_390 = 1;
	var uLocal_391 = 0;
	var uLocal_392 = 1;
	var uLocal_393 = 0;
	var uLocal_394 = 1;
	var uLocal_395 = 0;
	var uLocal_396 = 1;
	var uLocal_397 = 0;
	var uLocal_398 = 1;
	var uLocal_399 = 0;
	var uLocal_400 = 1;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = -1;
	var uLocal_405 = 0;
	var uLocal_406 = -1;
	var uLocal_407 = -1;
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
	var uLocal_425 = -1;
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
	var uLocal_450 = -1;
	var uLocal_451 = 8;
	var uLocal_452 = 1;
	var uLocal_453 = 0;
	var uLocal_454 = 1;
	var uLocal_455 = 0;
	var uLocal_456 = 1;
	var uLocal_457 = 0;
	var uLocal_458 = 1;
	var uLocal_459 = 0;
	var uLocal_460 = 1;
	var uLocal_461 = 0;
	var uLocal_462 = 1;
	var uLocal_463 = 0;
	var uLocal_464 = 1;
	var uLocal_465 = 0;
	var uLocal_466 = 1;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = -1;
	var uLocal_471 = 0;
	var uLocal_472 = -1;
	var uLocal_473 = -1;
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
	var uLocal_491 = -1;
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
	var uLocal_516 = -1;
	var uLocal_517 = 8;
	var uLocal_518 = 1;
	var uLocal_519 = 0;
	var uLocal_520 = 1;
	var uLocal_521 = 0;
	var uLocal_522 = 1;
	var uLocal_523 = 0;
	var uLocal_524 = 1;
	var uLocal_525 = 0;
	var uLocal_526 = 1;
	var uLocal_527 = 0;
	var uLocal_528 = 1;
	var uLocal_529 = 0;
	var uLocal_530 = 1;
	var uLocal_531 = 0;
	var uLocal_532 = 1;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = -1;
	var uLocal_537 = 0;
	var uLocal_538 = -1;
	var uLocal_539 = -1;
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
	var uLocal_557 = -1;
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
	var uLocal_582 = -1;
	var uLocal_583 = 8;
	var uLocal_584 = 1;
	var uLocal_585 = 0;
	var uLocal_586 = 1;
	var uLocal_587 = 0;
	var uLocal_588 = 1;
	var uLocal_589 = 0;
	var uLocal_590 = 1;
	var uLocal_591 = 0;
	var uLocal_592 = 1;
	var uLocal_593 = 0;
	var uLocal_594 = 1;
	var uLocal_595 = 0;
	var uLocal_596 = 1;
	var uLocal_597 = 0;
	var uLocal_598 = 1;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = -1;
	var uLocal_603 = 0;
	var uLocal_604 = -1;
	var uLocal_605 = -1;
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
	var uLocal_623 = -1;
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
	var uLocal_648 = -1;
	var uLocal_649 = 8;
	var uLocal_650 = 1;
	var uLocal_651 = 0;
	var uLocal_652 = 1;
	var uLocal_653 = 0;
	var uLocal_654 = 1;
	var uLocal_655 = 0;
	var uLocal_656 = 1;
	var uLocal_657 = 0;
	var uLocal_658 = 1;
	var uLocal_659 = 0;
	var uLocal_660 = 1;
	var uLocal_661 = 0;
	var uLocal_662 = 1;
	var uLocal_663 = 0;
	var uLocal_664 = 1;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = -1;
	var uLocal_669 = 0;
	var uLocal_670 = -1;
	var uLocal_671 = -1;
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
	var uLocal_689 = -1;
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
	var uLocal_714 = -1;
	var uLocal_715 = 8;
	var uLocal_716 = 1;
	var uLocal_717 = 0;
	var uLocal_718 = 1;
	var uLocal_719 = 0;
	var uLocal_720 = 1;
	var uLocal_721 = 0;
	var uLocal_722 = 1;
	var uLocal_723 = 0;
	var uLocal_724 = 1;
	var uLocal_725 = 0;
	var uLocal_726 = 1;
	var uLocal_727 = 0;
	var uLocal_728 = 1;
	var uLocal_729 = 0;
	var uLocal_730 = 1;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = -1;
	var uLocal_735 = 0;
	var uLocal_736 = -1;
	var uLocal_737 = -1;
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
	var uLocal_755 = -1;
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
	var uLocal_780 = -1;
	var uLocal_781 = 8;
	var uLocal_782 = 1;
	var uLocal_783 = 0;
	var uLocal_784 = 1;
	var uLocal_785 = 0;
	var uLocal_786 = 1;
	var uLocal_787 = 0;
	var uLocal_788 = 1;
	var uLocal_789 = 0;
	var uLocal_790 = 1;
	var uLocal_791 = 0;
	var uLocal_792 = 1;
	var uLocal_793 = 0;
	var uLocal_794 = 1;
	var uLocal_795 = 0;
	var uLocal_796 = 1;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = -1;
	var uLocal_801 = 0;
	var uLocal_802 = -1;
	var uLocal_803 = -1;
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
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = -1;
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
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = -1;
	var uLocal_847 = 8;
	var uLocal_848 = 1;
	var uLocal_849 = 0;
	var uLocal_850 = 1;
	var uLocal_851 = 0;
	var uLocal_852 = 1;
	var uLocal_853 = 0;
	var uLocal_854 = 1;
	var uLocal_855 = 0;
	var uLocal_856 = 1;
	var uLocal_857 = 0;
	var uLocal_858 = 1;
	var uLocal_859 = 0;
	var uLocal_860 = 1;
	var uLocal_861 = 0;
	var uLocal_862 = 1;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = -1;
	var uLocal_867 = 0;
	var uLocal_868 = -1;
	var uLocal_869 = -1;
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
	var uLocal_887 = -1;
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
	var uLocal_912 = -1;
	var uLocal_913 = 8;
	var uLocal_914 = 1;
	var uLocal_915 = 0;
	var uLocal_916 = 1;
	var uLocal_917 = 0;
	var uLocal_918 = 1;
	var uLocal_919 = 0;
	var uLocal_920 = 1;
	var uLocal_921 = 0;
	var uLocal_922 = 1;
	var uLocal_923 = 0;
	var uLocal_924 = 1;
	var uLocal_925 = 0;
	var uLocal_926 = 1;
	var uLocal_927 = 0;
	var uLocal_928 = 1;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = -1;
	var uLocal_933 = 0;
	var uLocal_934 = -1;
	var uLocal_935 = -1;
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
	var uLocal_953 = -1;
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
	var uLocal_978 = -1;
	var uLocal_979 = 8;
	var uLocal_980 = 1;
	var uLocal_981 = 0;
	var uLocal_982 = 1;
	var uLocal_983 = 0;
	var uLocal_984 = 1;
	var uLocal_985 = 0;
	var uLocal_986 = 1;
	var uLocal_987 = 0;
	var uLocal_988 = 1;
	var uLocal_989 = 0;
	var uLocal_990 = 1;
	var uLocal_991 = 0;
	var uLocal_992 = 1;
	var uLocal_993 = 0;
	var uLocal_994 = 1;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = -1;
	var uLocal_999 = 0;
	var uLocal_1000 = -1;
	var uLocal_1001 = -1;
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
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = -1;
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
	var uLocal_1044 = -1;
	var uLocal_1045 = 8;
	var uLocal_1046 = 1;
	var uLocal_1047 = 0;
	var uLocal_1048 = 1;
	var uLocal_1049 = 0;
	var uLocal_1050 = 1;
	var uLocal_1051 = 0;
	var uLocal_1052 = 1;
	var uLocal_1053 = 0;
	var uLocal_1054 = 1;
	var uLocal_1055 = 0;
	var uLocal_1056 = 1;
	var uLocal_1057 = 0;
	var uLocal_1058 = 1;
	var uLocal_1059 = 0;
	var uLocal_1060 = 1;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = -1;
	var uLocal_1065 = 0;
	var uLocal_1066 = -1;
	var uLocal_1067 = -1;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
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
	var uLocal_1085 = -1;
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
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = -1;
	var uLocal_1111 = 8;
	var uLocal_1112 = 1;
	var uLocal_1113 = 0;
	var uLocal_1114 = 1;
	var uLocal_1115 = 0;
	var uLocal_1116 = 1;
	var uLocal_1117 = 0;
	var uLocal_1118 = 1;
	var uLocal_1119 = 0;
	var uLocal_1120 = 1;
	var uLocal_1121 = 0;
	var uLocal_1122 = 1;
	var uLocal_1123 = 0;
	var uLocal_1124 = 1;
	var uLocal_1125 = 0;
	var uLocal_1126 = 1;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = -1;
	var uLocal_1131 = 0;
	var uLocal_1132 = -1;
	var uLocal_1133 = -1;
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
	var uLocal_1151 = -1;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
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
	var uLocal_1176 = -1;
	var uLocal_1177 = 8;
	var uLocal_1178 = 1;
	var uLocal_1179 = 0;
	var uLocal_1180 = 1;
	var uLocal_1181 = 0;
	var uLocal_1182 = 1;
	var uLocal_1183 = 0;
	var uLocal_1184 = 1;
	var uLocal_1185 = 0;
	var uLocal_1186 = 1;
	var uLocal_1187 = 0;
	var uLocal_1188 = 1;
	var uLocal_1189 = 0;
	var uLocal_1190 = 1;
	var uLocal_1191 = 0;
	var uLocal_1192 = 1;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = -1;
	var uLocal_1197 = 0;
	var uLocal_1198 = -1;
	var uLocal_1199 = -1;
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
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = -1;
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
	var uLocal_1243 = 8;
	var uLocal_1244 = 1;
	var uLocal_1245 = 0;
	var uLocal_1246 = 1;
	var uLocal_1247 = 0;
	var uLocal_1248 = 1;
	var uLocal_1249 = 0;
	var uLocal_1250 = 1;
	var uLocal_1251 = 0;
	var uLocal_1252 = 1;
	var uLocal_1253 = 0;
	var uLocal_1254 = 1;
	var uLocal_1255 = 0;
	var uLocal_1256 = 1;
	var uLocal_1257 = 0;
	var uLocal_1258 = 1;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = -1;
	var uLocal_1263 = 0;
	var uLocal_1264 = -1;
	var uLocal_1265 = -1;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
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
	var uLocal_1283 = -1;
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
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = -1;
	var uLocal_1309 = 8;
	var uLocal_1310 = 1;
	var uLocal_1311 = 0;
	var uLocal_1312 = 1;
	var uLocal_1313 = 0;
	var uLocal_1314 = 1;
	var uLocal_1315 = 0;
	var uLocal_1316 = 1;
	var uLocal_1317 = 0;
	var uLocal_1318 = 1;
	var uLocal_1319 = 0;
	var uLocal_1320 = 1;
	var uLocal_1321 = 0;
	var uLocal_1322 = 1;
	var uLocal_1323 = 0;
	var uLocal_1324 = 1;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = -1;
	var uLocal_1329 = 0;
	var uLocal_1330 = -1;
	var uLocal_1331 = -1;
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
	var uLocal_1349 = -1;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
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
	var uLocal_1374 = -1;
	var uLocal_1375 = 8;
	var uLocal_1376 = 1;
	var uLocal_1377 = 0;
	var uLocal_1378 = 1;
	var uLocal_1379 = 0;
	var uLocal_1380 = 1;
	var uLocal_1381 = 0;
	var uLocal_1382 = 1;
	var uLocal_1383 = 0;
	var uLocal_1384 = 1;
	var uLocal_1385 = 0;
	var uLocal_1386 = 1;
	var uLocal_1387 = 0;
	var uLocal_1388 = 1;
	var uLocal_1389 = 0;
	var uLocal_1390 = 1;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = -1;
	var uLocal_1395 = 0;
	var uLocal_1396 = -1;
	var uLocal_1397 = -1;
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
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = -1;
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
	var uLocal_1440 = -1;
	var uLocal_1441 = 8;
	var uLocal_1442 = 1;
	var uLocal_1443 = 0;
	var uLocal_1444 = 1;
	var uLocal_1445 = 0;
	var uLocal_1446 = 1;
	var uLocal_1447 = 0;
	var uLocal_1448 = 1;
	var uLocal_1449 = 0;
	var uLocal_1450 = 1;
	var uLocal_1451 = 0;
	var uLocal_1452 = 1;
	var uLocal_1453 = 0;
	var uLocal_1454 = 1;
	var uLocal_1455 = 0;
	var uLocal_1456 = 1;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = -1;
	var uLocal_1461 = 0;
	var uLocal_1462 = -1;
	var uLocal_1463 = -1;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
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
	var uLocal_1481 = -1;
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
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = -1;
	var uLocal_1507 = 8;
	var uLocal_1508 = 1;
	var uLocal_1509 = 0;
	var uLocal_1510 = 1;
	var uLocal_1511 = 0;
	var uLocal_1512 = 1;
	var uLocal_1513 = 0;
	var uLocal_1514 = 1;
	var uLocal_1515 = 0;
	var uLocal_1516 = 1;
	var uLocal_1517 = 0;
	var uLocal_1518 = 1;
	var uLocal_1519 = 0;
	var uLocal_1520 = 1;
	var uLocal_1521 = 0;
	var uLocal_1522 = 1;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = -1;
	var uLocal_1527 = 0;
	var uLocal_1528 = -1;
	var uLocal_1529 = -1;
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
	var uLocal_1547 = -1;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
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
	var uLocal_1572 = -1;
	var uLocal_1573 = 8;
	var uLocal_1574 = 1;
	var uLocal_1575 = 0;
	var uLocal_1576 = 1;
	var uLocal_1577 = 0;
	var uLocal_1578 = 1;
	var uLocal_1579 = 0;
	var uLocal_1580 = 1;
	var uLocal_1581 = 0;
	var uLocal_1582 = 1;
	var uLocal_1583 = 0;
	var uLocal_1584 = 1;
	var uLocal_1585 = 0;
	var uLocal_1586 = 1;
	var uLocal_1587 = 0;
	var uLocal_1588 = 1;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = -1;
	var uLocal_1593 = 0;
	var uLocal_1594 = -1;
	var uLocal_1595 = -1;
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
	var uLocal_1613 = -1;
	var uLocal_1614 = 0;
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
	var uLocal_1638 = -1;
	var uLocal_1639 = 8;
	var uLocal_1640 = 1;
	var uLocal_1641 = 0;
	var uLocal_1642 = 1;
	var uLocal_1643 = 0;
	var uLocal_1644 = 1;
	var uLocal_1645 = 0;
	var uLocal_1646 = 1;
	var uLocal_1647 = 0;
	var uLocal_1648 = 1;
	var uLocal_1649 = 0;
	var uLocal_1650 = 1;
	var uLocal_1651 = 0;
	var uLocal_1652 = 1;
	var uLocal_1653 = 0;
	var uLocal_1654 = 1;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = -1;
	var uLocal_1659 = 0;
	var uLocal_1660 = -1;
	var uLocal_1661 = -1;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = -1;
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
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = -1;
	var uLocal_1705 = 8;
	var uLocal_1706 = 1;
	var uLocal_1707 = 0;
	var uLocal_1708 = 1;
	var uLocal_1709 = 0;
	var uLocal_1710 = 1;
	var uLocal_1711 = 0;
	var uLocal_1712 = 1;
	var uLocal_1713 = 0;
	var uLocal_1714 = 1;
	var uLocal_1715 = 0;
	var uLocal_1716 = 1;
	var uLocal_1717 = 0;
	var uLocal_1718 = 1;
	var uLocal_1719 = 0;
	var uLocal_1720 = 1;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = -1;
	var uLocal_1725 = 0;
	var uLocal_1726 = -1;
	var uLocal_1727 = -1;
	var uLocal_1728 = 0;
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
	var uLocal_1745 = -1;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
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
	var uLocal_1770 = -1;
	var uLocal_1771 = 8;
	var uLocal_1772 = 1;
	var uLocal_1773 = 0;
	var uLocal_1774 = 1;
	var uLocal_1775 = 0;
	var uLocal_1776 = 1;
	var uLocal_1777 = 0;
	var uLocal_1778 = 1;
	var uLocal_1779 = 0;
	var uLocal_1780 = 1;
	var uLocal_1781 = 0;
	var uLocal_1782 = 1;
	var uLocal_1783 = 0;
	var uLocal_1784 = 1;
	var uLocal_1785 = 0;
	var uLocal_1786 = 1;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = -1;
	var uLocal_1791 = 0;
	var uLocal_1792 = -1;
	var uLocal_1793 = -1;
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
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = -1;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = -1;
	var uLocal_1837 = 8;
	var uLocal_1838 = 1;
	var uLocal_1839 = 0;
	var uLocal_1840 = 1;
	var uLocal_1841 = 0;
	var uLocal_1842 = 1;
	var uLocal_1843 = 0;
	var uLocal_1844 = 1;
	var uLocal_1845 = 0;
	var uLocal_1846 = 1;
	var uLocal_1847 = 0;
	var uLocal_1848 = 1;
	var uLocal_1849 = 0;
	var uLocal_1850 = 1;
	var uLocal_1851 = 0;
	var uLocal_1852 = 1;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = -1;
	var uLocal_1857 = 0;
	var uLocal_1858 = -1;
	var uLocal_1859 = -1;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = -1;
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
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = -1;
	var uLocal_1903 = 8;
	var uLocal_1904 = 1;
	var uLocal_1905 = 0;
	var uLocal_1906 = 1;
	var uLocal_1907 = 0;
	var uLocal_1908 = 1;
	var uLocal_1909 = 0;
	var uLocal_1910 = 1;
	var uLocal_1911 = 0;
	var uLocal_1912 = 1;
	var uLocal_1913 = 0;
	var uLocal_1914 = 1;
	var uLocal_1915 = 0;
	var uLocal_1916 = 1;
	var uLocal_1917 = 0;
	var uLocal_1918 = 1;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = -1;
	var uLocal_1923 = 0;
	var uLocal_1924 = -1;
	var uLocal_1925 = -1;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = -1;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = -1;
	var uLocal_1969 = 8;
	var uLocal_1970 = 1;
	var uLocal_1971 = 0;
	var uLocal_1972 = 1;
	var uLocal_1973 = 0;
	var uLocal_1974 = 1;
	var uLocal_1975 = 0;
	var uLocal_1976 = 1;
	var uLocal_1977 = 0;
	var uLocal_1978 = 1;
	var uLocal_1979 = 0;
	var uLocal_1980 = 1;
	var uLocal_1981 = 0;
	var uLocal_1982 = 1;
	var uLocal_1983 = 0;
	var uLocal_1984 = 1;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = -1;
	var uLocal_1989 = 0;
	var uLocal_1990 = -1;
	var uLocal_1991 = -1;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = -1;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = -1;
	var uLocal_2035 = 8;
	var uLocal_2036 = 1;
	var uLocal_2037 = 0;
	var uLocal_2038 = 1;
	var uLocal_2039 = 0;
	var uLocal_2040 = 1;
	var uLocal_2041 = 0;
	var uLocal_2042 = 1;
	var uLocal_2043 = 0;
	var uLocal_2044 = 1;
	var uLocal_2045 = 0;
	var uLocal_2046 = 1;
	var uLocal_2047 = 0;
	var uLocal_2048 = 1;
	var uLocal_2049 = 0;
	var uLocal_2050 = 1;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = -1;
	var uLocal_2055 = 0;
	var uLocal_2056 = -1;
	var uLocal_2057 = -1;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = -1;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = -1;
	var uLocal_2101 = 8;
	var uLocal_2102 = 1;
	var uLocal_2103 = 0;
	var uLocal_2104 = 1;
	var uLocal_2105 = 0;
	var uLocal_2106 = 1;
	var uLocal_2107 = 0;
	var uLocal_2108 = 1;
	var uLocal_2109 = 0;
	var uLocal_2110 = 1;
	var uLocal_2111 = 0;
	var uLocal_2112 = 1;
	var uLocal_2113 = 0;
	var uLocal_2114 = 1;
	var uLocal_2115 = 0;
	var uLocal_2116 = 1;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = -1;
	var uLocal_2121 = 0;
	var uLocal_2122 = -1;
	var uLocal_2123 = -1;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = -1;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = -1;
	var uLocal_2167 = 8;
	var uLocal_2168 = 1;
	var uLocal_2169 = 0;
	var uLocal_2170 = 1;
	var uLocal_2171 = 0;
	var uLocal_2172 = 1;
	var uLocal_2173 = 0;
	var uLocal_2174 = 1;
	var uLocal_2175 = 0;
	var uLocal_2176 = 1;
	var uLocal_2177 = 0;
	var uLocal_2178 = 1;
	var uLocal_2179 = 0;
	var uLocal_2180 = 1;
	var uLocal_2181 = 0;
	var uLocal_2182 = 1;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = -1;
	var uLocal_2187 = 0;
	var uLocal_2188 = -1;
	var uLocal_2189 = -1;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = -1;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = -1;
	var uLocal_2233 = 8;
	var uLocal_2234 = 1;
	var uLocal_2235 = 0;
	var uLocal_2236 = 1;
	var uLocal_2237 = 0;
	var uLocal_2238 = 1;
	var uLocal_2239 = 0;
	var uLocal_2240 = 1;
	var uLocal_2241 = 0;
	var uLocal_2242 = 1;
	var uLocal_2243 = 0;
	var uLocal_2244 = 1;
	var uLocal_2245 = 0;
	var uLocal_2246 = 1;
	var uLocal_2247 = 0;
	var uLocal_2248 = 1;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = -1;
	var uLocal_2253 = 0;
	var uLocal_2254 = -1;
	var uLocal_2255 = -1;
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
	var uLocal_2273 = -1;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
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
	var uLocal_2298 = -1;
	var uLocal_2299 = 8;
	var uLocal_2300 = 1;
	var uLocal_2301 = 0;
	var uLocal_2302 = 1;
	var uLocal_2303 = 0;
	var uLocal_2304 = 1;
	var uLocal_2305 = 0;
	var uLocal_2306 = 1;
	var uLocal_2307 = 0;
	var uLocal_2308 = 1;
	var uLocal_2309 = 0;
	var uLocal_2310 = 1;
	var uLocal_2311 = 0;
	var uLocal_2312 = 1;
	var uLocal_2313 = 0;
	var uLocal_2314 = 1;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = -1;
	var uLocal_2319 = 0;
	var uLocal_2320 = -1;
	var uLocal_2321 = -1;
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
	var uLocal_2339 = -1;
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
	var uLocal_2364 = -1;
	var uLocal_2365 = 8;
	var uLocal_2366 = 1;
	var uLocal_2367 = 0;
	var uLocal_2368 = 1;
	var uLocal_2369 = 0;
	var uLocal_2370 = 1;
	var uLocal_2371 = 0;
	var uLocal_2372 = 1;
	var uLocal_2373 = 0;
	var uLocal_2374 = 1;
	var uLocal_2375 = 0;
	var uLocal_2376 = 1;
	var uLocal_2377 = 0;
	var uLocal_2378 = 1;
	var uLocal_2379 = 0;
	var uLocal_2380 = 1;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = -1;
	var uLocal_2385 = 0;
	var uLocal_2386 = -1;
	var uLocal_2387 = -1;
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
	var uLocal_2405 = -1;
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
	var uLocal_2430 = -1;
	var uLocal_2431 = 8;
	var uLocal_2432 = 1;
	var uLocal_2433 = 0;
	var uLocal_2434 = 1;
	var uLocal_2435 = 0;
	var uLocal_2436 = 1;
	var uLocal_2437 = 0;
	var uLocal_2438 = 1;
	var uLocal_2439 = 0;
	var uLocal_2440 = 1;
	var uLocal_2441 = 0;
	var uLocal_2442 = 1;
	var uLocal_2443 = 0;
	var uLocal_2444 = 1;
	var uLocal_2445 = 0;
	var uLocal_2446 = 1;
	var uLocal_2447 = 0;
	int iLocal_2448 = 0;
	int iLocal_2449 = 0;
	var uLocal_2450 = 8;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 8;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 8;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	int iLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	float fLocal_2482 = 0f;
	int iLocal_2483 = 0;
	int iLocal_2484 = 0;
	int iLocal_2485 = 0;
	int iLocal_2486 = 0;
	BOOL bLocal_2487 = 0;
	Object obLocal_2488 = 0;
	Hash hLocal_2489 = 0;
	int iLocal_2490 = 0;
	float fLocal_2491 = 0f;
	float fLocal_2492 = 0f;
	float fLocal_2493 = 0f;
	float fLocal_2494 = 0f;
	float fLocal_2495 = 0f;
	int iLocal_2496 = 0;
	int iLocal_2497 = 0;
	var uLocal_2498 = 50;
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
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	BOOL bLocal_2649 = 0;
	BOOL bLocal_2650 = 0;
	BOOL bLocal_2651 = 0;
	BOOL bLocal_2652 = 0;
	BOOL bLocal_2653 = 0;
	BOOL bLocal_2654 = 0;
	int iLocal_2655 = 0;
	int iLocal_2656 = 0;
	int iLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	float fLocal_2660 = 0f;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	int iLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 12;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 1065353216;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	int iLocal_3374 = 0;
	BOOL bLocal_3375 = 0;
	Cam caLocal_3376 = 0;
	int iLocal_3377 = 0;
	const char* sLocal_3378 = 0;
	int iLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	float fLocal_3389 = 0f;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	int iLocal_3393 = 0;
	int iLocal_3394 = 0;
	float fLocal_3395 = 0f;
	int iLocal_3396 = 0;
	var uLocal_3397 = 16;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	int iLocal_3562 = 0;
	int iLocal_3563 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = -1;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = -1;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = -1;
	var uScriptParam_20 = -1;
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
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = (0.05f + 0.275f) - 0.01f;
	ebsLocal_65 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	ebsLocal_66 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	hLocal_2489 = joaat("prop_taxi_meter_2");
	fLocal_2491 = 1f;
	fLocal_2492 = 0.4f * fLocal_2491;
	fLocal_2493 = 0.6f * fLocal_2491;
	fLocal_2494 = 0.201f;
	fLocal_2495 = 0.351f;
	iLocal_2496 = 1076369579;
	iLocal_2497 = 1076631591;
	bLocal_2654 = true;
	iLocal_2656 = iLocal_2655;
	fLocal_2660 = SYSTEM::TO_FLOAT(iLocal_2655);
	iLocal_3377 = 1;
	sLocal_3378 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X, true);
	iLocal_3379 = LOCALIZATION::GET_CURRENT_LANGUAGE();
	uLocal_3380 = { -0.01f, 0.6f, 0.24f };
	uLocal_3383 = { -5f, 0f, 0f };
	uLocal_3386 = { 0f, -0.25f, 0.55f };
	fLocal_3389 = 50f;
	uLocal_3390 = { -0.3f, 1f, 0.35f };
	fLocal_3395 = 99999f;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_612(uScriptParam_0))
			func_610();
	
		func_608();
	}

	while (true)
	{
		func_607();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
			func_610();
	
		iLocal_2448 = NETWORK::PARTICIPANT_ID_TO_INT();
	
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			if (func_599())
				if (NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() != NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID()))
					func_610();
			else
				func_610();
		else if (NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() != -1)
			func_610();
	
		if (func_598())
			func_610();
	
		switch (func_597(iLocal_2448))
		{
			case 0:
				uLocal_335[iLocal_2448 /*66*/] = 1;
			
				if (func_596() == 4)
					uLocal_335[iLocal_2448 /*66*/] = 3;
				break;
		
			case 1:
				if (func_596() == 1)
				{
					func_392();
					func_61();
				}
				else if (func_596() == 4)
				{
					uLocal_335[iLocal_2448 /*66*/] = 3;
				}
				break;
		
			case 3:
				func_60(&(iLocal_83.f_217));
			
				if (func_59(&(iLocal_83.f_217)))
					uLocal_335[iLocal_2448 /*66*/] = 4;
				break;
		
			case 2:
				uLocal_335[iLocal_2448 /*66*/] = 4;
				[[fallthrough]];
		
			case 4:
				func_610();
				break;
		}
	
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_596())
			{
				case 0:
					iLocal_83 = 1;
					break;
			
				case 1:
					func_31();
					func_3();
				
					if (func_1())
						iLocal_83 = 4;
					break;
			
				case 4:
					break;
			}
		}
	}

	return;
}

BOOL func_1() // Position - 0x2A7 (679)
{
	if (func_2())
		return true;

	return false;
}

BOOL func_2() // Position - 0x2BB (699)
{
	return false;
}

void func_3() // Position - 0x2C4 (708)
{
	func_4();

	switch (iLocal_83.f_215)
	{
		case 0:
			iLocal_83.f_215 = 1;
			break;
	
		case 1:
			break;
	
		case 2:
		case 3:
		case 4:
			break;
	}

	return;
}

void func_4() // Position - 0x305 (773)
{
	int num;
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (func_28(i))
			func_27(i, 9);
	
		switch (func_26(i))
		{
			case 0:
				if (func_25(i))
				{
					num = func_24(i);
				
					if (func_23(num))
					{
						func_22(i, 8);
						func_20(i, func_21(num));
						func_27(i, 1);
					}
				}
				break;
		
			case 1:
				if (func_17(i, 0))
					func_27(i, 2);
				break;
		
			case 2:
				if (func_13(i, 3))
					func_27(i, 3);
				break;
		
			case 3:
				if (func_17(i, 1))
					func_27(i, 4);
				break;
		
			case 4:
				if (func_17(i, 3))
					func_27(i, 5);
				break;
		
			case 5:
				if (func_11(&(iLocal_83.f_219[i /*4*/].f_2), 8000, false))
					func_27(i, 6);
				break;
		
			case 6:
				if (func_13(i, 6))
					func_27(i, 7);
				break;
		
			case 7:
				if (func_17(i, 4))
					func_27(i, 8);
				break;
		
			case 8:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_83.f_2[i /*26*/]), false, false) == 0)
				{
					func_22(i, 9);
					func_27(i, 9);
				}
				break;
		
			case 9:
				if (!func_8(i))
					func_5(i);
				break;
		}
	}

	return;
}

void func_5(int iParam0) // Position - 0x484 (1156)
{
	if (func_26(iParam0) == 0)
		return;

	func_7(iParam0);
	_STOPWATCH_DESTROY(&(iLocal_83.f_219[iParam0 /*4*/].f_2));
	func_27(iParam0, 0);
	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x4B4 (1204)
{
	uParam0->f_1 = 0;
	return;
}

void func_7(int iParam0) // Position - 0x4C1 (1217)
{
	iLocal_83.f_219[iParam0 /*4*/].f_1 = -1;
	return;
}

BOOL func_8(int iParam0) // Position - 0x4D4 (1236)
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(i)) && func_9(i, iParam0))
			return true;
	}

	return false;
}

BOOL func_9(int iParam0, int iParam1) // Position - 0x50E (1294)
{
	return func_10(&uLocal_335[iParam0 /*66*/].f_47.f_2[iParam1 /*2*/]);
}

BOOL func_10(var uParam0) // Position - 0x529 (1321)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0)
			return 1;
	}

	return 0;
}

BOOL func_11(var uParam0, int iParam1, BOOL bParam2) // Position - 0x554 (1364)
{
	if (iParam1 == -1)
		return true;

	func_12(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

void func_12(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5B2 (1458)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}

	return;
}

BOOL func_13(int iParam0, int iParam1) // Position - 0x5F7 (1527)
{
	BOOL num;
	int i;
	Player player;
	Player playerIndex;

	num = 1;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PARTICIPANTINDEX(i);
	
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(player))
		{
			if (func_16(i, iParam0))
			{
				if (func_15(i) != iParam1)
				{
					num = 0;
					break;
				}
			}
			else
			{
				playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(player);
			
				if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(playerIndex), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), true) && func_14(playerIndex, false, false))
				{
					num = 0;
					break;
				}
			}
		}
	}

	return num;
}

BOOL func_14(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x67C (1660)
{
	if (Global_2657994[plParam0 /*467*/].f_235 == 99)
		if (bParam2 && Global_2657994[plParam0 /*467*/].f_238 == 0 || bParam2 == false)
			return false;

	if (bParam1)
		if (Global_2657994[plParam0 /*467*/].f_235 == 13)
			return false;

	return true;
}

int func_15(int iParam0) // Position - 0x6D3 (1747)
{
	return uLocal_335[iParam0 /*66*/].f_47;
}

BOOL func_16(int iParam0, int iParam1) // Position - 0x6E4 (1764)
{
	return uLocal_335[iParam0 /*66*/].f_4 == iParam1;
}

BOOL func_17(int iParam0, int iParam1) // Position - 0x6F8 (1784)
{
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(i)) && func_18(i, iParam0, iParam1))
			return true;
	}

	return false;
}

BOOL func_18(int iParam0, int iParam1, int iParam2) // Position - 0x734 (1844)
{
	return func_19(&uLocal_335[iParam0 /*66*/].f_47.f_2[iParam1 /*2*/], iParam2);
}

BOOL func_19(var uParam0, int iParam1) // Position - 0x751 (1873)
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

void func_20(int iParam0, int iParam1) // Position - 0x774 (1908)
{
	iLocal_83.f_219[iParam0 /*4*/].f_1 = iParam1;
	return;
}

int func_21(int iParam0) // Position - 0x788 (1928)
{
	return uLocal_335[iParam0 /*66*/].f_47.f_1;
}

void func_22(int iParam0, int iParam1) // Position - 0x79B (1947)
{
	iLocal_83.f_2[iParam0 /*26*/].f_7 = iParam1;
	return;
}

BOOL func_23(int iParam0) // Position - 0x7AF (1967)
{
	if (func_21(iParam0) != -1)
		return true;

	return false;
}

int func_24(int iParam0) // Position - 0x7C6 (1990)
{
	return iLocal_83.f_2[iParam0 /*26*/].f_3;
}

BOOL func_25(int iParam0) // Position - 0x7D8 (2008)
{
	return iLocal_83.f_2[iParam0 /*26*/].f_3 != -1;
}

int func_26(int iParam0) // Position - 0x7EC (2028)
{
	return iLocal_83.f_219[iParam0 /*4*/];
}

void func_27(int iParam0, int iParam1) // Position - 0x7FC (2044)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	iLocal_83.f_219[iParam0 /*4*/] = iParam1;
	return;
}

BOOL func_28(int iParam0) // Position - 0x819 (2073)
{
	switch (func_26(iParam0))
	{
		case 0:
		case 9:
			return false;
	}

	if (!func_29(iLocal_83.f_2[iParam0 /*26*/]))
		return true;

	return false;
}

BOOL func_29(int iParam0) // Position - 0x854 (2132)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
		return !func_30(NETWORK::NET_TO_VEH(iParam0));

	return false;
}

BOOL func_30(Vehicle veParam0) // Position - 0x874 (2164)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			return true;
	else
		return true;

	return false;
}

void func_31() // Position - 0x8AD (2221)
{
	if (iLocal_3562 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		func_52();
		iLocal_3562 = iLocal_3562 + 1;
	}
	else
	{
		func_32();
		MISC::SET_BIT(&(iLocal_83.f_2[iLocal_3563 /*26*/].f_6), 0);
		MISC::SET_BIT(&(iLocal_83.f_2[iLocal_3563 /*26*/].f_6), 2);
		iLocal_83.f_212 = 0;
		iLocal_3563 = iLocal_3563 + 1;
	
		if (iLocal_3563 >= 8)
		{
			iLocal_3562 = 0;
			iLocal_3563 = 0;
		}
	}

	return;
}

void func_32() // Position - 0x90F (2319)
{
	int num;

	num = iLocal_3563;
	func_43(num);
	func_33(num);
	return;
}

void func_33(int iParam0) // Position - 0x928 (2344)
{
	var entityCoords;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	if (iLocal_83.f_2[iParam0 /*26*/].f_7 != 12 && !IS_BIT_SET(iLocal_83.f_2[iParam0 /*26*/].f_6, 4) && !func_42(iParam0))
	{
		if (IS_BIT_SET(iLocal_83.f_2[iParam0 /*26*/].f_6, 0))
		{
			func_22(iParam0, 12);
			func_41(iParam0, false);
		}
		else if (func_40(iLocal_83.f_2[iParam0 /*26*/].f_1) || !func_29(iLocal_83.f_2[iParam0 /*26*/]))
		{
			func_22(iParam0, 12);
			func_41(iParam0, false);
		}
		else if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false))
		{
			func_22(iParam0, 12);
			func_41(iParam0, false);
		}
	}

	if (!func_40(iLocal_83.f_2[iParam0 /*26*/].f_1) && func_29(iLocal_83.f_2[iParam0 /*26*/]))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), true) };
	
		switch (iLocal_83.f_2[iParam0 /*26*/].f_7)
		{
			case 0:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false, true) > 0)
					func_22(iParam0, 4);
				break;
		
			case 1:
				if (iLocal_83.f_2[iParam0 /*26*/].f_2 != -1)
					if (func_39(entityCoords, uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_26, 45f))
						if (!func_38(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_26, 0f, 0f, 0f, false))
							func_22(iParam0, 2);
					else if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_2)))
						if (_NETWORK_IS_PLAYER_VALID(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_2)), true, true))
							if (func_39(entityCoords, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_2))), true), 5f))
								func_22(iParam0, 2);
				else
					func_22(iParam0, 9);
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false, true) > 0)
					func_22(iParam0, 4);
				break;
		
			case 2:
				if (iLocal_83.f_2[iParam0 /*26*/].f_2 != -1)
					if (IS_BIT_SET(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_2, 21))
						if (!func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_PARK, true))
							if (!func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD, true))
								if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])))
									func_22(iParam0, 3);
						else if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_2)))
							if (_NETWORK_IS_PLAYER_VALID(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_2)), true, true))
								if (func_39(entityCoords, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_2))), true), 5f))
									if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])) || VEHICLE::IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])))
										func_22(iParam0, 3);
									else if (!func_39(entityCoords, uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_26, 10f))
										func_22(iParam0, 3);
				else
					func_22(iParam0, 9);
			
				if (IS_BIT_SET(iLocal_83.f_2[iParam0 /*26*/].f_6, 2))
					func_22(iParam0, 9);
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false, true) > 0)
					func_22(iParam0, 4);
				break;
		
			case 3:
				if (IS_BIT_SET(iLocal_83.f_2[iParam0 /*26*/].f_6, 2))
					func_22(iParam0, 9);
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false, true) > 0)
					func_22(iParam0, 4);
				break;
		
			case 4:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false, true) <= 0)
					func_22(iParam0, 9);
				else if (iLocal_83.f_2[iParam0 /*26*/].f_3 != -1)
					if (!func_38(iLocal_83.f_2[iParam0 /*26*/].f_8, 0f, 0f, 0f, false))
						func_22(iParam0, 5);
				break;
		
			case 5:
				if (iLocal_83.f_2[iParam0 /*26*/].f_3 != -1)
					if (!func_38(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_30, 0f, 0f, 0f, false))
						if (func_35(iParam0))
							if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])) || ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])) < 2f)
								func_22(iParam0, 6);
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false, true) <= 0)
					func_22(iParam0, 9);
				break;
		
			case 6:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false, true) <= 0)
					func_22(iParam0, 9);
				else
					func_34(iParam0, true);
				break;
		
			case 7:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false, true) <= 0)
					func_22(iParam0, 9);
				break;
		
			case 9:
				func_41(iParam0, false);
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false, true) > 0)
				{
					MISC::CLEAR_BIT(&(iLocal_83.f_2[iParam0 /*26*/].f_6), 3);
				
					if (iLocal_83.f_2[iParam0 /*26*/].f_3 != -1)
						MISC::CLEAR_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2), 20);
				
					func_22(iParam0, 4);
				}
				break;
		
			case 10:
			case 11:
				func_34(iParam0, false);
				break;
		
			case 12:
				func_41(iParam0, false);
				break;
		}
	}

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/]) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/].f_1))
	{
		if (IS_BIT_SET(iLocal_83.f_214, iParam0) && !IS_BIT_SET(iLocal_83.f_214, iParam0 + 8) && iLocal_83.f_2[iParam0 /*26*/].f_2 == -1)
		{
			if (iLocal_83.f_213 > 0)
			{
				iLocal_83.f_213 = iLocal_83.f_213 - 1;
				MISC::CLEAR_BIT(&(iLocal_83.f_214), iParam0);
				MISC::SET_BIT(&(iLocal_83.f_214), iParam0 + 8);
			}
		}
	
		if (iLocal_83.f_2[iParam0 /*26*/].f_3 != -1)
			iLocal_83.f_2[iParam0 /*26*/].f_3 = -1;
	
		if (iLocal_83.f_2[iParam0 /*26*/].f_4 != -1)
			iLocal_83.f_2[iParam0 /*26*/].f_4 = -1;
	}

	return;
}

void func_34(int iParam0, BOOL bParam1) // Position - 0xF75 (3957)
{
	int vehicleMaxNumberOfPassengers;
	int i;
	Ped pedInVehicleSeat;

	if (!func_40(iLocal_83.f_2[iParam0 /*26*/].f_1) && func_29(iLocal_83.f_2[iParam0 /*26*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[iParam0 /*26*/].f_1))
		{
			if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false, true) > 0)
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), -1, false) == NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1))
				{
					vehicleMaxNumberOfPassengers = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]));
					i = 0;
				
					for (i = 0; i < vehicleMaxNumberOfPassengers; i = i + 1)
					{
						if (i != -1)
						{
							pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), i, false);
						
							if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
								if (!PED::IS_PED_INJURED(pedInVehicleSeat))
									if (!func_36(pedInVehicleSeat, SCRIPT_TASK_LEAVE_ANY_VEHICLE, true) && !func_36(pedInVehicleSeat, SCRIPT_TASK_LEAVE_VEHICLE, true))
										if (bParam1)
											TASK::TASK_LEAVE_ANY_VEHICLE(pedInVehicleSeat, 0, 0);
										else
											TASK::TASK_LEAVE_ANY_VEHICLE(pedInVehicleSeat, 0, 64);
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_35(int iParam0) // Position - 0x107B (4219)
{
	if (iLocal_83.f_2[iParam0 /*26*/].f_3 != -1)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_ENT(iLocal_83.f_2[iParam0 /*26*/]), uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_30, 45f, 45f, 20f, false, true, 0) || IS_BIT_SET(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2, 20))
		{
			MISC::SET_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2), 20);
		
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
				return true;
		}
	}

	return false;
}

BOOL func_36(Ped pedParam0, eScriptTaskHash esthParam1, BOOL bParam2) // Position - 0x1120 (4384)
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;
	else if (!bParam2)
		if (scriptTaskStatus == 2 || scriptTaskStatus == 3)
			return true;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1166 (4454)
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
				if (player == Global_2672942.f_3)
					return Global_2672942.f_2;
				else if (Global_2657994[player /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_38(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x11C6 (4550)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_39(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x120D (4621)
{
	return SYSTEM::VDIST2(vParam0, fParam3) <= fParam6 * fParam6;
}

BOOL func_40(int iParam0) // Position - 0x1227 (4647)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));

	return true;
}

void func_41(int iParam0, BOOL bParam1) // Position - 0x1246 (4678)
{
	if (iLocal_83.f_2[iParam0 /*26*/].f_2 != -1 || !func_38(iLocal_83.f_2[iParam0 /*26*/].f_8, 0f, 0f, 0f, false) || bParam1)
	{
		if (iLocal_83.f_2[iParam0 /*26*/].f_2 != -1)
		{
			MISC::CLEAR_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_1), 0);
			MISC::CLEAR_BIT(&(iLocal_83.f_216), iLocal_83.f_2[iParam0 /*26*/].f_2);
			iLocal_83.f_2[iParam0 /*26*/].f_2 = -1;
			iLocal_83.f_211 = iLocal_83.f_211 - 1;
		}
	
		iLocal_83.f_2[iParam0 /*26*/].f_8 = { 0f, 0f, 0f };
		iLocal_83.f_2[iParam0 /*26*/].f_11 = 0f;
		iLocal_83.f_2[iParam0 /*26*/].f_22 = 0;
		iLocal_83.f_2[iParam0 /*26*/].f_19 = 0;
		MISC::CLEAR_BIT(&(iLocal_83.f_2[iParam0 /*26*/].f_6), 3);
		uLocal_2468[iParam0] = 0;
	}

	return;
}

BOOL func_42(int iParam0) // Position - 0x1312 (4882)
{
	if (func_26(iParam0) != 0)
		return true;

	return false;
}

void func_43(int iParam0) // Position - 0x1329 (4905)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/]))
		if (iLocal_83.f_2[iParam0 /*26*/].f_2 != -1)
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_2)))
				if (!func_51(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_21))
					if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_21, 3f, 3f, 3f, 0))
						if (func_44(iParam0, uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_21, uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_24, false))
							func_22(iParam0, 1);

	if (func_29(iLocal_83.f_2[iParam0 /*26*/]))
		iLocal_83.f_212 = iLocal_83.f_212 + 1;

	if (iLocal_83.f_2[iParam0 /*26*/].f_2 != -1)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_2)))
		{
			MISC::CLEAR_BIT(&(iLocal_83.f_216), iLocal_83.f_2[iParam0 /*26*/].f_2);
			iLocal_83.f_2[iParam0 /*26*/].f_2 = -1;
			iLocal_83.f_211 = iLocal_83.f_211 - 1;
		}
	}

	if (iLocal_83.f_2[iParam0 /*26*/].f_3 != -1)
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_3)))
			iLocal_83.f_2[iParam0 /*26*/].f_3 = -1;

	return;
}

BOOL func_44(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5) // Position - 0x146E (5230)
{
	if (func_50(Global_2739945.f_880) && func_50(Global_2739945.f_881))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/]))
		{
			if (func_47(&iLocal_83.f_2[iParam0 /*26*/], Global_2739945.f_880, uParam1, fParam4, true, true, true, false, true, true, false, false, false, false))
			{
				if (bParam5)
				{
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), fParam4);
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), 2f, 0f, 0f), true, false, false, true);
				}
			
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), 1084227584);
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), true);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), true);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[iParam0 /*26*/], true);
			}
		}
	
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/].f_1))
		{
			if (func_46(&(iLocal_83.f_2[iParam0 /*26*/].f_1), iLocal_83.f_2[iParam0 /*26*/], PED_TYPE_SPECIAL, Global_2739945.f_881, -1, true, true, true))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), 5f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2739945.f_880);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2739945.f_881);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 29, true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 251, true);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), false);
				PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), BF_AlwaysFight, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), BF_AlwaysFlee, true);
				PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 512, false);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SYSTEM::ROUND(200f * Global_262145.f_156), 0, 0);
				_CONVERSATION_INITIALIZE_ACTOR(&uLocal_3397, 8, NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "FM_TAXI", 0, 1);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[iParam0 /*26*/].f_1, true);
			}
		}
	}

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/]) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/].f_1))
		return false;

	MISC::CLEAR_BIT(&(iLocal_83.f_2[iParam0 /*26*/].f_6), 4);
	return true;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x16F9 (5881)
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

BOOL func_46(var uParam0, int iParam1, ePedType eptParam2, Hash hParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1794 (6036)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		return false;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
		return false;

	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), eptParam2, hParam3, iParam4, bParam6, bParam5));

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), bParam7);
	
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
			if (bParam5)
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
	
		return true;
	}

	return false;
}

BOOL func_47(var uParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15) // Position - 0x181C (6172)
{
	float radius;
	Vehicle vehicle;

	if (!STREAMING::IS_MODEL_VALID(hParam1))
		return false;

	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
		return false;

	radius = 1.5f;

	if (hParam1 == joaat("bombushka") || hParam1 == 858355070)
		radius = 20f;

	if (bParam11)
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, radius, false, false, false, false, false, false, 0);

	vehicle = VEHICLE::CREATE_VEHICLE(hParam1, vParam2, fParam5, bParam7, bParam6, bParam14);

	if (ENTITY::DOES_ENTITY_EXIST(vehicle))
	{
		*uParam0 = NETWORK::VEH_TO_NET(vehicle);
		Global_2739945.f_6839 = vehicle;
	
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(vehicle, true);
		
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(vehicle, bParam10);
		
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(vehicle))
			{
				if (bParam8)
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				else
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
			
				if (bParam13)
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
			}
		
			VEHICLE::SET_VEHICLE_IS_STOLEN(vehicle, bParam9);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(vehicle, true);
		
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(vehicle);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicle, 5, 5, 1f);
			}
		
			func_48(vParam2, fParam5, hParam1, vehicle);
			return true;
		}
	}

	return false;
}

void func_48(Vector3 vParam0, var uParam1, var uParam2, float fParam3, Hash hParam4, Vehicle veParam5) // Position - 0x1934 (6452)
{
	int i;

	if (func_49(PLAYER::PLAYER_ID(), vParam0, hParam4) > -1)
	{
		if (Global_2635516.f_3231[1 /*6*/].f_5 == veParam5 && Global_2635516.f_3231[1 /*6*/].f_4 == hParam4 && SYSTEM::VDIST(Global_2635516.f_3231[1 /*6*/], vParam0) < 0.5f)
			return;
	
		for (i = 0; i < 2; i = i + 1)
		{
			if (i < 1)
				Global_2635516.f_3231[i /*6*/] = { Global_2635516.f_3231[i + 1 /*6*/] };
		}
	
		Global_2635516.f_3231[1 /*6*/] = { vParam0 };
		Global_2635516.f_3231[1 /*6*/].f_3 = fParam3;
		Global_2635516.f_3231[1 /*6*/].f_4 = hParam4;
		Global_2635516.f_3231[1 /*6*/].f_5 = veParam5;
	}

	return;
}

int func_49(Player plParam0, var uParam1, var uParam2, var uParam3, Hash hParam4) // Position - 0x1A07 (6663)
{
	Player player;
	int i;
	Vector3 vector;

	player = plParam0;

	if (player > -1)
	{
		for (i = 0; i < 2; i = i + 1)
		{
			if (Global_2648917.f_461[player /*11*/][i /*5*/].f_4 == hParam4)
			{
				vector = { uParam1 };
			
				if (MISC::ABSF(Global_2648917.f_461[player /*11*/][i /*5*/].f_2 - vector.f_2) < 2f)
					vector.f_2 = Global_2648917.f_461[player /*11*/][i /*5*/].f_2;
			
				if (SYSTEM::VDIST(Global_2648917.f_461[player /*11*/][i /*5*/], vector) < 0.5f)
					return i;
			}
		}
	}

	return -1;
}

BOOL func_50(Hash hParam0) // Position - 0x1AA5 (6821)
{
	if (hParam0 == 0)
		return true;

	STREAMING::REQUEST_MODEL(hParam0);
	return STREAMING::HAS_MODEL_LOADED(hParam0);
}

BOOL func_51(float fParam0, var uParam1, var uParam2) // Position - 0x1AC3 (6851)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_52() // Position - 0x1AED (6893)
{
	int value;
	Player playerIndex;
	Ped playerPed;
	int i;

	value = iLocal_3562;

	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(value)))
	{
		playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(value));
		playerPed = PLAYER::GET_PLAYER_PED(playerIndex);
	
		if (!_NETWORK_IS_PLAYER_VALID(playerIndex, true, true))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				if (iLocal_83.f_2[i /*26*/].f_2 == value)
					func_41(i, false);
			
				if (iLocal_83.f_2[i /*26*/].f_3 == value)
				{
					func_58(i);
					iLocal_83.f_2[i /*26*/].f_3 = -1;
				
					if (_STOPWATCH_IS_INITIALIZED(&uLocal_2480))
						_STOPWATCH_DESTROY(&uLocal_2480);
				}
			}
		}
		else
		{
			if (!IS_BIT_SET(iLocal_83.f_216, value) && IS_BIT_SET(uLocal_335[value /*66*/].f_1, 0))
			{
				if (func_56())
				{
					func_55(value);
					MISC::SET_BIT(&(iLocal_83.f_216), value);
				}
				else
				{
					MISC::CLEAR_BIT(&(uLocal_335[value /*66*/].f_1), 0);
				}
			}
		
			for (i = 0; i < 8; i = i + 1)
			{
				if (func_42(i))
				{
				}
				else
				{
					if (IS_BIT_SET(uLocal_335[value /*66*/].f_4.f_2, 18))
					{
						if (iLocal_83.f_2[i /*26*/].f_2 != -1)
							func_41(i, false);
					
						MISC::CLEAR_BIT(&(uLocal_335[value /*66*/].f_4.f_2), 18);
					}
				
					if (IS_BIT_SET(uLocal_335[value /*66*/].f_4.f_3, i))
					{
						if (iLocal_83.f_2[i /*26*/].f_7 != 12)
						{
							if (iLocal_83.f_2[i /*26*/].f_7 != 10)
							{
								if (iLocal_83.f_2[i /*26*/].f_7 != 11)
								{
									iLocal_83.f_2[i /*26*/].f_4 = value;
									func_22(i, 10);
									func_41(i, true);
								}
							}
						}
					}
				
					if (!func_40(iLocal_83.f_2[i /*26*/].f_1) && func_29(iLocal_83.f_2[i /*26*/]))
					{
						if (iLocal_83.f_2[i /*26*/].f_3 == -1)
						{
							if (uLocal_335[value /*66*/].f_4.f_1 == i && iLocal_83.f_2[i /*26*/].f_7 == 9)
							{
								func_22(i, 3);
							
								if (iLocal_83.f_2[i /*26*/].f_2 == -1)
									iLocal_83.f_2[i /*26*/].f_2 = value;
							
								uLocal_335[value /*66*/].f_4.f_1 = -1;
							}
						
							if (IS_BIT_SET(uLocal_335[value /*66*/].f_3, 0 + i))
								if (iLocal_83.f_2[i /*26*/].f_7 == 9 || iLocal_83.f_2[i /*26*/].f_7 == 1 || iLocal_83.f_2[i /*26*/].f_7 == 2)
									func_22(i, 3);
						
							if (func_54(playerIndex, NETWORK::NET_TO_VEH(iLocal_83.f_2[i /*26*/])) && iLocal_83.f_2[i /*26*/].f_7 != 6 && iLocal_83.f_2[i /*26*/].f_7 != 10 && iLocal_83.f_2[i /*26*/].f_7 != 11 && iLocal_83.f_2[i /*26*/].f_7 != 12)
							{
								MISC::CLEAR_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 0);
								MISC::CLEAR_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 2);
							
								if (iLocal_83.f_2[i /*26*/].f_2 != -1)
								{
									MISC::CLEAR_BIT(&(iLocal_83.f_216), iLocal_83.f_2[i /*26*/].f_2);
									iLocal_83.f_2[i /*26*/].f_2 = -1;
									iLocal_83.f_211 = iLocal_83.f_211 - 1;
								}
							
								iLocal_83.f_2[i /*26*/].f_3 = value;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(playerPed, NETWORK::NET_TO_VEH(iLocal_83.f_2[i /*26*/]), 120f, 120f, 120f, false, true, 0))
							{
								if (iLocal_83.f_2[i /*26*/].f_2 == -1)
									MISC::CLEAR_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 2);
								else if (iLocal_83.f_2[i /*26*/].f_2 == value)
									MISC::CLEAR_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 2);
							
								MISC::CLEAR_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 0);
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(playerPed, NETWORK::NET_TO_VEH(iLocal_83.f_2[i /*26*/]), 300f, 300f, 300f, false, true, 0))
							{
								MISC::CLEAR_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 0);
							}
						
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(playerIndex) > 0)
								if (iLocal_83.f_2[i /*26*/].f_2 == value)
									MISC::SET_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 2);
						}
						else if (iLocal_83.f_2[i /*26*/].f_3 == value)
						{
							if (!func_54(playerIndex, NETWORK::NET_TO_VEH(iLocal_83.f_2[i /*26*/])))
							{
								func_41(i, true);
								iLocal_83.f_2[i /*26*/].f_3 = -1;
							}
							else
							{
								if (iLocal_83.f_2[i /*26*/].f_7 == 5 || iLocal_83.f_2[i /*26*/].f_7 == 7)
								{
									if (!IS_BIT_SET(iLocal_83.f_2[i /*26*/].f_6, 3) && IS_BIT_SET(uLocal_335[value /*66*/].f_4.f_2, 3))
									{
										MISC::SET_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 3);
										MISC::CLEAR_BIT(&(uLocal_335[value /*66*/].f_4.f_2), 4);
										MISC::CLEAR_BIT(&(uLocal_335[value /*66*/].f_4.f_2), 5);
										func_22(i, 5);
									}
									else if (IS_BIT_SET(uLocal_335[value /*66*/].f_4.f_2, 4))
									{
										MISC::CLEAR_BIT(&(uLocal_335[value /*66*/].f_4.f_2), 4);
										func_22(i, 7);
									}
									else if (iLocal_83.f_2[i /*26*/].f_7 == 7)
									{
										if (IS_BIT_SET(uLocal_335[value /*66*/].f_4.f_2, 5))
										{
											MISC::CLEAR_BIT(&(uLocal_335[value /*66*/].f_4.f_2), 5);
											func_22(i, 5);
										}
									}
								}
							
								if (iLocal_83.f_2[i /*26*/].f_7 == 5 || iLocal_83.f_2[i /*26*/].f_7 == 7 || iLocal_83.f_2[i /*26*/].f_7 == 4)
								{
									if (iLocal_83.f_2[i /*26*/].f_19 != uLocal_335[value /*66*/].f_4.f_15)
									{
										iLocal_83.f_2[i /*26*/].f_8 = { uLocal_335[value /*66*/].f_4.f_5 };
										iLocal_83.f_2[i /*26*/].f_11 = uLocal_335[value /*66*/].f_4.f_14;
										iLocal_83.f_2[i /*26*/].f_19 = uLocal_335[value /*66*/].f_4.f_15;
										iLocal_83.f_2[i /*26*/].f_23 = { uLocal_335[value /*66*/].f_4.f_39 };
										func_22(i, 5);
										MISC::CLEAR_BIT(&(uLocal_335[value /*66*/].f_4.f_2), 20);
									}
								}
							}
						
							MISC::CLEAR_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 0);
							MISC::CLEAR_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 2);
						}
					
						if (uLocal_335[value /*66*/].f_4.f_19 == i && iLocal_83.f_2[i /*26*/].f_22 == 0)
						{
							if (uLocal_335[value /*66*/].f_4.f_18 != 0)
							{
								iLocal_83.f_2[i /*26*/].f_22 = uLocal_335[value /*66*/].f_4.f_18;
								uLocal_335[iLocal_2448 /*66*/].f_4.f_19 = -1;
								uLocal_335[value /*66*/].f_4.f_18 = 0;
							}
						}
						else if (IS_BIT_SET(uLocal_335[value /*66*/].f_4.f_2, 6))
						{
							iLocal_83.f_2[i /*26*/].f_22 = 0;
							uLocal_335[value /*66*/].f_4.f_19 = -1;
							MISC::CLEAR_BIT(&(uLocal_335[value /*66*/].f_4.f_2), 6);
						}
					}
					else if (IS_BIT_SET(uLocal_335[value /*66*/].f_1, 0) || iLocal_83.f_2[i /*26*/].f_2 == value)
					{
						MISC::CLEAR_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 0);
						MISC::CLEAR_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 2);
					}
					else
					{
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/].f_1))
							func_53(&(iLocal_83.f_2[i /*26*/].f_1));
					
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/]))
							func_53(&iLocal_83.f_2[i /*26*/]);
					
						if (iLocal_83.f_2[i /*26*/].f_2 == -1)
							func_41(i, false);
					
						if (iLocal_83.f_2[i /*26*/].f_3 != -1)
						{
							func_41(i, true);
							iLocal_83.f_2[i /*26*/].f_3 = -1;
						}
					}
				}
			}
		}
	}

	return;
}

void func_53(var uParam0) // Position - 0x2218 (8728)
{
	Entity entity;

	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		entity = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&entity);
	}

	return;
}

BOOL func_54(Player plParam0, Vehicle veParam1) // Position - 0x223C (8764)
{
	int i;
	int num;
	Ped pedInVehicleSeat;

	num = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam1) + 1;

	if (!ENTITY::IS_ENTITY_DEAD(veParam1, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veParam1, i - 1, false))
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, i - 1, false);
			
				if (!PED::IS_PED_INJURED(pedInVehicleSeat))
					if (PED::IS_PED_A_PLAYER(pedInVehicleSeat))
						if (PLAYER::GET_PLAYER_PED(plParam0) == pedInVehicleSeat)
							return true;
			}
		}
	}

	return false;
}

void func_55(int iParam0) // Position - 0x22AB (8875)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (iLocal_83.f_2[i /*26*/].f_2 == -1 && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/]))
		{
			iLocal_83.f_2[i /*26*/].f_2 = iParam0;
			iLocal_83.f_211 = iLocal_83.f_211 + 1;
			iLocal_83.f_213 = iLocal_83.f_213 + 1;
			MISC::SET_BIT(&(iLocal_83.f_214), i);
			MISC::CLEAR_BIT(&(iLocal_83.f_214), i + 8);
			MISC::CLEAR_BIT(&(uLocal_335[iParam0 /*66*/].f_1), 0);
			MISC::SET_BIT(&(iLocal_83.f_2[i /*26*/].f_6), 4);
			return;
		}
	}

	return;
}

BOOL func_56() // Position - 0x233D (9021)
{
	if (iLocal_83.f_211 >= 8 || iLocal_83.f_212 >= 8)
		return false;

	return true;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x2361 (9057)
{
	return uParam0->f_1;
}

void func_58(int iParam0) // Position - 0x236D (9069)
{
	int i;
	var unk;

	uLocal_335[iLocal_2448 /*66*/].f_4.f_4 = uLocal_2498[iLocal_2484 /*3*/];
	HUD::DOES_BLIP_EXIST(uLocal_335[iLocal_2448 /*66*/].f_4.f_4);

	for (i = 0; i < 50; i = i + 1)
	{
		uLocal_2498[i /*3*/] = { unk };
	}

	iLocal_2483 = 0;
	return;
}

BOOL func_59(var uParam0) // Position - 0x23C0 (9152)
{
	if (uParam0->f_1)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
			return true;

	return false;
}

void func_60(var uParam0) // Position - 0x23E9 (9193)
{
	if (!uParam0->f_1)
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			func_12(uParam0, false, false);

	return;
}

void func_61() // Position - 0x2408 (9224)
{
	BOOL flag;
	int i;

	MISC::CLEAR_BIT(&(Global_2739945.f_879), 1);

	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
	{
		func_391();
		func_390();
	}

	func_367(iLocal_3396);
	func_283();
	func_258(iLocal_3396);
	func_257(iLocal_3396);
	func_255(iLocal_3396);

	if (iLocal_3393 != iLocal_3396)
	{
		func_258(iLocal_3393);
		func_257(iLocal_3393);
		func_255(iLocal_3393);
	}

	iLocal_3396 = iLocal_3396 + 1;

	if (iLocal_3396 == 8)
	{
		fLocal_3395 = 99999f;
		iLocal_3393 = iLocal_3394;
		iLocal_3396 = 0;
	}

	flag = _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true);
	func_70(iLocal_3393, flag);

	if (flag)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				if (iLocal_83.f_2[i /*26*/].f_3 == iLocal_2448)
					func_62(1, 1, true);
			}
		
			func_62(0, 0, false);
		}
	}
	else
	{
		if (iLocal_2448 != -1)
		{
			for (i = 0; i < 8; i = i + 1)
			{
				if (iLocal_83.f_2[i /*26*/].f_3 == iLocal_2448)
					func_62(1, 1, true);
			}
		}
	
		func_62(1, 1, false);
	}

	return;
}

void func_62(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2522 (9506)
{
	int i;
	var unk;

	if (uLocal_335[iLocal_2448 /*66*/].f_4 != -1 || !func_38(uLocal_335[iLocal_2448 /*66*/].f_4.f_5, 0f, 0f, 0f, false) || iLocal_2656 != iLocal_2655 || uLocal_335[iLocal_2448 /*66*/].f_4.f_18 != 0 || uLocal_335[iLocal_2448 /*66*/].f_4.f_19 != -1 || IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 10) || IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 17) || bParam2)
	{
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 2);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 3);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 4);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 5);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 7);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 10);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 11);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 12);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 13);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 14);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 20);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 21);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 22);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 23);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 24);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 25);
		uLocal_335[iLocal_2448 /*66*/].f_4.f_5 = { 0f, 0f, 0f };
		uLocal_335[iLocal_2448 /*66*/].f_4.f_14 = 0f;
		uLocal_335[iLocal_2448 /*66*/].f_4.f_15 = 0;
		uLocal_335[iLocal_2448 /*66*/].f_4 = -1;
		uLocal_335[iLocal_2448 /*66*/].f_4.f_1 = -1;
		uLocal_335[iLocal_2448 /*66*/].f_4.f_34 = -1;
		uLocal_335[iLocal_2448 /*66*/].f_4.f_26 = { 0f, 0f, 0f };
		uLocal_335[iLocal_2448 /*66*/].f_4.f_29 = 0f;
		uLocal_335[iLocal_2448 /*66*/].f_4.f_30 = { 0f, 0f, 0f };
		uLocal_335[iLocal_2448 /*66*/].f_4.f_33 = 0f;
		uLocal_335[iLocal_2448 /*66*/].f_4.f_35 = -1;
		uLocal_335[iLocal_2448 /*66*/].f_4.f_36 = { 0f, 0f, 0f };
		uLocal_335[iLocal_2448 /*66*/].f_4.f_39 = { 0f, 0f, 0f };
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 26);
	
		for (i = 0; i < 50; i = i + 1)
		{
			uLocal_2498[i /*3*/] = { unk };
		}
	
		func_68();
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 27);
		iLocal_2484 = 0;
		iLocal_2486 = 0;
		bLocal_2487 = false;
		bLocal_2651 = false;
		Global_113215 = false;
		fLocal_2660 = SYSTEM::TO_FLOAT(iLocal_2655);
		iLocal_2656 = iLocal_2655;
		iLocal_2657 = iLocal_2655;
		_STOPWATCH_DESTROY(&uLocal_2658);
		uLocal_2661 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		uLocal_335[iLocal_2448 /*66*/].f_4.f_18 = 0;
		uLocal_335[iLocal_2448 /*66*/].f_4.f_19 = -1;
		func_65(true, -1);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		STREAMING::REMOVE_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
		uLocal_335[iLocal_2448 /*66*/].f_4.f_4 = 0;
		_STOPWATCH_DESTROY(&uLocal_2478);
	}

	if (iParam0 == 1)
	{
		uLocal_335[iLocal_2448 /*66*/].f_4.f_21 = { 0f, 0f, 0f };
		uLocal_335[iLocal_2448 /*66*/].f_4.f_24 = 0f;
		uLocal_335[iLocal_2448 /*66*/].f_4.f_26 = { 0f, 0f, 0f };
		uLocal_335[iLocal_2448 /*66*/].f_4.f_29 = 0f;
	}

	if (IS_BIT_SET(Global_2739945.f_879, 2))
		MISC::CLEAR_BIT(&(Global_2739945.f_879), 2);

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /*Taxi*/))
		HUD::RELEASE_NAMED_RENDERTARGET("taxi" /*Taxi*/);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_2488))
	{
		OBJECT::DELETE_OBJECT(&obLocal_2488);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_2489);
	}

	if (CAM::DOES_CAM_EXIST(caLocal_3376))
	{
		CAM::SET_CAM_ACTIVE(caLocal_3376, false);
		CAM::DESTROY_CAM(caLocal_3376, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_63();
	}

	if (bLocal_3375 == false)
		bLocal_3375 = true;

	if (iParam1 == 1 && uLocal_335[iLocal_2448 /*66*/].f_1 != 0)
		uLocal_335[iLocal_2448 /*66*/].f_1 = 0;

	return;
}

void func_63() // Position - 0x2937 (10551)
{
	func_64(4, 0, -1);
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::SET_RADAR_ZOOM(0);
	CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_3377);
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	return;
}

void func_64(int iParam0, BOOL bParam1, int iParam2) // Position - 0x295F (10591)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
				Global_1673707.f_137[iParam2] = bParam1;
			break;
	
		default:
			if (bParam1)
				MISC::SET_BIT(&(Global_1673707.f_1046), iParam0);
			else
				MISC::CLEAR_BIT(&(Global_1673707.f_1046), iParam0);
			break;
	}

	return;
}

void func_65(BOOL bParam0, int iParam1) // Position - 0x29AE (10670)
{
	int num;

	if (!func_67(&num, false, iParam1))
		return;

	if (Global_23987.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
		Global_23987.f_9116 = 0;
	}

	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);

	if (Global_23987.f_6231[num])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23987.f_6231[num] = false;
	}

	if (Global_23987.f_6217[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23987.f_6217[num] = false;
	}

	if (Global_23987.f_6224[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23987.f_6224[num] = false;
	}

	if (bParam0)
	{
		func_66(&Global_23987.f_6263[num /*10*/]);
		Global_23987.f_6324[num] = 0;
	}
	else
	{
		Global_23987.f_6324[num] = 0;
	}

	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
	return;
}

void func_66(int* piParam0) // Position - 0x2A71 (10865)
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

BOOL func_67(var uParam0, BOOL bParam1, int iParam2) // Position - 0x2A9D (10909)
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
		if (Global_23987.f_6324[i] == hashKey)
		{
			*uParam0 = i;
			return true;
		}
		else if (Global_23987.f_6324[i] == 0)
		{
			num = i;
		}
	}

	if (bParam1)
	{
		if (num != -1)
		{
			Global_23987.f_6324[num] = hashKey;
			*uParam0 = num;
			return true;
		}
	}

	return false;
}

void func_68() // Position - 0x2B3A (11066)
{
	func_69();
	return;
}

void func_69() // Position - 0x2B46 (11078)
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_67.f_2[i]))
			HUD::REMOVE_BLIP(&uLocal_67.f_2[i]);
	}

	return;
}

void func_70(int iParam0, BOOL bParam1) // Position - 0x2B7C (11132)
{
	if (func_42(iParam0))
		return;

	if (bParam1)
	{
		if (!func_40(iLocal_83.f_2[iParam0 /*26*/].f_1) && func_29(iLocal_83.f_2[iParam0 /*26*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false))
			{
				func_246(iParam0);
				func_239(iParam0);
				func_76(iParam0);
			}
			else
			{
				func_71(iParam0);
			}
		}
		else
		{
			func_71(iParam0);
		}
	}
	else
	{
		func_71(iParam0);
	}

	return;
}

void func_71(int iParam0) // Position - 0x2C07 (11271)
{
	if (IS_BIT_SET(iLocal_2449, 0 + iParam0))
	{
		MISC::CLEAR_BIT(&iLocal_2449, 0 + iParam0);
	
		if (_STOPWATCH_IS_INITIALIZED(&uLocal_2480))
			_STOPWATCH_DESTROY(&uLocal_2480);
	
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TXM_H02" /*Press ~INPUT_ENTER~ to enter the taxi as a passenger.*/))
			HUD::CLEAR_HELP(true);
	}

	if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_3, 0 + iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			bLocal_2652 = false;
		}
	
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_3), 0 + iParam0);
	}

	func_73(&uLocal_2459[iParam0]);

	if (uLocal_335[iLocal_2448 /*66*/].f_4 == iParam0)
		func_62(1, 1, false);

	func_72(iParam0);
	return;
}

void func_72(int iParam0) // Position - 0x2CA9 (11433)
{
	if (HUD::DOES_BLIP_EXIST(uLocal_2450[iParam0]))
	{
		HUD::REMOVE_BLIP(&uLocal_2450[iParam0]);
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 12);
	}

	return;
}

void func_73(var uParam0) // Position - 0x2CDC (11484)
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_74(*uParam0);

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

int func_74(int iParam0) // Position - 0x2D33 (11571)
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

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x2D6E (11630)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_76(int iParam0) // Position - 0x2D81 (11649)
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false) && !PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_BEING_JACKED(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1)) && !IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_3, iParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
	
		if (func_238(iParam0) && STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
		{
			if (iLocal_83.f_2[iParam0 /*26*/].f_7 == 6)
			{
				if (CAM::DOES_CAM_EXIST(caLocal_3376))
				{
					CAM::SET_CAM_ACTIVE(caLocal_3376, false);
					CAM::DESTROY_CAM(caLocal_3376, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					func_63();
				}
			
				if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])))
					func_237(iParam0);
			}
			else
			{
				if (!func_235())
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || iLocal_83.f_2[iParam0 /*26*/].f_7 == 10 || iLocal_83.f_2[iParam0 /*26*/].f_7 == 11)
						func_34(iParam0, false);
			
				func_141(iParam0);
			}
		
			if (uLocal_335[iLocal_2448 /*66*/].f_4 != iParam0)
			{
				uLocal_335[iLocal_2448 /*66*/].f_4 = iParam0;
				MISC::SET_BIT(&(Global_2739945.f_879), 2);
			}
		
			func_134(iParam0);
			func_133(iParam0);
		}
	
		func_87(iParam0);
		func_82();
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(PLAYER_CONTROL);
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(CAMERA_CONTROL);
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(FRONTEND_CONTROL);
		func_81();
		func_80();
		PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), BF_CanDoDrivebys, false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_PREV_WEAPON, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
	
		if (iLocal_83.f_2[iParam0 /*26*/].f_7 == 5)
			func_79();
	
		if (iLocal_83.f_2[iParam0 /*26*/].f_3 == iLocal_2448)
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 376, true);
	
		if (func_78() || func_77(0))
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
	}
	else if (uLocal_335[iLocal_2448 /*66*/].f_4 == iParam0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !func_235())
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				if (iLocal_83.f_2[iParam0 /*26*/].f_7 != 10 && iLocal_83.f_2[iParam0 /*26*/].f_7 != 11 && !IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_3, iParam0))
					func_237(iParam0);
			else
				MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_3), iParam0);
	
		func_62(1, 1, false);
		func_58(iParam0);
	
		if (_STOPWATCH_IS_INITIALIZED(&uLocal_2480))
			_STOPWATCH_DESTROY(&uLocal_2480);
	}

	return;
}

BOOL func_77(int iParam0) // Position - 0x300B (12299)
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

BOOL func_78() // Position - 0x3062 (12386)
{
	return Global_76658;
}

void func_79() // Position - 0x306E (12398)
{
	Global_2752158.f_258 = 1;
	return;
}

void func_80() // Position - 0x307E (12414)
{
	Global_2739945.f_4668 = 0;
	return;
}

void func_81() // Position - 0x308E (12430)
{
	MISC::SET_BIT(&Global_8920, 4);
	return;
}

void func_82() // Position - 0x309E (12446)
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_113215 && uLocal_67.f_2[i] == uLocal_2498[iLocal_2484 /*3*/])
			if (!func_86(i))
				func_83(i, true);
		else if (func_86(i))
			func_83(i, false);
	}

	return;
}

void func_83(int iParam0, BOOL bParam1) // Position - 0x30FA (12538)
{
	Blip blip;

	if (iParam0 == -1)
		return;

	blip = uLocal_67.f_2[iParam0];

	if (!HUD::DOES_BLIP_EXIST(blip))
		return;

	if (bParam1)
	{
		HUD::SET_BLIP_DISPLAY(blip, 5);
		func_85(&(uLocal_67.f_13), iParam0);
	}
	else
	{
		HUD::SET_BLIP_DISPLAY(blip, 0);
		func_84(&(uLocal_67.f_13), iParam0);
	}

	return;
}

BOOL func_84(var uParam0, int iParam1) // Position - 0x314E (12622)
{
	int num;
	int num2;
	int offset;

	num = iParam1;
	num2 = num / 32;
	offset = num % 32;

	if (IS_BIT_SET(uParam0->[num2], offset))
	{
		MISC::CLEAR_BIT(&uParam0->[num2], offset);
		return true;
	}

	return false;
}

BOOL func_85(var uParam0, int iParam1) // Position - 0x3185 (12677)
{
	int num;
	int num2;
	int offset;

	num = iParam1;
	num2 = num / 32;
	offset = num % 32;

	if (!IS_BIT_SET(uParam0->[num2], offset))
	{
		MISC::SET_BIT(&uParam0->[num2], offset);
		return true;
	}

	return false;
}

BOOL func_86(int iParam0) // Position - 0x31BD (12733)
{
	return func_19(&(uLocal_67.f_13), iParam0);
}

void func_87(int iParam0) // Position - 0x31CF (12751)
{
	const char* controlInstructionalButtonsString;

	if (func_121())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2664))
		{
			if (iLocal_83.f_2[iParam0 /*26*/].f_3 == iLocal_2448)
			{
				controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X, true);
			
				if (!MISC::ARE_STRINGS_EQUAL(sLocal_3378, controlInstructionalButtonsString))
				{
					sLocal_3378 = controlInstructionalButtonsString;
					iLocal_3374 = 1;
				}
			}
		
			if (iLocal_3374 == 1)
			{
				uLocal_3365 = { func_120() };
				func_118(&uLocal_2665);
				func_117(0, 75, "TXM_EXIT" /*Exit*/, &uLocal_2665, false, 365);
			
				if (iLocal_83.f_2[iParam0 /*26*/].f_3 == iLocal_2448)
				{
					if (iLocal_83.f_2[iParam0 /*26*/].f_7 != 6)
					{
						if (Global_113215 == true || bLocal_2651 == true)
							if (iLocal_2483 > 1)
								func_117(2, 218, "TXM_CDES" /*Change Destination*/, &uLocal_2665, false, 365);
					
						if (!bLocal_2651)
						{
							if (uLocal_335[iLocal_2448 /*66*/].f_4.f_15 != uLocal_2498[iLocal_2484 /*3*/])
								func_117(0, 176, "TXM_SLCT" /*Choose Destination*/, &uLocal_2665, false, 365);
						}
						else if (iLocal_83.f_2[iParam0 /*26*/].f_7 == 5)
						{
							if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 4))
								func_117(0, 177, "TXM_STOP" /*Stop*/, &uLocal_2665, false, 365);
						
							if (bLocal_2649)
								func_117(0, 176, "TXM_SLCT" /*Choose Destination*/, &uLocal_2665, false, 365);
						
							switch (func_99(iParam0))
							{
								case 0:
								case 3:
								case 5:
									func_97(0, 176, "TXS_IB_SKIP", func_98(), &uLocal_2665, false, 365);
									break;
							}
						
							if (!IS_BIT_SET(iLocal_83.f_2[iParam0 /*26*/].f_6, 3) && !IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 3))
								if (iLocal_83.f_2[iParam0 /*26*/].f_7 == 5)
									func_117(0, 179, "TXM_HURY" /*Hurry*/, &uLocal_2665, false, 365);
						}
						else if (iLocal_83.f_2[iParam0 /*26*/].f_7 == 7)
						{
							if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 5))
								func_117(0, 177, "TXM_STRT" /*Start*/, &uLocal_2665, false, 365);
						
							if (bLocal_2649)
								func_117(0, 176, "TXM_SLCT" /*Choose Destination*/, &uLocal_2665, false, 365);
						}
					
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
							func_117(2, 199, "SPEC_PAUSE" /*Pause*/, &uLocal_2665, false, 365);
					}
				}
			
				iLocal_3374 = 0;
			}
		
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			func_96(1);
			func_95(1);
			func_88(&iLocal_2664, &uLocal_3365, &uLocal_2665, func_94(&uLocal_2665));
		}
		else
		{
			iLocal_2664 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
	}
	else
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_2664);
		iLocal_3374 = 1;
	}

	return;
}

void func_88(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x3421 (13345)
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
	
		func_93(uParam2);
	}

	if (Global_1577953 < 2)
		func_95(1);

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
						func_92(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(control, action, true));
					
						if (action2 < 365)
							func_92(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(control, action2, true));
					}
					else
					{
						control2 = uParam2->f_1[i /*57*/].f_54;
						controlGroup = uParam2->f_1[i /*57*/].f_55;
						func_92(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(control2, controlGroup, true));
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
						func_91(&(uParam2->f_1[i /*57*/].f_32));
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
					func_92(&uParam2->f_1[i /*57*/]);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[i /*57*/].f_16)))
						func_92(&(uParam2->f_1[i /*57*/].f_16));
				
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
						func_91(&(uParam2->f_1[i /*57*/].f_32));
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
		func_90(*uParam0, uParam1);

	func_89();
	return;
}

void func_89() // Position - 0x37C0 (14272)
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	return;
}

void func_90(int iParam0, var uParam1) // Position - 0x37DE (14302)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
	return;
}

void func_91(const char* sParam0) // Position - 0x37FD (14333)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_92(const char* sParam0) // Position - 0x380F (14351)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

void func_93(var uParam0) // Position - 0x381D (14365)
{
	Global_1982837 = 0;
	uParam0->f_692 = 0;
	return;
}

BOOL func_94(var uParam0) // Position - 0x3830 (14384)
{
	return Global_1982837 || uParam0->f_692;
}

void func_95(int iParam0) // Position - 0x3847 (14407)
{
	Global_1577953 = iParam0;
	return;
}

void func_96(int iParam0) // Position - 0x3855 (14421)
{
	Global_1675264.f_1163 = iParam0;
	return;
}

void func_97(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, BOOL bParam5, int iParam6) // Position - 0x3866 (14438)
{
	int offset;

	if (uParam4->f_693 >= 12)
		return;

	offset = uParam4->f_693;
	TEXT_LABEL_ASSIGN_STRING(&(uParam4->f_1[offset /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam4->f_689), offset);
	uParam4->f_1[offset /*57*/].f_54 = iParam0;
	uParam4->f_1[offset /*57*/].f_55 = iParam1;
	uParam4->f_1[offset /*57*/].f_56 = iParam6;
	MISC::SET_BIT(&(uParam4->f_686), offset);
	uParam4->f_1[offset /*57*/].f_36 = iParam3;

	if (bParam5)
	{
		MISC::SET_BIT(&(uParam4->f_691), offset);
		iParam6 < 365;
	}

	uParam4->f_693 = uParam4->f_693 + 1;
	return;
}

int func_98() // Position - 0x38FA (14586)
{
	return Global_262145.f_31163;
}

int func_99(int iParam0) // Position - 0x3909 (14601)
{
	int num;

	if (!func_116())
		return 2;

	if (!func_25(iParam0) || func_24(iParam0) != iLocal_2448)
		return 6;

	if (func_115(iParam0) != 5)
		return 10;

	if (bLocal_2649)
		return 8;

	if (Global_113215)
		return 9;

	if (func_111(Global_2672942.f_4.f_16))
		return 1;

	if (func_42(iParam0))
		return 11;

	if (func_235())
		return 7;

	if (!func_109(uLocal_335[iLocal_2448 /*66*/].f_4.f_15))
		return 4;

	if (SYSTEM::VDIST2(Global_2672942.f_4.f_11, uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_30) < SYSTEM::POW(50f, 2f))
		return 12;

	if (!func_104())
		return 5;

	num = func_98();

	if (func_100(Global_2672942.f_4.f_16) < num || !MONEY::NETWORK_CAN_SPEND_MONEY(num, false, false, true, -1, 0))
		return 3;

	return 0;
}

int func_100(Player plParam0) // Position - 0x3A16 (14870)
{
	int num;

	num = func_101(plParam0);
	return num;
}

int func_101(Player plParam0) // Position - 0x3A28 (14888)
{
	if (plParam0 > -1)
		if (plParam0 == PLAYER::PLAYER_ID())
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		else if (func_102(plParam0))
			return Global_1845270[plParam0 /*892*/].f_206.f_3;
		else
			return 0;

	return 0;
}

BOOL func_102(Player plParam0) // Position - 0x3A6B (14955)
{
	if (!func_103(plParam0))
		return false;

	return IS_BIT_SET(Global_2672942.f_1, plParam0);
}

BOOL func_103(Player plParam0) // Position - 0x3A8A (14986)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_104() // Position - 0x3AAC (15020)
{
	if (func_105() == 0)
		return true;

	return false;
}

int func_105() // Position - 0x3AC1 (15041)
{
	int num;

	num = NETWORK::GET_CLOUD_TIME_AS_INT() - func_108();
	num = func_107() - num;
	num = func_106(0, num);
	return num;
}

int func_106(int iParam0, int iParam1) // Position - 0x3AE8 (15080)
{
	if (iParam0 > iParam1)
		return iParam0;

	return iParam1;
}

int func_107() // Position - 0x3AFE (15102)
{
	return Global_262145.f_31162;
}

var func_108() // Position - 0x3B0D (15117)
{
	return uLocal_67.f_15;
}

BOOL func_109(var uParam0) // Position - 0x3B19 (15129)
{
	if (func_110(uParam0) != -1)
		return true;

	return false;
}

int func_110(Blip blParam0) // Position - 0x3B30 (15152)
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_67.f_2[i]) && uLocal_67.f_2[i] == blParam0)
			return i;
	}

	return -1;
}

BOOL func_111(Player plParam0) // Position - 0x3B70 (15216)
{
	if (func_114(plParam0))
		return true;

	if (func_112(plParam0))
		return true;

	return false;
}

BOOL func_112(Player plParam0) // Position - 0x3B93 (15251)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_113(plParam0, 9);

	return false;
}

BOOL func_113(Player plParam0, int iParam1) // Position - 0x3BB1 (15281)
{
	return IS_BIT_SET(Global_1887694[plParam0 /*611*/].f_10.f_4, iParam1);
}

BOOL func_114(Player plParam0) // Position - 0x3BC9 (15305)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1887694[player /*611*/].f_1, 0);

	return false;
}

int func_115(int iParam0) // Position - 0x3BEC (15340)
{
	return iLocal_83.f_2[iParam0 /*26*/].f_7;
}

BOOL func_116() // Position - 0x3BFE (15358)
{
	return Global_262145.f_31160;
}

void func_117(int iParam0, int iParam1, char* sParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x3C0D (15373)
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

void func_118(var uParam0) // Position - 0x3C8A (15498)
{
	func_119(uParam0);
	uParam0->f_692 = 1;
	return;
}

void func_119(var uParam0) // Position - 0x3C9E (15518)
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
	Global_1982837 = 0;
	return;
}

struct<9> func_120() // Position - 0x3D8C (15756)
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

BOOL func_121() // Position - 0x3DD0 (15824)
{
	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		return false;

	if (!func_128(1, 1))
		return false;

	if (func_127())
		return false;

	if (func_78())
		return false;

	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		return false;

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		return false;

	if (func_126(false))
		return false;

	if (!func_124())
		return false;

	if (func_123() && func_15(func_122()) != 0)
		return false;

	return true;
}

int func_122() // Position - 0x3E61 (15969)
{
	return uLocal_335[iLocal_2448 /*66*/].f_4;
}

BOOL func_123() // Position - 0x3E73 (15987)
{
	return uLocal_335[iLocal_2448 /*66*/].f_4 != -1;
}

BOOL func_124() // Position - 0x3E87 (16007)
{
	if (func_125() == 0)
		return true;

	return false;
}

int func_125() // Position - 0x3E9C (16028)
{
	return Global_1574633.f_18;
}

BOOL func_126(BOOL bParam0) // Position - 0x3EAA (16042)
{
	if (bParam0)
		return Global_23848.f_4 && Global_23848.f_104 == 4;

	return Global_23848.f_4;
}

BOOL func_127() // Position - 0x3ED3 (16083)
{
	return Global_101765.f_400 > 0;
}

BOOL func_128(int iParam0, int iParam1) // Position - 0x3EE4 (16100)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (iParam0 == 1)
		if (func_132())
			return false;

	if (_IS_FMMC_ACTIVE())
		return false;

	if (iParam1 == 1)
		if (func_77(0))
			return false;

	if (func_130(8, -1))
		return false;

	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
		return false;

	if (func_129())
		return false;

	if (Global_61507)
		return false;

	if (Global_76658)
		return false;

	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		return false;

	if (Global_1574974)
		return false;

	if (Global_1836510)
		return false;

	return true;
}

BOOL func_129() // Position - 0x3F80 (16256)
{
	return Global_1575086;
}

BOOL func_130(int iParam0, int iParam1) // Position - 0x3F8C (16268)
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

BOOL _IS_FMMC_ACTIVE() // Position - 0x3FC4 (16324)
{
	return Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_193 != 0;
}

BOOL func_132() // Position - 0x3FDB (16347)
{
	return MISC::GET_GAME_TIMER() <= Global_23987.f_6481 + 100;
}

void func_133(int iParam0) // Position - 0x3FF0 (16368)
{
	if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 11))
	{
		if (uLocal_335[iLocal_2448 /*66*/].f_4.f_18 == 0)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				uLocal_335[iLocal_2448 /*66*/].f_4.f_18 = 26;
				uLocal_335[iLocal_2448 /*66*/].f_4.f_19 = iParam0;
				MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 11);
			}
		}
	}

	return;
}

void func_134(int iParam0) // Position - 0x4055 (16469)
{
	BOOL flag;

	if (bLocal_2651)
	{
		if (func_11(&uLocal_2658, 10000, false))
		{
			if (IS_BIT_SET(iLocal_83.f_2[iParam0 /*26*/].f_6, 3) || IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 3))
				fLocal_2660 = fLocal_2660 + (func_139() * 1.5f);
			else
				fLocal_2660 = fLocal_2660 + func_139();
		
			_STOPWATCH_DESTROY(&uLocal_2658);
			flag = true;
		}
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), uLocal_2661, false) > 50f)
		{
			if (IS_BIT_SET(iLocal_83.f_2[iParam0 /*26*/].f_6, 3) || IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 3))
				fLocal_2660 = fLocal_2660 + (func_139() * 1.5f);
			else
				fLocal_2660 = fLocal_2660 + func_139();
		
			_STOPWATCH_DESTROY(&uLocal_2658);
			uLocal_2661 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			flag = true;
		}
	
		iLocal_2656 = SYSTEM::CEIL(fLocal_2660);
	
		if (iLocal_2656 > 5000)
			iLocal_2656 = 5000;
	
		if (iLocal_2656 != iLocal_2657)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2490, "SET_TAXI_PRICE");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2656);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_2657 = iLocal_2656;
			func_137("\\ntaxiService currentJourneyPrice = ");
			func_135(iLocal_2656);
			func_137("\\n");
		}
	
		if (flag)
			if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 27))
				MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 27);
	}

	return;
}

void func_135(int iParam0) // Position - 0x41B3 (16819)
{
	func_136(iParam0);
	return;
}

void func_136(int iParam0) // Position - 0x41C1 (16833)
{
	iParam0 > 0;
	return;
}

void func_137(char* sParam0) // Position - 0x41CF (16847)
{
	func_138(sParam0);
	return;
}

void func_138(char* sParam0) // Position - 0x41DD (16861)
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}

float func_139() // Position - 0x41F0 (16880)
{
	return func_140();
}

float func_140() // Position - 0x4204 (16900)
{
	return Global_262145.f_31161;
}

void func_141(int iParam0) // Position - 0x4213 (16915)
{
	if (iLocal_83.f_2[iParam0 /*26*/].f_3 == iLocal_2448)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[iParam0 /*26*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[iParam0 /*26*/].f_1))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[iParam0 /*26*/], false);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[iParam0 /*26*/].f_1, false);
			
				if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 10))
				{
					func_227(iParam0);
					func_169(iParam0);
				}
			
				if (func_168(iParam0))
				{
					func_142(iParam0);
					iLocal_3374 = 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[iParam0 /*26*/]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[iParam0 /*26*/], false);
				}
				else if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[iParam0 /*26*/]))
				{
				}
			
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[iParam0 /*26*/].f_1))
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[iParam0 /*26*/].f_1, false);
			}
		}
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	
		if (CAM::DOES_CAM_EXIST(caLocal_3376))
		{
			CAM::SET_CAM_ACTIVE(caLocal_3376, false);
			CAM::DESTROY_CAM(caLocal_3376, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			func_63();
		}
	}

	return;
}

void func_142(int iParam0) // Position - 0x4348 (17224)
{
	int num;
	int i;
	int value;
	int value2;
	int value3;
	var a;
	Vector3 entityCoords;
	int num2;
	int j;
	int num3;
	float blipCoords;

	if (!bLocal_2487)
	{
		func_166();
		num = func_165();
		iLocal_2486 = num;
		uLocal_2468[iParam0] = 0;
		bLocal_2487 = true;
	}

	if (func_150(iParam0))
	{
		i = 0;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2490, "CLEAR_TAXI_DISPLAY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	
		for (i = 0; i < iLocal_2483; i = i + 1)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_2498[i /*3*/]))
			{
				bLocal_3375 = true;
				uLocal_2468[iParam0] = 0;
				return;
			}
		
			if (func_149(uLocal_2498[i /*3*/]) == INVALID)
			{
				bLocal_3375 = true;
				uLocal_2468[iParam0] = 0;
				return;
			}
		
			if (func_148(HUD::GET_BLIP_COORDS(uLocal_2498[i /*3*/]), 0f, 0f, 0f, 1056964608, false))
			{
				bLocal_3375 = true;
				uLocal_2468[iParam0] = 0;
				return;
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2490, "ADD_TAXI_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(HUD::GET_BLIP_SPRITE(uLocal_2498[i /*3*/]));
		
			if (func_149(uLocal_2498[i /*3*/]) == BLIP_BIKER_CLUBHOUSE || func_149(uLocal_2498[i /*3*/]) == BLIP_OFFICE && HUD::GET_BLIP_HUD_COLOUR(uLocal_2498[i /*3*/]) == 0)
			{
				func_147(HUD::GET_BLIP_COLOUR(uLocal_2498[i /*3*/]), &value, &value2, &value3, &a);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value3);
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD::GET_BLIP_HUD_COLOUR(uLocal_2498[i /*3*/]), &value, &value2, &value3, &a);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value3);
			}
		
			num2 = func_145(uLocal_2498[i /*3*/]);
		
			if (num2 == -1)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(uLocal_2498[i /*3*/]);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_143(num2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		
			if (HUD::GET_BLIP_INFO_ID_TYPE(uLocal_2498[i /*3*/]) == 2)
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uLocal_2498[i /*3*/]))))
					entityCoords = { ENTITY::GET_ENTITY_COORDS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uLocal_2498[i /*3*/])), true) };
			else if (HUD::GET_BLIP_INFO_ID_TYPE(uLocal_2498[i /*3*/]) == 1)
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uLocal_2498[i /*3*/]), false))
					entityCoords = { ENTITY::GET_ENTITY_COORDS(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uLocal_2498[i /*3*/]), true) };
			else
				entityCoords = { HUD::GET_BLIP_COORDS(uLocal_2498[i /*3*/]) };
		
			func_91(ZONE::GET_NAME_OF_ZONE(entityCoords));
		
			if (func_149(uLocal_2498[i /*3*/]) == BLIP_SAFEHOUSE || func_149(uLocal_2498[i /*3*/]) == BLIP_GARAGE || func_149(uLocal_2498[i /*3*/]) == BLIP_OFFICE || func_149(uLocal_2498[i /*3*/]) == BLIP_BIKER_CLUBHOUSE || func_149(uLocal_2498[i /*3*/]) == BLIP_PROPERTY_BUNKER || func_149(uLocal_2498[i /*3*/]) == BLIP_NHP_BASE || func_149(uLocal_2498[i /*3*/]) == BLIP_BAT_CLUB_PROPERTY || func_149(uLocal_2498[i /*3*/]) == BLIP_ARCADE)
			{
				for (j = 0; j < 131; j = j + 1)
				{
					num3 = j;
				
					if (func_38(entityCoords, Global_1312333[num3 /*1951*/].f_3[0 /*3*/], false))
					{
						j = 131;
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1" /*~a~*/);
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312333[num3 /*1951*/].f_16));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						func_91("");
					}
				}
			}
			else if (uLocal_2498[i /*3*/].f_2 == 0)
			{
				if (uLocal_2498[i /*3*/].f_1 != 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(uLocal_2498[i /*3*/].f_1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_91("");
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM2" /*~a~ and ~a~*/);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(uLocal_2498[i /*3*/].f_1);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(uLocal_2498[i /*3*/].f_2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		
			if (iLocal_3379 == 8 || iLocal_3379 == 9 || iLocal_3379 == 10 || iLocal_3379 == 12)
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			else
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		
			if (bLocal_2651)
				if (uLocal_335[iLocal_2448 /*66*/].f_4.f_15 == uLocal_2498[i /*3*/])
					iLocal_2484 = i;
			else if (HUD::DOES_BLIP_EXIST(uLocal_335[iLocal_2448 /*66*/].f_4.f_4))
				if (uLocal_335[iLocal_2448 /*66*/].f_4.f_4 == uLocal_2498[i /*3*/])
					iLocal_2484 = i;
		}
	
		if (bLocal_2651)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2490, "SHOW_TAXI_DESTINATION");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2490, "HIGHLIGHT_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2484);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2490, "SET_TAXI_PRICE");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2656);
		
			if (iLocal_3379 == 8 || iLocal_3379 == 9 || iLocal_3379 == 10 || iLocal_3379 == 12)
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			else
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2490, "SHOW_TAXI_DESTINATION");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2490, "HIGHLIGHT_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2484);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (HUD::DOES_BLIP_EXIST(uLocal_2498[iLocal_2484 /*3*/]))
		{
			blipCoords = { HUD::GET_BLIP_COORDS(uLocal_2498[iLocal_2484 /*3*/]) };
		
			if (!func_51(blipCoords) && CAM::DOES_CAM_EXIST(caLocal_3376) && CAM::IS_CAM_ACTIVE(caLocal_3376))
				HUD::LOCK_MINIMAP_POSITION(blipCoords, blipCoords.f_1);
		}
	
		bLocal_3375 = false;
		MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 10);
	}

	return;
}

char* func_143(int iParam0) // Position - 0x488F (18575)
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
			return func_144(iParam0, 0, false);
	
		case 8:
			return func_144(iParam0, 0, false);
	
		case 9:
			return func_144(iParam0, 0, false);
	
		case 10:
			return func_144(iParam0, 0, false);
	
		case 11:
			return func_144(iParam0, 0, false);
	
		case 12:
			return func_144(iParam0, 0, false);
	
		case 13:
			return func_144(iParam0, 0, false);
	
		case 14:
			return func_144(iParam0, 0, false);
	
		case 15:
			return func_144(iParam0, 0, false);
	
		case 16:
			return func_144(iParam0, 0, false);
	
		case 17:
			return func_144(iParam0, 0, false);
	
		case 18:
			return func_144(iParam0, 0, false);
	
		case 19:
			return func_144(iParam0, 0, false);
	
		case 20:
			return func_144(iParam0, 0, false);
	
		case 21:
			return func_144(iParam0, 0, false);
	
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
			return func_144(iParam0, 0, false);
	
		case 40:
			return func_144(iParam0, 0, false);
	
		case 41:
			return func_144(iParam0, 0, false);
	
		case 42:
			return func_144(iParam0, 0, false);
	
		case 43:
			return func_144(iParam0, 0, false);
	
		case 44:
			return func_144(iParam0, 0, false);
	
		case 45:
			return func_144(iParam0, 0, false);
	
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
			return func_144(iParam0, 0, false);
	
		case 56:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 57:
			return func_144(iParam0, 0, false);
	
		case 58:
			return func_144(iParam0, 0, false);
	
		case 59:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 60:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 61:
			return "SB_AMU" /*Ammu-Nation*/;
	}

	return "SHOP_BLIP_INV";
}

char* func_144(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4CE6 (19686)
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
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET_HSW";
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
			
				case 22:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_VINEWOOD_PREMIUM_GARAGE";
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

int func_145(var uParam0) // Position - 0x52E0 (21216)
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 62; i = i + 1)
	{
		num = i;
		num2 = func_146(num);
	
		if (Global_33485[num2 /*23*/].f_19 == uParam0)
			return num;
	}

	return -1;
}

int func_146(int iParam0) // Position - 0x531B (21275)
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

void func_147(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x56A3 (22179)
{
	*uParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 24, 31);
	*uParam2 = MISC::GET_BITS_IN_RANGE(iParam0, 16, 23);
	*uParam3 = MISC::GET_BITS_IN_RANGE(iParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 7);
	return;
}

BOOL func_148(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7) // Position - 0x56DA (22234)
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

eBlipSprite func_149(Blip blParam0) // Position - 0x5755 (22357)
{
	eBlipSprite blipSprite;

	if (HUD::DOES_BLIP_EXIST(blParam0))
		blipSprite = HUD::GET_BLIP_SPRITE(blParam0);

	return blipSprite;
}

BOOL func_150(int iParam0) // Position - 0x5770 (22384)
{
	int i;
	int num;
	float blipCoords;

	switch (uLocal_2468[iParam0])
	{
		case 0:
			func_58(iParam0);
			break;
	
		case 1:
			func_160(iParam0, ebsLocal_65, false);
			func_160(iParam0, BLIP_LESTER_FAMILY, false);
			func_160(iParam0, BLIP_TREVOR_FAMILY, false);
			func_160(iParam0, BLIP_SIMEON_FAMILY, false);
			func_160(iParam0, ebsLocal_66, false);
			func_160(iParam0, BLIP_GANG_VEHICLE, false);
			func_160(iParam0, BLIP_GANG_BIKE, false);
			break;
	
		case 2:
			func_160(iParam0, BLIP_GUN_SHOP, true);
			break;
	
		case 3:
			func_160(iParam0, BLIP_SHOOTING_RANGE, true);
			func_160(iParam0, BLIP_DARTS, true);
			break;
	
		case 4:
			func_160(iParam0, BLIP_TENNIS, true);
			func_160(iParam0, BLIP_GOLF, true);
			break;
	
		case 5:
			func_160(iParam0, BLIP_ARM_WRESTLING, true);
			func_160(iParam0, BLIP_FLIGHT_SCHOOL, true);
			break;
	
		case 6:
			func_160(iParam0, BLIP_UGC_MISSION, true);
			break;
	
		case 7:
			func_160(iParam0, BLIP_DEATHMATCH, true);
			break;
	
		case 8:
			func_160(iParam0, BLIP_RACE, true);
			break;
	
		case 9:
			func_160(iParam0, BLIP_PROPERTY_TAKEOVER, true);
			break;
	
		case 10:
			func_160(iParam0, BLIP_HORDE, true);
			break;
	
		case 11:
			func_160(iParam0, BLIP_RAMPAGE, true);
			break;
	
		case 12:
			func_160(iParam0, BLIP_BASE_JUMP, true);
			break;
	
		case 13:
			func_160(iParam0, BLIP_CRIM_HOLDUPS, true);
			break;
	
		case 14:
			func_160(iParam0, BLIP_CINEMA, true);
			break;
	
		case 15:
			func_160(iParam0, BLIP_SAFEHOUSE, false);
			func_160(iParam0, BLIP_GARAGE, false);
			func_160(iParam0, BLIP_OFFICE, false);
			func_160(iParam0, BLIP_BIKER_CLUBHOUSE, false);
			func_160(iParam0, BLIP_WAREHOUSE, false);
			func_160(iParam0, BLIP_PRODUCTION_WEED, false);
			func_160(iParam0, BLIP_PRODUCTION_CRACK, false);
			func_160(iParam0, BLIP_PRODUCTION_FAKE_ID, false);
			func_160(iParam0, BLIP_PRODUCTION_METH, false);
			func_160(iParam0, BLIP_PROPERTY_BUNKER, false);
			func_160(iParam0, BLIP_NHP_BASE, false);
			func_160(iParam0, BLIP_PRODUCTION_MONEY, false);
			func_160(iParam0, BLIP_BAT_CLUB_PROPERTY, false);
			func_160(iParam0, BLIP_ARCADE, false);
			break;
	
		case 16:
			func_160(iParam0, BLIP_STRIP_CLUB, true);
			break;
	
		case 17:
			func_160(iParam0, BLIP_BARBER, true);
			break;
	
		case 18:
			func_160(iParam0, BLIP_CAR_MOD_SHOP, true);
			break;
	
		case 19:
			func_160(iParam0, BLIP_BENNYS, true);
			break;
	
		case 20:
			func_160(iParam0, BLIP_CLOTHES_STORE, true);
			break;
	
		case 21:
			func_160(iParam0, BLIP_TATTOO, true);
			break;
	
		case 22:
			func_151(iParam0);
			break;
	
		case 23:
			iLocal_2486 = func_165();
		
			if (HUD::DOES_BLIP_EXIST(uLocal_2498[iLocal_2484 /*3*/]))
			{
				for (i = 0; i < 50; i = i + 1)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_2498[i /*3*/]))
					{
						if (uLocal_2498[iLocal_2484 /*3*/] == uLocal_2498[i /*3*/])
						{
							if (func_38(HUD::GET_BLIP_COORDS(uLocal_2498[iLocal_2484 /*3*/]), HUD::GET_BLIP_COORDS(uLocal_2498[i /*3*/]), false))
							{
								blipCoords = { HUD::GET_BLIP_COORDS(uLocal_2498[i /*3*/]) };
							
								if (!func_51(blipCoords) && CAM::DOES_CAM_EXIST(caLocal_3376) && CAM::IS_CAM_ACTIVE(caLocal_3376))
									HUD::LOCK_MINIMAP_POSITION(blipCoords, blipCoords.f_1);
							
								iLocal_2484 = i;
								i = 50;
								num = 1;
							}
						}
					}
				}
			
				if (num == 0)
					iLocal_2484 = 0;
			}
			else
			{
				iLocal_2484 = 0;
			}
			break;
	}

	if (uLocal_2468[iParam0] >= 23)
		return true;
	else
		uLocal_2468[iParam0] = uLocal_2468[iParam0] + 1;

	return false;
}

void func_151(int iParam0) // Position - 0x5AE6 (23270)
{
	var unk;
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (iLocal_2483 >= 50)
			return;
	
		if (!HUD::DOES_BLIP_EXIST(uLocal_67.f_2[i]))
		{
		}
		else if (SYSTEM::VDIST2(Global_2672942.f_4.f_11, HUD::GET_BLIP_COORDS(uLocal_67.f_2[i])) < SYSTEM::POW(250f, 2f))
		{
		}
		else
		{
			func_159(iParam0, &uLocal_67.f_2[i], &unk);
			func_152(unk, false, iParam0);
		}
	}

	return;
}

void func_152(Blip blParam0, var uParam1, var uParam2, BOOL bParam3, int iParam4) // Position - 0x5B65 (23397)
{
	int i;
	int num;

	i = 0;
	num = 0;

	for (i = 0; i < 50; i = i + 1)
	{
		if (func_149(uLocal_2498[i /*3*/]) == func_149(blParam0))
		{
			num = i;
			i = 50;
		}
		else if (i == iLocal_2483)
		{
			num = i;
			i = 50;
		}
	}

	i = 0;

	for (i = 0; i < 50; i = i + 1)
	{
		if (i < num)
			i = num;
	
		if (i < iLocal_2483)
		{
			if (func_149(uLocal_2498[i /*3*/]) == func_149(blParam0))
			{
				if (func_156(blParam0, uLocal_2498[i /*3*/]))
				{
					if (bParam3)
					{
						func_155(blParam0, i, iParam4);
						i = 50;
						return;
					}
					else
					{
						func_153(blParam0, i, iParam4);
						iLocal_2483 = iLocal_2483 + 1;
						i = 50;
						return;
					}
				}
				else if (bParam3)
				{
					i = 50;
					return;
				}
				else
				{
					func_153(blParam0, i, iParam4);
					iLocal_2483 = iLocal_2483 + 1;
					i = 50;
					return;
				}
			}
			else
			{
				func_153(blParam0, i, iParam4);
				iLocal_2483 = iLocal_2483 + 1;
				i = 50;
				return;
			}
		}
		else
		{
			func_153(blParam0, i, iParam4);
			iLocal_2483 = iLocal_2483 + 1;
			i = 50;
			return;
		}
	}

	return;
}

void func_153(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x5CA5 (23717)
{
	func_137("INSERT_NEW_DESTINATION_TO_LIST - start \\n");
	func_154(iParam3);
	uLocal_2498[iParam3 /*3*/] = { uParam0 };

	if (func_149(uLocal_2498[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		if (iLocal_83.f_2[iParam4 /*26*/].f_3 != -1)
		{
			uLocal_335[iLocal_83.f_2[iParam4 /*26*/].f_3 /*66*/].f_4.f_35 = iParam3;
			uLocal_335[iLocal_83.f_2[iParam4 /*26*/].f_3 /*66*/].f_4.f_36 = { HUD::GET_BLIP_COORDS(uLocal_2498[iParam3 /*3*/]) };
		}
	}

	return;
}

void func_154(int iParam0) // Position - 0x5D20 (23840)
{
	int i;
	var unk;

	func_137("SHIFT_LIST_DOWN_1_PLACE_FROM_POSITION - start, position = ");
	func_135(iParam0);
	func_137("\\n");

	for (i = 49; i > iParam0; i = i - 1)
	{
		unk = { uLocal_2498[i - 1 /*3*/] };
		uLocal_2498[i /*3*/] = { unk };
	}

	return;
}

void func_155(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x5D6E (23918)
{
	func_137("REPLACE_LIST_DESTINATION_WITH_NEW_DESTINATION - start \\n");
	uLocal_2498[iParam3 /*3*/] = { uParam0 };

	if (func_149(uLocal_2498[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		if (iLocal_83.f_2[iParam4 /*26*/].f_3 != -1)
		{
			uLocal_335[iLocal_83.f_2[iParam4 /*26*/].f_3 /*66*/].f_4.f_35 = iParam3;
			uLocal_335[iLocal_83.f_2[iParam4 /*26*/].f_3 /*66*/].f_4.f_36 = { HUD::GET_BLIP_COORDS(uLocal_2498[iParam3 /*3*/]) };
		}
	}

	return;
}

BOOL func_156(Blip blParam0, var uParam1, var uParam2, Blip blParam3, var uParam4, var uParam5) // Position - 0x5DE3 (24035)
{
	if (func_157(blParam0) < func_157(blParam3))
		return true;

	return false;
}

float func_157(Blip blParam0) // Position - 0x5E00 (24064)
{
	Vector3 vector;

	vector = { 0f, 0f, 10000000f };

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (HUD::DOES_BLIP_EXIST(blParam0))
			vector = { func_158(blParam0) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	return SYSTEM::VMAG(vector);
}

Vector3 func_158(Blip blParam0) // Position - 0x5E43 (24131)
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

void func_159(int iParam0, var uParam1, var uParam2) // Position - 0x5F1E (24350)
{
	*uParam2 = *uParam1;

	if (!(*uParam2 == Global_113198))
		PATHFIND::GET_STREET_NAME_AT_COORD(func_158(*uParam2), &(uParam2->f_1), &(uParam2->f_2));
	else
		PATHFIND::GET_STREET_NAME_AT_COORD(iLocal_83.f_2[iParam0 /*26*/].f_8, &(uParam2->f_1), &(uParam2->f_2));

	return;
}

void func_160(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x5F66 (24422)
{
	var unk;
	BOOL flag;
	Blip i;
	Vector3 blipCoords;
	int j;

	for (i = HUD::GET_FIRST_BLIP_INFO_ID(ebsParam1); HUD::DOES_BLIP_EXIST(i); i = HUD::GET_NEXT_BLIP_INFO_ID(ebsParam1))
	{
		if (iLocal_2483 < 50)
		{
			if (func_164(i))
			{
				if (func_163(unk))
				{
					if (!func_162(&i))
					{
						flag = false;
					
						switch (ebsParam1)
						{
							case BLIP_LESTER_FAMILY:
							case BLIP_TREVOR_FAMILY:
							case BLIP_SIMEON_FAMILY:
							case BLIP_GANG_VEHICLE:
							case BLIP_GANG_BIKE:
							case BLIP_FLIGHT_SCHOOL:
							case BLIP_GOLF:
							case BLIP_TENNIS:
							case BLIP_SHOOTING_RANGE:
							case BLIP_ARM_WRESTLING:
							case BLIP_DARTS:
							case BLIP_HOOKER:
							case BLIP_UGC_MISSION:
							case BLIP_DEATHMATCH:
							case BLIP_RACE:
							case BLIP_RACEFLAG:
							case BLIP_PROPERTY_TAKEOVER:
							case BLIP_HORDE:
							case BLIP_RAMPAGE:
							case BLIP_BASE_JUMP:
							case BLIP_TRIATHLON:
							case BLIP_CRIM_HOLDUPS:
							case BLIP_CABARET_CLUB:
							case BLIP_COMEDY_CLUB:
							case BLIP_CINEMA:
							case BLIP_MUSIC_VENUE:
							case BLIP_SAFEHOUSE:
							case BLIP_GARAGE:
							case BLIP_GUN_SHOP:
							case BLIP_STRIP_CLUB:
							case BLIP_BARBER:
							case BLIP_CAR_MOD_SHOP:
							case BLIP_BENNYS:
							case BLIP_CLOTHES_STORE:
							case BLIP_INTERNET_CAFE:
							case BLIP_TATTOO:
							case BLIP_OFFICE:
							case BLIP_WAREHOUSE:
							case BLIP_BIKER_CLUBHOUSE:
							case BLIP_PRODUCTION_WEED:
							case BLIP_PRODUCTION_CRACK:
							case BLIP_PRODUCTION_FAKE_ID:
							case BLIP_PRODUCTION_METH:
							case BLIP_PRODUCTION_MONEY:
							case BLIP_PROPERTY_BUNKER:
							case BLIP_NHP_BASE:
							case BLIP_BAT_CLUB_PROPERTY:
							case BLIP_ARCADE:
							default:
							
						}
					
						flag = true;
						blipCoords = { HUD::GET_BLIP_COORDS(i) };
					
						if (Global_1845270[PLAYER::PLAYER_ID() /*892*/] == 16)
							if (ebsParam1 == BLIP_GUN_SHOP)
								if (blipCoords.f_1 < 200f)
									flag = true;
								else
									flag = false;
					
						if (ebsParam1 == ebsLocal_66)
							flag = true;
					
						if (func_38(blipCoords, 0f, 0f, 0f, false))
						{
							flag = false;
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), blipCoords, 250f, 250f, 250f, false, true, 0))
						{
							flag = false;
						}
						else if (ebsParam1 != ebsLocal_66)
						{
							for (j = 0; j < 1; j = j + 1)
							{
								if (func_161(blipCoords, Global_2739945.f_238[j /*3*/], 200f, true) && !func_38(Global_2739945.f_238[j /*3*/], 0f, 0f, 0f, false))
									flag = false;
							}
						}
					
						if (flag)
						{
							flag = false;
						
							if (func_164(i))
								if (HUD::GET_BLIP_INFO_ID_TYPE(i) == 4 || HUD::GET_BLIP_INFO_ID_TYPE(i) == 5 || HUD::GET_BLIP_INFO_ID_TYPE(i) == 1 || HUD::GET_BLIP_INFO_ID_TYPE(i) == 6 || HUD::GET_BLIP_INFO_ID_TYPE(i) == 3)
									flag = true;
						
							if (flag)
							{
								if (func_164(i))
								{
									func_159(iParam0, &i, &unk);
									func_152(unk, bParam2, iParam0);
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

BOOL func_161(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x622E (25134)
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam3, bParam7) <= fParam6;
}

BOOL func_162(var uParam0) // Position - 0x6247 (25159)
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
		return true;

	if (Global_113195 == *uParam0)
		return true;

	if (HUD::GET_BLIP_COLOUR(*uParam0) == 39)
		return true;

	if (func_38(HUD::GET_BLIP_COORDS(*uParam0), 0f, 0f, 0f, false))
		return true;

	if (func_149(*uParam0) == INVALID)
		return true;

	return false;
}

BOOL func_163(Blip blParam0, var uParam1, var uParam2) // Position - 0x62A2 (25250)
{
	float num;

	if (!(func_149(blParam0) == ebsLocal_65))
	{
		num = func_157(blParam0);
	
		if (num > 40f)
			return true;
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_164(Blip blParam0) // Position - 0x62D6 (25302)
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

int func_165() // Position - 0x6306 (25350)
{
	int numberOfActiveBlips;

	numberOfActiveBlips = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();

	if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 12))
		numberOfActiveBlips = numberOfActiveBlips - 1;

	return numberOfActiveBlips;
}

void func_166() // Position - 0x632E (25390)
{
	int i;

	if (!func_116())
		return;

	for (i = 0; i < 10; i = i + 1)
	{
		uLocal_67.f_2[i] = HUD::ADD_BLIP_FOR_COORD(func_167(i));
		HUD::SET_BLIP_SPRITE(uLocal_67.f_2[i], BLIP_POI);
		HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_67.f_2[i], true);
		HUD::SET_BLIP_DISPLAY(uLocal_67.f_2[i], 0);
	}

	return;
}

Vector3 func_167(int iParam0) // Position - 0x638E (25486)
{
	switch (iParam0)
	{
		case 0:
			return -1026.9246f, -2495.2595f, 19.0826f;
	
		case 1:
			return -1612.7935f, -974.2093f, 12.0174f;
	
		case 2:
			return -411.0467f, 1174.9912f, 324.6416f;
	
		case 3:
			return 826.9172f, -2978.489f, 4.9068f;
	
		case 4:
			return 242.5445f, -860.3193f, 28.5547f;
	
		case 5:
			return -3232.715f, 967.5353f, 12.0342f;
	
		case 6:
			return -1914.5135f, 2067.4412f, 139.3692f;
	
		case 7:
			return 1931.2938f, 3713.5544f, 31.3825f;
	
		case 8:
			return 1678.4316f, 4824.1562f, 41.0081f;
	
		case 9:
			return -318.2824f, 6068.81f, 30.1976f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_168(int iParam0) // Position - 0x6490 (25744)
{
	Vector3 blipCoords;
	Blip firstBlipInfoId;
	int currentLanguage;
	int num;

	if (SYSTEM::TIMERB() > 500)
	{
		currentLanguage = LOCALIZATION::GET_CURRENT_LANGUAGE();
	
		if (iLocal_3379 != currentLanguage)
		{
			if (iLocal_3379 == 8 || iLocal_3379 == 9 || iLocal_3379 == 10 || iLocal_3379 == 12)
			{
				if (currentLanguage != 8 && currentLanguage != 9 && currentLanguage != 10 && currentLanguage != 12)
				{
					iLocal_3379 = currentLanguage;
					bLocal_3375 = true;
					uLocal_2468[iParam0] = 0;
					SYSTEM::SETTIMERB(0);
				}
			}
			else if (currentLanguage == 8 || currentLanguage == 9 || currentLanguage == 10 || currentLanguage == 12)
			{
				iLocal_3379 = currentLanguage;
				bLocal_3375 = true;
				uLocal_2468[iParam0] = 0;
				SYSTEM::SETTIMERB(0);
			}
		}
	
		if (!bLocal_3375)
		{
			num = func_165();
		
			if (iLocal_2486 != num)
			{
				bLocal_3375 = true;
				uLocal_2468[iParam0] = 0;
				iLocal_2486 = num;
				SYSTEM::SETTIMERB(0);
			}
		}
	
		if (!bLocal_3375)
		{
			if (iLocal_83.f_2[iParam0 /*26*/].f_3 != -1)
			{
				if (uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_35 == -1)
				{
					firstBlipInfoId = HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID());
				
					if (HUD::DOES_BLIP_EXIST(firstBlipInfoId))
					{
						blipCoords = { HUD::GET_BLIP_COORDS(firstBlipInfoId) };
					
						if (SYSTEM::VDIST(blipCoords, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 250f)
						{
							bLocal_3375 = true;
							uLocal_2468[iParam0] = 0;
							uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_35 = -1;
							uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_36 = { 0f, 0f, 0f };
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_2498[uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_35 /*3*/]))
				{
					if (func_149(uLocal_2498[uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_35 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
					{
						blipCoords = { HUD::GET_BLIP_COORDS(uLocal_2498[uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_35 /*3*/]) };
					
						if (!func_38(blipCoords, uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_36, false))
						{
							bLocal_3375 = true;
							uLocal_2468[iParam0] = 0;
							uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_35 = -1;
							uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_36 = { 0f, 0f, 0f };
							SYSTEM::SETTIMERB(0);
						}
					}
					else
					{
						bLocal_3375 = true;
						uLocal_2468[iParam0] = 0;
						uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_35 = -1;
						uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_36 = { 0f, 0f, 0f };
						SYSTEM::SETTIMERB(0);
					}
				}
				else
				{
					bLocal_3375 = true;
					uLocal_2468[iParam0] = 0;
					uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_35 = -1;
					uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_36 = { 0f, 0f, 0f };
					SYSTEM::SETTIMERB(0);
				}
			}
		}
	
		SYSTEM::SETTIMERB(0);
	}

	return bLocal_3375;
}

void func_169(int iParam0) // Position - 0x6772 (26482)
{
	int num;
	var unk;
	var unk2;
	var unk3;
	int num2;

	if (func_121())
	{
		if (bLocal_3375 == false)
		{
			func_226(&num, &unk, &unk2, &unk3, false);
		
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD);
			}
		
			if (num > 28 || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
			{
				if (!bLocal_2652)
				{
					func_224();
					SYSTEM::SETTIMERA(0);
					bLocal_2652 = true;
				}
			}
			else
			{
				bLocal_2652 = false;
			}
		
			if (num < -28 || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
			{
				if (!bLocal_2653)
				{
					func_222();
					SYSTEM::SETTIMERA(0);
					bLocal_2653 = true;
				}
			}
			else
			{
				bLocal_2653 = false;
			}
		}
	
		if (!bLocal_2651)
		{
			if (iLocal_2483 > 0)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
			
				if (bLocal_3375 == false)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_2498[iLocal_2484 /*3*/]))
						{
							if (func_221(HUD::GET_BLIP_COORDS(uLocal_2498[iLocal_2484 /*3*/])))
							{
								bLocal_2654 = false;
								uLocal_335[iLocal_2448 /*66*/].f_4.f_15 = { uLocal_2498[iLocal_2484 /*3*/] };
								uLocal_335[iLocal_2448 /*66*/].f_4.f_5 = { HUD::GET_BLIP_COORDS(uLocal_335[iLocal_2448 /*66*/].f_4.f_15) };
							
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false))
									uLocal_335[iLocal_2448 /*66*/].f_4.f_39 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), true) };
								else if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
									uLocal_335[iLocal_2448 /*66*/].f_4.f_39 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
								else
									uLocal_335[iLocal_2448 /*66*/].f_4.f_39 = { 0f, 0f, 0f };
							
								uLocal_2661 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
								_STOPWATCH_DESTROY(&uLocal_2658);
								func_134(iParam0);
								bLocal_2651 = true;
							
								if (iLocal_3377 != 5)
									CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_3377);
							
								bLocal_2654 = false;
								bLocal_2649 = false;
								bLocal_2650 = true;
								iLocal_3374 = 1;
								func_198(2, iParam0);
								MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 4);
								MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 20);
								MISC::CLEAR_BIT(&(iLocal_83.f_2[iParam0 /*26*/].f_6), 3);
							}
							else
							{
								func_198(27, iParam0);
							}
						}
					}
				}
			}
		
			if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 7) && bLocal_2651 == false)
			{
				iLocal_3374 = 1;
				func_198(1, iParam0);
				MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 7);
			}
		}
		else
		{
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		
			if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 4) && iLocal_83.f_2[iParam0 /*26*/].f_7 == 5)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL))
				{
					MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 4);
					MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 5);
					iLocal_3374 = 1;
					func_198(24, iParam0);
				}
			}
			else if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 5) && iLocal_83.f_2[iParam0 /*26*/].f_7 == 7)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL))
				{
					MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 5);
					MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 4);
					iLocal_3374 = 1;
					func_198(25, iParam0);
				}
			}
		
			if (!IS_BIT_SET(iLocal_83.f_2[iParam0 /*26*/].f_6, 3) && !IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 3))
			{
				if (iLocal_83.f_2[iParam0 /*26*/].f_7 == 5 && !IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 4))
				{
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON, true);
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_PREV_WEAPON, true);
				
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION))
					{
						func_198(20, iParam0);
						func_197(iParam0, false, false);
						iLocal_3374 = 1;
						MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 3);
					}
				}
			}
		
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT))
			{
				num2 = func_99(iParam0);
			
				switch (num2)
				{
					case 0:
						if (func_195(uLocal_335[iLocal_2448 /*66*/].f_4.f_15))
						{
							func_176(func_98(), true);
							iLocal_3374 = 1;
						}
						break;
				
					case 1:
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							_DISPLAY_HELP_TEXT(func_175(), -1);
						break;
				
					case 3:
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							_DISPLAY_HELP_TEXT(func_173(), -1);
						break;
				
					case 5:
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							_DISPLAY_HELP_TEXT(func_171(), -1);
						break;
				}
			}
		
			if (bLocal_2649)
			{
				if (func_170())
				{
					if (bLocal_3375 == false)
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_2498[iLocal_2484 /*3*/]))
							{
								if (func_221(HUD::GET_BLIP_COORDS(uLocal_2498[iLocal_2484 /*3*/])))
								{
									func_198(9, iParam0);
								
									if (iLocal_3377 != 5)
										CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_3377);
								
									bLocal_2654 = false;
									bLocal_2649 = false;
									bLocal_2650 = true;
									uLocal_335[iLocal_2448 /*66*/].f_4.f_15 = { uLocal_2498[iLocal_2484 /*3*/] };
									uLocal_335[iLocal_2448 /*66*/].f_4.f_5 = { HUD::GET_BLIP_COORDS(uLocal_335[iLocal_2448 /*66*/].f_4.f_15) };
									uLocal_335[iLocal_2448 /*66*/].f_4.f_30 = { 0f, 0f, 0f };
									uLocal_335[iLocal_2448 /*66*/].f_4.f_33 = 0f;
									uLocal_335[iLocal_2448 /*66*/].f_4.f_34 = -1;
									MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 4);
									MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 20);
									func_197(iParam0, false, false);
									SYSTEM::SETTIMERA(0);
									iLocal_3374 = 1;
								}
								else
								{
									func_198(27, iParam0);
								}
							}
						}
					}
				}
			
				if (SYSTEM::TIMERA() > 5000)
				{
					if (iLocal_3377 != 5)
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_3377);
				
					bLocal_2654 = false;
					bLocal_2649 = false;
					bLocal_2650 = true;
				}
			}
			else if (!bLocal_2650)
			{
				if (SYSTEM::TIMERA() > 0)
				{
					if (iLocal_3377 != 5)
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_3377);
				
					bLocal_2649 = false;
					bLocal_2654 = false;
					bLocal_2650 = true;
				}
			}
		}
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}

	HUD::SET_TEXT_RENDER_ID(iLocal_2485);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false))
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_2490, fLocal_2494, fLocal_2495, fLocal_2492, fLocal_2493, 0, 0, 0, 255, 0);

	return;
}

BOOL func_170() // Position - 0x6D36 (27958)
{
	if (CAM::DOES_CAM_EXIST(caLocal_3376))
		if (CAM::IS_CAM_ACTIVE(caLocal_3376))
			return true;

	if (bLocal_2649 || !bLocal_2650)
		return true;

	return false;
}

char* func_171() // Position - 0x6D6B (28011)
{
	if (func_172())
		return "TXS_HT_SKIP_CDM";

	return "TXS_HT_SKIP_CD";
}

BOOL func_172() // Position - 0x6D85 (28037)
{
	if (!IS_BIT_SET(Global_1963593.f_3, 3) && !IS_BIT_SET(Global_1963593.f_3, 2) && MISC::GET_FRAME_COUNT() % Global_262145.f_31169 == 0)
		MISC::SET_BIT(&(Global_1963593.f_3), 2);

	if (!IS_BIT_SET(Global_1963593.f_3, 1) || IS_BIT_SET(Global_1963593.f_3, 2) && !NETWORK::IS_COMMERCE_STORE_OPEN() && !NETWORK::IS_COMMERCE_DATA_FETCH_IN_PROGRESS())
	{
		if (unk_0x483F6369B8CEE24B())
		{
			unk_0x9FA18B5CD8803086(&Global_1963593);
			MISC::SET_BIT(&(Global_1963593.f_3), 1);
		
			if (IS_BIT_SET(Global_1963593.f_3, 2))
				MISC::CLEAR_BIT(&(Global_1963593.f_3), 2);
		}
	}

	if (Global_1963593)
		if (!IS_BIT_SET(Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_203, 31))
			MISC::SET_BIT(&(Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_203), 31);
	else if (IS_BIT_SET(Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_203, 31))
		MISC::CLEAR_BIT(&(Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_203), 31);

	return Global_1963593;
}

char* func_173() // Position - 0x6E7E (28286)
{
	if (func_172())
		return "TXS_HT_SKIP_IFM";

	return "TXS_HT_SKIP_IF";
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x6E98 (28312)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

char* func_175() // Position - 0x6EAF (28335)
{
	return "TXS_HT_SKIP_CE";
}

void func_176(int iParam0, BOOL bParam1) // Position - 0x6EBB (28347)
{
	int num;

	if (_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
	{
		_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_SPEND_TAXI"), iParam0, &num, false, true, false);
		Global_4536600[num /*84*/].f_65.f_16 = bParam1 ? 1 : 0;
	}
	else
	{
		func_177(-iParam0, 0);
		MONEY::NETWORK_SPENT_TAXI(iParam0, false, true, 0, bParam1);
	}

	return;
}

void func_177(int iParam0, int iParam1) // Position - 0x6F04 (28420)
{
	func_179(iParam0, 1, 1, 0);

	if (iParam1 == 1)
		func_178(iParam0, false);

	return;
}

void func_178(int iParam0, BOOL bParam1) // Position - 0x6F22 (28450)
{
	bParam1;
	iParam0 = iParam0;
	return;
}

void func_179(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x6F33 (28467)
{
	int num;
	int num2;
	float num3;

	if (iParam1 < 1)
		iParam1 = 1;

	num = iParam0 * iParam1;
	iParam3 = 0f;

	if (num > 0)
	{
		num3 = 100f - iParam3;
		num2 = SYSTEM::FLOOR((float)num * (num3 / 100f));
	}
	else
	{
		num2 = num;
	}

	Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_206.f_4 = num2;
	Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_206.f_3 = Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_206.f_3 + num2;

	if (iParam2 == 1)
		func_178(num2, false);

	return;
}

var func_180(BOOL bParam0, var uParam1, var uParam2) // Position - 0x6FB6 (28598)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void _NETSHOPPING_PROCESS_TRANSACTION(Hash hParam0, int iParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x6FCD (28621)
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
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case 2115896461:
		case 797947947:
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_27955)
				func_182(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, iParam1, num, 7);
			break;
	
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case -1426920838:
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_182(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, iParam1, num, 7);
			break;
	}

	switch (hParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_SALVAGE_YARD_CLAIM_VEH"):
		case 767920357:
			if (iParam1 > 0 || Global_262145.f_27955)
				func_182(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, iParam1, num, 7);
			break;
	
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case joaat("SERVICE_EARN_TAXI_JOB"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
		case joaat("SERVICE_EARN_SMUGGLER_OPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
		case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
		case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
		case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_PREP"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_FINALE"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_CHICKEN_FACTORY_RAID"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_SALVAGE_YARD"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_SALVAGE_VEHICLE"):
		case joaat("SERVICE_EARN_WEEKLY_OBJECTIVE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_TRUCK"):
		case 67714907:
		case joaat("SERVICE_EARN_AMBIENT_JOB_TOW_TRUCK_WORK"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_SELL_VEH"):
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
		case 1288347381:
		case 1378095557:
		case -1948553812:
		case -1672547752:
		case -485163763:
		case 723646035:
		case 805615290:
			func_182(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, iParam1, num, 7);
			break;
	}

	return;
}

int func_182(var uParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, int iParam6, int iParam7) // Position - 0x794C (31052)
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
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_193()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4538090 = 1;
			return 0;
		}
	
		if (Global_2697899)
		{
			if (hParam3 == joaat("CATEGORY_WEAPON_AMMO") || hParam3 == joaat("CATEGORY_MART"))
			{
				Global_4538091 = 1;
				return 0;
			}
		}
	}

	flag3 = false;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4536600[i /*84*/].f_65.f_2 == 0)
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
			*uParam0 = func_189(transactionId, iParam1, hParam4, hParam2, hParam3, iParam5, false, iParam6, iParam7, 1, true);
		
			if (flag2 && !flag)
			{
			}
		
			if (flag)
			{
				if (*uParam0 != -1)
				{
					Global_4536600[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4536600[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
		
			Global_4538071 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4538089 = 1;
			Global_4538092 = hParam4;
			Global_4538094 = hParam3;
			Global_4538095 = 1;
			Global_4538093 = iParam5;
		}
	
		if (iParam7 & 8 != 0)
		{
			Global_4538092 = hParam4;
			Global_4538094 = hParam3;
			Global_4538095 = 1;
			Global_4538093 = iParam5;
		}
	
		flag4 = false;
	
		if (flag4)
		{
			func_188(1, hParam4);
			Global_4538089 = 0;
		}
	
		if (iParam7 & 4 != 0)
			func_183(-1, hParam4, iParam6, iParam5, -1);
	}

	return 0;
}

void func_183(int iParam0, Hash hParam1, int iParam2, int iParam3, int iParam4) // Position - 0x7AF9 (31481)
{
	switch (hParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_129.f_71), 0);
			break;
	}

	if (iParam0 != -1)
		func_184(iParam0);

	return;
}

void func_184(int iParam0) // Position - 0x7B31 (31537)
{
	BOOL flag;

	flag = false;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		flag = true;

	if (iParam0 != -1)
	{
		if (func_187(iParam0))
			if (!flag)
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
		else if (!flag)
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4536600[iParam0 /*84*/].f_65);
	
		func_185(&Global_4536600[iParam0 /*84*/]);
	}

	return;
}

void func_185(var uParam0) // Position - 0x7B85 (31621)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_65.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_65.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_12 = 0;
	uParam0->f_2 = 0;
	func_186(&(uParam0->f_13));
	func_186(&(uParam0->f_13.f_13));
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13.f_26), "", 32);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13.f_34), "", 24);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13.f_40), "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
	return;
}

void func_186(var uParam0) // Position - 0x7C90 (31888)
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

BOOL func_187(int iParam0) // Position - 0x7CD8 (31960)
{
	if (iParam0 >= 0 && iParam0 < 15)
		return Global_4536600[iParam0 /*84*/].f_65.f_5 == 1;

	return false;
}

void func_188(int iParam0, Hash hParam1) // Position - 0x7D03 (32003)
{
	Global_2699121 = hParam1;
	Global_2699120 = iParam0;
	return;
}

int func_189(int iParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x7D17 (32023)
{
	int i;

	i = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4536600[i /*84*/].f_65.f_2 == 0)
		{
			if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
				iParam0 = i + 900;
		
			Global_4536600[i /*84*/].f_65.f_2 = 1;
			Global_4536600[i /*84*/].f_65.f_1 = iParam5;
			Global_4536600[i /*84*/].f_65.f_3 = iParam1;
			Global_4536600[i /*84*/].f_65.f_4 = hParam2;
			Global_4536600[i /*84*/].f_65.f_7 = hParam3;
			Global_4536600[i /*84*/].f_65.f_5 = 0;
			Global_4536600[i /*84*/].f_65 = iParam0;
			Global_4536600[i /*84*/].f_65.f_6 = hParam4;
			Global_4536600[i /*84*/].f_65.f_11 = iParam8;
			Global_4536600[i /*84*/].f_65.f_10 = iParam7;
			Global_4536600[i /*84*/].f_65.f_13 = iParam9;
			Global_4536600[i /*84*/].f_65.f_12 = 0;
			Global_4536600[i /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4536600[i /*84*/].f_65.f_18 = 0;
			Global_4538071 = 0;
		
			if (bParam6)
				Global_4536600[i /*84*/].f_65.f_5 = 1;
		
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && bParam10)
				func_190(Global_4536600[i /*84*/], i);
		
			return i;
		}
	}

	return -1;
}

void func_190(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84) // Position - 0x7E54 (32340)
{
	Hash eventData;
	int playerBits;

	if (iParam84 < 0)
		return;

	eventData.f_3 = 2147483647;
	eventData = -710178565;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = { uParam0.f_65 };
	eventData.f_3.f_32 = iParam84;
	playerBits = func_192(eventData.f_1);

	if (Global_262145.f_23715 && !Global_262145.f_23716 && !Global_262145.f_23717)
		return;

	if (!(playerBits == 0))
	{
		func_191();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 36, playerBits, eventData);
	}

	return;
}

void func_191() // Position - 0x7EE8 (32488)
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
	return;
}

int func_192(Player plParam0) // Position - 0x7EF8 (32504)
{
	var address;

	if (func_103(plParam0))
		MISC::SET_BIT(&address, plParam0);

	return address;
}

int func_193() // Position - 0x7F13 (32531)
{
	return Global_1574926;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x7F1F (32543)
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_195(Blip blParam0) // Position - 0x7F36 (32566)
{
	int num;

	if (!HUD::DOES_BLIP_EXIST(blParam0))
		return false;

	num = func_110(blParam0);

	if (num == -1)
		return false;

	func_196(num);
	return true;
}

void func_196(int iParam0) // Position - 0x7F65 (32613)
{
	uLocal_335[iLocal_2448 /*66*/].f_47.f_1 = iParam0;
	return;
}

void func_197(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7F7B (32635)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/].f_1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[iParam0 /*26*/].f_1))
		{
			if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1)))
			{
				if (bParam2)
					TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1));
			
				if (bParam1)
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1));
				else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1));
			}
		}
	}

	return;
}

void func_198(int iParam0, int iParam1) // Position - 0x806B (32875)
{
	if (!func_40(iLocal_83.f_2[iParam1 /*26*/].f_1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[iParam1 /*26*/].f_1))
		{
			if (!func_220())
			{
				if (iParam0 != 0)
				{
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_3397, 8, NETWORK::NET_TO_PED(iLocal_83.f_2[iParam1 /*26*/].f_1), "FM_TAXI", 0, 1);
				
					if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
						TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam1 /*26*/].f_1), PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
				
					switch (iParam0)
					{
						case 1:
							_CONVERSATION_ADD_LINE(&uLocal_3397, "MPTXIAU", "MPTXI_WT", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 2:
							_CONVERSATION_ADD_LINE(&uLocal_3397, "MPTXIAU", "MPTXI_BJ", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 5:
							_CONVERSATION_ADD_LINE(&uLocal_3397, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 7:
							_CONVERSATION_ADD_LINE(&uLocal_3397, "MPTXIAU", "MPTXI_NM", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 9:
							_CONVERSATION_ADD_LINE(&uLocal_3397, "MPTXIAU", "MPTXI_CD", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 12:
							_CONVERSATION_ADD_LINE(&uLocal_3397, "MPTXIAU", "MPTXI_RA", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 13:
							_CONVERSATION_ADD_LINE(&uLocal_3397, "MPTXIAU", "MPTXI_OE", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 24:
							_CONVERSATION_ADD_LINE(&uLocal_3397, "MPTXIAU", "MPTXI_SR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 25:
							_CONVERSATION_ADD_LINE(&uLocal_3397, "MPTXIAU", "MPTXI_ST", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 26:
							_CONVERSATION_ADD_LINE(&uLocal_3397, "MPTXIAU", "MPTXI_DB", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 27:
							_CONVERSATION_ADD_LINE(&uLocal_3397, "MPTXIAU", "MPTXI_US", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 20:
							_CONVERSATION_ADD_LINE(&uLocal_3397, "MPTXIAU", "MPTXI_SO", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					}
				}
			}
			else
			{
				iParam0 = 0;
			}
		}
	}

	return;
}

int _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x8280 (33408)
{
	func_219(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22449 = 0;
	Global_22451 = 0;
	Global_22456 = 0;
	Global_23433 = 0;
	Global_23435 = 0;
	Global_23439 = 0;
	Global_2883585 = 1;
	return func_200(sParam2, iParam3, false);
}

BOOL func_200(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x82CE (33486)
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
					func_218();
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
	
		if (func_130(8, -1))
			return 0;
	
		Global_22518 = { Global_22512 };
		func_217();
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
			
				if (func_208())
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
		
			if (func_207())
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
		
			func_206();
			Global_22452 = bParam2;
		}
	
		Global_22444 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22061, sParam0, 24);
		Global_21308 = 0;
		func_205();
		func_201();
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
		func_218();
	}

	return 0;
}

void func_201() // Position - 0x859C (34204)
{
	if (!func_202())
		return;

	if (Global_22448)
	{
		TEXT_LABEL_COPY(&(Global_1973514.f_1), { Global_22061 }, 4);
		Global_1973514 = Global_8234;
		Global_1973514.f_6 = Global_22452;
	}

	return;
}

BOOL func_202() // Position - 0x85D3 (34259)
{
	if (!Global_262145.f_28435)
		return false;

	if (!Global_79564)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_203(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_203(Player plParam0) // Position - 0x8636 (34358)
{
	return func_113(plParam0, 20);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x8646 (34374)
{
	return -1;
}

void func_205() // Position - 0x864F (34383)
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

void func_206() // Position - 0x8681 (34433)
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

BOOL func_207() // Position - 0x8716 (34582)
{
	if (Global_21083.f_1 == 1 || Global_21083.f_1 == 0)
		return true;

	return false;
}

BOOL func_208() // Position - 0x873D (34621)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x87D6 (34774)
{
	if (func_216(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x8878 (34936)
{
	func_211();
	return Global_114162.f_2367.f_539.f_4321;
}

void func_211() // Position - 0x8891 (34961)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114162.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_212(character) && !func_216(14) || Global_113110)
			{
				if (Global_114162.f_2367.f_539.f_4321 != character && func_212(Global_114162.f_2367.f_539.f_4321))
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

BOOL func_212(eCharacter echParam0) // Position - 0x898E (35214)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x899A (35226)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x89D7 (35287)
{
	if (func_212(character))
		return func_215(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_215(eCharacter echParam0) // Position - 0x89FC (35324)
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_216(int iParam0) // Position - 0x8A0B (35339)
{
	return Global_44199 == iParam0;
}

void func_217() // Position - 0x8A19 (35353)
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

void func_218() // Position - 0x8A71 (35441)
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

void func_219(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x8AC8 (35528)
{
	Global_21896 = { *uParam0 };
	Global_8235 = echParam1;
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

BOOL func_220() // Position - 0x8B1E (35614)
{
	if (Global_22442 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

BOOL func_221(var uParam0, var uParam1, var uParam2) // Position - 0x8B40 (35648)
{
	int i;

	for (i = 0; i < 1; i = i + 1)
	{
		if (!func_51(Global_2739945.f_238[i /*3*/]))
			if (func_161(uParam0, Global_2739945.f_238[i /*3*/], 200f, true))
				return false;
	}

	return true;
}

void func_222() // Position - 0x8B90 (35728)
{
	if (bLocal_2651)
	{
		if (bLocal_2649)
		{
			func_223();
		}
		else if (!CAM::IS_CAM_ACTIVE(caLocal_3376))
		{
			bLocal_2654 = true;
			iLocal_3374 = 1;
		}
		else
		{
			func_223();
		}
	
		bLocal_2649 = true;
		bLocal_2650 = true;
	}
	else
	{
		func_223();
	}

	return;
}

void func_223() // Position - 0x8BD4 (35796)
{
	float blipCoords;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2490, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_2484 = iLocal_2484 + 1;

	if (iLocal_2484 > iLocal_2483 - 1)
		iLocal_2484 = 0;

	if (HUD::DOES_BLIP_EXIST(uLocal_2498[iLocal_2484 /*3*/]))
	{
		blipCoords = { HUD::GET_BLIP_COORDS(uLocal_2498[iLocal_2484 /*3*/]) };
	
		if (!func_51(blipCoords))
			HUD::LOCK_MINIMAP_POSITION(blipCoords, blipCoords.f_1);
	}

	return;
}

void func_224() // Position - 0x8C41 (35905)
{
	if (bLocal_2651)
	{
		if (bLocal_2649)
		{
			func_225();
		}
		else if (!CAM::IS_CAM_ACTIVE(caLocal_3376))
		{
			bLocal_2654 = true;
			iLocal_3374 = 1;
		}
		else
		{
			func_225();
		}
	
		bLocal_2649 = true;
		bLocal_2650 = true;
	}
	else
	{
		func_225();
	}

	return;
}

void func_225() // Position - 0x8C85 (35973)
{
	float blipCoords;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2490, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_2484 = iLocal_2484 - 1;

	if (iLocal_2484 < 0)
	{
		iLocal_2484 = iLocal_2483 - 1;
	
		if (iLocal_2484 < 0)
			iLocal_2484 = 0;
	}

	if (HUD::DOES_BLIP_EXIST(uLocal_2498[iLocal_2484 /*3*/]))
	{
		blipCoords = { HUD::GET_BLIP_COORDS(uLocal_2498[iLocal_2484 /*3*/]) };
	
		if (!func_51(blipCoords))
			HUD::LOCK_MINIMAP_POSITION(blipCoords, blipCoords.f_1);
	}

	return;
}

void func_226(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x8CFD (36093)
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

void func_227(int iParam0) // Position - 0x8DD2 (36306)
{
	if (func_29(iLocal_83.f_2[iParam0 /*26*/]))
	{
		if (!CAM::DOES_CAM_EXIST(caLocal_3376))
		{
			if (!func_234() && !func_130(8, -1) && iLocal_83.f_2[iParam0 /*26*/].f_7 != 6)
			{
				caLocal_3376 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				CAM::ATTACH_CAM_TO_ENTITY(caLocal_3376, NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), uLocal_3386, true);
				func_230(iParam0);
				CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(caLocal_3376, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(true);
				iLocal_3374 = 1;
				Global_113215 = true;
			}
		}
		else if (bLocal_2651)
		{
			if (!Global_113215)
			{
				if (bLocal_2654)
				{
					if (!CAM::IS_CAM_ACTIVE(caLocal_3376))
					{
						iLocal_3377 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
					
						if (iLocal_3377 != 5)
							if (CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() != 4)
								CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(4);
					
						func_64(4, true, -1);
						func_229();
						Global_113215 = true;
						CAM::SET_CAM_ACTIVE(caLocal_3376, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(true);
						func_230(iParam0);
						iLocal_3374 = 1;
						bLocal_2654 = false;
						Global_113215 = true;
					}
				}
			}
		
			if (CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4 && !PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_ENTER) && !func_234() && !func_130(8, -1) && iLocal_83.f_2[iParam0 /*26*/].f_7 != 6)
			{
				if (CAM::IS_CAM_ACTIVE(caLocal_3376))
					func_230(iParam0);
			}
			else if (CAM::IS_CAM_ACTIVE(caLocal_3376) && !func_234() && !func_130(8, -1))
			{
				CAM::SET_CAM_ACTIVE(caLocal_3376, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			
				if (iLocal_3377 != 5)
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_3377);
			
				bLocal_2654 = false;
				bLocal_2649 = false;
				bLocal_2650 = true;
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
				Global_113215 = false;
				HUD::UNLOCK_MINIMAP_POSITION();
				HUD::UNLOCK_MINIMAP_ANGLE();
				HUD::SET_RADAR_ZOOM(0);
				iLocal_3374 = 1;
				func_228();
			}
		}
		else if (CAM::IS_CAM_ACTIVE(caLocal_3376))
		{
			func_230(iParam0);
		}
	}

	return;
}

void func_228() // Position - 0x8FC4 (36804)
{
	int i;

	i = 0;

	for (i = 0; i < iLocal_2483; i = i + 1)
	{
		if (bLocal_2651)
			if (uLocal_62 == uLocal_2498[i /*3*/])
				iLocal_2484 = i;
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2490, "HIGHLIGHT_DESTINATION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2484);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_229() // Position - 0x9011 (36881)
{
	if (!func_51(uLocal_335[iLocal_2448 /*66*/].f_4.f_5))
	{
		if (CAM::DOES_CAM_EXIST(caLocal_3376) && CAM::IS_CAM_ACTIVE(caLocal_3376))
		{
			HUD::LOCK_MINIMAP_POSITION(uLocal_335[iLocal_2448 /*66*/].f_4.f_5, uLocal_335[iLocal_2448 /*66*/].f_4.f_5.f_1);
			HUD::LOCK_MINIMAP_ANGLE(0);
			HUD::SET_RADAR_ZOOM(1400);
		}
	}

	return;
}

void func_230(int iParam0) // Position - 0x906F (36975)
{
	if (CAM::DOES_CAM_EXIST(caLocal_3376))
	{
		func_231(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), &caLocal_3376, uLocal_3390);
		CAM::SET_CAM_FOV(caLocal_3376, fLocal_3389);
		CAM::SET_CAM_NEAR_CLIP(caLocal_3376, 0.01f);
	}

	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 13))
			MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 13);
	}
	else if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 13))
	{
		func_229();
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 13);
	}

	HUD::DONT_TILT_MINIMAP_THIS_FRAME();
	CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
	return;
}

void func_231(Vehicle veParam0, var uParam1, Vector3 vParam2, var uParam3, var uParam4) // Position - 0x910E (37134)
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
			unk3 = { func_233(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, vParam2) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, uLocal_3386)) };
			func_232(unk3, &rotX, &rotZ, 1);
			CAM::SET_CAM_ROT(*uParam1, rotX, rotY, rotZ, 2);
		}
	}

	return;
}

void func_232(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x9175 (37237)
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

Vector3 func_233(float fParam0, var uParam1, var uParam2) // Position - 0x921A (37402)
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

BOOL func_234() // Position - 0x9259 (37465)
{
	return Global_23846;
}

BOOL func_235() // Position - 0x9264 (37476)
{
	if (func_236())
		return true;

	if (func_15(iLocal_2448) != 0)
		return true;

	return false;
}

BOOL func_236() // Position - 0x9287 (37511)
{
	if (func_23(iLocal_2448))
		return true;

	return false;
}

void func_237(int iParam0) // Position - 0x929E (37534)
{
	if (func_235())
		return;

	if (iLocal_83.f_2[iParam0 /*26*/].f_7 == 2 || iLocal_83.f_2[iParam0 /*26*/].f_7 == 4 || iLocal_83.f_2[iParam0 /*26*/].f_7 == 5 || iLocal_83.f_2[iParam0 /*26*/].f_7 == 6 || iLocal_83.f_2[iParam0 /*26*/].f_7 == 7)
	{
		if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 2))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])))
			{
				if (iLocal_83.f_2[iParam0 /*26*/].f_3 != -1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_3)))
				{
					if (iLocal_83.f_2[iParam0 /*26*/].f_3 == iLocal_2448)
					{
						if (ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])) > 5f)
						{
							func_198(12, iParam0);
						
							if (iLocal_2656 > iLocal_2655)
							{
								if (!PED::IS_PED_BEING_JACKED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_3)))))
								{
									MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_3), iParam0);
									PLAYER::REPORT_CRIME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_3)), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
								
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										_DISPLAY_HELP_TEXT("TXI_HWRUN" /*~s~You didn't pay the taxi fare.~n~The Cops have been alerted.*/, -1);
								}
							}
						}
						else if (iLocal_2656 > iLocal_2655)
						{
							if (func_100(PLAYER::PLAYER_ID()) >= iLocal_2656 && MONEY::NETWORK_CAN_SPEND_MONEY(iLocal_2656, false, false, true, -1, 0))
							{
								if (iLocal_83.f_2[iParam0 /*26*/].f_7 == 6)
									func_198(5, iParam0);
								else
									func_198(13, iParam0);
							
								func_176(iLocal_2656, false);
							}
							else
							{
								func_198(7, iParam0);
							
								if (!PED::IS_PED_BEING_JACKED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_3)))))
								{
									MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_3), iParam0);
									PLAYER::REPORT_CRIME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_3)), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
								
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										_DISPLAY_HELP_TEXT("TXI_HNMON" /*~s~You don't have enough cash to pay the taxi fare.~n~The Cops have been alerted.*/, -1);
								}
							}
						}
						else
						{
							if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 27))
							{
								MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 27);
								func_176(0, false);
							}
						
							func_198(13, iParam0);
						}
					
						MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 2);
						_STOPWATCH_DESTROY(&uLocal_2480);
					}
				}
			}
		}
	}

	return;
}

BOOL func_238(int iParam0) // Position - 0x9506 (38150)
{
	char* scaleformName;

	scaleformName = "taxi_display";

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_2488))
	{
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(hLocal_2489);
		iLocal_2490 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(scaleformName);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_2489) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2490))
		{
			if (func_29(iLocal_83.f_2[iParam0 /*26*/]))
			{
				obLocal_2488 = OBJECT::CREATE_OBJECT(hLocal_2489, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), true), false, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_2488, NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), "Chassis"), uLocal_3380, uLocal_3383, false, false, false, false, 2, true, 0);
			
				if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /*Taxi*/))
				{
					HUD::REGISTER_NAMED_RENDERTARGET("taxi" /*Taxi*/, false);
				
					if (!HUD::IS_NAMED_RENDERTARGET_LINKED(ENTITY::GET_ENTITY_MODEL(obLocal_2488)))
						HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(obLocal_2488));
				}
			
				iLocal_2485 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("taxi" /*Taxi*/);
				return true;
			}
		}
	}

	return false;
}

void func_239(int iParam0) // Position - 0x95ED (38381)
{
	int taskSequenceId;

	if (func_242())
	{
		if (iLocal_83.f_2[iParam0 /*26*/].f_7 == 9 && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), 20f, 20f, 3f, false, true, 1))
		{
			STREAMING::REQUEST_ANIM_DICT("TAXI_HAIL");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("TAXI_HAIL"))
			{
				if (uLocal_2459[iParam0] == -1)
					_CONTEXT_ADD_HELP_TEXT(&uLocal_2459[iParam0], 0, "TXM_H01" /*Press ~INPUT_CONTEXT~ to hail a taxi.*/, 1, 0, 0, 0);
			
				if (func_240(uLocal_2459[iParam0], true))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
					{
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
						TASK::TASK_SWAP_WEAPON(0, false);
						TASK::TASK_PLAY_ANIM(0, "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), taskSequenceId);
						TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL", "HAIL_TAXI", 8f, -8f, -1, 48, 0, false, false, false);
					}
				
					if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TXM_H01" /*Press ~INPUT_CONTEXT~ to hail a taxi.*/))
						HUD::CLEAR_HELP(true);
				
					uLocal_335[iLocal_2448 /*66*/].f_4.f_1 = iParam0;
					MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 23);
					MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 22);
					func_73(&uLocal_2459[iParam0]);
				}
			}
		}
		else
		{
			STREAMING::REMOVE_ANIM_DICT("TAXI_HAIL");
			func_73(&uLocal_2459[iParam0]);
		}
	}
	else
	{
		STREAMING::REMOVE_ANIM_DICT("TAXI_HAIL");
		func_73(&uLocal_2459[iParam0]);
	}

	return;
}

BOOL func_240(int iParam0, BOOL bParam1) // Position - 0x9765 (38757)
{
	int num;

	num = func_74(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_77(0))
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

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x981D (38941)
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			func_73(uParam0);
	
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

BOOL func_242() // Position - 0x9948 (39240)
{
	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
	{
		if (uLocal_335[iLocal_2448 /*66*/].f_4.f_1 != -1)
			return false;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			return false;
	
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			return false;
	
		if (func_243(PLAYER::PLAYER_ID(), true, false))
			return false;
	
		if (func_77(0))
			return false;
	
		if (func_127())
			return false;
	
		if (func_132())
			return false;
	
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;
	
		return true;
	}

	return false;
}

BOOL func_243(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x99DC (39388)
{
	if (bParam1)
		if (func_244(plParam0))
			return 1;

	!bParam2;

	if (Global_1845270[plParam0 /*892*/] == -1)
		return 0;

	return 1;
}

BOOL func_244(Player plParam0) // Position - 0x9A0E (39438)
{
	return func_245(plParam0);
}

BOOL func_245(Player plParam0) // Position - 0x9A1C (39452)
{
	return IS_BIT_SET(Global_1845270[plParam0 /*892*/].f_11.f_1, 0);
}

void func_246(int iParam0) // Position - 0x9A33 (39475)
{
	int num;
	int num2;
	var unk;
	var unk2;
	int seat;
	int address;

	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), 10f, 10f, 2f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])) < 3f && !func_254(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0 && iLocal_83.f_2[iParam0 /*26*/].f_7 != 10 && iLocal_83.f_2[iParam0 /*26*/].f_7 != 11 && iLocal_83.f_2[iParam0 /*26*/].f_7 != 12)
	{
		if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_3, 0 + iParam0))
		{
			func_226(&num, &num2, &unk, &unk2, false);
		
			if (num2 > 28 || num2 < -28 || num > 28 || num < -28)
			{
				if (bLocal_2652 == false)
				{
					SYSTEM::SETTIMERA(0);
					bLocal_2652 = true;
				}
			}
			else
			{
				bLocal_2652 = false;
			}
		
			if (bLocal_2652 == true)
			{
				if (SYSTEM::TIMERA() > 275)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_3), 0 + iParam0);
						bLocal_2652 = false;
					}
				}
			}
		}
		else
		{
			if (!IS_BIT_SET(iLocal_2449, 0 + iParam0))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					address = func_253(1191, -1);
				
					if (!IS_BIT_SET(address, 7) || !IS_BIT_SET(address, 8) || !IS_BIT_SET(address, 9))
					{
						if (func_11(&uLocal_2480, 20000, false))
						{
							if (INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_UPRIGHT(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), 1119092736) && !ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !func_251(PLAYER::PLAYER_ID()))
							{
								_DISPLAY_HELP_TEXT("TXM_H02" /*Press ~INPUT_ENTER~ to enter the taxi as a passenger.*/, -1);
							
								if (!IS_BIT_SET(address, 7))
									MISC::SET_BIT(&address, 7);
								else if (!IS_BIT_SET(address, 8))
									MISC::SET_BIT(&address, 8);
								else
									MISC::SET_BIT(&address, 9);
							
								func_248(1191, address, -1, true);
								_STOPWATCH_DESTROY(&uLocal_2480);
								MISC::SET_BIT(&iLocal_2449, 0 + iParam0);
							}
						}
					}
				}
			}
		
			if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_ENTER))
			{
				if (SYSTEM::TIMERB() > 275)
				{
					if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_3, 0 + iParam0))
					{
						if (func_247(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])) == 1)
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), 1, false))
								seat = 1;
							else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), 2, false))
								seat = 2;
							else
								seat = 0;
						else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), 2, false))
							seat = 2;
						else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), 0, false))
							seat = 0;
						else
							seat = 1;
					
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), -1, seat, 1f, 8388608, 0, 0);
						MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_3), 0 + iParam0);
						iLocal_3374 = 1;
					}
				}
			}
			else
			{
				SYSTEM::SETTIMERB(0);
			}
		}
	}
	else
	{
		if (IS_BIT_SET(iLocal_2449, 0 + iParam0))
		{
			MISC::CLEAR_BIT(&iLocal_2449, 0 + iParam0);
		
			if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TXM_H02" /*Press ~INPUT_ENTER~ to enter the taxi as a passenger.*/))
				HUD::CLEAR_HELP(true);
		}
	
		if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_3, 0 + iParam0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				bLocal_2652 = false;
			}
		
			MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_3), 0 + iParam0);
		}
	}

	return;
}

int func_247(Vehicle veParam0) // Position - 0x9DE1 (40417)
{
	var entityCoords;
	var offsetFromEntityInWorldCoords;
	var offsetFromEntityInWorldCoords2;
	Vector3 vector;
	Vector3 vector2;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		else
			return -1;
	
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, 1f, -0.5f, 0f) };
		vector = { offsetFromEntityInWorldCoords - entityCoords };
		offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, -1f, -0.5f, 0f) };
		vector2 = { offsetFromEntityInWorldCoords2 - entityCoords };
	
		if (SYSTEM::VMAG(vector) < SYSTEM::VMAG(vector2))
			return 2;
		else
			return 1;
	}

	return -1;
}

void func_248(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x9E71 (40561)
{
	Hash statName;

	if (iParam0 != 17239)
	{
		statName = func_249(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_249(int iParam0, int iParam1) // Position - 0x9E9F (40607)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_250(iParam1));
}

int func_250(int iParam0) // Position - 0x9EB4 (40628)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_193();
	
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

BOOL func_251(Player plParam0) // Position - 0x9EE8 (40680)
{
	return func_252(plParam0) == joaat("WEAPON_MINIGUN");
}

int func_252(Player plParam0) // Position - 0x9EFC (40700)
{
	return Global_1887694[plParam0 /*611*/].f_588;
}

int func_253(int iParam0, int iParam1) // Position - 0x9F10 (40720)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 17239)
	{
		statHash = func_249(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_254(Vehicle veParam0, BOOL bParam1) // Position - 0x9F3F (40767)
{
	int i;
	int num;
	Ped pedInVehicleSeat;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
	{
		num = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0) + 1;
	
		for (i = 0; i < num; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, i - 1, false))
			{
				return false;
			}
			else if (!bParam1)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, i - 1, false);
			
				if (PED::IS_PED_INJURED(pedInVehicleSeat))
					return false;
			}
		}
	}

	return true;
}

void func_255(int iParam0) // Position - 0x9FA5 (40869)
{
	if (iLocal_83.f_2[iParam0 /*26*/].f_2 == iLocal_2448)
	{
		if (iLocal_83.f_2[iParam0 /*26*/].f_3 == -1)
		{
			if (iLocal_83.f_2[iParam0 /*26*/].f_7 == 3)
			{
				if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
				{
					if (!func_40(iLocal_83.f_2[iParam0 /*26*/].f_1))
					{
						if (func_29(iLocal_83.f_2[iParam0 /*26*/]))
						{
							if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false))
							{
								func_256(iParam0);
								return;
							}
						}
					}
				}
			}
		}
	}

	func_72(iParam0);
	return;
}

void func_256(int iParam0) // Position - 0xA038 (41016)
{
	if (!HUD::DOES_BLIP_EXIST(uLocal_2450[iParam0]))
	{
		uLocal_2450[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]));
		HUD::SET_BLIP_SPRITE(uLocal_2450[iParam0], BLIP_TAXI);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_2450[iParam0], "TXM_BLIP" /*Taxi*/);
		HUD::SET_BLIP_FLASHES(uLocal_2450[iParam0], true);
		HUD::SET_BLIP_FLASH_TIMER(uLocal_2450[iParam0], 7000);
		MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 12);
	}

	return;
}

void func_257(int iParam0) // Position - 0xA0AE (41134)
{
	if (!IS_BIT_SET(Global_2739945.f_879, 1))
		if (HUD::DOES_BLIP_EXIST(uLocal_2450[iParam0]))
			MISC::SET_BIT(&(Global_2739945.f_879), 1);

	if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_1, 0))
		if (iLocal_83.f_2[iParam0 /*26*/].f_2 == iLocal_2448)
			MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_1), 0);

	return;
}

void func_258(int iParam0) // Position - 0xA10B (41227)
{
	int taskSequenceId;
	int drivingMode;
	float speed;
	int num;
	Vector3 entityCoords;
	BOOL flag;
	Vehicle vehicle;
	Ped playerPed;
	float distanceBetweenCoords;

	if (!func_40(iLocal_83.f_2[iParam0 /*26*/].f_1) && func_29(iLocal_83.f_2[iParam0 /*26*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[iParam0 /*26*/].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[iParam0 /*26*/]))
		{
			num = 3;
			entityCoords = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false) };
		
			if (iLocal_83.f_2[iParam0 /*26*/].f_7 != 12)
			{
				if (iLocal_83.f_2[iParam0 /*26*/].f_7 != 10)
				{
					if (iLocal_83.f_2[iParam0 /*26*/].f_7 != 11)
					{
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 251, true);
					
						if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_3, iParam0))
						{
							if (func_281(iParam0))
							{
								func_62(1, 1, true);
								MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_3), iParam0);
							}
						}
					
						if (iLocal_83.f_2[iParam0 /*26*/].f_7 != 9)
							VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), true);
					}
				}
			}
		
			func_280(iParam0);
		
			switch (iLocal_83.f_2[iParam0 /*26*/].f_7)
			{
				case 0:
					break;
			
				case 1:
					if (iLocal_83.f_2[iParam0 /*26*/].f_2 != -1 && iLocal_83.f_2[iParam0 /*26*/].f_2 == iLocal_2448)
					{
						if (func_38(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_26, 0f, 0f, 0f, false))
						{
							if (func_276(iParam0, _GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_26), &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_29), &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_34), 250))
							{
								uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_34 = -1;
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_26, 12f, 0, ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])), drivingMode, 45f - 20f, 20f);
							}
						}
						else if (!func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD, true))
						{
							drivingMode = iLocal_2496;
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_26, 12f, 0, ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])), drivingMode, 45f - 20f, 20f);
						}
					
						MISC::CLEAR_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_2), 21);
					}
					break;
			
				case 2:
					if (iLocal_83.f_2[iParam0 /*26*/].f_2 != -1 && iLocal_83.f_2[iParam0 /*26*/].f_2 == iLocal_2448)
					{
						if (!IS_BIT_SET(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_2, 21))
						{
							if (func_273(entityCoords, uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_26, uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_29, &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_26), &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_29)))
							{
								PED::SET_DRIVER_ABILITY(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 0.5f);
							
								if (IS_BIT_SET(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_2, 14))
									TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_26, uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_29, 0, 60f, false);
								else
									TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_26, uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_29, 3, 60f, false);
							
								iLocal_3374 = 1;
								MISC::SET_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_2), 21);
							}
						}
					
						MISC::CLEAR_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_2), 22);
						MISC::CLEAR_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_2), 23);
					}
					break;
			
				case 3:
					if (iLocal_83.f_2[iParam0 /*26*/].f_2 != -1 && iLocal_83.f_2[iParam0 /*26*/].f_2 == iLocal_2448)
					{
						if (!IS_BIT_SET(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_2, 23))
						{
							VEHICLE::START_VEHICLE_HORN(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), 2500, MISC::GET_HASH_KEY("NORMAL"), false);
							MISC::SET_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_2), 23);
						}
					
						if (!IS_BIT_SET(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_2, 22))
						{
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), true), 5, 5f, 1076627627, -1f, 1f, true);
							iLocal_3374 = 1;
							MISC::SET_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_2), 22);
						}
						else if (!VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])))
						{
							if (!func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_MISSION, true) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])) != 5)
								MISC::CLEAR_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_2), 22);
						}
					}
					break;
			
				case 4:
					if (iLocal_83.f_2[iParam0 /*26*/].f_3 != -1 && iLocal_83.f_2[iParam0 /*26*/].f_3 == iLocal_2448)
					{
						uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_30 = { 0f, 0f, 0f };
						uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_33 = 0f;
						uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_34 = -1;
					}
				
					if (func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_MISSION, true))
						func_197(iParam0, false, false);
				
					STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
				
					if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (ENTITY::HAS_ENTITY_ANIM_FINISHED(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1));
								TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0, false, false, false);
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							if (!VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])))
							{
								if (!func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_MISSION, true))
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), entityCoords, 5, 5f, 1076627627, -1f, 1f, true);
							}
							else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), 0, false))
							{
								TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1));
								TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 8f, -8f, -1, 2, 0, false, false, false);
							}
						}
					}
					break;
			
				case 5:
					if (iLocal_83.f_2[iParam0 /*26*/].f_3 != -1 && iLocal_83.f_2[iParam0 /*26*/].f_3 == iLocal_2448)
					{
						if (func_38(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_30, 0f, 0f, 0f, false) && func_38(iLocal_83.f_2[iParam0 /*26*/].f_8, uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_5, false))
						{
							if (uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_34 == -1)
							{
								if (func_272(iLocal_83.f_2[iParam0 /*26*/].f_8, &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_30), &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_33), iParam0) || func_262(iLocal_83.f_2[iParam0 /*26*/].f_8, &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_30), &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_33), iParam0))
								{
									MISC::SET_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2), 14);
									func_197(iParam0, false, false);
									iLocal_3374 = 1;
								}
							
								uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_34 = 0;
							}
							else
							{
								vehicle = NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]);
							
								if (func_259(&vehicle, iLocal_83.f_2[iParam0 /*26*/].f_8, &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_30), &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_33), &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_34), 1000))
								{
									MISC::CLEAR_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2), 14);
									uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_34 = 0;
									func_197(iParam0, false, false);
									iLocal_3374 = 1;
								}
							}
						}
					
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
						
							if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
							{
								TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1));
								TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0, false, false, false);
							}
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							ENTITY::SET_ENTITY_ANIM_SPEED(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
						}
						else if (!func_38(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_30, 0f, 0f, 0f, false))
						{
							if (!func_35(iParam0))
							{
								if (!func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_PERFORM_SEQUENCE, true))
								{
									speed = 15f;
									drivingMode = iLocal_2496;
									num = 3;
								
									if (IS_BIT_SET(iLocal_83.f_2[iParam0 /*26*/].f_6, 3) || IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 3))
									{
										speed = 20f;
										drivingMode = iLocal_2497;
									}
								
									if (IS_BIT_SET(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2, 14))
										num = 0;
								
									func_197(iParam0, true, true);
									PED::SET_DRIVER_ABILITY(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 0.5f);
									TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_30, speed, drivingMode, 45f);
									TASK::TASK_VEHICLE_PARK(0, NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_30, uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_33, num, 60f, true);
									TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
									TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), taskSequenceId);
									TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
									iLocal_3374 = 1;
								}
							}
						}
					
						MISC::CLEAR_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2), 24);
						MISC::CLEAR_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2), 25);
					}
					break;
			
				case 6:
					if (iLocal_83.f_2[iParam0 /*26*/].f_3 != -1 && iLocal_83.f_2[iParam0 /*26*/].f_3 == iLocal_2448)
					{
						if (!IS_BIT_SET(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2, 24))
						{
							if (!func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_PERFORM_SEQUENCE, true))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), true), 5, 5f, 1076627627, -1f, 1f, true);
								iLocal_3374 = 1;
								MISC::SET_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2), 24);
							}
						}
						else
						{
							if (!VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])))
								if (!func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_MISSION, true) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])) != 5)
									MISC::CLEAR_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2), 24);
						
							func_34(iParam0, true);
						}
					}
					break;
			
				case 7:
					if (iLocal_83.f_2[iParam0 /*26*/].f_3 != -1 && iLocal_83.f_2[iParam0 /*26*/].f_3 == iLocal_2448)
					{
						iLocal_3374 = 1;
					
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (ENTITY::HAS_ENTITY_ANIM_FINISHED(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
							
								if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
								{
									TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1));
									TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0, false, false, false);
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							if (!IS_BIT_SET(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2, 25))
							{
								if (!func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_MISSION, true) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])) != 5)
								{
									func_197(iParam0, true, true);
									TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), true), ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1)), 3, 60f, false);
								}
							
								MISC::SET_BIT(&(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_3 /*66*/].f_4.f_2), 25);
							}
						}
					}
					break;
			
				case 8:
					break;
			
				case 9:
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false);
				
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
					
						if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
						{
							TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1));
							TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0, false, false, false);
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
					}
					else if (!func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_MISSION, true))
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), true), 8, 12f, 786599, 400f, -1f, false);
					}
					break;
			
				case 10:
				case 11:
					func_34(iParam0, false);
				
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						ENTITY::STOP_ENTITY_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "leanover_enter", "ODDJOBS@TAXI@DRIVER", -2f);
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						ENTITY::STOP_ENTITY_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "leanover_idle", "ODDJOBS@TAXI@DRIVER", -2f);
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						ENTITY::STOP_ENTITY_ANIM(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), "leanover_exit", "ODDJOBS@TAXI@DRIVER", -2f);
				
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 251, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), false);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false);
				
					if (!PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1)) && !func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_SMART_FLEE_PED, true) && !func_36(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_0xF10822AA, true) && TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/])) != 8)
					{
						if (iLocal_83.f_2[iParam0 /*26*/].f_7 == 11)
							flag = true;
					
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), -1, false) != NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1))
							flag = true;
					
						if (iLocal_83.f_2[iParam0 /*26*/].f_4 != -1)
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_4)))
								playerPed = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_4)));
					
						if (ENTITY::DOES_ENTITY_EXIST(playerPed))
							ENTITY::IS_ENTITY_DEAD(playerPed, false);
						else
							playerPed = 0;
					
						if (flag)
						{
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 2, false);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 65536, true);
						
							if (ENTITY::DOES_ENTITY_EXIST(playerPed))
								TASK::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), playerPed, 500f, -1, false, false);
							else
								TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), entityCoords, 500f, -1, false, false);
						}
						else
						{
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 65536, false);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 2, true);
						
							if (ENTITY::DOES_ENTITY_EXIST(playerPed))
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), playerPed, 8, 25f, 790564, 200f, 15f, true);
							else
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), entityCoords, 8, 25f, 790564, 200f, 15f, true);
						}
					}
				
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), true);
					break;
			
				case 12:
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/]))
					{
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false);
						func_53(&iLocal_83.f_2[iParam0 /*26*/]);
					}
				
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/].f_1))
					{
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 251, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), false);
						func_53(&(iLocal_83.f_2[iParam0 /*26*/].f_1));
					}
				
					return;
			}
		}
	
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		{
			distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), true), true);
		
			if (distanceBetweenCoords < fLocal_3395)
			{
				fLocal_3395 = distanceBetweenCoords;
				iLocal_3394 = iParam0;
			}
		}
	}

	if (iLocal_83.f_2[iParam0 /*26*/].f_7 == 12)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[iParam0 /*26*/]))
			{
				VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false);
				func_53(&iLocal_83.f_2[iParam0 /*26*/]);
			}
		}
	
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_40(iLocal_83.f_2[iParam0 /*26*/].f_1))
				{
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), 251, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1), false);
				}
			
				func_53(&(iLocal_83.f_2[iParam0 /*26*/].f_1));
			}
		}
	}

	return;
}

BOOL func_259(var uParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) // Position - 0xB58E (46478)
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
	float num5;
	int nthClosestVehicleNodeId;
	BOOL flag;
	int nodeFlags;
	BOOL p10;
	BOOL flag2;
	BOOL flag3;
	int num6;
	int num7;
	int flags;
	var density;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	float outHeading;

	num = 3f;
	num2 = 2.5f;
	num3 = 0;
	flag = false;
	nodeFlags = 1;

	if (!func_261(fParam1))
		nodeFlags = 9;

	p10 = true;
	num6 = *uParam6 + 2;
	num7 = 50;
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fParam1 - (float)iParam7, fParam1.f_1 - (float)iParam7, fParam1 + (float)iParam7, fParam1.f_1 + (float)iParam7);

	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fParam1 - (float)iParam7, fParam1.f_1 - (float)iParam7, fParam1 + (float)iParam7, fParam1.f_1 + (float)iParam7))
	{
		while (!flag && *uParam6 < num6)
		{
			if (fParam1.f_2 == 1f)
				num = 0f;
		
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(fParam1, *uParam6, &offsetFromCoordAndHeadingInWorldCoords, &outHeading, &outNumLanes, nodeFlags, num, num2))
			{
				nthClosestVehicleNodeId = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(offsetFromCoordAndHeadingInWorldCoords, 1, nodeFlags, 1077936128, 0);
			
				if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(nthClosestVehicleNodeId))
				{
					if (PATHFIND::GET_CLOSEST_ROAD(offsetFromCoordAndHeadingInWorldCoords, 1f, 1, &unk6, &unk3, &value2, &value, &num4, p10))
					{
						if (outHeading < 90f || outHeading >= 270f)
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
									xOffset = 4.5f * SYSTEM::TO_FLOAT(value2) * 0.5f;
								else
									xOffset = 4.5f * SYSTEM::TO_FLOAT(value2);
							
								if (flag2)
									if (value2 > 2)
										xOffset = xOffset + ((float)value2 - 2 * 1f);
								else if (value2 > 1)
									xOffset = xOffset + ((float)value2 - 1 * 1f);
							}
							else
							{
								if (flag2)
									xOffset = 4.5f * SYSTEM::TO_FLOAT(value) * 0.5f;
								else
									xOffset = 4.5f * SYSTEM::TO_FLOAT(value);
							
								if (flag2)
									if (value > 2)
										xOffset = xOffset + ((float)value - 2 * 1f);
								else if (value > 1)
									xOffset = xOffset + ((float)value - 1 * 1f);
							}
						
							if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(offsetFromCoordAndHeadingInWorldCoords, &density, &flags))
							{
								if (!(flags & 64 == 0))
									xOffset = xOffset + (0.9f * num4);
							
								if (!(flags & 4 == 0))
									xOffset = xOffset + -0.7f;
							}
						}
					
						num5 = fParam1.f_2 - offsetFromCoordAndHeadingInWorldCoords.f_2;
					
						if (num5 < 0f)
							num5 = num5 * -1f;
					
						if (func_260(fParam1, offsetFromCoordAndHeadingInWorldCoords) || num5 < 0.5f)
						{
							offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(offsetFromCoordAndHeadingInWorldCoords, outHeading, xOffset, 0f, 0f) };
						
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
								num3 = *uParam0;
						
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(offsetFromCoordAndHeadingInWorldCoords, 3f, 3f, 3f, num3))
							{
								func_272(offsetFromCoordAndHeadingInWorldCoords, &offsetFromCoordAndHeadingInWorldCoords, &outHeading, 1) || func_262(offsetFromCoordAndHeadingInWorldCoords, &offsetFromCoordAndHeadingInWorldCoords, &outHeading, 1);
								flag = true;
							}
						}
					}
				}
			}
		
			*uParam6 = *uParam6 + 1;
		
			if (*uParam6 >= num7)
			{
				offsetFromCoordAndHeadingInWorldCoords = { fParam1 };
				flag = true;
			}
		}
	}

	if (flag)
	{
		*uParam4 = { offsetFromCoordAndHeadingInWorldCoords };
		*uParam5 = outHeading;
		vector = { fParam1 - *uParam4 };
		vector.f_2 = 0f;
		fLocal_2482 = SYSTEM::VMAG(vector);
		fLocal_2482 != 0f;
		return true;
	}

	return false;
}

BOOL func_260(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xB8CD (47309)
{
	float num;
	float num2;

	num2 = vParam3.f_2 - vParam0.f_2;

	if (num2 < 0f)
		num2 = num2 * -1f;

	if (vParam0.f_2 <= 1f)
	{
		func_137("\\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\\n");
		return true;
	}

	num = SYSTEM::VDIST(vParam0, vParam3);
	num = num / 1.75f;

	if (num2 < num)
	{
		func_137("\\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\\n");
		return true;
	}

	return false;
}

BOOL func_261(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xB92F (47407)
{
	const char* nameOfZone;

	nameOfZone = ZONE::GET_NAME_OF_ZONE(vParam0);

	if (MISC::ARE_STRINGS_EQUAL("SanAnd" /*San Andreas*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Alamo" /*Alamo Sea*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("ArmyB" /*Fort Zancudo*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("BhamCa" /*Banham Canyon*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Baytre" /*Baytree Canyon*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("BradT" /*Braddock Tunnel*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("BradP" /*Braddock Pass*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CANNY" /*Raton Canyon*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CCreak" /*Cassidy Creek*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("ChamH" /*Chamberlain Hills*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CHU" /*Chumash*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("COSI" /*Countryside*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CMSW" /*Chiliad Mountain State Wilderness*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Cypre" /*Cypress Flats*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Desrt" /*Grand Senora Desert*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("ELGorl" /*El Gordo Lighthouse*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Galli" /*Galileo Park*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Galfish" /*Galilee*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Harmo" /*Harmony*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("HumLab" /*Humane Labs and Research*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Jail" /*Bolingbroke Penitentiary*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("LAct" /*Land Act Reservoir*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("LDam" /*Land Act Dam*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Lago" /*Lago Zancudo*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("MTChil" /*Mount Chiliad*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("MTJose" /*Mount Josiah*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("MTGordo" /*Mount Gordo*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("NCHU" /*North Chumash*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Oceana" /*Pacific Ocean*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Palmpow" /*Palmer-Taylor Power Station*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PBluff" /*Pacific Bluffs*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Paleto" /*Paleto Bay*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PalCov" /*Paleto Cove*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PalFor" /*Paleto Forest*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PalHigh" /*Palomino Highlands*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("RTRAK" /*Redwood Lights Track*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Rancho" /*Rancho*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("SANDY" /*Sandy Shores*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("TongvaH" /*Tongva Hills*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("TongvaV" /*Tongva Valley*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Zenora" /*Senora Freeway*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Slab" /*Stab City*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("WindF" /*Ron Alternates Wind Farm*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Zancudo" /*Zancudo River*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("SanChia" /*San Chianski Mountain Range*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("zQ_UAR" /*Davis Quartz*/, nameOfZone))
		return true;

	return false;
}

BOOL func_262(Vector3 vParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4, int iParam5) // Position - 0xBC23 (48163)
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

	if (func_271(vParam0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*pvParam3 = { 1261.5804f, -3332.6846f, 5.4191f };
		*pfParam4 = 163.87f;
		return true;
	}
	else if (func_271(vParam0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*pvParam3 = { -1577.1599f, 5166.5103f, 19.1864f };
		*pfParam4 = 0f;
		return true;
	}
	else if (func_271(vParam0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
	{
		*pvParam3 = { -856.6151f, 163.7361f, 65.093f };
		*pfParam4 = 355.3355f;
		return true;
	}
	else if (func_271(vParam0, -39.2005f, -1473.5498f, -100f, 10.6133f, -1430.0988f, 100f))
	{
		*pvParam3 = { -15.5181f, -1456.3999f, 29.4244f };
		*pfParam4 = 94.6893f;
		return true;
	}
	else if (func_271(vParam0, 1964.7421f, 3792.59f, -100f, 1992.6361f, 3840.2532f, 100f))
	{
		*pvParam3 = { 1996.3718f, 3818.8308f, 31.1612f };
		*pfParam4 = 170.0221f;
		return true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -68.218704f, -1086.951f, -100f, -10.545177f, -1106.8953f, 100f, 43.5f, false, true))
	{
		*pvParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*pfParam4 = 324.1257f;
		return true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 398.78986f, -1651.4174f, -100f, 423.83725f, -1619.4325f, 100f, 45f, false, true))
	{
		*pvParam3 = { 416.871f, -1613.0814f, 28.1401f };
		*pfParam4 = 227.9333f;
		return true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -988.8535f, -2553.1775f, -100f, -1041.4865f, -2644.97f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*pvParam3 = { -1039.5425f, -2574.467f, 12.7566f };
		*pfParam4 = 162.2744f;
		return true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -906.90204f, -2600.4607f, -100f, -959.76514f, -2692.0571f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*pvParam3 = { -911.1597f, -2676.1316f, 12.7567f };
		*pfParam4 = 338.9414f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 28f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -209.33719f, -2011.0995f, 26.620369f, -257.22247f, -2076.9631f, 36.620373f, 30f, false, true))
	{
		*pvParam3 = { -211.8546f, -2030.7715f, 26.6204f };
		*pfParam4 = 154.4302f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 159f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -804.05005f, 4216.4116f, 204.4872f, -509.06787f, 4135.1904f, 123.25017f, 250f, false, true))
	{
		*pvParam3 = { -623.3622f, 3996f, 120.7669f };
		*pfParam4 = 37.8784f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 180f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -2203.1675f, 183.35495f, 167.40219f, -2311.5874f, 434.3828f, 195.46692f, 138.5f, false, true))
	{
		*pvParam3 = { -2294.9446f, 376.2506f, 173.4669f };
		*pfParam4 = 296.6963f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 10f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -2041.478f, -553.21594f, -0.089962f, -1787.0801f, -768.08856f, 37.999176f, 220f, false, true))
	{
		*pvParam3 = { -1897.0765f, -557.3334f, 10.7279f };
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
		
			*pvParam3 = { unk3[num /*3*/] };
		
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
		*pvParam3 = { -411.3629f, 1174.5865f, 324.6421f };
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
				*pvParam3 = { -1380.1006f, 95.1566f, 53.5054f };
				*pfParam4 = 4.555f;
				break;
		
			case 2:
				*pvParam3 = { -1379.1394f, 84.2472f, 53.0592f };
				*pfParam4 = 6.9278f;
				break;
		
			case 3:
				*pvParam3 = { -1378.4266f, 74.5077f, 52.6622f };
				*pfParam4 = 2.6813f;
				break;
		
			case 4:
				*pvParam3 = { -1384.1774f, 73.9207f, 52.7438f };
				*pfParam4 = 5.542f;
				break;
		
			case 5:
				*pvParam3 = { -1381.1179f, 35.7838f, 52.659f };
				*pfParam4 = 7.6687f;
				break;
		
			case 6:
				*pvParam3 = { -1383.7413f, 64.1491f, 52.6647f };
				*pfParam4 = 2.5572f;
				break;
		
			case 7:
				*pvParam3 = { -1382.6162f, 49.6876f, 52.6585f };
				*pfParam4 = 3.0185f;
				break;
		
			default:
				*pvParam3 = { -1383.2987f, 54.4598f, 52.6562f };
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
					*pvParam3 = { 50.9889f, -1092.5254f, 28.2152f };
					*pfParam4 = 150.8833f;
					break;
			
				case 2:
					*pvParam3 = { 46.7725f, -1099.7506f, 28.1639f };
					*pfParam4 = 149.4322f;
					break;
			
				case 3:
					*pvParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*pfParam4 = 154.1378f;
					break;
			
				case 4:
					*pvParam3 = { 38.1922f, -1113.3936f, 28.1507f };
					*pfParam4 = 146.3778f;
					break;
			
				case 5:
					*pvParam3 = { 13.0436f, -1124.7668f, 27.7359f };
					*pfParam4 = 91.163f;
					break;
			
				case 6:
					*pvParam3 = { 1.4336f, -1125.0425f, 27.1705f };
					*pfParam4 = 91.0578f;
					break;
			
				case 7:
					*pvParam3 = { -11.1811f, -1125.8105f, 26.3688f };
					*pfParam4 = 91.866f;
					break;
			
				default:
					*pvParam3 = { 21.9431f, -1124.5731f, 27.9417f };
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
					*pvParam3 = { -1023.9825f, -2489.8818f, 19.0755f };
					*pfParam4 = 148.7004f;
					break;
			
				case 2:
					*pvParam3 = { -1029.9678f, -2500.4377f, 19.0803f };
					*pfParam4 = 148.7144f;
					break;
			
				case 3:
					*pvParam3 = { -1070.5457f, -2570.8594f, 19.0836f };
					*pfParam4 = 150.0955f;
					break;
			
				case 4:
					*pvParam3 = { -1056.0647f, -2545.6619f, 19.0809f };
					*pfParam4 = 149.5649f;
					break;
			
				case 5:
					*pvParam3 = { -1050.578f, -2536.2185f, 19.0824f };
					*pfParam4 = 150.7363f;
					break;
			
				case 6:
					*pvParam3 = { -1036.0316f, -2510.902f, 19.0794f };
					*pfParam4 = 147.2113f;
					break;
			
				case 7:
					*pvParam3 = { -1044.4872f, -2525.5342f, 19.079f };
					*pfParam4 = 150.7597f;
					break;
			
				default:
					*pvParam3 = { -1064.5002f, -2560.6528f, 19.0905f };
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
					*pvParam3 = { -1044.7413f, -2528.786f, 12.7568f };
					*pfParam4 = 150.9439f;
					break;
			
				case 2:
					*pvParam3 = { -1050.7631f, -2539.4978f, 12.7566f };
					*pfParam4 = 150.851f;
					break;
			
				case 3:
					*pvParam3 = { -1054.9523f, -2546.8596f, 12.7566f };
					*pfParam4 = 149.9285f;
					break;
			
				case 4:
					*pvParam3 = { -1060.3972f, -2556.898f, 12.6066f };
					*pfParam4 = 150.8244f;
					break;
			
				case 5:
					*pvParam3 = { -1020.7437f, -2490.0842f, 12.6396f };
					*pfParam4 = 148.6134f;
					break;
			
				case 6:
					*pvParam3 = { -1076.9043f, -2589.1794f, 12.6858f };
					*pfParam4 = 149.0112f;
					break;
			
				case 7:
					*pvParam3 = { -1026.3866f, -2501.9521f, 12.6923f };
					*pfParam4 = 149.7553f;
					break;
			
				default:
					*pvParam3 = { -1070.5065f, -2578.3892f, 12.6932f };
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
					*pvParam3 = { -1067.8463f, -2708.9397f, 19.0588f };
					*pfParam4 = 230.9025f;
					break;
			
				case 2:
					*pvParam3 = { -1058.2238f, -2716.2166f, 19.06f };
					*pfParam4 = 237.1285f;
					break;
			
				case 3:
					*pvParam3 = { -1004.5667f, -2744.797f, 19.0811f };
					*pfParam4 = 255.6885f;
					break;
			
				case 4:
					*pvParam3 = { -1049.5092f, -2721.58f, 19.0546f };
					*pfParam4 = 242.3581f;
					break;
			
				case 5:
					*pvParam3 = { -1017.1544f, -2740.1174f, 19.0525f };
					*pfParam4 = 243.5798f;
					break;
			
				case 6:
					*pvParam3 = { -1042.0872f, -2726.0767f, 19.0452f };
					*pfParam4 = 240.2381f;
					break;
			
				case 7:
					*pvParam3 = { -1027.353f, -2734.4617f, 19.0509f };
					*pfParam4 = 239.8703f;
					break;
			
				default:
					*pvParam3 = { -1033.7404f, -2730.7458f, 19.0521f };
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
					*pvParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*pfParam4 = 265.8022f;
					break;
			
				case 2:
					*pvParam3 = { -980.6166f, -2748.535f, 12.757f };
					*pfParam4 = 263.5472f;
					break;
			
				case 3:
					*pvParam3 = { -987.6072f, -2747.2734f, 12.6069f };
					*pfParam4 = 257.2886f;
					break;
			
				case 4:
					*pvParam3 = { -1006.8151f, -2739.345f, 12.6334f };
					*pfParam4 = 242.1315f;
					break;
			
				case 5:
					*pvParam3 = { -1051.8304f, -2713.5527f, 12.6333f };
					*pfParam4 = 239.9312f;
					break;
			
				case 6:
					*pvParam3 = { -1041.0035f, -2719.6467f, 12.6402f };
					*pfParam4 = 240.1081f;
					break;
			
				case 7:
					*pvParam3 = { -1023.8323f, -2729.4646f, 12.6445f };
					*pfParam4 = 239.6737f;
					break;
			
				default:
					*pvParam3 = { -1012.8478f, -2735.1724f, 12.6656f };
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
				*pvParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*pfParam4 = 93.132f;
				break;
		
			case 2:
				*pvParam3 = { 859.283f, -996.4102f, 28.7865f };
				*pfParam4 = 92.2581f;
				break;
		
			case 3:
				*pvParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*pfParam4 = 92.714f;
				break;
		
			case 4:
				*pvParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*pfParam4 = 92.8628f;
				break;
		
			case 5:
				*pvParam3 = { 831.2605f, -1009.556f, 25.599f };
				*pfParam4 = 268.6186f;
				break;
		
			case 6:
				*pvParam3 = { 844.6506f, -1010.0903f, 26.9894f };
				*pfParam4 = 270.076f;
				break;
		
			case 7:
				*pvParam3 = { 852.2498f, -1010.1324f, 27.8091f };
				*pfParam4 = 269.722f;
				break;
		
			default:
				*pvParam3 = { 861.4028f, -1010.0249f, 28.808f };
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
				*pvParam3 = { 703.2726f, -1067.6997f, 21.4765f };
				*pfParam4 = 181.3629f;
				break;
		
			case 2:
				*pvParam3 = { 715.2089f, -1070.3993f, 21.2708f };
				*pfParam4 = 175.43623f;
				break;
		
			case 3:
				*pvParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*pfParam4 = 181.0347f;
				break;
		
			case 4:
				*pvParam3 = { 709.6841f, -1086.78f, 21.419f };
				*pfParam4 = 233.169f;
				break;
		
			case 5:
				*pvParam3 = { 703.807f, -1057.8665f, 21.4152f };
				*pfParam4 = 170.1609f;
				break;
		
			case 6:
				*pvParam3 = { 708.1994f, -1048.1937f, 21.216f };
				*pfParam4 = 134.2729f;
				break;
		
			case 7:
				*pvParam3 = { 711.1124f, -1069.4229f, 21.3129f };
				*pfParam4 = 177.9198f;
				break;
		
			default:
				*pvParam3 = { 703.545f, -1078.7177f, 21.3987f };
				*pfParam4 = 180.5686f;
				break;
		}
	
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 31f;

	if (func_268(3, vector))
	{
		if (func_267(vector, 3, 0, false))
		{
			*pvParam3 = { -1520.1213f, 2731.511f, 16.6437f };
			*pfParam4 = 48.1572f;
			return true;
		}
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 77.2f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 1535.9866f, -2041.497f, 68.21275f, 1529.3566f, -2204.4634f, 96.111946f, 105f, false, true))
	{
		*pvParam3 = { 1540.75f, -2051.49f, 76.85f };
		*pfParam4 = 255.41f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 51.1739f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 1185.8104f, -1768.3672f, 28.311447f, 1369.068f, -1701.4515f, 66.25389f, 70f, true, true))
	{
		if (func_266(vector, 1283.3257f, -1731.5222f, 51.78555f, 17f))
		{
			*pvParam3 = { 1283.3257f, -1731.5222f, 51.78555f };
			*pfParam4 = 275.4274f;
			return true;
		}
	
		if (func_266(vector, 1334.3861f, -1709.7625f, 55.70131f, 41f))
		{
			*pvParam3 = { 1334.3861f, -1709.7625f, 55.70131f };
			*pfParam4 = 275.4411f;
			return true;
		}
	
		if (func_266(vector, 1246.1661f, -1750.6246f, 45.35691f, 28f))
		{
			*pvParam3 = { 1246.1661f, -1750.6246f, 45.35691f };
			*pfParam4 = 301.2981f;
			return true;
		}
	
		if (func_266(vector, 1196.2716f, -1753.0505f, 37.63976f, 32f))
		{
			*pvParam3 = { 1196.2716f, -1753.0505f, 37.63976f };
			*pfParam4 = 209.4354f;
			return true;
		}
	
		*pvParam3 = { 1283.3257f, -1731.5222f, 51.78555f };
		*pfParam4 = 275.4274f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 25f;

	if (func_266(vector, -1693.3018f, -1109.1305f, 17.89778f, 240f))
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -1538.9806f, -941.1323f, 10.566226f, -1715.5703f, -1139.7659f, 52.203613f, 110f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -1739.989f, -1115.973f, 10.087262f, -1800.5149f, -1187.1798f, 52.0172f, 25f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -1801.7664f, -1180.2517f, 4.017236f, -1857.7177f, -1244.6284f, 38.49653f, 85f, false, true))
		{
			*pvParam3 = { -1624.4452f, -976.9755f, 12.0175f };
			*pfParam4 = 141.167f;
			return true;
		}
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 10f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -1140.8896f, -1573.1349f, -6.566939f, -1067.0844f, -1675.9756f, 23.531528f, 52f, false, true))
	{
		*pvParam3 = { -1095.63f, -1577.24f, 3.82f };
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
				*pvParam3 = { 1369.246f, 1147.6527f, 112.7592f };
				*pfParam4 = 182.0998f;
				break;
		
			case 1:
				*pvParam3 = { 1360.8483f, 1139.121f, 112.7592f };
				*pfParam4 = 83.3356f;
				break;
		
			case 2:
				*pvParam3 = { 1364.7513f, 1154.3668f, 112.7592f };
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
		*pvParam3 = { 1782.1903f, 3300.076f, 40.4593f };
		*pfParam4 = 142.426f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 7f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -695.7981f, -1379.6785f, 24.481243f, -777.3731f, -1491.13f, -3.594945f, 72f, false, true))
	{
		*pvParam3 = { -658.2056f, -1388.7886f, 9.499f };
		*pfParam4 = 174.6945f;
		return true;
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 325f;

	if (SYSTEM::VDIST2(vector, -75.59782f, -818.60815f, 325.1745f) < 58f * 58f)
	{
		*pvParam3 = { -142.367f, -895.0251f, 28.191f };
		*pfParam4 = 71.6555f;
		return true;
	}

	if (!func_264())
	{
		vector = { vParam0 };
	
		if (vParam0.f_2 == 1f)
			vector.f_2 = 36.1141f;
	
		if (func_268(7, vector))
		{
			if (func_267(vector, 7, 0, false))
			{
				*pvParam3 = { -1012.3105f, -465.1634f, 36.1141f };
				*pfParam4 = 112.1485f;
				return true;
			}
		}
	}

	vector = { vParam0 };

	if (vParam0.f_2 == 1f)
		vector.f_2 = 12.7091f;

	if (func_268(2, vector))
	{
		if (func_267(vector, 2, 0, false))
		{
			endRange = 4;
		
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange))
				{
					case 0:
						*pvParam3 = { -979.95f, -2746.1086f, 12.7091f };
						*pfParam4 = 91.4929f;
						break;
				
					case 1:
						*pvParam3 = { -1025.1935f, -2728.2175f, 12.6647f };
						*pfParam4 = 239.0041f;
						break;
				
					case 2:
						*pvParam3 = { -1051.315f, -2713.0686f, 12.6676f };
						*pfParam4 = 236.4666f;
						break;
				
					case 3:
						*pvParam3 = { -1095.7417f, -2637.8713f, 12.6461f };
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
						*pvParam3 = { -1023.9825f, -2489.8818f, 19.0755f };
						*pfParam4 = 148.7004f;
						break;
				
					case 2:
						*pvParam3 = { -1029.9678f, -2500.4377f, 19.0803f };
						*pfParam4 = 148.7144f;
						break;
				
					case 3:
						*pvParam3 = { -1070.5457f, -2570.8594f, 19.0836f };
						*pfParam4 = 150.0955f;
						break;
				
					case 4:
						*pvParam3 = { -1056.0647f, -2545.6619f, 19.0809f };
						*pfParam4 = 149.5649f;
						break;
				
					case 5:
						*pvParam3 = { -1050.578f, -2536.2185f, 19.0824f };
						*pfParam4 = 150.7363f;
						break;
				
					case 6:
						*pvParam3 = { -1036.0316f, -2510.902f, 19.0794f };
						*pfParam4 = 147.2113f;
						break;
				
					case 7:
						*pvParam3 = { -1044.4872f, -2525.5342f, 19.079f };
						*pfParam4 = 150.7597f;
						break;
				
					default:
						*pvParam3 = { -1064.5002f, -2560.6528f, 19.0905f };
						*pfParam4 = 150.7081f;
						break;
				}
			}
		
			return true;
		}
	}

	unk22 = { -509.5746f, 4938.9185f, 146.3271f };
	num4 = 232.0109f;
	num5 = func_263(vParam0, unk22);
	unk25 = { 2450.6035f, 5129.2236f, 45.9722f };
	num6 = 241.1957f;
	num7 = func_263(vParam0, unk25);
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
		*pvParam3 = { unk22 };
		*pfParam4 = num4;
	
		if (num7 < num5)
		{
			*pvParam3 = { unk25 };
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
		*pvParam3 = { unk25 };
		*pfParam4 = num6;
	
		if (num5 < num7)
		{
			*pvParam3 = { unk22 };
			*pfParam4 = num4;
		}
	
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 6f;

	if (func_39(vector, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 85.05448f, -2511.8838f, -2.996267f, -57.599766f, -2412.7163f, 15.000947f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 7.516524f, -2546.741f, 1.331557f, -177.32684f, -2417.0466f, 19.160444f, 80f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -260.03537f, -2419.9783f, 1.399635f, -27.26375f, -2423.8484f, 25.00064f, 80f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -187.4256f, -2516.0857f, -6.849975f, -186.7518f, -2438.1487f, 25.001602f, 40f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -73.60813f, -2538.5637f, -6.989857f, -183.25558f, -2465.145f, 25.020298f, 70f, false, true))
		{
			endRange = 2;
		
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, endRange) == 0)
			{
				*pvParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*pfParam4 = 253.9545f;
			}
			else
			{
				*pvParam3 = { -189.6824f, -2531.6492f, 5.0031f };
				*pfParam4 = 0.0408f;
			}
		
			return true;
		}
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 28.4f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 412.27902f, 6481.8677f, 25.808207f, 468.9353f, 6442.7524f, 45.607273f, 24f, false, true))
	{
		*pvParam3 = { 445.231f, 6476.948f, 28.4862f };
		*pfParam4 = 219.4788f;
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 28.2065f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 476.5394f, -1301.548f, 44.824577f, 499.58224f, -1339.0245f, 26.31703f, 35f, false, true))
	{
		*pvParam3 = { 498.185f, -1288.5354f, 28.1923f };
		*pfParam4 = 181.3208f;
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 28.2065f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 496.98163f, -1412.2551f, 43.293907f, 497.269f, -1339.3639f, 26.316479f, 40f, false, true))
	{
		*pvParam3 = { 504.1738f, -1421.2511f, 28.2065f };
		*pfParam4 = 83.2905f;
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 73f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 951.1704f, -147.00467f, 71.54326f, 1005.24493f, -98.44745f, 95.626785f, 70f, false, true))
	{
		*pvParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*pfParam4 = 58.9938f;
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 52f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 1137.0221f, 89.068535f, 74.89022f, 1267.8208f, 292.01062f, 102.99044f, 195f, false, true))
	{
		*pvParam3 = { 1118.7509f, 262.0209f, 79.8555f };
		*pfParam4 = 52.3086f;
		return true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 1137.0221f, 89.068535f, 71.89022f, 1010.04596f, -91.566986f, 103.45676f, 180f, false, true))
	{
		*pvParam3 = { 1134.0535f, 53.1835f, 79.7553f };
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
			*pvParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*pfParam4 = 162.0019f;
		}
		else
		{
			*pvParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*pfParam4 = 341.8541f;
		}
	
		return true;
	}

	if (vParam0.f_2 == 1f)
		vector.f_2 = 33.5f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, false, true))
	{
		*pvParam3 = { -88.4f, -660.9f, 35f };
		*pfParam4 = -20f;
		return true;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, false, true))
	{
		*pvParam3 = { 61.4f, -653.2f, 32f };
		*pfParam4 = 160f;
		return true;
	}

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.2583f, 5.7109f, 10f, false, true))
	{
		*pvParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*pfParam4 = 140.7302f;
		return true;
	}

	return false;
}

float func_263(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0xDD47 (56647)
{
	return SYSTEM::VDIST2(fParam0, fParam0.f_1, 0f, fParam3, fParam3.f_1, 0f);
}

BOOL func_264() // Position - 0xDD61 (56673)
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (character == CHAR_MICHAEL)
	{
		if (func_265(65))
			return true;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) > 0)
			return true;
	}
	else if (character == CHAR_FRANKLIN)
	{
		if (func_265(66))
			return true;
	}
	else if (character == CHAR_TREVOR)
	{
		if (func_265(65))
			return true;
	}

	return false;
}

BOOL func_265(int iParam0) // Position - 0xDDC0 (56768)
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114162.f_9089.f_99.f_58[iParam0];
}

BOOL func_266(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0xDDED (56813)
{
	float num;

	num = { fParam3 - uParam0 };
	return (num * num) + (num.f_1 * num.f_1) <= fParam6 * fParam6;
}

BOOL func_267(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xDE17 (56855)
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

BOOL func_268(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xEB6B (60267)
{
	return SYSTEM::VDIST2(vParam1, func_270(iParam0)) < func_269(iParam0);
}

float func_269(int iParam0) // Position - 0xEB88 (60296)
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

Vector3 func_270(int iParam0) // Position - 0xEC20 (60448)
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

BOOL func_271(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8) // Position - 0xED0A (60682)
{
	if (fParam0 > fParam3 && fParam0 < fParam6 && fParam0.f_1 > fParam3.f_1 && fParam0.f_1 < fParam6.f_1 && fParam0.f_2 > fParam3.f_2 && fParam0.f_2 < fParam6.f_2)
		return true;

	return false;
}

BOOL func_272(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4, int iParam5) // Position - 0xED61 (60769)
{
	Vector3 vector;

	vector = { uParam0 };

	if (uParam0.f_2 == 1f)
		vector.f_2 = 28f;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 400.9871f, -1659.756f, 26.916147f, 437.65662f, -1617.4789f, 48.341854f, 45f, false, true))
	{
		if (iParam5 < 4)
		{
			*pvParam3 = { 413.7399f, -1608.9109f, 28.161f };
			*pfParam4 = 238.2568f;
		}
		else
		{
			*pvParam3 = { 416.8107f, -1666.5142f, 28.1758f };
			*pfParam4 = 144.8478f;
		}
	
		return true;
	}

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -1112.5862f, -2674.7668f, 12.568037f, -1215.4681f, -2854.5886f, 19.445877f, 41.25f, false, true))
	{
		if (iParam5 < 4)
		{
			*pvParam3 = { -1094.4923f, -2662.2698f, 12.6066f };
			*pfParam4 = 196.0365f;
		}
		else
		{
			*pvParam3 = { -1076.7362f, -2684.0393f, 12.807f };
			*pfParam4 = 211.7278f;
		}
	
		return true;
	}

	return false;
}

BOOL func_273(var uParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xEE6A (61034)
{
	Vector3 outPosition;
	var outPosition2;
	var outPosition3;
	int nthClosestVehicleNodeId;
	int nodeFlags;
	var unk7;
	var unk10;
	var unk13;
	float num;

	nodeFlags = 1;

	if (!func_261(vParam3))
		nodeFlags = 9;

	nthClosestVehicleNodeId = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(vParam3, 1, nodeFlags, 1077936128, 0);

	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(nthClosestVehicleNodeId))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(nthClosestVehicleNodeId, &outPosition);
	
		if (PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(outPosition, 0, &outPosition2) && PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(outPosition, 1, &outPosition3))
		{
			unk7 = { outPosition2 - outPosition };
			unk10 = { -unk7.f_1, unk7, 0f };
			unk13 = { uParam0 - vParam3 };
			num = func_275(unk10, unk13);
		
			if (num < 0f)
			{
				*uParam7 = { outPosition2 };
				*uParam8 = uParam6;
				return true;
			}
			else
			{
				*uParam7 = { outPosition3 };
				*uParam8 = *uParam8 + 180f;
				*uParam8 = func_274(*uParam8, 0f, 360f);
				return true;
			}
		}
		else if (PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(outPosition, -1, &outPosition2))
		{
			*uParam7 = { outPosition2 };
			*uParam8 = uParam6;
			return true;
		}
	}

	return false;
}

float func_274(float fParam0, float fParam1, float fParam2) // Position - 0xEF67 (61287)
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

float func_275(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xEFA9 (61353)
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

BOOL func_276(int iParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3* pvParam4, float* pfParam5, var uParam6, int iParam7) // Position - 0xEFCA (61386)
{
	float num;
	float num2;
	float num3;
	Vehicle vehicle;
	var outNumLanes;
	int nthClosestVehicleNodeId;
	int num4;
	int num5;
	BOOL flag;
	int nodeFlags;

	num = 3f;
	num2 = 2.5f;
	vehicle = 0;
	num4 = *uParam6 + 2;
	num5 = 50;
	flag = false;
	nodeFlags = 1;

	if (!func_261(vParam1))
		nodeFlags = 9;

	func_278(vParam1, vParam1, &(iLocal_83.f_2[iParam0 /*26*/].f_12), &(iLocal_83.f_2[iParam0 /*26*/].f_15), iParam7);

	if (func_277(iLocal_83.f_2[iParam0 /*26*/].f_12, iLocal_83.f_2[iParam0 /*26*/].f_15))
	{
		if (!func_272(vParam1, pvParam4, pfParam5, 1) && !func_262(vParam1, pvParam4, pfParam5, 1))
		{
			while (!flag && *uParam6 < num4)
			{
				if (vParam1.f_2 == 1f)
					num = 0f;
			
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *uParam6, pvParam4, pfParam5, &outNumLanes, nodeFlags, num, num2))
				{
					nthClosestVehicleNodeId = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*pvParam4, 1, nodeFlags, 1077936128, 0);
				
					if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(nthClosestVehicleNodeId))
					{
						num3 = vParam1.f_2 - pvParam4->f_2;
					
						if (num3 < 0f)
							num3 = num3 * -1f;
					
						if (func_260(vParam1, *pvParam4) || num3 < 0.5f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false))
								vehicle = NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]);
						
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(*pvParam4, 3f, 3f, 3f, vehicle))
								flag = true;
						}
					}
				}
			
				*uParam6 = *uParam6 + 1;
			
				if (*uParam6 >= num5)
					flag = true;
			}
		}
		else
		{
			flag = true;
		}
	
		if (flag)
			return true;
	}

	return false;
}

BOOL func_277(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0xF158 (61784)
{
	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fParam0, fParam0.f_1, fParam3, fParam3.f_1))
		return true;

	return false;
}

void func_278(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8) // Position - 0xF178 (61816)
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

	if (!func_148(num, *uParam6, 1056964608, false) || !func_148(num, *uParam6, 1056964608, false))
	{
		*uParam6 = { num };
		*uParam7 = { num2 };
	}

	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
	return;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0xF243 (62019)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_280(int iParam0) // Position - 0xF256 (62038)
{
	if (iLocal_83.f_2[iParam0 /*26*/].f_22 != 0 && !IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 6))
	{
		func_198(iLocal_83.f_2[iParam0 /*26*/].f_22, iParam0);
		MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 6);
	}

	return;
}

BOOL func_281(int iParam0) // Position - 0xF2A2 (62114)
{
	Ped entity1;
	Vehicle entity12;
	Ped playerPed;
	Vector3 entityCoords;
	float num;
	float num2;
	float num3;

	if (func_235())
		return false;

	entity1 = NETWORK::NET_TO_PED(iLocal_83.f_2[iParam0 /*26*/].f_1);
	entity12 = NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]);
	entityCoords = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_83.f_2[iParam0 /*26*/]), false) };

	if (PED::IS_PED_FLEEING(entity1))
		return true;

	if (PED::IS_PED_IN_COMBAT(entity1, 0))
		return true;

	if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(entity12, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(entity12, 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(entity12, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(entity12, 1, 7000))
	{
		return true;
	}
	else if (MISC::IS_BULLET_IN_AREA(entityCoords, 7f, false))
	{
		if (MISC::IS_BULLET_IN_AREA(entityCoords, 7f, true))
			func_282(iLocal_2448, 1, 37);
	
		return true;
	}
	else
	{
		num = 15f;
		num2 = { entityCoords };
		num3 = { num2 };
		num2 = num2 - num;
		num2.f_1 = num2.f_1 - num;
		num2.f_2 = num2.f_2 - num;
		num3 = num3 + num;
		num3.f_1 = num3.f_1 + num;
		num3.f_2 = num3.f_2 + num;
	
		if (MISC::IS_PROJECTILE_IN_AREA(num2, num3, false))
		{
			if (MISC::IS_PROJECTILE_IN_AREA(num2, num3, true))
				func_282(iLocal_2448, 1, 37);
		
			return true;
		}
	}

	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
	{
		playerPed = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()));
	
		if (!PED::IS_PED_INJURED(playerPed))
		{
			if (ENTITY::DOES_ENTITY_EXIST(entity12))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(entity12, playerPed, true))
				{
					func_282(iLocal_2448, 1, 37);
					return true;
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(entity1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(entity1, playerPed, true))
				{
					func_282(iLocal_2448, 1, 37);
					return true;
				}
			}
		}
	}

	iLocal_83.f_2[iParam0 /*26*/].f_3 == -1 && iLocal_83.f_2[iParam0 /*26*/].f_7 == 3;
	return false;
}

void func_282(int iParam0, int iParam1, int iParam2) // Position - 0xF47B (62587)
{
	if (iParam0 != -1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
		if (_NETWORK_IS_PLAYER_VALID(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), true, true))
			PLAYER::REPORT_CRIME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), iParam2, PLAYER::GET_WANTED_LEVEL_THRESHOLD(iParam1));

	return;
}

void func_283() // Position - 0xF4C5 (62661)
{
	if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 19))
	{
		if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 16) && !IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 17))
		{
			if (!func_77(0))
			{
				MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 17);
				func_62(1, 0, false);
				MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 18);
			}
		}
	
		if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 15) && !IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 16))
			if (func_77(0))
				MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 16);
	
		if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 15))
		{
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_3397, 7, 0, "TaxiDispatch", 0, 1);
		
			if (func_284(&uLocal_3397, CHAR_CALL911, "MPTXIAU", "MPTXI_E1", 0, 0))
				MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 15);
		}
	}

	return;
}

BOOL func_284(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, int iParam5) // Position - 0xF5C5 (62917)
{
	const char* str;
	BOOL flag;
	int num;

	if (func_365())
		return false;

	if (func_364())
		return false;

	str = 0;
	flag = false;
	num = -99;
	return func_285(uParam0, echParam1, sParam2, sParam3, 1, iParam5, iParam4, str, flag, num, str, str, -1);
}

BOOL func_285(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, const char* sParam7, BOOL bParam8, int iParam9, const char* sParam10, const char* sParam11, Player plParam12) // Position - 0xF60A (62986)
{
	Hash hashKey;
	Hash hash;
	Hash hashKey2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		return false;

	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		return false;

	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
		return false;

	hashKey = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	hash = func_363(sParam2, sParam3);
	hashKey2 = 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		hashKey2 = MISC::GET_HASH_KEY(sParam7);

	if (func_362(hashKey, hash, hashKey2))
		return true;

	if (!func_357(iParam6))
		return false;

	if (func_354(hashKey, hash, hashKey2))
	{
		if (func_353())
			return false;
	
		func_352();
		return func_292(uParam0, echParam1, plParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}

	if (!func_291(iParam4))
		return false;

	func_286(hashKey, hash, hashKey2, sParam3, iParam4, iParam5, iParam6);
	return false;
}

void func_286(Hash hParam0, Hash hParam1, Hash hParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0xF6EF (63215)
{
	Global_1668462.f_40.f_1 = hParam0;
	Global_1668462.f_40.f_2 = hParam1;
	Global_1668462.f_40.f_3 = hParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1668462.f_40.f_4), sParam3, 16);
	Global_1668462.f_40.f_8 = iParam4;
	Global_1668462.f_40.f_9 = iParam5;
	Global_1668462.f_40.f_14 = iParam6;
	func_287(iParam4);
	func_352();
	Global_1668462.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
	return;
}

void func_287(int iParam0) // Position - 0xF75C (63324)
{
	if (func_290(iParam0))
	{
		func_289();
		return;
	}

	func_288();
	return;
}

void func_288() // Position - 0xF778 (63352)
{
	Global_1668462.f_40.f_10 = 0;
	return;
}

void func_289() // Position - 0xF789 (63369)
{
	Global_1668462.f_40.f_10 = 1;
	return;
}

BOOL func_290(int iParam0) // Position - 0xF79A (63386)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return true;
	
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return false;
	
		default:
		
	}

	return false;
}

BOOL func_291(int iParam0) // Position - 0xF7E2 (63458)
{
	return iParam0 > Global_1668462.f_40.f_8;
}

BOOL func_292(var uParam0, eCharacter echParam1, Player plParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, const char* sParam8, BOOL bParam9, int iParam10, const char* sParam11, const char* sParam12) // Position - 0xF7F5 (63477)
{
	var unk;

	func_351();

	if (iParam6 == 5)
		iParam6 = 0;

	if (iParam5 == 8)
		return func_348(uParam0, sParam3, sParam4);

	if (iParam5 == 4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_226" /*Accept?*/, 16);
		return func_345(uParam0, echParam1, sParam3, sParam4, &unk);
	}

	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
			return func_348(uParam0, sParam3, sParam4);
	
		return func_337(uParam0, echParam1, sParam3, sParam4, iParam7);
	}

	if (iParam5 == 5)
		return func_336(echParam1, plParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);

	if (iParam5 == 2)
		return func_324(echParam1, plParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);

	if (iParam5 == 3)
		return func_323(echParam1, plParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);

	if (iParam5 == 6)
		return func_293(echParam1, plParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);

	return false;
}

BOOL func_293(eCharacter echParam0, Player plParam1, char* sParam2, int iParam3, const char* sParam4, BOOL bParam5, int iParam6, const char* sParam7, const char* sParam8) // Position - 0xF8EF (63727)
{
	BOOL flag;

	func_322();
	flag = true;

	if (func_295(echParam0, plParam1, sParam2, flag, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_294(120000);
		return 1;
	}

	return 0;
}

void func_294(int iParam0) // Position - 0xF926 (63782)
{
	Global_1668462.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1668462.f_40.f_12 = 1;
	return;
}

BOOL func_295(eCharacter echParam0, Player plParam1, char* sParam2, BOOL bParam3, int iParam4, const char* sParam5, BOOL bParam6, int iParam7, const char* sParam8, const char* sParam9) // Position - 0xF949 (63817)
{
	Player player;
	int num;
	const char* playerName;
	int num2;
	char* string1;
	int num3;
	int num4;
	BOOL flag;
	int num5;
	int num6;
	int num7;
	int num8;
	BOOL flag2;

	player = _INVALID_PLAYER_INDEX();
	num = 0;

	if (echParam0 == _CHAR_NULL)
	{
		player = plParam1;
		playerName = PLAYER::GET_PLAYER_NAME(player);
		num = func_316(player);
	
		if (num == 0)
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1668462.f_40.f_13))
				return 0;
	}
	else
	{
		playerName = "";
	}

	num2 = 0;
	string1 = func_315(sParam5, bParam6, &num2);
	num3 = func_313(iParam7, &num2);
	num4 = 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		num4 = num4 + 1;
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
			num4 = num4 + 1;
	}

	if (MISC::ARE_STRINGS_EQUAL(string1, " "))
		string1 = "";

	flag = true;
	num5 = 0;
	num6 = 0;
	num7 = 1;
	num8 = 0;

	if (bParam3)
	{
		num6 = 1;
		num7 = 2;
		num8 = 1;
	
		if (IS_BIT_SET(iParam4, 1))
			num5 = 1;
	}

	if (IS_BIT_SET(iParam4, 2))
		num7 = 2;

	flag2 = false;

	if (!(num2 == 0) || !MISC::IS_STRING_NULL_OR_EMPTY(playerName))
		flag2 = func_312(echParam0, sParam2, num7, string1, num3, playerName, num2, num8, 1, num6, 0, flag, num5, 0, num4, sParam8, sParam9);
	else
		flag2 = func_299(echParam0, sParam2, num7, num8, 1, num6, 0, flag, num5, 0);

	if (!flag2)
		return 0;

	if (IS_BIT_SET(iParam4, 0))
		func_298();

	func_322();
	func_297();
	func_296();
	return 1;
}

void func_296() // Position - 0xFA94 (64148)
{
	Global_1668462.f_57 = 0;
	Global_1668462.f_57.f_1 = 0;
	return;
}

void func_297() // Position - 0xFAAC (64172)
{
	Global_1668462.f_40 = 3;
	return;
}

void func_298() // Position - 0xFABB (64187)
{
	MISC::SET_BIT(&Global_8919, 8);
	return;
}

BOOL func_299(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0xFACC (64204)
{
	int num;
	char* str;
	int num2;
	char* str2;
	int num3;
	char* str3;
	char* str4;
	int num4;

	num = 0;
	str = "NULL";
	num2 = -99;
	str2 = "NULL";
	num3 = 0;
	str3 = "NULL";
	str4 = "NULL";
	num4 = 3;

	if (func_300(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4) == 1)
	{
		if (bParam7 == true)
		{
			Global_9660 = iParam6;
			MISC::SET_BIT(&Global_4546023, 0);
		}
	
		return 1;
	}

	return 0;
}

int func_300(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0xFB38 (64312)
{
	int num;
	int num2;

	iParam13 > 99;
	MISC::ARE_STRINGS_EQUAL(sParam14, sParam15);
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	num = 0;

	switch (iParam16)
	{
		case 0:
			if (Global_21083 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_21083 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_21083 == CHAR_FRANKLIN)
				num = 0;
			else
				num = 1;
			break;
	
		default:
			num = 0;
			break;
	}

	if (num == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				return 0;
	
		if (Global_4546008 == 1)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpemail")) > 0)
			return 0;
	}

	if (func_311() == 0)
	{
		func_309();
		return 0;
	}

	func_308(Global_4546007);
	TEXT_LABEL_ASSIGN_STRING(&Global_4542454[Global_4546007 /*296*/], sParam1, 64);
	Global_4542454[Global_4546007 /*296*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4542454[Global_4546007 /*296*/].f_24 = iParam2;
	}

	Global_4542454[Global_4546007 /*296*/].f_25 = iParam7;
	Global_4542454[Global_4546007 /*296*/].f_26 = iParam8;
	Global_4542454[Global_4546007 /*296*/].f_29 = iParam9;
	Global_4542454[Global_4546007 /*296*/].f_30 = iParam12;
	Global_4542454[Global_4546007 /*296*/].f_31 = iParam11;
	Global_4542454[Global_4546007 /*296*/].f_28 = 0;
	Global_4542454[Global_4546007 /*296*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4542454[Global_4546007 /*296*/].f_33), sParam4, 64);
	Global_4542454[Global_4546007 /*296*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4542454[Global_4546007 /*296*/].f_50), sParam5, 64);
	Global_4542454[Global_4546007 /*296*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4542454[Global_4546007 /*296*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_4542454[Global_4546007 /*296*/].f_83), sParam15, 64);
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	switch (iParam16)
	{
		case 3:
			Global_4542454[Global_4546007 /*296*/].f_291[Global_21083] = 1;
			break;
	
		case 0:
			Global_4542454[Global_4546007 /*296*/].f_291[0] = 1;
			break;
	
		case 2:
			Global_4542454[Global_4546007 /*296*/].f_291[2] = 1;
			break;
	
		case 1:
			Global_4542454[Global_4546007 /*296*/].f_291[1] = 1;
			break;
	}

	if (iParam16 == 3)
	{
		switch (Global_21083)
		{
			case CHAR_MICHAEL:
				func_307(0);
				break;
		
			case CHAR_FRANKLIN:
				func_307(1);
				break;
		
			case CHAR_TREVOR:
				func_307(2);
				break;
		
			case CHAR_MULTIPLAYER:
				func_307(3);
				break;
		
			default:
				break;
		}
	}

	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4546008 = 1;
				break;
		
			case 0:
				Global_4546008 = 1;
				break;
		
			case 2:
				Global_4546008 = 1;
				break;
		
			case 1:
				Global_4546008 = 1;
				break;
		}
	}

	Global_23511[Global_4546007] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21026)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_21072, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_21083)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_21072, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_21072, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_21072, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_21072, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_9758[Global_21083 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_129())
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_21072, true);
	}

	if (!Global_21302 && !IS_BIT_SET(Global_8921, 9))
	{
		if (Global_21083.f_1 == 6)
		{
			func_306(Global_21064, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_303(1);
			func_306(Global_21064, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21063), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1973531 != -1 && echParam0 == Global_1973531)
		num2 = 1;

	func_301(echParam0, sParam1, num2, func_302(PLAYER::PLAYER_ID()));
	return 1;
}

void func_301(eCharacter echParam0, char* sParam1, BOOL bParam2, var uParam3) // Position - 0xFF49 (65353)
{
	eCharacter character;

	if (!func_202())
		return;

	character = echParam0;
	character.f_1 = -1180597171;
	character.f_2 = MISC::GET_HASH_KEY(sParam1);
	character.f_3 = 0;
	character.f_4 = bParam2;
	character.f_5 = uParam3;
	character.f_6 = Global_1973514.f_7;
	character.f_7 = Global_1973514.f_8;
	character.f_8 = Global_1973514.f_9;
	character.f_9 = Global_1973514.f_10;
	character.f_10 = Global_1973514.f_11;
	character.f_11 = Global_1973514.f_12;
	character.f_12 = Global_1973514.f_13;
	character.f_13 = Global_1973514.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&character);

	if (bParam2)
		Global_1973531 = -1;

	return;
}

var func_302(Player plParam0) // Position - 0xFFE4 (65508)
{
	return Global_1845270[plParam0 /*892*/].f_206.f_6;
}

void func_303(int iParam0) // Position - 0xFFF9 (65529)
{
	int i;
	int num;
	int value;
	int j;
	int value2;
	int k;
	int value3;
	int value4;
	int value5;
	int value6;

	Global_23510 = 0;
	Global_9558 = iParam0;
	func_305();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_216(14))
		{
			while (num < 36)
			{
				if (iParam0 == Global_8926[num /*15*/].f_11)
				{
					if (i == Global_8926[num /*15*/].f_4)
					{
						if (Global_9520[i] == 0)
						{
							Global_9482[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8920, 3))
								{
									value = 42;
									Global_21305 = 1;
								}
								else
								{
									value = 255;
									Global_21305 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21064, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_91(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696428)
								if (num == 14)
									func_304(Global_21064, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23505), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
						
							Global_9520[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 36)
			{
				if (iParam0 == Global_8926[num /*15*/].f_11)
				{
					if (i == Global_8926[num /*15*/].f_4)
					{
						if (Global_9520[i] == 0)
						{
							Global_9482[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_114162.f_14145[j /*104*/].f_24 != 0)
										if (Global_114162.f_14145[j /*104*/].f_28 == 0)
											if (Global_114162.f_14145[j /*104*/].f_99[Global_21083] == 1)
												Global_23510 = Global_23510 + 1;
								}
							
								func_304(Global_21064, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23510), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79564)
								{
									value2 = 0;
									value2 = Global_4542452;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4542454[k /*296*/].f_24 != 0)
											if (Global_4542454[k /*296*/].f_28 == 0)
												if (Global_4542454[k /*296*/].f_291[Global_21083] == 1)
													value2 = value2 + 1;
									}
								
									func_304(Global_21064, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21083)
									{
										case CHAR_MICHAEL:
											value3 = Global_45421;
											break;
									
										case CHAR_FRANKLIN:
											value3 = Global_45422;
											break;
									
										case CHAR_TREVOR:
											value3 = Global_45423;
											break;
									
										default:
											break;
									}
								
									func_304(Global_21064, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_304(Global_21064, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23505), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21064, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_91(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8925);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8920, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21064, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_91(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8920, 3))
								{
									value5 = 42;
									Global_21305 = 1;
								}
								else
								{
									value5 = 255;
									Global_21305 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21064, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_91(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21064, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_91(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 25 && MISC::ARE_STRINGS_EQUAL(&Global_8926[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8920, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21064, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_91(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8926[num /*15*/].f_10 == 57 && num == 25)
							{
								value6 = 0;
								value6 = Global_1882385.f_1;
								func_304(Global_21064, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_304(Global_21064, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9520[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_304(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x10574 (66932)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_91(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_91(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_91(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_91(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_91(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_305() // Position - 0x10627 (67111)
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9520[i] = 0;
	}

	return;
}

void func_306(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1064A (67146)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_307(int iParam0) // Position - 0x106AD (67245)
{
	var unk;
	var unk2;

	unk = Global_114162.f_14055[iParam0 /*20*/].f_8;
	unk = unk;
	unk2 = unk2;
	return;
}

void func_308(int iParam0) // Position - 0x106CC (67276)
{
	int clockSeconds;
	int clockMinutes;
	int clockHours;
	int clockDayOfMonth;
	int num;
	int clockYear;

	clockSeconds = CLOCK::GET_CLOCK_SECONDS();
	clockMinutes = CLOCK::GET_CLOCK_MINUTES();
	clockHours = CLOCK::GET_CLOCK_HOURS();
	clockDayOfMonth = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	num = CLOCK::GET_CLOCK_MONTH() + 1;
	clockYear = CLOCK::GET_CLOCK_YEAR();
	Global_4542454[iParam0 /*296*/].f_18 = clockSeconds;
	Global_4542454[iParam0 /*296*/].f_18.f_1 = clockMinutes;
	Global_4542454[iParam0 /*296*/].f_18.f_2 = clockHours;
	Global_4542454[iParam0 /*296*/].f_18.f_3 = clockDayOfMonth;
	Global_4542454[iParam0 /*296*/].f_18.f_4 = num;
	Global_4542454[iParam0 /*296*/].f_18.f_5 = clockYear;
	return;
}

void func_309() // Position - 0x10752 (67410)
{
	int num;
	int num2;
	int num3;

	num = 0;
	num2 = 10;
	num3 = num;
	Global_4546007 = 11;
	Global_4542454[Global_4546007 /*296*/].f_18 = -1;
	Global_4542454[Global_4546007 /*296*/].f_18.f_1 = 0;
	Global_4542454[Global_4546007 /*296*/].f_18.f_2 = 0;
	Global_4542454[Global_4546007 /*296*/].f_18.f_3 = 0;
	Global_4542454[Global_4546007 /*296*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_310(Global_4542454[num3 /*296*/].f_18, Global_4542454[Global_4546007 /*296*/].f_18))
			Global_4546007 = num3;
	
		num3 = num3 + 1;
	}

	Global_4542454[Global_4546007 /*296*/].f_24 = 1;
	return;
}

BOOL func_310(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x10804 (67588)
{
	int num;
	int num2;
	int num3;
	int num4;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			num = iParam0;
			num.f_1 = iParam0.f_1 * 60;
			num.f_2 = iParam0.f_2 * 3600;
			num.f_3 = iParam0.f_3 * 86400;
			num3 = num + num.f_1 + num.f_2 + num.f_3;
			num2 = iParam6;
			num2.f_1 = iParam6.f_1 * 60;
			num2.f_2 = iParam6.f_2 * 3600;
			num2.f_3 = iParam6.f_3 * 86400;
			num4 = num2 + num2.f_1 + num2.f_2 + num2.f_3;
		
			if (num3 > num4 || num3 == num4)
				return true;
			else
				return false;
		}
	}

	return false;
}

int func_311() // Position - 0x108EF (67823)
{
	int num;
	int num2;
	int i;

	num = 0;
	num2 = 10;

	for (i = num; i < num2; i = i + 1)
	{
		if (Global_4542454[i /*296*/].f_24 == 0)
		{
			Global_4546007 = i;
			return 1;
		}
	}

	i = num;
	Global_4546007 = 11;
	Global_4542454[Global_4546007 /*296*/].f_18 = -1;
	Global_4542454[Global_4546007 /*296*/].f_18.f_1 = 0;
	Global_4542454[Global_4546007 /*296*/].f_18.f_2 = 0;
	Global_4542454[Global_4546007 /*296*/].f_18.f_3 = 0;
	Global_4542454[Global_4546007 /*296*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_4542454[i /*296*/].f_24 == 0 || Global_4542454[i /*296*/].f_24 == 1)
			if (!func_310(Global_4542454[i /*296*/].f_18, Global_4542454[Global_4546007 /*296*/].f_18))
				Global_4546007 = i;
	
		i = i + 1;
	}

	if (Global_4546007 == 11)
		return 0;

	Global_4542454[Global_4546007 /*296*/].f_291[0] = 0;
	Global_4542454[Global_4546007 /*296*/].f_291[1] = 0;
	Global_4542454[Global_4546007 /*296*/].f_291[2] = 0;
	return 1;
}

BOOL func_312(eCharacter echParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12, int iParam13, int iParam14, const char* sParam15, const char* sParam16) // Position - 0x10A2A (68138)
{
	int num;

	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
	
		case 1:
			sParam16 = "NULL";
			break;
	
		case 2:
			break;
	
		default:
			break;
	}

	num = 3;

	if (func_300(echParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, num) == 1)
	{
		if (bParam11 == true)
		{
			Global_9660 = iParam10;
			MISC::SET_BIT(&Global_4546023, 0);
		}
	
		return 1;
	}

	return 0;
}

int func_313(int iParam0, var uParam1) // Position - 0x10AAC (68268)
{
	if (iParam0 == -99)
		return -99;

	func_314(2, uParam1);
	return iParam0;
}

void func_314(int iParam0, var uParam1) // Position - 0x10ACB (68299)
{
	BOOL flag;
	BOOL flag2;

	if (iParam0 == 0)
		return;

	flag = false;
	flag2 = false;

	switch (iParam0)
	{
		case 1:
			flag = true;
			break;
	
		case 2:
			flag2 = true;
			break;
	
		default:
			return;
	}

	if (flag)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
		
			case 0:
				*uParam1 = 1;
				break;
		
			case 2:
				*uParam1 = 3;
				break;
		
			default:
				return;
		}
	
		return;
	}

	if (flag2)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
		
			case 0:
				*uParam1 = 2;
				break;
		
			case 1:
				*uParam1 = 3;
				break;
		
			default:
				return;
		}
	
		return;
	}

	return;
}

char* func_315(const char* sParam0, BOOL bParam1, var uParam2) // Position - 0x10B7C (68476)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return sLocal_18;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
		return sLocal_18;

	func_314(1, uParam2);

	if (bParam1)
		return sParam0;

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_316(Player plParam0) // Position - 0x10BB9 (68537)
{
	int num;

	num = func_319(plParam0);

	if (num == -1)
	{
		func_317(plParam0, true);
		return 0;
	}

	Global_1686331[num /*5*/].f_4 = 1;
	return Global_1686331[num /*5*/].f_2;
}

void func_317(Player plParam0, BOOL bParam1) // Position - 0x10BEF (68591)
{
	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return;

	if (func_319(plParam0) != -1)
		return;

	if (Global_1686494)
		if (plParam0 == Global_1686494.f_1)
			return;

	if (func_318(plParam0))
		return;

	if (Global_1686532 >= 32)
		return;

	Global_1686499[Global_1686532] = plParam0;
	Global_1686532 = Global_1686532 + 1;
	bParam1;
	return;
}

BOOL func_318(Player plParam0) // Position - 0x10C5B (68699)
{
	int i;

	i = 0;

	for (i = 0; i < Global_1686532; i = i + 1)
	{
		if (Global_1686499[i] == plParam0)
			return true;
	}

	return false;
}

int func_319(Player plParam0) // Position - 0x10C8D (68749)
{
	int i;

	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return -1;

	if (Global_1686492 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1686492; i = i + 1)
	{
		if (Global_1686331[i /*5*/].f_1 == plParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1686331[i /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1686331[i /*5*/].f_2))
				return i;
		
			func_320(i);
			return -1;
		}
	}

	return -1;
}

void func_320(int iParam0) // Position - 0x10D0C (68876)
{
	var txdString2;
	var txdString1;
	int num;
	int i;

	if (iParam0 >= Global_1686492)
		return;

	if (PED::IS_PEDHEADSHOT_VALID(Global_1686331[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&txdString2, "CHAR_DEFAULT", 64);
	
		if (Global_1686331[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&txdString1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1686331[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&txdString1, &txdString1, &txdString2, &txdString2);
		}
	
		PED::UNREGISTER_PEDHEADSHOT(Global_1686331[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1686492; i = i + 1)
	{
		Global_1686331[num /*5*/] = { Global_1686331[i /*5*/] };
		num = num + 1;
	}

	func_321(&Global_1686331[num /*5*/]);
	Global_1686492 = Global_1686492 - 1;
	return;
}

void func_321(var uParam0) // Position - 0x10DC2 (69058)
{
	*uParam0 = 0;
	uParam0->f_1 = _INVALID_PLAYER_INDEX();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

void func_322() // Position - 0x10DEF (69103)
{
	Global_1668462.f_40.f_9 = 4;
	return;
}

BOOL func_323(eCharacter echParam0, Player plParam1, char* sParam2, int iParam3, const char* sParam4, BOOL bParam5, int iParam6, const char* sParam7, const char* sParam8) // Position - 0x10E00 (69120)
{
	BOOL flag;

	func_322();
	flag = false;
	return func_295(echParam0, plParam1, sParam2, flag, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

BOOL func_324(eCharacter echParam0, Player plParam1, char* sParam2, int iParam3, const char* sParam4, BOOL bParam5, int iParam6, const char* sParam7, const char* sParam8) // Position - 0x10E27 (69159)
{
	BOOL flag;

	flag = false;
	return func_325(echParam0, plParam1, sParam2, flag, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

BOOL func_325(eCharacter echParam0, Player plParam1, char* sParam2, BOOL bParam3, int iParam4, const char* sParam5, BOOL bParam6, int iParam7, const char* sParam8, const char* sParam9) // Position - 0x10E4A (69194)
{
	Player player;
	int num;
	const char* playerName;
	int num2;
	char* string1;
	int num3;
	int num4;
	BOOL flag;
	int num5;
	int num6;
	int num7;
	int num8;
	BOOL flag2;

	player = _INVALID_PLAYER_INDEX();
	num = 0;

	if (echParam0 == _CHAR_NULL)
	{
		player = plParam1;
		playerName = PLAYER::GET_PLAYER_NAME(player);
		num = func_316(player);
	
		if (num == 0)
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1668462.f_40.f_13))
				return false;
	
		Global_23503 = num;
	}
	else
	{
		playerName = "";
	}

	num2 = 0;
	string1 = func_315(sParam5, bParam6, &num2);
	num3 = func_313(iParam7, &num2);
	num4 = 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		num4 = num4 + 1;
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
			num4 = num4 + 1;
	}

	if (MISC::ARE_STRINGS_EQUAL(string1, " "))
		string1 = "";

	flag = true;
	num5 = 0;
	num6 = 0;
	num7 = 1;
	num8 = 0;

	if (bParam3)
	{
		num6 = 1;
		num7 = 2;
		num8 = 1;
	
		if (IS_BIT_SET(iParam4, 1))
			num5 = 1;
	}

	if (IS_BIT_SET(iParam4, 2))
		num7 = 2;

	flag2 = false;

	if (!(num2 == 0) || !MISC::IS_STRING_NULL_OR_EMPTY(playerName))
		flag2 = func_335(echParam0, sParam2, num7, string1, num3, playerName, num2, num8, 1, num6, 0, flag, num5, 0, num4, sParam8, sParam9);
	else
		flag2 = _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(echParam0, sParam2, num7, num8, 1, num6, 0, flag, num5, 0);

	if (!flag2)
		return false;

	if (IS_BIT_SET(iParam4, 0))
		func_298();

	func_326();
	func_297();
	func_296();
	return true;
}

void func_326() // Position - 0x10F9A (69530)
{
	Global_1668462.f_40.f_9 = 3;
	return;
}

BOOL _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x10FAB (69547)
{
	int num;
	char* str;
	int num2;
	char* str2;
	int num3;
	char* str3;
	char* str4;
	int num4;

	MISC::CLEAR_BIT(&Global_8919, 10);
	num = 0;
	str = "NULL";
	num2 = -99;
	str2 = "NULL";
	num3 = 0;
	str3 = "NULL";
	str4 = "NULL";
	num4 = 3;

	if (func_329(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4) == 1)
	{
		if (bParam7 == true)
		{
			Global_9660 = iParam6;
			Global_9563[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_9640 = echParam0;
			MISC::SET_BIT(&Global_8919, 1);
			MISC::SET_BIT(&Global_8919, 7);
		}
	
		return 1;
	}

	return 0;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x1103A (69690)
{
	return Global_2201[character /*29*/].f_3;
}

int func_329(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x1104D (69709)
{
	int num;
	int num2;

	iParam13 > 99;
	MISC::ARE_STRINGS_EQUAL(sParam14, sParam15);
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	num = 0;

	switch (iParam16)
	{
		case 0:
			if (Global_21083 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_21083 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_21083 == CHAR_FRANKLIN)
				num = 0;
			else
				num = 1;
			break;
	
		default:
			num = 0;
			break;
	}

	if (num == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				return 0;
	
		if (Global_114162.f_14055[Global_21083 /*20*/].f_17 == 1)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	}

	if (func_334() == 0)
	{
		func_332();
		return 0;
	}

	func_331(Global_23509);
	TEXT_LABEL_ASSIGN_STRING(&Global_114162.f_14145[Global_23509 /*104*/], sParam1, 64);
	Global_114162.f_14145[Global_23509 /*104*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_114162.f_14145[Global_23509 /*104*/].f_24 = iParam2;
	}

	Global_114162.f_14145[Global_23509 /*104*/].f_25 = iParam7;
	Global_114162.f_14145[Global_23509 /*104*/].f_26 = iParam8;
	Global_114162.f_14145[Global_23509 /*104*/].f_29 = iParam9;
	Global_114162.f_14145[Global_23509 /*104*/].f_30 = iParam12;
	Global_114162.f_14145[Global_23509 /*104*/].f_31 = iParam11;
	Global_114162.f_14145[Global_23509 /*104*/].f_28 = 0;
	Global_114162.f_14145[Global_23509 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114162.f_14145[Global_23509 /*104*/].f_33), sParam4, 64);
	Global_114162.f_14145[Global_23509 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114162.f_14145[Global_23509 /*104*/].f_50), sParam5, 64);
	Global_114162.f_14145[Global_23509 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114162.f_14145[Global_23509 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_114162.f_14145[Global_23509 /*104*/].f_83), sParam15, 64);

	if (IS_BIT_SET(Global_8919, 10))
	{
		Global_114162.f_14145[Global_23509 /*104*/].f_99[0] = 1;
		Global_114162.f_14145[Global_23509 /*104*/].f_99[1] = 1;
		Global_114162.f_14145[Global_23509 /*104*/].f_99[2] = 1;
		Global_9659 = 4;
		func_307(0);
		func_307(2);
		func_307(1);
	}
	else
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		switch (iParam16)
		{
			case 3:
				Global_114162.f_14145[Global_23509 /*104*/].f_99[Global_21083] = 1;
				break;
		
			case 0:
				Global_114162.f_14145[Global_23509 /*104*/].f_99[0] = 1;
				break;
		
			case 2:
				Global_114162.f_14145[Global_23509 /*104*/].f_99[2] = 1;
				break;
		
			case 1:
				Global_114162.f_14145[Global_23509 /*104*/].f_99[1] = 1;
				break;
		}
	
		if (iParam16 == 3)
		{
			switch (Global_21083)
			{
				case CHAR_MICHAEL:
					func_307(0);
					Global_9659 = 0;
					break;
			
				case CHAR_FRANKLIN:
					func_307(1);
					Global_9659 = 1;
					break;
			
				case CHAR_TREVOR:
					func_307(2);
					Global_9659 = 2;
					break;
			
				case CHAR_MULTIPLAYER:
					func_307(3);
					Global_9659 = 3;
					break;
			
				default:
					Global_9659 = 4;
					break;
			}
		}
	}

	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_8919, 10))
		{
			Global_114162.f_14055[0 /*20*/].f_17 = 1;
			Global_114162.f_14055[1 /*20*/].f_17 = 1;
			Global_114162.f_14055[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_114162.f_14055[Global_21083 /*20*/].f_17 = 1;
					break;
			
				case 0:
					Global_114162.f_14055[0 /*20*/].f_17 = 1;
					break;
			
				case 2:
					Global_114162.f_14055[2 /*20*/].f_17 = 1;
					break;
			
				case 1:
					Global_114162.f_14055[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}

	Global_23511[Global_23509] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21026)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_21072, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_21083)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_21072, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_21072, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_21072, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_21072, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_9758[Global_21083 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_129())
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_21072, true);
	}

	if (!Global_21302 && !IS_BIT_SET(Global_8921, 9))
	{
		if (Global_21083.f_1 == 6)
		{
			func_306(Global_21064, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_303(1);
			func_306(Global_21064, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21063), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1973531 != -1 && echParam0 == Global_1973531)
		num2 = 1;

	func_330(echParam0, sParam1, num2, func_302(PLAYER::PLAYER_ID()));
	return 1;
}

void func_330(int iParam0, char* sParam1, BOOL bParam2, var uParam3) // Position - 0x11534 (70964)
{
	int num;

	if (!func_202())
		return;

	num = iParam0;
	num.f_1 = 1654525105;
	num.f_2 = MISC::GET_HASH_KEY(sParam1);
	num.f_3 = 0;
	num.f_4 = bParam2;
	num.f_5 = uParam3;
	num.f_6 = Global_1973514.f_7;
	num.f_7 = Global_1973514.f_8;
	num.f_8 = Global_1973514.f_9;
	num.f_9 = Global_1973514.f_10;
	num.f_10 = Global_1973514.f_11;
	num.f_11 = Global_1973514.f_12;
	num.f_12 = Global_1973514.f_13;
	num.f_13 = Global_1973514.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&num);

	if (bParam2)
		Global_1973531 = -1;

	return;
}

void func_331(int iParam0) // Position - 0x115CF (71119)
{
	int clockSeconds;
	int clockMinutes;
	int clockHours;
	int clockDayOfMonth;
	int num;
	int clockYear;

	clockSeconds = CLOCK::GET_CLOCK_SECONDS();
	clockMinutes = CLOCK::GET_CLOCK_MINUTES();
	clockHours = CLOCK::GET_CLOCK_HOURS();
	clockDayOfMonth = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	num = CLOCK::GET_CLOCK_MONTH() + 1;
	clockYear = CLOCK::GET_CLOCK_YEAR();
	Global_114162.f_14145[iParam0 /*104*/].f_18 = clockSeconds;
	Global_114162.f_14145[iParam0 /*104*/].f_18.f_1 = clockMinutes;
	Global_114162.f_14145[iParam0 /*104*/].f_18.f_2 = clockHours;
	Global_114162.f_14145[iParam0 /*104*/].f_18.f_3 = clockDayOfMonth;
	Global_114162.f_14145[iParam0 /*104*/].f_18.f_4 = num;
	Global_114162.f_14145[iParam0 /*104*/].f_18.f_5 = clockYear;
	return;
}

void func_332() // Position - 0x11661 (71265)
{
	int num;
	int num2;
	int num3;

	if (Global_79564)
	{
		num = 24;
		num2 = 33;
	}
	else
	{
		num = 0;
		num2 = 20;
	}

	num3 = num;
	Global_23509 = 34;
	Global_114162.f_14145[Global_23509 /*104*/].f_18 = -1;
	Global_114162.f_14145[Global_23509 /*104*/].f_18.f_1 = 0;
	Global_114162.f_14145[Global_23509 /*104*/].f_18.f_2 = 0;
	Global_114162.f_14145[Global_23509 /*104*/].f_18.f_3 = 0;
	Global_114162.f_14145[Global_23509 /*104*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_333(Global_114162.f_14145[num3 /*104*/].f_18, Global_114162.f_14145[Global_23509 /*104*/].f_18))
			Global_23509 = num3;
	
		num3 = num3 + 1;
	}

	Global_114162.f_14145[Global_23509 /*104*/].f_24 = 1;
	return;
}

BOOL func_333(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x1172C (71468)
{
	int num;
	int num2;
	int num3;
	int num4;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			num = iParam0;
			num.f_1 = iParam0.f_1 * 60;
			num.f_2 = iParam0.f_2 * 3600;
			num.f_3 = iParam0.f_3 * 86400;
			num3 = num + num.f_1 + num.f_2 + num.f_3;
			num2 = iParam6;
			num2.f_1 = iParam6.f_1 * 60;
			num2.f_2 = iParam6.f_2 * 3600;
			num2.f_3 = iParam6.f_3 * 86400;
			num4 = num2 + num2.f_1 + num2.f_2 + num2.f_3;
		
			if (num3 > num4 || num3 == num4)
				return true;
			else
				return false;
		}
	}

	return false;
}

int func_334() // Position - 0x11817 (71703)
{
	int num;
	int num2;
	int i;

	if (Global_79564)
	{
		num = 24;
		num2 = 33;
	}
	else
	{
		num = 0;
		num2 = 20;
	}

	for (i = num; i < num2; i = i + 1)
	{
		if (Global_114162.f_14145[i /*104*/].f_24 == 0)
		{
			Global_23509 = i;
			return 1;
		}
	}

	i = num;
	Global_23509 = 34;
	Global_114162.f_14145[Global_23509 /*104*/].f_18 = -1;
	Global_114162.f_14145[Global_23509 /*104*/].f_18.f_1 = 0;
	Global_114162.f_14145[Global_23509 /*104*/].f_18.f_2 = 0;
	Global_114162.f_14145[Global_23509 /*104*/].f_18.f_3 = 0;
	Global_114162.f_14145[Global_23509 /*104*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_114162.f_14145[i /*104*/].f_24 == 0 || Global_114162.f_14145[i /*104*/].f_24 == 1)
			if (!func_333(Global_114162.f_14145[i /*104*/].f_18, Global_114162.f_14145[Global_23509 /*104*/].f_18))
				Global_23509 = i;
	
		Global_114162.f_14145[i /*104*/].f_24 == 2;
		i = i + 1;
	}

	if (Global_23509 == 34)
		return 0;

	Global_114162.f_14145[Global_23509 /*104*/].f_99[0] = 0;
	Global_114162.f_14145[Global_23509 /*104*/].f_99[1] = 0;
	Global_114162.f_14145[Global_23509 /*104*/].f_99[2] = 0;
	return 1;
}

BOOL func_335(eCharacter echParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12, int iParam13, int iParam14, const char* sParam15, const char* sParam16) // Position - 0x1197F (72063)
{
	int num;

	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
	
		case 1:
			sParam16 = "NULL";
			break;
	
		case 2:
			break;
	
		default:
			break;
	}

	MISC::CLEAR_BIT(&Global_8919, 10);
	num = 3;

	if (func_329(echParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, num) == 1)
	{
		if (bParam11 == true)
		{
			Global_9660 = iParam10;
			Global_9563[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_9640 = echParam0;
			TEXT_LABEL_ASSIGN_STRING(&Global_9641, sParam5, 64);
			MISC::SET_BIT(&Global_8919, 1);
			MISC::SET_BIT(&Global_8919, 7);
		}
	
		return 1;
	}

	return 0;
}

BOOL func_336(eCharacter echParam0, Player plParam1, char* sParam2, int iParam3, const char* sParam4, BOOL bParam5, int iParam6, const char* sParam7, const char* sParam8) // Position - 0x11A2B (72235)
{
	BOOL flag;

	!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());

	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		return 0;

	func_326();
	flag = true;

	if (func_325(echParam0, plParam1, sParam2, flag, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_294(120000);
		return 1;
	}

	return 0;
}

BOOL func_337(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4) // Position - 0x11A7D (72317)
{
	BOOL flag;
	int num;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
			return 0;

	flag = false;
	num = 12;

	if (IS_BIT_SET(iParam4, 7))
		num = 9;

	if (IS_BIT_SET(iParam4, 4))
		flag = func_344(uParam0, echParam1, sParam2, sParam3, num, 0, 0, true);
	else
		flag = func_343(uParam0, echParam1, sParam2, sParam3, num, 0, 0, true);

	if (flag)
	{
		if (IS_BIT_SET(iParam4, 3))
			func_342(1);
	
		if (IS_BIT_SET(iParam4, 5))
			func_341(1);
	
		func_340();
		func_297();
		func_339();
		func_338();
		return 1;
	}

	return 0;
}

void func_338() // Position - 0x11B14 (72468)
{
	Global_2750581 = 0;
	return;
}

void func_339() // Position - 0x11B21 (72481)
{
	Global_1668462.f_57 = 1;
	Global_1668462.f_57.f_1 = 0;
	return;
}

void func_340() // Position - 0x11B39 (72505)
{
	Global_1668462.f_40.f_9 = 1;
	return;
}

void func_341(int iParam0) // Position - 0x11B4A (72522)
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8921, 0);
	else
		MISC::CLEAR_BIT(&Global_8921, 0);

	return;
}

void func_342(int iParam0) // Position - 0x11B6B (72555)
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 20);
	else
		MISC::CLEAR_BIT(&Global_8919, 20);

	return;
}

BOOL func_343(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x11B8E (72590)
{
	func_219(uParam0, echParam1, sParam2, iParam5, iParam6, 0);
	Global_22490 = 0;
	Global_22449 = true;
	Global_22456 = 0;
	Global_22451 = 0;
	Global_23433 = 0;
	Global_23435 = 0;
	Global_23439 = 0;
	Global_22447 = 0;
	Global_22494 = 0;
	Global_22496 = 0;
	Global_2883585 = 0;
	return func_200(sParam3, iParam4, bParam7);
}

BOOL func_344(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x11BDC (72668)
{
	func_219(uParam0, echParam1, sParam2, iParam5, iParam6, 0);
	Global_22490 = 1;
	Global_22449 = true;
	Global_22456 = 0;
	Global_22451 = 0;
	Global_23433 = 0;
	Global_23435 = 0;
	Global_23439 = 0;
	Global_22447 = 0;
	Global_22494 = 0;
	Global_22496 = 0;
	Global_2883585 = 0;
	return func_200(sParam3, iParam4, bParam7);
}

BOOL func_345(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, char* sParam4) // Position - 0x11C2A (72746)
{
	!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());

	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		return 0;

	if (func_347(uParam0, echParam1, sParam2, sParam3, 9, sParam4, 0, 0, true))
	{
		func_346();
		func_340();
		func_297();
		func_339();
		func_338();
		return 1;
	}

	return 0;
}

void func_346() // Position - 0x11C7C (72828)
{
	Global_23460 = 0;
	return;
}

BOOL func_347(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x11C88 (72840)
{
	func_219(uParam0, echParam1, sParam2, iParam6, iParam7, 0);
	Global_22490 = 0;
	Global_22449 = true;
	Global_22456 = 0;
	Global_22451 = 1;
	Global_23433 = 0;
	Global_23435 = 0;
	Global_23439 = 0;
	Global_22447 = 0;
	Global_22494 = 1;
	Global_22496 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_22590, sParam5, 24);
	Global_2883585 = 0;
	return func_200(sParam3, iParam4, bParam8);
}

BOOL func_348(var uParam0, char* sParam1, char* sParam2) // Position - 0x11CDD (72925)
{
	if (_CONVERSATION_ADD_LINE_0(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_349();
		func_297();
		func_339();
		return 1;
	}

	return 0;
}

void func_349() // Position - 0x11D08 (72968)
{
	Global_1668462.f_40.f_9 = 2;
	return;
}

BOOL _CONVERSATION_ADD_LINE_0(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x11D19 (72985)
{
	func_219(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22449 = false;
	Global_22451 = 0;
	Global_22456 = 0;
	Global_23433 = 0;
	Global_23435 = 0;
	Global_23439 = 0;
	Global_2883585 = 0;
	return func_200(sParam2, iParam3, false);
}

void func_351() // Position - 0x11D67 (73063)
{
	Global_1668462.f_55 = Global_1668462.f_40.f_1;
	Global_1668462.f_55.f_1 = Global_1668462.f_40.f_10;
	return;
}

void func_352() // Position - 0x11D8D (73101)
{
	Global_1668462.f_40 = 1;
	return;
}

BOOL func_353() // Position - 0x11D9C (73116)
{
	return Global_1668462.f_40 == 1;
}

BOOL func_354(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x11DAC (73132)
{
	if (!func_355(hParam0))
		return 0;

	if (Global_1668462.f_40.f_2 != hParam1)
		return 0;

	if (hParam2 != 0)
		if (Global_1668462.f_40.f_3 != hParam2)
			return 0;

	return 1;
}

BOOL func_355(Hash hParam0) // Position - 0x11DEB (73195)
{
	if (!func_356())
		return false;

	if (!(Global_1668462.f_40.f_1 == hParam0))
		return false;

	return true;
}

BOOL func_356() // Position - 0x11E13 (73235)
{
	if (Global_1668462.f_40 == 0)
		return false;

	return true;
}

BOOL func_357(int iParam0) // Position - 0x11E2A (73258)
{
	if (func_361())
		return false;

	if (func_360())
		return false;

	if (func_77(0))
		return false;

	if (Global_1574633.f_18 != 0)
		return false;

	if (Global_1929276 || func_359())
		return false;

	if (!IS_BIT_SET(iParam0, 6))
		if (func_358())
			return false;

	return true;
}

BOOL func_358() // Position - 0x11E8B (73355)
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1685141);
}

int func_359() // Position - 0x11E9F (73375)
{
	if (Global_4521801.f_945 > -1)
		return 1;

	return 0;
}

BOOL func_360() // Position - 0x11EB7 (73399)
{
	return Global_1668462.f_40 == 3;
}

BOOL func_361() // Position - 0x11EC7 (73415)
{
	return func_207();
}

BOOL func_362(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x11ED3 (73427)
{
	if (!func_360())
		return false;

	return func_354(hParam0, hParam1, hParam2);
}

Hash func_363(char* sParam0, char* sParam1) // Position - 0x11EF1 (73457)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);
	TEXT_LABEL_APPEND_STRING(&unk, sParam1, 64);
	return MISC::GET_HASH_KEY(&unk);
}

BOOL func_364() // Position - 0x11F0B (73483)
{
	return Global_2747169.f_1;
}

BOOL func_365() // Position - 0x11F19 (73497)
{
	if (Global_1668650.f_2)
		return true;

	return func_366();
}

BOOL func_366() // Position - 0x11F32 (73522)
{
	return func_361();
}

void func_367(int iParam0) // Position - 0x11F3E (73534)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[iParam0 /*26*/]))
	{
		if (iLocal_83.f_2[iParam0 /*26*/].f_2 == iLocal_2448)
		{
			if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 18))
			{
				if (func_51(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_21))
				{
					if (!func_11(&uLocal_2478, 30000, false))
					{
						if (func_368(iParam0, 1109393408))
						{
							uLocal_335[iLocal_2448 /*66*/].f_4.f_26 = { 0f, 0f, 0f };
							uLocal_335[iLocal_2448 /*66*/].f_4.f_29 = 0f;
							_STOPWATCH_DESTROY(&uLocal_2478);
						}
					}
					else if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 19))
					{
						MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 19);
					}
				}
			}
		}
	}

	return;
}

BOOL func_368(int iParam0, int iParam1) // Position - 0x11FFF (73727)
{
	var unk;
	var entityCoords;
	var unk6;
	int num;

	if (_NETWORK_IS_PLAYER_VALID(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_2)), true, true))
	{
		STREAMING::REQUEST_MODEL(Global_2739945.f_880);
		STREAMING::REQUEST_MODEL(Global_2739945.f_881);
	
		if (STREAMING::HAS_MODEL_LOADED(Global_2739945.f_880))
		{
			if (STREAMING::HAS_MODEL_LOADED(Global_2739945.f_881))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_83.f_2[iParam0 /*26*/].f_2))), true) };
			
				if (!func_389(entityCoords))
				{
					if (func_261(entityCoords))
						if (uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_25 < 2)
							num = 0;
						else if (uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_25 < 5)
							num = 9;
						else
							num = 1;
					else if (uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_25 < 5)
						num = 8;
					else
						num = 9;
				
					if (uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_34 == -1)
						uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_34 = 0;
				
					if (func_385(entityCoords, &unk, &unk6, &(uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_34), num, iParam1))
					{
						uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_21 = { unk };
						uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_24 = unk6;
						uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_25 = 0;
						uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_34 = -1;
						return true;
					}
					else if (uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_34 >= 5)
					{
						uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_25 = uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_25 + 1;
						uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_34 = 0;
					}
				}
				else if (func_369(entityCoords, &unk, &unk6))
				{
					uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_21 = { unk };
					uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_24 = unk6;
					uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_25 = 0;
					uLocal_335[iLocal_83.f_2[iParam0 /*26*/].f_2 /*66*/].f_4.f_34 = -1;
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_369(Vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1225E (74334)
{
	int i;
	int num;
	var unk;
	float num2;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1061.0181f, -2540.235f, 18.669323f, -1023.33246f, -2562.1145f, 31.576157f, 250f, false, true))
	{
		num = 5;
	
		for (i = 0; i < num; i = i + 1)
		{
			switch (i)
			{
				case 0:
					unk = { -988.9172f, -2428.579f, 19.0608f };
					num2 = 148.3473f;
					break;
			
				case 1:
					unk = { -968.0948f, -2392.3274f, 19.056f };
					num2 = 150.0203f;
					break;
			
				case 2:
					unk = { -946.4792f, -2419.6594f, 19.0562f };
					num2 = 91.6004f;
					break;
			
				case 3:
					unk = { -899.0128f, -2432.8423f, 19.0847f };
					num2 = 58.9819f;
					break;
			
				case 4:
					unk = { -890.7079f, -2272.4019f, 18.2077f };
					num2 = 135.9921f;
					break;
			}
		
			if (func_370(unk, 1086324736, 1065353216, 1065353216, 1084227584, true, true, true, 1123024896, false, -1, true, 0, false, 0, false, false))
			{
				*uParam3 = { unk };
				*uParam4 = num2;
				return true;
			}
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1061.0587f, -2540.2537f, 10.944668f, -1023.2968f, -2562.0525f, 18.516848f, 250f, false, true))
	{
		num = 5;
	
		for (i = 0; i < num; i = i + 1)
		{
			switch (i)
			{
				case 0:
					unk = { -996.2861f, -2449.9167f, 12.6953f };
					num2 = 148.5654f;
					break;
			
				case 1:
					unk = { -1006.0941f, -2421.4482f, 12.9447f };
					num2 = 237.9966f;
					break;
			
				case 2:
					unk = { -948.7274f, -2403.462f, 12.7341f };
					num2 = 111.3975f;
					break;
			
				case 3:
					unk = { -895.4352f, -2364.867f, 13.4802f };
					num2 = 142.0129f;
					break;
			
				case 4:
					unk = { -906.6598f, -2419.5898f, 12.6381f };
					num2 = 78.0133f;
					break;
			}
		
			if (func_370(unk, 1086324736, 1065353216, 1065353216, 1084227584, true, true, true, 1123024896, false, -1, true, 0, false, 0, false, false))
			{
				*uParam3 = { unk };
				*uParam4 = num2;
				return true;
			}
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1043.3641f, -2747.29f, 16.960567f, -991.5368f, -2657.6816f, 69.12349f, 200f, false, true))
	{
		num = 5;
	
		for (i = 0; i < num; i = i + 1)
		{
			switch (i)
			{
				case 0:
					unk = { -1084.0027f, -2690.4734f, 19.0585f };
					num2 = 213.4924f;
					break;
			
				case 1:
					unk = { -1087.5422f, -2660.0574f, 19.0615f };
					num2 = 191.5389f;
					break;
			
				case 2:
					unk = { -1083.3998f, -2612.184f, 19.0622f };
					num2 = 153.7453f;
					break;
			
				case 3:
					unk = { -1059.893f, -2570.6555f, 19.061f };
					num2 = 150.5092f;
					break;
			
				case 4:
					unk = { -1038.3873f, -2533.8455f, 19.0498f };
					num2 = 150.637f;
					break;
			}
		
			if (func_370(unk, 1086324736, 1065353216, 1065353216, 1084227584, true, true, true, 1123024896, false, -1, true, 0, false, 0, false, false))
			{
				*uParam3 = { unk };
				*uParam4 = num2;
				return true;
			}
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1047.6465f, -2754.947f, 2.941969f, -991.73145f, -2653.1533f, 16.892282f, 200f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1116.8934f, -2675.6707f, 12.177572f, -1183.9326f, -2789.4507f, 38.951855f, 53f, false, true))
	{
		num = 5;
	
		for (i = 0; i < num; i = i + 1)
		{
			switch (i)
			{
				case 0:
					unk = { -1076.4076f, -2693.8457f, 12.6509f };
					num2 = 221.0395f;
					break;
			
				case 1:
					unk = { -1121.4222f, -2703.1462f, 12.9444f };
					num2 = 326.1454f;
					break;
			
				case 2:
					unk = { -1095.9696f, -2644.1775f, 12.6382f };
					num2 = 182.0544f;
					break;
			
				case 3:
					unk = { -1084.0457f, -2601.4124f, 12.6823f };
					num2 = 153.5335f;
					break;
			
				case 4:
					unk = { -1049.5753f, -2589.945f, 12.6066f };
					num2 = 135.7366f;
					break;
			}
		
			if (func_370(unk, 1086324736, 1065353216, 1065353216, 1084227584, true, true, true, 1123024896, false, -1, true, 0, false, 0, false, false))
			{
				*uParam3 = { unk };
				*uParam4 = num2;
				return true;
			}
		}
	}

	return false;
}

BOOL func_370(float fParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, int iParam10, BOOL bParam11, int iParam12, BOOL bParam13, int iParam14, BOOL bParam15, int iParam16, BOOL bParam17, BOOL bParam18) // Position - 0x12793 (75667)
{
	Global_2635516.f_2 = 0;

	if (iParam3 > 0f)
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(fParam0, iParam3))
			return 0;

	if (iParam4 > 0f)
		if (PED::IS_ANY_PED_NEAR_POINT(fParam0, fParam0.f_1, fParam0.f_2 + 1f, iParam4) || PED::IS_ANY_PED_NEAR_POINT(fParam0, iParam4))
			return 0;

	if (iParam5 > 0f)
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(fParam0, iParam5, bParam18))
			return 0;

	Global_2635516.f_2 = Global_2635516.f_2 + 1;

	if (bParam13)
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(fParam0, 2.5f) > 0)
			return 0;

	Global_2635516.f_2 = Global_2635516.f_2 + 1;

	if (iParam14 > 0f)
		if (func_379(fParam0, iParam14, true, true, bParam15, bParam17, bParam11, bParam15, false))
			return 0;

	Global_2635516.f_2 = Global_2635516.f_2 + 1;

	if (bParam8)
		if (iParam6 > 0f)
			if (func_371(fParam0, iParam6, bParam7, bParam9, iParam10, bParam11, iParam12, iParam16, bParam17))
				return 0;

	Global_2635516.f_2 = Global_2635516.f_2 + 1;
	return 1;
}

BOOL func_371(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x128A5 (75941)
{
	Player i;
	Player player;
	int num;

	if (bParam4 && !bParam7)
	{
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				num = iParam6;
			
				if (iParam9 > 0f)
					num = iParam9;
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_375(PLAYER::PLAYER_ID()), vParam0, true) <= num + fParam3)
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
						return true;
			}
		}
	}

	for (i = 0; i < 32; i = i + 1)
	{
		player = i;
	
		if (_NETWORK_IS_PLAYER_VALID(player, true, true))
		{
			if (!func_373(player, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), player))
			{
				if (bParam4 == true || bParam4 == false && player != PLAYER::PLAYER_ID())
				{
					if (func_372(player) || !bParam10 && !Global_2657994[player /*467*/].f_273)
					{
						num = iParam6;
					
						if (iParam9 > 0f)
							if (!(PLAYER::GET_PLAYER_TEAM(player) == -1))
								if (PLAYER::GET_PLAYER_TEAM(player) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
									num = iParam9;
					
						if (!bParam7)
							if (bParam5 || bParam5 == false && PLAYER::GET_PLAYER_TEAM(player) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || PLAYER::GET_PLAYER_TEAM(player) == -1)
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_375(player), vParam0, true) <= num + fParam3)
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(player, vParam0, fParam3))
										return true;
						else if (PLAYER::GET_PLAYER_TEAM(player) != iParam8 || PLAYER::GET_PLAYER_TEAM(player) == -1)
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_375(player), vParam0, true) <= num + fParam3)
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(player, vParam0, fParam3))
									return true;
					}
				}
			}
		}
	}

	return false;
}

BOOL func_372(Player plParam0) // Position - 0x12A5D (76381)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(plParam0)) || Global_2657994[plParam0 /*467*/].f_258)
		return true;

	return false;
}

BOOL func_373(Player plParam0, int iParam1) // Position - 0x12A89 (76425)
{
	BOOL flag;

	if (!func_103(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_374(-1, false) == 8;
	else
		flag = Global_1845270[plParam0 /*892*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_374(int iParam0, BOOL bParam1) // Position - 0x12AE2 (76514)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_193();

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

Vector3 func_375(Player plParam0) // Position - 0x12B23 (76579)
{
	Player player;

	player = plParam0;

	if (func_378() && Global_1845270[player /*892*/].f_867 && !func_51(Global_1845270[player /*892*/].f_868))
		return Global_1845270[player /*892*/].f_868;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_377(false) && func_376())
		return CAM::GET_FINAL_RENDERED_CAM_COORD();

	return _GET_PLAYER_COORDS(plParam0);
}

BOOL func_376() // Position - 0x12B98 (76696)
{
	return IS_BIT_SET(Global_1958240, 5);
}

BOOL func_377(BOOL bParam0) // Position - 0x12BA6 (76710)
{
	bParam0;
	return Global_1575058;
}

var func_378() // Position - 0x12BB7 (76727)
{
	return Global_2684721.f_19;
}

BOOL func_379(Vector3 vParam0, var uParam1, var uParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x12BC5 (76741)
{
	Player i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = i;
	
		if (bParam8 == true && PLAYER::PLAYER_ID() != player || bParam8 == false)
		{
			if (_NETWORK_IS_PLAYER_VALID(player, bParam4, bParam5))
			{
				if (bParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), player))
				{
					if (!bParam7 || !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(player)) && func_372(player))
					{
						if (!bParam6 || bParam6 == true && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(player) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam9 && bParam6 && func_380(player))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(player)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(_GET_PLAYER_COORDS(player), vParam0, true) < iParam3)
									return true;
							}
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_380(Player plParam0) // Position - 0x12CC9 (77001)
{
	if (func_384(PLAYER::PLAYER_ID(), plParam0))
		return true;

	Global_2707766 = { GET_GAMER_HANDLE_PLAYER(plParam0) };

	if (NETWORK::NETWORK_IS_FRIEND(&Global_2707766))
		return true;

	if (func_381(PLAYER::PLAYER_ID(), plParam0))
		return true;

	return false;
}

BOOL func_381(Player plParam0, Player plParam1) // Position - 0x12D10 (77072)
{
	Player player;

	player = func_382(plParam0);

	if (func_103(player))
		if (player == func_382(plParam1))
			return true;

	return false;
}

Player func_382(Player plParam0) // Position - 0x12D39 (77113)
{
	if (func_103(plParam0))
		return Global_1887694[plParam0 /*611*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x12D5C (77148)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_384(Player plParam0, Player plParam1) // Position - 0x12D73 (77171)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707766 = { GET_GAMER_HANDLE_PLAYER(plParam0) };
		Global_2707779 = { GET_GAMER_HANDLE_PLAYER(plParam1) };
	
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707766))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707779))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707696, 35, &Global_2707766);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707731, 35, &Global_2707779);
			
				if (Global_2707696 == Global_2707731)
					return true;
			}
		}
	}

	return false;
}

BOOL func_385(Vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7) // Position - 0x12DE0 (77280)
{
	Vector3 outPosition;
	Vector3 vector;
	var outVec1;
	float outHeading;
	var outNumLanes;
	int num;
	BOOL flag;
	int num2;
	float num3;
	float num4;
	var offsetFromCoordAndHeadingInWorldCoords;
	float x1;
	float x2;

	outHeading = 0f;
	num = 1;

	if (iParam6 == 0)
		num = 0;

	flag = false;
	num2 = 0;
	num3 = 100f;
	num4 = 2.5f;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam0, *uParam5, &outPosition, &outHeading, &outNumLanes, iParam6, num3, num4))
		{
			if (SYSTEM::VDIST2(vParam0, outPosition) <= 50f * 50f)
			{
				while (!flag && num2 < 5)
				{
					if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&outPosition, &vector, &outVec1, 0f, 180f, iParam7, num, 1, 0))
					{
						outHeading = func_388(0f, 0f, 0f, outVec1, 1);
					
						if (func_386(vParam0, vector, 120f, iParam7))
						{
							if (func_370(*uParam3, 5f, 2f, 1f, 6f, true, true, true, 120f, false, -1, true, 0f, false, 0, false, false))
							{
								flag = true;
								offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, outHeading, 0f, 1f, 0f) };
								x1 = { offsetFromCoordAndHeadingInWorldCoords - vector };
								x2 = { outPosition - vector };
							
								if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x1, x1.f_1, x2, x2.f_1) > 60f)
								{
									outHeading = outHeading + 180f;
									outHeading = func_274(outHeading, 0f, 360f);
								}
							
								*uParam3 = { vector };
								*uParam4 = outHeading;
								return true;
							}
							else
							{
								num2 = num2 + 1;
							}
						}
						else
						{
							num2 = num2 + 1;
						}
					}
					else
					{
						num2 = num2 + 1;
					}
				}
			}
		
			*uParam5 = *uParam5 + 1;
		}
		else
		{
			*uParam5 = *uParam5 + 1;
		}
	}

	return false;
}

BOOL func_386(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, int iParam7) // Position - 0x12F5F (77663)
{
	float num;

	num = SYSTEM::VDIST2(vParam0, vParam3);

	if (num >= fParam6 * fParam6)
		return false;

	if (num <= iParam7 * iParam7)
		return false;

	if (CAM::IS_SPHERE_VISIBLE(vParam3, 2.5f))
		return false;

	if (MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(vParam3, 3f, 3f, 3f, 0))
		return false;

	if (func_387(vParam3, false))
		return false;

	return true;
}

BOOL func_387(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x12FCB (77771)
{
	if (func_39(vParam0, -1144.4973f, 43.01712f, 51.94447f, 325f))
	{
		if (func_267(vParam0, 1, 0, false))
			return true;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1319.7686f, 29.526155f, 49.56616f, -1336.5266f, 121.03514f, 75.61888f, 18f, false, true))
			return true;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1360.0197f, 110.13066f, 52.634132f, -1365.276f, 172.06244f, 72.01312f, 52f, false, true))
			return true;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1363.0066f, 170.53304f, 50.00813f, -1296.9033f, 178.81332f, 73.37104f, 35f, false, true))
			return true;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1197.5212f, 199.86429f, 57.04471f, -1298.0396f, 176.13841f, 73.33252f, 34f, false, true))
			return true;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1103.7449f, 221.13667f, 55.34814f, -1208.3938f, 191.09093f, 79.137085f, 45f, false, true))
			return true;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -989.03284f, -89.39376f, 32.48801f, -1086.2109f, -115.70765f, 50.650505f, 70f, false, true))
			return true;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -958.5481f, -111.54555f, 30.764324f, -1132.6853f, 190.78412f, 73.903656f, 70f, false, true))
			return true;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1077.0282f, -139.7337f, 38.733883f, -1299.5559f, -15.168939f, 63.437103f, 20f, false, true))
			return true;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1319.7686f, 29.526155f, 47.56616f, -1287.6193f, -24.88864f, 67.5273f, 20f, false, true))
			return true;
	}

	if (func_268(2, vParam0))
		if (func_267(vParam0, 2, 0, false))
			return true;

	if (func_268(3, vParam0))
		if (func_267(vParam0, 3, 0, false))
			return true;

	if (func_268(4, vParam0))
		if (func_267(vParam0, 4, 0, false))
			return true;

	if (func_268(5, vParam0))
		if (func_267(vParam0, 5, 0, false))
			return true;

	if (func_268(6, vParam0))
		if (func_267(vParam0, 6, 0, false))
			return true;

	if (!func_264())
		if (func_268(7, vParam0))
			if (func_267(vParam0, 7, 0, false))
				return true;

	if (func_268(8, vParam0))
		if (func_267(vParam0, 8, 0, false))
			return true;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 2591.6265f, -268.89395f, 111.88586f, 2591.331f, -614.43555f, 55.369205f, 70f, false, true))
		return true;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1112.5862f, -2674.7668f, 12.568037f, -1215.4681f, -2854.5886f, 19.445877f, 41.25f, false, true))
		return true;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -804.05005f, 4216.4116f, 204.4872f, -509.06787f, 4135.1904f, 123.25017f, 250f, false, true))
		return true;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -148.87766f, 4862.2036f, 305.6442f, 454.62744f, 5573.104f, 804.097f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -482.89307f, 4990.2554f, 155.16011f, 7.830751f, 5009.3706f, 430.76038f, 250f, false, true))
		return true;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.26465f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 954.1139f, 5641.051f, 646.50543f, 2140.375f, 5377.7534f, 149.12209f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 2117.3477f, 5377.2593f, 173.32973f, 2439.9338f, 5297.445f, 62.686623f, 100f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 2393.3474f, 5321.5796f, 107.06242f, 2523.9456f, 5124.7456f, 41.68384f, 70f, false, true))
		return true;

	if (func_39(vParam0, -99.68751f, -2448.891f, 5.01731f, 230f))
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 85.05448f, -2511.8838f, -2.996267f, -57.599766f, -2412.7163f, 15.000947f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 7.516524f, -2546.741f, 1.331557f, -177.32684f, -2417.0466f, 19.160444f, 80f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -260.03537f, -2419.9783f, 1.399635f, -27.26375f, -2423.8484f, 25.00064f, 80f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -187.4256f, -2516.0857f, -6.849975f, -186.7518f, -2438.1487f, 25.001602f, 40f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -73.60813f, -2538.5637f, -6.989857f, -183.25558f, -2465.145f, 25.020298f, 70f, false, true))
			return true;

	if (!bParam3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1171.7086f, -1524.6598f, 23.379686f, -1139.7214f, -1573.589f, -1.585432f, 55f, false, true))
			return true;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 476.5394f, -1301.548f, 44.824577f, 499.58224f, -1339.0245f, 26.31703f, 35f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 496.98163f, -1412.2551f, 43.293907f, 497.269f, -1339.3639f, 26.316479f, 40f, false, true))
			return true;
	}

	return false;
}

float func_388(float fParam0, float fParam1, float fParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x13645 (79429)
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - fParam0;
	num3 = fParam3.f_1 - fParam0.f_1;

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

BOOL func_389(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x136AA (79530)
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1061.0181f, -2540.235f, 18.669323f, -1023.33246f, -2562.1145f, 31.576157f, 250f, false, true))
		return true;
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1061.0587f, -2540.2537f, 10.944668f, -1023.2968f, -2562.0525f, 18.516848f, 250f, false, true))
		return true;
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1043.3641f, -2747.29f, 16.960567f, -991.5368f, -2657.6816f, 69.12349f, 200f, false, true))
		return true;
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1047.6465f, -2754.947f, 2.941969f, -991.73145f, -2653.1533f, 16.892282f, 200f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1116.8934f, -2675.6707f, 12.177572f, -1183.9326f, -2789.4507f, 38.951855f, 53f, false, true))
		return true;

	return false;
}

void func_390() // Position - 0x137BF (79807)
{
	int i;

	if (uLocal_335[iLocal_2448 /*66*/].f_4.f_3 == 0)
		return;

	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_3, i))
			if (iLocal_83.f_2[i /*26*/].f_7 == 12 || iLocal_83.f_2[i /*26*/].f_7 == 10 || iLocal_83.f_2[i /*26*/].f_7 == 11)
				MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_3), i);
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/].f_1))
				MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_3), i);
	}

	return;
}

void func_391() // Position - 0x13871 (79985)
{
	int i;

	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (iLocal_83.f_2[i /*26*/].f_3 != -1)
		{
			if (iLocal_83.f_2[i /*26*/].f_3 != iLocal_2448)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/]))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[i /*26*/]))
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[i /*26*/], true);
			
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/].f_1))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[i /*26*/].f_1))
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[i /*26*/].f_1, true);
			}
		}
		else if (iLocal_83.f_2[i /*26*/].f_2 != -1)
		{
			if (iLocal_83.f_2[i /*26*/].f_2 == iLocal_2448)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/]))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[i /*26*/]))
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[i /*26*/], false);
					else
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[i /*26*/]);
			
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/].f_1))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[i /*26*/].f_1))
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[i /*26*/].f_1, false);
			}
			else
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/]))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[i /*26*/]))
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[i /*26*/], true);
			
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/].f_1))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[i /*26*/].f_1))
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[i /*26*/].f_1, true);
			}
		}
		else
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/]))
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[i /*26*/]))
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[i /*26*/], true);
		
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/].f_1))
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[i /*26*/].f_1))
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[i /*26*/].f_1, true);
		}
	}

	return;
}

void func_392() // Position - 0x13A56 (80470)
{
	func_456();
	func_427();
	func_419();

	switch (uLocal_335[iLocal_2448 /*66*/].f_46)
	{
		case 0:
			if (iLocal_83.f_215 > 0)
				uLocal_335[iLocal_2448 /*66*/].f_46 = 1;
			break;
	
		case 1:
			func_403();
			func_393();
		
			if (iLocal_83.f_215 >= 4)
				uLocal_335[iLocal_2448 /*66*/].f_46 = 4;
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	
		case 4:
			func_610();
			break;
	}

	return;
}

void func_393() // Position - 0x13AD8 (80600)
{
	int numReservedMissionVehicles;

	numReservedMissionVehicles = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0);

	if (iLocal_83.f_213 != numReservedMissionVehicles)
	{
		if (iLocal_83.f_213 < numReservedMissionVehicles || func_394(iLocal_83.f_213, iLocal_83.f_213, iLocal_83.f_213, false, true))
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_83.f_213);
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_83.f_213);
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iLocal_83.f_213);
		}
	}

	return;
}

BOOL func_394(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x13B2B (80683)
{
	if (func_402(iParam0, bParam3, bParam4) && func_401(iParam1, bParam3, bParam4) && func_395(iParam2, bParam3, bParam4))
		return true;

	return false;
}

BOOL func_395(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13B63 (80739)
{
	return func_396(2, iParam0, true, bParam1, bParam2);
}

BOOL func_396(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x13B77 (80759)
{
	int num;
	int num2;

	if (!IS_BIT_SET(Global_1686554, 0))
		return 0;

	if (bParam2 && !bParam3 && iParam1 <= func_400(iParam0) - func_399(iParam0, false))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
				num = iParam1 - func_399(iParam0, false);
			else
				num = iParam1;
		
			num2 = func_400(iParam0) - func_398(iParam0);
		}
		else
		{
			if (bParam2)
				num = iParam1 - func_399(iParam0, false);
			else
				num = iParam1;
		
			num2 = func_400(iParam0) - func_399(iParam0, true);
		}
	
		if (!bParam4 && Global_1845270[PLAYER::PLAYER_ID() /*892*/] != 3)
			num2 = num2 - func_397(iParam0);
	
		if (num < num2)
			return 1;
	}

	return 0;
}

int func_397(int iParam0) // Position - 0x13C3D (80957)
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

int func_398(int iParam0) // Position - 0x13C77 (81015)
{
	switch (iParam0)
	{
		case 0:
			return Global_1686554.f_1;
	
		case 1:
			return Global_1686554.f_2;
	
		case 2:
			return Global_1686554.f_3;
	}

	return 0;
}

int func_399(int iParam0, BOOL bParam1) // Position - 0x13CBD (81085)
{
	Player player;

	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
				return Global_2657994[player /*467*/].f_222;
			else
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			break;
	
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
				return Global_2657994[player /*467*/].f_223;
			else
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			break;
	
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
				return Global_2657994[player /*467*/].f_224;
			else
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			break;
	}

	return 0;
}

int func_400(int iParam0) // Position - 0x13D5A (81242)
{
	switch (iParam0)
	{
		case 0:
			return Global_1686562;
	
		case 1:
			return Global_1686563;
	
		case 2:
			return Global_1686564;
	}

	return 0;
}

BOOL func_401(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13D9A (81306)
{
	return func_396(1, iParam0, true, bParam1, bParam2);
}

BOOL func_402(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13DAE (81326)
{
	return func_396(0, iParam0, true, bParam1, bParam2);
}

void func_403() // Position - 0x13DC2 (81346)
{
	int num;
	var unk;

	switch (iLocal_2477)
	{
		case 0:
			if (func_418(131))
			{
				num = func_407();
			
				if (num == 0)
				{
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_3397, 7, 0, "TaxiDispatch", 0, 1);
				
					if (func_406(&uLocal_3397, 131, "MPTXIAU", "MPTXI_P1", 12, 1, 0, 0, false))
						iLocal_2477 = 1;
				}
				else if (num == 9)
				{
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&unk, "MPTXI_N", 16);
					TEXT_LABEL_APPEND_INT(&unk, num, 16);
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_3397, 7, 0, "TaxiDispatch", 0, 1);
					func_406(&uLocal_3397, 131, "MPTXIAU", &unk, 12, 1, 0, 0, false);
				}
			}
			else if (IS_BIT_SET(Global_2739945.f_879, 0))
			{
				if (func_407() == 0)
				{
					if (!func_51(uLocal_335[iLocal_2448 /*66*/].f_4.f_21))
					{
						uLocal_335[iLocal_2448 /*66*/].f_4.f_21 = { 0f, 0f, 0f };
						uLocal_335[iLocal_2448 /*66*/].f_4.f_24 = 0f;
					}
				
					MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_1), 0);
					iLocal_2477 = 2;
				}
			
				MISC::CLEAR_BIT(&(Global_2739945.f_879), 0);
			}
			break;
	
		case 1:
			if (func_405())
			{
				if (!func_404())
				{
					if (!func_51(uLocal_335[iLocal_2448 /*66*/].f_4.f_21))
					{
						uLocal_335[iLocal_2448 /*66*/].f_4.f_21 = { 0f, 0f, 0f };
						uLocal_335[iLocal_2448 /*66*/].f_4.f_24 = 0f;
					}
				
					MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_1), 0);
					iLocal_2477 = 2;
				}
				else
				{
					iLocal_2477 = 0;
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_1, 0))
				iLocal_2477 = 0;
			break;
	}

	return;
}

BOOL func_404() // Position - 0x13F4F (81743)
{
	if (Global_22491 == 1 || Global_23458 == 1)
		return true;

	return false;
}

BOOL func_405() // Position - 0x13F72 (81778)
{
	if (Global_22442 == 0)
		return true;

	return false;
}

BOOL func_406(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x13F89 (81801)
{
	func_219(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22490 = 0;
	Global_22449 = true;
	Global_22456 = 0;
	Global_22451 = 0;
	Global_23433 = 0;
	Global_23435 = 0;
	Global_23439 = 0;
	Global_22447 = 0;
	Global_22494 = 0;
	Global_22496 = 0;

	if (iParam5 == 1)
		Global_22454 = 1;
	else
		Global_22454 = 0;

	Global_2883585 = 1;
	return func_200(sParam3, iParam4, bParam8);
}

int func_407() // Position - 0x13FE8 (81896)
{
	Ped playerPed;
	Vehicle vehiclePedIsIn;
	Vector3 entityCoords;
	Vector3 outPosition;
	float xSize;
	int nodeFlags;

	if (!IS_BIT_SET(Global_2739945.f_879, 0))
	{
		if (!func_417())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				_DISPLAY_HELP_TEXT("TXM_H03" /*You don't have enough cash to pay for a basic taxi fare.*/, -1);
		
			return 9;
		}
	
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			return 2;
	}

	if (!func_56())
		return 1;

	if (func_416(iLocal_2448))
		return 9;

	playerPed = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()));

	if (!PED::IS_PED_INJURED(playerPed))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (VEHICLE::IS_VEHICLE_MODEL(vehiclePedIsIn, joaat("taxi")))
					return 9;
		}
	}

	if (func_415(iLocal_2448))
		return 4;

	if (uLocal_335[iLocal_2448 /*66*/].f_4 != -1)
		return 4;

	if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_1, 0))
		return 4;

	if (func_243(PLAYER::PLAYER_ID(), true, false) && Global_1845270[PLAYER::PLAYER_ID() /*892*/] != 16)
		return 1;

	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 6f)
		return 9;

	if (func_414(PLAYER::PLAYER_ID(), true, false))
		return 9;

	if (func_413(PLAYER::PLAYER_ID(), 0))
		return 9;

	if (func_412())
		return 3;

	if (!func_408(1, 1, 1, true, false))
		return 1;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	xSize = 50f;
	nodeFlags = 1;

	if (!func_261(entityCoords))
		nodeFlags = 9;

	if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE(entityCoords, &outPosition, nodeFlags, 100f, 2.5f))
		return 3;

	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), outPosition, xSize, xSize, 20f, false, true, 0))
		return 3;

	if (func_387(entityCoords, true))
		return 3;

	return 0;
}

BOOL func_408(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x141AD (82349)
{
	if (func_411(iParam0, bParam3, bParam4) || func_410(iParam1, bParam3, bParam4) || func_409(iParam2, bParam3, bParam4))
		return true;

	return false;
}

BOOL func_409(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x141E7 (82407)
{
	return func_396(2, iParam0, false, bParam1, bParam2);
}

int func_410(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x141FB (82427)
{
	return func_396(1, iParam0, false, bParam1, bParam2);
}

int func_411(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1420F (82447)
{
	return func_396(0, iParam0, false, bParam1, bParam2);
}

BOOL func_412() // Position - 0x14223 (82467)
{
	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -64f, -850f, 200f, -84f, -795f, 340f, false, true, 0))
			return true;

	return false;
}

BOOL func_413(Player plParam0, int iParam1) // Position - 0x14269 (82537)
{
	return IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_221, iParam1);
}

BOOL func_414(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1427F (82559)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (IS_BIT_SET(Global_1845270[plParam0 /*892*/].f_268.f_34, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(Global_1845270[plParam0 /*892*/].f_268.f_34, 1))
			return true;

	if (bParam2)
		if (Global_2657994[plParam0 /*467*/].f_324.f_8 != -1)
			return true;

	return false;
}

BOOL func_415(int iParam0) // Position - 0x142E3 (82659)
{
	int i;

	if (iParam0 != -1)
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (iLocal_83.f_2[i /*26*/].f_2 != -1)
				if (iLocal_83.f_2[i /*26*/].f_2 == iParam0)
					return true;
		}
	}

	return false;
}

BOOL func_416(int iParam0) // Position - 0x14329 (82729)
{
	int i;

	if (iParam0 != -1)
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (iLocal_83.f_2[i /*26*/].f_3 != -1)
				if (iLocal_83.f_2[i /*26*/].f_3 == iParam0)
					return true;
		}
	}

	return false;
}

BOOL func_417() // Position - 0x1436F (82799)
{
	if (func_139() == 0f)
		return true;

	if ((float)func_100(PLAYER::PLAYER_ID()) > (float)iLocal_2655 * 1.5f)
		return true;

	return false;
}

BOOL func_418(int iParam0) // Position - 0x143A0 (82848)
{
	if (Global_23556 || Global_23555 || Global_23557)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}

	if (Global_120[iParam0 /*10*/].f_8 != 184)
		if (Global_21083.f_1 == 10)
			if (Global_8234 == iParam0)
				return true;
			else
				return false;
		else
			return false;

	return false;
}

void func_419() // Position - 0x14404 (82948)
{
	int num;

	num = uLocal_335[iLocal_2448 /*66*/].f_4;

	if (num != -1)
	{
		if (iLocal_83.f_2[num /*26*/].f_7 == 5)
		{
			if (!IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 26))
				MISC::SET_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 26);
		}
		else if (iLocal_83.f_2[num /*26*/].f_7 == 6)
		{
			if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 26))
			{
				MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 26);
				func_420(false, num);
			}
		}
	}
	else if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 26))
	{
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 26);
	}

	return;
}

void func_420(BOOL bParam0, int iParam1) // Position - 0x144B4 (83124)
{
	var unk;
	Vector3 vector;
	Any any;
	Hash hashKey;
	Hash hashKey2;
	BOOL flag;
	BOOL p10;
	var unk31;
	int num;

	if (IS_BIT_SET(uLocal_335[iLocal_2448 /*66*/].f_4.f_2, 26))
		MISC::CLEAR_BIT(&(uLocal_335[iLocal_2448 /*66*/].f_4.f_2), 26);

	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_7 = 9;
	vector = { 0f, 0f, 0f };
	any = { 0f, 0f, 0f };
	hashKey = -1;
	hashKey2 = -1;
	flag = false;
	p10 = false;
	unk = { iLocal_83.f_2[iParam1 /*26*/] };
	vector = { unk.f_23 };
	any = { unk.f_8 };
	TEXT_LABEL_ASSIGN_STRING(&unk31, "FREEMODE_", 24);

	if (!func_51(vector))
	{
		TEXT_LABEL_APPEND_STRING(&unk31, func_425(ZONE::GET_NAME_OF_ZONE(vector)), 24);
		hashKey = MISC::GET_HASH_KEY(func_424(&unk31));
	}

	if (bParam0)
	{
		num = func_423(iParam1);
		hashKey2 = func_422(num);
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk31, "FREEMODE_", 24);
		TEXT_LABEL_APPEND_STRING(&unk31, func_425(ZONE::GET_NAME_OF_ZONE(HUD::GET_BLIP_COORDS(unk.f_19))), 24);
		hashKey2 = MISC::GET_HASH_KEY(func_424(&unk31));
	}

	flag = bParam0;
	p10 = func_421(PLAYER::PLAYER_ID());
	STATS::PLAYSTATS_FAST_TRVL(hashKey, vector, vector.f_1, vector.f_2, hashKey2, any, any.f_1, any.f_2, 7, flag, p10);
	return;
}

BOOL func_421(Player plParam0) // Position - 0x145DF (83423)
{
	return IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_203, 31);
}

Hash func_422(int iParam0) // Position - 0x145F5 (83445)
{
	switch (iParam0)
	{
		case 0:
			return 1110098029;
	
		case 1:
			return -2053642498;
	
		case 2:
			return -2096347654;
	
		case 3:
			return -1618065136;
	
		case 4:
			return -265491244;
	
		case 5:
			return 947762523;
	
		case 6:
			return -517980925;
	
		case 7:
			return 1655690047;
	
		case 8:
			return -756964960;
	
		case 9:
			return 1534242726;
	
		default:
		
	}

	return 0;
}

int func_423(int iParam0) // Position - 0x14691 (83601)
{
	return iLocal_83.f_219[iParam0 /*4*/].f_1;
}

const char* func_424(const char* sParam0) // Position - 0x146A3 (83619)
{
	return sParam0;
}

const char* func_425(const char* sParam0) // Position - 0x146AD (83629)
{
	var unk;
	var unk17;
	var text;
	int i;

	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			i = 0;
		
			for (i = 0; i <= HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) - 1; i = i + 1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, i, i + 1), 64);
				TEXT_LABEL_ASSIGN_STRING(&unk17, func_426(&unk), 64);
				TEXT_LABEL_APPEND_STRING(&text, &unk17, 64);
			}
		
			return HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&text, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&text));
		}
	}

	return sParam0;
}

char* func_426(char* sParam0) // Position - 0x14715 (83733)
{
	Hash hashKey;

	hashKey = MISC::GET_HASH_KEY(sParam0);

	switch (hashKey)
	{
		case joaat("a"):
			return "A";
	
		case joaat("b"):
			return "B";
	
		case joaat("c"):
			return "C";
	
		case joaat("d"):
			return "D";
	
		case joaat("e"):
			return "E";
	
		case joaat("f"):
			return "F";
	
		case joaat("g"):
			return "G";
	
		case joaat("h"):
			return "H";
	
		case joaat("i"):
			return "I";
	
		case joaat("j"):
			return "J";
	
		case joaat("k"):
			return "K";
	
		case joaat("l"):
			return "L";
	
		case joaat("m"):
			return "M";
	
		case joaat("n"):
			return "N";
	
		case joaat("o"):
			return "O";
	
		case joaat("p"):
			return "P";
	
		case joaat("q"):
			return "Q";
	
		case joaat("r"):
			return "R";
	
		case joaat("s"):
			return "S";
	
		case joaat("t"):
			return "T";
	
		case joaat("u"):
			return "U";
	
		case joaat("v"):
			return "V";
	
		case joaat("w"):
			return "W";
	
		case joaat("x"):
			return "X";
	
		case joaat("y"):
			return "Y";
	
		case joaat("z"):
			return "Z";
	}

	return sParam0;
}

void func_427() // Position - 0x148CE (84174)
{
	int num;

	if (func_455())
		func_450();

	switch (func_15(iLocal_2448))
	{
		case 0:
			if (func_123())
			{
				if (func_236())
				{
					func_437(true);
					func_436(1);
				}
				else
				{
					num = func_122();
				
					if (func_42(num))
					{
						func_437(true);
						func_436(2);
					}
				}
			}
			break;
	
		case 1:
			num = func_122();
		
			if (func_42(num))
			{
				func_432(NETWORK::GET_CLOUD_TIME_AS_INT());
				func_436(2);
			}
			break;
	
		case 2:
			if (func_430(800))
				func_436(3);
			break;
	
		case 3:
			num = func_122();
		
			if (func_26(num) > 5)
			{
				CAM::FORCE_CAMERA_RELATIVE_HEADING_AND_PITCH(0, 0, 1065353216);
				func_436(4);
			}
			break;
	
		case 4:
			if (func_428(800))
			{
				num = func_122();
				func_198(5, num);
				func_436(5);
			}
			break;
	
		case 5:
			ENTITY::IS_ENTITY_DEAD(Global_2672942.f_4.f_15, false);
		
			if (!func_36(Global_2672942.f_4.f_15, SCRIPT_TASK_LEAVE_ANY_VEHICLE, true))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_2672942.f_4.f_15, 0, 0);
			}
			else
			{
				func_436(6);
				func_420(true, func_122());
			}
			break;
	
		case 6:
			break;
	}

	return;
}

BOOL func_428(int iParam0) // Position - 0x14A0A (84490)
{
	func_429(1);

	if (!CAM::IS_SCREEN_FADED_IN())
		if (!CAM::IS_SCREEN_FADING_IN())
			CAM::DO_SCREEN_FADE_IN(iParam0);
	else
		return true;

	return false;
}

void func_429(int iParam0) // Position - 0x14A35 (84533)
{
	func_84(&uLocal_67, iParam0);
	return;
}

BOOL func_430(int iParam0) // Position - 0x14A48 (84552)
{
	func_431(1);

	if (!CAM::IS_SCREEN_FADED_OUT())
		if (!CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_OUT(iParam0);
	else
		return true;

	return false;
}

void func_431(int iParam0) // Position - 0x14A73 (84595)
{
	func_85(&uLocal_67, iParam0);
	return;
}

void func_432(int iParam0) // Position - 0x14A86 (84614)
{
	uLocal_67.f_15 = iParam0;
	func_248(15498, iParam0, -1, true);
	func_433(-857803543, 10, false);
	return;
}

void func_433(int iParam0, int iParam1, BOOL bParam2) // Position - 0x14AAB (84651)
{
	int num;

	if (func_435(iParam1, bParam2))
	{
		num = func_434();
		Global_2696325[num] = iParam1;
		Global_2696336[num] = iParam0;
	}

	return;
}

int func_434() // Position - 0x14AD8 (84696)
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

BOOL func_435(int iParam0, BOOL bParam1) // Position - 0x14B0D (84749)
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

void func_436(int iParam0) // Position - 0x14B93 (84883)
{
	uLocal_335[iLocal_2448 /*66*/].f_47 = iParam0;
	return;
}

void func_437(BOOL bParam0) // Position - 0x14BA7 (84903)
{
	if (bParam0)
	{
		if (!func_449(0))
		{
			ENTITY::IS_ENTITY_DEAD(Global_2672942.f_4.f_15, false);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(Global_2672942.f_4.f_15, false);
		
			if (func_124())
				_SET_PLAYER_CONTROL_EX(Global_2672942.f_4.f_16, false, SPC_REENABLE_CONTROL_ON_DEATH | 256, false);
		
			func_431(0);
		}
	}
	else if (func_449(0))
	{
		ENTITY::IS_ENTITY_DEAD(Global_2672942.f_4.f_15, false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(Global_2672942.f_4.f_15, true);
	
		if (func_124())
			_SET_PLAYER_CONTROL_EX(Global_2672942.f_4.f_16, true, 0, false);
	
		func_429(0);
	}

	return;
}

void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, BOOL bParam3) // Position - 0x14C36 (85046)
{
	eSetPlayerControlFlags flags;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	BOOL flag13;
	BOOL flag14;
	BOOL flag15;
	BOOL toggle;
	BOOL toggle2;
	BOOL flag16;
	BOOL flag17;
	BOOL flag18;
	BOOL flag19;
	BOOL flag20;
	BOOL flag21;
	BOOL flag22;
	BOOL flag23;
	BOOL flag24;
	Ped playerPed;
	eSetPlayerControlFlags flags2;

	if (bParam1)
		if (SCRIPT::GET_NO_LOADING_SCREEN())
			SCRIPT::SET_NO_LOADING_SCREEN(false);

	if (func_448())
		if (bParam1)
			return;
		else
			bParam3 = true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		flags = espcfParam2;
		PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags);
	}
	else
	{
		flag = true;
		flag2 = espcfParam2 & SPC_AMBIENT_SCRIPT != 0;
		flag3 = espcfParam2 & SPC_CLEAR_TASKS != 0;
		flag4 = espcfParam2 & SPC_REMOVE_FIRES != 0;
		flag5 = espcfParam2 & SPC_REMOVE_EXPLOSIONS != 0;
		flag6 = espcfParam2 & SPC_REMOVE_PROJECTILES != 0;
		flag7 = espcfParam2 & SPC_DEACTIVATE_GADGETS != 0;
		flag8 = espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH != 0;
		flag9 = espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON != 0;
		flag10 = espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE != 0;
		flag11 = espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER != 0;
		flag12 = espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF != 0;
		flag13 = espcfParam2 & SPC_ALLOW_PAD_SHAKE != 0;
		flag14 = espcfParam2 & 8192 != 0;
		flag15 = espcfParam2 & 16384 != 0;
		toggle = espcfParam2 & 32768 != 0;
		toggle2 = espcfParam2 & 65536 != 0;
		flag16 = espcfParam2 & 131072 != 0;
		flag17 = espcfParam2 & 262144 != 0;
		flag18 = espcfParam2 & 524288 != 0;
		flag19 = espcfParam2 & 1048576 != 0;
		flag20 = espcfParam2 & 2097152 != 0;
		flag21 = espcfParam2 & 4194304 != 0;
		flag22 = espcfParam2 & 8388608 != 0;
		flag23 = espcfParam2 & 16777216 != 0;
	
		if (espcfParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			flag = false;
	
		if (!func_124())
		{
			flag24 = false;
		
			if (bParam1 == true)
				flag24 = true;
		
			if (toggle == false && !flag19)
				flag24 = true;
		
			if (flag10 == true)
				flag24 = true;
		
			if (flag24)
				return;
		}
	
		flag16;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && PLAYER::IS_PLAYER_PLAYING(plParam0) || bParam3 == true)
		{
			if (bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false))
				return;
		
			playerPed = PLAYER::GET_PLAYER_PED(plParam0);
		
			if (!flag18)
			{
				if (flag17 && bParam1 == false && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				else if (flag14 || !func_373(PLAYER::PLAYER_ID(), 0) && !func_447() && !func_446(PLAYER::PLAYER_ID()))
					ENTITY::SET_ENTITY_VISIBLE(playerPed, !flag14, false);
			
				if (!flag14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !flag17)
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
				
					Global_2657994[plParam0 /*467*/].f_257 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_443(false, 0, 0);
				
					if (flag23)
						STREAMING::CLEAR_FOCUS();
				}
			
				if (!func_442(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, true, false);
			
				if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
				{
					if (!flag19)
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
				}
				else if (!flag19)
				{
					ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				}
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, true);
				PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(plParam0, false);
			
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(playerPed) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(playerPed))
					PED::FINALIZE_HEAD_BLEND(playerPed);
			
				PED::SET_PED_CAN_RAGDOLL(playerPed, true);
			
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == false)
				{
					func_441();
					func_440();
				}
			
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					!flag21;
			
				STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
				Global_2657994[plParam0 /*467*/].f_258 = 0;
			
				if (!flag22)
					flag3 = true;
			
				if (Global_2697805)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697805 = false;
				}
			
				if (Global_2635516.f_2982)
					Global_2635516.f_2982 = 0;
			}
			else
			{
				if (!func_442(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
				{
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, !flag15, false);
				
					if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
					{
						if (!flag19)
							ENTITY::FREEZE_ENTITY_POSITION(playerPed, toggle);
					
						if (!toggle)
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
					}
				
					if (func_439(*Global_4718592.f_194133))
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
				}
			
				if (Global_1575058)
					flag10 = false;
			
				if (flag10)
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				else
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, true);
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, toggle2);
			
				if (flag3)
					if (!PED::IS_PED_FATALLY_INJURED(playerPed) && !PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
			}
		
			flags2 = 0;
		
			if (flag2)
				flags2 = flags2 | SPC_AMBIENT_SCRIPT;
		
			if (flag3)
				flags2 = flags2 | SPC_CLEAR_TASKS;
		
			if (flag4)
				flags2 = flags2 | SPC_REMOVE_FIRES;
		
			if (flag5)
				flags2 = flags2 | SPC_REMOVE_EXPLOSIONS;
		
			if (flag6)
				flags2 = flags2 | SPC_REMOVE_PROJECTILES;
		
			if (flag7)
				flags2 = flags2 | SPC_DEACTIVATE_GADGETS;
		
			if (flag8)
				flags2 = flags2 | SPC_REENABLE_CONTROL_ON_DEATH;
		
			if (flag9)
				flags2 = flags2 | SPC_LEAVE_CAMERA_CONTROL_ON;
		
			if (flag10)
				flags2 = flags2 | SPC_ALLOW_PLAYER_DAMAGE;
		
			if (flag11)
				flags2 = flags2 | SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER;
		
			if (flag12)
				flags2 = flags2 | SPC_PREVENT_EVERYBODY_BACKOFF;
		
			if (flag13)
				flags2 = flags2 | SPC_ALLOW_PAD_SHAKE;
		
			PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags2);
		}
	}

	return;
}

BOOL func_439(int iParam0) // Position - 0x150EA (86250)
{
	return iParam0 == 17;
}

void func_440() // Position - 0x150F7 (86263)
{
	var unk;

	Global_2672942.f_1100 = 0;
	Global_2672942.f_1101 = 0;
	Global_2672942.f_1102 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672942.f_1107 = -1;
	Global_2672942.f_1108 = 0;
	Global_2635516.f_2993 = { unk };
	return;
}

void func_441() // Position - 0x15144 (86340)
{
	Global_2635516.f_703 = 0;
	Global_2635516.f_3036 = 0;
	Global_2635516.f_516 = 0;
	Global_2635516.f_607 = 0;
	Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_220 = 0;
	Global_2635516.f_2991 = 0;
	return;
}

BOOL func_442(Ped pedParam0) // Position - 0x15182 (86402)
{
	int scriptTaskStatus;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
	{
		return true;
	}
	else
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ENTER_VEHICLE);
	
		if (scriptTaskStatus == 0)
			return true;
	}

	return false;
}

void func_443(BOOL bParam0, Ped pedParam1, int iParam2) // Position - 0x151B3 (86451)
{
	int num;
	eViewModeContext i;

	ENTITY::IS_ENTITY_DEAD(pedParam1, false);

	if (bParam0 == true)
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
			if (PED::IS_PED_A_PLAYER(pedParam1))
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam1)))
					num = 1;

	if (num == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == true)
			{
				func_445();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (i = ON_FOOT; i < 8; i = i + 1)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(i, Global_2621446.f_58[i]);
					}
				}
			
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
	
		if (func_373(PLAYER::PLAYER_ID(), 0))
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, pedParam1, true);
		else
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, pedParam1);
	
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, pedParam1);
		_MPPLY_STAT_SET_BOOL(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}

	return;
}

void _MPPLY_STAT_SET_BOOL(Hash hParam0, BOOL bParam1) // Position - 0x15283 (86659)
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, true);

	return;
}

void func_445() // Position - 0x1529F (86687)
{
	eViewModeContext i;

	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (i = ON_FOOT; i < 8; i = i + 1)
			{
				Global_2621446.f_58[i] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(i);
			}
		
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}

	return;
}

BOOL func_446(Player plParam0) // Position - 0x152F7 (86775)
{
	if (func_373(plParam0, 0))
		return true;

	if (func_447())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_447() // Position - 0x15336 (86838)
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_448() // Position - 0x15344 (86852)
{
	if (IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_888, 2) && !(Global_2685663.f_2847.f_216 == -1))
		return true;

	return false;
}

BOOL func_449(int iParam0) // Position - 0x15375 (86901)
{
	return func_19(&uLocal_67, iParam0);
}

void func_450() // Position - 0x15385 (86917)
{
	func_437(false);

	if (func_449(1))
		CAM::DO_SCREEN_FADE_IN(250);

	func_454();

	if (func_453())
		func_451();

	func_436(0);
	return;
}

void func_451() // Position - 0x153B4 (86964)
{
	func_452(&uLocal_67);
	return;
}

void func_452(var uParam0) // Position - 0x153C2 (86978)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = 0;
	}

	return;
}

BOOL func_453() // Position - 0x153E5 (87013)
{
	return func_10(&uLocal_67);
}

void func_454() // Position - 0x153F3 (87027)
{
	uLocal_335[iLocal_2448 /*66*/].f_47.f_1 = -1;
	return;
}

BOOL func_455() // Position - 0x15408 (87048)
{
	switch (func_15(iLocal_2448))
	{
		case 0:
			return false;
	
		default:
		
	}

	if (!Global_2672942.f_4.f_1)
		return true;

	if (!func_123())
		return true;

	return false;
}

void func_456() // Position - 0x15443 (87107)
{
	Vector3 vector;
	float heading;
	Vehicle vehicle;
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		switch (func_26(i))
		{
			case 0:
				break;
		
			case 1:
				if (!func_18(iLocal_2448, i, 0))
				{
					if (func_29(iLocal_83.f_2[i /*26*/]) && func_594(iLocal_83.f_2[i /*26*/]))
					{
						vehicle = NETWORK::NET_TO_VEH(iLocal_83.f_2[i /*26*/]);
						VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(vehicle, true);
						VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(vehicle, true);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(vehicle, 2);
						func_593(i, 0);
					}
				}
				break;
		
			case 2:
				break;
		
			case 3:
				if (!func_18(iLocal_2448, i, 1))
				{
					if (func_29(iLocal_83.f_2[i /*26*/]) && func_594(iLocal_83.f_2[i /*26*/]))
					{
						vehicle = NETWORK::NET_TO_VEH(iLocal_83.f_2[i /*26*/]);
						vector = { ENTITY::GET_ENTITY_COORDS(vehicle, false) + { -30f, 0f, 0f } };
						ENTITY::FREEZE_ENTITY_POSITION(vehicle, true);
						ENTITY::SET_ENTITY_VISIBLE(vehicle, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(vehicle, true, false);
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(vehicle, false, false);
						ENTITY::SET_ENTITY_COORDS(vehicle, vector, true, false, false, true);
					
						if (!func_40(iLocal_83.f_2[i /*26*/].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[i /*26*/].f_1))
							TASK::TASK_VEHICLE_MISSION(NETWORK::NET_TO_PED(iLocal_83.f_2[i /*26*/].f_1), vehicle, 0, 5, 0f, 786603, 0f, 0f, true);
					
						func_593(i, 1);
					}
				}
				break;
		
			case 4:
				if (!func_18(iLocal_2448, i, 3))
				{
					if (func_29(iLocal_83.f_2[i /*26*/]) && func_594(iLocal_83.f_2[i /*26*/]))
					{
						if (func_458(i, &vector, &heading))
						{
							vehicle = NETWORK::NET_TO_VEH(iLocal_83.f_2[i /*26*/]);
							ENTITY::FREEZE_ENTITY_POSITION(vehicle, false);
							ENTITY::SET_ENTITY_VISIBLE(vehicle, true, false);
							ENTITY::SET_ENTITY_INVINCIBLE(vehicle, false, false);
							ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(vehicle, true, false);
							ENTITY::SET_ENTITY_COORDS(vehicle, vector, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(vehicle, heading);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(vehicle, 1084227584);
							func_48(vector, heading, Global_2739945.f_880, vehicle);
							func_593(i, 3);
						}
					}
				}
				break;
		
			case 5:
				break;
		
			case 6:
				break;
		
			case 7:
				if (!func_18(iLocal_2448, i, 4))
				{
					if (func_29(iLocal_83.f_2[i /*26*/]) && func_594(iLocal_83.f_2[i /*26*/]))
					{
						vehicle = NETWORK::NET_TO_VEH(iLocal_83.f_2[i /*26*/]);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(vehicle, 1);
						func_593(i, 4);
					}
				}
				break;
		
			case 8:
				break;
		
			case 9:
				if (func_9(iLocal_2448, i))
					func_457(i);
				break;
		}
	}

	return;
}

void func_457(int iParam0) // Position - 0x156E1 (87777)
{
	func_452(&uLocal_335[iLocal_2448 /*66*/].f_47.f_2[iParam0 /*2*/]);
	return;
}

BOOL func_458(int iParam0, var uParam1, var uParam2) // Position - 0x156FD (87805)
{
	var unk;

	if (!func_18(iLocal_2448, iParam0, 2))
	{
		if (func_592())
			return false;
	
		func_591(func_423(iParam0));
		func_593(iParam0, 2);
	}

	unk.f_4 = 1125515264;
	unk.f_5 = 1;
	unk.f_6 = 1;
	unk.f_8 = 1082130432;
	unk.f_9 = 1176255488;
	unk.f_10 = 1;
	unk.f_13 = 1;
	unk.f_15 = 2;
	unk.f_22 = 2;
	unk.f_25 = 1;
	unk.f_26 = 1;
	unk.f_29 = 1123024896;
	unk.f_30 = 1;
	unk.f_4 = 1000f;
	unk.f_27 = 1;
	unk.f_25 = 0;
	unk.f_26 = 0;

	if (func_459(func_167(func_423(iParam0)), 0f, 0f, 0f, Global_2739945.f_880, 1, uParam1, uParam2, &unk))
		return true;

	return false;
}

BOOL func_459(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, Hash hParam6, int iParam7, var uParam8, var uParam9, var uParam10) // Position - 0x157CF (88015)
{
	BOOL flag;
	int i;
	int num;
	float num2;
	float num3;
	float num4;
	var unk;
	var unk62;

	flag = false;

	if (uParam10->f_14)
		if (uParam10->f_25)
			uParam10->f_25 = 0;

	if (!func_590())
		return false;

	if (func_589() && !func_588())
	{
		if (!(Global_2635516.f_677 == 0))
		{
			Global_2635516.f_677 = 0;
			func_587();
			func_586();
		}
	}

	if (!(SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635516.f_676))
	{
		if (!(Global_2635516.f_677 == 0))
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_680) < func_585(false))
				return false;
			else
				Global_2635516.f_677 = 0;
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_678) > 30000)
			Global_2635516.f_677 = 0;
	
		if (!(Global_2635516.f_677 == 0))
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_680) > func_585(true))
				Global_2635516.f_677 = 0;
	}

	if (uParam10->f_6)
		if (func_578(fParam0))
			func_577(&fParam0, true);

	if (!(Global_2635516.f_677 == 0))
	{
		if (SYSTEM::VDIST(Global_2635516.f_696, fParam0) > 50f)
			return false;
	
		if (Global_2635516.f_699 != hParam6)
			return false;
	}

	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fParam0 - 100f, fParam0.f_1 - 100f, fParam0 + 100f, fParam0.f_1 + 100f);

	if (Global_2635516.f_677 == 0)
	{
		Global_2635516.f_683 = 0;
		Global_2635516.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2635516.f_676 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635516.f_680 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2635516.f_696 = { fParam0 };
		Global_2635516.f_699 = hParam6;
		Global_2635516.f_682 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_576();
		func_587();
	
		if (!uParam10->f_27 || func_575(fParam0, true, 1133903872) && !uParam10->f_28 && !Global_2739945.f_968 && !Global_2739945.f_956 && !Global_2739945.f_964 && !Global_2739945.f_969 && !Global_2739945.f_991 && !Global_2739945.f_1004 && !Global_2739945.f_970 && !Global_2739945.f_1026 && !IS_BIT_SET(Global_2739945.f_972, 0) && !IS_BIT_SET(Global_2739945.f_972, 1))
			func_555(fParam0, hParam6);
	
		if (func_539(fParam0))
			func_555(fParam0, hParam6);
	
		if (IS_BIT_SET(Global_2739945.f_971, 2))
		{
			func_586();
			num = func_538(hParam6);
		
			if (!IS_BIT_SET(Global_2739945.f_971, 3))
			{
				switch (num)
				{
					case 0:
						func_537(2137.4094f, 4816.817f, 40.196f, 130.7968f);
						func_537(2034.4725f, 4776.724f, 40.1741f, 130.1973f);
						func_537(2006.285f, 4763.084f, 40.1767f, 124.197f);
						func_537(2046.186f, 4752.8853f, 40.0805f, 106.3966f);
						func_537(2017.498f, 4739.7866f, 40.215f, 102.9966f);
						break;
				
					case 1:
						func_537(2103.224f, 4793.5376f, 40.0395f, 112.5981f);
						func_537(2122.2744f, 4802.774f, 40.1507f, 114.3981f);
						func_537(2147.7366f, 4807.85f, 40.1818f, 101.9978f);
						break;
				
					case 2:
						func_537(2069.784f, 4776.1724f, 40.038f, 114.1993f);
						break;
				}
			}
		
			if (IS_BIT_SET(Global_2739945.f_971, 1))
				func_533(hParam6);
		}
	
		Global_2635516.f_677 = 2;
	}

	switch (Global_2635516.f_677)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fParam0 - 100f, fParam0.f_1 - 100f, fParam0 + 100f, fParam0.f_1 + 100f))
			{
				Global_2635516.f_684 = { fParam0 };
				Global_2635516.f_687 = 0f;
			
				if (Global_2739945.f_968 || IS_BIT_SET(Global_2739945.f_972, 0) || IS_BIT_SET(Global_2739945.f_972, 1))
				{
					num2 = 10f;
					num3 = 5f;
					num4 = 5f;
				}
				else
				{
					num2 = 4f;
					num3 = 1f;
					num4 = 1f;
				}
			
				if (uParam10->f_3 && func_370(fParam0, num2, num3, num4, 1f, false, false, false, 1123024896, false, -1, true, 0, false, 0, false, false) && !uParam10->f_7 && !func_531(fParam0, *uParam9, hParam6, PLAYER::PLAYER_ID(), 0))
				{
					Global_2635516.f_684 = { fParam0 };
					Global_2635516.f_687 = *uParam9;
				}
				else
				{
					unk.f_6 = 1082130432;
					unk.f_7 = 1176255488;
					unk.f_8 = 1;
					unk.f_10 = 1;
					unk.f_13 = 1;
					unk.f_15 = 1;
					unk.f_16 = 1;
					unk.f_31 = 1;
					unk.f_34 = joaat("tailgater");
					unk.f_38 = 2;
					unk.f_45 = 2;
					unk.f_49 = 1123024896;
					unk.f_53 = 999;
					unk.f_54 = 1176256410;
					unk.f_55 = 1;
					unk.f_56 = 1;
					unk.f_57 = 1;
					unk.f_9 = iParam7;
					unk.f_3 = 7f;
					unk.f_10 = uParam10->f_5;
					unk.f_4 = *uParam10;
					unk.f_13 = uParam10->f_1;
					unk.f_14 = uParam10->f_2;
					unk.f_5 = uParam10->f_4;
					unk.f_15 = uParam10->f_6;
					unk.f_11 = uParam10->f_7;
					unk.f_6 = uParam10->f_8;
					unk.f_7 = uParam10->f_9;
					unk.f_16 = uParam10->f_10;
					unk.f_17 = uParam10->f_11;
					unk = { fParam3 };
					unk.f_12 = 1;
					unk.f_34 = hParam6;
					unk.f_31 = uParam10->f_13;
				
					if (uParam10->f_32 && Global_2635516.f_683 > 0)
					{
						unk.f_30 = 0;
						unk.f_29 = 1;
					}
					else
					{
						unk.f_30 = uParam10->f_30;
						unk.f_29 = uParam10->f_31;
					}
				
					unk.f_48 = uParam10->f_14;
					unk.f_56 = uParam10->f_25;
					unk.f_57 = uParam10->f_26;
					unk.f_49 = uParam10->f_29;
					unk.f_59 = uParam10->f_33;
					unk.f_60 = uParam10->f_34;
				
					for (i = 0; i < 2; i = i + 1)
					{
						unk.f_38[i /*3*/] = { uParam10->f_15[i /*3*/] };
						unk.f_45[i] = uParam10->f_22[i];
					}
				
					if (!IS_BIT_SET(Global_2750576, 0))
						if (func_530(Global_2635516.f_684))
							Global_2635516.f_684 = { 270.6082f, -2781.5972f, 5.0207f };
				
					func_480(&(Global_2635516.f_684), &(Global_2635516.f_687), &unk);
				}
			
				func_477(Global_2635516.f_684, Global_2635516.f_687, hParam6, &(Global_2635516.f_674));
				Global_2635516.f_672 = 0;
				Global_2635516.f_673 = 0;
				Global_2635516.f_683 = Global_2635516.f_683 + 1;
				Global_2635516.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2635516.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2635516.f_677 = 3;
			}
			break;
	
		case 3:
			if (Global_2635516.f_672)
			{
				if (Global_2635516.f_674 == Global_2635516.f_675)
				{
					if (Global_2635516.f_673)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_476(Global_2635516.f_684, Global_2635516.f_687, hParam6, true, 1036831949))
							{
								Global_2635516.f_677 = 4;
								Global_2635516.f_701 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								flag = true;
							}
						}
						else
						{
							flag = true;
						}
					}
					else
					{
						func_474(Global_2635516.f_684, 0);
						func_473(-1);
					}
				}
				else
				{
					Global_2635516.f_672 = 0;
					Global_2635516.f_673 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_679) > 3000)
			{
				func_473(-1);
			}
			break;
	
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_701) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635516.f_700))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2635516.f_700))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2635516.f_700))
							{
								if (func_472(Global_2635516.f_684, Global_2635516.f_687, hParam6, PLAYER::PLAYER_ID(), 0) || func_461(Global_2635516.f_684, Global_2635516.f_687, hParam6, true, false, false, false, 1, false))
								{
									func_474(Global_2635516.f_684, 0);
									func_473(-1);
								}
								else
								{
									flag = true;
								}
							}
							else
							{
								func_474(Global_2635516.f_684, 0);
								func_473(-1);
							}
						}
					}
					else
					{
						func_473(-1);
					}
				}
				else
				{
					func_473(1);
				}
			}
			else
			{
				flag = true;
			}
			break;
	
		case 5:
			Global_2635516.f_684 = { fParam0 };
			Global_2635516.f_687 = 0f;
			unk62.f_6 = 1082130432;
			unk62.f_7 = 1176255488;
			unk62.f_8 = 1;
			unk62.f_10 = 1;
			unk62.f_13 = 1;
			unk62.f_15 = 1;
			unk62.f_16 = 1;
			unk62.f_31 = 1;
			unk62.f_34 = joaat("tailgater");
			unk62.f_38 = 2;
			unk62.f_45 = 2;
			unk62.f_49 = 1123024896;
			unk62.f_53 = 999;
			unk62.f_54 = 1176256410;
			unk62.f_55 = 1;
			unk62.f_56 = 1;
			unk62.f_57 = 1;
			unk62.f_9 = iParam7;
			unk62.f_3 = 3.5f;
			unk62.f_10 = uParam10->f_5;
			unk62.f_4 = *uParam10;
			unk62.f_12 = 1;
			unk62.f_13 = 0;
			unk62.f_15 = uParam10->f_6;
			unk62.f_11 = uParam10->f_7;
			unk62.f_6 = uParam10->f_8;
			unk62.f_7 = uParam10->f_9;
			unk62 = { fParam3 };
			unk62.f_34 = hParam6;
			unk62.f_31 = uParam10->f_13;
			unk62.f_30 = 1;
			unk62.f_48 = uParam10->f_14;
			unk62.f_56 = uParam10->f_25;
			unk62.f_57 = uParam10->f_26;
			unk62.f_30 = uParam10->f_30;
			unk62.f_29 = uParam10->f_31;
			unk62.f_59 = uParam10->f_33;
			unk62.f_60 = uParam10->f_34;
		
			for (i = 0; i < 2; i = i + 1)
			{
				unk62.f_38[i /*3*/] = { uParam10->f_15[i /*3*/] };
				unk62.f_45[i] = uParam10->f_22[i];
			}
		
			unk62.f_49 = uParam10->f_29;
			func_480(&(Global_2635516.f_684), &(Global_2635516.f_687), &unk62);
			Global_2635516.f_677 = 6;
			break;
	
		case 6:
			flag = true;
			break;
	}

	Global_2635516.f_696 = { fParam0 };
	Global_2635516.f_699 = hParam6;
	Global_2635516.f_680 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (flag)
	{
		Global_2635516.f_517 = 0;
		*uParam8 = { Global_2635516.f_684 };
		*uParam9 = Global_2635516.f_687;
		func_460(true);
		return true;
	}

	return false;
}

void func_460(BOOL bParam0) // Position - 0x1625E (90718)
{
	Global_2635516.f_677 = 0;
	func_576();
	func_587();

	if (bParam0)
		func_586();

	return;
}

BOOL func_461(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, BOOL bParam10) // Position - 0x1627F (90751)
{
	Player i;
	Player player;
	float num;
	Vehicle vehiclePedIsIn;
	Hash entityModel;
	var entityCoords;
	float entityHeading;

	for (i = 0; i < 32; i = i + 1)
	{
		player = i;
	
		if (iParam9 == 1 && PLAYER::PLAYER_ID() != player || iParam9 == 0)
		{
			if (_NETWORK_IS_PLAYER_VALID(player, bParam5, bParam6))
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), player))
				{
					if (!bParam8 || !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(player)) && func_372(player))
					{
						if (!bParam7 || bParam7 == true && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(player) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam10 && bParam7 && func_380(player))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(player)))
							{
								num = 0.1f;
							
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(player), false))
								{
									vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(player), false);
								
									if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
									{
										entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
										entityCoords = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, false) };
										entityHeading = ENTITY::GET_ENTITY_HEADING(vehiclePedIsIn);
									
										if (func_471(uParam0, iParam3, hParam4, entityCoords, entityHeading, entityModel, 0))
											return true;
									}
									else
									{
										num = 5f;
									}
								}
							
								if (func_462(_GET_PLAYER_COORDS(player), uParam0, iParam3, hParam4, num))
									return true;
							}
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_462(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6, Hash hParam7, int iParam8) // Position - 0x163F2 (91122)
{
	Vector3 vector;
	Vector3 vector2;
	float width;

	if (SYSTEM::VDIST(vParam0, vParam3) < func_470(hParam7, 1008981770))
	{
		func_463(vParam3, iParam6, hParam7, &vector, &vector2, &width, iParam8);
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vector, vector2, width, false, true))
			return true;
	}

	return false;
}

void func_463(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, var uParam5, var uParam6, Any anParam7, int iParam8) // Position - 0x16445 (91205)
{
	Vector3 vector;
	var unk3;
	float num;
	var unk8;
	var unk11;

	vector = { 0f, 1f, 0f };
	func_469(&vector, 0f, 0f, iParam3);
	vector = { vector / F2V(SYSTEM::VMAG(vector)) };
	func_464(hParam4, &unk3, &num, 1086324736, 1080033280, 1077936128);
	unk8 = { uParam0 + (vector * { num.f_1 + iParam8, num.f_1 + iParam8, num.f_1 + iParam8 }) };
	unk8.f_2 = unk8.f_2 - ((0.5f * MISC::ABSF(num.f_2 - unk3.f_2)) + iParam8);
	unk11 = { uParam0 - (vector * { (unk3.f_1 * -1f) + iParam8, (unk3.f_1 * -1f) + iParam8, (unk3.f_1 * -1f) + iParam8 }) };
	unk11.f_2 = unk11.f_2 + (0.5f * MISC::ABSF(num.f_2 - unk3.f_2)) + iParam8;
	*uParam5 = { unk8 };
	*uParam6 = { unk11 };
	*anParam7 = MISC::ABSF(num - unk3);
	return;
}

void func_464(Hash hParam0, Vector3* pvParam1, Vector3* pvParam2, int iParam3, int iParam4, int iParam5) // Position - 0x16511 (91409)
{
	int num;

	if (STREAMING::IS_MODEL_VALID(hParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(hParam0, pvParam1, pvParam2);
	}
	else
	{
		num = func_467(hParam0);
	
		if (num != 0)
		{
			func_465(num, pvParam1, pvParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}

	if (SYSTEM::VMAG(*pvParam1) <= 0.01f || SYSTEM::VMAG(*pvParam2) <= 0.01f)
	{
		if (hParam0 == joaat("kosatka"))
		{
			if (iParam4 < 20.7f)
				iParam4 = 20.7f;
		
			if (iParam3 < 137.2f)
				iParam3 = 137.2f;
		
			if (iParam5 < 21.1f)
				iParam5 = 21.1f;
		}
	
		*pvParam1 = 0f - (iParam4 * 0.5f);
		*pvParam2 = 0f + (iParam4 * 0.5f);
		pvParam1->f_1 = 0f - (iParam3 * 0.5f);
		pvParam2->f_1 = 0f + (iParam3 * 0.5f);
		pvParam1->f_2 = 0f - (iParam5 * 0.5f);
		pvParam2->f_2 = 0f + (iParam5 * 0.5f);
	}

	return;
}

void func_465(int iParam0, Vector3* pvParam1, Vector3* pvParam2, int iParam3, int iParam4, int iParam5) // Position - 0x16610 (91664)
{
	int i;

	func_466(iParam0, &Global_1578049);

	for (i = 0; i < 2; i = i + 1)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1578049[i]))
			MISC::GET_MODEL_DIMENSIONS(Global_1578049[i], &Global_1578053[i /*3*/], &Global_1578060[i /*3*/]);
	
		if (SYSTEM::VMAG(Global_1578053[i /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1578060[i /*3*/]) <= 0.01f)
		{
			Global_1578053[i /*3*/] = 0f - (iParam4 * 0.5f);
			Global_1578060[i /*3*/] = 0f + (iParam4 * 0.5f);
			Global_1578053[i /*3*/].f_1 = 0f - (iParam3 * 0.5f);
			Global_1578060[i /*3*/].f_1 = 0f + (iParam3 * 0.5f);
			Global_1578053[i /*3*/].f_2 = 0f - (iParam5 * 0.5f);
			Global_1578060[i /*3*/].f_2 = 0f + (iParam5 * 0.5f);
		}
	
		Global_1578067[i] = Global_1578060[i /*3*/] - Global_1578053[i /*3*/];
		Global_1578070[i] = Global_1578060[i /*3*/].f_1 - Global_1578053[i /*3*/].f_1;
		Global_1578073[i] = Global_1578060[i /*3*/].f_2 - Global_1578053[i /*3*/].f_2;
	
		if (Global_1578067[i] > Global_1578076)
			Global_1578076 = Global_1578067[i];
	
		if (Global_1578073[i] > Global_1578077)
			Global_1578077 = Global_1578073[i];
	}

	Global_1578078 = Global_1578076 * -0.5f;
	Global_1578081 = Global_1578076 * 0.5f;
	Global_1578078.f_1 = ((0.5f * Global_1578070[0]) + Global_1578070[1] + Global_1578049.f_3) * -1f;
	Global_1578081.f_1 = 0.5f * Global_1578070[0];
	Global_1578078.f_2 = Global_1578073[0] * -0.5f;
	Global_1578081.f_2 = Global_1578073[0] * 0.5f;
	*pvParam1 = { Global_1578078 };
	*pvParam2 = { Global_1578081 };
	return;
}

void func_466(int iParam0, var uParam1) // Position - 0x1681C (92188)
{
	switch (iParam0)
	{
		case 1:
			uParam1->[0] = joaat("hauler2");
			uParam1->[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
	
		case 2:
			uParam1->[0] = joaat("phantom3");
			uParam1->[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
	
		case 3:
			uParam1->[0] = joaat("nightshark");
			uParam1->[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}

	return;
}

int func_467(Hash hParam0) // Position - 0x1689D (92317)
{
	int i;
	int num;

	for (i = 0; i < 4; i = i + 1)
	{
		num = i;
	
		if (func_468(num) == hParam0)
			return num;
	}

	return 0;
}

Hash func_468(int iParam0) // Position - 0x168CC (92364)
{
	Hash num;

	num = 1000 + iParam0;
	return num;
}

void func_469(var uParam0, float fParam1, float fParam2, int iParam3) // Position - 0x168DE (92382)
{
	float num;
	float num2;
	float num3;

	num = SYSTEM::COS(fParam1);
	num2 = SYSTEM::SIN(fParam1);
	num3 = *uParam0;
	num3.f_1 = (num * uParam0->f_1) - (num2 * uParam0->f_2);
	num3.f_2 = (num2 * uParam0->f_1) + (num * uParam0->f_2);
	*uParam0 = { num3 };
	num = SYSTEM::COS(fParam1.f_1);
	num2 = SYSTEM::SIN(fParam1.f_1);
	num3 = (num * *uParam0) + (num2 * uParam0->f_2);
	num3.f_1 = uParam0->f_1;
	num3.f_2 = (num * uParam0->f_2) - (num2 * *uParam0);
	*uParam0 = { num3 };
	num = SYSTEM::COS(fParam1.f_2);
	num2 = SYSTEM::SIN(fParam1.f_2);
	num3 = (num * *uParam0) - (num2 * uParam0->f_1);
	num3.f_1 = (num2 * *uParam0) + (num * uParam0->f_1);
	num3.f_2 = uParam0->f_2;
	*uParam0 = { num3 };
	return;
}

float func_470(Hash hParam0, int iParam1) // Position - 0x169B5 (92597)
{
	var unk;
	var unk4;
	float num;
	float num2;

	if (hParam0 == 0)
		return 5f;

	func_464(hParam0, &unk, &unk4, 1086324736, 1080033280, 1077936128);
	num = { unk4 - unk };
	num2 = SYSTEM::SQRT((num * 0.5f * num * 0.5f) + (num.f_1 * 0.5f * num.f_1 * 0.5f) + (num.f_2 * 0.5f * num.f_2 * 0.5f)) + iParam1;
	return num2;
}

BOOL func_471(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, var uParam5, var uParam6, var uParam7, float fParam8, Hash hParam9, int iParam10) // Position - 0x16A35 (92725)
{
	if (func_462(uParam0, uParam5, fParam8, hParam9, 1036831949))
		return true;

	func_463(uParam0, iParam3, hParam4, &Global_1977384, &(Global_1977384.f_3), &(Global_1977384.f_6), 1036831949);
	func_463(uParam5, fParam8, hParam9, &(Global_1977384.f_7), &(Global_1977384.f_10), &(Global_1977384.f_13), 1036831949);

	if (MISC::GET_POINT_AREA_OVERLAP(Global_1977384, Global_1977384.f_3, Global_1977384.f_6, Global_1977384.f_7, Global_1977384.f_10, Global_1977384.f_13))
		return true;

	return false;
}

BOOL func_472(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, Player plParam5, int iParam6) // Position - 0x16AD3 (92883)
{
	Player i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!(plParam5 == i) || iParam6 == 1)
		{
			player = i;
		
			if (_NETWORK_IS_PLAYER_VALID(player, false, true) && _NETWORK_IS_PLAYER_VALID(plParam5, false, true))
				if (Global_2648917.f_261[i])
					if (func_462(Global_2648917.f_131[i /*3*/], uParam0, iParam3, hParam4, 1036831949))
						return true;
				else if (func_462(_GET_PLAYER_COORDS(player), uParam0, iParam3, hParam4, 1036831949))
					return true;
			else if (Global_2648917.f_261[i])
				if (func_462(Global_2648917.f_131[i /*3*/], uParam0, iParam3, hParam4, 1036831949))
					return true;
			else if (_NETWORK_IS_PLAYER_VALID(player, false, false))
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(player)))
					if (func_462(_GET_PLAYER_COORDS(player), uParam0, iParam3, hParam4, 1036831949))
						return true;
		}
	}

	return false;
}

void func_473(int iParam0) // Position - 0x16BE2 (93154)
{
	if (Global_2635516.f_683 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_682) < 30000)
		if (iParam0 == -1 || iParam0 > -1 && Global_2635516.f_683 < iParam0)
			Global_2635516.f_677 = 2;
		else
			Global_2635516.f_677 = 5;
	else
		Global_2635516.f_677 = 5;

	return;
}

void func_474(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x16C4D (93261)
{
	var unk;

	if (iParam3 == 0 && func_475(vParam0, 0.01f))
		return;

	if (iParam3 < 30 && SYSTEM::VMAG(vParam0) > 0f)
	{
		unk = { Global_2635516.f_3038[iParam3 /*3*/] };
		Global_2635516.f_3038[iParam3 /*3*/] = { vParam0 };
		func_474(unk, iParam3 + 1);
	}

	return;
}

BOOL func_475(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x16CB6 (93366)
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		if (SYSTEM::VDIST(vParam0, Global_2635516.f_3038[i /*3*/]) < iParam3)
			return true;
	}

	return false;
}

BOOL func_476(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0x16CF1 (93425)
{
	Vector3 vector;
	Vector3 vector2;
	var unk5;
	int i;
	float num;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return false;
	}
	else
	{
		func_587();
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (Global_2635516.f_688[i] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_463(uParam0, iParam3, hParam4, &vector, &vector2, &unk5, iParam6);
			
				if (bParam5)
				{
					num = MISC::ABSF(vector.f_2 - vector2.f_2);
					vector.f_2 = vector.f_2 + ((num * 0.5f) - 2f);
					vector2.f_2 = vector2.f_2 + (num * 0.5f);
				}
			
				Global_2635516.f_688[i] = NETWORK::NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(vector, vector2, iParam6);
				Global_2635516.f_692[i] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2635516.f_700 = Global_2635516.f_688[i];
				return true;
			}
		}
	}

	return false;
}

void func_477(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, var uParam5) // Position - 0x16DC2 (93634)
{
	Hash eventData;

	*uParam5 = func_479(&uParam0, &uParam3, &hParam4);
	eventData = 323285304;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = { uParam0 };
	eventData.f_6 = uParam3;
	eventData.f_7 = hParam4;
	eventData.f_8 = *uParam5;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 9, func_478(true, true), eventData);
	return;
}

int func_478(BOOL bParam0, BOOL bParam1) // Position - 0x16E14 (93716)
{
	int address;
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (_NETWORK_IS_PLAYER_VALID(player, false, false))
			if (player != PLAYER::PLAYER_ID() || bParam0)
				if (bParam1)
					MISC::SET_BIT(&address, i);
				else if (!func_373(player, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

Hash func_479(var uParam0, var uParam1, var uParam2) // Position - 0x16E79 (93817)
{
	var unk;
	Hash hashKey;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	TEXT_LABEL_APPEND_INT(&unk, SYSTEM::ROUND(*uParam0), 64);
	TEXT_LABEL_APPEND_INT(&unk, SYSTEM::ROUND(uParam0->f_1), 64);
	TEXT_LABEL_APPEND_INT(&unk, SYSTEM::ROUND(uParam0->f_2), 64);
	TEXT_LABEL_APPEND_INT(&unk, SYSTEM::ROUND(*uParam1), 64);
	TEXT_LABEL_APPEND_INT(&unk, *uParam2, 64);
	hashKey = MISC::GET_HASH_KEY(&unk);
	return hashKey;
}

void func_480(var uParam0, int iParam1, var uParam2) // Position - 0x16EC8 (93896)
{
	int i;

	i = 0;

	if (Global_2635516.f_2055 > 0)
	{
		for (i = 0; func_525(uParam0, iParam1, uParam2) == 0 && i < 2; i = i + 1)
		{
		}
	
		if (i == 2)
			uParam2->f_33 = 0;
		else
			return;
	}

	for (i = 0; func_481(uParam0, iParam1, uParam2) == 0 && i < 6; i = i + 1)
	{
	}

	return;
}

int func_481(var uParam0, int iParam1, var uParam2) // Position - 0x16F37 (94007)
{
	int num;
	float outPosition;
	float outPosition2;
	int nodeFlags;
	var density;
	int flags;
	int nthClosestVehicleNodeIdWithHeading;
	int outHeading;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	float num2;
	float num3;
	int num4;
	int i;
	int num5;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	float num6;
	BOOL flag8;
	int num7;
	float num8;
	int randomIntInRange;
	var unk3;
	float num9;
	var unk6;
	float num10;
	BOOL flag9;

	num = 0;

	if (!(SYSTEM::VMAG(uParam2->f_35) > 0f))
		uParam2->f_35 = { *uParam0 };

	if (uParam2->f_15)
	{
		if (func_521(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), true, true))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}

	if (uParam2->f_51)
		uParam2->f_6 = 9999.9f;

	if (uParam2->f_48)
		func_516(uParam0, true);

	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}

	nodeFlags = 0;
	flag = true;

	if (uParam2->f_11)
	{
		nodeFlags = nodeFlags + 2;
		nodeFlags = nodeFlags + 1;
		flag = false;
	}
	else if (uParam2->f_10 == 0 || uParam2->f_33 > 0 && uParam2->f_16)
	{
		nodeFlags = nodeFlags + 1;
		flag = false;
	}

	nodeFlags = nodeFlags + 4;
	num2 = 3f;
	num3 = 5f;

	switch (uParam2->f_33)
	{
		case 0:
			num2 = 3f;
			num3 = 5f;
			break;
	
		case 1:
			num2 = 2.75f;
			num3 = 7.5f;
			break;
	
		default:
			num2 = 2.5f;
			num3 = 10f;
			break;
	}

	num4 = 0;
	Global_2643433.f_162 = 0;
	Global_2643433.f_163 = 0;
	Global_2643433.f_164 = -99;
	Global_2643433.f_165 = { 0f, 0f, 0f };

	for (i = 0; i < 40; i = i + 1)
	{
		Global_2643433[i /*3*/] = { 0f, 0f, 0f };
		Global_2643433.f_121[i] = 0f;
	}

	num5 = 1;

	if (func_467(uParam2->f_34) != 0)
	{
		num5 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}

	while (true)
	{
		nthClosestVehicleNodeIdWithHeading = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, num * num5, &outPosition2, &outHeading, nodeFlags, num2, num3);
	
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(nthClosestVehicleNodeIdWithHeading))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(nthClosestVehicleNodeIdWithHeading, &outPosition);
			flag3 = false;
		
			if (Global_2643433.f_164 == nthClosestVehicleNodeIdWithHeading)
				flag3 = true;
		
			Global_2643433.f_165 = { outPosition };
		
			if (uParam2->f_10 || uParam2->f_33 > 0 || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(nthClosestVehicleNodeIdWithHeading) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(nthClosestVehicleNodeIdWithHeading))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(outPosition, &density, &flags);
			
				if (SYSTEM::VDIST(outPosition, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_509(&outPosition, false))
					{
						if (uParam2->f_13 || flags & 64 == 0 || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || flags & 16 == 0)
							{
								if (flags & 128 == 0 && flags & 256 == 0 && flags & 512 == 0)
								{
									if (!func_506(outPosition))
									{
										outPosition = { func_502(outPosition, &outPosition2, outHeading, uParam2->f_9, *uParam2, flag, uParam2->f_11, uParam2->f_34, &flag2, flag3, true, uParam2->f_51, uParam2->f_60) };
									
										if (SYSTEM::VMAG(outPosition) > 0f)
										{
											if (!func_501(outPosition, 5f))
											{
												if (outPosition.f_2 >= uParam2->f_35.f_2 - uParam2->f_7 || uParam2->f_33 >= 2)
												{
													if (outPosition.f_2 <= uParam2->f_35.f_2 + uParam2->f_6 || uParam2->f_33 >= 2)
													{
														if (func_497(outPosition, uParam2))
														{
															if (uParam2->f_48 && !func_516(&outPosition, false) || uParam2->f_48 == 0)
															{
																flag4 = true;
															
																if (!flag3)
																{
																	if (flag2)
																	{
																		num = num + -1;
																		flag4 = false;
																	}
																}
															
																if (SYSTEM::VMAG(outPosition) > 0f)
																{
																	if (uParam2->f_5 > 0f && SYSTEM::VDIST(outPosition, outPosition.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5 || uParam2->f_5 <= 0f || uParam2->f_33 >= 2)
																	{
																		if (uParam2->f_12 && !func_496(outPosition, outPosition2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_521(uParam2->f_35, &outPosition, &(uParam2->f_38), &(uParam2->f_45), false, true))
																			{
																				if (uParam2->f_8)
																				{
																					flag5 = uParam2->f_31;
																					flag6 = true;
																					flag7 = true;
																					num6 = uParam2->f_49;
																				
																					if (!uParam2->f_55)
																					{
																						flag5 = false;
																						flag6 = false;
																						flag7 = false;
																						num6 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						flag5 = false;
																						flag6 = false;
																						flag7 = false;
																					
																						if (uParam2->f_33 == 1)
																							num6 = num6 * 0.375f;
																					}
																					else
																					{
																						flag6 = true;
																						flag7 = true;
																					
																						if (uParam2->f_28)
																							if (uParam2->f_33 == 1)
																								num6 = num6 * 0.375f;
																					}
																				
																					flag8 = false;
																				
																					if (!func_495(outPosition, outPosition2, uParam2->f_34))
																						if (uParam2->f_3 > 7f)
																							if (func_370(outPosition, 6f, 1f, 1f, 5f, flag5, flag6, flag7, num6, uParam2->f_58, -1, true, uParam2->f_3, false, 0, false, false))
																								flag8 = true;
																						else if (func_370(outPosition, 6f, 1f, 1f, 5f, flag5, flag6, flag7, num6, uParam2->f_58, -1, true, 0f, false, 0, false, false) && !func_461(outPosition, outPosition2, uParam2->f_34, true, true, false, false, 0, false))
																							flag8 = true;
																				
																					if (flag8 || uParam2->f_33 >= 2)
																					{
																						if (uParam2->f_29 || uParam2->f_30 || uParam2->f_52 || uParam2->f_33 >= 2)
																						{
																							num8 = 0f;
																						
																							if (uParam2->f_52)
																								num7 = func_490(outPosition, uParam2->f_54, &num8);
																						
																							if (!uParam2->f_52 || uParam2->f_52 && num7 <= uParam2->f_53)
																							{
																								if (uParam2->f_52)
																								{
																									if (num7 < uParam2->f_53)
																									{
																										for (i = 0; i < Global_2643433.f_162; i = i + 1)
																										{
																											Global_2643433[i /*3*/] = { 0f, 0f, 0f };
																											Global_2643433.f_121[i] = 0f;
																										}
																									
																										Global_2643433.f_162 = 0;
																										uParam2->f_53 = num7;
																									}
																								}
																							
																								if (uParam2->f_30)
																								{
																									if (Global_2643433.f_162 == 0)
																									{
																										Global_2643433[0 /*3*/] = { outPosition };
																										Global_2643433.f_121[0] = outPosition2;
																									}
																									else
																									{
																										for (i = 0; i < Global_2643433.f_162 + 1; i = i + 1)
																										{
																											if (i < 40)
																											{
																												if (SYSTEM::VDIST2(outPosition, uParam2->f_35) < SYSTEM::VDIST2(Global_2643433[i /*3*/], uParam2->f_35))
																												{
																													func_489(outPosition, outPosition2, i);
																													i = Global_2643433.f_162 + 1;
																												}
																											}
																										}
																									}
																								
																									Global_2643433.f_162 = Global_2643433.f_162 + 1;
																								
																									if (Global_2643433.f_162 >= 5)
																										if (uParam2->f_52 && uParam2->f_53 == 0 || uParam2->f_52 == 0)
																											num = 100;
																										else if (Global_2643433.f_162 == 40)
																											num = 100;
																								}
																								else
																								{
																									Global_2643433[Global_2643433.f_162 /*3*/] = { outPosition };
																									Global_2643433.f_121[Global_2643433.f_162] = outPosition2;
																									Global_2643433.f_162 = Global_2643433.f_162 + 1;
																								
																									if (func_497(outPosition, uParam2))
																										Global_2643433.f_163 = Global_2643433.f_163 + 1;
																								
																									if (Global_2643433.f_162 >= 10)
																										if (uParam2->f_52 && uParam2->f_53 == 0 || uParam2->f_52 == 0)
																											num = 100;
																										else if (Global_2643433.f_162 == 40)
																											num = 100;
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { outPosition };
																							*iParam1 = outPosition2;
																							return 1;
																						}
																					}
																					else if (flag4)
																					{
																						num = num + 1;
																					}
																				}
																				else
																				{
																					*uParam0 = { outPosition };
																					*iParam1 = outPosition2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			num4 = num4 + 1;
																		}
																	}
																	else
																	{
																		num = 100;
																	}
																}
															}
															else
															{
																num = num + 1;
															}
														}
														else if (!uParam2->f_32)
														{
															num = 100;
														}
													}
													else
													{
														num = num + 1;
													}
												}
												else
												{
													num = num + 1;
												}
											}
										}
									}
									else
									{
										num = num + 1;
									}
								}
							}
							else
							{
								num = num + 1;
							}
						}
						else
						{
							num = num + 1;
						}
					}
					else
					{
						num4 = num4 + 1;
					}
				}
				else
				{
					num4 = num4 + 1;
				}
			}
		
			num = num + 1;
		
			if (num >= 40 + num4 || num >= 100)
			{
				if (Global_2643433.f_162 > 0 && uParam2->f_29 || uParam2->f_30 || uParam2->f_33 >= 2)
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2643433[0 /*3*/] };
						*iParam1 = Global_2643433.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2643433.f_163 > 0 && !(Global_2643433.f_163 == Global_2643433.f_162))
							func_487(0, uParam2);
					
						randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643433.f_162);
					
						if (uParam2->f_18 && uParam2->f_30)
							randomIntInRange = 0;
					
						unk3 = { Global_2643433[0 /*3*/] };
						num9 = Global_2643433.f_121[0];
						Global_2643433[0 /*3*/] = { Global_2643433[randomIntInRange /*3*/] };
						Global_2643433.f_121[0] = Global_2643433.f_121[randomIntInRange];
						Global_2643433[randomIntInRange /*3*/] = { unk3 };
						Global_2643433.f_121[randomIntInRange] = num9;
						*uParam0 = { Global_2643433[0 /*3*/] };
						*iParam1 = Global_2643433.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33 = uParam2->f_33 + 1;
				
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_486(num4, *uParam0, &num, &outPosition, &outPosition2, uParam2, flag, outHeading, nodeFlags, num2, num3, flag2);
						unk6 = { outPosition };
						num10 = outPosition2;
					
						if (!uParam2->f_50)
							flag9 = true;
						else
							flag9 = false;
					
						if (func_521(uParam2->f_35, &unk6, &(uParam2->f_38), &(uParam2->f_45), flag9, true) || func_516(&unk6, flag9))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { unk6 };
								*iParam1 = num10;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { unk6 };
								*iParam1 = num10;
								return 1;
							}
						}
						else
						{
							*uParam0 = { unk6 };
							*iParam1 = num10;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33 = uParam2->f_33 + 1;
		
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_482(&Global_1574205, uParam0, iParam1, *uParam0);
			
				if (uParam2->f_11)
					uParam2->f_27 = 1;
			
				return 1;
			}
		}
	
		Global_2643433.f_164 = nthClosestVehicleNodeIdWithHeading;
	}

	return 0;
}

void func_482(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x17965 (96613)
{
	float num;
	float num2;
	int i;
	int num3;

	num = 1E+09f;
	num3 = -1;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		num2 = SYSTEM::VDIST(uParam0->[i /*4*/], vParam3);
	
		if (num2 < num)
		{
			if (!func_483(uParam0->[i /*4*/], 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				num = num2;
				num3 = i;
			}
		}
	}

	if (!(num3 == -1))
	{
		*uParam1 = { uParam0->[num3 /*4*/] };
		*iParam2 = uParam0->[num3 /*4*/].f_3;
	}

	return;
}

BOOL func_483(var uParam0, var uParam1, var uParam2, float fParam3, Player plParam4, int iParam5, int iParam6) // Position - 0x179E9 (96745)
{
	if (func_485(uParam0, fParam3, plParam4, iParam5, false) || func_484(uParam0, plParam4, iParam6))
		return true;

	return false;
}

int func_484(var uParam0, var uParam1, var uParam2, Player plParam3, int iParam4) // Position - 0x17A1A (96794)
{
	Player i;
	int j;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!(plParam3 == i) || iParam4 == 1)
		{
			player = i;
		
			for (j = 0; j < 2; j = j + 1)
			{
				if (!(Global_2648917.f_461[i /*11*/][j /*5*/].f_4 == 0))
					if (func_462(uParam0, Global_2648917.f_461[i /*11*/][j /*5*/], Global_2648917.f_461[i /*11*/][j /*5*/].f_3, Global_2648917.f_461[i /*11*/][j /*5*/].f_4, 1036831949))
						if (_NETWORK_IS_PLAYER_VALID(player, false, true) && _NETWORK_IS_PLAYER_VALID(plParam3, false, true))
							return 1;
						else
							return 1;
			}
		}
	}

	return 0;
}

int func_485(Vector3 vParam0, var uParam1, var uParam2, float fParam3, Player plParam4, int iParam5, BOOL bParam6) // Position - 0x17ADC (96988)
{
	Player i;
	Player player;
	BOOL flag;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!(plParam4 == i) || iParam5 == 1)
		{
			player = i;
			flag = false;
		
			if (bParam6)
				if (_NETWORK_IS_PLAYER_VALID(player, false, true) && _NETWORK_IS_PLAYER_VALID(plParam4, false, true))
					if (PLAYER::GET_PLAYER_TEAM(player) == PLAYER::GET_PLAYER_TEAM(plParam4))
						flag = true;
		
			if (!flag)
				if (_NETWORK_IS_PLAYER_VALID(player, false, true) && _NETWORK_IS_PLAYER_VALID(plParam4, false, true))
					if (Global_2648917.f_261[i])
						if (SYSTEM::VDIST(Global_2648917.f_131[i /*3*/], vParam0) < fParam3)
							return 1;
					else if (SYSTEM::VDIST(_GET_PLAYER_COORDS(player), vParam0) < 1f)
						return 1;
				else if (Global_2648917.f_261[i])
					if (SYSTEM::VDIST(Global_2648917.f_131[i /*3*/], vParam0) < fParam3)
						return 1;
				else if (_NETWORK_IS_PLAYER_VALID(player, false, true))
					if (SYSTEM::VDIST(_GET_PLAYER_COORDS(player), vParam0) < 1f)
						return 1;
		}
	}

	return 0;
}

void func_486(int iParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4, Vector3* pvParam5, float* pfParam6, var uParam7, BOOL bParam8, int iParam9, int iParam10, float fParam11, float fParam12, BOOL bParam13) // Position - 0x17BF9 (97273)
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		*uParam4 = MISC::GET_RANDOM_INT_IN_RANGE(1 + iParam0, 40 + iParam0);
	
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *uParam4, pvParam5, pfParam6, &iParam9, iParam10, fParam11, fParam12))
		{
			if (SYSTEM::VMAG(*pvParam5) > 0f)
			{
				*pvParam5 = { func_502(*pvParam5, pfParam6, iParam9, uParam7->f_9, *uParam7, bParam8, uParam7->f_11, uParam7->f_34, &bParam13, false, false, uParam7->f_51, uParam7->f_60) };
			
				if (!func_506(*pvParam5))
				{
					i = 999;
					return;
				}
			}
		}
	}

	return;
}

void func_487(int iParam0, var uParam1) // Position - 0x17C96 (97430)
{
	if (!func_497(Global_2643433[iParam0 /*3*/], uParam1))
	{
		Global_2643433.f_162 = Global_2643433.f_162 - 1;
		func_488(iParam0);
	
		if (Global_2643433.f_162 > Global_2643433.f_163)
			func_487(iParam0, uParam1);
	}
	else if (iParam0 < 39)
	{
		func_487(iParam0 + 1, uParam1);
	}

	return;
}

void func_488(int iParam0) // Position - 0x17CF1 (97521)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2643433[iParam0 /*3*/] = { Global_2643433[iParam0 + 1 /*3*/] };
			Global_2643433.f_121[iParam0] = Global_2643433.f_121[iParam0 + 1];
		}
	
		iParam0 = iParam0 + 1;
	}

	return;
}

void func_489(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4) // Position - 0x17D3C (97596)
{
	Vector3 vector;
	float num;

	vector = { Global_2643433[iParam4 /*3*/] };
	num = Global_2643433.f_121[iParam4];
	Global_2643433[iParam4 /*3*/] = { uParam0 };
	Global_2643433.f_121[iParam4] = fParam3;

	if (iParam4 <= Global_2643433.f_162 && iParam4 < 39)
		if (SYSTEM::VMAG(vector) > 0f)
			func_489(vector, num, iParam4 + 1);

	return;
}

int func_490(Vector3 vParam0, var uParam1, var uParam2, float fParam3, var uParam4) // Position - 0x17DA9 (97705)
{
	Player i;
	Vector3 vector;
	int num;
	Player player;
	float num2;
	float num3;

	num2 = 99999.9f;

	for (i = 0; i < 32; i = i + 1)
	{
		player = i;
	
		if (func_491(player))
		{
			vector = { _GET_PLAYER_COORDS(player) };
			num3 = SYSTEM::VDIST(vParam0, vector);
		
			if (num3 < fParam3)
			{
				if (num3 < num2)
					num2 = num3;
			
				num = num + 1;
			}
		}
	}

	*uParam4 = num2;
	return num;
}

BOOL func_491(Player plParam0) // Position - 0x17E11 (97809)
{
	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		if (!func_446(plParam0))
			if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), plParam0))
				if (!(PLAYER::GET_PLAYER_TEAM(plParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())))
					if (func_243(PLAYER::PLAYER_ID(), true, false))
						if (!func_492(PLAYER::GET_PLAYER_TEAM(plParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1))
							return true;
					else
						return true;
				else if (PLAYER::GET_PLAYER_TEAM(plParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					if (!func_243(PLAYER::PLAYER_ID(), true, false))
						if (!func_380(plParam0))
							return true;
					else
						return true;

	return false;
}

BOOL func_492(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x17EBF (97983)
{
	int num;
	int num2;

	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
			return true;
	
		return false;
	}

	if (iParam0 > -1 && iParam1 > -1 && iParam0 == iParam1)
		return true;

	if (iParam0 > -1 && iParam0 < 4 && iParam1 > -1 && iParam1 < 4)
	{
		num = Global_1058116.f_14[iParam0];
	
		if (iParam3 != -1)
			num = iParam3;
	
		if (num < 17 && num > -1)
		{
			if (IS_BIT_SET(Global_4718592.f_3592[iParam0 /*26190*/].f_25921, num))
			{
				num2 = Global_1058116.f_14[iParam1];
			
				if (num2 < 17 && num2 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_493(iParam0, num, iParam1, num2) || !func_493(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[num], 0 + iParam1);
							break;
					
						case 1:
							if (!func_493(iParam0, num, iParam1, num2) || !func_493(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[num], 4 + iParam1);
							break;
					
						case 2:
							if (!func_493(iParam0, num, iParam1, num2) || !func_493(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[num], 8 + iParam1);
							break;
					
						case 3:
							if (!func_493(iParam0, num, iParam1, num2) || !func_493(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[num], 12 + iParam1);
							break;
					}
				}
			}
		}
	}

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3541, 0);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3541, 1);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3541, 2);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3541, 3);
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3541, 4);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3541, 5);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3541, 6);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3541, 7);
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3541, 8);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3541, 9);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3541, 10);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3541, 11);
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3541, 12);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3541, 13);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3541, 14);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3541, 15);
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_493(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1820D (98829)
{
	BOOL num;
	Player player;
	Ped playerPed;
	Hash entityModel;
	Hash entityModel2;
	Player i;

	if (iParam0 == iParam2)
		return true;

	if (!IS_BIT_SET(Global_4718592.f_3592[iParam0 /*26190*/].f_25922, iParam1))
		return false;

	if (!IS_BIT_SET(Global_4718592.f_3592[iParam2 /*26190*/].f_25922, iParam3))
		return false;

	num = 1;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		entityModel2 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = i;
	
		if (!_NETWORK_IS_PLAYER_VALID(player, true, true) || func_373(player, 0) || IS_BIT_SET(Global_2657994[player /*467*/].f_202, 2) || func_494(player))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(player) != iParam2)
		{
		}
		else
		{
			playerPed = PLAYER::GET_PLAYER_PED(player);
		
			if (PED::IS_PED_INJURED(playerPed))
			{
			}
			else
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);
			
				if (entityModel2 == joaat("MP_F_Freemode_01") || entityModel2 == joaat("MP_M_Freemode_01"))
					if (entityModel == joaat("MP_F_Freemode_01") || entityModel == joaat("MP_M_Freemode_01"))
						return true;
					else
						return false;
				else if (entityModel2 != entityModel)
					return false;
			}
		}
	}

	return num;
}

BOOL func_494(Player plParam0) // Position - 0x18339 (99129)
{
	return IS_BIT_SET(Global_1845270[plParam0 /*892*/].f_36.f_18, 14);
}

BOOL func_495(Vector3 vParam0, var uParam1, var uParam2, int iParam3, Hash hParam4) // Position - 0x18351 (99153)
{
	int flags;
	Vehicle closestVehicle;
	Hash entityModel;
	var entityCoords;
	float entityHeading;

	flags = 1;
	flags = flags + 2;
	flags = flags + 4;
	flags = flags + 8;
	flags = flags + 16;
	flags = flags + 32;
	flags = flags + 64;
	flags = flags + 131076;
	closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, flags);

	if (ENTITY::DOES_ENTITY_EXIST(closestVehicle) && !ENTITY::IS_ENTITY_DEAD(closestVehicle, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(closestVehicle);
		entityCoords = { ENTITY::GET_ENTITY_COORDS(closestVehicle, false) };
		entityHeading = ENTITY::GET_ENTITY_HEADING(closestVehicle);
	
		if (func_471(vParam0, iParam3, hParam4, entityCoords, entityHeading, entityModel, 0))
			return true;
	}

	flags = flags + 4096;
	flags = flags + 8192;
	flags = flags + 16384;
	closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, flags);

	if (ENTITY::DOES_ENTITY_EXIST(closestVehicle) && !ENTITY::IS_ENTITY_DEAD(closestVehicle, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(closestVehicle);
		entityCoords = { ENTITY::GET_ENTITY_COORDS(closestVehicle, false) };
		entityHeading = ENTITY::GET_ENTITY_HEADING(closestVehicle);
	
		if (func_471(vParam0, iParam3, hParam4, entityCoords, entityHeading, entityModel, 0))
			return true;
	}

	return false;
}

BOOL func_496(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, Player plParam5, int iParam6, int iParam7) // Position - 0x1845D (99421)
{
	if (func_472(uParam0, iParam3, hParam4, plParam5, iParam6) || func_531(uParam0, iParam3, hParam4, plParam5, iParam7))
		return true;

	return false;
}

BOOL func_497(Vector3 vParam0, var uParam1, var uParam2, var uParam3) // Position - 0x18493 (99475)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_500(vParam0, uParam3->f_19, uParam3->f_25, false, false))
					return true;
				break;
		
			case 1:
				if (func_498(vParam0, uParam3->f_19, uParam3->f_22, false, false))
					return true;
				break;
		
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_19, uParam3->f_22, uParam3->f_25, false, true))
					return true;
				break;
		}
	
		return false;
	}

	return true;
}

BOOL func_498(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8, BOOL bParam9, BOOL bParam10) // Position - 0x18524 (99620)
{
	func_499(&fParam3, &fParam6);

	if (!(fParam0 >= fParam3) || !(fParam0.f_1 >= fParam3.f_1) || !(fParam0 <= fParam6) || !(fParam0.f_1 <= fParam6.f_1))
		return 0;

	if (bParam9 && bParam10)
		return 1;
	else if (bParam9)
		if (fParam0.f_2 >= fParam3.f_2)
			return 1;
	else if (bParam10)
		if (fParam0.f_2 <= fParam6.f_2)
			return 1;
	else if (fParam0.f_2 >= fParam3.f_2 && fParam0.f_2 <= fParam6.f_2)
		return 1;

	return 0;
}

void func_499(var uParam0, var uParam1) // Position - 0x185CF (99791)
{
	var unk;

	if (*uParam0 > *uParam1)
	{
		unk = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = unk;
	}

	if (uParam0->f_1 > uParam1->f_1)
	{
		unk = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = unk;
	}

	if (uParam0->f_2 > uParam1->f_2)
	{
		unk = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = unk;
	}

	return;
}

BOOL func_500(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7, BOOL bParam8) // Position - 0x18631 (99889)
{
	if (bParam7 && bParam8)
	{
		vParam0.f_2 = 0f;
		vParam3.f_2 = 0f;
		return SYSTEM::VDIST(vParam0, vParam3) < fParam6 + 0.01f;
	}
	else if (bParam7)
	{
		if (vParam0.f_2 > vParam3.f_2)
			vParam0.f_2 = vParam3.f_2;
	
		return SYSTEM::VDIST(vParam0, vParam3) < fParam6 + 0.01f;
	}
	else if (bParam8)
	{
		if (vParam0.f_2 < vParam3.f_2)
			vParam0.f_2 = vParam3.f_2;
	
		return SYSTEM::VDIST(vParam0, vParam3) < fParam6 + 0.01f;
	}

	return SYSTEM::VDIST(vParam0, vParam3) < fParam6 + 0.01f;
}

BOOL func_501(var uParam0, var uParam1, var uParam2, float fParam3) // Position - 0x186E4 (100068)
{
	int i;

	if (func_243(PLAYER::PLAYER_ID(), true, false))
	{
		if (*Global_4980736.f_48340 > 0)
		{
			for (i = 0; i < *Global_4980736.f_48340; i = i + 1)
			{
				if (Global_4980736.f_48341[i /*162*/].f_7 != 0)
					if (func_462(uParam0, Global_4980736.f_48341[i /*162*/], Global_4980736.f_48341[i /*162*/].f_6, Global_4980736.f_48341[i /*162*/].f_7, fParam3))
						return true;
			}
		}
	
		if (Global_4980736.f_7020 > 0)
		{
			for (i = 0; i < Global_4980736.f_7020; i = i + 1)
			{
				if (Global_4980736.f_7023[i /*636*/].f_15 != 0)
					if (func_462(uParam0, Global_4980736.f_7023[i /*636*/], Global_4980736.f_7023[i /*636*/].f_3, Global_4980736.f_7023[i /*636*/].f_15, 0.5f))
						return true;
			}
		}
	
		if (*Global_4980736.f_115812 > 0)
		{
			for (i = 0; i < *Global_4980736.f_115812; i = i + 1)
			{
				if (Global_4980736.f_115816[i /*615*/].f_12 != 0)
					if (func_462(uParam0, Global_4980736.f_115816[i /*615*/], Global_4980736.f_115816[i /*615*/].f_3, Global_4980736.f_115816[i /*615*/].f_12, 0.5f))
						return true;
			}
		}
	
		if (Global_1058116.f_268 > 0)
		{
			for (i = 0; i < Global_1058116.f_268; i = i + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058116.f_233[i]) && !ENTITY::IS_ENTITY_DEAD(Global_1058116.f_233[i], false))
					if (func_462(uParam0, ENTITY::GET_ENTITY_COORDS(Global_1058116.f_233[i], true), ENTITY::GET_ENTITY_HEADING(Global_1058116.f_233[i]), ENTITY::GET_ENTITY_MODEL(Global_1058116.f_233[i]), 0.5f))
						return true;
			}
		}
	
		if (Global_1058116.f_266 > 0)
		{
			for (i = 0; i < Global_1058116.f_266; i = i + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058116.f_119[i]) && !ENTITY::IS_ENTITY_DEAD(Global_1058116.f_119[i], false))
					if (func_462(uParam0, ENTITY::GET_ENTITY_COORDS(Global_1058116.f_119[i], true), ENTITY::GET_ENTITY_HEADING(Global_1058116.f_119[i]), ENTITY::GET_ENTITY_MODEL(Global_1058116.f_119[i]), 0.5f))
						return true;
			}
		}
	}

	return false;
}

Vector3 func_502(Vector3 vParam0, var uParam1, var uParam2, float* pfParam3, int iParam4, BOOL bParam5, Vector3 vParam6, var uParam7, var uParam8, BOOL bParam9, BOOL bParam10, Hash hParam11, var uParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16) // Position - 0x18978 (100728)
{
	var offsetFromCoordAndHeadingInWorldCoords;
	var density;
	int flags;
	var unk3;
	int value;
	int value2;
	float num;
	float xOffset;
	BOOL flag;
	BOOL flag2;
	float num2;
	var outPosition;
	Vector3 vector;
	var unk10;

	if (bParam15)
	{
		if (SYSTEM::VMAG(vParam6) > 0f)
			if (!func_505(vParam0, *pfParam3, vParam6))
				*pfParam3 = *pfParam3 + 180f;
	
		return vParam0;
	}

	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &density, &flags);

	if (flags & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &unk3, &unk3, &value, &value2, &num, bParam9);
	
		if (value == value2)
			*uParam12 = 1;
	
		if (bParam14)
		{
			if (!(flags & 128 == 0))
				return 0f, 0f, 0f;
		
			if (!(flags & 256 == 0))
				return 0f, 0f, 0f;
		
			if (!(flags & 512 == 0))
				return 0f, 0f, 0f;
		
			if (value + value2 != iParam4)
				return 0f, 0f, 0f;
		
			if (VEHICLE::IS_THIS_MODEL_A_HELI(hParam11) && func_504(vParam0))
				return 0f, 0f, 0f;
		}
	
		if (bParam13 && *uParam12)
		{
			*pfParam3 = *pfParam3 + 180f;
		
			if (*pfParam3 > 360f)
				*pfParam3 = *pfParam3 + -360f;
		}
	
		if (*pfParam3 <= 90f || *pfParam3 > 270f)
			flag = true;
		else
			flag = false;
	
		flag2 = false;
	
		if (flag)
			if (value == 0)
				if (bParam14)
					return 0f, 0f, 0f;
			else if (iParam4 == value)
				flag2 = true;
		else if (value2 == 0)
			if (bParam14)
				return 0f, 0f, 0f;
		else if (iParam4 == value2)
			flag2 = true;
	
		if (num < 0f)
		{
			xOffset = 0f;
		}
		else
		{
			if (flag)
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
			else
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
		
			if (!(flags & 64 == 0))
				xOffset = xOffset + (0.95f * num);
		
			if (!(flags & 4 == 0) || !(flags & 8 == 0))
				xOffset = xOffset + -0.5f;
		
			if (!(flags & 32 == 0) && flags & 4 == 0 && flags & 8 == 0)
				xOffset = xOffset + -1f;
		
			if (!bParam5 || !(flags & 8 == 0))
				xOffset = xOffset + (4.2f * -0.5f);
		
			if (!(hParam11 == 0))
			{
				if (flags & 8 != 0)
					num2 = func_503(hParam11, 3.5f);
				else
					num2 = func_503(hParam11, 1.5f);
			
				if (num2 > 1.8f)
					xOffset = xOffset + ((num2 - 1.8f) * -0.5f);
			}
		}
	}

	if (SYSTEM::VMAG(vParam6) > 0f)
		if (!func_505(vParam0, *pfParam3, vParam6))
			if (bParam5 || bParam16 || flags & 1024 != 0 || vParam0.f_2 == 0f && bParam10)
				*pfParam3 = *pfParam3 + 180f;
			else if (bParam14)
				return 0f, 0f, 0f;

	if (xOffset < 0f)
		xOffset = 0f;

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, *pfParam3, xOffset, 0f, 0f) };

	if (bParam5)
	{
		if (PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(vParam0, *pfParam3, &outPosition))
		{
			vector = { outPosition - vParam0 };
		
			if (!(hParam11 == 0))
			{
				unk10 = { vector / F2V(SYSTEM::VMAG(vector)) };
			
				if (flags & 8 != 0)
					num2 = func_503(hParam11, 3.5f);
				else
					num2 = func_503(hParam11, 1.5f);
			
				unk10 = { unk10 * { num2 * 0.5f, num2 * 0.5f, num2 * 0.5f } };
				vector = { vector - unk10 };
				outPosition = { vParam0 + vector };
			}
		
			unk10 = { offsetFromCoordAndHeadingInWorldCoords - outPosition };
			offsetFromCoordAndHeadingInWorldCoords = { outPosition };
		}
	}

	return offsetFromCoordAndHeadingInWorldCoords;
}

float func_503(Hash hParam0, float fParam1) // Position - 0x18DC7 (101831)
{
	var unk;
	float num;
	float num2;

	func_464(hParam0, &unk, &num, 1086324736, 1080033280, 1077936128);
	num2 = num - unk;

	if (num2 < fParam1)
		return fParam1;

	return num2;
}

BOOL func_504(float fParam0, var uParam1, var uParam2) // Position - 0x18DFE (101886)
{
	float groundZ;

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(fParam0, fParam0.f_1, fParam0.f_2 + 500f, &groundZ, false, false))
	{
		groundZ = groundZ - fParam0.f_2;
	
		if (groundZ > 6f)
			return true;
	}

	return false;
}

BOOL func_505(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6) // Position - 0x18E36 (101942)
{
	var unk;
	var unk4;

	unk = { 0f, 1f, 0f };
	func_469(&unk, 0f, 0f, iParam3);
	unk4 = { uParam4 - uParam0 };

	if (func_275(unk4, unk) >= 0f)
		return true;

	return false;
}

BOOL func_506(var uParam0, var uParam1, var uParam2) // Position - 0x18E72 (102002)
{
	int i;
	int num;

	num = func_508(uParam0);

	for (i = 0; i < Global_2643140[num]; i = i + 1)
	{
		if (func_507(uParam0, &Global_2642437[num /*78*/][i /*7*/]))
			return true;
	}

	for (i = 0; i < Global_2643140[8]; i = i + 1)
	{
		if (func_507(uParam0, &Global_2642437[8 /*78*/][i /*7*/]))
			return true;
	}

	return false;
}

BOOL func_507(Vector3 vParam0, var uParam1, var uParam2, var uParam3) // Position - 0x18EED (102125)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_508(float fParam0, var uParam1, var uParam2) // Position - 0x18F0D (102157)
{
	if (fParam0.f_1 > Global_2642428[0])
		return 0;

	if (fParam0.f_1 > Global_2642428[1])
		if (fParam0 < Global_2642432[0])
			return 1;
		else
			return 2;

	if (fParam0.f_1 > Global_2642428[2])
		if (fParam0 < Global_2642432[1])
			return 3;
		else if (fParam0 < Global_2642432[2])
			return 4;
		else if (fParam0 < Global_2642432[3])
			return 5;
		else
			return 6;

	return 7;
}

BOOL func_509(var uParam0, BOOL bParam1) // Position - 0x18FA8 (102312)
{
	var unk;
	var unk2;
	float randomFloatInRange;

	if (func_515(*uParam0))
	{
		if (bParam1)
		{
			unk2 = { *uParam0 };
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_514(&unk2, Global_2635516.f_594, Global_2635516.f_597, 1036831949, false, randomFloatInRange);
		
			if (func_510(unk2, &unk) || func_515(unk2))
			{
				unk2 = { *uParam0 };
				func_514(&unk2, Global_2635516.f_594, Global_2635516.f_597, 1036831949, true, randomFloatInRange);
			}
		
			*uParam0 = { unk2 };
		}
	}

	return false;
}

BOOL func_510(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x19040 (102464)
{
	int i;
	int num;

	if (func_513())
		return false;

	num = func_512();

	for (i = 0; i < num; i = i + 1)
	{
		if (Global_2635516.f_369[i /*12*/].f_9 == true)
		{
			if (func_511(uParam0, &Global_2635516.f_369[i /*12*/], 1008981770, false, false))
			{
				*uParam3 = i;
				return true;
			}
		}
	}

	return false;
}

BOOL func_511(Vector3 vParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x190A4 (102564)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_500(vParam0, *uParam3, uParam3->f_6 + iParam4 + ((float)Global_2635516.f_3036 * uParam3->f_8), bParam5, bParam6);
	
		case 1:
			return func_498(vParam0, *uParam3 + { iParam4 * -1f, iParam4 * -1f, iParam4 * -1f }, uParam3->f_3 + { iParam4, iParam4, iParam4 }, bParam5, bParam6);
	
		case 2:
			if (bParam5 && bParam6)
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, false);
			else if (bParam5)
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(vParam0.f_2 < uParam3->f_2 && vParam0.f_2 < uParam3->f_3.f_2))
					return true;
				else
					return false;
			else if (bParam6)
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(vParam0.f_2 > uParam3->f_2 && vParam0.f_2 > uParam3->f_3.f_2))
					return true;
				else
					return false;
			else
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
			break;
	}

	return false;
}

int func_512() // Position - 0x19205 (102917)
{
	int i;
	int num;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_2635516.f_369[i /*12*/].f_9)
			num = num + 1;
	}

	return num;
}

BOOL func_513() // Position - 0x19238 (102968)
{
	return Global_1944438.f_748;
}

void func_514(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6, float fParam7) // Position - 0x19247 (102983)
{
	Vector3 vector;
	var unk3;

	vector = { *uParam0 - uParam1 };
	vector.f_2 = 0f;

	if (SYSTEM::VMAG(vector) > 0f)
	{
		vector = { vector / F2V(SYSTEM::VMAG(vector)) };
	}
	else
	{
		vector = { 0f, 1f, 0f };
	
		if (fParam7 == 0f)
			func_469(&vector, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		else
			func_469(&vector, 0f, 0f, fParam7);
	}

	vector = { vector * { fParam4 + iParam5, fParam4 + iParam5, fParam4 + iParam5 } };

	if (!bParam6)
		unk3 = { uParam1 + vector };
	else
		unk3 = { uParam1 - vector };

	*uParam0 = unk3;
	uParam0->f_1 = unk3.f_1;
	return;
}

BOOL func_515(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x192EF (103151)
{
	float num;

	if (Global_2635516.f_597 > 0f)
	{
		num = SYSTEM::VDIST(vParam0, Global_2635516.f_594);
	
		if (num < Global_2635516.f_597)
			return 1;
	}

	return 0;
}

BOOL func_516(var uParam0, BOOL bParam1) // Position - 0x19328 (103208)
{
	BOOL flag;

	flag = false;

	if (Global_2635516.f_26.f_18)
	{
		switch (Global_2635516.f_26.f_17)
		{
			case 0:
				if (func_500(*uParam0, Global_2635516.f_26.f_10, Global_2635516.f_26.f_16, false, false))
					flag = true;
				break;
		
			case 1:
				if (func_498(*uParam0, Global_2635516.f_26.f_10, Global_2635516.f_26.f_13, false, false))
					flag = true;
				break;
		
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635516.f_26.f_10, Global_2635516.f_26.f_13, Global_2635516.f_26.f_16, false, true))
					flag = true;
				break;
		}
	
		if (flag)
			if (bParam1)
				*uParam0 = { func_517(*uParam0, Global_2635516.f_26.f_10, Global_2635516.f_26.f_13, Global_2635516.f_26.f_16, Global_2635516.f_26.f_17, 1036831949, false) };
	}

	return flag;
}

Vector3 func_517(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10, int iParam11, BOOL bParam12) // Position - 0x1941A (103450)
{
	int i;
	Vector3 outPosition;

	switch (iParam10)
	{
		case 0:
			func_514(&vParam0, vParam3, fParam9, iParam11, bParam12, 0);
			break;
	
		case 1:
			func_520(&vParam0, vParam3, fParam6, iParam11, bParam12);
			break;
	
		case 2:
			func_518(&vParam0, vParam3, fParam6, fParam9, iParam11, bParam12);
			break;
	}

	for (i = 0; i < 40; i = i + 1)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, i * 5, &outPosition, 1, 0f, 0f);
	
		switch (iParam10)
		{
			case 0:
				if (!func_500(outPosition, vParam3, fParam9, false, false))
					return outPosition;
				break;
		
			case 1:
				if (!func_498(outPosition, vParam3, fParam6, false, false))
					return outPosition;
				break;
		
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(outPosition, vParam3, fParam6, fParam9, false, true))
					return outPosition;
				break;
		}
	}

	return vParam0;
}

void func_518(var uParam0, float fParam1, var uParam2, var uParam3, float fParam4, var uParam5, var uParam6, float fParam7, int iParam8, BOOL bParam9) // Position - 0x1951D (103709)
{
	float x1;
	float x2;
	Vector3 vector;
	float num;
	Vector3 vector2;
	Vector3 vector3;
	float num2;
	var unk11;
	var unk14;
	var unk17;
	float x12;
	float x22;

	x1 = { fParam4 - fParam1 };
	x1.f_2 = 0f;
	x2 = { *uParam0 - fParam1 };
	x2.f_2 = 0f;
	vector = { func_519(0f, 0f, 1f, x1) };
	vector = { vector / F2V(SYSTEM::VMAG(vector)) };
	num = SYSTEM::VMAG(x2) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x1, x1.f_1, x2, x2.f_1));

	if (num < fParam7 * 0.5f)
	{
		if (!bParam9)
			if (func_275(vector, x2) >= 0f)
				vector = { vector * { ((fParam7 * 0.5f) - num) + iParam8, ((fParam7 * 0.5f) - num) + iParam8, ((fParam7 * 0.5f) - num) + iParam8 } };
			else
				vector = { vector * { (((fParam7 * 0.5f) - num) + iParam8) * -1f, (((fParam7 * 0.5f) - num) + iParam8) * -1f, (((fParam7 * 0.5f) - num) + iParam8) * -1f } };
		else if (func_275(vector, x2) >= 0f)
			vector = { vector * { ((fParam7 * 0.5f) + num + iParam8) * -1f, ((fParam7 * 0.5f) + num + iParam8) * -1f, ((fParam7 * 0.5f) + num + iParam8) * -1f } };
		else
			vector = { vector * { (fParam7 * 0.5f) + num + iParam8, (fParam7 * 0.5f) + num + iParam8, (fParam7 * 0.5f) + num + iParam8 } };
	
		vector2 = { *uParam0 + vector };
		num2 = SYSTEM::VDIST(fParam1, fParam1.f_1, 0f, fParam4, fParam4.f_1, 0f);
		unk11 = { (fParam1 + fParam4) / { 2f, 2f, 2f } };
		unk11.f_2 = 0f;
		vector = { func_519(0f, 0f, 1f, x1) };
		vector = { vector / F2V(SYSTEM::VMAG(vector)) };
		vector = { vector * { fParam7 * 0.5f, fParam7 * 0.5f, fParam7 * 0.5f } };
		unk14 = { unk11 - vector };
		unk17 = { unk11 + vector };
		x12 = { unk17 - unk14 };
		x12.f_2 = 0f;
		x22 = { *uParam0 - unk14 };
		x22.f_2 = 0f;
		vector = { func_519(0f, 0f, 1f, x12) };
		vector = { vector / F2V(SYSTEM::VMAG(vector)) };
		num = SYSTEM::VMAG(x22) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x12, x12.f_1, x22, x22.f_1));
	
		if (!bParam9)
			if (func_275(vector, x22) >= 0f)
				vector = { vector * { ((num2 * 0.5f) - num) + iParam8, ((num2 * 0.5f) - num) + iParam8, ((num2 * 0.5f) - num) + iParam8 } };
			else
				vector = { vector * { (((num2 * 0.5f) - num) + iParam8) * -1f, (((num2 * 0.5f) - num) + iParam8) * -1f, (((num2 * 0.5f) - num) + iParam8) * -1f } };
		else if (func_275(vector, x22) >= 0f)
			vector = { vector * { ((num2 * 0.5f) + num + iParam8) * -1f, ((num2 * 0.5f) + num + iParam8) * -1f, ((num2 * 0.5f) + num + iParam8) * -1f } };
		else
			vector = { vector * { (num2 * 0.5f) + num + iParam8, (num2 * 0.5f) + num + iParam8, (num2 * 0.5f) + num + iParam8 } };
	
		vector3 = { *uParam0 + vector };
	
		if (SYSTEM::VDIST(vector2, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vector3, *uParam0, uParam0->f_1, 0f))
			*uParam0 = { vector2 };
		else
			*uParam0 = { vector3 };
	}

	return;
}

Vector3 func_519(float fParam0, float fParam1, float fParam2, var uParam3, var uParam4, var uParam5) // Position - 0x197EC (104428)
{
	return (fParam0.f_1 * uParam3.f_2) - (fParam0.f_2 * uParam3.f_1), (fParam0.f_2 * uParam3) - (fParam0 * uParam3.f_2), (fParam0 * uParam3.f_1) - (fParam0.f_1 * uParam3);
}

void func_520(var uParam0, float fParam1, var uParam2, var uParam3, float fParam4, var uParam5, var uParam6, int iParam7, BOOL bParam8) // Position - 0x19825 (104485)
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;

	num = { *uParam0 };
	num2 = *uParam0 - fParam1;
	num3 = *uParam0 - fParam4;

	if (num2 < num3)
		num4 = num2;
	else
		num4 = num3;

	num5 = uParam0->f_1 - fParam1.f_1;
	num6 = uParam0->f_1 - fParam4.f_1;

	if (num5 < num6)
		num7 = num5;
	else
		num7 = num6;

	num = { *uParam0 };

	if (!bParam8)
		if (num4 < num7)
			if (num2 < num3)
				num = fParam1 - iParam7;
			else
				num = fParam4 + iParam7;
		else if (num5 < num6)
			num.f_1 = fParam1.f_1 - iParam7;
		else
			num.f_1 = fParam4.f_1 + iParam7;
	else if (num4 < num7)
		if (num2 < num3)
			num = fParam4 + iParam7;
		else
			num = fParam1 - iParam7;
	else if (num5 < num6)
		num.f_1 = fParam4.f_1 + iParam7;
	else
		num.f_1 = fParam1.f_1 - iParam7;

	*uParam0 = { num };
	return;
}

BOOL func_521(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7) // Position - 0x19924 (104740)
{
	int i;
	BOOL flag;

	if (func_578(uParam0))
	{
		if (func_524(uParam3, bParam6, false, true, true))
		{
			if (bParam6)
			{
			}
		
			return true;
		}
	}

	if (func_522(uParam3, bParam6, true))
	{
		if (bParam6)
		{
		}
	
		return true;
	}

	if (bParam7)
		if (func_475(*uParam3, 1056964608))
			return true;

	flag = false;

	for (i = 0; i < *uParam4; i = i + 1)
	{
		if (SYSTEM::VDIST(*uParam3, uParam4->[i /*3*/]) < uParam5->[i])
		{
			if (bParam6)
				func_514(uParam3, uParam4->[i /*3*/], uParam5->[i], 1036831949, false, 0);
		
			flag = true;
		}
	}

	if (flag)
		return true;

	return false;
}

BOOL func_522(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x199E0 (104928)
{
	int num;
	var unk;
	var unk2;

	if (func_510(*uParam0, &num))
	{
		if (bParam1)
		{
			unk2 = { *uParam0 };
			func_523(&unk2, &Global_2635516.f_369[num /*12*/], 1036831949, false, bParam2);
		
			if (func_510(unk2, &unk) || func_515(unk2))
			{
				unk2 = { *uParam0 };
				func_523(&unk2, &Global_2635516.f_369[num /*12*/], 1036831949, true, bParam2);
			}
		
			*uParam0 = { unk2 };
		}
	
		return true;
	}

	return false;
}

void func_523(var uParam0, var uParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x19A64 (105060)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_517(*uParam0, *uParam1, 0f, 0f, 0f, uParam1->f_6 + ((float)Global_2635516.f_3036 * uParam1->f_8), 0, iParam2, bParam3) };
				break;
		
			case 1:
				*uParam0 = { func_517(*uParam0, *uParam1, uParam1->f_3, 0f, 1, iParam2, bParam3) };
				break;
		
			case 2:
				*uParam0 = { func_517(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, iParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_514(uParam0, *uParam1, uParam1->f_6 + ((float)Global_2635516.f_3036 * uParam1->f_8), iParam2, bParam3, 0);
				break;
		
			case 1:
				func_520(uParam0, *uParam1, uParam1->f_3, iParam2, bParam3);
				break;
		
			case 2:
				func_518(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, iParam2, bParam3);
				break;
		}
	}

	return;
}

BOOL func_524(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x19B6E (105326)
{
	int i;
	var unk;

	for (i = 0; i < 14; i = i + 1)
	{
		if (Global_2640782[i /*17*/].f_9 == 1)
		{
			if (!bParam2 || bParam2 && Global_2640782[i /*17*/].f_16)
			{
				if (func_511(*uParam0, &Global_2640782[i /*17*/], 1008981770, bParam4, false))
				{
					if (bParam1)
					{
						if (Global_2640782[i /*17*/].f_12)
						{
							*uParam0 = { Global_2640782[i /*17*/].f_13 };
						}
						else
						{
							unk = { *uParam0 };
							func_523(&unk, &Global_2640782[i /*17*/], 1036831949, false, bParam3);
						
							if (func_524(&unk, false, false, false, true))
							{
								unk = { *uParam0 };
								func_523(&unk, &Global_2640782[i /*17*/], 1036831949, true, false);
							}
						
							*uParam0 = { unk };
						}
					}
				
					return true;
				}
			}
		}
	}

	return false;
}

int func_525(var uParam0, int iParam1, var uParam2) // Position - 0x19C49 (105545)
{
	int randomIntInRange;
	int i;
	int num;
	float x1;
	float num2;
	int j;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	float num3;
	BOOL flag4;
	int num4;
	float num5;
	var unk3;
	float num6;

	if (Global_2635516.f_2055 > 0)
	{
		i = 0;
		num = 0;
	
		if (!(SYSTEM::VMAG(uParam2->f_35) > 0f))
			uParam2->f_35 = { *uParam0 };
	
		if (uParam2->f_15)
		{
			if (func_521(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), true, true))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
	
		if (uParam2->f_48)
		{
			if (func_516(uParam0, true))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
	
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	
		Global_2643433.f_162 = 0;
		Global_2643433.f_163 = 0;
	
		for (j = 0; j < 40; j = j + 1)
		{
			Global_2643433[j /*3*/] = { 0f, 0f, 0f };
			Global_2643433.f_121[j] = 0f;
		}
	
		if (uParam2->f_30)
			func_528(*uParam0);
		else if (uParam2->f_29)
			func_527();
		else
			func_526();
	
		for (i = 0; i < Global_2635516.f_2055; i = i + 1)
		{
			num = Global_2635516.f_2461[i];
		
			if (num > -1 && num < 101)
			{
				x1 = { Global_2635516.f_2056[num /*4*/] };
				num2 = Global_2635516.f_2056[num /*4*/].f_3;
			
				if (SYSTEM::VMAG(x1) > 0f)
				{
					if (uParam2->f_57 && SYSTEM::VDIST(x1, uParam2->f_35) > uParam2->f_4 || uParam2->f_57 == 0)
					{
						if (uParam2->f_5 > 0f && SYSTEM::VDIST(x1, x1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5 || uParam2->f_5 <= 0f)
						{
							if (uParam2->f_12 && !func_496(x1, num2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_521(uParam2->f_35, &x1, &(uParam2->f_38), &(uParam2->f_45), false, true))
								{
									if (uParam2->f_8)
									{
										flag = uParam2->f_31;
										flag2 = true;
										flag3 = true;
										num3 = uParam2->f_49;
									
										if (!uParam2->f_55)
										{
											flag = false;
											flag2 = false;
											flag3 = false;
											num3 = 1f;
										}
										else if (uParam2->f_17)
										{
											flag = false;
											flag2 = false;
											flag3 = false;
										
											if (uParam2->f_33 == 1)
												num3 = num3 * 0.375f;
										}
										else
										{
											flag2 = true;
											flag3 = true;
										
											if (uParam2->f_28)
												if (uParam2->f_33 == 1)
													num3 = num3 * 0.375f;
										}
									
										flag4 = false;
									
										if (!func_495(x1, num2, uParam2->f_34))
											if (uParam2->f_3 > 7f)
												if (func_370(x1, 6f, 1f, 1f, 5f, flag, flag2, flag3, num3, uParam2->f_58, -1, true, uParam2->f_3, false, 0, false, false))
													flag4 = true;
											else if (func_370(x1, 6f, 1f, 1f, 5f, flag, flag2, flag3, num3, uParam2->f_58, -1, true, 0f, false, 0, false, false) && !func_461(x1, num2, uParam2->f_34, true, true, false, false, uParam2->f_58, false))
												flag4 = true;
									
										if (flag4)
										{
											if (uParam2->f_29 || uParam2->f_30 || uParam2->f_52)
											{
												num5 = 0f;
											
												if (uParam2->f_52)
													num4 = func_490(x1, uParam2->f_54, &num5);
											
												if (!uParam2->f_52 || uParam2->f_52 && num4 <= uParam2->f_53)
												{
													if (uParam2->f_52)
													{
														if (num4 < uParam2->f_53)
														{
															for (j = 0; j < Global_2643433.f_162; j = j + 1)
															{
																Global_2643433[j /*3*/] = { 0f, 0f, 0f };
																Global_2643433.f_121[j] = 0f;
															}
														
															Global_2643433.f_162 = 0;
															uParam2->f_53 = num4;
														}
													}
												
													if (uParam2->f_30)
													{
														if (Global_2643433.f_162 == 0)
														{
															Global_2643433[0 /*3*/] = { x1 };
															Global_2643433.f_121[0] = num2;
														}
														else
														{
															for (j = 0; j < Global_2643433.f_162 + 1; j = j + 1)
															{
																if (j < 40)
																{
																	if (SYSTEM::VDIST2(x1, uParam2->f_35) < SYSTEM::VDIST2(Global_2643433[j /*3*/], uParam2->f_35))
																	{
																		func_489(x1, num2, j);
																		j = Global_2643433.f_162 + 1;
																	}
																}
															}
														}
													
														Global_2643433.f_162 = Global_2643433.f_162 + 1;
													
														if (Global_2643433.f_162 >= 5)
															if (uParam2->f_52 && uParam2->f_53 == 0 || uParam2->f_52 == 0)
																i = Global_2635516.f_2055;
															else if (Global_2643433.f_162 == 40)
																i = Global_2635516.f_2055;
													}
													else
													{
														Global_2643433[Global_2643433.f_162 /*3*/] = { x1 };
														Global_2643433.f_121[Global_2643433.f_162] = num2;
														Global_2643433.f_162 = Global_2643433.f_162 + 1;
													
														if (Global_2643433.f_162 >= 10)
															if (uParam2->f_52 && uParam2->f_53 == 0 || uParam2->f_52 == 0)
																i = Global_2635516.f_2055;
															else if (Global_2643433.f_162 == 40)
																i = Global_2635516.f_2055;
													}
												}
											}
											else
											{
												*uParam0 = { x1 };
												*iParam1 = num2;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { x1 };
										*iParam1 = num2;
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	
		if (Global_2643433.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2643433[0 /*3*/] };
				*iParam1 = Global_2643433.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2643433.f_163 > 0 && !(Global_2643433.f_163 == Global_2643433.f_162))
					func_487(0, uParam2);
			
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643433.f_162);
				unk3 = { Global_2643433[0 /*3*/] };
				num6 = Global_2643433.f_121[0];
				Global_2643433[0 /*3*/] = { Global_2643433[randomIntInRange /*3*/] };
				Global_2643433.f_121[0] = Global_2643433.f_121[randomIntInRange];
				Global_2643433[randomIntInRange /*3*/] = { unk3 };
				Global_2643433.f_121[randomIntInRange] = num6;
				*uParam0 = { Global_2643433[0 /*3*/] };
				*iParam1 = Global_2643433.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33 = uParam2->f_33 + 1;
		
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2635516.f_2055 > 0)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635516.f_2055);
				*uParam0 = { Global_2635516.f_2056[randomIntInRange /*4*/] };
				*iParam1 = Global_2635516.f_2056[randomIntInRange /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}

	return 0;
}

void func_526() // Position - 0x1A2E8 (107240)
{
	int i;

	for (i = 0; i < Global_2635516.f_2055; i = i + 1)
	{
		Global_2635516.f_2461[i] = i;
	}

	return;
}

void func_527() // Position - 0x1A315 (107285)
{
	int i;
	int randomIntInRange;
	int randomIntInRange2;
	int num;

	for (i = 0; i < Global_2635516.f_2055; i = i + 1)
	{
		Global_2635516.f_2461[i] = i;
	}

	for (i = 0; i < Global_2635516.f_2055; i = i + 1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635516.f_2055);
		randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635516.f_2055);
		num = Global_2635516.f_2461[randomIntInRange];
		Global_2635516.f_2461[randomIntInRange] = Global_2635516.f_2461[randomIntInRange2];
		Global_2635516.f_2461[randomIntInRange2] = num;
	}

	return;
}

void func_528(var uParam0, var uParam1, var uParam2) // Position - 0x1A3A6 (107430)
{
	float num;
	int num2;
	int num3;

	num = -1f;

	while (num3 < Global_2635516.f_2055)
	{
		num2 = func_529(uParam0, num, &num);
		Global_2635516.f_2461[num3] = num2;
		num3 = num3 + 1;
	}

	return;
}

int func_529(Vector3 vParam0, var uParam1, var uParam2, float fParam3, var uParam4) // Position - 0x1A3E1 (107489)
{
	int num;
	float num2;
	float num3;
	int i;

	num = -1;
	num2 = 100000000f;

	for (i = 0; i < Global_2635516.f_2055; i = i + 1)
	{
		num3 = SYSTEM::VDIST2(vParam0, Global_2635516.f_2056[i /*4*/]);
	
		if (num3 < num2 && num3 > fParam3)
		{
			num = i;
			num2 = num3;
		}
	}

	*uParam4 = num2;
	return num;
}

BOOL func_530(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1A443 (107587)
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 220.68407f, -3344.314f, -17.856186f, 213.95924f, -2802.1062f, 25.025482f, 240f, false, true))
		return true;

	return false;
}

BOOL func_531(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, Player plParam5, int iParam6) // Position - 0x1A480 (107648)
{
	Player i;
	int j;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!(plParam5 == i) || iParam6 == 1)
		{
			player = i;
		
			for (j = 0; j < 2; j = j + 1)
			{
				if (func_532(uParam0, hParam4, Global_2648917.f_461[i /*11*/][j /*5*/], Global_2648917.f_461[i /*11*/][j /*5*/].f_4))
					if (func_471(uParam0, iParam3, hParam4, Global_2648917.f_461[i /*11*/][j /*5*/], Global_2648917.f_461[i /*11*/][j /*5*/].f_3, Global_2648917.f_461[i /*11*/][j /*5*/].f_4, 0))
						if (_NETWORK_IS_PLAYER_VALID(player, false, true) && _NETWORK_IS_PLAYER_VALID(plParam5, false, true))
							return true;
						else
							return true;
			}
		}
	}

	return false;
}

BOOL func_532(Vector3 vParam0, var uParam1, var uParam2, Hash hParam3, Vector3 vParam4, var uParam5, var uParam6, Hash hParam7) // Position - 0x1A55A (107866)
{
	float num;
	float num2;
	float num3;

	num = func_470(hParam3, 1008981770);
	num2 = func_470(hParam7, 1008981770);
	num3 = SYSTEM::VDIST(vParam0, vParam4);

	if (num3 < num + num2)
		return true;

	return false;
}

void func_533(Hash hParam0) // Position - 0x1A59A (107930)
{
	int randomIntInRange;

	if (VEHICLE::IS_THIS_MODEL_A_HELI(hParam0))
	{
		func_537(2144.469f, 4819.2407f, 60f, 360f);
		func_537(2170.9194f, 4810.6465f, 80f, 324f);
		func_537(2187.2666f, 4788.1465f, 60f, 288f);
		func_537(2187.2666f, 4760.335f, 80f, 252f);
		func_537(2170.9194f, 4737.835f, 60f, 216f);
		func_537(2144.469f, 4729.2407f, 80f, 180f);
		func_537(2118.0186f, 4737.835f, 60f, 144f);
		func_537(2101.6714f, 4760.335f, 80f, 108f);
		func_537(2101.6714f, 4788.1465f, 60f, 72f);
		func_537(2118.0186f, 4810.6465f, 80f, 36f);
		func_537(2144.469f, 4844.2407f, 90f, 360f);
		func_537(2185.614f, 4830.872f, 70f, 324f);
		func_537(2211.043f, 4795.872f, 90f, 288f);
		func_537(2211.043f, 4752.6094f, 70f, 252f);
		func_537(2185.614f, 4717.6094f, 90f, 216f);
		func_537(2144.469f, 4704.2407f, 70f, 180f);
		func_537(2103.324f, 4717.6094f, 90f, 144f);
		func_537(2077.895f, 4752.6094f, 70f, 108f);
		func_537(2077.895f, 4795.872f, 90f, 72f);
		func_537(2103.324f, 4830.872f, 70f, 36f);
		func_537(2144.469f, 4799.2407f, 105f, 360f);
		func_537(2168.2454f, 4781.9663f, 105f, 288f);
		func_537(2159.1636f, 4754.015f, 105f, 216f);
		func_537(2129.7744f, 4754.015f, 105f, 144f);
		func_537(2120.6926f, 4781.9663f, 45.6935f, 72f);
		func_537(2183.109f, 4861.0273f, 85f, 336f);
		func_537(2238.9485f, 4764.3105f, 85f, 264f);
		func_537(2164.2207f, 4681.317f, 85f, 195.48f);
		func_537(2062.1965f, 4726.7407f, 85f, 120f);
		func_537(2073.87f, 4837.808f, 85f, 48f);
		func_537(2144.544f, 4884.1523f, 100f, 360f);
		func_537(2249.1602f, 4808.144f, 100f, 288f);
		func_537(2209.2002f, 4685.1606f, 100f, 216f);
		func_537(2079.8877f, 4685.1606f, 100f, 144f);
		func_537(2039.9277f, 4808.144f, 100f, 72f);
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
	
		if (randomIntInRange & 1 == 1)
		{
			func_536();
			func_535();
			func_534();
		}
		else
		{
			func_535();
			func_536();
			func_534();
		}
	}

	return;
}

void func_534() // Position - 0x1A924 (108836)
{
	func_537(1814.0328f, 4361.09f, 67.535f, 172.2609f);
	func_537(1814.0328f, 4361.09f, 108.5939f, 172.2609f);
	func_537(2185.803f, 4488.2993f, 67.535f, -149.5774f);
	func_537(2185.803f, 4488.2993f, 108.5939f, -149.5774f);
	func_537(2061.437f, 4270.964f, 77.535f, -179.8978f);
	func_537(2061.437f, 4270.964f, 113.1827f, -179.8978f);
	func_537(2309.389f, 4630.398f, 77.535f, -149.001f);
	func_537(2309.389f, 4630.398f, 113.1827f, -149.001f);
	return;
}

void func_535() // Position - 0x1A9EC (109036)
{
	func_537(1836.7782f, 4668.552f, 67.535f, 115.58f);
	func_537(1810.872f, 4722.671f, 67.535f, 102.24f);
	func_537(1856.2079f, 4627.9624f, 67.535f, 126f);
	func_537(1875.6376f, 4587.373f, 67.535f, 136.08f);
	func_537(1784.9657f, 4776.79f, 67.535f, 90.32f);
	func_537(1836.7782f, 4668.552f, 100.54f, 115.58f);
	func_537(1810.872f, 4722.671f, 100.54f, 102.24f);
	func_537(1856.2079f, 4627.9624f, 100.54f, 126f);
	func_537(1875.6376f, 4587.373f, 100.54f, 136.08f);
	func_537(1784.9657f, 4776.79f, 100.54f, 90.32f);
	return;
}

void func_536() // Position - 0x1AAE4 (109284)
{
	func_537(2250.4216f, 4865.2295f, 72.8377f, -64.42f);
	func_537(2230.992f, 4905.819f, 73.6707f, -77.4f);
	func_537(2269.8513f, 4824.64f, 73.6577f, -51.48f);
	func_537(2211.5623f, 4946.408f, 72.2069f, -90.72f);
	func_537(2289.281f, 4784.051f, 73.0896f, -39.96f);
	func_537(2250.4216f, 4865.2295f, 107.8377f, -64.42f);
	func_537(2230.992f, 4905.819f, 108.6707f, -77.4f);
	func_537(2269.8513f, 4824.64f, 107.6577f, -51.48f);
	func_537(2211.5623f, 4946.408f, 108.2069f, -90.72f);
	func_537(2289.281f, 4784.051f, 107.0896f, -39.96f);
	return;
}

void func_537(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x1ABDC (109532)
{
	if (Global_2635516.f_2055 < 101)
	{
		if (SYSTEM::VMAG(fParam0) <= 0.01f)
			return;
	
		Global_2635516.f_2056[Global_2635516.f_2055 /*4*/] = { fParam0 };
		Global_2635516.f_2056[Global_2635516.f_2055 /*4*/].f_3 = fParam3;
		Global_2635516.f_2055 = Global_2635516.f_2055 + 1;
	}

	return;
}

int func_538(Hash hParam0) // Position - 0x1AC41 (109633)
{
	switch (hParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
		case joaat("seasparrow"):
		case joaat("conada"):
		case -1659004814:
			return 0;
	
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("akula"):
		case joaat("streamer216"):
		case 239897677:
		case 84351789:
			return 1;
	
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("cargobob5"):
		case 858355070:
			return 2;
	
		case joaat("alkonost"):
			return 3;
	
		default:
		
	}

	if (hParam0 == joaat("strikeforce"))
		return 1;

	return 0;
}

BOOL func_539(var uParam0, var uParam1, var uParam2) // Position - 0x1ADCB (110027)
{
	var unk;

	if (Global_2739945.f_968 || IS_BIT_SET(Global_2739945.f_972, 0) || IS_BIT_SET(Global_2739945.f_972, 1) && func_540(uParam0, &unk))
		return true;

	return false;
}

BOOL func_540(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1AE0F (110095)
{
	int i;
	int num;
	int num2;

	*uParam3 = -1;
	num2 = func_554(uParam0, 0);

	if (!(num2 == -1))
	{
		for (i = 83; i <= 87; i = i + 1)
		{
			num = i;
		
			if (func_541(num))
			{
				if (func_554(Global_1944438.f_762[i /*3*/], 0) == num2)
				{
					*uParam3 = i + 1000;
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_541(int iParam0) // Position - 0x1AE73 (110195)
{
	int num;
	Player player;

	num = func_553(iParam0);

	if (Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_268.f_299 == num)
		return true;

	player = Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_10;

	if (player != _INVALID_PLAYER_INDEX())
		if (Global_1845270[player /*892*/].f_268.f_299 == num)
			return true;

	if (func_552() == iParam0)
		return true;

	if (func_551(PLAYER::PLAYER_ID(), false) || func_548(PLAYER::PLAYER_ID()) && func_546(func_547(PLAYER::PLAYER_ID())) == 12)
		return true;

	if (func_545(PLAYER::PLAYER_ID()) || func_548(PLAYER::PLAYER_ID()) && func_546(func_547(PLAYER::PLAYER_ID())) == 8)
		return true;

	if (func_544(PLAYER::PLAYER_ID()) || func_548(PLAYER::PLAYER_ID()) && func_546(func_547(PLAYER::PLAYER_ID())) == 5)
		return true;

	if (func_543(PLAYER::PLAYER_ID()) || func_548(PLAYER::PLAYER_ID()) && func_546(func_547(PLAYER::PLAYER_ID())) == 10)
		return true;

	if (func_542(PLAYER::PLAYER_ID()) || func_548(PLAYER::PLAYER_ID()) && func_546(func_547(PLAYER::PLAYER_ID())) == 6)
		return true;

	return false;
}

BOOL func_542(Player plParam0) // Position - 0x1AFCF (110543)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657994[plParam0 /*467*/].f_324.f_8 != -1)
				return func_546(Global_2657994[plParam0 /*467*/].f_324.f_8) == 6;

	return false;
}

BOOL func_543(Player plParam0) // Position - 0x1B015 (110613)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657994[plParam0 /*467*/].f_324.f_8 != -1)
				return func_546(Global_2657994[plParam0 /*467*/].f_324.f_8) == 10;

	return false;
}

BOOL func_544(Player plParam0) // Position - 0x1B05C (110684)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657994[plParam0 /*467*/].f_324.f_8 != -1 && Global_2657994[plParam0 /*467*/].f_324.f_11 != _INVALID_PLAYER_INDEX())
				return func_546(Global_2657994[plParam0 /*467*/].f_324.f_8) == 5;

	return false;
}

BOOL func_545(Player plParam0) // Position - 0x1B0BB (110779)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657994[plParam0 /*467*/].f_324.f_8 != -1 && Global_2657994[plParam0 /*467*/].f_324.f_11 != _INVALID_PLAYER_INDEX())
				return func_546(Global_2657994[plParam0 /*467*/].f_324.f_8) == 8;

	return false;
}

int func_546(int iParam0) // Position - 0x1B11B (110875)
{
	switch (iParam0)
	{
		case 0:
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
			return 0;
	
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
			return 1;
	
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
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 174:
			return 28;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 29;
	
		case 175:
			return 30;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 31;
	
		case 172:
			return 32;
	
		case 173:
			return 33;
	}

	return -1;
}

int func_547(Player plParam0) // Position - 0x1B650 (112208)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return Global_2657994[plParam0 /*467*/].f_324.f_18;

	return -1;
}

BOOL func_548(Player plParam0) // Position - 0x1B681 (112257)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		if (func_550(plParam0) && !func_549(plParam0))
			return true;

	return false;
}

BOOL func_549(Player plParam0) // Position - 0x1B6BA (112314)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_324, 4);

	return false;
}

BOOL func_550(Player plParam0) // Position - 0x1B6EB (112363)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2657994[plParam0 /*467*/].f_324, 3);

	return false;
}

BOOL func_551(Player plParam0, BOOL bParam1) // Position - 0x1B71C (112412)
{
	Vehicle vehiclePedIsIn;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("terbyte"))
				return true;
		}
	}

	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657994[plParam0 /*467*/].f_324.f_8 != -1 && Global_2657994[plParam0 /*467*/].f_324.f_11 != _INVALID_PLAYER_INDEX())
				return func_546(Global_2657994[plParam0 /*467*/].f_324.f_8) == 12;

	return false;
}

int func_552() // Position - 0x1B7AA (112554)
{
	return Global_2657994[PLAYER::PLAYER_ID() /*467*/].f_324.f_8;
}

int func_553(int iParam0) // Position - 0x1B7C2 (112578)
{
	switch (iParam0)
	{
		case 83:
			return 1;
	
		case 84:
			return 2;
	
		case 85:
			return 3;
	
		case 86:
			return 4;
	
		case 87:
			return 5;
	}

	return 0;
}

int func_554(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1B813 (112659)
{
	int i;

	for (i = 0; i < 14; i = i + 1)
	{
		if (Global_2640782[i /*17*/].f_9 == 1 || iParam3 == 0)
			if (func_511(uParam0, &Global_2640782[i /*17*/], 0.1f, false, false))
				return i;
	}

	return -1;
}

void func_555(var uParam0, var uParam1, var uParam2, Hash hParam3) // Position - 0x1B867 (112743)
{
	int i;
	int num;
	int num2;
	var unk4;

	if (Global_2635516.f_45.f_320)
		return;

	if (!func_574())
	{
		hParam3 == 0;
		num = func_573(uParam0);
	
		if (num > -1)
		{
			func_586();
		
			switch (num)
			{
				case 0:
					func_537(-1139.6785f, -2694.1648f, 12.949f, 283.4298f);
					func_537(-1137.4546f, -2690.167f, 12.9448f, 283.0835f);
					func_537(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_537(-1099.8976f, -2688.6108f, 12.9473f, 295.3925f);
					func_537(-1110.5096f, -2693.2358f, 12.9595f, 298.84f);
					func_537(-1081.8075f, -2690.0146f, 12.7567f, 219.1729f);
					func_537(-1075.5862f, -2697.0898f, 12.7567f, 224.8977f);
					func_537(-1095.1333f, -2659.9954f, 12.7567f, 190.9326f);
					func_537(-1096.5112f, -2649.4827f, 12.6066f, 182.7913f);
					break;
			
				case 1:
					func_537(-1411.7308f, -533.6462f, 30.2703f, 215.116f);
					func_537(-1416.4075f, -527.0309f, 30.6453f, 215.2683f);
					func_537(-1432.1458f, -580.9922f, 29.5263f, 118.3858f);
					func_537(-1438.8004f, -584.4678f, 29.595f, 118.1207f);
					break;
			
				case 2:
					func_537(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_537(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_537(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_537(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
			
				case 3:
					func_537(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_537(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_537(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_537(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
			
				case 4:
					func_537(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_537(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_537(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_537(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
			
				case 5:
					func_537(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_537(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_537(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_537(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
			
				case 6:
					func_537(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_537(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_537(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_537(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
			
				case 7:
					func_537(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_537(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_537(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_537(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
			
				case 8:
					func_537(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_537(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_537(145.8017f, -1287.1896f, 28.312f, 120.6275f);
					func_537(142.8935f, -1282.2864f, 28.3156f, 120.3024f);
					break;
			
				case 9:
					func_537(-2333.5747f, 272.6518f, 168.4671f, 23.0287f);
					func_537(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_537(-2316.2224f, 279.9105f, 168.4671f, 23.0175f);
					func_537(-2314.3955f, 290.9f, 168.4671f, 114.3983f);
					func_537(-2316.8096f, 296.424f, 168.4671f, 113.6228f);
					func_537(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_537(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_537(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_537(-2345.0815f, 277.3852f, 168.4671f, 113.4219f);
					func_537(-2347.7766f, 282.6038f, 168.4671f, 292.7772f);
					func_537(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_537(-2352.6807f, 294.4205f, 168.4671f, 115.5597f);
					break;
			
				case 10:
					func_571(78);
					break;
			
				case 11:
					func_571(79);
					break;
			
				case 12:
					func_571(82);
					break;
			
				case 13:
					func_571(81);
					break;
			
				case 14:
					func_571(73);
					break;
			
				case 15:
					func_537(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_537(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_537(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_537(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
			
				case 16:
					func_571(75);
					break;
			
				case 17:
					func_571(76);
					break;
			
				case 18:
					func_571(77);
					break;
			
				case 19:
					func_537(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_537(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_537(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_537(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
			
				case 20:
					func_571(80);
					break;
			
				case 21:
				case 25:
					func_571(87);
					break;
			
				case 22:
				case 26:
					func_571(88);
					break;
			
				case 23:
				case 27:
					func_571(89);
					break;
			
				case 24:
				case 28:
					func_571(90);
					break;
			
				case 29:
				case 30:
					if (func_570(hParam3))
						func_571(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_268.f_36);
					break;
			
				case 31:
					func_537(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_537(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_537(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_537(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_537(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_537(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_537(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_537(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_537(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_537(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_537(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_537(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_537(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_537(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_537(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_537(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_537(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_537(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_537(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_537(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_537(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_537(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_537(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_537(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_537(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_537(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_537(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_537(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_537(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_537(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_537(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_537(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_537(-194.254f, -2018.756f, 26.62f, 75f);
					func_537(-186.956f, -2031.369f, 26.62f, 338f);
					func_537(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_537(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_537(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_537(-233.372f, -2089.601f, 26.62f, 304f);
					func_537(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_537(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_537(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_537(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_537(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_537(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_537(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_537(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_537(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_537(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_537(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_537(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_537(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_537(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_537(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_537(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else
		{
			num2 = 3;
			unk4 = 3;
		
			if (func_566(uParam0, &num2, &unk4) || func_540(uParam0, &num2[0]) && VEHICLE::IS_THIS_MODEL_A_PLANE(hParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam3))
			{
				func_586();
			
				for (i = 0; i < num2; i = i + 1)
				{
					if (num2[i] > 1000)
					{
						num2[i] = num2[i] - 1000;
						unk4[i] = 1;
					}
				
					if (num2[i] >= 83 && num2[i] <= 87)
						Global_2635516.f_517 = 1;
				
					if (!unk4[i] && func_565(num2[i], -1))
					{
						if (func_570(hParam3))
							func_571(num2[i]);
					}
					else if (unk4[i])
					{
						if (func_564(PLAYER::PLAYER_PED_ID()) || func_562(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_THIS_MODEL_A_PLANE(hParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam3))
						{
							if (func_561(hParam3))
							{
								func_560(num2[i]);
							}
							else if (func_559(hParam3))
							{
								func_558(num2[i]);
								func_560(num2[i]);
							}
							else
							{
								func_558(num2[i]);
								func_560(num2[i]);
							}
						}
						else
						{
							func_556(num2[i], hParam3);
						}
					}
					else
					{
						func_571(num2[i]);
					}
				}
			}
		}
	}

	return;
}

void func_556(int iParam0, Hash hParam1) // Position - 0x1C663 (116323)
{
	switch (iParam0)
	{
		case 23:
			func_537(434.1898f, 6535.8237f, 27.0084f, 66.9998f);
			func_537(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_537(435.1928f, 6543.2983f, 26.889f, 66.9998f);
			func_537(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_537(429.8463f, 6511.1104f, 27.0717f, 60.9997f);
			func_537(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_537(443.1016f, 6580.7173f, 26.0739f, 85.1993f);
			func_537(451.9748f, 6579.9365f, 26.0319f, 85.1993f);
			break;
	
		case 26:
			func_537(-148.9694f, 6325.5522f, 30.4564f, 224.1983f);
			func_537(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_537(-136.8806f, 6347.6216f, 30.4906f, 43.9982f);
			func_537(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_537(-136.6504f, 6357.0615f, 30.4907f, 43.9982f);
			func_537(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_537(-141.4154f, 6365.8306f, 30.4907f, 43.3979f);
			func_537(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
	
		case 24:
			func_537(60.7522f, 6465.8066f, 30.3941f, 213.3973f);
			func_537(57.4131f, 6462.5503f, 30.3663f, 213.3973f);
			func_537(48.0438f, 6452.6685f, 30.3245f, 213.3973f);
			func_537(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_537(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_537(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_537(32.1837f, 6437.2104f, 30.2991f, 213.3973f);
			func_537(29.4732f, 6434.5264f, 30.3702f, 213.3973f);
			break;
	
		case 25:
			func_537(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_537(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_537(-395.8286f, 6123.6353f, 30.2987f, 46.3965f);
			func_537(-389.1636f, 6117.2407f, 30.3641f, 46.3965f);
			func_537(-370.6174f, 6129.7793f, 30.4414f, 45.7965f);
			func_537(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_537(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_537(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
	
		case 22:
			func_537(45.2181f, 6341.1074f, 30.2296f, 14.3964f);
			func_537(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_537(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_537(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_537(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_537(65.6465f, 6380.6265f, 30.2398f, 212.9964f);
			func_537(24.8587f, 6366.3604f, 30.2286f, 32.7965f);
			func_537(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
	
		case 28:
			func_537(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_537(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_537(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_537(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_537(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_537(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_537(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_537(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
	
		case 31:
			func_537(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_537(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_537(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_537(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_537(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_537(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_537(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_537(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
	
		case 29:
			func_537(-1448.5511f, -355.0512f, 43.3715f, 313.3925f);
			func_537(-1454.8193f, -359.998f, 42.7885f, 311.3925f);
			func_537(-1462.6747f, -360.1352f, 42.9255f, 223.392f);
			func_537(-1447.9648f, -368.3028f, 42.5412f, 5.9918f);
			func_537(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_537(-1473.2195f, -346.7773f, 43.5318f, 213.9913f);
			func_537(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_537(-1496.0033f, -395.7657f, 38.1394f, 45.7909f);
			break;
	
		case 30:
			func_537(-1174.4911f, -1381.0103f, 3.9253f, 116.5903f);
			func_537(-1183.1477f, -1392.5593f, 3.6319f, 304.9901f);
			func_537(-1160.9639f, -1417.7592f, 3.7043f, 65.7899f);
			func_537(-1151.6115f, -1411.3774f, 3.9411f, 63.5895f);
			func_537(-1167.1865f, -1424.0696f, 3.4884f, 123.5897f);
			func_537(-1148.2198f, -1409.1637f, 4.0217f, 63.5895f);
			func_537(-1137.1096f, -1372.8176f, 3.8993f, 27.5895f);
			func_537(-1140.6079f, -1365.7474f, 4.0573f, 27.5895f);
			break;
	
		case 27:
			func_537(1414.237f, -1656.3444f, 60.2449f, 332.7893f);
			func_537(1416.6677f, -1659.9332f, 60.6982f, 332.7893f);
			func_537(1419.3271f, -1663.9718f, 61.2382f, 332.7893f);
			func_537(1421.5574f, -1667.3671f, 61.7479f, 332.7893f);
			func_537(1423.7439f, -1670.8531f, 62.3125f, 332.7893f);
			func_537(1412.1573f, -1652.7456f, 59.9105f, 332.7893f);
			func_537(1426.2009f, -1673.5977f, 62.7133f, 330.1893f);
			func_537(1435.8038f, -1694.7296f, 65.0743f, 352.5892f);
			break;
	
		case 33:
			func_537(2810.7869f, 4435.9204f, 47.5295f, 20.7996f);
			func_537(2808.4128f, 4443.922f, 47.3732f, 14.7995f);
			func_537(2806.298f, 4451.7856f, 47.1865f, 15.3995f);
			func_537(2803.9253f, 4459.858f, 46.9823f, 15.3995f);
			func_537(2801.7563f, 4467.7554f, 46.8147f, 15.3995f);
			func_537(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_537(2903.7246f, 4425.8535f, 47.3523f, 23.1992f);
			func_537(2907.0764f, 4418.0586f, 47.6301f, 23.1992f);
			break;
	
		case 36:
			func_537(1680.4476f, 4821.131f, 41.0599f, 186.399f);
			func_537(1679.7604f, 4829.447f, 40.9167f, 186.399f);
			func_537(1678.6683f, 4838.03f, 41.0221f, 187.7989f);
			func_537(1677.6119f, 4846.028f, 41.0452f, 187.7989f);
			func_537(1675.8512f, 4860.4336f, 41.0901f, 187.7989f);
			func_537(1674.8434f, 4868.3433f, 41.0684f, 187.7989f);
			func_537(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_537(1672.5254f, 4884.972f, 41.0478f, 186.7986f);
			break;
	
		case 34:
			func_537(422.863f, 3583.9014f, 32.2386f, 313.5986f);
			func_537(426.6211f, 3583.2083f, 32.2386f, 313.5986f);
			func_537(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_537(434.2751f, 3580.8806f, 32.2386f, 313.5986f);
			func_537(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_537(442.0173f, 3578.9482f, 32.2386f, 313.5986f);
			func_537(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_537(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
	
		case 35:
			func_537(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_537(620.9771f, 2725.7585f, 40.7897f, 4.3984f);
			func_537(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_537(611.1158f, 2737.3875f, 40.9734f, 185.3984f);
			func_537(598.9713f, 2736.2607f, 41.0602f, 186.5986f);
			func_537(592.6151f, 2735.8865f, 41.0602f, 186.5986f);
			func_537(586.0421f, 2735.9004f, 41.0535f, 186.5986f);
			func_537(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
	
		case 32:
			func_537(214.3318f, 2492.2598f, 53.9736f, 312.7978f);
			func_537(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_537(213.7524f, 2501.2512f, 53.5958f, 312.7978f);
			func_537(213.6645f, 2505.9084f, 53.3477f, 312.7978f);
			func_537(213.4478f, 2510.7341f, 53.1055f, 312.7978f);
			func_537(212.9148f, 2515.2676f, 52.9376f, 312.7978f);
			func_537(211.5983f, 2519.2163f, 52.6753f, 312.7978f);
			func_537(210.1288f, 2523.1873f, 52.3493f, 312.7978f);
			break;
	
		case 38:
			func_537(153.6785f, -2476.1921f, 4.9877f, 178.4004f);
			func_537(150.9209f, -2516.9785f, 4.9909f, 179.9999f);
			func_537(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_537(153.866f, -2467.2422f, 4.9877f, 178.4004f);
			func_537(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_537(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_537(142.7427f, -2536.147f, 5f, 205.0002f);
			func_537(138.8267f, -2535.8647f, 5f, 205.0002f);
			break;
	
		case 41:
			func_537(-341.4255f, -2734.4514f, 5.0413f, 314.8f);
			func_537(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_537(-329.7832f, -2745.6042f, 5.0196f, 314.8f);
			func_537(-336.4781f, -2716.1392f, 5.0028f, 134.1994f);
			func_537(-334.2752f, -2718.8884f, 5.0048f, 135.1992f);
			func_537(-327.6603f, -2725.6445f, 5.0103f, 135.1992f);
			func_537(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_537(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
	
		case 39:
			func_537(-260.5913f, -2615.2546f, 5.0502f, 274.5953f);
			func_537(-253.2161f, -2614.8955f, 5.0502f, 271.5953f);
			func_537(-245.6569f, -2614.8618f, 5.0502f, 271.5953f);
			func_537(-238.214f, -2614.8472f, 5.0502f, 271.5953f);
			func_537(-238.013f, -2630.9614f, 5.0331f, 271.3949f);
			func_537(-260.9724f, -2631.4185f, 5.0355f, 276.9951f);
			func_537(-253.401f, -2631.1082f, 5.0319f, 272.195f);
			func_537(-245.5563f, -2631.0598f, 5.0323f, 272.195f);
			break;
	
		case 40:
			func_537(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_537(656.1305f, -2707.2454f, 5.214f, 24.7971f);
			func_537(659.3307f, -2714.3784f, 5.2188f, 22.7968f);
			func_537(662.2627f, -2722.2275f, 5.2188f, 19.1968f);
			func_537(649.2115f, -2728.3586f, 5.1124f, 20.5967f);
			func_537(646.2606f, -2720.8333f, 5.1103f, 21.3967f);
			func_537(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_537(640.3513f, -2706.5708f, 5.108f, 21.3967f);
			break;
	
		case 37:
			func_537(1143.7303f, -3105.0913f, 4.8989f, 146.1979f);
			func_537(1140.0088f, -3104.954f, 4.8985f, 146.1979f);
			func_537(1136.2671f, -3104.69f, 4.8969f, 146.1979f);
			func_537(1132.7316f, -3104.2769f, 4.8944f, 146.1979f);
			func_537(1128.7235f, -3104.5398f, 4.896f, 146.1979f);
			func_537(1125.1063f, -3104.0566f, 4.8942f, 146.1979f);
			func_537(1117.7996f, -3103.6743f, 4.8922f, 146.1979f);
			func_537(1114.0154f, -3103.448f, 4.8931f, 146.1979f);
			break;
	
		case 83:
			func_537(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_537(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_537(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_537(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_537(-1098.6207f, -3460.7915f, 12.9453f, 329.799f);
			func_537(-1093.3098f, -3463.4644f, 12.9453f, 329.799f);
			func_537(-1089.4333f, -3443.2336f, 12.945f, 329.799f);
			func_537(-1084.2706f, -3446.3103f, 12.945f, 329.799f);
			func_537(-1093.8082f, -3452.4072f, 12.9451f, 329.799f);
			func_537(-1088.3829f, -3455.466f, 12.9451f, 329.799f);
			func_537(-1118.4736f, -3411.3848f, 12.9451f, 313.199f);
			func_537(-1181.003f, -3375.6584f, 12.945f, 346.799f);
			func_537(-1212.0713f, -3382.2832f, 12.9451f, 328.999f);
			func_537(-1217.7085f, -3378.6228f, 12.9451f, 328.999f);
			func_537(-1216.9865f, -3390.3958f, 12.9452f, 328.999f);
			func_537(-1222.5657f, -3386.7068f, 12.9452f, 328.999f);
			func_537(-1222.06f, -3398.8823f, 12.9452f, 328.999f);
			func_537(-1227.6981f, -3394.9456f, 12.9451f, 328.999f);
			func_537(-1097.5173f, -3472.0862f, 12.9453f, 328.999f);
			func_537(-1102.951f, -3468.6187f, 12.9452f, 328.999f);
			func_537(-1227.2528f, -3407.38f, 12.9452f, 328.999f);
			func_537(-1232.8358f, -3403.5723f, 12.9452f, 328.999f);
			break;
	
		case 84:
			func_537(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_537(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_537(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_537(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_537(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_537(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_537(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_537(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_537(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_537(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_537(-1359.905f, -3276.1177f, 12.9448f, 330.4f);
			func_537(-1354.2279f, -3279.6296f, 12.9448f, 330.4f);
			func_537(-1406.4932f, -3246.2234f, 12.9449f, 344.5997f);
			func_537(-1411.0581f, -3243.6204f, 12.9449f, 344.5997f);
			func_537(-1415.326f, -3241.0137f, 12.9449f, 344.5997f);
			func_537(-1419.899f, -3238.1157f, 12.9449f, 344.5997f);
			func_537(-1370.9857f, -3268.9453f, 12.9449f, 322.3996f);
			func_537(-1365.7346f, -3272.3633f, 12.9449f, 322.3996f);
			func_537(-1373.3412f, -3313.2056f, 12.9448f, 329.5996f);
			func_537(-1379.0914f, -3310.0037f, 12.9448f, 330.7996f);
			func_537(-1436.9889f, -3228.515f, 12.9449f, 343.9996f);
			func_537(-1444.064f, -3273.7512f, 12.945f, 330.7996f);
			break;
	
		case 85:
			func_537(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_537(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_537(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_537(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_537(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_537(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_537(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_537(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_537(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_537(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_537(-2060.4863f, 3165.9277f, 31.8103f, 133.9988f);
			func_537(-2055.7065f, 3163.0535f, 31.8103f, 133.9988f);
			func_537(-2050.911f, 3160.0918f, 31.8103f, 133.9988f);
			func_537(-1974.6353f, 3137.8467f, 31.8103f, 149.5986f);
			func_537(-1970.3544f, 3145.22f, 31.8103f, 149.5986f);
			func_537(-1965.7089f, 3153.2214f, 31.8103f, 149.5986f);
			func_537(-1960.9915f, 3161.346f, 31.8103f, 149.5986f);
			func_537(-1983.1697f, 3131.3298f, 31.8103f, 149.5986f);
			func_537(-1976.614f, 3127.6274f, 31.8103f, 149.5986f);
			func_537(-1991.5824f, 3127.264f, 31.8103f, 167.7985f);
			func_537(-1995.584f, 3129.3687f, 31.8103f, 167.7985f);
			func_537(-1999.335f, 3131.1824f, 31.8103f, 167.7985f);
			break;
	
		case 86:
			func_537(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_537(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_537(-1823.414f, 3092.762f, 31.843f, 330f);
			func_537(-1819.045f, 3100.435f, 31.845f, 330f);
			func_537(-1833.313f, 3075.722f, 31.838f, 330f);
			func_537(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_537(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_537(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_537(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_537(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_537(-1819.2842f, 3110.6704f, 31.8615f, 150.2f);
			func_537(-1814.545f, 3108.2295f, 31.8476f, 330.6f);
			func_537(-1853.9388f, 3076.2705f, 31.8105f, 176.7996f);
			func_537(-1857.7258f, 3078.6685f, 31.8105f, 176.7996f);
			func_537(-1861.6259f, 3080.7766f, 31.8105f, 176.7996f);
			func_537(-1865.5841f, 3083.1365f, 31.8103f, 176.7996f);
			func_537(-1869.2551f, 3085.565f, 31.8103f, 176.7996f);
			func_537(-1913.263f, 3125.3416f, 31.8103f, 150.7988f);
			func_537(-1917.5464f, 3127.6785f, 31.8103f, 150.7988f);
			func_537(-1922.7402f, 3130.5552f, 31.8103f, 150.7988f);
			func_537(-1927.6763f, 3133.413f, 31.8103f, 150.7988f);
			func_537(-1932.4185f, 3136.273f, 31.8103f, 150.7988f);
			break;
	
		case 87:
			func_537(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_537(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_537(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_537(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_537(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_537(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_537(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_537(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_537(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_537(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_537(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_537(-2551.2612f, 3306.3042f, 31.8123f, 296.999f);
			func_537(-2497.446f, 3333.2957f, 31.821f, 296.999f);
			func_537(-2494.089f, 3326.0647f, 31.8218f, 296.999f);
			func_537(-2453.4045f, 3255.3882f, 31.8276f, 167.1986f);
			func_537(-2449.37f, 3253.4165f, 31.8276f, 167.1986f);
			func_537(-2445.4902f, 3251.1384f, 31.8276f, 167.1986f);
			func_537(-2441.5747f, 3248.888f, 31.8276f, 167.1986f);
			func_537(-2437.3193f, 3246.5542f, 31.8277f, 167.1986f);
			func_537(-2432.7227f, 3244.232f, 31.8277f, 167.1986f);
			func_537(-2485.2732f, 3330.8906f, 31.8239f, 298.1979f);
			func_537(-2488.82f, 3338.3647f, 31.8226f, 298.1979f);
			break;
	
		case 89:
			if (Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_537(1284.4156f, 2890.2993f, 45.0276f, 336.3999f);
				func_537(1273.2477f, 2901.4277f, 45.0426f, 338.3999f);
				func_537(1262.9448f, 2911.5352f, 43.2959f, 341.9999f);
				func_537(1272.0938f, 2873.3875f, 45.3443f, 328.5991f);
				func_537(1259.7849f, 2892.2168f, 45.1126f, 339.9999f);
				func_537(1231.2787f, 2910.881f, 43.3085f, 12f);
				func_537(1306.5148f, 2839.4749f, 46.8947f, 132.3996f);
				func_537(1307.4529f, 2825.2756f, 45.1566f, 127.1998f);
				func_537(1257.0292f, 2872.1567f, 45.9766f, 338.5992f);
				func_537(1225.7644f, 2930.0952f, 41.6173f, 14.7999f);
			}
			else
			{
				func_537(1265.1229f, 2836.949f, 47.1021f, 119.9996f);
				func_537(1258.1451f, 2831.6428f, 46.4503f, 135.7993f);
				func_537(1240.8466f, 2828.7207f, 46.4388f, 39.5992f);
				func_537(1236.8774f, 2835.4902f, 46.3491f, 22.9991f);
				func_537(1235.6973f, 2843.4026f, 46.0231f, 2.7991f);
				func_537(1237.6862f, 2850.6072f, 45.5261f, 335.5991f);
				func_537(1241.1256f, 2858.816f, 45.0176f, 339.7991f);
				func_537(1249.7152f, 2810.5876f, 47.2648f, 255.1992f);
				func_537(1257.6963f, 2808.6086f, 47.014f, 266.1992f);
				func_537(1265.5765f, 2808.3528f, 46.7598f, 277.199f);
				func_537(1273.8081f, 2808.484f, 46.3872f, 263.999f);
				func_537(1282.5354f, 2807.1335f, 45.9705f, 250.7989f);
				func_537(1290.1676f, 2803.7449f, 45.8005f, 238.7988f);
				func_537(1296.4451f, 2798.7769f, 46.0903f, 228.9988f);
				func_537(1302.041f, 2792.3296f, 45.957f, 221.7987f);
				func_537(1251.3888f, 2825.818f, 45.9856f, 119.1982f);
				func_537(1285.4801f, 2819.238f, 45.044f, 228.3993f);
				func_537(1293.0233f, 2814.1636f, 44.8859f, 233.399f);
				func_537(1242.1803f, 2814.153f, 47.7108f, 227.3991f);
				func_537(1236.3619f, 2819.6228f, 47.6845f, 224.399f);
				func_537(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_537(1228.1774f, 2833.4233f, 47.3171f, 197.5993f);
				func_537(1243.0946f, 2866.7493f, 44.6219f, 353.7992f);
				func_537(1307.3458f, 2785.7866f, 46.1136f, 219.9997f);
				func_537(1300.7516f, 2808.2244f, 44.5688f, 228.9997f);
				func_537(1306.571f, 2802.4675f, 44.6275f, 224.1992f);
				func_537(1244.4646f, 2875.6968f, 44.5839f, 353.7992f);
				func_537(1312.4409f, 2795.4268f, 45.2701f, 218.5991f);
			}
			break;
	
		case 90:
			if (Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_537(14.4916f, 2660.7263f, 79.0178f, 310.1999f);
				func_537(3.855f, 2672.388f, 78.437f, 319.2f);
				func_537(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_537(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_537(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_537(60.2273f, 2609.7449f, 79.5672f, 305.9998f);
				func_537(34.0188f, 2659.7227f, 78.9894f, 314.2f);
				func_537(29.4879f, 2675.3398f, 76.0202f, 314.2f);
				func_537(19.0088f, 2686.1597f, 75.6897f, 314.2f);
				func_537(7.6101f, 2697.1125f, 76.2923f, 314.2f);
			}
			else
			{
				func_537(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_537(46.2894f, 2639.9512f, 79.9122f, 305.1998f);
				func_537(55.3668f, 2627.7727f, 79.6363f, 305.1998f);
				func_537(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_537(42.1486f, 2646.0728f, 80.108f, 305.1998f);
				func_537(68.1481f, 2630.0696f, 77.0725f, 305.1998f);
				func_537(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_537(57.3543f, 2643.5598f, 75.5301f, 305.1998f);
				func_537(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_537(74.5845f, 2640.4746f, 72.602f, 305.1998f);
				func_537(68.5462f, 2646.7837f, 71.6298f, 305.1998f);
				func_537(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_537(79.5597f, 2650.8347f, 68.668f, 305.1998f);
				func_537(72.6035f, 2656.8574f, 67.3294f, 305.1998f);
				func_537(83.4156f, 2660.2366f, 64.3198f, 305.1998f);
				func_537(102.851f, 2688.009f, 51.732f, 224f);
				func_537(109.815f, 2681.012f, 51.112f, 224f);
				func_537(116.355f, 2674.26f, 50.529f, 224f);
				func_537(125.138f, 2665.98f, 49.8f, 224f);
				func_537(132.228f, 2659.865f, 49.26f, 228.4f);
				func_537(139.354f, 2653.536f, 48.737f, 228.4f);
				func_537(88.512f, 2702.995f, 53.042f, 224.199f);
				func_537(81.565f, 2710.357f, 53.67f, 224.199f);
				func_537(75.156f, 2716.981f, 54.223f, 224.199f);
				func_537(68.442f, 2723.806f, 54.775f, 226.199f);
				func_537(61.449f, 2730.606f, 55.308f, 226.199f);
				func_537(53.702f, 2738.167f, 55.855f, 226.199f);
				func_537(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
	
		case 91:
			if (Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_537(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_537(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_537(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_537(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_537(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_537(2824.791f, 3894.7869f, 47.4293f, 105.3989f);
				func_537(2761.7385f, 3945.948f, 44.59f, 135.398f);
				func_537(2814.5886f, 3930.404f, 44.816f, 134.9978f);
				func_537(2747.6267f, 3930.92f, 43.8497f, 138.3978f);
				func_537(2796.3115f, 3928.3164f, 42.6106f, 134.5979f);
			}
			else
			{
				func_537(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_537(2714.633f, 3918.283f, 42.938f, 16f);
				func_537(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_537(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_537(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_537(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_537(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_537(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_537(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_537(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_537(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_537(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_537(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_537(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_537(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_537(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_537(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_537(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_537(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_537(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_537(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_537(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_537(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_537(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_537(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_537(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_537(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_537(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
	
		case 92:
			if (Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_537(3374.661f, 5559.7095f, 12.3726f, 138.7999f);
				func_537(3366.3652f, 5569.4487f, 13.9704f, 112.8f);
				func_537(3358.4927f, 5581.4634f, 16.1783f, 112.8f);
				func_537(3356.7053f, 5595.3633f, 15.4029f, 112.8f);
				func_537(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_537(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_537(3335.2588f, 5599.0464f, 22.4606f, 249.6f);
				func_537(3336.8108f, 5613.029f, 22.2159f, 249.6f);
				func_537(3354.6956f, 5609.6987f, 15.9453f, 111.3999f);
				func_537(3354.0056f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_537(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_537(3374.923f, 5520.1772f, 20.3207f, 86f);
				func_537(3350.6433f, 5490.432f, 18.8423f, 139.9997f);
				func_537(3364.1887f, 5502.9805f, 19.648f, 125.7999f);
				func_537(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_537(3365.919f, 5519.9487f, 18.8008f, 102.9988f);
				func_537(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_537(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_537(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_537(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_537(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_537(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_537(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_537(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_537(3335.4514f, 5455.7227f, 18.2323f, 162.1979f);
				func_537(3338.7878f, 5464.8027f, 18.8631f, 163.7977f);
				func_537(3362.4763f, 5488.2114f, 20.4432f, 108.5979f);
				func_537(3371.2593f, 5491.2744f, 21.5286f, 104.9989f);
				func_537(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_537(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_537(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_537(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_537(3342.3464f, 5473.345f, 19.1235f, 159.3987f);
				func_537(3347.2363f, 5480.447f, 19.4672f, 131.199f);
				func_537(3357.623f, 5516.9004f, 16.9016f, 118.7991f);
				func_537(3361.366f, 5545.8857f, 15.5532f, 118.7991f);
				func_537(3352.6123f, 5541.0127f, 16.3238f, 131.999f);
				func_537(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
	
		case 93:
			if (Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_537(43.848f, 6845.657f, 13.379f, 247.2f);
				func_537(50.379f, 6861.146f, 15.105f, 247.2f);
				func_537(32.501f, 6871.7773f, 13.3283f, 247.2f);
				func_537(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_537(55.806f, 6875.081f, 14.824f, 247.2f);
				func_537(11.616f, 6877.079f, 11.466f, 247.2f);
				func_537(18.954f, 6891.633f, 11.37f, 247.2f);
				func_537(26.68f, 6907.587f, 11.869f, 247.2f);
				func_537(7.479f, 6907.895f, 12.024f, 247.2f);
				func_537(44.9981f, 6901.3516f, 11.9426f, 247.2f);
			}
			else
			{
				func_537(35.591f, 6836.608f, 13.288f, 274.4f);
				func_537(36.028f, 6830.135f, 13.801f, 270.8f);
				func_537(35.114f, 6823.884f, 14.527f, 260.8f);
				func_537(48.779f, 6838.693f, 14.337f, 273.6f);
				func_537(56.738f, 6821.8f, 15.244f, 244.8f);
				func_537(48.377f, 6825.895f, 14.656f, 249.8f);
				func_537(49.11f, 6831.439f, 13.991f, 274.8f);
				func_537(53.544f, 6818.275f, 16.342f, 243f);
				func_537(46.162f, 6821.945f, 15.483f, 249.8f);
				func_537(60.129f, 6836.8f, 15.605f, 269.6f);
				func_537(40.88f, 6802.952f, 20.113f, 242.6f);
				func_537(48.203f, 6799.134f, 20.897f, 244.4f);
				func_537(70.449f, 6809.271f, 16.846f, 243f);
				func_537(61.436f, 6814.266f, 16.71f, 244.2f);
				func_537(56.142f, 6793.458f, 19.806f, 242.6f);
				func_537(65.759f, 6791.12f, 18.433f, 276.4f);
				func_537(77.305f, 6805.391f, 18.558f, 245.6f);
				func_537(85.893f, 6800.243f, 18.535f, 249.8f);
				func_537(56.85f, 6780.582f, 18.822f, 297.999f);
				func_537(65.636f, 6784.669f, 18.789f, 293.799f);
				func_537(74.121f, 6788.498f, 18.739f, 293.799f);
				func_537(97.779f, 6796.32f, 19.02f, 276.799f);
				func_537(106.76f, 6796.983f, 18.914f, 272.599f);
				func_537(112.387f, 6802.858f, 18.994f, 210.599f);
				func_537(117.58f, 6802.644f, 18.663f, 209.399f);
				func_537(122.481f, 6802.693f, 18.468f, 209.399f);
				func_537(127.182f, 6802.686f, 18.218f, 209.399f);
				func_537(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
	
		case 94:
			if (Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_537(-2213.5515f, 2283.7258f, 31.7464f, 293.7993f);
				func_537(-2196.7097f, 2290.824f, 32.0819f, 293.7993f);
				func_537(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_537(-2180.471f, 2296.2056f, 32.9612f, 287.5992f);
				func_537(-2180.8704f, 2419.6492f, 0.2324f, 147.7987f);
				func_537(-2180.1663f, 2436.9097f, 0.2325f, 144.5987f);
				func_537(-2185.2708f, 2457.022f, 0.2062f, 160.1985f);
				func_537(-2329.4646f, 2393.6028f, 2.5699f, 289.7982f);
				func_537(-2328.9775f, 2380.4062f, 2.7911f, 289.7982f);
				func_537(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_537(-2239.671f, 2390.2925f, 10.756f, 189.2002f);
				func_537(-2217.4128f, 2392.4712f, 12.2202f, 189.2002f);
				func_537(-2238.863f, 2381.5598f, 13.1388f, 185.2003f);
				func_537(-2215.6948f, 2383.0352f, 14.9809f, 189.4004f);
				func_537(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_537(-2215.9604f, 2374.2507f, 17.0939f, 187.4004f);
				func_537(-2237.494f, 2364.4673f, 15.3155f, 186.2004f);
				func_537(-2216.8572f, 2365.651f, 18.9029f, 173.0005f);
				func_537(-2218.5264f, 2357.0654f, 20.7893f, 179.0004f);
				func_537(-2237.6248f, 2348.108f, 20.9097f, 179.0004f);
				func_537(-2218.4473f, 2348.7327f, 22.9621f, 179.0004f);
				func_537(-2238.1797f, 2339.141f, 22.5602f, 174.8003f);
				func_537(-2218.7705f, 2340.1313f, 25.5237f, 177.2002f);
				func_537(-2238.9978f, 2330.9585f, 25.7263f, 175.8005f);
				func_537(-2219.2214f, 2331.9338f, 28.5604f, 177.8006f);
				func_537(-2219.0774f, 2324.0657f, 30.9043f, 198.8006f);
				func_537(-2239.4126f, 2322.913f, 28.0647f, 177.8008f);
				func_537(-2240.014f, 2313.9507f, 29.5314f, 170.6008f);
				func_537(-2241.5435f, 2305.8186f, 30.7136f, 163.4006f);
				func_537(-2244.9043f, 2298.3877f, 31.4166f, 148.2005f);
				func_537(-2249.3103f, 2290.8918f, 31.5742f, 139.2004f);
				func_537(-2211.8962f, 2319.5813f, 31.7538f, 259.4002f);
				func_537(-2203.961f, 2320.0159f, 31.9895f, 271.4001f);
				func_537(-2255.1057f, 2285.4148f, 31.617f, 130.3999f);
				func_537(-2196.1704f, 2320.341f, 32.2704f, 270.6003f);
				func_537(-2261.3352f, 2280.2034f, 31.6562f, 130.0002f);
				func_537(-2268.4468f, 2275.5276f, 31.7095f, 124.4001f);
				func_537(-2188.258f, 2319.9846f, 32.5649f, 267.3998f);
			}
			break;
	
		case 95:
			if (Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_537(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_537(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_537(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_537(15.6727f, 3297.8457f, 39.0535f, 191.9991f);
				func_537(-24.2865f, 3367.5269f, 41.4783f, 264.399f);
				func_537(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_537(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_537(97.4844f, 3335.3853f, 34.6164f, 7.9981f);
				func_537(20.409f, 3370.8386f, 38.8393f, 235.799f);
				func_537(48.457f, 3336.5862f, 35.8912f, 270.3979f);
			}
			else
			{
				func_537(25.9869f, 3349.7063f, 36.0366f, 273.9994f);
				func_537(25.0176f, 3356.9146f, 36.4258f, 276.9998f);
				func_537(36.2443f, 3351.3584f, 36.2386f, 272.5997f);
				func_537(35.9352f, 3358.8157f, 37.0033f, 276.7998f);
				func_537(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_537(30.027f, 3292.351f, 38.604f, 140.199f);
				func_537(49.1614f, 3358.5894f, 35.9759f, 263.5988f);
				func_537(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_537(23.897f, 3283.152f, 39.381f, 145.399f);
				func_537(60.9182f, 3356.2102f, 35.8814f, 255.3988f);
				func_537(18.723f, 3274.025f, 40.054f, 155.799f);
				func_537(59.0177f, 3350.0044f, 35.3204f, 255.7989f);
				func_537(36.958f, 3298.847f, 38.001f, 127.799f);
				func_537(54.165f, 3311.582f, 36.517f, 303.799f);
				func_537(61.607f, 3317.105f, 35.916f, 306.999f);
				func_537(68.994f, 3323.129f, 35.364f, 308.199f);
				func_537(76.266f, 3329.467f, 34.805f, 311.399f);
				func_537(82.757f, 3335.915f, 34.344f, 316.598f);
				func_537(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_537(14.664f, 3263.688f, 40.931f, 160.398f);
				func_537(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_537(11.7852f, 3256.1008f, 41.7031f, 159.198f);
				func_537(89.575f, 3343.311f, 33.932f, 318.398f);
				func_537(58.4154f, 3329.4229f, 35.6197f, 305.5979f);
				func_537(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_537(72.1063f, 3339.7927f, 34.8449f, 308.5977f);
				func_537(95.6614f, 3349.9172f, 33.696f, 316.1977f);
				func_537(85.4387f, 3353.1833f, 33.8047f, 317.9978f);
			}
			break;
	
		case 96:
			if (Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_537(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_537(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_537(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_537(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_537(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_537(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_537(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_537(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_537(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_537(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_537(2073.0442f, 1725.9348f, 102.5096f, 225.2f);
				func_537(2077.2405f, 1730.2992f, 102.5247f, 225.2f);
				func_537(2081.68f, 1734.7421f, 102.5588f, 225.2f);
				func_537(2086.0515f, 1739.0446f, 102.6618f, 225.2f);
				func_537(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_537(2095.2947f, 1748.2742f, 102.3022f, 225.2f);
				func_537(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_537(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_537(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_537(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_537(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_537(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_537(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_537(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_537(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_537(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_537(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_537(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_537(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_537(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_537(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_537(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_537(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_537(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_537(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_537(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_537(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_537(2098.9944f, 1747.9292f, 102.2403f, 225.2f);
			}
			break;
	
		case 97:
			if (Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_537(1871.6914f, 358.5369f, 162.1067f, 153.1979f);
				func_537(1858.9664f, 351.2935f, 161.7614f, 166.598f);
				func_537(1873.6115f, 342.6637f, 161.6936f, 142.998f);
				func_537(1887.6447f, 343.1557f, 162.1659f, 138.5979f);
				func_537(1888.6436f, 328.0839f, 161.7489f, 139.398f);
				func_537(1898.5963f, 315.2232f, 161.4418f, 173.7979f);
				func_537(1896.7292f, 266.5388f, 161.1619f, 113.5978f);
				func_537(1900.1672f, 281.3884f, 161.7807f, 115.197f);
				func_537(1856.2855f, 294.624f, 161.442f, 167.9966f);
				func_537(1868.6218f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_537(1856.3777f, 255.9146f, 162.7158f, 147.6202f);
				func_537(1837.2792f, 227.3696f, 165.2592f, 164.3995f);
				func_537(1835.1923f, 219.3931f, 167.5468f, 169.9994f);
				func_537(1833.5565f, 211.859f, 169.864f, 169.9994f);
				func_537(1839.5338f, 194.4053f, 171.3841f, 172.9989f);
				func_537(1838.2894f, 185.8157f, 171.2585f, 174.1989f);
				func_537(1837.4781f, 177.0607f, 170.7063f, 174.1989f);
				func_537(1840.4631f, 202.6959f, 170.8702f, 174.1989f);
				func_537(1836.2964f, 168.7307f, 170.5786f, 174.1989f);
				func_537(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_537(1826.9104f, 214.9648f, 172.2502f, 18.7986f);
				func_537(1823.8047f, 223.0288f, 172.0794f, 21.7986f);
				func_537(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_537(1817.2448f, 239.1232f, 172.0878f, 21.7986f);
				func_537(1814.0886f, 247.0423f, 171.7386f, 24.9986f);
				func_537(1810.8789f, 255.6553f, 171.7517f, 19.3986f);
				func_537(1807.7288f, 265.4899f, 172.2307f, 15.1986f);
				func_537(1823.1471f, 197.3122f, 172.235f, 192.3984f);
				func_537(1824.6414f, 184.4241f, 171.5948f, 183.3985f);
				func_537(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_537(1824.7476f, 162.8998f, 170.4961f, 173.1985f);
				func_537(1817.3447f, 214.6964f, 172.5223f, 203.9982f);
				func_537(1813.4656f, 222.3717f, 172.3316f, 200.9982f);
				func_537(1809.1141f, 230.8225f, 172.346f, 205.1983f);
				func_537(1805.5945f, 239.3896f, 172.0033f, 197.9984f);
				func_537(1802.5154f, 247.4269f, 171.8964f, 197.9984f);
				func_537(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_537(1823.0791f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
	
		case 123:
		case 124:
		case 125:
			func_557(896.357f, -3.23695f, 77.7645f, 147.3987f, hParam1, false);
			func_557(899.759f, -5.54885f, 77.7645f, 147.3987f, hParam1, false);
			func_557(903.021f, -7.62495f, 77.7645f, 147.3987f, hParam1, false);
			func_557(906.474f, -9.70314f, 77.7645f, 147.3987f, hParam1, false);
			func_557(909.884f, -11.888f, 77.7645f, 147.3987f, hParam1, false);
			func_557(913.209f, -14.0965f, 77.7645f, 147.3987f, hParam1, false);
			func_557(879.578f, 7.26725f, 77.7646f, 147.3987f, hParam1, false);
			func_557(876.642f, 9.05555f, 77.7646f, 147.3987f, hParam1, false);
			func_557(873.534f, 10.8622f, 77.7646f, 147.3987f, hParam1, false);
			func_557(869.685f, -7.55887f, 77.7646f, 237.3985f, hParam1, false);
			func_557(867.866f, -10.464f, 77.7646f, 237.3985f, hParam1, false);
			func_557(866.077f, -13.4579f, 77.7646f, 237.3985f, hParam1, false);
			func_557(864.322f, -16.4335f, 77.7646f, 237.3985f, hParam1, false);
			func_557(862.534f, -19.2652f, 77.7644f, 237.3985f, hParam1, false);
			func_557(887.524f, -18.7251f, 77.7647f, 237.3985f, hParam1, false);
			func_557(885.594f, -21.7041f, 77.7647f, 237.3985f, hParam1, false);
			func_557(883.691f, -24.7685f, 77.7647f, 237.3985f, hParam1, false);
			func_557(881.827f, -27.7084f, 77.7644f, 237.3985f, hParam1, false);
			func_557(880.013f, -30.5612f, 77.7644f, 237.3985f, hParam1, false);
			func_557(884.931f, -17.2169f, 77.7646f, 57.5983f, hParam1, false);
			func_557(883.043f, -20.1063f, 77.7646f, 57.5983f, hParam1, false);
			func_557(881.118f, -22.9962f, 77.7644f, 57.5983f, hParam1, false);
			func_557(879.345f, -25.9389f, 77.7644f, 57.5983f, hParam1, false);
			func_557(877.631f, -28.8543f, 77.7644f, 57.5983f, hParam1, false);
			func_557(903.231f, -28.6965f, 77.7647f, 57.5983f, hParam1, false);
			func_557(901.368f, -31.6316f, 77.7647f, 57.5983f, hParam1, false);
			func_557(899.552f, -34.4844f, 77.7647f, 57.5983f, hParam1, false);
			func_557(897.669f, -37.4419f, 77.7647f, 57.5983f, hParam1, false);
			func_557(895.831f, -40.3309f, 77.7647f, 57.5983f, hParam1, false);
			func_557(932.842f, -25.6631f, 77.7647f, 147.798f, hParam1, false);
			func_557(935.693f, -27.516f, 77.7647f, 147.798f, hParam1, false);
			func_557(938.593f, -29.5809f, 77.7647f, 147.798f, hParam1, false);
			break;
	
		case 165:
			func_557(-14.562f, -1298.2373f, 28.323f, 181.7987f, hParam1, false);
			func_557(-18.7554f, -1298.3212f, 28.3238f, 181.7987f, hParam1, false);
			func_557(-8.76f, -1306.7644f, 28.4274f, 270.5988f, hParam1, false);
			func_557(-0.9861f, -1306.9889f, 29.0661f, 268.5986f, hParam1, false);
			func_557(7.095f, -1306.7876f, 29.081f, 269.7986f, hParam1, false);
			func_557(15.0002f, -1306.9833f, 28.1188f, 269.7986f, hParam1, false);
			func_557(22.4783f, -1307.6133f, 28.2369f, 270.5979f, hParam1, false);
			func_557(30.1251f, -1307.5502f, 28.2089f, 270.5979f, hParam1, false);
			func_557(-58.9301f, -1319.5089f, 28.1072f, 89.1976f, hParam1, false);
			func_557(-66.4231f, -1319.25f, 28.0882f, 89.1976f, hParam1, false);
			break;
	
		case 162:
			func_557(-215.8533f, 6310.631f, 30.2933f, 315.3986f, hParam1, false);
			func_557(-221.6996f, 6304.683f, 30.2887f, 315.3986f, hParam1, false);
			func_557(-227.5227f, 6298.8867f, 30.2886f, 315.3986f, hParam1, false);
			func_557(-233.4945f, 6293.001f, 30.2907f, 315.3986f, hParam1, false);
			func_557(-199.5962f, 6321.835f, 30.4171f, 315.3986f, hParam1, false);
			func_557(-219.9854f, 6323.075f, 30.3012f, 135.3982f, hParam1, false);
			func_557(-214.4723f, 6328.4194f, 30.3033f, 135.3982f, hParam1, false);
			func_557(-228.3779f, 6314.325f, 30.2951f, 135.3982f, hParam1, false);
			func_557(-233.6126f, 6309.157f, 30.2805f, 135.3982f, hParam1, false);
			func_557(-239.0836f, 6303.774f, 30.3162f, 135.3982f, hParam1, false);
			break;
	
		case 166:
			func_557(1199.3922f, -1274.6459f, 34.2218f, 264.5996f, hParam1, false);
			func_557(1199.8231f, -1270.8417f, 34.2267f, 264.5996f, hParam1, false);
			func_557(1211.7864f, -1273.5059f, 34.2265f, 84.7993f, hParam1, false);
			func_557(1211.3959f, -1277.511f, 34.2265f, 84.7993f, hParam1, false);
			func_557(1198.3217f, -1289.7107f, 34.2104f, 265.7991f, hParam1, false);
			func_557(1190.971f, -1289.0333f, 33.9762f, 265.7991f, hParam1, false);
			func_557(1183.6307f, -1288.7725f, 33.8503f, 265.7991f, hParam1, false);
			func_557(1212.6528f, -1290.9677f, 34.2268f, 265.7991f, hParam1, false);
			func_557(1219.9164f, -1291.5703f, 34.2231f, 265.7991f, hParam1, false);
			func_557(1227.2478f, -1292.124f, 34.2049f, 214.5982f, hParam1, false);
			break;
	
		case 164:
			func_557(-513.4792f, -1725.9542f, 18.2396f, 233.7993f, hParam1, false);
			func_557(-502.8869f, -1724.6547f, 18.3531f, 191.7995f, hParam1, false);
			func_557(-500.5194f, -1731.9363f, 17.9393f, 202.9996f, hParam1, false);
			func_557(-519.8862f, -1723.5706f, 18.186f, 326.1996f, hParam1, false);
			func_557(-522.9067f, -1721.4664f, 18.2f, 326.1996f, hParam1, false);
			func_557(-525.8917f, -1719.2316f, 18.2055f, 326.1996f, hParam1, false);
			func_557(-528.915f, -1717.2086f, 18.2224f, 326.1996f, hParam1, false);
			func_557(-532.0991f, -1714.7692f, 18.2197f, 326.1996f, hParam1, false);
			func_557(-541.5544f, -1713.4291f, 18.159f, 260.1992f, hParam1, false);
			func_557(-547.5757f, -1708.4988f, 18.0875f, 214.5982f, hParam1, false);
			break;
	
		case 163:
			func_557(2503.9746f, 4105.65f, 37.3197f, 333.9991f, hParam1, false);
			func_557(2500.5635f, 4098.3643f, 37.2041f, 333.9991f, hParam1, false);
			func_557(2496.8916f, 4090.8677f, 37.0864f, 333.9991f, hParam1, false);
			func_557(2493.136f, 4083.078f, 36.9669f, 333.9991f, hParam1, false);
			func_557(2489.5542f, 4075.2004f, 36.8805f, 333.9991f, hParam1, false);
			func_557(2491.6594f, 4121.725f, 37.1767f, 155.199f, hParam1, false);
			func_557(2488.2144f, 4123.2705f, 37.1377f, 155.199f, hParam1, false);
			func_557(2484.7336f, 4124.911f, 37.0531f, 155.199f, hParam1, false);
			func_557(2484.46f, 4113.972f, 37.0647f, 336.7987f, hParam1, false);
			func_557(2480.8772f, 4115.4917f, 37.0647f, 336.7987f, hParam1, false);
			break;
	
		default:
			break;
	}

	return;
}

void func_557(float fParam0, float fParam1, float fParam2, float fParam3, Hash hParam4, BOOL bParam5) // Position - 0x20AAF (133807)
{
	var unk;
	var unk4;
	float num;
	Vector3 vector;
	var offsetFromCoordAndHeadingInWorldCoords;

	if (!(hParam4 == 0))
	{
		func_464(hParam4, &unk, &unk4, 1086324736, 1080033280, 1077936128);
		num = unk4.f_1 - unk.f_1;
	
		if (bParam5)
			num = num * -1f;
	
		num = num * 0.5f;
		vector = { 0f, num, 0f };
		offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(fParam0, fParam3, vector) };
		func_537(offsetFromCoordAndHeadingInWorldCoords, fParam3);
	}
	else
	{
		func_537(fParam0, fParam3);
	}

	return;
}

void func_558(int iParam0) // Position - 0x20B29 (133929)
{
	switch (iParam0)
	{
		case 83:
			func_537(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_537(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_537(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_537(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_537(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_537(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_537(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_537(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_537(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_537(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_537(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_537(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_537(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_537(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_537(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_537(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_537(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_537(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_537(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_537(-1017.023f, -3382.7773f, 12.8401f, 330.6f);
			func_537(-1010.6078f, -3386.1028f, 12.8401f, 330.6f);
			func_537(-1004.6581f, -3389.8232f, 12.8401f, 330.6f);
			func_537(-998.3798f, -3393.6443f, 12.8401f, 330.6f);
			func_537(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_537(-985.0826f, -3401.2468f, 12.8401f, 330.6f);
			func_537(-978.2733f, -3405.0312f, 12.8401f, 330.6f);
			func_537(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_537(-964.4719f, -3413.2021f, 13.1463f, 330.6f);
			func_537(-1022.9401f, -3392.3716f, 12.8401f, 330.6f);
			func_537(-1016.2192f, -3395.8198f, 12.8401f, 330.6f);
			func_537(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_537(-1003.4357f, -3402.9822f, 12.8401f, 330.6f);
			func_537(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_537(-990.2305f, -3410.5476f, 12.8401f, 330.6f);
			func_537(-983.4429f, -3414.0933f, 12.8401f, 330.6f);
			func_537(-976.8809f, -3417.8457f, 12.8401f, 330.6f);
			func_537(-969.4039f, -3421.7268f, 13.1463f, 330.6f);
			func_537(-1028.2509f, -3401.834f, 12.8401f, 330.6f);
			func_537(-1021.6307f, -3405.433f, 12.8401f, 330.6f);
			func_537(-1015.2093f, -3408.5625f, 12.8401f, 330.6f);
			func_537(-1008.8096f, -3412.4836f, 12.8401f, 330.6f);
			func_537(-1002.2773f, -3415.9873f, 12.8401f, 330.6f);
			func_537(-995.7023f, -3419.9705f, 12.8401f, 330.6f);
			func_537(-989.1453f, -3423.9883f, 12.8401f, 330.6f);
			func_537(-982.6298f, -3427.9812f, 12.8401f, 330.6f);
			func_537(-974.9305f, -3431.8328f, 13.1463f, 330.6f);
			break;
	
		case 84:
			func_537(-1356.991f, -3242.228f, 12.945f, 330f);
			func_537(-1369.313f, -3234.758f, 12.945f, 330f);
			func_537(-1381.751f, -3227.408f, 12.945f, 330f);
			func_537(-1394.302f, -3220.021f, 12.945f, 330f);
			func_537(-1354.339f, -3223.129f, 12.945f, 330f);
			func_537(-1366.302f, -3215.809f, 12.945f, 330f);
			func_537(-1378.492f, -3208.645f, 12.945f, 330f);
			func_537(-1350.322f, -3203.405f, 12.945f, 330f);
			func_537(-1362.684f, -3196.451f, 12.945f, 330f);
			func_537(-1347.089f, -3182.69f, 12.945f, 330f);
			func_537(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_537(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_537(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_537(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_537(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_537(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_537(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_537(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_537(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_537(-1344.7162f, -3288.3333f, 12.9445f, 331.2f);
			func_537(-1338.1412f, -3290.3352f, 12.9445f, 331.2f);
			func_537(-1331.473f, -3294.1785f, 12.9445f, 331.2f);
			func_537(-1324.9207f, -3297.9976f, 12.9445f, 331.2f);
			func_537(-1318.1293f, -3301.9568f, 12.9445f, 331.2f);
			func_537(-1350.4662f, -3294.226f, 12.9445f, 331.2f);
			func_537(-1343.482f, -3297.5762f, 12.9445f, 331.2f);
			func_537(-1336.3976f, -3302.4556f, 12.9445f, 331.2f);
			func_537(-1329.8203f, -3306.8196f, 12.945f, 331.2f);
			func_537(-1322.7612f, -3310.3525f, 12.945f, 331.2f);
			func_537(-1316.5869f, -3314.5557f, 12.945f, 331.2f);
			func_537(-1326.5376f, -3318.499f, 12.945f, 331.2f);
			func_537(-1335.7401f, -3313.6777f, 12.945f, 331.2f);
			func_537(-1350.8479f, -3302.6187f, 12.9446f, 331.2f);
			func_537(-1357.9606f, -3306.8862f, 12.945f, 331.2f);
			func_537(-1335.2017f, -3322.4285f, 12.9452f, 331.2f);
			func_537(-1351.4011f, -3311.566f, 12.9452f, 331.2f);
			func_537(-1344.2549f, -3305.965f, 12.9451f, 331.2f);
			func_537(-1299.8324f, -3305.5732f, 12.945f, 331.2f);
			func_537(-1293.4141f, -3309.4128f, 12.945f, 331.2f);
			func_537(-1286.8353f, -3313.1567f, 12.945f, 331.2f);
			func_537(-1303.9878f, -3313.0999f, 12.945f, 331.2f);
			func_537(-1297.4025f, -3316.699f, 12.945f, 331.2f);
			func_537(-1290.9685f, -3320.5193f, 12.945f, 331.2f);
			func_537(-1308.2695f, -3320.6118f, 12.945f, 331.2f);
			func_537(-1301.9681f, -3324.7139f, 12.945f, 331.2f);
			func_537(-1295.4827f, -3328.4216f, 12.945f, 331.2f);
			break;
	
		case 85:
			func_537(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_537(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_537(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_537(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_537(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_537(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_537(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_537(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_537(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_537(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_537(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_537(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_537(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_537(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_537(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_537(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_537(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_537(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_537(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_537(-2024.4253f, 3102.7073f, 31.8103f, 150.7997f);
			func_537(-2018.0736f, 3099.056f, 31.8103f, 150.7997f);
			func_537(-2009.0316f, 3094.1711f, 31.8103f, 150.7997f);
			func_537(-2002.9235f, 3090.6692f, 31.8103f, 150.7997f);
			func_537(-1996.5417f, 3087.2014f, 31.8103f, 150.7997f);
			func_537(-1990.2324f, 3083.5342f, 31.8103f, 150.7997f);
			func_537(-1983.5184f, 3080.0334f, 31.8103f, 150.7997f);
			func_537(-2029.1602f, 3094.3572f, 31.8103f, 150.7997f);
			func_537(-2022.4309f, 3090.7034f, 31.8103f, 150.7997f);
			func_537(-2013.7017f, 3086.0151f, 31.8103f, 150.7997f);
			func_537(-2007.6703f, 3082.42f, 31.8103f, 150.7997f);
			func_537(-2001.2112f, 3078.5693f, 31.8103f, 150.7997f);
			func_537(-1994.6436f, 3074.6538f, 31.8103f, 150.7997f);
			func_537(-1987.9342f, 3070.6543f, 31.8103f, 150.7997f);
			func_537(-2033.7764f, 3086.0315f, 31.8103f, 150.7997f);
			func_537(-2026.9293f, 3082.094f, 31.8103f, 150.7997f);
			func_537(-2018.663f, 3077.3406f, 31.8103f, 150.7997f);
			func_537(-2012.3446f, 3073.7073f, 31.8103f, 150.7997f);
			func_537(-2006.0515f, 3070.0894f, 31.8103f, 150.7997f);
			func_537(-1999.1693f, 3066.1316f, 31.8103f, 150.7997f);
			func_537(-1992.5424f, 3062.2566f, 31.8103f, 150.7997f);
			func_537(-2038.5449f, 3077.3445f, 31.8103f, 150.7997f);
			func_537(-2031.5873f, 3073.3438f, 31.8103f, 150.7997f);
			func_537(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_537(-2012.8864f, 3063.2188f, 31.8103f, 150.7997f);
			func_537(-2003.4811f, 3057.141f, 31.8103f, 150.7997f);
			func_537(-1996.6183f, 3053.1948f, 31.8103f, 150.7997f);
			break;
	
		case 86:
			func_537(-1885.1868f, 3095.3445f, 31.81f, 150.2f);
			func_537(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_537(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_537(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_537(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_537(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_537(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_537(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_537(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_537(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_537(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_537(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_537(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_537(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_537(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_537(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_537(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_537(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_537(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_537(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_537(-1969.3618f, 3079.9094f, 31.8103f, 150.1997f);
			func_537(-1963.6726f, 3076.8867f, 31.8103f, 150.1997f);
			func_537(-1958.5238f, 3073.8992f, 31.8103f, 150.1997f);
			func_537(-1979.8282f, 3074.704f, 31.8103f, 150.1997f);
			func_537(-1973.9005f, 3071.4185f, 31.8103f, 150.1997f);
			func_537(-1967.9165f, 3068.089f, 31.8103f, 150.1997f);
			func_537(-1949.9164f, 3068.72f, 31.8103f, 150.1997f);
			func_537(-1961.9336f, 3064.5999f, 31.8103f, 150.1997f);
			func_537(-1984.3324f, 3067.03f, 31.8103f, 150.1997f);
			func_537(-1978.182f, 3063.2861f, 31.8103f, 150.1997f);
			func_537(-1972.0605f, 3060.1907f, 31.8103f, 150.1997f);
			func_537(-1952.6101f, 3059.5513f, 31.8103f, 150.1997f);
			func_537(-1956.9585f, 3051.5894f, 31.8103f, 150.1997f);
			func_537(-1988.7778f, 3059.1355f, 31.8103f, 150.1997f);
			func_537(-1982.174f, 3055.5908f, 31.8103f, 150.1997f);
			func_537(-1975.5795f, 3051.8984f, 31.8103f, 150.1997f);
			func_537(-1969.1392f, 3048.2803f, 31.8103f, 150.1997f);
			func_537(-1962.2495f, 3044.2559f, 31.8103f, 150.1997f);
			func_537(-1989.4796f, 3050.4673f, 31.8103f, 150.1997f);
			func_537(-1977.3248f, 3043.7864f, 31.8103f, 150.1997f);
			func_537(-1971.0696f, 3040.306f, 31.8103f, 150.1997f);
			func_537(-1964.4087f, 3037.1184f, 31.8103f, 150.1997f);
			func_537(-1998.3752f, 3042.3486f, 31.8103f, 150.1997f);
			func_537(-1991.7688f, 3038.47f, 31.8103f, 150.1997f);
			func_537(-1978.7179f, 3035.164f, 31.8103f, 150.1997f);
			func_537(-1971.4832f, 3031.3157f, 31.8103f, 150.1997f);
			break;
	
		case 87:
			func_537(-2484.323f, 3249.294f, 31.828f, 151f);
			func_537(-2495.313f, 3255.746f, 31.828f, 151f);
			func_537(-2472.644f, 3242.684f, 31.828f, 151f);
			func_537(-2506.313f, 3262.27f, 31.823f, 151f);
			func_537(-2461.494f, 3235.93f, 31.828f, 151f);
			func_537(-2505.602f, 3238.049f, 31.828f, 151f);
			func_537(-2481.937f, 3224.8f, 31.828f, 151f);
			func_537(-2516.813f, 3244.266f, 31.823f, 151f);
			func_537(-2470.03f, 3217.899f, 31.828f, 151f);
			func_537(-2493.933f, 3231.308f, 31.828f, 151f);
			func_537(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_537(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_537(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_537(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_537(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_537(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_537(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_537(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_537(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_537(-2426.2195f, 3238.211f, 31.8616f, 150.5996f);
			func_537(-2419.0515f, 3233.8662f, 31.8726f, 150.5996f);
			func_537(-2412.0686f, 3229.8538f, 31.8859f, 150.5996f);
			func_537(-2405.2817f, 3225.8093f, 31.8841f, 150.5996f);
			func_537(-2398.6238f, 3222.135f, 31.9249f, 150.5996f);
			func_537(-2391.7288f, 3218.2295f, 31.9354f, 150.5996f);
			func_537(-2384.7268f, 3214.5242f, 31.9585f, 150.5996f);
			func_537(-2377.55f, 3210.4607f, 31.9192f, 150.5996f);
			func_537(-2369.9604f, 3205.8352f, 31.8267f, 150.5996f);
			func_537(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_537(-2397.4807f, 3232.3745f, 31.9879f, 150.5996f);
			func_537(-2390.5237f, 3228.1255f, 31.9758f, 150.5996f);
			func_537(-2383.9856f, 3223.9946f, 31.986f, 150.5996f);
			func_537(-2377.176f, 3219.6948f, 31.9615f, 150.5996f);
			func_537(-2370.5244f, 3215.946f, 32.002f, 150.5996f);
			func_537(-2400.2302f, 3243.846f, 31.8311f, 150.5996f);
			func_537(-2393.2798f, 3240.281f, 32.0164f, 150.5996f);
			func_537(-2386.3555f, 3236.8193f, 32.0616f, 150.5996f);
			func_537(-2379.3818f, 3232.7395f, 32.0318f, 150.5996f);
			func_537(-2372.314f, 3229.1956f, 32.0177f, 150.5996f);
			func_537(-2365.1528f, 3225.7322f, 32.0145f, 150.5996f);
			func_537(-2395.04f, 3252.6436f, 31.8557f, 150.5996f);
			func_537(-2388.6838f, 3249.0916f, 32.0198f, 150.5996f);
			func_537(-2382.1272f, 3245.0447f, 32.0086f, 150.5996f);
			func_537(-2374.9053f, 3240.9375f, 32.0085f, 150.5996f);
			func_537(-2368.1396f, 3237.3276f, 32.0177f, 150.5996f);
			func_537(-2361.068f, 3233.3955f, 31.9573f, 150.5996f);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_559(Hash hParam0) // Position - 0x220F8 (139512)
{
	switch (hParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case 84351789:
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
		case joaat("conada"):
		case -1659004814:
			return true;
	
		default:
		
	}

	return false;
}

void func_560(int iParam0) // Position - 0x221AE (139694)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_537(-947.712f, -3367.704f, 12.944f, 60f);
			func_537(-904.692f, -3293.072f, 12.944f, 60f);
			func_537(-863.71f, -3221.978f, 12.944f, 60f);
			func_537(-966.418f, -3162.773f, 12.944f, 60f);
			func_537(-1007.435f, -3233.93f, 12.944f, 60f);
			func_537(-1050.455f, -3308.559f, 12.944f, 60f);
			func_537(-1145.673f, -3253.456f, 12.944f, 60f);
			func_537(-1098.386f, -3181.428f, 12.944f, 60f);
			func_537(-1060.474f, -3108.903f, 12.944f, 60f);
			func_537(-1155.391f, -3053.632f, 12.944f, 60f);
			func_537(-1196.114f, -3125.146f, 12.948f, 60f);
			func_537(-1235.552f, -3201.86f, 12.944f, 60f);
			func_537(-1344.446f, -3139.177f, 12.944f, 60f);
			func_537(-1301.308f, -3064.341f, 12.944f, 60f);
			func_537(-1260.135f, -2992.912f, 12.944f, 60f);
			func_537(-1364.244f, -2932.9f, 12.98f, 60f);
			func_537(-1405.284f, -3004.108f, 12.96f, 60f);
			func_537(-1448.29f, -3078.72f, 12.95f, 60f);
			func_537(-1535.732f, -3028.318f, 12.945f, 60f);
			func_537(-1492.639f, -2953.558f, 12.945f, 60f);
			func_537(-1451.506f, -2882.2f, 12.944f, 60f);
			func_537(-1553.927f, -2823.12f, 13.002f, 60f);
			func_537(-1595.097f, -2894.571f, 12.944f, 60f);
			func_537(-1637.836f, -2968.714f, 12.945f, 60f);
			func_537(-1740.971f, -2911.484f, 12.944f, 330f);
			func_537(-1696.293f, -2833.978f, 12.944f, 330f);
			func_537(-1651.502f, -2756.273f, 12.945f, 330f);
			func_537(-1588.258f, -2647.575f, 12.944f, 330f);
			func_537(-1536.862f, -2681.378f, 12.945f, 330f);
			func_537(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
	
		case 85:
		case 86:
		case 87:
			func_537(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_537(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_537(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_537(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_537(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_537(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_537(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_537(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_537(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_537(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_537(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_537(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_537(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_537(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_537(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_537(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_537(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_537(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_537(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_537(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_537(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_537(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_537(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_537(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_537(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_537(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_537(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_537(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_537(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_537(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_561(Hash hParam0) // Position - 0x22784 (141188)
{
	switch (hParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob5"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
		case joaat("streamer216"):
		case 239897677:
		case 858355070:
			return true;
	
		default:
		
	}

	return false;
}

int func_562(Ped pedParam0) // Position - 0x2283A (141370)
{
	if (func_563(pedParam0))
		return 1;

	return 0;
}

BOOL func_563(Ped pedParam0) // Position - 0x22850 (141392)
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedParam0, true), -1308.118f, -2934.2695f, 13.7545f) < 1000f)
		return true;

	return false;
}

int func_564(Ped pedParam0) // Position - 0x2288E (141454)
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedParam0, true), -2270.2446f, 3127.9133f, 31.8118f) < 1000f)
		return 1;

	return 0;
}

BOOL func_565(int iParam0, int iParam1) // Position - 0x228CC (141516)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}

	return false;
}

BOOL func_566(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x229A9 (141737)
{
	int i;
	int j;
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	BOOL flag;

	num = 0;
	num2 = 50f;
	num4 = 300f;
	num5 = -1;

	for (i = 1; i <= 131; i = i + 1)
	{
		if (num < *uParam3)
		{
			j = 0;
		
			for (j = 0; j < 2; j = j + 1)
			{
				if (SYSTEM::VDIST(fParam0, fParam0.f_1, 0f, Global_1312333[i /*1951*/].f_3[j /*3*/], Global_1312333[i /*1951*/].f_3[j /*3*/].f_1, 0f) < num2)
				{
					uParam3->[num] = i;
					uParam4->[num] = 0;
					num = num + 1;
					j = 99;
				}
			}
		}
	}

	for (i = 0; i < 176; i = i + 1)
	{
		num2 = 50f;
	
		if (i >= 83 && i <= 87)
			if (func_541(i))
				num2 = 300f;
			else
				num2 = 0f;
	
		if (i >= 89 && i <= 97)
			if (func_568(i))
				num2 = 75f;
			else
				num2 = 0f;
	
		if (i >= 123 && i <= 125)
			num2 = 150f;
	
		flag = false;
	
		if (i >= 162 && i <= 166)
			flag = func_567(i, fParam0, num2, true);
	
		if (num < *uParam3)
		{
			num3 = SYSTEM::VDIST(fParam0, fParam0.f_1, 0f, Global_1944438.f_762[i /*3*/], Global_1944438.f_762[i /*3*/].f_1, 0f);
		
			if (num3 < num2 || flag)
			{
				if (i >= 83 && i <= 87)
				{
					if (num3 <= num4)
					{
						num4 = num3;
					
						if (num5 != -1)
						{
							uParam3->[num5] = i;
						}
						else
						{
							num5 = num;
							uParam3->[num] = i;
							uParam4->[num] = 1;
							num = num + 1;
						}
					}
				}
				else
				{
					uParam3->[num] = i;
					uParam4->[num] = 1;
					num = num + 1;
				}
			}
		}
	}

	if (num > 0)
		return true;

	return false;
}

BOOL func_567(int iParam0, float fParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5) // Position - 0x22B90 (142224)
{
	float num;

	if (iParam0 == -1 || func_546(iParam0) != 29)
		return 0;

	num = 0f;

	switch (iParam0)
	{
		case 166:
		case 162:
		case 163:
		case 165:
			num = SYSTEM::VDIST(fParam1, fParam1.f_1, 0f, Global_1944438.f_762[iParam0 /*3*/], Global_1944438.f_762[iParam0 /*3*/].f_1, 0f);
		
			if (num < fParam4 && !bParam5 || bParam5 && fParam1.f_2 >= 0f)
				return 1;
			break;
	
		case 164:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(fParam1, -500f, -1664.2474f, 18.349556f, -544.0528f, -1720.7538f, 28.374449f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(fParam1, -474.9512f, -1681.6456f, 17.890976f, -496.40805f, -1762.7743f, 27.64551f, 45f, false, true))
				return 1;
		
			if (!bParam5 && fParam1.f_2 <= 0f)
				num = SYSTEM::VDIST(fParam1, fParam1.f_1, 0f, Global_1944438.f_762[iParam0 /*3*/], Global_1944438.f_762[iParam0 /*3*/].f_1, 0f);
			break;
	}

	return 0;
}

BOOL func_568(int iParam0) // Position - 0x22CCC (142540)
{
	int num;
	Player player;

	num = func_569(iParam0);

	if (Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_268.f_306 == num)
		return true;

	player = Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_10;

	if (player != _INVALID_PLAYER_INDEX())
		if (Global_1845270[player /*892*/].f_268.f_306 == num)
			return true;

	if (func_552() == iParam0)
		return true;

	return false;
}

int func_569(int iParam0) // Position - 0x22D34 (142644)
{
	switch (iParam0)
	{
		case 89:
			return 1;
	
		case 90:
			return 2;
	
		case 91:
			return 3;
	
		case 92:
			return 4;
	
		case 93:
			return 5;
	
		case 94:
			return 6;
	
		case 95:
			return 7;
	
		case 96:
			return 8;
	
		case 97:
			return 9;
	}

	return 0;
}

BOOL func_570(Hash hParam0) // Position - 0x22DBB (142779)
{
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(hParam0) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(hParam0))
		return true;

	return false;
}

void func_571(int iParam0) // Position - 0x22DE9 (142825)
{
	switch (iParam0)
	{
		case 78:
			func_537(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_537(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_537(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_537(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
	
		case 79:
			func_537(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_537(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_537(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_537(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
	
		case 82:
			func_537(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_537(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_537(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_537(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
	
		case 81:
			func_537(-1294.6403f, 468.1975f, 96.4245f, 141.8551f);
			func_537(-1300.5077f, 468.0167f, 96.8298f, 139.6287f);
			func_537(-1283.8943f, 467.2136f, 95.4036f, 95.058f);
			func_537(-1273.5837f, 454.4406f, 94.2269f, 30.8724f);
			break;
	
		case 73:
			func_537(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_537(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_537(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_537(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
	
		case 75:
			func_537(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_537(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_537(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_537(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
	
		case 76:
			func_537(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_537(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_537(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_537(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
	
		case 77:
			func_537(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_537(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_537(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_537(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
	
		case 80:
			func_537(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_537(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_537(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_537(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
	
		case 87:
			if (func_572())
			{
				func_537(-1608.297f, -556.875f, 33.406f, 310f);
				func_537(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_537(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_537(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_537(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_537(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_537(-1582.6805f, -534.1682f, 34.4171f, 307.8589f);
				func_537(-1619.6575f, -531.5862f, 33.4254f, 128.9132f);
				func_537(-1560.2571f, -532.3268f, 34.5436f, 216.0882f);
				func_537(-1553.6981f, -541.3412f, 33.8662f, 215.8465f);
				func_537(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_537(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
	
		case 88:
			if (func_572())
			{
				func_537(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_537(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_537(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_537(-1346.0068f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_537(-1390.6045f, -528.6405f, 29.8387f, 35.4572f);
				func_537(-1357.0851f, -531.4611f, 29.7218f, 125.0906f);
				func_537(-1346.2356f, -523.9114f, 30.6f, 124.7302f);
				func_537(-1337.8523f, -518.1096f, 31.2329f, 124.6998f);
				func_537(-1336.3901f, -556.0637f, 29.7514f, 33.8088f);
				func_537(-1340.2145f, -508.9828f, 31.4089f, 98.7714f);
				func_537(-1348.6066f, -510.3536f, 30.9263f, 99.2425f);
				func_537(-1380.7642f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
	
		case 89:
			if (func_572())
			{
				func_537(-102.737f, -597.379f, 35.053f, 160.999f);
				func_537(-97.793f, -589.568f, 35.082f, 134.799f);
				func_537(-110.357f, -619.402f, 35.055f, 160.599f);
				func_537(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_537(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_537(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_537(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_537(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_537(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_537(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_537(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_537(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
	
		case 90:
			if (func_572())
			{
				func_537(-59.349f, -779.238f, 43.134f, 228.398f);
				func_537(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_537(-65.212f, -772.66f, 43.151f, 219.398f);
				func_537(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_537(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_537(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_537(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_537(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_537(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_537(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_537(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_537(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
	
		case 91:
			func_537(246.5035f, -1798.7494f, 26.1131f, 212.5996f);
			func_537(247.8968f, -1797.0166f, 26.1131f, 212.5996f);
			func_537(249.3848f, -1795.3737f, 26.1131f, 212.5996f);
			func_537(250.8498f, -1793.6952f, 26.1131f, 212.5996f);
			func_537(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_537(266.8129f, -1787.4761f, 26.1131f, 164.5991f);
			func_537(264.814f, -1785.8008f, 26.1131f, 164.5991f);
			func_537(269.0069f, -1789.1599f, 26.1131f, 164.5991f);
			break;
	
		case 92:
			func_537(-1464.5f, -927.9f, 9f, 296.7991f);
			func_537(-1466f, -926.1f, 9f, 296.7991f);
			func_537(-1467.9f, -924.7f, 9f, 296.7991f);
			func_537(-1469.7f, -923.7f, 9f, 296.7991f);
			func_537(-1462.4808f, -931.2933f, 9.1294f, 296.5982f);
			func_537(-1460.6387f, -932.9284f, 9.1315f, 296.5982f);
			func_537(-1454.9226f, -931.1019f, 9.0872f, 237.1973f);
			func_537(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
	
		case 93:
			func_537(30.0784f, -1024.1604f, 28.4469f, 234.5994f);
			func_537(29.1695f, -1026.7191f, 28.4453f, 234.5994f);
			func_537(28.2538f, -1029.2955f, 28.4421f, 234.5994f);
			func_537(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_537(32.6932f, -1017.0634f, 28.4531f, 234.5994f);
			func_537(33.672f, -1014.3994f, 28.4552f, 234.5994f);
			func_537(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_537(39.4909f, -1015.0972f, 28.484f, 175.5986f);
			break;
	
		case 94:
			func_537(45.0033f, 2784.3918f, 56.8782f, 103.5999f);
			func_537(43.316f, 2785.9026f, 56.8782f, 103.5999f);
			func_537(41.6126f, 2787.3599f, 56.8782f, 103.5999f);
			func_537(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_537(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_537(33.7771f, 2790.3794f, 56.8781f, 208.7997f);
			func_537(30.7578f, 2786.8003f, 56.8781f, 208.7997f);
			func_537(29.3121f, 2785.0447f, 56.8745f, 208.7997f);
			break;
	
		case 95:
			func_537(-332.5679f, 6069.1445f, 30.2175f, 152.9999f);
			func_537(-334.2811f, 6070.7866f, 30.2212f, 152.9999f);
			func_537(-335.9948f, 6072.4536f, 30.2455f, 152.9999f);
			func_537(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_537(-339.3682f, 6075.9043f, 30.3074f, 152.9999f);
			func_537(-341.0913f, 6077.7285f, 30.3114f, 152.9999f);
			func_537(-342.9239f, 6079.5225f, 30.3122f, 152.9999f);
			func_537(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
	
		case 96:
			func_537(1738.4215f, 3716.7786f, 33.0787f, 6.9999f);
			func_537(1736.2074f, 3715.9885f, 33.094f, 6.9999f);
			func_537(1748.4423f, 3714.1697f, 33.0889f, 39.399f);
			func_537(1750.4752f, 3715.007f, 33.1067f, 39.399f);
			func_537(1747.1798f, 3721.1023f, 33.007f, 95.199f);
			func_537(1746.4128f, 3723.2554f, 32.9738f, 95.199f);
			func_537(1740.67f, 3717.6128f, 33.0616f, 8.199f);
			func_537(1733.937f, 3715.0796f, 33.1236f, 8.199f);
			break;
	
		case 97:
			func_537(947.9371f, -1452.7367f, 30.143f, 331.5991f);
			func_537(950.2141f, -1452.8257f, 30.1364f, 331.5991f);
			func_537(952.4588f, -1452.8821f, 30.129f, 331.5991f);
			func_537(954.6608f, -1452.8694f, 30.1303f, 331.5991f);
			func_537(935.1006f, -1452.7012f, 30.1907f, 316.999f);
			func_537(932.5459f, -1452.5793f, 30.2194f, 316.999f);
			func_537(929.9319f, -1452.5665f, 30.2647f, 316.999f);
			func_537(927.4857f, -1452.4463f, 30.3167f, 316.999f);
			break;
	
		case 98:
			func_537(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_537(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_537(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_537(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_537(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_537(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_537(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_537(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
	
		case 99:
			func_537(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_537(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_537(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_537(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_537(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_537(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_537(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_537(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
	
		case 100:
			func_537(2478.5203f, 4082.1372f, 36.8208f, 227.5999f);
			func_537(2477.5574f, 4079.9456f, 36.8014f, 227.5999f);
			func_537(2465.1226f, 4081.35f, 37.0655f, 167.4f);
			func_537(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_537(2467.7002f, 4080.332f, 37.0649f, 167.4f);
			func_537(2469.5867f, 4079.5378f, 37.061f, 167.4f);
			func_537(2481.3542f, 4088.5535f, 36.9131f, 209.4f);
			func_537(2482.4421f, 4091.0234f, 36.9472f, 209.4f);
			break;
	
		case 101:
			func_537(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_537(-29.4917f, 6404.5776f, 30.4903f, 291.1999f);
			func_537(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_537(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_537(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_537(-23.7283f, 6412.8384f, 30.4904f, 176.5999f);
			func_537(-20.5405f, 6409.8047f, 30.4905f, 176.5999f);
			func_537(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
	
		case 102:
			func_537(-1138.0574f, -1572.1804f, 3.4157f, 125.9996f);
			func_537(-1142.0298f, -1574.9825f, 3.4133f, 125.9996f);
			func_537(-1145.05f, -1592.8104f, 3.3855f, 306.5991f);
			func_537(-1139.9331f, -1589.211f, 3.3978f, 306.5991f);
			func_537(-1124.2949f, -1578.7758f, 3.3854f, 306.5991f);
			func_537(-1119.9537f, -1575.5509f, 3.3852f, 306.5991f);
			func_537(-1124.9417f, -1562.9855f, 3.2916f, 168.9988f);
			func_537(-1127.0386f, -1564.395f, 3.292f, 168.9988f);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_572() // Position - 0x23FE4 (147428)
{
	return Global_2684721.f_17;
}

int func_573(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x23FF2 (147442)
{
	int i;

	if (SYSTEM::VDIST(Global_2635516.f_3214, vParam0) < Global_2635516.f_3222)
		return Global_2635516.f_3217;

	Global_2635516.f_3214 = { vParam0 };

	for (i = 0; i < 32; i = i + 1)
	{
		if (vParam0.f_2 <= 0f)
			vParam0.f_2 = (Global_2643194[i /*7*/].f_2 + Global_2643194[i /*7*/].f_3.f_2) * 0.5f;
	
		if (func_507(vParam0, &Global_2643194[i /*7*/]))
		{
			Global_2635516.f_3217 = i;
			return i;
		}
	}

	Global_2635516.f_3217 = -1;
	return -1;
}

BOOL func_574() // Position - 0x24095 (147605)
{
	if (IS_BIT_SET(Global_4718592.f_13, 0) && !Global_2685663.f_6509)
		return false;

	return false;
}

BOOL func_575(float fParam0, var uParam1, var uParam2, BOOL bParam3, int iParam4) // Position - 0x240BD (147645)
{
	int i;
	int num;
	float num2;
	int num3;

	num3 = 0;

	for (i = 83; i <= 84 + 1; i = i + 1)
	{
		if (bParam3)
			if (func_541(i))
				num = iParam4;
			else
				num = 0f;
		else
			num = iParam4;
	
		num2 = SYSTEM::VDIST(fParam0, fParam0.f_1, 0f, Global_1944438.f_762[i /*3*/], Global_1944438.f_762[i /*3*/].f_1, 0f);
	
		if (num2 < num)
			num3 = num3 + 1;
	}

	if (num3 > 0)
		return true;

	return false;
}

void func_576() // Position - 0x2413F (147775)
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		Global_2635516.f_3038[i /*3*/] = { 0f, 0f, 0f };
	}

	return;
}

BOOL func_577(var uParam0, BOOL bParam1) // Position - 0x2416A (147818)
{
	int i;
	var unk;

	unk = { *uParam0 };

	for (i = 0; i < 2; i = i + 1)
	{
		if (unk.f_2 <= 0f)
			unk.f_2 = (Global_2643150[i /*7*/].f_2 + Global_2643150[i /*7*/].f_3.f_2) * 0.5f;
	
		if (func_507(unk, &Global_2643150[i /*7*/]))
		{
			if (bParam1)
			{
				func_518(&unk, Global_2643150[i /*7*/], Global_2643150[i /*7*/].f_3, Global_2643150[i /*7*/].f_6, 1036831949, false);
				*uParam0 = { unk };
			}
		
			return true;
		}
	}

	return false;
}

BOOL func_578(var uParam0, var uParam1, var uParam2) // Position - 0x24207 (147975)
{
	int num;
	var unk;

	if (!Global_2635516.f_516 && !Global_2635516.f_517)
	{
		if (!Global_2635516.f_45.f_318)
		{
			if (!func_582(PLAYER::PLAYER_ID(), true))
				return true;
		
			if (!func_581(uParam0, 1008981770))
			{
				if (!func_524(&uParam0, false, false, false, true))
					return true;
				else if (func_524(&uParam0, false, true, false, true))
					return true;
			}
			else
			{
				num = func_580(uParam0, 1008981770);
			
				if (num > -1)
				{
					unk = { func_579(&Global_2635516.f_45[num /*12*/]) };
				
					if (!func_524(&unk, false, false, false, true))
						if (!func_524(&uParam0, false, false, false, true))
							return true;
				}
			}
		}
	}

	return false;
}

Vector3 func_579(var uParam0) // Position - 0x242C7 (148167)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
	
		case 1:
		case 2:
			return (*uParam0 + uParam0->f_3) * { 0.5f, 0.5f, 0.5f };
	}

	return *uParam0;
}

int func_580(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x24310 (148240)
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (Global_2635516.f_45[i /*12*/].f_9)
			if (func_511(uParam0, &Global_2635516.f_45[i /*12*/], iParam3, false, false))
				return i;
	}

	return -1;
}

BOOL func_581(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x24358 (148312)
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (Global_2635516.f_45[i /*12*/].f_9)
			if (func_511(uParam0, &Global_2635516.f_45[i /*12*/], iParam3, false, 0))
				return true;
	}

	return false;
}

BOOL func_582(Player plParam0, BOOL bParam1) // Position - 0x2439F (148383)
{
	if (func_584() != 0)
		return func_583(plParam0) != 0;

	return func_243(plParam0, bParam1, false);
}

int func_583(Player plParam0) // Position - 0x243C6 (148422)
{
	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return Global_2657994[plParam0 /*467*/].f_1;

	return 0;
}

int func_584() // Position - 0x243E8 (148456)
{
	return Global_33105;
}

int func_585(BOOL bParam0) // Position - 0x243F3 (148467)
{
	if (CAM::IS_SCREEN_FADED_OUT())
		return 10000;

	if (bParam0)
		return 5000;

	return 1000;
}

void func_586() // Position - 0x24416 (148502)
{
	int i;
	var unk;

	for (i = 0; i < 101; i = i + 1)
	{
		Global_2635516.f_2056[i /*4*/] = { unk };
	}

	Global_2635516.f_2055 = 0;
	return;
}

void func_587() // Position - 0x2444A (148554)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2635516.f_692[i]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635516.f_692[i])
			{
				if (!(Global_2635516.f_688[i] == -1))
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635516.f_688[i]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2635516.f_688[i]);
						Global_2635516.f_688[i] = -1;
					}
					else
					{
						Global_2635516.f_688[i] = -1;
					}
				}
			}
		}
		else if (!(Global_2635516.f_688[i] == -1))
		{
			Global_2635516.f_688[i] = -1;
		}
	}

	return;
}

BOOL func_588() // Position - 0x244F6 (148726)
{
	if (Global_2635516.f_681 == MISC::GET_FRAME_COUNT())
		return true;

	if (!IS_BIT_SET(Global_2638771, 0) && Global_2635516.f_681 == MISC::GET_FRAME_COUNT() - 1)
		return true;

	return false;
}

BOOL func_589() // Position - 0x24532 (148786)
{
	if (!(Global_2635516.f_607 == 0) && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_612) < func_585(false))
		return true;

	return false;
}

BOOL func_590() // Position - 0x24566 (148838)
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		if (!(STREAMING::GET_PLAYER_SWITCH_STATE() > 7) && !(STREAMING::GET_PLAYER_SWITCH_STATE() == 5))
			return false;

	if (Global_2635516.f_518 == MISC::GET_FRAME_COUNT())
		return false;

	if (!func_102(PLAYER::PLAYER_ID()) && !func_377(false))
		return false;

	return true;
}

void func_591(int iParam0) // Position - 0x245BD (148925)
{
	func_586();

	switch (iParam0)
	{
		case 0:
			func_537(func_167(iParam0), 148.7996f);
			func_537(-1053.594f, -2541.3635f, 19.0804f, 149.9996f);
			func_537(-1067.8008f, -2565.9033f, 19.0786f, 149.7995f);
			break;
	
		case 1:
			func_537(func_167(iParam0), 319.5993f);
			func_537(-1633.6018f, -982.0679f, 12.0174f, 140.1986f);
			func_537(-1621.2946f, -967.3729f, 12.0176f, 140.1985f);
			break;
	
		case 2:
			func_537(func_167(iParam0), 254.1978f);
			func_537(-398.3749f, 1174.289f, 324.6416f, 279.9978f);
			func_537(-422.421f, 1181.459f, 324.6416f, 224.7975f);
			break;
	
		case 3:
			func_537(func_167(iParam0), 179.7976f);
			func_537(827.0105f, -2963.5293f, 4.9008f, 179.7976f);
			func_537(827.0532f, -2992.452f, 4.903f, 179.1978f);
			break;
	
		case 4:
			func_537(func_167(iParam0), 249.3976f);
			func_537(220.4448f, -852.2534f, 29.1105f, 249.9977f);
			func_537(238.0792f, -959.2108f, 28.2027f, 160.1973f);
			break;
	
		case 5:
			func_537(func_167(iParam0), 186.5969f);
			func_537(-3200.642f, 910.3599f, 13.3531f, 246.597f);
			func_537(-3224.6724f, 1084.2233f, 9.7721f, 165.9965f);
			break;
	
		case 6:
			func_537(func_167(iParam0), 228.996f);
			func_537(-1885.713f, 2019.1978f, 139.8078f, 165.3959f);
			func_537(-1902.7965f, 2041.4781f, 139.7425f, 160.9958f);
			break;
	
		case 7:
			func_537(func_167(iParam0), 120.1956f);
			func_537(1833.9629f, 3656.3696f, 33.2724f, 120.1956f);
			func_537(1847.3832f, 3751.398f, 32.1719f, 29.9954f);
			break;
	
		case 8:
			func_537(func_167(iParam0), 5.7954f);
			func_537(1696.2357f, 4729.6963f, 41.2005f, 20.1947f);
			func_537(1661.1301f, 4872.8027f, 41.043f, 187.7946f);
			break;
	
		case 9:
			func_537(func_167(iParam0), 134.9944f);
			func_537(-139.9687f, 6440.6377f, 30.3298f, 225.5942f);
			func_537(-229.6591f, 6312.9663f, 30.2937f, 135.3941f);
			break;
	}

	return;
}

BOOL func_592() // Position - 0x248A0 (149664)
{
	if (!(Global_2635516.f_677 == 0))
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_680) < func_585(SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635516.f_676))
			return true;

	return false;
}

void func_593(int iParam0, int iParam1) // Position - 0x248DC (149724)
{
	func_85(&uLocal_335[iLocal_2448 /*66*/].f_47.f_2[iParam0 /*2*/], iParam1);
	return;
}

BOOL func_594(int iParam0) // Position - 0x248FD (149757)
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || !NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		if (func_595(iParam0))
			return 1;

	return 0;
}

BOOL func_595(int iParam0) // Position - 0x24932 (149810)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}

	return false;
}

int func_596() // Position - 0x24954 (149844)
{
	return iLocal_83;
}

int func_597(int iParam0) // Position - 0x2495E (149854)
{
	return uLocal_335[iParam0 /*66*/];
}

BOOL func_598() // Position - 0x2496D (149869)
{
	return func_552() != -1;
}

BOOL func_599() // Position - 0x2497B (149883)
{
	return IS_BIT_SET(Global_1845270[PLAYER::PLAYER_ID() /*892*/].f_140, 18);
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x24993 (149907)
{
	if (Global_1575058 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_606())
		return true;

	if (Global_2699022)
		return true;

	if (func_605())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_603())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x24A17 (150039)
{
	switch (func_584())
	{
		case 0:
			return func_602();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

Hash func_602() // Position - 0x24A4A (150090)
{
	switch (Global_2699130)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

BOOL func_603() // Position - 0x24A6E (150126)
{
	return Global_2684721.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x24A7D (150141)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_605() // Position - 0x24A94 (150164)
{
	return Global_2696433;
}

BOOL func_606() // Position - 0x24AA0 (150176)
{
	return Global_2684721.f_695;
}

void func_607() // Position - 0x24AAF (150191)
{
	SYSTEM::WAIT(0);
	return;
}

void func_608() // Position - 0x24ABC (150204)
{
	func_609();
	return;
}

void func_609() // Position - 0x24AC8 (150216)
{
	uLocal_67.f_15 = func_253(15498, -1);
	return;
}

void func_610() // Position - 0x24ADC (150236)
{
	int i;
	int j;

	for (i = 0; i < 8; i = i + 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/]))
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[i /*26*/]))
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[i /*26*/], true);
	
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_83.f_2[i /*26*/].f_1))
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_83.f_2[i /*26*/].f_1))
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_83.f_2[i /*26*/].f_1, true);
	}

	if (CAM::DOES_CAM_EXIST(caLocal_3376))
		if (CAM::IS_CAM_ACTIVE(caLocal_3376))
			func_63();

	if (bLocal_2651)
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_2488))
	{
		OBJECT::DELETE_OBJECT(&obLocal_2488);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_2489);
	}

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /*Taxi*/))
		HUD::RELEASE_NAMED_RENDERTARGET("taxi" /*Taxi*/);

	func_68();
	func_450();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < 2)
	{
		for (j = 0; j < 8; j = j + 1)
		{
			func_5(j);
		}
	}

	func_611();
	return;
}

void func_611() // Position - 0x24BD7 (150487)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_612(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) // Position - 0x24BE3 (150499)
{
	func_621(32, uParam0);
	func_620(0, -1, false);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_83, 252, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_335, 2113, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);

	if (!func_619())
		return false;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_613(131, 3, IS_BIT_SET(Global_2739945.f_879, 4));
		func_12(&uLocal_2480, false, false);
		uLocal_335[iLocal_2448 /*66*/] = 0;
	}

	return true;
}

void func_613(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x24C4C (150604)
{
	int num;

	Global_9639 = echParam0;

	if (Global_120[echParam0 /*10*/].f_8 != 184)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (echParam1 == 4)
		{
			func_618(echParam0, 0, 1);
			func_618(echParam0, 1, 1);
			func_618(echParam0, 2, 1);
			func_617(echParam0, 0, 1);
			func_617(echParam0, 1, 1);
			func_617(echParam0, 2, 1);
		}
		else
		{
			if (func_616(echParam0, echParam1) == 1 && func_615(echParam0, echParam1) == 1)
				bParam2 = false;
		
			num = echParam1;
			func_618(echParam0, num, 1);
			func_617(echParam0, num, 1);
		
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
						func_614();
					}
				}
				else
				{
					Global_9563[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
					Global_9563[1 /*6*/].f_5 = echParam1;
					func_614();
				}
			}
			else
			{
				Global_9563[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
				Global_9563[1 /*6*/].f_5 = echParam1;
				func_614();
			}
		}
	}

	return;
}

void func_614() // Position - 0x24DCA (150986)
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

int func_615(eCharacter echParam0, int iParam1) // Position - 0x24E47 (151111)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[echParam0 /*29*/].f_24[iParam1];
}

int func_616(eCharacter echParam0, int iParam1) // Position - 0x24E71 (151153)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[echParam0 /*29*/].f_12[iParam1];
}

void func_617(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x24E9B (151195)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[echParam0 /*29*/].f_24[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114162.f_28055[echParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_618(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x24EE0 (151264)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[echParam0 /*29*/].f_12[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114162.f_28055[echParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

BOOL func_619() // Position - 0x24F25 (151333)
{
	var unk;

	func_12(&unk, true, false);

	while (true)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return false;
	
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
			return true;
	
		if (func_606())
			return false;
	
		if (_DOES_EVENT_OF_TYPE_EXIST(157))
			return false;
	
		if (func_11(&unk, 120000, true))
			return false;
	
		SYSTEM::WAIT(0);
	}

	return false;
}

int func_620(int iParam0, int iParam1, BOOL bParam2) // Position - 0x24F83 (151427)
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bParam2)
				func_611();
			else
				return 0;
	
		if (!func_377(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bParam2)
						func_611();
					else
						return 0;
			
				if (func_606())
					if (!bParam2)
						func_611();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bParam2)
						func_611();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
					func_611();
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
			if (!bParam2)
				func_611();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bParam2)
			func_611();
		else
			return 0;

	return 1;
}

void func_621(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x25099 (151705)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_611();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, uParam1.f_16);
	return;
}


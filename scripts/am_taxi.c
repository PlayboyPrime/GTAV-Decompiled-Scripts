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
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = -1;
	var uLocal_73 = -1;
	var uLocal_74 = -1;
	var uLocal_75 = -1;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
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
	var uLocal_98 = -1;
	var uLocal_99 = -1;
	var uLocal_100 = -1;
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 8;
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
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = -1;
	var uLocal_125 = -1;
	var uLocal_126 = -1;
	var uLocal_127 = -1;
	var uLocal_128 = 0;
	var uLocal_129 = 8;
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
	var uLocal_150 = -1;
	var uLocal_151 = -1;
	var uLocal_152 = -1;
	var uLocal_153 = -1;
	var uLocal_154 = 0;
	var uLocal_155 = 8;
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
	var uLocal_176 = -1;
	var uLocal_177 = -1;
	var uLocal_178 = -1;
	var uLocal_179 = -1;
	var uLocal_180 = 0;
	var uLocal_181 = 8;
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
	var uLocal_202 = -1;
	var uLocal_203 = -1;
	var uLocal_204 = -1;
	var uLocal_205 = -1;
	var uLocal_206 = 0;
	var uLocal_207 = 8;
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
	var uLocal_228 = -1;
	var uLocal_229 = -1;
	var uLocal_230 = -1;
	var uLocal_231 = -1;
	var uLocal_232 = 0;
	var uLocal_233 = 8;
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
	var uLocal_254 = -1;
	var uLocal_255 = -1;
	var uLocal_256 = -1;
	var uLocal_257 = -1;
	var uLocal_258 = 0;
	var uLocal_259 = 8;
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
	var uLocal_286 = 32;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = -1;
	var uLocal_290 = 0;
	var uLocal_291 = -1;
	var uLocal_292 = -1;
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
	var uLocal_310 = -1;
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
	var uLocal_336 = -1;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = -1;
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
	var uLocal_357 = -1;
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
	var uLocal_383 = -1;
	var uLocal_384 = 0;
	var uLocal_385 = -1;
	var uLocal_386 = -1;
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
	var uLocal_404 = -1;
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
	var uLocal_430 = -1;
	var uLocal_431 = 0;
	var uLocal_432 = -1;
	var uLocal_433 = -1;
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
	var uLocal_451 = -1;
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
	var uLocal_477 = -1;
	var uLocal_478 = 0;
	var uLocal_479 = -1;
	var uLocal_480 = -1;
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
	var uLocal_498 = -1;
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
	var uLocal_524 = -1;
	var uLocal_525 = 0;
	var uLocal_526 = -1;
	var uLocal_527 = -1;
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
	var uLocal_545 = -1;
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
	var uLocal_571 = -1;
	var uLocal_572 = 0;
	var uLocal_573 = -1;
	var uLocal_574 = -1;
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
	var uLocal_592 = -1;
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
	var uLocal_618 = -1;
	var uLocal_619 = 0;
	var uLocal_620 = -1;
	var uLocal_621 = -1;
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
	var uLocal_639 = -1;
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
	var uLocal_665 = -1;
	var uLocal_666 = 0;
	var uLocal_667 = -1;
	var uLocal_668 = -1;
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
	var uLocal_686 = -1;
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
	var uLocal_712 = -1;
	var uLocal_713 = 0;
	var uLocal_714 = -1;
	var uLocal_715 = -1;
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
	var uLocal_733 = -1;
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
	var uLocal_759 = -1;
	var uLocal_760 = 0;
	var uLocal_761 = -1;
	var uLocal_762 = -1;
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
	var uLocal_806 = -1;
	var uLocal_807 = 0;
	var uLocal_808 = -1;
	var uLocal_809 = -1;
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
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = -1;
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
	var uLocal_853 = -1;
	var uLocal_854 = 0;
	var uLocal_855 = -1;
	var uLocal_856 = -1;
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
	var uLocal_874 = -1;
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
	var uLocal_902 = -1;
	var uLocal_903 = -1;
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
	var uLocal_921 = -1;
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
	var uLocal_947 = -1;
	var uLocal_948 = 0;
	var uLocal_949 = -1;
	var uLocal_950 = -1;
	var uLocal_951 = 0;
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
	var uLocal_968 = -1;
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
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = -1;
	var uLocal_995 = 0;
	var uLocal_996 = -1;
	var uLocal_997 = -1;
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
	var uLocal_1014 = 0;
	var uLocal_1015 = -1;
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
	var uLocal_1041 = -1;
	var uLocal_1042 = 0;
	var uLocal_1043 = -1;
	var uLocal_1044 = -1;
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
	var uLocal_1062 = -1;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
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
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = -1;
	var uLocal_1089 = 0;
	var uLocal_1090 = -1;
	var uLocal_1091 = -1;
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
	var uLocal_1109 = -1;
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
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = -1;
	var uLocal_1136 = 0;
	var uLocal_1137 = -1;
	var uLocal_1138 = -1;
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
	var uLocal_1156 = -1;
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
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = -1;
	var uLocal_1183 = 0;
	var uLocal_1184 = -1;
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
	var uLocal_1203 = -1;
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
	var uLocal_1229 = -1;
	var uLocal_1230 = 0;
	var uLocal_1231 = -1;
	var uLocal_1232 = -1;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = -1;
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
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = -1;
	var uLocal_1277 = 0;
	var uLocal_1278 = -1;
	var uLocal_1279 = -1;
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
	var uLocal_1297 = -1;
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
	var uLocal_1323 = -1;
	var uLocal_1324 = 0;
	var uLocal_1325 = -1;
	var uLocal_1326 = -1;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
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
	var uLocal_1344 = -1;
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
	var uLocal_1370 = -1;
	var uLocal_1371 = 0;
	var uLocal_1372 = -1;
	var uLocal_1373 = -1;
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
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = -1;
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
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = -1;
	var uLocal_1418 = 0;
	var uLocal_1419 = -1;
	var uLocal_1420 = -1;
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
	var uLocal_1438 = -1;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
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
	var uLocal_1464 = -1;
	var uLocal_1465 = 0;
	var uLocal_1466 = -1;
	var uLocal_1467 = -1;
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
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = -1;
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
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = -1;
	var uLocal_1512 = 0;
	var uLocal_1513 = -1;
	var uLocal_1514 = -1;
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
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = -1;
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
	var uLocal_1557 = 0;
	var uLocal_1558 = -1;
	var uLocal_1559 = 0;
	var uLocal_1560 = -1;
	var uLocal_1561 = -1;
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
	var uLocal_1579 = -1;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
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
	var uLocal_1605 = -1;
	var uLocal_1606 = 0;
	var uLocal_1607 = -1;
	var uLocal_1608 = -1;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
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
	var uLocal_1626 = -1;
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
	var uLocal_1641 = 0;
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
	var uLocal_1652 = -1;
	var uLocal_1653 = 0;
	var uLocal_1654 = -1;
	var uLocal_1655 = -1;
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
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = -1;
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
	var uLocal_1698 = 0;
	var uLocal_1699 = -1;
	var uLocal_1700 = 0;
	var uLocal_1701 = -1;
	var uLocal_1702 = -1;
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
	var uLocal_1720 = -1;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
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
	var uLocal_1745 = 0;
	var uLocal_1746 = -1;
	var uLocal_1747 = 0;
	var uLocal_1748 = -1;
	var uLocal_1749 = -1;
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
	var uLocal_1767 = -1;
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
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	int iLocal_1791 = 0;
	int iLocal_1792 = 0;
	var uLocal_1793 = 8;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 8;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 8;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	int iLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	float fLocal_1825 = 0f;
	int iLocal_1826 = 0;
	int iLocal_1827 = 0;
	int iLocal_1828 = 0;
	int iLocal_1829 = 0;
	BOOL bLocal_1830 = 0;
	Object obLocal_1831 = 0;
	Hash hLocal_1832 = 0;
	int iLocal_1833 = 0;
	float fLocal_1834 = 0f;
	float fLocal_1835 = 0f;
	float fLocal_1836 = 0f;
	float fLocal_1837 = 0f;
	float fLocal_1838 = 0f;
	int iLocal_1839 = 0;
	int iLocal_1840 = 0;
	var uLocal_1841 = 50;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
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
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
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
	var uLocal_1943 = 0;
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
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	BOOL bLocal_1992 = 0;
	BOOL bLocal_1993 = 0;
	BOOL bLocal_1994 = 0;
	BOOL bLocal_1995 = 0;
	BOOL bLocal_1996 = 0;
	BOOL bLocal_1997 = 0;
	int iLocal_1998 = 0;
	int iLocal_1999 = 0;
	int iLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	float fLocal_2003 = 0f;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	int iLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 12;
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
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
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
	var uLocal_2075 = 0;
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
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
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
	var uLocal_2141 = 0;
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
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
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
	var uLocal_2207 = 0;
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
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
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
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
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
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
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
	var uLocal_2707 = 1065353216;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	int iLocal_2717 = 0;
	BOOL bLocal_2718 = 0;
	Cam caLocal_2719 = 0;
	int iLocal_2720 = 0;
	const char* sLocal_2721 = 0;
	int iLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	float fLocal_2732 = 0f;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	int iLocal_2736 = 0;
	int iLocal_2737 = 0;
	float fLocal_2738 = 0f;
	int iLocal_2739 = 0;
	var uLocal_2740 = 16;
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
	int iLocal_2905 = 0;
	int iLocal_2906 = 0;
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
	hLocal_1832 = -232645291;
	fLocal_1834 = 1f;
	fLocal_1835 = 0.4f * fLocal_1834;
	fLocal_1836 = 0.6f * fLocal_1834;
	fLocal_1837 = 0.201f;
	fLocal_1838 = 0.351f;
	iLocal_1839 = 1076369579;
	iLocal_1840 = 1076631591;
	bLocal_1997 = true;
	iLocal_1999 = iLocal_1998;
	fLocal_2003 = SYSTEM::TO_FLOAT(iLocal_1998);
	iLocal_2720 = 1;
	sLocal_2721 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X, true);
	iLocal_2722 = LOCALIZATION::GET_CURRENT_LANGUAGE();
	uLocal_2723 = { -0.01f, 0.6f, 0.24f };
	uLocal_2726 = { -5f, 0f, 0f };
	uLocal_2729 = { 0f, -0.25f, 0.55f };
	fLocal_2732 = 50f;
	uLocal_2733 = { -0.3f, 1f, 0.35f };
	fLocal_2738 = 99999f;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (!func_380(uScriptParam_0))
			func_378();

	while (true)
	{
		func_377();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
			func_378();
	
		iLocal_1791 = NETWORK::PARTICIPANT_ID_TO_INT();
	
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			if (func_368())
				if (NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() != NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID()))
					func_378();
			else
				func_378();
		else if (NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() != -1)
			func_378();
	
		if (func_366())
			func_378();
	
		switch (func_365(iLocal_1791))
		{
			case 0:
				uLocal_286[iLocal_1791 /*47*/] = 1;
			
				if (func_364() == 4)
					uLocal_286[iLocal_1791 /*47*/] = 3;
				break;
		
			case 1:
				if (func_364() == 1)
				{
					func_332();
					func_38();
				}
				else if (func_364() == 4)
				{
					uLocal_286[iLocal_1791 /*47*/] = 3;
				}
				break;
		
			case 3:
				func_36(&(iLocal_67.f_217));
			
				if (func_35(&(iLocal_67.f_217)))
					uLocal_286[iLocal_1791 /*47*/] = 4;
				break;
		
			case 2:
				uLocal_286[iLocal_1791 /*47*/] = 4;
				[[fallthrough]];
		
			case 4:
				func_378();
				break;
		}
	
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_364())
			{
				case 0:
					iLocal_67 = 1;
					break;
			
				case 1:
					func_4();
					func_3();
				
					if (func_1())
						iLocal_67 = 4;
					break;
			
				case 4:
					break;
			}
		}
	}

	return;
}

BOOL func_1() // Position - 0x2A3
{
	if (func_2())
		return true;

	return false;
}

BOOL func_2() // Position - 0x2B7
{
	return false;
}

void func_3() // Position - 0x2C0
{
	switch (iLocal_67.f_215)
	{
		case 0:
			iLocal_67.f_215 = 1;
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

void func_4() // Position - 0x2FD
{
	if (iLocal_2905 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		func_27();
		iLocal_2905 = iLocal_2905 + 1;
	}
	else
	{
		func_5();
		MISC::SET_BIT(&(iLocal_67.f_2[iLocal_2906 /*26*/].f_6), 0);
		MISC::SET_BIT(&(iLocal_67.f_2[iLocal_2906 /*26*/].f_6), 2);
		iLocal_67.f_212 = 0;
		iLocal_2906 = iLocal_2906 + 1;
	
		if (iLocal_2906 >= 8)
		{
			iLocal_2905 = 0;
			iLocal_2906 = 0;
		}
	}

	return;
}

void func_5() // Position - 0x35F
{
	int num;

	num = iLocal_2906;
	func_18(num);
	func_6(num);
	return;
}

void func_6(int iParam0) // Position - 0x378
{
	var entityCoords;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	if (iLocal_67.f_2[iParam0 /*26*/].f_7 != 11 && !IS_BIT_SET(iLocal_67.f_2[iParam0 /*26*/].f_6, 4))
	{
		if (IS_BIT_SET(iLocal_67.f_2[iParam0 /*26*/].f_6, 0))
		{
			func_17(iParam0, 11);
			func_16(iParam0, false);
		}
		else if (func_15(iLocal_67.f_2[iParam0 /*26*/].f_1) || !func_13(iLocal_67.f_2[iParam0 /*26*/]))
		{
			func_17(iParam0, 11);
			func_16(iParam0, false);
		}
		else if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false))
		{
			func_17(iParam0, 11);
			func_16(iParam0, false);
		}
	}

	if (!func_15(iLocal_67.f_2[iParam0 /*26*/].f_1) && func_13(iLocal_67.f_2[iParam0 /*26*/]))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), true) };
	
		switch (iLocal_67.f_2[iParam0 /*26*/].f_7)
		{
			case 0:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false, true) > 0)
					func_17(iParam0, 4);
				break;
		
			case 1:
				if (iLocal_67.f_2[iParam0 /*26*/].f_2 != -1)
					if (func_12(entityCoords, uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_26, 45f))
						if (!func_11(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_26, 0f, 0f, 0f, false))
							func_17(iParam0, 2);
					else if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_2)))
						if (_NETWORK_IS_PLAYER_VALID(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_2)), true, true))
							if (func_12(entityCoords, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_2))), true), 5f))
								func_17(iParam0, 2);
				else
					func_17(iParam0, 8);
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false, true) > 0)
					func_17(iParam0, 4);
				break;
		
			case 2:
				if (iLocal_67.f_2[iParam0 /*26*/].f_2 != -1)
					if (IS_BIT_SET(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_2, 21))
						if (!func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_PARK, true))
							if (!func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD, true))
								if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])))
									func_17(iParam0, 3);
						else if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_2)))
							if (_NETWORK_IS_PLAYER_VALID(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_2)), true, true))
								if (func_12(entityCoords, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_2))), true), 5f))
									if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])) || VEHICLE::IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])))
										func_17(iParam0, 3);
									else if (!func_12(entityCoords, uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_26, 10f))
										func_17(iParam0, 3);
				else
					func_17(iParam0, 8);
			
				if (IS_BIT_SET(iLocal_67.f_2[iParam0 /*26*/].f_6, 2))
					func_17(iParam0, 8);
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false, true) > 0)
					func_17(iParam0, 4);
				break;
		
			case 3:
				if (IS_BIT_SET(iLocal_67.f_2[iParam0 /*26*/].f_6, 2))
					func_17(iParam0, 8);
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false, true) > 0)
					func_17(iParam0, 4);
				break;
		
			case 4:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false, true) <= 0)
					func_17(iParam0, 8);
				else if (iLocal_67.f_2[iParam0 /*26*/].f_3 != -1)
					if (!func_11(iLocal_67.f_2[iParam0 /*26*/].f_8, 0f, 0f, 0f, false))
						func_17(iParam0, 5);
				break;
		
			case 5:
				if (iLocal_67.f_2[iParam0 /*26*/].f_3 != -1)
					if (!func_11(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_30, 0f, 0f, 0f, false))
						if (func_8(iParam0))
							if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])) || ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])) < 2f)
								func_17(iParam0, 6);
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false, true) <= 0)
					func_17(iParam0, 8);
				break;
		
			case 6:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false, true) <= 0)
					func_17(iParam0, 8);
				else
					func_7(iParam0, true);
				break;
		
			case 7:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false, true) <= 0)
					func_17(iParam0, 8);
				break;
		
			case 8:
				func_16(iParam0, false);
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false, true) > 0)
				{
					MISC::CLEAR_BIT(&(iLocal_67.f_2[iParam0 /*26*/].f_6), 3);
				
					if (iLocal_67.f_2[iParam0 /*26*/].f_3 != -1)
						MISC::CLEAR_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2), 20);
				
					func_17(iParam0, 4);
				}
				break;
		
			case 9:
			case 10:
				func_7(iParam0, false);
				break;
		
			case 11:
				func_16(iParam0, false);
				break;
		}
	}

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/]) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/].f_1))
	{
		if (IS_BIT_SET(iLocal_67.f_214, iParam0) && !IS_BIT_SET(iLocal_67.f_214, iParam0 + 8) && iLocal_67.f_2[iParam0 /*26*/].f_2 == -1)
		{
			if (iLocal_67.f_213 > 0)
			{
				iLocal_67.f_213 = iLocal_67.f_213 - 1;
				MISC::CLEAR_BIT(&(iLocal_67.f_214), iParam0);
				MISC::SET_BIT(&(iLocal_67.f_214), iParam0 + 8);
			}
		}
	
		if (iLocal_67.f_2[iParam0 /*26*/].f_3 != -1)
			iLocal_67.f_2[iParam0 /*26*/].f_3 = -1;
	
		if (iLocal_67.f_2[iParam0 /*26*/].f_4 != -1)
			iLocal_67.f_2[iParam0 /*26*/].f_4 = -1;
	}

	return;
}

void func_7(int iParam0, BOOL bParam1) // Position - 0x9B9
{
	int vehicleMaxNumberOfPassengers;
	int i;
	Ped pedInVehicleSeat;

	if (!func_15(iLocal_67.f_2[iParam0 /*26*/].f_1) && func_13(iLocal_67.f_2[iParam0 /*26*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[iParam0 /*26*/].f_1))
		{
			if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false, true) > 0)
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), -1, false) == NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1))
				{
					vehicleMaxNumberOfPassengers = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]));
					i = 0;
				
					for (i = 0; i < vehicleMaxNumberOfPassengers; i = i + 1)
					{
						if (i != -1)
						{
							pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), i, false);
						
							if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
								if (!PED::IS_PED_INJURED(pedInVehicleSeat))
									if (!func_9(pedInVehicleSeat, SCRIPT_TASK_LEAVE_ANY_VEHICLE, true) && !func_9(pedInVehicleSeat, SCRIPT_TASK_LEAVE_VEHICLE, true))
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

BOOL func_8(int iParam0) // Position - 0xABF
{
	if (iLocal_67.f_2[iParam0 /*26*/].f_3 != -1)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_ENT(iLocal_67.f_2[iParam0 /*26*/]), uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_30, 45f, 45f, 20f, false, true, 0) || IS_BIT_SET(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2, 20))
		{
			MISC::SET_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2), 20);
		
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
				return true;
		}
	}

	return false;
}

BOOL func_9(Ped pedParam0, eScriptTaskHash esthParam1, BOOL bParam2) // Position - 0xB64
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

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xBAA
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

BOOL func_11(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0xC0A
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_12(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0xC51
{
	return SYSTEM::VDIST2(vParam0, fParam3) <= fParam6 * fParam6;
}

BOOL func_13(int iParam0) // Position - 0xC6B
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
		return !func_14(NETWORK::NET_TO_VEH(iParam0));

	return false;
}

BOOL func_14(Vehicle veParam0) // Position - 0xC8B
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

BOOL func_15(int iParam0) // Position - 0xCC4
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));

	return true;
}

void func_16(int iParam0, BOOL bParam1) // Position - 0xCE3
{
	if (iLocal_67.f_2[iParam0 /*26*/].f_2 != -1 || !func_11(iLocal_67.f_2[iParam0 /*26*/].f_8, 0f, 0f, 0f, false) || bParam1)
	{
		if (iLocal_67.f_2[iParam0 /*26*/].f_2 != -1)
		{
			MISC::CLEAR_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_1), 0);
			MISC::CLEAR_BIT(&(iLocal_67.f_216), iLocal_67.f_2[iParam0 /*26*/].f_2);
			iLocal_67.f_2[iParam0 /*26*/].f_2 = -1;
			iLocal_67.f_211 = iLocal_67.f_211 - 1;
		}
	
		iLocal_67.f_2[iParam0 /*26*/].f_8 = { 0f, 0f, 0f };
		iLocal_67.f_2[iParam0 /*26*/].f_11 = 0f;
		iLocal_67.f_2[iParam0 /*26*/].f_22 = 0;
		iLocal_67.f_2[iParam0 /*26*/].f_19 = 0;
		MISC::CLEAR_BIT(&(iLocal_67.f_2[iParam0 /*26*/].f_6), 3);
		uLocal_1811[iParam0] = 0;
	}

	return;
}

void func_17(int iParam0, int iParam1) // Position - 0xDAF
{
	iLocal_67.f_2[iParam0 /*26*/].f_7 = iParam1;
	return;
}

void func_18(int iParam0) // Position - 0xDC3
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/]))
		if (iLocal_67.f_2[iParam0 /*26*/].f_2 != -1)
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_2)))
				if (!_IS_NULL_VECTOR(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_21))
					if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_21, 3f, 3f, 3f, 0))
						if (func_19(iParam0, uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_21, uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_24, false))
							func_17(iParam0, 1);

	if (func_13(iLocal_67.f_2[iParam0 /*26*/]))
		iLocal_67.f_212 = iLocal_67.f_212 + 1;

	if (iLocal_67.f_2[iParam0 /*26*/].f_2 != -1)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_2)))
		{
			MISC::CLEAR_BIT(&(iLocal_67.f_216), iLocal_67.f_2[iParam0 /*26*/].f_2);
			iLocal_67.f_2[iParam0 /*26*/].f_2 = -1;
			iLocal_67.f_211 = iLocal_67.f_211 - 1;
		}
	}

	if (iLocal_67.f_2[iParam0 /*26*/].f_3 != -1)
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_3)))
			iLocal_67.f_2[iParam0 /*26*/].f_3 = -1;

	return;
}

BOOL func_19(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5) // Position - 0xF08
{
	if (func_25(Global_2738935.f_869) && func_25(Global_2738935.f_870))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/]))
		{
			if (func_22(&iLocal_67.f_2[iParam0 /*26*/], Global_2738935.f_869, uParam1, fParam4, true, true, true, false, true, true, false, false, false, false))
			{
				if (bParam5)
				{
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), fParam4);
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), 2f, 0f, 0f), true, false, false, true);
				}
			
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), 1084227584);
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), true);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), true);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[iParam0 /*26*/], true);
			}
		}
	
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/].f_1))
		{
			if (func_21(&(iLocal_67.f_2[iParam0 /*26*/].f_1), iLocal_67.f_2[iParam0 /*26*/], PED_TYPE_SPECIAL, Global_2738935.f_870, -1, true, true, true))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), 5f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2738935.f_869);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2738935.f_870);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 29, true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 251, true);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), false);
				PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), BF_AlwaysFight, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), BF_AlwaysFlee, true);
				PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 512, false);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SYSTEM::ROUND(200f * Global_262145.f_156), 0, 0);
				_CONVERSATION_INITIALIZE_ACTOR(&uLocal_2740, 8, NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "FM_TAXI", 0, 1);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[iParam0 /*26*/].f_1, true);
			}
		}
	}

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/]) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/].f_1))
		return false;

	MISC::CLEAR_BIT(&(iLocal_67.f_2[iParam0 /*26*/].f_6), 4);
	return true;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x1193
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

BOOL func_21(var uParam0, int iParam1, ePedType eptParam2, Hash hParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x122E
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

BOOL func_22(var uParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15) // Position - 0x12B6
{
	float radius;
	Vehicle vehicle;

	if (!STREAMING::IS_MODEL_VALID(hParam1))
		return false;

	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
		return false;

	radius = 1.5f;

	if (hParam1 == -32878452)
		radius = 20f;

	if (bParam11)
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, radius, false, false, false, false, false, false, 0);

	vehicle = VEHICLE::CREATE_VEHICLE(hParam1, vParam2, fParam5, bParam7, bParam6, bParam14);

	if (ENTITY::DOES_ENTITY_EXIST(vehicle))
	{
		*uParam0 = NETWORK::VEH_TO_NET(vehicle);
		Global_2738935.f_6799 = vehicle;
	
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
		
			func_23(vParam2, fParam5, hParam1, vehicle);
			return true;
		}
	}

	return false;
}

void func_23(Vector3 vParam0, var uParam1, var uParam2, float fParam3, Hash hParam4, Vehicle veParam5) // Position - 0x13BF
{
	int i;

	if (func_24(PLAYER::PLAYER_ID(), vParam0, hParam4) > -1)
	{
		if (Global_2635563.f_3230[1 /*6*/].f_5 == veParam5 && Global_2635563.f_3230[1 /*6*/].f_4 == hParam4 && SYSTEM::VDIST(Global_2635563.f_3230[1 /*6*/], vParam0) < 0.5f)
			return;
	
		for (i = 0; i < 2; i = i + 1)
		{
			if (i < 1)
				Global_2635563.f_3230[i /*6*/] = { Global_2635563.f_3230[i + 1 /*6*/] };
		}
	
		Global_2635563.f_3230[1 /*6*/] = { vParam0 };
		Global_2635563.f_3230[1 /*6*/].f_3 = fParam3;
		Global_2635563.f_3230[1 /*6*/].f_4 = hParam4;
		Global_2635563.f_3230[1 /*6*/].f_5 = veParam5;
	}

	return;
}

int func_24(Player plParam0, var uParam1, var uParam2, var uParam3, Hash hParam4) // Position - 0x1492
{
	Player player;
	int i;
	Vector3 vector;

	player = plParam0;

	if (player > -1)
	{
		for (i = 0; i < 2; i = i + 1)
		{
			if (Global_2648938.f_461[player /*11*/][i /*5*/].f_4 == hParam4)
			{
				vector = { uParam1 };
			
				if (MISC::ABSF(Global_2648938.f_461[player /*11*/][i /*5*/].f_2 - vector.f_2) < 2f)
					vector.f_2 = Global_2648938.f_461[player /*11*/][i /*5*/].f_2;
			
				if (SYSTEM::VDIST(Global_2648938.f_461[player /*11*/][i /*5*/], vector) < 0.5f)
					return i;
			}
		}
	}

	return -1;
}

BOOL func_25(Hash hParam0) // Position - 0x1530
{
	if (hParam0 == 0)
		return true;

	STREAMING::REQUEST_MODEL(hParam0);
	return STREAMING::HAS_MODEL_LOADED(hParam0);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x154E
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_27() // Position - 0x1578
{
	int value;
	Player playerIndex;
	Ped playerPed;
	int i;

	value = iLocal_2905;

	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(value)))
	{
		playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(value));
		playerPed = PLAYER::GET_PLAYER_PED(playerIndex);
	
		if (!_NETWORK_IS_PLAYER_VALID(playerIndex, true, true))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				if (iLocal_67.f_2[i /*26*/].f_2 == value)
					func_16(i, false);
			
				if (iLocal_67.f_2[i /*26*/].f_3 == value)
				{
					func_34(i);
					iLocal_67.f_2[i /*26*/].f_3 = -1;
				
					if (_STOPWATCH_IS_INITIALIZED(&uLocal_1823))
						_STOPWATCH_DESTROY(&uLocal_1823);
				}
			}
		}
		else
		{
			if (!IS_BIT_SET(iLocal_67.f_216, value) && IS_BIT_SET(uLocal_286[value /*47*/].f_1, 0))
			{
				if (func_31())
				{
					func_30(value);
					MISC::SET_BIT(&(iLocal_67.f_216), value);
				}
				else
				{
					MISC::CLEAR_BIT(&(uLocal_286[value /*47*/].f_1), 0);
				}
			}
		
			for (i = 0; i < 8; i = i + 1)
			{
				if (IS_BIT_SET(uLocal_286[value /*47*/].f_4.f_2, 18))
				{
					if (iLocal_67.f_2[i /*26*/].f_2 != -1)
						func_16(i, false);
				
					MISC::CLEAR_BIT(&(uLocal_286[value /*47*/].f_4.f_2), 18);
				}
			
				if (IS_BIT_SET(uLocal_286[value /*47*/].f_4.f_3, i))
				{
					if (iLocal_67.f_2[i /*26*/].f_7 != 11)
					{
						if (iLocal_67.f_2[i /*26*/].f_7 != 9)
						{
							if (iLocal_67.f_2[i /*26*/].f_7 != 10)
							{
								iLocal_67.f_2[i /*26*/].f_4 = value;
								func_17(i, 9);
								func_16(i, true);
							}
						}
					}
				}
			
				if (!func_15(iLocal_67.f_2[i /*26*/].f_1) && func_13(iLocal_67.f_2[i /*26*/]))
				{
					if (iLocal_67.f_2[i /*26*/].f_3 == -1)
					{
						if (uLocal_286[value /*47*/].f_4.f_1 == i && iLocal_67.f_2[i /*26*/].f_7 == 8)
						{
							func_17(i, 3);
						
							if (iLocal_67.f_2[i /*26*/].f_2 == -1)
								iLocal_67.f_2[i /*26*/].f_2 = value;
						
							uLocal_286[value /*47*/].f_4.f_1 = -1;
						}
					
						if (IS_BIT_SET(uLocal_286[value /*47*/].f_3, 0 + i))
							if (iLocal_67.f_2[i /*26*/].f_7 == 8 || iLocal_67.f_2[i /*26*/].f_7 == 1 || iLocal_67.f_2[i /*26*/].f_7 == 2)
								func_17(i, 3);
					
						if (func_29(playerIndex, NETWORK::NET_TO_VEH(iLocal_67.f_2[i /*26*/])) && iLocal_67.f_2[i /*26*/].f_7 != 6 && iLocal_67.f_2[i /*26*/].f_7 != 9 && iLocal_67.f_2[i /*26*/].f_7 != 10 && iLocal_67.f_2[i /*26*/].f_7 != 11)
						{
							MISC::CLEAR_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 0);
							MISC::CLEAR_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 2);
						
							if (iLocal_67.f_2[i /*26*/].f_2 != -1)
							{
								MISC::CLEAR_BIT(&(iLocal_67.f_216), iLocal_67.f_2[i /*26*/].f_2);
								iLocal_67.f_2[i /*26*/].f_2 = -1;
								iLocal_67.f_211 = iLocal_67.f_211 - 1;
							}
						
							iLocal_67.f_2[i /*26*/].f_3 = value;
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(playerPed, NETWORK::NET_TO_VEH(iLocal_67.f_2[i /*26*/]), 120f, 120f, 120f, false, true, 0))
						{
							if (iLocal_67.f_2[i /*26*/].f_2 == -1)
								MISC::CLEAR_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 2);
							else if (iLocal_67.f_2[i /*26*/].f_2 == value)
								MISC::CLEAR_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 2);
						
							MISC::CLEAR_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 0);
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(playerPed, NETWORK::NET_TO_VEH(iLocal_67.f_2[i /*26*/]), 300f, 300f, 300f, false, true, 0))
						{
							MISC::CLEAR_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 0);
						}
					
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(playerIndex) > 0)
							if (iLocal_67.f_2[i /*26*/].f_2 == value)
								MISC::SET_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 2);
					}
					else if (iLocal_67.f_2[i /*26*/].f_3 == value)
					{
						if (!func_29(playerIndex, NETWORK::NET_TO_VEH(iLocal_67.f_2[i /*26*/])))
						{
							func_16(i, true);
							iLocal_67.f_2[i /*26*/].f_3 = -1;
						}
						else
						{
							if (iLocal_67.f_2[i /*26*/].f_7 == 5 || iLocal_67.f_2[i /*26*/].f_7 == 7)
							{
								if (!IS_BIT_SET(iLocal_67.f_2[i /*26*/].f_6, 3) && IS_BIT_SET(uLocal_286[value /*47*/].f_4.f_2, 3))
								{
									MISC::SET_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 3);
									MISC::CLEAR_BIT(&(uLocal_286[value /*47*/].f_4.f_2), 4);
									MISC::CLEAR_BIT(&(uLocal_286[value /*47*/].f_4.f_2), 5);
									func_17(i, 5);
								}
								else if (IS_BIT_SET(uLocal_286[value /*47*/].f_4.f_2, 4))
								{
									MISC::CLEAR_BIT(&(uLocal_286[value /*47*/].f_4.f_2), 4);
									func_17(i, 7);
								}
								else if (iLocal_67.f_2[i /*26*/].f_7 == 7)
								{
									if (IS_BIT_SET(uLocal_286[value /*47*/].f_4.f_2, 5))
									{
										MISC::CLEAR_BIT(&(uLocal_286[value /*47*/].f_4.f_2), 5);
										func_17(i, 5);
									}
								}
							}
						
							if (iLocal_67.f_2[i /*26*/].f_7 == 5 || iLocal_67.f_2[i /*26*/].f_7 == 7 || iLocal_67.f_2[i /*26*/].f_7 == 4)
							{
								if (iLocal_67.f_2[i /*26*/].f_19 != uLocal_286[value /*47*/].f_4.f_15)
								{
									iLocal_67.f_2[i /*26*/].f_8 = { uLocal_286[value /*47*/].f_4.f_5 };
									iLocal_67.f_2[i /*26*/].f_11 = uLocal_286[value /*47*/].f_4.f_14;
									iLocal_67.f_2[i /*26*/].f_19 = uLocal_286[value /*47*/].f_4.f_15;
									iLocal_67.f_2[i /*26*/].f_23 = { uLocal_286[value /*47*/].f_4.f_39 };
									func_17(i, 5);
									MISC::CLEAR_BIT(&(uLocal_286[value /*47*/].f_4.f_2), 20);
								}
							}
						}
					
						MISC::CLEAR_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 0);
						MISC::CLEAR_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 2);
					}
				
					if (uLocal_286[value /*47*/].f_4.f_19 == i && iLocal_67.f_2[i /*26*/].f_22 == 0)
					{
						if (uLocal_286[value /*47*/].f_4.f_18 != 0)
						{
							iLocal_67.f_2[i /*26*/].f_22 = uLocal_286[value /*47*/].f_4.f_18;
							uLocal_286[iLocal_1791 /*47*/].f_4.f_19 = -1;
							uLocal_286[value /*47*/].f_4.f_18 = 0;
						}
					}
					else if (IS_BIT_SET(uLocal_286[value /*47*/].f_4.f_2, 6))
					{
						iLocal_67.f_2[i /*26*/].f_22 = 0;
						uLocal_286[value /*47*/].f_4.f_19 = -1;
						MISC::CLEAR_BIT(&(uLocal_286[value /*47*/].f_4.f_2), 6);
					}
				}
				else if (IS_BIT_SET(uLocal_286[value /*47*/].f_1, 0) || iLocal_67.f_2[i /*26*/].f_2 == value)
				{
					MISC::CLEAR_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 0);
					MISC::CLEAR_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 2);
				}
				else
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/].f_1))
						func_28(&(iLocal_67.f_2[i /*26*/].f_1));
				
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/]))
						func_28(&iLocal_67.f_2[i /*26*/]);
				
					if (iLocal_67.f_2[i /*26*/].f_2 == -1)
						func_16(i, false);
				
					if (iLocal_67.f_2[i /*26*/].f_3 != -1)
					{
						func_16(i, true);
						iLocal_67.f_2[i /*26*/].f_3 = -1;
					}
				}
			}
		}
	}

	return;
}

void func_28(var uParam0) // Position - 0x1C97
{
	Entity entity;

	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		entity = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&entity);
	}

	return;
}

BOOL func_29(Player plParam0, Vehicle veParam1) // Position - 0x1CBB
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

void func_30(int iParam0) // Position - 0x1D2A
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (iLocal_67.f_2[i /*26*/].f_2 == -1 && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/]))
		{
			iLocal_67.f_2[i /*26*/].f_2 = iParam0;
			iLocal_67.f_211 = iLocal_67.f_211 + 1;
			iLocal_67.f_213 = iLocal_67.f_213 + 1;
			MISC::SET_BIT(&(iLocal_67.f_214), i);
			MISC::CLEAR_BIT(&(iLocal_67.f_214), i + 8);
			MISC::CLEAR_BIT(&(uLocal_286[iParam0 /*47*/].f_1), 0);
			MISC::SET_BIT(&(iLocal_67.f_2[i /*26*/].f_6), 4);
			return;
		}
	}

	return;
}

BOOL func_31() // Position - 0x1DBC
{
	if (iLocal_67.f_211 >= 8 || iLocal_67.f_212 >= 8)
		return false;

	return true;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x1DE0
{
	uParam0->f_1 = 0;
	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x1DED
{
	return uParam0->f_1;
}

void func_34(int iParam0) // Position - 0x1DF9
{
	int i;
	var unk;

	uLocal_286[iLocal_1791 /*47*/].f_4.f_4 = uLocal_1841[iLocal_1827 /*3*/];
	HUD::DOES_BLIP_EXIST(uLocal_286[iLocal_1791 /*47*/].f_4.f_4);

	for (i = 0; i < 50; i = i + 1)
	{
		uLocal_1841[i /*3*/] = { unk };
	}

	iLocal_1826 = 0;
	return;
}

BOOL func_35(var uParam0) // Position - 0x1E4C
{
	if (uParam0->f_1)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
			return true;

	return false;
}

void func_36(var uParam0) // Position - 0x1E75
{
	if (!uParam0->f_1)
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			_STOPWATCH_INITIALIZE(uParam0, false, false);

	return;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1E94
{
	if (pStopwatch->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

void func_38() // Position - 0x1ED9
{
	BOOL flag;
	int i;

	MISC::CLEAR_BIT(&(Global_2738935.f_868), 1);

	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
	{
		func_331();
		func_330();
	}

	func_309(iLocal_2739);
	func_225();
	func_200(iLocal_2739);
	func_199(iLocal_2739);
	func_197(iLocal_2739);

	if (iLocal_2736 != iLocal_2739)
	{
		func_200(iLocal_2736);
		func_199(iLocal_2736);
		func_197(iLocal_2736);
	}

	iLocal_2739 = iLocal_2739 + 1;

	if (iLocal_2739 == 8)
	{
		fLocal_2738 = 99999f;
		iLocal_2736 = iLocal_2737;
		iLocal_2739 = 0;
	}

	flag = _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true);
	func_45(iLocal_2736, flag);

	if (flag)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				if (iLocal_67.f_2[i /*26*/].f_3 == iLocal_1791)
					func_39(1, 1, true);
			}
		
			func_39(0, 0, false);
		}
	}
	else
	{
		if (iLocal_1791 != -1)
		{
			for (i = 0; i < 8; i = i + 1)
			{
				if (iLocal_67.f_2[i /*26*/].f_3 == iLocal_1791)
					func_39(1, 1, true);
			}
		}
	
		func_39(1, 1, false);
	}

	return;
}

void func_39(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1FF3
{
	int i;
	var unk;

	if (uLocal_286[iLocal_1791 /*47*/].f_4 != -1 || !func_11(uLocal_286[iLocal_1791 /*47*/].f_4.f_5, 0f, 0f, 0f, false) || iLocal_1999 != iLocal_1998 || uLocal_286[iLocal_1791 /*47*/].f_4.f_18 != 0 || uLocal_286[iLocal_1791 /*47*/].f_4.f_19 != -1 || IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 10) || IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 17) || bParam2)
	{
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 2);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 3);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 4);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 5);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 7);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 10);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 11);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 12);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 13);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 14);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 20);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 21);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 22);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 23);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 24);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 25);
		uLocal_286[iLocal_1791 /*47*/].f_4.f_5 = { 0f, 0f, 0f };
		uLocal_286[iLocal_1791 /*47*/].f_4.f_14 = 0f;
		uLocal_286[iLocal_1791 /*47*/].f_4.f_15 = 0;
		uLocal_286[iLocal_1791 /*47*/].f_4 = -1;
		uLocal_286[iLocal_1791 /*47*/].f_4.f_1 = -1;
		uLocal_286[iLocal_1791 /*47*/].f_4.f_34 = -1;
		uLocal_286[iLocal_1791 /*47*/].f_4.f_26 = { 0f, 0f, 0f };
		uLocal_286[iLocal_1791 /*47*/].f_4.f_29 = 0f;
		uLocal_286[iLocal_1791 /*47*/].f_4.f_30 = { 0f, 0f, 0f };
		uLocal_286[iLocal_1791 /*47*/].f_4.f_33 = 0f;
		uLocal_286[iLocal_1791 /*47*/].f_4.f_35 = -1;
		uLocal_286[iLocal_1791 /*47*/].f_4.f_36 = { 0f, 0f, 0f };
		uLocal_286[iLocal_1791 /*47*/].f_4.f_39 = { 0f, 0f, 0f };
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 26);
	
		for (i = 0; i < 50; i = i + 1)
		{
			uLocal_1841[i /*3*/] = { unk };
		}
	
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 27);
		iLocal_1827 = 0;
		iLocal_1829 = 0;
		bLocal_1830 = false;
		bLocal_1994 = false;
		Global_113022 = false;
		fLocal_2003 = SYSTEM::TO_FLOAT(iLocal_1998);
		iLocal_1999 = iLocal_1998;
		iLocal_2000 = iLocal_1998;
		_STOPWATCH_DESTROY(&uLocal_2001);
		uLocal_2004 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		uLocal_286[iLocal_1791 /*47*/].f_4.f_18 = 0;
		uLocal_286[iLocal_1791 /*47*/].f_4.f_19 = -1;
		func_42(true, -1);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		STREAMING::REMOVE_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
		uLocal_286[iLocal_1791 /*47*/].f_4.f_4 = 0;
		_STOPWATCH_DESTROY(&uLocal_1821);
	}

	if (iParam0 == 1)
	{
		uLocal_286[iLocal_1791 /*47*/].f_4.f_21 = { 0f, 0f, 0f };
		uLocal_286[iLocal_1791 /*47*/].f_4.f_24 = 0f;
		uLocal_286[iLocal_1791 /*47*/].f_4.f_26 = { 0f, 0f, 0f };
		uLocal_286[iLocal_1791 /*47*/].f_4.f_29 = 0f;
	}

	if (IS_BIT_SET(Global_2738935.f_868, 2))
		MISC::CLEAR_BIT(&(Global_2738935.f_868), 2);

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /*Taxi*/))
		HUD::RELEASE_NAMED_RENDERTARGET("taxi" /*Taxi*/);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_1831))
	{
		OBJECT::DELETE_OBJECT(&obLocal_1831);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_1832);
	}

	if (CAM::DOES_CAM_EXIST(caLocal_2719))
	{
		CAM::SET_CAM_ACTIVE(caLocal_2719, false);
		CAM::DESTROY_CAM(caLocal_2719, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_40();
	}

	if (bLocal_2718 == false)
		bLocal_2718 = true;

	if (iParam1 == 1 && uLocal_286[iLocal_1791 /*47*/].f_1 != 0)
		uLocal_286[iLocal_1791 /*47*/].f_1 = 0;

	return;
}

void func_40() // Position - 0x2404
{
	func_41(4, 0, -1);
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::SET_RADAR_ZOOM(0);
	CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2720);
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	return;
}

void func_41(int iParam0, BOOL bParam1, int iParam2) // Position - 0x242C
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
				Global_1668667.f_137[iParam2] = bParam1;
			break;
	
		default:
			if (bParam1)
				MISC::SET_BIT(&(Global_1668667.f_1046), iParam0);
			else
				MISC::CLEAR_BIT(&(Global_1668667.f_1046), iParam0);
			break;
	}

	return;
}

void func_42(BOOL bParam0, int iParam1) // Position - 0x247B
{
	int num;

	if (!func_44(&num, false, iParam1))
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
		func_43(&Global_23831.f_6263[num /*10*/]);
		Global_23831.f_6324[num] = 0;
	}
	else
	{
		Global_23831.f_6324[num] = 0;
	}

	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
	return;
}

void func_43(int* piParam0) // Position - 0x253E
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

BOOL func_44(var uParam0, BOOL bParam1, int iParam2) // Position - 0x256A
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

void func_45(int iParam0, BOOL bParam1) // Position - 0x2607
{
	if (bParam1)
	{
		if (!func_15(iLocal_67.f_2[iParam0 /*26*/].f_1) && func_13(iLocal_67.f_2[iParam0 /*26*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false))
			{
				func_188(iParam0);
				func_181(iParam0);
				func_51(iParam0);
			}
			else
			{
				func_46(iParam0);
			}
		}
		else
		{
			func_46(iParam0);
		}
	}
	else
	{
		func_46(iParam0);
	}

	return;
}

void func_46(int iParam0) // Position - 0x2686
{
	if (IS_BIT_SET(iLocal_1792, 0 + iParam0))
	{
		MISC::CLEAR_BIT(&iLocal_1792, 0 + iParam0);
	
		if (_STOPWATCH_IS_INITIALIZED(&uLocal_1823))
			_STOPWATCH_DESTROY(&uLocal_1823);
	
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TXM_H02" /*Press ~INPUT_ENTER~ to enter the taxi as a passenger.*/))
			HUD::CLEAR_HELP(true);
	}

	if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_3, 0 + iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			bLocal_1995 = false;
		}
	
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_3), 0 + iParam0);
	}

	_CONTEXT_REMOVE_HELP_TEXT(&uLocal_1802[iParam0]);

	if (uLocal_286[iLocal_1791 /*47*/].f_4 == iParam0)
		func_39(1, 1, false);

	func_47(iParam0);
	return;
}

void func_47(int iParam0) // Position - 0x2728
{
	if (HUD::DOES_BLIP_EXIST(uLocal_1793[iParam0]))
	{
		HUD::REMOVE_BLIP(&uLocal_1793[iParam0]);
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 12);
	}

	return;
}

void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x275B
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_49(*uParam0);

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

int func_49(int iParam0) // Position - 0x27B2
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

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x27ED
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_51(int iParam0) // Position - 0x2800
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false) && !PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_BEING_JACKED(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1)) && !IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_3, iParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
	
		if (func_180(iParam0) && STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
		{
			if (iLocal_67.f_2[iParam0 /*26*/].f_7 == 6)
			{
				if (CAM::DOES_CAM_EXIST(caLocal_2719))
				{
					CAM::SET_CAM_ACTIVE(caLocal_2719, false);
					CAM::DESTROY_CAM(caLocal_2719, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					func_40();
				}
			
				if (VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])))
					func_155(iParam0);
			}
			else
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || iLocal_67.f_2[iParam0 /*26*/].f_7 == 9 || iLocal_67.f_2[iParam0 /*26*/].f_7 == 10)
					func_7(iParam0, false);
			
				func_89(iParam0);
			}
		
			if (uLocal_286[iLocal_1791 /*47*/].f_4 != iParam0)
			{
				uLocal_286[iLocal_1791 /*47*/].f_4 = iParam0;
				MISC::SET_BIT(&(Global_2738935.f_868), 2);
			}
		
			func_82(iParam0);
			func_81(iParam0);
		}
	
		func_57(iParam0);
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(PLAYER_CONTROL);
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(CAMERA_CONTROL);
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(FRONTEND_CONTROL);
		func_56();
		func_55();
		PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), BF_CanDoDrivebys, false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_PREV_WEAPON, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
		func_54();
	
		if (iLocal_67.f_2[iParam0 /*26*/].f_3 == iLocal_1791)
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 376, true);
	
		if (func_53() || func_52(0))
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
	}
	else if (uLocal_286[iLocal_1791 /*47*/].f_4 == iParam0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				if (iLocal_67.f_2[iParam0 /*26*/].f_7 != 9 && iLocal_67.f_2[iParam0 /*26*/].f_7 != 10 && !IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_3, iParam0))
					func_155(iParam0);
			else
				MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_3), iParam0);
	
		func_39(1, 1, false);
		func_34(iParam0);
	
		if (_STOPWATCH_IS_INITIALIZED(&uLocal_1823))
			_STOPWATCH_DESTROY(&uLocal_1823);
	}

	return;
}

BOOL func_52(int iParam0) // Position - 0x2A66
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

BOOL func_53() // Position - 0x2ABD
{
	return Global_76498;
}

void func_54() // Position - 0x2AC9
{
	Global_2750950.f_258 = 1;
	return;
}

void func_55() // Position - 0x2AD9
{
	Global_2738935.f_4651 = 0;
	return;
}

void func_56() // Position - 0x2AE9
{
	MISC::SET_BIT(&Global_8801, 4);
	return;
}

void func_57(int iParam0) // Position - 0x2AF9
{
	const char* controlInstructionalButtonsString;

	if (func_71())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2007))
		{
			if (iLocal_67.f_2[iParam0 /*26*/].f_3 == iLocal_1791)
			{
				controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X, true);
			
				if (!MISC::ARE_STRINGS_EQUAL(sLocal_2721, controlInstructionalButtonsString))
				{
					sLocal_2721 = controlInstructionalButtonsString;
					iLocal_2717 = 1;
				}
			}
		
			if (iLocal_2717 == 1)
			{
				uLocal_2708 = { func_70() };
				func_68(&uLocal_2008);
				func_67(0, 75, "TXM_EXIT" /*Exit*/, &uLocal_2008, false, 365);
			
				if (iLocal_67.f_2[iParam0 /*26*/].f_3 == iLocal_1791)
				{
					if (iLocal_67.f_2[iParam0 /*26*/].f_7 != 6)
					{
						if (Global_113022 == true || bLocal_1994 == true)
							if (iLocal_1826 > 1)
								func_67(2, 218, "TXM_CDES" /*Change Destination*/, &uLocal_2008, false, 365);
					
						if (!bLocal_1994)
						{
							if (uLocal_286[iLocal_1791 /*47*/].f_4.f_15 != uLocal_1841[iLocal_1827 /*3*/])
								func_67(0, 176, "TXM_SLCT" /*Choose Destination*/, &uLocal_2008, false, 365);
						}
						else if (iLocal_67.f_2[iParam0 /*26*/].f_7 == 5)
						{
							if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 4))
								func_67(0, 177, "TXM_STOP" /*Stop*/, &uLocal_2008, false, 365);
						
							if (bLocal_1992)
								func_67(0, 176, "TXM_SLCT" /*Choose Destination*/, &uLocal_2008, false, 365);
						
							if (!IS_BIT_SET(iLocal_67.f_2[iParam0 /*26*/].f_6, 3) && !IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 3))
								if (iLocal_67.f_2[iParam0 /*26*/].f_7 == 5)
									func_67(0, 179, "TXM_HURY" /*Hurry*/, &uLocal_2008, false, 365);
						}
						else if (iLocal_67.f_2[iParam0 /*26*/].f_7 == 7)
						{
							if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 5))
								func_67(0, 177, "TXM_STRT" /*Start*/, &uLocal_2008, false, 365);
						
							if (bLocal_1992)
								func_67(0, 176, "TXM_SLCT" /*Choose Destination*/, &uLocal_2008, false, 365);
						}
					
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
							func_67(2, 199, "SPEC_PAUSE" /*Pause*/, &uLocal_2008, false, 365);
					}
				}
			
				iLocal_2717 = 0;
			}
		
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			func_66(1);
			func_65(1);
			func_58(&iLocal_2007, &uLocal_2708, &uLocal_2008, func_64(&uLocal_2008));
		}
		else
		{
			iLocal_2007 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
	}
	else
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_2007);
		iLocal_2717 = 1;
	}

	return;
}

void func_58(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x2D17
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
	
		func_63(uParam2);
	}

	if (Global_1577937 < 2)
		func_65(1);

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
						func_62(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(control, action, true));
					
						if (action2 < 365)
							func_62(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(control, action2, true));
					}
					else
					{
						control2 = uParam2->f_1[i /*57*/].f_54;
						controlGroup = uParam2->f_1[i /*57*/].f_55;
						func_62(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(control2, controlGroup, true));
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
						func_61(&(uParam2->f_1[i /*57*/].f_32));
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
					func_62(&uParam2->f_1[i /*57*/]);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[i /*57*/].f_16)))
						func_62(&(uParam2->f_1[i /*57*/].f_16));
				
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
						func_61(&(uParam2->f_1[i /*57*/].f_32));
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
		func_60(*uParam0, uParam1);

	func_59();
	return;
}

void func_59() // Position - 0x30B6
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	return;
}

void func_60(int iParam0, var uParam1) // Position - 0x30D4
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
	return;
}

void func_61(const char* sParam0) // Position - 0x30F3
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_62(const char* sParam0) // Position - 0x3105
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

void func_63(var uParam0) // Position - 0x3113
{
	Global_1979636 = 0;
	uParam0->f_692 = 0;
	return;
}

BOOL func_64(var uParam0) // Position - 0x3126
{
	return Global_1979636 || uParam0->f_692;
}

void func_65(int iParam0) // Position - 0x313D
{
	Global_1577937 = iParam0;
	return;
}

void func_66(int iParam0) // Position - 0x314B
{
	Global_1670224.f_1163 = iParam0;
	return;
}

void func_67(int iParam0, int iParam1, char* sParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x315C
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

void func_68(var uParam0) // Position - 0x31D9
{
	func_69(uParam0);
	uParam0->f_692 = 1;
	return;
}

void func_69(var uParam0) // Position - 0x31ED
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
	Global_1979636 = 0;
	return;
}

struct<9> func_70() // Position - 0x32D7
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

BOOL func_71() // Position - 0x331B
{
	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		return false;

	if (!func_76(1, 1))
		return false;

	if (func_75())
		return false;

	if (func_53())
		return false;

	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		return false;

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		return false;

	if (func_74(false))
		return false;

	if (!func_72())
		return false;

	return true;
}

BOOL func_72() // Position - 0x3392
{
	if (func_73() == 0)
		return true;

	return false;
}

int func_73() // Position - 0x33A7
{
	return Global_1574633.f_18;
}

BOOL func_74(BOOL bParam0) // Position - 0x33B5
{
	if (bParam0)
		return Global_23692.f_4 && Global_23692.f_104 == 4;

	return Global_23692.f_4;
}

BOOL func_75() // Position - 0x33DE
{
	return Global_101585.f_394 > 0;
}

BOOL func_76(int iParam0, int iParam1) // Position - 0x33EF
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (iParam0 == 1)
		if (func_80())
			return false;

	if (_IS_FMMC_ACTIVE())
		return false;

	if (iParam1 == 1)
		if (func_52(0))
			return false;

	if (func_78(8, -1))
		return false;

	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
		return false;

	if (func_77())
		return false;

	if (Global_61347)
		return false;

	if (Global_76498)
		return false;

	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		return false;

	if (Global_1574972)
		return false;

	if (Global_1836451)
		return false;

	return true;
}

BOOL func_77() // Position - 0x348B
{
	return Global_1575083;
}

BOOL func_78(int iParam0, int iParam1) // Position - 0x3497
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

BOOL _IS_FMMC_ACTIVE() // Position - 0x34CF
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_193 != 0;
}

BOOL func_80() // Position - 0x34E6
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

void func_81(int iParam0) // Position - 0x34FB
{
	if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 11))
	{
		if (uLocal_286[iLocal_1791 /*47*/].f_4.f_18 == 0)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				uLocal_286[iLocal_1791 /*47*/].f_4.f_18 = 26;
				uLocal_286[iLocal_1791 /*47*/].f_4.f_19 = iParam0;
				MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 11);
			}
		}
	}

	return;
}

void func_82(int iParam0) // Position - 0x355F
{
	BOOL flag;

	if (bLocal_1994)
	{
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_2001, 10000, false))
		{
			if (IS_BIT_SET(iLocal_67.f_2[iParam0 /*26*/].f_6, 3) || IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 3))
				fLocal_2003 = fLocal_2003 + (func_87() * 1.5f);
			else
				fLocal_2003 = fLocal_2003 + func_87();
		
			_STOPWATCH_DESTROY(&uLocal_2001);
			flag = true;
		}
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), uLocal_2004, false) > 50f)
		{
			if (IS_BIT_SET(iLocal_67.f_2[iParam0 /*26*/].f_6, 3) || IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 3))
				fLocal_2003 = fLocal_2003 + (func_87() * 1.5f);
			else
				fLocal_2003 = fLocal_2003 + func_87();
		
			_STOPWATCH_DESTROY(&uLocal_2001);
			uLocal_2004 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			flag = true;
		}
	
		iLocal_1999 = SYSTEM::CEIL(fLocal_2003);
	
		if (iLocal_1999 > 5000)
			iLocal_1999 = 5000;
	
		if (iLocal_1999 != iLocal_2000)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "SET_TAXI_PRICE");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1999);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_2000 = iLocal_1999;
			func_85("\\ntaxiService currentJourneyPrice = ");
			func_83(iLocal_1999);
			func_85("\\n");
		}
	
		if (flag)
			if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 27))
				MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 27);
	}

	return;
}

void func_83(int iParam0) // Position - 0x36BC
{
	func_84(iParam0);
	return;
}

void func_84(int iParam0) // Position - 0x36CA
{
	iParam0 > 0;
	return;
}

void func_85(char* sParam0) // Position - 0x36D8
{
	func_86(sParam0);
	return;
}

void func_86(char* sParam0) // Position - 0x36E6
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}

float func_87() // Position - 0x36F9
{
	return 1.2f;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x3706
{
	if (millis == -1)
		return true;

	_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >= millis)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >= millis)
		return true;

	return false;
}

void func_89(int iParam0) // Position - 0x3764
{
	if (iLocal_67.f_2[iParam0 /*26*/].f_3 == iLocal_1791)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[iParam0 /*26*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[iParam0 /*26*/].f_1))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[iParam0 /*26*/], false);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[iParam0 /*26*/].f_1, false);
			
				if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 10))
				{
					func_147(iParam0);
					func_114(iParam0);
				}
			
				if (func_113(iParam0))
				{
					func_90(iParam0);
					iLocal_2717 = 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[iParam0 /*26*/]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[iParam0 /*26*/], false);
				}
				else if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[iParam0 /*26*/]))
				{
				}
			
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[iParam0 /*26*/].f_1))
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[iParam0 /*26*/].f_1, false);
			}
		}
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	
		if (CAM::DOES_CAM_EXIST(caLocal_2719))
		{
			CAM::SET_CAM_ACTIVE(caLocal_2719, false);
			CAM::DESTROY_CAM(caLocal_2719, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			func_40();
		}
	}

	return;
}

void func_90(int iParam0) // Position - 0x3899
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

	if (!bLocal_1830)
	{
		num = func_112();
		iLocal_1829 = num;
		uLocal_1811[iParam0] = 0;
		bLocal_1830 = true;
	}

	if (func_98(iParam0))
	{
		i = 0;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "CLEAR_TAXI_DISPLAY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	
		for (i = 0; i < iLocal_1826; i = i + 1)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_1841[i /*3*/]))
			{
				bLocal_2718 = true;
				uLocal_1811[iParam0] = 0;
				return;
			}
		
			if (func_97(uLocal_1841[i /*3*/]) == INVALID)
			{
				bLocal_2718 = true;
				uLocal_1811[iParam0] = 0;
				return;
			}
		
			if (func_96(HUD::GET_BLIP_COORDS(uLocal_1841[i /*3*/]), 0f, 0f, 0f, 1056964608, false))
			{
				bLocal_2718 = true;
				uLocal_1811[iParam0] = 0;
				return;
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "ADD_TAXI_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(HUD::GET_BLIP_SPRITE(uLocal_1841[i /*3*/]));
		
			if (func_97(uLocal_1841[i /*3*/]) == BLIP_BIKER_CLUBHOUSE || func_97(uLocal_1841[i /*3*/]) == BLIP_OFFICE && HUD::GET_BLIP_HUD_COLOUR(uLocal_1841[i /*3*/]) == 0)
			{
				func_95(HUD::GET_BLIP_COLOUR(uLocal_1841[i /*3*/]), &value, &value2, &value3, &a);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value3);
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD::GET_BLIP_HUD_COLOUR(uLocal_1841[i /*3*/]), &value, &value2, &value3, &a);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value3);
			}
		
			num2 = func_93(uLocal_1841[i /*3*/]);
		
			if (num2 == -1)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(uLocal_1841[i /*3*/]);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_91(num2));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		
			if (HUD::GET_BLIP_INFO_ID_TYPE(uLocal_1841[i /*3*/]) == 2)
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uLocal_1841[i /*3*/]))))
					entityCoords = { ENTITY::GET_ENTITY_COORDS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uLocal_1841[i /*3*/])), true) };
			else if (HUD::GET_BLIP_INFO_ID_TYPE(uLocal_1841[i /*3*/]) == 1)
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uLocal_1841[i /*3*/]), false))
					entityCoords = { ENTITY::GET_ENTITY_COORDS(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uLocal_1841[i /*3*/]), true) };
			else
				entityCoords = { HUD::GET_BLIP_COORDS(uLocal_1841[i /*3*/]) };
		
			func_61(ZONE::GET_NAME_OF_ZONE(entityCoords));
		
			if (func_97(uLocal_1841[i /*3*/]) == BLIP_SAFEHOUSE || func_97(uLocal_1841[i /*3*/]) == BLIP_GARAGE || func_97(uLocal_1841[i /*3*/]) == BLIP_OFFICE || func_97(uLocal_1841[i /*3*/]) == BLIP_BIKER_CLUBHOUSE || func_97(uLocal_1841[i /*3*/]) == BLIP_PROPERTY_BUNKER || func_97(uLocal_1841[i /*3*/]) == BLIP_NHP_BASE || func_97(uLocal_1841[i /*3*/]) == BLIP_BAT_CLUB_PROPERTY || func_97(uLocal_1841[i /*3*/]) == BLIP_ARCADE)
			{
				for (j = 0; j < 131; j = j + 1)
				{
					num3 = j;
				
					if (func_11(entityCoords, Global_1312298[num3 /*1951*/].f_3[0 /*3*/], false))
					{
						j = 131;
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1" /*~a~*/);
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312298[num3 /*1951*/].f_16));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						func_61("");
					}
				}
			}
			else if (uLocal_1841[i /*3*/].f_2 == 0)
			{
				if (uLocal_1841[i /*3*/].f_1 != 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(uLocal_1841[i /*3*/].f_1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_61("");
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM2" /*~a~ and ~a~*/);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(uLocal_1841[i /*3*/].f_1);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(uLocal_1841[i /*3*/].f_2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		
			if (iLocal_2722 == 8 || iLocal_2722 == 9 || iLocal_2722 == 10 || iLocal_2722 == 12)
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			else
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		
			if (bLocal_1994)
				if (uLocal_286[iLocal_1791 /*47*/].f_4.f_15 == uLocal_1841[i /*3*/])
					iLocal_1827 = i;
			else if (HUD::DOES_BLIP_EXIST(uLocal_286[iLocal_1791 /*47*/].f_4.f_4))
				if (uLocal_286[iLocal_1791 /*47*/].f_4.f_4 == uLocal_1841[i /*3*/])
					iLocal_1827 = i;
		}
	
		if (bLocal_1994)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "SHOW_TAXI_DESTINATION");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "HIGHLIGHT_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1827);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "SET_TAXI_PRICE");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1999);
		
			if (iLocal_2722 == 8 || iLocal_2722 == 9 || iLocal_2722 == 10 || iLocal_2722 == 12)
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			else
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "SHOW_TAXI_DESTINATION");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "HIGHLIGHT_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1827);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (HUD::DOES_BLIP_EXIST(uLocal_1841[iLocal_1827 /*3*/]))
		{
			blipCoords = { HUD::GET_BLIP_COORDS(uLocal_1841[iLocal_1827 /*3*/]) };
		
			if (!_IS_NULL_VECTOR(blipCoords) && CAM::DOES_CAM_EXIST(caLocal_2719) && CAM::IS_CAM_ACTIVE(caLocal_2719))
				HUD::LOCK_MINIMAP_POSITION(blipCoords, blipCoords.f_1);
		}
	
		bLocal_2718 = false;
		MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 10);
	}

	return;
}

char* func_91(int iParam0) // Position - 0x3DD9
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
			return func_92(iParam0, 0, false);
	
		case 8:
			return func_92(iParam0, 0, false);
	
		case 9:
			return func_92(iParam0, 0, false);
	
		case 10:
			return func_92(iParam0, 0, false);
	
		case 11:
			return func_92(iParam0, 0, false);
	
		case 12:
			return func_92(iParam0, 0, false);
	
		case 13:
			return func_92(iParam0, 0, false);
	
		case 14:
			return func_92(iParam0, 0, false);
	
		case 15:
			return func_92(iParam0, 0, false);
	
		case 16:
			return func_92(iParam0, 0, false);
	
		case 17:
			return func_92(iParam0, 0, false);
	
		case 18:
			return func_92(iParam0, 0, false);
	
		case 19:
			return func_92(iParam0, 0, false);
	
		case 20:
			return func_92(iParam0, 0, false);
	
		case 21:
			return func_92(iParam0, 0, false);
	
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
			return func_92(iParam0, 0, false);
	
		case 40:
			return func_92(iParam0, 0, false);
	
		case 41:
			return func_92(iParam0, 0, false);
	
		case 42:
			return func_92(iParam0, 0, false);
	
		case 43:
			return func_92(iParam0, 0, false);
	
		case 44:
			return func_92(iParam0, 0, false);
	
		case 45:
			return func_92(iParam0, 0, false);
	
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
			return func_92(iParam0, 0, false);
	
		case 56:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 57:
			return func_92(iParam0, 0, false);
	
		case 58:
			return func_92(iParam0, 0, false);
	
		case 59:
			return "SB_AMU" /*Ammu-Nation*/;
	
		case 60:
			return "SB_AMU" /*Ammu-Nation*/;
	}

	return "SHOP_BLIP_INV";
}

char* func_92(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4221
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
			return "S_G_19";
	
		case 59:
			return "S_G_20";
	
		case 60:
			return "S_G_21";
	}

	return "SHOP_NAME_EMPTY";
}

int func_93(var uParam0) // Position - 0x47CD
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 61; i = i + 1)
	{
		num = i;
		num2 = func_94(num);
	
		if (Global_33328[num2 /*23*/].f_19 == uParam0)
			return num;
	}

	return -1;
}

int func_94(int iParam0) // Position - 0x4808
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
	
		default:
			break;
	}

	return 263;
}

void func_95(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4B82
{
	*uParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 24, 31);
	*uParam2 = MISC::GET_BITS_IN_RANGE(iParam0, 16, 23);
	*uParam3 = MISC::GET_BITS_IN_RANGE(iParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 7);
	return;
}

BOOL func_96(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7) // Position - 0x4BB9
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

eBlipSprite func_97(Blip blParam0) // Position - 0x4C34
{
	eBlipSprite blipSprite;

	if (HUD::DOES_BLIP_EXIST(blParam0))
		blipSprite = HUD::GET_BLIP_SPRITE(blParam0);

	return blipSprite;
}

BOOL func_98(int iParam0) // Position - 0x4C4F
{
	int i;
	int num;
	float blipCoords;

	switch (uLocal_1811[iParam0])
	{
		case 0:
			func_34(iParam0);
			break;
	
		case 1:
			func_99(iParam0, ebsLocal_65, false);
			func_99(iParam0, BLIP_LESTER_FAMILY, false);
			func_99(iParam0, BLIP_TREVOR_FAMILY, false);
			func_99(iParam0, BLIP_SIMEON_FAMILY, false);
			func_99(iParam0, ebsLocal_66, false);
			func_99(iParam0, BLIP_GANG_VEHICLE, false);
			func_99(iParam0, BLIP_GANG_BIKE, false);
			break;
	
		case 2:
			func_99(iParam0, BLIP_GUN_SHOP, true);
			break;
	
		case 3:
			func_99(iParam0, BLIP_SHOOTING_RANGE, true);
			func_99(iParam0, BLIP_DARTS, true);
			break;
	
		case 4:
			func_99(iParam0, BLIP_TENNIS, true);
			func_99(iParam0, BLIP_GOLF, true);
			break;
	
		case 5:
			func_99(iParam0, BLIP_ARM_WRESTLING, true);
			func_99(iParam0, BLIP_FLIGHT_SCHOOL, true);
			break;
	
		case 6:
			func_99(iParam0, BLIP_UGC_MISSION, true);
			break;
	
		case 7:
			func_99(iParam0, BLIP_DEATHMATCH, true);
			break;
	
		case 8:
			func_99(iParam0, BLIP_RACE, true);
			break;
	
		case 9:
			func_99(iParam0, BLIP_PROPERTY_TAKEOVER, true);
			break;
	
		case 10:
			func_99(iParam0, BLIP_HORDE, true);
			break;
	
		case 11:
			func_99(iParam0, BLIP_RAMPAGE, true);
			break;
	
		case 12:
			func_99(iParam0, BLIP_BASE_JUMP, true);
			break;
	
		case 13:
			func_99(iParam0, BLIP_CRIM_HOLDUPS, true);
			break;
	
		case 14:
			func_99(iParam0, BLIP_CINEMA, true);
			break;
	
		case 15:
			func_99(iParam0, BLIP_SAFEHOUSE, false);
			func_99(iParam0, BLIP_GARAGE, false);
			func_99(iParam0, BLIP_OFFICE, false);
			func_99(iParam0, BLIP_BIKER_CLUBHOUSE, false);
			func_99(iParam0, BLIP_WAREHOUSE, false);
			func_99(iParam0, BLIP_PRODUCTION_WEED, false);
			func_99(iParam0, BLIP_PRODUCTION_CRACK, false);
			func_99(iParam0, BLIP_PRODUCTION_FAKE_ID, false);
			func_99(iParam0, BLIP_PRODUCTION_METH, false);
			func_99(iParam0, BLIP_PROPERTY_BUNKER, false);
			func_99(iParam0, BLIP_NHP_BASE, false);
			func_99(iParam0, BLIP_PRODUCTION_MONEY, false);
			func_99(iParam0, BLIP_BAT_CLUB_PROPERTY, false);
			func_99(iParam0, BLIP_ARCADE, false);
			break;
	
		case 16:
			func_99(iParam0, BLIP_STRIP_CLUB, true);
			break;
	
		case 17:
			func_99(iParam0, BLIP_BARBER, true);
			break;
	
		case 18:
			func_99(iParam0, BLIP_CAR_MOD_SHOP, true);
			break;
	
		case 19:
			func_99(iParam0, BLIP_BENNYS, true);
			break;
	
		case 20:
			func_99(iParam0, BLIP_CLOTHES_STORE, true);
			break;
	
		case 21:
			func_99(iParam0, BLIP_TATTOO, true);
			break;
	
		case 22:
			break;
	
		case 23:
			iLocal_1829 = func_112();
		
			if (HUD::DOES_BLIP_EXIST(uLocal_1841[iLocal_1827 /*3*/]))
			{
				for (i = 0; i < 50; i = i + 1)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_1841[i /*3*/]))
					{
						if (uLocal_1841[iLocal_1827 /*3*/] == uLocal_1841[i /*3*/])
						{
							if (func_11(HUD::GET_BLIP_COORDS(uLocal_1841[iLocal_1827 /*3*/]), HUD::GET_BLIP_COORDS(uLocal_1841[i /*3*/]), false))
							{
								blipCoords = { HUD::GET_BLIP_COORDS(uLocal_1841[i /*3*/]) };
							
								if (!_IS_NULL_VECTOR(blipCoords) && CAM::DOES_CAM_EXIST(caLocal_2719) && CAM::IS_CAM_ACTIVE(caLocal_2719))
									HUD::LOCK_MINIMAP_POSITION(blipCoords, blipCoords.f_1);
							
								iLocal_1827 = i;
								i = 50;
								num = 1;
							}
						}
					}
				}
			
				if (num == 0)
					iLocal_1827 = 0;
			}
			else
			{
				iLocal_1827 = 0;
			}
			break;
	}

	if (uLocal_1811[iParam0] >= 23)
		return true;
	else
		uLocal_1811[iParam0] = uLocal_1811[iParam0] + 1;

	return false;
}

void func_99(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x4FBF
{
	var unk;
	BOOL flag;
	Blip i;
	Vector3 blipCoords;
	int j;

	for (i = HUD::GET_FIRST_BLIP_INFO_ID(ebsParam1); HUD::DOES_BLIP_EXIST(i); i = HUD::GET_NEXT_BLIP_INFO_ID(ebsParam1))
	{
		if (iLocal_1826 < 50)
		{
			if (func_111(i))
			{
				if (func_110(unk))
				{
					if (!func_109(&i))
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
					
						if (Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 16)
							if (ebsParam1 == BLIP_GUN_SHOP)
								if (blipCoords.f_1 < 200f)
									flag = true;
								else
									flag = false;
					
						if (ebsParam1 == ebsLocal_66)
							flag = true;
					
						if (func_11(blipCoords, 0f, 0f, 0f, false))
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
								if (func_108(blipCoords, Global_2738935.f_238[j /*3*/], 200f, true) && !func_11(Global_2738935.f_238[j /*3*/], 0f, 0f, 0f, false))
									flag = false;
							}
						}
					
						if (flag)
						{
							flag = false;
						
							if (func_111(i))
								if (HUD::GET_BLIP_INFO_ID_TYPE(i) == 4 || HUD::GET_BLIP_INFO_ID_TYPE(i) == 5 || HUD::GET_BLIP_INFO_ID_TYPE(i) == 1 || HUD::GET_BLIP_INFO_ID_TYPE(i) == 6 || HUD::GET_BLIP_INFO_ID_TYPE(i) == 3)
									flag = true;
						
							if (flag)
							{
								if (func_111(i))
								{
									func_107(iParam0, &i, &unk);
									func_100(unk, bParam2, iParam0);
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

void func_100(Blip blParam0, var uParam1, var uParam2, BOOL bParam3, int iParam4) // Position - 0x5287
{
	int i;
	int num;

	i = 0;
	num = 0;

	for (i = 0; i < 50; i = i + 1)
	{
		if (func_97(uLocal_1841[i /*3*/]) == func_97(blParam0))
		{
			num = i;
			i = 50;
		}
		else if (i == iLocal_1826)
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
	
		if (i < iLocal_1826)
		{
			if (func_97(uLocal_1841[i /*3*/]) == func_97(blParam0))
			{
				if (func_104(blParam0, uLocal_1841[i /*3*/]))
				{
					if (bParam3)
					{
						func_103(blParam0, i, iParam4);
						i = 50;
						return;
					}
					else
					{
						func_101(blParam0, i, iParam4);
						iLocal_1826 = iLocal_1826 + 1;
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
					func_101(blParam0, i, iParam4);
					iLocal_1826 = iLocal_1826 + 1;
					i = 50;
					return;
				}
			}
			else
			{
				func_101(blParam0, i, iParam4);
				iLocal_1826 = iLocal_1826 + 1;
				i = 50;
				return;
			}
		}
		else
		{
			func_101(blParam0, i, iParam4);
			iLocal_1826 = iLocal_1826 + 1;
			i = 50;
			return;
		}
	}

	return;
}

void func_101(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x53C7
{
	func_85("INSERT_NEW_DESTINATION_TO_LIST - start \\n");
	func_102(iParam3);
	uLocal_1841[iParam3 /*3*/] = { uParam0 };

	if (func_97(uLocal_1841[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		if (iLocal_67.f_2[iParam4 /*26*/].f_3 != -1)
		{
			uLocal_286[iLocal_67.f_2[iParam4 /*26*/].f_3 /*47*/].f_4.f_35 = iParam3;
			uLocal_286[iLocal_67.f_2[iParam4 /*26*/].f_3 /*47*/].f_4.f_36 = { HUD::GET_BLIP_COORDS(uLocal_1841[iParam3 /*3*/]) };
		}
	}

	return;
}

void func_102(int iParam0) // Position - 0x5442
{
	int i;
	var unk;

	func_85("SHIFT_LIST_DOWN_1_PLACE_FROM_POSITION - start, position = ");
	func_83(iParam0);
	func_85("\\n");

	for (i = 49; i > iParam0; i = i - 1)
	{
		unk = { uLocal_1841[i - 1 /*3*/] };
		uLocal_1841[i /*3*/] = { unk };
	}

	return;
}

void func_103(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x5490
{
	func_85("REPLACE_LIST_DESTINATION_WITH_NEW_DESTINATION - start \\n");
	uLocal_1841[iParam3 /*3*/] = { uParam0 };

	if (func_97(uLocal_1841[iParam3 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		if (iLocal_67.f_2[iParam4 /*26*/].f_3 != -1)
		{
			uLocal_286[iLocal_67.f_2[iParam4 /*26*/].f_3 /*47*/].f_4.f_35 = iParam3;
			uLocal_286[iLocal_67.f_2[iParam4 /*26*/].f_3 /*47*/].f_4.f_36 = { HUD::GET_BLIP_COORDS(uLocal_1841[iParam3 /*3*/]) };
		}
	}

	return;
}

BOOL func_104(Blip blParam0, var uParam1, var uParam2, Blip blParam3, var uParam4, var uParam5) // Position - 0x5505
{
	if (func_105(blParam0) < func_105(blParam3))
		return true;

	return false;
}

float func_105(Blip blParam0) // Position - 0x5522
{
	Vector3 vector;

	vector = { 0f, 0f, 10000000f };

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (HUD::DOES_BLIP_EXIST(blParam0))
			vector = { func_106(blParam0) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	return SYSTEM::VMAG(vector);
}

Vector3 func_106(Blip blParam0) // Position - 0x5565
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

void func_107(int iParam0, var uParam1, var uParam2) // Position - 0x5640
{
	*uParam2 = *uParam1;

	if (!(*uParam2 == Global_113005))
		PATHFIND::GET_STREET_NAME_AT_COORD(func_106(*uParam2), &(uParam2->f_1), &(uParam2->f_2));
	else
		PATHFIND::GET_STREET_NAME_AT_COORD(iLocal_67.f_2[iParam0 /*26*/].f_8, &(uParam2->f_1), &(uParam2->f_2));

	return;
}

BOOL func_108(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x5688
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam3, bParam7) <= fParam6;
}

BOOL func_109(var uParam0) // Position - 0x56A1
{
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
		return true;

	if (Global_113002 == *uParam0)
		return true;

	if (HUD::GET_BLIP_COLOUR(*uParam0) == 39)
		return true;

	if (func_11(HUD::GET_BLIP_COORDS(*uParam0), 0f, 0f, 0f, false))
		return true;

	if (func_97(*uParam0) == INVALID)
		return true;

	return false;
}

BOOL func_110(Blip blParam0, var uParam1, var uParam2) // Position - 0x56FC
{
	float num;

	if (!(func_97(blParam0) == ebsLocal_65))
	{
		num = func_105(blParam0);
	
		if (num > 40f)
			return true;
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_111(Blip blParam0) // Position - 0x5730
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

int func_112() // Position - 0x5760
{
	int numberOfActiveBlips;

	numberOfActiveBlips = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();

	if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 12))
		numberOfActiveBlips = numberOfActiveBlips - 1;

	return numberOfActiveBlips;
}

BOOL func_113(int iParam0) // Position - 0x5788
{
	Vector3 blipCoords;
	Blip firstBlipInfoId;
	int currentLanguage;
	int num;

	if (SYSTEM::TIMERB() > 500)
	{
		currentLanguage = LOCALIZATION::GET_CURRENT_LANGUAGE();
	
		if (iLocal_2722 != currentLanguage)
		{
			if (iLocal_2722 == 8 || iLocal_2722 == 9 || iLocal_2722 == 10 || iLocal_2722 == 12)
			{
				if (currentLanguage != 8 && currentLanguage != 9 && currentLanguage != 10 && currentLanguage != 12)
				{
					iLocal_2722 = currentLanguage;
					bLocal_2718 = true;
					uLocal_1811[iParam0] = 0;
					SYSTEM::SETTIMERB(0);
				}
			}
			else if (currentLanguage == 8 || currentLanguage == 9 || currentLanguage == 10 || currentLanguage == 12)
			{
				iLocal_2722 = currentLanguage;
				bLocal_2718 = true;
				uLocal_1811[iParam0] = 0;
				SYSTEM::SETTIMERB(0);
			}
		}
	
		if (!bLocal_2718)
		{
			num = func_112();
		
			if (iLocal_1829 != num)
			{
				bLocal_2718 = true;
				uLocal_1811[iParam0] = 0;
				iLocal_1829 = num;
				SYSTEM::SETTIMERB(0);
			}
		}
	
		if (!bLocal_2718)
		{
			if (iLocal_67.f_2[iParam0 /*26*/].f_3 != -1)
			{
				if (uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_35 == -1)
				{
					firstBlipInfoId = HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID());
				
					if (HUD::DOES_BLIP_EXIST(firstBlipInfoId))
					{
						blipCoords = { HUD::GET_BLIP_COORDS(firstBlipInfoId) };
					
						if (SYSTEM::VDIST(blipCoords, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 250f)
						{
							bLocal_2718 = true;
							uLocal_1811[iParam0] = 0;
							uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_35 = -1;
							uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_36 = { 0f, 0f, 0f };
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_1841[uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_35 /*3*/]))
				{
					if (func_97(uLocal_1841[uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_35 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
					{
						blipCoords = { HUD::GET_BLIP_COORDS(uLocal_1841[uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_35 /*3*/]) };
					
						if (!func_11(blipCoords, uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_36, false))
						{
							bLocal_2718 = true;
							uLocal_1811[iParam0] = 0;
							uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_35 = -1;
							uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_36 = { 0f, 0f, 0f };
							SYSTEM::SETTIMERB(0);
						}
					}
					else
					{
						bLocal_2718 = true;
						uLocal_1811[iParam0] = 0;
						uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_35 = -1;
						uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_36 = { 0f, 0f, 0f };
						SYSTEM::SETTIMERB(0);
					}
				}
				else
				{
					bLocal_2718 = true;
					uLocal_1811[iParam0] = 0;
					uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_35 = -1;
					uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_36 = { 0f, 0f, 0f };
					SYSTEM::SETTIMERB(0);
				}
			}
		}
	
		SYSTEM::SETTIMERB(0);
	}

	return bLocal_2718;
}

void func_114(int iParam0) // Position - 0x5A6A
{
	int num;
	var unk;
	var unk2;
	var unk3;

	if (func_71())
	{
		if (bLocal_2718 == false)
		{
			func_146(&num, &unk, &unk2, &unk3, false);
		
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD);
			}
		
			if (num > 28 || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
			{
				if (!bLocal_1995)
				{
					func_144();
					SYSTEM::SETTIMERA(0);
					bLocal_1995 = true;
				}
			}
			else
			{
				bLocal_1995 = false;
			}
		
			if (num < -28 || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
			{
				if (!bLocal_1996)
				{
					func_142();
					SYSTEM::SETTIMERA(0);
					bLocal_1996 = true;
				}
			}
			else
			{
				bLocal_1996 = false;
			}
		}
	
		if (!bLocal_1994)
		{
			if (iLocal_1826 > 0)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
			
				if (bLocal_2718 == false)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_1841[iLocal_1827 /*3*/]))
						{
							if (func_141(HUD::GET_BLIP_COORDS(uLocal_1841[iLocal_1827 /*3*/])))
							{
								bLocal_1997 = false;
								uLocal_286[iLocal_1791 /*47*/].f_4.f_15 = { uLocal_1841[iLocal_1827 /*3*/] };
								uLocal_286[iLocal_1791 /*47*/].f_4.f_5 = { HUD::GET_BLIP_COORDS(uLocal_286[iLocal_1791 /*47*/].f_4.f_15) };
							
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false))
									uLocal_286[iLocal_1791 /*47*/].f_4.f_39 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), true) };
								else if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
									uLocal_286[iLocal_1791 /*47*/].f_4.f_39 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
								else
									uLocal_286[iLocal_1791 /*47*/].f_4.f_39 = { 0f, 0f, 0f };
							
								uLocal_2004 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
								_STOPWATCH_DESTROY(&uLocal_2001);
								func_82(iParam0);
								bLocal_1994 = true;
							
								if (iLocal_2720 != 5)
									CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2720);
							
								bLocal_1997 = false;
								bLocal_1992 = false;
								bLocal_1993 = true;
								iLocal_2717 = 1;
								func_117(2, iParam0);
								MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 4);
								MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 20);
								MISC::CLEAR_BIT(&(iLocal_67.f_2[iParam0 /*26*/].f_6), 3);
							}
							else
							{
								func_117(27, iParam0);
							}
						}
					}
				}
			}
		
			if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 7) && bLocal_1994 == false)
			{
				iLocal_2717 = 1;
				func_117(1, iParam0);
				MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 7);
			}
		}
		else
		{
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		
			if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 4) && iLocal_67.f_2[iParam0 /*26*/].f_7 == 5)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL))
				{
					MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 4);
					MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 5);
					iLocal_2717 = 1;
					func_117(24, iParam0);
				}
			}
			else if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 5) && iLocal_67.f_2[iParam0 /*26*/].f_7 == 7)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL))
				{
					MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 5);
					MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 4);
					iLocal_2717 = 1;
					func_117(25, iParam0);
				}
			}
		
			if (!IS_BIT_SET(iLocal_67.f_2[iParam0 /*26*/].f_6, 3) && !IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 3))
			{
				if (iLocal_67.f_2[iParam0 /*26*/].f_7 == 5 && !IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 4))
				{
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON, true);
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_PREV_WEAPON, true);
				
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION))
					{
						func_117(20, iParam0);
						func_116(iParam0, false, false);
						iLocal_2717 = 1;
						MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 3);
					}
				}
			}
		
			if (bLocal_1992)
			{
				if (func_115())
				{
					if (bLocal_2718 == false)
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_1841[iLocal_1827 /*3*/]))
							{
								if (func_141(HUD::GET_BLIP_COORDS(uLocal_1841[iLocal_1827 /*3*/])))
								{
									func_117(9, iParam0);
								
									if (iLocal_2720 != 5)
										CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2720);
								
									bLocal_1997 = false;
									bLocal_1992 = false;
									bLocal_1993 = true;
									uLocal_286[iLocal_1791 /*47*/].f_4.f_15 = { uLocal_1841[iLocal_1827 /*3*/] };
									uLocal_286[iLocal_1791 /*47*/].f_4.f_5 = { HUD::GET_BLIP_COORDS(uLocal_286[iLocal_1791 /*47*/].f_4.f_15) };
									uLocal_286[iLocal_1791 /*47*/].f_4.f_30 = { 0f, 0f, 0f };
									uLocal_286[iLocal_1791 /*47*/].f_4.f_33 = 0f;
									uLocal_286[iLocal_1791 /*47*/].f_4.f_34 = -1;
									MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 4);
									MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 20);
									func_116(iParam0, false, false);
									SYSTEM::SETTIMERA(0);
									iLocal_2717 = 1;
								}
								else
								{
									func_117(27, iParam0);
								}
							}
						}
					}
				}
			
				if (SYSTEM::TIMERA() > 5000)
				{
					if (iLocal_2720 != 5)
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2720);
				
					bLocal_1997 = false;
					bLocal_1992 = false;
					bLocal_1993 = true;
				}
			}
			else if (!bLocal_1993)
			{
				if (SYSTEM::TIMERA() > 0)
				{
					if (iLocal_2720 != 5)
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2720);
				
					bLocal_1992 = false;
					bLocal_1997 = false;
					bLocal_1993 = true;
				}
			}
		}
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}

	HUD::SET_TEXT_RENDER_ID(iLocal_1828);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false))
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_1833, fLocal_1837, fLocal_1838, fLocal_1835, fLocal_1836, 0, 0, 0, 255, 0);

	return;
}

BOOL func_115() // Position - 0x5F9E
{
	if (CAM::DOES_CAM_EXIST(caLocal_2719))
		if (CAM::IS_CAM_ACTIVE(caLocal_2719))
			return true;

	if (bLocal_1992 || !bLocal_1993)
		return true;

	return false;
}

void func_116(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5FD3
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/].f_1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[iParam0 /*26*/].f_1))
		{
			if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1)))
			{
				if (bParam2)
					TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1));
			
				if (bParam1)
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1));
				else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1));
			}
		}
	}

	return;
}

void func_117(int iParam0, int iParam1) // Position - 0x60C2
{
	if (!func_15(iLocal_67.f_2[iParam1 /*26*/].f_1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[iParam1 /*26*/].f_1))
		{
			if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				if (iParam0 != 0)
				{
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_2740, 8, NETWORK::NET_TO_PED(iLocal_67.f_2[iParam1 /*26*/].f_1), "FM_TAXI", 0, 1);
				
					if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
						TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam1 /*26*/].f_1), PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
				
					switch (iParam0)
					{
						case 1:
							_CONVERSATION_ADD_LINE(&uLocal_2740, "MPTXIAU", "MPTXI_WT", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 2:
							_CONVERSATION_ADD_LINE(&uLocal_2740, "MPTXIAU", "MPTXI_BJ", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 5:
							_CONVERSATION_ADD_LINE(&uLocal_2740, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 7:
							_CONVERSATION_ADD_LINE(&uLocal_2740, "MPTXIAU", "MPTXI_NM", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 9:
							_CONVERSATION_ADD_LINE(&uLocal_2740, "MPTXIAU", "MPTXI_CD", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 12:
							_CONVERSATION_ADD_LINE(&uLocal_2740, "MPTXIAU", "MPTXI_RA", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 13:
							_CONVERSATION_ADD_LINE(&uLocal_2740, "MPTXIAU", "MPTXI_OE", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 24:
							_CONVERSATION_ADD_LINE(&uLocal_2740, "MPTXIAU", "MPTXI_SR", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 25:
							_CONVERSATION_ADD_LINE(&uLocal_2740, "MPTXIAU", "MPTXI_ST", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 26:
							_CONVERSATION_ADD_LINE(&uLocal_2740, "MPTXIAU", "MPTXI_DB", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 27:
							_CONVERSATION_ADD_LINE(&uLocal_2740, "MPTXIAU", "MPTXI_US", 12, 0, 0, 1);
							iParam0 = 0;
							break;
					
						case 20:
							_CONVERSATION_ADD_LINE(&uLocal_2740, "MPTXIAU", "MPTXI_SO", 12, 0, 0, 1);
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

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x62D7
{
	func_139(uParam0, _CHAR_NULL, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22293 = false;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 1;
	return func_119(sParam2, iParam3, false);
}

BOOL func_119(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x6325
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
					func_138();
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
	
		if (func_78(8, -1))
			return 0;
	
		Global_22362 = { Global_22356 };
		func_137();
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
			
				if (func_128())
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
		
			if (func_127())
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
		
			func_126();
			Global_22296 = bParam2;
		}
	
		Global_22288 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_125();
		func_120();
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
		func_138();
	}

	return 0;
}

void func_120() // Position - 0x65F3
{
	if (!func_121())
		return;

	if (Global_22292)
	{
		TEXT_LABEL_COPY(&(Global_1971465.f_1), { Global_21905 }, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}

	return;
}

BOOL func_121() // Position - 0x662A
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79389)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_122(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_122(Player plParam0) // Position - 0x668D
{
	return func_123(plParam0, 20);
}

BOOL func_123(Player plParam0, int iParam1) // Position - 0x669D
{
	return IS_BIT_SET(Global_1887305[plParam0 /*610*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x66B5
{
	return -1;
}

void func_125() // Position - 0x66BE
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

void func_126() // Position - 0x66EF
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

BOOL func_127() // Position - 0x6784
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

BOOL func_128() // Position - 0x67AB
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x6844
{
	if (func_136(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x68E6
{
	func_131();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_131() // Position - 0x68FF
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_132(character) && !func_136(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_132(Global_113969.f_2366.f_539.f_4321))
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

BOOL func_132(eCharacter echParam0) // Position - 0x69FC
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x6A08
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x6A45
{
	if (func_132(character))
		return func_135(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_135(eCharacter echParam0) // Position - 0x6A6A
{
	return Global_2169[echParam0 /*29*/];
}

BOOL func_136(int iParam0) // Position - 0x6A79
{
	return Global_44042 == iParam0;
}

void func_137() // Position - 0x6A87
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

void func_138() // Position - 0x6ADE
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

void func_139(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x6B35
{
	Global_21740 = { *uParam0 };
	Global_8116 = echParam1;
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

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x6B8B
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

BOOL func_141(var uParam0, var uParam1, var uParam2) // Position - 0x6BAD
{
	int i;

	for (i = 0; i < 1; i = i + 1)
	{
		if (!_IS_NULL_VECTOR(Global_2738935.f_238[i /*3*/]))
			if (func_108(uParam0, Global_2738935.f_238[i /*3*/], 200f, true))
				return false;
	}

	return true;
}

void func_142() // Position - 0x6BFD
{
	if (bLocal_1994)
	{
		if (bLocal_1992)
		{
			func_143();
		}
		else if (!CAM::IS_CAM_ACTIVE(caLocal_2719))
		{
			bLocal_1997 = true;
			iLocal_2717 = 1;
		}
		else
		{
			func_143();
		}
	
		bLocal_1992 = true;
		bLocal_1993 = true;
	}
	else
	{
		func_143();
	}

	return;
}

void func_143() // Position - 0x6C41
{
	float blipCoords;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_1827 = iLocal_1827 + 1;

	if (iLocal_1827 > iLocal_1826 - 1)
		iLocal_1827 = 0;

	if (HUD::DOES_BLIP_EXIST(uLocal_1841[iLocal_1827 /*3*/]))
	{
		blipCoords = { HUD::GET_BLIP_COORDS(uLocal_1841[iLocal_1827 /*3*/]) };
	
		if (!_IS_NULL_VECTOR(blipCoords))
			HUD::LOCK_MINIMAP_POSITION(blipCoords, blipCoords.f_1);
	}

	return;
}

void func_144() // Position - 0x6CAE
{
	if (bLocal_1994)
	{
		if (bLocal_1992)
		{
			func_145();
		}
		else if (!CAM::IS_CAM_ACTIVE(caLocal_2719))
		{
			bLocal_1997 = true;
			iLocal_2717 = 1;
		}
		else
		{
			func_145();
		}
	
		bLocal_1992 = true;
		bLocal_1993 = true;
	}
	else
	{
		func_145();
	}

	return;
}

void func_145() // Position - 0x6CF2
{
	float blipCoords;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_1827 = iLocal_1827 - 1;

	if (iLocal_1827 < 0)
	{
		iLocal_1827 = iLocal_1826 - 1;
	
		if (iLocal_1827 < 0)
			iLocal_1827 = 0;
	}

	if (HUD::DOES_BLIP_EXIST(uLocal_1841[iLocal_1827 /*3*/]))
	{
		blipCoords = { HUD::GET_BLIP_COORDS(uLocal_1841[iLocal_1827 /*3*/]) };
	
		if (!_IS_NULL_VECTOR(blipCoords))
			HUD::LOCK_MINIMAP_POSITION(blipCoords, blipCoords.f_1);
	}

	return;
}

void func_146(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x6D6A
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

void func_147(int iParam0) // Position - 0x6E3F
{
	if (func_13(iLocal_67.f_2[iParam0 /*26*/]))
	{
		if (!CAM::DOES_CAM_EXIST(caLocal_2719))
		{
			if (!func_154() && !func_78(8, -1) && iLocal_67.f_2[iParam0 /*26*/].f_7 != 6)
			{
				caLocal_2719 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				CAM::ATTACH_CAM_TO_ENTITY(caLocal_2719, NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), uLocal_2729, true);
				func_150(iParam0);
				CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(caLocal_2719, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(true);
				iLocal_2717 = 1;
				Global_113022 = true;
			}
		}
		else if (bLocal_1994)
		{
			if (!Global_113022)
			{
				if (bLocal_1997)
				{
					if (!CAM::IS_CAM_ACTIVE(caLocal_2719))
					{
						iLocal_2720 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
					
						if (iLocal_2720 != 5)
							if (CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() != 4)
								CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(4);
					
						func_41(4, true, -1);
						func_149();
						Global_113022 = true;
						CAM::SET_CAM_ACTIVE(caLocal_2719, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(true);
						func_150(iParam0);
						iLocal_2717 = 1;
						bLocal_1997 = false;
						Global_113022 = true;
					}
				}
			}
		
			if (CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4 && !PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_ENTER) && !func_154() && !func_78(8, -1) && iLocal_67.f_2[iParam0 /*26*/].f_7 != 6)
			{
				if (CAM::IS_CAM_ACTIVE(caLocal_2719))
					func_150(iParam0);
			}
			else if (CAM::IS_CAM_ACTIVE(caLocal_2719) && !func_154() && !func_78(8, -1))
			{
				CAM::SET_CAM_ACTIVE(caLocal_2719, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			
				if (iLocal_2720 != 5)
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_2720);
			
				bLocal_1997 = false;
				bLocal_1992 = false;
				bLocal_1993 = true;
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
				Global_113022 = false;
				HUD::UNLOCK_MINIMAP_POSITION();
				HUD::UNLOCK_MINIMAP_ANGLE();
				HUD::SET_RADAR_ZOOM(0);
				iLocal_2717 = 1;
				func_148();
			}
		}
		else if (CAM::IS_CAM_ACTIVE(caLocal_2719))
		{
			func_150(iParam0);
		}
	}

	return;
}

void func_148() // Position - 0x7031
{
	int i;

	i = 0;

	for (i = 0; i < iLocal_1826; i = i + 1)
	{
		if (bLocal_1994)
			if (uLocal_62 == uLocal_1841[i /*3*/])
				iLocal_1827 = i;
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1833, "HIGHLIGHT_DESTINATION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_1827);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_149() // Position - 0x707E
{
	if (!_IS_NULL_VECTOR(uLocal_286[iLocal_1791 /*47*/].f_4.f_5))
	{
		if (CAM::DOES_CAM_EXIST(caLocal_2719) && CAM::IS_CAM_ACTIVE(caLocal_2719))
		{
			HUD::LOCK_MINIMAP_POSITION(uLocal_286[iLocal_1791 /*47*/].f_4.f_5, uLocal_286[iLocal_1791 /*47*/].f_4.f_5.f_1);
			HUD::LOCK_MINIMAP_ANGLE(0);
			HUD::SET_RADAR_ZOOM(1400);
		}
	}

	return;
}

void func_150(int iParam0) // Position - 0x70DC
{
	if (CAM::DOES_CAM_EXIST(caLocal_2719))
	{
		func_151(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), &caLocal_2719, uLocal_2733);
		CAM::SET_CAM_FOV(caLocal_2719, fLocal_2732);
		CAM::SET_CAM_NEAR_CLIP(caLocal_2719, 0.01f);
	}

	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 13))
			MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 13);
	}
	else if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 13))
	{
		func_149();
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 13);
	}

	HUD::DONT_TILT_MINIMAP_THIS_FRAME();
	CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
	return;
}

void func_151(Vehicle veParam0, var uParam1, Vector3 vParam2, var uParam3, var uParam4) // Position - 0x717B
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
			unk3 = { func_153(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, vParam2) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, uLocal_2729)) };
			func_152(unk3, &rotX, &rotZ, 1);
			CAM::SET_CAM_ROT(*uParam1, rotX, rotY, rotZ, 2);
		}
	}

	return;
}

void func_152(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x71E2
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

Vector3 func_153(float fParam0, var uParam1, var uParam2) // Position - 0x7287
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

BOOL func_154() // Position - 0x72C6
{
	return Global_23690;
}

void func_155(int iParam0) // Position - 0x72D1
{
	if (iLocal_67.f_2[iParam0 /*26*/].f_7 == 2 || iLocal_67.f_2[iParam0 /*26*/].f_7 == 4 || iLocal_67.f_2[iParam0 /*26*/].f_7 == 5 || iLocal_67.f_2[iParam0 /*26*/].f_7 == 6 || iLocal_67.f_2[iParam0 /*26*/].f_7 == 7)
	{
		if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 2))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])))
			{
				if (iLocal_67.f_2[iParam0 /*26*/].f_3 != -1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_3)))
				{
					if (iLocal_67.f_2[iParam0 /*26*/].f_3 == iLocal_1791)
					{
						if (ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])) > 5f)
						{
							func_117(12, iParam0);
						
							if (iLocal_1999 > iLocal_1998)
							{
								if (!PED::IS_PED_BEING_JACKED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_3)))))
								{
									MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_3), iParam0);
									PLAYER::REPORT_CRIME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_3)), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
								
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										_DISPLAY_HELP_TEXT("TXI_HWRUN" /*~s~You didn't pay the taxi fare.~n~The Cops have been alerted.*/, -1);
								}
							}
						}
						else if (iLocal_1999 > iLocal_1998)
						{
							if (func_176(PLAYER::PLAYER_ID()) >= iLocal_1999 && MONEY::NETWORK_CAN_SPEND_MONEY(iLocal_1999, false, false, true, -1, 0))
							{
								if (iLocal_67.f_2[iParam0 /*26*/].f_7 == 6)
									func_117(5, iParam0);
								else
									func_117(13, iParam0);
							
								func_156(iLocal_1999, false);
							}
							else
							{
								func_117(7, iParam0);
							
								if (!PED::IS_PED_BEING_JACKED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_3)))))
								{
									MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_3), iParam0);
									PLAYER::REPORT_CRIME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_3)), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
								
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										_DISPLAY_HELP_TEXT("TXI_HNMON" /*~s~You don't have enough cash to pay the taxi fare.~n~The Cops have been alerted.*/, -1);
								}
							}
						}
						else
						{
							if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 27))
							{
								MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 27);
								func_156(0, false);
							}
						
							func_117(13, iParam0);
						}
					
						MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 2);
						_STOPWATCH_DESTROY(&uLocal_1823);
					}
				}
			}
		}
	}

	return;
}

void func_156(int iParam0, BOOL bParam1) // Position - 0x752F
{
	int num;

	if (_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
	{
		_NETSHOPPING_PROCESS_TRANSACTION(-1834046564, iParam0, &num, false, true, false);
		Global_4535950[num /*85*/].f_66.f_16 = bParam1 ? 1 : 0;
	}
	else
	{
		func_157(-iParam0, 0);
		MONEY::NETWORK_SPENT_TAXI(iParam0, false, true, 0, bParam1);
	}

	return;
}

void func_157(int iParam0, int iParam1) // Position - 0x7578
{
	func_159(iParam0, 1, 1, 0);

	if (iParam1 == 1)
		func_158(iParam0, false);

	return;
}

void func_158(int iParam0, BOOL bParam1) // Position - 0x7596
{
	bParam1;
	iParam0 = iParam0;
	return;
}

void func_159(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x75A7
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

	Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_4 = num2;
	Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_3 = Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_3 + num2;

	if (iParam2 == 1)
		func_158(num2, false);

	return;
}

var func_160(BOOL bParam0, var uParam1, var uParam2) // Position - 0x762A
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void _NETSHOPPING_PROCESS_TRANSACTION(Hash hParam0, int iParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x7641
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
				func_162(uParam2, -1135378931, 537254313, 1474183246, hParam0, iParam1, num, 7);
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
			func_162(uParam2, -1135378931, 1445302971, 1474183246, hParam0, iParam1, num, 7);
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
				func_162(uParam2, -1135378931, 537254313, 1474183246, hParam0, iParam1, num, 7);
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
			func_162(uParam2, -1135378931, 1445302971, 1474183246, hParam0, iParam1, num, 7);
			break;
	}

	return;
}

int func_162(var uParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, int iParam6, int iParam7) // Position - 0x7F8A
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
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_174()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_169(transactionId, iParam1, hParam4, hParam2, hParam3, iParam5, false, iParam6, iParam7, 1, true);
		
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
			func_168(1, hParam4);
			Global_4537455 = 0;
		}
	
		if (iParam7 & 4 != 0)
			func_163(-1, hParam4, iParam6, iParam5, -1);
	}

	return 0;
}

void func_163(int iParam0, Hash hParam1, int iParam2, int iParam3, int iParam4) // Position - 0x813A
{
	switch (hParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_127.f_71), 0);
			break;
	}

	if (iParam0 != -1)
		func_164(iParam0);

	return;
}

void func_164(int iParam0) // Position - 0x8172
{
	BOOL flag;

	flag = false;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		flag = true;

	if (iParam0 != -1)
	{
		if (func_167(iParam0))
			if (!flag)
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
		else if (!flag)
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535950[iParam0 /*85*/].f_66);
	
		func_165(&Global_4535950[iParam0 /*85*/]);
	}

	return;
}

void func_165(var uParam0) // Position - 0x81C6
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
	func_166(&(uParam0->f_14));
	func_166(&(uParam0->f_14.f_13));
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

void func_166(var uParam0) // Position - 0x82D2
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

BOOL func_167(int iParam0) // Position - 0x831A
{
	if (iParam0 >= 0 && iParam0 < 15)
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;

	return false;
}

void func_168(int iParam0, Hash hParam1) // Position - 0x8345
{
	Global_2698856 = hParam1;
	Global_2698855 = iParam0;
	return;
}

int func_169(int iParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x8359
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
				func_170(Global_4535950[i /*85*/], i);
		
			return i;
		}
	}

	return -1;
}

void func_170(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85) // Position - 0x8496
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
	playerBits = func_172(eventData.f_1);

	if (Global_262145.f_23711 && !Global_262145.f_23712 && !Global_262145.f_23713)
		return;

	if (!(playerBits == 0))
	{
		func_171();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 37, playerBits, eventData);
	}

	return;
}

void func_171() // Position - 0x852A
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
	return;
}

int func_172(Player plParam0) // Position - 0x853A
{
	var address;

	if (func_173(plParam0))
		MISC::SET_BIT(&address, plParam0);

	return address;
}

BOOL func_173(Player plParam0) // Position - 0x8555
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

int func_174() // Position - 0x8577
{
	return Global_1574926;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x8583
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

int func_176(Player plParam0) // Position - 0x859A
{
	int num;

	num = func_177(plParam0);
	return num;
}

int func_177(Player plParam0) // Position - 0x85AC
{
	if (plParam0 > -1)
		if (plParam0 == PLAYER::PLAYER_ID())
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		else if (func_178(plParam0))
			return Global_1845281[plParam0 /*883*/].f_206.f_3;
		else
			return 0;

	return 0;
}

BOOL func_178(Player plParam0) // Position - 0x85EF
{
	if (!func_173(plParam0))
		return false;

	return IS_BIT_SET(Global_2672855.f_1, plParam0);
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x860E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_180(int iParam0) // Position - 0x8625
{
	char* scaleformName;

	scaleformName = "taxi_display";

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_1831))
	{
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(hLocal_1832);
		iLocal_1833 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(scaleformName);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_1832) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1833))
		{
			if (func_13(iLocal_67.f_2[iParam0 /*26*/]))
			{
				obLocal_1831 = OBJECT::CREATE_OBJECT(hLocal_1832, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), true), false, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_1831, NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), "Chassis"), uLocal_2723, uLocal_2726, false, false, false, false, 2, true, 0);
			
				if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /*Taxi*/))
				{
					HUD::REGISTER_NAMED_RENDERTARGET("taxi" /*Taxi*/, false);
				
					if (!HUD::IS_NAMED_RENDERTARGET_LINKED(ENTITY::GET_ENTITY_MODEL(obLocal_1831)))
						HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(obLocal_1831));
				}
			
				iLocal_1828 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("taxi" /*Taxi*/);
				return true;
			}
		}
	}

	return false;
}

void func_181(int iParam0) // Position - 0x870C
{
	int taskSequenceId;

	if (func_184())
	{
		if (iLocal_67.f_2[iParam0 /*26*/].f_7 == 8 && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), 20f, 20f, 3f, false, true, 1))
		{
			STREAMING::REQUEST_ANIM_DICT("TAXI_HAIL");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("TAXI_HAIL"))
			{
				if (uLocal_1802[iParam0] == -1)
					_CONTEXT_ADD_HELP_TEXT(&uLocal_1802[iParam0], 0, "TXM_H01" /*Press ~INPUT_CONTEXT~ to hail a taxi.*/, 1, 0, 0, 0);
			
				if (func_182(uLocal_1802[iParam0], true))
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
				
					uLocal_286[iLocal_1791 /*47*/].f_4.f_1 = iParam0;
					MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 23);
					MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 22);
					_CONTEXT_REMOVE_HELP_TEXT(&uLocal_1802[iParam0]);
				}
			}
		}
		else
		{
			STREAMING::REMOVE_ANIM_DICT("TAXI_HAIL");
			_CONTEXT_REMOVE_HELP_TEXT(&uLocal_1802[iParam0]);
		}
	}
	else
	{
		STREAMING::REMOVE_ANIM_DICT("TAXI_HAIL");
		_CONTEXT_REMOVE_HELP_TEXT(&uLocal_1802[iParam0]);
	}

	return;
}

BOOL func_182(int iParam0, BOOL bParam1) // Position - 0x8884
{
	int num;

	num = func_49(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_52(0))
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

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x893C
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

BOOL func_184() // Position - 0x8A67
{
	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
	{
		if (uLocal_286[iLocal_1791 /*47*/].f_4.f_1 != -1)
			return false;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			return false;
	
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			return false;
	
		if (func_185(PLAYER::PLAYER_ID(), true, false))
			return false;
	
		if (func_52(0))
			return false;
	
		if (func_75())
			return false;
	
		if (func_80())
			return false;
	
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;
	
		return true;
	}

	return false;
}

BOOL func_185(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8AFB
{
	if (bParam1)
		if (func_186(plParam0))
			return true;

	!bParam2;

	if (Global_1845281[plParam0 /*883*/] == -1)
		return false;

	return true;
}

BOOL func_186(Player plParam0) // Position - 0x8B2D
{
	return func_187(plParam0);
}

BOOL func_187(Player plParam0) // Position - 0x8B3B
{
	return IS_BIT_SET(Global_1845281[plParam0 /*883*/].f_11.f_1, 0);
}

void func_188(int iParam0) // Position - 0x8B52
{
	int num;
	int num2;
	var unk;
	var unk2;
	int seat;
	int address;

	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), 10f, 10f, 2f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])) < 3f && !func_196(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0 && iLocal_67.f_2[iParam0 /*26*/].f_7 != 9 && iLocal_67.f_2[iParam0 /*26*/].f_7 != 10 && iLocal_67.f_2[iParam0 /*26*/].f_7 != 11)
	{
		if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_3, 0 + iParam0))
		{
			func_146(&num, &num2, &unk, &unk2, false);
		
			if (num2 > 28 || num2 < -28 || num > 28 || num < -28)
			{
				if (bLocal_1995 == false)
				{
					SYSTEM::SETTIMERA(0);
					bLocal_1995 = true;
				}
			}
			else
			{
				bLocal_1995 = false;
			}
		
			if (bLocal_1995 == true)
			{
				if (SYSTEM::TIMERA() > 275)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_3), 0 + iParam0);
						bLocal_1995 = false;
					}
				}
			}
		}
		else
		{
			if (!IS_BIT_SET(iLocal_1792, 0 + iParam0))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					address = func_195(1191, -1);
				
					if (!IS_BIT_SET(address, 7) || !IS_BIT_SET(address, 8) || !IS_BIT_SET(address, 9))
					{
						if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_1823, 20000, false))
						{
							if (INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_UPRIGHT(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), 1119092736) && !ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !func_193(PLAYER::PLAYER_ID()))
							{
								_DISPLAY_HELP_TEXT("TXM_H02" /*Press ~INPUT_ENTER~ to enter the taxi as a passenger.*/, -1);
							
								if (!IS_BIT_SET(address, 7))
									MISC::SET_BIT(&address, 7);
								else if (!IS_BIT_SET(address, 8))
									MISC::SET_BIT(&address, 8);
								else
									MISC::SET_BIT(&address, 9);
							
								func_190(1191, address, -1, true);
								_STOPWATCH_DESTROY(&uLocal_1823);
								MISC::SET_BIT(&iLocal_1792, 0 + iParam0);
							}
						}
					}
				}
			}
		
			if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_ENTER))
			{
				if (SYSTEM::TIMERB() > 275)
				{
					if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_3, 0 + iParam0))
					{
						if (func_189(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])) == 1)
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), 1, false))
								seat = 1;
							else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), 2, false))
								seat = 2;
							else
								seat = 0;
						else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), 2, false))
							seat = 2;
						else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), 0, false))
							seat = 0;
						else
							seat = 1;
					
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), -1, seat, 1f, 8388608, 0, 0);
						MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_3), 0 + iParam0);
						iLocal_2717 = 1;
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
		if (IS_BIT_SET(iLocal_1792, 0 + iParam0))
		{
			MISC::CLEAR_BIT(&iLocal_1792, 0 + iParam0);
		
			if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TXM_H02" /*Press ~INPUT_ENTER~ to enter the taxi as a passenger.*/))
				HUD::CLEAR_HELP(true);
		}
	
		if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_3, 0 + iParam0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				bLocal_1995 = false;
			}
		
			MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_3), 0 + iParam0);
		}
	}

	return;
}

int func_189(Vehicle veParam0) // Position - 0x8F00
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

void func_190(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x8F90
{
	Hash statName;

	if (iParam0 != 14835)
	{
		statName = func_191(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_191(int iParam0, int iParam1) // Position - 0x8FBE
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_192(iParam1));
}

int func_192(int iParam0) // Position - 0x8FD3
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_174();
	
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

BOOL func_193(Player plParam0) // Position - 0x9007
{
	return func_194(plParam0) == 1119849093;
}

int func_194(Player plParam0) // Position - 0x901B
{
	return Global_1887305[plParam0 /*610*/].f_587;
}

int func_195(int iParam0, int iParam1) // Position - 0x902F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_191(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_196(Vehicle veParam0, BOOL bParam1) // Position - 0x905E
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

void func_197(int iParam0) // Position - 0x90C4
{
	if (iLocal_67.f_2[iParam0 /*26*/].f_2 == iLocal_1791)
	{
		if (iLocal_67.f_2[iParam0 /*26*/].f_3 == -1)
		{
			if (iLocal_67.f_2[iParam0 /*26*/].f_7 == 3)
			{
				if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
				{
					if (!func_15(iLocal_67.f_2[iParam0 /*26*/].f_1))
					{
						if (func_13(iLocal_67.f_2[iParam0 /*26*/]))
						{
							if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false))
							{
								func_198(iParam0);
								return;
							}
						}
					}
				}
			}
		}
	}

	func_47(iParam0);
	return;
}

void func_198(int iParam0) // Position - 0x9157
{
	if (!HUD::DOES_BLIP_EXIST(uLocal_1793[iParam0]))
	{
		uLocal_1793[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]));
		HUD::SET_BLIP_SPRITE(uLocal_1793[iParam0], BLIP_TAXI);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_1793[iParam0], "TXM_BLIP" /*Taxi*/);
		HUD::SET_BLIP_FLASHES(uLocal_1793[iParam0], true);
		HUD::SET_BLIP_FLASH_TIMER(uLocal_1793[iParam0], 7000);
		MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 12);
	}

	return;
}

void func_199(int iParam0) // Position - 0x91CD
{
	if (!IS_BIT_SET(Global_2738935.f_868, 1))
		if (HUD::DOES_BLIP_EXIST(uLocal_1793[iParam0]))
			MISC::SET_BIT(&(Global_2738935.f_868), 1);

	if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_1, 0))
		if (iLocal_67.f_2[iParam0 /*26*/].f_2 == iLocal_1791)
			MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_1), 0);

	return;
}

void func_200(int iParam0) // Position - 0x922A
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

	if (!func_15(iLocal_67.f_2[iParam0 /*26*/].f_1) && func_13(iLocal_67.f_2[iParam0 /*26*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[iParam0 /*26*/].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[iParam0 /*26*/]))
		{
			num = 3;
			entityCoords = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false) };
		
			if (iLocal_67.f_2[iParam0 /*26*/].f_7 != 11)
			{
				if (iLocal_67.f_2[iParam0 /*26*/].f_7 != 9)
				{
					if (iLocal_67.f_2[iParam0 /*26*/].f_7 != 10)
					{
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 251, true);
					
						if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_3, iParam0))
						{
							if (func_223(iParam0))
							{
								func_39(1, 1, true);
								MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_3), iParam0);
							}
						}
					
						if (iLocal_67.f_2[iParam0 /*26*/].f_7 != 8)
							VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), true);
					}
				}
			}
		
			func_222(iParam0);
		
			switch (iLocal_67.f_2[iParam0 /*26*/].f_7)
			{
				case 0:
					break;
			
				case 1:
					if (iLocal_67.f_2[iParam0 /*26*/].f_2 != -1 && iLocal_67.f_2[iParam0 /*26*/].f_2 == iLocal_1791)
					{
						if (func_11(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_26, 0f, 0f, 0f, false))
						{
							if (func_218(iParam0, _GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_26), &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_29), &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34), 250))
							{
								uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 = -1;
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_26, 12f, 0, ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])), drivingMode, 45f - 20f, 20f);
							}
						}
						else if (!func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD, true))
						{
							drivingMode = iLocal_1839;
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_26, 12f, 0, ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])), drivingMode, 45f - 20f, 20f);
						}
					
						MISC::CLEAR_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_2), 21);
					}
					break;
			
				case 2:
					if (iLocal_67.f_2[iParam0 /*26*/].f_2 != -1 && iLocal_67.f_2[iParam0 /*26*/].f_2 == iLocal_1791)
					{
						if (!IS_BIT_SET(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_2, 21))
						{
							if (func_215(entityCoords, uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_26, uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_29, &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_26), &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_29)))
							{
								PED::SET_DRIVER_ABILITY(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 0.5f);
							
								if (IS_BIT_SET(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_2, 14))
									TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_26, uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_29, 0, 60f, false);
								else
									TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_26, uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_29, 3, 60f, false);
							
								iLocal_2717 = 1;
								MISC::SET_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_2), 21);
							}
						}
					
						MISC::CLEAR_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_2), 22);
						MISC::CLEAR_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_2), 23);
					}
					break;
			
				case 3:
					if (iLocal_67.f_2[iParam0 /*26*/].f_2 != -1 && iLocal_67.f_2[iParam0 /*26*/].f_2 == iLocal_1791)
					{
						if (!IS_BIT_SET(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_2, 23))
						{
							VEHICLE::START_VEHICLE_HORN(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), 2500, MISC::GET_HASH_KEY("NORMAL"), false);
							MISC::SET_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_2), 23);
						}
					
						if (!IS_BIT_SET(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_2, 22))
						{
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), true), 5, 5f, 1076627627, -1f, 1f, true);
							iLocal_2717 = 1;
							MISC::SET_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_2), 22);
						}
						else if (!VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])))
						{
							if (!func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_MISSION, true) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])) != 5)
								MISC::CLEAR_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_2), 22);
						}
					}
					break;
			
				case 4:
					if (iLocal_67.f_2[iParam0 /*26*/].f_3 != -1 && iLocal_67.f_2[iParam0 /*26*/].f_3 == iLocal_1791)
					{
						uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_30 = { 0f, 0f, 0f };
						uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_33 = 0f;
						uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_34 = -1;
					}
				
					if (func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_MISSION, true))
						func_116(iParam0, false, false);
				
					STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
				
					if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (ENTITY::HAS_ENTITY_ANIM_FINISHED(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1));
								TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0, false, false, false);
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							if (!VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])))
							{
								if (!func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_MISSION, true))
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), entityCoords, 5, 5f, 1076627627, -1f, 1f, true);
							}
							else if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), 0, false))
							{
								TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1));
								TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 8f, -8f, -1, 2, 0, false, false, false);
							}
						}
					}
					break;
			
				case 5:
					if (iLocal_67.f_2[iParam0 /*26*/].f_3 != -1 && iLocal_67.f_2[iParam0 /*26*/].f_3 == iLocal_1791)
					{
						if (func_11(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_30, 0f, 0f, 0f, false) && func_11(iLocal_67.f_2[iParam0 /*26*/].f_8, uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_5, false))
						{
							if (uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_34 == -1)
							{
								if (func_214(iLocal_67.f_2[iParam0 /*26*/].f_8, &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_30), &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_33), iParam0) || func_204(iLocal_67.f_2[iParam0 /*26*/].f_8, &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_30), &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_33), iParam0))
								{
									MISC::SET_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2), 14);
									func_116(iParam0, false, false);
									iLocal_2717 = 1;
								}
							
								uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_34 = 0;
							}
							else
							{
								vehicle = NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]);
							
								if (func_201(&vehicle, iLocal_67.f_2[iParam0 /*26*/].f_8, &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_30), &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_33), &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_34), 1000))
								{
									MISC::CLEAR_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2), 14);
									uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_34 = 0;
									func_116(iParam0, false, false);
									iLocal_2717 = 1;
								}
							}
						}
					
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						{
							STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
						
							if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
							{
								TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1));
								TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0, false, false, false);
							}
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							ENTITY::SET_ENTITY_ANIM_SPEED(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
						}
						else if (!func_11(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_30, 0f, 0f, 0f, false))
						{
							if (!func_8(iParam0))
							{
								if (!func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_PERFORM_SEQUENCE, true))
								{
									speed = 15f;
									drivingMode = iLocal_1839;
									num = 3;
								
									if (IS_BIT_SET(iLocal_67.f_2[iParam0 /*26*/].f_6, 3) || IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 3))
									{
										speed = 20f;
										drivingMode = iLocal_1840;
									}
								
									if (IS_BIT_SET(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2, 14))
										num = 0;
								
									func_116(iParam0, true, true);
									PED::SET_DRIVER_ABILITY(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 0.5f);
									TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_30, speed, drivingMode, 45f);
									TASK::TASK_VEHICLE_PARK(0, NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_30, uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_33, num, 60f, true);
									TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
									TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), taskSequenceId);
									TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
									iLocal_2717 = 1;
								}
							}
						}
					
						MISC::CLEAR_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2), 24);
						MISC::CLEAR_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2), 25);
					}
					break;
			
				case 6:
					if (iLocal_67.f_2[iParam0 /*26*/].f_3 != -1 && iLocal_67.f_2[iParam0 /*26*/].f_3 == iLocal_1791)
					{
						if (!IS_BIT_SET(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2, 24))
						{
							if (!func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_PERFORM_SEQUENCE, true))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), true), 5, 5f, 1076627627, -1f, 1f, true);
								iLocal_2717 = 1;
								MISC::SET_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2), 24);
							}
						}
						else
						{
							if (!VEHICLE::IS_VEHICLE_STOPPED(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])))
								if (!func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_MISSION, true) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])) != 5)
									MISC::CLEAR_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2), 24);
						
							func_7(iParam0, true);
						}
					}
					break;
			
				case 7:
					if (iLocal_67.f_2[iParam0 /*26*/].f_3 != -1 && iLocal_67.f_2[iParam0 /*26*/].f_3 == iLocal_1791)
					{
						iLocal_2717 = 1;
					
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						{
							if (ENTITY::HAS_ENTITY_ANIM_FINISHED(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
							{
								STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
							
								if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
								{
									TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1));
									TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 4f, -8f, -1, 1, 0, false, false, false);
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						{
							if (!IS_BIT_SET(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2, 25))
							{
								if (!func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_MISSION, true) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])) != 5)
								{
									func_116(iParam0, true, true);
									TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), true), ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1)), 3, 60f, false);
								}
							
								MISC::SET_BIT(&(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_3 /*47*/].f_4.f_2), 25);
							}
						}
					}
					break;
			
				case 8:
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false);
				
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
					{
						STREAMING::REQUEST_ANIM_DICT("ODDJOBS@TAXI@DRIVER");
					
						if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@TAXI@DRIVER"))
						{
							TASK::TASK_CLEAR_LOOK_AT(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1));
							TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 4f, -4f, -1, 0, 0, false, false, false);
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 1.2f);
					}
					else if (!func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_VEHICLE_MISSION, true))
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), true), 8, 12f, 786599, 400f, -1f, false);
					}
					break;
			
				case 9:
				case 10:
					func_7(iParam0, false);
				
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_enter", 3))
						ENTITY::STOP_ENTITY_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "leanover_enter", "ODDJOBS@TAXI@DRIVER", -2f);
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_idle", 3))
						ENTITY::STOP_ENTITY_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "leanover_idle", "ODDJOBS@TAXI@DRIVER", -2f);
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "ODDJOBS@TAXI@DRIVER", "leanover_exit", 3))
						ENTITY::STOP_ENTITY_ANIM(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), "leanover_exit", "ODDJOBS@TAXI@DRIVER", -2f);
				
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 251, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), false);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false);
				
					if (!PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1)) && !func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_SMART_FLEE_PED, true) && !func_9(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), SCRIPT_TASK_0xF10822AA, true) && TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/])) != 8)
					{
						if (iLocal_67.f_2[iParam0 /*26*/].f_7 == 10)
							flag = true;
					
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), -1, false) != NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1))
							flag = true;
					
						if (iLocal_67.f_2[iParam0 /*26*/].f_4 != -1)
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_4)))
								playerPed = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_4)));
					
						if (ENTITY::DOES_ENTITY_EXIST(playerPed))
							ENTITY::IS_ENTITY_DEAD(playerPed, false);
						else
							playerPed = 0;
					
						if (flag)
						{
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 2, false);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 65536, true);
						
							if (ENTITY::DOES_ENTITY_EXIST(playerPed))
								TASK::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), playerPed, 500f, -1, false, false);
							else
								TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), entityCoords, 500f, -1, false, false);
						}
						else
						{
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 65536, false);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 2, true);
						
							if (ENTITY::DOES_ENTITY_EXIST(playerPed))
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), playerPed, 8, 25f, 790564, 200f, 15f, true);
							else
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), entityCoords, 8, 25f, 790564, 200f, 15f, true);
						}
					}
				
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), true);
					break;
			
				case 11:
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/]))
					{
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false);
						func_28(&iLocal_67.f_2[iParam0 /*26*/]);
					}
				
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/].f_1))
					{
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 251, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), false);
						func_28(&(iLocal_67.f_2[iParam0 /*26*/].f_1));
					}
				
					return;
			}
		}
	
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		{
			distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), true), true);
		
			if (distanceBetweenCoords < fLocal_2738)
			{
				fLocal_2738 = distanceBetweenCoords;
				iLocal_2737 = iParam0;
			}
		}
	}

	if (iLocal_67.f_2[iParam0 /*26*/].f_7 == 11)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[iParam0 /*26*/]))
			{
				VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false);
				func_28(&iLocal_67.f_2[iParam0 /*26*/]);
			}
		}
	
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_15(iLocal_67.f_2[iParam0 /*26*/].f_1))
				{
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), 251, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1), false);
				}
			
				func_28(&(iLocal_67.f_2[iParam0 /*26*/].f_1));
			}
		}
	}

	return;
}

BOOL func_201(var uParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) // Position - 0xA6A4
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

	if (!func_203(fParam1))
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
					
						if (func_202(fParam1, offsetFromCoordAndHeadingInWorldCoords) || num5 < 0.5f)
						{
							offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(offsetFromCoordAndHeadingInWorldCoords, outHeading, xOffset, 0f, 0f) };
						
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
								num3 = *uParam0;
						
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(offsetFromCoordAndHeadingInWorldCoords, 3f, 3f, 3f, num3))
							{
								func_214(offsetFromCoordAndHeadingInWorldCoords, &offsetFromCoordAndHeadingInWorldCoords, &outHeading, 1) || func_204(offsetFromCoordAndHeadingInWorldCoords, &offsetFromCoordAndHeadingInWorldCoords, &outHeading, 1);
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
		fLocal_1825 = SYSTEM::VMAG(vector);
		fLocal_1825 != 0f;
		return true;
	}

	return false;
}

BOOL func_202(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xA9E3
{
	float num;
	float num2;

	num2 = vParam3.f_2 - vParam0.f_2;

	if (num2 < 0f)
		num2 = num2 * -1f;

	if (vParam0.f_2 <= 1f)
	{
		func_85("\\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\\n");
		return true;
	}

	num = SYSTEM::VDIST(vParam0, vParam3);
	num = num / 1.75f;

	if (num2 < num)
	{
		func_85("\\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\\n");
		return true;
	}

	return false;
}

BOOL func_203(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xAA45
{
	const char* nameOfZone;

	nameOfZone = ZONE::GET_NAME_OF_ZONE(vParam0);

	if (MISC::ARE_STRINGS_EQUAL("SanAnd" /*San Andreas*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Alamo" /*Alamo Sea*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("ArmyB" /*Fort Zancudo*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("BhamCa" /*Banham Canyon*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Baytre" /*Baytree Canyon*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("BradT" /*Braddock Tunnel*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("BradP" /*Braddock Pass*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CANNY" /*Raton Canyon*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CCreak" /*Cassidy Creek*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("ChamH" /*Chamberlain Hills*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CHU" /*Chumash*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("COSI" /*Countryside*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CMSW" /*Chiliad Mountain State Wilderness*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Cypre" /*Cypress Flats*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Desrt" /*Grand Senora Desert*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("ELGorl" /*El Gordo Lighthouse*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Galli" /*Galileo Park*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Galfish" /*Galilee*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Harmo" /*Harmony*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("HumLab" /*Humane Labs and Research*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Jail" /*Bolingbroke Penitentiary*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("LAct" /*Land Act Reservoir*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("LDam" /*Land Act Dam*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Lago" /*Lago Zancudo*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("MTChil" /*Mount Chiliad*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("MTJose" /*Mount Josiah*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("MTGordo" /*Mount Gordo*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("NCHU" /*North Chumash*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Oceana" /*Pacific Ocean*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Palmpow" /*Palmer-Taylor Power Station*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PBluff" /*Pacific Bluffs*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Paleto" /*Paleto Bay*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PalCov" /*Paleto Cove*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PalFor" /*Paleto Forest*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PalHigh" /*Palomino Highlands*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("RTRAK" /*Redwood Lights Track*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Rancho" /*Rancho*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("SANDY" /*Sandy Shores*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("TongvaH" /*Tongva Hills*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("TongvaV" /*Tongva Valley*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Zenora" /*Senora Freeway*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Slab" /*Stab City*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("WindF" /*Ron Alternates Wind Farm*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Zancudo" /*Zancudo River*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("SanChia" /*San Chianski Mountain Range*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("zQ_UAR" /*Davis Quartz*/, nameOfZone))
		return true;

	return false;
}

BOOL func_204(Vector3 vParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4, int iParam5) // Position - 0xAD39
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

	if (func_213(vParam0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*pvParam3 = { 1261.5804f, -3332.6846f, 5.4191f };
		*pfParam4 = 163.87f;
		return true;
	}
	else if (func_213(vParam0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*pvParam3 = { -1577.1599f, 5166.5103f, 19.1864f };
		*pfParam4 = 0f;
		return true;
	}
	else if (func_213(vParam0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
	{
		*pvParam3 = { -856.6151f, 163.7361f, 65.093f };
		*pfParam4 = 355.3355f;
		return true;
	}
	else if (func_213(vParam0, -39.2005f, -1473.5498f, -100f, 10.6133f, -1430.0988f, 100f))
	{
		*pvParam3 = { -15.5181f, -1456.3999f, 29.4244f };
		*pfParam4 = 94.6893f;
		return true;
	}
	else if (func_213(vParam0, 1964.7421f, 3792.59f, -100f, 1992.6361f, 3840.2532f, 100f))
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

	if (func_210(3, vector))
	{
		if (func_209(vector, 3, 0, false))
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
		if (func_208(vector, 1283.3257f, -1731.5222f, 51.78555f, 17f))
		{
			*pvParam3 = { 1283.3257f, -1731.5222f, 51.78555f };
			*pfParam4 = 275.4274f;
			return true;
		}
	
		if (func_208(vector, 1334.3861f, -1709.7625f, 55.70131f, 41f))
		{
			*pvParam3 = { 1334.3861f, -1709.7625f, 55.70131f };
			*pfParam4 = 275.4411f;
			return true;
		}
	
		if (func_208(vector, 1246.1661f, -1750.6246f, 45.35691f, 28f))
		{
			*pvParam3 = { 1246.1661f, -1750.6246f, 45.35691f };
			*pfParam4 = 301.2981f;
			return true;
		}
	
		if (func_208(vector, 1196.2716f, -1753.0505f, 37.63976f, 32f))
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

	if (func_208(vector, -1693.3018f, -1109.1305f, 17.89778f, 240f))
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

	if (!func_206())
	{
		vector = { vParam0 };
	
		if (vParam0.f_2 == 1f)
			vector.f_2 = 36.1141f;
	
		if (func_210(7, vector))
		{
			if (func_209(vector, 7, 0, false))
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

	if (func_210(2, vector))
	{
		if (func_209(vector, 2, 0, false))
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
	num5 = func_205(vParam0, unk22);
	unk25 = { 2450.6035f, 5129.2236f, 45.9722f };
	num6 = 241.1957f;
	num7 = func_205(vParam0, unk25);
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

	if (func_12(vector, -99.68751f, -2448.891f, 5.01731f, 230f))
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

float func_205(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0xCE5B
{
	return SYSTEM::VDIST2(fParam0, fParam0.f_1, 0f, fParam3, fParam3.f_1, 0f);
}

BOOL func_206() // Position - 0xCE75
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (character == CHAR_MICHAEL)
	{
		if (func_207(65))
			return true;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(92439941) > 0)
			return true;
	}
	else if (character == CHAR_FRANKLIN)
	{
		if (func_207(66))
			return true;
	}
	else if (character == CHAR_TREVOR)
	{
		if (func_207(65))
			return true;
	}

	return false;
}

BOOL func_207(int iParam0) // Position - 0xCED4
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113969.f_9088.f_99.f_58[iParam0];
}

BOOL func_208(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0xCF01
{
	float num;

	num = { fParam3 - uParam0 };
	return (num * num) + (num.f_1 * num.f_1) <= fParam6 * fParam6;
}

BOOL func_209(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xCF2B
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

BOOL func_210(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xDC7F
{
	return SYSTEM::VDIST2(vParam1, func_212(iParam0)) < func_211(iParam0);
}

float func_211(int iParam0) // Position - 0xDC9C
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

Vector3 func_212(int iParam0) // Position - 0xDD34
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

BOOL func_213(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8) // Position - 0xDE1E
{
	if (fParam0 > fParam3 && fParam0 < fParam6 && fParam0.f_1 > fParam3.f_1 && fParam0.f_1 < fParam6.f_1 && fParam0.f_2 > fParam3.f_2 && fParam0.f_2 < fParam6.f_2)
		return true;

	return false;
}

BOOL func_214(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4, int iParam5) // Position - 0xDE75
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

BOOL func_215(var uParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xDF7E
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

	if (!func_203(vParam3))
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
			num = func_217(unk10, unk13);
		
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
				*uParam8 = func_216(*uParam8, 0f, 360f);
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

float func_216(float fParam0, float fParam1, float fParam2) // Position - 0xE07B
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

float func_217(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xE0BD
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

BOOL func_218(int iParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3* pvParam4, float* pfParam5, var uParam6, int iParam7) // Position - 0xE0DE
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

	if (!func_203(vParam1))
		nodeFlags = 9;

	func_220(vParam1, vParam1, &(iLocal_67.f_2[iParam0 /*26*/].f_12), &(iLocal_67.f_2[iParam0 /*26*/].f_15), iParam7);

	if (func_219(iLocal_67.f_2[iParam0 /*26*/].f_12, iLocal_67.f_2[iParam0 /*26*/].f_15))
	{
		if (!func_214(vParam1, pvParam4, pfParam5, 1) && !func_204(vParam1, pvParam4, pfParam5, 1))
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
					
						if (func_202(vParam1, *pvParam4) || num3 < 0.5f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false))
								vehicle = NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]);
						
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

BOOL func_219(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0xE26C
{
	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fParam0, fParam0.f_1, fParam3, fParam3.f_1))
		return true;

	return false;
}

void func_220(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8) // Position - 0xE28C
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

	if (!func_96(num, *uParam6, 1056964608, false) || !func_96(num, *uParam6, 1056964608, false))
	{
		*uParam6 = { num };
		*uParam7 = { num2 };
	}

	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
	return;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0xE357
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_222(int iParam0) // Position - 0xE36A
{
	if (iLocal_67.f_2[iParam0 /*26*/].f_22 != 0 && !IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 6))
	{
		func_117(iLocal_67.f_2[iParam0 /*26*/].f_22, iParam0);
		MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 6);
	}

	return;
}

BOOL func_223(int iParam0) // Position - 0xE3B6
{
	Ped entity1;
	Vehicle entity12;
	Ped playerPed;
	Vector3 entityCoords;
	float num;
	float num2;
	float num3;

	entity1 = NETWORK::NET_TO_PED(iLocal_67.f_2[iParam0 /*26*/].f_1);
	entity12 = NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]);
	entityCoords = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iLocal_67.f_2[iParam0 /*26*/]), false) };

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
			func_224(iLocal_1791, 1, 37);
	
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
				func_224(iLocal_1791, 1, 37);
		
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
					func_224(iLocal_1791, 1, 37);
					return true;
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(entity1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(entity1, playerPed, true))
				{
					func_224(iLocal_1791, 1, 37);
					return true;
				}
			}
		}
	}

	iLocal_67.f_2[iParam0 /*26*/].f_3 == -1 && iLocal_67.f_2[iParam0 /*26*/].f_7 == 3;
	return false;
}

void func_224(int iParam0, int iParam1, int iParam2) // Position - 0xE584
{
	if (iParam0 != -1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
		if (_NETWORK_IS_PLAYER_VALID(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), true, true))
			PLAYER::REPORT_CRIME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), iParam2, PLAYER::GET_WANTED_LEVEL_THRESHOLD(iParam1));

	return;
}

void func_225() // Position - 0xE5CE
{
	if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 19))
	{
		if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 16) && !IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 17))
		{
			if (!func_52(0))
			{
				MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 17);
				func_39(1, 0, false);
				MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 18);
			}
		}
	
		if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 15) && !IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 16))
			if (func_52(0))
				MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 16);
	
		if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 15))
		{
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_2740, 7, 0, "TaxiDispatch", 0, 1);
		
			if (func_226(&uLocal_2740, CHAR_CALL911, "MPTXIAU", "MPTXI_E1", 0, 0))
				MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 15);
		}
	}

	return;
}

BOOL func_226(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, int iParam5) // Position - 0xE6CE
{
	const char* str;
	BOOL flag;
	int num;

	if (func_307())
		return false;

	if (func_306())
		return false;

	str = 0;
	flag = false;
	num = -99;
	return func_227(uParam0, echParam1, sParam2, sParam3, 1, iParam5, iParam4, str, flag, num, str, str, -1);
}

BOOL func_227(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, const char* sParam7, BOOL bParam8, int iParam9, const char* sParam10, const char* sParam11, Player plParam12) // Position - 0xE713
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
	hash = func_305(sParam2, sParam3);
	hashKey2 = 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		hashKey2 = MISC::GET_HASH_KEY(sParam7);

	if (func_304(hashKey, hash, hashKey2))
		return true;

	if (!func_299(iParam6))
		return false;

	if (func_296(hashKey, hash, hashKey2))
	{
		if (func_295())
			return false;
	
		func_294();
		return func_234(uParam0, echParam1, plParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}

	if (!func_233(iParam4))
		return false;

	func_228(hashKey, hash, hashKey2, sParam3, iParam4, iParam5, iParam6);
	return false;
}

void func_228(Hash hParam0, Hash hParam1, Hash hParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0xE7F8
{
	Global_1663588.f_40.f_1 = hParam0;
	Global_1663588.f_40.f_2 = hParam1;
	Global_1663588.f_40.f_3 = hParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1663588.f_40.f_4), sParam3, 16);
	Global_1663588.f_40.f_8 = iParam4;
	Global_1663588.f_40.f_9 = iParam5;
	Global_1663588.f_40.f_14 = iParam6;
	func_229(iParam4);
	func_294();
	Global_1663588.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
	return;
}

void func_229(int iParam0) // Position - 0xE865
{
	if (func_232(iParam0))
	{
		func_231();
		return;
	}

	func_230();
	return;
}

void func_230() // Position - 0xE881
{
	Global_1663588.f_40.f_10 = 0;
	return;
}

void func_231() // Position - 0xE892
{
	Global_1663588.f_40.f_10 = 1;
	return;
}

BOOL func_232(int iParam0) // Position - 0xE8A3
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

BOOL func_233(int iParam0) // Position - 0xE8EB
{
	return iParam0 > Global_1663588.f_40.f_8;
}

BOOL func_234(var uParam0, eCharacter echParam1, Player plParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, const char* sParam8, BOOL bParam9, int iParam10, const char* sParam11, const char* sParam12) // Position - 0xE8FE
{
	var unk;

	func_293();

	if (iParam6 == 5)
		iParam6 = 0;

	if (iParam5 == 8)
		return func_290(uParam0, sParam3, sParam4);

	if (iParam5 == 4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_226" /*Accept?*/, 16);
		return func_287(uParam0, echParam1, sParam3, sParam4, &unk);
	}

	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
			return func_290(uParam0, sParam3, sParam4);
	
		return func_279(uParam0, echParam1, sParam3, sParam4, iParam7);
	}

	if (iParam5 == 5)
		return func_278(echParam1, plParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);

	if (iParam5 == 2)
		return func_266(echParam1, plParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);

	if (iParam5 == 3)
		return func_265(echParam1, plParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);

	if (iParam5 == 6)
		return func_235(echParam1, plParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);

	return false;
}

BOOL func_235(eCharacter echParam0, Player plParam1, char* sParam2, int iParam3, const char* sParam4, BOOL bParam5, int iParam6, const char* sParam7, const char* sParam8) // Position - 0xE9F8
{
	BOOL flag;

	func_264();
	flag = true;

	if (func_237(echParam0, plParam1, sParam2, flag, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_236(120000);
		return 1;
	}

	return 0;
}

void func_236(int iParam0) // Position - 0xEA2F
{
	Global_1663588.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1663588.f_40.f_12 = 1;
	return;
}

BOOL func_237(eCharacter echParam0, Player plParam1, char* sParam2, BOOL bParam3, int iParam4, const char* sParam5, BOOL bParam6, int iParam7, const char* sParam8, const char* sParam9) // Position - 0xEA52
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
		num = func_258(player);
	
		if (num == 0)
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1663588.f_40.f_13))
				return 0;
	}
	else
	{
		playerName = "";
	}

	num2 = 0;
	string1 = func_257(sParam5, bParam6, &num2);
	num3 = func_255(iParam7, &num2);
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
		flag2 = func_254(echParam0, sParam2, num7, string1, num3, playerName, num2, num8, 1, num6, 0, flag, num5, 0, num4, sParam8, sParam9);
	else
		flag2 = func_241(echParam0, sParam2, num7, num8, 1, num6, 0, flag, num5, 0);

	if (!flag2)
		return 0;

	if (IS_BIT_SET(iParam4, 0))
		func_240();

	func_264();
	func_239();
	func_238();
	return 1;
}

void func_238() // Position - 0xEB9B
{
	Global_1663588.f_57 = 0;
	Global_1663588.f_57.f_1 = 0;
	return;
}

void func_239() // Position - 0xEBB3
{
	Global_1663588.f_40 = 3;
	return;
}

void func_240() // Position - 0xEBC2
{
	MISC::SET_BIT(&Global_8800, 8);
	return;
}

BOOL func_241(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0xEBD3
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

	if (func_242(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4) == 1)
	{
		if (bParam7 == true)
		{
			Global_9507 = iParam6;
			MISC::SET_BIT(&Global_4543084, 0);
		}
	
		return 1;
	}

	return 0;
}

int func_242(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0xEC3F
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
			if (Global_20930 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_20930 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_20930 == CHAR_FRANKLIN)
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
	
		if (Global_4543069 == 1)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1870099198) > 0)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1346140115) > 0)
			return 0;
	}

	if (func_253() == 0)
	{
		func_251();
		return 0;
	}

	func_250(Global_4543068);
	TEXT_LABEL_ASSIGN_STRING(&Global_4541819[Global_4543068 /*104*/], sParam1, 64);
	Global_4541819[Global_4543068 /*104*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4541819[Global_4543068 /*104*/].f_24 = iParam2;
	}

	Global_4541819[Global_4543068 /*104*/].f_25 = iParam7;
	Global_4541819[Global_4543068 /*104*/].f_26 = iParam8;
	Global_4541819[Global_4543068 /*104*/].f_29 = iParam9;
	Global_4541819[Global_4543068 /*104*/].f_30 = iParam12;
	Global_4541819[Global_4543068 /*104*/].f_31 = iParam11;
	Global_4541819[Global_4543068 /*104*/].f_28 = 0;
	Global_4541819[Global_4543068 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4541819[Global_4543068 /*104*/].f_33), sParam4, 64);
	Global_4541819[Global_4543068 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4541819[Global_4543068 /*104*/].f_50), sParam5, 64);
	Global_4541819[Global_4543068 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4541819[Global_4543068 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_4541819[Global_4543068 /*104*/].f_83), sParam15, 64);
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	switch (iParam16)
	{
		case 3:
			Global_4541819[Global_4543068 /*104*/].f_99[Global_20930] = 1;
			break;
	
		case 0:
			Global_4541819[Global_4543068 /*104*/].f_99[0] = 1;
			break;
	
		case 2:
			Global_4541819[Global_4543068 /*104*/].f_99[2] = 1;
			break;
	
		case 1:
			Global_4541819[Global_4543068 /*104*/].f_99[1] = 1;
			break;
	}

	if (iParam16 == 3)
	{
		switch (Global_20930)
		{
			case CHAR_MICHAEL:
				func_249(0);
				break;
		
			case CHAR_FRANKLIN:
				func_249(1);
				break;
		
			case CHAR_TREVOR:
				func_249(2);
				break;
		
			case CHAR_MULTIPLAYER:
				func_249(3);
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
				Global_4543069 = 1;
				break;
		
			case 0:
				Global_4543069 = 1;
				break;
		
			case 2:
				Global_4543069 = 1;
				break;
		
			case 1:
				Global_4543069 = 1;
				break;
		}
	}

	Global_23355[Global_4543068] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20873)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_77())
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20919, true);
	}

	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_248(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_245(1);
			func_248(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1971482 != -1 && echParam0 == Global_1971482)
		num2 = 1;

	func_243(echParam0, sParam1, num2, func_244(PLAYER::PLAYER_ID()));
	return 1;
}

void func_243(eCharacter echParam0, char* sParam1, BOOL bParam2, var uParam3) // Position - 0xF02C
{
	eCharacter character;

	if (!func_121())
		return;

	character = echParam0;
	character.f_1 = -1180597171;
	character.f_2 = MISC::GET_HASH_KEY(sParam1);
	character.f_3 = 0;
	character.f_4 = bParam2;
	character.f_5 = uParam3;
	character.f_6 = Global_1971465.f_7;
	character.f_7 = Global_1971465.f_8;
	character.f_8 = Global_1971465.f_9;
	character.f_9 = Global_1971465.f_10;
	character.f_10 = Global_1971465.f_11;
	character.f_11 = Global_1971465.f_12;
	character.f_12 = Global_1971465.f_13;
	character.f_13 = Global_1971465.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&character);

	if (bParam2)
		Global_1971482 = -1;

	return;
}

var func_244(Player plParam0) // Position - 0xF0C7
{
	return Global_1845281[plParam0 /*883*/].f_206.f_6;
}

void func_245(int iParam0) // Position - 0xF0DC
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

	Global_23354 = 0;
	Global_9405 = iParam0;
	func_247();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_136(14))
		{
			while (num < 34)
			{
				if (iParam0 == Global_8807[num /*15*/].f_11)
				{
					if (i == Global_8807[num /*15*/].f_4)
					{
						if (Global_9369[i] == 0)
						{
							Global_9333[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8801, 3))
								{
									value = 42;
									Global_21149 = 1;
								}
								else
								{
									value = 255;
									Global_21149 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696167)
								if (num == 14)
									func_246(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
						
							Global_9369[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 34)
			{
				if (iParam0 == Global_8807[num /*15*/].f_11)
				{
					if (i == Global_8807[num /*15*/].f_4)
					{
						if (Global_9369[i] == 0)
						{
							Global_9333[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_113969.f_14144[j /*104*/].f_24 != 0)
										if (Global_113969.f_14144[j /*104*/].f_28 == 0)
											if (Global_113969.f_14144[j /*104*/].f_99[Global_20930] == 1)
												Global_23354 = Global_23354 + 1;
								}
							
								func_246(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23354), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79389)
								{
									value2 = 0;
									value2 = Global_4541818;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4541819[k /*104*/].f_24 != 0)
											if (Global_4541819[k /*104*/].f_28 == 0)
												if (Global_4541819[k /*104*/].f_99[Global_20930] == 1)
													value2 = value2 + 1;
									}
								
									func_246(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case CHAR_MICHAEL:
											value3 = Global_45261;
											break;
									
										case CHAR_FRANKLIN:
											value3 = Global_45262;
											break;
									
										case CHAR_TREVOR:
											value3 = Global_45263;
											break;
									
										default:
											break;
									}
								
									func_246(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_246(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8806);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8801, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8801, 3))
								{
									value5 = 42;
									Global_21149 = 1;
								}
								else
								{
									value5 = 255;
									Global_21149 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 23 && MISC::ARE_STRINGS_EQUAL(&Global_8807[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8801, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_61(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8807[num /*15*/].f_10 == 57 && num == 23)
							{
								value6 = 0;
								value6 = Global_1882108.f_1;
								func_246(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_246(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9369[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_246(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0xF652
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
		func_61(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_61(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_61(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_61(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_61(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_247() // Position - 0xF705
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9369[i] = 0;
	}

	return;
}

void func_248(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xF728
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

void func_249(int iParam0) // Position - 0xF78B
{
	var unk;
	var unk2;

	unk = Global_113969.f_14054[iParam0 /*20*/].f_8;
	unk = unk;
	unk2 = unk2;
	return;
}

void func_250(int iParam0) // Position - 0xF7AA
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
	Global_4541819[iParam0 /*104*/].f_18 = clockSeconds;
	Global_4541819[iParam0 /*104*/].f_18.f_1 = clockMinutes;
	Global_4541819[iParam0 /*104*/].f_18.f_2 = clockHours;
	Global_4541819[iParam0 /*104*/].f_18.f_3 = clockDayOfMonth;
	Global_4541819[iParam0 /*104*/].f_18.f_4 = num;
	Global_4541819[iParam0 /*104*/].f_18.f_5 = clockYear;
	return;
}

void func_251() // Position - 0xF82A
{
	int num;
	int num2;
	int num3;

	num = 0;
	num2 = 10;
	num3 = num;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_252(Global_4541819[num3 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
			Global_4543068 = num3;
	
		num3 = num3 + 1;
	}

	Global_4541819[Global_4543068 /*104*/].f_24 = 1;
	return;
}

BOOL func_252(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0xF8D4
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

int func_253() // Position - 0xF9BF
{
	int num;
	int num2;
	int i;

	num = 0;
	num2 = 10;

	for (i = num; i < num2; i = i + 1)
	{
		if (Global_4541819[i /*104*/].f_24 == 0)
		{
			Global_4543068 = i;
			return 1;
		}
	}

	i = num;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_4541819[i /*104*/].f_24 == 0 || Global_4541819[i /*104*/].f_24 == 1)
			if (!func_252(Global_4541819[i /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
				Global_4543068 = i;
	
		i = i + 1;
	}

	if (Global_4543068 == 11)
		return 0;

	Global_4541819[Global_4543068 /*104*/].f_99[0] = 0;
	Global_4541819[Global_4543068 /*104*/].f_99[1] = 0;
	Global_4541819[Global_4543068 /*104*/].f_99[2] = 0;
	return 1;
}

BOOL func_254(eCharacter echParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12, int iParam13, int iParam14, const char* sParam15, const char* sParam16) // Position - 0xFAEA
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

	if (func_242(echParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, num) == 1)
	{
		if (bParam11 == true)
		{
			Global_9507 = iParam10;
			MISC::SET_BIT(&Global_4543084, 0);
		}
	
		return 1;
	}

	return 0;
}

int func_255(int iParam0, var uParam1) // Position - 0xFB6C
{
	if (iParam0 == -99)
		return -99;

	func_256(2, uParam1);
	return iParam0;
}

void func_256(int iParam0, var uParam1) // Position - 0xFB8B
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

char* func_257(const char* sParam0, BOOL bParam1, var uParam2) // Position - 0xFC3C
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return sLocal_18;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
		return sLocal_18;

	func_256(1, uParam2);

	if (bParam1)
		return sParam0;

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_258(Player plParam0) // Position - 0xFC79
{
	int num;

	num = func_261(plParam0);

	if (num == -1)
	{
		func_259(plParam0, true);
		return 0;
	}

	Global_1681225[num /*5*/].f_4 = 1;
	return Global_1681225[num /*5*/].f_2;
}

void func_259(Player plParam0, BOOL bParam1) // Position - 0xFCAF
{
	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return;

	if (func_261(plParam0) != -1)
		return;

	if (Global_1681388)
		if (plParam0 == Global_1681388.f_1)
			return;

	if (func_260(plParam0))
		return;

	if (Global_1681426 >= 32)
		return;

	Global_1681393[Global_1681426] = plParam0;
	Global_1681426 = Global_1681426 + 1;
	bParam1;
	return;
}

BOOL func_260(Player plParam0) // Position - 0xFD1B
{
	int i;

	i = 0;

	for (i = 0; i < Global_1681426; i = i + 1)
	{
		if (Global_1681393[i] == plParam0)
			return true;
	}

	return false;
}

int func_261(Player plParam0) // Position - 0xFD4D
{
	int i;

	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return -1;

	if (Global_1681386 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1681386; i = i + 1)
	{
		if (Global_1681225[i /*5*/].f_1 == plParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1681225[i /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1681225[i /*5*/].f_2))
				return i;
		
			func_262(i);
			return -1;
		}
	}

	return -1;
}

void func_262(int iParam0) // Position - 0xFDCC
{
	var txdString2;
	var txdString1;
	int num;
	int i;

	if (iParam0 >= Global_1681386)
		return;

	if (PED::IS_PEDHEADSHOT_VALID(Global_1681225[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&txdString2, "CHAR_DEFAULT", 64);
	
		if (Global_1681225[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&txdString1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1681225[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&txdString1, &txdString1, &txdString2, &txdString2);
		}
	
		PED::UNREGISTER_PEDHEADSHOT(Global_1681225[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1681386; i = i + 1)
	{
		Global_1681225[num /*5*/] = { Global_1681225[i /*5*/] };
		num = num + 1;
	}

	func_263(&Global_1681225[num /*5*/]);
	Global_1681386 = Global_1681386 - 1;
	return;
}

void func_263(var uParam0) // Position - 0xFE82
{
	*uParam0 = 0;
	uParam0->f_1 = _INVALID_PLAYER_INDEX();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

void func_264() // Position - 0xFEAF
{
	Global_1663588.f_40.f_9 = 4;
	return;
}

BOOL func_265(eCharacter echParam0, Player plParam1, char* sParam2, int iParam3, const char* sParam4, BOOL bParam5, int iParam6, const char* sParam7, const char* sParam8) // Position - 0xFEC0
{
	BOOL flag;

	func_264();
	flag = false;
	return func_237(echParam0, plParam1, sParam2, flag, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

BOOL func_266(eCharacter echParam0, Player plParam1, char* sParam2, int iParam3, const char* sParam4, BOOL bParam5, int iParam6, const char* sParam7, const char* sParam8) // Position - 0xFEE7
{
	BOOL flag;

	flag = false;
	return func_267(echParam0, plParam1, sParam2, flag, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

BOOL func_267(eCharacter echParam0, Player plParam1, char* sParam2, BOOL bParam3, int iParam4, const char* sParam5, BOOL bParam6, int iParam7, const char* sParam8, const char* sParam9) // Position - 0xFF0A
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
		num = func_258(player);
	
		if (num == 0)
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1663588.f_40.f_13))
				return false;
	
		Global_23347 = num;
	}
	else
	{
		playerName = "";
	}

	num2 = 0;
	string1 = func_257(sParam5, bParam6, &num2);
	num3 = func_255(iParam7, &num2);
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
		flag2 = func_277(echParam0, sParam2, num7, string1, num3, playerName, num2, num8, 1, num6, 0, flag, num5, 0, num4, sParam8, sParam9);
	else
		flag2 = _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(echParam0, sParam2, num7, num8, 1, num6, 0, flag, num5, 0);

	if (!flag2)
		return false;

	if (IS_BIT_SET(iParam4, 0))
		func_240();

	func_268();
	func_239();
	func_238();
	return true;
}

void func_268() // Position - 0x1005A
{
	Global_1663588.f_40.f_9 = 3;
	return;
}

BOOL _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x1006B
{
	int num;
	char* str;
	int num2;
	char* str2;
	int num3;
	char* str3;
	char* str4;
	int num4;

	MISC::CLEAR_BIT(&Global_8800, 10);
	num = 0;
	str = "NULL";
	num2 = -99;
	str2 = "NULL";
	num3 = 0;
	str3 = "NULL";
	str4 = "NULL";
	num4 = 3;

	if (func_271(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4) == 1)
	{
		if (bParam7 == true)
		{
			Global_9507 = iParam6;
			Global_9410[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_9487 = echParam0;
			MISC::SET_BIT(&Global_8800, 1);
			MISC::SET_BIT(&Global_8800, 7);
		}
	
		return 1;
	}

	return 0;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x100FA
{
	return Global_2169[character /*29*/].f_3;
}

int func_271(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x1010D
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
			if (Global_20930 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_20930 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_20930 == CHAR_FRANKLIN)
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
	
		if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-757906387) > 0)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-757906387) > 0)
			return 0;
	}

	if (func_276() == 0)
	{
		func_274();
		return 0;
	}

	func_273(Global_23353);
	TEXT_LABEL_ASSIGN_STRING(&Global_113969.f_14144[Global_23353 /*104*/], sParam1, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_24 = iParam2;
	}

	Global_113969.f_14144[Global_23353 /*104*/].f_25 = iParam7;
	Global_113969.f_14144[Global_23353 /*104*/].f_26 = iParam8;
	Global_113969.f_14144[Global_23353 /*104*/].f_29 = iParam9;
	Global_113969.f_14144[Global_23353 /*104*/].f_30 = iParam12;
	Global_113969.f_14144[Global_23353 /*104*/].f_31 = iParam11;
	Global_113969.f_14144[Global_23353 /*104*/].f_28 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_14144[Global_23353 /*104*/].f_33), sParam4, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_14144[Global_23353 /*104*/].f_50), sParam5, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_14144[Global_23353 /*104*/].f_83), sParam15, 64);

	if (IS_BIT_SET(Global_8800, 10))
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
		Global_9506 = 4;
		func_249(0);
		func_249(2);
		func_249(1);
	}
	else
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		switch (iParam16)
		{
			case 3:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[Global_20930] = 1;
				break;
		
			case 0:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
				break;
		
			case 2:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
				break;
		
			case 1:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
				break;
		}
	
		if (iParam16 == 3)
		{
			switch (Global_20930)
			{
				case CHAR_MICHAEL:
					func_249(0);
					Global_9506 = 0;
					break;
			
				case CHAR_FRANKLIN:
					func_249(1);
					Global_9506 = 1;
					break;
			
				case CHAR_TREVOR:
					func_249(2);
					Global_9506 = 2;
					break;
			
				case CHAR_MULTIPLAYER:
					func_249(3);
					Global_9506 = 3;
					break;
			
				default:
					Global_9506 = 4;
					break;
			}
		}
	}

	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_8800, 10))
		{
			Global_113969.f_14054[0 /*20*/].f_17 = 1;
			Global_113969.f_14054[1 /*20*/].f_17 = 1;
			Global_113969.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113969.f_14054[Global_20930 /*20*/].f_17 = 1;
					break;
			
				case 0:
					Global_113969.f_14054[0 /*20*/].f_17 = 1;
					break;
			
				case 2:
					Global_113969.f_14054[2 /*20*/].f_17 = 1;
					break;
			
				case 1:
					Global_113969.f_14054[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}

	Global_23355[Global_23353] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20873)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_77())
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20919, true);
	}

	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_248(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_245(1);
			func_248(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1971482 != -1 && echParam0 == Global_1971482)
		num2 = 1;

	func_272(echParam0, sParam1, num2, func_244(PLAYER::PLAYER_ID()));
	return 1;
}

void func_272(int iParam0, char* sParam1, BOOL bParam2, var uParam3) // Position - 0x105E8
{
	int num;

	if (!func_121())
		return;

	num = iParam0;
	num.f_1 = 1654525105;
	num.f_2 = MISC::GET_HASH_KEY(sParam1);
	num.f_3 = 0;
	num.f_4 = bParam2;
	num.f_5 = uParam3;
	num.f_6 = Global_1971465.f_7;
	num.f_7 = Global_1971465.f_8;
	num.f_8 = Global_1971465.f_9;
	num.f_9 = Global_1971465.f_10;
	num.f_10 = Global_1971465.f_11;
	num.f_11 = Global_1971465.f_12;
	num.f_12 = Global_1971465.f_13;
	num.f_13 = Global_1971465.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&num);

	if (bParam2)
		Global_1971482 = -1;

	return;
}

void func_273(int iParam0) // Position - 0x10683
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
	Global_113969.f_14144[iParam0 /*104*/].f_18 = clockSeconds;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_1 = clockMinutes;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_2 = clockHours;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_3 = clockDayOfMonth;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_4 = num;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_5 = clockYear;
	return;
}

void func_274() // Position - 0x10715
{
	int num;
	int num2;
	int num3;

	if (Global_79389)
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
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_275(Global_113969.f_14144[num3 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
			Global_23353 = num3;
	
		num3 = num3 + 1;
	}

	Global_113969.f_14144[Global_23353 /*104*/].f_24 = 1;
	return;
}

BOOL func_275(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x107E0
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

int func_276() // Position - 0x108CB
{
	int num;
	int num2;
	int i;

	if (Global_79389)
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
		if (Global_113969.f_14144[i /*104*/].f_24 == 0)
		{
			Global_23353 = i;
			return 1;
		}
	}

	i = num;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_113969.f_14144[i /*104*/].f_24 == 0 || Global_113969.f_14144[i /*104*/].f_24 == 1)
			if (!func_275(Global_113969.f_14144[i /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
				Global_23353 = i;
	
		Global_113969.f_14144[i /*104*/].f_24 == 2;
		i = i + 1;
	}

	if (Global_23353 == 34)
		return 0;

	Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 0;
	return 1;
}

BOOL func_277(eCharacter echParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12, int iParam13, int iParam14, const char* sParam15, const char* sParam16) // Position - 0x10A33
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

	MISC::CLEAR_BIT(&Global_8800, 10);
	num = 3;

	if (func_271(echParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, num) == 1)
	{
		if (bParam11 == true)
		{
			Global_9507 = iParam10;
			Global_9410[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_9487 = echParam0;
			TEXT_LABEL_ASSIGN_STRING(&Global_9488, sParam5, 64);
			MISC::SET_BIT(&Global_8800, 1);
			MISC::SET_BIT(&Global_8800, 7);
		}
	
		return 1;
	}

	return 0;
}

BOOL func_278(eCharacter echParam0, Player plParam1, char* sParam2, int iParam3, const char* sParam4, BOOL bParam5, int iParam6, const char* sParam7, const char* sParam8) // Position - 0x10ADF
{
	BOOL flag;

	!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());

	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		return 0;

	func_268();
	flag = true;

	if (func_267(echParam0, plParam1, sParam2, flag, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_236(120000);
		return 1;
	}

	return 0;
}

BOOL func_279(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4) // Position - 0x10B31
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
		flag = func_286(uParam0, echParam1, sParam2, sParam3, num, 0, 0, true);
	else
		flag = func_285(uParam0, echParam1, sParam2, sParam3, num, 0, 0, true);

	if (flag)
	{
		if (IS_BIT_SET(iParam4, 3))
			func_284(1);
	
		if (IS_BIT_SET(iParam4, 5))
			func_283(1);
	
		func_282();
		func_239();
		func_281();
		func_280();
		return 1;
	}

	return 0;
}

void func_280() // Position - 0x10BC8
{
	Global_2749373 = 0;
	return;
}

void func_281() // Position - 0x10BD5
{
	Global_1663588.f_57 = 1;
	Global_1663588.f_57.f_1 = 0;
	return;
}

void func_282() // Position - 0x10BED
{
	Global_1663588.f_40.f_9 = 1;
	return;
}

void func_283(int iParam0) // Position - 0x10BFE
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8802, 0);
	else
		MISC::CLEAR_BIT(&Global_8802, 0);

	return;
}

void func_284(int iParam0) // Position - 0x10C1F
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 20);
	else
		MISC::CLEAR_BIT(&Global_8800, 20);

	return;
}

BOOL func_285(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x10C42
{
	func_139(uParam0, echParam1, sParam2, iParam5, iParam6, 0);
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
	Global_2883585 = 0;
	return func_119(sParam3, iParam4, bParam7);
}

BOOL func_286(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x10C90
{
	func_139(uParam0, echParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = 1;
	Global_22293 = true;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
	return func_119(sParam3, iParam4, bParam7);
}

BOOL func_287(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, char* sParam4) // Position - 0x10CDE
{
	!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());

	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		return 0;

	if (func_289(uParam0, echParam1, sParam2, sParam3, 9, sParam4, 0, 0, true))
	{
		func_288();
		func_282();
		func_239();
		func_281();
		func_280();
		return 1;
	}

	return 0;
}

void func_288() // Position - 0x10D30
{
	Global_23304 = 0;
	return;
}

BOOL func_289(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x10D3C
{
	func_139(uParam0, echParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = true;
	Global_22300 = 0;
	Global_22295 = 1;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 1;
	Global_22340 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_22434, sParam5, 24);
	Global_2883585 = 0;
	return func_119(sParam3, iParam4, bParam8);
}

BOOL func_290(var uParam0, char* sParam1, char* sParam2) // Position - 0x10D91
{
	if (_CONVERSATION_ADD_LINE_0(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_291();
		func_239();
		func_281();
		return 1;
	}

	return 0;
}

void func_291() // Position - 0x10DBC
{
	Global_1663588.f_40.f_9 = 2;
	return;
}

BOOL _CONVERSATION_ADD_LINE_0(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x10DCD
{
	func_139(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22293 = false;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_119(sParam2, iParam3, false);
}

void func_293() // Position - 0x10E1B
{
	Global_1663588.f_55 = Global_1663588.f_40.f_1;
	Global_1663588.f_55.f_1 = Global_1663588.f_40.f_10;
	return;
}

void func_294() // Position - 0x10E41
{
	Global_1663588.f_40 = 1;
	return;
}

BOOL func_295() // Position - 0x10E50
{
	return Global_1663588.f_40 == 1;
}

BOOL func_296(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x10E60
{
	if (!func_297(hParam0))
		return 0;

	if (Global_1663588.f_40.f_2 != hParam1)
		return 0;

	if (hParam2 != 0)
		if (Global_1663588.f_40.f_3 != hParam2)
			return 0;

	return 1;
}

BOOL func_297(Hash hParam0) // Position - 0x10E9F
{
	if (!func_298())
		return false;

	if (!(Global_1663588.f_40.f_1 == hParam0))
		return false;

	return true;
}

BOOL func_298() // Position - 0x10EC7
{
	if (Global_1663588.f_40 == 0)
		return false;

	return true;
}

BOOL func_299(int iParam0) // Position - 0x10EDE
{
	if (func_303())
		return false;

	if (func_302())
		return false;

	if (func_52(0))
		return false;

	if (Global_1574633.f_18 != 0)
		return false;

	if (Global_1928440 || func_301())
		return false;

	if (!IS_BIT_SET(iParam0, 6))
		if (func_300())
			return false;

	return true;
}

BOOL func_300() // Position - 0x10F3F
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1680101);
}

int func_301() // Position - 0x10F53
{
	if (Global_4521801.f_945 > -1)
		return 1;

	return 0;
}

BOOL func_302() // Position - 0x10F6B
{
	return Global_1663588.f_40 == 3;
}

BOOL func_303() // Position - 0x10F7B
{
	return func_127();
}

BOOL func_304(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x10F87
{
	if (!func_302())
		return false;

	return func_296(hParam0, hParam1, hParam2);
}

Hash func_305(char* sParam0, char* sParam1) // Position - 0x10FA5
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);
	TEXT_LABEL_APPEND_STRING(&unk, sParam1, 64);
	return MISC::GET_HASH_KEY(&unk);
}

BOOL func_306() // Position - 0x10FBF
{
	return Global_2746026.f_1;
}

BOOL func_307() // Position - 0x10FCD
{
	if (Global_1663776.f_2)
		return true;

	return func_308();
}

BOOL func_308() // Position - 0x10FE6
{
	return func_303();
}

void func_309(int iParam0) // Position - 0x10FF2
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[iParam0 /*26*/]))
	{
		if (iLocal_67.f_2[iParam0 /*26*/].f_2 == iLocal_1791)
		{
			if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 18))
			{
				if (_IS_NULL_VECTOR(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_21))
				{
					if (!_STOPWATCH_HAS_TIME_PASSED(&uLocal_1821, 30000, false))
					{
						if (func_310(iParam0, 1109393408))
						{
							uLocal_286[iLocal_1791 /*47*/].f_4.f_26 = { 0f, 0f, 0f };
							uLocal_286[iLocal_1791 /*47*/].f_4.f_29 = 0f;
							_STOPWATCH_DESTROY(&uLocal_1821);
						}
					}
					else if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 19))
					{
						MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 19);
					}
				}
			}
		}
	}

	return;
}

BOOL func_310(int iParam0, int iParam1) // Position - 0x110B3
{
	var unk;
	var entityCoords;
	var unk6;
	int num;

	if (_NETWORK_IS_PLAYER_VALID(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_2)), true, true))
	{
		STREAMING::REQUEST_MODEL(Global_2738935.f_869);
		STREAMING::REQUEST_MODEL(Global_2738935.f_870);
	
		if (STREAMING::HAS_MODEL_LOADED(Global_2738935.f_869))
		{
			if (STREAMING::HAS_MODEL_LOADED(Global_2738935.f_870))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_67.f_2[iParam0 /*26*/].f_2))), true) };
			
				if (!func_329(entityCoords))
				{
					if (func_203(entityCoords))
						if (uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25 < 2)
							num = 0;
						else if (uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25 < 5)
							num = 9;
						else
							num = 1;
					else if (uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25 < 5)
						num = 8;
					else
						num = 9;
				
					if (uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 == -1)
						uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 = 0;
				
					if (func_325(entityCoords, &unk, &unk6, &(uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34), num, iParam1))
					{
						uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_21 = { unk };
						uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_24 = unk6;
						uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25 = 0;
						uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 = -1;
						return true;
					}
					else if (uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 >= 5)
					{
						uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25 = uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25 + 1;
						uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 = 0;
					}
				}
				else if (func_311(entityCoords, &unk, &unk6))
				{
					uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_21 = { unk };
					uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_24 = unk6;
					uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_25 = 0;
					uLocal_286[iLocal_67.f_2[iParam0 /*26*/].f_2 /*47*/].f_4.f_34 = -1;
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_311(Vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x11312
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
		
			if (func_312(unk, 1086324736, 1065353216, 1065353216, 1084227584, true, true, true, 1123024896, false, -1, true, 0, false, 0, false, false))
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
		
			if (func_312(unk, 1086324736, 1065353216, 1065353216, 1084227584, true, true, true, 1123024896, false, -1, true, 0, false, 0, false, false))
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
		
			if (func_312(unk, 1086324736, 1065353216, 1065353216, 1084227584, true, true, true, 1123024896, false, -1, true, 0, false, 0, false, false))
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
		
			if (func_312(unk, 1086324736, 1065353216, 1065353216, 1084227584, true, true, true, 1123024896, false, -1, true, 0, false, 0, false, false))
			{
				*uParam3 = { unk };
				*uParam4 = num2;
				return true;
			}
		}
	}

	return false;
}

BOOL func_312(float fParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, int iParam10, BOOL bParam11, int iParam12, BOOL bParam13, int iParam14, BOOL bParam15, int iParam16, BOOL bParam17, BOOL bParam18) // Position - 0x11847
{
	Global_2635563.f_2 = 0;

	if (iParam3 > 0f)
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(fParam0, iParam3))
			return false;

	if (iParam4 > 0f)
		if (PED::IS_ANY_PED_NEAR_POINT(fParam0, fParam0.f_1, fParam0.f_2 + 1f, iParam4) || PED::IS_ANY_PED_NEAR_POINT(fParam0, iParam4))
			return false;

	if (iParam5 > 0f)
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(fParam0, iParam5, bParam18))
			return false;

	Global_2635563.f_2 = Global_2635563.f_2 + 1;

	if (bParam13)
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(fParam0, 2.5f) > 0)
			return false;

	Global_2635563.f_2 = Global_2635563.f_2 + 1;

	if (iParam14 > 0f)
		if (func_319(fParam0, iParam14, true, true, bParam15, bParam17, bParam11, bParam15, false))
			return false;

	Global_2635563.f_2 = Global_2635563.f_2 + 1;

	if (bParam8)
		if (iParam6 > 0f)
			if (func_313(fParam0, iParam6, bParam7, bParam9, iParam10, bParam11, iParam12, iParam16, bParam17))
				return false;

	Global_2635563.f_2 = Global_2635563.f_2 + 1;
	return true;
}

BOOL func_313(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, float fParam6, BOOL bParam7, int iParam8, float fParam9, BOOL bParam10) // Position - 0x11959
{
	Player i;
	Player player;
	float num;

	if (bParam4 && !bParam7)
	{
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				num = fParam6;
			
				if (fParam9 > 0f)
					num = fParam9;
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_317(PLAYER::PLAYER_ID()), vParam0, true) <= num + fParam3)
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
			if (!func_315(player, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), player))
			{
				if (bParam4 == true || bParam4 == false && player != PLAYER::PLAYER_ID())
				{
					if (func_314(player) || !bParam10 && !Global_2657971[player /*465*/].f_271)
					{
						num = fParam6;
					
						if (fParam9 > 0f)
							if (!(PLAYER::GET_PLAYER_TEAM(player) == -1))
								if (PLAYER::GET_PLAYER_TEAM(player) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
									num = fParam9;
					
						if (!bParam7)
							if (bParam5 || bParam5 == false && PLAYER::GET_PLAYER_TEAM(player) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || PLAYER::GET_PLAYER_TEAM(player) == -1)
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_317(player), vParam0, true) <= num + fParam3)
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(player, vParam0, fParam3))
										return true;
						else if (PLAYER::GET_PLAYER_TEAM(player) != iParam8 || PLAYER::GET_PLAYER_TEAM(player) == -1)
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_317(player), vParam0, true) <= num + fParam3)
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(player, vParam0, fParam3))
									return true;
					}
				}
			}
		}
	}

	return false;
}

BOOL func_314(Player plParam0) // Position - 0x11B11
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(plParam0)) || Global_2657971[plParam0 /*465*/].f_256)
		return true;

	return false;
}

BOOL func_315(Player plParam0, int iParam1) // Position - 0x11B3D
{
	BOOL flag;

	if (!func_173(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_316(-1, false) == 8;
	else
		flag = Global_1845281[plParam0 /*883*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_316(int iParam0, BOOL bParam1) // Position - 0x11B96
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_174();

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

Vector3 func_317(Player plParam0) // Position - 0x11BD7
{
	Player player;

	player = plParam0;

	if (func_318() && Global_1845281[player /*883*/].f_860 && !_IS_NULL_VECTOR(Global_1845281[player /*883*/].f_861))
		return Global_1845281[player /*883*/].f_861;

	return _GET_PLAYER_COORDS(plParam0);
}

var func_318() // Position - 0x11C2A
{
	return Global_2684504.f_19;
}

BOOL func_319(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x11C38
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
					if (!bParam7 || !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(player)) && func_314(player))
					{
						if (!bParam6 || bParam6 == true && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(player) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam9 && bParam6 && func_320(player))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(player)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(_GET_PLAYER_COORDS(player), vParam0, true) < fParam3)
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

BOOL func_320(Player plParam0) // Position - 0x11D3C
{
	if (func_324(PLAYER::PLAYER_ID(), plParam0))
		return true;

	Global_2707308 = { GET_GAMER_HANDLE_PLAYER(plParam0) };

	if (NETWORK::NETWORK_IS_FRIEND(&Global_2707308))
		return true;

	if (func_321(PLAYER::PLAYER_ID(), plParam0))
		return true;

	return false;
}

BOOL func_321(Player plParam0, Player plParam1) // Position - 0x11D83
{
	Player player;

	player = func_322(plParam0);

	if (func_173(player))
		if (player == func_322(plParam1))
			return true;

	return false;
}

Player func_322(Player plParam0) // Position - 0x11DAC
{
	if (func_173(plParam0))
		return Global_1887305[plParam0 /*610*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x11DCF
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_324(Player plParam0, Player plParam1) // Position - 0x11DE6
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707308 = { GET_GAMER_HANDLE_PLAYER(plParam0) };
		Global_2707321 = { GET_GAMER_HANDLE_PLAYER(plParam1) };
	
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707308))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707321))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707238, 35, &Global_2707308);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707273, 35, &Global_2707321);
			
				if (Global_2707238 == Global_2707273)
					return true;
			}
		}
	}

	return false;
}

BOOL func_325(Vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7) // Position - 0x11E53
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
						outHeading = func_328(0f, 0f, 0f, outVec1, 1);
					
						if (func_326(vParam0, vector, 120f, iParam7))
						{
							if (func_312(*uParam3, 5f, 2f, 1f, 6f, true, true, true, 120f, false, -1, true, 0f, false, 0, false, false))
							{
								flag = true;
								offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, outHeading, 0f, 1f, 0f) };
								x1 = { offsetFromCoordAndHeadingInWorldCoords - vector };
								x2 = { outPosition - vector };
							
								if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x1, x1.f_1, x2, x2.f_1) > 60f)
								{
									outHeading = outHeading + 180f;
									outHeading = func_216(outHeading, 0f, 360f);
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

BOOL func_326(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, int iParam7) // Position - 0x11FD2
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

	if (func_327(vParam3, false))
		return false;

	return true;
}

BOOL func_327(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x1203E
{
	if (func_12(vParam0, -1144.4973f, 43.01712f, 51.94447f, 325f))
	{
		if (func_209(vParam0, 1, 0, false))
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

	if (func_210(2, vParam0))
		if (func_209(vParam0, 2, 0, false))
			return true;

	if (func_210(3, vParam0))
		if (func_209(vParam0, 3, 0, false))
			return true;

	if (func_210(4, vParam0))
		if (func_209(vParam0, 4, 0, false))
			return true;

	if (func_210(5, vParam0))
		if (func_209(vParam0, 5, 0, false))
			return true;

	if (func_210(6, vParam0))
		if (func_209(vParam0, 6, 0, false))
			return true;

	if (!func_206())
		if (func_210(7, vParam0))
			if (func_209(vParam0, 7, 0, false))
				return true;

	if (func_210(8, vParam0))
		if (func_209(vParam0, 8, 0, false))
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

	if (func_12(vParam0, -99.68751f, -2448.891f, 5.01731f, 230f))
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

float func_328(float fParam0, float fParam1, float fParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x126B8
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

BOOL func_329(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1271D
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

void func_330() // Position - 0x12832
{
	int i;

	if (uLocal_286[iLocal_1791 /*47*/].f_4.f_3 == 0)
		return;

	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_3, i))
			if (iLocal_67.f_2[i /*26*/].f_7 == 11 || iLocal_67.f_2[i /*26*/].f_7 == 9 || iLocal_67.f_2[i /*26*/].f_7 == 10)
				MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_3), i);
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/].f_1))
				MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_3), i);
	}

	return;
}

void func_331() // Position - 0x128E4
{
	int i;

	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (iLocal_67.f_2[i /*26*/].f_3 != -1)
		{
			if (iLocal_67.f_2[i /*26*/].f_3 != iLocal_1791)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/]))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[i /*26*/]))
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[i /*26*/], true);
			
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/].f_1))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[i /*26*/].f_1))
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[i /*26*/].f_1, true);
			}
		}
		else if (iLocal_67.f_2[i /*26*/].f_2 != -1)
		{
			if (iLocal_67.f_2[i /*26*/].f_2 == iLocal_1791)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/]))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[i /*26*/]))
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[i /*26*/], false);
					else
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[i /*26*/]);
			
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/].f_1))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[i /*26*/].f_1))
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[i /*26*/].f_1, false);
			}
			else
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/]))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[i /*26*/]))
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[i /*26*/], true);
			
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/].f_1))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[i /*26*/].f_1))
						NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[i /*26*/].f_1, true);
			}
		}
		else
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/]))
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[i /*26*/]))
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[i /*26*/], true);
		
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/].f_1))
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[i /*26*/].f_1))
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[i /*26*/].f_1, true);
		}
	}

	return;
}

void func_332() // Position - 0x12AC9
{
	func_359();

	switch (uLocal_286[iLocal_1791 /*47*/].f_46)
	{
		case 0:
			if (iLocal_67.f_215 > 0)
				uLocal_286[iLocal_1791 /*47*/].f_46 = 1;
			break;
	
		case 1:
			func_343();
			func_333();
		
			if (iLocal_67.f_215 >= 4)
				uLocal_286[iLocal_1791 /*47*/].f_46 = 4;
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	
		case 4:
			func_378();
			break;
	}

	return;
}

void func_333() // Position - 0x12B43
{
	int numReservedMissionVehicles;

	numReservedMissionVehicles = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0);

	if (iLocal_67.f_213 != numReservedMissionVehicles)
	{
		if (iLocal_67.f_213 < numReservedMissionVehicles || func_334(iLocal_67.f_213, iLocal_67.f_213, iLocal_67.f_213, false, true))
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_67.f_213);
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_67.f_213);
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iLocal_67.f_213);
		}
	}

	return;
}

BOOL func_334(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x12B96
{
	if (func_342(iParam0, bParam3, bParam4) && func_341(iParam1, bParam3, bParam4) && func_335(iParam2, bParam3, bParam4))
		return true;

	return false;
}

BOOL func_335(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x12BCE
{
	return func_336(2, iParam0, true, bParam1, bParam2);
}

BOOL func_336(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x12BE2
{
	int num;
	int num2;

	if (!IS_BIT_SET(Global_1681448, 0))
		return 0;

	if (bParam2 && !bParam3 && iParam1 <= func_340(iParam0) - func_339(iParam0, false))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
				num = iParam1 - func_339(iParam0, false);
			else
				num = iParam1;
		
			num2 = func_340(iParam0) - func_338(iParam0);
		}
		else
		{
			if (bParam2)
				num = iParam1 - func_339(iParam0, false);
			else
				num = iParam1;
		
			num2 = func_340(iParam0) - func_339(iParam0, true);
		}
	
		if (!bParam4 && Global_1845281[PLAYER::PLAYER_ID() /*883*/] != 3)
			num2 = num2 - func_337(iParam0);
	
		if (num < num2)
			return 1;
	}

	return 0;
}

int func_337(int iParam0) // Position - 0x12CA8
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

int func_338(int iParam0) // Position - 0x12CE2
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

int func_339(int iParam0, BOOL bParam1) // Position - 0x12D28
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

int func_340(int iParam0) // Position - 0x12DC5
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

BOOL func_341(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x12E05
{
	return func_336(1, iParam0, true, bParam1, bParam2);
}

BOOL func_342(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x12E19
{
	return func_336(0, iParam0, true, bParam1, bParam2);
}

void func_343() // Position - 0x12E2D
{
	int num;
	var unk;

	switch (iLocal_1820)
	{
		case 0:
			if (func_358(131))
			{
				num = func_347();
			
				if (num == 0)
				{
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_2740, 7, 0, "TaxiDispatch", 0, 1);
				
					if (func_346(&uLocal_2740, 131, "MPTXIAU", "MPTXI_P1", 12, 1, 0, 0, false))
						iLocal_1820 = 1;
				}
				else if (num == 9)
				{
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&unk, "MPTXI_N", 16);
					TEXT_LABEL_APPEND_INT(&unk, num, 16);
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_2740, 7, 0, "TaxiDispatch", 0, 1);
					func_346(&uLocal_2740, 131, "MPTXIAU", &unk, 12, 1, 0, 0, false);
				}
			}
			else if (IS_BIT_SET(Global_2738935.f_868, 0))
			{
				if (func_347() == 0)
				{
					if (!_IS_NULL_VECTOR(uLocal_286[iLocal_1791 /*47*/].f_4.f_21))
					{
						uLocal_286[iLocal_1791 /*47*/].f_4.f_21 = { 0f, 0f, 0f };
						uLocal_286[iLocal_1791 /*47*/].f_4.f_24 = 0f;
					}
				
					MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_1), 0);
					iLocal_1820 = 2;
				}
			
				MISC::CLEAR_BIT(&(Global_2738935.f_868), 0);
			}
			break;
	
		case 1:
			if (func_345())
			{
				if (!func_344())
				{
					if (!_IS_NULL_VECTOR(uLocal_286[iLocal_1791 /*47*/].f_4.f_21))
					{
						uLocal_286[iLocal_1791 /*47*/].f_4.f_21 = { 0f, 0f, 0f };
						uLocal_286[iLocal_1791 /*47*/].f_4.f_24 = 0f;
					}
				
					MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_1), 0);
					iLocal_1820 = 2;
				}
				else
				{
					iLocal_1820 = 0;
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_1, 0))
				iLocal_1820 = 0;
			break;
	}

	return;
}

BOOL func_344() // Position - 0x12FBA
{
	if (Global_22335 == 1 || Global_23302 == 1)
		return true;

	return false;
}

BOOL func_345() // Position - 0x12FDD
{
	if (Global_22286 == 0)
		return true;

	return false;
}

BOOL func_346(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x12FF4
{
	func_139(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = 1;
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

	Global_2883585 = 1;
	return func_119(sParam3, iParam4, bParam8);
}

int func_347() // Position - 0x13053
{
	Ped playerPed;
	Vehicle vehiclePedIsIn;
	Vector3 entityCoords;
	Vector3 outPosition;
	float xSize;
	int nodeFlags;

	if (!IS_BIT_SET(Global_2738935.f_868, 0))
	{
		if (!func_357())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				_DISPLAY_HELP_TEXT("TXM_H03" /*You don't have enough cash to pay for a basic taxi fare.*/, -1);
		
			return 9;
		}
	
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			return 2;
	}

	if (!func_31())
		return 1;

	if (func_356(iLocal_1791))
		return 9;

	playerPed = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()));

	if (!PED::IS_PED_INJURED(playerPed))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (VEHICLE::IS_VEHICLE_MODEL(vehiclePedIsIn, -956048545))
					return 9;
		}
	}

	if (func_355(iLocal_1791))
		return 4;

	if (uLocal_286[iLocal_1791 /*47*/].f_4 != -1)
		return 4;

	if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_1, 0))
		return 4;

	if (func_185(PLAYER::PLAYER_ID(), true, false) && Global_1845281[PLAYER::PLAYER_ID() /*883*/] != 16)
		return 1;

	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 6f)
		return 9;

	if (func_354(PLAYER::PLAYER_ID(), true, false))
		return 9;

	if (func_353(PLAYER::PLAYER_ID(), 0))
		return 9;

	if (func_352())
		return 3;

	if (!func_348(1, 1, 1, true, false))
		return 1;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	xSize = 50f;
	nodeFlags = 1;

	if (!func_203(entityCoords))
		nodeFlags = 9;

	if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE(entityCoords, &outPosition, nodeFlags, 100f, 2.5f))
		return 3;

	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), outPosition, xSize, xSize, 20f, false, true, 0))
		return 3;

	if (func_327(entityCoords, true))
		return 3;

	return 0;
}

BOOL func_348(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x13217
{
	if (func_351(iParam0, bParam3, bParam4) || func_350(iParam1, bParam3, bParam4) || func_349(iParam2, bParam3, bParam4))
		return true;

	return false;
}

BOOL func_349(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13251
{
	return func_336(2, iParam0, false, bParam1, bParam2);
}

int func_350(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13265
{
	return func_336(1, iParam0, false, bParam1, bParam2);
}

int func_351(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13279
{
	return func_336(0, iParam0, false, bParam1, bParam2);
}

BOOL func_352() // Position - 0x1328D
{
	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -64f, -850f, 200f, -84f, -795f, 340f, false, true, 0))
			return true;

	return false;
}

BOOL func_353(Player plParam0, int iParam1) // Position - 0x132D3
{
	return IS_BIT_SET(Global_2657971[plParam0 /*465*/].f_219, iParam1);
}

BOOL func_354(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x132E9
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (IS_BIT_SET(Global_1845281[plParam0 /*883*/].f_268.f_33, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(Global_1845281[plParam0 /*883*/].f_268.f_33, 1))
			return true;

	if (bParam2)
		if (Global_2657971[plParam0 /*465*/].f_322.f_8 != -1)
			return true;

	return false;
}

BOOL func_355(int iParam0) // Position - 0x1334D
{
	int i;

	if (iParam0 != -1)
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (iLocal_67.f_2[i /*26*/].f_2 != -1)
				if (iLocal_67.f_2[i /*26*/].f_2 == iParam0)
					return true;
		}
	}

	return false;
}

BOOL func_356(int iParam0) // Position - 0x13393
{
	int i;

	if (iParam0 != -1)
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (iLocal_67.f_2[i /*26*/].f_3 != -1)
				if (iLocal_67.f_2[i /*26*/].f_3 == iParam0)
					return true;
		}
	}

	return false;
}

BOOL func_357() // Position - 0x133D9
{
	if (func_87() == 0f)
		return true;

	if ((float)func_176(PLAYER::PLAYER_ID()) > (float)iLocal_1998 * 1.5f)
		return true;

	return false;
}

BOOL func_358(int iParam0) // Position - 0x1340A
{
	if (Global_23400 || Global_23399 || Global_23401)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}

	if (Global_118[iParam0 /*10*/].f_8 != 181)
		if (Global_20930.f_1 == 10)
			if (Global_8115 == iParam0)
				return true;
			else
				return false;
		else
			return false;

	return false;
}

void func_359() // Position - 0x1346E
{
	int num;

	num = uLocal_286[iLocal_1791 /*47*/].f_4;

	if (num != -1)
	{
		if (iLocal_67.f_2[num /*26*/].f_7 == 5)
		{
			if (!IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 26))
				MISC::SET_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 26);
		}
		else if (iLocal_67.f_2[num /*26*/].f_7 == 6)
		{
			if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 26))
			{
				MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 26);
				func_360(false, num);
			}
		}
	}
	else if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 26))
	{
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 26);
	}

	return;
}

void func_360(BOOL bParam0, int iParam1) // Position - 0x1351E
{
	var unk;
	Vector3 vector;
	Any any;
	Hash hashKey;
	Hash hashKey2;
	BOOL flag;
	int p10;
	var unk31;

	if (IS_BIT_SET(uLocal_286[iLocal_1791 /*47*/].f_4.f_2, 26))
		MISC::CLEAR_BIT(&(uLocal_286[iLocal_1791 /*47*/].f_4.f_2), 26);

	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_7 = 8;
	vector = { 0f, 0f, 0f };
	any = { 0f, 0f, 0f };
	hashKey = -1;
	hashKey2 = -1;
	flag = false;
	p10 = 0;
	unk = { iLocal_67.f_2[iParam1 /*26*/] };
	vector = { unk.f_23 };
	any = { unk.f_8 };
	TEXT_LABEL_ASSIGN_STRING(&unk31, "FREEMODE_", 24);

	if (!_IS_NULL_VECTOR(vector))
	{
		TEXT_LABEL_APPEND_STRING(&unk31, func_362(ZONE::GET_NAME_OF_ZONE(vector)), 24);
		hashKey = MISC::GET_HASH_KEY(func_361(&unk31));
	}

	if (bParam0)
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk31, "FREEMODE_", 24);
		TEXT_LABEL_APPEND_STRING(&unk31, func_362(ZONE::GET_NAME_OF_ZONE(HUD::GET_BLIP_COORDS(unk.f_19))), 24);
		hashKey2 = MISC::GET_HASH_KEY(func_361(&unk31));
	}

	flag = bParam0;
	STATS::PLAYSTATS_FAST_TRVL(hashKey, vector, vector.f_1, vector.f_2, hashKey2, any, any.f_1, any.f_2, 7, flag, p10);
	return;
}

const char* func_361(const char* sParam0) // Position - 0x1362F
{
	return sParam0;
}

const char* func_362(const char* sParam0) // Position - 0x13639
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
				TEXT_LABEL_ASSIGN_STRING(&unk17, func_363(&unk), 64);
				TEXT_LABEL_APPEND_STRING(&text, &unk17, 64);
			}
		
			return HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&text, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&text));
		}
	}

	return sParam0;
}

char* func_363(char* sParam0) // Position - 0x136A1
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) == 1)
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "a") || MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
				return "A";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "b") || MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
				return "B";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "c") || MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
				return "C";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "d") || MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
				return "D";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "e") || MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
				return "E";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "f") || MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
				return "F";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "g") || MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
				return "G";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "h") || MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
				return "H";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "i") || MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
				return "I";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "j") || MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
				return "J";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "k") || MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
				return "K";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "l") || MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
				return "L";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "m") || MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
				return "M";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "n") || MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
				return "N";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "o") || MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
				return "O";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "p") || MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
				return "P";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "q") || MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
				return "Q";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "r") || MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
				return "R";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "s") || MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
				return "S";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "t") || MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
				return "T";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "u") || MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
				return "U";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "v") || MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
				return "V";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "w") || MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
				return "W";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "x") || MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
				return "X";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "y") || MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
				return "Y";
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "z") || MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
				return "Z";

	return sParam0;
}

int func_364() // Position - 0x13AB2
{
	return iLocal_67;
}

int func_365(int iParam0) // Position - 0x13ABC
{
	return uLocal_286[iParam0 /*47*/];
}

BOOL func_366() // Position - 0x13ACB
{
	return func_367() != -1;
}

int func_367() // Position - 0x13AD9
{
	return Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_8;
}

BOOL func_368() // Position - 0x13AF1
{
	return IS_BIT_SET(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 18);
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x13B09
{
	if (Global_1575055 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_376())
		return true;

	if (Global_2698758)
		return true;

	if (func_375())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_373())
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

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x13B8D
{
	switch (func_372())
	{
		case 0:
			return func_371();
	
		case 2:
			return -47565502;
	}

	return 0;
}

Hash func_371() // Position - 0x13BC0
{
	switch (Global_2698865)
	{
		case 0:
			return -931834499;
	
		default:
		
	}

	return -931834499;
}

int func_372() // Position - 0x13BE4
{
	return Global_32948;
}

BOOL func_373() // Position - 0x13BEF
{
	return Global_2684504.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x13BFE
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_375() // Position - 0x13C15
{
	return Global_2696172;
}

BOOL func_376() // Position - 0x13C21
{
	return Global_2684504.f_695;
}

void func_377() // Position - 0x13C30
{
	SYSTEM::WAIT(0);
	return;
}

void func_378() // Position - 0x13C3D
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/]))
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[i /*26*/]))
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[i /*26*/], true);
	
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iLocal_67.f_2[i /*26*/].f_1))
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iLocal_67.f_2[i /*26*/].f_1))
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iLocal_67.f_2[i /*26*/].f_1, true);
	}

	if (CAM::DOES_CAM_EXIST(caLocal_2719))
		if (CAM::IS_CAM_ACTIVE(caLocal_2719))
			func_40();

	if (bLocal_1994)
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_1831))
	{
		OBJECT::DELETE_OBJECT(&obLocal_1831);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_1832);
	}

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /*Taxi*/))
		HUD::RELEASE_NAMED_RENDERTARGET("taxi" /*Taxi*/);

	func_379();
	return;
}

void func_379() // Position - 0x13D05
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_380(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) // Position - 0x13D11
{
	func_390(32, uParam0);
	_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_67, 219, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_286, 1505, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);

	if (!_NETWORK_WAIT_FOR_HOST_BROADCAST_DATA())
		return false;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_381(131, 3, IS_BIT_SET(Global_2738935.f_868, 4));
		_STOPWATCH_INITIALIZE(&uLocal_1823, false, false);
		uLocal_286[iLocal_1791 /*47*/] = 0;
	}

	return true;
}

void func_381(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x13D7A
{
	int num;

	Global_9486 = echParam0;

	if (Global_118[echParam0 /*10*/].f_8 != 181)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (echParam1 == 4)
		{
			func_386(echParam0, 0, 1);
			func_386(echParam0, 1, 1);
			func_386(echParam0, 2, 1);
			func_385(echParam0, 0, 1);
			func_385(echParam0, 1, 1);
			func_385(echParam0, 2, 1);
		}
		else
		{
			if (func_384(echParam0, echParam1) == 1 && func_383(echParam0, echParam1) == 1)
				bParam2 = false;
		
			num = echParam1;
			func_386(echParam0, num, 1);
			func_385(echParam0, num, 1);
		
			if (echParam0 == CHAR_SESSANTA && !IS_BIT_SET(Global_2738935.f_6969, 4))
				bParam2 = false;
		
			if (echParam0 == CHAR_ISLDJ4 && !IS_BIT_SET(Global_2738935.f_6969, 3))
				bParam2 = false;
		
			if (echParam0 == CHAR_KDJ && !IS_BIT_SET(Global_2738935.f_6969, 3))
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_79389)
			{
				if (echParam1 != 4)
				{
					if (Global_20930 != echParam1)
					{
						Global_9459[echParam1 /*4*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9476[echParam1] = 1;
						Global_9481[echParam1] = echParam0;
					}
					else if (echParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9410[1 /*6*/].f_5 = echParam1;
						func_382();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
					Global_9410[1 /*6*/].f_5 = echParam1;
					func_382();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
				Global_9410[1 /*6*/].f_5 = echParam1;
				func_382();
			}
		}
	}

	return;
}

void func_382() // Position - 0x13EF8
{
	var txdName;
	var subject;
	const char* filenameForAudioConversation;

	TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_9486 /*29*/].f_7)), 64);

	if (Global_9505 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_9410[1 /*6*/]), 64);
		filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /*New Contact*/);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /*New Contact: ~n~~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_9410[1 /*6*/]);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
	}

	MISC::CLEAR_BIT(&Global_8800, 0);
	return;
}

int func_383(eCharacter echParam0, int iParam1) // Position - 0x13F73
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2169[echParam0 /*29*/].f_24[iParam1];
}

int func_384(eCharacter echParam0, int iParam1) // Position - 0x13F9D
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2169[echParam0 /*29*/].f_12[iParam1];
}

void func_385(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x13FC7
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2169[echParam0 /*29*/].f_24[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113969.f_28054[echParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_386(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x14010
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2169[echParam0 /*29*/].f_12[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113969.f_28054[echParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

BOOL _NETWORK_WAIT_FOR_HOST_BROADCAST_DATA() // Position - 0x14055
{
	int num;

	num = 0;

	while (true)
	{
		num = num + 1;
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return false;
	
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
			return true;
	
		if (func_376())
			return false;
	
		if (_DOES_EVENT_OF_TYPE_EXIST(157))
			return false;
	
		if (num >= 3600)
			return false;
	
		SYSTEM::WAIT(0);
	}

	return false;
}

int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0x140AE
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bNoTerminate)
				func_379();
			else
				return 0;
	
		if (!func_389(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bNoTerminate)
						func_379();
					else
						return 0;
			
				if (func_376())
					if (!bNoTerminate)
						func_379();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bNoTerminate)
						func_379();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bNoTerminate)
					func_379();
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
				func_379();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bNoTerminate)
			func_379();
		else
			return 0;

	return 1;
}

BOOL func_389(BOOL bParam0) // Position - 0x141C4
{
	bParam0;
	return Global_1575055;
}

void func_390(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x141D5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_379();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, uParam1.f_16);
	return;
}


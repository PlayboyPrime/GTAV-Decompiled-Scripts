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
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
#endregion

void main() // Position - 0x0 (0)
{
	var unk;
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
	sLocal_16 = "NULL";
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
	fLocal_65 = 0.952f;
	fLocal_66 = 0.949f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
		SCRIPT::TERMINATE_THIS_THREAD();

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	while (true)
	{
		if (func_260(&unk, 5, false))
			func_44();
	
		if (Global_1675212.f_1 == 0)
			flag = true;
	
		func_43();
		func_42();
		func_11();
	
		if (flag)
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("timerbar_lines");
			func_1();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0xEA (234)
{
	int i;
	var unk;

	func_10();
	func_9();
	func_8();
	func_7();
	func_6();
	func_5();
	func_4();
	func_3();
	func_2();
	Global_1675212 = 0;
	Global_1675212.f_1 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		Global_1675212.f_2[i /*2*/] = { unk };
		Global_1675212.f_23[i /*2*/] = { unk };
		Global_1675212.f_44[i /*2*/] = { unk };
		Global_1675212.f_65[i /*2*/] = { unk };
		Global_1675212.f_86[i /*2*/] = { unk };
		Global_1675212.f_107[i /*2*/] = { unk };
		Global_1675212.f_128[i /*2*/] = { unk };
		Global_1675212.f_149[i /*2*/] = { unk };
		Global_1675212.f_170[i /*2*/] = { unk };
		Global_1675212.f_191[i /*2*/] = { unk };
		Global_1675212.f_212[i /*2*/] = { unk };
		Global_1675212.f_233[i /*2*/] = { unk };
		Global_1675212.f_254[i /*2*/] = { unk };
		Global_1675212.f_275[i /*2*/] = { unk };
		Global_1675212.f_296[i /*2*/] = { unk };
		Global_1675212.f_317[i /*2*/] = { unk };
		Global_1675212.f_338[i /*2*/] = { unk };
		Global_1675212.f_359[i /*2*/] = { unk };
		Global_1675212.f_506[i /*2*/] = { unk };
		Global_1675212.f_527[i /*2*/] = { unk };
		Global_1675212.f_548[i /*2*/] = { unk };
		Global_1675212.f_569[i /*2*/] = { unk };
		Global_1675212.f_590[i /*2*/] = { unk };
		Global_1675212.f_611[i /*2*/] = { unk };
		Global_1675212.f_632[i /*2*/] = { unk };
		Global_1675212.f_653[i /*2*/] = { unk };
		Global_1675212.f_674[i /*2*/] = { unk };
		Global_1675212.f_695[i /*2*/] = { unk };
		Global_1675212.f_716[i /*2*/] = { unk };
		Global_1675212.f_737[i /*2*/] = { unk };
		Global_1675212.f_758[i /*2*/] = { unk };
		Global_1675212.f_779[i /*2*/] = { unk };
		Global_1675212.f_800[i /*2*/] = { unk };
		Global_1675212.f_821[i /*2*/] = { unk };
		Global_1675212.f_905[i /*2*/] = { unk };
		Global_1675212.f_1129[i /*2*/] = { unk };
		Global_1675212.f_937[i /*2*/] = { unk };
		Global_1675212.f_969[i /*2*/] = { unk };
		Global_1675212.f_1001[i /*2*/] = { unk };
		Global_1675212.f_1033[i /*2*/] = { unk };
		Global_1675212.f_1065[i /*2*/] = { unk };
		Global_1675212.f_1097[i /*2*/] = { unk };
		Global_1675212.f_926[i] = 0;
		Global_1675212.f_958[i] = 0;
		Global_1675212.f_990[i] = 0;
		Global_1675212.f_1022[i] = 0;
		Global_1675212.f_1054[i] = 0;
		Global_1675212.f_1086[i] = 0;
		Global_1675212.f_1118[i] = 0;
		Global_1675212.f_1150[i] = 0;
	}

	for (i = 0; i < 15; i = i + 1)
	{
		Global_1675212.f_7064[i] = 0;
		Global_1675212.f_7080[i] = 0;
		Global_1675212.f_7096[i] = 0;
		Global_1675212.f_7112[i] = 0;
	}

	Global_1675212.f_7128 = 0;
	Global_1675212.f_7129 = 0f;
	return;
}

void func_2() // Position - 0x4A5 (1189)
{
	var src;

	src = 10;
	src.f_11 = 10;
	src.f_172 = 10;
	src.f_183 = 10;
	src.f_194 = 10;
	src.f_205 = 10;
	src.f_216 = 10;

	if (Global_2672938)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1675212.f_5115), &src, 227);
	else
		Global_1675212.f_5115 = { src };

	return;
}

void func_3() // Position - 0x507 (1287)
{
	var src;

	src = 10;
	src.f_11 = 10;
	src.f_172 = 10;
	src.f_183 = 10;
	src.f_194 = 10;
	src.f_205 = 10;
	src.f_216 = 10;
	src.f_227 = 10;
	src.f_238 = 10;
	src.f_249 = 10;
	src.f_260 = 10;
	src.f_271 = 10;
	src.f_282 = 10;
	src.f_303 = 10;
	src.f_314 = 10;
	src.f_325 = 10;
	src.f_336 = 10;
	src.f_357 = 10;
	src.f_368 = 10;
	src.f_379 = 10;
	src.f_390 = 10;

	if (Global_2672938)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1675212.f_4714), &src, 401);
	else
		Global_1675212.f_4714 = { src };

	return;
}

void func_4() // Position - 0x5D9 (1497)
{
	var src;

	src = 10;
	src.f_11 = 10;
	src.f_172 = 10;
	src.f_183 = 10;
	src.f_194 = 10;
	src.f_205 = 10;
	src.f_216 = 10;
	src.f_227 = 10;
	src.f_238 = 10;
	src.f_249 = 10;
	src.f_260 = 10;
	src.f_271 = 10;
	src.f_282 = 10;
	src.f_443 = 10;
	src.f_454 = 10;
	src.f_465 = 10;
	src.f_486 = 10;
	src.f_497 = 10;
	src.f_508 = 10;
	src.f_519 = 10;
	src.f_530 = 10;
	src.f_541 = 10;
	src.f_552 = 10;
	src.f_563 = 10;
	src.f_574 = 10;
	src.f_585 = 10;
	src.f_596 = 10;
	src.f_607 = 10;
	src.f_618 = 10;

	if (Global_2672938)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1675212.f_4085), &src, 629);
	else
		Global_1675212.f_4085 = { src };

	return;
}

void func_5() // Position - 0x6EB (1771)
{
	var src;

	src = 10;
	src.f_11 = 10;
	src.f_172 = 10;
	src.f_183 = 10;
	src.f_194 = 10;
	src.f_205 = 10;
	src.f_216 = 10;
	src.f_227 = 10;
	src.f_238 = 10;
	src.f_259 = 10;
	src.f_270 = 10;
	src.f_281 = 10;
	src.f_292 = 10;
	src.f_303 = 10;
	src.f_314 = 10;
	src.f_325 = 10;

	if (Global_2672938)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1675212.f_3749), &src, 336);
	else
		Global_1675212.f_3749 = { src };

	return;
}

void func_6() // Position - 0x796 (1942)
{
	var src;

	src = 10;
	src.f_11 = 10;
	src.f_172 = 10;
	src.f_183 = 10;
	src.f_194 = 10;
	src.f_205 = 10;
	src.f_216 = 10;
	src.f_227 = 10;
	src.f_238 = 10;
	src.f_259 = 10;
	src.f_270 = 10;
	src.f_281 = 10;
	src.f_292 = 10;
	src.f_303 = 10;
	src.f_314 = 10;
	src.f_325 = 10;
	src.f_336 = 10;
	src.f_347 = 10;

	if (Global_2672938)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1675212.f_3391), &src, 358);
	else
		Global_1675212.f_3391 = { src };

	return;
}

void func_7() // Position - 0x851 (2129)
{
	var src;

	src = 10;
	src.f_11 = 10;
	src.f_172 = 10;
	src.f_183 = 10;
	src.f_194 = 10;
	src.f_205 = 10;
	src.f_216 = 10;
	src.f_227 = 10;
	src.f_248 = 10;
	src.f_259 = 10;
	src.f_420 = 10;
	src.f_431 = 10;
	src.f_442 = 10;
	src.f_453 = 10;
	src.f_464 = 10;
	src.f_475 = 10;
	src.f_486 = 10;
	src.f_497 = 10;
	src.f_508 = 10;

	if (Global_2672938)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1675212.f_2872), &src, 519);
	else
		Global_1675212.f_2872 = { src };

	return;
}

void func_8() // Position - 0x914 (2324)
{
	var src;

	src = 10;
	src.f_11 = 10;
	src.f_22 = 10;
	src.f_33 = 10;
	src.f_44 = 10;
	src.f_55 = 10;
	src.f_66 = 10;
	src.f_77 = 10;
	src.f_88 = 10;
	src.f_99 = 10;
	src.f_260 = 10;
	src.f_271 = 10;
	src.f_282 = 10;
	src.f_293 = 10;
	src.f_304 = 10;
	src.f_315 = 10;
	src.f_326 = 10;
	src.f_357 = 10;
	src.f_368 = 10;
	src.f_379 = 10;
	src.f_390 = 10;
	src.f_401 = 10;
	src.f_412 = 10;
	src.f_423 = 10;
	src.f_434 = 10;
	src.f_445 = 10;
	src.f_456 = 10;
	src.f_467 = 10;
	src.f_478 = 10;
	src.f_489 = 10;
	src.f_500 = 10;
	src.f_511 = 10;
	src.f_522 = 10;
	src.f_533 = 10;
	src.f_544 = 10;
	src.f_555 = 10;
	src.f_576 = 10;
	src.f_587 = 10;
	src.f_598 = 10;
	src.f_609 = 10;
	src.f_620 = 10;
	src.f_631 = 10;
	src.f_642 = 10;
	src.f_653 = 10;
	src.f_664 = 10;
	src.f_675 = 10;
	src.f_686 = 10;
	src.f_697 = 10;
	src.f_708 = 10;

	if (Global_2672938)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1675212.f_2153), &src, 719);
	else
		Global_1675212.f_2153 = { src };

	return;
}

void func_9() // Position - 0xAC6 (2758)
{
	var src;

	src = 10;
	src.f_11 = 10;
	src.f_22 = 10;
	src.f_183 = 10;
	src.f_194 = 10;
	src.f_205 = 10;
	src.f_216 = 10;
	src.f_227 = 10;
	src.f_258 = 10;
	src.f_269 = 10;
	src.f_280 = 10;
	src.f_301 = 10;
	src.f_312 = 10;
	src.f_323 = 10;
	src.f_334 = 10;

	if (Global_2672938)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1675212.f_1808), &src, 345);
	else
		Global_1675212.f_1808 = { src };

	return;
}

void func_10() // Position - 0xB6A (2922)
{
	var src;

	src = 10;
	src.f_11 = 10;
	src.f_22 = 10;
	src.f_183 = 10;
	src.f_194 = 10;
	src.f_205 = 10;
	src.f_216 = 10;
	src.f_227 = 10;
	src.f_238 = 10;
	src.f_269 = 10;
	src.f_280 = 10;
	src.f_291 = 10;
	src.f_312 = 10;
	src.f_323 = 10;
	src.f_334 = 10;
	src.f_345 = 10;
	src.f_356 = 10;
	src.f_367 = 10;
	src.f_378 = 10;
	src.f_389 = 10;
	src.f_400 = 10;
	src.f_411 = 10;
	src.f_422 = 10;
	src.f_433 = 10;
	src.f_444 = 10;
	src.f_455 = 10;
	src.f_466 = 10;
	src.f_477 = 10;
	src.f_488 = 10;
	src.f_499 = 10;
	src.f_510 = 10;
	src.f_521 = 10;
	src.f_532 = 10;
	src.f_543 = 10;
	src.f_554 = 10;
	src.f_565 = 10;
	src.f_576 = 10;
	src.f_587 = 10;
	src.f_598 = 10;
	src.f_609 = 10;
	src.f_620 = 10;

	if (Global_2672938)
		MISC::COPY_SCRIPT_STRUCT(&(Global_1675212.f_1177), &src, 631);
	else
		Global_1675212.f_1177 = { src };

	return;
}

void func_11() // Position - 0xCDD (3293)
{
	int i;

	func_41();
	Global_1675212 = 0;
	Global_1675212.f_1162 = 0.725f;
	Global_1675212.f_1161 = func_32();
	Global_1675212.f_1 = 0;
	Global_1675212.f_1163 = 0;
	Global_1675212.f_1164 = 0;
	Global_1675212.f_1165 = 0;
	Global_1675212.f_1166 = 0;
	Global_1675212.f_1167 = 0;
	Global_1675212.f_1168 = 0;
	Global_1675212.f_1169 = 0;
	Global_1675212.f_1170 = 0;
	Global_1675212.f_1171 = 0;
	Global_1675212.f_1172 = 0;
	Global_1675212.f_1173 = 0;
	Global_1675212.f_1174 = 0;
	Global_1675212.f_1175 = 0;
	Global_1675212.f_1176 = 0;
	Global_2698300 = 0;
	Global_2696430 = false;
	Global_2696431 = 0;
	Global_2698275 = 1;
	Global_2698999 = false;

	if (func_31(3))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(3, i) && func_29(3, i))
			{
				func_28(i);
				func_27(3, i);
			}
		}
	}

	if (func_31(6))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(6, i) && func_29(6, i))
			{
				func_26(i);
				func_27(6, i);
			}
		}
	}

	if (func_31(7))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(7, i) && func_29(7, i))
			{
				func_25(i);
				func_27(7, i);
			}
		}
	}

	if (func_31(4))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(4, i) && func_29(4, i))
			{
				func_24(i);
				func_27(4, i);
			}
		}
	}

	if (func_31(5))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(5, i) && func_29(5, i))
			{
				func_23(i);
				func_27(5, i);
			}
		}
	}

	if (func_31(1))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(1, i) && func_29(1, i))
			{
				func_22(i);
				func_27(1, i);
			}
		}
	}

	if (func_31(0))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(0, i) && func_29(0, i))
			{
				func_21(i);
				func_27(0, i);
			}
		}
	}

	if (func_31(2))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(2, i) && func_29(2, i) == false)
			{
				func_20(i);
				func_27(2, i);
			}
		}
	}

	if (func_31(8))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(8, i) && func_29(8, i) == false)
			{
				func_19(i);
				func_27(8, i);
			}
		}
	}

	if (func_31(9))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(9, i) && func_29(9, i) == false)
			{
				func_18(i);
				func_27(9, i);
			}
		}
	}

	if (func_31(10))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(10, i) && func_29(10, i) == false)
			{
				func_16(i);
				func_27(10, i);
			}
		}
	}

	if (func_31(11))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(11, i) && func_29(11, i) == false)
			{
				func_15(i);
				func_27(11, i);
			}
		}
	}

	if (func_31(12))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(12, i) && func_29(12, i) == false)
			{
				func_14(i);
				func_27(12, i);
			}
		}
	}

	if (func_31(13))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(13, i) && func_29(13, i) == false)
			{
				func_13(i);
				func_27(13, i);
			}
		}
	}

	if (func_31(14))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(14, i) && func_29(14, i) == false)
			{
				func_12(i);
				func_27(14, i);
			}
		}
	}

	return;
}

void func_12(int iParam0) // Position - 0x1163 (4451)
{
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_6676[iParam0 /*16*/], "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_6676.f_161[iParam0 /*16*/], "", 64);
	Global_1675212.f_6676.f_322[iParam0] = false;
	Global_1675212.f_6676.f_333[iParam0] = false;
	Global_1675212.f_6676.f_344[iParam0] = 2;
	Global_1675212.f_6676.f_355[iParam0] = HUD_COLOUR_PURE_WHITE;
	Global_1675212.f_6676.f_366[iParam0] = false;
	Global_1675212.f_6676.f_377[iParam0] = 0;
	return;
}

void func_13(int iParam0) // Position - 0x11E7 (4583)
{
	Global_1675212.f_6445[iParam0] = HUD_COLOUR_PURE_WHITE;
	Global_1675212.f_6445.f_11[iParam0] = 0;
	Global_1675212.f_6445.f_22[iParam0] = 0;
	Global_1675212.f_6445.f_33[iParam0] = 0;
	Global_1675212.f_6445.f_44[iParam0] = 0;
	Global_1675212.f_6445.f_55[iParam0] = 0;
	Global_1675212.f_6445.f_66[iParam0] = 0;
	Global_1675212.f_6445.f_77[iParam0] = 0;
	Global_1675212.f_6445.f_88[iParam0] = 0;
	Global_1675212.f_6445.f_99[iParam0] = 0;
	Global_1675212.f_6445.f_110[iParam0] = 0;
	Global_1675212.f_6445.f_121[iParam0] = 0;
	Global_1675212.f_6445.f_132[iParam0] = 0;
	Global_1675212.f_6445.f_143[iParam0] = 2;
	Global_1675212.f_6445.f_154[iParam0] = false;
	Global_1675212.f_6445.f_165[iParam0] = false;
	Global_1675212.f_6445.f_176[iParam0] = false;
	Global_1675212.f_6445.f_187[iParam0] = false;
	Global_1675212.f_6445.f_198[iParam0] = false;
	Global_1675212.f_6445.f_209[iParam0] = false;
	Global_1675212.f_6445.f_220[iParam0] = -1;
	return;
}

void func_14(int iParam0) // Position - 0x1313 (4883)
{
	Global_1675212.f_6043[iParam0] = 0;
	Global_1675212.f_6043.f_11[iParam0] = 0;
	Global_1675212.f_6043.f_22[iParam0] = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_6043.f_33[iParam0 /*6*/], "", 24);
	Global_1675212.f_6043.f_94[iParam0] = 0;
	Global_1675212.f_6043.f_105[iParam0] = false;
	Global_1675212.f_6043.f_116[iParam0] = HUD_COLOUR_PURE_WHITE;
	Global_1675212.f_6043.f_127[iParam0] = 0;
	Global_1675212.f_6043.f_138[iParam0] = 0;
	Global_1675212.f_6043.f_149[iParam0] = 0;
	Global_1675212.f_6043.f_160[iParam0] = 0;
	Global_1675212.f_6043.f_171[iParam0] = 0;
	Global_1675212.f_6043.f_182[iParam0] = 0;
	Global_1675212.f_6043.f_193[iParam0] = 0;
	Global_1675212.f_6043.f_204[iParam0] = 0;
	Global_1675212.f_6043.f_215[iParam0] = 0;
	Global_1675212.f_6043.f_226[iParam0] = 0;
	Global_1675212.f_6043.f_237[iParam0] = 2;
	Global_1675212.f_6043.f_248[iParam0] = 0;
	Global_1675212.f_6043.f_259[iParam0] = false;
	Global_1675212.f_6043.f_270[iParam0] = 0;
	Global_1675212.f_6043.f_281[iParam0] = 0;
	Global_1675212.f_6043.f_292[iParam0] = 0;
	Global_1675212.f_6043.f_303[iParam0] = 0;
	Global_1675212.f_6043.f_314[iParam0] = 0;
	Global_1675212.f_6043.f_325[iParam0] = 0;
	Global_1675212.f_6043.f_336[iParam0] = false;
	Global_1675212.f_6043.f_347[iParam0] = 0;
	Global_1675212.f_6043.f_358[iParam0] = 0;
	Global_1675212.f_6043.f_369[iParam0] = false;
	Global_1675212.f_6043.f_380[iParam0] = 0;
	Global_1675212.f_6043.f_391[iParam0] = 0;
	return;
}

void func_15(int iParam0) // Position - 0x14EA (5354)
{
	Global_1675212.f_5878[iParam0] = 0;
	Global_1675212.f_5878.f_11[iParam0] = 0;
	Global_1675212.f_5878.f_22[iParam0] = 0;
	Global_1675212.f_5878.f_33[iParam0] = 0;
	Global_1675212.f_5878.f_44[iParam0] = 0;
	Global_1675212.f_5878.f_55[iParam0] = 0;
	Global_1675212.f_5878.f_66[iParam0] = 0;
	Global_1675212.f_5878.f_77[iParam0] = 0;
	Global_1675212.f_5878.f_88[iParam0] = 0;
	Global_1675212.f_5878.f_99[iParam0] = 2;
	Global_1675212.f_5878.f_110[iParam0] = false;
	Global_1675212.f_5878.f_121[iParam0] = false;
	Global_1675212.f_5878.f_132[iParam0] = false;
	Global_1675212.f_5878.f_143[iParam0] = false;
	Global_1675212.f_5878.f_154[iParam0] = -1;
	return;
}

void func_16(int iParam0) // Position - 0x15C2 (5570)
{
	Global_1675212.f_5375.f_6[iParam0] = 0;
	Global_1675212.f_5375.f_17[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_5375.f_28[iParam0 /*16*/], "", 64);
	Global_1675212.f_5375.f_189[iParam0] = -1;
	Global_1675212.f_5375.f_200[iParam0] = HUD_COLOUR_WHITE;
	Global_1675212.f_5375.f_211[iParam0] = -1;
	Global_1675212.f_5375.f_222[iParam0] = 2;
	Global_1675212.f_5375.f_233[iParam0] = false;
	Global_1675212.f_5375.f_244[iParam0] = 0;
	_STOPWATCH_DESTROY(&Global_1675212.f_5375.f_255[iParam0 /*2*/]);
	Global_1675212.f_5375.f_276[iParam0] = -1;
	Global_1675212.f_5375.f_470[iParam0] = false;
	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x167B (5755)
{
	uParam0->f_1 = 0;
	return;
}

void func_18(int iParam0) // Position - 0x1688 (5768)
{
	Global_1675212.f_5342[iParam0] = 0;
	Global_1675212.f_5342.f_11[iParam0] = HUD_COLOUR_WHITE;
	Global_1675212.f_5342.f_22[iParam0] = 2;
	return;
}

void func_19(int iParam0) // Position - 0x16B8 (5816)
{
	Global_1675212.f_5115[iParam0] = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_5115.f_11[iParam0 /*16*/], "", 64);
	Global_1675212.f_5115.f_172[iParam0] = 0;
	Global_1675212.f_5115[iParam0] = 0f;
	Global_1675212.f_5115.f_183[iParam0] = 0;
	Global_1675212.f_5115.f_194[iParam0] = 0;
	Global_1675212.f_5115.f_205[iParam0] = 0;
	Global_1675212.f_5115.f_216[iParam0] = 2;
	return;
}

void func_20(int iParam0) // Position - 0x1730 (5936)
{
	Global_1675212.f_2153[iParam0] = 0;
	Global_1675212.f_2153.f_11[iParam0] = 0;
	Global_1675212.f_2153.f_22[iParam0] = 0;
	Global_1675212.f_2153.f_33[iParam0] = 0;
	Global_1675212.f_2153.f_44[iParam0] = 0;
	Global_1675212.f_2153.f_55[iParam0] = 0;
	Global_1675212.f_2153.f_66[iParam0] = 0;
	Global_1675212.f_2153.f_77[iParam0] = 0;
	Global_1675212.f_2153.f_88[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_2153.f_99[iParam0 /*16*/], "", 64);
	Global_1675212.f_2153.f_260[iParam0] = -1;
	Global_1675212.f_2153.f_271[iParam0] = -1;
	Global_1675212.f_2153.f_282[iParam0] = HUD_COLOUR_GREEN;
	Global_1675212.f_2153.f_293[iParam0] = HUD_COLOUR_RED;
	Global_1675212.f_2153.f_304[iParam0] = -1;
	Global_1675212.f_2153.f_315[iParam0] = 2;
	Global_1675212.f_2153.f_326[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1675212.f_2153.f_357[iParam0] = false;
	Global_1675212.f_2153.f_368[iParam0] = 1;
	Global_1675212.f_2153.f_379[iParam0] = 1;
	Global_1675212.f_2153.f_390[iParam0] = 1;
	Global_1675212.f_2153.f_401[iParam0] = 1;
	Global_1675212.f_2153.f_412[iParam0] = 1;
	Global_1675212.f_2153.f_423[iParam0] = 1;
	Global_1675212.f_2153.f_434[iParam0] = 1;
	Global_1675212.f_2153.f_445[iParam0] = 1;
	Global_1675212.f_2153.f_456[iParam0] = 1;
	Global_1675212.f_2153.f_467[iParam0] = 1;
	Global_1675212.f_2153.f_478[iParam0] = 1;
	Global_1675212.f_2153.f_489[iParam0] = 1;
	Global_1675212.f_2153.f_500[iParam0] = 1;
	Global_1675212.f_2153.f_511[iParam0] = 1;
	Global_1675212.f_2153.f_522[iParam0] = 1;
	Global_1675212.f_2153.f_533[iParam0] = 1;
	_STOPWATCH_DESTROY(&Global_1675212.f_2153.f_555[iParam0 /*2*/]);
	Global_1675212.f_2153.f_576[iParam0] = -1;
	Global_1675212.f_2153.f_609[iParam0] = false;
	return;
}

void func_21(int iParam0) // Position - 0x196B (6507)
{
	Global_1675212.f_1177[iParam0] = 0;
	Global_1675212.f_1177.f_11[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_1177.f_22[iParam0 /*16*/], "", 64);
	Global_1675212.f_1177.f_183[iParam0] = -1;
	Global_1675212.f_1177.f_194[iParam0] = HUD_COLOUR_WHITE;
	Global_1675212.f_1177.f_205[iParam0] = -1;
	Global_1675212.f_1177.f_227[iParam0] = 2;
	Global_1675212.f_1177.f_238[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1675212.f_1177.f_269[iParam0] = false;
	Global_1675212.f_1177.f_280[iParam0] = 0;
	_STOPWATCH_DESTROY(&Global_1675212.f_1177.f_291[iParam0 /*2*/]);
	Global_1675212.f_1177.f_312[iParam0] = -1;
	Global_1675212.f_1177.f_345[iParam0] = false;
	Global_1675212.f_1177.f_356[iParam0] = 0;
	Global_1675212.f_1177.f_367[iParam0] = false;
	Global_1675212.f_1177.f_455[iParam0] = HUD_COLOUR_WHITE;
	Global_1675212.f_1177.f_466[iParam0] = -1;
	return;
}

void func_22(int iParam0) // Position - 0x1A7B (6779)
{
	Global_1675212.f_1808[iParam0] = 0;
	Global_1675212.f_1808.f_11[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_1808.f_22[iParam0 /*16*/], "", 64);
	Global_1675212.f_1808.f_183[iParam0] = -1;
	Global_1675212.f_1808.f_194[iParam0] = HUD_COLOUR_WHITE;
	Global_1675212.f_1808.f_205[iParam0] = -1;
	Global_1675212.f_1808.f_216[iParam0] = 2;
	Global_1675212.f_1808.f_227[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_1675212.f_1808.f_258[iParam0] = false;
	Global_2750358[iParam0] = 0;
	Global_2750369[iParam0] = 0;
	Global_2750380[iParam0] = 0;
	Global_2750391[iParam0] = 0;
	Global_2750402[iParam0] = 0;
	Global_2750413[iParam0] = 0;
	Global_2750424[iParam0] = 0;
	Global_2750435[iParam0] = 0;
	Global_2750446[iParam0] = 0;
	Global_2750457[iParam0] = 0;
	Global_2750468[iParam0] = 0;
	Global_2750479[iParam0] = 0;
	Global_2750490[iParam0] = 0;
	Global_2750501[iParam0] = 0;
	Global_2750512[iParam0] = 0;
	Global_2750523[iParam0] = 0;
	_STOPWATCH_DESTROY(&Global_1675212.f_1808.f_280[iParam0 /*2*/]);
	Global_1675212.f_1808.f_301[iParam0] = -1;
	return;
}

void func_23(int iParam0) // Position - 0x1BC1 (7105)
{
	Global_1675212.f_3749[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_3749.f_11[iParam0 /*16*/], "", 64);
	Global_1675212.f_3749.f_172[iParam0] = -1;
	Global_1675212.f_3749.f_183[iParam0] = -1;
	Global_1675212.f_3749.f_194[iParam0] = HUD_COLOUR_WHITE;
	Global_1675212.f_3749.f_205[iParam0] = -1;
	Global_1675212.f_3749.f_216[iParam0] = 2;
	Global_1675212.f_3749.f_227[iParam0] = false;
	_STOPWATCH_DESTROY(&Global_1675212.f_3749.f_238[iParam0 /*2*/]);
	Global_1675212.f_3749.f_259[iParam0] = -1;
	Global_1675212.f_3749.f_314[iParam0] = false;
	Global_1675212.f_3749.f_325[iParam0] = 0;
	return;
}

void func_24(int iParam0) // Position - 0x1C79 (7289)
{
	Global_1675212.f_3391[iParam0] = -1;
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_3391.f_11[iParam0 /*16*/], "", 64);
	Global_1675212.f_3391.f_172[iParam0] = -1;
	Global_1675212.f_3391.f_183[iParam0] = -1;
	Global_1675212.f_3391.f_194[iParam0] = HUD_COLOUR_WHITE;
	Global_1675212.f_3391.f_205[iParam0] = -1;
	Global_1675212.f_3391.f_216[iParam0] = 2;
	Global_1675212.f_3391.f_227[iParam0] = false;
	_STOPWATCH_DESTROY(&Global_1675212.f_3391.f_238[iParam0 /*2*/]);
	Global_1675212.f_3391.f_259[iParam0] = -1;
	return;
}

void func_25(int iParam0) // Position - 0x1D13 (7443)
{
	Global_1675212.f_4714[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_4714.f_11[iParam0 /*16*/], "", 64);
	Global_1675212.f_4714.f_172[iParam0] = -1;
	Global_1675212.f_4714.f_183[iParam0] = -1;
	Global_1675212.f_4714.f_194[iParam0] = 0;
	Global_1675212.f_4714.f_205[iParam0] = HUD_COLOUR_WHITE;
	Global_1675212.f_4714.f_216[iParam0] = 0;
	Global_1675212.f_4714.f_227[iParam0] = -1;
	Global_1675212.f_4714.f_249[iParam0] = 2;
	Global_1675212.f_4714.f_260[iParam0] = false;
	_STOPWATCH_DESTROY(&Global_1675212.f_4714.f_282[iParam0 /*2*/]);
	Global_1675212.f_4714.f_303[iParam0] = -1;
	return;
}

void func_26(int iParam0) // Position - 0x1DCB (7627)
{
	Global_1675212.f_4085[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_4085.f_11[iParam0 /*16*/], "", 64);
	Global_1675212.f_4085.f_172[iParam0] = -1;
	Global_1675212.f_4085.f_183[iParam0] = HUD_COLOUR_WHITE;
	Global_1675212.f_4085.f_194[iParam0] = -1;
	Global_1675212.f_4085.f_260[iParam0] = 2;
	Global_1675212.f_4085.f_271[iParam0] = false;
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_4085.f_282[iParam0 /*16*/], "", 64);
	Global_1675212.f_4085.f_443[iParam0] = 0;
	Global_1675212.f_4085.f_454[iParam0] = -1f;
	_STOPWATCH_DESTROY(&Global_1675212.f_4085.f_465[iParam0 /*2*/]);
	Global_1675212.f_4085.f_486[iParam0] = -1;
	Global_1675212.f_4085.f_519[iParam0] = 0;
	return;
}

void func_27(int iParam0, int iParam1) // Position - 0x1E9A (7834)
{
	MISC::CLEAR_BIT(&Global_1675212.f_7096[iParam0], iParam1);
	return;
}

void func_28(int iParam0) // Position - 0x1EB3 (7859)
{
	Global_1675212.f_2872[iParam0] = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_1675212.f_2872.f_11[iParam0 /*16*/], "", 64);
	Global_1675212.f_2872.f_172[iParam0] = -1;
	Global_1675212.f_2872.f_183[iParam0] = HUD_COLOUR_WHITE;
	Global_1675212.f_2872.f_194[iParam0] = -1;
	Global_1675212.f_2872.f_205[iParam0] = 2;
	Global_1675212.f_2872.f_216[iParam0] = false;
	_STOPWATCH_DESTROY(&Global_1675212.f_2872.f_227[iParam0 /*2*/]);
	Global_1675212.f_2872.f_248[iParam0] = -1;
	Global_1675212.f_2872.f_508[iParam0] = HUD_COLOUR_PURE_WHITE;
	return;
}

BOOL func_29(int iParam0, int iParam1) // Position - 0x1F4D (8013)
{
	return IS_BIT_SET(Global_1675212.f_7064[iParam0], iParam1);
}

BOOL func_30(int iParam0, int iParam1) // Position - 0x1F63 (8035)
{
	return IS_BIT_SET(Global_1675212.f_7096[iParam0], iParam1);
}

BOOL func_31(int iParam0) // Position - 0x1F79 (8057)
{
	if (Global_1675212.f_7064[iParam0] > 0)
		return true;

	return false;
}

float func_32() // Position - 0x1F95 (8085)
{
	float num;

	num = 0.925f - 0.002f;
	num = num + (-0.036f * (float)Global_1675212.f_1163);

	if (Global_1675212.f_1164 == 1)
		num = num + -0.15f;
	else if (Global_1675212.f_1165 == 1)
		num = num + (-0.048f - 0.753f);

	if (Global_1675212.f_1168 == true)
		num = num + -0.919f;

	if (Global_1675212.f_1169 == 1)
		num = num + -0.184f;

	if (Global_1675212.f_1170 == 1)
		num = num + -0.522f;

	if (Global_1675212.f_1166 == 1 && Global_1675212.f_1167 == 0)
	{
		switch (_GET_CURRENT_PLAYER_CHARACTER())
		{
			case CHAR_MICHAEL:
				num = num + -0.405f;
				break;
		
			case CHAR_TREVOR:
				num = num + -0.405f;
				break;
		
			case CHAR_FRANKLIN:
				num = num + -0.414f;
				break;
		
			default:
				if (!func_33())
					num = num + -0.405f;
				break;
		}
	}

	return num;
}

BOOL func_33() // Position - 0x20A2 (8354)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
		return true;

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x20BF (8383)
{
	func_35();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_35() // Position - 0x20D8 (8408)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_37(character) && !func_36(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_37(Global_114135.f_2367.f_539.f_4321))
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

BOOL func_36(int iParam0) // Position - 0x21D5 (8661)
{
	return Global_44181 == iParam0;
}

BOOL func_37(eCharacter echParam0) // Position - 0x21E3 (8675)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x21EF (8687)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x222C (8748)
{
	if (func_37(character))
		return func_40(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_40(eCharacter echParam0) // Position - 0x2251 (8785)
{
	return Global_2201[echParam0 /*29*/];
}

void func_41() // Position - 0x2260 (8800)
{
	Global_1684744 = Global_1675212;
	Global_1684745 = Global_1675212.f_1163;
	return;
}

void func_42() // Position - 0x227B (8827)
{
	int i;

	for (i = 0; i <= 14; i = i + 1)
	{
		Global_1675212.f_7064[i] = 0;
	}

	return;
}

void func_43() // Position - 0x22A2 (8866)
{
	Global_2698147 = 0;
	return;
}

void func_44() // Position - 0x22AF (8879)
{
	int i;
	int j;
	int k;
	var unk;
	int num;
	int verticalAlign;
	int num2;
	int num3;

	unk = 12;

	if (HUD::BUSYSPINNER_IS_DISPLAYING())
		if (Global_1675212.f_1163 == 0)
			func_259(1);

	func_255();

	if (func_250())
	{
		if (MISC::GET_FRAME_COUNT() % 100 == 0)
			if (func_244(PLAYER::PLAYER_ID()))
				func_243();
	
		if (func_242())
			Global_1673655.f_1184 = 1;
	
		for (i = 0; i <= 9; i = i + 1)
		{
			num = 0;
		
			if (func_29(7, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_4085.f_260[i];
		
			num = 1;
		
			if (func_29(3, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_2872.f_205[i];
		
			num = 2;
		
			if (func_29(4, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_3391.f_216[i];
		
			num = 3;
		
			if (func_29(5, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_3749.f_216[i];
		
			num = 4;
		
			if (func_29(1, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_1808.f_216[i];
		
			num = 5;
		
			if (func_29(0, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_1177.f_227[i];
		
			num = 6;
		
			if (func_29(6, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_4085.f_260[i];
		
			num = 7;
		
			if (func_29(2, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_2153.f_315[i];
		
			num = 8;
		
			if (func_29(8, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_5115.f_216[i];
		
			num = 9;
		
			if (func_29(9, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_5342.f_22[i];
		
			num = 10;
		
			if (func_29(10, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_5375.f_222[i];
		
			num = 11;
		
			if (func_29(11, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_5878.f_99[i];
		
			num = 12;
		
			if (func_29(12, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_6043.f_237[i];
		
			num = 13;
		
			if (func_29(13, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_6445.f_143[i];
		
			num = 14;
		
			if (func_29(14, i))
				Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_6676.f_344[i];
		}
	
		num = 0;
	
		if (Global_1673655.f_1184 == 1)
		{
			for (i = 0; i <= 9; i = i + 1)
			{
				num = 0;
			
				if (func_29(7, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_4714.f_249[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_4714.f_249[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_4714.f_249[i] == 2 || Global_1675212.f_4714.f_249[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_4714.f_249[i] == 13 || Global_1675212.f_4714.f_249[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_4714.f_249[i];
				}
			
				num = 1;
			
				if (func_29(3, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_2872.f_205[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_2872.f_205[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_2872.f_205[i] == 2 || Global_1675212.f_2872.f_205[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_2872.f_205[i] == 13 || Global_1675212.f_2872.f_205[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_2872.f_205[i];
				}
			
				num = 2;
			
				if (func_29(4, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_3391.f_216[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_3391.f_216[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_3391.f_216[i] == 2 || Global_1675212.f_3391.f_216[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_3391.f_216[i] == 13 || Global_1675212.f_3391.f_216[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_3391.f_216[i];
				}
			
				num = 3;
			
				if (func_29(5, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_3749.f_216[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_3749.f_216[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_3749.f_216[i] == 2 || Global_1675212.f_3749.f_216[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_3749.f_216[i] == 13 || Global_1675212.f_3749.f_216[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_3749.f_216[i];
				}
			
				num = 4;
			
				if (func_29(1, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_1808.f_216[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_1808.f_216[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_1808.f_216[i] == 2 || Global_1675212.f_1808.f_216[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_1808.f_216[i] == 13 || Global_1675212.f_1808.f_216[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_1808.f_216[i];
				}
			
				num = 5;
			
				if (func_29(0, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_1177.f_227[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_1177.f_227[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_1177.f_227[i] == 2 || Global_1675212.f_1177.f_227[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_1177.f_227[i] == 13 || Global_1675212.f_1177.f_227[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_1177.f_227[i];
				}
			
				num = 6;
			
				if (func_29(6, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_4085.f_260[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_4085.f_260[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_4085.f_260[i] == 2 || Global_1675212.f_4085.f_260[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_4085.f_260[i] == 13 || Global_1675212.f_4085.f_260[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_4085.f_260[i];
				}
			
				num = 7;
			
				if (func_29(2, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_2153.f_315[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_2153.f_315[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_2153.f_315[i] == 2 || Global_1675212.f_2153.f_315[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_2153.f_315[i] == 13 || Global_1675212.f_2153.f_315[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_2153.f_315[i];
				}
			
				num = 8;
			
				if (func_29(8, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_5115.f_216[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_5115.f_216[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_5115.f_216[i] == 2 || Global_1675212.f_5115.f_216[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_5115.f_216[i] == 13 || Global_1675212.f_5115.f_216[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_5115.f_216[i];
				}
			
				num = 9;
			
				if (func_29(9, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_5342.f_22[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_5342.f_22[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_5342.f_22[i] == 2 || Global_1675212.f_5342.f_22[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_5342.f_22[i] == 13 || Global_1675212.f_5342.f_22[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_5342.f_22[i];
				}
			
				num = 10;
			
				if (func_29(10, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_5375.f_222[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_5375.f_222[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_5375.f_222[i] == 2 || Global_1675212.f_5375.f_222[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_5375.f_222[i] == 13 || Global_1675212.f_5375.f_222[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_5375.f_222[i];
				}
			
				num = 11;
			
				if (func_29(11, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_5878.f_99[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_5878.f_99[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_5878.f_99[i] == 2 || Global_1675212.f_5878.f_99[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_5878.f_99[i] == 13 || Global_1675212.f_5878.f_99[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_5878.f_99[i];
				}
			
				num = 12;
			
				if (func_29(12, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_6043.f_237[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_6043.f_237[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_6043.f_237[i] == 2 || Global_1675212.f_6043.f_237[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_6043.f_237[i] == 13 || Global_1675212.f_6043.f_237[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_6043.f_237[i];
				}
			
				num = 13;
			
				if (func_29(13, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_6445.f_143[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_6445.f_143[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_6445.f_143[i] == 2 || Global_1675212.f_6445.f_143[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_6445.f_143[i] == 13 || Global_1675212.f_6445.f_143[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_6445.f_143[i];
				}
			
				num = 14;
			
				if (func_29(14, i))
				{
					Global_1673655.f_1185[num /*11*/][i] = Global_1675212.f_6676.f_344[i];
				
					if (Global_1673655.f_1185[num /*11*/][i] != 1)
						if (Global_1673655.f_1351[num /*11*/][i] != Global_1675212.f_6676.f_344[i] && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_6676.f_344[i] == 2 || Global_1675212.f_6676.f_344[i] != 2 && Global_1673655.f_1351[num /*11*/][i] == 0 && Global_1675212.f_6676.f_344[i] == 13 || Global_1675212.f_6676.f_344[i] != 13)
							Global_1673655.f_1351[num /*11*/][i] = Global_1675212.f_6676.f_344[i];
				}
			}
		
			for (i = 0; i <= 9; i = i + 1)
			{
				for (j = 0; j <= 14; j = j + 1)
				{
					if (Global_1673655.f_1185[j /*11*/][i] != Global_1673655.f_1351[j /*11*/][i])
						Global_1673655.f_1351[j /*11*/][i] = 0;
				}
			}
		
			for (k = 0; k <= 11; k = k + 1)
			{
				unk[k] = 0;
			}
		
			for (i = 0; i <= 9; i = i + 1)
			{
				for (j = 0; j <= 14; j = j + 1)
				{
					if (Global_1673655.f_1185[j /*11*/][i] == 3)
						unk[0] = 1;
				
					if (Global_1673655.f_1185[j /*11*/][i] == 4)
						unk[1] = 1;
				
					if (Global_1673655.f_1185[j /*11*/][i] == 5)
						unk[2] = 1;
				
					if (Global_1673655.f_1185[j /*11*/][i] == 6)
						unk[3] = 1;
				
					if (Global_1673655.f_1185[j /*11*/][i] == 7)
						unk[4] = 1;
				
					if (Global_1673655.f_1185[j /*11*/][i] == 8)
						unk[5] = 1;
				
					if (Global_1673655.f_1185[j /*11*/][i] == 9)
						unk[6] = 1;
				
					if (Global_1673655.f_1185[j /*11*/][i] == 10)
						unk[7] = 1;
				
					if (Global_1673655.f_1185[j /*11*/][i] == 11)
						unk[8] = 1;
				
					if (Global_1673655.f_1185[j /*11*/][i] == 12)
						unk[9] = 1;
				}
			}
		
			for (i = 0; i <= 9; i = i + 1)
			{
				for (j = 0; j <= 14; j = j + 1)
				{
					if (Global_1673655.f_1185[j /*11*/][i] == 2)
					{
						for (k = 0; k <= 11; k = k + 1)
						{
							if (unk[k] == 0)
							{
								Global_1673655.f_1185[j /*11*/][i] = k + 3;
								unk[k] = 1;
								Global_1673655.f_1351[j /*11*/][i] = Global_1673655.f_1185[j /*11*/][i];
								k = 12;
							}
						}
					}
				}
			}
		
			for (i = 0; i <= 9; i = i + 1)
			{
				for (j = 0; j <= 14; j = j + 1)
				{
					if (Global_1673655.f_1185[j /*11*/][i] == 13)
					{
						for (k = 11; k >= 1; k = k + -1)
						{
							if (unk[k] == 0 && unk[k - 1] == 1)
							{
								Global_1673655.f_1185[j /*11*/][i] = k + 3;
								unk[k] = 1;
								Global_1673655.f_1351[j /*11*/][i] = Global_1673655.f_1185[j /*11*/][i];
								k = 0;
							}
							else if (k == 1 && unk[0] == 0)
							{
								Global_1673655.f_1185[j /*11*/][i] = 3;
								unk[0] = 1;
								Global_1673655.f_1351[j /*11*/][i] = Global_1673655.f_1185[j /*11*/][i];
								k = 0;
							}
						}
					}
				}
			}
		
			Global_1673655.f_1184 = 0;
		}
	
		if (Global_1675212.f_1168)
			verticalAlign = 84;
		else
			verticalAlign = 66;
	
		if (func_250())
		{
			for (j = 0; j <= 15; j = j + 1)
			{
				if (func_241(0))
				{
					if (func_31(func_239(0)))
					{
						for (i = 0; i <= 9; i = i + 1)
						{
							num2 = func_238(func_239(0));
						
							if (func_237(num2))
							{
								if (Global_1673655.f_1351[num2 /*11*/][i] == j + 3 || Global_1673655.f_1185[num2 /*11*/][i] == 1)
								{
									if (func_233(Global_1673655.f_1185[num2 /*11*/][i]))
									{
										func_229(true);
									
										if (Global_1675212.f_1165 == 0)
										{
											GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
											GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
										}
									
										func_228(func_239(0), i);
									
										if (Global_1675212.f_1165 == 0)
											GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
									
										func_229(false);
									}
								}
							}
						}
					}
				}
			
				if (func_241(1))
				{
					if (func_31(func_239(1)))
					{
						for (i = 0; i <= 9; i = i + 1)
						{
							num3 = func_238(func_239(1));
						
							if (func_237(num3))
							{
								if (Global_1673655.f_1351[num3 /*11*/][i] == j + 3 || Global_1673655.f_1185[num3 /*11*/][i] == 1)
								{
									if (func_233(Global_1673655.f_1185[num3 /*11*/][i]))
									{
										func_229(true);
									
										if (Global_1675212.f_1165 == 0)
										{
											GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
											GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
										}
									
										func_228(func_239(1), i);
									
										if (Global_1675212.f_1165 == 0)
											GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
									
										func_229(false);
									}
								}
							}
						}
					}
				}
			
				if (func_31(7) && !func_227(7))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[0 /*11*/][i] == j + 3 || Global_1673655.f_1185[0 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[0 /*11*/][i]))
							{
								func_229(true);
							
								if (Global_1675212.f_1165 == 0)
								{
									GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
									GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								}
							
								func_211(i, Global_1675212.f_4714[i], &Global_1675212.f_4714.f_11[i /*16*/], Global_1675212.f_4714.f_172[i], Global_1675212.f_4714.f_194[i], Global_1675212.f_4714.f_216[i], Global_1675212.f_4714.f_205[i], Global_1675212.f_4714.f_183[i], Global_1675212.f_4714.f_227[i], Global_1675212.f_4714.f_260[i], Global_1675212.f_4714.f_314[i], Global_1675212.f_4714.f_325[i], Global_1675212.f_4714.f_357[i], Global_1675212.f_4714.f_238[i], Global_1675212.f_4714.f_271[i], Global_1675212.f_4714.f_368[i], Global_1675212.f_4714.f_379[i], Global_1675212.f_4714.f_390[i]);
							
								if (Global_1675212.f_1165 == 0)
									GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
							
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(3) && !func_227(3))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[1 /*11*/][i] == j + 3 || Global_1673655.f_1185[1 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[1 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_210(i, Global_1675212.f_2872[i], &Global_1675212.f_2872.f_11[i /*16*/], Global_1675212.f_2872.f_183[i], Global_1675212.f_2872.f_172[i], Global_1675212.f_2872.f_194[i], Global_1675212.f_2872.f_216[i], &Global_1675212.f_2872.f_259[i /*16*/], Global_1675212.f_2872.f_420[i], Global_1675212.f_2872.f_453[i], Global_1675212.f_2872.f_431[i], Global_1675212.f_2872.f_442[i], Global_1675212.f_2872.f_464[i], Global_1675212.f_2872.f_475[i], Global_1675212.f_2872.f_486[i], Global_1675212.f_2872.f_497[i], Global_1675212.f_2872.f_508[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(4) && !func_227(4))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[2 /*11*/][i] == j + 3 || Global_1673655.f_1185[2 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[2 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_209(i, Global_1675212.f_3391[i], Global_1675212.f_3391.f_172[i], &Global_1675212.f_3391.f_11[i /*16*/], Global_1675212.f_3391.f_194[i], Global_1675212.f_3391.f_183[i], Global_1675212.f_3391.f_205[i], Global_1675212.f_3391.f_227[i], Global_1675212.f_3391.f_270[i], Global_1675212.f_3391.f_281[i], Global_1675212.f_3391.f_292[i], Global_1675212.f_3391.f_303[i], Global_1675212.f_3391.f_314[i], Global_1675212.f_3391.f_325[i], Global_1675212.f_3391.f_336[i], Global_1675212.f_3391.f_347[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(5) && !func_227(5))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[3 /*11*/][i] == j + 3 || Global_1673655.f_1185[3 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[3 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_208(i, Global_1675212.f_3749[i], Global_1675212.f_3749.f_172[i], &Global_1675212.f_3749.f_11[i /*16*/], Global_1675212.f_3749.f_194[i], Global_1675212.f_3749.f_183[i], Global_1675212.f_3749.f_205[i], Global_1675212.f_3749.f_227[i], Global_1675212.f_3749.f_270[i], Global_1675212.f_3749.f_281[i], Global_1675212.f_3749.f_292[i], Global_1675212.f_3749.f_303[i], Global_1675212.f_3749.f_314[i], Global_1675212.f_3749.f_325[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(1) && !func_227(1))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[4 /*11*/][i] == j + 3 || Global_1673655.f_1185[4 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[4 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_198(i, Global_1675212.f_1808[i], Global_1675212.f_1808.f_11[i], &Global_1675212.f_1808.f_22[i /*16*/], Global_1675212.f_1808.f_194[i], Global_1675212.f_1808.f_205[i], Global_1675212.f_1808.f_258[i], Global_1675212.f_1808.f_183[i], Global_1675212.f_1808.f_227[i /*3*/], Global_1675212.f_1808.f_227[i /*3*/].f_1, Global_1675212.f_1808.f_312[i], Global_1675212.f_1808.f_323[i], Global_1675212.f_1808.f_269[i], Global_2750358[i], Global_2750369[i], Global_2750380[i], Global_2750391[i], Global_2750402[i], Global_2750413[i], Global_2750424[i], Global_2750435[i], Global_1675212.f_1808.f_334[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(0) && !func_227(0))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[5 /*11*/][i] == j + 3 || Global_1673655.f_1185[5 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[5 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_188(i, Global_1675212.f_1177[i], Global_1675212.f_1177.f_11[i], &Global_1675212.f_1177.f_22[i /*16*/], Global_1675212.f_1177.f_194[i], Global_1675212.f_1177.f_183[i], Global_1675212.f_1177.f_238[i /*3*/], Global_1675212.f_1177.f_238[i /*3*/].f_1, Global_1675212.f_1177.f_269[i], Global_1675212.f_1177.f_205[i], Global_1675212.f_1177.f_280[i], Global_1675212.f_1177.f_323[i], Global_1675212.f_1177.f_334[i], Global_1675212.f_1177.f_345[i], Global_1675212.f_1177.f_356[i], Global_1675212.f_1177.f_367[i], Global_1675212.f_1177.f_378[i], Global_1675212.f_1177.f_389[i], Global_1675212.f_1177.f_400[i], Global_1675212.f_1177.f_411[i], Global_1675212.f_1177.f_422[i], Global_1675212.f_1177.f_433[i], Global_1675212.f_1177.f_444[i], Global_1675212.f_1177.f_455[i], Global_1675212.f_1177.f_466[i], Global_1675212.f_1177.f_477[i], Global_1675212.f_1177.f_488[i], Global_1675212.f_1177.f_499[i], Global_1675212.f_1177.f_510[i], Global_1675212.f_1177.f_521[i], Global_1675212.f_1177.f_532[i], Global_1675212.f_1177.f_543[i], Global_1675212.f_1177.f_554[i], Global_1675212.f_1177.f_565[i], Global_1675212.f_1177.f_576[i], Global_1675212.f_1177.f_587[i], Global_1675212.f_1177.f_598[i], Global_1675212.f_1177.f_609[i], Global_1675212.f_1177.f_620[i], Global_1675212.f_1177.f_216[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(6) && !func_227(6))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[6 /*11*/][i] == j + 3 || Global_1673655.f_1185[6 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[6 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_187(i, Global_1675212.f_4085[i], &Global_1675212.f_4085.f_11[i /*16*/], Global_1675212.f_4085.f_183[i], Global_1675212.f_4085.f_172[i], Global_1675212.f_4085.f_194[i], Global_1675212.f_4085.f_271[i], &Global_1675212.f_4085.f_282[i /*16*/], Global_1675212.f_4085.f_443[i], Global_1675212.f_4085.f_454[i], Global_1675212.f_4085.f_497[i], Global_1675212.f_4085.f_508[i], Global_1675212.f_4085.f_205[i], Global_1675212.f_4085.f_216[i], Global_1675212.f_4085.f_227[i], Global_1675212.f_4085.f_238[i], Global_1675212.f_4085.f_249[i], Global_1675212.f_4085.f_519[i], Global_1675212.f_4085.f_530[i], Global_1675212.f_4085.f_541[i], Global_1675212.f_4085.f_552[i], Global_1675212.f_4085.f_563[i], Global_1675212.f_4085.f_574[i], Global_1675212.f_4085.f_585[i], Global_1675212.f_4085.f_596[i], Global_1675212.f_4085.f_607[i], Global_1675212.f_4085.f_618[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(2) && !func_227(2))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[7 /*11*/][i] == j + 3 || Global_1673655.f_1185[7 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[7 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_175(i, Global_1675212.f_2153[i], &Global_1675212.f_2153.f_99[i /*16*/], Global_1675212.f_2153.f_282[i], Global_1675212.f_2153.f_293[i], Global_1675212.f_2153.f_260[i], Global_1675212.f_2153.f_11[i], Global_1675212.f_2153.f_22[i], Global_1675212.f_2153.f_33[i], Global_1675212.f_2153.f_44[i], Global_1675212.f_2153.f_55[i], Global_1675212.f_2153.f_66[i], Global_1675212.f_2153.f_77[i], Global_1675212.f_2153.f_88[i], Global_1675212.f_2153.f_271[i], Global_1675212.f_2153.f_304[i], Global_1675212.f_2153.f_357[i], Global_1675212.f_2153.f_326[i /*3*/], Global_1675212.f_2153.f_326[i /*3*/].f_1, Global_1675212.f_2153.f_368[i], Global_1675212.f_2153.f_379[i], Global_1675212.f_2153.f_390[i], Global_1675212.f_2153.f_401[i], Global_1675212.f_2153.f_412[i], Global_1675212.f_2153.f_423[i], Global_1675212.f_2153.f_434[i], Global_1675212.f_2153.f_445[i], Global_1675212.f_2153.f_456[i], Global_1675212.f_2153.f_467[i], Global_1675212.f_2153.f_478[i], Global_1675212.f_2153.f_489[i], Global_1675212.f_2153.f_500[i], Global_1675212.f_2153.f_511[i], Global_1675212.f_2153.f_522[i], Global_1675212.f_2153.f_533[i], Global_1675212.f_2153.f_587[i], Global_1675212.f_2153.f_598[i], Global_1675212.f_2153.f_544[i], Global_2750446[i], Global_2750457[i], Global_2750468[i], Global_2750479[i], Global_2750490[i], Global_2750501[i], Global_2750512[i], Global_2750523[i], Global_1675212.f_2153.f_609[i], Global_1675212.f_2153.f_620[i], Global_1675212.f_2153.f_631[i], Global_1675212.f_2153.f_642[i], Global_1675212.f_2153.f_653[i], Global_1675212.f_2153.f_664[i], Global_1675212.f_2153.f_675[i], Global_1675212.f_2153.f_686[i], Global_1675212.f_2153.f_697[i], Global_1675212.f_2153.f_708[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(8) && !func_227(8))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[8 /*11*/][i] == j + 3 || Global_1673655.f_1185[8 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[8 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_172(i, &Global_1675212.f_5115.f_11[i /*16*/], Global_1675212.f_5115[i], Global_1675212.f_5115.f_172[i], Global_1675212.f_5115.f_183[i], Global_1675212.f_5115.f_194[i], Global_1675212.f_5115.f_205[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(9) && !func_227(9))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[9 /*11*/][i] == j + 3 || Global_1673655.f_1185[9 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[9 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_167(i, Global_1675212.f_5342[i], Global_1675212.f_5342.f_11[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(10) && !func_227(10))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[10 /*11*/][i] == j + 3 || Global_1673655.f_1185[10 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[10 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_152(i, Global_1675212.f_5375.f_6[i], Global_1675212.f_5375.f_17[i], &Global_1675212.f_5375.f_28[i /*16*/], Global_1675212.f_5375.f_200[i], Global_1675212.f_5375.f_189[i], Global_1675212.f_5375.f_233[i], Global_1675212.f_5375.f_211[i], Global_1675212.f_5375.f_244[i], Global_1675212.f_5375.f_287[i], Global_1675212.f_5375.f_298[i], &Global_1675212.f_5375.f_309[i /*16*/], &(Global_1675212.f_5375), Global_1675212.f_5375.f_470[i], Global_1675212.f_5375.f_481[i], Global_1675212.f_5375.f_492[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(11) && !func_227(11))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[11 /*11*/][i] == j + 3 || Global_1673655.f_1185[11 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[11 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_149(i, Global_1675212.f_5878[i], Global_1675212.f_5878.f_11[i], Global_1675212.f_5878.f_22[i], Global_1675212.f_5878.f_33[i], Global_1675212.f_5878.f_44[i], Global_1675212.f_5878.f_55[i], Global_1675212.f_5878.f_66[i], Global_1675212.f_5878.f_77[i], Global_1675212.f_5878.f_88[i], Global_1675212.f_5878.f_110[i], Global_1675212.f_5878.f_121[i], Global_1675212.f_5878.f_132[i], Global_1675212.f_5878.f_143[i], Global_1675212.f_5878.f_154[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(12) && !func_227(12))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[12 /*11*/][i] == j + 3 || Global_1673655.f_1185[12 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[12 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_140(i, Global_1675212.f_6043[i], Global_1675212.f_6043.f_22[i], &Global_1675212.f_6043.f_33[i /*6*/], Global_1675212.f_6043.f_94[i], Global_1675212.f_6043.f_11[i], Global_1675212.f_6043.f_105[i], Global_1675212.f_6043.f_116[i], Global_1675212.f_6043.f_127[i], Global_1675212.f_6043.f_138[i], Global_1675212.f_6043.f_149[i], Global_1675212.f_6043.f_160[i], Global_1675212.f_6043.f_171[i], Global_1675212.f_6043.f_182[i], Global_1675212.f_6043.f_193[i], Global_1675212.f_6043.f_204[i], Global_1675212.f_6043.f_215[i], Global_1675212.f_6043.f_226[i], Global_1675212.f_6043.f_248[i], Global_1675212.f_6043.f_259[i], Global_1675212.f_6043.f_270[i], Global_1675212.f_6043.f_281[i], Global_1675212.f_6043.f_292[i], Global_1675212.f_6043.f_303[i], Global_1675212.f_6043.f_314[i], Global_1675212.f_6043.f_325[i], Global_1675212.f_6043.f_336[i], Global_1675212.f_6043.f_347[i], Global_1675212.f_6043.f_358[i], Global_1675212.f_6043.f_369[i], Global_1675212.f_6043.f_380[i], Global_1675212.f_6043.f_391[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(13) && !func_227(13))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[13 /*11*/][i] == j + 3 || Global_1673655.f_1185[13 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[13 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_135(i, Global_1675212.f_6445[i], Global_1675212.f_6445.f_11[i], Global_1675212.f_6445.f_22[i], Global_1675212.f_6445.f_33[i], Global_1675212.f_6445.f_44[i], Global_1675212.f_6445.f_55[i], Global_1675212.f_6445.f_66[i], Global_1675212.f_6445.f_77[i], Global_1675212.f_6445.f_88[i], Global_1675212.f_6445.f_99[i], Global_1675212.f_6445.f_110[i], Global_1675212.f_6445.f_121[i], Global_1675212.f_6445.f_132[i], Global_1675212.f_6445.f_154[i], Global_1675212.f_6445.f_165[i], Global_1675212.f_6445.f_176[i], Global_1675212.f_6445.f_187[i], Global_1675212.f_6445.f_198[i], Global_1675212.f_6445.f_209[i], Global_1675212.f_6445.f_220[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			
				if (func_31(14) && !func_227(14))
				{
					for (i = 0; i <= 9; i = i + 1)
					{
						if (Global_1673655.f_1351[14 /*11*/][i] == j + 3 || Global_1673655.f_1185[14 /*11*/][i] == 1)
						{
							if (func_233(Global_1673655.f_1185[14 /*11*/][i]))
							{
								func_229(true);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, verticalAlign);
								GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fLocal_63, fLocal_64, fLocal_65, fLocal_66);
								func_46(i, &Global_1675212.f_6676[i /*16*/], &Global_1675212.f_6676.f_161[i /*16*/], Global_1675212.f_6676.f_322[i], Global_1675212.f_6676.f_333[i], Global_1675212.f_6676.f_355[i], Global_1675212.f_6676.f_366[i], Global_1675212.f_6676.f_377[i]);
								GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								func_229(false);
							}
						}
					}
				}
			}
		}
	
		func_45();
	}

	return;
}

void func_45() // Position - 0x510D (20749)
{
	int i;

	for (i = 0; i <= 14; i = i + 1)
	{
		Global_1675212.f_7080[i] = Global_1675212.f_7064[i];
	}

	return;
}

void func_46(int iParam0, const char* sParam1, char* sParam2, BOOL bParam3, BOOL bParam4, eHudColour ehcParam5, BOOL bParam6, int iParam7) // Position - 0x513E (20798)
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(14, iParam0))
		func_47(14, iParam0, &unk, &unk12, &unk23, &unk25, 0, 1, sParam1, ehcParam5, 0, 0, bParam3, "", 0, 0f, 0, 0, ehcParam5, false, 0, false, 0, 0, sParam2, false, HUD_COLOUR_PURE_WHITE, 255, false, 0, false, false, HUD_COLOUR_WHITE, false, HUD_COLOUR_PURE_WHITE, -1, true, bParam4, bParam6, iParam7, HUD_COLOUR_PURE_WHITE);

	return;
}

void func_47(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, const char* sParam8, eHudColour ehcParam9, int iParam10, int iParam11, BOOL bParam12, const char* sParam13, int iParam14, float fParam15, int iParam16, int iParam17, eHudColour ehcParam18, BOOL bParam19, int iParam20, BOOL bParam21, int iParam22, int iParam23, char* sParam24, BOOL bParam25, eHudColour ehcParam26, int iParam27, BOOL bParam28, Player plParam29, BOOL bParam30, BOOL bParam31, eHudColour ehcParam32, BOOL bParam33, eHudColour ehcParam34, int iParam35, BOOL bParam36, BOOL bParam37, BOOL bParam38, int iParam39, eHudColour ehcParam40) // Position - 0x518F (20879)
{
	float num;
	float num2;
	float num3;
	float num4;
	BOOL flag;
	int drawOrder;
	BOOL flag2;
	float num5;
	float num6;
	float num7;
	float value;
	float screenWidthOfDisplayText;
	float num8;
	float num9;
	float num10;
	int num11;
	float num12;
	float num13;
	float num14;
	float num15;
	int num16;
	char* textureDict;
	char* str;
	eHudColour color;
	char* pedheadshotTxdString;
	char* pedheadshotTxdString2;
	eHudColour color2;
	var unk57;

	Global_1675212 = Global_1675212 + 1;

	if (func_134())
	{
		func_133(&num, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_133(&num2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_133(&num3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_133(&num4, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	
		if (func_132())
			if (bParam25)
				func_131(uParam2, 0);
			else if (bParam12)
				func_130(uParam2, 3);
			else
				func_131(uParam2, 0);
		else if (bParam25)
			func_129(uParam2, 0);
		else if (bParam12)
			func_130(uParam2, 3);
		else
			func_129(uParam2, 0);
	
		if (Global_2696430 && bParam12)
			if (func_132())
				func_131(uParam2, 0);
			else
				func_129(uParam2, 0);
	
		if (iParam6 < 1000000)
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && fParam15 >= 100f && MISC::ARE_STRINGS_EQUAL("AMCH_KMHN" /*~1~km/h*/, sParam13))
				func_128(uParam3, 0, 0);
			else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12 && iParam6 > 999 || iParam20 > 999 || fParam15 > 1000f)
				func_128(uParam3, 0, 0);
			else if (iParam20 > 99)
				func_127(uParam3, 0, 0);
			else
				func_126(uParam3, 0, 0);
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && MISC::ARE_STRINGS_EQUAL("HUD_CASH" /*$~1~*/, sParam13) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG" /*-$~1~*/, sParam13))
			func_128(uParam3, 0, 0);
		else
			func_127(uParam3, 0, 0);
	
		func_124(uParam2);
		func_123(uParam3);
		uParam2->f_9 = uParam2->f_9 + (0.03f * (1f - func_121()));
		func_120(6, iParam1);
	
		if (Global_1675212 == 1)
			func_119(iParam7);
	
		func_114(uParam3, uParam4, uParam5, iParam7, uParam2);
	
		if (iParam23 == 1)
		{
			ehcParam18 = HUD_COLOUR_BLACK;
			ehcParam9 = HUD_COLOUR_BLACK;
		}
	
		func_113(uParam3, ehcParam9);
	
		if (iParam10 == 0)
		{
			switch (iParam0)
			{
				case 3:
					func_112(iParam1);
					break;
			
				case 4:
					func_111(iParam1);
					break;
			
				case 5:
					func_110(iParam1);
					break;
			
				default:
					func_109(iParam1);
					break;
			}
		}
	
		if (iParam17 == 0)
		{
			switch (iParam0)
			{
				case 3:
					func_108(iParam1);
					break;
			
				case 4:
					func_107(iParam1);
					break;
			
				case 5:
					func_106(iParam1);
					break;
			
				default:
					func_105(iParam1);
					break;
			}
		}
	
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			drawOrder = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
		
			switch (iParam0)
			{
				case 3:
					if (func_103(iParam10, &Global_1675212.f_128[iParam1 /*2*/], &Global_1675212.f_149[iParam1 /*2*/]))
						flag = true;
					else
						flag = false;
					break;
			
				case 4:
					if (func_103(iParam10, &Global_1675212.f_44[iParam1 /*2*/], &Global_1675212.f_65[iParam1 /*2*/]))
						flag = true;
					else
						flag = false;
					break;
			
				case 5:
					if (func_103(iParam10, &Global_1675212.f_2[iParam1 /*2*/], &Global_1675212.f_23[iParam1 /*2*/]))
						flag = true;
					else
						flag = false;
					break;
			
				default:
					if (func_103(iParam10, &Global_1675212.f_86[iParam1 /*2*/], &Global_1675212.f_107[iParam1 /*2*/]))
						flag = true;
					else
						flag = false;
					break;
			}
		
			num4 = *uParam4;
			num4.f_1 = uParam4->f_1;
			num = *uParam4;
			num.f_1 = uParam4->f_1 + 0.001f;
		
			if (iParam23 == 1)
			{
				num4 = num4 + 0.079f;
				num4.f_1 = num4.f_1 + 0.002f;
				num4.f_2 = num4.f_2 + 0.157f;
				num4.f_3 = num4.f_3 + 0.049f;
				num4.f_4 = num4.f_4 + 255;
				num4.f_5 = num4.f_5 + 255;
				num4.f_6 = num4.f_6 + 255;
				num4.f_7 = 140;
			}
			else if (iParam6 < 1000000)
			{
				num4 = num4 + 0.079f;
				num4.f_1 = num4.f_1 + 0.008f;
				num4.f_2 = num4.f_2 + 0.157f;
				num4.f_3 = num4.f_3 + 0.036f;
				num4.f_4 = num4.f_4 + 255;
				num4.f_5 = num4.f_5 + 255;
				num4.f_6 = num4.f_6 + 255;
				num4.f_7 = 140;
			}
			else
			{
				num4 = num4 + 0.079f;
				num4.f_1 = num4.f_1 + 0.01f;
				num4.f_2 = num4.f_2 + 0.157f;
				num4.f_3 = num4.f_3 + 0.033f;
				num4.f_4 = num4.f_4 + 255;
				num4.f_5 = num4.f_5 + 255;
				num4.f_6 = num4.f_6 + 255;
				num4.f_7 = 140;
			}
		
			if (func_132())
			{
				num4 = num4 + -0.025f;
				num4.f_2 = num4.f_2 + 0.05f;
			}
		
			Global_1675212.f_7129 = Global_1675212.f_7129 + num4.f_3;
		
			switch (iParam0)
			{
				case 3:
					func_101(&Global_1675212.f_1001[iParam1 /*2*/], &Global_1675212.f_1022[iParam1], iParam16, iParam17, ehcParam9, drawOrder, num4);
					break;
			
				case 4:
					func_101(&Global_1675212.f_969[iParam1 /*2*/], &Global_1675212.f_990[iParam1], iParam16, iParam17, ehcParam9, drawOrder, num4);
					break;
			
				case 5:
					func_101(&Global_1675212.f_937[iParam1 /*2*/], &Global_1675212.f_958[iParam1], iParam16, iParam17, ehcParam9, drawOrder, num4);
					break;
			
				default:
					if (iParam10 > 0)
						iParam0 == 14;
				
					func_101(&Global_1675212.f_1129[iParam1 /*2*/], &Global_1675212.f_1150[iParam1], iParam16, iParam17, ehcParam9, drawOrder, num4);
					break;
			}
		
			if (iParam23 == 1 || ehcParam40 != HUD_COLOUR_PURE_WHITE)
			{
				if (ehcParam40 != HUD_COLOUR_PURE_WHITE)
					func_100(&num4, ehcParam40);
			
				func_92("TimerBars", "ALL_WHITE_bg", &num4, 1, 0, drawOrder, false);
			}
			else
			{
				func_92("TimerBars", "ALL_BLACK_bg", &num4, 1, 0, drawOrder, false);
			}
		
			func_86(&num4, ehcParam26);
			drawOrder = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
			func_85(uParam2, ehcParam18);
			flag2 = true;
		
			if (Global_2696430)
				flag2 = false;
		
			if (Global_2696431 == 1)
				flag2 = true;
		
			func_84(uParam2, false);
		
			if (func_132())
			{
				if (bParam12)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam4->f_1 = uParam4->f_1 + -0.012f;
						uParam5->f_1 = uParam5->f_1 + -0.004f;
					}
					else
					{
						uParam4->f_1 = uParam4->f_1 + -0.004f;
					}
				}
				else if (func_132())
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					{
						uParam4->f_1 = uParam4->f_1 + -0.012f;
						uParam5->f_1 = uParam5->f_1 + -0.004f;
					}
					else
					{
						uParam4->f_1 = uParam4->f_1 + -0.008f;
					}
				}
			}
			else if (bParam25)
			{
				uParam4->f_1 = uParam4->f_1 + 0f;
			}
			else if (bParam12 && Global_2696430 == false)
			{
				uParam4->f_1 = uParam4->f_1 + (-0.002f - 0.004f);
			}
		
			if (iParam23 == 1)
			{
				uParam4->f_1 = uParam4->f_1 - 0.007f;
				uParam5->f_1 = uParam5->f_1 - 0.007f;
			}
		
			if (iParam22 == 2 && MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				sParam8 = "HUD_ROCKET" /*ROCKETS*/;
			else if (iParam22 == 4)
				sParam8 = "HUD_BOOST" /*BOOST*/;
			else if (iParam22 == 1)
				sParam8 = "HUD_SPIKES" /*SPIKES*/;
		
			uParam2->f_6 = iParam27;
			uParam3->f_6 = iParam27;
		
			if (bParam28)
				uParam3->f_6 = 0;
		
			if (bParam38)
				*uParam2 = iParam39;
		
			if (bParam30)
				if (flag)
					func_81(uParam2, uParam4, sParam8, ehcParam18, ehcParam9, iParam11, bParam12, flag2);
			else
				func_81(uParam2, uParam4, sParam8, ehcParam18, ehcParam9, iParam11, bParam12, flag2);
		
			if (bParam33)
			{
				if (iParam35 > 0)
				{
					if (!_STOPWATCH_IS_INITIALIZED(&Global_1675212.f_884[iParam1 /*2*/]))
						func_79(&Global_1675212.f_884[iParam1 /*2*/], false, false);
					else if (func_260(&Global_1675212.f_884[iParam1 /*2*/], iParam35, false))
						func_78(&Global_1675212.f_884[iParam1 /*2*/], false, false);
				
					func_75(uParam3, ehcParam9, ehcParam34, iParam35, Global_1675212.f_884[iParam1 /*2*/]);
				}
			}
		
			if (iParam23 == 1)
			{
				num2 = uParam3->f_9;
				num2.f_1 = uParam5->f_1 - 0.0175f;
				num3 = uParam3->f_9;
				num3.f_1 = uParam5->f_1 + 0.0175f;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArrow", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArrow"))
				{
					num2 = num2 + 0.0095f;
					num2 = num2 - 0.015f;
					num2.f_1 = num2.f_1 + 0.019f;
					num2.f_2 = num2.f_2 + 0.01f;
					num2.f_3 = num2.f_3 + 0.01f;
					num2.f_4 = num2.f_4 + 0;
					num2.f_5 = num2.f_5 + 0;
					num2.f_6 = num2.f_6 + 0;
					num2.f_7 = num2.f_7 - 50;
					num2.f_8 = -90f;
					func_92("MPArrow", "MP_ArrowXLarge", &num2, 1, 0, drawOrder, false);
					num3 = num3 + 0.0095f;
					num3 = num3 - 0.015f;
					num3.f_1 = num3.f_1 + 0.019f;
					num3.f_2 = num3.f_2 + 0.01f;
					num3.f_3 = num3.f_3 + 0.01f;
					num3.f_4 = num3.f_4 + 0;
					num3.f_5 = num3.f_5 + 0;
					num3.f_6 = num3.f_6 + 0;
					num3.f_7 = num3.f_7 - 50;
					num3.f_8 = 90f;
					func_92("MPArrow", "MP_ArrowXLarge", &num3, 1, 0, drawOrder, false);
				}
			}
		
			if (bParam31)
			{
				num5 = func_74() + func_73(iParam7);
				num6 = func_72();
			
				if (func_132())
					num7 = num6 - 0.061f;
				else
					num7 = num6 - 0.0365f;
			
				num7.f_1 = num5 + 0.057f;
				num7.f_2 = num4.f_2 - 0.004f;
				num7.f_3 = 0.01f;
				num7.f_4 = 255;
				num7.f_5 = 255;
				num7.f_6 = 255;
				num7.f_7 = 255;
				func_100(&num7, ehcParam32);
				func_92("TimerBars", "DamagebarFill_128", &num7, 0, 0, drawOrder, false);
			}
		
			if (bParam19)
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
				{
					value = 0f;
				
					if (bParam12 == true)
					{
						HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam8);
						screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
					}
					else
					{
						HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam8);
					
						if (iParam11 != -1)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam11);
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam11);
						}
					
						screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
						screenWidthOfDisplayText = screenWidthOfDisplayText + 0.05f;
						screenWidthOfDisplayText = screenWidthOfDisplayText * func_121();
					}
				
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && bParam12 == false)
					{
						num8 = 0.153f - 0.072f;
						num9 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10 && bParam12 == false)
					{
						num8 = 0.153f - 0.01f - 0.06f;
						num9 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 && bParam12 == false)
					{
						num8 = 0.153f - 0.012f - 0.06f;
						num9 = -0.457f;
					}
					else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 12 && bParam12 == false)
					{
						num8 = 0.153f - 0.012f - 0.06f;
						num9 = -0.457f;
					}
					else
					{
						num8 = 0.153f - 0.037f - 0.036f;
						num9 = -0.457f + 0.194f;
					}
				
					num8 = num8 + 0.03f;
				
					if (Global_1675212.f_1172)
						num8 = num8 + -0.03f;
				
					if (MISC::IS_PC_VERSION() && !GRAPHICS::GET_IS_WIDESCREEN())
						num8 = num8 + -0.015f;
				
					if (Global_1675212.f_1173 && Global_1675212.f_1172 == false)
						num8 = num8 + (-0.015f - 0.003f);
				
					value = (num9 * screenWidthOfDisplayText) + num8;
					num10 = 0.015f;
					num11 = SYSTEM::FLOOR(MISC::ABSF(value) / num10);
					num12 = func_71(MISC::ABSF(value), num10);
					num13 = (float)num11 * num10;
				
					if (num12 > num10 / 2f)
						num13 = num13 + num10;
				
					if (value < 0f)
						value = -num13;
					else
						value = num13;
				
					num = num + value;
					num = num - 0.015f;
					num.f_1 = num.f_1 + 0.008f;
					num.f_2 = num.f_2 + 0.022f;
					num.f_3 = num.f_3 + 0.04f;
					num.f_4 = num.f_4 + 194;
					num.f_5 = num.f_5 + 80;
					num.f_6 = num.f_6 + 80;
					num.f_7 = num.f_7 - 50;
					func_92("CommonMenu", "MP_AlertTriangle", &num, 1, 0, drawOrder, false);
				}
			}
		
			if (flag)
			{
				if (iParam22 != 0)
				{
					func_70(uParam3);
					num14 = *uParam5 + 0.145f + 0.001f;
				
					if (func_132())
						num14.f_1 = (uParam5->f_1 + 0.016f) - 0.006f;
					else
						num14.f_1 = uParam5->f_1 + 0.016f;
				
					num14.f_2 = 0.016f + 0.003f;
					num14.f_3 = 0.032f + 0.004f;
					num14.f_7 = iParam27;
					func_100(&num14, HUD_COLOUR_WHITE);
					num15 = *uParam5 + 0.145f + 0.001f;
				
					if (func_132())
						num15.f_1 = (uParam5->f_1 + 0.016f) - 0.006f;
					else
						num15.f_1 = uParam5->f_1 + 0.016f;
				
					num15.f_2 = 0.016f + 0.003f;
					num15.f_3 = 0.032f + 0.004f;
					num15.f_7 = 255;
					func_100(&num15, HUD_COLOUR_WHITE);
				
					if (bParam28)
						num14.f_7 = 0;
				
					textureDict = "";
					color = HUD_COLOUR_WHITE;
					pedheadshotTxdString = "";
					color2 = HUD_COLOUR_WHITE;
				
					switch (iParam22)
					{
						case 5:
							num14.f_3 = num14.f_3 + -0.009f;
							num14.f_2 = num14.f_2 + -0.002f;
						
							if (func_132())
								num14.f_1 = num14.f_1 + 0.0055f;
							else
								num14.f_1 = num14.f_1 + 0.0025f;
						
							pedheadshotTxdString = "MPRPSymbol";
							pedheadshotTxdString2 = "RP";
							break;
					
						case 2:
							pedheadshotTxdString = "TimerBars";
							pedheadshotTxdString2 = "Rockets";
							break;
					
						case 3:
							pedheadshotTxdString = "MpSpecialRace";
							pedheadshotTxdString2 = "HOMING_ROCKET";
							break;
					
						case 1:
							pedheadshotTxdString = "TimerBars";
							pedheadshotTxdString2 = "Spikes";
							break;
					
						case 4:
							pedheadshotTxdString = "TimerBars";
							pedheadshotTxdString2 = "Boost";
							break;
					
						case 6:
							pedheadshotTxdString = "CrossTheLine";
							pedheadshotTxdString2 = "Timer_LargeTick_32";
							color2 = HUD_COLOUR_GREEN;
							break;
					
						case 7:
							pedheadshotTxdString = "CrossTheLine";
							pedheadshotTxdString2 = "Timer_LargeCross_32";
							color2 = HUD_COLOUR_RED;
							break;
					
						case 8:
							pedheadshotTxdString = "TimerBar_Icons";
							pedheadshotTxdString2 = "Pickup_Beast";
							color2 = HUD_COLOUR_FRIENDLY;
							break;
					
						case 9:
							pedheadshotTxdString = "MPSpecialRace";
							pedheadshotTxdString2 = "MACHINE_GUN";
							break;
					
						case 10:
							pedheadshotTxdString = "TimerBar_Icons";
							pedheadshotTxdString2 = "Pickup_Random";
							color2 = HUD_COLOUR_FRIENDLY;
							break;
					
						case 11:
							pedheadshotTxdString = "TimerBar_Icons";
							pedheadshotTxdString2 = "Pickup_Slow_Time";
							break;
					
						case 12:
							pedheadshotTxdString = "TimerBar_Icons";
							pedheadshotTxdString2 = "Pickup_Swap";
							color2 = HUD_COLOUR_FRIENDLY;
							break;
					
						case 13:
							pedheadshotTxdString = "TimerBar_Icons";
							pedheadshotTxdString2 = "Pickup_Testosterone";
							color2 = HUD_COLOUR_FRIENDLY;
							break;
					
						case 14:
							pedheadshotTxdString = "TimerBar_Icons";
							pedheadshotTxdString2 = "Pickup_Thermal";
							color2 = HUD_COLOUR_FRIENDLY;
							break;
					
						case 15:
							pedheadshotTxdString = "TimerBar_Icons";
							pedheadshotTxdString2 = "Pickup_Weed";
							color2 = HUD_COLOUR_FRIENDLY;
							break;
					
						case 16:
							pedheadshotTxdString = "TimerBar_Icons";
							pedheadshotTxdString2 = "Pickup_Hidden";
							color2 = HUD_COLOUR_FRIENDLY;
							break;
					
						case 17:
						case 18:
							if (plParam29 != _INVALID_PLAYER_INDEX())
							{
								num16 = func_62(plParam29);
							
								if (num16 != 0)
								{
									pedheadshotTxdString = PED::GET_PEDHEADSHOT_TXD_STRING(num16);
									pedheadshotTxdString2 = PED::GET_PEDHEADSHOT_TXD_STRING(num16);
								}
							}
						
							if (func_132())
								num14.f_1 = (uParam5->f_1 + 0.016f) - 0.0005f;
							else
								num14.f_1 = uParam5->f_1 + 0.0185f;
						
							num14.f_2 = 0.016f + 0.004f;
							num14.f_3 = 0.032f + 0.002f;
						
							if (iParam22 == 18)
							{
								if (func_132())
									num15.f_1 = uParam5->f_1 + 0.016f;
								else
									num15.f_1 = uParam5->f_1 + 0.019f;
							
								num15.f_2 = 0.016f + 0.004f;
								num15.f_3 = 0.032f + 0.002f;
								textureDict = "timerbar_sr";
								str = "timer_cross";
								color = ehcParam18;
								num14.f_7 = 127;
							}
							break;
					}
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(pedheadshotTxdString))
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(pedheadshotTxdString, false);
					
						if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(pedheadshotTxdString))
						{
							func_100(&num14, color2);
							func_92(pedheadshotTxdString, pedheadshotTxdString2, &num14, 1, 0, 4, false);
						}
					}
				
					if (iParam22 == 18)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(textureDict))
						{
							GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(textureDict, false);
						
							if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(textureDict))
							{
								func_100(&num15, color);
								func_92(textureDict, str, &num15, 1, 0, 4, false);
							}
						}
					}
				}
			
				func_84(uParam3, false);
				drawOrder = func_104();
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
			
				if (iParam22 == 0 || iParam22 == 5 || iParam22 == 9)
				{
					unk57 = { *uParam2 };
					func_123(&unk57);
				
					if (bParam21)
					{
						func_61(uParam5, uParam3, "???", "", HUD_COLOUR_WHITE, 2);
					}
					else if (iParam22 == 5)
					{
						if (bParam36)
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam24))
								func_81(&unk57, uParam4, sParam24, ehcParam18, ehcParam9, -1, bParam37, flag2);
						else if (iParam14 == 0)
							func_59(uParam5, uParam3, "HUD_KSMULTI" /*~1~x*/, iParam6, 2);
						else
							func_57(uParam5, uParam3, "HUD_KSMULTI" /*~1~x*/, fParam15, Global_2698275, 2);
					}
					else if (func_56(sParam13))
					{
						if (bParam36)
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam24))
								func_81(&unk57, uParam4, sParam24, ehcParam18, ehcParam9, -1, bParam37, flag2);
						else if (iParam20 == 0)
							if (iParam14 == 0)
								func_59(uParam5, uParam3, "NUMBER" /*~1~*/, iParam6, 2);
							else
								func_57(uParam5, uParam3, "NUMBER" /*~1~*/, fParam15, Global_2698275, 2);
						else
							func_54(uParam5, uParam3, "TIMER_DASHES" /*~1~/~1~*/, iParam6, iParam20, 2, false);
					}
					else if (bParam36)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam24))
							func_81(&unk57, uParam4, sParam24, ehcParam18, ehcParam9, -1, bParam37, flag2);
					}
					else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH" /*$~1~*/, sParam13) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_S" /*$~a~*/, sParam13))
					{
						sParam13 = "HUD_CASH_S" /*$~a~*/;
						*uParam3 = 5;
						func_84(uParam3, false);
						func_49(uParam5, uParam3, sParam13, iParam6, 2);
					}
					else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG" /*-$~1~*/, sParam13) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG_S" /*-$~a~*/, sParam13))
					{
						*uParam3 = 5;
						func_84(uParam3, false);
						sParam13 = "HUD_CASH_NEG_S" /*-$~a~*/;
						func_49(uParam5, uParam3, sParam13, iParam6, 2);
					}
					else if (iParam14 == 0)
					{
						func_59(uParam5, uParam3, sParam13, iParam6, 2);
					}
					else
					{
						func_57(uParam5, uParam3, sParam13, fParam15, Global_2698275, 2);
					}
				}
			}
		
			func_48();
		}
	}

	return;
}

void func_48() // Position - 0x63D9 (25561)
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	return;
}

void func_49(var uParam0, var uParam1, const char* sParam2, int iParam3, int iParam4) // Position - 0x63E6 (25574)
{
	const char* text;

	text = sParam2;

	if (!func_56(text))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(text);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam3, true);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_51(*uParam0), func_50(uParam0->f_1), 0);
		}
	}

	return;
}

float func_50(float fParam0) // Position - 0x6437 (25655)
{
	return fParam0;
}

float func_51(float fParam0) // Position - 0x6441 (25665)
{
	return fParam0;
}

BOOL func_52() // Position - 0x644B (25675)
{
	if (func_53())
		return true;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
		return false;

	if (MISC::IS_FRONTEND_FADING())
		return false;

	return true;
}

BOOL func_53() // Position - 0x648A (25738)
{
	return Global_1574604;
}

void func_54(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x6496 (25750)
{
	char* str;

	str = sParam2;

	if (!func_56(str))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_CENTRE(bParam6);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			func_55(func_51(*uParam0), func_50(uParam0->f_1), str, iParam3, iParam4);
		}
	}

	return;
}

void func_55(float fParam0, float fParam1, const char* sParam2, int iParam3, int iParam4) // Position - 0x64DF (25823)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

BOOL func_56(const char* sParam0) // Position - 0x6502 (25858)
{
	if (MISC::IS_STRING_NULL(sParam0))
		return true;
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
		return true;

	return false;
}

void func_57(var uParam0, var uParam1, const char* sParam2, float fParam3, int iParam4, int iParam5) // Position - 0x653B (25915)
{
	if (!func_56(sParam2))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			func_58(func_51(*uParam0), func_50(uParam0->f_1), sParam2, fParam3, iParam4);
		}
	}

	return;
}

void func_58(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4) // Position - 0x657A (25978)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

void func_59(var uParam0, var uParam1, const char* sParam2, int iParam3, int iParam4) // Position - 0x6599 (26009)
{
	const char* str;

	str = sParam2;

	if (!func_56(str))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			func_60(func_51(*uParam0), func_50(uParam0->f_1), str, iParam3, 0);
		}
	}

	return;
}

void func_60(float fParam0, float fParam1, const char* sParam2, int iParam3, int iParam4) // Position - 0x65DB (26075)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
	return;
}

void func_61(var uParam0, var uParam1, const char* sParam2, char* sParam3, eHudColour ehcParam4, int iParam5) // Position - 0x65F9 (26105)
{
	char* text;

	if (!func_56(sParam2))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
		
			if (func_56(sParam3))
				text = "STRING";
			else
				text = sParam3;
		
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(text);
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(ehcParam4);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_51(*uParam0), func_50(uParam0->f_1), 0);
		}
	}

	return;
}

int func_62(Player plParam0) // Position - 0x665A (26202)
{
	int num;

	num = func_66(plParam0);

	if (num == -1)
	{
		func_63(plParam0, true);
		return 0;
	}

	Global_1686279[num /*5*/].f_4 = 1;
	return Global_1686279[num /*5*/].f_2;
}

void func_63(Player plParam0, BOOL bParam1) // Position - 0x6690 (26256)
{
	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return;

	if (func_66(plParam0) != -1)
		return;

	if (Global_1686442)
		if (plParam0 == Global_1686442.f_1)
			return;

	if (func_64(plParam0))
		return;

	if (Global_1686480 >= 32)
		return;

	Global_1686447[Global_1686480] = plParam0;
	Global_1686480 = Global_1686480 + 1;
	bParam1;
	return;
}

BOOL func_64(Player plParam0) // Position - 0x66FC (26364)
{
	int i;

	i = 0;

	for (i = 0; i < Global_1686480; i = i + 1)
	{
		if (Global_1686447[i] == plParam0)
			return true;
	}

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x672E (26414)
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
				if (player == Global_2672939.f_3)
					return Global_2672939.f_2;
				else if (Global_2657991[player /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

int func_66(Player plParam0) // Position - 0x678E (26510)
{
	int i;

	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return -1;

	if (Global_1686440 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1686440; i = i + 1)
	{
		if (Global_1686279[i /*5*/].f_1 == plParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1686279[i /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1686279[i /*5*/].f_2))
				return i;
		
			func_67(i);
			return -1;
		}
	}

	return -1;
}

void func_67(int iParam0) // Position - 0x680D (26637)
{
	var txdString2;
	var txdString1;
	int num;
	int i;

	if (iParam0 >= Global_1686440)
		return;

	if (PED::IS_PEDHEADSHOT_VALID(Global_1686279[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&txdString2, "CHAR_DEFAULT", 64);
	
		if (Global_1686279[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&txdString1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1686279[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&txdString1, &txdString1, &txdString2, &txdString2);
		}
	
		PED::UNREGISTER_PEDHEADSHOT(Global_1686279[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1686440; i = i + 1)
	{
		Global_1686279[num /*5*/] = { Global_1686279[i /*5*/] };
		num = num + 1;
	}

	func_68(&Global_1686279[num /*5*/]);
	Global_1686440 = Global_1686440 - 1;
	return;
}

void func_68(var uParam0) // Position - 0x68C3 (26819)
{
	*uParam0 = 0;
	uParam0->f_1 = _INVALID_PLAYER_INDEX();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x68F0 (26864)
{
	return -1;
}

void func_70(var uParam0) // Position - 0x68F9 (26873)
{
	uParam0->f_9 = ((0.95f - 0.047f) + 0.001f + 0.047f) - 0.002f - 0.013f - 0.002f - 0.001f;
	return;
}

float func_71(float fParam0, float fParam1) // Position - 0x6934 (26932)
{
	return fParam0 - ((float)SYSTEM::FLOOR(fParam0 / fParam1) * fParam1);
}

float func_72() // Position - 0x694C (26956)
{
	float num;

	num = ((0.919f - 0.081f) + 0.028f + 0.05f) - 0.001f - 0.002f;
	return num;
}

float func_73(int iParam0) // Position - 0x697B (27003)
{
	switch (iParam0)
	{
		case 1:
			return Global_1675212.f_1161;
	
		case 2:
			return Global_1675212.f_1162;
	}

	return Global_1675212.f_1161;
}

float func_74() // Position - 0x69B7 (27063)
{
	float num;

	num = ((0.013f - 0.002f) + 0.001f + 0.001f) - 0.001f;
	return num;
}

void func_75(var uParam0, eHudColour ehcParam1, eHudColour ehcParam2, int iParam3, var uParam4, var uParam5) // Position - 0x69E0 (27104)
{
	int r;
	int g;
	int b;
	int a;
	int r2;
	int g2;
	int b2;
	int a2;
	int value;
	float num;

	value = func_77(&uParam4, false, false);

	if (iParam3 / 2 > value)
	{
		num = SYSTEM::TO_FLOAT(value / 2) / SYSTEM::TO_FLOAT(iParam3 / 2);
		HUD::GET_HUD_COLOUR(ehcParam1, &r, &g, &b, &a);
		HUD::GET_HUD_COLOUR(ehcParam2, &r2, &g2, &b2, &a2);
	}
	else
	{
		num = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(iParam3);
		HUD::GET_HUD_COLOUR(ehcParam2, &r, &g, &b, &a);
		HUD::GET_HUD_COLOUR(ehcParam1, &r2, &g2, &b2, &a2);
	}

	uParam0->f_3 = SYSTEM::FLOOR(func_76(SYSTEM::TO_FLOAT(r), SYSTEM::TO_FLOAT(r2), num));
	uParam0->f_4 = SYSTEM::FLOOR(func_76(SYSTEM::TO_FLOAT(g), SYSTEM::TO_FLOAT(g2), num));
	uParam0->f_5 = SYSTEM::FLOOR(func_76(SYSTEM::TO_FLOAT(b), SYSTEM::TO_FLOAT(b2), num));
	uParam0->f_6 = SYSTEM::FLOOR(func_76(SYSTEM::TO_FLOAT(a), SYSTEM::TO_FLOAT(a2), num));
	return;
}

float func_76(float fParam0, float fParam1, float fParam2) // Position - 0x6AC0 (27328)
{
	return ((1f - fParam2) * fParam0) + (fParam2 * fParam1);
}

int func_77(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6AD5 (27349)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		else
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);

	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_78(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6B1C (27420)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		else
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*uParam0 = MISC::GET_GAME_TIMER();

	uParam0->f_1 = 1;
	return;
}

void func_79(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6B59 (27481)
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

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x6B9E (27550)
{
	return uParam0->f_1;
}

void func_81(var uParam0, var uParam1, char* sParam2, eHudColour ehcParam3, eHudColour ehcParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x6BAA (27562)
{
	if (bParam6 == true)
	{
		if (bParam7)
			func_61(uParam1, uParam0, sParam2, "", ehcParam3, 2);
		else
			func_61(uParam1, uParam0, sParam2, "", ehcParam4, 2);
	}
	else if (iParam5 == -1)
	{
		func_82(uParam1, uParam0, sParam2, false, true);
	}
	else
	{
		uParam1->f_1 = uParam1->f_1 + (-0.003f - 0.001f);
		func_59(uParam1, uParam0, sParam2, iParam5, 2);
	}

	return;
}

void func_82(var uParam0, var uParam1, const char* sParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6C19 (27673)
{
	const char* str;

	str = sParam2;

	if (!func_56(str))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_RIGHT_JUSTIFY(bParam4);
			HUD::SET_TEXT_CENTRE(bParam3);
			func_83(func_51(*uParam0), func_50(uParam0->f_1), str, 0);
		}
	}

	return;
}

void func_83(float fParam0, float fParam1, const char* sParam2, int iParam3) // Position - 0x6C5F (27743)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
	return;
}

void func_84(var uParam0, BOOL bParam1) // Position - 0x6C77 (27767)
{
	HUD::SET_TEXT_FONT(*uParam0);

	if (!(uParam0->f_8 == 0f) || !(uParam0->f_9 == 0f))
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);

	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);

	switch (uParam0->f_7)
	{
		case 0:
			break;
	
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
	
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
	
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}

	if (bParam1)
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);

	return;
}

void func_85(var uParam0, eHudColour ehcParam1) // Position - 0x6D10 (27920)
{
	var r;
	var g;
	var b;
	var a;

	HUD::GET_HUD_COLOUR(ehcParam1, &r, &g, &b, &a);
	uParam0->f_3 = r;
	uParam0->f_4 = g;
	uParam0->f_5 = b;
	return;
}

void func_86(var uParam0, eHudColour ehcParam1) // Position - 0x6D38 (27960)
{
	float num;
	var r;
	var g;
	var b;
	var a;

	if (ehcParam1 == HUD_COLOUR_PURE_WHITE)
		return;

	num = 0.951f;
	num.f_1 = uParam0->f_1;
	num.f_2 = 0.002f;
	num.f_3 = uParam0->f_3;
	HUD::GET_HUD_COLOUR(ehcParam1, &r, &g, &b, &a);
	num.f_4 = r;
	num.f_5 = g;
	num.f_6 = b;
	num.f_7 = a;
	func_87(num, 0, 0);
	return;
}

void func_87(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9) // Position - 0x6D9A (28058)
{
	float num;

	num = { uParam0 };

	switch (iParam8)
	{
		case 2:
			func_91(&num);
			break;
	
		case 1:
			func_90(&num);
			break;
	
		case 3:
			func_89(&num);
			break;
	
		case 4:
			func_88(&num);
			break;
	}

	if (func_52())
		if (iParam9 == 1)
			GRAPHICS::DRAW_RECT(func_51(num), func_50(num.f_1), num.f_2, num.f_3, num.f_4, num.f_5, num.f_6, num.f_7, false);
		else
			GRAPHICS::DRAW_RECT(func_51(num), func_50(num.f_1), num.f_2, num.f_3, num.f_4, num.f_5, num.f_6, num.f_7, false);

	return;
}

void func_88(var uParam0) // Position - 0x6E55 (28245)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
	return;
}

void func_89(var uParam0) // Position - 0x6E75 (28277)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
	return;
}

void func_90(var uParam0) // Position - 0x6E95 (28309)
{
	uParam0->f_4 = uParam0->f_4 - 50;
	uParam0->f_5 = uParam0->f_5 - 50;
	uParam0->f_6 = uParam0->f_6 - 50;
	return;
}

void func_91(var uParam0) // Position - 0x6EBE (28350)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
	return;
}

void func_92(const char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x6EDB (28379)
{
	float num;

	num = { *uParam2 };

	switch (iParam4)
	{
		case 0:
			func_99(&num);
			break;
	
		case 1:
			func_98(&num);
			break;
	
		case 5:
			func_97(&num);
			break;
	
		case 6:
			func_96(&num);
			break;
	
		case 7:
			func_95(&num);
			break;
	
		case 8:
			func_94(&num);
			break;
	
		case 9:
			func_93(&num);
			break;
	}

	if (func_52())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	
		if (iParam3 == 1)
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_51(num), func_50(num.f_1), num.f_2, num.f_3, num.f_8, num.f_4, num.f_5, num.f_6, num.f_7, bParam6, 0);
		else
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_51(num), func_50(num.f_1), num.f_2, num.f_3, num.f_8, num.f_4, num.f_5, num.f_6, num.f_7, bParam6, 0);
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}

	return;
}

void func_93(var uParam0) // Position - 0x6FE2 (28642)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
	return;
}

void func_94(var uParam0) // Position - 0x6FFC (28668)
{
	uParam0->f_7 = 2;
	return;
}

void func_95(var uParam0) // Position - 0x7009 (28681)
{
	uParam0->f_7 = 5;
	return;
}

void func_96(var uParam0) // Position - 0x7016 (28694)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
	return;
}

void func_97(var uParam0) // Position - 0x7033 (28723)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
	return;
}

void func_98(var uParam0) // Position - 0x7050 (28752)
{
	uParam0->f_4 = uParam0->f_4 - 50;
	uParam0->f_5 = uParam0->f_5 - 50;
	uParam0->f_6 = uParam0->f_6 - 50;
	return;
}

void func_99(var uParam0) // Position - 0x7079 (28793)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
	return;
}

void func_100(var uParam0, eHudColour ehcParam1) // Position - 0x70A1 (28833)
{
	var r;
	var g;
	var b;
	var a;

	HUD::GET_HUD_COLOUR(ehcParam1, &r, &g, &b, &a);
	uParam0->f_4 = r;
	uParam0->f_5 = g;
	uParam0->f_6 = b;
	return;
}

void func_101(var uParam0, int iParam1, int iParam2, int iParam3, eHudColour ehcParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) // Position - 0x70C9 (28873)
{
	var unk;

	if (iParam3 > 0)
	{
		unk = { uParam6 };
	
		if (func_260(uParam0, 2000, false) == false)
		{
			if (func_102(*uParam0, 1250, false))
				*iParam1 = *iParam1 - 17;
		
			unk.f_7 = *iParam1;
		
			if (iParam2 == 2)
				func_100(&unk, HUD_COLOUR_RED);
			else if (iParam2 == 3)
				func_100(&unk, HUD_COLOUR_GREEN);
			else
				func_100(&unk, ehcParam4);
		
			func_92("TimerBars", "ALL_WHITE_bg", &unk, 1, 0, iParam5, false);
		}
	}
	else
	{
		*iParam1 = 255;
		func_78(uParam0, false, false);
	}

	return;
}

BOOL func_102(int iParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x7158 (29016)
{
	if (iParam2 == -1)
		return true;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
		return true;

	return false;
}

BOOL func_103(int iParam0, var uParam1, var uParam2) // Position - 0x71AB (29099)
{
	if (func_260(uParam1, iParam0, false))
		return true;

	if (!_STOPWATCH_IS_INITIALIZED(uParam2))
	{
		func_79(uParam2, false, false);
	}
	else if (func_260(uParam2, 300, false))
	{
		if (func_260(uParam2, 800, false))
		{
			_STOPWATCH_DESTROY(uParam2);
			return true;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}

	return true;
}

int func_104() // Position - 0x720B (29195)
{
	int num;

	num = 1;

	if (Global_1675212.f_1171)
		num = 7;

	return num;
}

void func_105(int iParam0) // Position - 0x7225 (29221)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_590[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_611[iParam0 /*2*/]);
	return;
}

void func_106(int iParam0) // Position - 0x724B (29259)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_506[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_527[iParam0 /*2*/]);
	return;
}

void func_107(int iParam0) // Position - 0x7271 (29297)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_548[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_569[iParam0 /*2*/]);
	return;
}

void func_108(int iParam0) // Position - 0x7297 (29335)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_632[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_653[iParam0 /*2*/]);
	return;
}

void func_109(int iParam0) // Position - 0x72BD (29373)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_86[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_107[iParam0 /*2*/]);
	return;
}

void func_110(int iParam0) // Position - 0x72E1 (29409)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_2[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_23[iParam0 /*2*/]);
	return;
}

void func_111(int iParam0) // Position - 0x7305 (29445)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_44[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_65[iParam0 /*2*/]);
	return;
}

void func_112(int iParam0) // Position - 0x7329 (29481)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_128[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_149[iParam0 /*2*/]);
	return;
}

void func_113(var uParam0, eHudColour ehcParam1) // Position - 0x734D (29517)
{
	var r;
	var g;
	var b;
	var a;

	HUD::GET_HUD_COLOUR(ehcParam1, &r, &g, &b, &a);
	uParam0->f_3 = r;
	uParam0->f_4 = g;
	uParam0->f_5 = b;
	uParam0->f_6 = a;
	return;
}

void func_114(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4) // Position - 0x737B (29563)
{
	float num;

	num = func_118(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_73(iParam3);
	uParam1->f_1 = uParam1->f_1 + func_117(uParam4);
	*uParam2 = 0.795f;
	uParam2->f_1 = uParam1->f_1 + func_116(uParam0);
	func_115(iParam3, -num);
	return;
}

void func_115(int iParam0, float fParam1) // Position - 0x73CC (29644)
{
	switch (iParam0)
	{
		case 1:
			Global_1675212.f_1161 = Global_1675212.f_1161 + fParam1;
			break;
	
		case 2:
			Global_1675212.f_1162 = Global_1675212.f_1162 + fParam1;
			break;
	}

	return;
}

float func_116(var uParam0) // Position - 0x740F (29711)
{
	float num;

	switch (uParam0->f_10)
	{
		case 9:
			num = (((-0.01f - 0.005f) + 0.004f) - 0.0005f - 0.002f) + 0.002f + 0.0005f;
			break;
	
		case 10:
			num = (((-0.025f - 0.003f) + 0.002f) - 0.006f) + 0.001f;
			break;
	
		case 11:
			num = (-0.047f - 0.004f) + 0.012f + 0.001f + 0.007f;
			break;
	
		case 12:
			num = -0.019f + 0.011f + 0.004f;
			break;
	
		case 13:
			num = -0.012f + 0.001f;
			break;
	
		case 14:
			num = -0.012f + 0.001f + 0.001f;
			break;
	
		case 15:
			num = (-0.035f - 0.008f) + 0.006f + 0.013f + 0.0005f;
			break;
	
		case 16:
			num = (((-0.01f - 0.005f) + 0.004f) - 0.001f) + 0.001f;
			break;
	
		case 17:
			num = (-0.01f - 0.005f) + 0.004f + 0.005f + 0.0007f;
			break;
	
		case 18:
			num = (-0.01f - 0.005f) + 0.004f + 0.005f + 0.003f;
			break;
	
		case 6:
			num = (-0.01f - 0.005f) + 0.004f + 0.005f;
			break;
	
		case 19:
			num = (-0.01f - 0.005f) + 0.004f + 0.005f;
			break;
	}

	if (func_132())
		num = num + 0.003f;

	return num;
}

float func_117(var uParam0) // Position - 0x75E9 (30185)
{
	float num;

	switch (uParam0->f_10)
	{
		case 6:
			num = 0f;
			break;
	}

	return num;
}

float func_118(var uParam0) // Position - 0x7608 (30216)
{
	float num;

	switch (uParam0->f_10)
	{
		case 9:
			num = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f) + 0.001f + 0.0018f + 0.0005f) - 0.0005f;
			break;
	
		case 10:
			num = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) + 0.003f + 0.002f) - 0.004f;
			break;
	
		case 11:
			num = (((0.065f + 0.009f) - 0.006f - 0.009f) + 0.001f) - 0.009f;
			break;
	
		case 12:
			num = 0f;
			break;
	
		case 13:
			num = 0.065f + 0.009f;
			break;
	
		case 14:
			num = (0.065f + 0.009f) - 0.015f - 0.022f;
			break;
	
		case 15:
			num = 0f;
			break;
	
		case 16:
			num = ((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f) + 0.001f + 0.002f + 0.0003f;
			break;
	
		case 17:
			num = (((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f - 0.0005f;
			break;
	
		case 18:
			num = (((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f;
			break;
	
		case 19:
			num = (((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f - 0.012f;
			break;
	}

	return num;
}

void func_119(int iParam0) // Position - 0x77E9 (30697)
{
	switch (iParam0)
	{
		case 1:
			Global_1675212.f_1161 = func_32();
			break;
	
		case 2:
			Global_1675212.f_1162 = func_32();
			break;
	}

	return;
}

void func_120(int iParam0, int iParam1) // Position - 0x7820 (30752)
{
	MISC::SET_BIT(&Global_1675212.f_7096[iParam0], iParam1);
	return;
}

float func_121() // Position - 0x7839 (30777)
{
	float aspectRatio;
	int x;
	int y;
	float num;

	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&x, &y);
	num = SYSTEM::TO_FLOAT(x) / SYSTEM::TO_FLOAT(y);
	aspectRatio = func_122(aspectRatio, num);

	if (num > 3.5f && aspectRatio > 1.7f)
		return 1.4f;

	if (aspectRatio > 1.7f)
		return 1f;
	else if (aspectRatio > 1.5f)
		return 1.2f;
	else if (aspectRatio > 1.3f)
		return 1.3f;

	return 1.4f;
}

float func_122(float fParam0, float fParam1) // Position - 0x78C9 (30921)
{
	if (fParam0 > fParam1)
		return fParam1;

	return fParam0;
}

void func_123(var uParam0) // Position - 0x78E0 (30944)
{
	float num;

	num = (((0.95f - 0.047f) + 0.001f + 0.047f) - 0.002f) + 0.001f;
	uParam0->f_9 = num;

	if (Global_1675212.f_1165 == 0)
	{
		switch (uParam0->f_10)
		{
			case 11:
				uParam0->f_9 = uParam0->f_9 + 0.001f;
				break;
		
			case 10:
				uParam0->f_9 = uParam0->f_9 + 0.001f;
				break;
		
			default:
				break;
		}
	}

	if (Global_1675212.f_1165 == 1)
	{
		uParam0->f_9 = num;
		uParam0->f_9 = uParam0->f_9 + -0.113f;
	}

	return;
}

void func_124(var uParam0) // Position - 0x7977 (31095)
{
	float num;

	num = (0.88f - 0.062f) + 0.026f + 0.027f + 0.03f;

	if (Global_1675212.f_1172)
	{
		num = num + -0.034f;
	
		if (GRAPHICS::GET_IS_WIDESCREEN() == false)
			num = num + -0.02f;
	}

	if (Global_1675212.f_1173 && Global_1675212.f_1172 == false)
	{
		num = num + (-0.015f - 0.003f);
	
		if (GRAPHICS::GET_IS_WIDESCREEN() == false)
			num = num + -0.017f;
	}

	if (Global_1675212.f_1174 && Global_1675212.f_1173 == false && Global_1675212.f_1172 == false)
		num = num + -0.038f;

	if (Global_1675212.f_1165 == 1)
		num = num + -0.113f;

	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 && LOCALIZATION::GET_CURRENT_LANGUAGE() == 1 && !GRAPHICS::GET_IS_WIDESCREEN() && Global_1675212.f_1174)
		num = num + -0.007f;

	if (Global_1675212.f_1175)
		if (LOCALIZATION::GET_CURRENT_LANGUAGE() != 0 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 5 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 6 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 9 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 11 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 12)
			num = num + -0.009f;
		else
			num = num + -0.009f;

	if (Global_1675212.f_1176)
		if (func_125())
			num = num + -0.03f;
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() != 0 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 5 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 6 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 9 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 11 && LOCALIZATION::GET_CURRENT_LANGUAGE() != 12)
			num = num + -0.024f;
		else
			num = num + -0.019f;

	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 1 && Global_1675212.f_1173 == false && Global_1675212.f_1172 == false && Global_1675212.f_1165 == 0 && Global_1675212.f_1174 == false && Global_1675212.f_1175 == false && Global_1675212.f_1176 == false && MISC::IS_PC_VERSION())
		num = num + -0.005f;

	uParam0->f_9 = num;
	return;
}

BOOL func_125() // Position - 0x7BE2 (31714)
{
	int x;
	var y;

	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&x, &y);
	
		if (x <= 1024)
			return true;
	}

	return false;
}

void func_126(var uParam0, int iParam1, int iParam2) // Position - 0x7C06 (31750)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 16;
	return;
}

void func_127(var uParam0, int iParam1, int iParam2) // Position - 0x7C6B (31851)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f - 0.095f - 0.008f - 0.012f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 17;
	return;
}

void func_128(var uParam0, int iParam1, int iParam2) // Position - 0x7CE2 (31970)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f - 0.095f - 0.008f - 0.012f - 0.06f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 18;
	return;
}

void func_129(var uParam0, int iParam1) // Position - 0x7D5F (32095)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
	return;
}

void func_130(var uParam0, int iParam1) // Position - 0x7DAB (32171)
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.355f + 0.092f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 6;
	return;
}

void func_131(var uParam0, int iParam1) // Position - 0x7DFC (32252)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.416f + 0.089f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
	return;
}

BOOL func_132() // Position - 0x7E4E (32334)
{
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
		return true;

	return false;
}

void func_133(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x7E8C (32396)
{
	*uParam0 = fParam1;
	uParam0->f_1 = fParam2 + iParam9;
	uParam0->f_2 = fParam3;
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
	return;
}

BOOL func_134() // Position - 0x7EC6 (32454)
{
	return true;
}

void func_135(int iParam0, eHudColour ehcParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18, BOOL bParam19, int iParam20) // Position - 0x7ECF (32463)
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(13, iParam0))
		func_136(iParam0, &unk, &unk12, &unk23, &unk25, ehcParam1, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, bParam14, bParam15, bParam16, bParam17, bParam18, bParam19, iParam20);

	return;
}

void func_136(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, eHudColour ehcParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, BOOL bParam19, BOOL bParam20, BOOL bParam21, BOOL bParam22, BOOL bParam23, BOOL bParam24, int iParam25) // Position - 0x7F19 (32537)
{
	float num;
	BOOL flag;
	int drawOrder;
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
	var unk105;
	var unk106;
	var unk107;
	var unk108;
	var unk109;
	var unk110;
	var unk111;
	var unk117;
	var unk123;
	var unk129;
	var unk135;
	var unk141;
	var unk147;
	var unk153;
	var unk159;
	var unk165;
	var unk171;
	var unk177;
	var unk183;
	var unk189;
	var unk195;
	var unk201;
	var unk207;
	var unk213;
	var unk219;
	var unk225;
	var unk231;
	var unk237;
	var unk243;
	var unk249;
	eHudColour color;
	eHudColour color2;
	eHudColour color3;
	eHudColour color4;
	eHudColour color5;
	eHudColour color6;
	eHudColour color7;
	eHudColour color8;
	eHudColour color9;
	eHudColour color10;
	eHudColour color11;
	eHudColour color12;

	Global_1675212 = Global_1675212 + 1;

	if (func_134())
	{
		func_120(13, iParam0);
		func_129(uParam1, 0);
		func_124(uParam1);
	
		if (Global_1675212 == 1)
			func_119(iParam6);
	
		func_126(uParam2, 0, 0);
		func_123(uParam2);
		func_114(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_133(&num, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	
		if (iParam25 == 0)
			func_139(iParam0);
	
		if (func_103(iParam25, &Global_1675212.f_464[iParam0 /*2*/], &Global_1675212.f_485[iParam0 /*2*/]))
			flag = true;
		else
			flag = false;
	
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			drawOrder = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
			num = *uParam3;
			num.f_1 = uParam3->f_1;
			num = num + 0.079f;
			num.f_1 = num.f_1 + 0.008f;
			num.f_2 = num.f_2 + 0.157f;
			num.f_3 = num.f_3 + 0.036f;
			num.f_4 = num.f_4 + 255;
			num.f_5 = num.f_5 + 255;
			num.f_6 = num.f_6 + 255;
			num.f_7 = 140;
		
			if (func_132())
			{
				num = num + -0.025f;
				num.f_2 = num.f_2 + 0.05f;
			}
		
			Global_1675212.f_7129 = Global_1675212.f_7129 + num.f_3;
			func_92("TimerBars", "ALL_BLACK_bg", &num, 1, 0, 4, false);
			func_84(uParam1, false);
			num2 = *uParam4 + 0.145f + 0.001f;
			num3 = *uParam4 + 0.145f + 0.001f;
			num4 = *uParam4 + 0.123f;
			num5 = *uParam4 + 0.123f;
			num6 = *uParam4 + 0.101f;
			num7 = *uParam4 + 0.101f;
			num8 = *uParam4 + 0.078f;
			num9 = *uParam4 + 0.078f;
			num10 = *uParam4 + 0.056f;
			num11 = *uParam4 + 0.056f;
			num12 = *uParam4 + 0.034f;
			num13 = *uParam4 + 0.034f;
		
			if (func_132())
			{
				num2.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num3.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num4.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num5.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num6.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num7.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num8.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num9.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num10.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num11.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num12.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num13.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
			}
			else
			{
				num2.f_1 = uParam4->f_1 + 0.0185f;
				num3.f_1 = uParam4->f_1 + 0.019f;
				num4.f_1 = uParam4->f_1 + 0.0185f;
				num5.f_1 = uParam4->f_1 + 0.019f;
				num6.f_1 = uParam4->f_1 + 0.0185f;
				num7.f_1 = uParam4->f_1 + 0.019f;
				num8.f_1 = uParam4->f_1 + 0.0185f;
				num9.f_1 = uParam4->f_1 + 0.019f;
				num10.f_1 = uParam4->f_1 + 0.0185f;
				num11.f_1 = uParam4->f_1 + 0.019f;
				num12.f_1 = uParam4->f_1 + 0.0185f;
				num13.f_1 = uParam4->f_1 + 0.019f;
			}
		
			num2.f_2 = 0.016f + 0.003f;
			num3.f_2 = 0.016f + 0.003f;
			num4.f_2 = 0.016f + 0.003f;
			num5.f_2 = 0.016f + 0.003f;
			num6.f_2 = 0.016f + 0.003f;
			num7.f_2 = 0.016f + 0.003f;
			num8.f_2 = 0.016f + 0.003f;
			num9.f_2 = 0.016f + 0.003f;
			num10.f_2 = 0.016f + 0.003f;
			num11.f_2 = 0.016f + 0.003f;
			num12.f_2 = 0.016f + 0.003f;
			num13.f_2 = 0.016f + 0.003f;
			num2.f_3 = 0.032f + 0.004f;
			num3.f_3 = 0.032f + 0.004f;
			num4.f_3 = 0.032f + 0.004f;
			num5.f_3 = 0.032f + 0.004f;
			num6.f_3 = 0.032f + 0.004f;
			num7.f_3 = 0.032f + 0.004f;
			num8.f_3 = 0.032f + 0.004f;
			num9.f_3 = 0.032f + 0.004f;
			num10.f_3 = 0.032f + 0.004f;
			num11.f_3 = 0.032f + 0.004f;
			num12.f_3 = 0.032f + 0.004f;
			num13.f_3 = 0.032f + 0.004f;
			num2.f_7 = 255;
			num3.f_7 = 255;
			num4.f_7 = 255;
			num5.f_7 = 255;
			num6.f_7 = 255;
			num7.f_7 = 255;
			num8.f_7 = 255;
			num9.f_7 = 255;
			num10.f_7 = 255;
			num11.f_7 = 255;
			num12.f_7 = 255;
			num13.f_7 = 255;
			func_100(&num2, HUD_COLOUR_WHITE);
			func_100(&num3, HUD_COLOUR_WHITE);
			func_100(&num4, HUD_COLOUR_WHITE);
			func_100(&num5, HUD_COLOUR_WHITE);
			func_100(&num6, HUD_COLOUR_WHITE);
			func_100(&num7, HUD_COLOUR_WHITE);
			func_100(&num8, HUD_COLOUR_WHITE);
			func_100(&num9, HUD_COLOUR_WHITE);
			func_100(&num10, HUD_COLOUR_WHITE);
			func_100(&num11, HUD_COLOUR_WHITE);
			func_100(&num12, HUD_COLOUR_WHITE);
			func_100(&num13, HUD_COLOUR_WHITE);
			TEXT_LABEL_ASSIGN_STRING(&unk111, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk117, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk123, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk129, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk135, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk141, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk147, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk153, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk159, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk165, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk171, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk177, "", 24);
			color = HUD_COLOUR_WHITE;
			color2 = HUD_COLOUR_WHITE;
			color3 = HUD_COLOUR_WHITE;
			color4 = HUD_COLOUR_WHITE;
			color5 = HUD_COLOUR_WHITE;
			color6 = HUD_COLOUR_WHITE;
			color7 = HUD_COLOUR_WHITE;
			color8 = HUD_COLOUR_WHITE;
			color9 = HUD_COLOUR_WHITE;
			color10 = HUD_COLOUR_WHITE;
			color11 = HUD_COLOUR_WHITE;
			color12 = HUD_COLOUR_WHITE;
			func_138(&iParam13, &num2, &unk111, &unk183, &color, &iParam7, &unk105, &num3, &unk117, &unk189, &color2, ehcParam5, 0);
			func_138(&iParam14, &num4, &unk123, &unk195, &color3, &iParam8, &unk106, &num5, &unk129, &unk201, &color4, ehcParam5, 0);
			func_138(&iParam15, &num6, &unk135, &unk207, &color5, &iParam9, &unk107, &num7, &unk141, &unk213, &color6, ehcParam5, 0);
			func_138(&iParam16, &num8, &unk147, &unk219, &color7, &iParam10, &unk108, &num9, &unk153, &unk225, &color8, ehcParam5, 0);
			func_138(&iParam17, &num10, &unk159, &unk231, &color9, &iParam11, &unk109, &num11, &unk165, &unk237, &color10, ehcParam5, 0);
			func_138(&iParam18, &num12, &unk171, &unk243, &color11, &iParam12, &unk110, &num13, &unk177, &unk249, &color12, ehcParam5, 0);
		
			if (bParam19)
				if (flag)
					func_137(iParam13, &num2, &num3, &unk111, &unk183, color, &unk117, &unk189, color2);
			else
				func_137(iParam13, &num2, &num3, &unk111, &unk183, color, &unk117, &unk189, color2);
		
			if (bParam20)
				if (flag)
					func_137(iParam14, &num4, &num5, &unk123, &unk195, color3, &unk129, &unk201, color4);
			else
				func_137(iParam14, &num4, &num5, &unk123, &unk195, color3, &unk129, &unk201, color4);
		
			if (bParam21)
				if (flag)
					func_137(iParam15, &num6, &num7, &unk135, &unk207, color5, &unk141, &unk213, color6);
			else
				func_137(iParam15, &num6, &num7, &unk135, &unk207, color5, &unk141, &unk213, color6);
		
			if (bParam22)
				if (flag)
					func_137(iParam16, &num8, &num9, &unk147, &unk219, color7, &unk153, &unk225, color8);
			else
				func_137(iParam16, &num8, &num9, &unk147, &unk219, color7, &unk153, &unk225, color8);
		
			if (bParam23)
				if (flag)
					func_137(iParam17, &num10, &num11, &unk159, &unk231, color9, &unk165, &unk237, color10);
			else
				func_137(iParam17, &num10, &num11, &unk159, &unk231, color9, &unk165, &unk237, color10);
		
			if (bParam24)
				if (flag)
					func_137(iParam18, &num12, &num13, &unk171, &unk243, color11, &unk177, &unk249, color12);
			else
				func_137(iParam18, &num12, &num13, &unk171, &unk243, color11, &unk177, &unk249, color12);
		}
	
		func_48();
	}

	return;
}

void func_137(int iParam0, var uParam1, var uParam2, const char* sParam3, char* sParam4, eHudColour ehcParam5, const char* sParam6, char* sParam7, eHudColour ehcParam8) // Position - 0x8762 (34658)
{
	int r;
	int g;
	int b;
	var a;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam3, false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam3))
		{
			func_100(uParam1, ehcParam5);
			func_92(sParam3, sParam4, uParam1, 1, 0, 4, false);
		}
	}

	if (iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 31 || iParam0 == 32)
	{
		HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
		GRAPHICS::DRAW_RECT(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, r, g, b, 153, false);
	}

	if (iParam0 == 18 || iParam0 == 19 || iParam0 == 20 || iParam0 == 21 || iParam0 == 22 || iParam0 == 23 || iParam0 == 24 || iParam0 == 25 || iParam0 == 26 || iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 31 || iParam0 == 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam6, false);
		
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam6))
			{
				func_100(uParam2, ehcParam8);
				func_92(sParam6, sParam7, uParam2, 1, 0, 4, false);
			}
		}
	}

	return;
}

void func_138(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, var uParam5, var uParam6, var uParam7, char* sParam8, char* sParam9, var uParam10, eHudColour ehcParam11, int iParam12) // Position - 0x88DA (35034)
{
	switch (*uParam0)
	{
		case 5:
			uParam1->f_3 = uParam1->f_3 + -0.009f;
			uParam1->f_2 = uParam1->f_2 + -0.002f;
		
			if (func_132())
				uParam1->f_1 = uParam1->f_1 + 0.0055f;
			else
				uParam1->f_1 = uParam1->f_1 + 0.0025f;
		
			TEXT_LABEL_ASSIGN_STRING(sParam2, "MPRPSymbol", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "RP", 24);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBars", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Rockets", 24);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "MpSpecialRace", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "HOMING_ROCKET", 24);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBars", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Spikes", 24);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBars", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Boost", 24);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "CrossTheLine", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Timer_LargeTick_32", 24);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "CrossTheLine", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Timer_LargeCross_32", 24);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Beast", 24);
			*uParam4 = 118;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "MPSpecialRace", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "MACHINE_GUN", 24);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Random", 24);
			*uParam4 = 118;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Slow_Time", 24);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Swap", 24);
			*uParam4 = 118;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Testosterone", 24);
			*uParam4 = 118;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Thermal", 24);
			*uParam4 = 118;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Weed", 24);
			*uParam4 = 118;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(sParam2, "TimerBar_Icons", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam3, "Pickup_Hidden", 24);
			*uParam4 = 118;
			break;
	
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
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
			if (*uParam5 != _INVALID_PLAYER_INDEX())
			{
				*uParam6 = func_62(*uParam5);
			
				if (*uParam6 != 0)
				{
					TEXT_LABEL_ASSIGN_STRING(sParam2, PED::GET_PEDHEADSHOT_TXD_STRING(*uParam6), 24);
					TEXT_LABEL_ASSIGN_STRING(sParam3, PED::GET_PEDHEADSHOT_TXD_STRING(*uParam6), 24);
				}
			}
		
			uParam1->f_2 = 0.016f + 0.004f;
			uParam1->f_3 = 0.034f;
		
			if (*uParam0 == 18)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_cross", 24);
				*uParam10 = ehcParam11;
			}
		
			if (*uParam0 == 19)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_tick", 24);
				*uParam10 = ehcParam11;
			}
		
			if (*uParam0 == 20 || *uParam0 == 27)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_0", 24);
				*uParam10 = iParam12;
			}
		
			if (*uParam0 == 21 || *uParam0 == 28)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_1", 24);
				*uParam10 = iParam12;
			}
		
			if (*uParam0 == 22 || *uParam0 == 29)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_2", 24);
				*uParam10 = iParam12;
			}
		
			if (*uParam0 == 23 || *uParam0 == 30)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_3", 24);
				*uParam10 = iParam12;
			}
		
			if (*uParam0 == 24 || *uParam0 == 31)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_4", 24);
				*uParam10 = iParam12;
			}
		
			if (*uParam0 == 25 || *uParam0 == 32)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, "timerbar_sr", 24);
				TEXT_LABEL_ASSIGN_STRING(sParam9, "timer_5", 24);
				*uParam10 = iParam12;
			}
		
			if (*uParam0 == 26)
				*uParam10 = ehcParam11;
		
			if (*uParam0 == 20 || *uParam0 == 21 || *uParam0 == 22 || *uParam0 == 23 || *uParam0 == 24 || *uParam0 == 25 || *uParam0 == 26)
				uParam1->f_7 = 127;
			break;
	
		case 0:
			uParam1->f_7 = 0;
			uParam7->f_7 = 0;
			break;
	}

	return;
}

void func_139(int iParam0) // Position - 0x8D2E (36142)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_464[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_485[iParam0 /*2*/]);
	return;
}

void func_140(int iParam0, int iParam1, float fParam2, const char* sParam3, int iParam4, int iParam5, BOOL bParam6, eHudColour ehcParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, BOOL bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, BOOL bParam26, int iParam27, int iParam28, BOOL bParam29, int iParam30, int iParam31) // Position - 0x8D54 (36180)
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(12, iParam0))
		func_141(iParam0, &unk, &unk12, &unk23, &unk25, iParam1, fParam2, sParam3, iParam4, iParam5, bParam6, ehcParam7, 1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, bParam19, iParam20, iParam21, iParam22, iParam23, iParam24, iParam25, bParam26, iParam27, iParam28, bParam29, iParam30, iParam31);

	return;
}

void func_141(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6, const char* sParam7, int iParam8, int iParam9, BOOL bParam10, eHudColour ehcParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, BOOL bParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, BOOL bParam31, int iParam32, int iParam33, BOOL bParam34, int iParam35, int iParam36) // Position - 0x8DB4 (36276)
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
	float num14;
	float num15;
	float num16;
	var unk129;
	var unk130;
	var unk131;
	var unk132;
	var unk133;
	var unk134;
	var unk140;
	var unk146;
	var unk152;
	var unk158;
	var unk164;
	var unk170;
	var unk176;
	var unk182;
	var unk188;
	var unk194;
	var unk200;
	var unk206;
	var unk212;
	var unk218;
	var unk224;
	var unk230;
	var unk236;
	var unk242;
	var unk248;
	var unk254;
	var unk260;
	var unk266;
	var unk272;
	var unk278;
	var unk284;
	var unk290;
	var unk296;
	var unk302;
	var unk308;
	eHudColour color;
	eHudColour color2;
	eHudColour color3;
	eHudColour color4;
	eHudColour color5;
	eHudColour color6;
	eHudColour color7;
	eHudColour color8;
	eHudColour color9;
	eHudColour color10;
	eHudColour color11;
	eHudColour color12;
	eHudColour color13;
	eHudColour color14;
	eHudColour color15;
	int drawOrder;
	BOOL flag;
	BOOL flag2;

	Global_1675212 = Global_1675212 + 1;

	if (func_134())
	{
		func_133(&num, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_129(uParam1, 3);
	
		if (iParam5 < 1000000)
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && fParam6 >= 100f && MISC::ARE_STRINGS_EQUAL("AMCH_KMHN" /*~1~km/h*/, sParam7))
				func_128(uParam2, 0, 0);
			else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12 && iParam5 > 999 || iParam9 > 999 || fParam6 > 1000f)
				func_128(uParam2, 0, 0);
			else if (iParam9 > 99)
				func_127(uParam2, 0, 0);
			else
				func_126(uParam2, 0, 0);
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 && MISC::ARE_STRINGS_EQUAL("HUD_CASH" /*$~1~*/, sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG" /*-$~1~*/, sParam7))
			func_128(uParam2, 0, 0);
		else
			func_127(uParam2, 0, 0);
	
		func_124(uParam1);
		func_123(uParam2);
		func_120(12, iParam0);
	
		if (Global_1675212 == 1)
			func_119(iParam12);
	
		func_114(uParam2, uParam3, uParam4, iParam12, uParam1);
		func_113(uParam2, ehcParam11);
		uParam2->f_6 = 255;
		num2 = *uParam4 + 0.095f;
		num3 = *uParam4 + 0.095f;
		num4 = *uParam4 + 0.095f;
		num5 = *uParam4 + 0.072f;
		num6 = *uParam4 + 0.072f;
		num7 = *uParam4 + 0.072f;
		num8 = *uParam4 + 0.049f;
		num9 = *uParam4 + 0.049f;
		num10 = *uParam4 + 0.049f;
		num11 = *uParam4 + 0.026f;
		num12 = *uParam4 + 0.026f;
		num13 = *uParam4 + 0.026f;
		num14 = *uParam4 + 0.003f;
		num15 = *uParam4 + 0.003f;
		num16 = *uParam4 + 0.003f;
	
		if (func_132())
		{
			num2.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			num3.f_1 = uParam4->f_1 + 0.016f;
			num4.f_1 = uParam4->f_1 + 0.016f;
			num5.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			num6.f_1 = uParam4->f_1 + 0.016f;
			num7.f_1 = uParam4->f_1 + 0.016f;
			num8.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			num9.f_1 = uParam4->f_1 + 0.016f;
			num10.f_1 = uParam4->f_1 + 0.016f;
			num11.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			num12.f_1 = uParam4->f_1 + 0.016f;
			num13.f_1 = uParam4->f_1 + 0.016f;
			num14.f_1 = (uParam4->f_1 + 0.016f) - 0.0005f;
			num15.f_1 = uParam4->f_1 + 0.016f;
			num16.f_1 = uParam4->f_1 + 0.016f;
		}
		else
		{
			num2.f_1 = uParam4->f_1 + 0.0185f;
			num3.f_1 = uParam4->f_1 + 0.019f;
			num4.f_1 = uParam4->f_1 + 0.019f;
			num5.f_1 = uParam4->f_1 + 0.0185f;
			num6.f_1 = uParam4->f_1 + 0.019f;
			num7.f_1 = uParam4->f_1 + 0.019f;
			num8.f_1 = uParam4->f_1 + 0.0185f;
			num9.f_1 = uParam4->f_1 + 0.019f;
			num10.f_1 = uParam4->f_1 + 0.019f;
			num11.f_1 = uParam4->f_1 + 0.0185f;
			num12.f_1 = uParam4->f_1 + 0.019f;
			num13.f_1 = uParam4->f_1 + 0.019f;
			num14.f_1 = uParam4->f_1 + 0.0185f;
			num15.f_1 = uParam4->f_1 + 0.019f;
			num16.f_1 = uParam4->f_1 + 0.019f;
		}
	
		num2.f_2 = 0.016f + 0.003f;
		num3.f_2 = 0.016f + 0.003f;
		num4.f_2 = 0.016f + 0.003f;
		num5.f_2 = 0.016f + 0.003f;
		num6.f_2 = 0.016f + 0.003f;
		num7.f_2 = 0.016f + 0.003f;
		num8.f_2 = 0.016f + 0.003f;
		num9.f_2 = 0.016f + 0.003f;
		num10.f_2 = 0.016f + 0.003f;
		num11.f_2 = 0.016f + 0.003f;
		num12.f_2 = 0.016f + 0.003f;
		num13.f_2 = 0.016f + 0.003f;
		num14.f_2 = 0.016f + 0.003f;
		num15.f_2 = 0.016f + 0.003f;
		num16.f_2 = 0.016f + 0.003f;
		num2.f_3 = 0.032f + 0.004f;
		num3.f_3 = 0.032f + 0.004f;
		num4.f_3 = 0.032f + 0.004f;
		num5.f_3 = 0.032f + 0.004f;
		num6.f_3 = 0.032f + 0.004f;
		num7.f_3 = 0.032f + 0.004f;
		num8.f_3 = 0.032f + 0.004f;
		num9.f_3 = 0.032f + 0.004f;
		num10.f_3 = 0.032f + 0.004f;
		num11.f_3 = 0.032f + 0.004f;
		num12.f_3 = 0.032f + 0.004f;
		num13.f_3 = 0.032f + 0.004f;
		num14.f_3 = 0.032f + 0.004f;
		num15.f_3 = 0.032f + 0.004f;
		num16.f_3 = 0.032f + 0.004f;
		num2.f_7 = 255;
		num3.f_7 = 255;
		num4.f_7 = 255;
		num5.f_7 = 255;
		num6.f_7 = 255;
		num7.f_7 = 255;
		num8.f_7 = 255;
		num9.f_7 = 255;
		num10.f_7 = 255;
		num11.f_7 = 255;
		num12.f_7 = 255;
		num13.f_7 = 255;
		num14.f_7 = 255;
		num15.f_7 = 255;
		num16.f_7 = 255;
		func_100(&num2, HUD_COLOUR_WHITE);
		func_100(&num3, HUD_COLOUR_WHITE);
		func_100(&num4, HUD_COLOUR_WHITE);
		func_100(&num5, HUD_COLOUR_WHITE);
		func_100(&num6, HUD_COLOUR_WHITE);
		func_100(&num7, HUD_COLOUR_WHITE);
		func_100(&num8, HUD_COLOUR_WHITE);
		func_100(&num9, HUD_COLOUR_WHITE);
		func_100(&num10, HUD_COLOUR_WHITE);
		func_100(&num11, HUD_COLOUR_WHITE);
		func_100(&num12, HUD_COLOUR_WHITE);
		func_100(&num13, HUD_COLOUR_WHITE);
		func_100(&num14, HUD_COLOUR_WHITE);
		func_100(&num15, HUD_COLOUR_WHITE);
		func_100(&num16, HUD_COLOUR_WHITE);
		TEXT_LABEL_ASSIGN_STRING(&unk134, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk140, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk146, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk152, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk158, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk164, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk170, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk176, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk182, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk188, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk194, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk200, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk206, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk212, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk218, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk224, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk230, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk236, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk242, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk248, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk254, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk260, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk266, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk272, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk278, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk284, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk290, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk296, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk302, "", 24);
		TEXT_LABEL_ASSIGN_STRING(&unk308, "", 24);
		color = HUD_COLOUR_WHITE;
		color2 = HUD_COLOUR_WHITE;
		color3 = HUD_COLOUR_WHITE;
		color4 = HUD_COLOUR_WHITE;
		color5 = HUD_COLOUR_WHITE;
		color6 = HUD_COLOUR_WHITE;
		color7 = HUD_COLOUR_WHITE;
		color8 = HUD_COLOUR_WHITE;
		color9 = HUD_COLOUR_WHITE;
		color10 = HUD_COLOUR_WHITE;
		color11 = HUD_COLOUR_WHITE;
		color12 = HUD_COLOUR_WHITE;
		color13 = HUD_COLOUR_WHITE;
		color14 = HUD_COLOUR_WHITE;
		color15 = HUD_COLOUR_WHITE;
		func_138(&iParam18, &num2, &unk134, &unk224, &color, &iParam13, &unk129, &num3, &unk140, &unk230, &color2, ehcParam11, iParam25);
		func_138(&iParam19, &num5, &unk152, &unk242, &color4, &iParam14, &unk130, &num6, &unk158, &unk248, &color5, ehcParam11, iParam26);
		func_138(&iParam20, &num8, &unk170, &unk260, &color7, &iParam15, &unk131, &num9, &unk176, &unk266, &color8, ehcParam11, iParam27);
		func_138(&iParam21, &num11, &unk188, &unk278, &color10, &iParam16, &unk132, &num12, &unk194, &unk284, &color11, ehcParam11, iParam28);
		func_138(&iParam22, &num14, &unk206, &unk296, &color13, &iParam17, &unk133, &num15, &unk212, &unk302, &color14, ehcParam11, iParam29);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	
		if (func_147(&unk134, &unk140, &unk152, &unk158, &unk170, &unk176, &unk188, &unk194, &unk206, &unk212) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			drawOrder = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
			num = *uParam3;
			num.f_1 = uParam3->f_1;
		
			if (iParam5 < 1000000)
			{
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.008f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.036f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
			}
			else
			{
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.01f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.033f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
			}
		
			if (func_132())
			{
				num = num + -0.025f;
				num.f_2 = num.f_2 + 0.05f;
			}
		
			Global_1675212.f_7129 = Global_1675212.f_7129 + num.f_3;
			func_92("TimerBars", "ALL_BLACK_bg", &num, 1, 0, 4, false);
			func_84(uParam1, false);
		
			if (iParam35 == 0)
				func_146(iParam0);
		
			if (func_103(iParam35, &Global_1675212.f_422[iParam0 /*2*/], &Global_1675212.f_443[iParam0 /*2*/]))
				flag = true;
			else
				flag = false;
		
			if (bParam34 && GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS())
			{
				if (flag)
				{
					if (iParam33 == iParam13 && iParam36 == 5)
						func_145(iParam18, &num2, &num3, &unk134, &unk224, color, &unk140, &unk230, color2);
				
					if (iParam33 == iParam14 && iParam36 == 4)
						func_145(iParam19, &num5, &num6, &unk152, &unk242, color4, &unk158, &unk248, color5);
				
					if (iParam33 == iParam15 && iParam36 == 3)
						func_145(iParam20, &num8, &num9, &unk170, &unk260, color7, &unk176, &unk266, color8);
				
					if (iParam33 == iParam16 && iParam36 == 2)
						func_145(iParam21, &num11, &num12, &unk188, &unk278, color10, &unk194, &unk284, color11);
				
					if (iParam33 == iParam17 && iParam36 == 1)
						func_145(iParam22, &num14, &num15, &unk206, &unk296, color13, &unk212, &unk302, color14);
				}
			
				if (iParam33 == iParam13 && iParam36 != 5)
					func_145(iParam18, &num2, &num3, &unk134, &unk224, color, &unk140, &unk230, color2);
			
				if (iParam33 == iParam14 && iParam36 != 4)
					func_145(iParam19, &num5, &num6, &unk152, &unk242, color4, &unk158, &unk248, color5);
			
				if (iParam33 == iParam15 && iParam36 != 3)
					func_145(iParam20, &num8, &num9, &unk170, &unk260, color7, &unk176, &unk266, color8);
			
				if (iParam33 == iParam16 && iParam36 != 2)
					func_145(iParam21, &num11, &num12, &unk188, &unk278, color10, &unk194, &unk284, color11);
			
				if (iParam33 == iParam17 && iParam36 != 1)
					func_145(iParam22, &num14, &num15, &unk206, &unk296, color13, &unk212, &unk302, color14);
			
				if (iParam33 != iParam13)
					func_145(iParam18, &num2, &num3, &unk134, &unk224, color, &unk140, &unk230, color2);
			
				if (iParam33 != iParam14)
					func_145(iParam19, &num5, &num6, &unk152, &unk242, color4, &unk158, &unk248, color5);
			
				if (iParam33 != iParam15)
					func_145(iParam20, &num8, &num9, &unk170, &unk260, color7, &unk176, &unk266, color8);
			
				if (iParam33 != iParam16)
					func_145(iParam21, &num11, &num12, &unk188, &unk278, color10, &unk194, &unk284, color11);
			
				if (iParam33 != iParam17)
					func_145(iParam22, &num14, &num15, &unk206, &unk296, color13, &unk212, &unk302, color14);
			}
			else
			{
				func_145(iParam18, &num2, &num3, &unk134, &unk224, color, &unk140, &unk230, color2);
				func_145(iParam19, &num5, &num6, &unk152, &unk242, color4, &unk158, &unk248, color5);
				func_145(iParam20, &num8, &num9, &unk170, &unk260, color7, &unk176, &unk266, color8);
				func_145(iParam21, &num11, &num12, &unk188, &unk278, color10, &unk194, &unk284, color11);
				func_145(iParam22, &num14, &num15, &unk206, &unk296, color13, &unk212, &unk302, color14);
			}
		
			if (iParam32 == 0)
				func_144(iParam0);
		
			if (func_103(iParam32, &Global_1675212.f_380[iParam0 /*2*/], &Global_1675212.f_401[iParam0 /*2*/]))
				flag2 = true;
			else
				flag2 = false;
		
			if (bParam24)
			{
				switch (iParam30)
				{
					case -1:
						func_143(&num4, &unk146, &unk236, &color3, &iParam13, &iParam23, ehcParam11);
						func_143(&num7, &unk164, &unk254, &color6, &iParam14, &iParam23, ehcParam11);
						func_143(&num10, &unk182, &unk272, &color9, &iParam15, &iParam23, ehcParam11);
						func_143(&num13, &unk200, &unk290, &color12, &iParam16, &iParam23, ehcParam11);
						func_143(&num16, &unk218, &unk308, &color15, &iParam17, &iParam23, ehcParam11);
					
						if (bParam31)
						{
							if (flag2)
							{
								func_142(&num4, &unk146, &unk236, color3);
								func_142(&num7, &unk164, &unk254, color6);
								func_142(&num10, &unk182, &unk272, color9);
								func_142(&num13, &unk200, &unk290, color12);
								func_142(&num16, &unk218, &unk308, color15);
							}
						}
						else
						{
							func_142(&num4, &unk146, &unk236, color3);
							func_142(&num7, &unk164, &unk254, color6);
							func_142(&num10, &unk182, &unk272, color9);
							func_142(&num13, &unk200, &unk290, color12);
							func_142(&num16, &unk218, &unk308, color15);
						}
						break;
				
					case 0:
						break;
				
					case 1:
						func_143(&num4, &unk146, &unk236, &color3, &iParam13, &iParam23, ehcParam11);
					
						if (bParam31)
							if (flag2)
								func_142(&num4, &unk146, &unk236, color3);
						else
							func_142(&num4, &unk146, &unk236, color3);
						break;
				
					case 2:
						func_143(&num7, &unk164, &unk254, &color6, &iParam14, &iParam23, ehcParam11);
					
						if (bParam31)
							if (flag2)
								func_142(&num7, &unk164, &unk254, color6);
						else
							func_142(&num7, &unk164, &unk254, color6);
						break;
				
					case 3:
						func_143(&num10, &unk182, &unk272, &color9, &iParam15, &iParam23, ehcParam11);
					
						if (bParam31)
							if (flag2)
								func_142(&num10, &unk182, &unk272, color9);
						else
							func_142(&num10, &unk182, &unk272, color9);
						break;
				
					case 4:
						func_143(&num13, &unk200, &unk290, &color12, &iParam16, &iParam23, ehcParam11);
					
						if (bParam31)
							if (flag2)
								func_142(&num13, &unk200, &unk290, color12);
						else
							func_142(&num13, &unk200, &unk290, color12);
						break;
				
					case 5:
						func_143(&num16, &unk218, &unk308, &color15, &iParam17, &iParam23, ehcParam11);
					
						if (bParam31)
							if (flag2)
								func_142(&num16, &unk218, &unk308, color15);
						else
							func_142(&num16, &unk218, &unk308, color15);
						break;
				}
			}
		
			func_84(uParam2, false);
		
			if (bParam10)
			{
				func_61(uParam4, uParam2, "???", "", HUD_COLOUR_WHITE, 2);
			}
			else if (func_56(sParam7))
			{
				if (iParam9 == 0)
					if (iParam8 == 0)
						if (iParam5 != -999)
							func_59(uParam4, uParam2, "NUMBER" /*~1~*/, iParam5, 2);
					else
						func_57(uParam4, uParam2, "NUMBER" /*~1~*/, fParam6, Global_2698275, 2);
				else
					func_54(uParam4, uParam2, "TIMER_DASHES" /*~1~/~1~*/, iParam5, iParam9, 2, false);
			}
			else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH" /*$~1~*/, sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_S" /*$~a~*/, sParam7))
			{
				sParam7 = "HUD_CASH_S" /*$~a~*/;
				*uParam2 = 5;
				func_84(uParam2, false);
				func_49(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG" /*-$~1~*/, sParam7) || MISC::ARE_STRINGS_EQUAL("HUD_CASH_NEG_S" /*-$~a~*/, sParam7))
			{
				*uParam2 = 5;
				func_84(uParam2, false);
				sParam7 = "HUD_CASH_NEG_S" /*-$~a~*/;
				func_49(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (iParam8 == 0)
			{
				func_59(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else
			{
				func_57(uParam4, uParam2, sParam7, fParam6, Global_2698275, 2);
			}
		
			func_48();
		}
	}

	return;
}

void func_142(var uParam0, const char* sParam1, char* sParam2, eHudColour ehcParam3) // Position - 0x9E1D (40477)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1))
		{
			func_100(uParam0, ehcParam3);
			func_92(sParam1, sParam2, uParam0, 1, 0, 4, false);
		}
	}

	return;
}

void func_143(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5, eHudColour ehcParam6) // Position - 0x9E58 (40536)
{
	if (*uParam5 != _INVALID_PLAYER_INDEX() && *uParam4 != _INVALID_PLAYER_INDEX())
	{
		if (*uParam5 == *uParam4)
		{
			TEXT_LABEL_ASSIGN_STRING(sParam1, "timerbar_sr", 24);
			TEXT_LABEL_ASSIGN_STRING(sParam2, "timer_box", 24);
			*uParam3 = ehcParam6;
			uParam0->f_2 = 0.016f + 0.008f;
			uParam0->f_3 = 0.038f;
		}
	}

	return;
}

void func_144(int iParam0) // Position - 0x9EAE (40622)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_380[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_401[iParam0 /*2*/]);
	return;
}

void func_145(int iParam0, var uParam1, var uParam2, const char* sParam3, char* sParam4, eHudColour ehcParam5, const char* sParam6, char* sParam7, eHudColour ehcParam8) // Position - 0x9ED4 (40660)
{
	int r;
	int g;
	int b;
	var a;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_100(uParam1, ehcParam5);
		func_92(sParam3, sParam4, uParam1, 1, 0, 4, false);
	}

	if (iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 31 || iParam0 == 32)
	{
		HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
		GRAPHICS::DRAW_RECT(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, r, g, b, 153, false);
	}

	if (iParam0 == 18 || iParam0 == 19 || iParam0 == 20 || iParam0 == 21 || iParam0 == 22 || iParam0 == 23 || iParam0 == 24 || iParam0 == 25 || iParam0 == 26 || iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 31 || iParam0 == 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		{
			func_100(uParam2, ehcParam8);
			func_92(sParam6, sParam7, uParam2, 1, 0, 4, false);
		}
	}

	return;
}

void func_146(int iParam0) // Position - 0xA026 (40998)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_422[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_443[iParam0 /*2*/]);
	return;
}

BOOL func_147(const char* sParam0, const char* sParam1, const char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6, const char* sParam7, const char* sParam8, const char* sParam9) // Position - 0xA04C (41036)
{
	BOOL num;

	num = 1;

	if (func_148(sParam0, sParam1) == 0)
		num = 0;

	if (func_148(sParam2, sParam3) == 0)
		num = 0;

	if (func_148(sParam4, sParam5) == 0)
		num = 0;

	if (func_148(sParam6, sParam7) == 0)
		num = 0;

	if (func_148(sParam8, sParam9) == 0)
		num = 0;

	return num;
}

int func_148(const char* sParam0, const char* sParam1) // Position - 0xA0A4 (41124)
{
	int num;
	int num2;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam0, false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam0))
			num = 1;
	}
	else
	{
		num = 1;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1))
			num2 = 1;
	}
	else
	{
		num2 = 1;
	}

	if (num && num2)
		return 1;

	return 0;
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, int iParam14) // Position - 0xA109 (41225)
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(11, iParam0))
		func_150(iParam0, &unk, &unk12, &unk23, &unk25, iParam1, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, bParam10, bParam11, bParam12, bParam13, iParam14);

	return;
}

void func_150(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18, int iParam19) // Position - 0xA147 (41287)
{
	float num;
	BOOL flag;
	int drawOrder;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	var unk73;
	var unk74;
	var unk75;
	var unk76;
	var unk77;
	var unk83;
	var unk89;
	var unk95;
	var unk101;
	var unk107;
	var unk113;
	var unk119;
	var unk125;
	var unk131;
	var unk137;
	var unk143;
	var unk149;
	var unk155;
	var unk161;
	var unk167;
	eHudColour color;
	eHudColour color2;
	eHudColour color3;
	eHudColour color4;
	eHudColour color5;
	eHudColour color6;
	eHudColour color7;
	eHudColour color8;

	Global_1675212 = Global_1675212 + 1;

	if (func_134())
	{
		func_120(11, iParam0);
		func_129(uParam1, 0);
		func_124(uParam1);
	
		if (Global_1675212 == 1)
			func_119(iParam6);
	
		func_126(uParam2, 0, 0);
		func_123(uParam2);
		func_114(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_133(&num, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	
		if (iParam19 == 0)
			func_151(iParam0);
	
		if (func_103(iParam19, &Global_1675212.f_338[iParam0 /*2*/], &Global_1675212.f_359[iParam0 /*2*/]))
			flag = true;
		else
			flag = false;
	
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			drawOrder = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
			num = *uParam3;
			num.f_1 = uParam3->f_1;
			num = num + 0.079f;
			num.f_1 = num.f_1 + 0.008f;
			num.f_2 = num.f_2 + 0.157f;
			num.f_3 = num.f_3 + 0.036f;
			num.f_4 = num.f_4 + 255;
			num.f_5 = num.f_5 + 255;
			num.f_6 = num.f_6 + 255;
			num.f_7 = 140;
		
			if (func_132())
			{
				num = num + -0.025f;
				num.f_2 = num.f_2 + 0.05f;
			}
		
			Global_1675212.f_7129 = Global_1675212.f_7129 + num.f_3;
			func_92("TimerBars", "ALL_BLACK_bg", &num, 1, 0, 4, false);
			func_84(uParam1, false);
			num2 = *uParam4 + 0.145f + 0.001f;
			num3 = *uParam4 + 0.145f + 0.001f;
			num4 = *uParam4 + 0.123f;
			num5 = *uParam4 + 0.123f;
			num6 = *uParam4 + 0.101f;
			num7 = *uParam4 + 0.101f;
			num8 = *uParam4 + 0.078f;
			num9 = *uParam4 + 0.078f;
		
			if (func_132())
			{
				num2.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num3.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num4.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num5.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num6.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num7.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
				num8.f_1 = (uParam4->f_1 + 0.016f) - 0f;
				num9.f_1 = uParam4->f_1 + 0.016f + 0.0005f;
			}
			else
			{
				num2.f_1 = uParam4->f_1 + 0.0185f;
				num3.f_1 = uParam4->f_1 + 0.019f;
				num4.f_1 = uParam4->f_1 + 0.0185f;
				num5.f_1 = uParam4->f_1 + 0.019f;
				num6.f_1 = uParam4->f_1 + 0.0185f;
				num7.f_1 = uParam4->f_1 + 0.019f;
				num8.f_1 = uParam4->f_1 + 0.0185f;
				num9.f_1 = uParam4->f_1 + 0.019f;
			}
		
			num2.f_2 = 0.016f + 0.003f;
			num3.f_2 = 0.016f + 0.003f;
			num4.f_2 = 0.016f + 0.003f;
			num5.f_2 = 0.016f + 0.003f;
			num6.f_2 = 0.016f + 0.003f;
			num7.f_2 = 0.016f + 0.003f;
			num8.f_2 = 0.016f + 0.003f;
			num9.f_2 = 0.016f + 0.003f;
			num2.f_3 = 0.032f + 0.004f;
			num3.f_3 = 0.032f + 0.004f;
			num4.f_3 = 0.032f + 0.004f;
			num5.f_3 = 0.032f + 0.004f;
			num6.f_3 = 0.032f + 0.004f;
			num7.f_3 = 0.032f + 0.004f;
			num8.f_3 = 0.032f + 0.004f;
			num9.f_3 = 0.032f + 0.004f;
			num2.f_7 = 255;
			num3.f_7 = 255;
			num4.f_7 = 255;
			num5.f_7 = 255;
			num6.f_7 = 255;
			num7.f_7 = 255;
			num8.f_7 = 255;
			num9.f_7 = 255;
			func_100(&num2, HUD_COLOUR_WHITE);
			func_100(&num3, HUD_COLOUR_WHITE);
			func_100(&num4, HUD_COLOUR_WHITE);
			func_100(&num5, HUD_COLOUR_WHITE);
			func_100(&num6, HUD_COLOUR_WHITE);
			func_100(&num7, HUD_COLOUR_WHITE);
			func_100(&num8, HUD_COLOUR_WHITE);
			func_100(&num9, HUD_COLOUR_WHITE);
			TEXT_LABEL_ASSIGN_STRING(&unk77, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk83, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk89, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk95, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk101, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk107, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk113, "", 24);
			TEXT_LABEL_ASSIGN_STRING(&unk119, "", 24);
			color = HUD_COLOUR_WHITE;
			color2 = HUD_COLOUR_WHITE;
			color3 = HUD_COLOUR_WHITE;
			color4 = HUD_COLOUR_WHITE;
			color5 = HUD_COLOUR_WHITE;
			color6 = HUD_COLOUR_WHITE;
			color7 = HUD_COLOUR_WHITE;
			color8 = HUD_COLOUR_WHITE;
			func_138(&iParam11, &num2, &unk77, &unk125, &color, &iParam7, &unk73, &num3, &unk83, &unk131, &color2, iParam5, 0);
			func_138(&iParam12, &num4, &unk89, &unk137, &color3, &iParam8, &unk74, &num5, &unk95, &unk143, &color4, iParam5, 0);
			func_138(&iParam13, &num6, &unk101, &unk149, &color5, &iParam9, &unk75, &num7, &unk107, &unk155, &color6, iParam5, 0);
			func_138(&iParam14, &num8, &unk113, &unk161, &color7, &iParam10, &unk76, &num9, &unk119, &unk167, &color8, iParam5, 0);
		
			if (bParam15)
				if (flag)
					func_137(iParam11, &num2, &num3, &unk77, &unk125, color, &unk83, &unk131, color2);
			else
				func_137(iParam11, &num2, &num3, &unk77, &unk125, color, &unk83, &unk131, color2);
		
			if (bParam16)
				if (flag)
					func_137(iParam12, &num4, &num5, &unk89, &unk137, color3, &unk95, &unk143, color4);
			else
				func_137(iParam12, &num4, &num5, &unk89, &unk137, color3, &unk95, &unk143, color4);
		
			if (bParam17)
				if (flag)
					func_137(iParam13, &num6, &num7, &unk101, &unk149, color5, &unk107, &unk155, color6);
			else
				func_137(iParam13, &num6, &num7, &unk101, &unk149, color5, &unk107, &unk155, color6);
		
			if (bParam18)
				if (flag)
					func_137(iParam14, &num8, &num9, &unk113, &unk161, color7, &unk119, &unk167, color8);
			else
				func_137(iParam14, &num8, &num9, &unk113, &unk161, color7, &unk119, &unk167, color8);
		}
	
		func_48();
	}

	return;
}

void func_151(int iParam0) // Position - 0xA721 (42785)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_338[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_359[iParam0 /*2*/]);
	return;
}

void func_152(int iParam0, int iParam1, int iParam2, const char* sParam3, eHudColour ehcParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, const char* sParam12, BOOL bParam13, eHudColour ehcParam14, eHudColour ehcParam15) // Position - 0xA747 (42823)
{
	var unk;
	var unk12;
	var unk14;

	if (func_29(10, iParam0))
	{
		unk14 = 4;
		func_153(iParam0, &unk, &unk12, &unk14, iParam1, iParam2, 1, sParam3, ehcParam4, iParam7, bParam6, iParam5, iParam8, iParam9, iParam10, sParam11, sParam12, bParam13, ehcParam14, ehcParam15);
	}

	return;
}

void func_153(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, const char* sParam7, eHudColour ehcParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, int iParam14, char* sParam15, const char* sParam16, BOOL bParam17, eHudColour ehcParam18, eHudColour ehcParam19) // Position - 0xA78A (42890)
{
	float num;
	BOOL flag;
	int drawOrder;
	var unk9;

	Global_1675212 = Global_1675212 + 1;

	if (func_134())
	{
		iParam13 == 2;
		func_120(10, iParam0);
	
		if (func_132())
			func_166(uParam1, 0);
		else if (bParam17)
			func_129(uParam1, 0);
		else if (bParam10)
			func_130(uParam1, 3);
		else
			func_129(uParam1, 0);
	
		if (Global_1675212 == 1)
			func_119(iParam6);
	
		func_162(uParam2, uParam3, &num, iParam6, uParam1);
		func_124(uParam1);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_121()));
	
		if (iParam11 == 0)
			func_161(iParam0);
	
		if (iParam14 == 0)
			func_160(iParam0);
	
		if (func_103(iParam11, &Global_1675212.f_296[iParam0 /*2*/], &Global_1675212.f_317[iParam0 /*2*/]))
			flag = true;
		else
			flag = false;
	
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			drawOrder = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
			num = *uParam2;
			num.f_1 = uParam2->f_1;
			num = num + 0.079f;
			num.f_1 = num.f_1 + 0.008f;
			num.f_2 = num.f_2 + 0.157f;
			num.f_3 = num.f_3 + 0.036f;
			num.f_4 = num.f_4 + 255;
			num.f_5 = num.f_5 + 255;
			num.f_6 = num.f_6 + 255;
			num.f_7 = 140;
		
			if (func_132())
			{
				num = num + -0.025f;
				num.f_2 = num.f_2 + 0.05f;
			}
		
			Global_1675212.f_7129 = Global_1675212.f_7129 + num.f_3;
		
			if (iParam14 > 0)
			{
				unk9 = { num };
			
				if (func_260(&Global_1675212.f_905[iParam0 /*2*/], 2000, false) == false)
				{
					if (func_102(Global_1675212.f_905[iParam0 /*2*/], 1250, false))
						Global_1675212.f_926[iParam0] = Global_1675212.f_926[iParam0] - 17;
				
					unk9.f_7 = Global_1675212.f_926[iParam0];
					func_100(&unk9, ehcParam8);
					func_92("TimerBars", "ALL_WHITE_bg", &unk9, 1, 0, drawOrder, false);
				}
			}
			else
			{
				Global_1675212.f_926[iParam0] = 255;
				func_78(&Global_1675212.f_905[iParam0 /*2*/], false, false);
			}
		
			func_92("TimerBars", "ALL_BLACK_bg", &num, 1, 0, drawOrder, false);
			func_86(&num, ehcParam18);
		
			if (func_132())
				if (bParam10)
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
						uParam2->f_1 = uParam2->f_1 + -0.009f;
					else
						uParam2->f_1 = uParam2->f_1 + -0.003f;
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					uParam2->f_1 = uParam2->f_1 + -0.012f;
				else
					uParam2->f_1 = uParam2->f_1 + -0.008f;
			else if (bParam10)
				uParam2->f_1 = uParam2->f_1 + -0.005f + 0.001f;
		
			drawOrder = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
		
			if (bParam17)
			{
				func_85(uParam1, ehcParam8);
				func_84(uParam1, false);
				func_61(uParam2, uParam1, sParam7, "", ehcParam19, 2);
			}
			else if (bParam10 == true)
			{
				func_85(uParam1, ehcParam8);
				func_84(uParam1, false);
				func_61(uParam2, uParam1, sParam7, "", ehcParam19, 2);
			}
			else
			{
				func_84(uParam1, false);
			
				if (iParam9 == -1)
					func_82(uParam2, uParam1, sParam7, false, true);
				else
					func_59(uParam2, uParam1, sParam7, iParam9, 2);
			}
		
			drawOrder = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
		
			if (flag)
			{
				func_156(iParam4, iParam5, uParam3, ehcParam8, iParam12, drawOrder);
				func_154(sParam15, uParam3, drawOrder, sParam16);
			}
		
			func_48();
		}
	}

	return;
}

void func_154(char* sParam0, var uParam1, int iParam2, const char* sParam3) // Position - 0xAB19 (43801)
{
	var unk;

	unk = 1;
	unk[0 /*9*/] = 0f;
	unk[0 /*9*/].f_1 = 0f;
	unk[0 /*9*/].f_2 = -0.015f;
	unk[0 /*9*/].f_3 = -0.025f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam3, false);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam3))
	{
		func_155(&uParam1->[0 /*9*/], &unk[0 /*9*/]);
		func_100(&uParam1->[0 /*9*/], HUD_COLOUR_WHITE);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
		uParam1->[0 /*9*/].f_7 = 255;
		func_92(sParam3, sParam0, &uParam1->[0 /*9*/], 0, 0, iParam2, false);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	}

	return;
}

void func_155(var uParam0, var uParam1) // Position - 0xAB9E (43934)
{
	*uParam0 = *uParam0 + *uParam1;
	uParam0->f_1 = uParam0->f_1 + uParam1->f_1;
	uParam0->f_2 = uParam0->f_2 + uParam1->f_2;
	uParam0->f_3 = uParam0->f_3 + uParam1->f_3;
	uParam0->f_4 = uParam0->f_4 + uParam1->f_4;
	uParam0->f_5 = uParam0->f_5 + uParam1->f_5;
	uParam0->f_6 = uParam0->f_6 + uParam1->f_6;
	uParam0->f_7 = uParam0->f_7 + uParam1->f_7;
	return;
}

void func_156(int iParam0, int iParam1, var uParam2, eHudColour ehcParam3, int iParam4, int iParam5) // Position - 0xAC0B (44043)
{
	var unk;
	float num;

	unk = 2;
	unk[0 /*9*/] = 0.003f;
	unk[0 /*9*/].f_1 = -0.004f;
	unk[0 /*9*/].f_2 = 0.011f;
	unk[0 /*9*/].f_3 = 0.059f;
	unk[1 /*9*/] = 0f;
	unk[1 /*9*/].f_2 = 0.011f;
	unk[1 /*9*/].f_3 = 0.059f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_155(&uParam2->[0 /*9*/], &unk[0 /*9*/]);
		func_155(&uParam2->[1 /*9*/], &unk[1 /*9*/]);
		uParam2->[3 /*9*/] = { uParam2->[0 /*9*/] };
		func_100(&uParam2->[1 /*9*/], ehcParam3);
		func_100(&uParam2->[3 /*9*/], ehcParam3);
		num = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f;
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		uParam2->[3 /*9*/].f_7 = 51;
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, false);
		func_100(&uParam2->[3 /*9*/], ehcParam3);
		uParam2->[3 /*9*/].f_7 = 51;
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, false);
		uParam2->[3 /*9*/].f_7 = 255;
		func_157(uParam2->[0 /*9*/], num, &uParam2->[1 /*9*/], 1, 1, iParam4, 0, true);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[1 /*9*/], 0, 0, iParam5, false);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}

	return;
}

void func_157(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, BOOL bParam15) // Position - 0xAD60 (44384)
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

	num = fParam0.f_2;
	num2 = 0f;
	num3 = func_159(fParam0);
	num4 = fParam9;

	if (fParam9 < 0f)
		num4 = 0f;

	if (fParam9 > 100f)
		num4 = 100f;

	if (bParam15)
		if (fParam9 > 95f && fParam9 < 100f)
			num4 = 96f;

	if (iParam12 == 0)
	{
		num5 = (num2 - num) / 100f;
		num6 = num4;
		num7 = num;
		num8 = (num5 * num6) + num7;
		num3 = fParam0;
		num9 = func_158(fParam0);
		num10 = num9 - (num8 / 2f);
	}
	else
	{
		num5 = (num - num2) / 100f;
		num6 = num4;
		num7 = 0f;
		num8 = (num5 * num6) + num7;
	
		if (fParam9 >= 100f)
			num8 = fParam0.f_2;
	
		num9 = fParam0;
		num5 = (num9 - num3) / 100f;
		num6 = num4;
		num7 = num3;
		num10 = (num5 * num6) + num7;
	}

	if (iParam14 > 0f && iParam14 < 100f)
	{
		num11 = fParam0.f_2 * 0.01f;
		num10 = num10 + (iParam14 * num11);
	}

	*uParam10 = num10;
	uParam10->f_1 = fParam0.f_1;
	uParam10->f_2 = num8;

	if (iParam11 == 1)
		uParam10->f_3 = fParam0.f_3;

	uParam10->f_8 = fParam0.f_8;
	return;
}

float func_158(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xAEA5 (44709)
{
	float num;
	float num2;

	num = fParam0.f_2 / 2f;
	num2 = fParam0;
	num2 = num2 + num;
	num2 = num2 - 0.002f;
	return num2;
}

float func_159(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xAECC (44748)
{
	float num;
	float num2;

	num = fParam0.f_2 / 2f;
	num2 = fParam0;
	num2 = num2 - num;
	return num2;
}

void func_160(int iParam0) // Position - 0xAEE9 (44777)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_800[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_821[iParam0 /*2*/]);
	return;
}

void func_161(int iParam0) // Position - 0xAF0F (44815)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_296[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_317[iParam0 /*2*/]);
	Global_1675212.f_1177.f_205[iParam0] = -1;
	return;
}

void func_162(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4) // Position - 0xAF43 (44867)
{
	float num;

	num = func_165(false, true);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_73(iParam3);
	uParam0->f_1 = uParam0->f_1 + func_117(uParam4);
	func_163(uParam1, iParam3, -1f, -1f);
	func_115(iParam3, -num);
	func_133(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	return;
}

void func_163(var uParam0, int iParam1, float fParam2, float fParam3) // Position - 0xAF97 (44951)
{
	float num;
	float num2;

	if (!func_164(fParam2, fParam3))
	{
		num = func_74() + func_73(iParam1);
		num2 = func_72();
	}
	else
	{
		num = fParam3;
		num2 = fParam2;
	}

	uParam0->[0 /*9*/] = num2;
	uParam0->[0 /*9*/].f_1 = num;
	uParam0->[0 /*9*/].f_2 = 0.062f;
	uParam0->[0 /*9*/].f_3 = 0.016f;
	uParam0->[0 /*9*/].f_4 = 255;
	uParam0->[0 /*9*/].f_5 = 255;
	uParam0->[0 /*9*/].f_6 = 0;
	uParam0->[0 /*9*/].f_7 = 250;
	uParam0->[1 /*9*/] = num2;
	uParam0->[1 /*9*/].f_1 = num;
	uParam0->[1 /*9*/].f_2 = 0.069f;
	uParam0->[1 /*9*/].f_3 = 0.011f;
	uParam0->[1 /*9*/].f_4 = 255;
	uParam0->[1 /*9*/].f_5 = 255;
	uParam0->[1 /*9*/].f_6 = 0;
	uParam0->[1 /*9*/].f_7 = 250;
	uParam0->[2 /*9*/] = num2;
	uParam0->[2 /*9*/].f_1 = num;
	uParam0->[2 /*9*/].f_2 = 0.069f;
	uParam0->[2 /*9*/].f_3 = 0.009f;
	uParam0->[2 /*9*/].f_4 = 0;
	uParam0->[2 /*9*/].f_5 = 0;
	uParam0->[2 /*9*/].f_6 = 0;
	uParam0->[2 /*9*/].f_7 = 120;
	uParam0->[3 /*9*/] = num2;
	uParam0->[3 /*9*/].f_1 = num;
	uParam0->[3 /*9*/].f_2 = 0.069f;
	uParam0->[3 /*9*/].f_3 = 0.008f;
	uParam0->[3 /*9*/].f_4 = 0;
	uParam0->[3 /*9*/].f_5 = 0;
	uParam0->[3 /*9*/].f_6 = 0;
	uParam0->[3 /*9*/].f_7 = 90;
	return;
}

BOOL func_164(float fParam0, float fParam1) // Position - 0xB0F1 (45297)
{
	if (fParam0 == -1f && fParam1 == -1f)
		return false;

	return true;
}

float func_165(BOOL bParam0, BOOL bParam1) // Position - 0xB10E (45326)
{
	float num;

	num = 0.025f + 0.006f + 0.0009f;

	if (bParam0 == 1)
		num = num + 0.008f;

	if (bParam1)
		num = num + 0.008f;

	return num;
}

void func_166(var uParam0, int iParam1) // Position - 0xB14A (45386)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.508f - 0.03f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
	return;
}

void func_167(int iParam0, int iParam1, eHudColour ehcParam2) // Position - 0xB19C (45468)
{
	var unk;
	var unk12;

	if (func_29(9, iParam0))
		func_168(iParam0, &unk, &unk12, 1, iParam1, ehcParam2);

	return;
}

void func_168(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, eHudColour ehcParam5) // Position - 0xB1BE (45502)
{
	var r;
	var g;
	var b;
	var a;
	float num;
	var unk;

	Global_1675212 = Global_1675212 + 1;

	if (func_134())
	{
		HUD::GET_HUD_COLOUR(ehcParam5, &r, &g, &b, &a);
		func_171(uParam1, 3, r, g, b);
	
		if (func_132())
		{
			uParam1->f_1 = 2f;
			uParam1->f_2 = 2.7f;
		}
	
		if (Global_1675212 == 1)
			func_119(iParam3);
	
		num = 0.131f;
	
		if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8)
			num = 0.0872f;
		else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
			num = 0.095f;
	
		*uParam2 = 0.795f;
		uParam2->f_1 = (func_73(iParam3) + func_116(uParam1)) - num;
		func_123(uParam1);
		func_84(uParam1, false);
		func_120(9, iParam0);
		Global_1675212.f_7129 = Global_1675212.f_7129 + (num - 0.036f);
		func_170(&unk, iParam4);
		func_82(uParam2, uParam1, func_169(&unk), false, true);
		func_48();
	}

	return;
}

const char* func_169(const char* sParam0) // Position - 0xB2A3 (45731)
{
	return sParam0;
}

void func_170(var uParam0, int iParam1) // Position - 0xB2AD (45741)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "RACE_POS_", 16);
	TEXT_LABEL_APPEND_INT(&unk, iParam1, 16);
	*uParam0 = { unk };
	return;
}

void func_171(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0xB2CB (45771)
{
	*uParam0 = 6;
	uParam0->f_1 = 3f;
	uParam0->f_2 = 3.7f;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	uParam0->f_5 = uParam4;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 11;
	return;
}

void func_172(int iParam0, const char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB313 (45843)
{
	var unk;
	var unk12;
	var unk14;

	if (func_29(8, iParam0))
	{
		unk14 = 2;
		func_173(iParam0, &unk, &unk12, &unk14, 1, sParam1, iParam3, fParam2, iParam4, iParam5, iParam6);
	}

	return;
}

void func_173(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, const char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) // Position - 0xB344 (45892)
{
	var unk;
	float num;

	Global_1675212 = Global_1675212 + 1;

	if (func_134())
	{
		func_133(&num, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_129(uParam1, 0);
		func_124(uParam1);
		func_120(8, iParam0);
	
		if (Global_1675212 == 1)
			func_119(iParam4);
	
		func_174(uParam2, iParam4, uParam1, &unk);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Hunting", false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Hunting"))
		{
			num = *uParam2;
			num.f_1 = uParam2->f_1;
			num = num + 0.079f;
			num.f_1 = num.f_1 + 0.008f;
			num.f_2 = num.f_2 + 0.157f;
			num.f_3 = num.f_3 + 0.036f;
			num.f_4 = num.f_4 + 255;
			num.f_5 = num.f_5 + 255;
			num.f_6 = num.f_6 + 255;
			num.f_7 = 140;
		
			if (func_132())
			{
				num = num + -0.025f;
				num.f_2 = num.f_2 + 0.05f;
			}
		
			Global_1675212.f_7129 = Global_1675212.f_7129 + num.f_3;
			func_92("TimerBars", "ALL_BLACK_bg", &num, 1, 0, 4, false);
			unk.f_4 = uParam8;
			unk.f_5 = uParam9;
			unk.f_6 = uParam10;
			unk.f_7 = 255;
			unk.f_8 = uParam7;
			func_92("Hunting", "HuntingWindArrow_32", &unk, 1, 0, 4, false);
			uParam1->f_3 = uParam8;
			uParam1->f_4 = uParam9;
			uParam1->f_5 = uParam10;
			uParam1->f_6 = 255;
			func_84(uParam1, false);
			uParam7 = uParam7;
			uParam3->[0 /*9*/] = uParam3->[0 /*9*/];
			func_59(uParam2, uParam1, sParam5, iParam6, 2);
			func_48();
		}
	}

	return;
}

void func_174(var uParam0, int iParam1, var uParam2, var uParam3) // Position - 0xB4D9 (46297)
{
	float num;

	num = func_165(false, false);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_73(iParam1);
	uParam0->f_1 = uParam0->f_1 + func_117(uParam2);
	func_115(iParam1, -num);
	uParam0->f_1 = uParam0->f_1 + func_117(uParam2);
	*uParam3 = 0.9375f;
	uParam3->f_1 = uParam0->f_1 + 0.009f;
	uParam3->f_2 = 0.02f;
	uParam3->f_3 = 0.02f;
	return;
}

void func_175(int iParam0, int iParam1, const char* sParam2, eHudColour ehcParam3, eHudColour ehcParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, BOOL bParam16, float fParam17, float fParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, eHudColour ehcParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, BOOL bParam46, eHudColour ehcParam47, eHudColour ehcParam48, eHudColour ehcParam49, eHudColour ehcParam50, eHudColour ehcParam51, eHudColour ehcParam52, eHudColour ehcParam53, eHudColour ehcParam54, eHudColour ehcParam55) // Position - 0xB54A (46410)
{
	var unk;
	var unk12;
	var unk14;
	var unk96;

	if (func_29(2, iParam0))
	{
		unk14 = 9;
	
		if (iParam1 < 9)
			func_176(iParam0, &unk, &unk12, &unk14, &unk96, iParam1, 1, ehcParam3, ehcParam4, sParam2, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, bParam16, fParam17, fParam18, iParam19, iParam20, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28, iParam29, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, ehcParam37, iParam38, iParam39, iParam40, iParam41, iParam42, iParam43, iParam44, iParam45, bParam46, ehcParam47, ehcParam48, ehcParam49, ehcParam50, ehcParam51, ehcParam52, ehcParam53, ehcParam54, ehcParam55);
	}

	return;
}

void func_176(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, eHudColour ehcParam7, eHudColour ehcParam8, const char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, float fParam22, float fParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, eHudColour ehcParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, BOOL bParam51, eHudColour ehcParam52, eHudColour ehcParam53, eHudColour ehcParam54, eHudColour ehcParam55, eHudColour ehcParam56, eHudColour ehcParam57, eHudColour ehcParam58, eHudColour ehcParam59, eHudColour ehcParam60) // Position - 0xB5E9 (46569)
{
	float num;
	BOOL flag;
	int drawOrder;
	var unk9;

	Global_1675212 = Global_1675212 + 1;

	if (func_134())
	{
		iParam40 == 2;
		func_120(2, iParam0);
	
		if (Global_1675212 == 1)
			func_119(iParam6);
	
		func_183(uParam2, uParam3, &num, uParam4, iParam6, fParam22, fParam23, uParam1);
	
		if (func_132())
			func_166(uParam1, 0);
		else if (bParam51)
			func_129(uParam1, 0);
		else if (bParam21)
			func_130(uParam1, 3);
		else
			func_129(uParam1, 0);
	
		func_124(uParam1);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_121()));
	
		if (iParam19 == 0)
			func_182(iParam0);
	
		if (iParam41 == 0)
			func_181(iParam0);
	
		drawOrder = func_104();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			if (func_103(iParam19, &Global_1675212.f_212[iParam0 /*2*/], &Global_1675212.f_233[iParam0 /*2*/]))
				flag = true;
			else
				flag = false;
		
			if (!func_164(fParam22, fParam23))
			{
				num = *uParam2;
				num.f_1 = uParam2->f_1;
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.012f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.028f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
			
				if (func_132())
				{
					num = num + -0.025f;
					num.f_2 = num.f_2 + 0.05f;
				}
			
				Global_1675212.f_7129 = Global_1675212.f_7129 + num.f_3;
			
				if (iParam41 > 0)
				{
					unk9 = { num };
				
					if (func_260(&Global_1675212.f_1065[iParam0 /*2*/], 2000, false) == false)
					{
						if (func_102(Global_1675212.f_1065[iParam0 /*2*/], 1250, false))
							Global_1675212.f_1086[iParam0] = Global_1675212.f_1086[iParam0] - 17;
					
						unk9.f_7 = Global_1675212.f_1086[iParam0];
						func_100(&unk9, ehcParam7);
						func_92("TimerBars", "ALL_WHITE_bg", &unk9, 1, 0, drawOrder, false);
					}
				}
				else
				{
					Global_1675212.f_1086[iParam0] = 255;
					func_78(&Global_1675212.f_1065[iParam0 /*2*/], false, false);
				}
			
				func_92("TimerBars", "ALL_BLACK_bg", &num, 1, 0, drawOrder, false);
			}
		
			func_86(&num, ehcParam52);
			drawOrder = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
			func_85(uParam1, ehcParam42);
		
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				uParam2->f_1 = uParam2->f_1 + -0.009f;
			else
				uParam2->f_1 = uParam2->f_1 + -0.003f;
		
			if (func_132())
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					uParam2->f_1 = uParam2->f_1 + -0.009f;
				else
					uParam2->f_1 = uParam2->f_1 + -0.007f;
		
			if (func_132() == false)
				if (bParam51)
					uParam2->f_1 = uParam2->f_1 + 0.003f;
				else if (bParam21)
					uParam2->f_1 = uParam2->f_1 + -0.002f;
			else if (bParam21)
				uParam2->f_1 = uParam2->f_1 + 0.007f;
			else
				uParam2->f_1 = uParam2->f_1 + 0.003f;
		
			if (!func_164(fParam22, fParam23))
			{
				func_84(uParam1, false);
			
				if (bParam51)
				{
					func_61(uParam2, uParam1, sParam9, "", ehcParam42, 2);
				}
				else if (bParam21 == true)
				{
					func_61(uParam2, uParam1, sParam9, "", ehcParam42, 2);
				}
				else if (iParam20 == -1)
				{
					func_82(uParam2, uParam1, sParam9, false, true);
				}
				else
				{
					uParam2->f_1 = uParam2->f_1 - -0.003f;
					func_59(uParam2, uParam1, sParam9, iParam20, 2);
				}
			}
		
			if (flag)
				func_177(iParam5, uParam3, ehcParam7, ehcParam8, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam24, iParam25, iParam26, iParam27, iParam28, iParam29, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37, iParam38, iParam39, drawOrder, iParam43, iParam44, iParam45, iParam46, iParam47, iParam48, iParam49, iParam50, ehcParam53, ehcParam54, ehcParam55, ehcParam56, ehcParam57, ehcParam58, ehcParam59, ehcParam60);
		
			func_48();
		}
	}

	return;
}

void func_177(int iParam0, var uParam1, eHudColour ehcParam2, eHudColour ehcParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, eHudColour ehcParam13, eHudColour ehcParam14, eHudColour ehcParam15, eHudColour ehcParam16, eHudColour ehcParam17, eHudColour ehcParam18, eHudColour ehcParam19, eHudColour ehcParam20, eHudColour ehcParam21, eHudColour ehcParam22, eHudColour ehcParam23, eHudColour ehcParam24, eHudColour ehcParam25, eHudColour ehcParam26, eHudColour ehcParam27, eHudColour ehcParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, eHudColour ehcParam38, eHudColour ehcParam39, eHudColour ehcParam40, eHudColour ehcParam41, eHudColour ehcParam42, eHudColour ehcParam43, eHudColour ehcParam44, eHudColour ehcParam45) // Position - 0xB9F7 (47607)
{
	BOOL flag;
	eHudColour color;
	eHudColour color2;
	float num;
	int i;
	var unk;
	BOOL flag2;

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Cross", false);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Cross"))
	{
		num = -0.0094f;
	
		for (i = 0; i <= iParam0 - 1; i = i + 1)
		{
			uParam1->[i /*9*/] = uParam1->[i /*9*/] + (num * (float)i);
		
			if (func_180(i, iParam4))
			{
				switch (i)
				{
					case 0:
						flag = bParam5;
						color = ehcParam13;
						color2 = ehcParam21;
						break;
				
					case 1:
						flag = bParam6;
						color = ehcParam14;
						color2 = ehcParam22;
						break;
				
					case 2:
						flag = bParam7;
						color = ehcParam15;
						color2 = ehcParam23;
						break;
				
					case 3:
						flag = bParam8;
						color = ehcParam16;
						color2 = ehcParam24;
						break;
				
					case 4:
						flag = bParam9;
						color = ehcParam17;
						color2 = ehcParam25;
						break;
				
					case 5:
						flag = bParam10;
						color = ehcParam18;
						color2 = ehcParam26;
						break;
				
					case 6:
						flag = bParam11;
						color = ehcParam19;
						color2 = ehcParam27;
						break;
				
					case 7:
						flag = bParam12;
						color = ehcParam20;
						color2 = ehcParam28;
						break;
				}
			
				flag2 = false;
			
				if (color2 == HUD_COLOUR_BLACK)
				{
					flag2 = true;
					color2 = HUD_COLOUR_WHITE;
				}
			
				unk = { func_179(uParam1->[i /*9*/], flag, ehcParam2, ehcParam3, color, color2) };
			
				if (flag2)
					unk.f_7 = 51;
			
				func_92("TimerBars", "Circle_checkpoints", &unk, 0, 0, iParam29, false);
			
				if (func_178(i, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37))
				{
					switch (i)
					{
						case 0:
							func_100(&uParam1->[i /*9*/], ehcParam38);
							break;
					
						case 1:
							func_100(&uParam1->[i /*9*/], ehcParam39);
							break;
					
						case 2:
							func_100(&uParam1->[i /*9*/], ehcParam40);
							break;
					
						case 3:
							func_100(&uParam1->[i /*9*/], ehcParam41);
							break;
					
						case 4:
							func_100(&uParam1->[i /*9*/], ehcParam42);
							break;
					
						case 5:
							func_100(&uParam1->[i /*9*/], ehcParam43);
							break;
					
						case 6:
							func_100(&uParam1->[i /*9*/], ehcParam44);
							break;
					
						case 7:
							func_100(&uParam1->[i /*9*/], ehcParam45);
							break;
					}
				
					func_92("Cross", "Circle_checkpoints_Cross", &uParam1->[i /*9*/], 0, 0, iParam29, false);
				}
			}
		}
	}

	return;
}

BOOL func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xBC37 (48183)
{
	if (iParam0 == 0 && iParam1 == 1)
		return true;

	if (iParam0 == 1 && iParam2 == 1)
		return true;

	if (iParam0 == 2 && iParam3 == 1)
		return true;

	if (iParam0 == 3 && iParam4 == 1)
		return true;

	if (iParam0 == 4 && iParam5 == 1)
		return true;

	if (iParam0 == 5 && iParam6 == 1)
		return true;

	if (iParam0 == 6 && iParam7 == 1)
		return true;

	if (iParam0 == 7 && iParam8 == 1)
		return true;

	return false;
}

struct<9> func_179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, BOOL bParam9, eHudColour ehcParam10, eHudColour ehcParam11, eHudColour ehcParam12, eHudColour ehcParam13) // Position - 0xBCE0 (48352)
{
	var unk;

	unk = { uParam0 };

	if (ehcParam12 == HUD_COLOUR_PURE_WHITE)
		if (bParam9)
			func_100(&unk, ehcParam10);
		else
			func_100(&unk, ehcParam11);
	else if (bParam9)
		func_100(&unk, ehcParam12);
	else
		func_100(&unk, ehcParam13);

	bParam9 == false;
	return unk;
}

BOOL func_180(int iParam0, int iParam1) // Position - 0xBD36 (48438)
{
	if (iParam1 == -1)
		return true;

	if (iParam0 > iParam1)
		return false;

	return true;
}

void func_181(int iParam0) // Position - 0xBD54 (48468)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_716[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_737[iParam0 /*2*/]);
	return;
}

void func_182(int iParam0) // Position - 0xBD7A (48506)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_212[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_233[iParam0 /*2*/]);
	return;
}

void func_183(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5, float fParam6, var uParam7) // Position - 0xBD9E (48542)
{
	float num;

	num = func_165(false, false);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_73(iParam4);
	uParam0->f_1 = uParam0->f_1 + func_117(uParam7);
	func_185(uParam1, iParam4, fParam5, fParam6);
	func_184(uParam3);

	if (!func_164(fParam5, fParam6))
		func_115(iParam4, -num);

	func_133(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	return;
}

void func_184(var uParam0) // Position - 0xBE06 (48646)
{
	*uParam0 = 0.851f;
	uParam0->f_1 = 0.075f;
	uParam0->f_2 = 0.001f;
	uParam0->f_3 = 0.009f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 250;
	return;
}

void func_185(var uParam0, int iParam1, float fParam2, float fParam3) // Position - 0xBE46 (48710)
{
	float num;
	float num2;

	if (!func_164(fParam2, fParam3))
	{
		num = func_74() + func_73(iParam1);
		num2 = func_186();
	}
	else
	{
		num = fParam3;
		num2 = fParam2;
	}

	uParam0->[0 /*9*/] = num2;
	uParam0->[0 /*9*/].f_1 = num;
	uParam0->[0 /*9*/].f_2 = 0.012f;
	uParam0->[0 /*9*/].f_3 = 0.023f;
	uParam0->[0 /*9*/].f_4 = 0;
	uParam0->[0 /*9*/].f_5 = 0;
	uParam0->[0 /*9*/].f_6 = 0;
	uParam0->[0 /*9*/].f_7 = 250;
	uParam0->[1 /*9*/] = num2;
	uParam0->[1 /*9*/].f_1 = num;
	uParam0->[1 /*9*/].f_2 = 0.012f;
	uParam0->[1 /*9*/].f_3 = 0.023f;
	uParam0->[1 /*9*/].f_4 = 0;
	uParam0->[1 /*9*/].f_5 = 0;
	uParam0->[1 /*9*/].f_6 = 0;
	uParam0->[1 /*9*/].f_7 = 250;
	uParam0->[2 /*9*/] = num2;
	uParam0->[2 /*9*/].f_1 = num;
	uParam0->[2 /*9*/].f_2 = 0.012f;
	uParam0->[2 /*9*/].f_3 = 0.023f;
	uParam0->[2 /*9*/].f_4 = 0;
	uParam0->[2 /*9*/].f_5 = 0;
	uParam0->[2 /*9*/].f_6 = 0;
	uParam0->[2 /*9*/].f_7 = 250;
	uParam0->[3 /*9*/] = num2;
	uParam0->[3 /*9*/].f_1 = num;
	uParam0->[3 /*9*/].f_2 = 0.012f;
	uParam0->[3 /*9*/].f_3 = 0.023f;
	uParam0->[3 /*9*/].f_4 = 0;
	uParam0->[3 /*9*/].f_5 = 0;
	uParam0->[3 /*9*/].f_6 = 0;
	uParam0->[3 /*9*/].f_7 = 250;
	uParam0->[4 /*9*/] = num2;
	uParam0->[4 /*9*/].f_1 = num;
	uParam0->[4 /*9*/].f_2 = 0.012f;
	uParam0->[4 /*9*/].f_3 = 0.023f;
	uParam0->[4 /*9*/].f_4 = 0;
	uParam0->[4 /*9*/].f_5 = 0;
	uParam0->[4 /*9*/].f_6 = 0;
	uParam0->[4 /*9*/].f_7 = 250;
	uParam0->[5 /*9*/] = num2;
	uParam0->[5 /*9*/].f_1 = num;
	uParam0->[5 /*9*/].f_2 = 0.012f;
	uParam0->[5 /*9*/].f_3 = 0.023f;
	uParam0->[5 /*9*/].f_4 = 0;
	uParam0->[5 /*9*/].f_5 = 0;
	uParam0->[5 /*9*/].f_6 = 0;
	uParam0->[5 /*9*/].f_7 = 250;
	uParam0->[6 /*9*/] = num2;
	uParam0->[6 /*9*/].f_1 = num;
	uParam0->[6 /*9*/].f_2 = 0.012f;
	uParam0->[6 /*9*/].f_3 = 0.023f;
	uParam0->[6 /*9*/].f_4 = 0;
	uParam0->[6 /*9*/].f_5 = 0;
	uParam0->[6 /*9*/].f_6 = 0;
	uParam0->[6 /*9*/].f_7 = 250;
	uParam0->[7 /*9*/] = num2;
	uParam0->[7 /*9*/].f_1 = num;
	uParam0->[7 /*9*/].f_2 = 0.012f;
	uParam0->[7 /*9*/].f_3 = 0.023f;
	uParam0->[7 /*9*/].f_4 = 0;
	uParam0->[7 /*9*/].f_5 = 0;
	uParam0->[7 /*9*/].f_6 = 0;
	uParam0->[7 /*9*/].f_7 = 250;
	return;
}

float func_186() // Position - 0xC0C2 (49346)
{
	float num;

	num = ((((((0.919f - 0.081f) + 0.004f) - 0.006f) + 0.05f) - 0.001f - 0.005f) + 0.065f) - 0.0005f;
	return num;
}

void func_187(int iParam0, int iParam1, const char* sParam2, eHudColour ehcParam3, int iParam4, int iParam5, BOOL bParam6, const char* sParam7, int iParam8, float fParam9, int iParam10, int iParam11, eHudColour ehcParam12, BOOL bParam13, int iParam14, BOOL bParam15, int iParam16, int iParam17, BOOL bParam18, eHudColour ehcParam19, int iParam20, BOOL bParam21, Player plParam22, BOOL bParam23, BOOL bParam24, eHudColour ehcParam25, eHudColour ehcParam26) // Position - 0xC103 (49411)
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(6, iParam0))
		func_47(6, iParam0, &unk, &unk12, &unk23, &unk25, iParam1, 1, sParam2, ehcParam3, iParam4, iParam5, bParam6, sParam7, iParam8, fParam9, iParam10, iParam11, ehcParam12, bParam13, iParam14, bParam15, iParam16, iParam17, "", bParam18, ehcParam19, iParam20, bParam21, plParam22, bParam23, bParam24, ehcParam25, false, HUD_COLOUR_PURE_WHITE, -1, false, false, false, 0, ehcParam26);

	return;
}

void func_188(int iParam0, int iParam1, int iParam2, const char* sParam3, eHudColour ehcParam4, int iParam5, float fParam6, float fParam7, BOOL bParam8, int iParam9, int iParam10, int iParam11, int iParam12, BOOL bParam13, int iParam14, BOOL bParam15, int iParam16, eHudColour ehcParam17, eHudColour ehcParam18, BOOL bParam19, eHudColour ehcParam20, BOOL bParam21, int iParam22, eHudColour ehcParam23, int iParam24, BOOL bParam25, float fParam26, float fParam27, BOOL bParam28, eHudColour ehcParam29, float fParam30, BOOL bParam31, eHudColour ehcParam32, int iParam33, int iParam34, int iParam35, BOOL bParam36, var uParam37, eHudColour ehcParam38, int iParam39) // Position - 0xC163 (49507)
{
	var unk;
	var unk12;
	var unk14;

	if (func_29(0, iParam0))
	{
		unk14 = 4;
		func_189(iParam0, &unk, &unk12, &unk14, iParam1, iParam2, 1, sParam3, ehcParam4, iParam9, bParam8, iParam5, fParam6, fParam7, iParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, ehcParam17, ehcParam18, bParam19, ehcParam20, bParam21, iParam22, ehcParam23, iParam24, bParam25, fParam26, fParam27, bParam28, ehcParam29, fParam30, bParam31, ehcParam32, iParam33, iParam34, iParam35, bParam36, uParam37, ehcParam38, iParam39);
	}

	return;
}

void func_189(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, const char* sParam7, eHudColour ehcParam8, int iParam9, BOOL bParam10, int iParam11, float fParam12, float fParam13, int iParam14, int iParam15, int iParam16, BOOL bParam17, int iParam18, BOOL bParam19, int iParam20, eHudColour ehcParam21, eHudColour ehcParam22, BOOL bParam23, eHudColour ehcParam24, BOOL bParam25, int iParam26, eHudColour ehcParam27, int iParam28, BOOL bParam29, float fParam30, float fParam31, BOOL bParam32, eHudColour ehcParam33, float fParam34, BOOL bParam35, eHudColour ehcParam36, int iParam37, int iParam38, int iParam39, BOOL bParam40, var uParam41, eHudColour ehcParam42, int iParam43) // Position - 0xC1D5 (49621)
{
	float num;
	BOOL flag;
	int drawOrder;
	var unk9;
	float num2;
	float num3;
	float num4;

	Global_1675212 = Global_1675212 + 1;

	if (func_134())
	{
		iParam15 == 2;
		func_120(0, iParam0);
	
		if (func_132())
			if (bParam17)
				func_197(uParam1, 0);
			else
				func_166(uParam1, 0);
		else if (bParam19)
			func_129(uParam1, 0);
		else if (bParam10)
			func_130(uParam1, 3);
		else if (bParam17)
			func_196(uParam1, 0);
		else
			func_129(uParam1, 0);
	
		if (Global_1675212 == 1)
			func_119(iParam6);
	
		func_195(uParam2, uParam3, &num, iParam6, fParam12, fParam13, uParam1, bParam17);
		func_124(uParam1);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_121()));
	
		if (iParam11 == 0)
			func_161(iParam0);
	
		if (iParam16 == 0)
			func_160(iParam0);
	
		if (func_103(iParam11, &Global_1675212.f_296[iParam0 /*2*/], &Global_1675212.f_317[iParam0 /*2*/]))
			flag = true;
		else
			flag = false;
	
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			drawOrder = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
		
			if (!func_164(fParam12, fParam13))
			{
				num = *uParam2;
				num.f_1 = uParam2->f_1;
			
				if (bParam17)
				{
					num = num + 0.079f;
					num.f_1 = num.f_1 + 0.008f;
					num.f_2 = num.f_2 + 0.157f;
					num.f_3 = num.f_3 + 0.036f;
					num.f_4 = num.f_4 + 255;
					num.f_5 = num.f_5 + 255;
					num.f_6 = num.f_6 + 255;
					num.f_7 = 140;
				}
				else
				{
					num = num + 0.079f;
					num.f_1 = num.f_1 + 0.012f;
					num.f_2 = num.f_2 + 0.157f;
					num.f_3 = num.f_3 + 0.028f;
					num.f_4 = num.f_4 + 255;
					num.f_5 = num.f_5 + 255;
					num.f_6 = num.f_6 + 255;
					num.f_7 = 140;
				}
			
				if (func_132())
				{
					num = num + -0.025f;
					num.f_2 = num.f_2 + 0.05f;
				}
			
				Global_1675212.f_7129 = Global_1675212.f_7129 + num.f_3 + 0.01f;
			
				if (iParam16 > 0)
				{
					unk9 = { num };
				
					if (func_260(&Global_1675212.f_905[iParam0 /*2*/], 2000, false) == false)
					{
						if (func_102(Global_1675212.f_905[iParam0 /*2*/], 1250, false))
							Global_1675212.f_926[iParam0] = Global_1675212.f_926[iParam0] - 17;
					
						unk9.f_7 = Global_1675212.f_926[iParam0];
						func_100(&unk9, ehcParam8);
						func_92("TimerBars", "ALL_WHITE_bg", &unk9, 1, 0, drawOrder, false);
					}
				}
				else
				{
					Global_1675212.f_926[iParam0] = 255;
					func_78(&Global_1675212.f_905[iParam0 /*2*/], false, false);
				}
			
				if (ehcParam42 != HUD_COLOUR_PURE_WHITE)
				{
					func_100(&num, ehcParam42);
					func_92("TimerBars", "ALL_WHITE_bg", &num, 1, 0, drawOrder, false);
				}
				else
				{
					func_92("TimerBars", "ALL_BLACK_bg", &num, 1, 0, drawOrder, false);
				}
			}
		
			func_86(&num, ehcParam21);
		
			if (func_132())
			{
				if (bParam17)
					uParam2->f_1 = uParam2->f_1 + -0.01f;
				else if (bParam10)
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
						uParam2->f_1 = uParam2->f_1 + -0.009f;
					else
						uParam2->f_1 = uParam2->f_1 + -0.003f;
				else if (bParam17 == false)
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
						uParam2->f_1 = uParam2->f_1 + -0.009f;
					else
						uParam2->f_1 = uParam2->f_1 + -0.003f;
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					uParam2->f_1 = uParam2->f_1 + -0.012f;
				else
					uParam2->f_1 = uParam2->f_1 + -0.008f;
			}
			else if (bParam17)
			{
				uParam2->f_1 = uParam2->f_1 + -0.01f + 0.0022f + 0.001f;
			}
			else if (bParam10)
			{
				uParam2->f_1 = uParam2->f_1 + -0.005f + 0.001f;
				uParam2->f_1 = uParam2->f_1 + -0.002f;
			}
		
			drawOrder = func_104();
		
			if (iParam39 != -1)
				if (func_194(iParam39))
					drawOrder = iParam39;
		
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
		
			if (!func_164(fParam12, fParam13))
			{
				if (bParam19)
				{
					func_85(uParam1, ehcParam8);
					func_84(uParam1, false);
					func_61(uParam2, uParam1, sParam7, "", ehcParam22, 2);
				}
				else if (bParam10 == true)
				{
					func_85(uParam1, ehcParam8);
					func_84(uParam1, false);
					func_61(uParam2, uParam1, sParam7, "", ehcParam22, 2);
				}
				else
				{
					func_85(uParam1, ehcParam22);
					func_84(uParam1, false);
				
					if (bParam29)
						func_193(uParam2, uParam1, sParam7, false, true, iParam4, iParam5);
					else if (iParam9 == -1 && iParam43 == -1f)
						func_82(uParam2, uParam1, sParam7, false, true);
					else if (iParam43 != -1f)
						func_57(uParam2, uParam1, sParam7, iParam43, 1, 2);
					else
						func_59(uParam2, uParam1, sParam7, iParam9, 2);
				}
			}
		
			if (bParam23)
			{
				if (!func_164(fParam12, fParam13))
				{
					num2 = func_74() + func_73(iParam6);
					num3 = func_72();
				}
				else
				{
					num2 = fParam13;
					num3 = fParam12;
				}
			
				num4.f_1 = num2 + 0.0486f;
				num4 = num3 - 0.0505f;
				num4.f_2 = 0.18f;
				num4.f_3 = 0.01f;
				num4.f_4 = 255;
				num4.f_5 = 255;
				num4.f_6 = 255;
				num4.f_7 = 255;
				func_100(&num4, ehcParam24);
				func_92("TimerBars", "TPBar", &num4, 0, 0, drawOrder, false);
			}
		
			drawOrder = func_104();
		
			if (iParam39 != -1)
				if (func_194(iParam39))
					drawOrder = iParam39;
		
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
		
			if (flag)
				if (bParam17)
					func_192(iParam4, iParam5, uParam3, ehcParam8, iParam14, drawOrder, iParam20, &Global_1675212.f_842[iParam0 /*2*/], &Global_1675212.f_863[iParam0 /*2*/], fParam30, fParam31, ehcParam27, iParam28, bParam32, ehcParam33, fParam34, bParam35, ehcParam36, iParam37, iParam38, bParam40, uParam41);
				else
					func_190(iParam4, iParam5, uParam3, ehcParam8, iParam14, drawOrder, &Global_1675212.f_842[iParam0 /*2*/], &Global_1675212.f_863[iParam0 /*2*/], iParam18, iParam20, bParam25, iParam26, fParam30, fParam31, ehcParam27, iParam28, bParam32, ehcParam33, fParam34, bParam35, ehcParam36, iParam37, iParam38, bParam40, uParam41);
		
			func_48();
		}
	}

	return;
}

void func_190(int iParam0, int iParam1, var uParam2, eHudColour ehcParam3, int iParam4, int iParam5, var uParam6, var uParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, float fParam12, float fParam13, eHudColour ehcParam14, int iParam15, BOOL bParam16, eHudColour ehcParam17, float fParam18, BOOL bParam19, eHudColour ehcParam20, int iParam21, int iParam22, BOOL bParam23, var uParam24) // Position - 0xC813 (51219)
{
	var unk;
	float num;
	var unk20;
	char* str;

	unk = 2;
	unk[0 /*9*/].f_1 = 0f;
	unk[0 /*9*/].f_2 = 0.007f;
	unk[0 /*9*/].f_3 = 0.004f;
	unk[1 /*9*/] = 0f;
	unk[1 /*9*/].f_2 = 0.007f;
	unk[1 /*9*/].f_3 = 0.004f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);

	if (iParam9 != 0)
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_155(&uParam2->[0 /*9*/], &unk[0 /*9*/]);
		func_155(&uParam2->[1 /*9*/], &unk[1 /*9*/]);
		uParam2->[3 /*9*/] = { uParam2->[0 /*9*/] };
		func_100(&uParam2->[1 /*9*/], ehcParam3);
	
		if (bParam10)
			func_100(&uParam2->[3 /*9*/], HUD_COLOUR_GREY);
		else
			func_100(&uParam2->[3 /*9*/], ehcParam3);
	
		if (iParam11 != 0 && iParam0 < iParam11)
			func_100(&uParam2->[1 /*9*/], HUD_COLOUR_RED);
	
		if (iParam15 > 0)
		{
			if (!_STOPWATCH_IS_INITIALIZED(uParam6))
				func_79(uParam6, false, false);
			else if (func_260(uParam6, iParam15, false))
				func_78(uParam6, false, false);
		
			func_191(&uParam2->[1 /*9*/], ehcParam3, ehcParam14, iParam15, *uParam6);
		}
	
		num = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f;
	
		if (fParam12 != -1f && fParam13 != -1f)
			num = (fParam12 / fParam13) * 100f;
		else if (fParam12 != -1f && fParam13 == -1f)
			num = (fParam12 / SYSTEM::TO_FLOAT(iParam1)) * 100f;
		else if (fParam12 == -1f && fParam13 != -1f)
			num = (SYSTEM::TO_FLOAT(iParam0) / fParam13) * 100f;
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		uParam2->[3 /*9*/].f_7 = 51;
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, false);
	
		if (bParam10)
			func_100(&uParam2->[3 /*9*/], HUD_COLOUR_GREY);
		else
			func_100(&uParam2->[3 /*9*/], ehcParam3);
	
		uParam2->[3 /*9*/].f_7 = 51;
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, false);
		uParam2->[3 /*9*/].f_7 = 255;
		func_157(uParam2->[0 /*9*/], num, &uParam2->[1 /*9*/], 1, 1, iParam4, 0, bParam23);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[1 /*9*/], 0, 0, iParam5, false);
	
		if (bParam16)
		{
			unk20 = { uParam2->[1 /*9*/] };
			func_157(uParam2->[0 /*9*/], fParam18, &unk20, 1, 1, iParam4, iParam22, bParam23);
			func_100(&unk20, ehcParam17);
			unk20.f_7 = uParam24;
		
			if (iParam21 > 0)
			{
				if (!_STOPWATCH_IS_INITIALIZED(uParam7))
					func_79(uParam7, false, false);
				else if (func_260(uParam7, iParam21, false))
					func_78(uParam7, false, false);
			
				func_191(&unk20, ehcParam17, ehcParam20, iParam21, *uParam7);
			}
		
			if (bParam19)
				if (num <= iParam22)
					unk20.f_7 = 100;
		
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_92("TimerBars", "DamageBarFill_128", &unk20, 0, 0, iParam5, false);
		}
	
		if (iParam9 != 0)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
		
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("timerbar_lines"))
			{
				if (iParam9 != 10)
				{
					str = "LineMarker90_128";
				
					switch (iParam9)
					{
						case 1:
							str = "LineMarker10_128";
							break;
					
						case 2:
							str = "LineMarker20_128";
							break;
					
						case 3:
							str = "LineMarker30_128";
							break;
					
						case 4:
							str = "LineMarker40_128";
							break;
					
						case 5:
							str = "LineMarker50_128";
							break;
					
						case 6:
							str = "LineMarker60_128";
							break;
					
						case 7:
							str = "LineMarker70_128";
							break;
					
						case 8:
							str = "LineMarker80_128";
							break;
					
						case 9:
							str = "LineMarker90_128";
							break;
					}
				
					uParam2->[3 /*9*/].f_7 = 255;
					func_100(&uParam2->[3 /*9*/], HUD_COLOUR_BLACK);
					func_92("timerbar_lines", str, &uParam2->[3 /*9*/], 0, 0, iParam5, false);
				}
				else
				{
					uParam2->[3 /*9*/].f_7 = 255;
					func_100(&uParam2->[3 /*9*/], HUD_COLOUR_BLACK);
					func_92("timerbar_lines", "LineMarker20_128", &uParam2->[3 /*9*/], 0, 0, iParam5, false);
					func_92("timerbar_lines", "LineMarker40_128", &uParam2->[3 /*9*/], 0, 0, iParam5, false);
					func_92("timerbar_lines", "LineMarker60_128", &uParam2->[3 /*9*/], 0, 0, iParam5, false);
					func_92("timerbar_lines", "LineMarker80_128", &uParam2->[3 /*9*/], 0, 0, iParam5, false);
				}
			}
		}
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	
		if (iParam8 > 0 && num >= (float)iParam8)
		{
			func_100(&uParam2->[1 /*9*/], HUD_COLOUR_RED);
			func_157(uParam2->[0 /*9*/], SYSTEM::TO_FLOAT(iParam8), &uParam2->[1 /*9*/], 1, 1, iParam4, 0, bParam23);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_92("TimerBars", "DamageBarFill_128", &uParam2->[1 /*9*/], 0, 0, iParam5, false);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		}
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}

	return;
}

void func_191(var uParam0, eHudColour ehcParam1, eHudColour ehcParam2, int iParam3, var uParam4, var uParam5) // Position - 0xCC90 (52368)
{
	int r;
	int g;
	int b;
	int a;
	int r2;
	int g2;
	int b2;
	int a2;
	int value;
	float num;

	value = func_77(&uParam4, false, false);

	if (iParam3 / 2 > value)
	{
		num = SYSTEM::TO_FLOAT(value / 2) / SYSTEM::TO_FLOAT(iParam3 / 2);
		HUD::GET_HUD_COLOUR(ehcParam1, &r, &g, &b, &a);
		HUD::GET_HUD_COLOUR(ehcParam2, &r2, &g2, &b2, &a2);
	}
	else
	{
		num = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(iParam3);
		HUD::GET_HUD_COLOUR(ehcParam2, &r, &g, &b, &a);
		HUD::GET_HUD_COLOUR(ehcParam1, &r2, &g2, &b2, &a2);
	}

	uParam0->f_4 = SYSTEM::FLOOR(func_76(SYSTEM::TO_FLOAT(r), SYSTEM::TO_FLOAT(r2), num));
	uParam0->f_5 = SYSTEM::FLOOR(func_76(SYSTEM::TO_FLOAT(g), SYSTEM::TO_FLOAT(g2), num));
	uParam0->f_6 = SYSTEM::FLOOR(func_76(SYSTEM::TO_FLOAT(b), SYSTEM::TO_FLOAT(b2), num));
	uParam0->f_7 = SYSTEM::FLOOR(func_76(SYSTEM::TO_FLOAT(a), SYSTEM::TO_FLOAT(a2), num));
	return;
}

void func_192(int iParam0, int iParam1, var uParam2, eHudColour ehcParam3, int iParam4, int iParam5, int iParam6, var uParam7, var uParam8, float fParam9, float fParam10, eHudColour ehcParam11, int iParam12, BOOL bParam13, eHudColour ehcParam14, float fParam15, BOOL bParam16, eHudColour ehcParam17, int iParam18, int iParam19, BOOL bParam20, var uParam21) // Position - 0xCD70 (52592)
{
	var unk;
	float num;
	var unk20;
	char* str;

	unk = 2;
	unk[0 /*9*/].f_1 = -0.004f;
	unk[0 /*9*/].f_2 = 0.007f;
	unk[0 /*9*/].f_3 = 0.016f;
	unk[1 /*9*/].f_2 = 0.007f;
	unk[1 /*9*/].f_3 = 0.016f;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);

	if (iParam6 != 0)
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		func_155(&uParam2->[0 /*9*/], &unk[0 /*9*/]);
		func_155(&uParam2->[1 /*9*/], &unk[1 /*9*/]);
		uParam2->[3 /*9*/] = { uParam2->[0 /*9*/] };
		func_100(&uParam2->[1 /*9*/], ehcParam3);
		func_100(&uParam2->[3 /*9*/], ehcParam3);
	
		if (iParam12 > 0)
		{
			if (!_STOPWATCH_IS_INITIALIZED(uParam7))
				func_79(uParam7, false, false);
			else if (func_260(uParam7, iParam12, false))
				func_78(uParam7, false, false);
		
			func_191(&uParam2->[1 /*9*/], ehcParam3, ehcParam11, iParam12, *uParam7);
		}
	
		num = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f;
	
		if (fParam9 != -1f && fParam10 != -1f)
			num = (fParam9 / fParam10) * 100f;
		else if (fParam9 != -1f && fParam10 == -1f)
			num = (fParam9 / SYSTEM::TO_FLOAT(iParam1)) * 100f;
		else if (fParam9 == -1f && fParam10 != -1f)
			num = (SYSTEM::TO_FLOAT(iParam0) / fParam10) * 100f;
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		uParam2->[3 /*9*/].f_7 = 51;
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, false);
		func_100(&uParam2->[3 /*9*/], ehcParam3);
		uParam2->[3 /*9*/].f_7 = 51;
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[3 /*9*/], 0, 0, iParam5, false);
		uParam2->[3 /*9*/].f_7 = 255;
		func_157(uParam2->[0 /*9*/], num, &uParam2->[1 /*9*/], 1, 1, iParam4, 0, bParam20);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		func_92("TimerBars", "DamageBarFill_128", &uParam2->[1 /*9*/], 0, 0, iParam5, false);
	
		if (bParam13)
		{
			unk20 = { uParam2->[1 /*9*/] };
			func_157(uParam2->[0 /*9*/], fParam15, &unk20, 1, 1, iParam4, iParam19, bParam20);
			func_100(&unk20, ehcParam14);
			unk20.f_7 = uParam21;
		
			if (iParam18 > 0)
			{
				if (!_STOPWATCH_IS_INITIALIZED(uParam8))
					func_79(uParam8, false, false);
				else if (func_260(uParam8, iParam18, false))
					func_78(uParam8, false, false);
			
				func_191(&unk20, ehcParam14, ehcParam17, iParam18, *uParam8);
			}
		
			if (bParam16)
				if (num <= iParam19)
					unk20.f_7 = 100;
		
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
			func_92("TimerBars", "DamageBarFill_128", &unk20, 0, 0, iParam5, false);
		}
	
		if (iParam6 != 0)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("timerbar_lines", false);
		
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("timerbar_lines"))
			{
				str = "LineMarker90_128";
			
				switch (iParam6)
				{
					case 1:
						str = "LineMarker10_128";
						break;
				
					case 2:
						str = "LineMarker20_128";
						break;
				
					case 3:
						str = "LineMarker30_128";
						break;
				
					case 4:
						str = "LineMarker40_128";
						break;
				
					case 5:
						str = "LineMarker50_128";
						break;
				
					case 6:
						str = "LineMarker60_128";
						break;
				
					case 7:
						str = "LineMarker70_128";
						break;
				
					case 8:
						str = "LineMarker80_128";
						break;
				
					case 9:
						str = "LineMarker90_128";
						break;
				}
			
				uParam2->[1 /*9*/].f_7 = 255;
				func_100(&uParam2->[1 /*9*/], HUD_COLOUR_BLACK);
				func_92("timerbar_lines", str, &uParam2->[1 /*9*/], 0, 0, iParam5, false);
			}
		}
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	}

	return;
}

void func_193(var uParam0, var uParam1, const char* sParam2, BOOL bParam3, BOOL bParam4, int iParam5, int iParam6) // Position - 0xD0E4 (53476)
{
	const char* str;

	str = sParam2;

	if (!func_56(str))
	{
		if (func_52())
		{
			func_84(uParam1, false);
			HUD::SET_TEXT_RIGHT_JUSTIFY(bParam4);
			HUD::SET_TEXT_CENTRE(bParam3);
			func_55(func_51(*uParam0), func_50(uParam0->f_1), str, iParam5, iParam6);
		}
	}

	return;
}

BOOL func_194(int iParam0) // Position - 0xD12D (53549)
{
	return iParam0 >= 0 && iParam0 <= 8;
}

void func_195(var uParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, var uParam6, BOOL bParam7) // Position - 0xD143 (53571)
{
	float num;

	num = func_165(bParam7, false);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_73(iParam3);
	uParam0->f_1 = uParam0->f_1 + func_117(uParam6);
	func_163(uParam1, iParam3, fParam4, fParam5);

	if (!func_164(fParam4, fParam5))
		func_115(iParam3, -num);

	func_133(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	return;
}

void func_196(var uParam0, int iParam1) // Position - 0xD1A6 (53670)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.508f - 0.03f - 0.106f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 21;
	return;
}

void func_197(var uParam0, int iParam1) // Position - 0xD1FE (53758)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.508f - 0.03f) + 0.086f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 20;
	return;
}

void func_198(int iParam0, int iParam1, int iParam2, const char* sParam3, eHudColour ehcParam4, int iParam5, BOOL bParam6, int iParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, eHudColour ehcParam21) // Position - 0xD256 (53846)
{
	var unk;
	var unk12;
	var unk14;
	var unk114;
	var unk125;
	var unk127;

	if (func_29(1, iParam0))
	{
		unk14 = 11;
		func_199(iParam0, &unk, &unk12, &unk14, &unk127, &unk114, &unk125, iParam1, iParam2, 1, sParam3, ehcParam4, iParam5, bParam6, iParam7, fParam8, fParam9, iParam10, iParam11, true, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19, iParam20, ehcParam21);
	}

	return;
}

void func_199(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, const char* sParam10, eHudColour ehcParam11, int iParam12, BOOL bParam13, int iParam14, float fParam15, float fParam16, int iParam17, int iParam18, BOOL bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, eHudColour ehcParam29) // Position - 0xD2AC (53932)
{
	float num;
	var unk9;
	var unk11;
	BOOL flag;
	int num2;
	int drawOrder;
	var unk22;

	Global_1675212 = Global_1675212 + 1;

	if (func_134())
	{
		iParam17 == 2;
		func_120(1, iParam0);
	
		if (func_132())
			func_166(uParam1, 0);
		else if (bParam13)
			func_130(uParam1, 3);
		else
			func_129(uParam1, 0);
	
		func_129(&unk11, 0);
		unk11.f_2 = unk11.f_2 + 0.166f + 0.095f;
	
		if (Global_1675212 == 1)
			func_119(iParam9);
	
		func_207(uParam5, 0, 0);
		func_123(uParam5);
		func_84(uParam5, false);
		num2 = 0;
	
		if (iParam20 > 0)
			num2 = 1;
	
		func_205(iParam8, uParam2, uParam3, &num, uParam6, uParam5, uParam4, iParam9, fParam15, fParam16, uParam1, num2);
		unk9 = *uParam2;
		unk9.f_1 = uParam2->f_1;
		unk9.f_1 = unk9.f_1 + (-0.006f - 0.007f);
		func_124(uParam1);
		uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_121()));
		func_204(&unk11);
	
		if (iParam14 == 0)
			func_203(iParam0);
	
		if (iParam18 == 0)
			func_202(iParam0);
	
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			drawOrder = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
		
			if (func_103(iParam14, &Global_1675212.f_254[iParam0 /*2*/], &Global_1675212.f_275[iParam0 /*2*/]))
				flag = true;
			else
				flag = false;
		
			if (!func_164(fParam15, fParam16))
			{
				num = *uParam2;
				num.f_1 = uParam2->f_1;
			
				if (iParam8 < 9 && iParam20 == 0)
				{
					num = num + 0.079f;
					num.f_1 = num.f_1 + 0.012f;
					num.f_2 = num.f_2 + 0.157f;
					num.f_3 = num.f_3 + 0.028f;
					num.f_4 = num.f_4 + 255;
					num.f_5 = num.f_5 + 255;
					num.f_6 = num.f_6 + 255;
					num.f_7 = 140;
				}
				else
				{
					num = num + 0.079f;
					num.f_1 = num.f_1 + 0.008f;
					num.f_2 = num.f_2 + 0.157f;
					num.f_3 = num.f_3 + 0.036f;
					num.f_4 = num.f_4 + 255;
					num.f_5 = num.f_5 + 255;
					num.f_6 = num.f_6 + 255;
					num.f_7 = 140;
				}
			
				if (func_132())
				{
					num = num + -0.025f;
					num.f_2 = num.f_2 + 0.05f;
				}
			
				Global_1675212.f_7129 = Global_1675212.f_7129 + num.f_3;
			
				if (iParam7 == iParam8 && iParam7 > 0 || iParam18 > 0)
				{
					unk22 = { num };
				
					if (func_260(&Global_1675212.f_1097[iParam0 /*2*/], 2000, false) == false)
					{
						if (func_102(Global_1675212.f_1097[iParam0 /*2*/], 1250, false))
							Global_1675212.f_1118[iParam0] = Global_1675212.f_1118[iParam0] - 17;
					
						unk22.f_7 = Global_1675212.f_1118[iParam0];
						func_100(&unk22, ehcParam11);
						func_92("TimerBars", "ALL_WHITE_bg", &unk22, 1, 0, drawOrder, false);
					}
				}
				else
				{
					Global_1675212.f_1118[iParam0] = 255;
					func_78(&Global_1675212.f_1097[iParam0 /*2*/], false, false);
				}
			
				func_92("TimerBars", "ALL_BLACK_bg", &num, 1, 0, drawOrder, false);
			}
		
			func_86(&num, ehcParam29);
		
			if (bParam13)
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					uParam2->f_1 = uParam2->f_1 + -0.009f;
				}
				else
				{
					uParam2->f_1 = uParam2->f_1 + -0.003f;
				
					if (func_132() == false)
						uParam2->f_1 = uParam2->f_1 + -0.002f;
				}
			}
			else if (func_132())
			{
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
					uParam2->f_1 = uParam2->f_1 + -0.009f;
				else
					uParam2->f_1 = uParam2->f_1 + -0.003f;
			}
		
			drawOrder = func_104();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
		
			if (!func_164(fParam15, fParam16))
			{
				func_84(uParam1, false);
			
				if (bParam13 == true)
					func_61(uParam2, uParam1, sParam10, "", HUD_COLOUR_WHITE, 2);
				else if (iParam12 == -1)
					func_82(uParam2, uParam1, sParam10, false, true);
				else
					func_59(uParam2, uParam1, sParam10, iParam12, 2);
			}
		
			if (iParam20 > 0)
				func_59(&unk9, &unk11, "HUD_MULTSMAL" /*~1~x*/, iParam20, 2);
		
			if (flag)
				func_200(iParam7, iParam8, uParam3, uParam5, uParam6, ehcParam11, drawOrder, bParam19, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28);
		
			func_48();
		}
	}

	return;
}

void func_200(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, eHudColour ehcParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15) // Position - 0xD708 (55048)
{
	float num;
	int i;
	char* str;

	if (iParam1 < 9)
	{
		num = -0.0094f;
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
	
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
		{
			for (i = 0; i <= iParam1 - 1; i = i + 1)
			{
				uParam2->[i /*9*/] = uParam2->[i /*9*/] + (num * (float)i);
			
				if (iParam1 - i > iParam0)
				{
					func_100(&uParam2->[i /*9*/], ehcParam5);
					uParam2->[i /*9*/].f_7 = 51;
					func_92("TimerBars", "Circle_checkpoints_Outline", &uParam2->[i /*9*/], 0, 0, iParam6, false);
				}
				else
				{
					func_100(&uParam2->[i /*9*/], ehcParam5);
					func_92("TimerBars", "Circle_checkpoints", &uParam2->[i /*9*/], 0, 0, iParam6, false);
				
					if (func_178(i, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15))
					{
						func_100(&uParam2->[i /*9*/], HUD_COLOUR_BLACK);
						func_92("Cross", "Circle_checkpoints_Cross", &uParam2->[i /*9*/], 0, 0, iParam6, false);
					}
				}
			}
		}
	}
	else if (ehcParam5 == HUD_COLOUR_WHITE)
	{
		func_54(uParam4, uParam3, "TIMER_DASHES" /*~1~/~1~*/, iParam0, iParam1, 2, false);
	}
	else
	{
		func_201(uParam3);
	
		if (bParam7)
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
		
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
			{
				uParam2->[0 /*9*/] = uParam2->[0 /*9*/] + (0.058f - 0.06f);
				uParam2->[0 /*9*/].f_1 = uParam2->[0 /*9*/].f_1 + -0.005f;
				uParam2->[0 /*9*/].f_2 = uParam2->[0 /*9*/].f_2 + (0.003f - 0.005f) + 0.002f;
				uParam2->[0 /*9*/].f_3 = uParam2->[0 /*9*/].f_3 + (0.009f - 0.01f);
				func_100(&uParam2->[0 /*9*/], ehcParam5);
				func_92("TimerBars", "Circle_checkpoints_Big", &uParam2->[0 /*9*/], 0, 0, iParam6, false);
			}
		}
	
		str = "TIMER_DASHES" /*~1~/~1~*/;
	
		if (bParam7 == true && iParam0 > 99 && iParam1 > 99)
			str = "TIMER_DASHES" /*~1~/~1~*/;
	
		func_54(uParam4, uParam3, str, iParam0, iParam1, 2, false);
	}

	return;
}

void func_201(var uParam0) // Position - 0xD8E7 (55527)
{
	uParam0->f_9 = ((0.95f - 0.047f) + 0.001f + 0.047f) - 0.002f - 0.013f;
	return;
}

void func_202(int iParam0) // Position - 0xD916 (55574)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_758[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_779[iParam0 /*2*/]);
	return;
}

void func_203(int iParam0) // Position - 0xD93C (55612)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_254[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_275[iParam0 /*2*/]);
	Global_1675212.f_1808.f_205[iParam0] = -1;
	return;
}

void func_204(var uParam0) // Position - 0xD96F (55663)
{
	float num;

	num = (0.88f - 0.062f) + 0.026f + 0.027f + 0.037f + 0.003f;
	uParam0->f_9 = num;
	return;
}

void func_205(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, float fParam8, float fParam9, var uParam10, int iParam11) // Position - 0xD9A2 (55714)
{
	float num;

	num = func_118(uParam5);

	if (iParam0 < 9)
		num = func_165(iParam11, false);

	*uParam1 = 0.795f;
	uParam1->f_1 = func_73(iParam7);
	uParam1->f_1 = uParam1->f_1 + func_117(uParam10);
	*uParam4 = 0.795f;
	uParam4->f_1 = uParam1->f_1 + func_116(uParam5);
	func_206(uParam2, iParam7, fParam8, fParam9);
	func_184(uParam6);

	if (!func_164(fParam8, fParam9))
		func_115(iParam7, -num);

	func_133(uParam3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	return;
}

void func_206(var uParam0, int iParam1, float fParam2, float fParam3) // Position - 0xDA31 (55857)
{
	float num;
	float num2;

	if (!func_164(fParam2, fParam3))
	{
		num = func_74() + func_73(iParam1);
		num2 = func_186();
	}
	else
	{
		num = fParam3;
		num2 = fParam2;
	}

	uParam0->[0 /*9*/] = num2;
	uParam0->[0 /*9*/].f_1 = num;
	uParam0->[0 /*9*/].f_2 = 0.012f;
	uParam0->[0 /*9*/].f_3 = 0.023f;
	uParam0->[0 /*9*/].f_4 = 0;
	uParam0->[0 /*9*/].f_5 = 0;
	uParam0->[0 /*9*/].f_6 = 0;
	uParam0->[0 /*9*/].f_7 = 250;
	uParam0->[1 /*9*/] = num2;
	uParam0->[1 /*9*/].f_1 = num;
	uParam0->[1 /*9*/].f_2 = 0.012f;
	uParam0->[1 /*9*/].f_3 = 0.023f;
	uParam0->[1 /*9*/].f_4 = 0;
	uParam0->[1 /*9*/].f_5 = 0;
	uParam0->[1 /*9*/].f_6 = 0;
	uParam0->[1 /*9*/].f_7 = 250;
	uParam0->[2 /*9*/] = num2;
	uParam0->[2 /*9*/].f_1 = num;
	uParam0->[2 /*9*/].f_2 = 0.012f;
	uParam0->[2 /*9*/].f_3 = 0.023f;
	uParam0->[2 /*9*/].f_4 = 0;
	uParam0->[2 /*9*/].f_5 = 0;
	uParam0->[2 /*9*/].f_6 = 0;
	uParam0->[2 /*9*/].f_7 = 250;
	uParam0->[3 /*9*/] = num2;
	uParam0->[3 /*9*/].f_1 = num;
	uParam0->[3 /*9*/].f_2 = 0.012f;
	uParam0->[3 /*9*/].f_3 = 0.023f;
	uParam0->[3 /*9*/].f_4 = 0;
	uParam0->[3 /*9*/].f_5 = 0;
	uParam0->[3 /*9*/].f_6 = 0;
	uParam0->[3 /*9*/].f_7 = 250;
	uParam0->[4 /*9*/] = num2;
	uParam0->[4 /*9*/].f_1 = num;
	uParam0->[4 /*9*/].f_2 = 0.012f;
	uParam0->[4 /*9*/].f_3 = 0.023f;
	uParam0->[4 /*9*/].f_4 = 0;
	uParam0->[4 /*9*/].f_5 = 0;
	uParam0->[4 /*9*/].f_6 = 0;
	uParam0->[4 /*9*/].f_7 = 250;
	uParam0->[5 /*9*/] = num2;
	uParam0->[5 /*9*/].f_1 = num;
	uParam0->[5 /*9*/].f_2 = 0.012f;
	uParam0->[5 /*9*/].f_3 = 0.023f;
	uParam0->[5 /*9*/].f_4 = 0;
	uParam0->[5 /*9*/].f_5 = 0;
	uParam0->[5 /*9*/].f_6 = 0;
	uParam0->[5 /*9*/].f_7 = 250;
	uParam0->[6 /*9*/] = num2;
	uParam0->[6 /*9*/].f_1 = num;
	uParam0->[6 /*9*/].f_2 = 0.012f;
	uParam0->[6 /*9*/].f_3 = 0.023f;
	uParam0->[6 /*9*/].f_4 = 0;
	uParam0->[6 /*9*/].f_5 = 0;
	uParam0->[6 /*9*/].f_6 = 0;
	uParam0->[6 /*9*/].f_7 = 250;
	uParam0->[7 /*9*/] = num2;
	uParam0->[7 /*9*/].f_1 = num;
	uParam0->[7 /*9*/].f_2 = 0.012f;
	uParam0->[7 /*9*/].f_3 = 0.023f;
	uParam0->[7 /*9*/].f_4 = 0;
	uParam0->[7 /*9*/].f_5 = 0;
	uParam0->[7 /*9*/].f_6 = 0;
	uParam0->[7 /*9*/].f_7 = 250;
	uParam0->[8 /*9*/] = num2;
	uParam0->[8 /*9*/].f_1 = num;
	uParam0->[8 /*9*/].f_2 = 0.012f;
	uParam0->[8 /*9*/].f_3 = 0.023f;
	uParam0->[8 /*9*/].f_4 = 0;
	uParam0->[8 /*9*/].f_5 = 0;
	uParam0->[8 /*9*/].f_6 = 0;
	uParam0->[8 /*9*/].f_7 = 250;
	uParam0->[9 /*9*/] = num2;
	uParam0->[9 /*9*/].f_1 = num;
	uParam0->[9 /*9*/].f_2 = 0.012f;
	uParam0->[9 /*9*/].f_3 = 0.023f;
	uParam0->[9 /*9*/].f_4 = 0;
	uParam0->[9 /*9*/].f_5 = 0;
	uParam0->[9 /*9*/].f_6 = 0;
	uParam0->[9 /*9*/].f_7 = 250;
	return;
}

void func_207(var uParam0, int iParam1, int iParam2) // Position - 0xDD4B (56651)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f - 0.001f - 0.013f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
	return;
}

void func_208(int iParam0, int iParam1, int iParam2, const char* sParam3, eHudColour ehcParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, eHudColour ehcParam10, eHudColour ehcParam11, BOOL bParam12, int iParam13) // Position - 0xDDBC (56764)
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(5, iParam0))
		func_47(5, iParam0, &unk, &unk12, &unk23, &unk25, iParam1, 1, sParam3, ehcParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, ehcParam10, false, iParam2, false, 0, 0, "", false, ehcParam11, 255, false, 0, false, false, HUD_COLOUR_WHITE, false, HUD_COLOUR_PURE_WHITE, -1, false, false, bParam12, iParam13, HUD_COLOUR_PURE_WHITE);

	return;
}

void func_209(int iParam0, int iParam1, int iParam2, const char* sParam3, eHudColour ehcParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, eHudColour ehcParam12, eHudColour ehcParam13, int iParam14, BOOL bParam15) // Position - 0xDE12 (56850)
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(4, iParam0))
		func_47(4, iParam0, &unk, &unk12, &unk23, &unk25, iParam1, 1, sParam3, ehcParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, ehcParam12, bParam10, iParam2, false, 0, 0, "", bParam11, ehcParam13, iParam14, false, 0, bParam15, false, HUD_COLOUR_WHITE, false, HUD_COLOUR_PURE_WHITE, -1, false, false, false, 0, HUD_COLOUR_PURE_WHITE);

	return;
}

void func_210(int iParam0, int iParam1, const char* sParam2, eHudColour ehcParam3, int iParam4, int iParam5, BOOL bParam6, const char* sParam7, eHudColour ehcParam8, BOOL bParam9, int iParam10, int iParam11, eHudColour ehcParam12, BOOL bParam13, eHudColour ehcParam14, int iParam15, eHudColour ehcParam16) // Position - 0xDE69 (56937)
{
	var unk;
	var unk12;
	var unk23;
	var unk25;

	if (func_29(3, iParam0))
		func_47(3, iParam0, &unk, &unk12, &unk23, &unk25, iParam1, 1, sParam2, ehcParam3, iParam4, iParam5, bParam6, sParam7, 0, 0f, iParam10, iParam11, ehcParam8, false, 0, bParam9, 0, 0, "", false, ehcParam12, 255, false, 0, false, false, HUD_COLOUR_WHITE, bParam13, ehcParam14, iParam15, false, false, false, 0, ehcParam16);

	return;
}

void func_211(int iParam0, int iParam1, const char* sParam2, int iParam3, int iParam4, int iParam5, eHudColour ehcParam6, int iParam7, int iParam8, BOOL bParam9, int iParam10, int iParam11, BOOL bParam12, eHudColour ehcParam13, BOOL bParam14, eHudColour ehcParam15, var uParam16, BOOL bParam17) // Position - 0xDEC0 (57024)
{
	var unk;
	var unk12;
	var unk23;
	var unk34;
	var unk36;
	var unk38;

	if (func_29(7, iParam0))
		func_212(iParam0, &unk, &unk12, &unk23, &unk34, &unk36, &unk38, iParam1, 1, iParam3, iParam4, sParam2, ehcParam6, iParam5, iParam7, iParam8, bParam9, iParam10, iParam11, bParam12, ehcParam13, bParam14, ehcParam15, uParam16, bParam17);

	return;
}

void func_212(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, const char* sParam11, eHudColour ehcParam12, int iParam13, int iParam14, int iParam15, BOOL bParam16, int iParam17, int iParam18, BOOL bParam19, eHudColour ehcParam20, BOOL bParam21, eHudColour ehcParam22, int iParam23, BOOL bParam24) // Position - 0xDF07 (57095)
{
	var unk;
	var unk12;
	float num;
	BOOL flag;
	int drawOrder;
	float num2;
	var unk30;

	Global_1675212 = Global_1675212 + 1;
	iParam17 == 2;
	func_133(&num, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	func_120(7, iParam0);

	if (bParam21)
		func_129(uParam1, 0);
	else if (bParam16)
		func_130(uParam1, 3);
	else if (func_132())
		func_131(uParam1, 0);
	else
		func_129(uParam1, 0);

	func_226(&unk, 0);

	switch (iParam13)
	{
		case 1:
		case 0:
		case 5:
			if (bParam19)
			{
				func_225(uParam3, 0);
				func_207(uParam2, 0, 0);
			}
			else
			{
				func_225(uParam3, 0);
				func_207(uParam2, 0, 5);
			}
		
			func_123(uParam2);
			func_123(uParam3);
			break;
	
		case 2:
			func_207(uParam2, 0, 0);
			func_123(&unk);
			func_123(uParam3);
			func_224(uParam2);
			break;
	
		case 3:
			func_207(uParam2, 0, 0);
			func_123(&unk);
			func_123(uParam3);
			func_224(uParam2);
			break;
	
		case 4:
			func_207(uParam3, 0, 0);
		
			if (bParam19)
				func_207(uParam2, 0, 0);
			else
				func_207(uParam2, 0, 5);
		
			func_123(uParam2);
			func_123(uParam3);
			break;
	}

	func_124(uParam1);

	if (Global_1675212.f_1172 == false && Global_1675212.f_1173 == false)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = uParam1->f_9 + -0.016f;
		
			if (func_132())
				uParam1->f_9 = uParam1->f_9 + -0.008f;
		}
	}
	else if (Global_1675212.f_1172 == false && Global_1675212.f_1173 == true)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = uParam1->f_9 + 0f;
		
			if (func_132())
				uParam1->f_9 = uParam1->f_9 + -0.009f;
		}
	}

	if (Global_1675212 == 1)
		func_119(iParam8);

	func_223(uParam2, uParam4, uParam5, uParam6, iParam8, uParam1, &unk, &unk12);
	uParam1->f_9 = uParam1->f_9 + (0.03f * (1f - func_121()));
	func_113(uParam2, ehcParam12);

	if (iParam14 == 0)
		func_222(iParam0);

	if (iParam18 == 0)
		func_221(iParam0);

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
	{
		drawOrder = func_104();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
	
		if (func_103(iParam14, &Global_1675212.f_170[iParam0 /*2*/], &Global_1675212.f_191[iParam0 /*2*/]))
			flag = true;
		else
			flag = false;
	
		num = *uParam4;
		num.f_1 = uParam4->f_1;
	
		if (Global_1675212.f_1165 == 1)
			num = num + -0.113f;
	
		switch (iParam13)
		{
			case 1:
			case 0:
			case 5:
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.008f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.036f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
				break;
		
			case 2:
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.008f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.036f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
				break;
		
			case 3:
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.008f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.036f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
				break;
		
			case 4:
				num = num + 0.079f;
				num.f_1 = num.f_1 + 0.008f;
				num.f_2 = num.f_2 + 0.157f;
				num.f_3 = num.f_3 + 0.036f;
				num.f_4 = num.f_4 + 255;
				num.f_5 = num.f_5 + 255;
				num.f_6 = num.f_6 + 255;
				num.f_7 = 140;
				break;
		}
	
		num2 = *uParam5 + 0.145f + 0.001f;
	
		if (func_132())
			num2.f_1 = (uParam5->f_1 + 0.019f) - 0.006f;
		else
			num2.f_1 = uParam5->f_1 + 0.019f;
	
		num2.f_2 = 0.016f + 0.003f;
		num2.f_3 = 0.032f + 0.004f;
		num2.f_7 = 255;
		func_100(&num2, HUD_COLOUR_WHITE);
		num2 = uParam1->f_9 - ((uParam2->f_9 - uParam1->f_9) / 8f);
	
		if (func_132())
			num2 = num2 - 0.003f;
	
		switch (iParam23)
		{
			case 5:
				num2.f_3 = num2.f_3 + -0.009f;
				num2.f_2 = num2.f_2 + -0.002f;
			
				if (func_132())
					num2.f_1 = num2.f_1 + 0.0055f;
				else
					num2.f_1 = num2.f_1 + 0.0025f;
			
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPRPSymbol", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPRPSymbol"))
					func_92("MPRPSymbol", "RP", &num2, 1, 0, 4, false);
				break;
		
			case 2:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
					func_92("TimerBars", "Rockets", &num2, 1, 0, 4, false);
				break;
		
			case 1:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
					func_92("TimerBars", "Spikes", &num2, 1, 0, 4, false);
				break;
		
			case 4:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBars", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBars"))
					func_92("TimerBars", "Boost", &num2, 1, 0, 4, false);
				break;
		
			case 6:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CrossTheLine", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CrossTheLine"))
				{
					func_100(&num2, HUD_COLOUR_GREEN);
					func_92("CrossTheLine", "Timer_LargeTick_32", &num2, 1, 0, 4, false);
				}
				break;
		
			case 7:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CrossTheLine", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CrossTheLine"))
				{
					func_100(&num2, HUD_COLOUR_RED);
					func_92("CrossTheLine", "Timer_LargeCross_32", &num2, 1, 0, 4, false);
				}
				break;
		
			case 8:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&num2, HUD_COLOUR_FRIENDLY);
					func_92("TimerBar_Icons", "Pickup_Beast", &num2, 1, 0, 4, false);
				}
				break;
		
			case 9:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&num2, HUD_COLOUR_FRIENDLY);
					func_92("TimerBar_Icons", "Pickup_B_Time", &num2, 1, 0, 4, false);
				}
				break;
		
			case 10:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&num2, HUD_COLOUR_FRIENDLY);
					func_92("TimerBar_Icons", "Pickup_Random", &num2, 1, 0, 4, false);
				}
				break;
		
			case 11:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&num2, HUD_COLOUR_FRIENDLY);
					func_92("TimerBar_Icons", "Pickup_Slow_Time", &num2, 1, 0, 4, false);
				}
				break;
		
			case 12:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&num2, HUD_COLOUR_FRIENDLY);
					func_92("TimerBar_Icons", "Pickup_Swap", &num2, 1, 0, 4, false);
				}
				break;
		
			case 13:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&num2, HUD_COLOUR_FRIENDLY);
					func_92("TimerBar_Icons", "Pickup_Testosterone", &num2, 1, 0, 4, false);
				}
				break;
		
			case 14:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&num2, HUD_COLOUR_FRIENDLY);
					func_92("TimerBar_Icons", "Pickup_Thermal", &num2, 1, 0, 4, false);
				}
				break;
		
			case 15:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&num2, HUD_COLOUR_FRIENDLY);
					func_92("TimerBar_Icons", "Pickup_Weed", &num2, 1, 0, 4, false);
				}
				break;
		
			case 16:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TimerBar_Icons", false);
			
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TimerBar_Icons"))
				{
					func_100(&num2, HUD_COLOUR_FRIENDLY);
					func_92("TimerBar_Icons", "Pickup_Hidden", &num2, 1, 0, 4, false);
				}
				break;
		}
	
		if (func_132())
		{
			num = num + -0.025f;
			num.f_2 = num.f_2 + 0.05f;
		}
	
		Global_1675212.f_7129 = Global_1675212.f_7129 + num.f_3;
	
		if (Global_1675212.f_1165 == 0)
		{
			if (iParam18 > 0)
			{
				unk30 = { num };
			
				if (func_260(&Global_1675212.f_1033[iParam0 /*2*/], 2000, false) == false)
				{
					if (func_102(Global_1675212.f_1033[iParam0 /*2*/], 1250, false))
						Global_1675212.f_1054[iParam0] = Global_1675212.f_1054[iParam0] - 17;
				
					unk30.f_7 = Global_1675212.f_1054[iParam0];
				
					if (iParam17 == 2)
						func_100(&unk30, HUD_COLOUR_RED);
					else if (iParam17 == 3)
						func_100(&unk30, HUD_COLOUR_GREEN);
					else
						func_100(&unk30, ehcParam12);
				
					func_92("TimerBars", "ALL_WHITE_bg", &unk30, 1, 0, drawOrder, false);
				}
			}
			else
			{
				Global_1675212.f_1054[iParam0] = 255;
				func_78(&Global_1675212.f_1033[iParam0 /*2*/], false, false);
			}
		
			func_92("TimerBars", "ALL_BLACK_bg", &num, 1, 0, drawOrder, false);
		}
	
		func_86(&num, ehcParam22);
	
		if (bParam16)
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				uParam4->f_1 = uParam4->f_1 + -0.012f;
			else
				uParam4->f_1 = uParam4->f_1 + -0.004f;
		else if (func_132())
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				uParam4->f_1 = uParam4->f_1 + -0.012f;
			else
				uParam4->f_1 = uParam4->f_1 + -0.008f;
	
		drawOrder = func_104();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(drawOrder);
		func_113(uParam1, ehcParam20);
	
		if (Global_1675212.f_1165 == 0)
		{
			if (func_56(sParam11) == false)
			{
				func_84(uParam1, false);
			
				if (bParam21 == true)
				{
					func_61(uParam4, uParam1, sParam11, "", ehcParam20, 2);
				}
				else if (bParam16 == true)
				{
					*uParam1 = 4;
					func_61(uParam4, uParam1, sParam11, "", ehcParam20, 2);
				}
				else if (iParam15 == -1)
				{
					func_82(uParam4, uParam1, sParam11, false, true);
				}
				else
				{
					func_59(uParam4, uParam1, sParam11, iParam15, 2);
				}
			}
		}
	
		if (flag)
		{
			if (iParam9 == 0)
				func_220(iParam0);
		
			if (iParam9 != 0 && func_260(&Global_1675212.f_4714.f_336[iParam0 /*2*/], 4000, false) == false)
			{
				if (iParam13 != 4)
				{
					if (iParam9 > 0)
					{
						func_219(uParam3);
						func_218(uParam6, uParam3, iParam9, 66, "TIMER_POS" /*+~a~*/, false, true);
						func_217(uParam3);
					}
					else
					{
						func_216(uParam3);
						func_218(uParam6, uParam3, iParam9, 66, "STRING", false, true);
						func_217(uParam3);
					}
				}
				else if (iParam9 > 0)
				{
					func_216(uParam3);
					func_218(uParam6, uParam3, iParam9, 66, "TIMER_POS" /*+~a~*/, false, true);
					func_217(uParam3);
				}
				else
				{
					func_219(uParam3);
					func_218(uParam6, uParam3, iParam9, 66, "STRING", false, true);
					func_217(uParam3);
				}
			}
			else
			{
				if (iParam10 != 0)
					if (iParam10 == 1)
						func_215(uParam2);
					else if (iParam10 == 2)
						func_214(uParam2);
					else if (iParam10 == 3)
						func_213(uParam2);
			
				if (Global_1675212.f_1165 == 1)
				{
					uParam2->f_7 = 0;
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
				}
			
				func_84(uParam2, false);
			
				switch (iParam13)
				{
					case 1:
						if (bParam19)
						{
							func_61(uParam5, uParam2, "--:--:--", "", HUD_COLOUR_WHITE, 2);
						}
						else
						{
							*uParam5 = *uParam5 + 0.117f;
						
							if (bParam24)
								func_218(uParam5, uParam2, iParam7, 2627, "", false, true);
							else
								func_218(uParam5, uParam2, iParam7, 2567, "", false, true);
						}
						break;
				
					case 0:
						if (bParam19)
						{
							func_61(uParam5, uParam2, "--:--", "", HUD_COLOUR_WHITE, 2);
						}
						else
						{
							*uParam5 = *uParam5 + 0.117f;
							func_218(uParam5, uParam2, iParam7, 6, "", false, true);
						}
						break;
				
					case 2:
						*uParam5 = *uParam5 + 0.12f;
						func_218(uParam5, uParam2, iParam7, 6, "", false, true);
						func_82(&unk12, &unk, "TIMER_AM_O" /*AM*/, false, true);
						break;
				
					case 3:
						*uParam5 = *uParam5 + 0.12f;
						func_218(uParam5, uParam2, iParam7, 6, "", false, true);
						func_82(&unk12, &unk, "TIMER_PM_O" /*PM*/, false, true);
						break;
				
					case 4:
						*uParam5 = *uParam5 + 0.12f;
					
						if (bParam19)
							func_61(uParam5, uParam2, "--:--:--", "", HUD_COLOUR_WHITE, 2);
						else
							func_218(uParam5, uParam2, iParam7, 2567, "", false, true);
						break;
				
					case 5:
						*uParam5 = *uParam5 + 0.117f;
						func_218(uParam5, uParam2, iParam7, 2, "", false, true);
						break;
				}
			}
		}
	
		func_48();
	}

	return;
}

void func_213(var uParam0) // Position - 0xEBB8 (60344)
{
	func_85(uParam0, HUD_COLOUR_GOLD);
	return;
}

void func_214(var uParam0) // Position - 0xEBC8 (60360)
{
	func_85(uParam0, HUD_COLOUR_SILVER);
	return;
}

void func_215(var uParam0) // Position - 0xEBD8 (60376)
{
	func_85(uParam0, HUD_COLOUR_BRONZE);
	return;
}

void func_216(var uParam0) // Position - 0xEBE8 (60392)
{
	func_85(uParam0, HUD_COLOUR_RED);
	return;
}

void func_217(var uParam0) // Position - 0xEBF7 (60407)
{
	func_85(uParam0, HUD_COLOUR_WHITE);
	return;
}

void func_218(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, BOOL bParam5, BOOL bParam6) // Position - 0xEC06 (60422)
{
	char* text;

	if (func_52())
	{
		func_84(uParam1, false);
		HUD::SET_TEXT_RIGHT_JUSTIFY(bParam6);
		HUD::SET_TEXT_CENTRE(bParam5);
	
		if (func_56(sParam4))
			text = "STRING";
		else
			text = sParam4;
	
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(text);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, iParam3);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_51(*uParam0), func_50(uParam0->f_1), 0);
	}

	return;
}

void func_219(var uParam0) // Position - 0xEC5F (60511)
{
	func_85(uParam0, HUD_COLOUR_GREEN);
	return;
}

void func_220(int iParam0) // Position - 0xEC6F (60527)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_4714.f_336[iParam0 /*2*/]);
	return;
}

void func_221(int iParam0) // Position - 0xEC89 (60553)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_674[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_695[iParam0 /*2*/]);
	return;
}

void func_222(int iParam0) // Position - 0xECAF (60591)
{
	_STOPWATCH_DESTROY(&Global_1675212.f_170[iParam0 /*2*/]);
	_STOPWATCH_DESTROY(&Global_1675212.f_191[iParam0 /*2*/]);
	return;
}

void func_223(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7) // Position - 0xECD3 (60627)
{
	float num;

	num = func_118(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_73(iParam4);
	uParam1->f_1 = uParam1->f_1 + func_117(uParam5);
	*uParam2 = 0.795f;
	uParam2->f_1 = uParam1->f_1 + func_116(uParam0);
	*uParam7 = 0.795f;
	uParam7->f_1 = uParam1->f_1 + func_116(uParam6);
	*uParam3 = *uParam2;
	uParam3->f_1 = uParam2->f_1;
	func_115(iParam4, -num);
	return;
}

void func_224(var uParam0) // Position - 0xED49 (60745)
{
	uParam0->f_9 = (((((0.95f - 0.047f) + 0.001f + 0.047f) - 0.002f - 0.013f) + 0.014f) - 0.024f) + 0.005f;
	return;
}

void func_225(var uParam0, int iParam1) // Position - 0xED8A (60810)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.315f + 0.183f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
	return;
}

void func_226(var uParam0, int iParam1) // Position - 0xEDDC (60892)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.5f + 0.004f) - 0.01f - 0.11f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
	return;
}

BOOL func_227(int iParam0) // Position - 0xEE3A (60986)
{
	int i;
	int num;

	if (func_237(iParam0))
	{
		num = 2;
	
		for (i = 0; i < num; i = i + 1)
		{
			if (Global_1671507[i] == iParam0)
				return true;
		}
	}

	return false;
}

void func_228(int iParam0, int iParam1) // Position - 0xEE73 (61043)
{
	switch (iParam0)
	{
		case 7:
			func_211(iParam1, Global_1675212.f_4714[iParam1], &Global_1675212.f_4714.f_11[iParam1 /*16*/], Global_1675212.f_4714.f_172[iParam1], Global_1675212.f_4714.f_194[iParam1], Global_1675212.f_4714.f_216[iParam1], Global_1675212.f_4714.f_205[iParam1], Global_1675212.f_4714.f_183[iParam1], Global_1675212.f_4714.f_227[iParam1], Global_1675212.f_4714.f_260[iParam1], Global_1675212.f_4714.f_314[iParam1], Global_1675212.f_4714.f_325[iParam1], Global_1675212.f_4714.f_357[iParam1], Global_1675212.f_4714.f_238[iParam1], Global_1675212.f_4714.f_271[iParam1], Global_1675212.f_4714.f_368[iParam1], Global_1675212.f_4714.f_379[iParam1], Global_1675212.f_4714.f_390[iParam1]);
			break;
	
		case 3:
			func_210(iParam1, Global_1675212.f_2872[iParam1], &Global_1675212.f_2872.f_11[iParam1 /*16*/], Global_1675212.f_2872.f_183[iParam1], Global_1675212.f_2872.f_172[iParam1], Global_1675212.f_2872.f_194[iParam1], Global_1675212.f_2872.f_216[iParam1], &Global_1675212.f_2872.f_259[iParam1 /*16*/], Global_1675212.f_2872.f_420[iParam1], Global_1675212.f_2872.f_453[iParam1], Global_1675212.f_2872.f_431[iParam1], Global_1675212.f_2872.f_442[iParam1], Global_1675212.f_2872.f_464[iParam1], Global_1675212.f_2872.f_475[iParam1], Global_1675212.f_2872.f_486[iParam1], Global_1675212.f_2872.f_497[iParam1], Global_1675212.f_2872.f_508[iParam1]);
			break;
	
		case 4:
			func_209(iParam1, Global_1675212.f_3391[iParam1], Global_1675212.f_3391.f_172[iParam1], &Global_1675212.f_3391.f_11[iParam1 /*16*/], Global_1675212.f_3391.f_194[iParam1], Global_1675212.f_3391.f_183[iParam1], Global_1675212.f_3391.f_205[iParam1], Global_1675212.f_3391.f_227[iParam1], Global_1675212.f_3391.f_270[iParam1], Global_1675212.f_3391.f_281[iParam1], Global_1675212.f_3391.f_292[iParam1], Global_1675212.f_3391.f_303[iParam1], Global_1675212.f_3391.f_314[iParam1], Global_1675212.f_3391.f_325[iParam1], Global_1675212.f_3391.f_336[iParam1], Global_1675212.f_3391.f_347[iParam1]);
			break;
	
		case 5:
			func_208(iParam1, Global_1675212.f_3749[iParam1], Global_1675212.f_3749.f_172[iParam1], &Global_1675212.f_3749.f_11[iParam1 /*16*/], Global_1675212.f_3749.f_194[iParam1], Global_1675212.f_3749.f_183[iParam1], Global_1675212.f_3749.f_205[iParam1], Global_1675212.f_3749.f_227[iParam1], Global_1675212.f_3749.f_270[iParam1], Global_1675212.f_3749.f_281[iParam1], Global_1675212.f_3749.f_292[iParam1], Global_1675212.f_3749.f_303[iParam1], Global_1675212.f_3749.f_314[iParam1], Global_1675212.f_3749.f_325[iParam1]);
			break;
	
		case 1:
			func_198(iParam1, Global_1675212.f_1808[iParam1], Global_1675212.f_1808.f_11[iParam1], &Global_1675212.f_1808.f_22[iParam1 /*16*/], Global_1675212.f_1808.f_194[iParam1], Global_1675212.f_1808.f_205[iParam1], Global_1675212.f_1808.f_258[iParam1], Global_1675212.f_1808.f_183[iParam1], Global_1675212.f_1808.f_227[iParam1 /*3*/], Global_1675212.f_1808.f_227[iParam1 /*3*/].f_1, Global_1675212.f_1808.f_312[iParam1], Global_1675212.f_1808.f_323[iParam1], Global_1675212.f_1808.f_269[iParam1], Global_2750358[iParam1], Global_2750369[iParam1], Global_2750380[iParam1], Global_2750391[iParam1], Global_2750402[iParam1], Global_2750413[iParam1], Global_2750424[iParam1], Global_2750435[iParam1], Global_1675212.f_1808.f_334[iParam1]);
			break;
	
		case 0:
			func_188(iParam1, Global_1675212.f_1177[iParam1], Global_1675212.f_1177.f_11[iParam1], &Global_1675212.f_1177.f_22[iParam1 /*16*/], Global_1675212.f_1177.f_194[iParam1], Global_1675212.f_1177.f_183[iParam1], Global_1675212.f_1177.f_238[iParam1 /*3*/], Global_1675212.f_1177.f_238[iParam1 /*3*/].f_1, Global_1675212.f_1177.f_269[iParam1], Global_1675212.f_1177.f_205[iParam1], Global_1675212.f_1177.f_280[iParam1], Global_1675212.f_1177.f_323[iParam1], Global_1675212.f_1177.f_334[iParam1], Global_1675212.f_1177.f_345[iParam1], Global_1675212.f_1177.f_356[iParam1], Global_1675212.f_1177.f_367[iParam1], Global_1675212.f_1177.f_378[iParam1], Global_1675212.f_1177.f_389[iParam1], Global_1675212.f_1177.f_400[iParam1], Global_1675212.f_1177.f_411[iParam1], Global_1675212.f_1177.f_422[iParam1], Global_1675212.f_1177.f_433[iParam1], Global_1675212.f_1177.f_444[iParam1], Global_1675212.f_1177.f_455[iParam1], Global_1675212.f_1177.f_466[iParam1], Global_1675212.f_1177.f_477[iParam1], Global_1675212.f_1177.f_488[iParam1], Global_1675212.f_1177.f_499[iParam1], Global_1675212.f_1177.f_510[iParam1], Global_1675212.f_1177.f_521[iParam1], Global_1675212.f_1177.f_532[iParam1], Global_1675212.f_1177.f_543[iParam1], Global_1675212.f_1177.f_554[iParam1], Global_1675212.f_1177.f_565[iParam1], Global_1675212.f_1177.f_576[iParam1], Global_1675212.f_1177.f_587[iParam1], Global_1675212.f_1177.f_598[iParam1], Global_1675212.f_1177.f_609[iParam1], HUD_COLOUR_PURE_WHITE, -1082130432);
			break;
	
		case 6:
			func_187(iParam1, Global_1675212.f_4085[iParam1], &Global_1675212.f_4085.f_11[iParam1 /*16*/], Global_1675212.f_4085.f_183[iParam1], Global_1675212.f_4085.f_172[iParam1], Global_1675212.f_4085.f_194[iParam1], Global_1675212.f_4085.f_271[iParam1], &Global_1675212.f_4085.f_282[iParam1 /*16*/], Global_1675212.f_4085.f_443[iParam1], Global_1675212.f_4085.f_454[iParam1], Global_1675212.f_4085.f_497[iParam1], Global_1675212.f_4085.f_508[iParam1], Global_1675212.f_4085.f_205[iParam1], Global_1675212.f_4085.f_216[iParam1], Global_1675212.f_4085.f_227[iParam1], Global_1675212.f_4085.f_238[iParam1], Global_1675212.f_4085.f_249[iParam1], Global_1675212.f_4085.f_519[iParam1], Global_1675212.f_4085.f_530[iParam1], Global_1675212.f_4085.f_541[iParam1], Global_1675212.f_4085.f_552[iParam1], Global_1675212.f_4085.f_563[iParam1], Global_1675212.f_4085.f_574[iParam1], Global_1675212.f_4085.f_585[iParam1], Global_1675212.f_4085.f_596[iParam1], Global_1675212.f_4085.f_607[iParam1], Global_1675212.f_4085.f_618[iParam1]);
			break;
	
		case 2:
			func_175(iParam1, Global_1675212.f_2153[iParam1], &Global_1675212.f_2153.f_99[iParam1 /*16*/], Global_1675212.f_2153.f_282[iParam1], Global_1675212.f_2153.f_293[iParam1], Global_1675212.f_2153.f_260[iParam1], Global_1675212.f_2153.f_11[iParam1], Global_1675212.f_2153.f_22[iParam1], Global_1675212.f_2153.f_33[iParam1], Global_1675212.f_2153.f_44[iParam1], Global_1675212.f_2153.f_55[iParam1], Global_1675212.f_2153.f_66[iParam1], Global_1675212.f_2153.f_77[iParam1], Global_1675212.f_2153.f_88[iParam1], Global_1675212.f_2153.f_271[iParam1], Global_1675212.f_2153.f_304[iParam1], Global_1675212.f_2153.f_357[iParam1], Global_1675212.f_2153.f_326[iParam1 /*3*/], Global_1675212.f_2153.f_326[iParam1 /*3*/].f_1, Global_1675212.f_2153.f_368[iParam1], Global_1675212.f_2153.f_379[iParam1], Global_1675212.f_2153.f_390[iParam1], Global_1675212.f_2153.f_401[iParam1], Global_1675212.f_2153.f_412[iParam1], Global_1675212.f_2153.f_423[iParam1], Global_1675212.f_2153.f_434[iParam1], Global_1675212.f_2153.f_445[iParam1], Global_1675212.f_2153.f_456[iParam1], Global_1675212.f_2153.f_467[iParam1], Global_1675212.f_2153.f_478[iParam1], Global_1675212.f_2153.f_489[iParam1], Global_1675212.f_2153.f_500[iParam1], Global_1675212.f_2153.f_511[iParam1], Global_1675212.f_2153.f_522[iParam1], Global_1675212.f_2153.f_533[iParam1], Global_1675212.f_2153.f_587[iParam1], Global_1675212.f_2153.f_598[iParam1], Global_1675212.f_2153.f_544[iParam1], Global_2750446[iParam1], Global_2750457[iParam1], Global_2750468[iParam1], Global_2750479[iParam1], Global_2750490[iParam1], Global_2750501[iParam1], Global_2750512[iParam1], Global_2750523[iParam1], Global_1675212.f_2153.f_609[iParam1], Global_1675212.f_2153.f_620[iParam1], Global_1675212.f_2153.f_631[iParam1], Global_1675212.f_2153.f_642[iParam1], Global_1675212.f_2153.f_653[iParam1], Global_1675212.f_2153.f_664[iParam1], Global_1675212.f_2153.f_675[iParam1], Global_1675212.f_2153.f_686[iParam1], Global_1675212.f_2153.f_697[iParam1], Global_1675212.f_2153.f_708[iParam1]);
			break;
	
		case 8:
			func_172(iParam1, &Global_1675212.f_5115.f_11[iParam1 /*16*/], Global_1675212.f_5115[iParam1], Global_1675212.f_5115.f_172[iParam1], Global_1675212.f_5115.f_183[iParam1], Global_1675212.f_5115.f_194[iParam1], Global_1675212.f_5115.f_205[iParam1]);
			break;
	
		case 9:
			func_167(iParam1, Global_1675212.f_5342[iParam1], Global_1675212.f_5342.f_11[iParam1]);
			break;
	
		case 10:
			func_152(iParam1, Global_1675212.f_5375.f_6[iParam1], Global_1675212.f_5375.f_17[iParam1], &Global_1675212.f_5375.f_28[iParam1 /*16*/], Global_1675212.f_5375.f_200[iParam1], Global_1675212.f_5375.f_189[iParam1], Global_1675212.f_5375.f_233[iParam1], Global_1675212.f_5375.f_211[iParam1], Global_1675212.f_5375.f_244[iParam1], Global_1675212.f_5375.f_287[iParam1], Global_1675212.f_5375.f_298[iParam1], &Global_1675212.f_5375.f_309[iParam1 /*16*/], &(Global_1675212.f_5375), Global_1675212.f_5375.f_470[iParam1], Global_1675212.f_5375.f_481[iParam1], Global_1675212.f_5375.f_492[iParam1]);
			break;
	
		case 11:
			func_149(iParam1, Global_1675212.f_5878[iParam1], Global_1675212.f_5878.f_11[iParam1], Global_1675212.f_5878.f_22[iParam1], Global_1675212.f_5878.f_33[iParam1], Global_1675212.f_5878.f_44[iParam1], Global_1675212.f_5878.f_55[iParam1], Global_1675212.f_5878.f_66[iParam1], Global_1675212.f_5878.f_77[iParam1], Global_1675212.f_5878.f_88[iParam1], Global_1675212.f_5878.f_110[iParam1], Global_1675212.f_5878.f_121[iParam1], Global_1675212.f_5878.f_132[iParam1], Global_1675212.f_5878.f_143[iParam1], Global_1675212.f_5878.f_154[iParam1]);
			break;
	
		case 12:
			func_140(iParam1, Global_1675212.f_6043[iParam1], Global_1675212.f_6043.f_22[iParam1], &Global_1675212.f_6043.f_33[iParam1 /*6*/], Global_1675212.f_6043.f_94[iParam1], Global_1675212.f_6043.f_11[iParam1], Global_1675212.f_6043.f_105[iParam1], Global_1675212.f_6043.f_116[iParam1], Global_1675212.f_6043.f_127[iParam1], Global_1675212.f_6043.f_138[iParam1], Global_1675212.f_6043.f_149[iParam1], Global_1675212.f_6043.f_160[iParam1], Global_1675212.f_6043.f_171[iParam1], Global_1675212.f_6043.f_182[iParam1], Global_1675212.f_6043.f_193[iParam1], Global_1675212.f_6043.f_204[iParam1], Global_1675212.f_6043.f_215[iParam1], Global_1675212.f_6043.f_226[iParam1], Global_1675212.f_6043.f_248[iParam1], Global_1675212.f_6043.f_259[iParam1], Global_1675212.f_6043.f_270[iParam1], Global_1675212.f_6043.f_281[iParam1], Global_1675212.f_6043.f_292[iParam1], Global_1675212.f_6043.f_303[iParam1], Global_1675212.f_6043.f_314[iParam1], Global_1675212.f_6043.f_325[iParam1], Global_1675212.f_6043.f_336[iParam1], Global_1675212.f_6043.f_347[iParam1], Global_1675212.f_6043.f_358[iParam1], Global_1675212.f_6043.f_369[iParam1], Global_1675212.f_6043.f_380[iParam1], Global_1675212.f_6043.f_391[iParam1]);
			break;
	
		case 13:
			func_135(iParam1, Global_1675212.f_6445[iParam1], Global_1675212.f_6445.f_11[iParam1], Global_1675212.f_6445.f_22[iParam1], Global_1675212.f_6445.f_33[iParam1], Global_1675212.f_6445.f_44[iParam1], Global_1675212.f_6445.f_55[iParam1], Global_1675212.f_6445.f_66[iParam1], Global_1675212.f_6445.f_77[iParam1], Global_1675212.f_6445.f_88[iParam1], Global_1675212.f_6445.f_99[iParam1], Global_1675212.f_6445.f_110[iParam1], Global_1675212.f_6445.f_121[iParam1], Global_1675212.f_6445.f_132[iParam1], Global_1675212.f_6445.f_154[iParam1], Global_1675212.f_6445.f_165[iParam1], Global_1675212.f_6445.f_176[iParam1], Global_1675212.f_6445.f_187[iParam1], Global_1675212.f_6445.f_198[iParam1], Global_1675212.f_6445.f_209[iParam1], Global_1675212.f_6445.f_220[iParam1]);
			break;
	
		case 14:
			func_46(iParam1, &Global_1675212.f_6676[iParam1 /*16*/], &Global_1675212.f_6676.f_161[iParam1 /*16*/], Global_1675212.f_6676.f_322[iParam1], Global_1675212.f_6676.f_333[iParam1], Global_1675212.f_6676.f_355[iParam1], Global_1675212.f_6676.f_366[iParam1], Global_1675212.f_6676.f_377[iParam1]);
			break;
	}

	return;
}

void func_229(BOOL bParam0) // Position - 0xFE87 (65159)
{
	if (func_230())
		if (bParam0)
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
		else
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);

	return;
}

BOOL func_230() // Position - 0xFEA8 (65192)
{
	if (func_231(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_231(Player plParam0) // Position - 0xFEC0 (65216)
{
	switch (func_232(plParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return false;
	
		default:
		
	}

	return true;
}

int func_232(Player plParam0) // Position - 0xFF20 (65312)
{
	return Global_1845221[plParam0 /*889*/].f_193;
}

BOOL func_233(int iParam0) // Position - 0xFF33 (65331)
{
	if (Global_2698300 == 1)
		return false;

	if (func_236() == 0)
		if (HUD::IS_PAUSE_MENU_ACTIVE())
			return false;

	if (iParam0 != 1 && Global_1675212.f_1166 == 0 && Global_1675212.f_1167 == 0)
		if (func_234())
			return false;

	return true;
}

BOOL func_234() // Position - 0xFF89 (65417)
{
	var position;

	if (Global_21066.f_1 > 3)
		return true;

	if (func_235())
	{
		position = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&position);
	
		if (Global_21011 == 0)
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

BOOL func_235() // Position - 0xFFF7 (65527)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	return false;
}

int func_236() // Position - 0x10015 (65557)
{
	return Global_33087;
}

BOOL func_237(int iParam0) // Position - 0x10020 (65568)
{
	return iParam0 > -1 && iParam0 < 15;
}

int func_238(int iParam0) // Position - 0x10036 (65590)
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 7:
			return 0;
	
		case 3:
			return 1;
	
		case 4:
			return 2;
	
		case 5:
			return 3;
	
		case 1:
			return 4;
	
		case 0:
			return 5;
	
		case 6:
			return 6;
	
		case 2:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 11:
			return 11;
	
		case 12:
			return 12;
	
		case 13:
			return 13;
	
		case 14:
			return 14;
	
		default:
		
	}

	return -1;
}

int func_239(int iParam0) // Position - 0x100ED (65773)
{
	if (func_240(iParam0))
		return Global_1671507[iParam0];

	return -1;
}

BOOL func_240(int iParam0) // Position - 0x1010A (65802)
{
	return iParam0 >= 0 && iParam0 < 2;
}

BOOL func_241(int iParam0) // Position - 0x1011F (65823)
{
	if (func_240(iParam0))
		return Global_1671507[iParam0] != -1;

	return false;
}

BOOL func_242() // Position - 0x1013E (65854)
{
	int i;

	for (i = 0; i <= 14; i = i + 1)
	{
		if (Global_1675212.f_7080[i] != Global_1675212.f_7064[i])
			return true;
	}

	if (Global_1675212.f_7128)
	{
		Global_1675212.f_7128 = 0;
		return true;
	}

	return false;
}

void func_243() // Position - 0x1018D (65933)
{
	Global_1675212.f_7128 = 1;
	return;
}

BOOL func_244(Player plParam0) // Position - 0x1019D (65949)
{
	if (func_246(plParam0, 0))
		return true;

	if (func_245())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_245() // Position - 0x101DC (66012)
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_246(Player plParam0, int iParam1) // Position - 0x101EA (66026)
{
	BOOL flag;

	if (!func_249(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_247(-1, false) == 8;
	else
		flag = Global_1845221[plParam0 /*889*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_247(int iParam0, BOOL bParam1) // Position - 0x10243 (66115)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_248();

	if (Global_1575064[num2] == 1)
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

int func_248() // Position - 0x10284 (66180)
{
	return Global_1574926;
}

BOOL func_249(Player plParam0) // Position - 0x10290 (66192)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_250() // Position - 0x102B2 (66226)
{
	if (Global_1574529)
		return false;

	if (Global_76640)
		return false;

	if (HUD::IS_MP_TEXT_CHAT_TYPING())
		return false;

	if (Global_1937688.f_4)
		return false;

	if (Global_1675212.f_1169 || Global_1675212.f_1170)
	{
		if (Global_1675212.f_1171 == false)
			if (func_254(PLAYER::PLAYER_PED_ID()))
				func_253();
	
		return true;
	}

	if (func_53())
	{
		if (Global_1675212.f_1171 == false)
			if (func_254(PLAYER::PLAYER_PED_ID()))
				func_253();
	
		return true;
	}

	if (Global_2698999)
		return false;

	if (Global_1577925)
		return false;

	if (func_252())
	{
		if (Global_1675212.f_1171 == false)
			if (func_254(PLAYER::PLAYER_PED_ID()))
				func_253();
	
		return true;
	}

	if (Global_23831.f_4 && func_231(PLAYER::PLAYER_ID()) == false)
		return false;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (Global_1675212.f_1171 == false)
		if (func_254(PLAYER::PLAYER_PED_ID()))
			func_253();

	if (func_251(8, -1))
		return false;

	if (HUD::IS_HUD_PREFERENCE_SWITCHED_ON() == false)
		return false;

	if (func_236() == 0)
		if (Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_235 != 99)
			if (NETWORK::NETWORK_IS_IN_SPECTATOR_MODE() == false && Global_1836681 == 0 && !IS_BIT_SET(Global_2672939.f_1761.f_756, 11) && Global_1845221[PLAYER::PLAYER_ID() /*889*/] != 0)
				return false;

	if (IS_BIT_SET(Global_2621446, 11))
		return false;

	return true;
}

BOOL func_251(int iParam0, int iParam1) // Position - 0x1043D (66621)
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

BOOL func_252() // Position - 0x10475 (66677)
{
	if (Global_1919395)
		return true;

	return false;
}

void func_253() // Position - 0x10489 (66697)
{
	Global_1675212.f_1171 = 1;
	return;
}

BOOL func_254(Ped pedParam0) // Position - 0x10499 (66713)
{
	int weaponHash;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
		
			if (weaponHash == joaat("WEAPON_SNIPERRIFLE") || weaponHash == joaat("WEAPON_HEAVYSNIPER") || weaponHash == joaat("WEAPON_MARKSMANRIFLE") || weaponHash == joaat("WEAPON_HEAVYSNIPER_MK2"))
				return true;
		}
	}

	return false;
}

void func_255() // Position - 0x104F6 (66806)
{
	int i;

	if (func_258(2))
	{
		for (i = 0; i <= 9; i = i + 1)
		{
			if (func_30(2, i) && func_29(2, i))
			{
				_STOPWATCH_DESTROY(&Global_1675212.f_2153.f_555[i /*2*/]);
			}
			else if (func_260(&Global_1675212.f_2153.f_555[i /*2*/], Global_1675212.f_2153.f_576[i], false) == false)
			{
				Global_1675212.f_1 = 1;
				func_257(2, i);
			}
			else
			{
				func_256(2, i);
			}
		}
	}

	return;
}

void func_256(int iParam0, int iParam1) // Position - 0x10581 (66945)
{
	MISC::CLEAR_BIT(&Global_1675212.f_7112[iParam0], iParam1);
	return;
}

void func_257(int iParam0, int iParam1) // Position - 0x1059A (66970)
{
	MISC::SET_BIT(&Global_1675212.f_7064[iParam0], iParam1);
	return;
}

BOOL func_258(int iParam0) // Position - 0x105B3 (66995)
{
	if (Global_1675212.f_7112[iParam0] > 0)
		return true;

	return false;
}

void func_259(int iParam0) // Position - 0x105CF (67023)
{
	Global_1675212.f_1163 = iParam0;
	return;
}

BOOL func_260(var uParam0, int iParam1, BOOL bParam2) // Position - 0x105E0 (67040)
{
	if (iParam1 == -1)
		return true;

	func_79(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}


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
	Hash hLocal_26 = 0;
	Hash hLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	var uLocal_31 = 21;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	float fLocal_53 = 0f;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	Object obLocal_57 = 0;
	Hash hLocal_58 = 0;
	float fLocal_59 = 0f;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	float fLocal_68 = 0f;
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
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	BOOL bLocal_92 = 0;
	BOOL bLocal_93 = 0;
	BOOL bLocal_94 = 0;
	BOOL bLocal_95 = 0;
	BOOL bLocal_96 = 0;
	BOOL bLocal_97 = 0;
	BOOL bLocal_98 = 0;
	BOOL bLocal_99 = 0;
	char* sLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	Cam caLocal_118 = 0;
	Cam caLocal_119 = 0;
	Cam caLocal_120 = 0;
	Cam caLocal_121 = 0;
	Cam caLocal_122 = 0;
	Cam caLocal_123 = 0;
	Cam caLocal_124 = 0;
	Cam caLocal_125 = 0;
	Cam caLocal_126 = 0;
	Cam caLocal_127 = 0;
	Cam caLocal_128 = 0;
	Cam caLocal_129 = 0;
	Cam caLocal_130 = 0;
	BOOL bLocal_131 = 0;
	float fLocal_132 = 0f;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	var uLocal_150 = 11;
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
	BOOL bLocal_162 = 0;
	int iLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 1132396544;
	var uLocal_166 = 1132396544;
	var uLocal_167 = 1132396544;
	var uLocal_168 = 0;
	var uLocal_169 = -1082130432;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 8;
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
	var uLocal_229 = -1;
	var uLocal_230 = 1092616192;
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
	float fLocal_253 = 0f;
	var uLocal_254 = 0;
	float fLocal_255 = 0f;
	var uLocal_256 = 0;
	BOOL bLocal_257 = 0;
	BOOL bLocal_258 = 0;
	BOOL bLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 2;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	BOOL bLocal_266 = 0;
	BOOL bLocal_267 = 0;
	BOOL bLocal_268 = 0;
	BOOL bLocal_269 = 0;
	BOOL bLocal_270 = 0;
	BOOL bLocal_271 = 0;
	BOOL bLocal_272 = 0;
	BOOL bLocal_273 = 0;
	BOOL bLocal_274 = 0;
	BOOL bLocal_275 = 0;
	BOOL bLocal_276 = 0;
	BOOL bLocal_277 = 0;
	BOOL bLocal_278 = 0;
	BOOL bLocal_279 = 0;
	BOOL bLocal_280 = 0;
	BOOL bLocal_281 = 0;
	BOOL bLocal_282 = 0;
	BOOL bLocal_283 = 0;
	BOOL bLocal_284 = 0;
	BOOL bLocal_285 = 0;
	BOOL bLocal_286 = 0;
	BOOL bLocal_287 = 0;
	BOOL bLocal_288 = 0;
	var uLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	Hash hLocal_299 = 0;
	int iLocal_300 = 0;
	Cam caLocal_301 = 0;
	int iLocal_302 = 0;
	Cam caLocal_303 = 0;
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
	float fLocal_352 = 0f;
	float fLocal_353 = 0f;
	float fLocal_354 = 0f;
	float fLocal_355 = 0f;
	eCharacter echLocal_356 = CHAR_MICHAEL;
	eCharacter echLocal_357 = CHAR_MICHAEL;
	char* sLocal_358 = 0;
	char* sLocal_359 = 0;
	int iLocal_360 = 0;
	char* sLocal_361 = 0;
	char* sLocal_362 = 0;
	var uLocal_363 = 3;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 3;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 3;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 3;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	int num;
	int num2;
	Vector3 vector;
	Vector3 vector2;
	int scaleform;
	var unk504;
	var unk1187;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	int randomIntInRange;
	int num3;
	int i;
	float num4;
	float value;
	var unk1768;
	var unk1771;
	var entityCoords;
	Vector3 vector3;
	Vector3 vector4;
	char* animationName;
	var unk1780;
	var unk1783;
	var unk1786;
	var sizeAndPeds;
	Object object;
	int j;
	int k;
	int l;
	int m;
	int n;
	int num5;
	float aspectRatio;
	BOOL flag6;

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
	hLocal_26 = joaat("prop_dart_1");
	hLocal_27 = joaat("prop_dart_2");
	iLocal_30 = joaat("prop_dart_bd_cab_01");
	fLocal_53 = 0.063f;
	uLocal_54 = { -0.0035f, 0f, -0.001f };
	hLocal_58 = joaat("prop_target_bull");
	uLocal_83 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_90 = 0.1f;
	iLocal_101 = 3;
	fLocal_104 = 80f;
	fLocal_105 = 140f;
	fLocal_106 = 180f;
	iLocal_112 = 1;
	iLocal_113 = 65;
	iLocal_114 = 49;
	iLocal_115 = 64;
	iLocal_138 = 65;
	iLocal_140 = 660;
	fLocal_145 = 0.27f;
	fLocal_146 = 0.1f;
	fLocal_147 = -120f;
	fLocal_148 = 127f;
	fLocal_253 = (0.05f + 0.275f) - 0.01f;
	fLocal_255 = 0f;
	uLocal_260 = { 500f, 500f, 500f };
	bLocal_275 = 1;
	uLocal_340 = { -573.1373f, 294.0269f, 78.1765f };
	uLocal_343 = { -574.1169f, 292.7964f, 78.1766f };
	uLocal_346 = { 1995.2952f, 3050.0845f, 46.91535f };
	uLocal_349 = { 1995.488f, 3047.3833f, 46.91535f };
	fLocal_352 = 172.6813f;
	fLocal_353 = 274.5094f;
	fLocal_354 = 142.6717f;
	fLocal_355 = 44.8785f;
	num.f_1 = 2;
	num.f_5 = 2;
	num.f_5.f_1 = 3;
	num.f_5.f_1.f_79 = 3;
	num.f_164 = 3;
	num.f_257 = 16;
	num.f_422 = 2;
	num.f_425 = 2;
	num.f_429 = 2;
	num.f_432 = 2;
	num.f_437 = 2;
	num.f_440 = 2;
	num.f_443 = 2;
	num.f_446 = 2;
	num.f_449 = 2;
	scaleform.f_1 = 2;
	scaleform.f_1.f_1 = 7;
	scaleform.f_1.f_1.f_8 = 7;
	unk504.f_3 = 8;
	unk504.f_12 = 8;
	unk504.f_21 = 4;
	unk504.f_26.f_3 = 8;
	unk504.f_26.f_12 = 8;
	unk504.f_26.f_21 = 4;
	unk504.f_72 = 3;
	unk504.f_72.f_44.f_3.f_1 = 4;
	unk504.f_72.f_113 = 2;
	unk504.f_72.f_113.f_1.f_1 = 4;
	unk504.f_72.f_113.f_1.f_66.f_1 = 4;
	unk504.f_72.f_246.f_6 = 12;
	unk504.f_72.f_246.f_187 = 3;
	unk504.f_509.f_2 = 8;
	unk504.f_509.f_2.f_1.f_3 = 4;
	unk504.f_509.f_2.f_1.f_15.f_3 = 4;
	unk504.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	unk504.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	unk504.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	unk504.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	unk504.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	unk504.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	unk504.f_681 = 2;
	unk1187.f_32 = 3;
	unk1187.f_36 = 1;
	unk1187.f_53 = 2;
	unk1187.f_57 = 13;
	unk1187.f_71 = 13;
	unk1187.f_280 = 13;
	unk1187.f_489 = 13;
	unk1187.f_503 = 13;
	unk1187.f_517 = 13;
	unk1187.f_531 = 13;
	num3 = 0;
	sizeAndPeds = 20;
	sLocal_361 = "facials@gen_female@variations@happy";

	switch (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()))
	{
		case CHAR_MICHAEL:
			sLocal_362 = "facials@p_m_zero@variations@happy";
			break;
	
		case CHAR_FRANKLIN:
			sLocal_362 = "facials@p_m_one@variations@happy";
			break;
	
		case CHAR_TREVOR:
			sLocal_362 = "facials@p_m_two@variations@happy";
			break;
	}

	uLocal_363[0] = "mood_happy_1";
	uLocal_363[1] = "mood_happy_2";
	uLocal_363[2] = "mood_happy_3";
	uLocal_367[0] = "darts_outro_01_guy1";
	uLocal_367[1] = "darts_outro_02_guy2";
	uLocal_367[2] = "darts_outro_03_guy2";
	uLocal_371[0] = "darts_outro_01_guy2";
	uLocal_371[1] = "darts_outro_02_guy1";
	uLocal_371[2] = "darts_outro_03_guy1";
	uLocal_375[0] = "darts_outro_01_cam";
	uLocal_375[1] = "darts_outro_02_cam";
	uLocal_375[2] = "darts_outro_03_cam";
	uLocal_263[0] = PLAYER::PLAYER_PED_ID();
	bLocal_278 = true;
	unk1768 = { 1992.2932f, 3050.5828f, 47.98973f };
	unk1771 = { -572.04065f, 294.19577f, 79.9374f };
	func_523();

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_302 = 1;
	
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
		{
			case 0:
				hLocal_299 = joaat("A_F_M_Salton_01");
				break;
		
			case 1:
				hLocal_299 = joaat("A_F_O_Salton_01");
				break;
		}
	
		iLocal_297 = 10;
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uScriptParam_0.f_4))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_302 == 2)
			{
				uScriptParam_0 = { unk1771 };
				uScriptParam_0.f_3 = -0.09f;
			}
			else
			{
				uScriptParam_0 = { unk1768 };
				uScriptParam_0.f_3 = 57.783146f;
			}
		
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(uScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), false))
			{
				uScriptParam_0.f_4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(uScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), true, false, true);
				OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(uScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), &uScriptParam_0, &entityCoords, 0);
				uScriptParam_0.f_3 = entityCoords.f_2;
			}
		}
	}
	else
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(uScriptParam_0.f_4, true) };
	}

	if (!ENTITY::IS_ENTITY_DEAD(func_522(), false))
	{
		func_520(iLocal_297, true);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(func_522(), false))
			TASK::TASK_LEAVE_ANY_VEHICLE(func_522(), 0, 0);
	
		uLocal_263[1] = func_522();
	}
	else
	{
		MISC::SET_MISSION_FLAG(true);
	}

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_511();
		func_493(&num, &unk504, &unk1187);
	}

	HUD::DISPLAY_AREA_NAME(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	func_491(true);
	iLocal_293 = func_488(_GET_PLAYER_CHARACTER_FROM_PED(uLocal_263[0]), 1);
	num4 = SYSTEM::TO_FLOAT(iLocal_293) / 100f;
	value = num4 * 1200f;
	iLocal_140 = SYSTEM::ROUND(value);

	if (iLocal_140 < 660)
		iLocal_140 = 660;

	func_487(23, true);

	while (true)
	{
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, 0f, -0.0375f);
	
		if (bLocal_285 && num < 13)
			GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(scaleform, scaleform.f_18, scaleform.f_21, scaleform.f_24, scaleform.f_24, 2);
	
		if (PED::IS_PED_INJURED(uScriptParam_0.f_5) && !ENTITY::DOES_ENTITY_EXIST(func_522()) || ENTITY::DOES_ENTITY_EXIST(func_522()) && PED::IS_PED_INJURED(func_522()))
			func_493(&num, &unk504, &unk1187);
	
		if (!PED::IS_PED_INJURED(uLocal_263[0]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_263[0], 239, true);
			PED::SET_PED_RESET_FLAG(uLocal_263[0], 124, true);
			func_486();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(PLAYER_CONTROL);
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(FRONTEND_CONTROL);
		
			for (i = 0; i < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1); i = i + 1)
			{
				if (sizeAndPeds[i] != uLocal_263[1])
					if (!PED::IS_PED_INJURED(sizeAndPeds[i]))
						PED::SET_PED_RESET_FLAG(sizeAndPeds[i], 240, true);
			}
		
			switch (num)
			{
				case 0:
					HUD::CLEAR_HELP(true);
					func_485(&(num.f_243), &uScriptParam_0);
					func_484(num.f_243.f_1, num.f_243.f_4);
				
					if (ENTITY::DOES_ENTITY_EXIST(num.f_243))
					{
						uLocal_334 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(num.f_243, 0.7792f, -1.138f, 0.1814f) };
						uLocal_337 = { -7.9947f, 0f, num.f_243.f_4 + 36.191757f };
						caLocal_127 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), uLocal_334, uLocal_337, 1115815936, false, 2);
						CAM::SET_CAM_FOV(caLocal_127, 30f);
					}
				
					func_483();
					SYSTEM::SETTIMERA(0);
					num = 1;
					break;
			
				case 1:
					if (SYSTEM::TIMERA() > 500 && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						MISC::CLEAR_AREA(uScriptParam_0, 0.5f, true, false, false, false);
					
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_300);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_300);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_300);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_300);
						}
					
						uLocal_83 = { uLocal_83 };
						num = 2;
					}
					break;
			
				case 2:
					for (j = 0; j < 2; j = j + 1)
					{
						for (k = 0; k < 3; k = k + 1)
						{
							func_482(&num.f_5[j /*79*/][k /*26*/], j);
						}
					}
				
					for (l = 0; l < 3; l = l + 1)
					{
						func_482(&num.f_164[l /*26*/], 0);
					}
				
					num2 = 2;
					func_481(0);
					func_479(&scaleform, iLocal_302, num.f_243.f_1, num.f_243.f_4);
				
					if (ENTITY::DOES_ENTITY_EXIST(num.f_243))
						entityCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(num.f_243, scaleform.f_18) };
				
					func_476(&scaleform, &unk504);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					num = 3;
					break;
			
				case 3:
					if (func_473(&scaleform, &unk504))
					{
						func_470(&(num.f_243), &vector, &vector2, false);
						echLocal_356 = _GET_PLAYER_CHARACTER_FROM_PED(uLocal_263[0]);
					
						switch (echLocal_356)
						{
							case CHAR_MICHAEL:
								sLocal_358 = func_469("MICHAEL");
							
								if (!IS_BIT_SET(Global_114123, 0))
									animationName = "darts_ig_intro_player_0_face";
								else
									animationName = "darts_ig_intro_alt1_player_0_face";
								break;
						
							case CHAR_FRANKLIN:
								sLocal_358 = func_469("FRANKLIN");
								bLocal_282 = true;
							
								if (!IS_BIT_SET(Global_114123, 0))
									animationName = "darts_ig_intro_player_1_face";
								else
									animationName = "darts_ig_intro_alt1_player_1_face";
								break;
						
							case CHAR_TREVOR:
								sLocal_358 = func_469("TREVOR");
							
								if (!IS_BIT_SET(Global_114123, 0))
									animationName = "darts_ig_intro_player_2_face";
								else
									animationName = "darts_ig_intro_alt1_player_2_face";
								break;
						}
					
						if (!ENTITY::IS_ENTITY_DEAD(func_522(), false))
						{
							echLocal_357 = _GET_PLAYER_CHARACTER_FROM_PED(func_522());
						
							if (echLocal_357 == _CHAR_NULL)
								echLocal_357 = func_466(func_522());
						
							switch (echLocal_357)
							{
								case CHAR_MICHAEL:
									sLocal_359 = func_469("MICHAEL");
									break;
							
								case CHAR_FRANKLIN:
									sLocal_359 = func_469("FRANKLIN");
									break;
							
								case CHAR_TREVOR:
									sLocal_359 = func_469("TREVOR");
									break;
							
								case CHAR_LAMAR:
									sLocal_359 = func_469("LAMAR");
									PED::SET_PED_COMPONENT_VARIATION(func_522(), PV_COMP_HAND, 2, 0, 0);
									break;
							
								case CHAR_JIMMY:
									sLocal_359 = func_469("JIMMY");
									break;
							
								default:
									sLocal_359 = "NEW_GUY";
									break;
							}
						}
						else
						{
							randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 200);
						
							if (iLocal_302 == 2)
							{
								if (randomIntInRange < 51)
								{
									sLocal_359 = func_469("RAYMOND");
									iLocal_360 = joaat("RAYMOND");
								}
								else if (randomIntInRange < 101)
								{
									sLocal_359 = func_469("JOHAN");
									iLocal_360 = joaat("JOHAN");
								}
								else if (randomIntInRange < 151)
								{
									sLocal_359 = func_469("STAN");
									iLocal_360 = joaat("STAN");
								}
								else
								{
									sLocal_359 = func_469("VINCE");
									iLocal_360 = joaat("VINCE");
								}
							}
							else if (randomIntInRange < 51)
							{
								sLocal_359 = func_469("KRISTY");
								iLocal_360 = joaat("KRISTY");
							}
							else if (randomIntInRange < 101)
							{
								sLocal_359 = func_469("MARLENE");
								iLocal_360 = joaat("MARLENE");
							}
							else if (randomIntInRange < 151)
							{
								sLocal_359 = func_469("LORIE");
								iLocal_360 = joaat("LORIE");
							}
							else
							{
								sLocal_359 = func_469("SHELLEY");
								iLocal_360 = joaat("SHELLEY");
							}
						}
					
						obLocal_57 = OBJECT::CREATE_OBJECT(hLocal_58, vector2, true, true, false);
						num.f_446[0] = 0;
						num.f_446[1] = 0;
						num = 4;
					}
					break;
			
				case 4:
					if (!CAM::IS_INTERPOLATING_TO_SCRIPT_CAMS())
					{
						object = OBJECT::CREATE_OBJECT(joaat("prop_dart_1"), vector2, true, true, false);
						func_463(num.f_243.f_4, vector, &sizeAndPeds, &uScriptParam_0);
						func_462(&scaleform, sLocal_358, sLocal_359);
						TASK::CLEAR_PED_TASKS(uLocal_263[1]);
						caLocal_301 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, false, 2);
					
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
					
						_CONVERSATION_INITIALIZE_ACTOR(&(num.f_257), 0, PLAYER::PLAYER_PED_ID(), sLocal_358, 0, 1);
					
						if (ENTITY::IS_ENTITY_DEAD(func_522(), false))
						{
							if (iLocal_302 == 2)
								_CONVERSATION_INITIALIZE_ACTOR(&(num.f_257), 3, uLocal_263[1], "DartsBillLost1", 0, 1);
							else
								_CONVERSATION_INITIALIZE_ACTOR(&(num.f_257), 3, uLocal_263[1], "DartsMelHick1", 0, 1);
						
							num3 = -1;
						}
						else
						{
							_CONVERSATION_INITIALIZE_ACTOR(&(num.f_257), 3, func_522(), sLocal_359, 0, 1);
							func_459(&unk1786);
							num3 = 6;
						}
					
						if (!IS_BIT_SET(Global_114123, 0))
							num3 = -1;
						else
							num3 = 3;
					
						func_458(&scaleform, 0);
						num = 5;
					}
					break;
			
				case 5:
					if (!PED::IS_PED_INJURED(uLocal_263[1]) && PED::IS_PED_ON_FOOT(uLocal_263[0]) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_263[0], true) && PED::IS_PED_ON_FOOT(uLocal_263[1]) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_263[1], true))
					{
						bLocal_273 = func_456(&uLocal_289);
					
						if (func_455() && MISC::GET_GAME_TIMER() >= iLocal_291 + 1000 && num3 != 9)
							if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
								CAM::DO_SCREEN_FADE_OUT(500);
					
						if (CAM::IS_SCREEN_FADED_OUT() && num3 != 9)
						{
							func_451(0);
							func_449();
							num3 = 9;
						}
					
						switch (num3)
						{
							case -1:
								if (!PED::IS_PED_INJURED(uLocal_263[1]))
								{
									iLocal_295 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(uScriptParam_0.f_4) - 3.783146f, 2);
									caLocal_301 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_301, iLocal_295, "darts_ig_intro_cam", "mini@dartsintro");
									CAM::SET_CAM_ACTIVE(caLocal_301, true);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									TASK::TASK_CLEAR_LOOK_AT(uLocal_263[0]);
									TASK::TASK_CLEAR_LOOK_AT(uLocal_263[1]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_263[0]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_263[1]);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[1], iLocal_295, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[0], iLocal_295, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									TASK::TASK_PLAY_ANIM(uLocal_263[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, false, false, false);
									TASK::TASK_PLAY_ANIM(uLocal_263[0], "mini@dartsintro", animationName, 8f, -8f, -1, 32, 0, false, false, false);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(object, iLocal_295, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
									func_448(&unk1786);
									num3 = num3 + 1;
								}
								break;
						
							case 0:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295))
								{
									if (!flag3)
									{
										if (func_447(&unk1786) > 1.5f)
										{
											func_446(uLocal_263[0], "DARTS_REQUEST_GAME", 6);
											flag3 = true;
											func_445(&unk1786);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_263[0]))
									{
										if (!flag4)
										{
											if (!func_444(&unk1786))
											{
												func_459(&unk1786);
											}
											else if (func_447(&unk1786) > 0.5f)
											{
												func_443(uLocal_263[1]);
												func_445(&unk1786);
												flag4 = true;
											}
										}
									}
								
									switch (iLocal_29)
									{
										case 0:
											func_448(&unk1786);
											_DISPLAY_HELP_TEXT("DARTS_HOW_TO_2", -1);
											iLocal_29 = iLocal_29 + 1;
											break;
									
										case 1:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) > 0.25f)
											{
												func_448(&unk1786);
												_DISPLAY_HELP_TEXT("DARTS_HOW_TO_3", -1);
												iLocal_29 = iLocal_29 + 1;
											}
											break;
									
										case 2:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) > 0.55f)
											{
												_DISPLAY_HELP_TEXT("DARTS_HOW_3A", -1);
												iLocal_29 = iLocal_29 + 1;
											}
											break;
									
										case 3:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) > 0.85f)
											{
												_DISPLAY_HELP_TEXT("DARTS_HOW_3A", -1);
												iLocal_29 = iLocal_29 + 1;
											}
											break;
									}
								
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) > 0.95f)
									{
										bLocal_285 = true;
										num3 = num3 + 1;
									}
									else
									{
										MISC::GET_GAME_TIMER() % 1000 < 50;
									}
								}
								break;
						
							case 1:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(uLocal_263[1]))
									{
										func_439(num.f_243.f_1, num.f_243.f_4, func_441(2), func_440(false), 0, true);
										iLocal_29 = 0;
										HUD::CLEAR_HELP(true);
										CAM::DESTROY_CAM(caLocal_301, false);
										TASK::CLEAR_PED_TASKS(uLocal_263[0]);
										TASK::CLEAR_PED_TASKS(uLocal_263[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(object, -1000f, false);
										OBJECT::DELETE_OBJECT(&object);
										AUDIO::STOP_AUDIO_SCENE(func_438(0));
										func_445(&unk1786);
										num = 6;
										num3 = 0;
									}
								}
								break;
						
							case 3:
								if (!PED::IS_PED_INJURED(uLocal_263[1]))
								{
									iLocal_295 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(uScriptParam_0.f_4) - 3.783146f, 2);
									caLocal_301 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_301, iLocal_295, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									CAM::SET_CAM_ACTIVE(caLocal_301, true);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									TASK::TASK_CLEAR_LOOK_AT(uLocal_263[0]);
									TASK::TASK_CLEAR_LOOK_AT(uLocal_263[1]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_263[0]);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_263[1]);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[1], iLocal_295, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[0], iLocal_295, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									TASK::TASK_PLAY_ANIM(uLocal_263[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, false, false, false);
									TASK::TASK_PLAY_ANIM(uLocal_263[0], "mini@dartsintro_alt1", animationName, 8f, -8f, -1, 32, 0, false, false, false);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(object, iLocal_295, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
									func_448(&unk1786);
									num3 = num3 + 1;
								}
								break;
						
							case 4:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295))
								{
									if (!flag3)
									{
										if (func_447(&unk1786) > 0.5f)
										{
											func_446(uLocal_263[0], "DARTS_REQUEST_GAME", 6);
											flag3 = true;
											func_445(&unk1786);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_263[0]))
									{
										if (!flag4)
										{
											if (!func_444(&unk1786))
											{
												func_459(&unk1786);
											}
											else if (func_447(&unk1786) > 0.25f)
											{
												func_443(uLocal_263[1]);
												func_445(&unk1786);
												flag4 = true;
											}
										}
									}
								
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) > 0.95f)
									{
										bLocal_285 = true;
										num3 = num3 + 1;
									}
									else
									{
										MISC::GET_GAME_TIMER() % 1000 < 50;
									}
								}
								break;
						
							case 5:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(uLocal_263[1]))
									{
										func_437();
										CAM::DESTROY_CAM(caLocal_301, false);
										TASK::CLEAR_PED_TASKS(uLocal_263[0]);
										TASK::CLEAR_PED_TASKS(uLocal_263[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(object, -1000f, false);
										OBJECT::DELETE_OBJECT(&object);
										AUDIO::STOP_AUDIO_SCENE(func_438(0));
										func_445(&unk1786);
										num = 6;
										num3 = 0;
									}
								}
								break;
						
							case 9:
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									bLocal_285 = true;
									iLocal_29 = 0;
									HUD::CLEAR_HELP(true);
								
									if (!PED::IS_PED_INJURED(uLocal_263[1]))
									{
										ENTITY::SET_ENTITY_COORDS(uLocal_263[0], vector, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(uLocal_263[0], num.f_243.f_4);
										ENTITY::SET_ENTITY_COORDS(uLocal_263[1], vector.f_3, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(uLocal_263[1], num.f_243.f_4);
										TASK::CLEAR_PED_TASKS(uLocal_263[0]);
										TASK::CLEAR_PED_TASKS(uLocal_263[1]);
									}
								
									CAM::DESTROY_CAM(caLocal_301, false);
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(object, -1000f, false);
									OBJECT::DELETE_OBJECT(&object);
								
									if (!IS_BIT_SET(Global_114123, 0))
										func_439(num.f_243.f_1, num.f_243.f_4, func_441(2), func_440(false), 0, true);
									else
										func_437();
								
									AUDIO::STOP_AUDIO_SCENE(func_438(0));
									func_445(&unk1786);
									CAM::DO_SCREEN_FADE_IN(500);
									num = 6;
									num3 = 0;
								}
								break;
						}
					}
					break;
			
				case 6:
					switch (num3)
					{
						case 0:
							iLocal_291 = MISC::GET_GAME_TIMER();
						
							if (!PED::IS_PED_INJURED(uLocal_263[1]))
							{
								ENTITY::SET_ENTITY_COORDS(uLocal_263[0], vector, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(uLocal_263[0], num.f_243.f_4);
								ENTITY::SET_ENTITY_COORDS(uLocal_263[1], vector.f_3, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(uLocal_263[1], num.f_243.f_4);
							}
						
							AUDIO::START_AUDIO_SCENE(func_438(1));
							num3 = 0;
							num = 7;
							break;
					
						case 1:
							if (MISC::GET_GAME_TIMER() - iLocal_291 > 1500)
							{
								func_435(&(unk504.f_57), "DARTS_TITLE", 0, 4000, HUD_COLOUR_YELLOW, 2, false, 0);
								num3 = num3 + 1;
							}
							break;
					
						case 2:
							if (!func_434(&(unk504.f_57), true, false))
							{
								AUDIO::START_AUDIO_SCENE(func_438(1));
								num3 = 0;
								num = 7;
							}
							break;
					}
					break;
			
				case 7:
					if (!IS_BIT_SET(Global_114123, 0))
					{
						if (func_431(&num2, &(num.f_243), &(num.f_249), &(num.f_1), &(num.f_164), &unk1783))
						{
							MISC::SET_BIT(&Global_114123, 0);
							num = 8;
						}
					}
					else
					{
						CAM::SET_CAM_ACTIVE(caLocal_118, true);
						num = 8;
					}
					break;
			
				case 8:
					if (CAM::IS_SCREEN_FADED_OUT())
						CAM::DO_SCREEN_FADE_IN(500);
				
					switch (num3)
					{
						case 0:
							if (!ENTITY::DOES_ENTITY_EXIST(func_522()))
							{
								if (!IS_BIT_SET(Global_114123, 10))
									MISC::SET_BIT(&Global_114123, 10);
								else
									MISC::CLEAR_BIT(&Global_114123, 10);
							
								func_429(&unk504);
								num3 = num3 + 1;
							}
							else
							{
								func_429(&unk504);
								num3 = num3 + 1;
							}
							break;
					
						case 1:
							if (MISC::IS_PC_VERSION())
							{
								if (fLocal_132 != GRAPHICS::GET_ASPECT_RATIO(false))
								{
									fLocal_132 = GRAPHICS::GET_ASPECT_RATIO(false);
									CAM::SET_CAM_FOV(caLocal_118, func_428(fLocal_132));
									CAM::SET_CAM_FOV(caLocal_119, func_428(fLocal_132));
								}
							}
						
							if (func_357(&unk504, &(num.f_452), &(num.f_453)))
							{
								AUDIO::STOP_AUDIO_SCENE(func_438(1));
							
								if (num.f_452 > 0)
								{
									num3 = 0;
								
									if (num.f_452 > 1 || num.f_453 > 1)
									{
										func_356(&scaleform, 0, 0, 0, 0);
										flag2 = true;
									}
								
									func_353(true, -1);
									num = 9;
								}
								else if (num.f_452 < 0)
								{
									num = 15;
								}
							}
							break;
					}
					break;
			
				case 9:
					if (func_346(&num, &scaleform, &unk504))
					{
						num.f_249.f_4 = 1;
					
						if (Global_114162.f_18974.f_5 >= 5 && Global_114162.f_18974.f_7 >= 0.8f)
							num.f_249.f_4 = 2;
						else if (Global_114162.f_18974.f_5 >= 3 && Global_114162.f_18974.f_7 >= 0.66f)
							num.f_249.f_4 = 1;
						else
							num.f_249.f_4 = 0;
					
						if (func_345(Global_114162.f_18974.f_5, &iLocal_294))
							func_344(&(unk504.f_666), 24, true);
					
						fLocal_88 = func_343(Global_114162.f_18974.f_5);
						fLocal_89 = func_342(Global_114162.f_18974.f_5);
						fLocal_86 = fLocal_88;
						fLocal_87 = fLocal_89;
						uLocal_150[4] = uLocal_150[4] + 1;
					
						if (!PED::IS_PED_INJURED(uLocal_263[1]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_263[1]);
							ENTITY::SET_ENTITY_COORDS(uLocal_263[1], vector.f_3, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(uLocal_263[1], num.f_243.f_4);
						}
					
						if (func_444(&unk1780))
							func_445(&unk1780);
					
						AUDIO::START_AUDIO_SCENE(func_438(2));
						func_341(uLocal_263[1]);
						num = 10;
						num.f_1 = 2;
					}
					break;
			
				case 10:
					if (MISC::IS_PC_VERSION())
					{
						if (fLocal_132 != GRAPHICS::GET_ASPECT_RATIO(false))
						{
							fLocal_132 = GRAPHICS::GET_ASPECT_RATIO(false);
							CAM::SET_CAM_FOV(caLocal_118, func_428(fLocal_132));
							CAM::SET_CAM_FOV(caLocal_119, func_428(fLocal_132));
						}
					}
				
					if (!bLocal_283)
					{
						STREAMING::REQUEST_ANIM_DICT("mini@dartsoutro");
						bLocal_283 = true;
					}
				
					if (!bLocal_284)
					{
						if (bLocal_283)
						{
							if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsoutro"))
							{
							}
							else
							{
								bLocal_284 = true;
							}
						}
					}
				
					func_259(&num, &vector2, &scaleform, &unk504, &unk1780);
					break;
			
				case 11:
					switch (num3)
					{
						case 0:
							if (func_447(&(num.f_254)) > 0.5f)
							{
								HUD::CLEAR_HELP(true);
								HUD::CLEAR_PRINTS();
								func_258(PLAYER::PLAYER_PED_ID());
								func_356(&scaleform, num.f_449[0], num.f_449[1], num.f_446[0], num.f_446[1]);
							
								for (m = 0; m < 2; m = m + 1)
								{
									for (n = 0; n < 3; n = n + 1)
									{
										func_257(&num.f_5[m /*79*/][n /*26*/]);
									}
								
									func_256(&scaleform, m);
								}
							
								if (num.f_459)
								{
									if (num.f_454)
										func_254(&(unk504.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									else
										func_254(&(unk504.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
								
									num.f_459 = 0;
								}
								else if (num.f_454)
								{
									func_254(&(unk504.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_254(&(unk504.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
							
								aspectRatio = GRAPHICS::GET_ASPECT_RATIO(true);
							
								if (aspectRatio > 2f)
								{
									vector3 = { 1992.2941f, 3047.577f, 46.21517f };
									vector4 = { 0f, 0f, 138.74f };
								}
								else
								{
									vector3 = { 1992.3357f, 3047.9243f, 46.21517f };
									vector4 = { 0f, 0f, 136.74f };
								}
							
								num5 = func_253();
								iLocal_295 = PED::CREATE_SYNCHRONIZED_SCENE(vector3, vector4, 2);
								caLocal_301 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_301, iLocal_295, uLocal_375[num5], "mini@dartsoutro");
								CAM::SET_CAM_ACTIVE(caLocal_301, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							
								if (!PED::IS_PED_INJURED(uLocal_263[0]) && !PED::IS_PED_INJURED(uLocal_263[1]))
								{
									if (num.f_454)
									{
										if (num.f_437[0] + num.f_437[1] == 1)
											flag6 = true;
										else
											flag6 = false;
									
										AUDIO::PLAY_SOUND_FRONTEND(-1, "TENNIS_POINT_WON", "HUD_AWARDS", true);
										func_252(&uLocal_263, flag6);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[0], iLocal_295, "mini@dartsoutro", uLocal_367[num5], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[1], iLocal_295, "mini@dartsoutro", uLocal_371[num5], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_362, uLocal_363[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, false, false, false);
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
										func_251(&uLocal_263);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[1], iLocal_295, "mini@dartsoutro", uLocal_367[num5], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[0], iLocal_295, "mini@dartsoutro", uLocal_371[num5], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_PLAY_ANIM(uLocal_263[1], sLocal_361, uLocal_363[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, false, false, false);
									}
								}
							
								num3 = num3 + 1;
							}
							break;
					
						case 1:
							if (!func_249(&(unk504.f_62), 1))
								num3 = num3 + 1;
							break;
					
						case 2:
							func_445(&(num.f_254));
							bLocal_279 = false;
							AUDIO::STOP_AUDIO_SCENE(func_438(3));
							func_437();
						
							if (CAM::DOES_CAM_EXIST(caLocal_301))
								CAM::DESTROY_CAM(caLocal_301, false);
						
							num3 = 0;
							num = 9;
							break;
					}
					break;
			
				case 12:
					if (func_447(&(num.f_254)) > 0.92f)
						func_44(&num, &unk504, &scaleform, &unk1187, flag2);
					break;
			
				case 13:
					flag5 = func_10(&unk1187, false, 1065353216, false, false, false);
				
					if (!ENTITY::IS_ENTITY_DEAD(func_522(), false))
					{
						TASK::CLEAR_PED_TASKS(uLocal_263[1]);
						num = 15;
					}
				
					switch (num3)
					{
						case 0:
							TASK::CLEAR_PED_TASKS(uLocal_263[0]);
						
							if (!bLocal_281)
								CAM::RENDER_SCRIPT_CAMS(false, bLocal_281, 3000, true, false, 0);
							else
								CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
						
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							HUD::CLEAR_PRINTS();
							TASK::TASK_LOOK_AT_ENTITY(uLocal_263[0], uLocal_263[1], 5000, SLF_SLOW_TURN_RATE | 2048, 3);
							func_459(&unk1786);
							num3 = num3 + 1;
							break;
					
						case 1:
							if (func_7(&unk1786) > 0.1f)
							{
								!flag;
								func_459(&unk1786);
								num3 = num3 + 1;
							}
							break;
					
						case 2:
							if (func_7(&unk1786) > 0.3f)
							{
								if (!PED::IS_PED_INJURED(uLocal_263[1]))
									if (!flag)
										func_4(uLocal_263[0], "GENERIC_THANKS", true, 4);
							
								func_459(&unk1786);
								num3 = num3 + 1;
							}
							break;
					
						case 3:
							if (flag5 || flag)
							{
								num = 15;
								num3 = num3 + 1;
							}
							break;
					}
					break;
			
				case 14:
					func_2(&unk504);
				
					if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
					{
						func_1(uLocal_263[1]);
						iLocal_298 = 2;
						flag = true;
					
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_438(2)))
							AUDIO::STOP_AUDIO_SCENE(func_438(2));
					
						num = 13;
					}
				
					if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
					{
						if (num.f_1 == 2)
							bLocal_98 = false;
					
						func_344(&(unk504.f_666), 8, false);
						num = 10;
					}
					break;
			
				case 15:
					func_493(&num, &unk504, &unk1187);
					break;
			}
		}
	}

	return;
}

void func_1(Ped pedParam0) // Position - 0x1DD1 (7633)
{
	if (!PED::IS_PED_INJURED(pedParam0))
		func_4(pedParam0, "GAME_QUIT_EARLY", false, 6);

	return;
}

void func_2(var uParam0) // Position - 0x1DEF (7663)
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_344(&(uParam0->f_666), 8, true);
			func_344(&(uParam0->f_666), 15, false);
			func_344(&(uParam0->f_666), 16, false);
			func_344(&(uParam0->f_666), 17, false);
		}
	
		HUD::CLEAR_SMALL_PRINTS();
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, false, -1, 0, 0, true, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_344(&(uParam0->f_666), 8, false);
	}

	return;
}

BOOL func_3(var uParam0, int iParam1) // Position - 0x1E74 (7796)
{
	return IS_BIT_SET(*uParam0, iParam1);
}

void func_4(Ped pedParam0, char* sParam1, BOOL bParam2, int iParam3) // Position - 0x1E82 (7810)
{
	if (!ENTITY::IS_ENTITY_DEAD(func_522(), false) || bParam2)
		func_446(pedParam0, sParam1, iParam3);
	else if (!PED::IS_PED_INJURED(pedParam0))
		func_5(pedParam0, sParam1, sLocal_100, iParam3, false);

	return;
}

void func_5(Ped pedParam0, char* sParam1, char* sParam2, int iParam3, BOOL bParam4) // Position - 0x1EC3 (7875)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(pedParam0, sParam1, sParam2, func_6(iParam3), bParam4);
	return;
}

char* func_6(int iParam0) // Position - 0x1EDD (7901)
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

float func_7(int* piParam0) // Position - 0x20D2 (8402)
{
	if (func_444(piParam0))
		if (func_9(piParam0))
			return piParam0->f_2;
		else
			return func_8(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_8(BOOL bParam0) // Position - 0x210E (8462)
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

BOOL func_9(int* piParam0) // Position - 0x2166 (8550)
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_10(var uParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x2173 (8563)
{
	BOOL flag;

	if (MISC::GET_FRAME_COUNT() == uParam0->f_578)
		return uParam0->f_579;

	uParam0->f_578 = MISC::GET_FRAME_COUNT();

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), true))
		{
			uParam0->f_579 = 1;
			return true;
		}
	
		if (TASK::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_579 = 1;
			return true;
		}
	}

	if (!uParam0->f_568)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			uParam0->f_568 = 1;
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_WHEEL);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SPRINT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SPECIAL_ABILITY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SPECIAL_ABILITY_SECONDARY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SPECIAL_ABILITY_PC, true);
	func_41(0);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (PLAYER::GET_ARE_CAMERA_CONTROLS_DISABLED() || CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			HUD::SET_MOUSE_CURSOR_THIS_FRAME();

	Global_44749 = 1;

	if (!uParam0->f_567)
	{
		switch (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case CHAR_FRANKLIN:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, false);
				break;
		
			case CHAR_TREVOR:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, false);
				break;
		
			default:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, false);
				break;
		}
	
		uParam0->f_567 = 1;
	}

	if (uParam0->f_562 == 0)
		uParam0->f_562 = uParam0->f_576 + SYSTEM::FLOOR(15000f * iParam2);

	if (bParam4 && uParam0->f_576 >= uParam0->f_562 - 1500)
		uParam0->f_562 = uParam0->f_576 + 3000;

	if (uParam0->f_564 == 0f)
	{
		uParam0->f_564 = uParam0->f_564 + func_40(30f);
		uParam0->f_564 = uParam0->f_564 + ((float)uParam0->f_56 * func_40(25f));
	
		if (uParam0->f_56 > 0)
			uParam0->f_564 = uParam0->f_564 + func_40(25f * 0.5f);
	
		if (uParam0->f_549)
			uParam0->f_564 = uParam0->f_564 + (func_40(30f) - func_40(2f));
	}

	flag = true;

	while (flag)
	{
		func_39(1);
		uParam0->f_576 = uParam0->f_576 + SYSTEM::ROUND(0f + (1000f * SYSTEM::TIMESTEP()));
		func_15(uParam0, iParam2, bParam3);
	
		if ((float)uParam0->f_576 > (float)uParam0->f_562 + 666 - (15000f * iParam2))
			if (uParam0->f_30 < 1f)
				uParam0->f_30 = uParam0->f_30 + 0f + ((1f / 0.225f) * SYSTEM::TIMESTEP());
	
		uParam0->f_30 = func_14(uParam0->f_30, 0f, 1f);
	
		if (uParam0->f_576 > uParam0->f_562 - 333)
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_569)
				{
					uParam0->f_569 = 0;
					uParam0->f_570 = 0;
					uParam0->f_577 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				uParam0->f_547 = uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP()));
			}
		}
	
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
	
		if (uParam0->f_547 <= 0.7f && !uParam0->f_545 && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_546 = uParam0->f_576;
			uParam0->f_545 = 1;
		}
	
		if (uParam0->f_576 > uParam0->f_562 - 333)
			if (!uParam0->f_565)
				if (uParam0->f_548 < 1f)
					uParam0->f_548 = uParam0->f_548 + 0f + ((1f / 0.3f) * SYSTEM::TIMESTEP());
	
		uParam0->f_548 = func_14(uParam0->f_548, 0f, 1f);
	
		if (uParam0->f_566)
			if (PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
					if (!uParam0->f_571)
						func_11(uParam0, !uParam0->f_569 && uParam0->f_56 > 0);
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_EXPAND) && uParam0->f_562 > uParam0->f_576 + 333)
		{
			if (!uParam0->f_570 && uParam0->f_56 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4) && (float)uParam0->f_576 > (float)uParam0->f_562 + 1165 - (15000f * iParam2))
			{
				if (!uParam0->f_569)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
				
					if (uParam0->f_576 > uParam0->f_562 - 5000)
						uParam0->f_562 = uParam0->f_576 + 5000;
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_569 = 0;
					uParam0->f_577 = 0.75f;
				}
			
				func_11(uParam0, !uParam0->f_569 && uParam0->f_56 > 0);
			}
		}
	
		if (uParam0->f_569 || uParam0->f_570 && uParam0->f_56 != 0)
		{
			if ((float)uParam0->f_576 > (float)uParam0->f_562 + 1165 - (15000f * iParam2))
			{
				if (uParam0->f_570 && !uParam0->f_569)
				{
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				uParam0->f_563 = func_14(uParam0->f_563 + ((1f / 0.3f) * uParam0->f_577 * SYSTEM::TIMESTEP()), 0f, 1f);
				uParam0->f_577 = func_14(uParam0->f_577 + 0.07f, 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_563 = func_14(uParam0->f_563 - ((1f / 0.3f) * uParam0->f_577 * 0.01f * SYSTEM::TIMESTEP()), 0f, 1f);
			uParam0->f_577 = func_14(uParam0->f_577 + 0.07f, 0.75f, 1.15f);
		}
	
		if (uParam0->f_576 > uParam0->f_562)
			if (uParam0->f_565)
				if (!uParam0->f_571)
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_ACCEPT))
						uParam0->f_565 = 0;
			else if (uParam0->f_576 - uParam0->f_546 > 1000 && uParam0->f_545)
				flag = false;
	
		uParam0->f_579 = !flag;
	
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!flag)
				func_39(0);
		
			return !flag;
		}
	}

	func_39(0);
	return true;
}

void func_11(var uParam0, BOOL bParam1) // Position - 0x27CE (10190)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_ACCEPT, true));
	func_12("ES_HELP" /*Continue*/);

	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(215);
	}

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_EXPAND, true));
		func_12("ES_XPAND" /*Expand*/);
	
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(216);
		}
	
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_12(char* sParam0) // Position - 0x2892 (10386)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_13(const char* sParam0) // Position - 0x28A4 (10404)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

float func_14(float fParam0, float fParam1, float fParam2) // Position - 0x28B2 (10418)
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_15(var uParam0, int iParam1, BOOL bParam2) // Position - 0x28D9 (10457)
{
	int alpha;
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float width;
	float num6;
	float num7;
	float start;
	float end;
	float num8;
	float num9;
	int r;
	int g;
	int b;
	int a;
	int i;
	float num10;
	var unk;
	float start2;
	float end2;
	float end3;
	var textureDict;
	var textureName;
	int r2;
	int g2;
	int b2;
	int a2;
	float num11;
	float width2;
	float height;
	float screenX;
	float screenY;

	alpha = SYSTEM::ROUND(uParam0->f_547 * 255f);
	num = func_38() * 0.25f;

	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
			
				if (uParam0->f_560 == 4)
					func_37(&(uParam0->f_13));
				else
					func_12(&(uParam0->f_13));
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(150);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			
				if (uParam0->f_560 == 4)
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_56 - 1);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_56);
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
			
				if (uParam0->f_560 == 4 || uParam0->f_560 == 3)
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
			
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
		
			if (uParam0->f_56 > 0 && !uParam0->f_3 && uParam0->f_576 > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
	
		func_36();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}

	num2 = uParam0->f_564 * uParam0->f_563 * (1f - uParam0->f_548);
	num3 = 0f;

	if (uParam0->f_571)
	{
		num3 = (0.13888888f + func_40(2f * 2f)) * uParam0->f_572 * (1f - uParam0->f_548);
		num2 = num2 + (3f * num3);
	}

	if (uParam0->f_548 != 0f)
	{
		num4 = 0f;
	
		if (num2 < num4)
			num2 = num4;
	}
	else
	{
		num5 = 0f;
	
		if (uParam0->f_30 >= 0.975f)
			if (num2 < num5)
				num2 = num5;
	}

	num = 0.3f * func_38();

	if (uParam0->f_12)
		num = 0.5f;

	width = *uParam0 * 2f;

	if (uParam0->f_560 != 4)
	{
		num6 = func_35(&(uParam0->f_13));
	
		if (width < num6)
			width = num6 + (3f * 0.006f);
	
		if (GRAPHICS::GET_ASPECT_RATIO(false) < 1.4f)
			width = width * 1.3f;
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_554)))
			num6 = func_34(&(uParam0->f_550), &(uParam0->f_554));
		else
			num6 = func_35(&(uParam0->f_550));
	
		num7 = (0.119f + 0.05f) / func_38() / 2.5f;
	
		if (uParam0->f_560 == 1 || uParam0->f_560 == 0 && uParam0->f_561 != 0)
			if (width < num6 + (2.6f * num7))
				width = num6 + (2.6f * num7);
		else if (uParam0->f_560 == 5)
			if (width < num6 + (2.6f * num7))
				width = num6 + (2.6f * num7);
		else if (width < num6 + (1.9f * num7))
			width = num6 + (2f * num7);
	}

	start = (0.499f - (width / 2f)) + 0.006f;
	end = (0.499f + (width / 2f)) - 0.006f;
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_ACCEPT);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_EXPAND);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);

	if (uParam0->f_566 || uParam0->f_571)
	{
		if ((float)uParam0->f_562 - (14000f * iParam1) < (float)uParam0->f_576 || uParam0->f_571 && uParam0->f_563 > 0.95f && uParam0->f_562 - 10000 < uParam0->f_576)
		{
			if (uParam0->f_571)
			{
				if (uParam0->f_574 < 0)
				{
					uParam0->f_574 = uParam0->f_574 * -1;
					uParam0->f_574 = uParam0->f_576 + uParam0->f_574;
				}
			
				if (uParam0->f_574 > 0)
				{
					if (uParam0->f_574 - uParam0->f_576 > 0)
					{
						func_31(uParam0->f_574 - uParam0->f_576, "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_574 = 0;
						uParam0->f_573 = 1;
						uParam0->f_571 = 0;
						uParam0->f_565 = 0;
						uParam0->f_566 = 0;
						uParam0->f_562 = uParam0->f_576 + 500;
						uParam0->f_574 = 0;
					}
				}
			
				if (uParam0->f_572 < 1f)
				{
					uParam0->f_572 = uParam0->f_572 + 0f + ((1f / 0.166f) * SYSTEM::TIMESTEP());
				
					if (uParam0->f_572 > 1f)
						uParam0->f_572 = 1f;
				}
			}
		
			if (CAM::IS_SCREEN_FADED_OUT())
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
		
			if (uParam0->f_4 != 0 && uParam0->f_548 < 0.1f && uParam0->f_576 <= uParam0->f_562)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, alpha, 0);
			}
		
			if (uParam0->f_571)
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_ALTERNATE, true);
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_UP, true);
			
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 3;
					uParam0->f_574 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN, true);
			
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 4;
					uParam0->f_574 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL, true);
			
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 2;
					uParam0->f_574 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
			else if (uParam0->f_566)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_ALTERNATE, true);
			
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_ACCEPT) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_566 = 0;
					uParam0->f_565 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
		}
	}

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
	HUD::SET_TEXT_COLOUR(r, g, b, alpha);
	HUD::SET_TEXT_WRAP(start, end);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	num = num - func_40(6f);
	num = num + (func_40(30f) - func_40(2f * 2f));
	num8 = num2 - func_40(2f * 14f);

	if (num8 >= 0f)
	{
		num9 = func_14(num8 / (0.6f * func_40(25f)), 0f, 1f);
		func_36();
		GRAPHICS::DRAW_RECT(0.5f, num - func_40(2f - 0.5f) - 0.0013888889f, width, func_30(1f), r, g, b, SYSTEM::ROUND(num9 * (float)a), false);
	}
	else
	{
		return;
	}

	num = num + func_40(2f * 0.3f);

	if (uParam0->f_56 > 0)
		num = num + func_40(25f * 0.2f);

	i = 0;

	for (i = 0; i < uParam0->f_56; i = i + 1)
	{
		num8 = num2 - num - (0.3f * func_38());
	
		if (num8 >= 0f)
		{
			num9 = func_14(num8 / (0.8f * func_40(25f)), 0f, 1f);
			func_27(uParam0, i, num + func_40(2f), start, end, SYSTEM::ROUND((float)alpha * num9));
		}
		else
		{
			return;
		}
	
		num = num + func_40(25f);
	
		if (uParam0->f_560 == 4)
		{
			if (i == uParam0->f_580 - 1)
			{
				num = num + func_40(25f * 0.2f);
				num8 = num2 - num - (0.3f * func_38());
			
				if (num8 >= 0f)
				{
					num = num + func_40(2f);
					num9 = func_14(num8 / (0.6f * func_40(25f)), 0f, 1f);
					func_36();
					GRAPHICS::DRAW_RECT(0.5f, num + func_40(2f * 0.5f), width, func_30(1f), r, g, b, SYSTEM::ROUND(num9 * (float)a), false);
					num = num + func_40(2f * 0.3f);
				
					if (uParam0->f_56 > 0)
						num = num + func_40(25f * 0.2f);
				}
			}
		}
	}

	if (uParam0->f_560 == 4)
		return;

	if (uParam0->f_56 > 0)
	{
		num = num + func_40(25f * 0.2f);
		num8 = num2 - num - (0.3f * func_38());
	
		if (num8 >= 0f)
		{
			num = num + func_40(2f);
			num9 = func_14(num8 / (0.6f * func_40(25f)), 0f, 1f);
			func_36();
			GRAPHICS::DRAW_RECT(0.5f, num + func_40(2f * 0.5f), width, func_30(1f), r, g, b, SYSTEM::ROUND(num9 * (float)a), false);
		}
	}

	if (uParam0->f_549)
	{
		num = num + func_40(25f * 0.2f);
		num8 = num2 - num - (0.3f * func_38());
	
		if (num8 >= 0f)
		{
			num9 = func_14(num8 / (0.8f * func_40(25f)), 0f, 1f);
			HUD::SET_TEXT_COLOUR(r, g, b, SYSTEM::ROUND(num9 * (float)alpha));
			func_19(7, false, true, &num10, &unk, false);
			start2 = start;
			end2 = end;
		
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
			{
				start2 = start + (0.119f / func_38() / 2.5f);
				end2 = end - (0.119f / func_38() / 2.5f);
			
				if (uParam0->f_560 == 1)
				{
					start2 = start + ((0.119f + 0.05f) / func_38() / 2.5f);
					end2 = end - ((0.119f + 0.05f) / func_38() / 2.5f);
				}
			}
		
			if (uParam0->f_561 == 0)
			{
				start2 = start2 + (((num10 * 0.28f) + 0.006f) / 2f);
				end2 = end2 + (((num10 * 0.28f) + 0.006f) / 2f);
			}
		
			if (uParam0->f_560 != 3)
			{
				HUD::SET_TEXT_WRAP(start2, end2);
				HUD::SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				start2 = 0.5f;
				HUD::SET_TEXT_JUSTIFICATION(0);
			}
		
			HUD::SET_TEXT_SCALE(1f, 0.4f);
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_554)))
				func_18(&(uParam0->f_550), start2, num + func_40(2f * 2f), false, false, 0);
			else
				func_17(&(uParam0->f_550), &(uParam0->f_554), start2, num + func_40(2f * 2f), false, 0);
		
			HUD::SET_TEXT_WRAP(start2, end2);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(false);
			func_36();
			end3 = end2;
			TEXT_LABEL_ASSIGN_STRING(&textureDict, "MPHud", 16);
			TEXT_LABEL_ASSIGN_STRING(&textureName, "MissionPassedMedal", 32);
			end3 = end3 - ((num10 * 0.28f) + 0.006f);
			HUD::SET_TEXT_WRAP(start2, end3);
			HUD::SET_TEXT_COLOUR(r, g, b, SYSTEM::ROUND(num9 * (float)alpha));
		
			switch (uParam0->f_560)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE" /*~1~%*/);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_558);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(start2, num + func_40(2f * 2f), 0);
					break;
			
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM" /*~1~/~1~*/);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_558);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_559);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(start2, num + func_40(2f * 2f), 0);
					break;
			
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO" /*~1~RP*/);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_558);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(start2, num + func_40(2f * 2f), 0);
					break;
			
				case 5:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA" /*$~a~*/);
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_558, true);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(start2, num + func_40(2f * 2f), 0);
					break;
			}
		
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&textureDict, false);
		
			if (uParam0->f_561 != 0 && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&textureDict))
			{
				r2 = 255;
				g2 = 255;
				b2 = 255;
				a2 = alpha;
			
				switch (uParam0->f_561)
				{
					case 1:
						HUD::GET_HUD_COLOUR(HUD_COLOUR_BRONZE, &r2, &g2, &b2, &a2);
						break;
				
					case 3:
						HUD::GET_HUD_COLOUR(HUD_COLOUR_GOLD, &r2, &g2, &b2, &a2);
						break;
				
					case 2:
						HUD::GET_HUD_COLOUR(HUD_COLOUR_SILVER, &r2, &g2, &b2, &a2);
						break;
				}
			
				num11 = 0.0013888889f * 5f;
				width2 = 0.00078125f * 16f * 2f;
				height = 0.0013888889f * 16f * 2f;
				screenX = (end2 + func_16(4f)) - 0.006f;
				screenY = num + func_40(10f) + num11;
			
				if (uParam0->f_560 == -1)
					screenX = screenX - (0.006f * 6f);
			
				width2 = width2 * 0.65f;
				height = height * 0.65f;
				GRAPHICS::DRAW_SPRITE(&textureDict, &textureName, screenX, screenY, width2, height, 0f, r2, g2, b2, SYSTEM::ROUND(num9 * (float)alpha), false, 0);
			}
		
			num = num + (func_40(30f) - 2f);
		}
	}

	return;
}

float func_16(float fParam0) // Position - 0x35C9 (13769)
{
	return fParam0 * 0.00078125f;
}

void func_17(const char* sParam0, const char* sParam1, float fParam2, float fParam3, BOOL bParam4, int iParam5) // Position - 0x35D9 (13785)
{
	HUD::SET_TEXT_CENTRE(bParam4);
	HUD::SET_TEXT_FONT(iParam5);
	func_36();
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
	return;
}

void func_18(const char* sParam0, float fParam1, float fParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x3606 (13830)
{
	HUD::SET_TEXT_CENTRE(bParam3);
	HUD::SET_TEXT_FONT(iParam5);
	func_36();

	if (bParam4)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}

	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
	return;
}

BOOL func_19(int iParam0, BOOL bParam1, BOOL bParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0x3643 (13891)
{
	var textureDict;
	var textureName;
	int num;
	int num2;
	float num3;
	float textureResolution;
	float num4;

	TEXT_LABEL_ASSIGN_STRING(&textureDict, func_26(iParam0), 64);
	TEXT_LABEL_ASSIGN_STRING(&textureName, func_23(iParam0, bParam1), 64);

	if (MISC::GET_HASH_KEY(&textureName) != 0)
	{
		num3 = 1f;
		func_21(bParam5, &num, &num2, &num3);
		textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION(&textureDict, &textureName) };
		num4 = func_20(iParam0) / num3;
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
	
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&Global_23987.f_7680[29 /*16*/]) == joaat("CREW_LOGO"))
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
			if (*uParam3 > Global_23986)
			{
				*uParam4 = *uParam4 * (Global_23986 / *uParam3);
				*uParam3 = Global_23986;
			}
		}
	
		return true;
	}

	return false;
}

float func_20(int iParam0) // Position - 0x376F (14191)
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

void func_21(BOOL bParam0, int* piParam1, int* piParam2, var uParam3) // Position - 0x3843 (14403)
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

	if (func_22(*piParam1, *piParam2))
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

BOOL func_22(int iParam0, int iParam1) // Position - 0x38CB (14539)
{
	return SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1) > 3.5f;
}

char* func_23(int iParam0, BOOL bParam1) // Position - 0x38E6 (14566)
{
	var unk;
	var txdName;
	var netHandle;

	unk = 2;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23987.f_7680[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_23987.f_7680[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
		
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName))
				return func_24(&txdName);
		}
		else
		{
			return func_24(&Global_23987.f_7680[iParam0 /*16*/]);
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

char* func_24(char* sParam0) // Position - 0x3E10 (15888)
{
	return sParam0;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x3E1A (15898)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

char* func_26(int iParam0) // Position - 0x3E31 (15921)
{
	var txdName;
	var netHandle;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23987.f_6623[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_23987.f_6623[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName);
			return func_24(&txdName);
		}
		else
		{
			return func_24(&Global_23987.f_6623[iParam0 /*16*/]);
		}
	}

	if (iParam0 == 54)
		return "MPShopSale";

	return "CommonMenu";
}

void func_27(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5) // Position - 0x3EA6 (16038)
{
	int r;
	int g;
	int b;
	var a;
	float num;
	float width;
	float height;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
	HUD::SET_TEXT_COLOUR(r, g, b, iParam5);
	HUD::SET_TEXT_WRAP(fParam3, fParam4);
	HUD::SET_TEXT_JUSTIFICATION(1);
	HUD::SET_TEXT_SCALE(1f, func_29(14f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_FONT(0);
	func_36();

	if (uParam0->f_531[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uParam0->f_71[iParam1 /*16*/]);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&uParam0->f_71[iParam1 /*16*/]);
	
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
	}

	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	num = fParam4;

	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
	
		case 1:
			func_19(7, false, true, &width, &height, false);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_23(7, false), fParam4 - 0.006f, fParam2 + func_40(2f) + (0.25f * height), width, height, 0f, 255, 255, 255, iParam5, false, 0);
			num = num - ((width * 0.38f) + 0.006f);
			break;
	
		case 2:
			func_19(5, false, true, &width, &height, false);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_23(5, false), fParam4 - 0.006f, fParam2 + func_40(2f) + (0.25f * height), width, height, 0f, 255, 255, 255, iParam5, false, 0);
			num = num - ((width * 0.38f) + 0.006f);
			break;
	
		case 3:
			func_19(6, false, true, &width, &height, false);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_23(6, false), fParam4 - 0.006f, fParam2 + func_40(2f) + (0.25f * height), width, height, 0f, 255, 255, 255, iParam5, false, 0);
			num = num - ((width * 0.38f) + 0.006f);
			break;
	}

	if (uParam0->f_57[iParam1] == 0)
		return;

	if (uParam0->f_57[iParam1] == 15)
		HUD::SET_TEXT_JUSTIFICATION(1);
	else
		HUD::SET_TEXT_JUSTIFICATION(2);

	HUD::SET_TEXT_SCALE(1f, func_29(14f));

	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
		HUD::SET_TEXT_WRAP(fParam3, num - (0.00078125f * 3f));
	else
		HUD::SET_TEXT_WRAP(fParam3, num + (0.00078125f * 2f));

	HUD::SET_TEXT_COLOUR(r, g, b, iParam5);
	func_28(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &uParam0->f_280[iParam1 /*16*/], uParam0->f_57[iParam1]);
	return;
}

void func_28(int iParam0, int iParam1, float fParam2, float fParam3, const char* sParam4, int iParam5) // Position - 0x4138 (16696)
{
	eHudColour hudColor;
	float screenWidthOfDisplayText;
	float width;
	float height;
	int red;
	int green;
	int blue;

	hudColor = HUD_COLOUR_WHITE;
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_FONT(0);
	func_36();
	screenWidthOfDisplayText = 0f;
	width = 8f * 0.00078125f;
	height = 16f * 0.0013888889f;
	red = 93;
	green = 182;
	blue = 229;

	if (iParam5 == 4)
	{
		red = 194;
		green = 80;
		blue = 80;
	}

	switch (iParam5)
	{
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_29(18f));
			HUD::SET_TEXT_FONT(4);
		
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("ESMINDOLLA" /*-$~a~*/);
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(-1 * iParam0, true);
				screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(false);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("ESDOLLA" /*$~a~*/);
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, true);
				screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(false);
			}
		
			screenWidthOfDisplayText = screenWidthOfDisplayText - (screenWidthOfDisplayText % 0.00078125f);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", fParam2 - screenWidthOfDisplayText, fParam3 + (height * 0.6f) + (0.0013888889f * 2f), width, height, 0f, red, green, blue, 255, false, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", fParam2 - (screenWidthOfDisplayText * 0.5f) - (0.00078125f * 2f), fParam3 + (height * 0.6f) + (0.0013888889f * 2f), screenWidthOfDisplayText - (width * 0.5f), height, 0f, red, green, blue, 255, false, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", fParam2 - (0.00078125f * 4f), fParam3 + (height * 0.6f) + (0.0013888889f * 2f), width, height, 0f, red, green, blue, 255, false, 0);
			HUD::SET_TEXT_SCALE(1f, func_29(14f));
			break;
	}

	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(hudColor);

	switch (iParam5)
	{
		case 11:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE" /*~1~%*/);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
	
		case 1:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM" /*~1~*/);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
	
		case 2:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM" /*~1~/~1~*/);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_29(18f));
			[[fallthrough]];
	
		case 3:
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA" /*-$~a~*/);
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(-1 * iParam0, true);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA" /*$~a~*/);
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, true);
			}
			break;
	
		case 6:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
	
		case 7:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
	
		case 8:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
	
		case 9:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
	
		case 10:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
	
		case 18:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
	
		case 12:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
	
		case 13:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	
		case 15:
		case 14:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	
		case 16:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	
		case 20:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
	}

	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2 - (0.00078125f * 4f), fParam3, 0);
			HUD::SET_TEXT_SCALE(1f, func_29(14f));
		}
		else
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}

	return;
}

float func_29(float fParam0) // Position - 0x44C3 (17603)
{
	return fParam0 * 0.025f;
}

float func_30(float fParam0) // Position - 0x44D3 (17619)
{
	return fParam0 * 0.0009259259f;
}

void func_31(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x44E3 (17635)
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_33(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1675263.f_1 = 1;
		func_32(7, num);
		Global_1675263.f_4714[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1675263.f_4714.f_11[num /*16*/], sParam1, 64);
		Global_1675263.f_4714.f_172[num] = iParam2;
		Global_1675263.f_4714.f_216[num] = iParam3;
		Global_1675263.f_4714.f_183[num] = iParam4;
		Global_1675263.f_4714.f_194[num] = iParam5;
		Global_1675263.f_4714.f_249[num] = iParam6;
		Global_1675263.f_4714.f_260[num] = iParam7;
		Global_1675263.f_4714.f_205[num] = iParam8;
		Global_1675263.f_4714.f_314[num] = iParam9;
		Global_1675263.f_4714.f_325[num] = iParam10;
		Global_1675263.f_4714.f_357[num] = iParam11;
		Global_1675263.f_4714.f_238[num] = iParam12;
		Global_1675263.f_4714.f_271[num] = iParam13;
		Global_1675263.f_4714.f_368[num] = iParam14;
		Global_1675263.f_4714.f_379[num] = iParam15;
		Global_1675263.f_4714.f_390[num] = iParam16;
		Global_1675263.f_4714.f_227[num] = iParam17;
	}

	return;
}

void func_32(int iParam0, int iParam1) // Position - 0x4640 (17984)
{
	MISC::SET_BIT(&Global_1675263.f_7064[iParam0], iParam1);
	return;
}

BOOL func_33(int iParam0, int iParam1) // Position - 0x4659 (18009)
{
	return IS_BIT_SET(Global_1675263.f_7064[iParam0], iParam1);
}

float func_34(const char* sParam0, const char* sParam1) // Position - 0x466F (18031)
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true) / 2f;
}

float func_35(const char* sParam0) // Position - 0x468A (18058)
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true) / 2f;
}

void func_36() // Position - 0x469F (18079)
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);

	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);

	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	return;
}

void func_37(char* sParam0) // Position - 0x46C7 (18119)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

float func_38() // Position - 0x46D5 (18133)
{
	float num;

	num = 1f;
	MISC::IS_PC_VERSION();
	return num;
}

void func_39(int iParam0) // Position - 0x46E9 (18153)
{
	Global_79825 = iParam0;
	Global_79826 = iParam0;
	return;
}

float func_40(float fParam0) // Position - 0x46FD (18173)
{
	return fParam0 * 0.0013888889f;
}

void func_41(int iParam0) // Position - 0x470D (18189)
{
	if (func_43())
		return;

	if (!(Global_21083.f_1 == 1))
	{
		if (func_42(0))
			func_451(iParam0);
	
		MISC::SET_BIT(&Global_8920, 2);
	}

	return;
}

BOOL func_42(int iParam0) // Position - 0x4740 (18240)
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

BOOL func_43() // Position - 0x4797 (18327)
{
	return IS_BIT_SET(Global_1958238, 19);
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x47A6 (18342)
{
	int num;
	BOOL flag;
	BOOL flag2;
	var entityCoords;
	float aspectRatio;
	Vector3 vector;
	Vector3 vector2;
	int num2;
	int i;
	int j;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE, true);

	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (!bLocal_286)
		{
			if (func_226(uParam1, false, &bLocal_287))
			{
				func_344(&(uParam1->f_666), 9, false);
				bLocal_286 = true;
			}
		}
	}

	if (bLocal_268)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	
		flag = true;
	
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !PLAYER::IS_PLAYER_ONLINE())
			{
				uParam1->f_646 = func_217(&(uParam1->f_647), false);
				flag = false;
			
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_344(&(uParam1->f_666), 9, false);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_134(&(uParam1->f_72), &(uParam1->f_645));
			}
		
			if (flag)
			{
				func_130(&(uParam1->f_509), 1128792064, 1, false, true, 1065353216);
			
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
				{
					uParam1->f_680 = 0;
					func_344(&(uParam1->f_666), 9, false);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_ACCEPT))
				{
					num = 2;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_EXPAND))
				{
					num = 1;
				}
			}
		
			if (func_129(&(uParam1->f_72)))
			{
				if (!bLocal_288)
				{
					bLocal_288 = true;
					func_128(&(uParam1->f_509), false, false, true, true);
					func_127(&(uParam1->f_509), "DARTS_CONT" /*Continue*/, 2, 215, 1, 1, 0);
					func_127(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_127(&(uParam1->f_509), "IB_BACK" /*Back*/, 2, 202, 1, 1, 0);
					func_127(&(uParam1->f_509), "SCLB_PROFILE" /*View Profile*/, 2, 217, 1, 1, 0);
					func_124(&(uParam1->f_509), true);
				}
			}
		}
		else
		{
			num = func_117(uParam1, false, false, bLocal_286);
			func_10(uParam3, false, 1065353216, false, false, false);
		}
	
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) >= 0.995f || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295))
		{
			bLocal_281 = true;
		
			if (CAM::DOES_CAM_EXIST(caLocal_301))
			{
				CAM::DESTROY_CAM(caLocal_301, false);
			
				if (!PED::IS_PED_INJURED(uLocal_263[0]) && !PED::IS_PED_INJURED(uLocal_263[1]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_263[0]);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_263[1]);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_263[0], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_263[1], false, false);
				}
			}
		
			func_116();
		}
	
		if (func_447(&(uParam0->f_254)) > 2f)
		{
			if (!bLocal_279)
			{
				if (uParam0->f_454)
				{
					if (uParam0->f_437[0] + uParam0->f_437[1] == 1)
						flag2 = true;
					else
						flag2 = false;
				
					func_252(&uLocal_263, flag2);
				}
				else
				{
					func_251(&uLocal_263);
				}
			
				bLocal_279 = true;
			}
		}
	
		if (num == 1)
		{
			HUD::CLEAR_HELP(true);
			AUDIO::STOP_AUDIO_SCENE(func_438(3));
		
			if (!PED::IS_PED_INJURED(uLocal_263[0]) && !PED::IS_PED_INJURED(uLocal_263[1]))
			{
				TASK::TASK_CLEAR_LOOK_AT(uLocal_263[0]);
				TASK::TASK_CLEAR_LOOK_AT(uLocal_263[1]);
			}
		
			func_115(uParam3);
		
			if (bParam4)
				func_356(uParam2, 0, 0, 0, 0);
		
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_28 = 1;
			func_445(&(uParam0->f_254));
			*uParam0 = 9;
			bLocal_279 = false;
			bLocal_277 = false;
			bLocal_281 = false;
			func_112();
			bLocal_286 = false;
			bLocal_257 = false;
			uParam1->f_680 = 0;
			bLocal_287 = false;
			bLocal_288 = false;
			func_104(&(uParam1->f_72), 0);
			func_483();
		}
		else if (num == 2)
		{
			func_103(uParam3);
			AUDIO::STOP_AUDIO_SCENE(func_438(3));
		
			if (uParam0->f_446[0] * 10 > 0)
				func_56(_GET_CURRENT_PLAYER_CHARACTER(), 21, uParam0->f_446[0] * 10, false, false);
		
			HUD::CLEAR_PRINTS();
			*uParam0 = 13;
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SCRIPT_PAD_LEFT) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SCRIPT_PAD_RIGHT) && uParam0->f_248 == 1 && flag)
		{
			uParam0->f_457 = 0;
		
			if (bLocal_267)
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_290 /*26*/], true) };
				func_55(entityCoords, false, bLocal_267);
				bLocal_267 = false;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
			{
				iLocal_290 = iLocal_290 + 1;
			
				if (iLocal_290 >= uParam0->f_436)
					iLocal_290 = 0;
			
				entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_290 /*26*/], true) };
				func_53(entityCoords);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
			{
				iLocal_290 = iLocal_290 - 1;
			
				if (iLocal_290 < 0)
					iLocal_290 = uParam0->f_436 - 1;
			
				entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_290 /*26*/], true) };
				func_53(entityCoords);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_FRONTEND_LEADERBOARD) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_FRONTEND_LEADERBOARD) && flag && bLocal_286 || !PLAYER::IS_PLAYER_ONLINE())
		{
			uParam1->f_680 = 1;
			func_128(&(uParam1->f_509), false, false, true, true);
			func_127(&(uParam1->f_509), "DARTS_CONT" /*Continue*/, 2, 215, 1, 1, 0);
			func_127(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_127(&(uParam1->f_509), "IB_BACK" /*Back*/, 2, 202, 1, 1, 0);
		
			if (bLocal_288)
				func_127(&(uParam1->f_509), "SCLB_PROFILE" /*View Profile*/, 2, 217, 1, 1, 0);
		
			func_124(&(uParam1->f_509), true);
		}
	}
	else if (!uParam0->f_457)
	{
		HUD::CLEAR_HELP(true);
		HUD::CLEAR_PRINTS();
		func_49(uParam3, uParam0->f_454, uParam0->f_429[iLocal_28], uParam0->f_432[iLocal_28], uLocal_150[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		aspectRatio = GRAPHICS::GET_ASPECT_RATIO(true);
	
		if (aspectRatio > 2f)
		{
			vector = { 1992.2941f, 3047.577f, 46.21517f };
			vector2 = { 0f, 0f, 138.74f };
		}
		else
		{
			vector = { 1992.3357f, 3047.9243f, 46.21517f };
			vector2 = { 0f, 0f, 136.74f };
		}
	
		num2 = func_253();
		iLocal_295 = PED::CREATE_SYNCHRONIZED_SCENE(vector, vector2, 2);
		caLocal_301 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_301, iLocal_295, uLocal_375[num2], "mini@dartsoutro");
		CAM::SET_CAM_ACTIVE(caLocal_301, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	
		if (!PED::IS_PED_INJURED(uLocal_263[0]) && !PED::IS_PED_INJURED(uLocal_263[1]))
		{
			if (uParam0->f_454)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[0], iLocal_295, "mini@dartsoutro", uLocal_367[num2], 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[1], iLocal_295, "mini@dartsoutro", uLocal_371[num2], 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_362, uLocal_363[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, false, false, false);
			}
			else
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[1], iLocal_295, "mini@dartsoutro", uLocal_367[num2], 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[0], iLocal_295, "mini@dartsoutro", uLocal_371[num2], 1000f, -1.5f, 0, 0, 1148846080, 0);
				TASK::TASK_PLAY_ANIM(uLocal_263[1], sLocal_361, uLocal_363[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, false, false, false);
			}
		}
	
		bLocal_281 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = MISC::GET_GAME_TIMER();
	
		for (i = 0; i < 2; i = i + 1)
		{
			for (j = 0; j < 3; j = j + 1)
			{
				func_257(&uParam0->f_5[i /*79*/][j /*26*/]);
			}
		
			func_256(uParam2, i);
		}
	}
	else if (MISC::GET_GAME_TIMER() - uParam1->f_671 > 400 && func_45(uParam3, false, 0))
	{
		if (!uParam0->f_454)
			AUDIO::PLAY_SOUND_FRONTEND(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", true);
	
		bLocal_268 = true;
	}

	return;
}

BOOL func_45(var uParam0, BOOL bParam1, int iParam2) // Position - 0x4F6A (20330)
{
	uParam0->f_12 = iParam2;
	func_48(uParam0);
	func_47(uParam0);

	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0)
		uParam0->f_570 = 1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);

	if (uParam0->f_1 == 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
		uParam0->f_1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}

	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");

	if (bParam1)
	{
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu") || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard") || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
	
		if (uParam0->f_566 || uParam0->f_571)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu") || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard") || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
			return false;
	
		if (uParam0->f_566)
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				return false;
	}

	if (uParam0->f_566)
		if (uParam0->f_571)
			func_46(uParam0);
		else if (uParam0->f_56 != 0)
			func_11(uParam0, true);
		else
			func_11(uParam0, false);

	Global_79826 = 1;
	return true;
}

void func_46(var uParam0) // Position - 0x510A (20746)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_UP, true));
	func_12("ES_HELP_TU" /*Like*/);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN, true));
	func_12("ES_HELP_TD" /*Dislike*/);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_13(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL, true));
	func_12("ES_HELP_AB" /*Don't Vote*/);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_47(var uParam0) // Position - 0x51CF (20943)
{
	float screenWidthOfDisplayText;
	int num;
	int num2;
	int i;

	screenWidthOfDisplayText = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, func_29(16f));

	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(uParam0->f_13));
			screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
		}
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("STRING");
		num = 0;
		num2 = 0;
		i = 0;
	
		for (i = 0; i < uParam0->f_31; i = i + 1)
		{
			switch (uParam0->f_32[i])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[num]);
					num = num + 1;
					break;
			
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&uParam0->f_36[num2 /*16*/]);
					num2 = num2 + 1;
					break;
			
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uParam0->f_36[num2 /*16*/]);
					num2 = num2 + 1;
					break;
			}
		}
	
		screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
	}

	if (screenWidthOfDisplayText > (0.1125f * 2f) - (0.006f * 2f))
		*uParam0 = (screenWidthOfDisplayText / 2f) + (0.006f * 2f);

	return;
}

void func_48(var uParam0) // Position - 0x52D7 (21207)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
	return;
}

void func_49(var uParam0, BOOL bParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, int iParam7, var uParam8, int iParam9, var uParam10, BOOL bParam11) // Position - 0x5356 (21334)
{
	uParam0->f_565 = 1;

	if (bParam1)
		func_52(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	else
		func_52(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);

	func_51(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_51(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_51(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);

	if (bParam11)
	{
		func_51(uParam0, 2, "DARTS_WIN", "", iParam5, iParam5 + uParam6, 0, 0);
		func_51(uParam0, 2, "DARTS_SWIN", "", iParam7, iParam7 + uParam8, 0, 0);
	}

	func_51(uParam0, 2, "DARTS_GWIN", "", iParam9, iParam9 + uParam10, 0, 0);
	func_50(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_39(1);
	return;
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x5428 (21544)
{
	uParam0->f_549 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_550), sParam2, 16);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_554), "", 16);
	uParam0->f_558 = iParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
	return;
}

void func_51(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x546E (21614)
{
	int num;

	if (uParam0->f_56 == 13)
		return;

	num = uParam0->f_56;
	uParam0->f_57[num] = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&uParam0->f_71[num /*16*/], sParam2, 64);
	TEXT_LABEL_ASSIGN_STRING(&uParam0->f_280[num /*16*/], sParam3, 64);
	uParam0->f_489[num] = iParam4;
	uParam0->f_503[num] = iParam5;
	uParam0->f_517[num] = iParam6;
	uParam0->f_531[num] = iParam7;
	uParam0->f_56 = uParam0->f_56 + 1;
	return;
}

void func_52(var uParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x54E1 (21729)
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), sParam1, 16);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
	return;
}

void func_53(var uParam0, var uParam1, var uParam2) // Position - 0x5504 (21764)
{
	Vector3 vector;

	vector = { func_54(uParam0) };

	if (bLocal_131)
	{
		CAM::SET_CAM_COORD(caLocal_129, vector);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_129, caLocal_128, 500, 1, 1);
		bLocal_131 = false;
	}
	else
	{
		CAM::SET_CAM_COORD(caLocal_128, vector);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_128, caLocal_129, 500, 1, 1);
		bLocal_131 = true;
	}

	return;
}

Vector3 func_54(var uParam0, var uParam1, var uParam2) // Position - 0x5554 (21844)
{
	var unk;
	var unk4;

	unk4 = { 0.3495f, -0.0276f, -0.0114f };
	unk = { uParam0 - unk4 };
	return unk;
}

void func_55(var uParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5580 (21888)
{
	Vector3 vector;

	vector = { func_54(uParam0) };

	if (bParam3)
	{
		CAM::SET_CAM_COORD(caLocal_128, vector);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_128, caLocal_127, 1500, 1, 1);
		CAM::SET_CAM_ACTIVE(caLocal_127, false);
		CAM::SET_CAM_COORD(caLocal_129, vector);
		bLocal_131 = true;
	}
	else if (bParam4)
	{
		CAM::SET_CAM_COORD(caLocal_128, vector);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_128, caLocal_120, 2000, 1, 1);
		bLocal_131 = true;
	}
	else
	{
		if (bLocal_131)
			CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_127, caLocal_128, 1500, 1, 1);
		else
			CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_127, caLocal_129, 1500, 1, 1);
	
		CAM::SET_CAM_ACTIVE(caLocal_128, false);
	}

	return;
}

void func_56(eCharacter echParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5612 (22034)
{
	int outValue;
	Hash statHash;

	if (func_97(echParam0) == 3)
		return;

	if (func_97(echParam0) == 4)
		return;

	func_57(func_97(echParam0), 1, iParam1, iParam2, false);

	if (bParam3)
	{
		outValue = 0;
	
		if (bParam4)
		{
			switch (echParam0)
			{
				case CHAR_MICHAEL:
					statHash = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case CHAR_FRANKLIN:
					statHash = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case CHAR_TREVOR:
					statHash = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				default:
					return;
			}
		}
		else
		{
			switch (echParam0)
			{
				case CHAR_MICHAEL:
					statHash = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case CHAR_FRANKLIN:
					statHash = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case CHAR_TREVOR:
					statHash = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
			
				default:
					return;
			}
		}
	
		STATS::STAT_GET_INT(statHash, &outValue, -1);
		outValue = outValue + iParam2;
		STATS::STAT_SET_INT(statHash, outValue, true);
	}

	return;
}

int func_57(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x56E4 (22244)
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_96();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_95(99, 1);
					func_94(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_94(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_94(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_78(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_75(5))
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
							func_94(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_94(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_94(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_75(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_94(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_94(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_94(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_94(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_94(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_94(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_94(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_94(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_94(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_94(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_94(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_94(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_94(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_94(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_94(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_75(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_94(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_94(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_94(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_94(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_94(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_94(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_74(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_95(95, iParam3);
					break;
			
				case 1:
					func_95(97, iParam3);
					break;
			
				case 2:
					func_95(96, iParam3);
					break;
			}
		
			func_95(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_60(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_60(num2);
	}

	num6 = Global_61500[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_61500[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_61500[num3] = 2147483647;
				else
					Global_61500[num3] = Global_61500[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_94(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_94(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_94(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_61500[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_61500[num3];
			Global_61500[num3] = Global_61500[num3] - iParam3;
		
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
		Global_114162.f_20568.f_233[num3 /*69*/].f_2[Global_114162.f_20568.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_114162.f_20568.f_233[num3 /*69*/].f_2[Global_114162.f_20568.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114162.f_20568.f_233[num3 /*69*/].f_2[Global_114162.f_20568.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114162.f_20568.f_233[num3 /*69*/] = Global_114162.f_20568.f_233[num3 /*69*/] + 1;
		Global_114162.f_20568.f_233[num3 /*69*/].f_1 = Global_114162.f_20568.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_114162.f_20568.f_233[num3 /*69*/].f_1 > 10)
			Global_114162.f_20568.f_233[num3 /*69*/].f_1 = 0;
	}

	func_59(iParam0);

	if (Global_44199 == 15)
		func_58(false);

	return 1;
}

void func_58(BOOL bParam0) // Position - 0x5CE3 (23779)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_114162.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_114162.f_20568.f_233[i /*69*/].f_2[j /*6*/];
			Global_114162.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_114162.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_114162.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_114162.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_61508[i /*3*/][0] = Global_114162.f_20568[i];
		Global_61508.f_31[i /*3*/][0] = Global_114162.f_20568.f_11[i];
		Global_61508.f_62[i /*3*/][0] = Global_114162.f_20568.f_22[i];
		Global_61508.f_93[i /*3*/][0] = Global_114162.f_20568.f_33[i];
		Global_61508.f_124[i /*3*/][0] = Global_114162.f_20568.f_44[i];
		Global_61508.f_155[i /*3*/][0] = Global_114162.f_20568.f_55[i];
		Global_61508.f_186[i /*3*/][0] = Global_114162.f_20568.f_66[i];
		Global_61508.f_217[i /*3*/][0] = Global_114162.f_20568.f_77[i];
		Global_61508.f_248[i /*3*/][0] = Global_114162.f_20568.f_88[i];
	
		if (!bParam0)
		{
			Global_61508[i /*3*/][1] = Global_114162.f_20568[i];
			Global_61508.f_31[i /*3*/][1] = Global_114162.f_20568.f_11[i];
			Global_61508.f_62[i /*3*/][1] = Global_114162.f_20568.f_22[i];
			Global_61508.f_93[i /*3*/][1] = Global_114162.f_20568.f_33[i];
			Global_61508.f_124[i /*3*/][1] = Global_114162.f_20568.f_44[i];
			Global_61508.f_155[i /*3*/][1] = Global_114162.f_20568.f_55[i];
			Global_61508.f_186[i /*3*/][1] = Global_114162.f_20568.f_66[i];
			Global_61508.f_217[i /*3*/][1] = Global_114162.f_20568.f_77[i];
			Global_61508.f_248[i /*3*/][1] = Global_114162.f_20568.f_88[i];
		}
	}

	return;
}

void func_59(int iParam0) // Position - 0x5F65 (24421)
{
	int value;

	value = Global_61500[iParam0];

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

void func_60(int iParam0) // Position - 0x5FBF (24511)
{
	int num;
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
		func_69(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_69(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_69(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_69(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_69(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_69(8277, 0, -1, true);
		return;
	}

	if (func_68(iParam0))
	{
		func_69(func_67(iParam0), 0, -1, true);
		return;
	}

	if (func_66(iParam0))
	{
		num = _MPPLY_STAT_GET_INT(func_65(iParam0));
		_MPPLY_STAT_SET_INT(func_65(iParam0), num - 1);
		return;
	}

	if (iParam0 == 39)
	{
		_STAT_SET_PACKED_BOOL(7332, false, -1);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_114162.f_20568.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_114162.f_20568.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_114162.f_20568.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_62() /*5571*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_114162.f_20568.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_62() /*5571*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*You have redeemed your promotion for ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_61(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_61(int iParam0) // Position - 0x618B (24971)
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
	
		case 39:
			return "COUPON_CAR_GEN9_MIGRATION";
	
		default:
			if (func_68(iParam0))
				return "HSW_COUP";
		
			if (func_66(iParam0))
				return "HSWU_COUP";
			break;
	}

	return "";
}

int func_62() // Position - 0x62BE (25278)
{
	int num;

	num = 0;
	return num;
}

void _MPPLY_STAT_SET_INT(Hash hParam0, int iParam1) // Position - 0x62CB (25291)
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, true);

	return;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x62E7 (25319)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_65(int iParam0) // Position - 0x6305 (25349)
{
	switch (iParam0)
	{
		case 38:
			return joaat("MPPLY_DISCOUNT_HSW_UPGRADE");
	
		default:
		
	}

	return joaat("MPPLY_DISCOUNT_HSW_UPGRADE");
}

BOOL func_66(int iParam0) // Position - 0x6327 (25383)
{
	switch (iParam0)
	{
		case 38:
			return true;
	}

	return false;
}

int func_67(int iParam0) // Position - 0x6344 (25412)
{
	switch (iParam0)
	{
		case 18:
			return 15471;
	
		case 19:
			return 15472;
	
		case 20:
			return 15473;
	
		case 21:
			return 15474;
	
		case 22:
			return 15475;
	
		case 23:
			return 15476;
	
		case 24:
			return 15477;
	
		case 25:
			return 15478;
	
		case 26:
			return 15479;
	
		case 27:
			return 15480;
	
		case 28:
			return 15481;
	
		case 29:
			return 15482;
	
		case 30:
			return 15483;
	
		case 31:
			return 15484;
	
		case 32:
			return 15485;
	
		case 33:
			return 15486;
	
		case 34:
			return 15487;
	
		case 35:
			return 15488;
	
		case 36:
			return 15489;
	
		case 37:
			return 15490;
	}

	return 15471;
}

BOOL func_68(int iParam0) // Position - 0x6449 (25673)
{
	switch (iParam0)
	{
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
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
			return true;
	}

	return false;
}

void func_69(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x64D8 (25816)
{
	Hash statName;

	if (iParam0 != 17239)
	{
		statName = func_70(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_70(int iParam0, int iParam1) // Position - 0x6506 (25862)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_71(iParam1));
}

int func_71(int iParam0) // Position - 0x651B (25883)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_72();
	
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

int func_72() // Position - 0x654F (25935)
{
	return Global_1574926;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x655B (25947)
{
	if (iParam2 == -1)
		iParam2 = func_72();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_74(int iParam0) // Position - 0x6579 (25977)
{
	func_95(93, iParam0);
	func_95(29, iParam0);
	func_95(30, iParam0);
	return;
}

BOOL func_75(int iParam0) // Position - 0x6599 (26009)
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
	int cloudTimeAsInt7;
	int num7;
	int num8;

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
		num = func_76(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_76(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_76(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_76(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_76(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_76(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (func_68(iParam0))
	{
		cloudTimeAsInt7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num7 = func_76(func_67(iParam0), -1);
	
		if (num7 == 0 || cloudTimeAsInt7 >= num7)
			return false;
	
		return true;
	}

	if (func_66(iParam0))
	{
		num8 = _MPPLY_STAT_GET_INT(func_65(iParam0));
	
		if (num8 <= 0)
			return false;
	
		return true;
	}

	if (iParam0 == 39)
		return _STAT_GET_PACKED_BOOL(7332, -1);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_114162.f_20568.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_62() /*5571*/].f_681.f_10, iParam0);
}

int func_76(int iParam0, int iParam1) // Position - 0x67A4 (26532)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 17239)
	{
		statHash = func_70(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x67D3 (26579)
{
	if (iParam1 == -1)
		iParam1 = func_72();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_78(BOOL bParam0) // Position - 0x67EF (26607)
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
		func_93(27, value);
	}

	if (value < 200000000)
		return 0;

	func_79(27, 1);
	return 1;
}

int func_79(int iParam0, int iParam1) // Position - 0x68A6 (26790)
{
	if (iParam0 >= 78)
		return 0;

	return func_80(iParam0, iParam1);
}

int func_80(int iParam0, int iParam1) // Position - 0x68C1 (26817)
{
	if (func_92(14) && !func_91(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_33356 != 0 && !Global_79564)
		return 0;

	if (func_90(&Global_4546323))
	{
		if (func_88(&Global_4546323, iParam0))
			return 0;
	
		if (func_81(&Global_4546323, iParam0))
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

BOOL func_81(var uParam0, int iParam1) // Position - 0x695E (26974)
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_92(14) && !func_91(iParam1))
		return false;

	if (func_88(uParam0, iParam1))
		return false;

	if (func_87(uParam0) < 0f)
		func_86(uParam0, 0);

	func_84(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_82(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_82(var uParam0, int iParam1) // Position - 0x6A0F (27151)
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_92(14) && !func_91(iParam1))
		return 0;

	if (func_88(uParam0, iParam1))
		return 0;

	if (func_87(uParam0) < 0f)
		func_86(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_83(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_83(var uParam0, int iParam1) // Position - 0x6A8A (27274)
{
	return uParam0->[iParam1] == 78;
}

void func_84(var uParam0) // Position - 0x6A9B (27291)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_85(uParam0, i);
	}

	func_86(uParam0, Global_4546322 - 0.5f);
	return;
}

void func_85(var uParam0, int iParam1) // Position - 0x6ACF (27343)
{
	uParam0->[iParam1] = 78;
	return;
}

void func_86(var uParam0, int iParam1) // Position - 0x6ADF (27359)
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_87(var uParam0) // Position - 0x6AFC (27388)
{
	return uParam0->f_80;
}

BOOL func_88(var uParam0, int iParam1) // Position - 0x6B08 (27400)
{
	return func_89(uParam0, iParam1) != -1;
}

int func_89(var uParam0, int iParam1) // Position - 0x6B1A (27418)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_90(var uParam0) // Position - 0x6B47 (27463)
{
	return uParam0->f_79 == 1;
}

BOOL func_91(int iParam0) // Position - 0x6B55 (27477)
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

BOOL func_92(int iParam0) // Position - 0x6BA5 (27557)
{
	return Global_44199 == iParam0;
}

BOOL func_93(int iParam0, int iParam1) // Position - 0x6BB3 (27571)
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

void func_94(Hash hParam0, int iParam1) // Position - 0x6C04 (27652)
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_95(int iParam0, int iParam1) // Position - 0x6C27 (27687)
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

void func_96() // Position - 0x6C84 (27780)
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61500[0] == outValue))
			Global_61500[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61500[1] == outValue))
			Global_61500[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61500[2] == outValue))
			Global_61500[2] = outValue;
	}

	return;
}

int func_97(eCharacter echParam0) // Position - 0x6CF9 (27897)
{
	return Global_2201[echParam0 /*29*/].f_17;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x6D0A (27914)
{
	func_99();
	return Global_114162.f_2367.f_539.f_4321;
}

void func_99() // Position - 0x6D23 (27939)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114162.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_100(character) && !func_92(14) || Global_113110)
			{
				if (Global_114162.f_2367.f_539.f_4321 != character && func_100(Global_114162.f_2367.f_539.f_4321))
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

BOOL func_100(eCharacter echParam0) // Position - 0x6E20 (28192)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x6E2C (28204)
{
	if (func_100(character))
		return func_102(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_102(eCharacter echParam0) // Position - 0x6E51 (28241)
{
	return Global_2201[echParam0 /*29*/];
}

void func_103(var uParam0) // Position - 0x6E60 (28256)
{
	if (uParam0->f_565 || uParam0->f_576 <= uParam0->f_562)
	{
		uParam0->f_565 = 0;
		uParam0->f_562 = uParam0->f_576 - 1;
	}

	return;
}

void func_104(var uParam0, int iParam1) // Position - 0x6E93 (28307)
{
	if (uParam0->f_4 != 0)
		func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));

	if (uParam0->[0] != 0 || uParam0->[1] != 0 || uParam0->[2] != 0 || iParam1 == 1)
	{
		func_110(uParam0);
		func_109(uParam0);
		func_108(&Global_2101867);
	}

	if (Global_2097536.f_2708 != 0 || Global_2097536.f_3184)
		func_106();

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");

	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		_STOPWATCH_DESTROY(&(Global_2103068.f_49));

	Global_2739945.f_4101 = 0;
	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x6F3E (28478)
{
	uParam0->f_1 = 0;
	return;
}

void func_106() // Position - 0x6F4B (28491)
{
	int i;
	int j;
	var unk;

	unk.f_60 = 6;
	unk.f_67 = 6;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 12; j = j + 1)
		{
			Global_2097536[i /*901*/][j /*75*/] = { unk };
		}
	
		Global_2097536.f_2704[i] = 0;
	}

	Global_2097536.f_2708 = 0;
	Global_2097536.f_2709 = 0;
	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		Global_2097536.f_2710[i] = 0;
		TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[i /*6*/], "", 24);
		Global_2097536.f_2754[i] = 0;
		Global_2097536.f_2761[i] = 0;
	}

	Global_2097536.f_2768 = 0;
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_2097536.f_2771[i] = 0;
		Global_2097536.f_2775[i] = 0;
	}

	Global_2097536.f_2779 = 0;
	func_107(&(Global_2097536.f_2780));
	_STOPWATCH_DESTROY(&(Global_2097536.f_2823));
	Global_2097536.f_2825 = -1;
	Global_2097536.f_2826 = 0;
	_STOPWATCH_DESTROY(&(Global_2097536.f_2827));
	Global_2097536.f_2829 = 0;
	_STOPWATCH_DESTROY(&(Global_2097536.f_2830));
	Global_2097536.f_2832 = 0;
	Global_2097536.f_2780.f_28 = 0;
	Global_2097536.f_2780.f_27 = 0;
	Global_2097536.f_3184 = 0;
	return;
}

void func_107(int iParam0) // Position - 0x70B7 (28855)
{
	int i;

	*iParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_1), "", 32);
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_9), "", 64);
	iParam0->f_25 = 1;
	iParam0->f_26 = 0;
	iParam0->f_27 = 0;
	iParam0->f_28 = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		iParam0->f_29[i] = 0;
		iParam0->f_36[i] = 0;
	}

	return;
}

void func_108(var uParam0) // Position - 0x710F (28943)
{
	var unk;
	int i;
	int j;

	for (i = 0; i < 12; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&uParam0->[i /*100*/], "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->[i /*100*/].f_16), "", 64);
		uParam0->[i /*100*/].f_32 = { unk };
		uParam0->[i /*100*/].f_45 = { unk };
		uParam0->[i /*100*/].f_58 = 0;
		uParam0->[i /*100*/].f_59 = 0;
	
		for (j = 0; j < 6; j = j + 1)
		{
			uParam0->[i /*100*/].f_60[j] = 0f;
			uParam0->[i /*100*/].f_67[j] = 0;
		}
	
		uParam0->[i /*100*/].f_75 = 0;
		uParam0->[i /*100*/].f_74 = 0;
		uParam0->[i /*100*/].f_76 = 0;
		uParam0->[i /*100*/].f_77 = 0;
		uParam0->[i /*100*/].f_78 = 0;
		uParam0->[i /*100*/].f_79 = 0;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->[i /*100*/].f_80), "", 16);
	}

	_STOPWATCH_DESTROY(&(Global_2097536.f_2830));
	return;
}

void func_109(var uParam0) // Position - 0x71F1 (29169)
{
	int i;
	var unk;

	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	_STOPWATCH_DESTROY(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		uParam0->f_246.f_6[i /*15*/] = -1;
		uParam0->f_246.f_6[i /*15*/].f_1 = 0;
		uParam0->f_246.f_6[i /*15*/].f_2 = { unk };
	}

	for (i = 0; i < 3; i = i + 1)
	{
		uParam0->f_246.f_187[i] = 0;
	}

	return;
}

void func_110(var uParam0) // Position - 0x7279 (29305)
{
	int i;
	var unk;

	uParam0->[0] = 0;
	uParam0->[1] = 0;
	uParam0->[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { unk };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[i /*16*/], "", 32);
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[i /*16*/].f_8), "", 32);
	}

	uParam0->f_113[0 /*66*/] = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&uParam0->f_113[0 /*66*/].f_1[i /*16*/], "", 32);
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_113[0 /*66*/].f_1[i /*16*/].f_8), "", 32);
	}

	return;
}

void func_111(var uParam0, var uParam1, var uParam2) // Position - 0x7347 (29511)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_2097152 = false;
	_STOPWATCH_DESTROY(&(Global_2097152.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
	return;
}

void func_112() // Position - 0x7373 (29555)
{
	var unk;

	Global_2097157 = 0;
	Global_2097157.f_1 = 0;
	Global_2097157.f_2 = 0;
	Global_2097157.f_3 = 0;
	Global_2097157.f_4 = 0;
	func_114(&(Global_2097157.f_73));
	func_114(&(Global_2097157.f_142));
	func_114(&(Global_2097157.f_211));
	func_114(&(Global_2097157.f_280));
	TEXT_LABEL_ASSIGN_STRING(&(Global_2097157.f_349), "", 24);
	TEXT_LABEL_ASSIGN_STRING(&(Global_2097157.f_355), "", 24);
	func_113(&(Global_2097157.f_361));
	Global_2097157.f_374 = -1;
	Global_2097532 = false;
	Global_2097533 = false;
	unk.f_2.f_1 = 4;
	Global_2097157.f_5 = { unk };
	return;
}

void func_113(Any* panParam0) // Position - 0x7417 (29719)
{
	*panParam0 = 0;
	panParam0->f_1 = 0;
	panParam0->f_2 = 0;
	panParam0->f_3 = 0;
	panParam0->f_4 = 0;
	panParam0->f_5 = 0;
	panParam0->f_6 = 0;
	panParam0->f_7 = 0;
	panParam0->f_8 = 0;
	panParam0->f_9 = 0;
	panParam0->f_10 = 0;
	panParam0->f_11 = 0;
	panParam0->f_12 = 0;
	return;
}

void func_114(Any* panParam0) // Position - 0x745F (29791)
{
	int i;

	*panParam0 = 0;
	panParam0->f_1 = 0;
	panParam0->f_2 = 0;

	for (i = 0; i < 32; i = i + 1)
	{
		panParam0->f_3[i] = 0f;
		panParam0->f_36[i] = 0;
	}

	return;
}

void func_115(var uParam0) // Position - 0x749A (29850)
{
	func_48(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
	return;
}

void func_116() // Position - 0x74C4 (29892)
{
	CAM::SET_CAM_ACTIVE(caLocal_124, true);
	return;
}

int func_117(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x74D3 (29907)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_39(1);
			func_128(&(uParam0->f_509), false, false, true, true);
			func_127(&(uParam0->f_509), "DARTS_CONT" /*Continue*/, 2, 215, 1, 1, 0);
		
			if (!bParam2)
				func_127(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			else
				func_127(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
		
			if (bParam3 || !PLAYER::IS_PLAYER_ONLINE())
				func_127(&(uParam0->f_509), "HUD_LBD_LBD" /*Leaderboard*/, 2, 211, 1, 1, 0);
		
			func_124(&(uParam0->f_509), true);
			func_344(&(uParam0->f_666), 8, false);
			func_344(&(uParam0->f_666), 9, true);
		}
	
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_120(uParam0->f_668 < uParam0->f_669 ? uParam0->f_668 : uParam0->f_669, uParam0->f_668 < uParam0->f_669 ? &(uParam0->f_648) : &(uParam0->f_654), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
					func_120(uParam0->f_668 >= uParam0->f_669 ? uParam0->f_668 : uParam0->f_669, uParam0->f_668 >= uParam0->f_669 ? &(uParam0->f_648) : &(uParam0->f_654), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
				}
				else
				{
					func_120(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
				}
			
				func_434(&(uParam0->f_57), false, false);
			}
		
			func_130(&(uParam0->f_509), 1128792064, 1, false, true, 1065353216);
		}
	
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (MISC::GET_GAME_TIMER() - uParam0->f_671 > 900)
			{
				if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_EXPAND))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					func_344(&(uParam0->f_666), 9, false);
					return 1;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_ACCEPT))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					func_119();
					func_118();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
	
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
		{
			return 2;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
		{
			func_344(&(uParam0->f_666), 9, false);
			func_344(&(uParam0->f_666), 7, false);
		}
	}

	return 0;
}

void func_118() // Position - 0x771A (30490)
{
	if (Global_2672942.f_2590[0 /*80*/].f_2 != 0)
		Global_2672942.f_2590[0 /*80*/].f_2 = 5;

	return;
}

void func_119() // Position - 0x773F (30527)
{
	Global_33250 = 1;
	return;
}

void func_120(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, const char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15) // Position - 0x774B (30539)
{
	int num;
	int i;

	if (func_121(sParam6))
		sParam6 = "NUMBER" /*~1~*/;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_33(3, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1675263.f_1 = 1;
		func_32(3, num);
		Global_1675263.f_2872[num] = uParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1675263.f_2872.f_11[num /*16*/], sParam1, 64);
		Global_1675263.f_2872.f_183[num] = iParam3;
		Global_1675263.f_2872.f_172[num] = iParam2;
		Global_1675263.f_2872.f_205[num] = iParam4;
		Global_1675263.f_2872.f_216[num] = iParam5;
		TEXT_LABEL_ASSIGN_STRING(&Global_1675263.f_2872.f_259[num /*16*/], sParam6, 64);
		Global_1675263.f_2872.f_420[num] = iParam7;
		Global_1675263.f_2872.f_453[num] = iParam8;
		Global_1675263.f_2872.f_431[num] = iParam9;
		Global_1675263.f_2872.f_442[num] = iParam10;
		Global_1675263.f_2872.f_464[num] = iParam11;
		Global_1675263.f_2872.f_475[num] = iParam12;
		Global_1675263.f_2872.f_486[num] = iParam13;
		Global_1675263.f_2872.f_497[num] = iParam14;
		Global_1675263.f_2872.f_508[num] = iParam15;
	}

	return;
}

BOOL func_121(const char* sParam0) // Position - 0x789D (30877)
{
	if (MISC::IS_STRING_NULL(sParam0))
		return true;
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
		return true;

	return false;
}

var func_122(BOOL bParam0, var uParam1, var uParam2) // Position - 0x78D7 (30935)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

var func_123(BOOL bParam0, var uParam1, var uParam2) // Position - 0x78EE (30958)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_124(var uParam0, BOOL bParam1) // Position - 0x7905 (30981)
{
	if (bParam1)
		func_126(&(uParam0->f_1), 1024);
	else
		func_125(&(uParam0->f_1), 1024);

	return;
}

void func_125(var uParam0, int iParam1) // Position - 0x792B (31019)
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_126(var uParam0, int iParam1) // Position - 0x7940 (31040)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_127(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x7951 (31057)
{
	int num;
	int num2;

	if (*uParam0 == 0)
		return 0;

	num = 0;

	if (iParam5 == 1)
		num = 1;

	num2 = uParam0->f_123;

	if (num2 < 8)
	{
		uParam0->f_2[num2 /*15*/] = sParam1;
		uParam0->f_2[num2 /*15*/].f_1 = num;
		uParam0->f_2[num2 /*15*/].f_2 = iParam6;
		uParam0->f_2[num2 /*15*/].f_12 = 0;
		uParam0->f_2[num2 /*15*/].f_13 = 0;
		uParam0->f_2[num2 /*15*/].f_14 = 0;
		uParam0->f_2[num2 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[num2 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
	
		if (iParam4 == 1)
			MISC::SET_BIT(&(uParam0->f_2[num2 /*15*/].f_13), 0);
	
		uParam0->f_2[num2 /*15*/].f_14 = uParam0->f_2[num2 /*15*/].f_14 + 1;
		uParam0->f_123 = uParam0->f_123 + 1;
		return 1;
	}

	return 0;
}

void func_128(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7A1A (31258)
{
	if (*uParam0 == 0)
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");

	uParam0->f_1 = 0;
	uParam0->f_123 = 0;

	if (bParam1)
		func_126(&(uParam0->f_1), 32);

	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_126(&(uParam0->f_1), 1);
	
		if (bParam2)
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, true);
	}

	if (MISC::IS_PC_VERSION())
		if (bParam3)
			func_126(&(uParam0->f_1), 4096);

	if (bParam4)
		func_126(&(uParam0->f_1), 8192);

	return;
}

BOOL func_129(var uParam0) // Position - 0x7A94 (31380)
{
	if (IS_BIT_SET(uParam0->f_42, 1) && Global_2097536.f_2704[0] > 0 && uParam0->f_246.f_1 >= 0)
		return true;

	return false;
}

void func_130(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x7AC8 (31432)
{
	eControlType control;
	eControlAction controlGroup;
	BOOL allowXOSwap;
	const char* controlInstructionalButtonsString;
	BOOL isUsingKeyboardAndMouse;
	int value;
	int i;
	int j;
	float value2;

	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADED_OUT() || MISC::IS_FRONTEND_FADING())
		if (!bParam3)
			return;

	if (!func_133(uParam0))
		return;

	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);

	if (!func_132(uParam0->f_1, 256) || func_132(uParam0->f_1, 8192) && PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_132(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		value = 0;
	
		for (i = 0; i < uParam0->f_123; i = i + 1)
		{
			switch (uParam0->f_2[i /*15*/].f_2)
			{
				case 0:
					isUsingKeyboardAndMouse = true;
					break;
			
				case 1:
					isUsingKeyboardAndMouse = PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL);
					break;
			
				case 2:
					isUsingKeyboardAndMouse = !PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL);
					break;
			
				default:
					isUsingKeyboardAndMouse = false;
					break;
			}
		
			if (isUsingKeyboardAndMouse)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
					value = value + 1;
				
					for (j = 0; j < uParam0->f_2[i /*15*/].f_14; j = j + 1)
					{
						control = uParam0->f_2[i /*15*/].f_3[j /*2*/];
						controlGroup = uParam0->f_2[i /*15*/].f_3[j /*2*/].f_1;
						allowXOSwap = IS_BIT_SET(uParam0->f_2[i /*15*/].f_13, j);
					
						if (!IS_BIT_SET(uParam0->f_2[i /*15*/].f_12, j))
							controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(control, controlGroup, allowXOSwap);
						else
							controlInstructionalButtonsString = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(control, controlGroup, allowXOSwap);
					
						if (!MISC::IS_STRING_NULL_OR_EMPTY(controlInstructionalButtonsString))
							func_13(controlInstructionalButtonsString);
					}
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[i /*15*/]))
						func_12(uParam0->f_2[i /*15*/]);
				
					if (MISC::IS_PC_VERSION())
					{
						if (func_132(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[i /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[i /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
	
		value2 = bParam4 ? func_132(uParam0->f_1, 32) ? 1f : 0f : -1f;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(value2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_126(&(uParam0->f_1), 256);
		func_125(&(uParam0->f_1), 128);
	}

	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
	return;
}

var func_131(BOOL bParam0, var uParam1, var uParam2) // Position - 0x7D82 (32130)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_132(int iParam0, int iParam1) // Position - 0x7D99 (32153)
{
	return iParam0 && iParam1 != false;
}

BOOL func_133(var uParam0) // Position - 0x7DA8 (32168)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_126(&(uParam0->f_1), 1);
			return true;
		}
	}

	return false;
}

void func_134(var uParam0, var uParam1) // Position - 0x7DCF (32207)
{
	func_135(uParam1, uParam0);
	return;
}

void func_135(var uParam0, var uParam1) // Position - 0x7DDF (32223)
{
	int i;
	int j;
	var unk;
	int num;
	BOOL flag;
	BOOL flag2;
	var unk5;
	var unk21;
	var unk23;
	int address;
	var unk27;
	var userID;
	var unk45;
	var unk51;
	BOOL flag3;

	unk = 3;
	_STOPWATCH_RESET(&(Global_2103068.f_49), true, false);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_215();
	func_41(0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_213(true);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);
	func_212(1);
	func_211(1);

	if (!func_208())
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");

	if (!IS_BIT_SET(uParam1->f_42, 3))
	{
		*uParam0 = func_207();
		MISC::SET_BIT(&(uParam1->f_42), 3);
	}

	unk23 = 3;
	unk27 = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };

	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE() || !NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() || Global_2097536.f_2832 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_2097536.f_2829 != 2)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
			{
				if (Global_2097536.f_2829 != 3)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 3;
				}
			}
			else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
			{
				if (Global_2097536.f_2829 != 4)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 4;
				}
			}
			else if (Global_2097536.f_2832 != 0)
			{
				if (Global_2097536.f_2829 != 5)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 5;
				}
			}
		
			if (!IS_BIT_SET(uParam1->f_42, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_206(*uParam0, Global_2097536.f_2780);
			
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
				{
					if (!func_205(uParam1->f_44))
					{
						if (Global_2097536.f_2780.f_26 > 0)
						{
							unk5 = { Global_2097536.f_2780.f_9 };
							func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk21, &unk5, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk21, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else if (!Global_2097536.f_2780.f_27)
					{
						TEXT_LABEL_ASSIGN_STRING(&unk5, "FMMC_COR_SCLB5" /*Driver*/, 64);
					
						if (Global_2097536.f_2780.f_26 > 0)
							func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						else
							func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&unk5, "FMMC_COR_SCLB6" /*Co-Driver*/, 64);
					
						if (Global_2097536.f_2780.f_26 > 0)
							func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						else
							func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
					}
				
					func_203(*uParam0, "SCLB_C_RANK" /*POSITION*/, &(Global_2097536.f_2717), Global_2097536.f_2708);
				}
			
				address = 0;
				MISC::SET_BIT(&address, 4);
				func_202(*uParam0, &num, address, true, true);
				address = 0;
				MISC::SET_BIT(&address, 5);
				func_202(*uParam0, &num, address, true, true);
				address = 0;
				MISC::SET_BIT(&address, 6);
				func_202(*uParam0, &num, address, true, true);
				MISC::SET_BIT(&(uParam1->f_42), 1);
				func_201(*uParam0);
				MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				HUD::CLEAR_HELP(true);
			}
			else
			{
				func_201(*uParam0);
			}
		}
		else
		{
			if (Global_2097536.f_2829 != 1)
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_2097536.f_2829 = 1;
			}
		
			if (!func_164(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
			
				if (!IS_BIT_SET(uParam1->f_42, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_206(*uParam0, Global_2097536.f_2780);
				
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_205(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								unk5 = { Global_2097536.f_2780.f_9 };
								func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk21, &unk5, true, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk21, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							TEXT_LABEL_ASSIGN_STRING(&unk5, "FMMC_COR_SCLB5" /*Driver*/, 64);
						
							if (Global_2097536.f_2780.f_26 > 0)
								func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							else
								func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&unk5, "FMMC_COR_SCLB6" /*Co-Driver*/, 64);
						
							if (Global_2097536.f_2780.f_26 > 0)
								func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							else
								func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					
						func_203(*uParam0, "SCLB_C_RANK" /*POSITION*/, &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
				
					MISC::SET_BIT(&(uParam1->f_42), 0);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				}
			
				num = 0;
				i = 0;
			
				if (Global_2097536.f_2825 == -1)
				{
					TEXT_LABEL_ASSIGN_STRING(&unk45, "SC_LB_DL0" /*Downloading*/, 24);
				
					for (i = 0; i < 3; i = i + 1)
					{
						if (i == 0)
						{
							address = 0;
							MISC::SET_BIT(&address, 4);
							func_202(*uParam0, &num, address, false, false);
						}
						else if (i == 1)
						{
							address = 0;
							MISC::SET_BIT(&address, 5);
							func_202(*uParam0, &num, address, false, false);
						}
						else if (i == 2)
						{
							address = 0;
							MISC::SET_BIT(&address, 6);
							func_202(*uParam0, &num, address, false, false);
						}
					
						address = 0;
						MISC::SET_BIT(&address, 7);
						func_163(*uParam0, num, address, &unk45);
						num = num + 1;
					}
				
					Global_2097536.f_2825 = 1;
					_STOPWATCH_DESTROY(&(Global_2097536.f_2823));
				}
				else if (_STOPWATCH_HAS_TIME_PASSED(&(Global_2097536.f_2823), 300, false))
				{
					TEXT_LABEL_ASSIGN_STRING(&unk51, "SC_LB_DL", 24);
					TEXT_LABEL_APPEND_INT(&unk51, Global_2097536.f_2825, 24);
				
					for (i = 0; i < 3; i = i + 1)
					{
						if (i == 0)
						{
							address = 0;
							MISC::SET_BIT(&address, 4);
							func_202(*uParam0, &num, address, false, false);
						}
						else if (i == 1)
						{
							address = 0;
							MISC::SET_BIT(&address, 5);
							func_202(*uParam0, &num, address, false, false);
						}
						else if (i == 2)
						{
							address = 0;
							MISC::SET_BIT(&address, 6);
							func_202(*uParam0, &num, address, false, false);
						}
					
						address = 0;
						MISC::SET_BIT(&address, 7);
						func_163(*uParam0, num, address, &unk51);
						num = num + 1;
					}
				
					Global_2097536.f_2825 = Global_2097536.f_2825 + 1;
				
					if (Global_2097536.f_2825 > 3)
						Global_2097536.f_2825 = 0;
				
					_STOPWATCH_DESTROY(&(Global_2097536.f_2823));
				}
			
				func_201(*uParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 0);
			
				if (!IS_BIT_SET(uParam1->f_42, 1))
				{
					for (i = 0; i < 3; i = i + 1)
					{
						uParam1->f_246.f_187[i] = 0;
					}
				
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_206(*uParam0, Global_2097536.f_2780);
				
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_205(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								unk5 = { Global_2097536.f_2780.f_9 };
								func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk21, &unk5, true, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk21, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							TEXT_LABEL_ASSIGN_STRING(&unk5, "FMMC_COR_SCLB5" /*Driver*/, 64);
						
							if (Global_2097536.f_2780.f_26 > 0)
								func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							else
								func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&unk5, "FMMC_COR_SCLB6" /*Co-Driver*/, 64);
						
							if (Global_2097536.f_2780.f_26 > 0)
								func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							else
								func_204(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					
						func_203(*uParam0, "SCLB_C_RANK" /*POSITION*/, &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
				
					if (!IS_BIT_SET(uParam1->f_42, 6))
					{
						func_108(&Global_2101867);
						func_157(uParam1, &Global_2101867);
						func_156(uParam1, &Global_2101867);
					}
				
					num = 0;
					uParam1->f_246.f_2 = 0;
				
					if (Global_2097536.f_2704[0] > 1 || Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] != -1 || Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27 && func_205(uParam1->f_44) && Global_2097536.f_2775[0] != -1)
					{
						uParam1->f_246.f_1 = -1;
						i = 0;
					
						for (i = 0; i < 12; i = i + 1)
						{
							flag3 = false;
						
							if (Global_2101867[i /*100*/].f_75 == 1)
							{
								if (!unk23[0])
								{
									address = 0;
									MISC::SET_BIT(&address, 4);
									func_202(*uParam0, &num, address, false, false);
									unk23[0] = 1;
								}
							}
							else if (Global_2101867[i /*100*/].f_75 == 2)
							{
								if (!unk23[1])
								{
									address = 0;
									MISC::SET_BIT(&address, 5);
								
									if (Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1] == -1 && !(Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27 && func_205(uParam1->f_44) && Global_2097536.f_2775[1] != -1))
									{
										func_202(*uParam0, &num, address, true, false);
										flag3 = true;
									}
									else
									{
										func_202(*uParam0, &num, address, false, false);
									}
								
									unk23[1] = 1;
								}
							}
							else if (Global_2101867[i /*100*/].f_75 == 3)
							{
								if (!unk23[2])
								{
									address = 0;
									MISC::SET_BIT(&address, 6);
								
									if (!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
										flag3 = true;
									else if (!NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
										flag3 = true;
								
									if (Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2] == -1 && !(Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27 && func_205(uParam1->f_44) && Global_2097536.f_2775[2] != -1))
										flag3 = true;
								
									if (flag3)
										func_202(*uParam0, &num, address, true, false);
									else
										func_202(*uParam0, &num, address, false, false);
								
									unk23[2] = 1;
								}
							}
						
							if (IS_GAMER_HANDLE_VALID(Global_2101867[i /*100*/].f_32))
							{
								if (func_205(uParam1->f_44))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &userID);
								
									if (!Global_2101867[i /*100*/].f_74 && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &userID))
										flag3 = true;
								}
							
								if (!flag3)
								{
									address = 0;
								
									if (!Global_2097536.f_2780.f_27)
									{
										if (func_154(&(Global_2101867[i /*100*/].f_32), &unk27))
										{
											MISC::SET_BIT(&address, 1);
										
											if (uParam1->f_246.f_1 == -1)
											{
												flag = true;
												uParam1->f_246.f_1 = i;
												MISC::SET_BIT(&address, 3);
											}
										}
									}
								
									if (func_205(uParam1->f_44))
									{
										unk5 = { Global_2101867[i /*100*/] };
									
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2101867[i /*100*/].f_84)) && !MISC::ARE_STRINGS_EQUAL(&(Global_2101867[i /*100*/].f_84), ""))
										{
											TEXT_LABEL_APPEND_STRING(&unk5, "/", 64);
											TEXT_LABEL_APPEND_STRING(&unk5, &(Global_2101867[i /*100*/].f_84), 64);
										}
									
										func_153(*uParam0, num, address, Global_2101867[i /*100*/].f_59, &unk5, &(Global_2101867[i /*100*/].f_80));
										uParam1->f_246.f_6[i /*15*/] = num;
										uParam1->f_246.f_6[i /*15*/].f_1 = address;
										uParam1->f_246.f_6[i /*15*/].f_2 = { Global_2101867[i /*100*/].f_32 };
										uParam1->f_246.f_2 = uParam1->f_246.f_2 + 1;
									}
									else
									{
										func_153(*uParam0, num, address, Global_2101867[i /*100*/].f_59, &Global_2101867[i /*100*/], &(Global_2101867[i /*100*/].f_80));
										uParam1->f_246.f_6[i /*15*/] = num;
										uParam1->f_246.f_6[i /*15*/].f_1 = address;
										uParam1->f_246.f_6[i /*15*/].f_2 = { Global_2101867[i /*100*/].f_32 };
										uParam1->f_246.f_2 = uParam1->f_246.f_2 + 1;
									}
								
									for (j = 0; j < Global_2097536.f_2708; j = j + 1)
									{
										flag2 = false;
									
										if (IS_BIT_SET(Global_2097536.f_2770, j))
										{
											if (IS_BIT_SET(Global_2097536.f_2768, j))
												if (Global_2097536.f_2754[j] == Global_2101867[i /*100*/].f_67[j])
													flag2 = true;
										
											if (flag2)
												func_144(Global_2097536.f_2780, j, Global_2101867[i /*100*/].f_67[j], false, Global_2101867[i /*100*/].f_58);
											else
												func_144(Global_2097536.f_2780, j, Global_2101867[i /*100*/].f_67[j], Global_2101867[i /*100*/].f_74, Global_2101867[i /*100*/].f_58);
										}
										else
										{
											if (IS_BIT_SET(Global_2097536.f_2768, j))
												if (Global_2097536.f_2761[j] == Global_2101867[i /*100*/].f_67[j])
													flag2 = true;
										
											if (flag2)
												func_141(Global_2097536.f_2780, j, Global_2101867[i /*100*/].f_60[j], false);
											else
												func_141(Global_2097536.f_2780, j, Global_2101867[i /*100*/].f_60[j], Global_2101867[i /*100*/].f_74);
										}
									}
								
									func_140();
									unk[Global_2101867[i /*100*/].f_75 - 1] = unk[Global_2101867[i /*100*/].f_75 - 1] + 1;
								
									if (unk[Global_2101867[i /*100*/].f_75 - 1] == 2)
									{
										if (Global_2101867[i /*100*/].f_59 > 2)
										{
											MISC::SET_BIT(&address, 2);
											MISC::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_139(*uParam0, num - 1, address);
										}
									}
								
									num = num + 1;
								}
							}
						}
					
						i = 0;
					
						for (i = 0; i < 3; i = i + 1)
						{
							uParam1->f_246.f_187[i] = unk[i];
						}
					}
					else
					{
						address = 0;
						MISC::SET_BIT(&address, 4);
						func_202(*uParam0, &num, address, true, false);
						address = 0;
						MISC::SET_BIT(&address, 5);
						func_202(*uParam0, &num, address, true, false);
						address = 0;
						MISC::SET_BIT(&address, 6);
						func_202(*uParam0, &num, address, true, false);
					}
				
					MISC::SET_BIT(&(uParam1->f_42), 1);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
					func_201(*uParam0);
					HUD::CLEAR_HELP(true);
				
					if (uParam1->f_246.f_1 == -1 && !flag == true)
					{
						if (Global_2097536.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_139(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_201(*uParam0);
					func_136(uParam0, uParam1);
				}
			}
		}
	}

	return;
}

void func_136(var uParam0, var uParam1) // Position - 0x8DA9 (36265)
{
	BOOL flag;
	int num;
	int num2;
	int num3;
	var unk;
	var unk2;
	int num4;
	var unk3;
	var unk4;

	num = uParam1->f_246.f_1;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_X);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_Y);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL);
		PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
	
		if (PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP))
			PAD::SET_CONTROL_VALUE_NEXT_FRAME(FRONTEND_CONTROL, INPUT_FRONTEND_UP, 1f);
	
		if (PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN))
			PAD::SET_CONTROL_VALUE_NEXT_FRAME(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN, 1f);
	
		if (HUD::GET_MOUSE_EVENT(*uParam0, &num2, &num3, &unk))
		{
			if (num2 == 5)
			{
				if (num3 > uParam1->f_246.f_187[0])
					if (num3 <= uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1] + 2)
						num3 = num3 - 2;
					else
						num3 = num3 - 4;
			
				num3 = num3 - 1;
			
				if (uParam1->f_246.f_1 != num3)
				{
					uParam1->f_246.f_1 = num3;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					flag = true;
				}
				else
				{
					PAD::SET_CONTROL_VALUE_NEXT_FRAME(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT, 1f);
				}
			}
		}
	}

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		func_138(&unk2, &num4, &unk3, &unk4, false);

	if (uParam1->f_246.f_2 > 0)
	{
		if (!IS_BIT_SET(uParam1->f_246, 0))
		{
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP) || num4 < -100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1 = uParam1->f_246.f_1 + -1;
				MISC::SET_BIT(&(uParam1->f_246), 0);
				_STOPWATCH_DESTROY(&(uParam1->f_246.f_3));
				flag = true;
			}
		}
		else if (func_137(uParam1, INPUT_FRONTEND_UP))
		{
			MISC::CLEAR_BIT(&(uParam1->f_246), 0);
		}
	
		if (!IS_BIT_SET(uParam1->f_246, 1))
		{
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN) || num4 > 100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_246.f_1 = uParam1->f_246.f_1 + 1;
				MISC::SET_BIT(&(uParam1->f_246), 1);
				_STOPWATCH_DESTROY(&(uParam1->f_246.f_3));
				flag = true;
			}
		}
		else if (func_137(uParam1, INPUT_FRONTEND_DOWN))
		{
			MISC::CLEAR_BIT(&(uParam1->f_246), 1);
		}
	}

	if (flag)
	{
		if (uParam1->f_246.f_1 < 0)
			uParam1->f_246.f_1 = uParam1->f_246.f_2 - 1;
	
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
			uParam1->f_246.f_1 = 0;
	}

	if (!IS_BIT_SET(uParam1->f_246, 3))
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_Y) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_Y) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			MISC::SET_BIT(&(uParam1->f_246), 3);
			_STOPWATCH_DESTROY(&(uParam1->f_246.f_3));
			flag = true;
		}
	}
	else if (func_137(uParam1, INPUT_FRONTEND_Y))
	{
		MISC::CLEAR_BIT(&(uParam1->f_246), 3);
	}

	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != num)
		{
			if (num >= 0)
			{
				MISC::CLEAR_BIT(&(uParam1->f_246.f_6[num /*15*/].f_1), 3);
				func_139(*uParam0, uParam1->f_246.f_6[num /*15*/], uParam1->f_246.f_6[num /*15*/].f_1);
			}
		
			MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_139(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			MISC::CLEAR_BIT(&(uParam1->f_42), 2);
		}
	
		if (IS_GAMER_HANDLE_VALID(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!IS_BIT_SET(uParam1->f_246, 2))
			{
				if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT))
				{
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_MP_SOUNDSET", true);
						MISC::SET_BIT(&(uParam1->f_246), 2);
						NETWORK::NETWORK_SHOW_PROFILE_UI(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_SELECT))
			{
				MISC::CLEAR_BIT(&(uParam1->f_246), 2);
			}
		}
	}

	return;
}

BOOL func_137(var uParam0, eControlAction ecaParam1) // Position - 0x913F (37183)
{
	var unk;
	int num;
	var unk2;
	var unk3;

	if (ecaParam1 == INPUT_FRONTEND_UP || ecaParam1 == INPUT_FRONTEND_DOWN)
	{
		func_138(&unk, &num, &unk2, &unk3, false);
	
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, ecaParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, ecaParam1) && num < 75 && num > -75 || _STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_246.f_3), 250, false))
			return true;
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, ecaParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, ecaParam1) || _STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_246.f_3), 250, false))
	{
		return true;
	}

	return false;
}

void func_138(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x91DE (37342)
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

void func_139(int iParam0, int iParam1, int iParam2) // Position - 0x92B3 (37555)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_140() // Position - 0x92D6 (37590)
{
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_141(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, BOOL bParam45) // Position - 0x92E2 (37602)
{
	switch (uParam0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /*~1~*/);
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam44, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 12:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /*~1~*/);
				HUD::ADD_TEXT_COMPONENT_INTEGER(SYSTEM::FLOOR(fParam44));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (uParam0.f_29[iParam43] == 18 || uParam0.f_29[iParam43] == 20)
					fParam44 = fParam44 * -1f;
			
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
					if (uParam0.f_29[iParam43] == 19 || uParam0.f_29[iParam43] == 20)
						fParam44 = func_143(fParam44);
					else
						fParam44 = func_142(fParam44);
			
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /*~1~*/);
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam44, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 0:
			break;
	}

	return;
}

float func_142(float fParam0) // Position - 0x9404 (37892)
{
	return fParam0 / 0.3048f;
}

float func_143(float fParam0) // Position - 0x9414 (37908)
{
	return fParam0 / 1609.344f;
}

void func_144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, Hash hParam44, BOOL bParam45, BOOL bParam46) // Position - 0x9424 (37924)
{
	var componentType;

	if (hParam44 == 2147483647 || hParam44 == -2147483647)
		bParam45 = false;

	TEXT_LABEL_ASSIGN_STRING(&componentType, "", 16);

	switch (uParam0.f_29[iParam43])
	{
		case 5:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /*~1~*/);
				HUD::ADD_TEXT_COMPONENT_INTEGER(hParam44);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 7:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /*~1~*/);
				HUD::ADD_TEXT_COMPONENT_INTEGER(-hParam44);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (uParam0.f_29[iParam43] == 11 && hParam44 < 0)
					hParam44 = hParam44 * -1;
			
				if (hParam44 >= 3600000 || hParam44 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(hParam44, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam0.f_29[iParam43] == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(hParam44, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(hParam44, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 6:
			if (bParam45)
			{
				if (hParam44 == 2147483647)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (hParam44 >= 3600000 || hParam44 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(hParam44, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(hParam44, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 2:
		case 10:
			if (bParam45)
			{
				hParam44 = hParam44 * -1;
			
				if (hParam44 >= 3600000 || hParam44 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(hParam44, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam0.f_29[iParam43] == 10)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(hParam44, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(hParam44, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 3:
			if (bParam46)
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(hParam44))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SCLB_VEH_CUST" /*~a~ (custom)*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam44));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else if (STREAMING::IS_MODEL_IN_CDIMAGE(hParam44))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam44));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 8:
			if (func_152(hParam44) != 0)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_149(func_152(hParam44), false));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (uParam0.f_29[iParam43] == 14 || uParam0.f_29[iParam43] == 16)
					hParam44 = hParam44 * -1;
			
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
					if (uParam0.f_29[iParam43] == 15 || uParam0.f_29[iParam43] == 16)
						hParam44 = SYSTEM::FLOOR(func_143(SYSTEM::TO_FLOAT(hParam44)));
					else
						hParam44 = SYSTEM::FLOOR(func_142(SYSTEM::TO_FLOAT(hParam44)));
			
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /*~1~*/);
				HUD::ADD_TEXT_COMPONENT_INTEGER(hParam44);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 21:
			if (hParam44 > 20)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				componentType = { func_148(hParam44) };
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&componentType);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 22:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /*~1~*/);
				HUD::ADD_TEXT_COMPONENT_INTEGER(func_145(hParam44));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 0:
			break;
	}

	return;
}

int func_145(Hash hParam0) // Position - 0x982C (38956)
{
	Hash value;
	float num;
	int num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;

	value = func_147(199);

	if (hParam0 < 100)
	{
		return 1;
	}
	else if (hParam0 > value)
	{
		num = SYSTEM::TO_FLOAT(hParam0) - SYSTEM::TO_FLOAT(value);
		num2 = SYSTEM::FLOOR(num / SYSTEM::TO_FLOAT(Global_262145.f_30423));
		return 199 + num2;
	}

	num3 = SYSTEM::TO_FLOAT(Global_262145.f_30422) / 2f;
	num4 = -(num3 * 3f) + num3;
	num5 = num3;
	num6 = -(num3 * 3f) + num4 + 100f;
	num7 = (-3f * num4) - 100f;
	num7 = (float)hParam0 - num7;
	return SYSTEM::FLOOR(func_146(-num5, -num6, num7, true));
}

float func_146(float fParam0, float fParam1, float fParam2, BOOL bParam3) // Position - 0x98D2 (39122)
{
	if (bParam3)
		return (-fParam1 - SYSTEM::SQRT((fParam1 * fParam1) - (4f * fParam0 * fParam2))) / (2f * fParam0);

	return (-fParam1 + SYSTEM::SQRT((fParam1 * fParam1) - (4f * fParam0 * fParam2))) / (2f * fParam0);
}

int func_147(int iParam0) // Position - 0x9916 (39190)
{
	float num;
	float num2;

	num = SYSTEM::TO_FLOAT(iParam0);
	num2 = SYSTEM::TO_FLOAT(Global_262145.f_30422) / 2f;
	return SYSTEM::ROUND(((num * 100f) - 100f) + ((num - 3f) * ((num2 * (num - 3f)) + num2)));
}

struct<4> func_148(Hash hParam0) // Position - 0x9957 (39255)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "ARENA_C_SL", 16);

	if (hParam0 > 20)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "**INVALID**", 16);
		return unk;
	}

	if (hParam0 < 0)
		hParam0 = 0;

	TEXT_LABEL_APPEND_INT(&unk, hParam0, 16);
	return unk;
}

char* func_149(int iParam0, BOOL bParam1) // Position - 0x9990 (39312)
{
	var unk;

	if (iParam0 == joaat("VEHICLE_WEAPON_BARRAGE_TOP_MG"))
		return "WTU_VEH_BRGE_TT";

	switch (iParam0)
	{
		case 0:
			if (bParam1)
				return "WTU_INVALID";
			else
				return "WT_INVALID" /*Invalid*/;
			break;
	
		case joaat("WEAPON_UNARMED"):
			if (bParam1)
				return "WTU_UNARMED" /*UNARMED*/;
			else
				return "WT_UNARMED" /*Unarmed*/;
			break;
	
		case joaat("WEAPON_PISTOL"):
			if (bParam1)
				return "WTU_PIST" /*PISTOL*/;
			else
				return "WT_PIST" /*Pistol*/;
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			if (bParam1)
				return "WTU_PIST_CBT" /*COMBAT PISTOL*/;
			else
				return "WT_PIST_CBT" /*Combat Pistol*/;
			break;
	
		case joaat("WEAPON_APPISTOL"):
			if (bParam1)
				return "WTU_PIST_AP" /*AP PISTOL*/;
			else
				return "WT_PIST_AP" /*AP Pistol*/;
			break;
	
		case joaat("WEAPON_SMG"):
			if (bParam1)
				return "WTU_SMG" /*SMG*/;
			else
				return "WT_SMG" /*SMG*/;
			break;
	
		case joaat("WEAPON_MICROSMG"):
			if (bParam1)
				return "WTU_SMG_MCR" /*MICRO SMG*/;
			else
				return "WT_SMG_MCR" /*Micro SMG*/;
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (bParam1)
				return "WTU_RIFLE_ASL" /*ASSAULT RIFLE*/;
			else
				return "WT_RIFLE_ASL" /*Assault Rifle*/;
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			if (bParam1)
				return "WTU_RIFLE_CBN" /*CARBINE RIFLE*/;
			else
				return "WT_RIFLE_CBN" /*Carbine Rifle*/;
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			if (bParam1)
				return "WTU_RIFLE_ADV" /*ADVANCED RIFLE*/;
			else
				return "WT_RIFLE_ADV" /*Advanced Rifle*/;
			break;
	
		case joaat("WEAPON_MG"):
			if (bParam1)
				return "WTU_MG" /*MG*/;
			else
				return "WT_MG" /*MG*/;
			break;
	
		case joaat("WEAPON_COMBATMG"):
			if (bParam1)
				return "WTU_MG_CBT" /*COMBAT MG*/;
			else
				return "WT_MG_CBT" /*Combat MG*/;
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (bParam1)
				return "WTU_SG_PMP" /*PUMP SHOTGUN*/;
			else
				return "WT_SG_PMP" /*Pump Shotgun*/;
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			if (bParam1)
				return "WTU_SG_SOF" /*SAWED-OFF SHOTGUN*/;
			else
				return "WT_SG_SOF" /*Sawed-Off Shotgun*/;
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			if (bParam1)
				return "WTU_SG_ASL" /*ASSAULT SHOTGUN*/;
			else
				return "WT_SG_ASL" /*Assault Shotgun*/;
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			if (bParam1)
				return "WTU_SNIP_HVY" /*HEAVY SNIPER*/;
			else
				return "WT_SNIP_HVY" /*Heavy Sniper*/;
			break;
	
		case joaat("WEAPON_REMOTESNIPER"):
			if (bParam1)
				return "WTU_SNIP_RMT" /*REMOTE SNIPER*/;
			else
				return "WT_SNIP_RMT" /*Remote Sniper*/;
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			if (bParam1)
				return "WTU_SNIP_RIF" /*SNIPER RIFLE*/;
			else
				return "WT_SNIP_RIF" /*Sniper Rifle*/;
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			if (bParam1)
				return "WTU_GL" /*GRENADE LAUNCHER*/;
			else
				return "WT_GL" /*Grenade Launcher*/;
			break;
	
		case joaat("WEAPON_RPG"):
			if (bParam1)
				return "WTU_RPG" /*RPG*/;
			else
				return "WT_RPG" /*RPG*/;
			break;
	
		case joaat("WEAPON_MINIGUN"):
			if (bParam1)
				return "WTU_MINIGUN" /*MINIGUN*/;
			else
				return "WT_MINIGUN" /*Minigun*/;
			break;
	
		case joaat("WEAPON_GRENADE"):
			if (bParam1)
				return "WTU_GNADE" /*GRENADE*/;
			else
				return "WT_GNADE" /*Grenade*/;
			break;
	
		case joaat("WEAPON_SMOKEGRENADE"):
			if (bParam1)
				return "WTU_GNADE_SMK" /*TEAR GAS*/;
			else
				return "WT_GNADE_SMK" /*Tear Gas*/;
			break;
	
		case joaat("WEAPON_STICKYBOMB"):
			if (bParam1)
				return "WTU_GNADE_STK" /*STICKY BOMB*/;
			else
				return "WT_GNADE_STK" /*Sticky Bomb*/;
			break;
	
		case joaat("WEAPON_MOLOTOV"):
			if (bParam1)
				return "WTU_MOLOTOV" /*MOLOTOV*/;
			else
				return "WT_MOLOTOV" /*Molotov*/;
			break;
	
		case joaat("WEAPON_STUNGUN"):
			if (bParam1)
				return "WTU_STUN" /*STUN GUN*/;
			else
				return "WT_STUN" /*Stun Gun*/;
			break;
	
		case joaat("WEAPON_PETROLCAN"):
			if (bParam1)
				return "WTU_PETROL" /*JERRY CAN*/;
			else
				return "WT_PETROL" /*Jerry Can*/;
			break;
	
		case joaat("WEAPON_ELECTRIC_FENCE"):
			if (bParam1)
				return "WTU_ELCFEN";
			else
				return "WT_ELCFEN";
			break;
	
		case joaat("VEHICLE_WEAPON_TANK"):
			if (bParam1)
				return "WTU_V_TANK" /*TANK CANNON*/;
			else
				return "WT_V_TANK" /*Tank Cannon*/;
			break;
	
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			if (bParam1)
				return "WTU_V_SPACERKT" /*ROCKETS*/;
			else
				return "WT_V_SPACERKT" /*Rockets*/;
			break;
	
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			if (bParam1)
				return "WTU_V_PLRLSR" /*LASER*/;
			else
				return "WT_V_PLRLSR" /*Laser*/;
			break;
	
		case joaat("OBJECT"):
			if (bParam1)
				return "WTU_OBJECT";
			else
				return "WT_OBJECT" /*Object*/;
			break;
	
		case joaat("GADGET_PARACHUTE"):
			if (bParam1)
				return "WTU_PARA" /*PARACHUTE*/;
			else
				return "WT_PARA" /*Parachute*/;
			break;
	
		case joaat("AMMO_RPG"):
			if (bParam1)
				return "WTU_A_RPG" /*ROCKET*/;
			else
				return "WT_A_RPG" /*Rocket*/;
			break;
	
		case joaat("AMMO_TANK"):
			if (bParam1)
				return "WTU_A_TANK" /*TANK*/;
			else
				return "WT_A_TANK" /*Tank*/;
			break;
	
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
				return "WTU_A_SPACERKT" /*ROCKET*/;
			else
				return "WT_A_SPACERKT" /*Rocket*/;
			break;
	
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
				return "WTU_A_PLRLSR" /*LASER*/;
			else
				return "WT_A_PLRLSR" /*Laser*/;
			break;
	
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
				return "WTU_A_ENMYLSR" /*LASER*/;
			else
				return "WT_A_ENMYLSR" /*Laser*/;
			break;
	
		case joaat("WEAPON_KNIFE"):
			if (bParam1)
				return "WTU_KNIFE" /*KNIFE*/;
			else
				return "WT_KNIFE" /*Knife*/;
			break;
	
		case joaat("WEAPON_NIGHTSTICK"):
			if (bParam1)
				return "WTU_NGTSTK" /*NIGHTSTICK*/;
			else
				return "WT_NGTSTK" /*Nightstick*/;
			break;
	
		case joaat("WEAPON_HAMMER"):
			if (bParam1)
				return "WTU_HAMMER" /*HAMMER*/;
			else
				return "WT_HAMMER" /*Hammer*/;
			break;
	
		case joaat("WEAPON_BAT"):
			if (bParam1)
				return "WTU_BAT" /*BASEBALL BAT*/;
			else
				return "WT_BAT" /*Baseball Bat*/;
			break;
	
		case joaat("WEAPON_CROWBAR"):
			if (bParam1)
				return "WTU_CROWBAR" /*CROWBAR*/;
			else
				return "WT_CROWBAR" /*Crowbar*/;
			break;
	
		case joaat("WEAPON_GOLFCLUB"):
			if (bParam1)
				return "WTU_GOLFCLUB" /*GOLF CLUB*/;
			else
				return "WT_GOLFCLUB" /*Golf Club*/;
			break;
	
		case joaat("WEAPON_RAMMED_BY_CAR"):
			if (bParam1)
				return "WTU_PIST" /*PISTOL*/;
			else
				return "WT_PIST" /*Pistol*/;
			break;
	
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			if (bParam1)
				return "WTU_PIST" /*PISTOL*/;
			else
				return "WT_PIST" /*Pistol*/;
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			if (bParam1)
				return "WTU_SMG_ASL" /*ASSAULT SMG*/;
			else
				return "WT_SMG_ASL" /*Assault SMG*/;
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			if (bParam1)
				return "WTU_SG_BLP" /*BULLPUP SHOTGUN*/;
			else
				return "WT_SG_BLP" /*Bullpup Shotgun*/;
			break;
	
		case joaat("WEAPON_PISTOL50"):
			if (bParam1)
				return "WTU_PIST_50" /*PISTOL .50*/;
			else
				return "WT_PIST_50" /*Pistol .50*/;
			break;
	
		case joaat("WEAPON_BOTTLE"):
			if (bParam1)
				return "WTU_BOTTLE" /*BOTTLE*/;
			else
				return "WT_BOTTLE" /*Bottle*/;
			break;
	
		case joaat("WEAPON_GUSENBERG"):
			if (bParam1)
				return "WTU_GUSENBERG" /*GUSENBERG SWEEPER*/;
			else
				return "WT_GUSENBERG" /*Gusenberg Sweeper*/;
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			if (bParam1)
				return "WTU_SNSPISTOL" /*SNS PISTOL*/;
			else
				return "WT_SNSPISTOL" /*SNS Pistol*/;
			break;
	
		case joaat("WEAPON_VINTAGEPISTOL"):
			if (bParam1)
				return "WTU_VPISTOL";
			else
				return "WT_VPISTOL";
			break;
	
		case joaat("WEAPON_DAGGER"):
			if (bParam1)
				return "WTU_DAGGER" /*ANTIQUE CAVALRY DAGGER*/;
			else
				return "WT_DAGGER" /*Antique Cavalry Dagger*/;
			break;
	
		case joaat("WEAPON_FLAREGUN"):
			if (bParam1)
				return "WTU_FLAREGUN";
			else
				return "WT_FLAREGUN" /*Flare Gun*/;
			break;
	
		case joaat("WEAPON_HEAVYPISTOL"):
			if (bParam1)
				return "WTU_HEAVYPSTL" /*HEAVY PISTOL*/;
			else
				return "WT_HEAVYPSTL" /*Heavy Pistol*/;
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			if (bParam1)
				return "WTU_RIFLE_SCBN" /*SPECIAL CARBINE*/;
			else
				return "WT_RIFLE_SCBN" /*Special Carbine*/;
			break;
	
		case joaat("WEAPON_MUSKET"):
			if (bParam1)
				return "WTU_MUSKET" /*MUSKET*/;
			else
				return "WT_MUSKET" /*Musket*/;
			break;
	
		case joaat("WEAPON_FIREWORK"):
			if (bParam1)
				return "WTU_FWRKLNCHR" /*FIREWORK LAUNCHER*/;
			else
				return "WT_FWRKLNCHR" /*Firework Launcher*/;
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (bParam1)
				return "WTU_MKRIFLE" /*MARKSMAN RIFLE*/;
			else
				return "WT_MKRIFLE" /*Marksman Rifle*/;
			break;
	
		case joaat("WEAPON_HEAVYSHOTGUN"):
			if (bParam1)
				return "WTU_HVYSHOT" /*HEAVY SHOTGUN*/;
			else
				return "WT_HVYSHOT" /*Heavy Shotgun*/;
			break;
	
		case joaat("WEAPON_PROXMINE"):
			if (bParam1)
				return "WTU_PRXMINE";
			else
				return "WT_PRXMINE";
			break;
	
		case joaat("WEAPON_HOMINGLAUNCHER"):
			if (bParam1)
				return "WTU_HOMLNCH";
			else
				return "WT_HOMLNCH";
			break;
	
		case joaat("WEAPON_HATCHET"):
			if (bParam1)
				return "WTU_HATCHET";
			else
				return "WT_HATCHET";
			break;
	
		case joaat("WEAPON_RAILGUN"):
			if (bParam1)
				return "WTU_RAILGUN" /*RAILGUN*/;
			else
				return "WT_RAILGUN" /*Railgun*/;
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			if (bParam1)
				return "WTU_COMBATPDW";
			else
				return "WT_COMBATPDW" /*Combat PDW*/;
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			if (bParam1)
				return "WTU_KNUCKLE";
			else
				return "WT_KNUCKLE" /*Knuckle Duster*/;
			break;
	
		case joaat("WEAPON_MARKSMANPISTOL"):
			if (bParam1)
				return "WTU_MKPISTOL";
			else
				return "WT_MKPISTOL" /*Marksman Pistol*/;
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (bParam1)
				return "WTU_BULLRIFLE";
			else
				return "WT_BULLRIFLE";
			break;
	
		case joaat("WEAPON_MACHETE"):
			if (bParam1)
				return "WTU_MACHETE";
			else
				return "WT_MACHETE" /*Machete*/;
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			if (bParam1)
				return "WTU_MCHPIST";
			else
				return "WT_MCHPIST";
			break;
	
		case joaat("WEAPON_FLASHLIGHT"):
			if (bParam1)
				return "WTU_FLASHLIGHT";
			else
				return "WT_FLASHLIGHT";
			break;
	
		case joaat("WEAPON_DBSHOTGUN"):
			if (bParam1)
				return "WTU_DBSHGN";
			else
				return "WT_DBSHGN";
			break;
	
		case joaat("WEAPON_COMPACTRIFLE"):
			if (bParam1)
				return "WTU_CMPRIFLE";
			else
				return "WT_CMPRIFLE";
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			if (bParam1)
				return "WTU_SWBLADE";
			else
				return "WT_SWBLADE";
			break;
	
		case joaat("WEAPON_REVOLVER"):
			if (bParam1)
				return "WTU_REVOLVER";
			else
				return "WT_REVOLVER";
			break;
	
		case joaat("WEAPON_AUTOSHOTGUN"):
			if (bParam1)
				return "WTU_AUTOSHGN";
			else
				return "WT_AUTOSHGN";
			break;
	
		case joaat("WEAPON_BATTLEAXE"):
			if (bParam1)
				return "WTU_BATTLEAXE";
			else
				return "WT_BATTLEAXE";
			break;
	
		case joaat("WEAPON_COMPACTLAUNCHER"):
			if (bParam1)
				return "WTU_CMPGL";
			else
				return "WT_CMPGL";
			break;
	
		case joaat("WEAPON_MINISMG"):
			if (bParam1)
				return "WTU_MINISMG" /*MINI SMG*/;
			else
				return "WT_MINISMG" /*Mini SMG*/;
			break;
	
		case joaat("WEAPON_PIPEBOMB"):
			if (bParam1)
				return "WTU_PIPEBOMB";
			else
				return "WT_PIPEBOMB";
			break;
	
		case joaat("WEAPON_POOLCUE"):
			if (bParam1)
				return "WTU_POOLCUE";
			else
				return "WT_POOLCUE";
			break;
	
		case joaat("WEAPON_WRENCH"):
			if (bParam1)
				return "WTU_WRENCH";
			else
				return "WT_WRENCH";
			break;
	
		case joaat("WEAPON_COUGAR"):
			return "WT_RAGE" /*Rage Pickup*/;
	
		case joaat("VEHICLE_WEAPON_TORPEDO"):
			return "WT_VEH_WEP" /*Vehicle Weapon*/;
	
		case joaat("WEAPON_PISTOL_MK2"):
			if (bParam1)
				return "WTU_PIST2";
			else
				return "WT_PIST2";
			break;
	
		case joaat("WEAPON_SMG_MK2"):
			if (bParam1)
				return "WTU_SMG2";
			else
				return "WT_SMG2";
			break;
	
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (bParam1)
				return "WTU_SNIP_HVY2";
			else
				return "WT_SNIP_HVY2";
			break;
	
		case joaat("WEAPON_COMBATMG_MK2"):
			if (bParam1)
				return "WTU_MG_CBT2";
			else
				return "WT_MG_CBT2";
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (bParam1)
				return "WTU_RIFLE_ASL2";
			else
				return "WT_RIFLE_ASL2";
			break;
	
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (bParam1)
				return "WTU_RIFLE_CBN2";
			else
				return "WT_RIFLE_CBN2";
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			if (bParam1)
				return "WTU_SG_PMP2";
			else
				return "WT_SG_PMP2";
			break;
	
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			if (bParam1)
				return "WTU_SPCARBINE2";
			else
				return "WT_SPCARBINE2";
			break;
	
		case joaat("WEAPON_SNSPISTOL_MK2"):
			if (bParam1)
				return "WTU_SNSPISTOL2";
			else
				return "WT_SNSPISTOL2";
			break;
	
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			if (bParam1)
				return "WTU_MKRIFLE2";
			else
				return "WT_MKRIFLE2";
			break;
	
		case joaat("WEAPON_REVOLVER_MK2"):
			if (bParam1)
				return "WTU_REVOLVER2";
			else
				return "WT_REVOLVER2";
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			if (bParam1)
				return "WTU_BULLRIFLE2";
			else
				return "WT_BULLRIFLE2";
			break;
	
		case joaat("WEAPON_DOUBLEACTION"):
			if (bParam1)
				return "WTU_REV_DA";
			else
				return "WT_REV_DA";
			break;
	
		case joaat("WEAPON_STONE_HATCHET"):
			if (bParam1)
				return "WTU_SHATCHET";
			else
				return "WT_SHATCHET";
			break;
	
		case joaat("WEAPON_RAYPISTOL"):
			if (bParam1)
				return "WTU_RAYPISTOL";
			else
				return "WT_RAYPISTOL";
			break;
	
		case joaat("WEAPON_RAYCARBINE"):
			if (bParam1)
				return "WTU_RAYCARBINE";
			else
				return "WT_RAYCARBINE";
			break;
	
		case joaat("WEAPON_RAYMINIGUN"):
			if (bParam1)
				return "WTU_RAYMINIGUN";
			else
				return "WT_RAYMINIGUN";
			break;
	
		case joaat("WEAPON_NAVYREVOLVER"):
			if (bParam1)
				return "WTU_REV_NV";
			else
				return "WT_REV_NV";
			break;
	
		case joaat("WEAPON_CERAMICPISTOL"):
			if (bParam1)
				return "WTU_CERPST";
			else
				return "WT_CERPST";
			break;
	
		case joaat("WEAPON_GADGETPISTOL"):
			if (bParam1)
				return "WTU_GDGTPST";
			else
				return "WT_GDGTPST";
			break;
	
		case joaat("WEAPON_MILITARYRIFLE"):
			if (bParam1)
				return "WTU_MLTRYRFL";
			else
				return "WT_MLTRYRFL";
			break;
	
		case joaat("WEAPON_COMBATSHOTGUN"):
			if (bParam1)
				return "WTU_CMBSHGN";
			else
				return "WT_CMBSHGN";
			break;
	
		case joaat("VEHICLE_WEAPON_TURRET_DINGHY5_50CAL"):
			if (bParam1)
				return "WTU_VEH_DINGHY_50C";
			else
				return "WTU_VEH_DINGHY_50C";
			break;
	
		case joaat("WEAPON_FERTILIZERCAN"):
			if (bParam1)
				return "WTU_FERTCAN" /*FERTILIZER CAN*/;
			else
				return "WT_FERTCAN" /*Fertilizer Can*/;
			break;
	
		case joaat("WEAPON_HEAVYRIFLE"):
			if (bParam1)
				return "WTU_HEAVYRIFLE";
			else
				return "WT_HEAVYRIFLE";
			break;
	
		case joaat("WEAPON_EMPLAUNCHER"):
			if (bParam1)
				return "WTU_EMPL";
			else
				return "WT_EMPL";
			break;
	
		case joaat("WEAPON_STUNGUN_MP"):
			if (bParam1)
				return "WTU_STNGUNMP";
			else
				return "WT_STNGUNMP";
			break;
	
		case joaat("WEAPON_TACTICALRIFLE"):
			if (bParam1)
				return "WTU_TACRIFLE";
			else
				return "WT_TACRIFLE";
			break;
	
		case joaat("WEAPON_PRECISIONRIFLE"):
			if (bParam1)
				return "WTU_PRCSRIFLE";
			else
				return "WT_PRCSRIFLE";
			break;
	
		case joaat("WEAPON_BZGAS"):
			if (bParam1)
				return "WTU_BZGAS" /*BZ GAS*/;
			else
				return "WTU_BZGAS" /*BZ GAS*/;
			break;
	
		case joaat("WEAPON_STINGER"):
			if (bParam1)
				return "WTU_STINGER";
			else
				return "WTU_STINGER";
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			if (bParam1)
				return "WTU_GR_LAUN_SM";
			else
				return "WTU_GR_LAUN_SM";
			break;
	
		case 465894841:
			if (bParam1)
				return "WTU_PISTOLXM3";
			else
				return "WT_PISTOLXM3";
			break;
	
		case 1703483498:
			if (bParam1)
				return "WTU_CANDYCANE";
			else
				return "WT_CANDYCANE";
			break;
	
		case -22923932:
			if (bParam1)
				return "WTU_RAILGUNXM3";
			else
				return "WT_RAILGUNXM3";
			break;
	
		case 350597077:
			if (bParam1)
				return "WTU_TECPISTOL";
			else
				return "WT_TECPISTOL";
			break;
	
		case joaat("VEHICLE_WEAPON_TRAILER_DUALAA"):
			if (bParam1)
				return "WT_UV_DUALAA" /*TRAILER DUAL AA*/;
			else
				return "WT_V_DUALAA" /*Trailer Dual AA*/;
			break;
	
		case joaat("WEAPON_SNOWBALL"):
			if (bParam1)
				return "FMMC_U_SNOWBALL" /*SNOWBALL*/;
			else
				return "FMMC_SNOWBALL" /*Snowball*/;
			break;
	
		case joaat("WEAPON_BATTLERIFLE"):
			if (bParam1)
				return "WTU_BATTLERIFLE";
			else
				return "WT_BATTLERIFLE";
			break;
	
		case 62870901:
			if (bParam1)
				return "WTU_SNOWLNCHR";
			else
				return "WT_SNOWLNCHR";
			break;
	
		case -624951259:
			if (bParam1)
				return "WTU_STUNROD";
			else
				return "WT_STUNROD";
			break;
	
		case joaat("VEHICLE_WEAPON_INSURGENT_MINIGUN"):
			if (bParam1)
				return "WTU_VEH_INSUR_TT";
			else
				return "WTU_VEH_INSUR_TT";
			break;
	
		case joaat("VEHICLE_WEAPON_TURRET_TECHNICAL"):
			if (bParam1)
				return "WTU_VEH_TECH_TT";
			else
				return "WTU_VEH_TECH_TT";
			break;
	
		case -1916886713:
			if (bParam1)
				return "WTU_STRKLR";
			else
				return "WT_STRKLR";
			break;
	
		default:
			if (func_151(iParam0, &unk) != -1)
				if (bParam1)
					return func_150(&(unk.f_31));
				else
					return func_150(&(unk.f_7));
			break;
	}

	return "WT_INVALID" /*Invalid*/;
}

char* func_150(var uParam0) // Position - 0xA962 (43362)
{
	return uParam0;
}

int func_151(int iParam0, Any* panParam1) // Position - 0xA96C (43372)
{
	int i;
	int numDlcWeapons;

	numDlcWeapons = FILES::GET_NUM_DLC_WEAPONS();

	for (i = 0; i < numDlcWeapons; i = i + 1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(i, panParam1))
			if (panParam1->f_1 == iParam0)
				return i;
	}

	return -1;
}

int func_152(Hash hParam0) // Position - 0xA9A7 (43431)
{
	if (hParam0 == 600)
		return joaat("WEAPON_RAILGUN");
	else if (hParam0 == 500)
		return joaat("WEAPON_MINIGUN");
	else if (hParam0 == 400)
		return joaat("WEAPON_MG");
	else if (hParam0 == 401)
		return joaat("WEAPON_COMBATMG");
	else if (hParam0 == 402)
		return joaat("WEAPON_ASSAULTMG");
	else if (hParam0 == 300)
		return joaat("WEAPON_ASSAULTRIFLE");
	else if (hParam0 == 301)
		return joaat("WEAPON_CARBINERIFLE");
	else if (hParam0 == 302)
		return joaat("WEAPON_ADVANCEDRIFLE");
	else if (hParam0 == 303)
		return joaat("WEAPON_HEAVYRIFLE");
	else if (hParam0 == 200)
		return joaat("WEAPON_PUMPSHOTGUN");
	else if (hParam0 == 201)
		return joaat("WEAPON_SAWNOFFSHOTGUN");
	else if (hParam0 == 202)
		return joaat("WEAPON_ASSAULTSHOTGUN");
	else if (hParam0 == 203)
		return joaat("WEAPON_BULLPUPSHOTGUN");
	else if (hParam0 == 100)
		return joaat("WEAPON_MICROSMG");
	else if (hParam0 == 101)
		return joaat("WEAPON_SMG");
	else if (hParam0 == 102)
		return joaat("WEAPON_ASSAULTSMG");
	else if (hParam0 == 0)
		return joaat("WEAPON_PISTOL");
	else if (hParam0 == 1)
		return joaat("WEAPON_COMBATPISTOL");
	else if (hParam0 == 2)
		return joaat("WEAPON_APPISTOL");
	else if (hParam0 == 3)
		return joaat("WEAPON_PISTOL50");

	return 0;
}

void func_153(int iParam0, int iParam1, int iParam2, int iParam3, const char* sParam4, const char* sParam5) // Position - 0xAB1A (43802)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);

	if (iParam3 > 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /*~1~*/);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /*–*/);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam5);
	return;
}

BOOL func_154(Any* panParam0, Any* panParam1) // Position - 0xAB6C (43884)
{
	if (!IS_GAMER_HANDLE_VALID(*panParam0))
		return false;

	if (!IS_GAMER_HANDLE_VALID(*panParam1))
		return false;

	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(panParam0, panParam1))
		return true;

	return false;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0xABA6 (43942)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_156(var uParam0, var uParam1) // Position - 0xABB6 (43958)
{
	int i;
	int j;
	var unk;
	var unk76;

	unk.f_60 = 6;
	unk.f_67 = 6;

	if (!IS_BIT_SET(uParam0->f_42, 5) && !IS_BIT_SET(uParam0->f_42, 6))
	{
		for (i = 0; i < 12; i = i + 1)
		{
			if (uParam1->[i /*100*/].f_75 != 0)
			{
				for (j = i + 1; j <= 11; j = j + 1)
				{
					if (uParam1->[j /*100*/].f_75 != 0)
					{
						if (uParam1->[j /*100*/].f_75 < uParam1->[i /*100*/].f_75)
						{
							unk76 = uParam1->[j /*100*/].f_75;
							uParam1->[j /*100*/].f_75 = uParam1->[i /*100*/].f_75;
							uParam1->[i /*100*/].f_75 = unk76;
							unk = { uParam1->[j /*100*/] };
							uParam1->[j /*100*/] = { uParam1->[i /*100*/] };
							uParam1->[i /*100*/] = { unk };
						}
						else if (uParam1->[j /*100*/].f_75 == uParam1->[i /*100*/].f_75)
						{
							if (uParam1->[j /*100*/].f_59 != -1)
							{
								if (uParam1->[j /*100*/].f_59 < uParam1->[i /*100*/].f_59 || uParam1->[i /*100*/].f_59 == -1)
								{
									unk76 = uParam1->[j /*100*/].f_75;
									uParam1->[j /*100*/].f_75 = uParam1->[i /*100*/].f_75;
									uParam1->[i /*100*/].f_75 = unk76;
									unk = { uParam1->[j /*100*/] };
									uParam1->[j /*100*/] = { uParam1->[i /*100*/] };
									uParam1->[i /*100*/] = { unk };
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

void func_157(var uParam0, var uParam1) // Position - 0xAD21 (44321)
{
	var unk;
	var unk2;
	var unk3;
	int num;
	int i;

	if (!IS_BIT_SET(uParam0->f_42, 5) && !IS_BIT_SET(uParam0->f_42, 6))
	{
		for (i = 0; i < 12; i = i + 1)
		{
			if (func_160(uParam1, num, &unk, 0))
			{
				uParam1->[num /*100*/].f_75 = 1;
				num = num + 1;
			
				if (num >= 12)
					return;
			}
		
			if (func_160(uParam1, num, &unk2, 1))
			{
				uParam1->[num /*100*/].f_75 = 2;
				num = num + 1;
			
				if (num >= 12)
					return;
			}
		
			if (func_160(uParam1, num, &unk3, 2))
			{
				uParam1->[num /*100*/].f_75 = 3;
				num = num + 1;
			
				if (num >= 12)
					return;
			}
		}
	}
	else
	{
		func_158(uParam1);
	}

	return;
}

void func_158(var uParam0) // Position - 0xADD0 (44496)
{
	int i;
	int j;
	int num;
	var unk;
	int cacheNumberOfRows;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_2097536.f_2704[i] = 0;
		Global_2097536.f_2775[i] = -1;
	}

	unk = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };

	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2097536.f_2826))
	{
		cacheNumberOfRows = STATS::LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Global_2097536.f_2826);
		i = 0;
	
		for (i = 0; i < cacheNumberOfRows; i = i + 1)
		{
			if (i < 12)
			{
				func_159(&Global_2101737);
				num = 0;
				STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(Global_2097536.f_2826, i, &Global_2101737);
				uParam0->[i /*100*/] = { Global_2101737.f_1 };
				uParam0->[i /*100*/].f_16 = { Global_2101737.f_17 };
				uParam0->[i /*100*/].f_32 = { Global_2101737.f_33 };
				uParam0->[i /*100*/].f_45 = { Global_2101737.f_46 };
				uParam0->[i /*100*/].f_58 = Global_2101737.f_59;
				uParam0->[i /*100*/].f_59 = Global_2101737.f_60;
				Global_2097536.f_2708 = Global_2101737.f_62;
				Global_2097536.f_2769 = Global_2101737.f_63;
				num = 0;
			
				if (IS_BIT_SET(Global_2101737.f_61, 1))
					num = 1;
				else if (IS_BIT_SET(Global_2101737.f_61, 2))
					num = 2;
				else if (IS_BIT_SET(Global_2101737.f_61, 3))
					num = 3;
			
				Global_2097536.f_2704[num - 1] = Global_2097536.f_2704[num - 1] + 1;
				uParam0->[i /*100*/].f_75 = num;
			
				if (uParam0->[i /*100*/].f_59 != -1)
				{
					if (IS_BIT_SET(Global_2101737.f_61, 0))
						uParam0->[i /*100*/].f_74 = 1;
					else
						uParam0->[i /*100*/].f_74 = 0;
				
					if (func_154(&(uParam0->[i /*100*/].f_32), &unk))
						Global_2097536.f_2775[num - 1] = 0;
				}
			
				for (j = 0; j < Global_2101737.f_62; j = j + 1)
				{
					if (IS_BIT_SET(Global_2101737.f_63, j))
						uParam0->[i /*100*/].f_67[j] = Global_2101737.f_97[j];
					else
						uParam0->[i /*100*/].f_60[j] = Global_2101737.f_64[j];
				}
			}
		}
	}

	return;
}

void func_159(int iParam0) // Position - 0xAFE1 (45025)
{
	var unk;
	int i;

	*iParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_1), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_17), "", 64);
	iParam0->f_33 = { unk };
	iParam0->f_46 = { unk };
	iParam0->f_59 = 0;
	iParam0->f_60 = 0;
	iParam0->f_61 = 0;
	iParam0->f_62 = 0;
	iParam0->f_63 = 0;

	for (i = 0; i < 32; i = i + 1)
	{
		iParam0->f_64[i] = 0f;
		iParam0->f_97[i] = 0;
	}

	return;
}

BOOL func_160(var uParam0, int iParam1, var uParam2, int iParam3) // Position - 0xB057 (45143)
{
	int num;

	if (*uParam2 == 0)
	{
		if (Global_2097536[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			uParam0->[iParam1 /*100*/] = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680[iParam3 /*16*/] = { Global_2097536[iParam3 /*901*/][0 /*75*/] };
			Global_2101680.f_49[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_67[Global_2097536.f_2779];
			Global_2101680.f_53[iParam3] = Global_2097536[iParam3 /*901*/][0 /*75*/].f_60[Global_2097536.f_2779];
			*uParam2 = *uParam2 + 1;
			return true;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_2097536.f_2775[iParam3] > 0)
		{
			uParam0->[iParam1 /*100*/] = { Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] /*75*/] };
			*uParam2 = *uParam2 + 1;
			return true;
		}
		else
		{
			if (Global_2097536.f_2775[iParam3] < 0)
			{
				TEXT_LABEL_ASSIGN_STRING(&uParam0->[iParam1 /*100*/], PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
				uParam0->[iParam1 /*100*/].f_32 = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
				uParam0->[iParam1 /*100*/].f_59 = -1;
				uParam0->[iParam1 /*100*/].f_67[0] = -1;
				uParam0->[iParam1 /*100*/].f_67[1] = -1;
				uParam0->[iParam1 /*100*/].f_67[2] = -1;
				uParam0->[iParam1 /*100*/].f_67[3] = -1;
				uParam0->[iParam1 /*100*/].f_60[0] = -1f;
				uParam0->[iParam1 /*100*/].f_60[1] = -1f;
				uParam0->[iParam1 /*100*/].f_60[2] = -1f;
				uParam0->[iParam1 /*100*/].f_60[3] = -1f;
				*uParam2 = *uParam2 + 1;
				return true;
			}
		
			*uParam2 = *uParam2 + 1;
		}
	}
	else if (*uParam2 % 2 == 0)
	{
		num = *uParam2 / 2;
	
		if (Global_2097536.f_2775[iParam3] - num >= 1)
		{
			if (Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] - num /*75*/].f_59 > 0)
			{
				uParam0->[iParam1 /*100*/] = { Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] - num /*75*/] };
				*uParam2 = *uParam2 + 1;
				return true;
			}
		}
	}
	else
	{
		num = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam2 / 2));
	
		if (Global_2097536.f_2775[iParam3] + num < 12 && Global_2097536.f_2775[iParam3] + num > 0)
		{
			if (Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] + num /*75*/].f_59 > 1)
			{
				uParam0->[iParam1 /*100*/] = { Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] + num /*75*/] };
				*uParam2 = *uParam2 + 1;
				return true;
			}
		}
	}

	*uParam2 = *uParam2 + 1;
	return false;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0xB300 (45824)
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

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0xB35E (45918)
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

void func_163(int iParam0, int iParam1, int iParam2, const char* sParam3) // Position - 0xB3A3 (45987)
{
	MISC::SET_BIT(&iParam2, 7);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
	GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_164(var uParam0) // Position - 0xB3D7 (46039)
{
	if (!Global_2097532)
	{
		if (!_STOPWATCH_IS_INITIALIZED(&(Global_2097536.f_2827)))
		{
			_STOPWATCH_INITIALIZE(&(Global_2097536.f_2827), true, false);
			return false;
		}
		else if (!_STOPWATCH_HAS_TIME_PASSED(&(Global_2097536.f_2827), 1000, true))
		{
			return false;
		}
	}

	if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE() || !NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() || Global_2097536.f_2832 != 0)
	{
		MISC::CLEAR_BIT(&(uParam0->f_42), 4);
		return true;
	}

	if (!IS_BIT_SET(uParam0->f_42, 4))
	{
		func_199(uParam0);
		MISC::SET_BIT(&(uParam0->f_42), 4);
		return false;
	}
	else if (IS_BIT_SET(uParam0->f_42, 5))
	{
		uParam0->[0] = 2;
		uParam0->[1] = 1;
		uParam0->[2] = 3;
		return true;
	}

	if (!func_197(uParam0))
		return false;

	if (!func_195(uParam0))
		return false;

	if (!func_182(uParam0))
		return false;

	if (!IS_BIT_SET(uParam0->f_42, 6))
	{
		func_108(&Global_2101867);
		func_157(uParam0, &Global_2101867);
		func_156(uParam0, &Global_2101867);
		MISC::SET_BIT(&(uParam0->f_42), 6);
	}

	if (!IS_BIT_SET(uParam0->f_42, 7))
	{
		if (!_STOPWATCH_IS_INITIALIZED(&(Global_2097536.f_2830)))
			_STOPWATCH_INITIALIZE(&(Global_2097536.f_2830), true, false);
		else if (_STOPWATCH_HAS_TIME_PASSED(&(Global_2097536.f_2830), 30000, true))
			MISC::SET_BIT(&(uParam0->f_42), 7);
	
		if (func_179(&Global_2101867))
		{
		}
		else
		{
			return false;
		}
	
		if (func_176(&Global_2101867))
		{
		}
		else
		{
			return false;
		}
	
		if (func_169(&Global_2101867))
		{
			func_165(&Global_2101867);
			MISC::SET_BIT(&(uParam0->f_42), 7);
			func_165(&Global_2101867);
		}
		else
		{
			return false;
		}
	}

	return true;
}

void func_165(var uParam0) // Position - 0xB590 (46480)
{
	int i;
	int j;
	int num;

	num = func_168(Global_2097536.f_2826);

	if (Global_2100721.f_81[num] != 0)
		func_167(-1, num);

	for (i = 0; i < 12; i = i + 1)
	{
		func_159(&Global_2101737);
	
		if (uParam0->[i /*100*/].f_75 != 0)
		{
			Global_2101737 = Global_2097536.f_2826;
			Global_2101737.f_1 = { uParam0->[i /*100*/] };
		
			if (MISC::ARE_STRINGS_EQUAL(&(uParam0->[i /*100*/].f_16), ""))
				Global_2101737.f_17 = { uParam0->[i /*100*/] };
			else
				Global_2101737.f_17 = { uParam0->[i /*100*/].f_16 };
		
			Global_2101737.f_33 = { uParam0->[i /*100*/].f_32 };
		
			if (IS_GAMER_HANDLE_VALID(uParam0->[i /*100*/].f_45))
				Global_2101737.f_46 = { uParam0->[i /*100*/].f_45 };
			else
				Global_2101737.f_46 = { uParam0->[i /*100*/].f_32 };
		
			Global_2101737.f_59 = uParam0->[i /*100*/].f_58;
			Global_2101737.f_60 = uParam0->[i /*100*/].f_59;
			Global_2101737.f_62 = Global_2097536.f_2708;
			Global_2101737.f_63 = Global_2097536.f_2770;
		
			if (uParam0->[i /*100*/].f_74)
				MISC::SET_BIT(&(Global_2101737.f_61), 0);
			else
				MISC::CLEAR_BIT(&(Global_2101737.f_61), 0);
		
			MISC::SET_BIT(&(Global_2101737.f_61), uParam0->[i /*100*/].f_75);
		
			for (j = 0; j < Global_2101737.f_62; j = j + 1)
			{
				if (IS_BIT_SET(Global_2101737.f_63, j))
					Global_2101737.f_97[j] = uParam0->[i /*100*/].f_67[j];
				else
					Global_2101737.f_64[j] = uParam0->[i /*100*/].f_60[j];
			}
		
			Global_2100721.f_81[num] = Global_2097536.f_2826;
			STATS::LEADERBOARDS_CACHE_DATA_ROW(&Global_2101737);
		}
	}

	Global_2100721.f_87[num /*3*/] = { _GET_PLAYER_COORDS(PLAYER::PLAYER_ID()) };
	return;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0xB777 (46967)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_167(int iParam0, int iParam1) // Position - 0xB78A (46986)
{
	int i;

	if (iParam1 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2100721.f_81[iParam1]))
			STATS::LEADERBOARDS_CLEAR_CACHE_DATA_ID(Global_2100721.f_81[iParam1]);
	
		Global_2100721.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0))
			STATS::LEADERBOARDS_CLEAR_CACHE_DATA_ID(iParam0);
	
		for (i = 0; i < 5; i = i + 1)
		{
			if (Global_2100721.f_81[i] == iParam0)
				Global_2100721.f_81[i] = 0;
		}
	}

	return;
}

int func_168(int iParam0) // Position - 0xB806 (47110)
{
	int i;
	int num;
	int num2;
	int cacheTime;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_2100721.f_81[i] == iParam0)
			return i;
	}

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_2100721.f_81[i] == 0)
		{
			return i;
		}
		else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2100721.f_81[i]))
		{
			cacheTime = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_2100721.f_81[i]);
		
			if (cacheTime > num2)
			{
				num = i;
				num2 = cacheTime;
			}
		}
		else
		{
			return i;
		}
	}

	return num;
}

BOOL func_169(var uParam0) // Position - 0xB899 (47257)
{
	int i;
	int j;

	switch (uParam0->[0 /*100*/].f_76)
	{
		case 0:
			func_175(uParam0);
		
			if (IS_PLAYSTATION_PLATFORM() || IS_XBOX_PLATFORM() && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				uParam0->[0 /*100*/].f_76 = 3;
				return false;
			}
		
			for (i = 0; i < 12; i = i + 1)
			{
				if (IS_GAMER_HANDLE_VALID(uParam0->[i /*100*/].f_32))
				{
					if (!func_172(&(uParam0->[i /*100*/].f_32), &Global_2103169))
					{
						Global_2103169[Global_2103169.f_206 /*13*/] = { uParam0->[i /*100*/].f_32 };
						Global_2103169.f_206 = Global_2103169.f_206 + 1;
					}
				}
			}
		
			if (Global_2103169.f_206 > 0)
				uParam0->[0 /*100*/].f_76 = 1;
			else
				uParam0->[0 /*100*/].f_76 = 3;
			break;
	
		case 1:
			if (func_170(&(uParam0->[1 /*100*/].f_76), &(Global_2103169.f_206), &Global_2103169, &(Global_2103169.f_157)))
				uParam0->[0 /*100*/].f_76 = 2;
			break;
	
		case 2:
			if (Global_2103169.f_206 > 12)
				Global_2103169.f_206 = 12;
		
			for (i = 0; i < 12; i = i + 1)
			{
				for (j = 0; j < Global_2103169.f_206; j = j + 1)
				{
					if (IS_GAMER_HANDLE_VALID(uParam0->[i /*100*/].f_32) && IS_GAMER_HANDLE_VALID(Global_2103169[j /*13*/]))
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(uParam0->[i /*100*/].f_32), &Global_2103169[j /*13*/]))
							uParam0->[i /*100*/].f_80 = { Global_2103169.f_157[j /*4*/] };
				}
			}
		
			uParam0->[0 /*100*/].f_76 = 3;
			break;
	
		case 3:
			return true;
	}

	return false;
}

BOOL func_170(var uParam0, int iParam1, Any* panParam2, var uParam3) // Position - 0xBA46 (47686)
{
	var unk;
	int i;

	switch (*uParam0)
	{
		case 0:
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_START(panParam2, *iParam1);
				*uParam0 = 1;
			}
			break;
	
		case 1:
			if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS())
					*uParam0 = 2;
				else
					*uParam0 = 3;
			break;
	
		case 2:
			for (i = 0; i < *iParam1; i = i + 1)
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_NEW(&panParam2->[i /*13*/], &unk))
					func_171(&unk, &uParam3->[i /*4*/]);
			}
		
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
			else
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
		
			*uParam0 = 3;
			break;
	
		case 3:
			return true;
	}

	return false;
}

void func_171(Any* panParam0, char* sParam1) // Position - 0xBAFF (47871)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(panParam0, 35, sParam1);
	return;
}

BOOL func_172(Any* panParam0, Any* panParam1) // Position - 0xBB11 (47889)
{
	int i;

	for (i = 0; i < 12; i = i + 1)
	{
		if (IS_GAMER_HANDLE_VALID(panParam1->[i /*13*/]))
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(panParam0, &panParam1->[i /*13*/]))
				return true;
	}

	return false;
}

BOOL IS_XBOX_PLATFORM() // Position - 0xBB50 (47952)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0xBB66 (47974)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_175(var uParam0) // Position - 0xBB7C (47996)
{
	int i;

	for (i = 0; i < 12; i = i + 1)
	{
		func_113(&Global_2103169[i /*13*/]);
		TEXT_LABEL_ASSIGN_STRING(&Global_2103169.f_157[i /*4*/], "", 16);
	}

	if (uParam0->[0 /*100*/].f_76 > 0)
	{
		uParam0->[0 /*100*/].f_76 = 0;
		uParam0->[1 /*100*/].f_76 = 0;
	
		if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
	}

	if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
		NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();

	Global_2103169.f_206 = 0;
	return;
}

BOOL func_176(var uParam0) // Position - 0xBBED (48109)
{
	int i;

	if (MISC::IS_PC_VERSION())
	{
		return true;
	}
	else if (IS_XBOX_PLATFORM() || IS_PLAYSTATION_PLATFORM())
	{
		if (!func_178(uParam0))
			return false;
	}
	else
	{
		for (i = 0; i < 12; i = i + 1)
		{
			if (!func_177(&(uParam0->[i /*100*/].f_78), &(uParam0->[i /*100*/].f_32), &uParam0->[i /*100*/]))
				return false;
		}
	}

	return true;
}

BOOL func_177(var uParam0, Any* panParam1, char* sParam2) // Position - 0xBC5B (48219)
{
	if (*uParam0 == 2)
		return true;

	switch (*uParam0)
	{
		case 0:
			if (IS_GAMER_HANDLE_VALID(*panParam1))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(panParam1))
				{
					if (IS_XBOX_PLATFORM() || IS_PLAYSTATION_PLATFORM())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(panParam1))
							*uParam0 = 1;
					}
					else if (MISC::IS_XBOX360_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(panParam1))
							*uParam0 = 1;
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(panParam1), 64);
					
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (IS_PLAYSTATION_PLATFORM())
						{
						}
						else
						{
							MISC::IS_PC_VERSION();
						}
					
						*uParam0 = 2;
					}
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
	
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(panParam1))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
						TEXT_LABEL_ASSIGN_STRING(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(panParam1), 64);
				
					*uParam0 = 2;
					return true;
				}
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1)), 64);
				*uParam0 = 2;
			}
			break;
	
		case 2:
			return true;
	}

	return false;
}

BOOL func_178(var uParam0) // Position - 0xBD6C (48492)
{
	int displaynamesFromHandles;
	int i;
	int num;

	if (!IS_XBOX_PLATFORM() && !IS_PLAYSTATION_PLATFORM())
		return true;

	if (uParam0->[0 /*100*/].f_78 == 2)
		return true;

	switch (uParam0->[0 /*100*/].f_78)
	{
		case 0:
			Global_2097536.f_3183 = 0;
		
			for (i = 0; i < 12; i = i + 1)
			{
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2833[i /*16*/], "", 64);
				func_113(&Global_2097536.f_3026[i /*13*/]);
			
				if (IS_GAMER_HANDLE_VALID(uParam0->[i /*100*/].f_32))
				{
					Global_2097536.f_3026[Global_2097536.f_3183 /*13*/] = { uParam0->[i /*100*/].f_32 };
					Global_2097536.f_3183 = Global_2097536.f_3183 + 1;
				}
			}
		
			if (Global_2097536.f_3183 > 0)
			{
				uParam0->[0 /*100*/].f_79 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&(Global_2097536.f_3026), Global_2097536.f_3183);
				uParam0->[0 /*100*/].f_78 = 1;
			}
			else
			{
				uParam0->[0 /*100*/].f_78 = 2;
			}
			break;
	
		case 1:
			displaynamesFromHandles = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(uParam0->[0 /*100*/].f_79, &(Global_2097536.f_2833), Global_2097536.f_3183);
		
			if (displaynamesFromHandles == 0)
			{
				for (i = 0; i < 12; i = i + 1)
				{
					if (IS_GAMER_HANDLE_VALID(uParam0->[i /*100*/].f_32))
					{
						uParam0->[i /*100*/] = { Global_2097536.f_2833[num /*16*/] };
						num = num + 1;
					}
				}
			
				uParam0->[0 /*100*/].f_78 = 2;
			}
			else if (displaynamesFromHandles == -1)
			{
				uParam0->[0 /*100*/].f_78 = 2;
			}
			else
			{
				return false;
			}
			break;
	
		case 2:
			uParam0->[0 /*100*/].f_79 = -1;
			return true;
	}

	return false;
}

BOOL func_179(var uParam0) // Position - 0xBF02 (48898)
{
	int i;

	if (IS_XBOX_PLATFORM() || IS_PLAYSTATION_PLATFORM())
	{
		for (i = 0; i < 12; i = i + 1)
		{
			if (!func_181(&(uParam0->[i /*100*/].f_77), &(uParam0->[i /*100*/].f_16), &(uParam0->[i /*100*/].f_84), &(Global_2097536.f_2833), &(uParam0->[i /*100*/].f_79)))
				return false;
		}
	}
	else
	{
		for (i = 0; i < 12; i = i + 1)
		{
			if (!func_180(&(uParam0->[i /*100*/].f_77), uParam0->[i /*100*/].f_16, &(uParam0->[i /*100*/].f_84)))
				return false;
		}
	}

	return true;
}

BOOL func_180(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17) // Position - 0xBF9F (49055)
{
	var gamerHandle;

	if (*uParam0 == 2)
	{
		return true;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
	{
		*uParam0 = 2;
		return true;
	}

	NETWORK::NETWORK_HANDLE_FROM_USER_ID(&uParam1, &gamerHandle, 13);

	switch (*uParam0)
	{
		case 0:
			if (IS_GAMER_HANDLE_VALID(gamerHandle))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&gamerHandle))
				{
					if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM() || IS_PLAYSTATION_PLATFORM())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&gamerHandle))
							*uParam0 = 1;
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&gamerHandle), 64);
					
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (IS_PLAYSTATION_PLATFORM())
						{
						}
						else
						{
							MISC::IS_PC_VERSION();
						}
					
						*uParam0 = 2;
					}
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&gamerHandle)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
	
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&gamerHandle))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
						TEXT_LABEL_ASSIGN_STRING(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&gamerHandle), 64);
				
					*uParam0 = 2;
					return true;
				}
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&gamerHandle)), 64);
				*uParam0 = 2;
			}
			break;
	
		case 2:
			return true;
	}

	return false;
}

BOOL func_181(var uParam0, const char* sParam1, char* sParam2, Any anParam3, var uParam4) // Position - 0xC0C4 (49348)
{
	int displaynamesFromHandles;
	var unk;

	if (!IS_XBOX_PLATFORM() && !IS_PLAYSTATION_PLATFORM())
		return true;

	if (*uParam0 == 2)
	{
		return true;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = 2;
		return true;
	}

	unk = 1;
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(sParam1, &unk[0 /*13*/], 13);

	switch (*uParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&anParam3->[0 /*16*/], "", 64);
		
			if (IS_GAMER_HANDLE_VALID(unk[0 /*13*/]))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&unk[0 /*13*/]))
				{
					*uParam4 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&unk, 1);
					*uParam0 = 1;
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&unk[0 /*13*/])), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
	
		case 1:
			displaynamesFromHandles = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(*uParam4, anParam3, 1);
		
			if (displaynamesFromHandles == 0)
			{
				*sParam2 = { anParam3->[0 /*16*/] };
				*uParam0 = 2;
			}
			else if (displaynamesFromHandles == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return false;
			}
			break;
	
		case 2:
			*uParam4 = -1;
			return true;
	}

	return false;
}

BOOL func_182(var uParam0) // Position - 0xC1CA (49610)
{
	var unk;
	var unk99;
	int i;
	int j;
	int rowDataInt;
	int num;
	int num2;
	int k;
	BOOL flag;
	int offset;
	BOOL flag2;
	int num3;
	var gamerHandle;

	unk.f_19.f_1 = 4;
	num = -1;
	offset = 2;
	gamerHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };

	switch (uParam0->[offset])
	{
		case 0:
			Global_2097536.f_2775[offset] = -1;
			Global_2097536.f_2704[offset] = 0;
			Global_2097157.f_374 = -1;
		
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &gamerHandle))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						uParam0->[offset] = 1;
						return false;
					}
				}
				else
				{
					uParam0->[offset] = 3;
					return true;
				}
			}
			else
			{
				uParam0->[offset] = 3;
				return true;
			}
			break;
	
		case 1:
			uParam0->f_44.f_1 = 3;
			unk99 = uParam0->f_44;
			unk99.f_1 = uParam0->f_44.f_1;
		
			if (func_193(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &gamerHandle, func_194(), false, 0, 0))
			{
				func_192(&unk99, &(uParam0->f_44));
			
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&unk99))
				{
					if (unk99.f_3 > 0)
					{
						k = 0;
						i = 0;
					
						if (func_194())
						{
							for (k = 0; k < unk99.f_3; k = k + 1)
							{
								STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(k, &unk);
							
								if (Global_2097157.f_374 < 0)
									if (func_154(&unk, &gamerHandle) || func_154(&unk, &(Global_2097157.f_361)))
										Global_2097157.f_374 = unk.f_96;
							
								if (num < 0)
									if (IS_BIT_SET(Global_2097157.f_142.f_2, 0))
										if (Global_2097157.f_211.f_36[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(k, 0))
											num = k;
									else if (Global_2097157.f_211.f_3[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(k, 0))
										num = k;
							
								func_191(&unk);
							}
						
							if (num < 0)
								num = unk99.f_3;
						}
					
						k = 0;
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &unk);
					
						if (unk.f_96 <= 1)
						{
							if (Global_2097536.f_2704[offset] < 11)
							{
								if (func_194() && num == 0)
								{
									func_190(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], unk.f_96);
									Global_2097536.f_2775[offset] = 0;
									Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
								}
							
								if (func_194() && func_154(&unk, &gamerHandle) || func_154(&unk, &(Global_2097157.f_361)))
								{
								}
								else
								{
									if (func_154(&unk, &gamerHandle))
									{
										num = 0;
										Global_2097536.f_2775[offset] = 0;
									}
								
									TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], { unk.f_13 }, 16);
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_32 = { unk };
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_59 = unk.f_96;
								
									if (func_189(uParam0->f_44))
									{
										rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
									
										if (rowDataInt == 1)
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 1;
										else
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 0;
									}
								
									if (func_205(uParam0->f_44))
										TEXT_LABEL_COPY(&(Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_16), { unk.f_19.f_1[1 /*16*/].f_8 }, 16);
								
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_74 = 1;
									j = 0;
								
									for (j = 0; j < Global_2097536.f_2708; j = j + 1)
									{
										if (IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[j]))
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_67[j] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[j]);
										else
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_60[j] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[j]);
									}
								
									Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
								}
							
								flag = true;
							}
						}
					
						if (!flag)
							Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
					
						if (!func_194())
							num = unk99.f_5;
					
						if (num > 6)
							num2 = num - 6;
						else if (flag)
							num2 = 1;
						else
							num2 = 0;
					
						k = num2;
						func_191(&unk);
					
						for (k = num2; k <= unk99.f_3 - 1; k = k + 1)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(k, &unk);
						
							if (Global_2097536.f_2704[offset] < 11 && unk.f_96 > 1)
							{
								if (func_194() && num == k)
								{
									if (!func_154(&(Global_2097536[offset /*901*/][0 /*75*/].f_32), &gamerHandle))
									{
										func_190(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], unk.f_96);
										Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
										Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
									}
								}
							
								if (func_194() && func_154(&unk, &gamerHandle) || func_154(&unk, &(Global_2097157.f_361)))
								{
								}
								else if (Global_2097536.f_2704[offset] < 11)
								{
									if (IS_GAMER_HANDLE_VALID(unk) && !func_154(&unk, &(Global_2097536[offset /*901*/][0 /*75*/].f_32)))
									{
										if (func_154(&unk, &gamerHandle))
											if (Global_2097536.f_2775[offset] < 0)
												Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
									
										TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], { unk.f_13 }, 16);
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_32 = { unk };
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_59 = unk.f_96;
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_74 = 1;
									
										if (func_189(uParam0->f_44))
										{
											rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(k, Global_2097536.f_2709);
										
											if (rowDataInt == 1)
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 1;
											else
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 0;
										}
									
										if (func_205(uParam0->f_44))
											TEXT_LABEL_COPY(&(Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_16), { unk.f_19.f_1[1 /*16*/].f_8 }, 16);
									
										i = 0;
									
										for (i = 0; i < Global_2097536.f_2708; i = i + 1)
										{
											if (IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[i]))
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_67[i] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(k, Global_2097536.f_2710[i]);
											else
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_60[i] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(k, Global_2097536.f_2710[i]);
										}
									
										Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
									}
								}
							}
						
							func_191(&unk);
						}
					
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					
						if (flag)
						{
							if (Global_2097536.f_2775[offset] == -1 && func_194())
							{
								if (Global_2097536.f_2704[offset] >= 1)
									func_190(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] - 1 /*75*/].f_59 + 1);
								else
									func_190(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], 1);
							
								Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
								Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
							}
						
							uParam0->[offset] = 3;
						}
						else
						{
							uParam0->[offset] = 2;
						}
					}
					else
					{
						if (!flag)
							Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
					
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[offset] = -1;
						uParam0->[offset] = 2;
					}
				}
				else
				{
					func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[offset] = -1;
					uParam0->[offset] = 2;
					MISC::SET_BIT(&(Global_2097536.f_2832), offset);
				}
			}
			break;
	
		case 2:
			if (Global_2097536.f_2775[offset] == -1)
				num3 = 11;
			else
				num3 = 1;
		
			uParam0->f_44.f_1 = 3;
			unk99 = uParam0->f_44;
			unk99.f_1 = uParam0->f_44.f_1;
		
			if (func_184(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, num3))
			{
				func_192(&unk99, &(uParam0->f_44));
			
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&unk99))
				{
					if (unk99.f_3 > 0)
					{
						for (i = 0; i < unk99.f_3; i = i + 1)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(i, &unk);
							flag2 = false;
						
							if (Global_2097536[offset /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[offset /*901*/][0 /*75*/].f_59 <= 0)
								flag2 = true;
						
							if (Global_2097536.f_2704[offset] < 11 || flag2)
							{
								if (func_194() && func_154(&unk, &gamerHandle) || func_154(&unk, &(Global_2097157.f_361)))
								{
								}
								else if (i == 0 || flag2)
								{
									TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][0 /*75*/], { unk.f_13 }, 16);
									Global_2097536[offset /*901*/][0 /*75*/].f_32 = { unk };
									Global_2097536[offset /*901*/][0 /*75*/].f_59 = unk.f_96;
								
									if (func_189(uParam0->f_44))
									{
										rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
									
										if (rowDataInt == 1)
											Global_2097536[offset /*901*/][0 /*75*/].f_58 = 1;
										else
											Global_2097536[offset /*901*/][0 /*75*/].f_58 = 0;
									}
								
									if (func_205(uParam0->f_44))
										TEXT_LABEL_COPY(&(Global_2097536[offset /*901*/][0 /*75*/].f_16), { unk.f_19.f_1[1 /*16*/].f_8 }, 16);
								
									Global_2097536[offset /*901*/][0 /*75*/].f_74 = 1;
									j = 0;
								
									for (j = 0; j < Global_2097536.f_2708; j = j + 1)
									{
										if (IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[j]))
											Global_2097536[offset /*901*/][0 /*75*/].f_67[j] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[j]);
										else
											Global_2097536[offset /*901*/][0 /*75*/].f_60[j] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[j]);
									}
								
									if (Global_2097536.f_2704[offset] == 0)
									{
										if (flag2)
										{
										}
										else
										{
											Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
										}
									}
								}
								else if (Global_2097536.f_2704[offset] < 11)
								{
									TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], { unk.f_13 }, 16);
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_32 = { unk };
								
									if (func_189(uParam0->f_44))
									{
										rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(i, Global_2097536.f_2709);
									
										if (rowDataInt == 1)
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 1;
										else
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 0;
									}
								
									if (func_205(uParam0->f_44))
										TEXT_LABEL_COPY(&(Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_16), { unk.f_19.f_1[1 /*16*/].f_8 }, 16);
								
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_59 = unk.f_96;
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_74 = 1;
									j = 0;
								
									for (j = 0; j < Global_2097536.f_2708; j = j + 1)
									{
										if (IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[j]))
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_67[j] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(i, Global_2097536.f_2710[j]);
										else
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_60[j] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(i, Global_2097536.f_2710[j]);
									}
								
									if (i != 0)
										Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
								}
							}
						
							func_191(&unk);
						}
					}
				
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					uParam0->[offset] = 3;
				}
				else
				{
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					MISC::SET_BIT(&(Global_2097536.f_2832), offset);
					Global_2097536.f_2704[offset] = 0;
					uParam0->[offset] = 3;
				}
			
				if (Global_2097536.f_2775[offset] == -1 && func_194())
				{
					if (Global_2097536.f_2704[offset] >= 1)
						func_190(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] - 1 /*75*/].f_59 + 1);
					else
						func_190(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], 1);
				
					Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
					Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
				}
			}
			break;
	
		case 3:
			func_183(offset, Global_2097157.f_374);
			uParam0->[offset] = 4;
			break;
	
		case 4:
			return true;
	}

	return false;
}

void func_183(int iParam0, int iParam1) // Position - 0xCFEE (53230)
{
	int i;

	if (func_194() && Global_2097536.f_2704[iParam0] > Global_2097536.f_2775[iParam0] && Global_2097536.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59)
		{
			for (i = 0; i < Global_2097536.f_2704[iParam0]; i = i + 1)
			{
				if (i != Global_2097536.f_2775[iParam0])
					if (Global_2097536[iParam0 /*901*/][i /*75*/].f_59 >= Global_2097536[iParam0 /*901*/][Global_2097536.f_2775[iParam0] /*75*/].f_59)
						if (Global_2097536[iParam0 /*901*/][i /*75*/].f_59 < iParam1 || iParam1 == -1)
							Global_2097536[iParam0 /*901*/][i /*75*/].f_59 = Global_2097536[iParam0 /*901*/][i /*75*/].f_59 + 1;
			}
		}
	}
	else
	{
		!func_194();
		Global_2097536.f_2704[iParam0] <= Global_2097536.f_2775[iParam0];
		Global_2097536.f_2775[iParam0] < 0;
	}

	return;
}

BOOL func_184(var uParam0, var uParam1, Any* panParam2, int iParam3, int iParam4) // Position - 0xD113 (53523)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_187() && !func_186())
			{
				func_185(*panParam2);
			
				if (STATS::LEADERBOARDS2_READ_BY_RANK(panParam2, iParam3, iParam4))
				{
					*uParam0 = *uParam0 + 1;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
	
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*panParam2, panParam2->f_1, -1))
				*uParam0 = *uParam0 + 1;
			break;
	
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*panParam2, panParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0 = *uParam0 + 1;
			}
			else
			{
				*uParam1 = 0;
				*uParam0 = *uParam0 + 1;
			}
			break;
	
		case 3:
			return true;
	}

	return false;
}

void func_185(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) // Position - 0xD1C9 (53705)
{
	Global_2097152 = true;
	_STOPWATCH_RESET(&(Global_2097152.f_1), true, false);
	Global_2097152.f_3 = uParam0;
	Global_2097152.f_4 = uParam0.f_1;
	return;
}

BOOL func_186() // Position - 0xD1F4 (53748)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_208())
		return true;

	return false;
}

BOOL func_187() // Position - 0xD212 (53778)
{
	if (STATS::LEADERBOARDS_READ_ANY_PENDING() || Global_2097152)
	{
		func_188();
		return true;
	}

	return false;
}

void func_188() // Position - 0xD234 (53812)
{
	if (_STOPWATCH_HAS_TIME_PASSED(&(Global_2097152.f_1), 120000, true))
	{
		STATS::LEADERBOARDS_READ_CLEAR(Global_2097152.f_3, Global_2097152.f_4, -1);
		Global_2097152 = false;
		_STOPWATCH_DESTROY(&(Global_2097152.f_1));
	}

	return;
}

BOOL func_189(int iParam0) // Position - 0xD26F (53871)
{
	if (iParam0 == 815 || iParam0 == 824 || iParam0 == 825 || iParam0 == 826 || iParam0 == 827 || iParam0 == 828 || iParam0 == 849)
		return true;

	return false;
}

void func_190(var uParam0, char* sParam1, int iParam2) // Position - 0xD2CD (53965)
{
	int num;
	int i;

	if (func_205(uParam0->f_44))
	{
		TEXT_LABEL_COPY(sParam1, { Global_2097157.f_355 }, 16);
		sParam1->f_32 = { Global_2097157.f_361 };
		TEXT_LABEL_COPY(&(sParam1->f_16), { Global_2097157.f_349 }, 16);
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(sParam1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
		sParam1->f_32 = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
	}

	sParam1->f_59 = iParam2;

	if (func_189(uParam0->f_44))
	{
		num = Global_2097157.f_211.f_36[Global_2097536.f_2709];
	
		if (num == 1)
			sParam1->f_58 = 1;
		else
			sParam1->f_58 = 0;
	}

	sParam1->f_74 = 1;

	for (i = 0; i < Global_2097536.f_2708; i = i + 1)
	{
		if (IS_BIT_SET(Global_2097157.f_142.f_2, Global_2097536.f_2710[i]))
			sParam1->f_67[i] = Global_2097157.f_211.f_36[Global_2097536.f_2710[i]];
		else
			sParam1->f_60[i] = Global_2097157.f_211.f_3[Global_2097536.f_2710[i]];
	}

	return;
}

void func_191(var uParam0) // Position - 0xD3D7 (54231)
{
	int i;

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
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&uParam0->f_19.f_1[i /*16*/], "", 32);
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_19.f_1[i /*16*/].f_8), "", 32);
	}

	uParam0->f_85 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_86), "", 32);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
	return;
}

void func_192(var uParam0, var uParam1) // Position - 0xD485 (54405)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
	return;
}

BOOL func_193(var uParam0, var uParam1, Any* panParam2, int iParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7, int iParam8) // Position - 0xD4A0 (54432)
{
	int any;
	float num;

	any = Global_2097157.f_211.f_36[0];
	num = Global_2097157.f_211.f_3[0];

	if (bParam6)
	{
		any = iParam7;
		num = iParam8;
	}

	switch (*uParam0)
	{
		case 0:
			if (!func_187() && !func_186())
			{
				func_185(*panParam2);
			
				if (bParam5)
				{
					if (IS_BIT_SET(Global_2097157.f_142.f_2, 0))
					{
						if (STATS::LEADERBOARDS2_READ_BY_SCORE_INT(panParam2, any, iParam3))
						{
							*uParam0 = *uParam0 + 1;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (STATS::LEADERBOARDS2_READ_BY_SCORE_FLOAT(panParam2, num, iParam3))
					{
						*uParam0 = *uParam0 + 1;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (STATS::LEADERBOARDS2_READ_BY_RADIUS(panParam2, iParam3, panParam4))
				{
					*uParam0 = *uParam0 + 1;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
	
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*panParam2, panParam2->f_1, -1))
				*uParam0 = *uParam0 + 1;
			break;
	
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*panParam2, panParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0 = *uParam0 + 1;
			}
			else
			{
				*uParam1 = 0;
				*uParam0 = *uParam0 + 1;
			}
			break;
	
		case 3:
			return true;
	}

	return false;
}

BOOL func_194() // Position - 0xD5D5 (54741)
{
	if (Global_2097532 && Global_2097533)
		return true;

	return false;
}

BOOL func_195(var uParam0) // Position - 0xD5F2 (54770)
{
	var unk;
	var unk99;
	int i;
	int friendCount;
	int num;
	int num2;
	int j;
	int rowDataInt;
	BOOL flag;
	int num3;
	var unk107;

	unk.f_19.f_1 = 4;
	num = -1;
	num3 = 1;
	unk107 = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };

	switch (uParam0->[1])
	{
		case 0:
			friendCount = NETWORK::NETWORK_GET_FRIEND_COUNT();
			Global_2097536.f_2775[1] = -1;
			Global_2097157.f_374 = -1;
			Global_2097536.f_2704[num3] = 0;
		
			if (friendCount > 0)
			{
				if (func_194())
					flag = false;
				else
					flag = true;
			
				if (func_196(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], flag, 0, 100))
				{
					func_192(&unk99, &(uParam0->f_44));
				
					if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&unk99))
					{
						if (func_194())
						{
							j = 0;
						
							for (j = 0; j < unk99.f_3; j = j + 1)
							{
								if (num < 0)
								{
									STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(j, &unk);
								
									if (func_205(uParam0->f_44))
										if (Global_2097157.f_374 < 0)
											if (func_154(&unk, &(Global_2097157.f_361)))
												Global_2097157.f_374 = unk.f_96;
								
									if (IS_BIT_SET(Global_2097157.f_142.f_2, 0))
										if (Global_2097157.f_211.f_36[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(j, 0))
											num = j;
									else if (Global_2097157.f_211.f_3[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(j, 0))
										num = j;
								
									func_191(&unk);
								}
							}
						
							if (num < 0)
								num = unk99.f_3;
						}
					
						j = 0;
					
						if (func_194() && num == 0)
						{
							if (Global_2097536.f_2704[num3] < 11)
							{
								func_190(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], 1);
								Global_2097536.f_2775[num3] = 0;
								Global_2097536.f_2704[num3] = Global_2097536.f_2704[num3] + 1;
							}
						}
					
						if (unk99.f_3 > 0)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &unk);
						
							if (func_194() && func_154(&unk, &unk107) || func_154(&unk, &(Global_2097157.f_361)))
							{
							}
							else if (IS_GAMER_HANDLE_VALID(unk) && Global_2097536.f_2704[num3] < 11)
							{
								if (func_154(&unk, &unk107))
								{
									num = 0;
									Global_2097536.f_2775[1] = 0;
								}
							
								TEXT_LABEL_COPY(&Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/], { unk.f_13 }, 16);
								Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/].f_32 = { unk };
								Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/].f_59 = 1;
							
								if (func_189(uParam0->f_44))
								{
									rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
								
									if (rowDataInt == 1)
										Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/].f_58 = 1;
									else
										Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/].f_58 = 0;
								}
							
								if (func_205(uParam0->f_44))
									TEXT_LABEL_COPY(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/].f_16), { unk.f_19.f_1[1 /*16*/].f_8 }, 16);
							
								Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/].f_74 = 1;
							
								for (i = 0; i < Global_2097536.f_2708; i = i + 1)
								{
									if (IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[i]))
										Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/].f_67[i] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[i]);
									else
										Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/].f_60[i] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[i]);
								}
							
								Global_2097536.f_2704[1] = Global_2097536.f_2704[1] + 1;
							}
							else
							{
								func_191(&unk);
								STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
								func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_2097536.f_2704[1] = 0;
								uParam0->[1] = 1;
							
								if (Global_2097536.f_2775[num3] == -1 && func_194())
								{
									if (Global_2097536.f_2704[num3] >= 1)
										func_190(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] - 1 /*75*/].f_59 + 1);
									else
										func_190(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], 1);
								
									Global_2097536.f_2775[num3] = Global_2097536.f_2704[num3];
									Global_2097536.f_2704[num3] = Global_2097536.f_2704[num3] + 1;
								}
							
								return false;
							}
						
							func_191(&unk);
						}
						else
						{
							Global_2097536.f_2704[1] = 0;
							func_191(&unk);
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
							func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						
							if (Global_2097536.f_2775[num3] == -1 && func_194())
							{
								if (Global_2097536.f_2704[num3] >= 1)
									func_190(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] - 1 /*75*/].f_59 + 1);
								else
									func_190(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], 1);
							
								Global_2097536.f_2775[num3] = Global_2097536.f_2704[num3];
								Global_2097536.f_2704[num3] = Global_2097536.f_2704[num3] + 1;
							}
						
							uParam0->[1] = 1;
							return false;
						}
					
						if (!func_194())
							num = unk99.f_5;
					
						if (num > 6)
							num2 = num - 6;
						else
							num2 = 1;
					
						j = num2;
					
						for (j = num2; j <= unk99.f_3 - 1; j = j + 1)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(j, &unk);
						
							if (Global_2097536.f_2704[num3] < 11 && unk.f_96 > 1)
							{
								if (func_194() && num == j)
								{
									if (!func_154(&(Global_2097536[num3 /*901*/][0 /*75*/].f_32), &unk107))
									{
										func_190(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], unk.f_96);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = j + 1;
										Global_2097536.f_2775[num3] = Global_2097536.f_2704[num3];
										Global_2097536.f_2704[num3] = Global_2097536.f_2704[num3] + 1;
									}
								}
							
								if (func_194() && func_154(&unk, &unk107) || func_154(&unk, &(Global_2097157.f_361)))
								{
								}
								else if (Global_2097536.f_2704[1] < 12)
								{
									if (IS_GAMER_HANDLE_VALID(unk) && !func_154(&unk, &(Global_2097536[num3 /*901*/][0 /*75*/].f_32)))
									{
										if (func_154(&unk, &unk107))
											if (Global_2097536.f_2775[1] < 0)
												Global_2097536.f_2775[1] = Global_2097536.f_2704[1];
									
										TEXT_LABEL_COPY(&Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/], { unk.f_13 }, 16);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_32 = { unk };
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = j + 1;
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_74 = 1;
									
										if (func_189(uParam0->f_44))
										{
											rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(j, Global_2097536.f_2709);
										
											if (rowDataInt == 1)
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 1;
											else
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 0;
										}
									
										if (func_205(uParam0->f_44))
											TEXT_LABEL_COPY(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_16), { unk.f_19.f_1[1 /*16*/].f_8 }, 16);
									
										for (i = 0; i < Global_2097536.f_2708; i = i + 1)
										{
											if (IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[i]))
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_67[i] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(j, Global_2097536.f_2710[i]);
											else
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_60[i] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(j, Global_2097536.f_2710[i]);
										}
									
										Global_2097536.f_2704[1] = Global_2097536.f_2704[1] + 1;
									}
								}
							}
						
							func_191(&unk);
						}
					
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						uParam0->[1] = 1;
					
						if (Global_2097536.f_2775[num3] == -1 && func_194())
						{
							if (Global_2097536.f_2704[num3] >= 1)
								func_190(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] - 1 /*75*/].f_59 + 1);
							else
								func_190(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], 1);
						
							Global_2097536.f_2775[num3] = Global_2097536.f_2704[num3];
							Global_2097536.f_2704[num3] = Global_2097536.f_2704[num3] + 1;
						}
					
						return false;
					}
					else
					{
						func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2704[1] = 0;
						uParam0->[1] = 1;
						MISC::SET_BIT(&(Global_2097536.f_2832), 1);
						return false;
					}
				}
			}
			else
			{
				func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_2097536.f_2704[1] = 0;
				uParam0->[1] = 1;
				return false;
			}
			break;
	
		case 1:
			func_183(num3, Global_2097157.f_374);
			uParam0->[1] = 2;
			break;
	
		case 2:
			return true;
	}

	return false;
}

BOOL func_196(var uParam0, var uParam1, Any* panParam2, Any* panParam3, Any anParam4, BOOL bParam5, int iParam6, int iParam7) // Position - 0xDFEC (57324)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_187() && !func_186())
			{
				func_185(*panParam2);
			
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(panParam2, panParam3, anParam4, bParam5, iParam6, iParam7))
				{
					*uParam0 = *uParam0 + 1;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
	
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*panParam2, panParam2->f_1, -1))
				*uParam0 = *uParam0 + 1;
			break;
	
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*panParam2, panParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0 = *uParam0 + 1;
			}
			else
			{
				*uParam1 = 0;
				*uParam0 = *uParam0 + 1;
			}
			break;
	
		case 3:
			return true;
	}

	return false;
}

BOOL func_197(var uParam0) // Position - 0xE0A8 (57512)
{
	var unk;
	var unk14;
	var unk112;
	int i;
	int j;
	int rowDataInt;
	int num;
	int num2;
	int k;
	BOOL flag;
	int offset;
	BOOL flag2;
	int num3;

	unk14.f_19.f_1 = 4;
	num = -1;
	offset = 0;
	unk = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };

	switch (uParam0->[offset])
	{
		case 0:
			Global_2097536.f_2775[offset] = -1;
			Global_2097536.f_2704[offset] = 0;
			Global_2097157.f_374 = -1;
			Global_2097533 = false;
		
			if (func_198(uParam0->f_44))
				if (!Global_2097533)
					Global_2097533 = true;
			else if (Global_2097533)
				Global_2097533 = false;
		
			!Global_2097533;
		
			if (func_193(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &unk, func_194(), false, 0, 0))
			{
				func_192(&unk112, &(uParam0->f_44));
			
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&unk112))
				{
					if (unk112.f_3 > 0)
					{
						k = 0;
						i = 0;
					
						if (func_194())
						{
							for (k = 0; k < unk112.f_3; k = k + 1)
							{
								STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(k, &unk14);
							
								if (Global_2097157.f_374 < 0)
									if (func_154(&unk14, &unk) || func_154(&unk14, &(Global_2097157.f_361)))
										Global_2097157.f_374 = unk14.f_96;
							
								if (num < 0)
									if (IS_BIT_SET(Global_2097157.f_142.f_2, 0))
										if (Global_2097157.f_211.f_36[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(k, 0))
											num = k;
									else if (Global_2097157.f_211.f_3[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(k, 0))
										num = k;
							
								func_191(&unk14);
							}
						
							if (num < 0)
								num = unk112.f_3;
						}
					
						k = 0;
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &unk14);
					
						if (unk14.f_96 <= 1)
						{
							if (Global_2097536.f_2704[offset] < 11)
							{
								if (func_194() && num == 0)
								{
									func_190(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], unk14.f_96);
									Global_2097536.f_2775[offset] = 0;
									Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
								}
							
								if (func_194() && func_154(&unk14, &unk) || func_154(&unk14, &(Global_2097157.f_361)))
								{
								}
								else
								{
									if (func_154(&unk14, &unk))
									{
										num = 0;
										Global_2097536.f_2775[offset] = 0;
									}
								
									TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], { unk14.f_13 }, 16);
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_32 = { unk14 };
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_59 = unk14.f_96;
								
									if (func_189(uParam0->f_44))
									{
										rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
									
										if (rowDataInt == 1)
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 1;
										else
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 0;
									}
								
									if (func_205(uParam0->f_44))
										TEXT_LABEL_COPY(&(Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_16), { unk14.f_19.f_1[1 /*16*/].f_8 }, 16);
								
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_74 = 1;
								
									for (i = 0; i < Global_2097536.f_2708; i = i + 1)
									{
										if (IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[i]))
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_67[i] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[i]);
										else
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_60[i] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[i]);
									}
								
									Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
								}
							
								flag = true;
							}
						}
					
						if (!flag)
							Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
					
						if (!func_194())
							num = unk112.f_5;
					
						if (num > 6)
							num2 = num - 6;
						else if (flag)
							num2 = 1;
						else
							num2 = 0;
					
						k = num2;
						func_191(&unk14);
					
						for (k = num2; k <= unk112.f_3 - 1; k = k + 1)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(k, &unk14);
						
							if (Global_2097536.f_2704[offset] < 11 && unk14.f_96 > 1)
							{
								if (func_194() && num == k)
								{
									if (!func_154(&(Global_2097536[offset /*901*/][0 /*75*/].f_32), &unk14))
									{
										func_190(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], unk14.f_96);
										Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
										Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
									}
								}
							
								if (func_194() && func_154(&unk14, &unk) || func_154(&unk14, &(Global_2097157.f_361)))
								{
								}
								else if (Global_2097536.f_2704[offset] < 11)
								{
									if (IS_GAMER_HANDLE_VALID(unk14) && !func_154(&(Global_2097536[offset /*901*/][0 /*75*/].f_32), &unk14))
									{
										if (func_154(&unk14, &unk))
											if (Global_2097536.f_2775[offset] < 0)
												Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
									
										TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], { unk14.f_13 }, 16);
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_32 = { unk14 };
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_59 = unk14.f_96;
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_74 = 1;
									
										if (func_189(uParam0->f_44))
										{
											rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(k, Global_2097536.f_2709);
										
											if (rowDataInt == 1)
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 1;
											else
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 0;
										}
									
										if (func_205(uParam0->f_44))
											TEXT_LABEL_COPY(&(Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_16), { unk14.f_19.f_1[1 /*16*/].f_8 }, 16);
									
										i = 0;
									
										for (i = 0; i < Global_2097536.f_2708; i = i + 1)
										{
											if (IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[i]))
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_67[i] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(k, Global_2097536.f_2710[i]);
											else
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_60[i] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(k, Global_2097536.f_2710[i]);
										}
									
										Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
									}
								}
							}
						
							func_191(&unk14);
						}
					
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					
						if (flag)
						{
							if (Global_2097536.f_2775[offset] == -1 && func_194())
							{
								if (Global_2097536.f_2704[offset] >= 1)
									func_190(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] - 1 /*75*/].f_59 + 1);
								else
									func_190(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], 1);
							
								Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
								Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
							}
						
							uParam0->[offset] = 2;
						}
						else
						{
							uParam0->[offset] = 1;
						}
					}
					else
					{
						if (!flag)
							Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
					
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[offset] = -1;
						uParam0->[offset] = 1;
					}
				}
				else
				{
					func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2775[offset] = -1;
					uParam0->[offset] = 1;
					MISC::SET_BIT(&(Global_2097536.f_2832), offset);
				}
			}
			break;
	
		case 1:
			if (Global_2097536.f_2775[offset] == -1)
				num3 = 11;
			else
				num3 = 1;
		
			if (func_184(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, num3))
			{
				func_192(&unk112, &(uParam0->f_44));
			
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&unk112))
				{
					if (unk112.f_3 > 0)
					{
						for (i = 0; i < unk112.f_3; i = i + 1)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(i, &unk14);
						
							if (func_194() && func_154(&unk14, &unk) || func_154(&unk14, &(Global_2097157.f_361)))
							{
							}
							else
							{
								flag2 = false;
							
								if (Global_2097536[offset /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[offset /*901*/][0 /*75*/].f_59 <= 0)
									flag2 = true;
							
								if (Global_2097536.f_2704[offset] < 11 || flag2)
								{
									if (i == 0 || flag2)
									{
										TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][0 /*75*/], { unk14.f_13 }, 16);
										Global_2097536[offset /*901*/][0 /*75*/].f_32 = { unk14 };
										Global_2097536[offset /*901*/][0 /*75*/].f_59 = unk14.f_96;
									
										if (func_189(uParam0->f_44))
										{
											rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
										
											if (rowDataInt == 1)
												Global_2097536[offset /*901*/][0 /*75*/].f_58 = 1;
											else
												Global_2097536[offset /*901*/][0 /*75*/].f_58 = 0;
										}
									
										if (func_205(uParam0->f_44))
											TEXT_LABEL_COPY(&(Global_2097536[offset /*901*/][0 /*75*/].f_16), { unk14.f_19.f_1[1 /*16*/].f_8 }, 16);
									
										Global_2097536[offset /*901*/][0 /*75*/].f_74 = 1;
										j = 0;
									
										for (j = 0; j < Global_2097536.f_2708; j = j + 1)
										{
											if (IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[j]))
												Global_2097536[offset /*901*/][i /*75*/].f_67[j] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(i, Global_2097536.f_2710[j]);
											else
												Global_2097536[offset /*901*/][i /*75*/].f_60[j] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(i, Global_2097536.f_2710[j]);
										}
									
										if (Global_2097536.f_2704[offset] == 0)
										{
											if (flag2)
											{
											}
											else
											{
												Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
											}
										}
										else if (Global_2097536.f_2704[offset] == 1 && Global_2097536.f_2775[offset] == -1)
										{
											Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
										}
									}
									else if (Global_2097536.f_2704[offset] < 11)
									{
										TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], { unk14.f_13 }, 16);
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_32 = { unk14 };
									
										if (func_189(uParam0->f_44))
										{
											rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(i, Global_2097536.f_2709);
										
											if (rowDataInt == 1)
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 1;
											else
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 0;
										}
									
										if (func_205(uParam0->f_44))
											TEXT_LABEL_COPY(&(Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_16), { unk14.f_19.f_1[1 /*16*/].f_8 }, 16);
									
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_59 = unk14.f_96;
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_74 = 1;
										j = 0;
									
										for (j = 0; j < Global_2097536.f_2708; j = j + 1)
										{
											if (IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[j]))
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_67[j] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(i, Global_2097536.f_2710[j]);
											else
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_60[j] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(i, Global_2097536.f_2710[j]);
										}
									
										if (i != 0)
											Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
									}
								}
							}
						
							func_191(&unk14);
						}
					}
				
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					uParam0->[offset] = 2;
				}
				else
				{
					MISC::SET_BIT(&(Global_2097536.f_2832), offset);
					func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2704[offset] = 0;
					uParam0->[offset] = 2;
					Global_2097536.f_2704[1] = 0;
					uParam0->[1] = 1;
					Global_2097536.f_2704[2] = 0;
					uParam0->[2] = 3;
				}
			}
		
			if (Global_2097536.f_2775[offset] == -1 && func_194())
			{
				if (Global_2097536.f_2704[offset] >= 1)
					func_190(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] - 1 /*75*/].f_59 + 1);
				else
					func_190(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], 1);
			
				Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
				Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
			}
			break;
	
		case 2:
			func_183(offset, Global_2097157.f_374);
			uParam0->[offset] = 3;
			break;
	
		case 3:
			return true;
	}

	return false;
}

BOOL func_198(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) // Position - 0xEED4 (61140)
{
	int i;

	if (Global_2097532)
	{
		if (Global_2097157.f_5 != 0)
		{
			if (Global_2097157.f_5 == iParam0)
			{
				if (Global_2097157.f_5.f_2 == iParam0.f_3)
				{
					for (i = 0; i < iParam0.f_3; i = i + 1)
					{
						if (!MISC::ARE_STRINGS_EQUAL(&Global_2097157.f_5.f_2.f_1[i /*16*/], &iParam0.f_3.f_1[i /*16*/]) || !MISC::ARE_STRINGS_EQUAL(&(Global_2097157.f_5.f_2.f_1[i /*16*/].f_8), &(iParam0.f_3.f_1[i /*16*/].f_8)))
							return false;
					}
				
					return true;
				}
			}
		}
	}

	return false;
}

void func_199(var uParam0) // Position - 0xEF6C (61292)
{
	int cacheTime;

	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2097536.f_2826))
	{
		cacheTime = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_2097536.f_2826);
	
		if (cacheTime < 300000)
		{
			MISC::SET_BIT(&(uParam0->f_42), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_42), 5);
			func_167(Global_2097536.f_2826, -1);
		}
	}

	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0xEFBC (61372)
{
	return uParam0->f_1;
}

void func_201(int iParam0) // Position - 0xEFC8 (61384)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, 255, 255, 255, 0, 0);

	return;
}

void func_202(int iParam0, var uParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xEFE8 (61416)
{
	char* componentType;
	var clanDesc;
	var unk35;
	BOOL flag;
	var gamerHandle;
	int address;
	var gamerHandle2;
	int address2;

	componentType = "";

	if (IS_BIT_SET(iParam2, 4))
	{
		componentType = "SCLB_GLOBAL" /*GLOBAL*/;
	}
	else if (IS_BIT_SET(iParam2, 5))
	{
		*uParam1 = *uParam1 + 1;
		componentType = "SCLB_FRIENDS" /*FRIENDS*/;
	}
	else if (IS_BIT_SET(iParam2, 6))
	{
		*uParam1 = *uParam1 + 1;
	
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if (IS_PLAYSTATION_PLATFORM() || IS_XBOX_PLATFORM() && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				componentType = "SCLB_CREW" /*CREW*/;
			}
			else
			{
				gamerHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
				{
					NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&clanDesc, 35, &gamerHandle);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(clanDesc.f_1)))
					{
						componentType = "STRING";
						unk35 = { clanDesc.f_1 };
						flag = true;
					}
					else
					{
						componentType = "SCLB_CREW" /*CREW*/;
					}
				}
				else
				{
					componentType = "SCLB_CREW" /*CREW*/;
				}
			}
		}
		else
		{
			componentType = "SCLB_CREW" /*CREW*/;
		}
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*uParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);

	if (flag)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(componentType);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&unk35);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(componentType);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	*uParam1 = *uParam1 + 1;

	if (bParam4)
	{
		address = 0;
		MISC::SET_BIT(&address, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*uParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(address);
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			componentType = "SCLB_NOT_ONL" /*Sign in to view leaderboard data.*/;
		else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
			componentType = "SCLB_NO_ROS" /*Rockstar Games Online Services are unavailable right now. Please try again later.*/;
		else if (Global_2097536.f_2832 != 0)
			componentType = "SCLB_READ_FAIL" /*Unable to retrieve leaderboard data. Please try again later.*/;
		else
			componentType = "HUD_PERM" /*Your profile does not have the correct permissions to access this functionality.*/;
	
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(componentType);
		GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*uParam1 = *uParam1 + 1;
	}
	else if (bParam3)
	{
		if (IS_BIT_SET(iParam2, 4))
		{
			componentType = "SCLB_NO_GLOBAL" /*No data available yet for this leaderboard.*/;
		}
		else if (IS_BIT_SET(iParam2, 5))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() > 0)
				componentType = "SCLB_NO_FRNDS" /*No friends listed on this leaderboard.*/;
			else
				componentType = "SCLB_NO_FRNDSb" /*Search for friends on Rockstar Games to add and compare your scores with.*/;
		}
		else if (IS_BIT_SET(iParam2, 6))
		{
			if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				if (NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
					{
						if (IS_PLAYSTATION_PLATFORM() || IS_XBOX_PLATFORM() && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
						{
							componentType = "SCLB_NO_CREWc" /*No Crew members listed on this leaderboard.*/;
						}
						else
						{
							gamerHandle2 = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
						
							if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle2))
							{
								NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&clanDesc, 35, &gamerHandle2);
							
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(clanDesc.f_1)))
								{
									componentType = "SCLB_NO_CREWb" /*No ~a~ members listed on this leaderboard.*/;
									unk35 = { clanDesc.f_1 };
									flag = true;
								}
								else
								{
									componentType = "SCLB_NO_CREWc" /*No Crew members listed on this leaderboard.*/;
								}
							}
							else
							{
								componentType = "SCLB_NO_CREWa" /*Visit ~HUD_COLOUR_SOCIAL_CLUB~rockstargames.com~s~ to participate in a Crew.*/;
							}
						}
					}
					else
					{
						componentType = "SCLB_NO_CREWa" /*Visit ~HUD_COLOUR_SOCIAL_CLUB~rockstargames.com~s~ to participate in a Crew.*/;
					}
				}
				else
				{
					componentType = "SCLB_NO_CREWe" /*Online Policies have been updated. Visit the Players menu, and press ~INPUT_FRONTEND_Y~ to view and accept the updated policies.*/;
				}
			}
			else
			{
				componentType = "SCLB_NO_CREWd" /*Sign up to Rockstar Games to gain access to Crew leaderboards.*/;
			}
		}
	
		address2 = 0;
		MISC::SET_BIT(&address2, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*uParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(address2);
	
		if (flag)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(componentType);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&unk35);
			GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(componentType);
			GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		}
	
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*uParam1 = *uParam1 + 1;
	}

	return;
}

void func_203(int iParam0, char* sParam1, var uParam2, int iParam3) // Position - 0xF2C0 (62144)
{
	int i;

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();

	for (i = 0; i < iParam3; i = i + 1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&uParam2->[i /*6*/]);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_204(int iParam0, char* sParam1, const char* sParam2, char* sParam3, BOOL bParam4, int iParam5) // Position - 0xF302 (62210)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MULTIPLAYER_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);

	if (iParam5 == -1)
	{
		if (bParam4)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	}
	else
	{
		if (bParam4)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	}

	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_205(int iParam0) // Position - 0xF392 (62354)
{
	if (iParam0 == 825 || iParam0 == 828)
		return true;

	return false;
}

void func_206(int iParam0, int iParam1) // Position - 0xF3B4 (62388)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

int func_207() // Position - 0xF3D1 (62417)
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("SC_LEADERBOARD");
}

BOOL func_208() // Position - 0xF3E1 (62433)
{
	return func_209(PLAYER::PLAYER_ID());
}

BOOL func_209(Player plParam0) // Position - 0xF3F1 (62449)
{
	switch (func_210(plParam0))
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
			return 0;
	
		default:
		
	}

	return 1;
}

int func_210(Player plParam0) // Position - 0xF451 (62545)
{
	return Global_1845270[plParam0 /*892*/].f_193;
}

void func_211(int iParam0) // Position - 0xF464 (62564)
{
	Global_1577952 = iParam0;
	return;
}

void func_212(int iParam0) // Position - 0xF472 (62578)
{
	Global_1675263.f_1163 = iParam0;
	return;
}

void func_213(BOOL bParam0) // Position - 0xF483 (62595)
{
	if (bParam0)
		func_215();

	func_214(4, -1);
	func_214(6, -1);
	func_214(7, -1);
	func_214(3, -1);
	func_214(1, -1);
	func_214(2, -1);
	func_214(11, -1);
	func_214(13, -1);
	func_214(14, -1);
	func_214(16, -1);
	return;
}

void func_214(int iParam0, int iParam1) // Position - 0xF4D4 (62676)
{
	MISC::SET_BIT(&(Global_1673706.f_1047), iParam0);

	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				Global_1673706.f_170[iParam1] = 1;
			break;
	}

	return;
}

void func_215() // Position - 0xF50A (62730)
{
	Global_2739945.f_4668 = 0;
	return;
}

void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0xF51A (62746)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			*pStopwatch = NETWORK::GET_NETWORK_TIME();
		else
			*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*pStopwatch = MISC::GET_GAME_TIMER();

	pStopwatch->f_1 = 1;
	return;
}

int func_217(int* piParam0, BOOL bParam1) // Position - 0xF557 (62807)
{
	int instructionalKey;
	int npUnavailableReason;
	BOOL flag;

	instructionalKey = 2;

	if (Global_2103068.f_2 + 5 < MISC::GET_FRAME_COUNT() && Global_2103068.f_2 > 0)
	{
		_STOPWATCH_DESTROY(&Global_2103068);
		_STOPWATCH_DESTROY(&(Global_2103068.f_49));
		*piParam0 = 0;
		Global_2103068.f_2 = 0;
		func_225(false);
	}

	Global_2103068.f_2 = MISC::GET_FRAME_COUNT();
	npUnavailableReason = -1;

	if (IS_PLAYSTATION_PLATFORM())
		if (NETWORK::NETWORK_IS_NP_AVAILABLE() == false)
			npUnavailableReason = NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON();

	if (IS_PLAYSTATION_PLATFORM() && npUnavailableReason == 4 || npUnavailableReason == 2 || npUnavailableReason == 1 || npUnavailableReason == 5 || !func_223() && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_IS_REFRESHING_ROS_CREDENTIALS())
		{
			func_220(&(Global_2103068.f_3), func_222(&(Global_2103068.f_3)));
		
			if (!IS_BIT_SET(*piParam0, 4))
			{
				MISC::SET_BIT(piParam0, 4);
				TEXT_LABEL_ASSIGN_STRING(&(Global_2103068.f_3.f_1), "", 64);
				func_218(&(Global_2103068.f_3), false);
			}
		}
		else
		{
			if (npUnavailableReason == 4)
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /*Alert*/, "HUD_PROFILECHNG" /*Please change to a profile with correct permissions.*/, instructionalKey, 0, false, -1, 0, 0, true, 0);
			else if (npUnavailableReason == 2)
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /*Alert*/, "HUD_GAMEUPD_G" /*The game requires an update to access this feature.*/, instructionalKey, 0, false, -1, 0, 0, true, 0);
			else if (npUnavailableReason == 1)
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /*Alert*/, "HUD_SYSTUPD_G" /*The system requires an update to access this feature.*/, instructionalKey, 0, false, -1, 0, 0, true, 0);
			else if (npUnavailableReason == 5)
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /*Alert*/, "SCLB_NO_INT" /*No internet connection detected, establish a connection to access this feature.*/, instructionalKey, 0, false, -1, 0, 0, true, 0);
			else if (!func_223())
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /*Alert*/, "SCLB_NO_ROS" /*Rockstar Games Online Services are unavailable right now. Please try again later.*/, instructionalKey, 0, false, -1, 0, 0, true, 0);
		
			if (!IS_BIT_SET(*piParam0, 0))
			{
				if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
					MISC::SET_BIT(piParam0, 0);
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
			{
				_STOPWATCH_DESTROY(&(Global_2103068.f_49));
				_STOPWATCH_DESTROY(&Global_2103068);
				*piParam0 = 0;
				Global_2103068.f_2 = 0;
				func_225(false);
				return 1;
			}
		}
	}
	else
	{
		func_220(&(Global_2103068.f_3), func_222(&(Global_2103068.f_3)));
	
		if (_STOPWATCH_IS_INITIALIZED(&(Global_2103068.f_49)) && !_STOPWATCH_HAS_TIME_PASSED(&(Global_2103068.f_49), 2000, true) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			MISC::SET_BIT(piParam0, 3);
			TEXT_LABEL_ASSIGN_STRING(&(Global_2103068.f_3.f_1), "", 64);
			func_218(&(Global_2103068.f_3), false);
		}
		else if (!IS_BIT_SET(*piParam0, 3))
		{
			if (!IS_BIT_SET(*piParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(false);
				MISC::SET_BIT(piParam0, 1);
				TEXT_LABEL_ASSIGN_STRING(&(Global_2103068.f_3.f_1), "", 64);
				func_218(&(Global_2103068.f_3), false);
			}
		}
	
		if (_STOPWATCH_IS_INITIALIZED(&Global_2103068))
			if (!_STOPWATCH_HAS_TIME_PASSED(&Global_2103068, 4000, true))
				flag = true;
	
		if (!flag)
		{
			if (bParam1)
			{
				if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /*Alert*/, "STORE_NOT_ONL" /*Log in to Rockstar Games to access the Store.*/, instructionalKey, 0, false, -1, 0, 0, true, 0);
					else
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /*Alert*/, "SCLB_NO_INT" /*No internet connection detected, establish a connection to access this feature.*/, instructionalKey, 0, false, -1, 0, 0, true, 0);
				
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						if (!IS_BIT_SET(*piParam0, 0))
						{
							if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
								MISC::SET_BIT(piParam0, 0);
						}
						else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
						{
							_STOPWATCH_DESTROY(&Global_2103068);
							*piParam0 = 0;
							Global_2103068.f_2 = 0;
							func_225(false);
							return 1;
						}
					}
				}
				else
				{
					_STOPWATCH_DESTROY(&Global_2103068);
					*piParam0 = 0;
					Global_2103068.f_2 = 0;
					func_225(false);
					return 1;
				}
			}
			else if (IS_BIT_SET(*piParam0, 3))
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /*Alert*/, "SCLB_SIGN_OUT", instructionalKey, 0, false, -1, 0, 0, true, 0);
				else
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /*Alert*/, "SCLB_NO_INT" /*No internet connection detected, establish a connection to access this feature.*/, instructionalKey, 0, false, -1, 0, 0, true, 0);
			
				if (!IS_BIT_SET(*piParam0, 0))
				{
					if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
						MISC::SET_BIT(piParam0, 0);
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
				{
					_STOPWATCH_DESTROY(&(Global_2103068.f_49));
					_STOPWATCH_DESTROY(&Global_2103068);
					*piParam0 = 0;
					Global_2103068.f_2 = 0;
					func_225(false);
					return 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /*Alert*/, "SCLB_NOT_ONL" /*Sign in to view leaderboard data.*/, instructionalKey, 0, false, -1, 0, 0, true, 0);
				else
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /*Alert*/, "SCLB_NO_INT" /*No internet connection detected, establish a connection to access this feature.*/, instructionalKey, 0, false, -1, 0, 0, true, 0);
			
				if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
					if (!IS_BIT_SET(*piParam0, 0))
					{
						if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
							MISC::SET_BIT(piParam0, 0);
					}
					else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
					{
						_STOPWATCH_DESTROY(&(Global_2103068.f_49));
						_STOPWATCH_DESTROY(&Global_2103068);
						*piParam0 = 0;
						Global_2103068.f_2 = 0;
						func_225(false);
						return 1;
					}
				}
			}
		}
	}

	return 0;
}

void func_218(var uParam0, BOOL bParam1) // Position - 0xF9B6 (63926)
{
	func_219(uParam0);

	if (bParam1)
		func_225(false);

	uParam0->f_35 = 1;
	return;
}

void func_219(var uParam0) // Position - 0xF9D3 (63955)
{
	var unk;

	unk.f_41 = 1;
	*uParam0 = { unk };
	return;
}

void func_220(var uParam0, int iParam1) // Position - 0xF9EE (63982)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_221(uParam0);
	}

	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
	
		*uParam0 = 1;
	}

	*uParam0 == 1;
	return;
}

void func_221(var uParam0) // Position - 0xFAEC (64236)
{
	uParam0->f_35 = 0;
	return;
}

int func_222(var uParam0) // Position - 0xFAF9 (64249)
{
	return uParam0->f_35;
}

BOOL func_223() // Position - 0xFB05 (64261)
{
	if (func_224())
		return false;

	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == false)
		return false;

	return true;
}

BOOL func_224() // Position - 0xFB25 (64293)
{
	return Global_2696947;
}

void func_225(BOOL bParam0) // Position - 0xFB31 (64305)
{
	HUD::BUSYSPINNER_OFF();

	if (bParam0)
		HUD::PRELOAD_BUSYSPINNER();

	return;
}

BOOL func_226(var uParam0, BOOL bParam1, var uParam2) // Position - 0xFB46 (64326)
{
	if (!bLocal_257)
	{
		func_238(&(uParam0->f_72), bParam1);
		bLocal_257 = true;
		func_344(&(uParam0->f_666), 9, false);
	}
	else
	{
		if (Global_2097157.f_1 && !Global_2097157.f_2)
		{
			func_235(190, bParam1);
			Global_2097157.f_2 = 1;
			*uParam2 = 1;
		}
	
		if (func_227(&(uParam0->f_72)))
		{
			Global_2097532 = true;
			return true;
		}
	}

	return false;
}

BOOL func_227(var uParam0) // Position - 0xFBAF (64431)
{
	var unk;
	var unk99;
	int num;
	var unk175;
	int i;

	unk.f_19.f_1 = 4;
	num.f_3 = 32;
	num.f_36 = 32;

	if (func_205(uParam0->f_44))
		unk175 = { Global_2097157.f_361 };
	else
		unk175 = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };

	switch (Global_2097157)
	{
		case 0:
			if (func_234(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &unk175))
			{
				func_192(&unk99, &(uParam0->f_44));
				Global_2097157.f_142 = uParam0->f_44;
				Global_2097157.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_44, 0);
			
				for (i = 0; i < Global_2097157.f_142.f_1; i = i + 1)
				{
					if (!func_233(uParam0->f_44, i))
						if (func_232(uParam0->f_44, 4, i))
							MISC::SET_BIT(&(Global_2097157.f_142.f_2), i);
						else
							MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), i);
				}
			
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&unk99))
				{
					if (unk99.f_3 > 0)
					{
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &unk);
						unk.f_97 != Global_2097157.f_142.f_1;
					
						if (!IS_GAMER_HANDLE_VALID(unk))
						{
							Global_2097157.f_4 = 1;
						}
						else
						{
							for (i = 0; i < Global_2097157.f_142.f_1; i = i + 1)
							{
								if (!func_233(uParam0->f_44, i))
								{
									if (func_232(uParam0->f_44, 4, i))
									{
										Global_2097157.f_73.f_36[i] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, i);
									
										if (Global_2097157.f_73.f_36[i] == -1)
											if (i > unk.f_97)
												Global_2097157.f_73.f_36[i] = 0;
									}
									else
									{
										Global_2097157.f_73.f_3[i] = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, i);
									
										if (Global_2097157.f_73.f_3[i] == -1f)
											if (i > unk.f_97)
												Global_2097157.f_73.f_3[i] = 0f;
									}
								}
							}
						}
					}
					else
					{
						Global_2097157.f_4 = 1;
					}
				
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
				}
				else
				{
					Global_2097157.f_4 = 1;
				}
			
				Global_2097157 = 1;
				func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
	
		case 1:
			Global_2097157.f_1 = 1;
		
			if (Global_2097157.f_2)
			{
				func_231();
			
				if (Global_2097157.f_4)
					if (func_230(uParam0->f_44))
						Global_2097157 = 3;
					else
						Global_2097157 = 2;
				else
					Global_2097157 = 2;
			}
			break;
	
		case 2:
			STATS::LEADERBOARDS2_READ_RANK_PREDICTION(&(Global_2097157.f_73), &(Global_2097157.f_142), &(Global_2097157.f_211));
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
	
		case 3:
			Global_2097157.f_211 = { Global_2097157.f_142 };
			Global_2097157 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
	
		case 4:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_229())
			{
				if (func_228())
				{
					Global_2097157 = 99;
				}
				else
				{
					Global_2097157 = 999;
					return true;
				}
			}
			else
			{
				Global_2097157 = 999;
				return true;
			}
			break;
	
		case 99:
			if (func_230(uParam0->f_44))
			{
				Global_2097157.f_280 = { Global_2097157.f_142 };
			}
			else
			{
				num = Global_2097157.f_142;
				num.f_1 = Global_2097157.f_142.f_1;
				num.f_2 = Global_2097157.f_142.f_2;
				STATS::LEADERBOARDS2_READ_RANK_PREDICTION(&num, &(Global_2097157.f_142), &(Global_2097157.f_280));
			}
		
			Global_2097157 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
	
		case 100:
			if (func_193(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &unk175, true, true, Global_2097157.f_280.f_36[0], Global_2097157.f_280.f_3[0]))
			{
				func_192(&unk99, &(uParam0->f_44));
			
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&unk99))
				{
					if (unk99.f_3 > 0)
					{
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &unk);
					
						if (MISC::ARE_STRINGS_EQUAL(&(unk.f_13), ""))
							Global_1057195.f_1 = -1;
						else
							Global_1057195.f_1 = unk.f_96;
					}
					else
					{
						Global_1057195.f_1 = -1;
					}
				
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
				}
				else
				{
					Global_1057195.f_1 = -1;
				}
			
				Global_2097157 = 999;
				func_111(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
	
		case 999:
			return true;
	}

	return false;
}

BOOL func_228() // Position - 0xFFD3 (65491)
{
	return IS_BIT_SET(Global_1048576.f_10, 1);
}

BOOL func_229() // Position - 0xFFE3 (65507)
{
	return Global_2693687.f_3;
}

BOOL func_230(int iParam0) // Position - 0xFFF1 (65521)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return true;
	}

	if (iParam0 >= 998 && iParam0 <= 1197)
		return true;

	return false;
}

void func_231() // Position - 0x100CA (65738)
{
	Global_2097157.f_73 = Global_2097157.f_142;
	Global_2097157.f_73.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_73.f_2 = Global_2097157.f_142.f_2;
	Global_2097157.f_211 = Global_2097157.f_142;
	Global_2097157.f_211.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_211.f_2 = Global_2097157.f_142.f_2;
	return;
}

BOOL func_232(int iParam0, int iParam1, int iParam2) // Position - 0x1012A (65834)
{
	int columnType;

	if (iParam0 == 190)
		if (iParam2 == 0)
			return false;

	if (iParam0 == 203)
		if (iParam2 == 3 || iParam2 == 6)
			return false;

	if (iParam0 == 912)
		if (iParam2 == 0 || iParam2 == 3)
			return false;

	if (iParam0 == 762 || iParam0 == 822 || iParam0 == 823)
		if (iParam2 == 0 || iParam2 == 3)
			return false;

	if (iParam0 == 791)
		if (iParam2 == 4)
			return false;

	if (iParam0 == 780)
		if (iParam2 == 3)
			return false;

	if (iParam0 == 777)
		if (iParam2 == 3 || iParam2 == 7)
			return false;

	if (iParam0 == 1200)
		if (iParam2 == 4)
			return false;

	columnType = STATS::LEADERBOARDS_GET_COLUMN_TYPE(iParam0, iParam1, iParam2);

	switch (columnType)
	{
		case 1:
		case 2:
			return true;
	}

	return false;
}

BOOL func_233(int iParam0, int iParam1) // Position - 0x1022C (66092)
{
	if (STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1) == 156)
		return true;

	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
				return true;
			break;
	
		case 780:
			if (iParam1 == 4)
				return true;
			break;
	
		case 1200:
			if (iParam1 == 5)
				return true;
			break;
	}

	return false;
}

BOOL func_234(var uParam0, var uParam1, Any* panParam2, Any* panParam3) // Position - 0x10287 (66183)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_187() && !func_186())
			{
				func_185(*panParam2);
			
				if (STATS::LEADERBOARDS2_READ_BY_HANDLE(panParam2, panParam3))
				{
					*uParam0 = *uParam0 + 1;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
	
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*panParam2, panParam2->f_1, -1))
				*uParam0 = *uParam0 + 1;
			break;
	
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*panParam2, panParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0 = *uParam0 + 1;
			}
			else
			{
				*uParam1 = 0;
				*uParam0 = *uParam0 + 1;
			}
			break;
	
		case 3:
			return true;
	}

	return false;
}

void func_235(int iParam0, BOOL bParam1) // Position - 0x1033B (66363)
{
	var unk;
	var unk8;

	if (!PLAYER::IS_PLAYER_ONLINE())
		return;

	unk = 1;
	unk8 = 1;
	TEXT_LABEL_ASSIGN_STRING(&unk8[0 /*8*/], "GameType", 32);

	if (bParam1)
		TEXT_LABEL_ASSIGN_STRING(&unk[0 /*6*/], "MP", 24);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk[0 /*6*/], "SP", 24);

	if (_LEADERBOARDS2_TRY_BEGIN_WRITE_DATA(iParam0, &unk, &unk8, 1, -1, true, false))
	{
		func_236(190, 131, 0, 0f, true);
		func_236(190, 103, uLocal_150[1], 0f, false);
		func_236(190, 99, uLocal_150[2], 0f, false);
		func_236(190, 109, uLocal_150[3], 0f, false);
		func_236(190, 106, uLocal_150[5], 0f, false);
		func_236(190, 2, uLocal_150[10], 0f, false);
		func_236(190, 107, uLocal_150[8], 0f, false);
		func_236(190, 116, uLocal_150[6], 0f, false);
		uLocal_150[1] = 0;
		uLocal_150[2] = 0;
		uLocal_150[3] = 0;
		uLocal_150[5] = 0;
		uLocal_150[10] = 0;
		uLocal_150[8] = 0;
		uLocal_150[6] = 0;
	}

	return;
}

void func_236(int iParam0, int iParam1, int iParam2, float fParam3, BOOL bParam4) // Position - 0x1042B (66603)
{
	int offset;
	int i;

	if (!bParam4)
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(iParam1, iParam2, fParam3);

	if (!Global_2097157.f_3)
	{
		Global_2097157.f_142 = iParam0;
		Global_2097157.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_2097157.f_142, 0);
	
		for (i = 0; i < 32; i = i + 1)
		{
			if (i < Global_2097157.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_232(iParam0, 4, i))
				{
					MISC::SET_BIT(&(Global_2097157.f_142.f_2), i);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), i);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), i);
			}
		}
	
		Global_2097157.f_3 = 1;
	}

	for (i = 0; i < 32; i = i + 1)
	{
		if (iParam1 == STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, i))
		{
			offset = i;
			i = 32;
		}
	}

	Global_2097157.f_142.f_36[offset] = iParam2;
	Global_2097157.f_142.f_3[offset] = fParam3;

	if (iParam2 != 0)
		MISC::SET_BIT(&(Global_2097157.f_142.f_2), offset);
	else if (fParam3 != 0f)
		MISC::CLEAR_BIT(&(Global_2097157.f_142.f_2), offset);

	return;
}

BOOL _LEADERBOARDS2_TRY_BEGIN_WRITE_DATA(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x10546 (66886)
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
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2693687.f_3)
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&num, &(Global_1929468.f_10));
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

void func_238(var uParam0, BOOL bParam1) // Position - 0x1067A (67194)
{
	int num;

	num = 0;

	if (bParam1)
		num = -1;

	func_239(uParam0, 14, "DartsLB", "", num, -1, false, false);
	return;
}

void func_239(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x106A2 (67234)
{
	var unk;
	var unk9;
	int i;
	var userID;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam2, 32);

	bParam7;
	Global_2097536.f_2769 = 0;
	Global_2097536.f_2770 = 0;
	Global_2097536.f_2768 = 0;

	if (iParam1 == 2 && iParam4 == 30 || iParam1 == 335)
	{
		if (iParam5 > 0 && !func_248())
			uParam0->f_44 = 826;
		else
			uParam0->f_44 = 815;
	
		uParam0->f_44.f_1 = 5;
		uParam0->f_44.f_3 = 1;
		TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
		uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
	
		if (iParam5 > 0 && !func_248())
		{
			uParam0->f_44.f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "Laps", 32);
			TEXT_LABEL_ASSIGN_STRING(&unk9, "", 32);
			TEXT_LABEL_APPEND_INT(&unk9, iParam5, 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { unk9 };
			Global_2097536.f_2780.f_26 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				if (iParam5 == 1)
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1" /*Race - ~a~ (~1~ Lap)*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM" /*Race - ~a~ (~1~ Laps)*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
			}
			else if (iParam5 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1" /*Race (~1~ Lap)*/, 32);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM" /*Race (~1~ Laps)*/, 32);
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE" /*Race - ~a~*/, 32);
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN" /*Race*/, 32);
			}
		
			Global_2097536.f_2780.f_26 = -1;
		}
	
		Global_2097536.f_2780 = 1;
	
		if (iParam5 > 0 && !func_248())
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_HSCORE" /*HIGH SCORE*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_DRIFT" /*BEST DRIFT*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2709 = 4;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			Global_2097536.f_2780.f_29[3] = 5;
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_DRIFT" /*BEST DRIFT*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "", 24);
			Global_2097536.f_2710[0] = 1;
			Global_2097536.f_2710[1] = 3;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2709 = 4;
			Global_2097536.f_2708 = 2;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 3;
			Global_2097536.f_2780.f_29[2] = 5;
		}
	
		Global_2097536.f_2779 = 0;
		i = 0;
	
		for (i = 0; i < Global_2097536.f_2708; i = i + 1)
		{
			if (IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[i]))
				MISC::SET_BIT(&(Global_2097536.f_2770), i);
		}
	
		Global_2097536.f_2826 = func_247(unk, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
		return;
	}

	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_248())
					uParam0->f_44 = 826;
				else
					uParam0->f_44 = 815;
			
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			
				if (iParam5 > 0 && !func_248())
				{
					uParam0->f_44.f_3 = 2;
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "Laps", 32);
					TEXT_LABEL_ASSIGN_STRING(&unk9, "", 32);
					TEXT_LABEL_APPEND_INT(&unk9, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { unk9 };
					Global_2097536.f_2780.f_26 = iParam5;
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1" /*Race - ~a~ (~1~ Lap)*/, 32);
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM" /*Race - ~a~ (~1~ Laps)*/, 32);
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1" /*Race (~1~ Lap)*/, 32);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM" /*Race (~1~ Laps)*/, 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE" /*Race - ~a~*/, 32);
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN" /*Race*/, 32);
					}
				
					Global_2097536.f_2780.f_26 = -1;
				}
			
				Global_2097536.f_2780 = 1;
			
				if (iParam5 <= 0 || func_248())
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_BL" /*BEST LAP*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_RT" /*RACE TIME*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_BL" /*BEST LAP*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
			
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_248())
					uParam0->f_44 = 827;
				else
					uParam0->f_44 = 824;
			
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			
				if (iParam5 > 0 && !func_248())
				{
					uParam0->f_44.f_3 = 2;
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "Laps", 32);
					TEXT_LABEL_ASSIGN_STRING(&unk9, "", 32);
					TEXT_LABEL_APPEND_INT(&unk9, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { unk9 };
					Global_2097536.f_2780.f_26 = iParam5;
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_L1" /*GTA Race - ~a~ (~1~ Lap)*/, 32);
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_LM" /*GTA Race - ~a~ (~1~ Laps)*/, 32);
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_L1" /*GTA Race (~1~ Laps)*/, 32);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_LM" /*GTA Race (~1~ Laps)*/, 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_GRCE" /*GTA Race - ~a~*/, 32);
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN" /*GTA Race*/, 32);
					}
				}
			
				Global_2097536.f_2780 = 1;
			
				if (iParam5 <= 0 || func_248())
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_BL" /*BEST LAP*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 5;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 6;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_RT" /*RACE TIME*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_BL" /*BEST LAP*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 5;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 6;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
			
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_248())
					uParam0->f_44 = 828;
				else
					uParam0->f_44 = 825;
			
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			
				if (!bParam6)
				{
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "CoDriver", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "CoDriver", 32);
					NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &userID);
					TEXT_LABEL_COPY(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), { userID }, 8);
					Global_2097536.f_2780.f_27 = 1;
				}
			
				if (iParam5 > 0 && !func_248())
				{
					uParam0->f_44.f_3 = 3;
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[2 /*16*/], "Laps", 32);
					TEXT_LABEL_ASSIGN_STRING(&unk9, "", 32);
					TEXT_LABEL_APPEND_INT(&unk9, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { unk9 };
					Global_2097536.f_2780.f_26 = iParam5;
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_L1" /*Rally Race - ~a~ - ~a~ (~1~ Lap)*/, 32);
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_LM" /*Rally Race - ~a~ - ~a~ (~1~ Laps)*/, 32);
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_L1" /*Rally Race (~1~ Lap)*/, 32);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_LM" /*Rally Race (~1~ Laps)*/, 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RRCE" /*Rally Race - ~a~ - ~a~*/, 32);
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN" /*Rally Race - ~a~*/, 32);
					}
				}
			
				if (iParam5 <= 0 || func_248())
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_BL" /*BEST LAP*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_RT" /*RACE TIME*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_BL" /*BEST LAP*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					Global_2097536.f_2709 = 4;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
			
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_248())
					uParam0->f_44 = 928;
				else
					uParam0->f_44 = 849;
			
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			
				if (iParam5 > 0 && !func_248())
				{
					uParam0->f_44.f_3 = 2;
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "Laps", 32);
					TEXT_LABEL_ASSIGN_STRING(&unk9, "", 32);
					TEXT_LABEL_APPEND_INT(&unk9, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { unk9 };
					Global_2097536.f_2780.f_26 = iParam5;
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_L1" /*On Foot Race - ~a~ (~1~ Lap)*/, 32);
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_LM" /*On Foot Race - ~a~ (~1~ Laps)*/, 32);
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_L1" /*On Foot Race (~1~ Laps)*/, 32);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_LM" /*On Foot Race (~1~ Laps)*/, 32);
					}
				}
				else
				{
					Global_2097536.f_2780.f_26 = -1;
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_FRCE" /*On Foot Race - ~a~*/, 32);
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN" /*On Foot Race*/, 32);
					}
				}
			
				Global_2097536.f_2780 = 1;
			
				if (iParam5 <= 0 || func_248())
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_BL" /*BEST LAP*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 0;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 0;
					Global_2097536.f_2708 = 1;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_RT" /*RACE TIME*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_BL" /*BEST LAP*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 5;
				}
			
				Global_2097536.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_248())
					uParam0->f_44 = 998 + (iParam5 - 1);
				else
					uParam0->f_44 = 975;
			
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			
				if (iParam5 > 0 && !func_248())
				{
					Global_2097536.f_2780.f_26 = iParam5;
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1" /*Race - ~a~ (~1~ Lap)*/, 32);
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM" /*Race - ~a~ (~1~ Laps)*/, 32);
							TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1" /*Race (~1~ Lap)*/, 32);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM" /*Race (~1~ Laps)*/, 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE" /*Race - ~a~*/, 32);
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN" /*Race*/, 32);
					}
				
					Global_2097536.f_2780.f_26 = -1;
				}
			
				Global_2097536.f_2780 = 1;
			
				if (iParam5 <= 0 || func_248())
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_BL" /*BEST LAP*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "", 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 3;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_RT" /*RACE TIME*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_BL" /*BEST LAP*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					Global_2097536.f_2710[0] = 2;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2709 = 4;
					Global_2097536.f_2708 = 3;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 1;
					Global_2097536.f_2780.f_29[2] = 3;
					Global_2097536.f_2780.f_29[3] = 5;
				}
			
				Global_2097536.f_2779 = 0;
			}
			break;
	
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
				Global_2097536.f_2780 = 1;
			
				if (iParam4 == 3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_KOTH" /*King Of The Hill - ~a~*/, 32);
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_KOTH_NN" /*King Of The Hill*/, 32);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_DM" /*Deathmatch - ~a~*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_DM_NN" /*Deathmatch*/, 32);
				}
			
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_WLRAT" /*W/L RATIO*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_WINS" /*WINS*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_LOSES" /*LOSSES*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_KD" /*K/D RATIO*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[4 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[5 /*6*/], "SCLB_C_DEATH" /*DEATHS*/, 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
				Global_2097536.f_2780 = 1;
			
				if (iParam4 == 4)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH" /*Team King Of The Hill - ~a~*/, 32);
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH_NN" /*Team King Of The Hill*/, 32);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_TDM" /*Team Deathmatch - ~a~*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_TDM_NN" /*Team Deathmatch*/, 32);
				}
			
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_WLRAT" /*W/L RATIO*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_WINS" /*WINS*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_LOSES" /*LOSSES*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_KD" /*K/D RATIO*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[4 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[5 /*6*/], "SCLB_C_DEATH" /*DEATHS*/, 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
				Global_2097536.f_2780 = 1;
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM" /*Vehicle Deathmatch - ~a~*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM_NN" /*Vehicle Deathmatch*/, 32);
				}
			
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_WLRAT" /*W/L RATIO*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_WINS" /*WINS*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_LOSES" /*LOSSES*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_KD" /*K/D RATIO*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[4 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[5 /*6*/], "SCLB_C_DEATH" /*DEATHS*/, 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 6;
				Global_2097536.f_2710[3] = 3;
				Global_2097536.f_2710[4] = 1;
				Global_2097536.f_2710[5] = 2;
				Global_2097536.f_2708 = 6;
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 4;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 4;
				Global_2097536.f_2780.f_29[4] = 5;
				Global_2097536.f_2780.f_29[5] = 5;
			}
			break;
	
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_2097536.f_2780 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF" /*Golf*/, 32);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_GOLF0" /*BEST ROUND*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_GOLF1" /*LONGEST DRIVE*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_GAMES" /*GAMES PLAYED*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
	
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF" /*Golf*/, 32);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_GOLF0" /*BEST ROUND*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_GOLF1" /*LONGEST DRIVE*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_GAMES" /*GAMES PLAYED*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 7;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
	
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_HUNTING" /*Hunting*/, 32);
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), "CMSW" /*Chiliad Mountain State Wilderness*/, 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 0;
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_HSCORE" /*HIGH SCORE*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_TIMEHUNT" /*TIME TO GOLD*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_EKILLS" /*ELK KILLS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_PHOTOS" /*PHOTOS SENT*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[4 /*6*/], "SCLB_C_MONEY" /*MONEY MADE*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2710[4] = 6;
			Global_2097536.f_2708 = 5;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 6;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 6;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
	
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_ARM" /*Arm Wrestling*/, 32);
			Global_2097536.f_2780 = 1;
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_WINS" /*WINS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_LOSES" /*LOSSES*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_WLRAT" /*W/L RATIO*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
	
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "GameType", 32);
		
			if (iParam4 == -1)
				TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			else
				TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
		
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_DARTS" /*Darts*/, 32);
			Global_2097536.f_2780 = 1;
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_WLRAT" /*W/L RATIO*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_WINS" /*WINS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_LOSES" /*LOSSES*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2710[2] = 5;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
	
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS" /*Tennis ~a~*/, 32);
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), "HUD_MG_TENNIS" /*Tennis ~a~*/, 64);
				TEXT_LABEL_APPEND_INT(&(Global_2097536.f_2780.f_9), iParam4 + 1, 64);
			}
		
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_WINS" /*WINS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_LOSES" /*LOSSES*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_TEN1" /*SETS WON*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_TEN2" /*GAMES WON*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[4 /*6*/], "SCLB_C_TEN0" /*ACES*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
	
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS" /*Tennis ~a~*/, 32);
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_WINS" /*WINS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_LOSES" /*LOSSES*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_TEN1" /*SETS WON*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_TEN2" /*GAMES WON*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[4 /*6*/], "SCLB_C_TEN0" /*ACES*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 9;
			Global_2097536.f_2710[2] = 7;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 2;
			Global_2097536.f_2708 = 5;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			break;
	
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
		
			switch (iParam4)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Type", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa" /*Shooting Range - Random Targets ~a~*/, 32);
					break;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Type", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEb" /*Shooting Range - Target Grid ~a~*/, 32);
					break;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Type", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEc" /*Shooting Range - Covered Targets ~a~*/, 32);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Type", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa" /*Shooting Range - Random Targets ~a~*/, 32);
					break;
			}
		
			switch (iParam5)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL" /*Pistol*/, 64);
					break;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), "HUD_MG_SMG" /*Submachine Guns*/, 64);
					break;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), "HUD_MG_ASSAULT" /*Assault Rifle*/, 64);
					break;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), "HUD_MG_SHOTGUN" /*Shotgun*/, 64);
					break;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), "HUD_MG_LMG" /*Light Machine Gun*/, 64);
					break;
			
				case 5:
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), "HUD_MG_HEAVY" /*Heavy*/, 64);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "WeaponId", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL" /*Pistol*/, 64);
					break;
			}
		
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_WLRAT" /*W/L RATIO*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_HITS" /*HITS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_SHOTS" /*SHOTS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_ACC" /*ACCURACY*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 1;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 4;
			break;
	
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			Global_2097536.f_2780 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGE" /*Shooting Range ~a~*/, 32);
			TEXT_LABEL_COPY(&(Global_2097536.f_2780.f_9), { func_246(iParam1) }, 16);
			Global_2097536.f_2780.f_25 = 0;
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_SCORE" /*SCORE*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_WEAP" /*WEAPON*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 7;
			Global_2097536.f_2708 = 2;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 8;
			break;
	
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			Global_2097536.f_2780 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "HUD_MG_TRI" /*Triathlon - ~a~*/, 32);
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
			Global_2097536.f_2780.f_25 = 0;
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_TIME" /*TIME*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "", 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "", 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 0;
			Global_2097536.f_2710[2] = 0;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 1;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 0;
			Global_2097536.f_2780.f_29[3] = 0;
			break;
	
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { unk };
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[2 /*16*/], "Type", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_2097536.f_2780.f_25 = 0;
			Global_2097536.f_2780 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "OFFR_TITLE", 32);
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_TIME" /*TIME*/, 24);
			Global_2097536.f_2710[0] = 3;
			Global_2097536.f_2708 = 1;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
	
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			Global_2097536.f_2780 = 1;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_HRD" /*Survival - ~a~*/, 32);
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_HRD_NN" /*Survival*/, 32);
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_SCORE" /*SCORE*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_WAVE" /*TOTAL WAVES*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_TKILLS" /*TOTAL KILLS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_TDEATH" /*TOTAL DEATHS*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
	
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
				Global_2097536.f_2780 = 1;
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (iParam4 == 1)
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_HEIST" /*Heist - ~a~*/, 32);
					else
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_HEISTP" /*Heist Setup - ~a~*/, 32);
				
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_HEIST_NN" /*Heist*/, 32);
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
			
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_SCORE" /*SCORE*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_TIME" /*TIME*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_ACC" /*ACCURACY*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_HEADSHOT" /*HEADSHOTS*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[4 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 5;
				Global_2097536.f_2710[4] = 6;
				Global_2097536.f_2708 = 3;
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
				Global_2097536.f_2780.f_28 = 6;
				Global_2097536.f_2780.f_29[0] = 5;
				Global_2097536.f_2780.f_29[1] = 11;
				Global_2097536.f_2780.f_29[2] = 4;
				Global_2097536.f_2780.f_29[3] = 5;
				Global_2097536.f_2780.f_29[4] = 5;
			}
			else if (Global_4718592.f_3548 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
				Global_2097536.f_2780 = 1;
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4718592.f_2 == 5)
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_LTS" /*LTS - ~a~*/, 32);
					else
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_MIS" /*Mission - ~a~*/, 32);
				
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN" /*LTS - ~a~*/, 32);
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN" /*Mission*/, 32);
				}
			
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_TIME" /*TIME*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_DEATH" /*DEATHS*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
				Global_2097536.f_2710[0] = 0;
				Global_2097536.f_2710[1] = 1;
				Global_2097536.f_2710[2] = 2;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2708 = 3;
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 2;
				Global_2097536.f_2780.f_29[1] = 5;
				Global_2097536.f_2780.f_29[2] = 5;
				Global_2097536.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
				Global_2097536.f_2780 = 1;
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4718592.f_2 == 5)
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_LTS" /*LTS - ~a~*/, 32);
					else
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_MIS" /*Mission - ~a~*/, 32);
				
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4718592.f_2 == 5)
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN" /*LTS - ~a~*/, 32);
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN" /*Mission*/, 32);
				}
			
				if (func_245(*Global_4718592.f_194133) || func_242(*Global_4718592.f_194133))
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_SCORE" /*SCORE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_DEATH" /*DEATHS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else if (func_241(*Global_4718592.f_194133))
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_SCORE" /*SCORE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_DEATH" /*DEATHS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 2;
					Global_2097536.f_2710[2] = 0;
					Global_2097536.f_2708 = 2;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					Global_2097536.f_2780.f_28 = 4;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_SCORE" /*SCORE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_DEATH" /*DEATHS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 1;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 0;
					Global_2097536.f_2708 = 3;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					Global_2097536.f_2780.f_28 = 5;
					Global_2097536.f_2780.f_29[0] = 5;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
				}
			}
			break;
	
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			Global_2097536.f_2780 = 1;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_BJ" /*Parachute Jump - ~a~*/, 32);
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN" /*Parachute Jump*/, 32);
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_SCORE" /*SCORE*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_TIME" /*TIME*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_JUMPS" /*JUMPS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_RANK" /*POSITION*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			MISC::SET_BIT(&(Global_2097536.f_2768), 1);
			Global_2097536.f_2754[1] = -1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 0;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 11;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
	
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_BJ" /*Parachute Jump - ~a~*/, 32);
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN" /*Parachute Jump*/, 32);
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_CASH" /*CASH*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_TOTCASH" /*TOTAL CASH*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 3;
			Global_2097536.f_2708 = 2;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			break;
	
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
					
						case 9:
							uParam0->f_44 = 966;
							break;
					
						case 4:
							uParam0->f_44 = 967;
							break;
					
						case 8:
							uParam0->f_44 = 968;
							break;
					}
				
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), sParam3, 32);
					else
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
				
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_TIME" /*TIME*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_MEDAL1" /*GOLD MEDALS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_MEDAL2" /*SILVER MEDALS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_MEDAL3" /*BRONZE MEDALS*/, 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 1;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
			
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
					
						case 2:
							uParam0->f_44 = 970;
							break;
					
						case 3:
							uParam0->f_44 = 973;
							break;
					}
				
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), sParam3, 32);
					else
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
				
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_DIST" /*DISTANCE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_MEDAL1" /*GOLD MEDALS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_MEDAL2" /*SILVER MEDALS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_MEDAL3" /*BRONZE MEDALS*/, 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
			
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), sParam3, 32);
					else
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
				
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_AVG_HEI" /*AVERAGE HEIGHT*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_MEDAL1" /*GOLD MEDALS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_MEDAL2" /*SILVER MEDALS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_MEDAL3" /*BRONZE MEDALS*/, 24);
					Global_2097536.f_2710[0] = 1;
					Global_2097536.f_2710[1] = 4;
					Global_2097536.f_2710[2] = 3;
					Global_2097536.f_2710[3] = 2;
					Global_2097536.f_2708 = 4;
					MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 4;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
			
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
					
						case 5:
							uParam0->f_44 = 974;
							break;
					}
				
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "", 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_2097536.f_2780 = 1;
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), sParam3, 32);
					else
						TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
				
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_SCORE" /*SCORE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_MEDAL1" /*GOLD MEDALS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_MEDAL2" /*SILVER MEDALS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_MEDAL3" /*BRONZE MEDALS*/, 24);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					Global_2097536.f_2710[2] = 2;
					Global_2097536.f_2710[3] = 1;
					Global_2097536.f_2708 = 4;
					MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
					MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
					Global_2097536.f_2780.f_29[0] = 12;
					Global_2097536.f_2780.f_29[1] = 5;
					Global_2097536.f_2780.f_29[2] = 5;
					Global_2097536.f_2780.f_29[3] = 5;
					break;
			}
			break;
	
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			Global_2097536.f_2780 = 1;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), sParam3, 32);
			else
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
		
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_DIST" /*DISTANCE*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_MEDAL1" /*GOLD MEDALS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_MEDAL2" /*SILVER MEDALS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_MEDAL3" /*BRONZE MEDALS*/, 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2710[1] = 5;
			Global_2097536.f_2710[2] = 4;
			Global_2097536.f_2710[3] = 3;
			Global_2097536.f_2708 = 4;
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 17;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
	
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), sParam3, 32);
			else
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN" /*Mission*/, 32);
		
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_TIME" /*TIME*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_MEDAL1" /*GOLD MEDALS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_MEDAL2" /*SILVER MEDALS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_MEDAL3" /*BRONZE MEDALS*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 2;
			Global_2097536.f_2708 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_29[0] = 10;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
	
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN" /*Mission*/, 32);
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_SCORE" /*SCORE*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_TIME" /*TIME*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_ACC" /*ACCURACY*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_MEDAL1" /*GOLD MEDALS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[4 /*6*/], "SCLB_C_MEDAL2" /*SILVER MEDALS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[4 /*6*/], "SCLB_C_MEDAL3" /*BRONZE MEDALS*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 5;
			Global_2097536.f_2710[4] = 4;
			Global_2097536.f_2710[5] = 3;
			Global_2097536.f_2708 = 6;
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
			Global_2097536.f_2780.f_29[0] = 4;
			Global_2097536.f_2780.f_29[1] = 9;
			Global_2097536.f_2780.f_29[2] = 4;
			Global_2097536.f_2780.f_29[3] = 5;
			Global_2097536.f_2780.f_29[4] = 5;
			Global_2097536.f_2780.f_29[5] = 5;
			break;
	
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { unk };
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[2 /*16*/], "Type", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2780.f_25 = 0;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), sParam3, 32);
			else
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SPR_TITLE", 32);
		
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_TIME" /*TIME*/, 24);
			Global_2097536.f_2710[0] = 2;
			Global_2097536.f_2708 = 1;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			Global_2097536.f_2780.f_28 = 3;
			Global_2097536.f_2780.f_29[0] = 1;
			break;
	
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "Location", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[2 /*16*/], "Type", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_2097536.f_2780 = 1;
		
			if (iParam5 <= 0)
			{
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_RT" /*RACE TIME*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "", 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 4;
				Global_2097536.f_2710[2] = 1;
				Global_2097536.f_2710[3] = 0;
				Global_2097536.f_2709 = 6;
				Global_2097536.f_2708 = 2;
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				Global_2097536.f_2780.f_28 = 4;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 3;
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_RT" /*RACE TIME*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_BL" /*BEST LAP*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "", 24);
				Global_2097536.f_2710[0] = 3;
				Global_2097536.f_2710[1] = 2;
				Global_2097536.f_2710[2] = 4;
				Global_2097536.f_2710[3] = 1;
				Global_2097536.f_2709 = 4;
				Global_2097536.f_2708 = 3;
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
				MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
				Global_2097536.f_2780.f_28 = 5;
				Global_2097536.f_2780.f_29[0] = 1;
				Global_2097536.f_2780.f_29[1] = 1;
				Global_2097536.f_2780.f_29[2] = 3;
			}
		
			Global_2097536.f_2779 = 0;
		
			switch (iParam4)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "MGCR_1" /*South Los Santos*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1" /*South Los Santos*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "MGCR_2" /*City Circuit*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2" /*City Circuit*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "MGCR_4" /*Airport*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4" /*Airport*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "MGCR_5" /*Freeway*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5" /*Freeway*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "MGCR_6" /*Vespucci Canals*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6" /*Vespucci Canals*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
			
				case 5:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "MGSR_1" /*East Coast*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1" /*East Coast*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "MGSR_2" /*North East Coast*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2" /*North East Coast*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "MGSR_3" /*Raton Canyon*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3" /*Raton Canyon*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
			
				case 8:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "MGSR_4" /*Los Santos*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4" /*Los Santos*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
			
				default:
					break;
			}
			break;
	
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "ArenaMode", 32);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_WINS" /*WINS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_GAMES" /*GAMES PLAYED*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 2;
			Global_2097536.f_2710[3] = 3;
			TEXT_LABEL_COPY(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), { func_240(iParam4) }, 8);
			Global_2097536.f_2708 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
		
			switch (iParam4)
			{
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BUZZ" /*Buzzer Beater*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_TIMESUR" /*TIME SURVIVED*/, 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CARN" /*Carnage*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_DAMDEALT" /*DAMAGE DEALT*/, 24);
					break;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_ARN_FLAGW" /*Flag War*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_FLAGS" /*FLAGS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
					break;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_ARN_WRECK" /*Wreck It*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_DAMDEALT" /*DAMAGE DEALT*/, 24);
					break;
			
				case 5:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BOMBB" /*Bomb Ball*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_POINTS" /*POINTS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_GOALS" /*GOALS*/, 24);
					break;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_ARN_GAMEM" /*Games Masters*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_CPOINTS" /*CHECKPOINTS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
					break;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_ARN_MNSTR" /*Here Come the Monsters*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_DAMDEALT" /*DAMAGE DEALT*/, 24);
					break;
			
				case 8:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_ARN_HOTB" /*Hot Bomb*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_PASSES" /*PASSES*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_TIMESUR" /*TIME SURVIVED*/, 24);
					Global_2097536.f_2780.f_29[3] = 9;
					break;
			
				case 9:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_ARN_TAGT" /*Tag Team*/, 32);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_KILLS" /*KILLS*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_TAGS" /*TAGS*/, 24);
					break;
			}
		
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 5;
			break;
	
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CAREER" /*Arena War Career*/, 32);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_CARPT" /*AP (POSITION)*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_WLRAT" /*W/L RATIO*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_MATCHES" /*MATCHES*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[3 /*6*/], "SCLB_C_TITLE" /*SKILL LEVEL*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 1;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2710[3] = 4;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 4;
			Global_2097536.f_2780.f_28 = 5;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
			Global_2097536.f_2780.f_28 = 5;
			Global_2097536.f_2780.f_29[0] = 5;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			Global_2097536.f_2780.f_29[3] = 21;
			break;
	
		case 890:
			uParam0->f_44 = 1203;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_CCM_CAREER" /*LS Car Meet Membership*/, 32);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_CCMLVL" /*LEVEL*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_WLRAT" /*W/L RATIO*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_RACES" /*RACES*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 4;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2780 = 1;
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 22;
			Global_2097536.f_2780.f_29[1] = 4;
			Global_2097536.f_2780.f_29[2] = 5;
			break;
	
		case 276:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "GameType", 32);
			TEXT_LABEL_ASSIGN_STRING(&unk, "TUNER_SANDB_SVAR", 32);
		
			if (iParam4 == 2 || iParam4 == 3)
				TEXT_LABEL_APPEND_INT(&unk, 2, 32);
			else
				TEXT_LABEL_APPEND_INT(&unk, iParam4, 32);
		
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_BESTT" /*BEST TIME*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_WINS" /*WINS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2708 = 3;
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
		
			switch (iParam4)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_T_TT" /*Time Trial*/, 32);
					Global_2097536.f_2710[0] = 0;
					Global_2097536.f_2710[1] = 3;
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_BESTT" /*BEST TIME*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
					TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "", 24);
					Global_2097536.f_2708 = 2;
					Global_2097536.f_2780.f_28 = 3;
					Global_2097536.f_2780.f_29[0] = 2;
					Global_2097536.f_2780.f_29[1] = 3;
					break;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_T_CD" /*Scramble*/, 32);
					break;
			
				case 2:
				case 3:
					TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_T_HH1" /*Head-to-Head*/, 32);
					break;
			}
			break;
	
		case 278:
		case 279:
			uParam0->f_44 = 1204;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[1 /*16*/], "Mission", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { unk };
		
			if (iParam1 == 278)
			{
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "GameType", 32);
				TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_SRS", 32);
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_T_SRS" /*Street Race Series - ~a~*/, 32);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_BL" /*BEST LAP*/, 24);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "GameType", 32);
				TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_PS", 32);
				TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_1), "SCLB_T_PURS" /*Pursuit Series - ~a~*/, 32);
				TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[0 /*6*/], "SCLB_C_BESTT" /*BEST TIME*/, 24);
			}
		
			TEXT_LABEL_ASSIGN_STRING(&(Global_2097536.f_2780.f_9), sParam3, 64);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[1 /*6*/], "SCLB_C_WINS" /*WINS*/, 24);
			TEXT_LABEL_ASSIGN_STRING(&Global_2097536.f_2717[2 /*6*/], "SCLB_C_VEH" /*VEHICLE*/, 24);
			Global_2097536.f_2710[0] = 0;
			Global_2097536.f_2710[1] = 2;
			Global_2097536.f_2710[2] = 3;
			Global_2097536.f_2709 = 4;
			Global_2097536.f_2708 = 3;
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
			MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
			Global_2097536.f_2780.f_28 = 4;
			Global_2097536.f_2780.f_29[0] = 2;
			Global_2097536.f_2780.f_29[1] = 5;
			Global_2097536.f_2780.f_29[2] = 3;
			Global_2097536.f_2780 = 1;
			break;
	}

	i = 0;

	for (i = 0; i < Global_2097536.f_2708; i = i + 1)
	{
		if (IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[i]))
			MISC::SET_BIT(&(Global_2097536.f_2770), i);
	}

	Global_2097536.f_2826 = func_247(unk, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
	return;
}

struct<6> func_240(int iParam0) // Position - 0x15ADE (88798)
{
	var unk;

	switch (iParam0)
	{
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BuzzerBeater", 24);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "Carnage", 24);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FlagWar", 24);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "WreckIt", 24);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BombBall", 24);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "GamesMasters", 24);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "Monsters", 24);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HotBomb", 24);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TagTeam", 24);
			break;
	
		default:
			break;
	}

	return unk;
}

BOOL func_241(int iParam0) // Position - 0x15B8D (88973)
{
	return iParam0 == 74;
}

BOOL func_242(int iParam0) // Position - 0x15B9A (88986)
{
	return func_244(iParam0) || func_243(iParam0);
}

BOOL func_243(int iParam0) // Position - 0x15BB4 (89012)
{
	return iParam0 == 44;
}

BOOL func_244(int iParam0) // Position - 0x15BC1 (89025)
{
	return iParam0 == 45;
}

BOOL func_245(int iParam0) // Position - 0x15BCE (89038)
{
	return iParam0 == 12;
}

struct<6> func_246(int iParam0) // Position - 0x15BDB (89051)
{
	var unk;

	switch (iParam0)
	{
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE0" /*- Pistol Challenge 1*/, 24);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE1" /*- Pistol Challenge 2*/, 24);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE2" /*- Pistol Challenge 3*/, 24);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE3" /*- Submachine Gun Challenge 1*/, 24);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE4" /*- Submachine Gun Challenge 2*/, 24);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE5" /*- Submachine Gun Challenge 3*/, 24);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE6" /*- Shotgun Challenge 1*/, 24);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE7" /*- Shotgun Challenge 2*/, 24);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE8" /*- Shotgun Challenge 3*/, 24);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE9" /*- Assault Rifle Challenge 1*/, 24);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE10" /*- Assault Rifle Challenge 2*/, 24);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE11" /*- Assault Rifle Challenge 3*/, 24);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE12" /*- Light Machine Gun Challenge 1*/, 24);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE13" /*- Light Machine Gun Challenge 2*/, 24);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE14" /*- Light Machine Gun Challenge 3*/, 24);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE15" /*- Heavy Weapon Challenge 1*/, 24);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE16" /*- Heavy Weapon Challenge 2*/, 24);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE17" /*- Heavy Weapon Challenge 3*/, 24);
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE18" /*- Rail Gun Challenge 1*/, 24);
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE19" /*- Rail Gun Challenge 2*/, 24);
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE20" /*- Rail Gun Challenge 3*/, 24);
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUD_MG_RANGE21" /*- Rail Gun Challenge 4*/, 24);
			break;
	}

	return unk;
}

Hash func_247(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, BOOL bParam12) // Position - 0x15D64 (89444)
{
	var unk;

	TEXT_LABEL_COPY(&unk, { uParam0 }, 16);
	TEXT_LABEL_APPEND_INT(&unk, iParam8, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);

	if (func_205(iParam8))
	{
		if (bParam12)
			TEXT_LABEL_APPEND_STRING(&unk, "CoDri", 64);
		else
			TEXT_LABEL_APPEND_STRING(&unk, "Dri", 64);
	
		TEXT_LABEL_APPEND_STRING(&unk, "_", 64);
	}

	TEXT_LABEL_APPEND_INT(&unk, iParam9, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam10, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam11, 64);
	return MISC::GET_HASH_KEY(&unk);
}

BOOL func_248() // Position - 0x15DD6 (89558)
{
	if (*Global_4718592.f_124993 == 1 || *Global_4718592.f_124993 == 3 || *Global_4718592.f_124993 == 5 || *Global_4718592.f_124993 == 7 || *Global_4718592.f_124993 == 19 || *Global_4718592.f_124993 == 8 || *Global_4718592.f_124993 == 9 || *Global_4718592.f_124993 == 11 || *Global_4718592.f_124993 == 13 || *Global_4718592.f_124993 == 21 || *Global_4718592.f_124993 == 23 || *Global_4718592.f_124993 == 25 || *Global_4718592.f_124993 == 26 || *Global_4718592.f_124993 == 29 || *Global_4718592.f_124993 == 31 || *Global_4718592.f_124993 == 32)
		return true;

	return false;
}

BOOL func_249(var uParam0, int iParam1) // Position - 0x15F0C (89868)
{
	if (!func_444(&(uParam0->f_2)))
		func_459(&(uParam0->f_2));

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_RETICLE);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);

	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || uParam0->f_8)
		{
			if (!func_444(&(uParam0->f_5)))
			{
				func_459(&(uParam0->f_5));
				func_250(uParam0, 1051260355);
			}
		}
	
		if (func_444(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_445(&(uParam0->f_5));
				return false;
			}
		}
	}

	if (uParam0->f_1 == -1)
		return true;

	if (func_7(&(uParam0->f_2)) * 1000f > SYSTEM::TO_FLOAT(uParam0->f_1))
	{
		if (!func_444(&(uParam0->f_5)))
		{
			func_459(&(uParam0->f_5));
			func_250(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_445(&(uParam0->f_2));
			return false;
		}
	}

	return true;
}

void func_250(var uParam0, int iParam1) // Position - 0x1600F (90127)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_251(var uParam0) // Position - 0x16035 (90165)
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);

	if (randomIntInRange < 40)
		if (!PED::IS_PED_INJURED(uParam0->[1]))
			func_4(uParam0->[1], "DARTS_LOSE", false, 4);
	else if (randomIntInRange < 70)
		if (!PED::IS_PED_INJURED(uParam0->[0]))
			func_4(uParam0->[0], "GAME_LOSE_SELF", true, 4);
	else if (!PED::IS_PED_INJURED(uParam0->[1]))
		func_4(uParam0->[1], "GAME_WIN_SELF", false, 4);

	return;
}

void func_252(var uParam0, BOOL bParam1) // Position - 0x160AE (90286)
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);

	if (randomIntInRange < 30)
		if (!PED::IS_PED_INJURED(uParam0->[0]))
			func_4(uParam0->[0], "DARTS_LOSE", true, 4);
	else if (randomIntInRange < 50)
		if (!PED::IS_PED_INJURED(uParam0->[1]))
			func_4(uParam0->[1], "DARTS_WIN", false, 4);
	else if (randomIntInRange < 75 && bParam1)
		if (!PED::IS_PED_INJURED(uParam0->[1]))
			func_4(uParam0->[1], "DARTS_LOSING_BADLY", false, 4);
	else if (randomIntInRange < 88)
		if (!PED::IS_PED_INJURED(uParam0->[0]))
			func_4(uParam0->[0], "GAME_WIN_SELF", true, 4);
	else if (!PED::IS_PED_INJURED(uParam0->[1]))
		func_4(uParam0->[1], "GAME_LOSE_SELF", false, 4);

	return;
}

int func_253() // Position - 0x1617B (90491)
{
	int num;

	if (!bLocal_282)
	{
		num = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3;
	}
	else
	{
		iLocal_296 = iLocal_296 + 1;
		num = iLocal_296 % 2;
	}

	return num;
}

void func_254(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x161AB (90539)
{
	char* methodName;

	methodName = func_255(iParam4);

	if (iParam4 != 5)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, methodName);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_12(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_459(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
	return;
}

char* func_255(int iParam0) // Position - 0x1620B (90635)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
	
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
	
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
	
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
	
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
	
		case 5:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				return "SHOW_COND_SHARD_MESSAGE";
		
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
	
		default:
		
	}

	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_256(var uParam0, int iParam1) // Position - 0x1627A (90746)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_SCORES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

int func_257(Object* pobParam0) // Position - 0x16298 (90776)
{
	pobParam0->f_2 = { 0f, -2.3685f, -0.2f };
	pobParam0->f_5 = { 0f, 0f, 0f };
	pobParam0->f_8 = { 0f, 0f, 0f };
	pobParam0->f_20 = 0;
	pobParam0->f_23 = 0;
	pobParam0->f_24 = 0;
	pobParam0->f_25 = 0;

	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
		OBJECT::DELETE_OBJECT(pobParam0);

	return 1;
}

void func_258(Ped pedParam0) // Position - 0x162E8 (90856)
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_120, caLocal_118, 1500, 1, 1);
	CAM::SET_CAM_ACTIVE(caLocal_121, true);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_120, caLocal_121, 8000, 1, 1);
	CAM::ATTACH_CAM_TO_ENTITY(caLocal_123, pedParam0, -0.0301f, 1.498f, 0.7435f, true);
	CAM::POINT_CAM_AT_ENTITY(caLocal_123, pedParam0, 0.0557f, -1.4905f, 0.4958f, true);
	CAM::SET_CAM_FOV(caLocal_123, 35f);
	return;
}

void func_259(var uParam0, var uParam1, var uParam2, var uParam3, int* piParam4) // Position - 0x1634C (90956)
{
	BOOL flag;

	if (!CAM::IS_CAM_INTERPOLATING(caLocal_118))
	{
		flag = false;
		func_340(uParam0);
	
		if (!bLocal_274)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					HUD::CLEAR_HELP(true);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_162)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!IS_BIT_SET(Global_114123, 3))
						{
							_DISPLAY_HELP_TEXT("DARTS_INSTR_W", -1);
							MISC::SET_BIT(&Global_114123, 3);
						}
					
						func_344(&(uParam3->f_666), 21, true);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!IS_BIT_SET(Global_114123, 4))
						{
							_DISPLAY_HELP_TEXT("DARTS_INSTR_B", -1);
							MISC::SET_BIT(&Global_114123, 4);
						}
					
						func_344(&(uParam3->f_666), 20, true);
					}
				}
			
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				HUD::CLEAR_HELP(true);
				uParam3->f_672 = 0;
			}
		}
	
		if (uParam0->f_1 == 1)
			if (!CAM::IS_CAM_INTERPOLATING(caLocal_127) && uParam0->f_3 == 2)
				func_339(uParam3);
		else
			func_337(uParam3, iLocal_28);
	
		func_336(&(uParam0->f_1));
	}
	else
	{
		flag = true;
	}

	func_333(uParam3);

	switch (uParam0->f_1)
	{
		case 1:
			if (!func_325(&(uParam0->f_3)))
				uParam0->f_1 = 2;
			break;
	
		case 0:
			if (func_318(uParam0->f_422[iLocal_28], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
				uParam0->f_1 = 2;
			break;
	
		case 2:
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_LT) && iLocal_28 == 0)
				uParam0->f_1 = 1;
		
			if (iLocal_28 == 0)
			{
				func_317(iLocal_29, false);
			
				if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_SHT_USE") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_W") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_B") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_AIM_HLP") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_STD_HLP") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						_DISPLAY_HELP_TEXT("DARTS_LEVEL", -1);
						MISC::SET_BIT(&(Global_114162.f_18974.f_6), iLocal_294);
						func_344(&(uParam3->f_666), 24, false);
					}
				}
			
				if (uParam0->f_422[iLocal_28] % 2 == 0 && uParam0->f_422[iLocal_28] < 41 && iLocal_29 == 0 && !bLocal_272)
				{
					if (!func_3(&(uParam3->f_666), 6))
						func_344(&(uParam3->f_666), 6, true);
				
					bLocal_272 = true;
				}
				else if (uParam0->f_422[iLocal_28] == 50 && !bLocal_272)
				{
					if (!func_3(&(uParam3->f_666), 6))
						func_344(&(uParam3->f_666), 6, true);
				
					bLocal_272 = true;
				}
				else if (func_306(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), uParam1, flag, false, false, uParam0->f_248))
				{
					HUD::CLEAR_PRINTS();
					uParam3->f_670 = uParam3->f_670 - 1;
					uParam0->f_1 = 3;
				}
				else if (!bLocal_269)
				{
					if (!func_444(piParam4))
					{
						func_304(piParam4);
					}
					else if (func_7(piParam4) > 20f)
					{
						func_303(uLocal_263[1 - iLocal_28]);
						func_445(piParam4);
						bLocal_269 = true;
					}
				}
			}
			else if (iLocal_29 == 0)
			{
				iLocal_292 = 0;
				func_302(&(uParam0->f_422), &(uParam0->f_249));
				func_299(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), false);
			}
			else if (SYSTEM::TIMERA() > MISC::GET_RANDOM_INT_IN_RANGE(1250, 2500))
			{
				func_302(&(uParam0->f_422), &(uParam0->f_249));
				func_299(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), false);
			}
			break;
	
		case 3:
			if (func_286(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), uParam0->f_248, false))
			{
				uParam0->f_436 = uParam0->f_436 + 1;
				uParam0->f_455 = func_285(uParam0);
				uParam0->f_1 = 4;
			}
			break;
	
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
				func_283(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), uParam0->f_455);
		
			func_268(uParam0, uParam3);
			break;
	
		case 5:
			func_261(uParam0, uParam2, uParam3);
		
			if (func_444(piParam4))
				func_445(piParam4);
			break;
	
		case 6:
			func_260(uParam0, uParam3);
			break;
	}

	return;
}

void func_260(var uParam0, var uParam1) // Position - 0x167A6 (92070)
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	float randomFloatInRange;
	int i;
	float randomFloatInRange2;

	iLocal_292 = iLocal_292 + 1;
	iLocal_28 = 1;
	iLocal_29 = 0;
	bLocal_276 = true;

	while (iLocal_29 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_25)
			{
				iLocal_29 = iLocal_29 + 1;
			}
			else
			{
				func_283(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), false);
				func_268(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_24)
		{
			if (bLocal_275)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]))
					OBJECT::DELETE_OBJECT(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]);
			}
			else
			{
				uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_24 = 0;
				offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11, uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11.f_1 + fLocal_53, uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11.f_2) };
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/]))
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], offsetFromCoordAndHeadingInWorldCoords, true, false, false, true);
			}
		
			func_283(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), false);
			func_268(uParam0, uParam1);
		
			if (bLocal_275)
			{
				if (bLocal_277)
				{
					uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_1, uLocal_77, true, true, false);
					offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11, uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11.f_1 + fLocal_53, uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_11.f_2) };
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], offsetFromCoordAndHeadingInWorldCoords, true, false, false, true);
					randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
					uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_17 = { 90f, randomFloatInRange, uParam0->f_243.f_4 };
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_17, 0, true);
					uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_302(&(uParam0->f_422), &(uParam0->f_249));
			func_299(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), false);
			uParam0->f_436 = uParam0->f_436 + 1;
			func_283(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), false);
		
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50 && uParam0->f_422[iLocal_28] == 0)
			{
				if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50)
					uParam0->f_432[iLocal_28] = uParam0->f_432[iLocal_28] + 1;
			
				func_344(&(uParam1->f_666), 2, false);
				func_344(&(uParam1->f_666), 3, false);
				func_344(&(uParam1->f_666), 4, false);
				func_344(&(uParam1->f_666), 5, true);
				SYSTEM::SETTIMERB(0);
			}
		
			func_268(uParam0, uParam1);
		
			if (bLocal_275)
			{
				if (bLocal_277)
				{
					for (i = 0; i < iLocal_29 + 1; i = i + 1)
					{
						if (!uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_23)
						{
							uParam0->f_5[iLocal_28 /*79*/][i /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_1, uLocal_77, true, true, false);
							offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_11, uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_11.f_1 + fLocal_53, uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_11.f_2) };
						
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_28 /*79*/][i /*26*/]))
								ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][i /*26*/], offsetFromCoordAndHeadingInWorldCoords, true, false, false, true);
						
							randomFloatInRange2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
							uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_17 = { 90f, randomFloatInRange2, uParam0->f_243.f_4 };
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_28 /*79*/][i /*26*/], uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_17, 0, true);
							uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_24 = 0;
						}
					}
				}
			}
		}
	}

	uParam0->f_1 = 5;

	if (iLocal_292 > 2)
		uParam0->f_1 = 5;

	return;
}

void func_261(var uParam0, var uParam1, var uParam2) // Position - 0x16C2F (93231)
{
	var entityCoords;
	int i;

	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
				func_267();
		
			if (iLocal_28 == 0)
				if (func_3(&(uParam2->f_666), 3))
					func_266("DARTS_PLR_DUB", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
				else if (func_3(&(uParam2->f_666), 4))
					_SHOW_SUBTITLE_CLEAR_EXISTING("DARTS_ONE_PT", 5000, 0);
				else if (func_3(&(uParam2->f_666), 2))
					func_266("DARTS_PLR_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
				else
					func_266("DARTS_SWITCH_C", uParam0->f_422[iLocal_28], 5000, 0);
			else if (func_3(&(uParam2->f_666), 3))
				func_266("DARTS_OPP_DUB", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			else if (func_3(&(uParam2->f_666), 4))
				_SHOW_SUBTITLE_CLEAR_EXISTING("DARTS_ONE_PT", 5000, 0);
			else if (func_3(&(uParam2->f_666), 2))
				func_266("DARTS_OPP_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			else
				func_266("DARTS_SWITCH_B", uParam0->f_422[iLocal_28], 5000, 0);
		
			SYSTEM::SETTIMERB(0);
			uParam0->f_2 = 2;
			break;
	
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
			{
				iLocal_290 = iLocal_290 + 1;
			
				if (iLocal_290 >= uParam0->f_436)
					iLocal_290 = 0;
			
				entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_290 /*26*/], true) };
				func_53(entityCoords);
			}
		
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
			{
				iLocal_290 = iLocal_290 - 1;
			
				if (iLocal_290 < 0)
					iLocal_290 = uParam0->f_436 - 1;
			
				entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_290 /*26*/], true) };
				func_53(entityCoords);
			}
		
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_290 /*26*/], true) };
				func_55(entityCoords, false, false);
				uParam0->f_2 = 2;
			}
		
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
			{
				bLocal_266 = true;
				uParam0->f_2 = 2;
			}
			break;
	
		case 2:
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || bLocal_276 && bLocal_275)
				bLocal_266 = true;
		
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT) && uParam0->f_248 == 1)
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_28 /*79*/][iLocal_290 /*26*/], true) };
				func_55(entityCoords, true, false);
				uParam0->f_2 = 1;
			}
		
			if (!func_3(&(uParam2->f_666), 6))
				if (!bLocal_271)
					if (func_264(iLocal_28 == 0, &uLocal_263[1], uParam0->f_425[iLocal_28] - uParam0->f_422[iLocal_28], uParam0->f_422[0], uParam0->f_422[1]))
						bLocal_271 = true;
				else
					MISC::GET_GAME_TIMER() % 500 < 50;
			else if (!bLocal_271)
				if (func_263(iLocal_28 == 0, &uLocal_263[1], uParam0->f_425[iLocal_28] - uParam0->f_422[iLocal_28], uParam0->f_422[0], uParam0->f_422[1]))
					bLocal_271 = true;
			else
				MISC::GET_GAME_TIMER() % 500 < 50;
		
			if (bLocal_266 || SYSTEM::TIMERB() > 2000)
			{
				bLocal_276 = false;
			
				for (i = 0; i < 3; i = i + 1)
				{
					func_257(&uParam0->f_5[iLocal_28 /*79*/][i /*26*/]);
				}
			
				if (uParam0->f_425[iLocal_28] != uParam0->f_422[iLocal_28])
				{
					func_262(uParam1, iLocal_28, uParam0->f_422[iLocal_28]);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, false, 0, false);
				}
			
				uParam0->f_425[iLocal_28] = uParam0->f_422[iLocal_28];
				iLocal_29 = 0;
				uParam0->f_428 = 0;
			
				if (iLocal_28 == 0)
					iLocal_28 = 1;
				else
					iLocal_28 = 0;
			
				func_458(uParam1, iLocal_28);
				bLocal_97 = false;
				func_437();
			
				if (!bLocal_275)
					HUD::CLEAR_SMALL_PRINTS();
			
				iLocal_91 = 0;
				uParam2->f_670 = 3;
				bLocal_272 = false;
				bLocal_269 = false;
				bLocal_271 = false;
				bLocal_266 = false;
				iLocal_290 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}

	return;
}

void func_262(var uParam0, int iParam1, int iParam2) // Position - 0x17048 (94280)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_DARTS_SCORE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_263(BOOL bParam0, var uParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1706C (94316)
{
	int address;
	int randomIntInRange;
	int randomIntInRange2;

	if (bParam0)
	{
		if (iParam2 > 30 && bParam0 || iParam3 < 20)
			MISC::SET_BIT(&address, 0);
	
		if (iParam2 <= 30 && bParam0 || iParam3 >= 20)
			MISC::SET_BIT(&address, 2);
	}
	else
	{
		if (iParam2 > 20 && !bParam0 || iParam4 < 30)
			MISC::SET_BIT(&address, 1);
	
		if (iParam2 <= 20 && !bParam0 || iParam4 >= 30)
			MISC::SET_BIT(&address, 3);
	}

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);

	if (randomIntInRange2 < 85)
	{
		if (IS_BIT_SET(address, 0))
		{
			if (randomIntInRange < 50)
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", true, 4);
			else if (randomIntInRange < 75)
				func_4(*uParam1, "DARTS_PLAYING_WELL", false, 4);
			else if (randomIntInRange < 100)
				func_4(*uParam1, "GAME_GOOD_OTHER", false, 4);
		
			return true;
		}
		else if (IS_BIT_SET(address, 2))
		{
			if (randomIntInRange < 50)
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", true, 4);
			else if (randomIntInRange < 68)
				func_4(*uParam1, "DARTS_PLAYING_POORLY", false, 4);
			else if (randomIntInRange < 86)
				func_4(*uParam1, "GAME_BAD_OTHER", false, 4);
			else if (randomIntInRange < 100)
				func_4(*uParam1, "GAME_HECKLE", false, 4);
		
			return true;
		}
		else if (IS_BIT_SET(address, 1))
		{
			if (randomIntInRange < 50)
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", true, 4);
			else if (randomIntInRange < 75)
				func_4(*uParam1, "DARTS_HAPPY", false, 4);
			else if (randomIntInRange < 100)
				func_4(*uParam1, "GAME_GOOD_SELF", false, 4);
		
			return true;
		}
		else if (IS_BIT_SET(address, 3))
		{
			if (randomIntInRange < 50)
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", true, 4);
			else if (randomIntInRange < 100)
				func_4(*uParam1, "GAME_BAD_SELF", false, 4);
		
			return true;
		}
	}

	return false;
}

BOOL func_264(BOOL bParam0, var uParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1725D (94813)
{
	int address;
	int randomIntInRange;
	int randomIntInRange2;

	if (bParam0)
	{
		if (iParam2 > 100 && bParam0 || iParam4 - iParam3 > 75)
			MISC::SET_BIT(&address, 0);
	
		if (iParam2 < 70 && bParam0 || iParam3 - iParam4 < 50)
			MISC::SET_BIT(&address, 2);
	}
	else
	{
		if (iParam2 > 75 && !bParam0 || iParam3 - iParam4 > 50)
			MISC::SET_BIT(&address, 1);
	
		if (iParam2 < 40 && !bParam0 || iParam4 - iParam3 < 30)
			MISC::SET_BIT(&address, 3);
	}

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);

	if (randomIntInRange2 < 75)
	{
		if (IS_BIT_SET(address, 0))
		{
			if (randomIntInRange < 35)
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_HAPPY", true, 4);
			else if (randomIntInRange < 70)
				func_4(*uParam1, "DARTS_PLAYING_WELL", false, 4);
			else if (randomIntInRange < 85)
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", true, 4);
			else
				func_4(*uParam1, "GAME_GOOD_OTHER", false, 4);
		
			return true;
		}
		else if (IS_BIT_SET(address, 2))
		{
			if (randomIntInRange < 50)
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", true, 4);
			else if (randomIntInRange < 68 && !ENTITY::DOES_ENTITY_EXIST(func_522()))
				func_4(*uParam1, "DARTS_PLAYING_POORLY", false, 4);
			else if (randomIntInRange < 86)
				func_4(*uParam1, "GAME_BAD_OTHER", false, 4);
			else if (randomIntInRange < 100)
				func_4(*uParam1, "GAME_HECKLE", false, 4);
		
			return true;
		}
		else if (IS_BIT_SET(address, 1))
		{
			if (randomIntInRange < 40)
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_PLAYING_WELL", true, 4);
			else if (randomIntInRange < 60)
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", true, 4);
			else if (randomIntInRange < 80)
				func_4(*uParam1, "DARTS_HAPPY", false, 4);
			else if (randomIntInRange < 100)
				func_4(*uParam1, "GAME_GOOD_SELF", false, 4);
		
			return true;
		}
		else if (IS_BIT_SET(address, 3))
		{
			if (randomIntInRange < 33)
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", true, 4);
			else if (randomIntInRange < 66)
				func_4(*uParam1, "GAME_BAD_SELF", false, 4);
			else if (randomIntInRange < 100)
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_HECKLE", true, 4);
		
			return true;
		}
	}

	return false;
}

void _SHOW_SUBTITLE_CLEAR_EXISTING(char* sParam0, int iParam1, int iParam2) // Position - 0x174AA (95402)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
	return;
}

void func_266(char* sParam0, int iParam1, int iParam2, int iParam3) // Position - 0x174C3 (95427)
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
	return;
}

void func_267() // Position - 0x174E2 (95458)
{
	CAM::SET_CAM_ACTIVE(caLocal_127, true);
	CAM::SET_CAM_ACTIVE(caLocal_118, false);
	return;
}

void func_268(var uParam0, var uParam1) // Position - 0x174F8 (95480)
{
	uParam0->f_455 = 0;

	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_28] = uParam0->f_422[iLocal_28] - uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20;
		uParam0->f_428 = uParam0->f_428 + uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20;
	}

	if (func_3(&(uParam1->f_666), 5))
	{
		func_280(uParam0);
		func_344(&(uParam1->f_666), 5, false);
	}
	else
	{
		uParam0->f_429[iLocal_28] = uParam0->f_429[iLocal_28] + 1;
	
		if (iLocal_28 == 0)
		{
			func_278(4);
			uLocal_150[10] = uLocal_150[10] + 1;
		}
	
		if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50 && uParam0->f_422[iLocal_28] == 0)
		{
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_28] = uParam0->f_432[iLocal_28] + 1;
			
				if (iLocal_28 == 0)
				{
					func_278(0);
					uLocal_150[1] = uLocal_150[1] + 1;
				}
			}
		
			func_344(&(uParam1->f_666), 2, false);
			func_344(&(uParam1->f_666), 3, false);
			func_344(&(uParam1->f_666), 4, false);
			func_344(&(uParam1->f_666), 5, true);
			func_280(uParam0);
			func_344(&(uParam1->f_666), 5, false);
			SYSTEM::SETTIMERB(0);
		}
		else if (uParam0->f_422[iLocal_28] == 1 || uParam0->f_422[iLocal_28] < 0 || uParam0->f_422[iLocal_28] == 0 && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 != 2)
		{
			if (uParam0->f_422[iLocal_28] == 0 && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 != 2)
			{
				func_266("DARTS_PLR_DUB", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
				func_344(&(uParam1->f_666), 3, true);
			}
			else if (uParam0->f_422[iLocal_28] == 1)
			{
				func_344(&(uParam1->f_666), 4, true);
			}
			else if (iLocal_28 == 1)
			{
				func_266("DARTS_OPP_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_266("DARTS_PLR_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			}
		
			if (!bLocal_271)
				if (func_277(uLocal_263[1 - iLocal_28]))
					bLocal_271 = true;
		
			uParam0->f_422[iLocal_28] = uParam0->f_425[iLocal_28];
			uParam0->f_1 == 6;
			SYSTEM::SETTIMERA(0);
			uParam0->f_1 = 5;
		
			if (iLocal_28 == 0)
				uParam0->f_435 = uParam0->f_435 + 1;
		
			func_344(&(uParam1->f_666), 2, true);
		}
		else
		{
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_28] = uParam0->f_432[iLocal_28] + 1;
			
				if (iLocal_28 == 0)
				{
					func_276(uParam1, 1);
					func_278(0);
					uLocal_150[1] = uLocal_150[1] + 1;
				}
			
				if (!bLocal_271 && !bLocal_276)
					if (func_275(uLocal_263[iLocal_28]))
						bLocal_271 = true;
			}
		
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 0)
			{
				if (!bLocal_271 && !bLocal_276)
				{
					func_274(uLocal_263[1 - iLocal_28]);
					bLocal_271 = true;
				}
			}
		
			if (uParam0->f_428 == 180)
			{
				if (!bLocal_271 && !bLocal_276)
					if (func_273(uLocal_263[1], iLocal_28 == 0))
						bLocal_271 = true;
			
				if (iLocal_28 == 0)
				{
					func_276(uParam1, 0);
					func_278(1);
					uLocal_150[2] = uLocal_150[2] + 1;
				}
			}
		
			if (uParam0->f_428 == 140)
				if (!bLocal_271 && !bLocal_276)
					if (func_271(uLocal_263[iLocal_28], iLocal_28 == 0))
						bLocal_271 = true;
		
			if (iLocal_28 == 0)
			{
				if (iLocal_29 < 2)
				{
					if (uParam0->f_422[iLocal_28] <= 170 && !func_3(&(uParam1->f_666), 18))
						func_344(&(uParam1->f_666), 18, true);
				
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
						func_344(&(uParam1->f_666), 19, true);
				
					if (uParam0->f_422[iLocal_28] < 41 && uParam0->f_422[iLocal_28] > 0 && uParam0->f_422[iLocal_28] % 2 == 0 || uParam0->f_422[iLocal_28] == 50)
					{
						uParam0->f_422[iLocal_28] == 50;
					
						if (!bLocal_270)
						{
							func_270(uLocal_263[1]);
							bLocal_270 = true;
						}
					
						if (!uParam0->f_456)
							uParam0->f_456 = 1;
					
						if (!func_3(&(uParam1->f_666), 6))
							func_344(&(uParam1->f_666), 6, true);
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
		
			if (iLocal_28 == 0 && iLocal_29 < 2)
			{
				func_269("DARTS_REMAIN", uParam0->f_425[iLocal_28] - uParam0->f_422[iLocal_28], uParam0->f_422[iLocal_28], 7500, 0);
			}
			else if (iLocal_28 == 1 && iLocal_29 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_336(&(uParam0->f_1));
			}
		
			uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_25 = 1;
			iLocal_29 = iLocal_29 + 1;
			SYSTEM::SETTIMERA(0);
		
			if (uParam0->f_1 != 6)
				if (uParam0->f_456 && uParam0->f_248 == 1)
					uParam0->f_1 = 0;
				else
					uParam0->f_1 = 2;
		
			if (iLocal_29 == 3)
			{
				iLocal_29 = 2;
				uParam0->f_1 = 5;
			}
		
			if (iLocal_28 == 0)
				uParam0->f_435 = 0;
		
			func_344(&(uParam1->f_666), 3, false);
			func_344(&(uParam1->f_666), 2, false);
			func_344(&(uParam1->f_666), 4, false);
		}
	}

	return;
}

void func_269(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x17A95 (96917)
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, true);
	return;
}

void func_270(Ped pedParam0) // Position - 0x17ABA (96954)
{
	if (!PED::IS_PED_INJURED(pedParam0))
		func_4(pedParam0, "DARTS_1_DART_AWAY", false, 4);

	return;
}

BOOL func_271(Ped pedParam0, BOOL bParam1) // Position - 0x17AD8 (96984)
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);

	if (randomIntInRange < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_522()))
		{
			if (bParam1)
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", true, 4);
			else
				func_4(func_522(), "DARTS_140", false, 4);
		
			return true;
		}
		else if (bParam1)
		{
			if (_GET_RANDOM_BOOL())
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", true, 4);
			else
				func_4(pedParam0, "DARTS_140", false, 4);
		
			return true;
		}
	}

	return false;
}

BOOL _GET_RANDOM_BOOL() // Position - 0x17B57 (97111)
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

BOOL func_273(Ped pedParam0, BOOL bParam1) // Position - 0x17B75 (97141)
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);

	if (randomIntInRange < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_522()))
		{
			if (bParam1)
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", true, 4);
			else
				func_4(func_522(), "DARTS_180", false, 4);
		
			return true;
		}
		else if (bParam1)
		{
			if (_GET_RANDOM_BOOL())
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", true, 4);
			else
				func_4(pedParam0, "DARTS_180", false, 4);
		
			return true;
		}
	}

	return false;
}

int func_274(Ped pedParam0) // Position - 0x17BF4 (97268)
{
	int randomIntInRange;
	BOOL flag;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);

	if (randomIntInRange < 75)
	{
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
			flag = true;
	
		if (!PED::IS_PED_INJURED(pedParam0))
			func_4(pedParam0, "DARTS_MISS_BOARD", flag, 4);
	
		return 1;
	}

	return 0;
}

BOOL func_275(Ped pedParam0) // Position - 0x17C37 (97335)
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);

	if (randomIntInRange < 100)
	{
		func_4(pedParam0, "DARTS_BULLSEYE", false, 4);
		return true;
	}

	return false;
}

void func_276(var uParam0, int iParam1) // Position - 0x17C63 (97379)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
	return;
}

BOOL func_277(Ped pedParam0) // Position - 0x17C78 (97400)
{
	BOOL flag;

	if (pedParam0 == PLAYER::PLAYER_PED_ID())
		flag = true;

	if (!PED::IS_PED_INJURED(pedParam0))
		func_4(pedParam0, "DARTS_BUST", flag, 4);

	return true;
}

void func_278(int iParam0) // Position - 0x17CA4 (97444)
{
	switch (iParam0)
	{
		case 0:
			Global_114162.f_18974 = Global_114162.f_18974 + 1;
			func_279("DARTS_STAT_NUM_BULLSEYES", Global_114162.f_18974);
			break;
	
		case 1:
			Global_114162.f_18974.f_1 = Global_114162.f_18974.f_1 + 1;
			func_279("DARTS_STAT_NUM_180S", Global_114162.f_18974.f_1);
			break;
	
		case 2:
			Global_114162.f_18974.f_2 = Global_114162.f_18974.f_2 + 1;
			func_279("DARTS_STAT_NUM_WINS", Global_114162.f_18974.f_2);
			break;
	
		case 3:
			Global_114162.f_18974.f_3 = Global_114162.f_18974.f_3 + 1;
			func_279("DARTS_STAT_NUM_LOSS", Global_114162.f_18974.f_3);
			break;
	
		case 4:
			Global_114162.f_18974.f_4 = Global_114162.f_18974.f_4 + 1;
			func_279("DARTS_STAT_DARTS_THROWN", Global_114162.f_18974.f_4);
			break;
	
		case 5:
			Global_114162.f_18974.f_5 = Global_114162.f_18974.f_5 + 1;
			func_279("DARTS_STAT_NUM_GAMES", Global_114162.f_18974.f_5);
			break;
	
		case 7:
			Global_114162.f_18974.f_7 = SYSTEM::TO_FLOAT(Global_114162.f_18974.f_2) / SYSTEM::TO_FLOAT(Global_114162.f_18974.f_5);
			break;
	
		case 8:
			Global_114162.f_18974.f_8 = SYSTEM::TO_FLOAT(Global_114162.f_18974.f_4) / SYSTEM::TO_FLOAT(Global_114162.f_18974.f_5);
			break;
	}

	return;
}

void func_279(char* sParam0, int iParam1) // Position - 0x17E1B (97819)
{
	return;
}

void func_280(var uParam0) // Position - 0x17E23 (97827)
{
	if (!uParam0->f_460)
		uParam0->f_460 = 1;

	func_278(5);
	HUD::CLEAR_SMALL_PRINTS();
	HUD::CLEAR_HELP(true);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_438(2)))
		AUDIO::STOP_AUDIO_SCENE(func_438(2));

	if (uParam0->f_248 == 1)
		func_267();

	if (iLocal_28 == 0)
	{
		uParam0->f_454 = 1;
		bLocal_280 = true;
		uParam0->f_446[iLocal_28] = uParam0->f_446[iLocal_28] + 1;
		uParam0->f_437[iLocal_28] = uParam0->f_437[iLocal_28] + 1;
		func_278(2);
		uLocal_150[8] = uLocal_150[8] + 1;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_28] = uParam0->f_446[iLocal_28] + 1;
		uParam0->f_437[iLocal_28] = uParam0->f_437[iLocal_28] + 1;
		func_278(3);
		uLocal_150[9] = uLocal_150[9] + 1;
	}

	func_278(7);
	func_459(&(uParam0->f_254));

	if (func_282(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_28] = uParam0->f_443[iLocal_28] + 1;
	
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
				func_281(true);
		
			uParam0->f_458 = 1;
		}
	
		if (uParam0->f_454)
		{
			uLocal_150[3] = uLocal_150[3] + 1;
			iLocal_298 = 0;
		}
		else
		{
			uLocal_150[5] = uLocal_150[5] + 1;
			iLocal_298 = 3;
		}
	
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}

	uParam0->f_1 = 2;
	AUDIO::START_AUDIO_SCENE(func_438(3));
	bLocal_277 = true;
	uParam0->f_428 = 0;
	bLocal_97 = false;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
	return;
}

void func_281(BOOL bParam0) // Position - 0x17FCC (98252)
{
	char* audioName;

	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			if (bParam0)
				audioName = "MICHAEL_SMALL_01";
			else
				audioName = "MICHAEL_BIG_01";
			break;
	
		case CHAR_FRANKLIN:
			if (bParam0)
				audioName = "FRANKLIN_SMALL_01";
			else
				audioName = "FRANKLIN_BIG_01";
			break;
	
		case CHAR_TREVOR:
			if (bParam0)
				audioName = "TREVOR_SMALL_01";
			else
				audioName = "TREVOR_BIG_01";
			break;
	}

	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(audioName);
	return;
}

BOOL func_282(var uParam0) // Position - 0x18040 (98368)
{
	int num;
	int num2;

	num = uParam0->f_454 ? 0 : 1;

	switch (uParam0->f_452)
	{
		case 1:
			num2 = 1;
			break;
	
		case 3:
			num2 = 2;
			break;
	
		case 5:
			num2 = 3;
			break;
	}

	if (uParam0->f_446[num] == num2)
	{
		uParam0->f_449[num] = uParam0->f_449[num] + 1;
		uParam0->f_440[num] = uParam0->f_440[num] + 1;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
	
		if (num == 0)
			uLocal_150[6] = uLocal_150[6] + 1;
	
		if (uParam0->f_449[num] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return true;
		}
	}

	return false;
}

void func_283(var uParam0, var uParam1, BOOL bParam2) // Position - 0x18102 (98562)
{
	float num;
	float angleBetween2dVectors;
	float num2;
	float x2;
	int i;
	int num3;

	x2 = { uParam0->f_8 };
	x2 = x2 + 0.0041f;
	x2.f_2 = x2.f_2 + 0.0002f;
	angleBetween2dVectors = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, x2, x2.f_2);
	num = func_284(x2);
	uParam0->f_22 = num;

	if (bParam2)
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, false, 0, false);

	if (num < 0.009f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 50;
	}
	else if (num < 0.021f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 25;
	}
	else if (num > 0.3f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 0;
	}
	else if (num >= 0.226f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		uParam0->f_20 = 0;
	}
	else
	{
		if (num > 0.1285f && num < 0.1405f)
		{
			uParam0->f_21 = 3;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		else if (num > 0.2132f && num < 0.226f)
		{
			uParam0->f_21 = 2;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, false, 0, false);
		}
		else
		{
			uParam0->f_21 = 1;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
		}
	
		if (uParam0->f_8 < 0f)
			angleBetween2dVectors = 360f - angleBetween2dVectors;
	
		num2 = 0f;
		i = 0;
	
		for (i = 0; i < 21; i = i + 1)
		{
			if (angleBetween2dVectors >= num2 - 9f && angleBetween2dVectors < num2 + 9f)
			{
				if (angleBetween2dVectors <= num2 - 8.1f && angleBetween2dVectors >= num2 - 9.9f || angleBetween2dVectors >= num2 + 8.1f && angleBetween2dVectors <= num2 + 9.9f)
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, false, 0, false);
			
				num3 = uLocal_31[i] * uParam0->f_21;
				uParam0->f_20 = num3;
			}
		
			num2 = num2 + 18f;
		}
	}

	return;
}

float func_284(float fParam0, var uParam1, var uParam2) // Position - 0x18336 (99126)
{
	return SYSTEM::SQRT((fParam0 * fParam0) + (fParam0.f_2 * fParam0.f_2));
}

int func_285(var uParam0) // Position - 0x18351 (99153)
{
	int i;

	for (i = 0; i < iLocal_29; i = i + 1)
	{
		if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8 > uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_8 - 0.008f && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8 < uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_8 + 0.008f && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8.f_2 > uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_8.f_2 - 0.008f && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8.f_2 < uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_8.f_2 + 0.008f)
			return 1;
	}

	return 0;
}

BOOL func_286(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x18417 (99351)
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	var unk3;
	float frameTime;

	if (iLocal_28 == 0 && iParam2 == 1)
		func_287("Darts", "Dart_Reticules", &fLocal_68, 1, 0, 4, false);

	frameTime = MISC::GET_FRAME_TIME();
	unk3 = { uParam0->f_5 * { frameTime, frameTime, frameTime } * { 8.5f, 8.5f, 8.5f } };
	uParam0->f_2 = { uParam0->f_2 - unk3 };

	if (uParam0->f_2.f_1 > uParam0->f_8.f_1 - 0.04f)
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_11, uParam0->f_11.f_1 + fLocal_53, uParam0->f_11.f_2) };
		ENTITY::SET_ENTITY_COORDS(*uParam0, offsetFromCoordAndHeadingInWorldCoords, true, false, false, true);
		return true;
	}

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_2, uParam0->f_2.f_1 + fLocal_53, uParam0->f_2.f_2) };
	ENTITY::SET_ENTITY_COORDS(*uParam0, offsetFromCoordAndHeadingInWorldCoords, true, false, false, true);
	uParam0->f_17.f_1 = uParam0->f_17.f_1 + (1000f * frameTime);
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		bParam3;
	else
		return true;

	return false;
}

void func_287(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x18537 (99639)
{
	float num;

	num = { *uParam2 };

	switch (iParam4)
	{
		case 0:
			func_298(&num);
			break;
	
		case 1:
			func_297(&num);
			break;
	
		case 5:
			func_296(&num);
			break;
	
		case 6:
			func_295(&num);
			break;
	
		case 7:
			func_294(&num);
			break;
	
		case 8:
			func_293(&num);
			break;
	
		case 9:
			func_292(&num);
			break;
	}

	if (func_290())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	
		if (iParam3 == 1)
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_289(num), func_288(num.f_1), num.f_2, num.f_3, num.f_8, num.f_4, num.f_5, num.f_6, num.f_7, bParam6, 0);
		else
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_289(num), func_288(num.f_1), num.f_2, num.f_3, num.f_8, num.f_4, num.f_5, num.f_6, num.f_7, bParam6, 0);
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}

	return;
}

float func_288(float fParam0) // Position - 0x1863E (99902)
{
	return fParam0;
}

float func_289(float fParam0) // Position - 0x18648 (99912)
{
	return fParam0;
}

BOOL func_290() // Position - 0x18652 (99922)
{
	if (func_291())
		return true;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
		return false;

	if (MISC::IS_FRONTEND_FADING())
		return false;

	return true;
}

BOOL func_291() // Position - 0x18691 (99985)
{
	return Global_1574604;
}

void func_292(var uParam0) // Position - 0x1869D (99997)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
	return;
}

void func_293(var uParam0) // Position - 0x186B7 (100023)
{
	uParam0->f_7 = 2;
	return;
}

void func_294(var uParam0) // Position - 0x186C4 (100036)
{
	uParam0->f_7 = 5;
	return;
}

void func_295(var uParam0) // Position - 0x186D1 (100049)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
	return;
}

void func_296(var uParam0) // Position - 0x186EE (100078)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
	return;
}

void func_297(var uParam0) // Position - 0x1870B (100107)
{
	uParam0->f_4 = uParam0->f_4 - 50;
	uParam0->f_5 = uParam0->f_5 - 50;
	uParam0->f_6 = uParam0->f_6 - 50;
	return;
}

void func_298(var uParam0) // Position - 0x18734 (100148)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
	return;
}

void func_299(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1875C (100188)
{
	float randomFloatInRange;
	float randomFloatInRange2;
	float headingFromVector2d;
	float num;
	float randomFloatInRange3;
	int i;
	int randomIntInRange;
	float offsetFromCoordAndHeadingInWorldCoords;
	var offsetFromCoordAndHeadingInWorldCoords2;
	float num2;

	if (*uParam3 == 50)
	{
		num = 0f;
		randomFloatInRange3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		num = 0.14f;
		randomFloatInRange3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
			num = 0.1345f;
		else if (uParam3->f_1 == 2)
			num = 0.218f;
		else
			num = 0.18f;
	
		num2 = 0f;
		i = 0;
	
		for (i = 0; i < 21; i = i + 1)
		{
			if (*uParam3 == uLocal_31[i])
				randomFloatInRange3 = num2;
		
			num2 = num2 + 18f;
		}
	}

	if (!bParam4 && uParam3->f_3 < 30)
	{
		i = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(func_301(uParam3), 150);
	
		if (uParam3->f_2 > 140)
		{
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-35f, 35f);
		}
		else if (i < randomIntInRange && uParam3->f_4 == 2)
		{
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-80f, 80f);
		}
		else if (i < randomIntInRange && uParam3->f_2 > -140)
		{
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-60f, 60f);
		}
		else
		{
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
		
			if (randomFloatInRange > 0f)
				randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-200f, -60f);
			else
				randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(60f, 200f);
		}
	
		randomFloatInRange = randomFloatInRange / 10f;
		randomFloatInRange3 = randomFloatInRange3 + randomFloatInRange;
		i = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(func_301(uParam3), 150);
	
		if (uParam3->f_2 > 140)
		{
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.25f, 0.25f);
		}
		else if (i < randomIntInRange && uParam3->f_4 == 2)
		{
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.07f, 0.07f);
		}
		else if (i < randomIntInRange && uParam3->f_2 > -140)
		{
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f);
		}
		else
		{
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
		
			if (randomFloatInRange > 0f)
				randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, -0.3f);
			else
				randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 1f);
		}
	
		randomFloatInRange = randomFloatInRange / 10f;
		num = num + randomFloatInRange;
	}

	uParam0->f_8 = SYSTEM::SIN(randomFloatInRange3) * num;
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = SYSTEM::COS(randomFloatInRange3) * num;
	uParam0->f_8 = uParam0->f_8 - 0.0035f;
	uParam0->f_8.f_2 = uParam0->f_8.f_2 - 0.0002f;

	if (*uParam2 == 6)
	{
		func_300(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_300(uParam0);
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, uLocal_77, false, false, false);
		randomFloatInRange2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
		offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uLocal_80) };
		offsetFromCoordAndHeadingInWorldCoords2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, uParam0->f_8.f_1 + fLocal_53, uParam0->f_8.f_2) };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(offsetFromCoordAndHeadingInWorldCoords - offsetFromCoordAndHeadingInWorldCoords2, offsetFromCoordAndHeadingInWorldCoords.f_1 - offsetFromCoordAndHeadingInWorldCoords2.f_1);
		headingFromVector2d = headingFromVector2d - 180f;
		uParam0->f_17 = { 90f, randomFloatInRange2, headingFromVector2d };
		ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);
		uParam0->f_2 = { uLocal_80 };
		*uParam2 = 3;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
	}

	return;
}

void func_300(var uParam0) // Position - 0x18AB5 (101045)
{
	Vector3 vector;
	float num;
	float headingFromVector2d;
	float num2;
	float num3;

	num3 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	vector = { uLocal_80 - uParam0->f_8 };
	num = SYSTEM::VMAG(vector);
	uParam0->f_5 = { vector / { num, num, num } };
	headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = headingFromVector2d - 180f;
	num2 = MISC::TAN(uParam0->f_17.f_2) * num3;
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = uParam0->f_11 + num2;
	vector = { uLocal_80 - uParam0->f_11 };
	num = SYSTEM::VMAG(vector);
	uParam0->f_5 = { vector / { num, num, num } };
	return;
}

int func_301(var uParam0) // Position - 0x18B61 (101217)
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
	
		case 1:
			return 75;
	
		case 2:
			return 90;
	
		default:
		
	}

	return 25;
}

void func_302(var uParam0, var uParam1) // Position - 0x18B95 (101269)
{
	int i;

	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = uParam0->[1] - uParam0->[0];
	uParam1->f_3 = uParam1->f_3 + 1;

	if (uParam0->[iLocal_28] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if (uParam0->[iLocal_28] > 60)
	{
		if (uParam0->[iLocal_28] % 2 == 1)
		{
			if (_GET_RANDOM_BOOL())
				*uParam1 = 19;
			else
				*uParam1 = 17;
		
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if (uParam0->[iLocal_28] < 61)
	{
		if (uParam0->[iLocal_28] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if (uParam0->[iLocal_28] > 52)
		{
			*uParam1 = uParam0->[iLocal_28] - 40;
			uParam1->f_1 = 1;
		}
		else if (uParam0->[iLocal_28] > 40)
		{
			*uParam1 = uParam0->[iLocal_28] - 32;
			uParam1->f_1 = 1;
		}
		else if (uParam0->[iLocal_28] % 2 == 0)
		{
			i = 1;
		
			for (i = 0; i < 20; i = i + 1)
			{
				*uParam1 = uParam0->[iLocal_28] / 2;
				uParam1->f_1 = 2;
			}
		}
		else
		{
			for (i = 32; *uParam1 == 0 && i > 1; i = i / 2)
			{
				if (uParam0->[iLocal_28] > i)
				{
					*uParam1 = uParam0->[iLocal_28] - i;
					uParam1->f_1 = 1;
				}
			}
		}
	}

	return;
}

int func_303(Ped pedParam0) // Position - 0x18CE7 (101607)
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);

	if (randomIntInRange < 33)
	{
		func_4(pedParam0, "DARTS_BORED", false, 4);
		return 1;
	}

	return 0;
}

void func_304(int* piParam0) // Position - 0x18D13 (101651)
{
	func_305(piParam0, 0f);
	return;
}

void func_305(int* piParam0, float fParam1) // Position - 0x18D22 (101666)
{
	piParam0->f_1 = func_8(IS_BIT_SET(*piParam0, 4)) + fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

BOOL func_306(var uParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x18D4D (101709)
{
	float randomFloatInRange;
	int randomIntInRange;

	switch (iParam6)
	{
		case 0:
			if (bLocal_95)
			{
				if (SYSTEM::TIMERB() > 50)
				{
					bLocal_96 = false;
					bLocal_97 = false;
					bLocal_99 = false;
				
					if (func_315(uParam0, uParam1, false))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
						bLocal_95 = false;
						return true;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RDOWN) && bLocal_99) && !bParam4)
				{
					bLocal_96 = true;
					bLocal_97 = true;
				
					if (!bLocal_98)
					{
						func_314(uParam0, *uParam2);
						bLocal_98 = true;
					}
					else
					{
						if (!bParam5)
							func_313();
					
						func_312(uParam0, iParam6);
						func_311(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
					
						if (randomIntInRange < 50)
							if (uParam0->f_8 + randomFloatInRange < 0.33f)
								uParam0->f_8 = uParam0->f_8 + randomFloatInRange;
							else
								uParam0->f_8 = uParam0->f_8 - randomFloatInRange;
						else if (uParam0->f_8 - randomFloatInRange > -0.33f)
							uParam0->f_8 = uParam0->f_8 - randomFloatInRange;
						else
							uParam0->f_8 = uParam0->f_8 + randomFloatInRange;
					
						randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
					
						if (randomIntInRange < 50)
							if (uParam0->f_8.f_2 + randomFloatInRange < 0.29f)
								uParam0->f_8.f_2 = uParam0->f_8.f_2 + randomFloatInRange;
							else
								uParam0->f_8.f_2 = uParam0->f_8.f_2 - randomFloatInRange;
						else if (uParam0->f_8.f_2 - randomFloatInRange > -0.29f)
							uParam0->f_8.f_2 = uParam0->f_8.f_2 - randomFloatInRange;
						else
							uParam0->f_8.f_2 = uParam0->f_8.f_2 + randomFloatInRange;
					
						uParam0->f_2 = { uLocal_80 };
						bLocal_96 = true;
						bLocal_97 = true;
					}
				
					if (bLocal_96 && bLocal_97)
					{
						if (!bLocal_95)
						{
							HUD::CLEAR_PRINTS();
							bLocal_95 = true;
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			break;
	
		case 1:
			if (bLocal_95)
			{
				func_287("Darts", "Dart_Reticules", &fLocal_59, 1, 0, 4, false);
			
				if (SYSTEM::TIMERB() > 25)
				{
					if (func_315(uParam0, uParam1, true))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
						bLocal_95 = false;
						return true;
					}
				}
			}
			else if (!func_307(uParam0))
			{
				if (!bLocal_98)
				{
					func_314(uParam0, *uParam2);
				}
				else
				{
					func_313();
					func_312(uParam0, iParam6);
					func_311(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!bLocal_95)
			{
				bLocal_95 = true;
				SYSTEM::SETTIMERB(0);
			}
			break;
	}

	return false;
}

BOOL func_307(var uParam0) // Position - 0x18FC2 (102338)
{
	BOOL num;
	float controlNormal;
	float controlNormal2;

	controlNormal = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X);
	controlNormal2 = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y);
	iLocal_134 = SYSTEM::ROUND(controlNormal2);

	switch (iLocal_133)
	{
		case 0:
			if (iLocal_134 > 120)
			{
				iLocal_135 = MISC::GET_GAME_TIMER();
				iLocal_133 = 1;
			}
		
			if (iLocal_134 < -100)
				iLocal_139 = SYSTEM::ROUND(controlNormal);
			break;
	
		case 1:
			if (iLocal_134 > 120)
			{
				iLocal_135 = MISC::GET_GAME_TIMER();
			}
			else if (iLocal_134 < 120 && iLocal_134 > -120 && MISC::GET_GAME_TIMER() - iLocal_135 > 500)
			{
				iLocal_133 = 0;
			}
			else if (iLocal_134 < -100)
			{
				iLocal_136 = MISC::GET_GAME_TIMER();
			
				if (iLocal_136 - iLocal_135 < 500)
				{
					iLocal_139 = SYSTEM::ROUND(controlNormal);
					iLocal_137 = iLocal_136 - iLocal_135;
					iLocal_133 = 2;
				}
			}
			break;
	
		case 2:
			if (iLocal_137 > iLocal_138)
			{
				if (iLocal_137 > 100 && iLocal_137 < 150)
				{
					fLocal_142 = 0.066477f;
					uParam0->f_8.f_2 = uParam0->f_8.f_2 - fLocal_142;
				}
				else
				{
					fLocal_141 = SYSTEM::TO_FLOAT(iLocal_138) / SYSTEM::TO_FLOAT(iLocal_137);
					fLocal_142 = (1f - fLocal_141) * fLocal_145;
					uParam0->f_8.f_2 = uParam0->f_8.f_2 - fLocal_142;
				}
			}
			else
			{
				fLocal_142 = 0f;
			}
		
			if (iLocal_139 > 7)
			{
				fLocal_143 = SYSTEM::TO_FLOAT(iLocal_139) / fLocal_148;
				fLocal_144 = fLocal_146 * fLocal_143;
				uParam0->f_8 = uParam0->f_8 + fLocal_144;
			}
			else if (iLocal_139 < -7)
			{
				fLocal_143 = SYSTEM::TO_FLOAT(iLocal_139) / fLocal_147;
				fLocal_144 = fLocal_146 * fLocal_143;
				uParam0->f_8 = uParam0->f_8 - fLocal_144;
			}
			else
			{
				fLocal_144 = 0f;
			}
		
			if (fLocal_142 < 0.066477f && fLocal_144 == 0f)
				func_310();
			else if (fLocal_142 <= 0.066477f && fLocal_144 < 0.06f)
				func_309();
			else
				func_308();
		
			num = 1;
			iLocal_133 = 0;
			break;
	}

	return num;
}

void func_308() // Position - 0x19180 (102784)
{
	fLocal_68.f_4 = 210;
	fLocal_68.f_5 = 23;
	fLocal_68.f_6 = 19;
	return;
}

void func_309() // Position - 0x1919A (102810)
{
	fLocal_68.f_4 = 183;
	fLocal_68.f_5 = 137;
	fLocal_68.f_6 = 0;
	return;
}

void func_310() // Position - 0x191B3 (102835)
{
	fLocal_68.f_4 = 16;
	fLocal_68.f_5 = 184;
	fLocal_68.f_6 = 10;
	return;
}

void func_311(var uParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x191CD (102861)
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, uParam0->f_14.f_1 + fLocal_53, uParam0->f_14.f_2) };

	if (iParam3 == 1)
		offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, uParam0->f_14.f_1 + fLocal_53, uParam0->f_14.f_2) };

	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(offsetFromCoordAndHeadingInWorldCoords, &fLocal_59, &(fLocal_59.f_1));
	MISC::GET_GAME_TIMER() % 1000 < 50;

	if (!bParam2)
	{
		if (bLocal_92)
			func_287("Darts", "Dart_Reticules_Zoomed", &fLocal_59, 1, 0, 4, false);
		else
			func_287("Darts", "Dart_Reticules", &fLocal_59, 1, 0, 4, false);
	
		if (!bLocal_99)
			bLocal_99 = true;
	}

	return;
}

void func_312(var uParam0, int iParam1) // Position - 0x1927C (103036)
{
	float frameTime;
	float randomFloatInRange;
	float randomFloatInRange2;
	float controlUnboundNormal;
	float controlUnboundNormal2;
	float controlNormal;
	float controlNormal2;
	BOOL flag;
	float num;
	float num2;

	frameTime = MISC::GET_FRAME_TIME();
	fLocal_149 = fLocal_149 + frameTime;
	flag = false;
	controlUnboundNormal = PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X);
	controlUnboundNormal2 = PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y);
	controlNormal = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X);
	controlNormal2 = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (MISC::ABSF(controlNormal) > MISC::ABSF(controlUnboundNormal) || MISC::ABSF(controlNormal2) > MISC::ABSF(controlUnboundNormal2))
		{
			controlUnboundNormal = controlNormal;
			controlUnboundNormal2 = controlNormal2;
			flag = false;
		}
		else
		{
			if (PAD::IS_MOUSE_LOOK_INVERTED())
				controlUnboundNormal2 = controlUnboundNormal2 * -1f;
		
			if (PAD::IS_LOOK_INVERTED())
				controlUnboundNormal2 = controlUnboundNormal2 * -1f;
		
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RB))
			{
				uParam0->f_8 = uParam0->f_8 + (controlUnboundNormal * 0.06f);
				uParam0->f_8.f_2 = uParam0->f_8.f_2 - (controlUnboundNormal2 * 0.06f);
			}
			else
			{
				uParam0->f_8 = uParam0->f_8 + (controlUnboundNormal * 0.03f);
				uParam0->f_8.f_2 = uParam0->f_8.f_2 - (controlUnboundNormal2 * 0.03f);
			}
		
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			flag = true;
		}
	}

	if (!flag)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		{
			if (controlNormal != 0f || controlNormal2 != 0f)
			{
				controlUnboundNormal = controlNormal;
				controlUnboundNormal2 = controlNormal2;
			}
		}
	
		if (controlUnboundNormal > 0f)
			if (uParam0->f_8 + (fLocal_90 * frameTime) < 0.33f)
				uParam0->f_8 = uParam0->f_8 + (fLocal_90 * frameTime);
		else if (controlUnboundNormal < 0f)
			if (uParam0->f_8 - (fLocal_90 * frameTime) > -0.33f)
				uParam0->f_8 = uParam0->f_8 - (fLocal_90 * frameTime);
	
		if (controlUnboundNormal2 > 0f)
			if (uParam0->f_8.f_2 - (fLocal_90 * frameTime) > -0.29f)
				uParam0->f_8.f_2 = uParam0->f_8.f_2 - (fLocal_90 * frameTime);
		else if (controlUnboundNormal2 < 0f)
			if (uParam0->f_8.f_2 + (fLocal_90 * frameTime) < 0.29f)
				uParam0->f_8.f_2 = uParam0->f_8.f_2 + (fLocal_90 * frameTime);
	}

	uParam0->f_14 = { uParam0->f_8 };

	if (fLocal_149 >= 0.033367f)
	{
		fLocal_149 = 0f;
	
		switch (iParam1)
		{
			case 0:
				randomFloatInRange2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f - fLocal_87, 0f + fLocal_87);
				randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f - fLocal_86, 0f + fLocal_86);
			
				if (uParam0->f_8 + (randomFloatInRange * 0.033367f) > -0.33f && uParam0->f_8 + (randomFloatInRange * 0.033367f) < 0.33f)
				{
					uParam0->f_8 = uParam0->f_8 + (randomFloatInRange2 * 0.033367f);
					uParam0->f_14 = uParam0->f_8;
					uParam0->f_14 = uParam0->f_14 + (randomFloatInRange * 0.033367f);
				}
			
				randomFloatInRange2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f - fLocal_87, 0f + fLocal_87);
				randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f - fLocal_86, 0f + fLocal_86);
			
				if (uParam0->f_8.f_2 + (randomFloatInRange * 0.033367f) > -0.29f && uParam0->f_8.f_2 + (randomFloatInRange * 0.033367f) < 0.29f)
				{
					uParam0->f_8.f_2 = uParam0->f_8.f_2 + (randomFloatInRange2 * 0.033367f);
					uParam0->f_14.f_2 = uParam0->f_8.f_2;
					uParam0->f_14.f_2 = uParam0->f_14.f_2 + (randomFloatInRange * 0.033367f);
				}
				break;
		
			case 1:
				fLocal_90 = 0.5f;
			
				if (iLocal_133 == 1)
				{
					num = 0.06f;
					num2 = 0.08f;
				}
				else
				{
					num = 0.02f;
					num2 = 0.03f;
				}
			
				randomFloatInRange2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f - num2, 0f + num2);
				randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f - num, 0f + num);
			
				if (uParam0->f_8 + (randomFloatInRange * 0.033367f) > -0.33f && uParam0->f_8 + (randomFloatInRange * 0.033367f) < 0.33f)
				{
					uParam0->f_8 = uParam0->f_8 + (randomFloatInRange2 * 0.033367f);
					uParam0->f_14 = uParam0->f_8;
					uParam0->f_14 = uParam0->f_14 + (randomFloatInRange * 0.033367f);
				}
			
				randomFloatInRange2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f - num2, 0f + num2);
				randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f - num, 0f + num);
			
				if (uParam0->f_8.f_2 + (randomFloatInRange * 0.033367f) > -0.33f && uParam0->f_8.f_2 + (randomFloatInRange * 0.033367f) < 0.33f)
				{
					uParam0->f_8.f_2 = uParam0->f_8.f_2 + (randomFloatInRange2 * 0.033367f);
					uParam0->f_14.f_2 = uParam0->f_8.f_2;
					uParam0->f_14.f_2 = uParam0->f_14.f_2 + (randomFloatInRange * 0.033367f);
				}
				break;
		}
	}

	return;
}

void func_313() // Position - 0x196BF (104127)
{
	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RB))
		fLocal_90 = 0.3f;
	else
		fLocal_90 = 0.1f;

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RT))
	{
		if (bLocal_92)
		{
			if (SYSTEM::TIMERA() > iLocal_140)
			{
				fLocal_86 = fLocal_88;
				fLocal_87 = fLocal_89;
				fLocal_90 = 0.1f;
				bLocal_92 = false;
			}
		}
		else if (iLocal_91 < 1)
		{
			fLocal_86 = 0.03f;
			fLocal_87 = 0.05f;
			fLocal_90 = 0.1f;
			SYSTEM::SETTIMERA(0);
			bLocal_92 = true;
			iLocal_91 = iLocal_91 + 1;
		}
		else if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_FST_HLP") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_AIM_HLP") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_CLOCK") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_STD_HLP") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_W") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_B") && !bLocal_93)
		{
			bLocal_93 = true;
		
			if (!IS_BIT_SET(Global_114123, 1))
			{
				_DISPLAY_HELP_TEXT("DARTS_SHT_USE", -1);
				MISC::SET_BIT(&Global_114123, 1);
			}
		}
	}
	else if (bLocal_92)
	{
		fLocal_86 = fLocal_88;
		fLocal_87 = fLocal_89;
		fLocal_90 = 0.1f;
		bLocal_92 = false;
	}

	return;
}

void func_314(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x197CE (104398)
{
	float num;

	num = { 0f, 0f, 0f };
	num = num + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f);
	num.f_2 = num.f_2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f);
	uParam0->f_8 = { uParam1.f_3 + num };
	uParam0->f_2 = { uLocal_80 };
	return;
}

BOOL func_315(var uParam0, var uParam1, BOOL bParam2) // Position - 0x19822 (104482)
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	float offsetFromCoordAndHeadingInWorldCoords2;
	var offsetFromCoordAndHeadingInWorldCoords3;
	float num;
	float randomFloatInRange;
	float headingFromVector2d;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		ENTITY::SET_ENTITY_COORDS(*uParam0, uLocal_77, true, false, false, true);
	else
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, uLocal_77, false, false, false);

	bLocal_92 = false;
	fLocal_90 = 0.1f;
	fLocal_86 = fLocal_88;
	fLocal_87 = fLocal_89;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_300(uParam0);
	randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
	offsetFromCoordAndHeadingInWorldCoords2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uLocal_80) };
	offsetFromCoordAndHeadingInWorldCoords3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14 + 0.0035f, uParam0->f_14.f_1 + fLocal_53, uParam0->f_14.f_2) };
	headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(offsetFromCoordAndHeadingInWorldCoords2 - offsetFromCoordAndHeadingInWorldCoords3, offsetFromCoordAndHeadingInWorldCoords2.f_1 - offsetFromCoordAndHeadingInWorldCoords3.f_1);
	headingFromVector2d = headingFromVector2d - 180f;
	num = 90f;
	uParam0->f_17 = { num, randomFloatInRange, headingFromVector2d };
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);
	bLocal_96 = false;
	bLocal_98 = false;

	if (bParam2)
		func_287("Darts", "Dart_Reticules", &fLocal_59, 1, 0, 4, false);

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, uParam0->f_8.f_1 + fLocal_53, uParam0->f_8.f_2) };
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(offsetFromCoordAndHeadingInWorldCoords, &fLocal_68, &(fLocal_68.f_1));
	return true;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x19959 (104793)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_317(int iParam0, BOOL bParam1) // Position - 0x1996C (104812)
{
	if (iParam0 == 0)
	{
		if (!IS_BIT_SET(Global_114123, 9))
		{
			if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_SHT_USE") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_W") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_B"))
			{
				_DISPLAY_HELP_TEXT("DARTS_AIM_HLP", -1);
				MISC::SET_BIT(&Global_114123, 9);
			}
		}
		else if (bParam1 && !IS_BIT_SET(Global_114123, 7))
		{
			if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_AIM_HLP") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_W") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_B"))
			{
				_DISPLAY_HELP_TEXT("DARTS_CLOCK", -1);
				MISC::SET_BIT(&Global_114123, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_114123, 8))
		{
			if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_SHT_USE") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_W") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_B"))
			{
				_DISPLAY_HELP_TEXT("DARTS_STD_HLP", -1);
				MISC::SET_BIT(&Global_114123, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (!bLocal_94 && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_SHT_USE") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_W") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_B"))
		{
			if (!IS_BIT_SET(Global_114123, 2))
			{
				_DISPLAY_HELP_TEXT("DARTS_FST_HLP", -1);
				MISC::SET_BIT(&Global_114123, 2);
			}
		
			bLocal_94 = true;
		}
	}

	return;
}

BOOL func_318(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x19AB5 (105141)
{
	Vector3 vector;

	switch (*uParam2)
	{
		case 0:
			vector = { func_321(iParam0) };
			*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, vector) };
			func_320(*uParam3);
			SYSTEM::SETTIMERB(0);
			*uParam2 = 1;
			break;
	
		case 1:
			if (SYSTEM::TIMERB() > 3000 || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
			{
				func_319();
				*uParam2 = 0;
				return true;
			}
			break;
	}

	return false;
}

void func_319() // Position - 0x19B26 (105254)
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_118, caLocal_130, 2000, 1, 1);
	CAM::DESTROY_CAM(caLocal_130, false);
	return;
}

void func_320(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x19B42 (105282)
{
	Vector3 vector;

	vector = { -5.5606f, -0.0106f, -131.6781f };
	caLocal_130 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam0, vector, 1115815936, false, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_130, caLocal_118, 2000, 1, 1);
	return;
}

Vector3 func_321(int iParam0) // Position - 0x19B84 (105348)
{
	float num;
	float num2;

	if (iParam0 == 50)
	{
		num2 = { 0f, -0.5f, 0f };
	}
	else
	{
		num = func_324(iParam0);
		num2.f_1 = -0.5f;
		num2 = func_323(num);
		num2.f_2 = func_322(num);
	}

	return num2;
}

float func_322(float fParam0) // Position - 0x19BC8 (105416)
{
	float num;
	float num2;

	num = 0.218f;
	num2 = SYSTEM::COS(fParam0) * num;
	return num2;
}

float func_323(float fParam0) // Position - 0x19BE4 (105444)
{
	float num;
	float num2;

	num = 0.218f;
	num2 = SYSTEM::SIN(fParam0) * num;
	return num2;
}

float func_324(int iParam0) // Position - 0x19C00 (105472)
{
	int i;
	int num;
	float num2;
	float num3;

	num = iParam0 / 2;

	for (i = 0; i < 21; i = i + 1)
	{
		if (num == uLocal_31[i])
			num3 = num2;
	
		num2 = num2 + 18f;
	}

	return num3;
}

BOOL func_325(var uParam0) // Position - 0x19C3C (105532)
{
	switch (*uParam0)
	{
		case 0:
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_LT))
			{
				func_332(true);
				*uParam0 = 1;
			}
			else
			{
				return false;
			}
			break;
	
		case 1:
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_LT))
			{
				if (!CAM::IS_CAM_INTERPOLATING(caLocal_127))
				{
					func_330();
					func_329(&caLocal_303, uLocal_334, uLocal_337, 30f, 10, 10, 3, 15f, 0, 0, -1f, true);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
	
		case 2:
			if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_LT))
				*uParam0 = 3;
			else
				func_326(&caLocal_303, true, true, false, false, 1045220557, false, 1065353216, false);
			break;
	
		case 3:
			func_332(false);
			func_523();
		
			if (CAM::DOES_CAM_EXIST(caLocal_303))
			{
				if (CAM::IS_CAM_ACTIVE(caLocal_303))
					CAM::SET_CAM_ACTIVE(caLocal_303, false);
			
				CAM::DESTROY_CAM(caLocal_303, false);
			}
		
			*uParam0 = 0;
			return false;
	}

	return true;
}

void func_326(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x19D2F (105775)
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
	func_328(&unk[0], &unk[1], &unk[2], &unk[3], false, false);

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
	
		unk[2] = func_327(unk[2] + uParam0->f_24, -127, 127);
		unk[3] = func_327(unk[3] + uParam0->f_25, -127, 127);
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
		uParam0->f_14 = uParam0->f_14 + func_14((num4 - uParam0->f_14) * 0.05f * num3 * iParam7, -3f, 3f);
		uParam0->f_14.f_1 = uParam0->f_14.f_1 + func_14((num4.f_1 - uParam0->f_14.f_1) * 0.05f * num3 * iParam7, -3f, 3f);
		uParam0->f_14.f_2 = uParam0->f_14.f_2 + func_14((num4.f_2 - uParam0->f_14.f_2) * 0.05f * num3 * iParam7, -3f, 3f);
	}

	if (uParam0->f_26)
	{
		uParam0->f_14 = func_14(uParam0->f_14, SYSTEM::TO_FLOAT(-uParam0->f_21), SYSTEM::TO_FLOAT(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, SYSTEM::TO_FLOAT(-uParam0->f_22), SYSTEM::TO_FLOAT(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, SYSTEM::TO_FLOAT(-uParam0->f_20), SYSTEM::TO_FLOAT(uParam0->f_20));
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
				uParam0->f_17 = func_14(uParam0->f_17, uParam0->f_7 - uParam0->f_19, uParam0->f_7);
			else
				uParam0->f_17 = func_14(uParam0->f_17, uParam0->f_7 - uParam0->f_19, uParam0->f_7 + uParam0->f_19);
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

int func_327(int iParam0, int iParam1, int iParam2) // Position - 0x1A283 (107139)
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

void func_328(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1A2A8 (107176)
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

void func_329(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, BOOL bParam15) // Position - 0x1A3AC (107436)
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
	uParam0->f_19 = fParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);

	if (!bParam15)
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);

	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);

	if (fParam14 > 0f)
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);

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

void func_330() // Position - 0x1A4A4 (107684)
{
	if (bLocal_259)
		return;

	func_331();
	PAD::INIT_PC_SCRIPTED_CONTROLS("Darts Zoom");
	bLocal_259 = true;
	return;
}

void func_331() // Position - 0x1A4C6 (107718)
{
	if (bLocal_258 || bLocal_259)
	{
		PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
		bLocal_258 = false;
		bLocal_259 = false;
	}

	return;
}

void func_332(BOOL bParam0) // Position - 0x1A4E9 (107753)
{
	if (bParam0)
		CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_127, caLocal_118, 1000, 1, 1);
	else
		CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_118, caLocal_127, 1000, 1, 1);

	return;
}

void func_333(var uParam0) // Position - 0x1A513 (107795)
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
			uParam0->f_681 = 0;
	
		uParam0->f_679 = 0;
	}

	switch (uParam0->f_681)
	{
		case 0:
			func_254(&(uParam0->f_62), func_335(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
	
		case 1:
			if (!func_249(&(uParam0->f_62), 0))
			{
				func_334(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
	
		case 2:
			break;
	}

	return;
}

void func_334(var uParam0) // Position - 0x1A598 (107928)
{
	uParam0->f_8 = 0;
	func_445(&(uParam0->f_2));
	func_445(&(uParam0->f_5));
	return;
}

char* func_335(int iParam0) // Position - 0x1A5B5 (107957)
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
	
		case 1:
			return "DARTS_BE_SPLSH";
	
		default:
		
	}

	return "DARTS_BE_SPLSH";
}

void func_336(var uParam0) // Position - 0x1A5E2 (108002)
{
	if (!bLocal_97)
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
			bLocal_97 = true;

	if (iLocal_28 == 1 && iLocal_29 < 3 && *uParam0 != 5)
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RDOWN) && bLocal_97)
			*uParam0 = 6;

	return;
}

void func_337(var uParam0, int iParam1) // Position - 0x1A63A (108090)
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !(iLocal_91 > 0))
			{
				func_128(&(uParam0->f_509), false, false, false, true);
				func_127(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_127(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_338(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_127(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_127(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_127(&(uParam0->f_509), "IB_ZOOM" /*Zoom*/, 2, 228, 1, 1, 0);
				func_124(&(uParam0->f_509), true);
				func_344(&(uParam0->f_666), 8, false);
				func_344(&(uParam0->f_666), 16, false);
				func_344(&(uParam0->f_666), 23, false);
			}
			else if (iLocal_91 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_128(&(uParam0->f_509), false, false, false, true);
				func_127(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_127(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_338(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_127(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_127(&(uParam0->f_509), "IB_ZOOM" /*Zoom*/, 2, 228, 1, 1, 0);
				func_124(&(uParam0->f_509), true);
				func_344(&(uParam0->f_666), 8, false);
				func_344(&(uParam0->f_666), 16, false);
				func_344(&(uParam0->f_666), 23, false);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_128(&(uParam0->f_509), true, false, false, true);
			func_127(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_127(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_124(&(uParam0->f_509), true);
			func_344(&(uParam0->f_666), 16, true);
			func_344(&(uParam0->f_666), 8, false);
			func_344(&(uParam0->f_666), 15, false);
			func_344(&(uParam0->f_666), 17, false);
			func_344(&(uParam0->f_666), 23, false);
		}
	
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		func_212(func_3(&(uParam0->f_666), 16) ? 1 : 2);
		func_130(&(uParam0->f_509), 200f, 1, false, false, 1065353216);
	}
	else if (func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16) || func_3(&(uParam0->f_666), 23))
	{
		func_344(&(uParam0->f_666), 15, false);
		func_344(&(uParam0->f_666), 16, false);
		func_344(&(uParam0->f_666), 23, false);
	}

	return;
}

int func_338(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1A8F6 (108790)
{
	int num;

	if (*uParam0 == 0)
		return 0;

	num = uParam0->f_123;

	if (num < 8)
	{
		uParam0->f_2[num /*15*/] = sParam1;
		uParam0->f_2[num /*15*/].f_1 = 0;
		uParam0->f_2[num /*15*/].f_2 = iParam5;
		uParam0->f_2[num /*15*/].f_12 = 0;
		uParam0->f_2[num /*15*/].f_13 = 0;
		uParam0->f_2[num /*15*/].f_14 = 0;
		uParam0->f_2[num /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[num /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		MISC::SET_BIT(&(uParam0->f_2[num /*15*/].f_12), 0);
	
		if (iParam4 == 1)
			MISC::SET_BIT(&(uParam0->f_2[num /*15*/].f_13), 0);
	
		uParam0->f_2[num /*15*/].f_14 = uParam0->f_2[num /*15*/].f_14 + 1;
		uParam0->f_123 = uParam0->f_123 + 1;
		return 1;
	}

	return 0;
}

void func_339(var uParam0) // Position - 0x1A9C1 (108993)
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_128(&(uParam0->f_509), false, false, false, true);
			func_338(&(uParam0->f_509), "IB_MAPMOVE" /*Move*/, 2, 21, 1, 0);
			func_127(&(uParam0->f_509), "IB_ZOOM" /*Zoom*/, 2, 39, 1, 1, 0);
			func_124(&(uParam0->f_509), true);
			func_344(&(uParam0->f_666), 23, true);
			func_344(&(uParam0->f_666), 8, false);
			func_344(&(uParam0->f_666), 16, false);
			func_344(&(uParam0->f_666), 15, false);
			func_344(&(uParam0->f_666), 17, false);
		}
	
		func_130(&(uParam0->f_509), 1128792064, 1, false, true, 1065353216);
	}
	else if (func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16) || func_3(&(uParam0->f_666), 23))
	{
		func_344(&(uParam0->f_666), 15, false);
		func_344(&(uParam0->f_666), 16, false);
		func_344(&(uParam0->f_666), 23, false);
		func_344(&(uParam0->f_666), 17, false);
	}

	return;
}

void func_340(var uParam0) // Position - 0x1AAD3 (109267)
{
	BOOL flag;

	flag = false;

	if (!bLocal_97)
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) && !PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
			bLocal_97 = true;
		else
			bLocal_97 = false;

	if (*uParam0 != 13)
	{
		if (flag)
		{
			if (bLocal_97 && bLocal_96 == false)
			{
				bLocal_97 = false;
				flag = false;
				bLocal_274 = false;
				HUD::CLEAR_HELP(true);
			}
		}
	
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_SCRIPT_PAD_RIGHT) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_SCRIPT_PAD_RIGHT))
		{
			if (!bLocal_274)
			{
				*uParam0 = 14;
				bLocal_274 = true;
				HUD::CLEAR_HELP(true);
			}
		}
		else if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_QUIT"))
		{
			flag = true;
		}
		else
		{
			flag = false;
			bLocal_274 = false;
		}
	}

	return;
}

void func_341(Ped pedParam0) // Position - 0x1AB76 (109430)
{
	if (!PED::IS_PED_INJURED(pedParam0))
		func_4(pedParam0, "DARTS_BOAST", false, 4);

	return;
}

float func_342(int iParam0) // Position - 0x1AB94 (109460)
{
	if (iParam0 < 10)
		return 0.107f;

	if (iParam0 < 25)
		return 0.096f;

	if (iParam0 < 50)
		return 0.085f;

	if (iParam0 < 70)
		return 0.075f;

	return 0.064f;
}

float func_343(int iParam0) // Position - 0x1ABE9 (109545)
{
	if (iParam0 < 10)
		return 0.08f;

	if (iParam0 < 25)
		return 0.072f;

	if (iParam0 < 50)
		return 0.064f;

	if (iParam0 < 70)
		return 0.056f;

	return 0.048f;
}

void func_344(int* piParam0, int iParam1, BOOL bParam2) // Position - 0x1AC3E (109630)
{
	if (bParam2)
		MISC::SET_BIT(piParam0, iParam1);
	else
		MISC::CLEAR_BIT(piParam0, iParam1);

	return;
}

BOOL func_345(int iParam0, var uParam1) // Position - 0x1AC5E (109662)
{
	if (iParam0 >= 10)
	{
		if (!IS_BIT_SET(Global_114162.f_18974.f_6, 12))
		{
			*uParam1 = 12;
			return true;
		}
	}

	return false;
}

BOOL func_346(var uParam0, var uParam1, var uParam2) // Position - 0x1AC87 (109703)
{
	int i;
	int j;

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_422[i] = 301;
		uParam0->f_425[i] = 301;
	}

	uParam0->f_454 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			func_257(&uParam0->f_5[i /*79*/][j /*26*/]);
		}
	
		func_256(uParam1, i);
		func_262(uParam1, i, 301);
	}

	iLocal_28 = 0;
	iLocal_29 = 0;
	uParam0->f_428 = 0;
	uParam0->f_249.f_3 = 0;
	iLocal_290 = 0;
	uParam0->f_436 = 0;
	iLocal_91 = 0;
	bLocal_267 = true;
	bLocal_268 = false;
	bLocal_270 = false;
	bLocal_93 = false;
	uParam0->f_458 = 0;
	uParam0->f_456 = 0;
	bLocal_276 = false;
	func_344(&(uParam2->f_666), 6, false);
	func_352();
	func_350(uParam2);

	if (uParam0->f_457)
	{
		func_347(uParam0->f_457);
		uParam0->f_457 = 0;
	}

	return true;
}

void func_347(BOOL bParam0) // Position - 0x1AD73 (109939)
{
	HUD::DISPLAY_RADAR(false);

	if (CAM::IS_CAM_ACTIVE(caLocal_120))
		CAM::SET_CAM_ACTIVE(caLocal_120, false);

	if (CAM::IS_CAM_ACTIVE(caLocal_124))
		CAM::SET_CAM_ACTIVE(caLocal_124, false);

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_349();
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::DO_SCREEN_FADE_IN(500);
	}

	func_348(bParam0);
	return;
}

void func_348(BOOL bParam0) // Position - 0x1ADC4 (110020)
{
	if (bParam0)
		CAM::SET_CAM_ACTIVE(caLocal_118, true);

	return;
}

void func_349() // Position - 0x1ADD8 (110040)
{
	CAM::SET_CAM_ACTIVE(caLocal_120, true);
	return;
}

void func_350(var uParam0) // Position - 0x1ADE7 (110055)
{
	func_351();
	uParam0->f_670 = 3;
	func_344(&(uParam0->f_666), 15, false);
	func_344(&(uParam0->f_666), 16, false);
	func_344(&(uParam0->f_666), 17, false);
	return;
}

void func_351() // Position - 0x1AE1D (110109)
{
	int i;

	iLocal_163.f_66 = -1;
	iLocal_163.f_67 = 10f;

	for (i = 0; i < 8; i = i + 1)
	{
		iLocal_163.f_9[i /*7*/].f_3 = -1f;
		iLocal_163.f_9[i /*7*/].f_4 = -1f;
		iLocal_163.f_9[i /*7*/].f_5 = 0;
		iLocal_163.f_9[i /*7*/].f_6 = 0;
	}

	iLocal_163.f_5 = 0;
	iLocal_163.f_5.f_1 = -1f;
	iLocal_163.f_5.f_2 = 0;
	iLocal_163 = 0;
	iLocal_163.f_1 = 0;
	return;
}

void func_352() // Position - 0x1AE8D (110221)
{
	SYSTEM::SETTIMERA(0);
	bLocal_97 = false;
	HUD::CLEAR_SMALL_PRINTS();
	return;
}

void func_353(BOOL bParam0, int iParam1) // Position - 0x1AEA1 (110241)
{
	int num;

	if (!func_355(&num, false, iParam1))
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
		func_354(&Global_23987.f_6263[num /*10*/]);
		Global_23987.f_6324[num] = 0;
	}
	else
	{
		Global_23987.f_6324[num] = 0;
	}

	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
	return;
}

void func_354(int iParam0) // Position - 0x1AF67 (110439)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}

	return;
}

BOOL func_355(var uParam0, BOOL bParam1, int iParam2) // Position - 0x1AF93 (110483)
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

void func_356(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1B030 (110640)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_357(var uParam0, var uParam1, var uParam2) // Position - 0x1B060 (110688)
{
	char* gxt;
	int num;
	int num2;

	num = 0;
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);

	if (!func_3(&(uParam0->f_666), 7))
	{
		func_425(false, false, false, true);
		func_424(false, -1, true);
	
		if (func_423())
		{
			if (Global_4542450 == uParam0->f_660)
			{
				num = 1;
			}
			else
			{
				uParam0->f_660 = Global_4542450;
				func_422(uParam0->f_660, true, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			
				switch (uParam0->f_660)
				{
					case 0:
						gxt = "DARTS_LEGD";
						break;
				
					case 1:
						gxt = "DARTS_SETD";
						break;
				
					case 2:
						gxt = "";
						break;
				}
			
				if (HUD::DOES_TEXT_LABEL_EXIST(gxt))
					func_421(gxt, 0, 0);
			}
		
			Global_4542451 = MISC::GET_GAME_TIMER() + 300;
		}
		else if (func_420() && MISC::GET_GAME_TIMER() > Global_4542451)
		{
			if (Global_4542450 == uParam0->f_660)
			{
				num2 = func_419(0);
			
				if (num2 == -1 || num2 == 1)
					num = 1;
			}
		
			Global_4542451 = MISC::GET_GAME_TIMER() + 300;
		}
	
		if (func_418(&(uParam0->f_639)))
		{
			uParam0->f_660 = uParam0->f_660 - 1;
		
			if (uParam0->f_660 < 0)
				uParam0->f_660 = uParam0->f_661 - 1;
		
			func_422(uParam0->f_660, true, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		
			switch (uParam0->f_660)
			{
				case 0:
					gxt = "DARTS_LEGD";
					break;
			
				case 1:
					gxt = "DARTS_SETD";
					break;
			
				case 2:
					gxt = "";
					break;
			}
		
			if (HUD::DOES_TEXT_LABEL_EXIST(gxt))
				func_421(gxt, 0, 0);
		}
	
		if (func_417(&(uParam0->f_642)))
		{
			uParam0->f_660 = uParam0->f_660 + 1;
		
			if (uParam0->f_660 > uParam0->f_661 - 1)
				uParam0->f_660 = 0;
		
			func_422(uParam0->f_660, true, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		
			switch (uParam0->f_660)
			{
				case 0:
					gxt = "DARTS_LEGD";
					break;
			
				case 1:
					gxt = "DARTS_SETD";
					break;
			
				case 2:
					gxt = "";
					break;
			}
		
			if (HUD::DOES_TEXT_LABEL_EXIST(gxt))
				func_421(gxt, 0, 0);
		}
	
		if (func_416(&(uParam0->f_633)) || func_415(&(uParam0->f_633), uParam0->f_660, num))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = uParam0->f_662 - 1;
			
				if (uParam0->f_662 < 0)
					uParam0->f_662 = uParam0->f_663 - 1;
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = uParam0->f_664 - 1;
			
				if (uParam0->f_664 < 0)
					uParam0->f_664 = uParam0->f_665 - 1;
			}
		
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_401(uParam0);
		}
	
		if (func_400(&(uParam0->f_636)) || func_398(&(uParam0->f_636), uParam0->f_660, num))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = uParam0->f_662 + 1;
			
				if (uParam0->f_662 > uParam0->f_663 - 1)
					uParam0->f_662 = 0;
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = uParam0->f_664 + 1;
			
				if (uParam0->f_664 > uParam0->f_665 - 1)
					uParam0->f_664 = 0;
			}
		
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_401(uParam0);
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || num == 1 && uParam0->f_660 == 2)
		{
			*uParam1 = func_397(uParam0->f_662 + 1, true);
			*uParam2 = func_397(uParam0->f_664 + 1, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			return true;
		}
	
		func_361(true, -1, true, false, true, -1082130432, false, false, -1);
	
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL) || func_360())
		{
			func_358(false, false);
			func_344(&(uParam0->f_666), 8, false);
			func_344(&(uParam0->f_666), 7, true);
		}
	}
	else
	{
		func_2(uParam0);
	
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
		{
			func_39(0);
			*uParam1 = -1;
			return true;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
		{
			func_401(uParam0);
			func_344(&(uParam0->f_666), 7, false);
		}
	}

	return false;
}

void func_358(BOOL bParam0, BOOL bParam1) // Position - 0x1B470 (111728)
{
	int i;
	int j;
	float aspectRatio;

	for (i = 0; i < 256; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_79[i /*6*/], "", 24);
	
		for (j = 0; j < 4; j = j + 1)
		{
			Global_23987.f_2387[i /*5*/][j] = 0;
		}
	}

	for (i = 0; i < 50; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_2696988[i /*16*/], "", 64);
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_23987.f_4469[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_23987.f_4726[i] = 0f;
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_23987.f_4984[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_23987.f_5692[i] = 0;
		Global_23987.f_5830[i] = false;
		Global_23987.f_5959[i] = false;
		Global_23987.f_6482[i] = 0f;
		Global_23987.f_6088[i] = false;
		Global_23987.f_6348[i] = 0f;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		Global_23987.f_5659[i] = 0;
		Global_23987.f_5671[i] = 0f;
		Global_23987.f_5665[i] = -1f;
		Global_23987.f_5678[i] = false;
		Global_23987.f_5686[i] = 1;
	}

	for (i = 0; i < 14; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_5553[i /*4*/], "", 16);
		Global_23987.f_5610[i] = -1;
		Global_23987.f_5625[i] = 365;
		Global_23987.f_5640[i] = 32;
	}

	for (i = 0; i < 66; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_6623[i /*16*/], "", 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_7680[i /*16*/], "", 64);
	}

	if (bParam1)
	{
		for (i = 0; i < 256; i = i + 1)
		{
			Global_23987.f_1616[i] = false;
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_16), "", 16);
	Global_4542374.f_20 = -1;
	Global_23987 = false;
	Global_23987.f_5821 = 0;
	Global_23987.f_5822 = 0;
	Global_23987.f_5823 = 0;
	Global_23987.f_5825 = 0;
	Global_23987.f_5826 = 0;
	Global_23987.f_5827 = 0;
	Global_23987.f_5824 = 0;
	Global_23987.f_6477 = 0;
	Global_23987.f_6617 = 0;
	Global_23987.f_6342 = 0;
	Global_23987.f_6341 = 0;
	Global_23987.f_6343 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_5241), "", 24);
	Global_23987.f_5319 = 0;
	Global_23987.f_5320 = 0;
	Global_23987.f_5321 = 0;
	Global_23987.f_5322 = 0;
	Global_23987.f_5323 = 0;
	Global_23987.f_5324 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23987.f_5253[i] = 0;
	}

	Global_23987.f_5325 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_21), "", 16);
	Global_4542374.f_61 = 0;
	Global_4542374.f_62 = 0;
	Global_4542374.f_63 = 0;
	Global_4542374.f_64 = 0;
	Global_4542374.f_65 = 0;
	Global_4542374.f_66 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_4542374.f_25[i] = 0;
	}

	Global_4542374.f_67 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_1), "", 16);
	Global_23987.f_5677 = 0f;
	Global_23987.f_74 = 0;
	Global_23987.f_75 = 0;
	Global_23987.f_76 = 0;
	Global_23987.f_77 = 0;
	Global_23987.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23987.f_5[i] = 0;
	}

	Global_23987.f_6347 = 0;
	Global_23987.f_6346 = 0;
	Global_23987.f_6344 = 0;
	Global_23987.f_6345 = 0;
	Global_23987.f_5326 = 0;
	Global_23987.f_5327 = 0;
	Global_23987.f_5828 = 10;
	Global_23987.f_5829 = 0;
	Global_23987.f_6479 = 0f;
	Global_23987.f_6480 = 0f;
	Global_23987.f_6331 = 0;
	Global_23987.f_6332 = 0;
	Global_23987.f_6333 = 0f;
	Global_23987.f_6334 = 0;
	Global_23987.f_6336 = 0;
	Global_23987.f_6335 = 0;
	Global_23987.f_6337 = 0;
	Global_23987.f_6338 = 0;
	Global_23987.f_6339 = 0;
	Global_23987.f_6340 = 0;
	Global_23987.f_9112 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_23987.f_6611[i] = -1;
		Global_23987.f_6614[i] = -1;
	}

	Global_23987.f_5684 = 0f;
	Global_23987.f_5655 = 0;
	Global_23987.f_5685 = 0;

	for (i = 0; i < Global_23987.f_6618; i = i + 1)
	{
		Global_23987.f_6618[i] = 0;
	}

	Global_23987.f_9091 = 0;
	Global_23987.f_9086 = 0;
	Global_23987.f_9096 = 0;
	Global_23987.f_9101 = 0;
	Global_23987.f_9106 = 0;
	Global_23987.f_9108 = 0;
	Global_23987.f_9114 = 0;
	Global_23987.f_9117 = func_359(false);
	Global_23984 = 0.05f;
	Global_23985 = 0.05f;
	Global_23986 = 0.225f;
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (!bParam0 && aspectRatio < 1.7777778f)
		Global_23986 = 0.225f * (1.7777778f / aspectRatio);

	return;
}

float func_359(BOOL bParam0) // Position - 0x1B952 (112978)
{
	float aspectRatio;

	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (!bParam0 && aspectRatio < 1.7777778f)
		aspectRatio = 1.7777778f;

	return aspectRatio;
}

BOOL func_360() // Position - 0x1B97D (113021)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL))
			return true;

	return false;
}

void func_361(BOOL bParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Position - 0x1B99C (113052)
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
	float num25;
	float num26;
	float num27;
	float textureResolution;
	BOOL flag3;
	float x;
	float num28;
	float num29;
	float num30;
	float num31;
	int num32;
	int num33;
	int num34;
	int num35;
	float num36;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	float num37;
	float num38;
	float num39;
	float num40;
	var unk3;
	var unk4;
	float num41;
	var unk5;
	var unk21;
	float num42;
	float size;
	float size2;
	int num43;
	float num44;
	float num45;
	int m;
	int r2;
	int g2;
	int b2;
	int a2;
	int num46;
	var text;
	float value;
	float value2;
	float num47;
	float num48;
	float num49;

	if (!func_355(&num, false, iParam1))
		return;

	num == -1;

	if (!func_394(false, bParam6))
		return;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num38 = 0f;

	if (Global_23987)
		if (func_19(29, true, true, &num26, &num27, bParam7))
			num39 = num27 / num26;
		else
			Global_23987 = false;

	if (iParam5 == -1f)
		iParam5 = Global_23986;

	num38 = iParam5 * num39;

	if (MISC::GET_HASH_KEY(&(Global_23987.f_1)) == MISC::GET_HASH_KEY("HIDE"))
		num40 = Global_23985;
	else
		num40 = Global_23985 + num38 + 0.034722f + 0f;

	num41 = 1f;
	func_21(bParam7, &unk3, &unk4, &num41);

	if (bParam3)
	{
		if (Global_23987.f_5821 <= 1)
		{
			func_390(Global_23987.f_5821 + 1, "DFLT_MNU_OPT" /*Exit*/, 0, true, 0, false, 0);
			Global_23987.f_6617 = 1;
		}
	}

	for (i = 0; i < 2; i = i + 1)
	{
		if (i == 1 && Global_23987.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_23987.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				num36 = Global_23985;
			}
			else
			{
				if (Global_23987)
				{
					TEXT_LABEL_ASSIGN_STRING(&unk5, func_26(29), 64);
					TEXT_LABEL_ASSIGN_STRING(&unk21, func_23(29, true), 64);
				
					if (MISC::GET_HASH_KEY(&Global_23987.f_7680[29 /*16*/]) == joaat("CREW_LOGO"))
					{
						func_389(Global_23984, Global_23985, iParam5, num38, 0, 0, 0, 255);
						func_388(&unk5, &unk21, Global_23984 + (iParam5 * 0.5f), Global_23985 + (num38 * 0.5f), iParam5, num38, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						func_388(&unk5, &unk21, Global_23984 + (iParam5 * 0.5f), Global_23985 + (num38 * 0.5f), iParam5, num38, 0f, 255, 255, 255, 255, false, 0);
					}
				}
			
				if (Global_23987.f_9086)
				{
					r = Global_23987.f_9082;
					g = Global_23987.f_9083;
					b = Global_23987.f_9084;
					a = Global_23987.f_9085;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
			
				func_389(Global_23984, Global_23985 + num38, iParam5, 0.034722f, r, g, b, a);
				num36 = Global_23985 + num38 + 0.034722f + 0f;
			
				if (MISC::GET_HASH_KEY(&(Global_23987.f_1)) != 0)
				{
					func_387();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23987.f_1));
					num7 = 0;
					num8 = 0;
					num9 = 0;
					num10 = 0;
				
					for (l = 0; l < Global_23987.f_74; l = l + 1)
					{
						if (Global_23987.f_5[l] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_10[num7]);
							num7 = num7 + 1;
						}
						else if (Global_23987.f_5[l] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_14[num8], Global_23987.f_18[num8]);
							num8 = num8 + 1;
						}
						else if (Global_23987.f_5[l] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_23987.f_5[l] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_23987.f_5[l] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23987.f_5[l] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23987.f_5[l] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23987.f_5[l] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
					}
				
					func_386(Global_23984 + 0.00390625f, Global_23985 + num38 + 0.00416664f, 0);
				}
			
				if (Global_23987.f_6338)
				{
					func_387();
					func_384((Global_23984 + iParam5) - 0.00390625f - func_385("CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23987.f_6339, Global_23987.f_6340), Global_23985 + num38 + 0.00416664f, "CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23987.f_6339, Global_23987.f_6340);
				}
				else if (Global_23987.f_6334 > Global_23987.f_5828)
				{
					if (Global_23987.f_6337 != 0)
					{
						func_387();
						func_384((Global_23984 + iParam5) - 0.00390625f - func_385("CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23987.f_6337, Global_23987.f_6336), Global_23985 + num38 + 0.00416664f, "CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23987.f_6337, Global_23987.f_6336);
					}
				}
			}
		
			numberOfLinesForString = Global_23987.f_6341;
			num2 = 0;
			num42 = num36;
		
			if (Global_23987.f_9096)
			{
				r = Global_23987.f_9092;
				g = Global_23987.f_9093;
				b = Global_23987.f_9094;
				a = Global_23987.f_9095;
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
			}
		
			while (num2 < Global_23987.f_5828 && numberOfLinesForString <= Global_23987.f_5821)
			{
				if (numberOfLinesForString >= 0)
				{
					if (Global_23987.f_6088[numberOfLinesForString])
					{
						if (Global_23987.f_5959[numberOfLinesForString] && numberOfLinesForString != Global_23987.f_6341)
							num36 = num36 + 0.00277776f;
					
						num37 = 0.034722f;
					
						if (Global_23987.f_6348[numberOfLinesForString] != 0f)
							num37 = Global_23987.f_6348[numberOfLinesForString];
					
						num36 = num36 + num37;
						num2 = num2 + 1;
					}
				}
			
				numberOfLinesForString = numberOfLinesForString + 1;
			}
		
			func_388("CommonMenu", "Gradient_Bgd", Global_23984 + (iParam5 * 0.5f), (num42 + ((num36 - num42) * 0.5f)) - 0.00138888f, iParam5, num36 - num42, 0f, 255, 255, 255, 255, false, 0);
		
			if (Global_23987.f_6334 > Global_23987.f_5828)
			{
				if (Global_23987.f_9101)
				{
					r = Global_23987.f_9097;
					g = Global_23987.f_9098;
					b = Global_23987.f_9099;
					a = Global_23987.f_9100;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 204;
				}
			
				func_389(Global_23984, num36 + 0f, iParam5, 0.034722f, r, g, b, a);
				textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				textureResolution = textureResolution * (0.5f / num41);
				textureResolution.f_1 = textureResolution.f_1 * (0.5f / num41);
			
				if (Global_23987.f_9114)
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
			
				func_388("CommonMenu", "shop_arrows_upANDdown", Global_23984 + (iParam5 * 0.5f), num36 + 0f + (0.034722f * 0.5f), (textureResolution / 1280f) * num41, (textureResolution.f_1 / 720f) * num41, 0f, r, g, b, a, false, 0);
				num36 = num36 + 0f + 0.034722f;
			}
		
			if (MISC::GET_HASH_KEY(&(Global_23987.f_5241)) != 0 && Global_23987.f_5323 != -1)
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_23984 + 0.0046875f;
			
				if (Global_23987.f_5325 != 0)
				{
					func_19(Global_23987.f_5325, true, true, &num26, &num27, bParam7);
					x = (Global_23984 + num26 + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_383(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23987.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23987.f_5319; l = l + 1)
				{
					if (Global_23987.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23987.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_5262[num8], Global_23987.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23987.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_389(Global_23984, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23987.f_9106)
				{
					r = Global_23987.f_9102;
					g = Global_23987.f_9103;
					b = Global_23987.f_9104;
					a = Global_23987.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_388("CommonMenu", "Gradient_Bgd", Global_23984 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_383(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23987.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23987.f_5319; l = l + 1)
				{
					if (Global_23987.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23987.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_5262[num8], Global_23987.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23987.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				func_386(x, num36 + 0.00277776f, 0);
			
				if (Global_23987.f_5325 != 0)
				{
					func_19(Global_23987.f_5325, true, true, &num26, &num27, bParam7);
					func_382(Global_23987.f_5325, true, &num32, &num33, &num34, &num35);
					func_388(func_26(Global_23987.f_5325), func_23(Global_23987.f_5325, true), Global_23984 + (num26 * 0.5f) + (0.00078125f * 2f), (num36 + (num27 * 0.5f)) - (0.00138888f * 4f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
				}
			
				num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23987.f_5247)))
				{
					num36 = num36 + (0.00138888f * 6f);
					func_383(x);
					size = 0.35f;
				
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23987.f_5247))) > 600)
						size = 0.35f * 0.625f;
				
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23987.f_5247));
					numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
					HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
					func_389(Global_23984, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
				
					if (Global_23987.f_9106)
					{
						r = Global_23987.f_9102;
						g = Global_23987.f_9103;
						b = Global_23987.f_9104;
						a = Global_23987.f_9105;
					}
					else
					{
						HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
					}
				
					func_388("CommonMenu", "Gradient_Bgd", Global_23984 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
					func_383(x);
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23987.f_5247));
					func_386(x, num36 + 0.00277776f, 0);
					num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
				}
			
				if (Global_23987.f_5323 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_23987.f_5324 > Global_23987.f_5323)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_5241), "", 24);
						Global_23987.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23987.f_5247)))
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_23984 + 0.0046875f;
				size2 = 0.35f;
			
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23987.f_5247))) > 600)
					size2 = 0.35f * 0.625f;
			
				func_383(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23987.f_5247));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23987.f_5319; l = l + 1)
				{
					if (Global_23987.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23987.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_5262[num8], Global_23987.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23987.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23987.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23987.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_389(Global_23984, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23987.f_9106)
				{
					r = Global_23987.f_9102;
					g = Global_23987.f_9103;
					b = Global_23987.f_9104;
					a = Global_23987.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_388("CommonMenu", "Gradient_Bgd", Global_23984 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
				func_383(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23987.f_5247));
				func_386(x, num36 + 0.00277776f, 0);
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4542374.f_21)) != 0 && Global_4542374.f_65 != -1)
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_23984 + 0.0046875f;
			
				if (Global_4542374.f_67 != 0)
				{
					func_19(Global_4542374.f_67, true, true, &num26, &num27, bParam7);
					x = (Global_23984 + num26 + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_383(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4542374.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4542374.f_61; l = l + 1)
				{
					if (Global_4542374.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542374.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4542374.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4542374.f_34[num8], Global_4542374.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4542374.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_389(Global_23984, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23987.f_9106)
				{
					r = Global_23987.f_9102;
					g = Global_23987.f_9103;
					b = Global_23987.f_9104;
					a = Global_23987.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_388("CommonMenu", "Gradient_Bgd", Global_23984 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_383(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4542374.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4542374.f_61; l = l + 1)
				{
					if (Global_4542374.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542374.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4542374.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4542374.f_34[num8], Global_4542374.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4542374.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				func_386(x, num36 + 0.00277776f, 0);
			
				if (Global_4542374.f_67 != 0)
				{
					func_19(Global_4542374.f_67, true, true, &num26, &num27, bParam7);
					func_382(Global_4542374.f_67, true, &num32, &num33, &num34, &num35);
					func_388(func_26(Global_4542374.f_67), func_23(Global_4542374.f_67, true), Global_23984 + (num26 * 0.5f) + (0.00078125f * 2f), (num36 + (num27 * 0.5f)) - (0.00138888f * 4f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
				}
			
				num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (Global_4542374.f_65 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_4542374.f_66 > Global_4542374.f_65)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_21), "", 16);
						Global_4542374.f_65 = -1;
					}
				}
			}
		
			func_376(unk3, iParam1, iParam8, false, false, false, bParam4, 1, false);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
	
		if (i == 1 || !Global_23987.f_6331)
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
			num43 = Global_23987.f_5821;
		
			if (Global_23987.f_6332)
				num43 = Global_23987.f_6335 - 1;
		
			num44 = 0f;
			num45 = 0f;
		
			for (j = 0; j <= num43; j = j + 1)
			{
				num37 = 0.034722f;
			
				if (Global_23987.f_6348[numberOfLinesForString] != 0f)
					num37 = Global_23987.f_6348[numberOfLinesForString];
			
				if (Global_23987.f_6332)
					numberOfLinesForString = Global_23987.f_8737[j];
				else
					numberOfLinesForString = j;
			
				num5 = num6;
				flag2 = false;
			
				if (numberOfLinesForString >= Global_23987.f_6341 && num2 < Global_23987.f_5828)
				{
					flag2 = true;
				
					if (Global_23987.f_6342 == numberOfLinesForString)
						num45 = num44;
				
					if (Global_23987.f_5959[numberOfLinesForString])
						num5 = num5 + 1;
				
					num25 = num40 + num44 + (0.00277776f * (float)num5) + 0.00277776f;
				}
			
				Global_23987.f_6482[numberOfLinesForString] = num25;
				num24 = Global_23984 + 0.0046875f;
				flag3 = false;
				flag = Global_23987.f_6342 == numberOfLinesForString;
			
				if (flag && i == 1 && flag2)
				{
					r2 = 255;
					g2 = 255;
					b2 = 255;
					a2 = 255;
				
					if (Global_23987.f_9108)
						HUD::GET_HUD_COLOUR(Global_23987.f_9107, &r2, &g2, &b2, &a2);
					else
						HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r2, &g2, &b2, &a2);
				
					func_388("CommonMenu", "Gradient_Nav", Global_23984 + (iParam5 * 0.5f), num40 + num45 + (0.00277776f * (float)num5) + (num37 * 0.5f), iParam5, num37, 0f, r2, g2, b2, a2, false, 0);
					Global_23987.f_6480 = num25;
				}
			
				for (k = 0; k < Global_23987.f_5829; k = k + 1)
				{
					if (IS_BIT_SET(Global_23987.f_5692[numberOfLinesForString], k) || Global_23987.f_5659[k] == 5)
					{
						if (Global_23987.f_6332)
						{
							num11 = Global_23987.f_8753[(num2 * Global_23987.f_5829) + k];
							num12 = Global_23987.f_8794[(num2 * Global_23987.f_5829) + k];
							num13 = Global_23987.f_8835[(num2 * Global_23987.f_5829) + k];
							num14 = Global_23987.f_8876[(num2 * Global_23987.f_5829) + k];
							num15 = Global_23987.f_8917[(num2 * Global_23987.f_5829) + k];
						}
						else
						{
							Global_23987.f_8753[(num2 * Global_23987.f_5829) + k] = num11;
							Global_23987.f_8794[(num2 * Global_23987.f_5829) + k] = num12;
							Global_23987.f_8835[(num2 * Global_23987.f_5829) + k] = num13;
							Global_23987.f_8876[(num2 * Global_23987.f_5829) + k] = num14;
							Global_23987.f_8917[(num2 * Global_23987.f_5829) + k] = num15;
						}
					
						num46 = 0;
						flag7 = false;
					
						if (Global_23987.f_6614[0] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_23987.f_6611[0])
							{
								flag7 = true;
								num46 = 0;
							}
						}
					
						if (Global_23987.f_6614[1] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_23987.f_6611[1])
							{
								flag7 = true;
								num46 = 1;
							}
						}
					
						if (Global_23987.f_5665[k] != -1f)
							num24 = Global_23984 + 0.0046875f + Global_23987.f_5665[k];
					
						if (k < 4 && Global_23987.f_5665[k + 1] != -1f && num24 < Global_23987.f_5665[k + 1])
							num31 = Global_23987.f_5665[k + 1] - num24;
						else
							num31 = (Global_23984 + Global_23986) - 0.0046875f - num24;
					
						if (Global_23987.f_5678[k] && Global_23987.f_6477 && flag)
							flag6 = true;
						else
							flag6 = false;
					
						switch (Global_23987.f_5659[k])
						{
							case 0:
								break;
						
							case 1:
								num16 = num11;
							
								if (flag2)
								{
									if (!Global_23987.f_6332)
									{
										num28 = 0f;
										num29 = 0f;
										num17 = 0;
										num18 = 0;
										num19 = 0;
										num20 = 0;
										num21 = 0;
									
										if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
										{
											flag4 = false;
											flag5 = false;
										
											for (l = 0; l < 4; l = l + 1)
											{
												if (Global_23987.f_2387[num16 /*5*/][l] == 5 || Global_23987.f_2387[num16 /*5*/][l] == 8)
													flag5 = true;
												else if (Global_23987.f_2387[num16 /*5*/][l] == 9)
													flag4 = true;
											}
										
											if (Global_23987.f_2130[num16])
												flag5 = true;
										
											func_373(flag, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, num46, flag5, flag4);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_23987.f_79[num16 /*6*/]);
										}
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_23987.f_2387[num16 /*5*/][l] == 1)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 8)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 5)
											{
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 6)
											{
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2696988[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 7)
											{
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 9)
											{
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 2)
											{
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_4469[num12 + num18]);
											
												num18 = num18 + 1;
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 3)
											{
												if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_4726[num13 + num19], Global_23987.f_4855[num13 + num19]);
											
												num19 = num19 + 1;
											}
											else if (Global_23987.f_2387[num16 /*5*/][l] == 4)
											{
												num20 = num20 + 1;
											}
										}
									
										if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0)
											num28 = func_370(true);
									
										if (num20 > 0)
										{
											for (l = 0; l < num20; l = l + 1)
											{
												if (func_19(Global_23987.f_4984[num14 + l], flag, false, &num26, &num27, bParam7))
												{
													num29 = num29 + num26;
												
													if (l > 0)
														num29 = num29 - (0.00078125f * 4f);
												
													if (Global_23987.f_4984[num14 + l] == 2 || Global_23987.f_4984[num14 + l] == 54 || Global_23987.f_4984[num14 + l] == 64)
														num29 = num29 - (0.00078125f * 5f);
												}
											}
										}
									
										x = 0f;
									
										if (Global_23987.f_5686[k] == 2)
											x = x + (num31 - (num28 + num29)) + (0.00078125f * 1f);
										else if (Global_23987.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - ((num28 + num29) * 0.5f));
									
										Global_23987.f_8958[(num2 * Global_23987.f_5829) + k] = x;
										Global_23987.f_8999[(num2 * Global_23987.f_5829) + k] = num28;
										Global_23987.f_9040[(num2 * Global_23987.f_5829) + k] = num29;
									
										if (Global_23987.f_5686[k] == 2)
										{
											for (m = k - 1; m >= 0; m = m + -1)
											{
												if (Global_23987.f_5686[m] == 2)
													Global_23987.f_8958[(num2 * Global_23987.f_5829) + m] = Global_23987.f_8958[(num2 * Global_23987.f_5829) + m] - Global_23987.f_5671[k];
											}
										}
									}
									else
									{
										x = Global_23987.f_8958[(num2 * Global_23987.f_5829) + k];
										num28 = Global_23987.f_8999[(num2 * Global_23987.f_5829) + k];
										num29 = Global_23987.f_9040[(num2 * Global_23987.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_19(26, true, false, &num26, &num27, bParam7))
										{
											if (Global_23987.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_19(26, true, true, &num26, &num27, bParam7))
											{
												func_382(26, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_388(func_26(26), func_23(26, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_19(27, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_19(27, true, true, &num26, &num27, bParam7))
											{
												func_382(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_388(func_26(27), func_23(27, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									num17 = 0;
									num18 = 0;
									num19 = 0;
									num20 = 0;
									num21 = 0;
									num23 = 0;
								
									if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										flag4 = false;
										flag5 = false;
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_23987.f_2387[num16 /*5*/][l] == 5 || Global_23987.f_2387[num16 /*5*/][l] == 8)
												flag5 = true;
											else if (Global_23987.f_2387[num16 /*5*/][l] == 9)
												flag4 = true;
										}
									
										if (Global_23987.f_2130[num16])
											flag5 = true;
									
										func_373(flag, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, 0, flag5, flag4);
									
										if (Global_23987.f_9112 && Global_23987.f_9113 == numberOfLinesForString)
											func_369(flag);
									
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Global_23987.f_79[num16 /*6*/]);
									}
								
									for (l = 0; l < 4; l = l + 1)
									{
										if (Global_23987.f_2387[num16 /*5*/][l] == 1)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_79[num16 + num17 /*6*/]);
										
											num23 = 1;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 8)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23987.f_79[num16 + num17 /*6*/]);
										
											num23 = 8;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 5)
										{
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 5;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 6)
										{
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2696988[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 6;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 7)
										{
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 7;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 9)
										{
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696988[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 9;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 2)
										{
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_4469[num12 + num18]);
										
											num18 = num18 + 1;
											num23 = 2;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 3)
										{
											if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_4726[num13 + num19], Global_23987.f_4855[num13 + num19]);
										
											num19 = num19 + 1;
											num23 = 3;
										}
										else if (Global_23987.f_2387[num16 /*5*/][l] == 4)
										{
											if (Global_23987.f_4984[num14 + num20] == 2 || Global_23987.f_4984[num14 + num20] == 54 || Global_23987.f_4984[num14 + num20] == 64)
											{
												if (func_19(Global_23987.f_4984[num14 + num20], flag, false, &num26, &num27, bParam7))
												{
													x = x + (num26 * 0.5f);
												
													if (func_19(Global_23987.f_4984[num14 + num20], flag, true, &num26, &num27, bParam7))
													{
														func_382(Global_23987.f_4984[num14 + num20], flag, &num32, &num33, &num34, &num35);
													
														if (i == 1)
															if (Global_23987.f_5686[k] == 2)
																func_388(func_26(Global_23987.f_4984[num14 + num20]), func_23(Global_23987.f_4984[num14 + num20], flag), ((num24 + x) - (0.00078125f * 8f)) + (0.00078125f * 4f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else
																func_388(func_26(Global_23987.f_4984[num14 + num20]), func_23(Global_23987.f_4984[num14 + num20], flag), (num24 + x) - (0.00078125f * 8f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
													
														x = x + (0.00078125f * 3f);
													}
												}
											}
										
											num20 = num20 + 1;
											num23 = 4;
										}
									}
								
									if (MISC::GET_HASH_KEY(&Global_23987.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										if (num23 == 4 && Global_23987.f_5686[k] == 2)
										{
											func_386(num24 + x + (0.00078125f * 7f), num25, 0);
										}
										else
										{
											func_386(num24 + x, num25, 0);
										
											if (IS_ROCKSTAR_DEV() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (k == 0)
												{
													if (Global_23987.f_2130[num16])
														flag5 = true;
												
													func_373(false, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, 0, flag5, flag4);
													TEXT_LABEL_ASSIGN_STRING(&text, "TEST_LABEL", 16);
													value = 0f;
													value2 = 55f;
													num47 = 0.0185f;
													num48 = 0.004f;
													num49 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, 0.35f * 0.7f);
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT(num24 - (num49 * 0.6f), num25 + (num47 * 0.75f), 0.0175f, 0.035f, SYSTEM::FLOOR(value), SYSTEM::FLOOR(value), SYSTEM::FLOOR(value), SYSTEM::FLOOR(value2), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&text);
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_6341 + num22);
													func_386(num24 - num49, num25 + num48, 0);
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
											if (Global_23987.f_4984[num14 + l] != 2 && Global_23987.f_4984[num14 + l] != 54 && Global_23987.f_4984[num14 + l] != 64)
											{
												if (func_19(Global_23987.f_4984[num14 + l], flag, false, &num26, &num27, bParam7))
												{
													x = x + (num26 * 0.5f);
												
													if (i == 1)
													{
														if (func_19(Global_23987.f_4984[num14 + l], flag, true, &num26, &num27, bParam7))
														{
															func_382(Global_23987.f_4984[num14 + l], flag, &num32, &num33, &num34, &num35);
														
															if (Global_23987.f_4984[num14 + l] == 30)
																func_388(func_26(Global_23987.f_4984[num14 + l]), func_23(Global_23987.f_4984[num14 + l], flag), Global_23984 + (num26 * 0.5f), (num25 + 0.00277776f + (num27 * 0.5f)) - (0.00078125f * 11f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else if (Global_23987.f_5686[k] == 2)
																func_388(func_26(Global_23987.f_4984[num14 + l]), func_23(Global_23987.f_4984[num14 + l], flag), ((num24 + x + num28) - (0.00078125f * 8f)) + (0.00078125f * 4f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else
																func_388(func_26(Global_23987.f_4984[num14 + l]), func_23(Global_23987.f_4984[num14 + l], flag), (num24 + x + num28) - (0.00078125f * 12f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
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
									if (Global_23987.f_2387[num16 /*5*/][l] == 1)
										num11 = num11 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 8)
										num11 = num11 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 2)
										num12 = num12 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 3)
										num13 = num13 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 4)
										num14 = num14 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 5)
										num15 = num15 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 6)
										num15 = num15 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 7)
										num15 = num15 + 1;
									else if (Global_23987.f_2387[num16 /*5*/][l] == 9)
										num15 = num15 + 1;
								}
								break;
						
							case 2:
								if (flag2)
								{
									if (!Global_23987.f_6332)
									{
										func_373(flag, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, 0, false, false);
									
										if (Global_23987.f_9112 && Global_23987.f_9113 == numberOfLinesForString)
											func_369(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23987.f_4469[num12]);
										num28 = func_370(true);
										x = 0f;
									
										if (Global_23987.f_5686[k] == 2)
											x = x + (num31 - num28) + (0.00078125f * 1f);
										else if (Global_23987.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - (num28 * 0.5f));
									
										Global_23987.f_8958[(num2 * Global_23987.f_5829) + k] = x;
										Global_23987.f_8999[(num2 * Global_23987.f_5829) + k] = num28;
									}
									else
									{
										x = Global_23987.f_8958[(num2 * Global_23987.f_5829) + k];
										num28 = Global_23987.f_8999[(num2 * Global_23987.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_19(26, true, false, &num26, &num27, bParam7))
										{
											if (Global_23987.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_19(26, true, true, &num26, &num27, bParam7))
											{
												func_382(26, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_388(func_26(26), func_23(26, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_19(27, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_19(27, true, true, &num26, &num27, bParam7))
											{
												func_382(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_388(func_26(27), func_23(27, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									if (i == 1)
									{
										func_373(flag, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, 0, false, false);
										func_367(num24 + x, num25, "NUMBER" /*~1~*/, Global_23987.f_4469[num12], 0);
									}
								}
							
								flag3 = true;
								num12 = num12 + 1;
								break;
						
							case 3:
								if (flag2)
								{
									if (!Global_23987.f_6332)
									{
										func_373(flag, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, 0, false, false);
									
										if (Global_23987.f_9112 && Global_23987.f_9113 == numberOfLinesForString)
											func_369(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23987.f_4726[num13], Global_23987.f_4855[num13]);
										num28 = func_370(true);
										x = 0f;
									
										if (Global_23987.f_5686[k] == 2)
											x = x + (num31 - num28) + (0.00078125f * 1f);
										else if (Global_23987.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - (num28 * 0.5f));
									
										Global_23987.f_8958[(num2 * Global_23987.f_5829) + k] = x;
										Global_23987.f_8999[(num2 * Global_23987.f_5829) + k] = num28;
									}
									else
									{
										x = Global_23987.f_8958[(num2 * Global_23987.f_5829) + k];
										num28 = Global_23987.f_8999[(num2 * Global_23987.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_19(26, true, false, &num26, &num27, false))
										{
											if (Global_23987.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_19(26, true, true, &num26, &num27, bParam7))
											{
												func_382(26, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_388(func_26(26), func_23(26, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_19(27, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_19(27, true, true, &num26, &num27, bParam7))
											{
												func_382(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_388(func_26(27), func_23(27, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									func_373(flag, Global_23987.f_1616[num16], Global_23987.f_1873[num16], flag7, 0, false, false);
									func_363(num24 + x, num25, "NUMBER" /*~1~*/, Global_23987.f_4726[num13], Global_23987.f_4855[num13]);
								}
							
								flag3 = true;
								num13 = num13 + 1;
								break;
						
							case 4:
								if (flag2)
								{
									if (func_19(Global_23987.f_4984[num14], flag, false, &num26, &num27, bParam7))
									{
										if (!Global_23987.f_6332)
										{
											num29 = num26;
											x = 0f;
										
											if (Global_23987.f_5686[k] == 2)
												x = x + (num31 - num29) + (0.00078125f * 1f);
											else if (Global_23987.f_5686[k] == 0)
												x = x + (((num31 - num24) * 0.5f) - (num29 * 0.5f));
										
											Global_23987.f_8958[(num2 * Global_23987.f_5829) + k] = x;
											Global_23987.f_9040[(num2 * Global_23987.f_5829) + k] = num29;
										}
										else
										{
											x = Global_23987.f_8958[(num2 * Global_23987.f_5829) + k];
											num29 = Global_23987.f_9040[(num2 * Global_23987.f_5829) + k];
										}
									
										if (flag6)
										{
											if (func_19(26, true, false, &num26, &num27, bParam7))
											{
												if (Global_23987.f_5686[k] == 2)
													x = x - (num26 * 2f);
											
												num30 = num26 * 0.5f;
											
												if (func_19(26, true, true, &num26, &num27, bParam7))
												{
													func_382(26, true, &num32, &num33, &num34, &num35);
												
													if (i == 1)
														func_388(func_26(26), func_23(26, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
												}
											}
										
											if (func_19(27, true, false, &num26, &num27, bParam7))
											{
												x = x + num26;
												num30 = num26 * 0.5f;
											
												if (func_19(27, true, true, &num26, &num27, bParam7))
												{
													func_382(27, true, &num32, &num33, &num34, &num35);
												
													if (i == 1)
														func_388(func_26(27), func_23(27, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
												}
											}
										}
									
										if (i == 1)
										{
											if (func_19(Global_23987.f_4984[num14], flag, true, &num26, &num27, bParam7))
											{
												func_382(Global_23987.f_4984[num14], flag, &num32, &num33, &num34, &num35);
												func_388(func_26(Global_23987.f_4984[num14]), func_23(Global_23987.f_4984[num14], flag), num24 + x + (num26 * 0.5f), (num25 - 0.00277776f) + (num37 * 0.5f), num26 * func_362(Global_23987.f_4984[num14]), num27 * func_362(Global_23987.f_4984[num14]), 0f, num32, num33, num34, num35, false, 0);
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
					
						if (Global_23987.f_5659[k] == 5)
						{
							if (Global_23987.f_5671[k] > 0.05f)
								num24 = num24 + Global_23987.f_5671[k];
							else
								num24 = num24 + 0.05f;
						}
						else
						{
							num24 = num24 + Global_23987.f_5671[k];
						
							if (Global_23987.f_5678[k])
								if (func_19(26, true, true, &num26, &num27, bParam7))
									num24 = num24 - num26;
						}
					}
					else
					{
						num24 = num24 + Global_23987.f_5671[k];
					}
				}
			
				if (flag3)
				{
					if (flag2)
					{
						Global_23987.f_8737[num2] = numberOfLinesForString;
						Global_23987.f_6343 = numberOfLinesForString;
						num2 = num2 + 1;
					
						if (Global_23987.f_5959[numberOfLinesForString])
							num6 = num6 + 1;
					
						if (Global_23987.f_6348[numberOfLinesForString] != 0f)
							num44 = num44 + Global_23987.f_6348[numberOfLinesForString];
						else
							num44 = num44 + 0.034722f;
					}
				
					if (!Global_23987.f_6331)
					{
						Global_23987.f_6088[numberOfLinesForString] = true;
					
						if (Global_23987.f_5830[numberOfLinesForString])
						{
							if (flag)
								Global_23987.f_6337 = 0;
						}
						else
						{
							num4 = num4 + 1;
						
							if (flag)
								Global_23987.f_6337 = num4;
						}
					
						num3 = num3 + 1;
					}
				}
			}
		
			if (!Global_23987.f_6331)
			{
				Global_23987.f_6333 = num40 + num44 + (0.00277776f * (float)num5);
				Global_23987.f_6336 = num4;
				Global_23987.f_6334 = num3;
				Global_23987.f_6331 = 1;
			}
		}
	
		if (!Global_23987.f_6332)
		{
			Global_23987.f_6335 = num2;
			Global_23987.f_6332 = 1;
		}
	}

	Global_23987.f_6479 = num36;
	Global_23987.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23987.f_6479);

	if (!Global_23987.f_9081)
		func_41(0);

	Global_23987.f_9081 = 0;

	if (bParam2)
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);

	if (bParam0)
		func_212(1);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

float func_362(int iParam0) // Position - 0x1EB5B (125787)
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

void func_363(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4) // Position - 0x1EBCA (125898)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_364(fParam0), fParam1, 0);
	return;
}

float func_364(float fParam0) // Position - 0x1EBED (125933)
{
	fParam0 = fParam0 * func_365();
	return fParam0;
}

float func_365() // Position - 0x1EC00 (125952)
{
	return 1.7777778f / func_366();
}

float func_366() // Position - 0x1EC12 (125970)
{
	return Global_23987.f_9117;
}

void func_367(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x1EC20 (125984)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_364(fParam0), fParam1, iParam4);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x1EC42 (126018)
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_369(BOOL bParam0) // Position - 0x1EC53 (126035)
{
	int r;
	int g;
	int b;
	var a;

	if (bParam0)
		HUD::GET_HUD_COLOUR(Global_23987.f_9109[0], &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(Global_23987.f_9109[1], &r, &g, &b, &a);

	HUD::SET_TEXT_COLOUR(r, g, b, 255);
	return;
}

float func_370(BOOL bParam0) // Position - 0x1EC99 (126105)
{
	return func_371(HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(bParam0));
}

float func_371(float fParam0) // Position - 0x1ECAB (126123)
{
	fParam0 = fParam0 * func_372();
	return fParam0;
}

float func_372() // Position - 0x1ECBE (126142)
{
	return func_366() / 1.7777778f;
}

void func_373(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1ECD0 (126160)
{
	int r;
	int g;
	int b;
	int a;

	if (bParam2)
	{
		if (bParam3)
		{
			func_375(Global_23987.f_6614[iParam4], &r, &g, &b);
		
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

	func_374(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_374(float fParam0, float fParam1) // Position - 0x1EE7E (126590)
{
	HUD::SET_TEXT_WRAP(func_364(fParam0), func_364(fParam1));
	return;
}

void func_375(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1EE96 (126614)
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

void func_376(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x1F120 (127264)
{
	int num;
	int i;
	int j;
	int timestamp;
	int timestamp2;

	if (!func_355(&num, false, iParam1))
		return;

	uParam0 = uParam0;

	if (bParam3 && !func_394(bParam4, bParam8))
		return;

	if (func_380())
		return;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return;

	if (iParam7 == 0)
		if (func_377(PLAYER::PLAYER_ID(), 0))
			return;

	if (MISC::IS_PC_VERSION())
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return;

	if (Global_23987.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
		{
			for (i = 0; i < Global_23987.f_5326; i = i + 1)
			{
				if (Global_23987.f_5625[i] != 365)
					TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_5328[i /*16*/], PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_23987.f_5625[i], true), 64);
				else if (Global_23987.f_5640[i] != 32)
					TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_5328[i /*16*/], PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_23987.f_5640[i], true), 64);
			}
		
			Global_23987.f_5327 = 0;
		}
	
		if (!Global_23987.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f - (Global_23987.f_5684 / 100f));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			for (i = 0; i < Global_23987.f_5326; i = i + 1)
			{
				if (MISC::GET_HASH_KEY(&Global_23987.f_5553[i /*4*/]) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					func_13(&Global_23987.f_5328[i /*16*/]);
				
					for (j = i + 1; j < 14 && MISC::GET_HASH_KEY(&Global_23987.f_5553[j /*4*/]) == MISC::GET_HASH_KEY("PREV"); j = j + 1)
					{
						func_13(&Global_23987.f_5328[j /*16*/]);
					}
				
					if (Global_23987.f_5610[i] == -1)
					{
						func_12(&Global_23987.f_5553[i /*4*/]);
					}
					else
					{
						timestamp = Global_23987.f_5610[i];
					
						if (iParam2 >= 0)
							timestamp = iParam2;
					
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_23987.f_5553[i /*4*/]);
					
						if (bParam5)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp, 70);
						else
							HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp);
					
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23987.f_5625[i] != 365 && IS_BIT_SET(Global_23987.f_5655, i))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23987.f_5625[i]);
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
		
			if (MISC::GET_HASH_KEY(&(Global_4542374.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23987.f_5326);
				func_13(&Global_4542374);
			
				if (Global_4542374.f_20 == -1)
				{
					func_12(&(Global_4542374.f_16));
				}
				else
				{
					timestamp2 = Global_23987.f_5610[i];
				
					if (iParam2 >= 0)
						timestamp2 = iParam2;
				
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542374.f_16));
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
		
			if (Global_23987.f_5685)
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			else
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23987.f_5327 = 1;
		}
	
		for (i = 0; i < Global_23987.f_5326; i = i + 1)
		{
			if (Global_23987.f_5610[i] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_23987.f_5553[i /*4*/]);
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
	
		if (Global_4542374.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23987.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542374.f_16));
			
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
			if (!Global_23987.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, 0f, -0.0375f);
				Global_23987.f_9116 = 1;
			}
		}
		else if (Global_23987.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
			Global_23987.f_9116 = 0;
		}
	
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	
		if (Global_23987.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23987.f_6263[num /*10*/], Global_23987.f_5656, Global_23987.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23987.f_6263[num /*10*/], 255, 255, 255, 255, 0);
		}
	}

	return;
}

BOOL func_377(Player plParam0, int iParam1) // Position - 0x1F625 (128549)
{
	BOOL flag;

	if (!func_379(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_378(-1, false) == 8;
	else
		flag = Global_1845270[plParam0 /*892*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_378(int iParam0, BOOL bParam1) // Position - 0x1F67E (128638)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_72();

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

BOOL func_379(Player plParam0) // Position - 0x1F6BF (128703)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_380() // Position - 0x1F6E1 (128737)
{
	var position;

	if (Global_21083.f_1 > 3)
		return true;

	if (func_381())
	{
		position = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&position);
	
		if (Global_21028 == 0)
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

BOOL func_381() // Position - 0x1F74F (128847)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	return false;
}

void func_382(int iParam0, BOOL bParam1, int* piParam2, int* piParam3, int* piParam4, int* piParam5) // Position - 0x1F769 (128873)
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

void func_383(float fParam0) // Position - 0x1F88A (129162)
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
	func_374(fParam0, (Global_23984 + Global_23986) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_384(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x1F8E9 (129257)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_364(fParam0), fParam1, 0);
	return;
}

float func_385(char* sParam0, int iParam1, int iParam2) // Position - 0x1F910 (129296)
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_387();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return func_370(true);
}

void func_386(float fParam0, float fParam1, int iParam2) // Position - 0x1F952 (129362)
{
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_364(fParam0), fParam1, iParam2);
	return;
}

void func_387() // Position - 0x1F968 (129384)
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);

	if (Global_23987.f_9091)
	{
		r = Global_23987.f_9087;
		g = Global_23987.f_9088;
		b = Global_23987.f_9089;
		a = Global_23987.f_9090;
	}

	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	func_374(Global_23984 + 0.0046875f, (Global_23984 + Global_23986) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_388(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12) // Position - 0x1F9F2 (129522)
{
	GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_364(fParam2), fParam3, func_364(fParam4), fParam5, fParam6, iParam7, iParam8, iParam9, iParam10, bParam11, iParam12);
	return;
}

void func_389(float fParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1FA20 (129568)
{
	GRAPHICS::DRAW_RECT(func_364(fParam0 + (iParam2 * 0.5f)), fParam1 + (fParam3 * 0.5f), func_364(iParam2), fParam3, iParam4, iParam5, iParam6, iParam7, false);
	return;
}

void func_390(int iParam0, char* sParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x1FA57 (129623)
{
	int num;
	float num2;
	float num3;
	var unk;
	float num4;

	if (Global_23987.f_5821 > iParam0)
		return;

	if (Global_23987.f_5821 >= 128)
		return;

	if (Global_23987.f_5823 >= 256)
		return;

	if (Global_23987.f_6346 < Global_23987.f_6344)
		return;

	if (Global_23987.f_5821 != iParam0)
	{
		Global_23987.f_5821 = iParam0;
		Global_23987.f_5822 = 0;
	}

	num = Global_23987.f_5659[Global_23987.f_5822];

	if (num != 1)
	{
		while (Global_23987.f_5822 < 4 && num != 1)
		{
			Global_23987.f_5822 = Global_23987.f_5822 + 1;
			num = Global_23987.f_5659[Global_23987.f_5822];
		}
	
		if (num != 1)
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_79[Global_23987.f_5823 /*6*/], sParam1, 24);
	!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1);
	Global_23987.f_1616[Global_23987.f_5823] = bParam3;
	Global_23987.f_1873[Global_23987.f_5823] = iParam4;
	Global_23987.f_2130[Global_23987.f_5823] = iParam6;
	Global_23987.f_5823 = Global_23987.f_5823 + 1;

	if (!bParam3)
		func_393(Global_23987.f_5821, true);
	else
		func_393(Global_23987.f_5821, false);

	if (iParam2 == 0)
	{
		num2 = func_392(&Global_23987.f_79[Global_23987.f_5823 /*6*/]);
	
		if (Global_23987.f_5678[Global_23987.f_5822])
		{
			func_19(26, true, false, &num3, &unk, false);
			num2 = num2 + (num3 * 2f);
		}
	
		if (num2 > Global_23987.f_5671[Global_23987.f_5822])
			Global_23987.f_5671[Global_23987.f_5822] = num2;
	}

	if (bParam5)
	{
		if (iParam2 == 0)
		{
			num4 = func_391(&Global_23987.f_79[Global_23987.f_5823 /*6*/]);
		
			if (num4 > Global_23987.f_6348[iParam0])
				Global_23987.f_6348[iParam0] = num4;
		}
	}

	MISC::SET_BIT(&Global_23987.f_5692[iParam0], Global_23987.f_5822);
	Global_23987.f_5822 = Global_23987.f_5822 + 1;
	Global_23987.f_6347 = 1;
	Global_23987.f_6345 = Global_23987.f_5823 - 1;
	Global_23987.f_6346 = 0;
	Global_23987.f_6344 = iParam2;
	return;
}

float func_391(char* sParam0) // Position - 0x1FC73 (130163)
{
	!HUD::DOES_TEXT_LABEL_EXIST(sParam0);
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_392(char* sParam0) // Position - 0x1FC8F (130191)
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_373(false, true, false, false, 0, false, false);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return func_370(true);
}

void func_393(int iParam0, BOOL bParam1) // Position - 0x1FCCC (130252)
{
	int num;

	num = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(iParam0) / 32f);

	if (bParam1)
		MISC::SET_BIT(&Global_23987.f_6618[num], iParam0 - (num * 32));
	else
		MISC::CLEAR_BIT(&Global_23987.f_6618[num], iParam0 - (num * 32));

	return;
}

BOOL func_394(BOOL bParam0, BOOL bParam1) // Position - 0x1FD18 (130328)
{
	if (Global_2672942.f_1761.f_701 != 0)
		return true;

	if (!CAM::IS_SCREEN_FADED_IN() || func_396(8, -1) && func_395() != 65 || HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1 || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0 || NETWORK::IS_COMMERCE_STORE_OPEN() || Global_79825 || Global_23987.f_9115 || HUD::IS_WARNING_MESSAGE_ACTIVE() || Global_101765.f_1490)
		return false;

	return true;
}

int func_395() // Position - 0x1FDB5 (130485)
{
	return Global_1575014;
}

BOOL func_396(int iParam0, int iParam1) // Position - 0x1FDC1 (130497)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673706.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673706.f_1048, iParam0);
}

// Unhandled jump detected. Output should be considered invalid
int func_397(int iParam0, BOOL bParam1) // Position - 0x1FDF9 (130553)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
		
			case 2:
				return 3;
		
			case 3:
				return 5;
		
			default:
				goto 0x83;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
		
			case 2:
				return 3;
		
			case 3:
				return 6;
		
			case 4:
				return 9;
		
			case 5:
				return 11;
		
			case 6:
				return 13;
		
			case 7:
				return 15;
		
			default:
			
		}
	}

	return 0;
}

int func_398(int* piParam0, int iParam1, int iParam2) // Position - 0x1FE80 (130688)
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return 0;

	if (iParam2 == 0)
		return 0;

	if (func_419(0) == 1 && Global_4542450 == iParam1)
	{
		if (!func_444(piParam0))
		{
			func_399(piParam0);
			return 1;
		}
		else if (func_7(piParam0) > 0.25f)
		{
			func_459(piParam0);
			return 1;
		}
	}
	else if (func_444(piParam0))
	{
		func_445(piParam0);
	}

	return 0;
}

void func_399(int* piParam0) // Position - 0x1FEF8 (130808)
{
	if (!func_444(piParam0))
		func_459(piParam0);

	return;
}

int func_400(int* piParam0) // Position - 0x1FF10 (130832)
{
	float controlNormal;

	controlNormal = 0f;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		controlNormal = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X);

	if (controlNormal > 0.8f || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
	{
		if (!func_444(piParam0))
		{
			func_399(piParam0);
			return 1;
		}
		else if (func_7(piParam0) > 0.25f)
		{
			func_459(piParam0);
			return 1;
		}
	}
	else if (func_444(piParam0))
	{
		func_445(piParam0);
	}

	return 0;
}

void func_401(var uParam0) // Position - 0x1FF95 (130965)
{
	var r;
	var g;
	var b;
	var a;

	func_358(false, false);
	HUD::GET_HUD_COLOUR(HUD_COLOUR_DARTS, &r, &g, &b, &a);
	func_414(r, g, b, a, 1);
	func_413(1, 2, 0, 0, 0);
	func_412(1, 2, 1, 1, 1);
	func_411(false, true, false, false, false);
	func_410("DARTS_TITLE");
	func_408(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_390(0, "DARTS_LEGS", 0, true, 0, false, 0);
	func_405(0, func_397(uParam0->f_662 + 1, true), false);
	func_390(1, "DARTS_SETS", 0, true, 0, false, 0);
	func_405(1, func_397(uParam0->f_664 + 1, false), false);
	func_404(2, 141, 141, 1);
	func_390(2, "DARTS_START", 0, true, 0, false, 0);
	func_403(0);
	func_422(uParam0->f_660, true, 1);

	if (uParam0->f_660 != 2)
		func_421(uParam0->f_660 == 0 ? "DARTS_LEGD" : "DARTS_SETD", 0, 0);

	func_402(INPUT_FRONTEND_ACCEPT, "ITEM_SELECT" /*Select*/, -1, false);
	func_402(INPUT_FRONTEND_CANCEL, "IB_QUIT" /*Quit*/, -1, false);
	return;
}

void func_402(eControlAction ecaParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x20090 (131216)
{
	const char* controlInstructionalButtonsString;

	controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, ecaParam0, true);

	if (Global_23987.f_5326 >= 14)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_4542374, controlInstructionalButtonsString, 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_16), sParam1, 16);
		Global_4542374.f_20 = iParam2;
		return;
		return;
	}

	if (!bParam3)
		MISC::SET_BIT(&(Global_23987.f_5655), Global_23987.f_5326);

	TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_5328[Global_23987.f_5326 /*16*/], controlInstructionalButtonsString, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_5553[Global_23987.f_5326 /*4*/], sParam1, 16);
	Global_23987.f_5610[Global_23987.f_5326] = iParam2;
	Global_23987.f_5625[Global_23987.f_5326] = ecaParam0;
	Global_23987.f_5640[Global_23987.f_5326] = 32;
	Global_23987.f_5326 = Global_23987.f_5326 + 1;
	return;
}

void func_403(int iParam0) // Position - 0x20145 (131397)
{
	Global_23987.f_6341 = iParam0;
	return;
}

void func_404(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x20155 (131413)
{
	Global_23987.f_9112 = iParam3;
	Global_23987.f_9109[0] = iParam1;
	Global_23987.f_9109[1] = iParam2;
	Global_23987.f_9113 = iParam0;
	return;
}

void func_405(int iParam0, int iParam1, BOOL bParam2) // Position - 0x20183 (131459)
{
	int num;
	float num2;
	float num3;
	var unk;
	float num4;

	if (Global_23987.f_5821 > iParam0)
		return;

	if (Global_23987.f_5821 >= 128)
		return;

	if (Global_23987.f_5825 >= 256)
		return;

	if (Global_23987.f_6346 < Global_23987.f_6344)
		return;

	if (Global_23987.f_5821 != iParam0)
	{
		Global_23987.f_5821 = iParam0;
		Global_23987.f_5822 = 0;
	}

	num = Global_23987.f_5659[Global_23987.f_5822];

	if (num != 2)
	{
		while (Global_23987.f_5822 < 4 && num != 2)
		{
			Global_23987.f_5822 = Global_23987.f_5822 + 1;
			num = Global_23987.f_5659[Global_23987.f_5822];
		}
	
		if (num != 2)
			return;
	}

	Global_23987.f_4469[Global_23987.f_5825] = iParam1;
	Global_23987.f_5825 = Global_23987.f_5825 + 1;
	num2 = func_407("NUMBER" /*~1~*/, iParam1);

	if (Global_23987.f_5678[Global_23987.f_5822])
	{
		func_19(26, true, false, &num3, &unk, false);
		num2 = num2 + (num3 * 2f);
	}

	if (num2 > Global_23987.f_5671[Global_23987.f_5822])
		Global_23987.f_5671[Global_23987.f_5822] = num2;

	if (bParam2)
	{
		num4 = func_406("NUMBER" /*~1~*/, iParam1);
	
		if (num4 > Global_23987.f_6348[iParam0])
			Global_23987.f_6348[iParam0] = num4;
	}

	MISC::SET_BIT(&Global_23987.f_5692[iParam0], Global_23987.f_5822);
	Global_23987.f_5822 = Global_23987.f_5822 + 1;
	Global_23987.f_6347 = 2;
	return;
}

float func_406(char* sParam0, int iParam1) // Position - 0x20302 (131842)
{
	!HUD::DOES_TEXT_LABEL_EXIST(sParam0);
	iParam1 == 0;
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_407(char* sParam0, int iParam1) // Position - 0x20324 (131876)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
		return 0f;

	func_373(true, true, false, false, 0, false, false);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return func_370(true);
}

void func_408(int iParam0, char* sParam1, char* sParam2) // Position - 0x20356 (131926)
{
	Global_23987 = iParam0;
	func_409(29, sParam1, sParam2);
	return;
}

void func_409(int iParam0, char* sParam1, char* sParam2) // Position - 0x2036D (131949)
{
	TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_6623[iParam0 /*16*/], sParam1, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_7680[iParam0 /*16*/], sParam2, 64);
	return;
}

void func_410(char* sParam0) // Position - 0x20391 (131985)
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_1), sParam0, 16);
	Global_23987.f_74 = 0;
	Global_23987.f_75 = 0;
	Global_23987.f_76 = 0;
	Global_23987.f_77 = 0;
	Global_23987.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23987.f_5[i] = 0;
	}

	return;
}

void func_411(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x203DC (132060)
{
	Global_23987.f_5678[0] = bParam0;
	Global_23987.f_5678[1] = bParam1;
	Global_23987.f_5678[2] = bParam2;
	Global_23987.f_5678[3] = bParam3;
	Global_23987.f_5678[4] = bParam4;
	return;
}

void func_412(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x2041B (132123)
{
	Global_23987.f_5686[0] = iParam0;
	Global_23987.f_5686[1] = iParam1;
	Global_23987.f_5686[2] = iParam2;
	Global_23987.f_5686[3] = iParam3;
	Global_23987.f_5686[4] = iParam4;
	return;
}

void func_413(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x2045A (132186)
{
	Global_23987.f_5659[0] = iParam0;
	Global_23987.f_5659[1] = iParam1;
	Global_23987.f_5659[2] = iParam2;
	Global_23987.f_5659[3] = iParam3;
	Global_23987.f_5659[4] = iParam4;
	Global_23987.f_5829 = 0;

	if (iParam0 != 0)
		Global_23987.f_5829 = Global_23987.f_5829 + 1;

	if (iParam1 != 0)
		Global_23987.f_5829 = Global_23987.f_5829 + 1;

	if (iParam2 != 0)
		Global_23987.f_5829 = Global_23987.f_5829 + 1;

	if (iParam3 != 0)
		Global_23987.f_5829 = Global_23987.f_5829 + 1;

	if (iParam4 != 0)
		Global_23987.f_5829 = Global_23987.f_5829 + 1;

	return;
}

void func_414(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x20504 (132356)
{
	Global_23987.f_9086 = iParam4;
	Global_23987.f_9082 = uParam0;
	Global_23987.f_9083 = uParam1;
	Global_23987.f_9084 = uParam2;
	Global_23987.f_9085 = uParam3;
	return;
}

int func_415(int* piParam0, int iParam1, int iParam2) // Position - 0x20534 (132404)
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return 0;

	if (iParam2 == 0)
		return 0;

	if (func_419(0) == -1 && Global_4542450 == iParam1)
	{
		if (!func_444(piParam0))
		{
			func_399(piParam0);
			return 1;
		}
		else if (func_7(piParam0) > 0.25f)
		{
			func_459(piParam0);
			return 1;
		}
	}
	else if (func_444(piParam0))
	{
		func_445(piParam0);
	}

	return 0;
}

int func_416(int* piParam0) // Position - 0x205AC (132524)
{
	float controlNormal;

	controlNormal = 0f;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		controlNormal = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X);

	if (controlNormal < -0.8f || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
	{
		if (!func_444(piParam0))
		{
			func_399(piParam0);
			return 1;
		}
		else if (func_7(piParam0) > 0.25f)
		{
			func_459(piParam0);
			return 1;
		}
	}
	else if (func_444(piParam0))
	{
		func_445(piParam0);
	}

	return 0;
}

BOOL func_417(int* piParam0) // Position - 0x20624 (132644)
{
	float controlNormal;

	controlNormal = 0f;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		controlNormal = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y);

	if (controlNormal > 0.8f || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN))
	{
		if (!func_444(piParam0))
		{
			func_399(piParam0);
			return true;
		}
		else if (func_7(piParam0) > 0.25f)
		{
			func_459(piParam0);
			return true;
		}
	}
	else if (func_444(piParam0))
	{
		func_445(piParam0);
	}

	return false;
}

BOOL func_418(int* piParam0) // Position - 0x2069C (132764)
{
	float controlNormal;

	controlNormal = 0f;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		controlNormal = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y);

	if (controlNormal < -0.8f || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
	{
		if (!func_444(piParam0))
		{
			func_399(piParam0);
			return true;
		}
		else if (func_7(piParam0) > 0.25f)
		{
			func_459(piParam0);
			return true;
		}
	}
	else if (func_444(piParam0))
	{
		func_445(piParam0);
	}

	return false;
}

int func_419(int iParam0) // Position - 0x20714 (132884)
{
	float x;
	float y;
	float x2;
	float y2;
	float num;
	float num2;
	float num3;

	num3 = 0.02f;
	x = 0.05f;
	x2 = x + Global_23986;
	y = Global_23987.f_6333 - ((float)Global_23987.f_6335 * 0.034722f);
	num2 = x + iParam0;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x, y, &x, &y);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x2, y2, &x2, &y2);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	num = x2 - num3;

	if (iParam0 > 0f)
		if (Global_4542444 >= x && Global_4542444 < num2)
			return -999;

	if (Global_4542444 >= x && Global_4542444 < num)
		return -1;

	if (Global_4542444 >= num && Global_4542444 <= x2)
		return 1;

	return 0;
}

BOOL func_420() // Position - 0x207E1 (133089)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT);

	return false;
}

void func_421(char* sParam0, int iParam1, int iParam2) // Position - 0x207FC (133116)
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_5241), sParam0, 24);
	Global_23987.f_5319 = 0;
	Global_23987.f_5320 = 0;
	Global_23987.f_5321 = 0;
	Global_23987.f_5322 = 0;
	Global_23987.f_5323 = iParam1;
	Global_23987.f_5324 = MISC::GET_GAME_TIMER();
	Global_23987.f_5325 = iParam2;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23987.f_5253[i] = 0;
	}

	return;
}

void func_422(int iParam0, BOOL bParam1, int iParam2) // Position - 0x20861 (133217)
{
	int i;
	int num;

	Global_23987.f_6342 = iParam0;
	Global_23987.f_6477 = iParam2;

	if (Global_23987.f_6342 < Global_23987.f_6341)
	{
		Global_23987.f_6341 = Global_23987.f_6342;
	}
	else if (Global_23987.f_6332 && Global_23987.f_6342 > Global_23987.f_6343 || !Global_23987.f_6332 && Global_23987.f_6342 >= Global_23987.f_6341 + Global_23987.f_5828)
	{
		for (i = Global_23987.f_6341; i <= Global_23987.f_6342; i = i + 1)
		{
			if (i >= 0 && i < 127)
				if (Global_23987.f_5692[i] != 0)
					num = num + 1;
		}
	
		while (num > Global_23987.f_5828 && Global_23987.f_6341 < 128)
		{
			Global_23987.f_6341 = Global_23987.f_6341 + 1;
			num = 0;
		
			for (i = Global_23987.f_6341; i <= Global_23987.f_6342; i = i + 1)
			{
				if (i >= 0 && i < 127)
					if (Global_23987.f_5692[i] != 0)
						num = num + 1;
			}
		}
	}

	Global_23987.f_6331 = 0;
	Global_23987.f_6332 = 0;

	if (bParam1)
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_5241), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_21), "", 16);
	}

	return;
}

BOOL func_423() // Position - 0x209B3 (133555)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (Global_4542450 > -1)
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
				return true;

	return false;
}

int func_424(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x209DA (133594)
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return 0;

	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		return 0;

	if (bParam2)
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();

	if (Global_4542450 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
	
		if (bParam0 && PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			return 1;
		}
		else
		{
			Global_4542450 = -1;
			return 0;
		}
	}

	if (Global_4542450 > -1 || Global_4542450 == -3 || Global_4542450 == -2 || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}

	if (Global_4542450 == -1 && bParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4542450 = -6;
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

void func_425(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x20ABA (133818)
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
		Global_4542450 = -1;
		return;
	}

	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	x = Global_23984;
	x2 = x + Global_23986;
	y2 = Global_23987.f_6333;
	y = Global_23987.f_6333 - ((float)Global_23987.f_6335 * 0.034722f);

	if (bParam2)
	{
		y2 = y2 + 0.034722f;
		y = y + 0.034722f;
	}

	if (Global_23987.f_6335 < 1)
		y = Global_23987.f_6333 - 0.034722f;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num = x;
	num2 = y;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x, y, &x, &y);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x2, y2, &x2, &y2);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_427();

	if (Global_4542450 == -6)
		return;

	Global_4542450 = -1;
	num4 = Global_4542444;
	num5 = Global_4542445;

	if (Global_23987.f_6336 > Global_23987.f_6335)
	{
		if (Global_4542444 >= x && Global_4542444 <= x2 && Global_4542445 >= y2 && Global_4542445 < y2 + num3)
		{
			Global_4542450 = -2;
		
			if (bParam3)
				func_426(false);
		
			return;
		}
	
		if (Global_4542444 >= x && Global_4542444 <= x2 && Global_4542445 >= y2 + num3 && Global_4542445 < y2 + 0.034722f)
		{
			Global_4542450 = -3;
		
			if (bParam3)
				func_426(false);
		
			return;
		}
	}

	if (num4 >= x && num4 <= x2 && num5 >= y && num5 <= y2)
	{
		num6 = num5 - y;
		num10 = SYSTEM::FLOOR(num6 / 0.034722f);
	
		if (Global_23987.f_6336 == -1)
		{
			Global_4542450 = 0;
			num10 = 0;
			return;
		}
	
		num8 = 148;
		num9 = num8 / Global_23987.f_6335;
		num7 = 32 + (num8 - (num9 * num10));
	
		if (bParam3)
		{
			if (!bParam1 || num10 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_389(num, num2 + ((float)num10 * 0.034722f), Global_23986, 0.034722f - 0.0015f, 255, 255, 255, num7);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
	
		Global_4542450 = Global_23987.f_8737[num10];
		return;
	}

	if (!bParam0)
	{
		if (num4 < x2)
		{
			Global_4542450 = -4;
			return;
		}
	
		if (num5 > 0.9f)
		{
			Global_4542450 = -5;
			return;
		}
	}
	else if (num4 < x2 && num5 < y2 + 0.25f)
	{
		Global_4542450 = -4;
		return;
	}

	Global_4542450 = -1;
	return;
}

void func_426(BOOL bParam0) // Position - 0x20D66 (134502)
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

	num = Global_23984;
	num2 = Global_23987.f_6333;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);

	if (Global_4542450 == -2)
		func_389(num, num2, Global_23986, num3, 255, 255, 255, num4);
	else if (Global_4542450 == -3)
		func_389(num, num2 + num3, Global_23986, num3, 255, 255, 255, num4);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_427() // Position - 0x20DEF (134639)
{
	Global_4542446 = Global_4542444;
	Global_4542447 = Global_4542445;
	Global_4542444 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X);
	Global_4542445 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y);
	Global_4542448 = Global_4542444 - Global_4542446;
	Global_4542449 = Global_4542445 - Global_4542447;
	return;
}

float func_428(float fParam0) // Position - 0x20E37 (134711)
{
	if (fParam0 < 1.3f)
		return 35f;
	else if (fParam0 < 1.35f)
		return 33f;

	return 30f;
}

void func_429(var uParam0) // Position - 0x20E6D (134765)
{
	var r;
	var g;
	var b;
	var a;

	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	func_358(false, false);
	HUD::GET_HUD_COLOUR(HUD_COLOUR_DARTS, &r, &g, &b, &a);
	func_414(r, g, b, a, 1);
	func_413(1, 2, 0, 0, 0);
	func_412(1, 2, 1, 1, 1);
	func_411(0, 1, 0, 0, 0);
	func_410("DARTS_TITLE");
	func_408(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_390(0, "DARTS_LEGS", 0, 1, 0, false, 0);
	func_405(0, 1, false);
	func_390(1, "DARTS_SETS", 0, true, 0, false, 0);
	func_405(1, 1, false);
	func_390(2, "DARTS_START", 0, true, 0, false, 0);
	func_404(2, 141, 141, 1);
	func_403(0);
	func_422(0, true, 1);
	func_421("DARTS_LEGD", 0, 0);
	func_430();
	func_402(INPUT_FRONTEND_ACCEPT, "ITEM_SELECT" /*Select*/, -1, false);
	func_402(INPUT_FRONTEND_CANCEL, "IB_QUIT" /*Quit*/, -1, false);
	return;
}

void func_430() // Position - 0x20F5D (135005)
{
	if (MISC::IS_PC_VERSION())
		PAD::SET_CURSOR_POSITION(0.325f, 0.3f);

	return;
}

BOOL func_431(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int* piParam5) // Position - 0x20F7B (135035)
{
	int i;
	int j;

	if (func_455() && MISC::GET_GAME_TIMER() >= iLocal_291 + 1000 && *uParam0 != 8)
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			CAM::DO_SCREEN_FADE_OUT(500);

	if (CAM::IS_SCREEN_FADED_OUT() && *uParam0 != 8)
		*uParam0 = 8;

	switch (*uParam0)
	{
		case 2:
			switch (iLocal_29)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_291 = MISC::GET_GAME_TIMER();
						func_439(uParam1->f_1, uParam1->f_4, func_441(2), func_440(false), 0, true);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_299(&uParam4->[0 /*26*/], uParam1, uParam3, uParam2, true);
					}
				
					if (*uParam3 == 3)
					{
						if (func_286(&uParam4->[0 /*26*/], uParam1, 0, false))
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
							iLocal_29 = iLocal_29 + 1;
							func_459(piParam5);
							*uParam3 = 2;
						}
					}
					break;
			
				case 1:
					if (func_447(piParam5) > 1f && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_DOUBLE_T"))
						_DISPLAY_HELP_TEXT("DARTS_DOUBLE_T", -1);
				
					if (func_447(piParam5) > 5f)
					{
						func_459(piParam5);
						HUD::CLEAR_HELP(true);
						func_433(uParam1->f_1, uParam1->f_4, func_441(3), func_440(false), 1000);
						iLocal_29 = 0;
						*uParam0 = 3;
					}
					break;
			}
			break;
	
		case 3:
			switch (iLocal_29)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(caLocal_126))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_299(&uParam4->[1 /*26*/], uParam1, uParam3, uParam2, true);
						}
					
						if (*uParam3 == 3)
						{
							if (func_286(&uParam4->[1 /*26*/], uParam1, 0, false))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								iLocal_29 = iLocal_29 + 1;
								func_459(piParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
			
				case 1:
					if (func_447(piParam5) > 1f && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_TRIPLE_T"))
						_DISPLAY_HELP_TEXT("DARTS_TRIPLE_T", -1);
				
					if (func_447(piParam5) > 5f)
					{
						func_459(piParam5);
						HUD::CLEAR_HELP(true);
						func_439(uParam1->f_1, uParam1->f_4, func_441(4), func_440(false), 1000, false);
						iLocal_29 = 0;
						*uParam0 = 4;
					}
					break;
			}
			break;
	
		case 4:
			switch (iLocal_29)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(caLocal_125))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_299(&uParam4->[2 /*26*/], uParam1, uParam3, uParam2, true);
						}
					
						if (*uParam3 == 3)
						{
							if (func_286(&uParam4->[2 /*26*/], uParam1, 0, false))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								iLocal_29 = iLocal_29 + 1;
								func_459(piParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
			
				case 1:
					if (func_447(piParam5) > 1f && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_BULL_T"))
						_DISPLAY_HELP_TEXT("DARTS_BULL_T", -1);
				
					if (func_447(piParam5) > 5f)
					{
						func_459(piParam5);
						HUD::CLEAR_HELP(true);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", true);
						func_433(uParam1->f_1, uParam1->f_4, func_441(5), func_440(true), 1500);
						iLocal_29 = 0;
						*uParam0 = 5;
					}
					break;
			}
			break;
	
		case 5:
			if (!CAM::IS_CAM_INTERPOLATING(caLocal_126) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_DBL_WIN"))
				_DISPLAY_HELP_TEXT("DARTS_DBL_WIN", -1);
		
			if (func_447(piParam5) > 6f)
			{
				func_459(piParam5);
				*uParam0 = 6;
			}
			break;
	
		case 6:
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", true);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_118, caLocal_126, 1500, 1, 1);
			*uParam0 = 7;
			break;
	
		case 7:
			if (!CAM::IS_CAM_INTERPOLATING(caLocal_118))
			{
				iLocal_29 = 0;
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
			
				for (i = 0; i < 3; i = i + 1)
				{
					func_432(&uParam4->[i /*26*/]);
				}
			
				return true;
			}
			break;
	
		case 8:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_29 = 0;
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
			
				for (j = 0; j < 3; j = j + 1)
				{
					func_432(&uParam4->[j /*26*/]);
				}
			
				CAM::SET_CAM_ACTIVE(caLocal_118, true);
				CAM::DO_SCREEN_FADE_IN(500);
				return true;
			}
			break;
	}

	return false;
}

void func_432(Object* pobParam0) // Position - 0x21397 (136087)
{
	Vector3 vector;

	vector = { -1668.0444f, -1056.4501f, 13.1063f };

	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*pobParam0, vector, true, false, false, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(pobParam0);
		OBJECT::DELETE_OBJECT(pobParam0);
	}

	return;
}

void func_433(Vector3 vParam0, var uParam1, var uParam2, float fParam3, Vector3 vParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10) // Position - 0x213D7 (136151)
{
	CAM::STOP_CAM_POINTING(caLocal_126);
	CAM::SET_CAM_FOV(caLocal_126, 35f);
	CAM::SET_CAM_COORD(caLocal_126, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3, vParam4));
	CAM::SET_CAM_ROT(caLocal_126, { fParam3, 0f, 0f } - uParam7, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_126, caLocal_125, iParam10, 1, 1);
	return;
}

BOOL func_434(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x21420 (136224)
{
	if (!func_444(&(uParam0->f_2)))
		func_459(&(uParam0->f_2));

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_RETICLE);

	if (!bParam2)
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	else if (bParam2)
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);

	if (bParam1)
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
			return false;

	if (uParam0->f_1 == -1)
		return true;

	if (func_7(&(uParam0->f_2)) * 1000f > SYSTEM::TO_FLOAT(uParam0->f_1))
	{
		func_445(&(uParam0->f_2));
		return false;
	}

	return true;
}

void func_435(var uParam0, char* sParam1, const char* sParam2, int iParam3, eHudColour ehcParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x214B2 (136370)
{
	char* methodName;

	methodName = func_436(iParam5);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, methodName);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(ehcParam4);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		func_12(sParam2);

	if (bParam6)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (bParam6)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	func_459(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	return;
}

char* func_436(int iParam0) // Position - 0x21541 (136513)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
	
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
	
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
	
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
	
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
	
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
	
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
	
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
	
		default:
		
	}

	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_437() // Position - 0x215BC (136636)
{
	CAM::SET_CAM_ACTIVE(caLocal_118, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);

	if (CAM::IS_CAM_ACTIVE(caLocal_125))
		CAM::SET_CAM_ACTIVE(caLocal_125, false);

	if (CAM::IS_CAM_ACTIVE(caLocal_120))
		CAM::SET_CAM_ACTIVE(caLocal_120, false);

	if (CAM::IS_CAM_ACTIVE(caLocal_121))
		CAM::SET_CAM_ACTIVE(caLocal_121, false);

	if (CAM::IS_CAM_ACTIVE(caLocal_122))
		CAM::SET_CAM_ACTIVE(caLocal_122, false);

	if (CAM::IS_CAM_ACTIVE(caLocal_123))
		CAM::SET_CAM_ACTIVE(caLocal_123, false);

	if (CAM::IS_CAM_ACTIVE(caLocal_124))
		CAM::SET_CAM_ACTIVE(caLocal_124, false);

	return;
}

// Unhandled jump detected. Output should be considered invalid
char* func_438(int iParam0) // Position - 0x21637 (136759)
{
	if (iLocal_302 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
		
			case 1:
				return "DARTS_MENU_BAR";
		
			case 2:
				return "DARTS_START_MATCH_BAR";
		
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
		
			default:
				goto 0x8C;
		}
	}
	else if (iLocal_302 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
		
			case 1:
				return "DARTS_MENU_ROCK";
		
			case 2:
				return "DARTS_START_MATCH_ROCK";
		
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
		
			default:
			
		}
	}

	return "";
}

void func_439(Vector3 vParam0, var uParam1, var uParam2, float fParam3, Vector3 vParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, BOOL bParam11) // Position - 0x216CA (136906)
{
	CAM::STOP_CAM_POINTING(caLocal_125);
	CAM::SET_CAM_FOV(caLocal_125, 35f);
	CAM::SET_CAM_COORD(caLocal_125, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3, vParam4));
	CAM::SET_CAM_ROT(caLocal_125, { fParam3, 0f, 0f } - uParam7, 2);

	if (bParam11)
		CAM::SET_CAM_ACTIVE(caLocal_125, true);
	else
		CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_125, caLocal_126, iParam10, 1, 1);

	return;
}

Vector3 func_440(BOOL bParam0) // Position - 0x21722 (136994)
{
	if (bParam0)
		return -4.7411f, 0f, -15.32f;

	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_441(int iParam0) // Position - 0x2174B (137035)
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
	
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
	
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
	
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
	
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x217D5 (137173)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

int func_443(Ped pedParam0) // Position - 0x217EC (137196)
{
	if (!ENTITY::IS_ENTITY_DEAD(func_522(), false))
		func_4(func_522(), "GENERIC_YES", false, 6);
	else
		func_4(pedParam0, "GENERIC_AGREE", false, 6);

	return 1;
}

BOOL func_444(int* piParam0) // Position - 0x2181F (137247)
{
	return IS_BIT_SET(*piParam0, 1);
}

void func_445(int* piParam0) // Position - 0x2182C (137260)
{
	piParam0->f_1 = 0f;
	piParam0->f_2 = 0f;
	*piParam0 = 0;
	return;
}

void func_446(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x21842 (137282)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_6(iParam2), 1);
	return;
}

float func_447(int* piParam0) // Position - 0x21859 (137305)
{
	if (func_444(piParam0))
		if (func_9(piParam0))
			return piParam0->f_2;
		else
			return func_8(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return 0f;
}

void func_448(int* piParam0) // Position - 0x21892 (137362)
{
	if (!func_444(piParam0))
		func_399(piParam0);
	else
		func_459(piParam0);

	return;
}

void func_449() // Position - 0x218B3 (137395)
{
	Global_21308 = 0;
	func_450();
	return;
}

void func_450() // Position - 0x218C3 (137411)
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

void func_451(int iParam0) // Position - 0x2191A (137498)
{
	if (func_43())
		return;

	if (Global_21301)
		if (func_454())
			func_453(true, true);
		else
			func_453(false, false);

	if (Global_21083.f_1 == 10 || Global_21083.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22442 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_452())
		Global_21083.f_1 = 3;

	return;
}

BOOL func_452() // Position - 0x219A4 (137636)
{
	if (Global_21083.f_1 == 1 || Global_21083.f_1 == 0)
		return true;

	return false;
}

void func_453(BOOL bParam0, BOOL bParam1) // Position - 0x219CB (137675)
{
	if (bParam0)
	{
		if (func_42(0))
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

BOOL func_454() // Position - 0x21A3F (137791)
{
	return IS_BIT_SET(Global_1958238, 5);
}

BOOL func_455() // Position - 0x21A4D (137805)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

BOOL func_456(var uParam0) // Position - 0x21A7F (137855)
{
	Vehicle playersLastVehicle;

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
	{
		if (!func_457(playersLastVehicle))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(playersLastVehicle, PLAYER::PLAYER_PED_ID(), uLocal_260, false, true, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(playersLastVehicle);
				ENTITY::SET_ENTITY_COLLISION(playersLastVehicle, false, false);
				ENTITY::SET_ENTITY_VISIBLE(playersLastVehicle, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(playersLastVehicle, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, true);
				*uParam0 = playersLastVehicle;
				return 1;
			}
		}
	}

	return 0;
}

BOOL func_457(Vehicle veParam0) // Position - 0x21AF2 (137970)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;
	else
		return true;

	return false;
}

void func_458(var uParam0, int iParam1) // Position - 0x21B35 (138037)
{
	iParam1 = iParam1 + 1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_HIGHLIGHT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_459(int* piParam0) // Position - 0x21B59 (138073)
{
	func_460(piParam0, 0f);
	return;
}

void func_460(int* piParam0, float fParam1) // Position - 0x21B68 (138088)
{
	piParam0->f_1 = func_8(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x21B93 (138131)
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

void func_462(var uParam0, char* sParam1, char* sParam2) // Position - 0x21C2E (138286)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_37(sParam1);
	func_37(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_463(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Any* panParam7, var uParam8) // Position - 0x21C52 (138322)
{
	int _int;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(func_522()) && !PED::IS_PED_INJURED(func_522()))
	{
		PED::REMOVE_PED_FROM_GROUP(func_522());
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam8->f_5) && !PED::IS_PED_INJURED(uParam8->f_5))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam8->f_5, true, true);
			uLocal_263[1] = uParam8->f_5;
			TASK::CLEAR_PED_TASKS(uLocal_263[1]);
		}
		else if (func_465(panParam7))
		{
			TASK::CLEAR_PED_TASKS(uLocal_263[1]);
		}
		else
		{
			uLocal_263[1] = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_299, uParam1.f_3, fParam0, true, true);
		}
	
		if (DECORATOR::DECOR_EXIST_ON(uLocal_263[1], "Darts_name"))
		{
			_int = DECORATOR::DECOR_GET_INT(uLocal_263[1], "Darts_name");
		
			if (joaat("RAYMOND") == _int)
			{
				sLocal_359 = func_469("RAYMOND");
				iLocal_360 = joaat("RAYMOND");
			}
			else if (joaat("JOHAN") == _int)
			{
				sLocal_359 = func_469("JOHAN");
				iLocal_360 = joaat("JOHAN");
			}
			else if (joaat("STAN") == _int)
			{
				sLocal_359 = func_469("STAN");
				iLocal_360 = joaat("STAN");
			}
			else if (joaat("VINCE") == _int)
			{
				sLocal_359 = func_469("VINCE");
				iLocal_360 = joaat("VINCE");
			}
			else if (joaat("KRISTY") == _int)
			{
				sLocal_359 = func_469("KRISTY");
				iLocal_360 = joaat("KRISTY");
			}
			else if (joaat("MARLENE") == _int)
			{
				sLocal_359 = func_469("MARLENE");
				iLocal_360 = joaat("MARLENE");
			}
			else if (joaat("LORIE") == _int)
			{
				sLocal_359 = func_469("LORIE");
				iLocal_360 = joaat("LORIE");
			}
			else if (joaat("SHELLEY") == _int)
			{
				sLocal_359 = func_469("SHELLEY");
				iLocal_360 = joaat("SHELLEY");
			}
		}
	
		DECORATOR::DECOR_SET_INT(uLocal_263[1], "Darts_name", iLocal_360);
	}

	entityModel = ENTITY::GET_ENTITY_MODEL(uLocal_263[1]);
	func_464(entityModel);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_263[1], uLocal_263[0], 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_263[0], uLocal_263[1], 0);
	return;
}

void func_464(Hash hParam0) // Position - 0x21E4B (138827)
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);

	switch (hParam0)
	{
		case joaat("A_F_M_Salton_01"):
			switch (randomIntInRange)
			{
				case 0:
					sLocal_100 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
			
				case 1:
					sLocal_100 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
	
		case joaat("A_F_O_Salton_01"):
			sLocal_100 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
	
		case joaat("A_M_Y_Vinewood_01"):
			sLocal_100 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
	
		case joaat("A_M_Y_Vinewood_03"):
			sLocal_100 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
	
		case joaat("A_M_Y_Vinewood_04"):
			sLocal_100 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
	
		case joaat("A_M_Y_StLat_01"):
			sLocal_100 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
	
		case joaat("A_M_Y_StWhi_02"):
			sLocal_100 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}

	return;
}

BOOL func_465(Any* panParam0) // Position - 0x21EEA (138986)
{
	int i;

	for (i = 0; i < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), panParam0, -1); i = i + 1)
	{
		if (!PED::IS_PED_INJURED(panParam0->[i]))
		{
			if (ENTITY::GET_ENTITY_MODEL(panParam0->[i]) == joaat("A_F_M_Salton_01") || ENTITY::GET_ENTITY_MODEL(panParam0->[i]) == joaat("A_F_O_Salton_01") || ENTITY::GET_ENTITY_MODEL(panParam0->[i]) == joaat("A_M_Y_Vinewood_01") || ENTITY::GET_ENTITY_MODEL(panParam0->[i]) == joaat("A_M_Y_StLat_01") || ENTITY::GET_ENTITY_MODEL(panParam0->[i]) == joaat("A_M_Y_Vinewood_04") || ENTITY::GET_ENTITY_MODEL(panParam0->[i]) == joaat("A_M_Y_StWhi_02") || ENTITY::GET_ENTITY_MODEL(panParam0->[i]) == joaat("A_M_Y_Vinewood_03"))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(panParam0->[i], true, true);
				uLocal_263[1] = panParam0->[i];
				return true;
			}
		}
	}

	return false;
}

eCharacter func_466(Ped pedParam0) // Position - 0x21FD3 (139219)
{
	eCharacter i;
	Hash entityModel;
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
		character = func_468() - 1;
	
		for (i = CHAR_MULTIPLAYER; i <= character; i = i + 1)
		{
			if (func_467(i) == entityModel)
				return i;
		}
	}

	return _CHAR_NULL;
}

Hash func_467(eCharacter echParam0) // Position - 0x22019 (139289)
{
	if (!func_100(echParam0))
		return func_102(echParam0);
	else
		echParam0 != _CHAR_NULL;

	return 0;
}

int func_468() // Position - 0x2203F (139327)
{
	if (Global_33105 == 0 || Global_33105 == 2)
		return 207;

	return 161;
}

char* func_469(char* sParam0) // Position - 0x22061 (139361)
{
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 7)
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "MICHAEL"))
			return "??????????";
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "FRANKLIN"))
			return "????????????????";
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "TREVOR"))
			return "????????????";
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "LAMAR"))
			return "??????????";
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "JIMMY"))
			return "????????????";
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "KRISTY"))
			return "????????????";
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "MARLENE"))
			return "????????????";
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "LORIE"))
			return "????????";
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SHELLEY"))
			return "??????????";
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "RAYMOND"))
			return "??????????????";
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "JOHAN"))
			return "??????????";
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "STAN"))
			return "????????";
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "VINCE"))
			return "????????";

	return sParam0;
}

void func_470(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x2219B (139675)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		uParam0->f_4 = ENTITY::GET_ENTITY_HEADING(*uParam0);

	if (!bParam3)
		func_472(uParam1, uParam0);

	uLocal_80 = { 0f, -2.3685f + fLocal_53, 0.1f };
	uLocal_80 = { uLocal_80 + uLocal_54 };
	uLocal_77 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_4, uLocal_80) };
	func_471(uParam2, uParam0);
	return;
}

void func_471(var uParam0, var uParam1) // Position - 0x22203 (139779)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + uLocal_54 };
	*uParam0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
	return;
}

void func_472(var uParam0, var uParam1) // Position - 0x2223E (139838)
{
	*uParam0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, -0.4f, -2.4f + fLocal_53, -1.7272f) };
	uParam0->f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, 0.5f, -2.4f + fLocal_53, -1.7272f) };
	return;
}

BOOL func_473(var uParam0, var uParam1) // Position - 0x22290 (139920)
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\\DARTS", false, -1))
		return false;

	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\\FAMILY1_2", false, -1))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(hLocal_26) || !STREAMING::HAS_MODEL_LOADED(hLocal_27) || !STREAMING::HAS_MODEL_LOADED(hLocal_58) || !STREAMING::HAS_MODEL_LOADED(hLocal_299) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_645) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_57) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_62) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Darts") || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_361) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_362) || !func_474(0, -1, false))
		return false;

	return true;
}

BOOL func_474(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x22374 (140148)
{
	int num;
	BOOL flag;
	BOOL flag2;

	if (!func_355(&num, true, iParam1))
		return false;

	flag = true;
	TEXT_LABEL_ASSIGN_STRING(&Global_23987.f_6238[num /*4*/], sParam0, 16);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23987.f_6238[num /*4*/]))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_23987.f_6238[num /*4*/], 9);
		Global_23987.f_6231[num] = true;
	
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&Global_23987.f_6238[num /*4*/], 9))
			flag = false;
	}

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
		flag = false;

	Global_23987.f_6217[num] = true;

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
		flag = false;

	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23987.f_6224[num] = true;
	
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
			flag = false;
	}

	flag2 = false;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23987.f_6263[num /*10*/].f_1), "instructional_buttons", 24);
	flag2 = func_475(&Global_23987.f_6263[num /*10*/]);
	!flag || !flag2;
	return flag && flag2;
}

BOOL func_475(int iParam0) // Position - 0x22482 (140418)
{
	switch (iParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(iParam0->f_1));
				iParam0->f_9 = 1;
			
				if (iParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
					{
						iParam0->f_8 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = 2;
					}
				}
			}
			else
			{
				iParam0->f_8 = MISC::GET_GAME_TIMER();
				iParam0->f_9 = 2;
			}
			break;
	
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				iParam0->f_8 = MISC::GET_GAME_TIMER();
				iParam0->f_9 = 2;
			}
			break;
	
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
				iParam0->f_9 = 0;
			break;
	}

	return iParam0->f_9 == 2;
}

void func_476(var uParam0, var uParam1) // Position - 0x22524 (140580)
{
	STREAMING::REQUEST_MODEL(hLocal_26);
	STREAMING::REQUEST_MODEL(hLocal_27);
	STREAMING::REQUEST_MODEL(hLocal_58);
	STREAMING::REQUEST_MODEL(hLocal_299);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Darts", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("ShopUI_Title_Darts", false);
	STREAMING::REQUEST_ANIM_DICT(sLocal_361);
	STREAMING::REQUEST_ANIM_DICT(sLocal_362);
	*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("darts_scoreboard");
	uParam1->f_645 = func_207();
	uParam1->f_57 = func_478();
	uParam1->f_62 = func_477();
	HUD::REQUEST_ADDITIONAL_TEXT("DARTS", 3);
	return;
}

int func_477() // Position - 0x22592 (140690)
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
}

int func_478() // Position - 0x225A2 (140706)
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
}

void func_479(var uParam0, int iParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5) // Position - 0x225B2 (140722)
{
	int i;
	int j;

	for (i = 0; i < 2; i = i + 1)
	{
		for (j = 0; j < 7; j = j + 1)
		{
			uParam0->f_1[i /*8*/][j] = 1;
		}
	}

	if (iParam1 == 0)
	{
		uParam0->f_18 = { 989.399f, -99.674f, 75.925f };
		uParam0->f_21 = { 180f, 0f, 252.555f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		uParam0->f_18 = { 1992.223f, 3049.814f, 48.333f };
		uParam0->f_21 = { 180f, 0f, 87.77f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}

	if (!_IS_NULL_VECTOR(vParam2) && fParam5 != 0f)
	{
		uParam0->f_18 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam2, fParam5, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, fParam5 - -29.98685f };
	}

	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x226CE (141006)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_481(int iParam0) // Position - 0x226F8 (141048)
{
	int num;

	num = iParam0 + 1;
	fLocal_59 = 0.5f;
	fLocal_59.f_1 = 0.5f;

	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		fLocal_59.f_2 = 0.05f;
		fLocal_59.f_3 = 0.095f;
	}
	else
	{
		fLocal_59.f_2 = 0.065f;
		fLocal_59.f_3 = 0.09f;
	}

	fLocal_59.f_4 = 255;
	fLocal_59.f_5 = 250;
	fLocal_59.f_6 = 255;
	fLocal_59.f_7 = 123;

	if (num == 1)
	{
		fLocal_59.f_4 = 255;
		fLocal_59.f_5 = 255;
		fLocal_59.f_6 = 255;
	}
	else if (num == 2)
	{
		fLocal_59.f_4 = 255;
		fLocal_59.f_5 = 255;
		fLocal_59.f_6 = 255;
	}

	fLocal_59.f_8 = 0f;
	fLocal_68 = 0f;
	fLocal_68.f_1 = 0f;
	fLocal_68.f_2 = 0.061f;
	fLocal_68.f_3 = 0.105f;
	fLocal_68.f_4 = 200;
	fLocal_68.f_5 = 45;
	fLocal_68.f_6 = 40;
	fLocal_68.f_7 = 255;
	fLocal_68.f_8 = 0f;
	return;
}

void func_482(var uParam0, int iParam1) // Position - 0x227CB (141259)
{
	if (iParam1 == 0)
		uParam0->f_1 = hLocal_26;
	else
		uParam0->f_1 = hLocal_27;

	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
	return;
}

void func_483() // Position - 0x227F2 (141298)
{
	int i;

	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();

	for (i = 0; i < 5; i = i + 1)
	{
		Global_2100721.f_81[i] = 0;
	}

	return;
}

void func_484(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x2281B (141339)
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	Vector3 offsetFromCoordAndHeadingInWorldCoords2;
	Vector3 vector;
	Vector3 vector2;
	Vector3 offsetFromCoordAndHeadingInWorldCoords3;
	Vector3 vector3;
	Vector3 vector4;
	float fov;
	Vector3 vector5;
	float num;
	float num2;
	Vector3 vector6;
	float num3;
	float num4;
	Vector3 vector7;
	Vector3 offsetFromCoordAndHeadingInWorldCoords4;
	Vector3 vector8;

	fLocal_132 = GRAPHICS::GET_ASPECT_RATIO(false);
	fov = 30f;
	fov = func_428(fLocal_132);
	vector5 = { -0.192784f, -1.73287f, 0.0262985f };
	num = 1.7939f;
	num2 = -1.3346f;

	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		vector6 = { -0.0974819f, -1.65968f, 0.335098f };
		num3 = -1.3023f;
		num4 = -12.4139f;
	}
	else
	{
		vector6 = { -0.112635f, -1.86963f, 0.45417f };
		num3 = -3.7542f;
		num4 = -14.4576f;
	}

	vector7 = { 0.261599f, -0.750354f, -0.392929f };
	vector8 = { 0.281314f, -0.573735f, -0.39603f };
	offsetFromCoordAndHeadingInWorldCoords2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3, vector5) };
	vector2 = { num2, 0f, fParam3 - num };
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3, vector6) };
	vector = { num4, 0f, fParam3 - num3 };
	offsetFromCoordAndHeadingInWorldCoords3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3, vector7) };
	vector3 = { 0.8351f, -0.0048f, fParam3 - 186.50734f };
	offsetFromCoordAndHeadingInWorldCoords4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3, vector8) };
	vector4 = { 0.8351f, -0.0048f, fParam3 - 186.50734f };
	caLocal_118 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), offsetFromCoordAndHeadingInWorldCoords, vector, fov, false, 2);
	caLocal_119 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), offsetFromCoordAndHeadingInWorldCoords2, vector2, fov, false, 2);
	caLocal_120 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), offsetFromCoordAndHeadingInWorldCoords3, vector3, 1115815936, false, 2);
	caLocal_121 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), offsetFromCoordAndHeadingInWorldCoords4, vector4, 1115815936, false, 2);
	caLocal_122 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, false, 2);
	caLocal_123 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, false, 2);
	caLocal_125 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, false, 2);
	caLocal_126 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, false, 2);
	caLocal_124 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1996.235f, 3048.4558f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, false, 2);
	CAM::SET_CAM_FOV(caLocal_120, 43.35f);
	CAM::SET_CAM_FOV(caLocal_121, 42.35f);
	CAM::SHAKE_CAM(caLocal_120, "HAND_SHAKE", 0.1f);
	CAM::SHAKE_CAM(caLocal_121, "HAND_SHAKE", 0.1f);
	return;
}

void func_485(var uParam0, var uParam1) // Position - 0x22A7E (141950)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4))
		*uParam0 = uParam1->f_4;

	uLocal_31[0] = 20;
	uLocal_31[10] = 3;
	uLocal_31[1] = 1;
	uLocal_31[11] = 19;
	uLocal_31[2] = 18;
	uLocal_31[12] = 7;
	uLocal_31[3] = 4;
	uLocal_31[13] = 16;
	uLocal_31[4] = 13;
	uLocal_31[14] = 8;
	uLocal_31[5] = 6;
	uLocal_31[15] = 11;
	uLocal_31[6] = 10;
	uLocal_31[16] = 14;
	uLocal_31[7] = 15;
	uLocal_31[17] = 9;
	uLocal_31[8] = 2;
	uLocal_31[18] = 12;
	uLocal_31[9] = 17;
	uLocal_31[19] = 5;
	uLocal_31[20] = 20;
	return;
}

void func_486() // Position - 0x22B3A (142138)
{
	Global_23848.f_6 = 1;
	return;
}

void func_487(int iParam0, BOOL bParam1) // Position - 0x22B48 (142152)
{
	if (bParam1)
		MISC::SET_BIT(&Global_33354, iParam0);
	else
		MISC::CLEAR_BIT(&Global_33354, iParam0);

	return;
}

int func_488(eCharacter echParam0, int iParam1) // Position - 0x22B6A (142186)
{
	var outValue;
	Hash statHash;

	statHash = func_489(echParam0, iParam1);
	STATS::STAT_GET_INT(statHash, &outValue, -1);
	return outValue;
}

Hash func_489(eCharacter echParam0, int iParam1) // Position - 0x22B88 (142216)
{
	var unk;
	var unk2;

	func_490(echParam0, iParam1, &unk, &unk2);
	return unk;
}

void func_490(eCharacter echParam0, int iParam1, var uParam2, var uParam3) // Position - 0x22B9E (142238)
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

void func_491(BOOL bParam0) // Position - 0x22DF5 (142837)
{
	if (bParam0)
	{
		func_492();
	
		if (Global_21083.f_1 == 10 || Global_21083.f_1 == 9)
			MISC::SET_BIT(&Global_8920, 16);
	
		Global_21083.f_1 = 1;
	
		if (func_42(0))
			func_451(0);
	}
	else if (Global_21083.f_1 == 1)
	{
		if (!(Global_21083.f_1 == 0))
			Global_21083.f_1 = 3;
	}

	return;
}

void func_492() // Position - 0x22E58 (142936)
{
	if (Global_21083.f_1 == 9 || Global_21083.f_1 == 10)
	{
		Global_22495 = 0;
		Global_22491 = 1;
	}

	return;
}

void func_493(var uParam0, var uParam1, var uParam2) // Position - 0x22E81 (142977)
{
	int i;
	int j;

	HUD::DISPLAY_AREA_NAME(true);
	func_278(8);
	func_331();

	if (bLocal_273)
		func_510(&uLocal_289);

	for (i = 0; i < 2; i = i + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			func_432(&uParam0->f_5[i /*79*/][j /*26*/]);
		}
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_26);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_27);

	if (!PED::IS_PED_INJURED(uLocal_263[0]) && !PED::IS_PED_INJURED(uLocal_263[1]))
	{
		TASK::TASK_CLEAR_LOOK_AT(uLocal_263[0]);
		TASK::TASK_CLEAR_LOOK_AT(uLocal_263[1]);
	}

	func_509();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_58);
	func_508();
	func_507(uParam1->f_645);
	func_506(&(uParam1->f_57));

	if (!ENTITY::IS_ENTITY_DEAD(func_522(), false))
	{
		PED::SET_PED_AS_GROUP_MEMBER(func_522(), func_505());
		func_504(iLocal_297, iLocal_298);
	}
	else
	{
		func_502(&uLocal_263[1]);
	}

	func_491(false);
	func_501(uParam2, 0);
	func_39(0);
	HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);

	if (PLAYER::IS_PLAYER_ONLINE())
		if (uParam0->f_460 && !bLocal_287)
			func_500(190, false);

	func_112();
	func_483();
	func_104(&(uParam1->f_72), 0);
	SYSTEM::WAIT(200);

	if (bLocal_280)
	{
		func_497(130, 0, 0);
		func_494();
	}

	func_487(23, false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_494() // Position - 0x22FD0 (143312)
{
	func_495();
	return;
}

int func_495() // Position - 0x22FDD (143325)
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x23028 (143400)
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79813, 0);
}

void func_497(int iParam0, int iParam1, int iParam2) // Position - 0x23050 (143440)
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
		func_498();

	return;
}

void func_498() // Position - 0x23136 (143670)
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
		func_93(13, SYSTEM::FLOOR(Global_114162.f_10198.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79564)
		{
			if (func_499() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113896 = 0;
			
				if (!Global_64326)
					func_495();
			}
		}
	}

	return;
}

int func_499() // Position - 0x235F4 (144884)
{
	return Global_33105;
}

void func_500(int iParam0, BOOL bParam1) // Position - 0x235FF (144895)
{
	var unk;
	var unk8;

	if (!PLAYER::IS_PLAYER_ONLINE())
		return;

	unk = 1;
	unk8 = 1;
	TEXT_LABEL_ASSIGN_STRING(&unk8[0 /*8*/], "GameType", 32);

	if (bParam1)
		TEXT_LABEL_ASSIGN_STRING(&unk[0 /*6*/], "MP", 24);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk[0 /*6*/], "SP", 24);

	if (_LEADERBOARDS2_TRY_BEGIN_WRITE_DATA(iParam0, &unk, &unk8, 1, -1, false, false))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(103, uLocal_150[1], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(99, uLocal_150[2], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(109, uLocal_150[3], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(106, uLocal_150[5], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, uLocal_150[10], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(107, uLocal_150[8], 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(116, uLocal_150[6], 0f);
	}

	return;
}

void func_501(var uParam0, int iParam1) // Position - 0x236AA (145066)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}

	if (uParam0->f_566 || iParam1 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}

	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}

	if (!Global_79833)
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
			if (!Global_79835)
				if (CAM::IS_SCREEN_FADED_OUT() && !_IS_MISSION_REPEAT_ACTIVE(false))
					CAM::DO_SCREEN_FADE_IN(800);

	func_39(0);
	return;
}

void func_502(var uParam0) // Position - 0x23759 (145241)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !PED::IS_PED_INJURED(*uParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_300);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_300);
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_263[0]))
			TASK::TASK_LOOK_AT_ENTITY(0, uLocal_263[0], 8000, SLF_SLOW_TURN_RATE | 2048, 3);
	
		TASK::TASK_STAND_STILL(0, 1000);
	
		if (bLocal_278)
		{
			if (!IS_BIT_SET(Global_114123, 10))
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_503(iLocal_302 == 2, uLocal_343, uLocal_349), 1f, 20000, 0.25f, 0, iLocal_302 == 2 ? fLocal_353 : fLocal_355);
			else
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_503(iLocal_302 == 2, uLocal_340, uLocal_346), 1f, 20000, 0.25f, 0, iLocal_302 == 2 ? fLocal_352 : fLocal_354);
		
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_503(iLocal_302 == 2, uLocal_340, uLocal_346), 1f, 20000, 0.25f, 0, iLocal_302 == 2 ? 172.6813f : 142.6717f);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, true);
		}
	
		TASK::CLOSE_SEQUENCE_TASK(iLocal_300);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_300);
		PED::SET_PED_KEEP_TASK(*uParam0, true);
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_299);
	return;
}

Vector3 func_503(BOOL bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x23891 (145553)
{
	if (bParam0)
		return uParam1;

	return uParam4;
}

void func_504(int iParam0, int iParam1) // Position - 0x238AC (145580)
{
	if (Global_97514 == iParam0)
	{
		Global_97515 = Global_97514;
		Global_97516 = iParam1;
		Global_97514 = 23;
	}

	return;
}

int func_505() // Position - 0x238D4 (145620)
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_506(int* piParam0) // Position - 0x238E4 (145636)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(piParam0);
		*piParam0 = 0;
	}

	return;
}

void func_507(var uParam0) // Position - 0x23900 (145664)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
	return;
}

void func_508() // Position - 0x2390E (145678)
{
	HUD::CLEAR_HELP(true);
	CAM::DESTROY_ALL_CAMS(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::DISPLAY_RADAR(true);
	return;
}

void func_509() // Position - 0x2392F (145711)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_57))
		OBJECT::DELETE_OBJECT(&obLocal_57);

	return;
}

void func_510(var uParam0) // Position - 0x23946 (145734)
{
	Vehicle vehicle;

	vehicle = *uParam0;

	if (ENTITY::DOES_ENTITY_EXIST(vehicle))
	{
		if (!func_457(vehicle))
		{
			ENTITY::SET_ENTITY_COLLISION(vehicle, true, false);
			ENTITY::SET_ENTITY_VISIBLE(vehicle, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(vehicle, false);
		}
	}

	return;
}

void func_511() // Position - 0x2397D (145789)
{
	int num;

	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", DEFAULT);

	if (Global_114162.f_9089 || _IS_MISSION_REPEAT_ACTIVE(false))
	{
		if (!func_519())
		{
			num = func_518();
		
			if (num != -1)
			{
				if (!func_513(num))
					return;
			
				MISC::SET_BIT(&(Global_92440[num /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_512();
		}
	}

	return;
}

void func_512() // Position - 0x239EE (145902)
{
	Global_101748 = 1;

	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79797))
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_79797, "CMN_MARRE" /*~s~Michael was arrested.*/, 16);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_79797, "CMN_FARRE" /*~s~Franklin was arrested.*/, 16);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_79797, "CMN_TARRE" /*~s~Trevor was arrested.*/, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_79801, "", 16);
		}
	
		Global_101748 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79797))
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_79797, "CMN_MDIED" /*~s~Michael died.*/, 16);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_79797, "CMN_FDIED" /*~s~Franklin died.*/, 16);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_79797, "CMN_TDIED" /*~s~Trevor died.*/, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_79801, "", 16);
		}
	
		Global_101748 = 0;
		MISC::SET_BIT(&(Global_101713.f_20), 25);
	}

	return;
}

BOOL func_513(int iParam0) // Position - 0x23ADD (146141)
{
	int num;
	int num2;

	func_512();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::START_FIRING_AMNESTY(5000);

	num = Global_92440[iParam0 /*5*/];
	num2 = Global_79835.f_109[num /*4*/];
	func_517(num2, true);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_514(&(Global_114162.f_2367.f_539), num2);

	if (Global_95863 == Global_101750)
		Global_114162.f_9089.f_330[num2 /*6*/].f_1 = Global_114162.f_9089.f_330[num2 /*6*/].f_1 + 1;

	if (!IS_BIT_SET(Global_92476[num2 /*34*/].f_15, 1))
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);

	Global_114162.f_9089.f_330[num2 /*6*/].f_2 = Global_114162.f_9089.f_330[num2 /*6*/].f_2 + 1;
	Global_95863 = Global_101750;

	if (iParam0 == -1)
	{
		Global_114162.f_9089;
		return false;
	}

	if (IS_BIT_SET(Global_92440[iParam0 /*5*/].f_1, 4))
		return false;

	if (IS_BIT_SET(Global_92440[iParam0 /*5*/].f_1, 5))
		return false;

	return true;
}

void func_514(var uParam0, int iParam1) // Position - 0x23BED (146413)
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
		
			if (!func_516(Global_114162.f_18537[i], &unk, &num2))
			{
				Global_114162.f_18537[i] = 318;
				func_515(&uParam0->f_2296[i]);
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

void func_515(var uParam0) // Position - 0x23DB3 (146867)
{
	*uParam0 = -15;
	return;
}

BOOL func_516(int iParam0, var uParam1, var uParam2) // Position - 0x23DC1 (146881)
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
			return func_516(8, uParam1, uParam2);
	
		case 10:
			return func_516(8, uParam1, uParam2);
	
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

void func_517(int iParam0, BOOL bParam1) // Position - 0x24731 (149297)
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_95673[iParam0 /*2*/] = 1;
	else
		Global_95673[iParam0 /*2*/] = 0;

	return;
}

int func_518() // Position - 0x2476F (149359)
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (IS_BIT_SET(Global_92440[i /*5*/].f_1, 2))
			return i;
	}

	return -1;
}

BOOL func_519() // Position - 0x247A1 (149409)
{
	if (Global_101713 == 13 || Global_101713 == 10 || Global_101713 == 11 || Global_101713 == 12)
		return false;

	return true;
}

void func_520(int iParam0, BOOL bParam1) // Position - 0x247DF (149471)
{
	if (PED::IS_PED_INJURED(func_522()))
		return;

	if (bParam1)
	{
		if (!PED::IS_PED_GROUP_MEMBER(func_522(), func_505()))
			return;
	
		if (!PED::IS_PED_INJURED(func_521()))
			if (!PED::IS_PED_GROUP_MEMBER(func_521(), func_505()))
				return;
	}

	if (Global_97514 == 23)
	{
		Global_97516 = 10;
		Global_97514 = iParam0;
	}

	return;
}

Ped func_521() // Position - 0x24844 (149572)
{
	return Global_97521;
}

Ped func_522() // Position - 0x24850 (149584)
{
	return Global_97520;
}

void func_523() // Position - 0x2485C (149596)
{
	if (bLocal_258 == true)
		return;

	func_331();
	PAD::INIT_PC_SCRIPTED_CONTROLS("Darts");
	bLocal_258 = true;
	return;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x2487F (149631)
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


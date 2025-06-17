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
	func_517();

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

	if (!ENTITY::IS_ENTITY_DEAD(func_516(), false))
	{
		func_514(iLocal_297, true);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(func_516(), false))
			TASK::TASK_LEAVE_ANY_VEHICLE(func_516(), 0, 0);
	
		uLocal_263[1] = func_516();
	}
	else
	{
		MISC::SET_MISSION_FLAG(true);
	}

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_505();
		func_487(&num, &unk504, &unk1187);
	}

	HUD::DISPLAY_AREA_NAME(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	func_485(true);
	iLocal_293 = func_482(_GET_PLAYER_CHARACTER_FROM_PED(uLocal_263[0]), 1);
	num4 = BUILTIN::TO_FLOAT(iLocal_293) / 100f;
	value = num4 * 1200f;
	iLocal_140 = BUILTIN::ROUND(value);

	if (iLocal_140 < 660)
		iLocal_140 = 660;

	func_481(23, true);

	while (true)
	{
		BUILTIN::WAIT(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, 0f, -0.0375f);
	
		if (bLocal_285 && num < 13)
			GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(scaleform, scaleform.f_18, scaleform.f_21, scaleform.f_24, scaleform.f_24, 2);
	
		if (PED::IS_PED_INJURED(uScriptParam_0.f_5) && !ENTITY::DOES_ENTITY_EXIST(func_516()) || ENTITY::DOES_ENTITY_EXIST(func_516()) && PED::IS_PED_INJURED(func_516()))
			func_487(&num, &unk504, &unk1187);
	
		if (!PED::IS_PED_INJURED(uLocal_263[0]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_263[0], 239, true);
			PED::SET_PED_RESET_FLAG(uLocal_263[0], 124, true);
			func_480();
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
					func_479(&(num.f_243), &uScriptParam_0);
					func_478(num.f_243.f_1, num.f_243.f_4);
				
					if (ENTITY::DOES_ENTITY_EXIST(num.f_243))
					{
						uLocal_334 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(num.f_243, 0.7792f, -1.138f, 0.1814f) };
						uLocal_337 = { -7.9947f, 0f, num.f_243.f_4 + 36.191757f };
						caLocal_127 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), uLocal_334, uLocal_337, 1115815936, false, 2);
						CAM::SET_CAM_FOV(caLocal_127, 30f);
					}
				
					func_477();
					BUILTIN::SETTIMERA(0);
					num = 1;
					break;
			
				case 1:
					if (BUILTIN::TIMERA() > 500 && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
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
							func_476(&num.f_5[j /*79*/][k /*26*/], j);
						}
					}
				
					for (l = 0; l < 3; l = l + 1)
					{
						func_476(&num.f_164[l /*26*/], 0);
					}
				
					num2 = 2;
					func_475(0);
					func_473(&scaleform, iLocal_302, num.f_243.f_1, num.f_243.f_4);
				
					if (ENTITY::DOES_ENTITY_EXIST(num.f_243))
						entityCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(num.f_243, scaleform.f_18) };
				
					func_470(&scaleform, &unk504);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					num = 3;
					break;
			
				case 3:
					if (func_467(&scaleform, &unk504))
					{
						func_464(&(num.f_243), &vector, &vector2, false);
						echLocal_356 = _GET_PLAYER_CHARACTER_FROM_PED(uLocal_263[0]);
					
						switch (echLocal_356)
						{
							case CHAR_MICHAEL:
								sLocal_358 = func_463("MICHAEL");
							
								if (!IS_BIT_SET(Global_114305, 0))
									animationName = "darts_ig_intro_player_0_face";
								else
									animationName = "darts_ig_intro_alt1_player_0_face";
								break;
						
							case CHAR_FRANKLIN:
								sLocal_358 = func_463("FRANKLIN");
								bLocal_282 = true;
							
								if (!IS_BIT_SET(Global_114305, 0))
									animationName = "darts_ig_intro_player_1_face";
								else
									animationName = "darts_ig_intro_alt1_player_1_face";
								break;
						
							case CHAR_TREVOR:
								sLocal_358 = func_463("TREVOR");
							
								if (!IS_BIT_SET(Global_114305, 0))
									animationName = "darts_ig_intro_player_2_face";
								else
									animationName = "darts_ig_intro_alt1_player_2_face";
								break;
						}
					
						if (!ENTITY::IS_ENTITY_DEAD(func_516(), false))
						{
							echLocal_357 = _GET_PLAYER_CHARACTER_FROM_PED(func_516());
						
							if (echLocal_357 == _CHAR_NULL)
								echLocal_357 = func_460(func_516());
						
							switch (echLocal_357)
							{
								case CHAR_MICHAEL:
									sLocal_359 = func_463("MICHAEL");
									break;
							
								case CHAR_FRANKLIN:
									sLocal_359 = func_463("FRANKLIN");
									break;
							
								case CHAR_TREVOR:
									sLocal_359 = func_463("TREVOR");
									break;
							
								case CHAR_LAMAR:
									sLocal_359 = func_463("LAMAR");
									PED::SET_PED_COMPONENT_VARIATION(func_516(), PV_COMP_HAND, 2, 0, 0);
									break;
							
								case CHAR_JIMMY:
									sLocal_359 = func_463("JIMMY");
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
									sLocal_359 = func_463("RAYMOND");
									iLocal_360 = joaat("RAYMOND");
								}
								else if (randomIntInRange < 101)
								{
									sLocal_359 = func_463("JOHAN");
									iLocal_360 = joaat("JOHAN");
								}
								else if (randomIntInRange < 151)
								{
									sLocal_359 = func_463("STAN");
									iLocal_360 = joaat("STAN");
								}
								else
								{
									sLocal_359 = func_463("VINCE");
									iLocal_360 = joaat("VINCE");
								}
							}
							else if (randomIntInRange < 51)
							{
								sLocal_359 = func_463("KRISTY");
								iLocal_360 = joaat("KRISTY");
							}
							else if (randomIntInRange < 101)
							{
								sLocal_359 = func_463("MARLENE");
								iLocal_360 = joaat("MARLENE");
							}
							else if (randomIntInRange < 151)
							{
								sLocal_359 = func_463("LORIE");
								iLocal_360 = joaat("LORIE");
							}
							else
							{
								sLocal_359 = func_463("SHELLEY");
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
						func_457(num.f_243.f_4, vector, &sizeAndPeds, &uScriptParam_0);
						func_456(&scaleform, sLocal_358, sLocal_359);
						TASK::CLEAR_PED_TASKS(uLocal_263[1]);
						caLocal_301 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, false, 2);
					
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
					
						_CONVERSATION_INITIALIZE_ACTOR(&(num.f_257), 0, PLAYER::PLAYER_PED_ID(), sLocal_358, 0, 1);
					
						if (ENTITY::IS_ENTITY_DEAD(func_516(), false))
						{
							if (iLocal_302 == 2)
								_CONVERSATION_INITIALIZE_ACTOR(&(num.f_257), 3, uLocal_263[1], "DartsBillLost1", 0, 1);
							else
								_CONVERSATION_INITIALIZE_ACTOR(&(num.f_257), 3, uLocal_263[1], "DartsMelHick1", 0, 1);
						
							num3 = -1;
						}
						else
						{
							_CONVERSATION_INITIALIZE_ACTOR(&(num.f_257), 3, func_516(), sLocal_359, 0, 1);
							func_453(&unk1786);
							num3 = 6;
						}
					
						if (!IS_BIT_SET(Global_114305, 0))
							num3 = -1;
						else
							num3 = 3;
					
						func_452(&scaleform, 0);
						num = 5;
					}
					break;
			
				case 5:
					if (!PED::IS_PED_INJURED(uLocal_263[1]) && PED::IS_PED_ON_FOOT(uLocal_263[0]) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_263[0], true) && PED::IS_PED_ON_FOOT(uLocal_263[1]) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_263[1], true))
					{
						bLocal_273 = func_450(&uLocal_289);
					
						if (func_449() && MISC::GET_GAME_TIMER() >= iLocal_291 + 1000 && num3 != 9)
							if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
								CAM::DO_SCREEN_FADE_OUT(500);
					
						if (CAM::IS_SCREEN_FADED_OUT() && num3 != 9)
						{
							func_445(0);
							func_443();
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
									func_442(&unk1786);
									num3 = num3 + 1;
								}
								break;
						
							case 0:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295))
								{
									if (!flag3)
									{
										if (func_441(&unk1786) > 1.5f)
										{
											func_440(uLocal_263[0], "DARTS_REQUEST_GAME", 6);
											flag3 = true;
											func_439(&unk1786);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_263[0]))
									{
										if (!flag4)
										{
											if (!func_438(&unk1786))
											{
												func_453(&unk1786);
											}
											else if (func_441(&unk1786) > 0.5f)
											{
												func_437(uLocal_263[1]);
												func_439(&unk1786);
												flag4 = true;
											}
										}
									}
								
									switch (iLocal_29)
									{
										case 0:
											func_442(&unk1786);
											_DISPLAY_HELP_TEXT("DARTS_HOW_TO_2", -1);
											iLocal_29 = iLocal_29 + 1;
											break;
									
										case 1:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) > 0.25f)
											{
												func_442(&unk1786);
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
										func_433(num.f_243.f_1, num.f_243.f_4, func_435(2), func_434(false), 0, true);
										iLocal_29 = 0;
										HUD::CLEAR_HELP(true);
										CAM::DESTROY_CAM(caLocal_301, false);
										TASK::CLEAR_PED_TASKS(uLocal_263[0]);
										TASK::CLEAR_PED_TASKS(uLocal_263[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(object, -1000f, false);
										OBJECT::DELETE_OBJECT(&object);
										AUDIO::STOP_AUDIO_SCENE(func_432(0));
										func_439(&unk1786);
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
									func_442(&unk1786);
									num3 = num3 + 1;
								}
								break;
						
							case 4:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295))
								{
									if (!flag3)
									{
										if (func_441(&unk1786) > 0.5f)
										{
											func_440(uLocal_263[0], "DARTS_REQUEST_GAME", 6);
											flag3 = true;
											func_439(&unk1786);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_263[0]))
									{
										if (!flag4)
										{
											if (!func_438(&unk1786))
											{
												func_453(&unk1786);
											}
											else if (func_441(&unk1786) > 0.25f)
											{
												func_437(uLocal_263[1]);
												func_439(&unk1786);
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
										func_431();
										CAM::DESTROY_CAM(caLocal_301, false);
										TASK::CLEAR_PED_TASKS(uLocal_263[0]);
										TASK::CLEAR_PED_TASKS(uLocal_263[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(object, -1000f, false);
										OBJECT::DELETE_OBJECT(&object);
										AUDIO::STOP_AUDIO_SCENE(func_432(0));
										func_439(&unk1786);
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
								
									if (!IS_BIT_SET(Global_114305, 0))
										func_433(num.f_243.f_1, num.f_243.f_4, func_435(2), func_434(false), 0, true);
									else
										func_431();
								
									AUDIO::STOP_AUDIO_SCENE(func_432(0));
									func_439(&unk1786);
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
						
							AUDIO::START_AUDIO_SCENE(func_432(1));
							num3 = 0;
							num = 7;
							break;
					
						case 1:
							if (MISC::GET_GAME_TIMER() - iLocal_291 > 1500)
							{
								func_429(&(unk504.f_57), "DARTS_TITLE", 0, 4000, HUD_COLOUR_YELLOW, 2, false, 0);
								num3 = num3 + 1;
							}
							break;
					
						case 2:
							if (!func_428(&(unk504.f_57), true, false))
							{
								AUDIO::START_AUDIO_SCENE(func_432(1));
								num3 = 0;
								num = 7;
							}
							break;
					}
					break;
			
				case 7:
					if (!IS_BIT_SET(Global_114305, 0))
					{
						if (func_425(&num2, &(num.f_243), &(num.f_249), &(num.f_1), &(num.f_164), &unk1783))
						{
							MISC::SET_BIT(&Global_114305, 0);
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
							if (!ENTITY::DOES_ENTITY_EXIST(func_516()))
							{
								if (!IS_BIT_SET(Global_114305, 10))
									MISC::SET_BIT(&Global_114305, 10);
								else
									MISC::CLEAR_BIT(&Global_114305, 10);
							
								func_423(&unk504);
								num3 = num3 + 1;
							}
							else
							{
								func_423(&unk504);
								num3 = num3 + 1;
							}
							break;
					
						case 1:
							if (MISC::IS_PC_VERSION())
							{
								if (fLocal_132 != GRAPHICS::GET_ASPECT_RATIO(false))
								{
									fLocal_132 = GRAPHICS::GET_ASPECT_RATIO(false);
									CAM::SET_CAM_FOV(caLocal_118, func_422(fLocal_132));
									CAM::SET_CAM_FOV(caLocal_119, func_422(fLocal_132));
								}
							}
						
							if (func_351(&unk504, &(num.f_452), &(num.f_453)))
							{
								AUDIO::STOP_AUDIO_SCENE(func_432(1));
							
								if (num.f_452 > 0)
								{
									num3 = 0;
								
									if (num.f_452 > 1 || num.f_453 > 1)
									{
										func_350(&scaleform, 0, 0, 0, 0);
										flag2 = true;
									}
								
									func_347(true, -1);
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
					if (func_340(&num, &scaleform, &unk504))
					{
						num.f_249.f_4 = 1;
					
						if (Global_114344.f_18974.f_5 >= 5 && Global_114344.f_18974.f_7 >= 0.8f)
							num.f_249.f_4 = 2;
						else if (Global_114344.f_18974.f_5 >= 3 && Global_114344.f_18974.f_7 >= 0.66f)
							num.f_249.f_4 = 1;
						else
							num.f_249.f_4 = 0;
					
						if (func_339(Global_114344.f_18974.f_5, &iLocal_294))
							func_338(&(unk504.f_666), 24, true);
					
						fLocal_88 = func_337(Global_114344.f_18974.f_5);
						fLocal_89 = func_336(Global_114344.f_18974.f_5);
						fLocal_86 = fLocal_88;
						fLocal_87 = fLocal_89;
						uLocal_150[4] = uLocal_150[4] + 1;
					
						if (!PED::IS_PED_INJURED(uLocal_263[1]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_263[1]);
							ENTITY::SET_ENTITY_COORDS(uLocal_263[1], vector.f_3, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(uLocal_263[1], num.f_243.f_4);
						}
					
						if (func_438(&unk1780))
							func_439(&unk1780);
					
						AUDIO::START_AUDIO_SCENE(func_432(2));
						func_335(uLocal_263[1]);
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
							CAM::SET_CAM_FOV(caLocal_118, func_422(fLocal_132));
							CAM::SET_CAM_FOV(caLocal_119, func_422(fLocal_132));
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
				
					func_253(&num, &vector2, &scaleform, &unk504, &unk1780);
					break;
			
				case 11:
					switch (num3)
					{
						case 0:
							if (func_441(&(num.f_254)) > 0.5f)
							{
								HUD::CLEAR_HELP(true);
								HUD::CLEAR_PRINTS();
								func_252(PLAYER::PLAYER_PED_ID());
								func_350(&scaleform, num.f_449[0], num.f_449[1], num.f_446[0], num.f_446[1]);
							
								for (m = 0; m < 2; m = m + 1)
								{
									for (n = 0; n < 3; n = n + 1)
									{
										func_251(&num.f_5[m /*79*/][n /*26*/]);
									}
								
									func_250(&scaleform, m);
								}
							
								if (num.f_459)
								{
									if (num.f_454)
										func_248(&(unk504.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									else
										func_248(&(unk504.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
								
									num.f_459 = 0;
								}
								else if (num.f_454)
								{
									func_248(&(unk504.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_248(&(unk504.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
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
							
								num5 = func_247();
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
										func_246(&uLocal_263, flag6);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[0], iLocal_295, "mini@dartsoutro", uLocal_367[num5], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[1], iLocal_295, "mini@dartsoutro", uLocal_371[num5], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_362, uLocal_363[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, false, false, false);
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
										func_245(&uLocal_263);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[1], iLocal_295, "mini@dartsoutro", uLocal_367[num5], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(uLocal_263[0], iLocal_295, "mini@dartsoutro", uLocal_371[num5], 1000f, -1.5f, 0, 0, 1148846080, 0);
										TASK::TASK_PLAY_ANIM(uLocal_263[1], sLocal_361, uLocal_363[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, false, false, false);
									}
								}
							
								num3 = num3 + 1;
							}
							break;
					
						case 1:
							if (!func_243(&(unk504.f_62), 1))
								num3 = num3 + 1;
							break;
					
						case 2:
							func_439(&(num.f_254));
							bLocal_279 = false;
							AUDIO::STOP_AUDIO_SCENE(func_432(3));
							func_431();
						
							if (CAM::DOES_CAM_EXIST(caLocal_301))
								CAM::DESTROY_CAM(caLocal_301, false);
						
							num3 = 0;
							num = 9;
							break;
					}
					break;
			
				case 12:
					if (func_441(&(num.f_254)) > 0.92f)
						func_44(&num, &unk504, &scaleform, &unk1187, flag2);
					break;
			
				case 13:
					flag5 = func_10(&unk1187, false, 1065353216, false, false, false);
				
					if (!ENTITY::IS_ENTITY_DEAD(func_516(), false))
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
							func_453(&unk1786);
							num3 = num3 + 1;
							break;
					
						case 1:
							if (func_7(&unk1786) > 0.1f)
							{
								!flag;
								func_453(&unk1786);
								num3 = num3 + 1;
							}
							break;
					
						case 2:
							if (func_7(&unk1786) > 0.3f)
							{
								if (!PED::IS_PED_INJURED(uLocal_263[1]))
									if (!flag)
										func_4(uLocal_263[0], "GENERIC_THANKS", true, 4);
							
								func_453(&unk1786);
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
					
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_432(2)))
							AUDIO::STOP_AUDIO_SCENE(func_432(2));
					
						num = 13;
					}
				
					if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
					{
						if (num.f_1 == 2)
							bLocal_98 = false;
					
						func_338(&(unk504.f_666), 8, false);
						num = 10;
					}
					break;
			
				case 15:
					func_487(&num, &unk504, &unk1187);
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
			func_338(&(uParam0->f_666), 8, true);
			func_338(&(uParam0->f_666), 15, false);
			func_338(&(uParam0->f_666), 16, false);
			func_338(&(uParam0->f_666), 17, false);
		}
	
		HUD::CLEAR_SMALL_PRINTS();
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, false, -1, 0, 0, true, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_338(&(uParam0->f_666), 8, false);
	}

	return;
}

BOOL func_3(var uParam0, int iParam1) // Position - 0x1E74 (7796)
{
	return IS_BIT_SET(*uParam0, iParam1);
}

void func_4(Ped pedParam0, char* sParam1, BOOL bParam2, int iParam3) // Position - 0x1E82 (7810)
{
	if (!ENTITY::IS_ENTITY_DEAD(func_516(), false) || bParam2)
		func_440(pedParam0, sParam1, iParam3);
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
	if (func_438(piParam0))
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
		num = BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER());
		num2 = num / 1000f;
		return num2;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTime = NETWORK::GET_NETWORK_TIME();
		num3 = BUILTIN::TO_FLOAT(networkTime);
		num4 = num3 / 1000f;
		return num4;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
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

	Global_44925 = 1;

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
		uParam0->f_562 = uParam0->f_576 + BUILTIN::FLOOR(15000f * iParam2);

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
		uParam0->f_576 = uParam0->f_576 + BUILTIN::ROUND(0f + (1000f * BUILTIN::TIMESTEP()));
		func_15(uParam0, iParam2, bParam3);
	
		if ((float)uParam0->f_576 > (float)uParam0->f_562 + 666 - (15000f * iParam2))
			if (uParam0->f_30 < 1f)
				uParam0->f_30 = uParam0->f_30 + 0f + ((1f / 0.225f) * BUILTIN::TIMESTEP());
	
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
			
				uParam0->f_547 = uParam0->f_547 - (0f + ((1f / 1.215f) * BUILTIN::TIMESTEP()));
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
					uParam0->f_548 = uParam0->f_548 + 0f + ((1f / 0.3f) * BUILTIN::TIMESTEP());
	
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
			
				uParam0->f_563 = func_14(uParam0->f_563 + ((1f / 0.3f) * uParam0->f_577 * BUILTIN::TIMESTEP()), 0f, 1f);
				uParam0->f_577 = func_14(uParam0->f_577 + 0.07f, 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_563 = func_14(uParam0->f_563 - ((1f / 0.3f) * uParam0->f_577 * 0.01f * BUILTIN::TIMESTEP()), 0f, 1f);
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
			BUILTIN::WAIT(0);
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

	alpha = BUILTIN::ROUND(uParam0->f_547 * 255f);
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
					uParam0->f_572 = uParam0->f_572 + 0f + ((1f / 0.166f) * BUILTIN::TIMESTEP());
				
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
		GRAPHICS::DRAW_RECT(0.5f, num - func_40(2f - 0.5f) - 0.0013888889f, width, func_30(1f), r, g, b, BUILTIN::ROUND(num9 * (float)a), false);
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
			func_27(uParam0, i, num + func_40(2f), start, end, BUILTIN::ROUND((float)alpha * num9));
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
					GRAPHICS::DRAW_RECT(0.5f, num + func_40(2f * 0.5f), width, func_30(1f), r, g, b, BUILTIN::ROUND(num9 * (float)a), false);
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
			GRAPHICS::DRAW_RECT(0.5f, num + func_40(2f * 0.5f), width, func_30(1f), r, g, b, BUILTIN::ROUND(num9 * (float)a), false);
		}
	}

	if (uParam0->f_549)
	{
		num = num + func_40(25f * 0.2f);
		num8 = num2 - num - (0.3f * func_38());
	
		if (num8 >= 0f)
		{
			num9 = func_14(num8 / (0.8f * func_40(25f)), 0f, 1f);
			HUD::SET_TEXT_COLOUR(r, g, b, BUILTIN::ROUND(num9 * (float)alpha));
			func_19(8, false, true, &num10, &unk, false);
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
			HUD::SET_TEXT_COLOUR(r, g, b, BUILTIN::ROUND(num9 * (float)alpha));
		
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
				GRAPHICS::DRAW_SPRITE(&textureDict, &textureName, screenX, screenY, width2, height, 0f, r2, g2, b2, BUILTIN::ROUND(num9 * (float)alpha), false, 0);
			}
		
			num = num + (func_40(30f) - 2f);
		}
	}

	return;
}

float func_16(float fParam0) // Position - 0x35CA (13770)
{
	return fParam0 * 0.00078125f;
}

void func_17(const char* sParam0, const char* sParam1, float fParam2, float fParam3, BOOL bParam4, int iParam5) // Position - 0x35DA (13786)
{
	HUD::SET_TEXT_CENTRE(bParam4);
	HUD::SET_TEXT_FONT(iParam5);
	func_36();
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
	return;
}

void func_18(const char* sParam0, float fParam1, float fParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x3607 (13831)
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

BOOL func_19(int iParam0, BOOL bParam1, BOOL bParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0x3644 (13892)
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
	
		if (iParam0 == 31)
		{
			textureResolution = 288f;
			textureResolution.f_1 = 106f;
		}
	
		if (iParam0 == 30 && MISC::GET_HASH_KEY(&Global_24131.f_7696[30 /*16*/]) == joaat("CREW_LOGO"))
		{
			textureResolution = 106f;
			textureResolution.f_1 = 106f;
		}
	
		*uParam3 = (textureResolution / (float)num) * (float)num / num2;
		*uParam4 = (textureResolution.f_1 / (float)num2 / textureResolution / (float)num) * *uParam3;
	
		if (!bParam5)
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 31)
				*uParam3 = *uParam3 * 1.33f;
	
		if (iParam0 == 30)
		{
			if (*uParam3 > Global_24130)
			{
				*uParam4 = *uParam4 * (Global_24130 / *uParam3);
				*uParam3 = Global_24130;
			}
		}
	
		return true;
	}

	return false;
}

float func_20(int iParam0) // Position - 0x3770 (14192)
{
	switch (iParam0)
	{
		case 34:
		case 4:
		case 12:
		case 32:
		case 21:
		case 16:
		case 11:
		case 13:
		case 14:
		case 33:
		case 10:
		case 5:
		case 6:
		case 7:
		case 8:
		case 15:
		case 19:
		case 20:
		case 18:
		case 29:
		case 27:
		case 28:
		case 56:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 66:
			return 0.5f;
	
		case 65:
			return 0.8f;
	}

	return 1f;
}

void func_21(BOOL bParam0, int* piParam1, int* piParam2, var uParam3) // Position - 0x384A (14410)
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
	num = BUILTIN::TO_FLOAT(*piParam1);
	value = BUILTIN::TO_FLOAT(*piParam2);
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (func_22(*piParam1, *piParam2))
	{
		*uParam3 = 1f;
		*piParam1 = BUILTIN::ROUND(value * aspectRatio);
		*piParam2 = BUILTIN::ROUND(value);
		return;
	}

	*uParam3 = num / value / aspectRatio;
	*piParam1 = BUILTIN::ROUND(num / *uParam3);
	*piParam2 = BUILTIN::ROUND(value / *uParam3);
	return;
}

BOOL func_22(int iParam0, int iParam1) // Position - 0x38D2 (14546)
{
	return BUILTIN::TO_FLOAT(iParam0) / BUILTIN::TO_FLOAT(iParam1) > 3.5f;
}

char* func_23(int iParam0, BOOL bParam1) // Position - 0x38ED (14573)
{
	var unk;
	var txdName;
	var netHandle;

	unk = 2;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_24131.f_7696[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_24131.f_7696[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
		
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName))
				return func_24(&txdName);
		}
		else
		{
			return func_24(&Global_24131.f_7696[iParam0 /*16*/]);
		}
	}

	switch (iParam0)
	{
		case 3:
			unk[0] = "MP_hostCrown";
			unk[1] = "MP_hostCrown";
			break;
	
		case 22:
			unk[0] = "MP_SpecItem_Coke";
			unk[1] = "MP_SpecItem_Coke";
			break;
	
		case 23:
			unk[0] = "MP_SpecItem_Heroin";
			unk[1] = "MP_SpecItem_Heroin";
			break;
	
		case 24:
			unk[0] = "MP_SpecItem_Weed";
			unk[1] = "MP_SpecItem_Weed";
			break;
	
		case 25:
			unk[0] = "MP_SpecItem_Meth";
			unk[1] = "MP_SpecItem_Meth";
			break;
	
		case 26:
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
	
		case 7:
		case 6:
			unk[0] = "Shop_Box_CrossB";
			unk[1] = "Shop_Box_Cross";
			break;
	
		case 8:
			unk[0] = "Shop_Box_BlankB";
			unk[1] = "Shop_Box_Blank";
			break;
	
		case 5:
			unk[0] = "Shop_Box_TickB";
			unk[1] = "Shop_Box_Tick";
			break;
	
		case 9:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 10:
			unk[0] = "Shop_Clothing_Icon_B";
			unk[1] = "Shop_Clothing_Icon_A";
			break;
	
		case 11:
			unk[0] = "Shop_GunClub_Icon_B";
			unk[1] = "Shop_GunClub_Icon_A";
			break;
	
		case 18:
			unk[0] = "Shop_Ammo_Icon_B";
			unk[1] = "Shop_Ammo_Icon_A";
			break;
	
		case 19:
			unk[0] = "Shop_Armour_Icon_B";
			unk[1] = "Shop_Armour_Icon_A";
			break;
	
		case 20:
			unk[0] = "Shop_Health_Icon_B";
			unk[1] = "Shop_Health_Icon_A";
			break;
	
		case 21:
			unk[0] = "Shop_MakeUp_Icon_B";
			unk[1] = "Shop_MakeUp_Icon_A";
			break;
	
		case 12:
			unk[0] = "Shop_Tattoos_Icon_B";
			unk[1] = "Shop_Tattoos_Icon_A";
			break;
	
		case 13:
			unk[0] = "Shop_Garage_Icon_B";
			unk[1] = "Shop_Garage_Icon_A";
			break;
	
		case 14:
			unk[0] = "Shop_Garage_Bike_Icon_B";
			unk[1] = "Shop_Garage_Bike_Icon_A";
			break;
	
		case 15:
			unk[0] = "Shop_Barber_Icon_B";
			unk[1] = "Shop_Barber_Icon_A";
			break;
	
		case 16:
			unk[0] = "shop_Lock";
			unk[1] = "shop_Lock";
			break;
	
		case 17:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 27:
			unk[0] = "arrowleft";
			unk[1] = "arrowleft";
			break;
	
		case 28:
			unk[0] = "arrowright";
			unk[1] = "arrowright";
			break;
	
		case 29:
			unk[0] = "MP_AlertTriangle";
			unk[1] = "MP_AlertTriangle";
			break;
	
		case 30:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 32:
			unk[0] = "Shop_Michael_Icon_B";
			unk[1] = "Shop_Michael_Icon_A";
			break;
	
		case 33:
			unk[0] = "Shop_Franklin_Icon_B";
			unk[1] = "Shop_Franklin_Icon_A";
			break;
	
		case 34:
			unk[0] = "Shop_Trevor_Icon_B";
			unk[1] = "Shop_Trevor_Icon_A";
			break;
	
		case 55:
			unk[0] = "SaleIcon";
			unk[1] = "SaleIcon";
			break;
	
		case 56:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 58:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 59:
			unk[0] = "Shop_Lock_Arena";
			unk[1] = "Shop_Lock_Arena";
			break;
	
		case 60:
			unk[0] = "Card_Suit_Clubs";
			unk[1] = "Card_Suit_Clubs";
			break;
	
		case 61:
			unk[0] = "Card_Suit_Hearts";
			unk[1] = "Card_Suit_Hearts";
			break;
	
		case 62:
			unk[0] = "Card_Suit_Spades";
			unk[1] = "Card_Suit_Spades";
			break;
	
		case 63:
			unk[0] = "Card_Suit_Diamonds";
			unk[1] = "Card_Suit_Diamonds";
			break;
	
		case 64:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 66:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 65:
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

char* func_24(char* sParam0) // Position - 0x3E1D (15901)
{
	return sParam0;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x3E27 (15911)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

char* func_26(int iParam0) // Position - 0x3E3E (15934)
{
	var txdName;
	var netHandle;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_24131.f_6623[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_24131.f_6623[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName);
			return func_24(&txdName);
		}
		else
		{
			return func_24(&Global_24131.f_6623[iParam0 /*16*/]);
		}
	}

	if (iParam0 == 55)
		return "MPShopSale";

	return "CommonMenu";
}

void func_27(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5) // Position - 0x3EB3 (16051)
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
	
		if (uParam0->f_57[iParam1] == 18 || uParam0->f_57[iParam1] == 19)
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
	}

	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	num = fParam4;

	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
	
		case 1:
			func_19(8, false, true, &width, &height, false);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_23(8, false), fParam4 - 0.006f, fParam2 + func_40(2f) + (0.25f * height), width, height, 0f, 255, 255, 255, iParam5, false, 0);
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

	if (uParam0->f_57[iParam1] == 17)
		HUD::SET_TEXT_JUSTIFICATION(1);
	else
		HUD::SET_TEXT_JUSTIFICATION(2);

	HUD::SET_TEXT_SCALE(1f, func_29(14f));

	if (uParam0->f_57[iParam1] == 7 || uParam0->f_57[iParam1] == 6)
		HUD::SET_TEXT_WRAP(fParam3, num - (0.00078125f * 3f));
	else
		HUD::SET_TEXT_WRAP(fParam3, num + (0.00078125f * 2f));

	HUD::SET_TEXT_COLOUR(r, g, b, iParam5);
	func_28(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &uParam0->f_280[iParam1 /*16*/], uParam0->f_57[iParam1]);
	return;
}

void func_28(int iParam0, int iParam1, float fParam2, float fParam3, const char* sParam4, int iParam5) // Position - 0x4146 (16710)
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

	if (iParam5 == 6)
	{
		red = 194;
		green = 80;
		blue = 80;
	}

	switch (iParam5)
	{
		case 6:
		case 7:
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
		case 13:
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
	
		case 3:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_KM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	
		case 4:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_MI");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	
		case 6:
		case 7:
			HUD::SET_TEXT_SCALE(1f, func_29(18f));
			[[fallthrough]];
	
		case 5:
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
	
		case 8:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
	
		case 9:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
	
		case 10:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
	
		case 11:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
	
		case 12:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
	
		case 20:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
	
		case 14:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
	
		case 15:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	
		case 17:
		case 16:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	
		case 18:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	
		case 22:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
	}

	if (iParam5 != 19)
	{
		if (iParam5 == 6 || iParam5 == 7)
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

float func_29(float fParam0) // Position - 0x450B (17675)
{
	return fParam0 * 0.025f;
}

float func_30(float fParam0) // Position - 0x451B (17691)
{
	return fParam0 * 0.0009259259f;
}

void func_31(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x452B (17707)
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
		Global_1675403.f_1 = 1;
		func_32(7, num);
		Global_1675403.f_4714[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1675403.f_4714.f_11[num /*16*/], sParam1, 64);
		Global_1675403.f_4714.f_172[num] = iParam2;
		Global_1675403.f_4714.f_216[num] = iParam3;
		Global_1675403.f_4714.f_183[num] = iParam4;
		Global_1675403.f_4714.f_194[num] = iParam5;
		Global_1675403.f_4714.f_249[num] = iParam6;
		Global_1675403.f_4714.f_260[num] = iParam7;
		Global_1675403.f_4714.f_205[num] = iParam8;
		Global_1675403.f_4714.f_314[num] = iParam9;
		Global_1675403.f_4714.f_325[num] = iParam10;
		Global_1675403.f_4714.f_357[num] = iParam11;
		Global_1675403.f_4714.f_238[num] = iParam12;
		Global_1675403.f_4714.f_271[num] = iParam13;
		Global_1675403.f_4714.f_368[num] = iParam14;
		Global_1675403.f_4714.f_379[num] = iParam15;
		Global_1675403.f_4714.f_390[num] = iParam16;
		Global_1675403.f_4714.f_227[num] = iParam17;
	}

	return;
}

void func_32(int iParam0, int iParam1) // Position - 0x4688 (18056)
{
	MISC::SET_BIT(&Global_1675403.f_7064[iParam0], iParam1);
	return;
}

BOOL func_33(int iParam0, int iParam1) // Position - 0x46A1 (18081)
{
	return IS_BIT_SET(Global_1675403.f_7064[iParam0], iParam1);
}

float func_34(const char* sParam0, const char* sParam1) // Position - 0x46B7 (18103)
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true) / 2f;
}

float func_35(const char* sParam0) // Position - 0x46D2 (18130)
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true) / 2f;
}

void func_36() // Position - 0x46E7 (18151)
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);

	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);

	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	return;
}

void func_37(char* sParam0) // Position - 0x470F (18191)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

float func_38() // Position - 0x471D (18205)
{
	float num;

	num = 1f;
	MISC::IS_PC_VERSION();
	return num;
}

void func_39(int iParam0) // Position - 0x4731 (18225)
{
	Global_80005 = iParam0;
	Global_80006 = iParam0;
	return;
}

float func_40(float fParam0) // Position - 0x4745 (18245)
{
	return fParam0 * 0.0013888889f;
}

void func_41(int iParam0) // Position - 0x4755 (18261)
{
	if (func_43())
		return;

	if (!(Global_21222.f_1 == 1))
	{
		if (func_42(0))
			func_445(iParam0);
	
		MISC::SET_BIT(&Global_9076, 2);
	}

	return;
}

BOOL func_42(int iParam0) // Position - 0x4788 (18312)
{
	if (iParam0 == 1)
		if (Global_21222.f_1 > 3)
			if (IS_BIT_SET(Global_9075, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21222.f_1 > 3)
		return true;

	return false;
}

BOOL func_43() // Position - 0x47DF (18399)
{
	return IS_BIT_SET(Global_1959772, 19);
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x47EE (18414)
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
			if (func_220(uParam1, false, &bLocal_287))
			{
				func_338(&(uParam1->f_666), 9, false);
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
				uParam1->f_646 = func_211(&(uParam1->f_647), false);
				flag = false;
			
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_338(&(uParam1->f_666), 9, false);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_128(&(uParam1->f_72), &(uParam1->f_645));
			}
		
			if (flag)
			{
				func_124(&(uParam1->f_509), 1128792064, 1, false, true, 1065353216);
			
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
				{
					uParam1->f_680 = 0;
					func_338(&(uParam1->f_666), 9, false);
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
		
			if (func_123(&(uParam1->f_72)))
			{
				if (!bLocal_288)
				{
					bLocal_288 = true;
					func_122(&(uParam1->f_509), false, false, true, true);
					func_121(&(uParam1->f_509), "DARTS_CONT" /*Continue*/, 2, 215, 1, 1, 0);
					func_121(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_121(&(uParam1->f_509), "IB_BACK" /*Back*/, 2, 202, 1, 1, 0);
					func_121(&(uParam1->f_509), "SCLB_PROFILE" /*View Profile*/, 2, 217, 1, 1, 0);
					func_118(&(uParam1->f_509), true);
				}
			}
		}
		else
		{
			num = func_111(uParam1, false, false, bLocal_286);
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
		
			func_110();
		}
	
		if (func_441(&(uParam0->f_254)) > 2f)
		{
			if (!bLocal_279)
			{
				if (uParam0->f_454)
				{
					if (uParam0->f_437[0] + uParam0->f_437[1] == 1)
						flag2 = true;
					else
						flag2 = false;
				
					func_246(&uLocal_263, flag2);
				}
				else
				{
					func_245(&uLocal_263);
				}
			
				bLocal_279 = true;
			}
		}
	
		if (num == 1)
		{
			HUD::CLEAR_HELP(true);
			AUDIO::STOP_AUDIO_SCENE(func_432(3));
		
			if (!PED::IS_PED_INJURED(uLocal_263[0]) && !PED::IS_PED_INJURED(uLocal_263[1]))
			{
				TASK::TASK_CLEAR_LOOK_AT(uLocal_263[0]);
				TASK::TASK_CLEAR_LOOK_AT(uLocal_263[1]);
			}
		
			func_109(uParam3);
		
			if (bParam4)
				func_350(uParam2, 0, 0, 0, 0);
		
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_28 = 1;
			func_439(&(uParam0->f_254));
			*uParam0 = 9;
			bLocal_279 = false;
			bLocal_277 = false;
			bLocal_281 = false;
			func_106();
			bLocal_286 = false;
			bLocal_257 = false;
			uParam1->f_680 = 0;
			bLocal_287 = false;
			bLocal_288 = false;
			func_98(&(uParam1->f_72), 0);
			func_477();
		}
		else if (num == 2)
		{
			func_97(uParam3);
			AUDIO::STOP_AUDIO_SCENE(func_432(3));
		
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
			func_122(&(uParam1->f_509), false, false, true, true);
			func_121(&(uParam1->f_509), "DARTS_CONT" /*Continue*/, 2, 215, 1, 1, 0);
			func_121(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_121(&(uParam1->f_509), "IB_BACK" /*Back*/, 2, 202, 1, 1, 0);
		
			if (bLocal_288)
				func_121(&(uParam1->f_509), "SCLB_PROFILE" /*View Profile*/, 2, 217, 1, 1, 0);
		
			func_118(&(uParam1->f_509), true);
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
	
		num2 = func_247();
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
				func_251(&uParam0->f_5[i /*79*/][j /*26*/]);
			}
		
			func_250(uParam2, i);
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

BOOL func_45(var uParam0, BOOL bParam1, int iParam2) // Position - 0x4FB2 (20402)
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
			BUILTIN::WAIT(0);
		}
	
		if (uParam0->f_566 || uParam0->f_571)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				BUILTIN::WAIT(0);
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

	Global_80006 = 1;
	return true;
}

void func_46(var uParam0) // Position - 0x5152 (20818)
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

void func_47(var uParam0) // Position - 0x5217 (21015)
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

void func_48(var uParam0) // Position - 0x531F (21279)
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

void func_49(var uParam0, BOOL bParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, int iParam7, var uParam8, int iParam9, var uParam10, BOOL bParam11) // Position - 0x539E (21406)
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

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x5470 (21616)
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

void func_51(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x54B6 (21686)
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

void func_52(var uParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x5529 (21801)
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), sParam1, 16);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
	return;
}

void func_53(var uParam0, var uParam1, var uParam2) // Position - 0x554C (21836)
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

Vector3 func_54(var uParam0, var uParam1, var uParam2) // Position - 0x559C (21916)
{
	var unk;
	var unk4;

	unk4 = { 0.3495f, -0.0276f, -0.0114f };
	unk = { uParam0 - unk4 };
	return unk;
}

void func_55(var uParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x55C8 (21960)
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

void func_56(eCharacter echParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x565A (22106)
{
	int outValue;
	Hash statHash;

	if (func_91(echParam0) == 3)
		return;

	if (func_91(echParam0) == 4)
		return;

	func_57(func_91(echParam0), 1, iParam1, iParam2, false);

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

int func_57(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x572C (22316)
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_90();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_89(99, 1);
					func_88(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_88(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_88(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_72(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_69(5))
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
							func_88(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_88(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_88(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_69(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_88(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_88(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_88(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_88(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_88(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_88(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_88(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_88(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_88(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_88(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_88(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_88(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_69(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_88(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_88(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_88(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_88(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_68(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_89(95, iParam3);
					break;
			
				case 1:
					func_89(97, iParam3);
					break;
			
				case 2:
					func_89(96, iParam3);
					break;
			}
		
			func_89(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = BUILTIN::FLOOR(num * BUILTIN::TO_FLOAT(iParam3));
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

	num6 = Global_61680[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_61680[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_61680[num3] = 2147483647;
				else
					Global_61680[num3] = Global_61680[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_88(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_88(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_88(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_61680[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_61680[num3];
			Global_61680[num3] = Global_61680[num3] - iParam3;
		
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
		Global_114344.f_20568.f_233[num3 /*69*/].f_2[Global_114344.f_20568.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_114344.f_20568.f_233[num3 /*69*/].f_2[Global_114344.f_20568.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114344.f_20568.f_233[num3 /*69*/].f_2[Global_114344.f_20568.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114344.f_20568.f_233[num3 /*69*/] = Global_114344.f_20568.f_233[num3 /*69*/] + 1;
		Global_114344.f_20568.f_233[num3 /*69*/].f_1 = Global_114344.f_20568.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_114344.f_20568.f_233[num3 /*69*/].f_1 > 10)
			Global_114344.f_20568.f_233[num3 /*69*/].f_1 = 0;
	}

	func_59(iParam0);

	if (Global_44375 == 15)
		func_58(false);

	return 1;
}

void func_58(BOOL bParam0) // Position - 0x5D2B (23851)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/];
			Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_61688[i /*3*/][0] = Global_114344.f_20568[i];
		Global_61688.f_31[i /*3*/][0] = Global_114344.f_20568.f_11[i];
		Global_61688.f_62[i /*3*/][0] = Global_114344.f_20568.f_22[i];
		Global_61688.f_93[i /*3*/][0] = Global_114344.f_20568.f_33[i];
		Global_61688.f_124[i /*3*/][0] = Global_114344.f_20568.f_44[i];
		Global_61688.f_155[i /*3*/][0] = Global_114344.f_20568.f_55[i];
		Global_61688.f_186[i /*3*/][0] = Global_114344.f_20568.f_66[i];
		Global_61688.f_217[i /*3*/][0] = Global_114344.f_20568.f_77[i];
		Global_61688.f_248[i /*3*/][0] = Global_114344.f_20568.f_88[i];
	
		if (!bParam0)
		{
			Global_61688[i /*3*/][1] = Global_114344.f_20568[i];
			Global_61688.f_31[i /*3*/][1] = Global_114344.f_20568.f_11[i];
			Global_61688.f_62[i /*3*/][1] = Global_114344.f_20568.f_22[i];
			Global_61688.f_93[i /*3*/][1] = Global_114344.f_20568.f_33[i];
			Global_61688.f_124[i /*3*/][1] = Global_114344.f_20568.f_44[i];
			Global_61688.f_155[i /*3*/][1] = Global_114344.f_20568.f_55[i];
			Global_61688.f_186[i /*3*/][1] = Global_114344.f_20568.f_66[i];
			Global_61688.f_217[i /*3*/][1] = Global_114344.f_20568.f_77[i];
			Global_61688.f_248[i /*3*/][1] = Global_114344.f_20568.f_88[i];
		}
	}

	return;
}

void func_59(int iParam0) // Position - 0x5FAD (24493)
{
	int value;

	value = Global_61680[iParam0];

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

void func_60(int iParam0) // Position - 0x6007 (24583)
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
		func_63(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_63(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_63(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_63(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_63(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_63(8277, 0, -1, true);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_114344.f_20568.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_114344.f_20568.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_114344.f_20568.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_62() /*5571*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_114344.f_20568.f_471), iParam0);
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

char* func_61(int iParam0) // Position - 0x6181 (24961)
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

int func_62() // Position - 0x6284 (25220)
{
	int num;

	num = 0;
	return num;
}

void func_63(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x6291 (25233)
{
	Hash statName;

	if (iParam0 != 15525)
	{
		statName = func_64(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_64(int iParam0, int iParam1) // Position - 0x62BF (25279)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_65(iParam1));
}

int func_65(int iParam0) // Position - 0x62D4 (25300)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_66();
	
		if (num2 > -1)
		{
			Global_2752197 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2752197 = 1;
		}
	}

	return num;
}

int func_66() // Position - 0x6308 (25352)
{
	return Global_1574927;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x6314 (25364)
{
	if (iParam2 == -1)
		iParam2 = func_66();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_68(int iParam0) // Position - 0x6332 (25394)
{
	func_89(93, iParam0);
	func_89(29, iParam0);
	func_89(30, iParam0);
	return;
}

BOOL func_69(int iParam0) // Position - 0x6352 (25426)
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
		num = func_70(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_70(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_70(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_70(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_70(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_70(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_114344.f_20568.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_62() /*5571*/].f_681.f_10, iParam0);
}

int func_70(int iParam0, int iParam1) // Position - 0x64F2 (25842)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15525)
	{
		statHash = func_64(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x6521 (25889)
{
	if (iParam1 == -1)
		iParam1 = func_66();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_72(BOOL bParam0) // Position - 0x653D (25917)
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
		func_87(27, value);
	}

	if (value < 200000000)
		return 0;

	func_73(27, 1);
	return 1;
}

int func_73(int iParam0, int iParam1) // Position - 0x65F4 (26100)
{
	if (iParam0 >= 78)
		return 0;

	return func_74(iParam0, iParam1);
}

int func_74(int iParam0, int iParam1) // Position - 0x660F (26127)
{
	if (func_86(14) && !func_85(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_33532 != 0 && !Global_79744)
		return 0;

	if (func_84(&Global_4546910))
	{
		if (func_82(&Global_4546910, iParam0))
			return 0;
	
		if (func_75(&Global_4546910, iParam0))
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

BOOL func_75(var uParam0, int iParam1) // Position - 0x66AC (26284)
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_86(14) && !func_85(iParam1))
		return false;

	if (func_82(uParam0, iParam1))
		return false;

	if (func_81(uParam0) < 0f)
		func_80(uParam0, 0);

	func_78(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_76(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_76(var uParam0, int iParam1) // Position - 0x675D (26461)
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_86(14) && !func_85(iParam1))
		return 0;

	if (func_82(uParam0, iParam1))
		return 0;

	if (func_81(uParam0) < 0f)
		func_80(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_77(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_77(var uParam0, int iParam1) // Position - 0x67D8 (26584)
{
	return uParam0->[iParam1] == 78;
}

void func_78(var uParam0) // Position - 0x67E9 (26601)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_79(uParam0, i);
	}

	func_80(uParam0, Global_4546909 - 0.5f);
	return;
}

void func_79(var uParam0, int iParam1) // Position - 0x681D (26653)
{
	uParam0->[iParam1] = 78;
	return;
}

void func_80(var uParam0, int iParam1) // Position - 0x682D (26669)
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_81(var uParam0) // Position - 0x684A (26698)
{
	return uParam0->f_80;
}

BOOL func_82(var uParam0, int iParam1) // Position - 0x6856 (26710)
{
	return func_83(uParam0, iParam1) != -1;
}

int func_83(var uParam0, int iParam1) // Position - 0x6868 (26728)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_84(var uParam0) // Position - 0x6895 (26773)
{
	return uParam0->f_79 == 1;
}

BOOL func_85(int iParam0) // Position - 0x68A3 (26787)
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

BOOL func_86(int iParam0) // Position - 0x68F3 (26867)
{
	return Global_44375 == iParam0;
}

BOOL func_87(int iParam0, int iParam1) // Position - 0x6901 (26881)
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

void func_88(Hash hParam0, int iParam1) // Position - 0x6952 (26962)
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_89(int iParam0, int iParam1) // Position - 0x6975 (26997)
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_60248[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60248[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60248[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_60248[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_90() // Position - 0x69D2 (27090)
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61680[0] == outValue))
			Global_61680[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61680[1] == outValue))
			Global_61680[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61680[2] == outValue))
			Global_61680[2] = outValue;
	}

	return;
}

int func_91(eCharacter echParam0) // Position - 0x6A47 (27207)
{
	return Global_2241[echParam0 /*29*/].f_17;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x6A58 (27224)
{
	func_93();
	return Global_114344.f_2367.f_539.f_4321;
}

void func_93() // Position - 0x6A71 (27249)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114344.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_94(character) && !func_86(14) || Global_113292)
			{
				if (Global_114344.f_2367.f_539.f_4321 != character && func_94(Global_114344.f_2367.f_539.f_4321))
					Global_114344.f_2367.f_539.f_4322 = Global_114344.f_2367.f_539.f_4321;
			
				Global_114344.f_2367.f_539.f_4323 = character;
				Global_114344.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114344.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114344.f_2367.f_539.f_4323 = Global_114344.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114344.f_2367.f_539.f_4321 = 145;
	return;
}

BOOL func_94(eCharacter echParam0) // Position - 0x6B6E (27502)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x6B7A (27514)
{
	if (func_94(character))
		return func_96(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_96(eCharacter echParam0) // Position - 0x6B9F (27551)
{
	return Global_2241[echParam0 /*29*/];
}

void func_97(var uParam0) // Position - 0x6BAE (27566)
{
	if (uParam0->f_565 || uParam0->f_576 <= uParam0->f_562)
	{
		uParam0->f_565 = 0;
		uParam0->f_562 = uParam0->f_576 - 1;
	}

	return;
}

void func_98(var uParam0, int iParam1) // Position - 0x6BE1 (27617)
{
	if (uParam0->f_4 != 0)
		func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));

	if (uParam0->[0] != 0 || uParam0->[1] != 0 || uParam0->[2] != 0 || iParam1 == 1)
	{
		func_104(uParam0);
		func_103(uParam0);
		func_102(&Global_2101867);
	}

	if (Global_2097536.f_2708 != 0 || Global_2097536.f_3184)
		func_100();

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");

	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		_STOPWATCH_DESTROY(&(Global_2103068.f_49));

	Global_2740054.f_4102 = 0;
	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x6C8C (27788)
{
	uParam0->f_1 = 0;
	return;
}

void func_100() // Position - 0x6C99 (27801)
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
	func_101(&(Global_2097536.f_2780));
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

void func_101(int iParam0) // Position - 0x6E05 (28165)
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

void func_102(var uParam0) // Position - 0x6E5D (28253)
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

void func_103(var uParam0) // Position - 0x6F3F (28479)
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

void func_104(var uParam0) // Position - 0x6FC7 (28615)
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

void func_105(var uParam0, var uParam1, var uParam2) // Position - 0x7095 (28821)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_2097152 = false;
	_STOPWATCH_DESTROY(&(Global_2097152.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
	return;
}

void func_106() // Position - 0x70C1 (28865)
{
	var unk;

	Global_2097157 = 0;
	Global_2097157.f_1 = 0;
	Global_2097157.f_2 = 0;
	Global_2097157.f_3 = 0;
	Global_2097157.f_4 = 0;
	func_108(&(Global_2097157.f_73));
	func_108(&(Global_2097157.f_142));
	func_108(&(Global_2097157.f_211));
	func_108(&(Global_2097157.f_280));
	TEXT_LABEL_ASSIGN_STRING(&(Global_2097157.f_349), "", 24);
	TEXT_LABEL_ASSIGN_STRING(&(Global_2097157.f_355), "", 24);
	func_107(&(Global_2097157.f_361));
	Global_2097157.f_374 = -1;
	Global_2097532 = false;
	Global_2097533 = false;
	unk.f_2.f_1 = 4;
	Global_2097157.f_5 = { unk };
	return;
}

void func_107(Any* panParam0) // Position - 0x7165 (29029)
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

void func_108(Any* panParam0) // Position - 0x71AD (29101)
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

void func_109(var uParam0) // Position - 0x71E8 (29160)
{
	func_48(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
	return;
}

void func_110() // Position - 0x7212 (29202)
{
	CAM::SET_CAM_ACTIVE(caLocal_124, true);
	return;
}

int func_111(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7221 (29217)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_39(1);
			func_122(&(uParam0->f_509), false, false, true, true);
			func_121(&(uParam0->f_509), "DARTS_CONT" /*Continue*/, 2, 215, 1, 1, 0);
		
			if (!bParam2)
				func_121(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			else
				func_121(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
		
			if (bParam3 || !PLAYER::IS_PLAYER_ONLINE())
				func_121(&(uParam0->f_509), "HUD_LBD_LBD" /*Leaderboard*/, 2, 211, 1, 1, 0);
		
			func_118(&(uParam0->f_509), true);
			func_338(&(uParam0->f_666), 8, false);
			func_338(&(uParam0->f_666), 9, true);
		}
	
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_114(uParam0->f_668 < uParam0->f_669 ? uParam0->f_668 : uParam0->f_669, uParam0->f_668 < uParam0->f_669 ? &(uParam0->f_648) : &(uParam0->f_654), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
					func_114(uParam0->f_668 >= uParam0->f_669 ? uParam0->f_668 : uParam0->f_669, uParam0->f_668 >= uParam0->f_669 ? &(uParam0->f_648) : &(uParam0->f_654), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
				}
				else
				{
					func_114(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
				}
			
				func_428(&(uParam0->f_57), false, false);
			}
		
			func_124(&(uParam0->f_509), 1128792064, 1, false, true, 1065353216);
		}
	
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (MISC::GET_GAME_TIMER() - uParam0->f_671 > 900)
			{
				if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_EXPAND))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					func_338(&(uParam0->f_666), 9, false);
					return 1;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ENDSCREEN_ACCEPT))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					func_113();
					func_112();
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
			func_338(&(uParam0->f_666), 9, false);
			func_338(&(uParam0->f_666), 7, false);
		}
	}

	return 0;
}

void func_112() // Position - 0x7468 (29800)
{
	if (Global_2672964.f_2590[0 /*80*/].f_2 != 0)
		Global_2672964.f_2590[0 /*80*/].f_2 = 5;

	return;
}

void func_113() // Position - 0x748D (29837)
{
	Global_33426 = 1;
	return;
}

void func_114(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, const char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15) // Position - 0x7499 (29849)
{
	int num;
	int i;

	if (func_115(sParam6))
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
		Global_1675403.f_1 = 1;
		func_32(3, num);
		Global_1675403.f_2872[num] = uParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1675403.f_2872.f_11[num /*16*/], sParam1, 64);
		Global_1675403.f_2872.f_183[num] = iParam3;
		Global_1675403.f_2872.f_172[num] = iParam2;
		Global_1675403.f_2872.f_205[num] = iParam4;
		Global_1675403.f_2872.f_216[num] = iParam5;
		TEXT_LABEL_ASSIGN_STRING(&Global_1675403.f_2872.f_259[num /*16*/], sParam6, 64);
		Global_1675403.f_2872.f_420[num] = iParam7;
		Global_1675403.f_2872.f_453[num] = iParam8;
		Global_1675403.f_2872.f_431[num] = iParam9;
		Global_1675403.f_2872.f_442[num] = iParam10;
		Global_1675403.f_2872.f_464[num] = iParam11;
		Global_1675403.f_2872.f_475[num] = iParam12;
		Global_1675403.f_2872.f_486[num] = iParam13;
		Global_1675403.f_2872.f_497[num] = iParam14;
		Global_1675403.f_2872.f_508[num] = iParam15;
	}

	return;
}

BOOL func_115(const char* sParam0) // Position - 0x75EB (30187)
{
	if (MISC::IS_STRING_NULL(sParam0))
		return true;
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
		return true;

	return false;
}

var func_116(BOOL bParam0, var uParam1, var uParam2) // Position - 0x7625 (30245)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

var func_117(BOOL bParam0, var uParam1, var uParam2) // Position - 0x763C (30268)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_118(var uParam0, BOOL bParam1) // Position - 0x7653 (30291)
{
	if (bParam1)
		func_120(&(uParam0->f_1), 1024);
	else
		func_119(&(uParam0->f_1), 1024);

	return;
}

void func_119(var uParam0, int iParam1) // Position - 0x7679 (30329)
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_120(var uParam0, int iParam1) // Position - 0x768E (30350)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_121(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x769F (30367)
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

void func_122(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7768 (30568)
{
	if (*uParam0 == 0)
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");

	uParam0->f_1 = 0;
	uParam0->f_123 = 0;

	if (bParam1)
		func_120(&(uParam0->f_1), 32);

	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_120(&(uParam0->f_1), 1);
	
		if (bParam2)
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, true);
	}

	if (MISC::IS_PC_VERSION())
		if (bParam3)
			func_120(&(uParam0->f_1), 4096);

	if (bParam4)
		func_120(&(uParam0->f_1), 8192);

	return;
}

BOOL func_123(var uParam0) // Position - 0x77E2 (30690)
{
	if (IS_BIT_SET(uParam0->f_42, 1) && Global_2097536.f_2704[0] > 0 && uParam0->f_246.f_1 >= 0)
		return true;

	return false;
}

void func_124(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x7816 (30742)
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

	if (!func_127(uParam0))
		return;

	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);

	if (!func_126(uParam0->f_1, 256) || func_126(uParam0->f_1, 8192) && PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
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
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_126(uParam0->f_1, 4096));
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
						if (func_126(uParam0->f_1, 4096))
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
	
		value2 = bParam4 ? func_126(uParam0->f_1, 32) ? 1f : 0f : -1f;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(value2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_120(&(uParam0->f_1), 256);
		func_119(&(uParam0->f_1), 128);
	}

	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
	return;
}

var func_125(BOOL bParam0, var uParam1, var uParam2) // Position - 0x7AD0 (31440)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_126(int iParam0, int iParam1) // Position - 0x7AE7 (31463)
{
	return iParam0 && iParam1 != false;
}

BOOL func_127(var uParam0) // Position - 0x7AF6 (31478)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_120(&(uParam0->f_1), 1);
			return true;
		}
	}

	return false;
}

void func_128(var uParam0, var uParam1) // Position - 0x7B1D (31517)
{
	func_129(uParam1, uParam0);
	return;
}

void func_129(var uParam0, var uParam1) // Position - 0x7B2D (31533)
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
	func_210(&(Global_2103068.f_49), true, false);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_209();
	func_41(0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_207(true);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);
	func_206(1);
	func_205(1);

	if (!func_202())
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");

	if (!IS_BIT_SET(uParam1->f_42, 3))
	{
		*uParam0 = func_201();
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
				func_200(*uParam0, Global_2097536.f_2780);
			
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
				{
					if (!func_199(uParam1->f_44))
					{
						if (Global_2097536.f_2780.f_26 > 0)
						{
							unk5 = { Global_2097536.f_2780.f_9 };
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk21, &unk5, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk21, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else if (!Global_2097536.f_2780.f_27)
					{
						TEXT_LABEL_ASSIGN_STRING(&unk5, "FMMC_COR_SCLB5" /*Driver*/, 64);
					
						if (Global_2097536.f_2780.f_26 > 0)
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						else
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
					}
					else
					{
						TEXT_LABEL_ASSIGN_STRING(&unk5, "FMMC_COR_SCLB6" /*Co-Driver*/, 64);
					
						if (Global_2097536.f_2780.f_26 > 0)
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						else
							func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
					}
				
					func_197(*uParam0, "SCLB_C_RANK" /*POSITION*/, &(Global_2097536.f_2717), Global_2097536.f_2708);
				}
			
				address = 0;
				MISC::SET_BIT(&address, 4);
				func_196(*uParam0, &num, address, true, true);
				address = 0;
				MISC::SET_BIT(&address, 5);
				func_196(*uParam0, &num, address, true, true);
				address = 0;
				MISC::SET_BIT(&address, 6);
				func_196(*uParam0, &num, address, true, true);
				MISC::SET_BIT(&(uParam1->f_42), 1);
				func_195(*uParam0);
				MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				HUD::CLEAR_HELP(true);
			}
			else
			{
				func_195(*uParam0);
			}
		}
		else
		{
			if (Global_2097536.f_2829 != 1)
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_2097536.f_2829 = 1;
			}
		
			if (!func_158(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
			
				if (!IS_BIT_SET(uParam1->f_42, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_200(*uParam0, Global_2097536.f_2780);
				
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_199(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								unk5 = { Global_2097536.f_2780.f_9 };
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk21, &unk5, true, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk21, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							TEXT_LABEL_ASSIGN_STRING(&unk5, "FMMC_COR_SCLB5" /*Driver*/, 64);
						
							if (Global_2097536.f_2780.f_26 > 0)
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							else
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&unk5, "FMMC_COR_SCLB6" /*Co-Driver*/, 64);
						
							if (Global_2097536.f_2780.f_26 > 0)
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							else
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					
						func_197(*uParam0, "SCLB_C_RANK" /*POSITION*/, &(Global_2097536.f_2717), Global_2097536.f_2708);
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
							func_196(*uParam0, &num, address, false, false);
						}
						else if (i == 1)
						{
							address = 0;
							MISC::SET_BIT(&address, 5);
							func_196(*uParam0, &num, address, false, false);
						}
						else if (i == 2)
						{
							address = 0;
							MISC::SET_BIT(&address, 6);
							func_196(*uParam0, &num, address, false, false);
						}
					
						address = 0;
						MISC::SET_BIT(&address, 7);
						func_157(*uParam0, num, address, &unk45);
						num = num + 1;
					}
				
					Global_2097536.f_2825 = 1;
					_STOPWATCH_DESTROY(&(Global_2097536.f_2823));
				}
				else if (func_155(&(Global_2097536.f_2823), 300, false))
				{
					TEXT_LABEL_ASSIGN_STRING(&unk51, "SC_LB_DL", 24);
					TEXT_LABEL_APPEND_INT(&unk51, Global_2097536.f_2825, 24);
				
					for (i = 0; i < 3; i = i + 1)
					{
						if (i == 0)
						{
							address = 0;
							MISC::SET_BIT(&address, 4);
							func_196(*uParam0, &num, address, false, false);
						}
						else if (i == 1)
						{
							address = 0;
							MISC::SET_BIT(&address, 5);
							func_196(*uParam0, &num, address, false, false);
						}
						else if (i == 2)
						{
							address = 0;
							MISC::SET_BIT(&address, 6);
							func_196(*uParam0, &num, address, false, false);
						}
					
						address = 0;
						MISC::SET_BIT(&address, 7);
						func_157(*uParam0, num, address, &unk51);
						num = num + 1;
					}
				
					Global_2097536.f_2825 = Global_2097536.f_2825 + 1;
				
					if (Global_2097536.f_2825 > 3)
						Global_2097536.f_2825 = 0;
				
					_STOPWATCH_DESTROY(&(Global_2097536.f_2823));
				}
			
				func_195(*uParam0);
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
					func_200(*uParam0, Global_2097536.f_2780);
				
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!func_199(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								unk5 = { Global_2097536.f_2780.f_9 };
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk21, &unk5, true, Global_2097536.f_2780.f_26);
							}
							else
							{
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk21, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							TEXT_LABEL_ASSIGN_STRING(&unk5, "FMMC_COR_SCLB5" /*Driver*/, 64);
						
							if (Global_2097536.f_2780.f_26 > 0)
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							else
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&unk5, "FMMC_COR_SCLB6" /*Co-Driver*/, 64);
						
							if (Global_2097536.f_2780.f_26 > 0)
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							else
								func_198(*uParam0, &(Global_2097536.f_2780.f_1), &unk5, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					
						func_197(*uParam0, "SCLB_C_RANK" /*POSITION*/, &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
				
					if (!IS_BIT_SET(uParam1->f_42, 6))
					{
						func_102(&Global_2101867);
						func_151(uParam1, &Global_2101867);
						func_150(uParam1, &Global_2101867);
					}
				
					num = 0;
					uParam1->f_246.f_2 = 0;
				
					if (Global_2097536.f_2704[0] > 1 || Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] != -1 || Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27 && func_199(uParam1->f_44) && Global_2097536.f_2775[0] != -1)
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
									func_196(*uParam0, &num, address, false, false);
									unk23[0] = 1;
								}
							}
							else if (Global_2101867[i /*100*/].f_75 == 2)
							{
								if (!unk23[1])
								{
									address = 0;
									MISC::SET_BIT(&address, 5);
								
									if (Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1] == -1 && !(Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27 && func_199(uParam1->f_44) && Global_2097536.f_2775[1] != -1))
									{
										func_196(*uParam0, &num, address, true, false);
										flag3 = true;
									}
									else
									{
										func_196(*uParam0, &num, address, false, false);
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
								
									if (Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2] == -1 && !(Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27 && func_199(uParam1->f_44) && Global_2097536.f_2775[2] != -1))
										flag3 = true;
								
									if (flag3)
										func_196(*uParam0, &num, address, true, false);
									else
										func_196(*uParam0, &num, address, false, false);
								
									unk23[2] = 1;
								}
							}
						
							if (IS_GAMER_HANDLE_VALID(Global_2101867[i /*100*/].f_32))
							{
								if (func_199(uParam1->f_44))
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
										if (func_148(&(Global_2101867[i /*100*/].f_32), &unk27))
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
								
									if (func_199(uParam1->f_44))
									{
										unk5 = { Global_2101867[i /*100*/] };
									
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2101867[i /*100*/].f_84)) && !MISC::ARE_STRINGS_EQUAL(&(Global_2101867[i /*100*/].f_84), ""))
										{
											TEXT_LABEL_APPEND_STRING(&unk5, "/", 64);
											TEXT_LABEL_APPEND_STRING(&unk5, &(Global_2101867[i /*100*/].f_84), 64);
										}
									
										func_147(*uParam0, num, address, Global_2101867[i /*100*/].f_59, &unk5, &(Global_2101867[i /*100*/].f_80));
										uParam1->f_246.f_6[i /*15*/] = num;
										uParam1->f_246.f_6[i /*15*/].f_1 = address;
										uParam1->f_246.f_6[i /*15*/].f_2 = { Global_2101867[i /*100*/].f_32 };
										uParam1->f_246.f_2 = uParam1->f_246.f_2 + 1;
									}
									else
									{
										func_147(*uParam0, num, address, Global_2101867[i /*100*/].f_59, &Global_2101867[i /*100*/], &(Global_2101867[i /*100*/].f_80));
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
												func_138(Global_2097536.f_2780, j, Global_2101867[i /*100*/].f_67[j], false, Global_2101867[i /*100*/].f_58);
											else
												func_138(Global_2097536.f_2780, j, Global_2101867[i /*100*/].f_67[j], Global_2101867[i /*100*/].f_74, Global_2101867[i /*100*/].f_58);
										}
										else
										{
											if (IS_BIT_SET(Global_2097536.f_2768, j))
												if (Global_2097536.f_2761[j] == Global_2101867[i /*100*/].f_67[j])
													flag2 = true;
										
											if (flag2)
												func_135(Global_2097536.f_2780, j, Global_2101867[i /*100*/].f_60[j], false);
											else
												func_135(Global_2097536.f_2780, j, Global_2101867[i /*100*/].f_60[j], Global_2101867[i /*100*/].f_74);
										}
									}
								
									func_134();
									unk[Global_2101867[i /*100*/].f_75 - 1] = unk[Global_2101867[i /*100*/].f_75 - 1] + 1;
								
									if (unk[Global_2101867[i /*100*/].f_75 - 1] == 2)
									{
										if (Global_2101867[i /*100*/].f_59 > 2)
										{
											MISC::SET_BIT(&address, 2);
											MISC::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_133(*uParam0, num - 1, address);
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
						func_196(*uParam0, &num, address, true, false);
						address = 0;
						MISC::SET_BIT(&address, 5);
						func_196(*uParam0, &num, address, true, false);
						address = 0;
						MISC::SET_BIT(&address, 6);
						func_196(*uParam0, &num, address, true, false);
					}
				
					MISC::SET_BIT(&(uParam1->f_42), 1);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
					func_195(*uParam0);
					HUD::CLEAR_HELP(true);
				
					if (uParam1->f_246.f_1 == -1 && !flag == true)
					{
						if (Global_2097536.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_133(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_195(*uParam0);
					func_130(uParam0, uParam1);
				}
			}
		}
	}

	return;
}

void func_130(var uParam0, var uParam1) // Position - 0x8AF4 (35572)
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
		func_132(&unk2, &num4, &unk3, &unk4, false);

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
		else if (func_131(uParam1, INPUT_FRONTEND_UP))
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
		else if (func_131(uParam1, INPUT_FRONTEND_DOWN))
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
	else if (func_131(uParam1, INPUT_FRONTEND_Y))
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
				func_133(*uParam0, uParam1->f_246.f_6[num /*15*/], uParam1->f_246.f_6[num /*15*/].f_1);
			}
		
			MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_133(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
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

BOOL func_131(var uParam0, eControlAction ecaParam1) // Position - 0x8E8A (36490)
{
	var unk;
	int num;
	var unk2;
	var unk3;

	if (ecaParam1 == INPUT_FRONTEND_UP || ecaParam1 == INPUT_FRONTEND_DOWN)
	{
		func_132(&unk, &num, &unk2, &unk3, false);
	
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, ecaParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, ecaParam1) && num < 75 && num > -75 || func_155(&(uParam0->f_246.f_3), 250, false))
			return true;
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, ecaParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, ecaParam1) || func_155(&(uParam0->f_246.f_3), 250, false))
	{
		return true;
	}

	return false;
}

void func_132(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x8F29 (36649)
{
	*uParam0 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	*uParam1 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	*uParam2 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	*uParam3 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);

	if (bParam4)
	{
		if ((float)*uParam0 == 0f && (float)*uParam1 == 0f)
		{
			*uParam0 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
			*uParam1 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
		}
	
		if ((float)*uParam2 == 0f && (float)*uParam3 == 0f)
		{
			*uParam2 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
			*uParam3 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);
		}
	}

	return;
}

void func_133(int iParam0, int iParam1, int iParam2) // Position - 0x8FFE (36862)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_134() // Position - 0x9021 (36897)
{
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_135(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, BOOL bParam45) // Position - 0x902D (36909)
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
				HUD::ADD_TEXT_COMPONENT_INTEGER(BUILTIN::FLOOR(fParam44));
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
						fParam44 = func_137(fParam44);
					else
						fParam44 = func_136(fParam44);
			
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

float func_136(float fParam0) // Position - 0x914F (37199)
{
	return fParam0 / 0.3048f;
}

float func_137(float fParam0) // Position - 0x915F (37215)
{
	return fParam0 / 1609.344f;
}

void func_138(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, Hash hParam44, BOOL bParam45, BOOL bParam46) // Position - 0x916F (37231)
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
			if (func_146(hParam44) != 0)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_143(func_146(hParam44), false));
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
						hParam44 = BUILTIN::FLOOR(func_137(BUILTIN::TO_FLOAT(hParam44)));
					else
						hParam44 = BUILTIN::FLOOR(func_136(BUILTIN::TO_FLOAT(hParam44)));
			
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
				componentType = { func_142(hParam44) };
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&componentType);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
	
		case 22:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /*~1~*/);
				HUD::ADD_TEXT_COMPONENT_INTEGER(func_139(hParam44));
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

int func_139(Hash hParam0) // Position - 0x9577 (38263)
{
	Hash value;
	float num;
	int num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;

	value = func_141(199);

	if (hParam0 < 100)
	{
		return 1;
	}
	else if (hParam0 > value)
	{
		num = BUILTIN::TO_FLOAT(hParam0) - BUILTIN::TO_FLOAT(value);
		num2 = BUILTIN::FLOOR(num / BUILTIN::TO_FLOAT(Global_262145.f_30384));
		return 199 + num2;
	}

	num3 = BUILTIN::TO_FLOAT(Global_262145.f_30383) / 2f;
	num4 = -(num3 * 3f) + num3;
	num5 = num3;
	num6 = -(num3 * 3f) + num4 + 100f;
	num7 = (-3f * num4) - 100f;
	num7 = (float)hParam0 - num7;
	return BUILTIN::FLOOR(func_140(-num5, -num6, num7, true));
}

float func_140(float fParam0, float fParam1, float fParam2, BOOL bParam3) // Position - 0x961D (38429)
{
	if (bParam3)
		return (-fParam1 - BUILTIN::SQRT((fParam1 * fParam1) - (4f * fParam0 * fParam2))) / (2f * fParam0);

	return (-fParam1 + BUILTIN::SQRT((fParam1 * fParam1) - (4f * fParam0 * fParam2))) / (2f * fParam0);
}

int func_141(int iParam0) // Position - 0x9661 (38497)
{
	float num;
	float num2;

	num = BUILTIN::TO_FLOAT(iParam0);
	num2 = BUILTIN::TO_FLOAT(Global_262145.f_30383) / 2f;
	return BUILTIN::ROUND(((num * 100f) - 100f) + ((num - 3f) * ((num2 * (num - 3f)) + num2)));
}

struct<4> func_142(Hash hParam0) // Position - 0x96A2 (38562)
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

char* func_143(int iParam0, BOOL bParam1) // Position - 0x96DB (38619)
{
	var unk;

	if (iParam0 == joaat("VEHICLE_WEAPON_BARRAGE_TOP_MG"))
		return "WTU_VEH_BRGE_TT";
	else if (iParam0 == joaat("VEHICLE_WEAPON_CARACARA_MG"))
		return "WTU_VEH_CRAC_TT";

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
	
		case joaat("WEAPON_BRIEFCASE"):
			if (bParam1)
				return "FMMC_WT_BRIEF";
			else
				return "FMMC_WT_BRIEF";
			break;
	
		default:
			if (func_145(iParam0, &unk) != -1)
				if (bParam1)
					return func_144(&(unk.f_31));
				else
					return func_144(&(unk.f_7));
			break;
	}

	return "WT_INVALID" /*Invalid*/;
}

char* func_144(var uParam0) // Position - 0xA6E0 (42720)
{
	return uParam0;
}

int func_145(int iParam0, Any* panParam1) // Position - 0xA6EA (42730)
{
	int i;
	int numDlcWeapons;

	numDlcWeapons = EXTRAMETADATA::GET_NUM_DLC_WEAPONS();

	for (i = 0; i < numDlcWeapons; i = i + 1)
	{
		if (EXTRAMETADATA::GET_DLC_WEAPON_DATA(i, panParam1))
			if (panParam1->f_1 == iParam0)
				return i;
	}

	return -1;
}

int func_146(Hash hParam0) // Position - 0xA725 (42789)
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

void func_147(int iParam0, int iParam1, int iParam2, int iParam3, const char* sParam4, const char* sParam5) // Position - 0xA898 (43160)
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

BOOL func_148(Any* panParam0, Any* panParam1) // Position - 0xA8EA (43242)
{
	if (!IS_GAMER_HANDLE_VALID(*panParam0))
		return false;

	if (!IS_GAMER_HANDLE_VALID(*panParam1))
		return false;

	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(panParam0, panParam1))
		return true;

	return false;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0xA924 (43300)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_150(var uParam0, var uParam1) // Position - 0xA934 (43316)
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

void func_151(var uParam0, var uParam1) // Position - 0xAA9F (43679)
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
			if (func_154(uParam1, num, &unk, 0))
			{
				uParam1->[num /*100*/].f_75 = 1;
				num = num + 1;
			
				if (num >= 12)
					return;
			}
		
			if (func_154(uParam1, num, &unk2, 1))
			{
				uParam1->[num /*100*/].f_75 = 2;
				num = num + 1;
			
				if (num >= 12)
					return;
			}
		
			if (func_154(uParam1, num, &unk3, 2))
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
		func_152(uParam1);
	}

	return;
}

void func_152(var uParam0) // Position - 0xAB4E (43854)
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
				func_153(&Global_2101737);
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
				
					if (func_148(&(uParam0->[i /*100*/].f_32), &unk))
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

void func_153(int iParam0) // Position - 0xAD5F (44383)
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

BOOL func_154(var uParam0, int iParam1, var uParam2, int iParam3) // Position - 0xADD5 (44501)
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
		num = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(*uParam2 / 2));
	
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

BOOL func_155(var uParam0, int iParam1, BOOL bParam2) // Position - 0xB07E (45182)
{
	if (iParam1 == -1)
		return true;

	func_156(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

void func_156(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB0DC (45276)
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

void func_157(int iParam0, int iParam1, int iParam2, const char* sParam3) // Position - 0xB121 (45345)
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

BOOL func_158(var uParam0) // Position - 0xB155 (45397)
{
	if (!Global_2097532)
	{
		if (!_STOPWATCH_IS_INITIALIZED(&(Global_2097536.f_2827)))
		{
			func_156(&(Global_2097536.f_2827), true, false);
			return false;
		}
		else if (!func_155(&(Global_2097536.f_2827), 1000, true))
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
		func_193(uParam0);
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

	if (!func_191(uParam0))
		return false;

	if (!func_189(uParam0))
		return false;

	if (!func_176(uParam0))
		return false;

	if (!IS_BIT_SET(uParam0->f_42, 6))
	{
		func_102(&Global_2101867);
		func_151(uParam0, &Global_2101867);
		func_150(uParam0, &Global_2101867);
		MISC::SET_BIT(&(uParam0->f_42), 6);
	}

	if (!IS_BIT_SET(uParam0->f_42, 7))
	{
		if (!_STOPWATCH_IS_INITIALIZED(&(Global_2097536.f_2830)))
			func_156(&(Global_2097536.f_2830), true, false);
		else if (func_155(&(Global_2097536.f_2830), 30000, true))
			MISC::SET_BIT(&(uParam0->f_42), 7);
	
		if (func_173(&Global_2101867))
		{
		}
		else
		{
			return false;
		}
	
		if (func_170(&Global_2101867))
		{
		}
		else
		{
			return false;
		}
	
		if (func_163(&Global_2101867))
		{
			func_159(&Global_2101867);
			MISC::SET_BIT(&(uParam0->f_42), 7);
			func_159(&Global_2101867);
		}
		else
		{
			return false;
		}
	}

	return true;
}

void func_159(var uParam0) // Position - 0xB30E (45838)
{
	int i;
	int j;
	int num;

	num = func_162(Global_2097536.f_2826);

	if (Global_2100721.f_81[num] != 0)
		func_161(-1, num);

	for (i = 0; i < 12; i = i + 1)
	{
		func_153(&Global_2101737);
	
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

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0xB4F5 (46325)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_161(int iParam0, int iParam1) // Position - 0xB508 (46344)
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

int func_162(int iParam0) // Position - 0xB584 (46468)
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

BOOL func_163(var uParam0) // Position - 0xB617 (46615)
{
	int i;
	int j;

	switch (uParam0->[0 /*100*/].f_76)
	{
		case 0:
			func_169(uParam0);
		
			if (func_168() || func_167() || MISC::_IS_XBOXPC_VERSION() && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				uParam0->[0 /*100*/].f_76 = 3;
				return false;
			}
		
			for (i = 0; i < 12; i = i + 1)
			{
				if (IS_GAMER_HANDLE_VALID(uParam0->[i /*100*/].f_32))
				{
					if (!func_166(&(uParam0->[i /*100*/].f_32), &Global_2103169))
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
			if (func_164(&(uParam0->[1 /*100*/].f_76), &(Global_2103169.f_206), &Global_2103169, &(Global_2103169.f_157)))
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

BOOL func_164(var uParam0, int iParam1, Any* panParam2, var uParam3) // Position - 0xB7CE (47054)
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
					func_165(&unk, &uParam3->[i /*4*/]);
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

void func_165(Any* panParam0, char* sParam1) // Position - 0xB887 (47239)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(panParam0, 35, sParam1);
	return;
}

BOOL func_166(Any* panParam0, Any* panParam1) // Position - 0xB899 (47257)
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

BOOL func_167() // Position - 0xB8D8 (47320)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_168() // Position - 0xB8EE (47342)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_169(var uParam0) // Position - 0xB904 (47364)
{
	int i;

	for (i = 0; i < 12; i = i + 1)
	{
		func_107(&Global_2103169[i /*13*/]);
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

BOOL func_170(var uParam0) // Position - 0xB975 (47477)
{
	int i;

	if (MISC::IS_PC_VERSION())
	{
		return true;
	}
	else if (func_167() || func_168())
	{
		if (!func_172(uParam0))
			return false;
	}
	else
	{
		for (i = 0; i < 12; i = i + 1)
		{
			if (!func_171(&(uParam0->[i /*100*/].f_78), &(uParam0->[i /*100*/].f_32), &uParam0->[i /*100*/]))
				return false;
		}
	}

	return true;
}

BOOL func_171(var uParam0, Any* panParam1, char* sParam2) // Position - 0xB9E3 (47587)
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
					if (func_167() || func_168())
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
						else if (func_168())
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

BOOL func_172(var uParam0) // Position - 0xBAF4 (47860)
{
	int displaynamesFromHandles;
	int i;
	int num;

	if (!func_167() && !func_168())
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
				func_107(&Global_2097536.f_3026[i /*13*/]);
			
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

BOOL func_173(var uParam0) // Position - 0xBC8A (48266)
{
	int i;

	if (func_167() || func_168())
	{
		for (i = 0; i < 12; i = i + 1)
		{
			if (!func_175(&(uParam0->[i /*100*/].f_77), &(uParam0->[i /*100*/].f_16), &(uParam0->[i /*100*/].f_84), &(Global_2097536.f_2833), &(uParam0->[i /*100*/].f_79)))
				return false;
		}
	}
	else
	{
		for (i = 0; i < 12; i = i + 1)
		{
			if (!func_174(&(uParam0->[i /*100*/].f_77), uParam0->[i /*100*/].f_16, &(uParam0->[i /*100*/].f_84)))
				return false;
		}
	}

	return true;
}

BOOL func_174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17) // Position - 0xBD27 (48423)
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
					if (MISC::IS_XBOX360_VERSION() || func_167() || func_168())
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
						else if (func_168())
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

BOOL func_175(var uParam0, const char* sParam1, char* sParam2, Any anParam3, var uParam4) // Position - 0xBE49 (48713)
{
	int displaynamesFromHandles;
	var unk;

	if (!func_167() && !func_168())
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

BOOL func_176(var uParam0) // Position - 0xBF4F (48975)
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
		
			if (func_187(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &gamerHandle, func_188(), false, 0, 0))
			{
				func_186(&unk99, &(uParam0->f_44));
			
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&unk99))
				{
					if (unk99.f_3 > 0)
					{
						k = 0;
						i = 0;
					
						if (func_188())
						{
							for (k = 0; k < unk99.f_3; k = k + 1)
							{
								STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(k, &unk);
							
								if (Global_2097157.f_374 < 0)
									if (func_148(&unk, &gamerHandle) || func_148(&unk, &(Global_2097157.f_361)))
										Global_2097157.f_374 = unk.f_96;
							
								if (num < 0)
									if (IS_BIT_SET(Global_2097157.f_142.f_2, 0))
										if (Global_2097157.f_211.f_36[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(k, 0))
											num = k;
									else if (Global_2097157.f_211.f_3[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(k, 0))
										num = k;
							
								func_185(&unk);
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
								if (func_188() && num == 0)
								{
									func_184(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], unk.f_96);
									Global_2097536.f_2775[offset] = 0;
									Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
								}
							
								if (func_188() && func_148(&unk, &gamerHandle) || func_148(&unk, &(Global_2097157.f_361)))
								{
								}
								else
								{
									if (func_148(&unk, &gamerHandle))
									{
										num = 0;
										Global_2097536.f_2775[offset] = 0;
									}
								
									TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], { unk.f_13 }, 16);
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_32 = { unk };
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_59 = unk.f_96;
								
									if (func_183(uParam0->f_44))
									{
										rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
									
										if (rowDataInt == 1)
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 1;
										else
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 0;
									}
								
									if (func_199(uParam0->f_44))
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
					
						if (!func_188())
							num = unk99.f_5;
					
						if (num > 6)
							num2 = num - 6;
						else if (flag)
							num2 = 1;
						else
							num2 = 0;
					
						k = num2;
						func_185(&unk);
					
						for (k = num2; k <= unk99.f_3 - 1; k = k + 1)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(k, &unk);
						
							if (Global_2097536.f_2704[offset] < 11 && unk.f_96 > 1)
							{
								if (func_188() && num == k)
								{
									if (!func_148(&(Global_2097536[offset /*901*/][0 /*75*/].f_32), &gamerHandle))
									{
										func_184(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], unk.f_96);
										Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
										Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
									}
								}
							
								if (func_188() && func_148(&unk, &gamerHandle) || func_148(&unk, &(Global_2097157.f_361)))
								{
								}
								else if (Global_2097536.f_2704[offset] < 11)
								{
									if (IS_GAMER_HANDLE_VALID(unk) && !func_148(&unk, &(Global_2097536[offset /*901*/][0 /*75*/].f_32)))
									{
										if (func_148(&unk, &gamerHandle))
											if (Global_2097536.f_2775[offset] < 0)
												Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
									
										TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], { unk.f_13 }, 16);
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_32 = { unk };
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_59 = unk.f_96;
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_74 = 1;
									
										if (func_183(uParam0->f_44))
										{
											rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(k, Global_2097536.f_2709);
										
											if (rowDataInt == 1)
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 1;
											else
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 0;
										}
									
										if (func_199(uParam0->f_44))
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
						
							func_185(&unk);
						}
					
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					
						if (flag)
						{
							if (Global_2097536.f_2775[offset] == -1 && func_188())
							{
								if (Global_2097536.f_2704[offset] >= 1)
									func_184(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] - 1 /*75*/].f_59 + 1);
								else
									func_184(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], 1);
							
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
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[offset] = -1;
						uParam0->[offset] = 2;
					}
				}
				else
				{
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
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
		
			if (func_178(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, num3))
			{
				func_186(&unk99, &(uParam0->f_44));
			
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
								if (func_188() && func_148(&unk, &gamerHandle) || func_148(&unk, &(Global_2097157.f_361)))
								{
								}
								else if (i == 0 || flag2)
								{
									TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][0 /*75*/], { unk.f_13 }, 16);
									Global_2097536[offset /*901*/][0 /*75*/].f_32 = { unk };
									Global_2097536[offset /*901*/][0 /*75*/].f_59 = unk.f_96;
								
									if (func_183(uParam0->f_44))
									{
										rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
									
										if (rowDataInt == 1)
											Global_2097536[offset /*901*/][0 /*75*/].f_58 = 1;
										else
											Global_2097536[offset /*901*/][0 /*75*/].f_58 = 0;
									}
								
									if (func_199(uParam0->f_44))
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
								
									if (func_183(uParam0->f_44))
									{
										rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(i, Global_2097536.f_2709);
									
										if (rowDataInt == 1)
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 1;
										else
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 0;
									}
								
									if (func_199(uParam0->f_44))
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
						
							func_185(&unk);
						}
					}
				
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					uParam0->[offset] = 3;
				}
				else
				{
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					MISC::SET_BIT(&(Global_2097536.f_2832), offset);
					Global_2097536.f_2704[offset] = 0;
					uParam0->[offset] = 3;
				}
			
				if (Global_2097536.f_2775[offset] == -1 && func_188())
				{
					if (Global_2097536.f_2704[offset] >= 1)
						func_184(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] - 1 /*75*/].f_59 + 1);
					else
						func_184(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], 1);
				
					Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
					Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
				}
			}
			break;
	
		case 3:
			func_177(offset, Global_2097157.f_374);
			uParam0->[offset] = 4;
			break;
	
		case 4:
			return true;
	}

	return false;
}

void func_177(int iParam0, int iParam1) // Position - 0xCD75 (52597)
{
	int i;

	if (func_188() && Global_2097536.f_2704[iParam0] > Global_2097536.f_2775[iParam0] && Global_2097536.f_2775[iParam0] >= 0)
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
		!func_188();
		Global_2097536.f_2704[iParam0] <= Global_2097536.f_2775[iParam0];
		Global_2097536.f_2775[iParam0] < 0;
	}

	return;
}

BOOL func_178(var uParam0, var uParam1, Any* panParam2, int iParam3, int iParam4) // Position - 0xCE9A (52890)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_181() && !func_180())
			{
				func_179(*panParam2);
			
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

void func_179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) // Position - 0xCF50 (53072)
{
	Global_2097152 = true;
	func_210(&(Global_2097152.f_1), true, false);
	Global_2097152.f_3 = uParam0;
	Global_2097152.f_4 = uParam0.f_1;
	return;
}

BOOL func_180() // Position - 0xCF7B (53115)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_202())
		return true;

	return false;
}

BOOL func_181() // Position - 0xCF99 (53145)
{
	if (STATS::LEADERBOARDS_READ_ANY_PENDING() || Global_2097152)
	{
		func_182();
		return true;
	}

	return false;
}

void func_182() // Position - 0xCFBB (53179)
{
	if (func_155(&(Global_2097152.f_1), 120000, true))
	{
		STATS::LEADERBOARDS_READ_CLEAR(Global_2097152.f_3, Global_2097152.f_4, -1);
		Global_2097152 = false;
		_STOPWATCH_DESTROY(&(Global_2097152.f_1));
	}

	return;
}

BOOL func_183(int iParam0) // Position - 0xCFF6 (53238)
{
	if (iParam0 == 815 || iParam0 == 824 || iParam0 == 825 || iParam0 == 826 || iParam0 == 827 || iParam0 == 828 || iParam0 == 849)
		return true;

	return false;
}

void func_184(var uParam0, char* sParam1, int iParam2) // Position - 0xD054 (53332)
{
	int num;
	int i;

	if (func_199(uParam0->f_44))
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

	if (func_183(uParam0->f_44))
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

void func_185(var uParam0) // Position - 0xD15E (53598)
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

void func_186(var uParam0, var uParam1) // Position - 0xD20C (53772)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
	return;
}

BOOL func_187(var uParam0, var uParam1, Any* panParam2, int iParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7, int iParam8) // Position - 0xD227 (53799)
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
			if (!func_181() && !func_180())
			{
				func_179(*panParam2);
			
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

BOOL func_188() // Position - 0xD35C (54108)
{
	if (Global_2097532 && Global_2097533)
		return true;

	return false;
}

BOOL func_189(var uParam0) // Position - 0xD379 (54137)
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
				if (func_188())
					flag = false;
				else
					flag = true;
			
				if (func_190(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], flag, 0, 100))
				{
					func_186(&unk99, &(uParam0->f_44));
				
					if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&unk99))
					{
						if (func_188())
						{
							j = 0;
						
							for (j = 0; j < unk99.f_3; j = j + 1)
							{
								if (num < 0)
								{
									STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(j, &unk);
								
									if (func_199(uParam0->f_44))
										if (Global_2097157.f_374 < 0)
											if (func_148(&unk, &(Global_2097157.f_361)))
												Global_2097157.f_374 = unk.f_96;
								
									if (IS_BIT_SET(Global_2097157.f_142.f_2, 0))
										if (Global_2097157.f_211.f_36[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(j, 0))
											num = j;
									else if (Global_2097157.f_211.f_3[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(j, 0))
										num = j;
								
									func_185(&unk);
								}
							}
						
							if (num < 0)
								num = unk99.f_3;
						}
					
						j = 0;
					
						if (func_188() && num == 0)
						{
							if (Global_2097536.f_2704[num3] < 11)
							{
								func_184(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], 1);
								Global_2097536.f_2775[num3] = 0;
								Global_2097536.f_2704[num3] = Global_2097536.f_2704[num3] + 1;
							}
						}
					
						if (unk99.f_3 > 0)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &unk);
						
							if (func_188() && func_148(&unk, &unk107) || func_148(&unk, &(Global_2097157.f_361)))
							{
							}
							else if (IS_GAMER_HANDLE_VALID(unk) && Global_2097536.f_2704[num3] < 11)
							{
								if (func_148(&unk, &unk107))
								{
									num = 0;
									Global_2097536.f_2775[1] = 0;
								}
							
								TEXT_LABEL_COPY(&Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/], { unk.f_13 }, 16);
								Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/].f_32 = { unk };
								Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/].f_59 = 1;
							
								if (func_183(uParam0->f_44))
								{
									rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
								
									if (rowDataInt == 1)
										Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/].f_58 = 1;
									else
										Global_2097536[1 /*901*/][Global_2097536.f_2704[num3] /*75*/].f_58 = 0;
								}
							
								if (func_199(uParam0->f_44))
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
								func_185(&unk);
								STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
								func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_2097536.f_2704[1] = 0;
								uParam0->[1] = 1;
							
								if (Global_2097536.f_2775[num3] == -1 && func_188())
								{
									if (Global_2097536.f_2704[num3] >= 1)
										func_184(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] - 1 /*75*/].f_59 + 1);
									else
										func_184(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], 1);
								
									Global_2097536.f_2775[num3] = Global_2097536.f_2704[num3];
									Global_2097536.f_2704[num3] = Global_2097536.f_2704[num3] + 1;
								}
							
								return false;
							}
						
							func_185(&unk);
						}
						else
						{
							Global_2097536.f_2704[1] = 0;
							func_185(&unk);
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
							func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						
							if (Global_2097536.f_2775[num3] == -1 && func_188())
							{
								if (Global_2097536.f_2704[num3] >= 1)
									func_184(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] - 1 /*75*/].f_59 + 1);
								else
									func_184(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], 1);
							
								Global_2097536.f_2775[num3] = Global_2097536.f_2704[num3];
								Global_2097536.f_2704[num3] = Global_2097536.f_2704[num3] + 1;
							}
						
							uParam0->[1] = 1;
							return false;
						}
					
						if (!func_188())
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
								if (func_188() && num == j)
								{
									if (!func_148(&(Global_2097536[num3 /*901*/][0 /*75*/].f_32), &unk107))
									{
										func_184(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], unk.f_96);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = j + 1;
										Global_2097536.f_2775[num3] = Global_2097536.f_2704[num3];
										Global_2097536.f_2704[num3] = Global_2097536.f_2704[num3] + 1;
									}
								}
							
								if (func_188() && func_148(&unk, &unk107) || func_148(&unk, &(Global_2097157.f_361)))
								{
								}
								else if (Global_2097536.f_2704[1] < 12)
								{
									if (IS_GAMER_HANDLE_VALID(unk) && !func_148(&unk, &(Global_2097536[num3 /*901*/][0 /*75*/].f_32)))
									{
										if (func_148(&unk, &unk107))
											if (Global_2097536.f_2775[1] < 0)
												Global_2097536.f_2775[1] = Global_2097536.f_2704[1];
									
										TEXT_LABEL_COPY(&Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/], { unk.f_13 }, 16);
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_32 = { unk };
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59 = j + 1;
										Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_74 = 1;
									
										if (func_183(uParam0->f_44))
										{
											rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(j, Global_2097536.f_2709);
										
											if (rowDataInt == 1)
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 1;
											else
												Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58 = 0;
										}
									
										if (func_199(uParam0->f_44))
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
						
							func_185(&unk);
						}
					
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						uParam0->[1] = 1;
					
						if (Global_2097536.f_2775[num3] == -1 && func_188())
						{
							if (Global_2097536.f_2704[num3] >= 1)
								func_184(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] - 1 /*75*/].f_59 + 1);
							else
								func_184(uParam0, &Global_2097536[num3 /*901*/][Global_2097536.f_2704[num3] /*75*/], 1);
						
							Global_2097536.f_2775[num3] = Global_2097536.f_2704[num3];
							Global_2097536.f_2704[num3] = Global_2097536.f_2704[num3] + 1;
						}
					
						return false;
					}
					else
					{
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2704[1] = 0;
						uParam0->[1] = 1;
						MISC::SET_BIT(&(Global_2097536.f_2832), 1);
						return false;
					}
				}
			}
			else
			{
				func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_2097536.f_2704[1] = 0;
				uParam0->[1] = 1;
				return false;
			}
			break;
	
		case 1:
			func_177(num3, Global_2097157.f_374);
			uParam0->[1] = 2;
			break;
	
		case 2:
			return true;
	}

	return false;
}

BOOL func_190(var uParam0, var uParam1, Any* panParam2, Any* panParam3, Any anParam4, BOOL bParam5, int iParam6, int iParam7) // Position - 0xDD73 (56691)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_181() && !func_180())
			{
				func_179(*panParam2);
			
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

BOOL func_191(var uParam0) // Position - 0xDE2F (56879)
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
		
			if (func_192(uParam0->f_44))
				if (!Global_2097533)
					Global_2097533 = true;
			else if (Global_2097533)
				Global_2097533 = false;
		
			!Global_2097533;
		
			if (func_187(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &unk, func_188(), false, 0, 0))
			{
				func_186(&unk112, &(uParam0->f_44));
			
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&unk112))
				{
					if (unk112.f_3 > 0)
					{
						k = 0;
						i = 0;
					
						if (func_188())
						{
							for (k = 0; k < unk112.f_3; k = k + 1)
							{
								STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(k, &unk14);
							
								if (Global_2097157.f_374 < 0)
									if (func_148(&unk14, &unk) || func_148(&unk14, &(Global_2097157.f_361)))
										Global_2097157.f_374 = unk14.f_96;
							
								if (num < 0)
									if (IS_BIT_SET(Global_2097157.f_142.f_2, 0))
										if (Global_2097157.f_211.f_36[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(k, 0))
											num = k;
									else if (Global_2097157.f_211.f_3[0] >= STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(k, 0))
										num = k;
							
								func_185(&unk14);
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
								if (func_188() && num == 0)
								{
									func_184(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], unk14.f_96);
									Global_2097536.f_2775[offset] = 0;
									Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
								}
							
								if (func_188() && func_148(&unk14, &unk) || func_148(&unk14, &(Global_2097157.f_361)))
								{
								}
								else
								{
									if (func_148(&unk14, &unk))
									{
										num = 0;
										Global_2097536.f_2775[offset] = 0;
									}
								
									TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], { unk14.f_13 }, 16);
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_32 = { unk14 };
									Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_59 = unk14.f_96;
								
									if (func_183(uParam0->f_44))
									{
										rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
									
										if (rowDataInt == 1)
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 1;
										else
											Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 0;
									}
								
									if (func_199(uParam0->f_44))
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
					
						if (!func_188())
							num = unk112.f_5;
					
						if (num > 6)
							num2 = num - 6;
						else if (flag)
							num2 = 1;
						else
							num2 = 0;
					
						k = num2;
						func_185(&unk14);
					
						for (k = num2; k <= unk112.f_3 - 1; k = k + 1)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(k, &unk14);
						
							if (Global_2097536.f_2704[offset] < 11 && unk14.f_96 > 1)
							{
								if (func_188() && num == k)
								{
									if (!func_148(&(Global_2097536[offset /*901*/][0 /*75*/].f_32), &unk14))
									{
										func_184(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], unk14.f_96);
										Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
										Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
									}
								}
							
								if (func_188() && func_148(&unk14, &unk) || func_148(&unk14, &(Global_2097157.f_361)))
								{
								}
								else if (Global_2097536.f_2704[offset] < 11)
								{
									if (IS_GAMER_HANDLE_VALID(unk14) && !func_148(&(Global_2097536[offset /*901*/][0 /*75*/].f_32), &unk14))
									{
										if (func_148(&unk14, &unk))
											if (Global_2097536.f_2775[offset] < 0)
												Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
									
										TEXT_LABEL_COPY(&Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], { unk14.f_13 }, 16);
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_32 = { unk14 };
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_59 = unk14.f_96;
										Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_74 = 1;
									
										if (func_183(uParam0->f_44))
										{
											rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(k, Global_2097536.f_2709);
										
											if (rowDataInt == 1)
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 1;
											else
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 0;
										}
									
										if (func_199(uParam0->f_44))
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
						
							func_185(&unk14);
						}
					
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					
						if (flag)
						{
							if (Global_2097536.f_2775[offset] == -1 && func_188())
							{
								if (Global_2097536.f_2704[offset] >= 1)
									func_184(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] - 1 /*75*/].f_59 + 1);
								else
									func_184(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], 1);
							
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
						func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_2097536.f_2775[offset] = -1;
						uParam0->[offset] = 1;
					}
				}
				else
				{
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
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
		
			if (func_178(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, num3))
			{
				func_186(&unk112, &(uParam0->f_44));
			
				if (uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&unk112))
				{
					if (unk112.f_3 > 0)
					{
						for (i = 0; i < unk112.f_3; i = i + 1)
						{
							STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(i, &unk14);
						
							if (func_188() && func_148(&unk14, &unk) || func_148(&unk14, &(Global_2097157.f_361)))
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
									
										if (func_183(uParam0->f_44))
										{
											rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
										
											if (rowDataInt == 1)
												Global_2097536[offset /*901*/][0 /*75*/].f_58 = 1;
											else
												Global_2097536[offset /*901*/][0 /*75*/].f_58 = 0;
										}
									
										if (func_199(uParam0->f_44))
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
									
										if (func_183(uParam0->f_44))
										{
											rowDataInt = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(i, Global_2097536.f_2709);
										
											if (rowDataInt == 1)
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 1;
											else
												Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/].f_58 = 0;
										}
									
										if (func_199(uParam0->f_44))
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
						
							func_185(&unk14);
						}
					}
				
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					uParam0->[offset] = 2;
				}
				else
				{
					MISC::SET_BIT(&(Global_2097536.f_2832), offset);
					func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_2097536.f_2704[offset] = 0;
					uParam0->[offset] = 2;
					Global_2097536.f_2704[1] = 0;
					uParam0->[1] = 1;
					Global_2097536.f_2704[2] = 0;
					uParam0->[2] = 3;
				}
			}
		
			if (Global_2097536.f_2775[offset] == -1 && func_188())
			{
				if (Global_2097536.f_2704[offset] >= 1)
					func_184(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] - 1 /*75*/].f_59 + 1);
				else
					func_184(uParam0, &Global_2097536[offset /*901*/][Global_2097536.f_2704[offset] /*75*/], 1);
			
				Global_2097536.f_2775[offset] = Global_2097536.f_2704[offset];
				Global_2097536.f_2704[offset] = Global_2097536.f_2704[offset] + 1;
			}
			break;
	
		case 2:
			func_177(offset, Global_2097157.f_374);
			uParam0->[offset] = 3;
			break;
	
		case 3:
			return true;
	}

	return false;
}

BOOL func_192(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) // Position - 0xEC5B (60507)
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

void func_193(var uParam0) // Position - 0xECF3 (60659)
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
			func_161(Global_2097536.f_2826, -1);
		}
	}

	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0xED43 (60739)
{
	return uParam0->f_1;
}

void func_195(int iParam0) // Position - 0xED4F (60751)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, 255, 255, 255, 0, 0);

	return;
}

void func_196(int iParam0, var uParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xED6F (60783)
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
			if (func_168() || func_167() || MISC::_IS_XBOXPC_VERSION() && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
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
						if (func_168() || func_167() || MISC::_IS_XBOXPC_VERSION() && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
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

void func_197(int iParam0, char* sParam1, var uParam2, int iParam3) // Position - 0xF05B (61531)
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

void func_198(int iParam0, char* sParam1, const char* sParam2, char* sParam3, BOOL bParam4, int iParam5) // Position - 0xF09D (61597)
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

BOOL func_199(int iParam0) // Position - 0xF12D (61741)
{
	if (iParam0 == 825 || iParam0 == 828)
		return true;

	return false;
}

void func_200(int iParam0, int iParam1) // Position - 0xF14F (61775)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

int func_201() // Position - 0xF16C (61804)
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("SC_LEADERBOARD");
}

BOOL func_202() // Position - 0xF17C (61820)
{
	return func_203(PLAYER::PLAYER_ID());
}

BOOL func_203(Player plParam0) // Position - 0xF18C (61836)
{
	switch (func_204(plParam0))
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

int func_204(Player plParam0) // Position - 0xF1EC (61932)
{
	return Global_1845225[plParam0 /*874*/].f_185;
}

void func_205(int iParam0) // Position - 0xF1FF (61951)
{
	Global_1577955 = iParam0;
	return;
}

void func_206(int iParam0) // Position - 0xF20D (61965)
{
	Global_1675403.f_1163 = iParam0;
	return;
}

void func_207(BOOL bParam0) // Position - 0xF21E (61982)
{
	if (bParam0)
		func_209();

	func_208(4, -1);
	func_208(6, -1);
	func_208(7, -1);
	func_208(3, -1);
	func_208(1, -1);
	func_208(2, -1);
	func_208(11, -1);
	func_208(13, -1);
	func_208(14, -1);
	func_208(16, -1);
	return;
}

void func_208(int iParam0, int iParam1) // Position - 0xF26F (62063)
{
	MISC::SET_BIT(&(Global_1673846.f_1047), iParam0);

	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				Global_1673846.f_170[iParam1] = 1;
			break;
	}

	return;
}

void func_209() // Position - 0xF2A5 (62117)
{
	Global_2740054.f_4671 = 0;
	return;
}

void func_210(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF2B5 (62133)
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

int func_211(int* piParam0, BOOL bParam1) // Position - 0xF2F2 (62194)
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
		func_219(false);
	}

	Global_2103068.f_2 = MISC::GET_FRAME_COUNT();
	npUnavailableReason = -1;

	if (func_168())
		if (NETWORK::NETWORK_IS_NP_AVAILABLE() == false)
			npUnavailableReason = NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON();

	if (func_168() && npUnavailableReason == 4 || npUnavailableReason == 2 || npUnavailableReason == 1 || npUnavailableReason == 5 || !func_217() && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_IS_REFRESHING_ROS_CREDENTIALS())
		{
			func_214(&(Global_2103068.f_3), func_216(&(Global_2103068.f_3)));
		
			if (!IS_BIT_SET(*piParam0, 4))
			{
				MISC::SET_BIT(piParam0, 4);
				TEXT_LABEL_ASSIGN_STRING(&(Global_2103068.f_3.f_1), "", 64);
				func_212(&(Global_2103068.f_3), false);
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
			else if (!func_217())
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
				func_219(false);
				return 1;
			}
		}
	}
	else
	{
		func_214(&(Global_2103068.f_3), func_216(&(Global_2103068.f_3)));
	
		if (_STOPWATCH_IS_INITIALIZED(&(Global_2103068.f_49)) && !func_155(&(Global_2103068.f_49), 2000, true) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			MISC::SET_BIT(piParam0, 3);
			TEXT_LABEL_ASSIGN_STRING(&(Global_2103068.f_3.f_1), "", 64);
			func_212(&(Global_2103068.f_3), false);
		}
		else if (!IS_BIT_SET(*piParam0, 3))
		{
			if (!IS_BIT_SET(*piParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(false);
				MISC::SET_BIT(piParam0, 1);
				TEXT_LABEL_ASSIGN_STRING(&(Global_2103068.f_3.f_1), "", 64);
				func_212(&(Global_2103068.f_3), false);
			}
		}
	
		if (_STOPWATCH_IS_INITIALIZED(&Global_2103068))
			if (!func_155(&Global_2103068, 4000, true))
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
							func_219(false);
							return 1;
						}
					}
				}
				else
				{
					_STOPWATCH_DESTROY(&Global_2103068);
					*piParam0 = 0;
					Global_2103068.f_2 = 0;
					func_219(false);
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
					func_219(false);
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
						func_219(false);
						return 1;
					}
				}
			}
		}
	}

	return 0;
}

void func_212(var uParam0, BOOL bParam1) // Position - 0xF751 (63313)
{
	func_213(uParam0);

	if (bParam1)
		func_219(false);

	uParam0->f_35 = 1;
	return;
}

void func_213(var uParam0) // Position - 0xF76E (63342)
{
	var unk;

	unk.f_41 = 1;
	*uParam0 = { unk };
	return;
}

void func_214(var uParam0, int iParam1) // Position - 0xF789 (63369)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_215(uParam0);
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

void func_215(var uParam0) // Position - 0xF887 (63623)
{
	uParam0->f_35 = 0;
	return;
}

int func_216(var uParam0) // Position - 0xF894 (63636)
{
	return uParam0->f_35;
}

BOOL func_217() // Position - 0xF8A0 (63648)
{
	if (func_218())
		return false;

	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == false)
		return false;

	return true;
}

BOOL func_218() // Position - 0xF8C0 (63680)
{
	return Global_2697052;
}

void func_219(BOOL bParam0) // Position - 0xF8CC (63692)
{
	HUD::BUSYSPINNER_OFF();

	if (bParam0)
		HUD::PRELOAD_BUSYSPINNER();

	return;
}

BOOL func_220(var uParam0, BOOL bParam1, var uParam2) // Position - 0xF8E1 (63713)
{
	if (!bLocal_257)
	{
		func_232(&(uParam0->f_72), bParam1);
		bLocal_257 = true;
		func_338(&(uParam0->f_666), 9, false);
	}
	else
	{
		if (Global_2097157.f_1 && !Global_2097157.f_2)
		{
			func_229(190, bParam1);
			Global_2097157.f_2 = 1;
			*uParam2 = 1;
		}
	
		if (func_221(&(uParam0->f_72)))
		{
			Global_2097532 = true;
			return true;
		}
	}

	return false;
}

BOOL func_221(var uParam0) // Position - 0xF94A (63818)
{
	var unk;
	var unk99;
	int num;
	var unk175;
	int i;

	unk.f_19.f_1 = 4;
	num.f_3 = 32;
	num.f_36 = 32;

	if (func_199(uParam0->f_44))
		unk175 = { Global_2097157.f_361 };
	else
		unk175 = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };

	switch (Global_2097157)
	{
		case 0:
			if (func_228(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &unk175))
			{
				func_186(&unk99, &(uParam0->f_44));
				Global_2097157.f_142 = uParam0->f_44;
				Global_2097157.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_44, 0);
			
				for (i = 0; i < Global_2097157.f_142.f_1; i = i + 1)
				{
					if (!func_227(uParam0->f_44, i))
						if (func_226(uParam0->f_44, 4, i))
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
								if (!func_227(uParam0->f_44, i))
								{
									if (func_226(uParam0->f_44, 4, i))
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
				func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
	
		case 1:
			Global_2097157.f_1 = 1;
		
			if (Global_2097157.f_2)
			{
				func_225();
			
				if (Global_2097157.f_4)
					if (func_224(uParam0->f_44))
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
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_223())
			{
				if (func_222())
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
			if (func_224(uParam0->f_44))
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
			if (func_187(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &unk175, true, true, Global_2097157.f_280.f_36[0], Global_2097157.f_280.f_3[0]))
			{
				func_186(&unk99, &(uParam0->f_44));
			
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
				func_105(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
	
		case 999:
			return true;
	}

	return false;
}

BOOL func_222() // Position - 0xFD6E (64878)
{
	return IS_BIT_SET(Global_1048576.f_10, 1);
}

BOOL func_223() // Position - 0xFD7E (64894)
{
	return Global_2693792.f_3;
}

BOOL func_224(int iParam0) // Position - 0xFD8C (64908)
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

void func_225() // Position - 0xFE5D (65117)
{
	Global_2097157.f_73 = Global_2097157.f_142;
	Global_2097157.f_73.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_73.f_2 = Global_2097157.f_142.f_2;
	Global_2097157.f_211 = Global_2097157.f_142;
	Global_2097157.f_211.f_1 = Global_2097157.f_142.f_1;
	Global_2097157.f_211.f_2 = Global_2097157.f_142.f_2;
	return;
}

BOOL func_226(int iParam0, int iParam1, int iParam2) // Position - 0xFEBD (65213)
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

BOOL func_227(int iParam0, int iParam1) // Position - 0xFFBF (65471)
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

BOOL func_228(var uParam0, var uParam1, Any* panParam2, Any* panParam3) // Position - 0x1001B (65563)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_181() && !func_180())
			{
				func_179(*panParam2);
			
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

void func_229(int iParam0, BOOL bParam1) // Position - 0x100CF (65743)
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

	if (func_231(iParam0, &unk, &unk8, 1, -1, true, false))
	{
		func_230(190, 131, 0, 0f, true);
		func_230(190, 103, uLocal_150[1], 0f, false);
		func_230(190, 99, uLocal_150[2], 0f, false);
		func_230(190, 109, uLocal_150[3], 0f, false);
		func_230(190, 106, uLocal_150[5], 0f, false);
		func_230(190, 2, uLocal_150[10], 0f, false);
		func_230(190, 107, uLocal_150[8], 0f, false);
		func_230(190, 116, uLocal_150[6], 0f, false);
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

void func_230(int iParam0, int iParam1, int iParam2, float fParam3, BOOL bParam4) // Position - 0x101BF (65983)
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
				else if (func_226(iParam0, 4, i))
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

BOOL func_231(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x102DA (66266)
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
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2693792.f_3)
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&num, &(Global_1930988.f_10));
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

void func_232(var uParam0, BOOL bParam1) // Position - 0x1040E (66574)
{
	int num;

	num = 0;

	if (bParam1)
		num = -1;

	func_233(uParam0, 14, "DartsLB", "", num, -1, false, false);
	return;
}

void func_233(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x10436 (66614)
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
		if (iParam5 > 0 && !func_242())
			uParam0->f_44 = 826;
		else
			uParam0->f_44 = 815;
	
		uParam0->f_44.f_1 = 5;
		uParam0->f_44.f_3 = 1;
		TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
		uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
	
		if (iParam5 > 0 && !func_242())
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
	
		if (iParam5 > 0 && !func_242())
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
	
		Global_2097536.f_2826 = func_241(unk, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
		return;
	}

	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_242())
					uParam0->f_44 = 826;
				else
					uParam0->f_44 = 815;
			
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			
				if (iParam5 > 0 && !func_242())
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
			
				if (iParam5 <= 0 || func_242())
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
				if (iParam5 > 0 && !func_242())
					uParam0->f_44 = 827;
				else
					uParam0->f_44 = 824;
			
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			
				if (iParam5 > 0 && !func_242())
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
			
				if (iParam5 <= 0 || func_242())
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
				if (iParam5 > 0 && !func_242())
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
			
				if (iParam5 > 0 && !func_242())
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
			
				if (iParam5 <= 0 || func_242())
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
				if (iParam5 > 0 && !func_242())
					uParam0->f_44 = 928;
				else
					uParam0->f_44 = 849;
			
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			
				if (iParam5 > 0 && !func_242())
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
			
				if (iParam5 <= 0 || func_242())
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
				if (iParam5 > 0 && !func_242())
					uParam0->f_44 = 998 + (iParam5 - 1);
				else
					uParam0->f_44 = 975;
			
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				TEXT_LABEL_ASSIGN_STRING(&uParam0->f_44.f_3.f_1[0 /*16*/], "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { unk };
			
				if (iParam5 > 0 && !func_242())
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
			
				if (iParam5 <= 0 || func_242())
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
			TEXT_LABEL_COPY(&(Global_2097536.f_2780.f_9), { func_240(iParam1) }, 16);
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
			else if (Global_4718592.f_3561 == 1)
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
			
				if (func_239(*Global_4718592.f_190775) || func_236(*Global_4718592.f_190775))
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
				else if (func_235(*Global_4718592.f_190775))
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
			TEXT_LABEL_COPY(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), { func_234(iParam4) }, 8);
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

	Global_2097536.f_2826 = func_241(unk, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
	return;
}

struct<6> func_234(int iParam0) // Position - 0x15875 (88181)
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

BOOL func_235(int iParam0) // Position - 0x15924 (88356)
{
	return iParam0 == 74;
}

BOOL func_236(int iParam0) // Position - 0x15931 (88369)
{
	return func_238(iParam0) || func_237(iParam0);
}

BOOL func_237(int iParam0) // Position - 0x1594B (88395)
{
	return iParam0 == 44;
}

BOOL func_238(int iParam0) // Position - 0x15958 (88408)
{
	return iParam0 == 45;
}

BOOL func_239(int iParam0) // Position - 0x15965 (88421)
{
	return iParam0 == 12;
}

struct<6> func_240(int iParam0) // Position - 0x15972 (88434)
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

Hash func_241(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, BOOL bParam12) // Position - 0x15AFB (88827)
{
	var unk;

	TEXT_LABEL_COPY(&unk, { uParam0 }, 16);
	TEXT_LABEL_APPEND_INT(&unk, iParam8, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);

	if (func_199(iParam8))
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

BOOL func_242() // Position - 0x15B6D (88941)
{
	if (*Global_4718592.f_121552 == 1 || *Global_4718592.f_121552 == 3 || *Global_4718592.f_121552 == 5 || *Global_4718592.f_121552 == 7 || *Global_4718592.f_121552 == 19 || *Global_4718592.f_121552 == 8 || *Global_4718592.f_121552 == 9 || *Global_4718592.f_121552 == 11 || *Global_4718592.f_121552 == 13 || *Global_4718592.f_121552 == 21 || *Global_4718592.f_121552 == 23 || *Global_4718592.f_121552 == 25 || *Global_4718592.f_121552 == 26 || *Global_4718592.f_121552 == 31 || *Global_4718592.f_121552 == 32)
		return true;

	return false;
}

BOOL func_243(var uParam0, int iParam1) // Position - 0x15C90 (89232)
{
	if (!func_438(&(uParam0->f_2)))
		func_453(&(uParam0->f_2));

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_RETICLE);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);

	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || uParam0->f_8)
		{
			if (!func_438(&(uParam0->f_5)))
			{
				func_453(&(uParam0->f_5));
				func_244(uParam0, 1051260355);
			}
		}
	
		if (func_438(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_439(&(uParam0->f_5));
				return false;
			}
		}
	}

	if (uParam0->f_1 == -1)
		return true;

	if (func_7(&(uParam0->f_2)) * 1000f > BUILTIN::TO_FLOAT(uParam0->f_1))
	{
		if (!func_438(&(uParam0->f_5)))
		{
			func_453(&(uParam0->f_5));
			func_244(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_439(&(uParam0->f_2));
			return false;
		}
	}

	return true;
}

void func_244(var uParam0, int iParam1) // Position - 0x15D93 (89491)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_245(var uParam0) // Position - 0x15DB9 (89529)
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

void func_246(var uParam0, BOOL bParam1) // Position - 0x15E32 (89650)
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

int func_247() // Position - 0x15EFF (89855)
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

void func_248(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x15F2F (89903)
{
	char* methodName;

	methodName = func_249(iParam4);

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
	func_453(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
	return;
}

char* func_249(int iParam0) // Position - 0x15F8F (89999)
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

void func_250(var uParam0, int iParam1) // Position - 0x15FFE (90110)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_SCORES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

int func_251(Object* pobParam0) // Position - 0x1601C (90140)
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

void func_252(Ped pedParam0) // Position - 0x1606C (90220)
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_120, caLocal_118, 1500, 1, 1);
	CAM::SET_CAM_ACTIVE(caLocal_121, true);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_120, caLocal_121, 8000, 1, 1);
	CAM::ATTACH_CAM_TO_ENTITY(caLocal_123, pedParam0, -0.0301f, 1.498f, 0.7435f, true);
	CAM::POINT_CAM_AT_ENTITY(caLocal_123, pedParam0, 0.0557f, -1.4905f, 0.4958f, true);
	CAM::SET_CAM_FOV(caLocal_123, 35f);
	return;
}

void func_253(var uParam0, var uParam1, var uParam2, var uParam3, int* piParam4) // Position - 0x160D0 (90320)
{
	BOOL flag;

	if (!CAM::IS_CAM_INTERPOLATING(caLocal_118))
	{
		flag = false;
		func_334(uParam0);
	
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
						if (!IS_BIT_SET(Global_114305, 3))
						{
							_DISPLAY_HELP_TEXT("DARTS_INSTR_W", -1);
							MISC::SET_BIT(&Global_114305, 3);
						}
					
						func_338(&(uParam3->f_666), 21, true);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!IS_BIT_SET(Global_114305, 4))
						{
							_DISPLAY_HELP_TEXT("DARTS_INSTR_B", -1);
							MISC::SET_BIT(&Global_114305, 4);
						}
					
						func_338(&(uParam3->f_666), 20, true);
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
				func_333(uParam3);
		else
			func_331(uParam3, iLocal_28);
	
		func_330(&(uParam0->f_1));
	}
	else
	{
		flag = true;
	}

	func_327(uParam3);

	switch (uParam0->f_1)
	{
		case 1:
			if (!func_319(&(uParam0->f_3)))
				uParam0->f_1 = 2;
			break;
	
		case 0:
			if (func_312(uParam0->f_422[iLocal_28], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
				uParam0->f_1 = 2;
			break;
	
		case 2:
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_LT) && iLocal_28 == 0)
				uParam0->f_1 = 1;
		
			if (iLocal_28 == 0)
			{
				func_311(iLocal_29, false);
			
				if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_SHT_USE") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_W") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_B") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_AIM_HLP") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_STD_HLP") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						_DISPLAY_HELP_TEXT("DARTS_LEVEL", -1);
						MISC::SET_BIT(&(Global_114344.f_18974.f_6), iLocal_294);
						func_338(&(uParam3->f_666), 24, false);
					}
				}
			
				if (uParam0->f_422[iLocal_28] % 2 == 0 && uParam0->f_422[iLocal_28] < 41 && iLocal_29 == 0 && !bLocal_272)
				{
					if (!func_3(&(uParam3->f_666), 6))
						func_338(&(uParam3->f_666), 6, true);
				
					bLocal_272 = true;
				}
				else if (uParam0->f_422[iLocal_28] == 50 && !bLocal_272)
				{
					if (!func_3(&(uParam3->f_666), 6))
						func_338(&(uParam3->f_666), 6, true);
				
					bLocal_272 = true;
				}
				else if (func_300(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), uParam1, flag, false, false, uParam0->f_248))
				{
					HUD::CLEAR_PRINTS();
					uParam3->f_670 = uParam3->f_670 - 1;
					uParam0->f_1 = 3;
				}
				else if (!bLocal_269)
				{
					if (!func_438(piParam4))
					{
						func_298(piParam4);
					}
					else if (func_7(piParam4) > 20f)
					{
						func_297(uLocal_263[1 - iLocal_28]);
						func_439(piParam4);
						bLocal_269 = true;
					}
				}
			}
			else if (iLocal_29 == 0)
			{
				iLocal_292 = 0;
				func_296(&(uParam0->f_422), &(uParam0->f_249));
				func_293(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), false);
			}
			else if (BUILTIN::TIMERA() > MISC::GET_RANDOM_INT_IN_RANGE(1250, 2500))
			{
				func_296(&(uParam0->f_422), &(uParam0->f_249));
				func_293(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), false);
			}
			break;
	
		case 3:
			if (func_280(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), uParam0->f_248, false))
			{
				uParam0->f_436 = uParam0->f_436 + 1;
				uParam0->f_455 = func_279(uParam0);
				uParam0->f_1 = 4;
			}
			break;
	
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
				func_277(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), uParam0->f_455);
		
			func_262(uParam0, uParam3);
			break;
	
		case 5:
			func_255(uParam0, uParam2, uParam3);
		
			if (func_438(piParam4))
				func_439(piParam4);
			break;
	
		case 6:
			func_254(uParam0, uParam3);
			break;
	}

	return;
}

void func_254(var uParam0, var uParam1) // Position - 0x1652A (91434)
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
				func_277(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), false);
				func_262(uParam0, uParam1);
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
		
			func_277(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), false);
			func_262(uParam0, uParam1);
		
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
			func_296(&(uParam0->f_422), &(uParam0->f_249));
			func_293(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), false);
			uParam0->f_436 = uParam0->f_436 + 1;
			func_277(&uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/], &(uParam0->f_243), false);
		
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50 && uParam0->f_422[iLocal_28] == 0)
			{
				if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50)
					uParam0->f_432[iLocal_28] = uParam0->f_432[iLocal_28] + 1;
			
				func_338(&(uParam1->f_666), 2, false);
				func_338(&(uParam1->f_666), 3, false);
				func_338(&(uParam1->f_666), 4, false);
				func_338(&(uParam1->f_666), 5, true);
				BUILTIN::SETTIMERB(0);
			}
		
			func_262(uParam0, uParam1);
		
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

void func_255(var uParam0, var uParam1, var uParam2) // Position - 0x169B3 (92595)
{
	var entityCoords;
	int i;

	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
				func_261();
		
			if (iLocal_28 == 0)
				if (func_3(&(uParam2->f_666), 3))
					func_260("DARTS_PLR_DUB", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
				else if (func_3(&(uParam2->f_666), 4))
					_SHOW_SUBTITLE_CLEAR_EXISTING("DARTS_ONE_PT", 5000, 0);
				else if (func_3(&(uParam2->f_666), 2))
					func_260("DARTS_PLR_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
				else
					func_260("DARTS_SWITCH_C", uParam0->f_422[iLocal_28], 5000, 0);
			else if (func_3(&(uParam2->f_666), 3))
				func_260("DARTS_OPP_DUB", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			else if (func_3(&(uParam2->f_666), 4))
				_SHOW_SUBTITLE_CLEAR_EXISTING("DARTS_ONE_PT", 5000, 0);
			else if (func_3(&(uParam2->f_666), 2))
				func_260("DARTS_OPP_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			else
				func_260("DARTS_SWITCH_B", uParam0->f_422[iLocal_28], 5000, 0);
		
			BUILTIN::SETTIMERB(0);
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
					if (func_258(iLocal_28 == 0, &uLocal_263[1], uParam0->f_425[iLocal_28] - uParam0->f_422[iLocal_28], uParam0->f_422[0], uParam0->f_422[1]))
						bLocal_271 = true;
				else
					MISC::GET_GAME_TIMER() % 500 < 50;
			else if (!bLocal_271)
				if (func_257(iLocal_28 == 0, &uLocal_263[1], uParam0->f_425[iLocal_28] - uParam0->f_422[iLocal_28], uParam0->f_422[0], uParam0->f_422[1]))
					bLocal_271 = true;
			else
				MISC::GET_GAME_TIMER() % 500 < 50;
		
			if (bLocal_266 || BUILTIN::TIMERB() > 2000)
			{
				bLocal_276 = false;
			
				for (i = 0; i < 3; i = i + 1)
				{
					func_251(&uParam0->f_5[iLocal_28 /*79*/][i /*26*/]);
				}
			
				if (uParam0->f_425[iLocal_28] != uParam0->f_422[iLocal_28])
				{
					func_256(uParam1, iLocal_28, uParam0->f_422[iLocal_28]);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, false, 0, false);
				}
			
				uParam0->f_425[iLocal_28] = uParam0->f_422[iLocal_28];
				iLocal_29 = 0;
				uParam0->f_428 = 0;
			
				if (iLocal_28 == 0)
					iLocal_28 = 1;
				else
					iLocal_28 = 0;
			
				func_452(uParam1, iLocal_28);
				bLocal_97 = false;
				func_431();
			
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

void func_256(var uParam0, int iParam1, int iParam2) // Position - 0x16DCC (93644)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_DARTS_SCORE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_257(BOOL bParam0, var uParam1, int iParam2, int iParam3, int iParam4) // Position - 0x16DF0 (93680)
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

BOOL func_258(BOOL bParam0, var uParam1, int iParam2, int iParam3, int iParam4) // Position - 0x16FE1 (94177)
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
			else if (randomIntInRange < 68 && !ENTITY::DOES_ENTITY_EXIST(func_516()))
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

void _SHOW_SUBTITLE_CLEAR_EXISTING(char* sParam0, int iParam1, int iParam2) // Position - 0x1722E (94766)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
	return;
}

void func_260(char* sParam0, int iParam1, int iParam2, int iParam3) // Position - 0x17247 (94791)
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
	return;
}

void func_261() // Position - 0x17266 (94822)
{
	CAM::SET_CAM_ACTIVE(caLocal_127, true);
	CAM::SET_CAM_ACTIVE(caLocal_118, false);
	return;
}

void func_262(var uParam0, var uParam1) // Position - 0x1727C (94844)
{
	uParam0->f_455 = 0;

	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_28] = uParam0->f_422[iLocal_28] - uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20;
		uParam0->f_428 = uParam0->f_428 + uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20;
	}

	if (func_3(&(uParam1->f_666), 5))
	{
		func_274(uParam0);
		func_338(&(uParam1->f_666), 5, false);
	}
	else
	{
		uParam0->f_429[iLocal_28] = uParam0->f_429[iLocal_28] + 1;
	
		if (iLocal_28 == 0)
		{
			func_272(4);
			uLocal_150[10] = uLocal_150[10] + 1;
		}
	
		if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50 && uParam0->f_422[iLocal_28] == 0)
		{
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_28] = uParam0->f_432[iLocal_28] + 1;
			
				if (iLocal_28 == 0)
				{
					func_272(0);
					uLocal_150[1] = uLocal_150[1] + 1;
				}
			}
		
			func_338(&(uParam1->f_666), 2, false);
			func_338(&(uParam1->f_666), 3, false);
			func_338(&(uParam1->f_666), 4, false);
			func_338(&(uParam1->f_666), 5, true);
			func_274(uParam0);
			func_338(&(uParam1->f_666), 5, false);
			BUILTIN::SETTIMERB(0);
		}
		else if (uParam0->f_422[iLocal_28] == 1 || uParam0->f_422[iLocal_28] < 0 || uParam0->f_422[iLocal_28] == 0 && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 != 2)
		{
			if (uParam0->f_422[iLocal_28] == 0 && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_21 != 2)
			{
				func_260("DARTS_PLR_DUB", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
				func_338(&(uParam1->f_666), 3, true);
			}
			else if (uParam0->f_422[iLocal_28] == 1)
			{
				func_338(&(uParam1->f_666), 4, true);
			}
			else if (iLocal_28 == 1)
			{
				func_260("DARTS_OPP_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_260("DARTS_PLR_BUST", uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20, 5000, 0);
			}
		
			if (!bLocal_271)
				if (func_271(uLocal_263[1 - iLocal_28]))
					bLocal_271 = true;
		
			uParam0->f_422[iLocal_28] = uParam0->f_425[iLocal_28];
			uParam0->f_1 == 6;
			BUILTIN::SETTIMERA(0);
			uParam0->f_1 = 5;
		
			if (iLocal_28 == 0)
				uParam0->f_435 = uParam0->f_435 + 1;
		
			func_338(&(uParam1->f_666), 2, true);
		}
		else
		{
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_28] = uParam0->f_432[iLocal_28] + 1;
			
				if (iLocal_28 == 0)
				{
					func_270(uParam1, 1);
					func_272(0);
					uLocal_150[1] = uLocal_150[1] + 1;
				}
			
				if (!bLocal_271 && !bLocal_276)
					if (func_269(uLocal_263[iLocal_28]))
						bLocal_271 = true;
			}
		
			if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_20 == 0)
			{
				if (!bLocal_271 && !bLocal_276)
				{
					func_268(uLocal_263[1 - iLocal_28]);
					bLocal_271 = true;
				}
			}
		
			if (uParam0->f_428 == 180)
			{
				if (!bLocal_271 && !bLocal_276)
					if (func_267(uLocal_263[1], iLocal_28 == 0))
						bLocal_271 = true;
			
				if (iLocal_28 == 0)
				{
					func_270(uParam1, 0);
					func_272(1);
					uLocal_150[2] = uLocal_150[2] + 1;
				}
			}
		
			if (uParam0->f_428 == 140)
				if (!bLocal_271 && !bLocal_276)
					if (func_265(uLocal_263[iLocal_28], iLocal_28 == 0))
						bLocal_271 = true;
		
			if (iLocal_28 == 0)
			{
				if (iLocal_29 < 2)
				{
					if (uParam0->f_422[iLocal_28] <= 170 && !func_3(&(uParam1->f_666), 18))
						func_338(&(uParam1->f_666), 18, true);
				
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
						func_338(&(uParam1->f_666), 19, true);
				
					if (uParam0->f_422[iLocal_28] < 41 && uParam0->f_422[iLocal_28] > 0 && uParam0->f_422[iLocal_28] % 2 == 0 || uParam0->f_422[iLocal_28] == 50)
					{
						uParam0->f_422[iLocal_28] == 50;
					
						if (!bLocal_270)
						{
							func_264(uLocal_263[1]);
							bLocal_270 = true;
						}
					
						if (!uParam0->f_456)
							uParam0->f_456 = 1;
					
						if (!func_3(&(uParam1->f_666), 6))
							func_338(&(uParam1->f_666), 6, true);
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
		
			if (iLocal_28 == 0 && iLocal_29 < 2)
			{
				func_263("DARTS_REMAIN", uParam0->f_425[iLocal_28] - uParam0->f_422[iLocal_28], uParam0->f_422[iLocal_28], 7500, 0);
			}
			else if (iLocal_28 == 1 && iLocal_29 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_330(&(uParam0->f_1));
			}
		
			uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_25 = 1;
			iLocal_29 = iLocal_29 + 1;
			BUILTIN::SETTIMERA(0);
		
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
		
			func_338(&(uParam1->f_666), 3, false);
			func_338(&(uParam1->f_666), 2, false);
			func_338(&(uParam1->f_666), 4, false);
		}
	}

	return;
}

void func_263(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x17819 (96281)
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, true);
	return;
}

void func_264(Ped pedParam0) // Position - 0x1783E (96318)
{
	if (!PED::IS_PED_INJURED(pedParam0))
		func_4(pedParam0, "DARTS_1_DART_AWAY", false, 4);

	return;
}

BOOL func_265(Ped pedParam0, BOOL bParam1) // Position - 0x1785C (96348)
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);

	if (randomIntInRange < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_516()))
		{
			if (bParam1)
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", true, 4);
			else
				func_4(func_516(), "DARTS_140", false, 4);
		
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

BOOL _GET_RANDOM_BOOL() // Position - 0x178DB (96475)
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

BOOL func_267(Ped pedParam0, BOOL bParam1) // Position - 0x178F9 (96505)
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);

	if (randomIntInRange < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_516()))
		{
			if (bParam1)
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", true, 4);
			else
				func_4(func_516(), "DARTS_180", false, 4);
		
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

int func_268(Ped pedParam0) // Position - 0x17978 (96632)
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

BOOL func_269(Ped pedParam0) // Position - 0x179BB (96699)
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

void func_270(var uParam0, int iParam1) // Position - 0x179E7 (96743)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
	return;
}

BOOL func_271(Ped pedParam0) // Position - 0x179FC (96764)
{
	BOOL flag;

	if (pedParam0 == PLAYER::PLAYER_PED_ID())
		flag = true;

	if (!PED::IS_PED_INJURED(pedParam0))
		func_4(pedParam0, "DARTS_BUST", flag, 4);

	return true;
}

void func_272(int iParam0) // Position - 0x17A28 (96808)
{
	switch (iParam0)
	{
		case 0:
			Global_114344.f_18974 = Global_114344.f_18974 + 1;
			func_273("DARTS_STAT_NUM_BULLSEYES", Global_114344.f_18974);
			break;
	
		case 1:
			Global_114344.f_18974.f_1 = Global_114344.f_18974.f_1 + 1;
			func_273("DARTS_STAT_NUM_180S", Global_114344.f_18974.f_1);
			break;
	
		case 2:
			Global_114344.f_18974.f_2 = Global_114344.f_18974.f_2 + 1;
			func_273("DARTS_STAT_NUM_WINS", Global_114344.f_18974.f_2);
			break;
	
		case 3:
			Global_114344.f_18974.f_3 = Global_114344.f_18974.f_3 + 1;
			func_273("DARTS_STAT_NUM_LOSS", Global_114344.f_18974.f_3);
			break;
	
		case 4:
			Global_114344.f_18974.f_4 = Global_114344.f_18974.f_4 + 1;
			func_273("DARTS_STAT_DARTS_THROWN", Global_114344.f_18974.f_4);
			break;
	
		case 5:
			Global_114344.f_18974.f_5 = Global_114344.f_18974.f_5 + 1;
			func_273("DARTS_STAT_NUM_GAMES", Global_114344.f_18974.f_5);
			break;
	
		case 7:
			Global_114344.f_18974.f_7 = BUILTIN::TO_FLOAT(Global_114344.f_18974.f_2) / BUILTIN::TO_FLOAT(Global_114344.f_18974.f_5);
			break;
	
		case 8:
			Global_114344.f_18974.f_8 = BUILTIN::TO_FLOAT(Global_114344.f_18974.f_4) / BUILTIN::TO_FLOAT(Global_114344.f_18974.f_5);
			break;
	}

	return;
}

void func_273(char* sParam0, int iParam1) // Position - 0x17B9F (97183)
{
	return;
}

void func_274(var uParam0) // Position - 0x17BA7 (97191)
{
	if (!uParam0->f_460)
		uParam0->f_460 = 1;

	func_272(5);
	HUD::CLEAR_SMALL_PRINTS();
	HUD::CLEAR_HELP(true);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_432(2)))
		AUDIO::STOP_AUDIO_SCENE(func_432(2));

	if (uParam0->f_248 == 1)
		func_261();

	if (iLocal_28 == 0)
	{
		uParam0->f_454 = 1;
		bLocal_280 = true;
		uParam0->f_446[iLocal_28] = uParam0->f_446[iLocal_28] + 1;
		uParam0->f_437[iLocal_28] = uParam0->f_437[iLocal_28] + 1;
		func_272(2);
		uLocal_150[8] = uLocal_150[8] + 1;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_28] = uParam0->f_446[iLocal_28] + 1;
		uParam0->f_437[iLocal_28] = uParam0->f_437[iLocal_28] + 1;
		func_272(3);
		uLocal_150[9] = uLocal_150[9] + 1;
	}

	func_272(7);
	func_453(&(uParam0->f_254));

	if (func_276(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_28] = uParam0->f_443[iLocal_28] + 1;
	
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
				func_275(true);
		
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
	AUDIO::START_AUDIO_SCENE(func_432(3));
	bLocal_277 = true;
	uParam0->f_428 = 0;
	bLocal_97 = false;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
	return;
}

void func_275(BOOL bParam0) // Position - 0x17D50 (97616)
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

BOOL func_276(var uParam0) // Position - 0x17DC3 (97731)
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

void func_277(var uParam0, var uParam1, BOOL bParam2) // Position - 0x17E85 (97925)
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
	num = func_278(x2);
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

float func_278(float fParam0, var uParam1, var uParam2) // Position - 0x180BA (98490)
{
	return BUILTIN::SQRT((fParam0 * fParam0) + (fParam0.f_2 * fParam0.f_2));
}

int func_279(var uParam0) // Position - 0x180D5 (98517)
{
	int i;

	for (i = 0; i < iLocal_29; i = i + 1)
	{
		if (uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8 > uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_8 - 0.008f && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8 < uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_8 + 0.008f && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8.f_2 > uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_8.f_2 - 0.008f && uParam0->f_5[iLocal_28 /*79*/][iLocal_29 /*26*/].f_8.f_2 < uParam0->f_5[iLocal_28 /*79*/][i /*26*/].f_8.f_2 + 0.008f)
			return 1;
	}

	return 0;
}

BOOL func_280(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x1819B (98715)
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	var unk3;
	float frameTime;

	if (iLocal_28 == 0 && iParam2 == 1)
		func_281("Darts", "Dart_Reticules", &fLocal_68, 1, 0, 4, false);

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

void func_281(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x182BB (99003)
{
	float num;

	num = { *uParam2 };

	switch (iParam4)
	{
		case 0:
			func_292(&num);
			break;
	
		case 1:
			func_291(&num);
			break;
	
		case 5:
			func_290(&num);
			break;
	
		case 6:
			func_289(&num);
			break;
	
		case 7:
			func_288(&num);
			break;
	
		case 8:
			func_287(&num);
			break;
	
		case 9:
			func_286(&num);
			break;
	}

	if (func_284())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	
		if (iParam3 == 1)
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_283(num), func_282(num.f_1), num.f_2, num.f_3, num.f_8, num.f_4, num.f_5, num.f_6, num.f_7, bParam6, 0);
		else
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_283(num), func_282(num.f_1), num.f_2, num.f_3, num.f_8, num.f_4, num.f_5, num.f_6, num.f_7, bParam6, 0);
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}

	return;
}

float func_282(float fParam0) // Position - 0x183C2 (99266)
{
	return fParam0;
}

float func_283(float fParam0) // Position - 0x183CC (99276)
{
	return fParam0;
}

BOOL func_284() // Position - 0x183D6 (99286)
{
	if (func_285())
		return true;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
		return false;

	if (MISC::IS_FRONTEND_FADING())
		return false;

	return true;
}

BOOL func_285() // Position - 0x18415 (99349)
{
	return Global_1574604;
}

void func_286(var uParam0) // Position - 0x18421 (99361)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
	return;
}

void func_287(var uParam0) // Position - 0x1843B (99387)
{
	uParam0->f_7 = 2;
	return;
}

void func_288(var uParam0) // Position - 0x18448 (99400)
{
	uParam0->f_7 = 5;
	return;
}

void func_289(var uParam0) // Position - 0x18455 (99413)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
	return;
}

void func_290(var uParam0) // Position - 0x18472 (99442)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
	return;
}

void func_291(var uParam0) // Position - 0x1848F (99471)
{
	uParam0->f_4 = uParam0->f_4 - 50;
	uParam0->f_5 = uParam0->f_5 - 50;
	uParam0->f_6 = uParam0->f_6 - 50;
	return;
}

void func_292(var uParam0) // Position - 0x184B8 (99512)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
	return;
}

void func_293(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x184E0 (99552)
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
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(func_295(uParam3), 150);
	
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
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(func_295(uParam3), 150);
	
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

	uParam0->f_8 = BUILTIN::SIN(randomFloatInRange3) * num;
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = BUILTIN::COS(randomFloatInRange3) * num;
	uParam0->f_8 = uParam0->f_8 - 0.0035f;
	uParam0->f_8.f_2 = uParam0->f_8.f_2 - 0.0002f;

	if (*uParam2 == 6)
	{
		func_294(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_294(uParam0);
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

void func_294(var uParam0) // Position - 0x18839 (100409)
{
	Vector3 vector;
	float num;
	float headingFromVector2d;
	float num2;
	float num3;

	num3 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	vector = { uLocal_80 - uParam0->f_8 };
	num = BUILTIN::VMAG(vector);
	uParam0->f_5 = { vector / { num, num, num } };
	headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = headingFromVector2d - 180f;
	num2 = MISC::TAN(uParam0->f_17.f_2) * num3;
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = uParam0->f_11 + num2;
	vector = { uLocal_80 - uParam0->f_11 };
	num = BUILTIN::VMAG(vector);
	uParam0->f_5 = { vector / { num, num, num } };
	return;
}

int func_295(var uParam0) // Position - 0x188E5 (100581)
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

void func_296(var uParam0, var uParam1) // Position - 0x18919 (100633)
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

int func_297(Ped pedParam0) // Position - 0x18A6B (100971)
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

void func_298(int* piParam0) // Position - 0x18A97 (101015)
{
	func_299(piParam0, 0f);
	return;
}

void func_299(int* piParam0, float fParam1) // Position - 0x18AA6 (101030)
{
	piParam0->f_1 = func_8(IS_BIT_SET(*piParam0, 4)) + fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

BOOL func_300(var uParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x18AD1 (101073)
{
	float randomFloatInRange;
	int randomIntInRange;

	switch (iParam6)
	{
		case 0:
			if (bLocal_95)
			{
				if (BUILTIN::TIMERB() > 50)
				{
					bLocal_96 = false;
					bLocal_97 = false;
					bLocal_99 = false;
				
					if (func_309(uParam0, uParam1, false))
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
						func_308(uParam0, *uParam2);
						bLocal_98 = true;
					}
					else
					{
						if (!bParam5)
							func_307();
					
						func_306(uParam0, iParam6);
						func_305(uParam0, uParam1, bParam3, 0);
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
							BUILTIN::SETTIMERB(0);
						}
					}
				}
			}
			break;
	
		case 1:
			if (bLocal_95)
			{
				func_281("Darts", "Dart_Reticules", &fLocal_59, 1, 0, 4, false);
			
				if (BUILTIN::TIMERB() > 25)
				{
					if (func_309(uParam0, uParam1, true))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, false, 0);
						bLocal_95 = false;
						return true;
					}
				}
			}
			else if (!func_301(uParam0))
			{
				if (!bLocal_98)
				{
					func_308(uParam0, *uParam2);
				}
				else
				{
					func_307();
					func_306(uParam0, iParam6);
					func_305(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!bLocal_95)
			{
				bLocal_95 = true;
				BUILTIN::SETTIMERB(0);
			}
			break;
	}

	return false;
}

BOOL func_301(var uParam0) // Position - 0x18D46 (101702)
{
	BOOL num;
	float controlNormal;
	float controlNormal2;

	controlNormal = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X);
	controlNormal2 = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y);
	iLocal_134 = BUILTIN::ROUND(controlNormal2);

	switch (iLocal_133)
	{
		case 0:
			if (iLocal_134 > 120)
			{
				iLocal_135 = MISC::GET_GAME_TIMER();
				iLocal_133 = 1;
			}
		
			if (iLocal_134 < -100)
				iLocal_139 = BUILTIN::ROUND(controlNormal);
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
					iLocal_139 = BUILTIN::ROUND(controlNormal);
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
					fLocal_141 = BUILTIN::TO_FLOAT(iLocal_138) / BUILTIN::TO_FLOAT(iLocal_137);
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
				fLocal_143 = BUILTIN::TO_FLOAT(iLocal_139) / fLocal_148;
				fLocal_144 = fLocal_146 * fLocal_143;
				uParam0->f_8 = uParam0->f_8 + fLocal_144;
			}
			else if (iLocal_139 < -7)
			{
				fLocal_143 = BUILTIN::TO_FLOAT(iLocal_139) / fLocal_147;
				fLocal_144 = fLocal_146 * fLocal_143;
				uParam0->f_8 = uParam0->f_8 - fLocal_144;
			}
			else
			{
				fLocal_144 = 0f;
			}
		
			if (fLocal_142 < 0.066477f && fLocal_144 == 0f)
				func_304();
			else if (fLocal_142 <= 0.066477f && fLocal_144 < 0.06f)
				func_303();
			else
				func_302();
		
			num = 1;
			iLocal_133 = 0;
			break;
	}

	return num;
}

void func_302() // Position - 0x18F04 (102148)
{
	fLocal_68.f_4 = 210;
	fLocal_68.f_5 = 23;
	fLocal_68.f_6 = 19;
	return;
}

void func_303() // Position - 0x18F1E (102174)
{
	fLocal_68.f_4 = 183;
	fLocal_68.f_5 = 137;
	fLocal_68.f_6 = 0;
	return;
}

void func_304() // Position - 0x18F37 (102199)
{
	fLocal_68.f_4 = 16;
	fLocal_68.f_5 = 184;
	fLocal_68.f_6 = 10;
	return;
}

void func_305(var uParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x18F51 (102225)
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
			func_281("Darts", "Dart_Reticules_Zoomed", &fLocal_59, 1, 0, 4, false);
		else
			func_281("Darts", "Dart_Reticules", &fLocal_59, 1, 0, 4, false);
	
		if (!bLocal_99)
			bLocal_99 = true;
	}

	return;
}

void func_306(var uParam0, int iParam1) // Position - 0x19000 (102400)
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

void func_307() // Position - 0x19443 (103491)
{
	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RB))
		fLocal_90 = 0.3f;
	else
		fLocal_90 = 0.1f;

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RT))
	{
		if (bLocal_92)
		{
			if (BUILTIN::TIMERA() > iLocal_140)
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
			BUILTIN::SETTIMERA(0);
			bLocal_92 = true;
			iLocal_91 = iLocal_91 + 1;
		}
		else if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_FST_HLP") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_AIM_HLP") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_CLOCK") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_STD_HLP") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_W") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_B") && !bLocal_93)
		{
			bLocal_93 = true;
		
			if (!IS_BIT_SET(Global_114305, 1))
			{
				_DISPLAY_HELP_TEXT("DARTS_SHT_USE", -1);
				MISC::SET_BIT(&Global_114305, 1);
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

void func_308(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x19552 (103762)
{
	float num;

	num = { 0f, 0f, 0f };
	num = num + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f);
	num.f_2 = num.f_2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f);
	uParam0->f_8 = { uParam1.f_3 + num };
	uParam0->f_2 = { uLocal_80 };
	return;
}

BOOL func_309(var uParam0, var uParam1, BOOL bParam2) // Position - 0x195A6 (103846)
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
	func_294(uParam0);
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
		func_281("Darts", "Dart_Reticules", &fLocal_59, 1, 0, 4, false);

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, uParam0->f_8.f_1 + fLocal_53, uParam0->f_8.f_2) };
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(offsetFromCoordAndHeadingInWorldCoords, &fLocal_68, &(fLocal_68.f_1));
	return true;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x196DD (104157)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_311(int iParam0, BOOL bParam1) // Position - 0x196F0 (104176)
{
	if (iParam0 == 0)
	{
		if (!IS_BIT_SET(Global_114305, 9))
		{
			if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_SHT_USE") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_W") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_B"))
			{
				_DISPLAY_HELP_TEXT("DARTS_AIM_HLP", -1);
				MISC::SET_BIT(&Global_114305, 9);
			}
		}
		else if (bParam1 && !IS_BIT_SET(Global_114305, 7))
		{
			if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_AIM_HLP") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_W") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_B"))
			{
				_DISPLAY_HELP_TEXT("DARTS_CLOCK", -1);
				MISC::SET_BIT(&Global_114305, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_114305, 8))
		{
			if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_SHT_USE") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_W") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_B"))
			{
				_DISPLAY_HELP_TEXT("DARTS_STD_HLP", -1);
				MISC::SET_BIT(&Global_114305, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (!bLocal_94 && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_SHT_USE") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_W") && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_INSTR_B"))
		{
			if (!IS_BIT_SET(Global_114305, 2))
			{
				_DISPLAY_HELP_TEXT("DARTS_FST_HLP", -1);
				MISC::SET_BIT(&Global_114305, 2);
			}
		
			bLocal_94 = true;
		}
	}

	return;
}

BOOL func_312(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x19839 (104505)
{
	Vector3 vector;

	switch (*uParam2)
	{
		case 0:
			vector = { func_315(iParam0) };
			*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, vector) };
			func_314(*uParam3);
			BUILTIN::SETTIMERB(0);
			*uParam2 = 1;
			break;
	
		case 1:
			if (BUILTIN::TIMERB() > 3000 || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
			{
				func_313();
				*uParam2 = 0;
				return true;
			}
			break;
	}

	return false;
}

void func_313() // Position - 0x198AA (104618)
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_118, caLocal_130, 2000, 1, 1);
	CAM::DESTROY_CAM(caLocal_130, false);
	return;
}

void func_314(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x198C6 (104646)
{
	Vector3 vector;

	vector = { -5.5606f, -0.0106f, -131.6781f };
	caLocal_130 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam0, vector, 1115815936, false, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_130, caLocal_118, 2000, 1, 1);
	return;
}

Vector3 func_315(int iParam0) // Position - 0x19908 (104712)
{
	float num;
	float num2;

	if (iParam0 == 50)
	{
		num2 = { 0f, -0.5f, 0f };
	}
	else
	{
		num = func_318(iParam0);
		num2.f_1 = -0.5f;
		num2 = func_317(num);
		num2.f_2 = func_316(num);
	}

	return num2;
}

float func_316(float fParam0) // Position - 0x1994C (104780)
{
	float num;
	float num2;

	num = 0.218f;
	num2 = BUILTIN::COS(fParam0) * num;
	return num2;
}

float func_317(float fParam0) // Position - 0x19968 (104808)
{
	float num;
	float num2;

	num = 0.218f;
	num2 = BUILTIN::SIN(fParam0) * num;
	return num2;
}

float func_318(int iParam0) // Position - 0x19984 (104836)
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

BOOL func_319(var uParam0) // Position - 0x199C0 (104896)
{
	switch (*uParam0)
	{
		case 0:
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_LT))
			{
				func_326(true);
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
					func_324();
					func_323(&caLocal_303, uLocal_334, uLocal_337, 30f, 10, 10, 3, 15f, 0, 0, -1f, true);
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
				func_320(&caLocal_303, true, true, false, false, 1045220557, false, 1065353216, false);
			break;
	
		case 3:
			func_326(false);
			func_517();
		
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

void func_320(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x19AB3 (105139)
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
	func_322(&unk[0], &unk[1], &unk[2], &unk[3], false, false);

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
			unk[2] = -BUILTIN::ROUND(num * iParam5 * 127f);
			unk[3] = -BUILTIN::ROUND(num2 * iParam5 * 127f);
		}
		else
		{
			unk[2] = BUILTIN::ROUND(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCALED_LOOK_LR) * iParam5 * 127f);
			unk[3] = BUILTIN::ROUND(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCALED_LOOK_UD) * iParam5 * 127f);
		}
	
		unk[2] = func_321(unk[2] + uParam0->f_24, -127, 127);
		unk[3] = func_321(unk[3] + uParam0->f_25, -127, 127);
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
		uParam0->f_8.f_2 = -(BUILTIN::TO_FLOAT(unk[2]) / 127f) * (float)uParam0->f_20;
		uParam0->f_8.f_1 = (-uParam0->f_8.f_2 * (float)uParam0->f_22) / (float)uParam0->f_20;
		uParam0->f_8 = -(BUILTIN::TO_FLOAT(unk[3]) / 127f) * (float)uParam0->f_21;
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}

	num3 = 30f * BUILTIN::TIMESTEP();
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
		uParam0->f_14 = func_14(uParam0->f_14, BUILTIN::TO_FLOAT(-uParam0->f_21), BUILTIN::TO_FLOAT(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, BUILTIN::TO_FLOAT(-uParam0->f_22), BUILTIN::TO_FLOAT(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, BUILTIN::TO_FLOAT(-uParam0->f_20), BUILTIN::TO_FLOAT(uParam0->f_20));
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
				if (BUILTIN::TO_FLOAT(unk[3]) > 127f)
					uParam0->f_17 = uParam0->f_17 - (float)BUILTIN::ROUND((BUILTIN::TO_FLOAT(unk[3]) / 128f) * (uParam0->f_19 / 2f));
			}
			else
			{
				uParam0->f_17 = uParam0->f_17 + (float)BUILTIN::ROUND((BUILTIN::TO_FLOAT(unk[1]) / 128f) * uParam0->f_19);
				uParam0->f_17 = uParam0->f_17 - (float)BUILTIN::ROUND((BUILTIN::TO_FLOAT(unk[3]) / 128f) * uParam0->f_19);
			}
		}
		else if (bParam3)
		{
			if (BUILTIN::TO_FLOAT(unk[1]) < 0f)
				uParam0->f_17 = uParam0->f_17 + (float)BUILTIN::ROUND((BUILTIN::TO_FLOAT(unk[1]) / 128f) * uParam0->f_19);
		}
		else
		{
			uParam0->f_17 = uParam0->f_17 + (float)BUILTIN::ROUND((BUILTIN::TO_FLOAT(unk[1]) / 128f) * uParam0->f_19);
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

int func_321(int iParam0, int iParam1, int iParam2) // Position - 0x1A007 (106503)
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

void func_322(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1A02C (106540)
{
	*uParam0 = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	*uParam1 = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	*uParam2 = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	*uParam3 = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);

	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X))
			*uParam0 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y))
			*uParam1 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X))
			*uParam2 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y))
			*uParam3 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);
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

void func_323(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, BOOL bParam15) // Position - 0x1A130 (106800)
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

void func_324() // Position - 0x1A228 (107048)
{
	if (bLocal_259)
		return;

	func_325();
	PAD::INIT_PC_SCRIPTED_CONTROLS("Darts Zoom");
	bLocal_259 = true;
	return;
}

void func_325() // Position - 0x1A24A (107082)
{
	if (bLocal_258 || bLocal_259)
	{
		PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
		bLocal_258 = false;
		bLocal_259 = false;
	}

	return;
}

void func_326(BOOL bParam0) // Position - 0x1A26D (107117)
{
	if (bParam0)
		CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_127, caLocal_118, 1000, 1, 1);
	else
		CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_118, caLocal_127, 1000, 1, 1);

	return;
}

void func_327(var uParam0) // Position - 0x1A297 (107159)
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
			func_248(&(uParam0->f_62), func_329(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
	
		case 1:
			if (!func_243(&(uParam0->f_62), 0))
			{
				func_328(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
	
		case 2:
			break;
	}

	return;
}

void func_328(var uParam0) // Position - 0x1A31C (107292)
{
	uParam0->f_8 = 0;
	func_439(&(uParam0->f_2));
	func_439(&(uParam0->f_5));
	return;
}

char* func_329(int iParam0) // Position - 0x1A339 (107321)
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

void func_330(var uParam0) // Position - 0x1A366 (107366)
{
	if (!bLocal_97)
		if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
			bLocal_97 = true;

	if (iLocal_28 == 1 && iLocal_29 < 3 && *uParam0 != 5)
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RDOWN) && bLocal_97)
			*uParam0 = 6;

	return;
}

void func_331(var uParam0, int iParam1) // Position - 0x1A3BE (107454)
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !(iLocal_91 > 0))
			{
				func_122(&(uParam0->f_509), false, false, false, true);
				func_121(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_332(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_121(&(uParam0->f_509), "IB_ZOOM" /*Zoom*/, 2, 228, 1, 1, 0);
				func_118(&(uParam0->f_509), true);
				func_338(&(uParam0->f_666), 8, false);
				func_338(&(uParam0->f_666), 16, false);
				func_338(&(uParam0->f_666), 23, false);
			}
			else if (iLocal_91 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_122(&(uParam0->f_509), false, false, false, true);
				func_121(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_332(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_121(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_121(&(uParam0->f_509), "IB_ZOOM" /*Zoom*/, 2, 228, 1, 1, 0);
				func_118(&(uParam0->f_509), true);
				func_338(&(uParam0->f_666), 8, false);
				func_338(&(uParam0->f_666), 16, false);
				func_338(&(uParam0->f_666), 23, false);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_122(&(uParam0->f_509), true, false, false, true);
			func_121(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_121(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_118(&(uParam0->f_509), true);
			func_338(&(uParam0->f_666), 16, true);
			func_338(&(uParam0->f_666), 8, false);
			func_338(&(uParam0->f_666), 15, false);
			func_338(&(uParam0->f_666), 17, false);
			func_338(&(uParam0->f_666), 23, false);
		}
	
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		func_206(func_3(&(uParam0->f_666), 16) ? 1 : 2);
		func_124(&(uParam0->f_509), 200f, 1, false, false, 1065353216);
	}
	else if (func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16) || func_3(&(uParam0->f_666), 23))
	{
		func_338(&(uParam0->f_666), 15, false);
		func_338(&(uParam0->f_666), 16, false);
		func_338(&(uParam0->f_666), 23, false);
	}

	return;
}

int func_332(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1A67A (108154)
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

void func_333(var uParam0) // Position - 0x1A745 (108357)
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_122(&(uParam0->f_509), false, false, false, true);
			func_332(&(uParam0->f_509), "IB_MAPMOVE" /*Move*/, 2, 21, 1, 0);
			func_121(&(uParam0->f_509), "IB_ZOOM" /*Zoom*/, 2, 39, 1, 1, 0);
			func_118(&(uParam0->f_509), true);
			func_338(&(uParam0->f_666), 23, true);
			func_338(&(uParam0->f_666), 8, false);
			func_338(&(uParam0->f_666), 16, false);
			func_338(&(uParam0->f_666), 15, false);
			func_338(&(uParam0->f_666), 17, false);
		}
	
		func_124(&(uParam0->f_509), 1128792064, 1, false, true, 1065353216);
	}
	else if (func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16) || func_3(&(uParam0->f_666), 23))
	{
		func_338(&(uParam0->f_666), 15, false);
		func_338(&(uParam0->f_666), 16, false);
		func_338(&(uParam0->f_666), 23, false);
		func_338(&(uParam0->f_666), 17, false);
	}

	return;
}

void func_334(var uParam0) // Position - 0x1A857 (108631)
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

void func_335(Ped pedParam0) // Position - 0x1A8FA (108794)
{
	if (!PED::IS_PED_INJURED(pedParam0))
		func_4(pedParam0, "DARTS_BOAST", false, 4);

	return;
}

float func_336(int iParam0) // Position - 0x1A918 (108824)
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

float func_337(int iParam0) // Position - 0x1A96D (108909)
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

void func_338(int* piParam0, int iParam1, BOOL bParam2) // Position - 0x1A9C2 (108994)
{
	if (bParam2)
		MISC::SET_BIT(piParam0, iParam1);
	else
		MISC::CLEAR_BIT(piParam0, iParam1);

	return;
}

BOOL func_339(int iParam0, var uParam1) // Position - 0x1A9E2 (109026)
{
	if (iParam0 >= 10)
	{
		if (!IS_BIT_SET(Global_114344.f_18974.f_6, 12))
		{
			*uParam1 = 12;
			return true;
		}
	}

	return false;
}

BOOL func_340(var uParam0, var uParam1, var uParam2) // Position - 0x1AA0B (109067)
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
			func_251(&uParam0->f_5[i /*79*/][j /*26*/]);
		}
	
		func_250(uParam1, i);
		func_256(uParam1, i, 301);
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
	func_338(&(uParam2->f_666), 6, false);
	func_346();
	func_344(uParam2);

	if (uParam0->f_457)
	{
		func_341(uParam0->f_457);
		uParam0->f_457 = 0;
	}

	return true;
}

void func_341(BOOL bParam0) // Position - 0x1AAF7 (109303)
{
	HUD::DISPLAY_RADAR(false);

	if (CAM::IS_CAM_ACTIVE(caLocal_120))
		CAM::SET_CAM_ACTIVE(caLocal_120, false);

	if (CAM::IS_CAM_ACTIVE(caLocal_124))
		CAM::SET_CAM_ACTIVE(caLocal_124, false);

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_343();
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::DO_SCREEN_FADE_IN(500);
	}

	func_342(bParam0);
	return;
}

void func_342(BOOL bParam0) // Position - 0x1AB48 (109384)
{
	if (bParam0)
		CAM::SET_CAM_ACTIVE(caLocal_118, true);

	return;
}

void func_343() // Position - 0x1AB5C (109404)
{
	CAM::SET_CAM_ACTIVE(caLocal_120, true);
	return;
}

void func_344(var uParam0) // Position - 0x1AB6B (109419)
{
	func_345();
	uParam0->f_670 = 3;
	func_338(&(uParam0->f_666), 15, false);
	func_338(&(uParam0->f_666), 16, false);
	func_338(&(uParam0->f_666), 17, false);
	return;
}

void func_345() // Position - 0x1ABA1 (109473)
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

void func_346() // Position - 0x1AC11 (109585)
{
	BUILTIN::SETTIMERA(0);
	bLocal_97 = false;
	HUD::CLEAR_SMALL_PRINTS();
	return;
}

void func_347(BOOL bParam0, int iParam1) // Position - 0x1AC25 (109605)
{
	int num;

	if (!func_349(&num, false, iParam1))
		return;

	if (Global_24131.f_9148)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
		Global_24131.f_9148 = 0;
	}

	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);

	if (Global_24131.f_6231[num])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_24131.f_6231[num] = false;
	}

	if (Global_24131.f_6217[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_24131.f_6217[num] = false;
	}

	if (Global_24131.f_6224[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_24131.f_6224[num] = false;
	}

	if (bParam0)
	{
		func_348(&Global_24131.f_6263[num /*10*/]);
		Global_24131.f_6324[num] = 0;
	}
	else
	{
		Global_24131.f_6324[num] = 0;
	}

	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
	return;
}

void func_348(int iParam0) // Position - 0x1ACEB (109803)
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

BOOL func_349(var uParam0, BOOL bParam1, int iParam2) // Position - 0x1AD17 (109847)
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
		if (Global_24131.f_6324[i] == hashKey)
		{
			*uParam0 = i;
			return true;
		}
		else if (Global_24131.f_6324[i] == 0)
		{
			num = i;
		}
	}

	if (bParam1)
	{
		if (num != -1)
		{
			Global_24131.f_6324[num] = hashKey;
			*uParam0 = num;
			return true;
		}
	}

	return false;
}

void func_350(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1ADB4 (110004)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_351(var uParam0, var uParam1, var uParam2) // Position - 0x1ADE4 (110052)
{
	char* gxt;
	int num;
	int num2;

	num = 0;
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);

	if (!func_3(&(uParam0->f_666), 7))
	{
		func_419(false, false, false, true);
		func_418(false, -1, true);
	
		if (func_417())
		{
			if (Global_4543037 == uParam0->f_660)
			{
				num = 1;
			}
			else
			{
				uParam0->f_660 = Global_4543037;
				func_416(uParam0->f_660, true, 1);
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
					func_415(gxt, 0, 0);
			}
		
			Global_4543038 = MISC::GET_GAME_TIMER() + 300;
		}
		else if (func_414() && MISC::GET_GAME_TIMER() > Global_4543038)
		{
			if (Global_4543037 == uParam0->f_660)
			{
				num2 = func_413(0);
			
				if (num2 == -1 || num2 == 1)
					num = 1;
			}
		
			Global_4543038 = MISC::GET_GAME_TIMER() + 300;
		}
	
		if (func_412(&(uParam0->f_639)))
		{
			uParam0->f_660 = uParam0->f_660 - 1;
		
			if (uParam0->f_660 < 0)
				uParam0->f_660 = uParam0->f_661 - 1;
		
			func_416(uParam0->f_660, true, 1);
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
				func_415(gxt, 0, 0);
		}
	
		if (func_411(&(uParam0->f_642)))
		{
			uParam0->f_660 = uParam0->f_660 + 1;
		
			if (uParam0->f_660 > uParam0->f_661 - 1)
				uParam0->f_660 = 0;
		
			func_416(uParam0->f_660, true, 1);
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
				func_415(gxt, 0, 0);
		}
	
		if (func_410(&(uParam0->f_633)) || func_409(&(uParam0->f_633), uParam0->f_660, num))
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
			func_395(uParam0);
		}
	
		if (func_394(&(uParam0->f_636)) || func_392(&(uParam0->f_636), uParam0->f_660, num))
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
			func_395(uParam0);
		}
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || num == 1 && uParam0->f_660 == 2)
		{
			*uParam1 = func_391(uParam0->f_662 + 1, true);
			*uParam2 = func_391(uParam0->f_664 + 1, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			return true;
		}
	
		func_355(true, -1, true, false, true, -1082130432, false, false, -1);
	
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL) || func_354())
		{
			func_352(false, false);
			func_338(&(uParam0->f_666), 8, false);
			func_338(&(uParam0->f_666), 7, true);
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
			func_395(uParam0);
			func_338(&(uParam0->f_666), 7, false);
		}
	}

	return false;
}

void func_352(BOOL bParam0, BOOL bParam1) // Position - 0x1B1F4 (111092)
{
	int i;
	int j;
	float aspectRatio;

	for (i = 0; i < 256; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_24131.f_79[i /*6*/], "", 24);
	
		for (j = 0; j < 4; j = j + 1)
		{
			Global_24131.f_2387[i /*5*/][j] = 0;
		}
	}

	for (i = 0; i < 50; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_2697093[i /*16*/], "", 64);
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_24131.f_4469[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_24131.f_4726[i] = 0f;
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_24131.f_4984[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_24131.f_5692[i] = 0;
		Global_24131.f_5830[i] = false;
		Global_24131.f_5959[i] = false;
		Global_24131.f_6482[i] = 0f;
		Global_24131.f_6088[i] = false;
		Global_24131.f_6348[i] = 0f;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		Global_24131.f_5659[i] = 0;
		Global_24131.f_5671[i] = 0f;
		Global_24131.f_5665[i] = -1f;
		Global_24131.f_5678[i] = false;
		Global_24131.f_5686[i] = 1;
	}

	for (i = 0; i < 14; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_24131.f_5553[i /*4*/], "", 16);
		Global_24131.f_5610[i] = -1;
		Global_24131.f_5625[i] = 365;
		Global_24131.f_5640[i] = 32;
	}

	for (i = 0; i < 67; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_24131.f_6623[i /*16*/], "", 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_24131.f_7696[i /*16*/], "", 64);
	}

	if (bParam1)
	{
		for (i = 0; i < 256; i = i + 1)
		{
			Global_24131.f_1616[i] = false;
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_4542961.f_16), "", 16);
	Global_4542961.f_20 = -1;
	Global_24131 = false;
	Global_24131.f_5821 = 0;
	Global_24131.f_5822 = 0;
	Global_24131.f_5823 = 0;
	Global_24131.f_5825 = 0;
	Global_24131.f_5826 = 0;
	Global_24131.f_5827 = 0;
	Global_24131.f_5824 = 0;
	Global_24131.f_6477 = 0;
	Global_24131.f_6617 = 0;
	Global_24131.f_6342 = 0;
	Global_24131.f_6341 = 0;
	Global_24131.f_6343 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_24131.f_5241), "", 24);
	Global_24131.f_5319 = 0;
	Global_24131.f_5320 = 0;
	Global_24131.f_5321 = 0;
	Global_24131.f_5322 = 0;
	Global_24131.f_5323 = 0;
	Global_24131.f_5324 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_24131.f_5253[i] = 0;
	}

	Global_24131.f_5325 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4542961.f_21), "", 16);
	Global_4542961.f_61 = 0;
	Global_4542961.f_62 = 0;
	Global_4542961.f_63 = 0;
	Global_4542961.f_64 = 0;
	Global_4542961.f_65 = 0;
	Global_4542961.f_66 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_4542961.f_25[i] = 0;
	}

	Global_4542961.f_67 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_24131.f_1), "", 16);
	Global_24131.f_5677 = 0f;
	Global_24131.f_74 = 0;
	Global_24131.f_75 = 0;
	Global_24131.f_76 = 0;
	Global_24131.f_77 = 0;
	Global_24131.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_24131.f_5[i] = 0;
	}

	Global_24131.f_6347 = 0;
	Global_24131.f_6346 = 0;
	Global_24131.f_6344 = 0;
	Global_24131.f_6345 = 0;
	Global_24131.f_5326 = 0;
	Global_24131.f_5327 = 0;
	Global_24131.f_5828 = 10;
	Global_24131.f_5829 = 0;
	Global_24131.f_6479 = 0f;
	Global_24131.f_6480 = 0f;
	Global_24131.f_6331 = 0;
	Global_24131.f_6332 = 0;
	Global_24131.f_6333 = 0f;
	Global_24131.f_6334 = 0;
	Global_24131.f_6336 = 0;
	Global_24131.f_6335 = 0;
	Global_24131.f_6337 = 0;
	Global_24131.f_6338 = 0;
	Global_24131.f_6339 = 0;
	Global_24131.f_6340 = 0;
	Global_24131.f_9144 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_24131.f_6611[i] = -1;
		Global_24131.f_6614[i] = -1;
	}

	Global_24131.f_5684 = 0f;
	Global_24131.f_5655 = 0;
	Global_24131.f_5685 = 0;

	for (i = 0; i < Global_24131.f_6618; i = i + 1)
	{
		Global_24131.f_6618[i] = 0;
	}

	Global_24131.f_9123 = 0;
	Global_24131.f_9118 = 0;
	Global_24131.f_9128 = 0;
	Global_24131.f_9133 = 0;
	Global_24131.f_9138 = 0;
	Global_24131.f_9140 = 0;
	Global_24131.f_9146 = 0;
	Global_24131.f_9149 = func_353(false);
	Global_24128 = 0.05f;
	Global_24129 = 0.05f;
	Global_24130 = 0.225f;
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (!bParam0 && aspectRatio < 1.7777778f)
		Global_24130 = 0.225f * (1.7777778f / aspectRatio);

	return;
}

float func_353(BOOL bParam0) // Position - 0x1B6D6 (112342)
{
	float aspectRatio;

	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (!bParam0 && aspectRatio < 1.7777778f)
		aspectRatio = 1.7777778f;

	return aspectRatio;
}

BOOL func_354() // Position - 0x1B701 (112385)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL))
			return true;

	return false;
}

void func_355(BOOL bParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Position - 0x1B720 (112416)
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

	if (!func_349(&num, false, iParam1))
		return;

	num == -1;

	if (!func_388(false, bParam6))
		return;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num38 = 0f;

	if (Global_24131)
		if (func_19(30, true, true, &num26, &num27, bParam7))
			num39 = num27 / num26;
		else
			Global_24131 = false;

	if (iParam5 == -1f)
		iParam5 = Global_24130;

	num38 = iParam5 * num39;

	if (MISC::GET_HASH_KEY(&(Global_24131.f_1)) == MISC::GET_HASH_KEY("HIDE"))
		num40 = Global_24129;
	else
		num40 = Global_24129 + num38 + 0.034722f + 0f;

	num41 = 1f;
	func_21(bParam7, &unk3, &unk4, &num41);

	if (bParam3)
	{
		if (Global_24131.f_5821 <= 1)
		{
			func_384(Global_24131.f_5821 + 1, "DFLT_MNU_OPT" /*Exit*/, 0, true, 0, false, 0);
			Global_24131.f_6617 = 1;
		}
	}

	for (i = 0; i < 2; i = i + 1)
	{
		if (i == 1 && Global_24131.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_24131.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				num36 = Global_24129;
			}
			else
			{
				if (Global_24131)
				{
					TEXT_LABEL_ASSIGN_STRING(&unk5, func_26(30), 64);
					TEXT_LABEL_ASSIGN_STRING(&unk21, func_23(30, true), 64);
				
					if (MISC::GET_HASH_KEY(&Global_24131.f_7696[30 /*16*/]) == joaat("CREW_LOGO"))
					{
						func_383(Global_24128, Global_24129, iParam5, num38, 0, 0, 0, 255);
						func_382(&unk5, &unk21, Global_24128 + (iParam5 * 0.5f), Global_24129 + (num38 * 0.5f), iParam5, num38, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						func_382(&unk5, &unk21, Global_24128 + (iParam5 * 0.5f), Global_24129 + (num38 * 0.5f), iParam5, num38, 0f, 255, 255, 255, 255, false, 0);
					}
				}
			
				if (Global_24131.f_9118)
				{
					r = Global_24131.f_9114;
					g = Global_24131.f_9115;
					b = Global_24131.f_9116;
					a = Global_24131.f_9117;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
			
				func_383(Global_24128, Global_24129 + num38, iParam5, 0.034722f, r, g, b, a);
				num36 = Global_24129 + num38 + 0.034722f + 0f;
			
				if (MISC::GET_HASH_KEY(&(Global_24131.f_1)) != 0)
				{
					func_381();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24131.f_1));
					num7 = 0;
					num8 = 0;
					num9 = 0;
					num10 = 0;
				
					for (l = 0; l < Global_24131.f_74; l = l + 1)
					{
						if (Global_24131.f_5[l] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24131.f_10[num7]);
							num7 = num7 + 1;
						}
						else if (Global_24131.f_5[l] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24131.f_14[num8], Global_24131.f_18[num8]);
							num8 = num8 + 1;
						}
						else if (Global_24131.f_5[l] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_24131.f_5[l] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_24131.f_5[l] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24131.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_24131.f_5[l] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_24131.f_5[l] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24131.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_24131.f_5[l] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24131.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
					}
				
					func_380(Global_24128 + 0.00390625f, Global_24129 + num38 + 0.00416664f, 0);
				}
			
				if (Global_24131.f_6338)
				{
					func_381();
					func_378((Global_24128 + iParam5) - 0.00390625f - func_379("CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_24131.f_6339, Global_24131.f_6340), Global_24129 + num38 + 0.00416664f, "CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_24131.f_6339, Global_24131.f_6340);
				}
				else if (Global_24131.f_6334 > Global_24131.f_5828)
				{
					if (Global_24131.f_6337 != 0)
					{
						func_381();
						func_378((Global_24128 + iParam5) - 0.00390625f - func_379("CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_24131.f_6337, Global_24131.f_6336), Global_24129 + num38 + 0.00416664f, "CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_24131.f_6337, Global_24131.f_6336);
					}
				}
			}
		
			numberOfLinesForString = Global_24131.f_6341;
			num2 = 0;
			num42 = num36;
		
			if (Global_24131.f_9128)
			{
				r = Global_24131.f_9124;
				g = Global_24131.f_9125;
				b = Global_24131.f_9126;
				a = Global_24131.f_9127;
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
			}
		
			while (num2 < Global_24131.f_5828 && numberOfLinesForString <= Global_24131.f_5821)
			{
				if (numberOfLinesForString >= 0)
				{
					if (Global_24131.f_6088[numberOfLinesForString])
					{
						if (Global_24131.f_5959[numberOfLinesForString] && numberOfLinesForString != Global_24131.f_6341)
							num36 = num36 + 0.00277776f;
					
						num37 = 0.034722f;
					
						if (Global_24131.f_6348[numberOfLinesForString] != 0f)
							num37 = Global_24131.f_6348[numberOfLinesForString];
					
						num36 = num36 + num37;
						num2 = num2 + 1;
					}
				}
			
				numberOfLinesForString = numberOfLinesForString + 1;
			}
		
			func_382("CommonMenu", "Gradient_Bgd", Global_24128 + (iParam5 * 0.5f), (num42 + ((num36 - num42) * 0.5f)) - 0.00138888f, iParam5, num36 - num42, 0f, 255, 255, 255, 255, false, 0);
		
			if (Global_24131.f_6334 > Global_24131.f_5828)
			{
				if (Global_24131.f_9133)
				{
					r = Global_24131.f_9129;
					g = Global_24131.f_9130;
					b = Global_24131.f_9131;
					a = Global_24131.f_9132;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 204;
				}
			
				func_383(Global_24128, num36 + 0f, iParam5, 0.034722f, r, g, b, a);
				textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				textureResolution = textureResolution * (0.5f / num41);
				textureResolution.f_1 = textureResolution.f_1 * (0.5f / num41);
			
				if (Global_24131.f_9146)
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
			
				func_382("CommonMenu", "shop_arrows_upANDdown", Global_24128 + (iParam5 * 0.5f), num36 + 0f + (0.034722f * 0.5f), (textureResolution / 1280f) * num41, (textureResolution.f_1 / 720f) * num41, 0f, r, g, b, a, false, 0);
				num36 = num36 + 0f + 0.034722f;
			}
		
			if (MISC::GET_HASH_KEY(&(Global_24131.f_5241)) != 0 && Global_24131.f_5323 != -1)
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_24128 + 0.0046875f;
			
				if (Global_24131.f_5325 != 0)
				{
					func_19(Global_24131.f_5325, true, true, &num26, &num27, bParam7);
					x = (Global_24128 + num26 + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_377(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24131.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_24131.f_5319; l = l + 1)
				{
					if (Global_24131.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24131.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_24131.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24131.f_5262[num8], Global_24131.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_24131.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_383(Global_24128, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_24131.f_9138)
				{
					r = Global_24131.f_9134;
					g = Global_24131.f_9135;
					b = Global_24131.f_9136;
					a = Global_24131.f_9137;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_382("CommonMenu", "Gradient_Bgd", Global_24128 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_377(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24131.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_24131.f_5319; l = l + 1)
				{
					if (Global_24131.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24131.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_24131.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24131.f_5262[num8], Global_24131.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_24131.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				func_380(x, num36 + 0.00277776f, 0);
			
				if (Global_24131.f_5325 != 0)
				{
					func_19(Global_24131.f_5325, true, true, &num26, &num27, bParam7);
					func_376(Global_24131.f_5325, true, &num32, &num33, &num34, &num35);
					func_382(func_26(Global_24131.f_5325), func_23(Global_24131.f_5325, true), Global_24128 + (num26 * 0.5f) + (0.00078125f * 2f), (num36 + (num27 * 0.5f)) - (0.00138888f * 4f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
				}
			
				num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24131.f_5247)))
				{
					num36 = num36 + (0.00138888f * 6f);
					func_377(x);
					size = 0.35f;
				
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_24131.f_5247))) > 600)
						size = 0.35f * 0.625f;
				
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24131.f_5247));
					numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
					HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
					func_383(Global_24128, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
				
					if (Global_24131.f_9138)
					{
						r = Global_24131.f_9134;
						g = Global_24131.f_9135;
						b = Global_24131.f_9136;
						a = Global_24131.f_9137;
					}
					else
					{
						HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
					}
				
					func_382("CommonMenu", "Gradient_Bgd", Global_24128 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
					func_377(x);
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24131.f_5247));
					func_380(x, num36 + 0.00277776f, 0);
					num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
				}
			
				if (Global_24131.f_5323 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_24131.f_5324 > Global_24131.f_5323)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_24131.f_5241), "", 24);
						Global_24131.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24131.f_5247)))
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_24128 + 0.0046875f;
				size2 = 0.35f;
			
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_24131.f_5247))) > 600)
					size2 = 0.35f * 0.625f;
			
				func_377(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24131.f_5247));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_24131.f_5319; l = l + 1)
				{
					if (Global_24131.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24131.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_24131.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24131.f_5262[num8], Global_24131.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_24131.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24131.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24131.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_383(Global_24128, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_24131.f_9138)
				{
					r = Global_24131.f_9134;
					g = Global_24131.f_9135;
					b = Global_24131.f_9136;
					a = Global_24131.f_9137;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_382("CommonMenu", "Gradient_Bgd", Global_24128 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
				func_377(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24131.f_5247));
				func_380(x, num36 + 0.00277776f, 0);
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4542961.f_21)) != 0 && Global_4542961.f_65 != -1)
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_24128 + 0.0046875f;
			
				if (Global_4542961.f_67 != 0)
				{
					func_19(Global_4542961.f_67, true, true, &num26, &num27, bParam7);
					x = (Global_24128 + num26 + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_377(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4542961.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4542961.f_61; l = l + 1)
				{
					if (Global_4542961.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542961.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4542961.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4542961.f_34[num8], Global_4542961.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4542961.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_383(Global_24128, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_24131.f_9138)
				{
					r = Global_24131.f_9134;
					g = Global_24131.f_9135;
					b = Global_24131.f_9136;
					a = Global_24131.f_9137;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_382("CommonMenu", "Gradient_Bgd", Global_24128 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_377(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4542961.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4542961.f_61; l = l + 1)
				{
					if (Global_4542961.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542961.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4542961.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4542961.f_34[num8], Global_4542961.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4542961.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				func_380(x, num36 + 0.00277776f, 0);
			
				if (Global_4542961.f_67 != 0)
				{
					func_19(Global_4542961.f_67, true, true, &num26, &num27, bParam7);
					func_376(Global_4542961.f_67, true, &num32, &num33, &num34, &num35);
					func_382(func_26(Global_4542961.f_67), func_23(Global_4542961.f_67, true), Global_24128 + (num26 * 0.5f) + (0.00078125f * 2f), (num36 + (num27 * 0.5f)) - (0.00138888f * 4f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
				}
			
				num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (Global_4542961.f_65 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_4542961.f_66 > Global_4542961.f_65)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_4542961.f_21), "", 16);
						Global_4542961.f_65 = -1;
					}
				}
			}
		
			func_370(unk3, iParam1, iParam8, false, false, false, bParam4, 1, false);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
	
		if (i == 1 || !Global_24131.f_6331)
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
			num43 = Global_24131.f_5821;
		
			if (Global_24131.f_6332)
				num43 = Global_24131.f_6335 - 1;
		
			num44 = 0f;
			num45 = 0f;
		
			for (j = 0; j <= num43; j = j + 1)
			{
				num37 = 0.034722f;
			
				if (Global_24131.f_6348[numberOfLinesForString] != 0f)
					num37 = Global_24131.f_6348[numberOfLinesForString];
			
				if (Global_24131.f_6332)
					numberOfLinesForString = Global_24131.f_8769[j];
				else
					numberOfLinesForString = j;
			
				num5 = num6;
				flag2 = false;
			
				if (numberOfLinesForString >= Global_24131.f_6341 && num2 < Global_24131.f_5828)
				{
					flag2 = true;
				
					if (Global_24131.f_6342 == numberOfLinesForString)
						num45 = num44;
				
					if (Global_24131.f_5959[numberOfLinesForString])
						num5 = num5 + 1;
				
					num25 = num40 + num44 + (0.00277776f * (float)num5) + 0.00277776f;
				}
			
				Global_24131.f_6482[numberOfLinesForString] = num25;
				num24 = Global_24128 + 0.0046875f;
				flag3 = false;
				flag = Global_24131.f_6342 == numberOfLinesForString;
			
				if (flag && i == 1 && flag2)
				{
					r2 = 255;
					g2 = 255;
					b2 = 255;
					a2 = 255;
				
					if (Global_24131.f_9140)
						HUD::GET_HUD_COLOUR(Global_24131.f_9139, &r2, &g2, &b2, &a2);
					else
						HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r2, &g2, &b2, &a2);
				
					func_382("CommonMenu", "Gradient_Nav", Global_24128 + (iParam5 * 0.5f), num40 + num45 + (0.00277776f * (float)num5) + (num37 * 0.5f), iParam5, num37, 0f, r2, g2, b2, a2, false, 0);
					Global_24131.f_6480 = num25;
				}
			
				for (k = 0; k < Global_24131.f_5829; k = k + 1)
				{
					if (IS_BIT_SET(Global_24131.f_5692[numberOfLinesForString], k) || Global_24131.f_5659[k] == 5)
					{
						if (Global_24131.f_6332)
						{
							num11 = Global_24131.f_8785[(num2 * Global_24131.f_5829) + k];
							num12 = Global_24131.f_8826[(num2 * Global_24131.f_5829) + k];
							num13 = Global_24131.f_8867[(num2 * Global_24131.f_5829) + k];
							num14 = Global_24131.f_8908[(num2 * Global_24131.f_5829) + k];
							num15 = Global_24131.f_8949[(num2 * Global_24131.f_5829) + k];
						}
						else
						{
							Global_24131.f_8785[(num2 * Global_24131.f_5829) + k] = num11;
							Global_24131.f_8826[(num2 * Global_24131.f_5829) + k] = num12;
							Global_24131.f_8867[(num2 * Global_24131.f_5829) + k] = num13;
							Global_24131.f_8908[(num2 * Global_24131.f_5829) + k] = num14;
							Global_24131.f_8949[(num2 * Global_24131.f_5829) + k] = num15;
						}
					
						num46 = 0;
						flag7 = false;
					
						if (Global_24131.f_6614[0] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_24131.f_6611[0])
							{
								flag7 = true;
								num46 = 0;
							}
						}
					
						if (Global_24131.f_6614[1] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_24131.f_6611[1])
							{
								flag7 = true;
								num46 = 1;
							}
						}
					
						if (Global_24131.f_5665[k] != -1f)
							num24 = Global_24128 + 0.0046875f + Global_24131.f_5665[k];
					
						if (k < 4 && Global_24131.f_5665[k + 1] != -1f && num24 < Global_24131.f_5665[k + 1])
							num31 = Global_24131.f_5665[k + 1] - num24;
						else
							num31 = (Global_24128 + Global_24130) - 0.0046875f - num24;
					
						if (Global_24131.f_5678[k] && Global_24131.f_6477 && flag)
							flag6 = true;
						else
							flag6 = false;
					
						switch (Global_24131.f_5659[k])
						{
							case 0:
								break;
						
							case 1:
								num16 = num11;
							
								if (flag2)
								{
									if (!Global_24131.f_6332)
									{
										num28 = 0f;
										num29 = 0f;
										num17 = 0;
										num18 = 0;
										num19 = 0;
										num20 = 0;
										num21 = 0;
									
										if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0)
										{
											flag4 = false;
											flag5 = false;
										
											for (l = 0; l < 4; l = l + 1)
											{
												if (Global_24131.f_2387[num16 /*5*/][l] == 5 || Global_24131.f_2387[num16 /*5*/][l] == 8)
													flag5 = true;
												else if (Global_24131.f_2387[num16 /*5*/][l] == 9)
													flag4 = true;
											}
										
											if (Global_24131.f_2130[num16])
												flag5 = true;
										
											func_367(flag, Global_24131.f_1616[num16], Global_24131.f_1873[num16], flag7, num46, flag5, flag4);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_24131.f_79[num16 /*6*/]);
										}
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_24131.f_2387[num16 /*5*/][l] == 1)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_24131.f_2387[num16 /*5*/][l] == 8)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_24131.f_2387[num16 /*5*/][l] == 5)
											{
												if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697093[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_24131.f_2387[num16 /*5*/][l] == 6)
											{
												if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2697093[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_24131.f_2387[num16 /*5*/][l] == 7)
											{
												if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697093[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_24131.f_2387[num16 /*5*/][l] == 9)
											{
												if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697093[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_24131.f_2387[num16 /*5*/][l] == 2)
											{
												if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24131.f_4469[num12 + num18]);
											
												num18 = num18 + 1;
											}
											else if (Global_24131.f_2387[num16 /*5*/][l] == 3)
											{
												if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24131.f_4726[num13 + num19], Global_24131.f_4855[num13 + num19]);
											
												num19 = num19 + 1;
											}
											else if (Global_24131.f_2387[num16 /*5*/][l] == 4)
											{
												num20 = num20 + 1;
											}
										}
									
										if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0)
											num28 = func_364(true);
									
										if (num20 > 0)
										{
											for (l = 0; l < num20; l = l + 1)
											{
												if (func_19(Global_24131.f_4984[num14 + l], flag, false, &num26, &num27, bParam7))
												{
													num29 = num29 + num26;
												
													if (l > 0)
														num29 = num29 - (0.00078125f * 4f);
												
													if (Global_24131.f_4984[num14 + l] == 2 || Global_24131.f_4984[num14 + l] == 55 || Global_24131.f_4984[num14 + l] == 65)
														num29 = num29 - (0.00078125f * 5f);
												}
											}
										}
									
										x = 0f;
									
										if (Global_24131.f_5686[k] == 2)
											x = x + (num31 - (num28 + num29)) + (0.00078125f * 1f);
										else if (Global_24131.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - ((num28 + num29) * 0.5f));
									
										Global_24131.f_8990[(num2 * Global_24131.f_5829) + k] = x;
										Global_24131.f_9031[(num2 * Global_24131.f_5829) + k] = num28;
										Global_24131.f_9072[(num2 * Global_24131.f_5829) + k] = num29;
									
										if (Global_24131.f_5686[k] == 2)
										{
											for (m = k - 1; m >= 0; m = m + -1)
											{
												if (Global_24131.f_5686[m] == 2)
													Global_24131.f_8990[(num2 * Global_24131.f_5829) + m] = Global_24131.f_8990[(num2 * Global_24131.f_5829) + m] - Global_24131.f_5671[k];
											}
										}
									}
									else
									{
										x = Global_24131.f_8990[(num2 * Global_24131.f_5829) + k];
										num28 = Global_24131.f_9031[(num2 * Global_24131.f_5829) + k];
										num29 = Global_24131.f_9072[(num2 * Global_24131.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_19(27, true, false, &num26, &num27, bParam7))
										{
											if (Global_24131.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_19(27, true, true, &num26, &num27, bParam7))
											{
												func_376(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_382(func_26(27), func_23(27, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_19(28, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_19(28, true, true, &num26, &num27, bParam7))
											{
												func_376(28, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_382(func_26(28), func_23(28, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									num17 = 0;
									num18 = 0;
									num19 = 0;
									num20 = 0;
									num21 = 0;
									num23 = 0;
								
									if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										flag4 = false;
										flag5 = false;
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_24131.f_2387[num16 /*5*/][l] == 5 || Global_24131.f_2387[num16 /*5*/][l] == 8)
												flag5 = true;
											else if (Global_24131.f_2387[num16 /*5*/][l] == 9)
												flag4 = true;
										}
									
										if (Global_24131.f_2130[num16])
											flag5 = true;
									
										func_367(flag, Global_24131.f_1616[num16], Global_24131.f_1873[num16], flag7, 0, flag5, flag4);
									
										if (Global_24131.f_9144 && Global_24131.f_9145 == numberOfLinesForString)
											func_363(flag);
									
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Global_24131.f_79[num16 /*6*/]);
									}
								
									for (l = 0; l < 4; l = l + 1)
									{
										if (Global_24131.f_2387[num16 /*5*/][l] == 1)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_79[num16 + num17 /*6*/]);
										
											num23 = 1;
										}
										else if (Global_24131.f_2387[num16 /*5*/][l] == 8)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24131.f_79[num16 + num17 /*6*/]);
										
											num23 = 8;
										}
										else if (Global_24131.f_2387[num16 /*5*/][l] == 5)
										{
											if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697093[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 5;
										}
										else if (Global_24131.f_2387[num16 /*5*/][l] == 6)
										{
											if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2697093[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 6;
										}
										else if (Global_24131.f_2387[num16 /*5*/][l] == 7)
										{
											if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697093[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 7;
										}
										else if (Global_24131.f_2387[num16 /*5*/][l] == 9)
										{
											if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697093[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 9;
										}
										else if (Global_24131.f_2387[num16 /*5*/][l] == 2)
										{
											if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24131.f_4469[num12 + num18]);
										
											num18 = num18 + 1;
											num23 = 2;
										}
										else if (Global_24131.f_2387[num16 /*5*/][l] == 3)
										{
											if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24131.f_4726[num13 + num19], Global_24131.f_4855[num13 + num19]);
										
											num19 = num19 + 1;
											num23 = 3;
										}
										else if (Global_24131.f_2387[num16 /*5*/][l] == 4)
										{
											if (Global_24131.f_4984[num14 + num20] == 2 || Global_24131.f_4984[num14 + num20] == 55 || Global_24131.f_4984[num14 + num20] == 65)
											{
												if (func_19(Global_24131.f_4984[num14 + num20], flag, false, &num26, &num27, bParam7))
												{
													x = x + (num26 * 0.5f);
												
													if (func_19(Global_24131.f_4984[num14 + num20], flag, true, &num26, &num27, bParam7))
													{
														func_376(Global_24131.f_4984[num14 + num20], flag, &num32, &num33, &num34, &num35);
													
														if (i == 1)
															if (Global_24131.f_5686[k] == 2)
																func_382(func_26(Global_24131.f_4984[num14 + num20]), func_23(Global_24131.f_4984[num14 + num20], flag), ((num24 + x) - (0.00078125f * 8f)) + (0.00078125f * 4f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else
																func_382(func_26(Global_24131.f_4984[num14 + num20]), func_23(Global_24131.f_4984[num14 + num20], flag), (num24 + x) - (0.00078125f * 8f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
													
														x = x + (0.00078125f * 3f);
													}
												}
											}
										
											num20 = num20 + 1;
											num23 = 4;
										}
									}
								
									if (MISC::GET_HASH_KEY(&Global_24131.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										if (num23 == 4 && Global_24131.f_5686[k] == 2)
										{
											func_380(num24 + x + (0.00078125f * 7f), num25, 0);
										}
										else
										{
											func_380(num24 + x, num25, 0);
										
											if (IS_ROCKSTAR_DEV() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (k == 0)
												{
													if (Global_24131.f_2130[num16])
														flag5 = true;
												
													func_367(false, Global_24131.f_1616[num16], Global_24131.f_1873[num16], flag7, 0, flag5, flag4);
													TEXT_LABEL_ASSIGN_STRING(&text, "TEST_LABEL", 16);
													value = 0f;
													value2 = 55f;
													num47 = 0.0185f;
													num48 = 0.004f;
													num49 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, 0.35f * 0.7f);
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT(num24 - (num49 * 0.6f), num25 + (num47 * 0.75f), 0.0175f, 0.035f, BUILTIN::FLOOR(value), BUILTIN::FLOOR(value), BUILTIN::FLOOR(value), BUILTIN::FLOOR(value2), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&text);
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24131.f_6341 + num22);
													func_380(num24 - num49, num25 + num48, 0);
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
											if (Global_24131.f_4984[num14 + l] != 2 && Global_24131.f_4984[num14 + l] != 55 && Global_24131.f_4984[num14 + l] != 65)
											{
												if (func_19(Global_24131.f_4984[num14 + l], flag, false, &num26, &num27, bParam7))
												{
													x = x + (num26 * 0.5f);
												
													if (i == 1)
													{
														if (func_19(Global_24131.f_4984[num14 + l], flag, true, &num26, &num27, bParam7))
														{
															func_376(Global_24131.f_4984[num14 + l], flag, &num32, &num33, &num34, &num35);
														
															if (Global_24131.f_4984[num14 + l] == 31)
																func_382(func_26(Global_24131.f_4984[num14 + l]), func_23(Global_24131.f_4984[num14 + l], flag), Global_24128 + (num26 * 0.5f), (num25 + 0.00277776f + (num27 * 0.5f)) - (0.00078125f * 11f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else if (Global_24131.f_5686[k] == 2)
																func_382(func_26(Global_24131.f_4984[num14 + l]), func_23(Global_24131.f_4984[num14 + l], flag), ((num24 + x + num28) - (0.00078125f * 8f)) + (0.00078125f * 4f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else
																func_382(func_26(Global_24131.f_4984[num14 + l]), func_23(Global_24131.f_4984[num14 + l], flag), (num24 + x + num28) - (0.00078125f * 12f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
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
									if (Global_24131.f_2387[num16 /*5*/][l] == 1)
										num11 = num11 + 1;
									else if (Global_24131.f_2387[num16 /*5*/][l] == 8)
										num11 = num11 + 1;
									else if (Global_24131.f_2387[num16 /*5*/][l] == 2)
										num12 = num12 + 1;
									else if (Global_24131.f_2387[num16 /*5*/][l] == 3)
										num13 = num13 + 1;
									else if (Global_24131.f_2387[num16 /*5*/][l] == 4)
										num14 = num14 + 1;
									else if (Global_24131.f_2387[num16 /*5*/][l] == 5)
										num15 = num15 + 1;
									else if (Global_24131.f_2387[num16 /*5*/][l] == 6)
										num15 = num15 + 1;
									else if (Global_24131.f_2387[num16 /*5*/][l] == 7)
										num15 = num15 + 1;
									else if (Global_24131.f_2387[num16 /*5*/][l] == 9)
										num15 = num15 + 1;
								}
								break;
						
							case 2:
								if (flag2)
								{
									if (!Global_24131.f_6332)
									{
										func_367(flag, Global_24131.f_1616[num16], Global_24131.f_1873[num16], flag7, 0, false, false);
									
										if (Global_24131.f_9144 && Global_24131.f_9145 == numberOfLinesForString)
											func_363(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24131.f_4469[num12]);
										num28 = func_364(true);
										x = 0f;
									
										if (Global_24131.f_5686[k] == 2)
											x = x + (num31 - num28) + (0.00078125f * 1f);
										else if (Global_24131.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - (num28 * 0.5f));
									
										Global_24131.f_8990[(num2 * Global_24131.f_5829) + k] = x;
										Global_24131.f_9031[(num2 * Global_24131.f_5829) + k] = num28;
									}
									else
									{
										x = Global_24131.f_8990[(num2 * Global_24131.f_5829) + k];
										num28 = Global_24131.f_9031[(num2 * Global_24131.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_19(27, true, false, &num26, &num27, bParam7))
										{
											if (Global_24131.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_19(27, true, true, &num26, &num27, bParam7))
											{
												func_376(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_382(func_26(27), func_23(27, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_19(28, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_19(28, true, true, &num26, &num27, bParam7))
											{
												func_376(28, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_382(func_26(28), func_23(28, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									if (i == 1)
									{
										func_367(flag, Global_24131.f_1616[num16], Global_24131.f_1873[num16], flag7, 0, false, false);
										func_361(num24 + x, num25, "NUMBER" /*~1~*/, Global_24131.f_4469[num12], 0);
									}
								}
							
								flag3 = true;
								num12 = num12 + 1;
								break;
						
							case 3:
								if (flag2)
								{
									if (!Global_24131.f_6332)
									{
										func_367(flag, Global_24131.f_1616[num16], Global_24131.f_1873[num16], flag7, 0, false, false);
									
										if (Global_24131.f_9144 && Global_24131.f_9145 == numberOfLinesForString)
											func_363(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24131.f_4726[num13], Global_24131.f_4855[num13]);
										num28 = func_364(true);
										x = 0f;
									
										if (Global_24131.f_5686[k] == 2)
											x = x + (num31 - num28) + (0.00078125f * 1f);
										else if (Global_24131.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - (num28 * 0.5f));
									
										Global_24131.f_8990[(num2 * Global_24131.f_5829) + k] = x;
										Global_24131.f_9031[(num2 * Global_24131.f_5829) + k] = num28;
									}
									else
									{
										x = Global_24131.f_8990[(num2 * Global_24131.f_5829) + k];
										num28 = Global_24131.f_9031[(num2 * Global_24131.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_19(27, true, false, &num26, &num27, false))
										{
											if (Global_24131.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_19(27, true, true, &num26, &num27, bParam7))
											{
												func_376(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_382(func_26(27), func_23(27, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_19(28, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_19(28, true, true, &num26, &num27, bParam7))
											{
												func_376(28, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_382(func_26(28), func_23(28, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									func_367(flag, Global_24131.f_1616[num16], Global_24131.f_1873[num16], flag7, 0, false, false);
									func_357(num24 + x, num25, "NUMBER" /*~1~*/, Global_24131.f_4726[num13], Global_24131.f_4855[num13]);
								}
							
								flag3 = true;
								num13 = num13 + 1;
								break;
						
							case 4:
								if (flag2)
								{
									if (func_19(Global_24131.f_4984[num14], flag, false, &num26, &num27, bParam7))
									{
										if (!Global_24131.f_6332)
										{
											num29 = num26;
											x = 0f;
										
											if (Global_24131.f_5686[k] == 2)
												x = x + (num31 - num29) + (0.00078125f * 1f);
											else if (Global_24131.f_5686[k] == 0)
												x = x + (((num31 - num24) * 0.5f) - (num29 * 0.5f));
										
											Global_24131.f_8990[(num2 * Global_24131.f_5829) + k] = x;
											Global_24131.f_9072[(num2 * Global_24131.f_5829) + k] = num29;
										}
										else
										{
											x = Global_24131.f_8990[(num2 * Global_24131.f_5829) + k];
											num29 = Global_24131.f_9072[(num2 * Global_24131.f_5829) + k];
										}
									
										if (flag6)
										{
											if (func_19(27, true, false, &num26, &num27, bParam7))
											{
												if (Global_24131.f_5686[k] == 2)
													x = x - (num26 * 2f);
											
												num30 = num26 * 0.5f;
											
												if (func_19(27, true, true, &num26, &num27, bParam7))
												{
													func_376(27, true, &num32, &num33, &num34, &num35);
												
													if (i == 1)
														func_382(func_26(27), func_23(27, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
												}
											}
										
											if (func_19(28, true, false, &num26, &num27, bParam7))
											{
												x = x + num26;
												num30 = num26 * 0.5f;
											
												if (func_19(28, true, true, &num26, &num27, bParam7))
												{
													func_376(28, true, &num32, &num33, &num34, &num35);
												
													if (i == 1)
														func_382(func_26(28), func_23(28, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
												}
											}
										}
									
										if (i == 1)
										{
											if (func_19(Global_24131.f_4984[num14], flag, true, &num26, &num27, bParam7))
											{
												func_376(Global_24131.f_4984[num14], flag, &num32, &num33, &num34, &num35);
												func_382(func_26(Global_24131.f_4984[num14]), func_23(Global_24131.f_4984[num14], flag), num24 + x + (num26 * 0.5f), (num25 - 0.00277776f) + (num37 * 0.5f), num26 * func_356(Global_24131.f_4984[num14]), num27 * func_356(Global_24131.f_4984[num14]), 0f, num32, num33, num34, num35, false, 0);
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
					
						if (Global_24131.f_5659[k] == 5)
						{
							if (Global_24131.f_5671[k] > 0.05f)
								num24 = num24 + Global_24131.f_5671[k];
							else
								num24 = num24 + 0.05f;
						}
						else
						{
							num24 = num24 + Global_24131.f_5671[k];
						
							if (Global_24131.f_5678[k])
								if (func_19(27, true, true, &num26, &num27, bParam7))
									num24 = num24 - num26;
						}
					}
					else
					{
						num24 = num24 + Global_24131.f_5671[k];
					}
				}
			
				if (flag3)
				{
					if (flag2)
					{
						Global_24131.f_8769[num2] = numberOfLinesForString;
						Global_24131.f_6343 = numberOfLinesForString;
						num2 = num2 + 1;
					
						if (Global_24131.f_5959[numberOfLinesForString])
							num6 = num6 + 1;
					
						if (Global_24131.f_6348[numberOfLinesForString] != 0f)
							num44 = num44 + Global_24131.f_6348[numberOfLinesForString];
						else
							num44 = num44 + 0.034722f;
					}
				
					if (!Global_24131.f_6331)
					{
						Global_24131.f_6088[numberOfLinesForString] = true;
					
						if (Global_24131.f_5830[numberOfLinesForString])
						{
							if (flag)
								Global_24131.f_6337 = 0;
						}
						else
						{
							num4 = num4 + 1;
						
							if (flag)
								Global_24131.f_6337 = num4;
						}
					
						num3 = num3 + 1;
					}
				}
			}
		
			if (!Global_24131.f_6331)
			{
				Global_24131.f_6333 = num40 + num44 + (0.00277776f * (float)num5);
				Global_24131.f_6336 = num4;
				Global_24131.f_6334 = num3;
				Global_24131.f_6331 = 1;
			}
		}
	
		if (!Global_24131.f_6332)
		{
			Global_24131.f_6335 = num2;
			Global_24131.f_6332 = 1;
		}
	}

	Global_24131.f_6479 = num36;
	Global_24131.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_24131.f_6479);

	if (!Global_24131.f_9113)
		func_41(0);

	Global_24131.f_9113 = 0;

	if (bParam2)
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);

	if (bParam0)
		func_206(1);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

float func_356(int iParam0) // Position - 0x1E8DF (125151)
{
	switch (iParam0)
	{
		case 36:
		case 35:
		case 52:
		case 51:
		case 43:
		case 37:
		case 38:
		case 40:
		case 41:
		case 39:
		case 57:
		case 48:
		case 49:
		case 50:
			return 0.85f;
	}

	return 1f;
}

void func_357(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4) // Position - 0x1E94E (125262)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_358(fParam0), fParam1, 0);
	return;
}

float func_358(float fParam0) // Position - 0x1E971 (125297)
{
	fParam0 = fParam0 * func_359();
	return fParam0;
}

float func_359() // Position - 0x1E984 (125316)
{
	return 1.7777778f / func_360();
}

float func_360() // Position - 0x1E996 (125334)
{
	return Global_24131.f_9149;
}

void func_361(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x1E9A4 (125348)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_358(fParam0), fParam1, iParam4);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x1E9C6 (125382)
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_363(BOOL bParam0) // Position - 0x1E9D7 (125399)
{
	int r;
	int g;
	int b;
	var a;

	if (bParam0)
		HUD::GET_HUD_COLOUR(Global_24131.f_9141[0], &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(Global_24131.f_9141[1], &r, &g, &b, &a);

	HUD::SET_TEXT_COLOUR(r, g, b, 255);
	return;
}

float func_364(BOOL bParam0) // Position - 0x1EA1D (125469)
{
	return func_365(HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(bParam0));
}

float func_365(float fParam0) // Position - 0x1EA2F (125487)
{
	fParam0 = fParam0 * func_366();
	return fParam0;
}

float func_366() // Position - 0x1EA42 (125506)
{
	return func_360() / 1.7777778f;
}

void func_367(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1EA54 (125524)
{
	int r;
	int g;
	int b;
	int a;

	if (bParam2)
	{
		if (bParam3)
		{
			func_369(Global_24131.f_6614[iParam4], &r, &g, &b);
		
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
			HUD::SET_TEXT_COLOUR(0, 0, 0, BUILTIN::FLOOR(255f * 0.8f));
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

	func_368(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_368(float fParam0, float fParam1) // Position - 0x1EC02 (125954)
{
	HUD::SET_TEXT_WRAP(func_358(fParam0), func_358(fParam1));
	return;
}

void func_369(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1EC1A (125978)
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

void func_370(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x1EEA4 (126628)
{
	int num;
	int i;
	int j;
	int timestamp;
	int timestamp2;

	if (!func_349(&num, false, iParam1))
		return;

	uParam0 = uParam0;

	if (bParam3 && !func_388(bParam4, bParam8))
		return;

	if (func_374())
		return;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return;

	if (iParam7 == 0)
		if (func_371(PLAYER::PLAYER_ID(), 0))
			return;

	if (MISC::IS_PC_VERSION())
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return;

	if (Global_24131.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
		{
			for (i = 0; i < Global_24131.f_5326; i = i + 1)
			{
				if (Global_24131.f_5625[i] != 365)
					TEXT_LABEL_ASSIGN_STRING(&Global_24131.f_5328[i /*16*/], PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_24131.f_5625[i], true), 64);
				else if (Global_24131.f_5640[i] != 32)
					TEXT_LABEL_ASSIGN_STRING(&Global_24131.f_5328[i /*16*/], PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_24131.f_5640[i], true), 64);
			}
		
			Global_24131.f_5327 = 0;
		}
	
		if (!Global_24131.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24131.f_6263[num /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24131.f_6263[num /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f - (Global_24131.f_5684 / 100f));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24131.f_6263[num /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			for (i = 0; i < Global_24131.f_5326; i = i + 1)
			{
				if (MISC::GET_HASH_KEY(&Global_24131.f_5553[i /*4*/]) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24131.f_6263[num /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					func_13(&Global_24131.f_5328[i /*16*/]);
				
					for (j = i + 1; j < 14 && MISC::GET_HASH_KEY(&Global_24131.f_5553[j /*4*/]) == MISC::GET_HASH_KEY("PREV"); j = j + 1)
					{
						func_13(&Global_24131.f_5328[j /*16*/]);
					}
				
					if (Global_24131.f_5610[i] == -1)
					{
						func_12(&Global_24131.f_5553[i /*4*/]);
					}
					else
					{
						timestamp = Global_24131.f_5610[i];
					
						if (iParam2 >= 0)
							timestamp = iParam2;
					
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_24131.f_5553[i /*4*/]);
					
						if (bParam5)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp, 70);
						else
							HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp);
					
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				
					if (MISC::IS_PC_VERSION())
					{
						if (Global_24131.f_5625[i] != 365 && IS_BIT_SET(Global_24131.f_5655, i))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24131.f_5625[i]);
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
		
			if (MISC::GET_HASH_KEY(&(Global_4542961.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24131.f_6263[num /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24131.f_5326);
				func_13(&Global_4542961);
			
				if (Global_4542961.f_20 == -1)
				{
					func_12(&(Global_4542961.f_16));
				}
				else
				{
					timestamp2 = Global_24131.f_5610[i];
				
					if (iParam2 >= 0)
						timestamp2 = iParam2;
				
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542961.f_16));
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24131.f_6263[num /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24131.f_6263[num /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
		
			if (Global_24131.f_5685)
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			else
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_24131.f_5327 = 1;
		}
	
		for (i = 0; i < Global_24131.f_5326; i = i + 1)
		{
			if (Global_24131.f_5610[i] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24131.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_24131.f_5553[i /*4*/]);
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
	
		if (Global_4542961.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24131.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542961.f_16));
			
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
			if (!Global_24131.f_9148)
			{
				HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, 0f, -0.0375f);
				Global_24131.f_9148 = 1;
			}
		}
		else if (Global_24131.f_9148)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
			Global_24131.f_9148 = 0;
		}
	
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	
		if (Global_24131.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_24131.f_6263[num /*10*/], Global_24131.f_5656, Global_24131.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_24131.f_6263[num /*10*/], 255, 255, 255, 255, 0);
		}
	}

	return;
}

BOOL func_371(Player plParam0, int iParam1) // Position - 0x1F3A9 (127913)
{
	BOOL flag;

	if (!func_373(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_372(-1, false) == 8;
	else
		flag = Global_1845225[plParam0 /*874*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_372(int iParam0, BOOL bParam1) // Position - 0x1F402 (128002)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_66();

	if (Global_1575066[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574921[num2];
		bParam1;
	}

	return num;
}

BOOL func_373(Player plParam0) // Position - 0x1F443 (128067)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_374() // Position - 0x1F465 (128101)
{
	var position;

	if (Global_21222.f_1 > 3)
		return true;

	if (func_375())
	{
		position = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&position);
	
		if (Global_21167 == 0)
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

BOOL func_375() // Position - 0x1F4D3 (128211)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	return false;
}

void func_376(int iParam0, BOOL bParam1, int* piParam2, int* piParam3, int* piParam4, int* piParam5) // Position - 0x1F4ED (128237)
{
	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, piParam2, piParam3, piParam4, piParam5);
	*piParam5 = 255;

	switch (iParam0)
	{
		case 29:
			*piParam2 = 194;
			*piParam3 = 80;
			*piParam4 = 80;
			break;
	
		case 16:
		case 4:
		case 17:
		case 27:
		case 28:
		case 36:
		case 35:
		case 52:
		case 51:
		case 43:
		case 37:
		case 38:
		case 57:
		case 40:
		case 41:
		case 39:
		case 45:
		case 44:
		case 48:
		case 49:
		case 50:
		case 56:
		case 60:
		case 61:
		case 62:
		case 63:
			if (bParam1)
			{
				*piParam2 = 0;
				*piParam3 = 0;
				*piParam4 = 0;
			}
			break;
	
		case 58:
			*piParam5 = 100;
			break;
	
		case 66:
			*piParam5 = 100;
			break;
	
		case 59:
			HUD::GET_HUD_COLOUR(HUD_COLOUR_PINK, piParam2, piParam3, piParam4, piParam5);
			*piParam5 = 255;
			break;
	
		case 7:
			HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, piParam2, piParam3, piParam4, piParam5);
			*piParam5 = 255;
			break;
	}

	return;
}

void func_377(float fParam0) // Position - 0x1F629 (128553)
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
	func_368(fParam0, (Global_24128 + Global_24130) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_378(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x1F688 (128648)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_358(fParam0), fParam1, 0);
	return;
}

float func_379(char* sParam0, int iParam1, int iParam2) // Position - 0x1F6AF (128687)
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_381();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return func_364(true);
}

void func_380(float fParam0, float fParam1, int iParam2) // Position - 0x1F6F1 (128753)
{
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_358(fParam0), fParam1, iParam2);
	return;
}

void func_381() // Position - 0x1F707 (128775)
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);

	if (Global_24131.f_9123)
	{
		r = Global_24131.f_9119;
		g = Global_24131.f_9120;
		b = Global_24131.f_9121;
		a = Global_24131.f_9122;
	}

	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	func_368(Global_24128 + 0.0046875f, (Global_24128 + Global_24130) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_382(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12) // Position - 0x1F791 (128913)
{
	GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_358(fParam2), fParam3, func_358(fParam4), fParam5, fParam6, iParam7, iParam8, iParam9, iParam10, bParam11, iParam12);
	return;
}

void func_383(float fParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1F7BF (128959)
{
	GRAPHICS::DRAW_RECT(func_358(fParam0 + (iParam2 * 0.5f)), fParam1 + (fParam3 * 0.5f), func_358(iParam2), fParam3, iParam4, iParam5, iParam6, iParam7, false);
	return;
}

void func_384(int iParam0, char* sParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x1F7F6 (129014)
{
	int num;
	float num2;
	float num3;
	var unk;
	float num4;

	if (Global_24131.f_5821 > iParam0)
		return;

	if (Global_24131.f_5821 >= 128)
		return;

	if (Global_24131.f_5823 >= 256)
		return;

	if (Global_24131.f_6346 < Global_24131.f_6344)
		return;

	if (Global_24131.f_5821 != iParam0)
	{
		Global_24131.f_5821 = iParam0;
		Global_24131.f_5822 = 0;
	}

	num = Global_24131.f_5659[Global_24131.f_5822];

	if (num != 1)
	{
		while (Global_24131.f_5822 < 4 && num != 1)
		{
			Global_24131.f_5822 = Global_24131.f_5822 + 1;
			num = Global_24131.f_5659[Global_24131.f_5822];
		}
	
		if (num != 1)
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_24131.f_79[Global_24131.f_5823 /*6*/], sParam1, 24);
	!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1);
	Global_24131.f_1616[Global_24131.f_5823] = bParam3;
	Global_24131.f_1873[Global_24131.f_5823] = iParam4;
	Global_24131.f_2130[Global_24131.f_5823] = iParam6;
	Global_24131.f_5823 = Global_24131.f_5823 + 1;

	if (!bParam3)
		func_387(Global_24131.f_5821, true);
	else
		func_387(Global_24131.f_5821, false);

	if (iParam2 == 0)
	{
		num2 = func_386(&Global_24131.f_79[Global_24131.f_5823 /*6*/]);
	
		if (Global_24131.f_5678[Global_24131.f_5822])
		{
			func_19(27, true, false, &num3, &unk, false);
			num2 = num2 + (num3 * 2f);
		}
	
		if (num2 > Global_24131.f_5671[Global_24131.f_5822])
			Global_24131.f_5671[Global_24131.f_5822] = num2;
	}

	if (bParam5)
	{
		if (iParam2 == 0)
		{
			num4 = func_385(&Global_24131.f_79[Global_24131.f_5823 /*6*/]);
		
			if (num4 > Global_24131.f_6348[iParam0])
				Global_24131.f_6348[iParam0] = num4;
		}
	}

	MISC::SET_BIT(&Global_24131.f_5692[iParam0], Global_24131.f_5822);
	Global_24131.f_5822 = Global_24131.f_5822 + 1;
	Global_24131.f_6347 = 1;
	Global_24131.f_6345 = Global_24131.f_5823 - 1;
	Global_24131.f_6346 = 0;
	Global_24131.f_6344 = iParam2;
	return;
}

float func_385(char* sParam0) // Position - 0x1FA12 (129554)
{
	!HUD::DOES_TEXT_LABEL_EXIST(sParam0);
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_386(char* sParam0) // Position - 0x1FA2E (129582)
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_367(false, true, false, false, 0, false, false);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return func_364(true);
}

void func_387(int iParam0, BOOL bParam1) // Position - 0x1FA6B (129643)
{
	int num;

	num = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iParam0) / 32f);

	if (bParam1)
		MISC::SET_BIT(&Global_24131.f_6618[num], iParam0 - (num * 32));
	else
		MISC::CLEAR_BIT(&Global_24131.f_6618[num], iParam0 - (num * 32));

	return;
}

BOOL func_388(BOOL bParam0, BOOL bParam1) // Position - 0x1FAB7 (129719)
{
	if (Global_2672964.f_1761.f_701 != 0)
		return true;

	if (!CAM::IS_SCREEN_FADED_IN() || func_390(8, -1) && func_389() != 65 || HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1 || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0 || NETWORK::IS_COMMERCE_STORE_OPEN() || Global_80005 || Global_24131.f_9147 || HUD::IS_WARNING_MESSAGE_ACTIVE() || Global_101945.f_1490)
		return false;

	return true;
}

int func_389() // Position - 0x1FB54 (129876)
{
	return Global_1575014;
}

BOOL func_390(int iParam0, int iParam1) // Position - 0x1FB60 (129888)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673846.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673846.f_1048, iParam0);
}

// Unhandled jump detected. Output should be considered invalid
int func_391(int iParam0, BOOL bParam1) // Position - 0x1FB98 (129944)
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

int func_392(int* piParam0, int iParam1, int iParam2) // Position - 0x1FC1F (130079)
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return 0;

	if (iParam2 == 0)
		return 0;

	if (func_413(0) == 1 && Global_4543037 == iParam1)
	{
		if (!func_438(piParam0))
		{
			func_393(piParam0);
			return 1;
		}
		else if (func_7(piParam0) > 0.25f)
		{
			func_453(piParam0);
			return 1;
		}
	}
	else if (func_438(piParam0))
	{
		func_439(piParam0);
	}

	return 0;
}

void func_393(int* piParam0) // Position - 0x1FC97 (130199)
{
	if (!func_438(piParam0))
		func_453(piParam0);

	return;
}

int func_394(int* piParam0) // Position - 0x1FCAF (130223)
{
	float controlNormal;

	controlNormal = 0f;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		controlNormal = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X);

	if (controlNormal > 0.8f || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
	{
		if (!func_438(piParam0))
		{
			func_393(piParam0);
			return 1;
		}
		else if (func_7(piParam0) > 0.25f)
		{
			func_453(piParam0);
			return 1;
		}
	}
	else if (func_438(piParam0))
	{
		func_439(piParam0);
	}

	return 0;
}

void func_395(var uParam0) // Position - 0x1FD34 (130356)
{
	var r;
	var g;
	var b;
	var a;

	func_352(false, false);
	HUD::GET_HUD_COLOUR(HUD_COLOUR_DARTS, &r, &g, &b, &a);
	func_408(r, g, b, a, 1);
	func_407(1, 2, 0, 0, 0);
	func_406(1, 2, 1, 1, 1);
	func_405(false, true, false, false, false);
	func_404("DARTS_TITLE");
	func_402(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_384(0, "DARTS_LEGS", 0, true, 0, false, 0);
	func_399(0, func_391(uParam0->f_662 + 1, true), false);
	func_384(1, "DARTS_SETS", 0, true, 0, false, 0);
	func_399(1, func_391(uParam0->f_664 + 1, false), false);
	func_398(2, 141, 141, 1);
	func_384(2, "DARTS_START", 0, true, 0, false, 0);
	func_397(0);
	func_416(uParam0->f_660, true, 1);

	if (uParam0->f_660 != 2)
		func_415(uParam0->f_660 == 0 ? "DARTS_LEGD" : "DARTS_SETD", 0, 0);

	func_396(INPUT_FRONTEND_ACCEPT, "ITEM_SELECT" /*Select*/, -1, false);
	func_396(INPUT_FRONTEND_CANCEL, "IB_QUIT" /*Quit*/, -1, false);
	return;
}

void func_396(eControlAction ecaParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x1FE2E (130606)
{
	const char* controlInstructionalButtonsString;

	controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, ecaParam0, true);

	if (Global_24131.f_5326 >= 14)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_4542961, controlInstructionalButtonsString, 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4542961.f_16), sParam1, 16);
		Global_4542961.f_20 = iParam2;
		return;
		return;
	}

	if (!bParam3)
		MISC::SET_BIT(&(Global_24131.f_5655), Global_24131.f_5326);

	TEXT_LABEL_ASSIGN_STRING(&Global_24131.f_5328[Global_24131.f_5326 /*16*/], controlInstructionalButtonsString, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_24131.f_5553[Global_24131.f_5326 /*4*/], sParam1, 16);
	Global_24131.f_5610[Global_24131.f_5326] = iParam2;
	Global_24131.f_5625[Global_24131.f_5326] = ecaParam0;
	Global_24131.f_5640[Global_24131.f_5326] = 32;
	Global_24131.f_5326 = Global_24131.f_5326 + 1;
	return;
}

void func_397(int iParam0) // Position - 0x1FEE3 (130787)
{
	Global_24131.f_6341 = iParam0;
	return;
}

void func_398(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1FEF3 (130803)
{
	Global_24131.f_9144 = iParam3;
	Global_24131.f_9141[0] = iParam1;
	Global_24131.f_9141[1] = iParam2;
	Global_24131.f_9145 = iParam0;
	return;
}

void func_399(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1FF21 (130849)
{
	int num;
	float num2;
	float num3;
	var unk;
	float num4;

	if (Global_24131.f_5821 > iParam0)
		return;

	if (Global_24131.f_5821 >= 128)
		return;

	if (Global_24131.f_5825 >= 256)
		return;

	if (Global_24131.f_6346 < Global_24131.f_6344)
		return;

	if (Global_24131.f_5821 != iParam0)
	{
		Global_24131.f_5821 = iParam0;
		Global_24131.f_5822 = 0;
	}

	num = Global_24131.f_5659[Global_24131.f_5822];

	if (num != 2)
	{
		while (Global_24131.f_5822 < 4 && num != 2)
		{
			Global_24131.f_5822 = Global_24131.f_5822 + 1;
			num = Global_24131.f_5659[Global_24131.f_5822];
		}
	
		if (num != 2)
			return;
	}

	Global_24131.f_4469[Global_24131.f_5825] = iParam1;
	Global_24131.f_5825 = Global_24131.f_5825 + 1;
	num2 = func_401("NUMBER" /*~1~*/, iParam1);

	if (Global_24131.f_5678[Global_24131.f_5822])
	{
		func_19(27, true, false, &num3, &unk, false);
		num2 = num2 + (num3 * 2f);
	}

	if (num2 > Global_24131.f_5671[Global_24131.f_5822])
		Global_24131.f_5671[Global_24131.f_5822] = num2;

	if (bParam2)
	{
		num4 = func_400("NUMBER" /*~1~*/, iParam1);
	
		if (num4 > Global_24131.f_6348[iParam0])
			Global_24131.f_6348[iParam0] = num4;
	}

	MISC::SET_BIT(&Global_24131.f_5692[iParam0], Global_24131.f_5822);
	Global_24131.f_5822 = Global_24131.f_5822 + 1;
	Global_24131.f_6347 = 2;
	return;
}

float func_400(char* sParam0, int iParam1) // Position - 0x200A2 (131234)
{
	!HUD::DOES_TEXT_LABEL_EXIST(sParam0);
	iParam1 == 0;
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_401(char* sParam0, int iParam1) // Position - 0x200C4 (131268)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
		return 0f;

	func_367(true, true, false, false, 0, false, false);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return func_364(true);
}

void func_402(int iParam0, char* sParam1, char* sParam2) // Position - 0x200F6 (131318)
{
	Global_24131 = iParam0;
	func_403(30, sParam1, sParam2);
	return;
}

void func_403(int iParam0, char* sParam1, char* sParam2) // Position - 0x2010D (131341)
{
	TEXT_LABEL_ASSIGN_STRING(&Global_24131.f_6623[iParam0 /*16*/], sParam1, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_24131.f_7696[iParam0 /*16*/], sParam2, 64);
	return;
}

void func_404(char* sParam0) // Position - 0x20131 (131377)
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_24131.f_1), sParam0, 16);
	Global_24131.f_74 = 0;
	Global_24131.f_75 = 0;
	Global_24131.f_76 = 0;
	Global_24131.f_77 = 0;
	Global_24131.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_24131.f_5[i] = 0;
	}

	return;
}

void func_405(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2017C (131452)
{
	Global_24131.f_5678[0] = bParam0;
	Global_24131.f_5678[1] = bParam1;
	Global_24131.f_5678[2] = bParam2;
	Global_24131.f_5678[3] = bParam3;
	Global_24131.f_5678[4] = bParam4;
	return;
}

void func_406(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x201BB (131515)
{
	Global_24131.f_5686[0] = iParam0;
	Global_24131.f_5686[1] = iParam1;
	Global_24131.f_5686[2] = iParam2;
	Global_24131.f_5686[3] = iParam3;
	Global_24131.f_5686[4] = iParam4;
	return;
}

void func_407(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x201FA (131578)
{
	Global_24131.f_5659[0] = iParam0;
	Global_24131.f_5659[1] = iParam1;
	Global_24131.f_5659[2] = iParam2;
	Global_24131.f_5659[3] = iParam3;
	Global_24131.f_5659[4] = iParam4;
	Global_24131.f_5829 = 0;

	if (iParam0 != 0)
		Global_24131.f_5829 = Global_24131.f_5829 + 1;

	if (iParam1 != 0)
		Global_24131.f_5829 = Global_24131.f_5829 + 1;

	if (iParam2 != 0)
		Global_24131.f_5829 = Global_24131.f_5829 + 1;

	if (iParam3 != 0)
		Global_24131.f_5829 = Global_24131.f_5829 + 1;

	if (iParam4 != 0)
		Global_24131.f_5829 = Global_24131.f_5829 + 1;

	return;
}

void func_408(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x202A4 (131748)
{
	Global_24131.f_9118 = iParam4;
	Global_24131.f_9114 = uParam0;
	Global_24131.f_9115 = uParam1;
	Global_24131.f_9116 = uParam2;
	Global_24131.f_9117 = uParam3;
	return;
}

int func_409(int* piParam0, int iParam1, int iParam2) // Position - 0x202D4 (131796)
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return 0;

	if (iParam2 == 0)
		return 0;

	if (func_413(0) == -1 && Global_4543037 == iParam1)
	{
		if (!func_438(piParam0))
		{
			func_393(piParam0);
			return 1;
		}
		else if (func_7(piParam0) > 0.25f)
		{
			func_453(piParam0);
			return 1;
		}
	}
	else if (func_438(piParam0))
	{
		func_439(piParam0);
	}

	return 0;
}

int func_410(int* piParam0) // Position - 0x2034C (131916)
{
	float controlNormal;

	controlNormal = 0f;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		controlNormal = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X);

	if (controlNormal < -0.8f || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
	{
		if (!func_438(piParam0))
		{
			func_393(piParam0);
			return 1;
		}
		else if (func_7(piParam0) > 0.25f)
		{
			func_453(piParam0);
			return 1;
		}
	}
	else if (func_438(piParam0))
	{
		func_439(piParam0);
	}

	return 0;
}

BOOL func_411(int* piParam0) // Position - 0x203C4 (132036)
{
	float controlNormal;

	controlNormal = 0f;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		controlNormal = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y);

	if (controlNormal > 0.8f || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN))
	{
		if (!func_438(piParam0))
		{
			func_393(piParam0);
			return true;
		}
		else if (func_7(piParam0) > 0.25f)
		{
			func_453(piParam0);
			return true;
		}
	}
	else if (func_438(piParam0))
	{
		func_439(piParam0);
	}

	return false;
}

BOOL func_412(int* piParam0) // Position - 0x2043C (132156)
{
	float controlNormal;

	controlNormal = 0f;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		controlNormal = PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y);

	if (controlNormal < -0.8f || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
	{
		if (!func_438(piParam0))
		{
			func_393(piParam0);
			return true;
		}
		else if (func_7(piParam0) > 0.25f)
		{
			func_453(piParam0);
			return true;
		}
	}
	else if (func_438(piParam0))
	{
		func_439(piParam0);
	}

	return false;
}

int func_413(int iParam0) // Position - 0x204B4 (132276)
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
	x2 = x + Global_24130;
	y = Global_24131.f_6333 - ((float)Global_24131.f_6335 * 0.034722f);
	num2 = x + iParam0;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x, y, &x, &y);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x2, y2, &x2, &y2);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	num = x2 - num3;

	if (iParam0 > 0f)
		if (Global_4543031 >= x && Global_4543031 < num2)
			return -999;

	if (Global_4543031 >= x && Global_4543031 < num)
		return -1;

	if (Global_4543031 >= num && Global_4543031 <= x2)
		return 1;

	return 0;
}

BOOL func_414() // Position - 0x20581 (132481)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT);

	return false;
}

void func_415(char* sParam0, int iParam1, int iParam2) // Position - 0x2059C (132508)
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_24131.f_5241), sParam0, 24);
	Global_24131.f_5319 = 0;
	Global_24131.f_5320 = 0;
	Global_24131.f_5321 = 0;
	Global_24131.f_5322 = 0;
	Global_24131.f_5323 = iParam1;
	Global_24131.f_5324 = MISC::GET_GAME_TIMER();
	Global_24131.f_5325 = iParam2;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_24131.f_5253[i] = 0;
	}

	return;
}

void func_416(int iParam0, BOOL bParam1, int iParam2) // Position - 0x20601 (132609)
{
	int i;
	int num;

	Global_24131.f_6342 = iParam0;
	Global_24131.f_6477 = iParam2;

	if (Global_24131.f_6342 < Global_24131.f_6341)
	{
		Global_24131.f_6341 = Global_24131.f_6342;
	}
	else if (Global_24131.f_6332 && Global_24131.f_6342 > Global_24131.f_6343 || !Global_24131.f_6332 && Global_24131.f_6342 >= Global_24131.f_6341 + Global_24131.f_5828)
	{
		for (i = Global_24131.f_6341; i <= Global_24131.f_6342; i = i + 1)
		{
			if (i >= 0 && i < 127)
				if (Global_24131.f_5692[i] != 0)
					num = num + 1;
		}
	
		while (num > Global_24131.f_5828 && Global_24131.f_6341 < 128)
		{
			Global_24131.f_6341 = Global_24131.f_6341 + 1;
			num = 0;
		
			for (i = Global_24131.f_6341; i <= Global_24131.f_6342; i = i + 1)
			{
				if (i >= 0 && i < 127)
					if (Global_24131.f_5692[i] != 0)
						num = num + 1;
			}
		}
	}

	Global_24131.f_6331 = 0;
	Global_24131.f_6332 = 0;

	if (bParam1)
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_24131.f_5241), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4542961.f_21), "", 16);
	}

	return;
}

BOOL func_417() // Position - 0x20753 (132947)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (Global_4543037 > -1)
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
				return true;

	return false;
}

int func_418(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x2077A (132986)
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return 0;

	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		return 0;

	if (bParam2)
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();

	if (Global_4543037 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
	
		if (bParam0 && PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			return 1;
		}
		else
		{
			Global_4543037 = -1;
			return 0;
		}
	}

	if (Global_4543037 > -1 || Global_4543037 == -3 || Global_4543037 == -2 || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}

	if (Global_4543037 == -1 && bParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4543037 = -6;
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

void func_419(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2085A (133210)
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
		Global_4543037 = -1;
		return;
	}

	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	x = Global_24128;
	x2 = x + Global_24130;
	y2 = Global_24131.f_6333;
	y = Global_24131.f_6333 - ((float)Global_24131.f_6335 * 0.034722f);

	if (bParam2)
	{
		y2 = y2 + 0.034722f;
		y = y + 0.034722f;
	}

	if (Global_24131.f_6335 < 1)
		y = Global_24131.f_6333 - 0.034722f;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num = x;
	num2 = y;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x, y, &x, &y);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x2, y2, &x2, &y2);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_421();

	if (Global_4543037 == -6)
		return;

	Global_4543037 = -1;
	num4 = Global_4543031;
	num5 = Global_4543032;

	if (Global_24131.f_6336 > Global_24131.f_6335)
	{
		if (Global_4543031 >= x && Global_4543031 <= x2 && Global_4543032 >= y2 && Global_4543032 < y2 + num3)
		{
			Global_4543037 = -2;
		
			if (bParam3)
				func_420(false);
		
			return;
		}
	
		if (Global_4543031 >= x && Global_4543031 <= x2 && Global_4543032 >= y2 + num3 && Global_4543032 < y2 + 0.034722f)
		{
			Global_4543037 = -3;
		
			if (bParam3)
				func_420(false);
		
			return;
		}
	}

	if (num4 >= x && num4 <= x2 && num5 >= y && num5 <= y2)
	{
		num6 = num5 - y;
		num10 = BUILTIN::FLOOR(num6 / 0.034722f);
	
		if (Global_24131.f_6336 == -1)
		{
			Global_4543037 = 0;
			num10 = 0;
			return;
		}
	
		num8 = 148;
		num9 = num8 / Global_24131.f_6335;
		num7 = 32 + (num8 - (num9 * num10));
	
		if (bParam3)
		{
			if (!bParam1 || num10 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_383(num, num2 + ((float)num10 * 0.034722f), Global_24130, 0.034722f - 0.0015f, 255, 255, 255, num7);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
	
		Global_4543037 = Global_24131.f_8769[num10];
		return;
	}

	if (!bParam0)
	{
		if (num4 < x2)
		{
			Global_4543037 = -4;
			return;
		}
	
		if (num5 > 0.9f)
		{
			Global_4543037 = -5;
			return;
		}
	}
	else if (num4 < x2 && num5 < y2 + 0.25f)
	{
		Global_4543037 = -4;
		return;
	}

	Global_4543037 = -1;
	return;
}

void func_420(BOOL bParam0) // Position - 0x20B06 (133894)
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

	num = Global_24128;
	num2 = Global_24131.f_6333;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);

	if (Global_4543037 == -2)
		func_383(num, num2, Global_24130, num3, 255, 255, 255, num4);
	else if (Global_4543037 == -3)
		func_383(num, num2 + num3, Global_24130, num3, 255, 255, 255, num4);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_421() // Position - 0x20B8F (134031)
{
	Global_4543033 = Global_4543031;
	Global_4543034 = Global_4543032;
	Global_4543031 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X);
	Global_4543032 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y);
	Global_4543035 = Global_4543031 - Global_4543033;
	Global_4543036 = Global_4543032 - Global_4543034;
	return;
}

float func_422(float fParam0) // Position - 0x20BD7 (134103)
{
	if (fParam0 < 1.3f)
		return 35f;
	else if (fParam0 < 1.35f)
		return 33f;

	return 30f;
}

void func_423(var uParam0) // Position - 0x20C0D (134157)
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
	func_352(false, false);
	HUD::GET_HUD_COLOUR(HUD_COLOUR_DARTS, &r, &g, &b, &a);
	func_408(r, g, b, a, 1);
	func_407(1, 2, 0, 0, 0);
	func_406(1, 2, 1, 1, 1);
	func_405(0, 1, 0, 0, 0);
	func_404("DARTS_TITLE");
	func_402(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_384(0, "DARTS_LEGS", 0, 1, 0, false, 0);
	func_399(0, 1, false);
	func_384(1, "DARTS_SETS", 0, true, 0, false, 0);
	func_399(1, 1, false);
	func_384(2, "DARTS_START", 0, true, 0, false, 0);
	func_398(2, 141, 141, 1);
	func_397(0);
	func_416(0, true, 1);
	func_415("DARTS_LEGD", 0, 0);
	func_424();
	func_396(INPUT_FRONTEND_ACCEPT, "ITEM_SELECT" /*Select*/, -1, false);
	func_396(INPUT_FRONTEND_CANCEL, "IB_QUIT" /*Quit*/, -1, false);
	return;
}

void func_424() // Position - 0x20CFD (134397)
{
	if (MISC::IS_PC_VERSION())
		PAD::SET_CURSOR_POSITION(0.325f, 0.3f);

	return;
}

BOOL func_425(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int* piParam5) // Position - 0x20D1B (134427)
{
	int i;
	int j;

	if (func_449() && MISC::GET_GAME_TIMER() >= iLocal_291 + 1000 && *uParam0 != 8)
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
						func_433(uParam1->f_1, uParam1->f_4, func_435(2), func_434(false), 0, true);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_293(&uParam4->[0 /*26*/], uParam1, uParam3, uParam2, true);
					}
				
					if (*uParam3 == 3)
					{
						if (func_280(&uParam4->[0 /*26*/], uParam1, 0, false))
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
							iLocal_29 = iLocal_29 + 1;
							func_453(piParam5);
							*uParam3 = 2;
						}
					}
					break;
			
				case 1:
					if (func_441(piParam5) > 1f && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_DOUBLE_T"))
						_DISPLAY_HELP_TEXT("DARTS_DOUBLE_T", -1);
				
					if (func_441(piParam5) > 5f)
					{
						func_453(piParam5);
						HUD::CLEAR_HELP(true);
						func_427(uParam1->f_1, uParam1->f_4, func_435(3), func_434(false), 1000);
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
							func_293(&uParam4->[1 /*26*/], uParam1, uParam3, uParam2, true);
						}
					
						if (*uParam3 == 3)
						{
							if (func_280(&uParam4->[1 /*26*/], uParam1, 0, false))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								iLocal_29 = iLocal_29 + 1;
								func_453(piParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
			
				case 1:
					if (func_441(piParam5) > 1f && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_TRIPLE_T"))
						_DISPLAY_HELP_TEXT("DARTS_TRIPLE_T", -1);
				
					if (func_441(piParam5) > 5f)
					{
						func_453(piParam5);
						HUD::CLEAR_HELP(true);
						func_433(uParam1->f_1, uParam1->f_4, func_435(4), func_434(false), 1000, false);
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
							func_293(&uParam4->[2 /*26*/], uParam1, uParam3, uParam2, true);
						}
					
						if (*uParam3 == 3)
						{
							if (func_280(&uParam4->[2 /*26*/], uParam1, 0, false))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								iLocal_29 = iLocal_29 + 1;
								func_453(piParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
			
				case 1:
					if (func_441(piParam5) > 1f && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_BULL_T"))
						_DISPLAY_HELP_TEXT("DARTS_BULL_T", -1);
				
					if (func_441(piParam5) > 5f)
					{
						func_453(piParam5);
						HUD::CLEAR_HELP(true);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", true);
						func_427(uParam1->f_1, uParam1->f_4, func_435(5), func_434(true), 1500);
						iLocal_29 = 0;
						*uParam0 = 5;
					}
					break;
			}
			break;
	
		case 5:
			if (!CAM::IS_CAM_INTERPOLATING(caLocal_126) && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("DARTS_DBL_WIN"))
				_DISPLAY_HELP_TEXT("DARTS_DBL_WIN", -1);
		
			if (func_441(piParam5) > 6f)
			{
				func_453(piParam5);
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
					func_426(&uParam4->[i /*26*/]);
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
					func_426(&uParam4->[j /*26*/]);
				}
			
				CAM::SET_CAM_ACTIVE(caLocal_118, true);
				CAM::DO_SCREEN_FADE_IN(500);
				return true;
			}
			break;
	}

	return false;
}

void func_426(Object* pobParam0) // Position - 0x21137 (135479)
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

void func_427(Vector3 vParam0, var uParam1, var uParam2, float fParam3, Vector3 vParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10) // Position - 0x21177 (135543)
{
	CAM::STOP_CAM_POINTING(caLocal_126);
	CAM::SET_CAM_FOV(caLocal_126, 35f);
	CAM::SET_CAM_COORD(caLocal_126, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, fParam3, vParam4));
	CAM::SET_CAM_ROT(caLocal_126, { fParam3, 0f, 0f } - uParam7, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_126, caLocal_125, iParam10, 1, 1);
	return;
}

BOOL func_428(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x211C0 (135616)
{
	if (!func_438(&(uParam0->f_2)))
		func_453(&(uParam0->f_2));

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

	if (func_7(&(uParam0->f_2)) * 1000f > BUILTIN::TO_FLOAT(uParam0->f_1))
	{
		func_439(&(uParam0->f_2));
		return false;
	}

	return true;
}

void func_429(var uParam0, char* sParam1, const char* sParam2, int iParam3, eHudColour ehcParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x21252 (135762)
{
	char* methodName;

	methodName = func_430(iParam5);
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

	func_453(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	return;
}

char* func_430(int iParam0) // Position - 0x212E1 (135905)
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

void func_431() // Position - 0x2135C (136028)
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
char* func_432(int iParam0) // Position - 0x213D7 (136151)
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

void func_433(Vector3 vParam0, var uParam1, var uParam2, float fParam3, Vector3 vParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, BOOL bParam11) // Position - 0x2146A (136298)
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

Vector3 func_434(BOOL bParam0) // Position - 0x214C2 (136386)
{
	if (bParam0)
		return -4.7411f, 0f, -15.32f;

	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_435(int iParam0) // Position - 0x214EB (136427)
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

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x21575 (136565)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

int func_437(Ped pedParam0) // Position - 0x2158C (136588)
{
	if (!ENTITY::IS_ENTITY_DEAD(func_516(), false))
		func_4(func_516(), "GENERIC_YES", false, 6);
	else
		func_4(pedParam0, "GENERIC_AGREE", false, 6);

	return 1;
}

BOOL func_438(int* piParam0) // Position - 0x215BF (136639)
{
	return IS_BIT_SET(*piParam0, 1);
}

void func_439(int* piParam0) // Position - 0x215CC (136652)
{
	piParam0->f_1 = 0f;
	piParam0->f_2 = 0f;
	*piParam0 = 0;
	return;
}

void func_440(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x215E2 (136674)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_6(iParam2), 1);
	return;
}

float func_441(int* piParam0) // Position - 0x215F9 (136697)
{
	if (func_438(piParam0))
		if (func_9(piParam0))
			return piParam0->f_2;
		else
			return func_8(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return 0f;
}

void func_442(int* piParam0) // Position - 0x21632 (136754)
{
	if (!func_438(piParam0))
		func_393(piParam0);
	else
		func_453(piParam0);

	return;
}

void func_443() // Position - 0x21653 (136787)
{
	Global_21451 = 0;
	func_444();
	return;
}

void func_444() // Position - 0x21663 (136803)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23596 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21222.f_1 == 9 || Global_21221 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22585 = 6;
		Global_21222.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22585 = 6;
		return;
	}

	return;
}

void func_445(int iParam0) // Position - 0x216BA (136890)
{
	if (func_43())
		return;

	if (Global_21444)
		if (func_448())
			func_447(true, true);
		else
			func_447(false, false);

	if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
		MISC::SET_BIT(&Global_9076, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22585 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9075, 30);
	else
		MISC::CLEAR_BIT(&Global_9075, 30);

	if (!func_446())
		Global_21222.f_1 = 3;

	return;
}

BOOL func_446() // Position - 0x21744 (137028)
{
	if (Global_21222.f_1 == 1 || Global_21222.f_1 == 0)
		return true;

	return false;
}

void func_447(BOOL bParam0, BOOL bParam1) // Position - 0x2176B (137067)
{
	if (bParam0)
	{
		if (func_42(0))
		{
			Global_21444 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21159);
		
			Global_21150 = { Global_21168[Global_21167 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21150);
		}
	}
	else if (Global_21444 == true)
	{
		Global_21444 = false;
		Global_21150 = { Global_21175[Global_21167 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21159);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21150);
	}

	return;
}

BOOL func_448() // Position - 0x217DF (137183)
{
	return IS_BIT_SET(Global_1959772, 5);
}

BOOL func_449() // Position - 0x217ED (137197)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

BOOL func_450(var uParam0) // Position - 0x2181F (137247)
{
	Vehicle playersLastVehicle;

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
	{
		if (!func_451(playersLastVehicle))
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

BOOL func_451(Vehicle veParam0) // Position - 0x21892 (137362)
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

void func_452(var uParam0, int iParam1) // Position - 0x218D5 (137429)
{
	iParam1 = iParam1 + 1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_HIGHLIGHT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_453(int* piParam0) // Position - 0x218F9 (137465)
{
	func_454(piParam0, 0f);
	return;
}

void func_454(int* piParam0, float fParam1) // Position - 0x21908 (137480)
{
	piParam0->f_1 = func_8(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x21933 (137523)
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_79744)
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

void func_456(var uParam0, char* sParam1, char* sParam2) // Position - 0x219CE (137678)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_37(sParam1);
	func_37(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_457(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Any* panParam7, var uParam8) // Position - 0x219F2 (137714)
{
	int _int;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(func_516()) && !PED::IS_PED_INJURED(func_516()))
	{
		PED::REMOVE_PED_FROM_GROUP(func_516());
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam8->f_5) && !PED::IS_PED_INJURED(uParam8->f_5))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam8->f_5, true, true);
			uLocal_263[1] = uParam8->f_5;
			TASK::CLEAR_PED_TASKS(uLocal_263[1]);
		}
		else if (func_459(panParam7))
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
				sLocal_359 = func_463("RAYMOND");
				iLocal_360 = joaat("RAYMOND");
			}
			else if (joaat("JOHAN") == _int)
			{
				sLocal_359 = func_463("JOHAN");
				iLocal_360 = joaat("JOHAN");
			}
			else if (joaat("STAN") == _int)
			{
				sLocal_359 = func_463("STAN");
				iLocal_360 = joaat("STAN");
			}
			else if (joaat("VINCE") == _int)
			{
				sLocal_359 = func_463("VINCE");
				iLocal_360 = joaat("VINCE");
			}
			else if (joaat("KRISTY") == _int)
			{
				sLocal_359 = func_463("KRISTY");
				iLocal_360 = joaat("KRISTY");
			}
			else if (joaat("MARLENE") == _int)
			{
				sLocal_359 = func_463("MARLENE");
				iLocal_360 = joaat("MARLENE");
			}
			else if (joaat("LORIE") == _int)
			{
				sLocal_359 = func_463("LORIE");
				iLocal_360 = joaat("LORIE");
			}
			else if (joaat("SHELLEY") == _int)
			{
				sLocal_359 = func_463("SHELLEY");
				iLocal_360 = joaat("SHELLEY");
			}
		}
	
		DECORATOR::DECOR_SET_INT(uLocal_263[1], "Darts_name", iLocal_360);
	}

	entityModel = ENTITY::GET_ENTITY_MODEL(uLocal_263[1]);
	func_458(entityModel);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_263[1], uLocal_263[0], 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_263[0], uLocal_263[1], 0);
	return;
}

void func_458(Hash hParam0) // Position - 0x21BEB (138219)
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

BOOL func_459(Any* panParam0) // Position - 0x21C8A (138378)
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

eCharacter func_460(Ped pedParam0) // Position - 0x21D73 (138611)
{
	eCharacter i;
	Hash entityModel;
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
		character = func_462() - 1;
	
		for (i = CHAR_MULTIPLAYER; i <= character; i = i + 1)
		{
			if (func_461(i) == entityModel)
				return i;
		}
	}

	return _CHAR_NULL;
}

Hash func_461(eCharacter echParam0) // Position - 0x21DB9 (138681)
{
	if (!func_94(echParam0))
		return func_96(echParam0);
	else
		echParam0 != _CHAR_NULL;

	return 0;
}

int func_462() // Position - 0x21DDF (138719)
{
	if (Global_33281 == 0 || Global_33281 == 2)
		return 211;

	return 161;
}

char* func_463(char* sParam0) // Position - 0x21E01 (138753)
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

void func_464(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x21F3B (139067)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		uParam0->f_4 = ENTITY::GET_ENTITY_HEADING(*uParam0);

	if (!bParam3)
		func_466(uParam1, uParam0);

	uLocal_80 = { 0f, -2.3685f + fLocal_53, 0.1f };
	uLocal_80 = { uLocal_80 + uLocal_54 };
	uLocal_77 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_4, uLocal_80) };
	func_465(uParam2, uParam0);
	return;
}

void func_465(var uParam0, var uParam1) // Position - 0x21FA3 (139171)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + uLocal_54 };
	*uParam0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
	return;
}

void func_466(var uParam0, var uParam1) // Position - 0x21FDE (139230)
{
	*uParam0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, -0.4f, -2.4f + fLocal_53, -1.7272f) };
	uParam0->f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, 0.5f, -2.4f + fLocal_53, -1.7272f) };
	return;
}

BOOL func_467(var uParam0, var uParam1) // Position - 0x22030 (139312)
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\\DARTS", false, -1))
		return false;

	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\\FAMILY1_2", false, -1))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(hLocal_26) || !STREAMING::HAS_MODEL_LOADED(hLocal_27) || !STREAMING::HAS_MODEL_LOADED(hLocal_58) || !STREAMING::HAS_MODEL_LOADED(hLocal_299) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_645) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_57) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_62) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Darts") || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_361) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_362) || !func_468(0, -1, false))
		return false;

	return true;
}

BOOL func_468(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x22114 (139540)
{
	int num;
	BOOL flag;
	BOOL flag2;

	if (!func_349(&num, true, iParam1))
		return false;

	flag = true;
	TEXT_LABEL_ASSIGN_STRING(&Global_24131.f_6238[num /*4*/], sParam0, 16);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_24131.f_6238[num /*4*/]))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_24131.f_6238[num /*4*/], 9);
		Global_24131.f_6231[num] = true;
	
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&Global_24131.f_6238[num /*4*/], 9))
			flag = false;
	}

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
		flag = false;

	Global_24131.f_6217[num] = true;

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
		flag = false;

	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_24131.f_6224[num] = true;
	
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
			flag = false;
	}

	flag2 = false;
	TEXT_LABEL_ASSIGN_STRING(&(Global_24131.f_6263[num /*10*/].f_1), "instructional_buttons", 24);
	flag2 = func_469(&Global_24131.f_6263[num /*10*/]);
	!flag || !flag2;
	return flag && flag2;
}

BOOL func_469(int iParam0) // Position - 0x22222 (139810)
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

void func_470(var uParam0, var uParam1) // Position - 0x222C4 (139972)
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
	uParam1->f_645 = func_201();
	uParam1->f_57 = func_472();
	uParam1->f_62 = func_471();
	HUD::REQUEST_ADDITIONAL_TEXT("DARTS", 3);
	return;
}

int func_471() // Position - 0x22332 (140082)
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
}

int func_472() // Position - 0x22342 (140098)
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
}

void func_473(var uParam0, int iParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5) // Position - 0x22352 (140114)
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

	if (!func_474(vParam2) && fParam5 != 0f)
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

BOOL func_474(float fParam0, var uParam1, var uParam2) // Position - 0x2246E (140398)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_475(int iParam0) // Position - 0x22498 (140440)
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

void func_476(var uParam0, int iParam1) // Position - 0x2256B (140651)
{
	if (iParam1 == 0)
		uParam0->f_1 = hLocal_26;
	else
		uParam0->f_1 = hLocal_27;

	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
	return;
}

void func_477() // Position - 0x22592 (140690)
{
	int i;

	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();

	for (i = 0; i < 5; i = i + 1)
	{
		Global_2100721.f_81[i] = 0;
	}

	return;
}

void func_478(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x225BB (140731)
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
	fov = func_422(fLocal_132);
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

void func_479(var uParam0, var uParam1) // Position - 0x2281E (141342)
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

void func_480() // Position - 0x228DA (141530)
{
	Global_23992.f_6 = 1;
	return;
}

void func_481(int iParam0, BOOL bParam1) // Position - 0x228E8 (141544)
{
	if (bParam1)
		MISC::SET_BIT(&Global_33530, iParam0);
	else
		MISC::CLEAR_BIT(&Global_33530, iParam0);

	return;
}

int func_482(eCharacter echParam0, int iParam1) // Position - 0x2290A (141578)
{
	var outValue;
	Hash statHash;

	statHash = func_483(echParam0, iParam1);
	STATS::STAT_GET_INT(statHash, &outValue, -1);
	return outValue;
}

Hash func_483(eCharacter echParam0, int iParam1) // Position - 0x22928 (141608)
{
	var unk;
	var unk2;

	func_484(echParam0, iParam1, &unk, &unk2);
	return unk;
}

void func_484(eCharacter echParam0, int iParam1, var uParam2, var uParam3) // Position - 0x2293E (141630)
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

void func_485(BOOL bParam0) // Position - 0x22B95 (142229)
{
	if (bParam0)
	{
		func_486();
	
		if (Global_21222.f_1 == 10 || Global_21222.f_1 == 9)
			MISC::SET_BIT(&Global_9076, 16);
	
		Global_21222.f_1 = 1;
	
		if (func_42(0))
			func_445(0);
	}
	else if (Global_21222.f_1 == 1)
	{
		if (!(Global_21222.f_1 == 0))
			Global_21222.f_1 = 3;
	}

	return;
}

void func_486() // Position - 0x22BF8 (142328)
{
	if (Global_21222.f_1 == 9 || Global_21222.f_1 == 10)
	{
		Global_22638 = 0;
		Global_22634 = 1;
	}

	return;
}

void func_487(var uParam0, var uParam1, var uParam2) // Position - 0x22C21 (142369)
{
	int i;
	int j;

	HUD::DISPLAY_AREA_NAME(true);
	func_272(8);
	func_325();

	if (bLocal_273)
		func_504(&uLocal_289);

	for (i = 0; i < 2; i = i + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			func_426(&uParam0->f_5[i /*79*/][j /*26*/]);
		}
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_26);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_27);

	if (!PED::IS_PED_INJURED(uLocal_263[0]) && !PED::IS_PED_INJURED(uLocal_263[1]))
	{
		TASK::TASK_CLEAR_LOOK_AT(uLocal_263[0]);
		TASK::TASK_CLEAR_LOOK_AT(uLocal_263[1]);
	}

	func_503();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_58);
	func_502();
	func_501(uParam1->f_645);
	func_500(&(uParam1->f_57));

	if (!ENTITY::IS_ENTITY_DEAD(func_516(), false))
	{
		PED::SET_PED_AS_GROUP_MEMBER(func_516(), func_499());
		func_498(iLocal_297, iLocal_298);
	}
	else
	{
		func_496(&uLocal_263[1]);
	}

	func_485(false);
	func_495(uParam2, 0);
	func_39(0);
	HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);

	if (PLAYER::IS_PLAYER_ONLINE())
		if (uParam0->f_460 && !bLocal_287)
			func_494(190, false);

	func_106();
	func_477();
	func_98(&(uParam1->f_72), 0);
	BUILTIN::WAIT(200);

	if (bLocal_280)
	{
		func_491(130, 0, 0);
		func_488();
	}

	func_481(23, false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_488() // Position - 0x22D70 (142704)
{
	func_489();
	return;
}

int func_489() // Position - 0x22D7D (142717)
{
	if (func_490(false))
		return 0;

	if (Global_101932.f_8)
		if (Global_101932.f_10 > 0)
			return 0;
	else if (Global_101932.f_10 > 1)
		return 0;

	Global_101932.f_10 = Global_101932.f_10 + 1;
	return 1;
}

BOOL func_490(BOOL bParam0) // Position - 0x22DC8 (142792)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79993, 0);
}

void func_491(int iParam0, int iParam1, int iParam2) // Position - 0x22DF0 (142832)
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

	if (Global_114344.f_10198[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114344.f_10198[iParam0 /*12*/].f_6 == 11 || Global_114344.f_10198[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_114344.f_10198[iParam0 /*12*/].f_5 = 1;
		Global_114344.f_10198[iParam0 /*12*/].f_10 = iParam1;
		Global_114344.f_10198[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_492();

	return;
}

void func_492() // Position - 0x22ED6 (143062)
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
	Global_114080 = 0;
	Global_114081 = 0;
	Global_114082 = 0;
	Global_114083 = 0;
	Global_114084 = 0;
	Global_114085 = 0;
	Global_114086 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_114344.f_10198.f_3853;
	Global_114344.f_10198.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_114344.f_10198[num /*12*/].f_5 == 1)
		{
			switch (Global_114344.f_10198[num /*12*/].f_6)
			{
				case 1:
					Global_114080 = Global_114080 + 1;
					num2 = num2 + Global_114344.f_10198[num /*12*/].f_4;
					break;
			
				case 3:
					Global_114081 = Global_114081 + 1;
					num3 = num3 + Global_114344.f_10198[num /*12*/].f_4;
					break;
			
				case 5:
					Global_114082 = Global_114082 + 1;
					num4 = num4 + Global_114344.f_10198[num /*12*/].f_4;
					break;
			
				case 7:
					Global_114083 = Global_114083 + 1;
					num5 = num5 + Global_114344.f_10198[num /*12*/].f_4;
					break;
			
				case 9:
					Global_114084 = Global_114084 + 1;
					num6 = num6 + (Global_114344.f_10198[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_114085 = Global_114085 + 1;
					num7 = num7 + Global_114344.f_10198[num /*12*/].f_4;
					break;
			
				case 13:
					Global_114086 = Global_114086 + 1;
					num8 = num8 + Global_114344.f_10198[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_114063 > 0)
		if (Global_114080 == Global_114063)
			num2 = 55f;

	if (Global_114064 > 0)
		if (Global_114081 == Global_114064)
			num3 = 10f;

	if (Global_114065 > 0)
		if (Global_114082 == Global_114065)
			num4 = 0f;

	if (Global_114066 > 0)
		if (Global_114083 == Global_114066)
			num5 = 10f;

	if (Global_114067 > 0)
	{
		if (Global_114084 == Global_114067 || (Global_114067 * 10) / Global_114084 < 41 || Global_114084 > Global_114070 || Global_114084 == Global_114070)
		{
			if (!IS_BIT_SET(Global_114344.f_10198.f_3856, 14))
			{
				if (Global_114084 == Global_114067)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_114067, 0);
					MISC::SET_BIT(&(Global_114344.f_10198.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_114068 > 0)
		if (Global_114085 == Global_114068)
			num7 = 15f;

	if (Global_114069 > 0)
		if (Global_114086 == Global_114069)
			num8 = 5f;

	Global_114344.f_10198.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_114084 > Global_114070 || Global_114084 == Global_114070)
		value2 = Global_114070;
	else
		value2 = Global_114084;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_114080, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_114063, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_114081, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_114064, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_114082, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_114065, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_114083, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_114066, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_114070, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_114086 + Global_114085, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_114069 + Global_114068, true);
	Global_114087 = (Global_114080 * 100) / Global_114063;
	Global_114089 = ((Global_114082 + Global_114081) * 100) / (Global_114065 + Global_114064);
	Global_114088 = ((Global_114083 + value2) * 100) / (Global_114066 + Global_114070);
	Global_114090 = ((Global_114085 + Global_114086) * 100) / (Global_114068 + Global_114069);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_114344.f_10198.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_114087, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_114088, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_114089, true);

	if (value > 0f && BUILTIN::FLOOR(value) < BUILTIN::FLOOR(Global_114344.f_10198.f_3853))
		func_87(13, BUILTIN::FLOOR(Global_114344.f_10198.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79744)
		{
			if (func_493() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_114078 = 0;
			
				if (!Global_64506)
					func_489();
			}
		}
	}

	return;
}

int func_493() // Position - 0x23394 (144276)
{
	return Global_33281;
}

void func_494(int iParam0, BOOL bParam1) // Position - 0x2339F (144287)
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

	if (func_231(iParam0, &unk, &unk8, 1, -1, false, false))
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

void func_495(var uParam0, int iParam1) // Position - 0x2344A (144458)
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

	if (!Global_80013)
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
			if (!Global_80015)
				if (CAM::IS_SCREEN_FADED_OUT() && !func_490(false))
					CAM::DO_SCREEN_FADE_IN(800);

	func_39(0);
	return;
}

void func_496(var uParam0) // Position - 0x234F9 (144633)
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
			if (!IS_BIT_SET(Global_114305, 10))
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_497(iLocal_302 == 2, uLocal_343, uLocal_349), 1f, 20000, 0.25f, 0, iLocal_302 == 2 ? fLocal_353 : fLocal_355);
			else
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_497(iLocal_302 == 2, uLocal_340, uLocal_346), 1f, 20000, 0.25f, 0, iLocal_302 == 2 ? fLocal_352 : fLocal_354);
		
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_497(iLocal_302 == 2, uLocal_340, uLocal_346), 1f, 20000, 0.25f, 0, iLocal_302 == 2 ? 172.6813f : 142.6717f);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, true);
		}
	
		TASK::CLOSE_SEQUENCE_TASK(iLocal_300);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_300);
		PED::SET_PED_KEEP_TASK(*uParam0, true);
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_299);
	return;
}

Vector3 func_497(BOOL bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x23631 (144945)
{
	if (bParam0)
		return uParam1;

	return uParam4;
}

void func_498(int iParam0, int iParam1) // Position - 0x2364C (144972)
{
	if (Global_97694 == iParam0)
	{
		Global_97695 = Global_97694;
		Global_97696 = iParam1;
		Global_97694 = 23;
	}

	return;
}

int func_499() // Position - 0x23674 (145012)
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_500(int* piParam0) // Position - 0x23684 (145028)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(piParam0);
		*piParam0 = 0;
	}

	return;
}

void func_501(var uParam0) // Position - 0x236A0 (145056)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
	return;
}

void func_502() // Position - 0x236AE (145070)
{
	HUD::CLEAR_HELP(true);
	CAM::DESTROY_ALL_CAMS(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::DISPLAY_RADAR(true);
	return;
}

void func_503() // Position - 0x236CF (145103)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_57))
		OBJECT::DELETE_OBJECT(&obLocal_57);

	return;
}

void func_504(var uParam0) // Position - 0x236E6 (145126)
{
	Vehicle vehicle;

	vehicle = *uParam0;

	if (ENTITY::DOES_ENTITY_EXIST(vehicle))
	{
		if (!func_451(vehicle))
		{
			ENTITY::SET_ENTITY_COLLISION(vehicle, true, false);
			ENTITY::SET_ENTITY_VISIBLE(vehicle, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(vehicle, false);
		}
	}

	return;
}

void func_505() // Position - 0x2371D (145181)
{
	int num;

	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
		BUILTIN::START_NEW_SCRIPT("buddyDeathResponse", DEFAULT);

	if (Global_114344.f_9089 || func_490(false))
	{
		if (!func_513())
		{
			num = func_512();
		
			if (num != -1)
			{
				if (!func_507(num))
					return;
			
				MISC::SET_BIT(&(Global_92620[num /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_506();
		}
	}

	return;
}

void func_506() // Position - 0x2378E (145294)
{
	Global_101928 = 1;

	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79977))
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_79977, "CMN_MARRE" /*~s~Michael was arrested.*/, 16);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_79977, "CMN_FARRE" /*~s~Franklin was arrested.*/, 16);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_79977, "CMN_TARRE" /*~s~Trevor was arrested.*/, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_79981, "", 16);
		}
	
		Global_101928 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79977))
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_79977, "CMN_MDIED" /*~s~Michael died.*/, 16);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_79977, "CMN_FDIED" /*~s~Franklin died.*/, 16);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_79977, "CMN_TDIED" /*~s~Trevor died.*/, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_79981, "", 16);
		}
	
		Global_101928 = 0;
		MISC::SET_BIT(&(Global_101893.f_20), 25);
	}

	return;
}

BOOL func_507(int iParam0) // Position - 0x2387D (145533)
{
	int num;
	int num2;

	func_506();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::START_FIRING_AMNESTY(5000);

	num = Global_92620[iParam0 /*5*/];
	num2 = Global_80015.f_109[num /*4*/];
	func_511(num2, true);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_508(&(Global_114344.f_2367.f_539), num2);

	if (Global_96043 == Global_101930)
		Global_114344.f_9089.f_330[num2 /*6*/].f_1 = Global_114344.f_9089.f_330[num2 /*6*/].f_1 + 1;

	if (!IS_BIT_SET(Global_92656[num2 /*34*/].f_15, 1))
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);

	Global_114344.f_9089.f_330[num2 /*6*/].f_2 = Global_114344.f_9089.f_330[num2 /*6*/].f_2 + 1;
	Global_96043 = Global_101930;

	if (iParam0 == -1)
	{
		Global_114344.f_9089;
		return false;
	}

	if (IS_BIT_SET(Global_92620[iParam0 /*5*/].f_1, 4))
		return false;

	if (IS_BIT_SET(Global_92620[iParam0 /*5*/].f_1, 5))
		return false;

	return true;
}

void func_508(var uParam0, int iParam1) // Position - 0x2398D (145805)
{
	int i;
	int num;
	var unk;
	float num2;

	if (iParam1 == 94)
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		num = Global_114344.f_18537[i];
	
		if (num == 8 || num == 9 || num == 10 || num == 11 || num == 34 || num == 72 || num == 73 && !IS_BIT_SET(Global_114344.f_9089.f_99.f_219[0], 9))
		{
		}
		else
		{
			unk = { 0f, 0f, 0f };
			num2 = 0f;
		
			if (!func_510(Global_114344.f_18537[i], &unk, &num2))
			{
				Global_114344.f_18537[i] = 318;
				func_509(&uParam0->f_2296[i]);
				uParam0->f_2300[i /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[i] = 0f;
				uParam0->f_2314[i] = 0;
				uParam0->f_2318[i /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[i] = 0;
				Global_99258[i /*29*/] = { 0f, 0f, 0f };
				Global_99258[i /*29*/].f_9 = 0f;
				Global_99258[i /*29*/].f_12 = 0f;
				Global_99258[i /*29*/].f_3 = { 0f, 0f, 0f };
				Global_99258[i /*29*/].f_10 = 0f;
				Global_99258[i /*29*/].f_13 = 0f;
				Global_99258[i /*29*/].f_6 = { 0f, 0f, 0f };
				Global_99258[i /*29*/].f_11 = 0f;
				Global_99258[i /*29*/].f_14 = 0f;
				Global_99258[i /*29*/].f_17 = { 0f, 0f, 0f };
				Global_99258[i /*29*/].f_26 = 0f;
				Global_99258[i /*29*/].f_20 = { 0f, 0f, 0f };
				Global_99258[i /*29*/].f_27 = 0f;
				Global_99258[i /*29*/].f_23 = { 0f, 0f, 0f };
				Global_99258[i /*29*/].f_28 = 0f;
			}
		}
	}

	return;
}

void func_509(var uParam0) // Position - 0x23B53 (146259)
{
	*uParam0 = -15;
	return;
}

BOOL func_510(int iParam0, var uParam1, var uParam2) // Position - 0x23B61 (146273)
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
			return func_510(8, uParam1, uParam2);
	
		case 10:
			return func_510(8, uParam1, uParam2);
	
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

void func_511(int iParam0, BOOL bParam1) // Position - 0x244D1 (148689)
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_95853[iParam0 /*2*/] = 1;
	else
		Global_95853[iParam0 /*2*/] = 0;

	return;
}

int func_512() // Position - 0x2450F (148751)
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (IS_BIT_SET(Global_92620[i /*5*/].f_1, 2))
			return i;
	}

	return -1;
}

BOOL func_513() // Position - 0x24541 (148801)
{
	if (Global_101893 == 13 || Global_101893 == 10 || Global_101893 == 11 || Global_101893 == 12)
		return false;

	return true;
}

void func_514(int iParam0, BOOL bParam1) // Position - 0x2457F (148863)
{
	if (PED::IS_PED_INJURED(func_516()))
		return;

	if (bParam1)
	{
		if (!PED::IS_PED_GROUP_MEMBER(func_516(), func_499()))
			return;
	
		if (!PED::IS_PED_INJURED(func_515()))
			if (!PED::IS_PED_GROUP_MEMBER(func_515(), func_499()))
				return;
	}

	if (Global_97694 == 23)
	{
		Global_97696 = 10;
		Global_97694 = iParam0;
	}

	return;
}

Ped func_515() // Position - 0x245E4 (148964)
{
	return Global_97701;
}

Ped func_516() // Position - 0x245F0 (148976)
{
	return Global_97700;
}

void func_517() // Position - 0x245FC (148988)
{
	if (bLocal_258 == true)
		return;

	func_325();
	PAD::INIT_PC_SCRIPTED_CONTROLS("Darts");
	bLocal_258 = true;
	return;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x2461F (149023)
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


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
	int iLocal_12 = 0;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
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
	var uLocal_45 = 2;
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
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	Ped pedLocal_88 = 0;
	Ped pedLocal_89 = 0;
	Ped pedLocal_90 = 0;
	Blip blLocal_91 = 0;
	Object obLocal_92 = 0;
	Object obLocal_93 = 0;
	Object obLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	float fLocal_100 = 0f;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	float fLocal_104 = 0f;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	BOOL bLocal_107 = 0;
	BOOL bLocal_108 = 0;
	BOOL bLocal_109 = 0;
	BOOL bLocal_110 = 0;
	BOOL bLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 2;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	BOOL bLocal_118 = 0;
	BOOL bLocal_119 = 0;
	Hash hLocal_120 = 0;
	Vehicle veLocal_121 = 0;
	Vehicle veLocal_122 = 0;
	Vehicle veLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 2;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 2;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	Hash hLocal_146 = 0;
	Hash hLocal_147 = 0;
	Hash hLocal_148 = 0;
	char* sLocal_149 = 0;
	var uLocal_150 = 16;
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
	float num;
	int i;
	int j;

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
	iLocal_12 = 3;
	fLocal_13 = 0.001f;
	iLocal_16 = -1;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	iLocal_95 = -1;
	iLocal_96 = -1;
	hLocal_120 = 94130617;
	uLocal_124 = { -35.607f, -1110.0458f, 26.4364f };
	uLocal_127 = { -126.1154f, -1129.3466f, 23.4329f };
	iLocal_141 = -1;
	iLocal_142 = -1;
	iLocal_143 = -1;
	iLocal_144 = -1;
	sLocal_149 = "REYE_AU";
	func_173(uScriptParam_0.f_1[0 /*3*/]);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(27))
		func_172();

	if (func_145(uScriptParam_0.f_1[0 /*3*/], 30, 0, false, false))
		func_143(30);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	func_130();

	while (true)
	{
		if (!func_129())
			if (func_128())
				func_100();
	
		if (TASK::DOES_SCENARIO_GROUP_EXIST("DEALERSHIP"))
			if (TASK::IS_SCENARIO_GROUP_ENABLED("DEALERSHIP"))
				TASK::SET_SCENARIO_GROUP_ENABLED("DEALERSHIP", false);
	
		num = CAM::REPLAY_GET_MAX_DISTANCE_ALLOWED_FROM_PLAYER() + 20f;
	
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), uLocal_97) < num * num)
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), uLocal_101) < num * num)
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			i = 0;
		
			for (i = 0; i < 2; i = i + 1)
			{
				func_97(i);
			}
		
			switch (iLocal_86)
			{
				case 0:
					func_79();
					break;
			
				case 1:
					func_61();
					break;
			
				case 2:
					func_3();
					break;
			}
		}
		else if (bLocal_118)
		{
			j = 0;
		
			for (j = 0; j < 2; j = j + 1)
			{
				func_97(j);
			}
		
			switch (iLocal_86)
			{
				case 0:
					func_79();
					break;
			
				case 1:
					func_61();
					break;
			
				case 2:
					func_3();
					break;
			}
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_88))
				if (func_1(pedLocal_88, PLAYER::PLAYER_PED_ID(), true) > 120f)
					func_100();
		}
		else
		{
			func_100();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

float func_1(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x242
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

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x2A0
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void func_3() // Position - 0x2C1
{
	switch (iLocal_87)
	{
		case 0:
			if (func_60())
				iLocal_87 = 1;
		
			func_59();
			break;
	
		case 1:
			func_59();
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_88))
			{
				if (func_58())
				{
					if (!bLocal_110)
					{
						bLocal_111 = true;
						iLocal_106 = 1;
						TASK::CLEAR_PED_TASKS(pedLocal_88);
					
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_92))
							OBJECT::DELETE_OBJECT(&obLocal_92);
					
						if (!bLocal_108)
						{
							if (!bLocal_109)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_145);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_145);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_145);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_145);
							}
						
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_88, iLocal_145);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_145);
							bLocal_110 = true;
						}
						else
						{
							if (!bLocal_109)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_145);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							
								if (func_1(pedLocal_88, PLAYER::PLAYER_PED_ID(), true) <= 4f)
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
							
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, true, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_145);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_145);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, true, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_145);
							}
						
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_88, iLocal_145);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_145);
							bLocal_110 = true;
						}
					}
					else
					{
						func_36();
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedLocal_88, 2f);
					
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(pedLocal_88, false), true) >= 100f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(pedLocal_88, false), 3f))
							PED::DELETE_PED(&pedLocal_88);
					
						if (uLocal_45[0 /*20*/].f_18 >= 5 && uLocal_45[1 /*20*/].f_18 >= 5)
							func_4();
					}
				}
				else
				{
					func_36();
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedLocal_88, 2f);
				
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(pedLocal_88, false), true) >= 100f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(pedLocal_88, false), 3f))
						PED::DELETE_PED(&pedLocal_88);
				
					if (uLocal_45[0 /*20*/].f_18 >= 5 && uLocal_45[1 /*20*/].f_18 >= 5)
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.623955f, -1087.3695f, 24.598333f, -11.278607f, -1108.2798f, 34.17205f, 47.5f, false, true, 0))
							func_4();
				
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_88))
						PED::SET_PED_RESET_FLAG(pedLocal_88, 60, true);
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(blLocal_91))
					HUD::REMOVE_BLIP(&blLocal_91);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_88))
					if (ENTITY::IS_ENTITY_DEAD(pedLocal_88, false))
						if (!bLocal_119)
							bLocal_119 = true;
			
				bLocal_111 = true;
			
				if (uLocal_45[0 /*20*/].f_18 >= 5 && uLocal_45[1 /*20*/].f_18 >= 5)
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.623955f, -1087.3695f, 24.598333f, -11.278607f, -1108.2798f, 34.17205f, 47.5f, false, true, 0))
						func_4();
			}
			break;
	}

	return;
}

void func_4() // Position - 0x5C0
{
	func_35(&pedLocal_88, true, 0, 1);

	while (!func_34())
	{
		SYSTEM::WAIT(0);
	}

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SIMEON_01", 0f);

	func_8(-1, 0);
	func_5();
	func_100();
	return;
}

void func_5() // Position - 0x604
{
	func_6();
	return;
}

int func_6() // Position - 0x611
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_101727.f_8)
		if (Global_101727.f_10 > 0)
			return 0;
	else if (Global_101727.f_10 > 1)
		return 0;

	Global_101727.f_10 = Global_101727.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x65C
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

void func_8(int iParam0, int iParam1) // Position - 0x684
{
	if (iParam0 == -1)
		iParam0 = func_32();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_31(iParam0))
	{
		func_30(iParam0, iParam1);
	
		if (!func_29(51))
		{
			func_19("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_22(), 0, 138, 0);
			func_18(51);
		}
	
		if (func_17(iParam0))
			Global_114135.f_24999.f_2 = 3;
	
		if (func_16(iParam0, iParam1) != 322)
			func_10(func_16(iParam0, iParam1), uLocal_41, uLocal_41.f_1);
	
		Global_114123 = iParam1;
	
		if (Global_114121 == 0)
			if (Global_114124 == 1 || Global_114124 == 5 || Global_114124 == 11 || Global_114124 == 25)
				func_9(2);
			else if (Global_114124 == 26 || Global_114124 == 8 || Global_114124 == 17)
				func_9(7);
			else
				func_9(1);
	}

	return;
}

void func_9(int iParam0) // Position - 0x787
{
	Global_114121 = iParam0;
	return;
}

void func_10(int iParam0, var uParam1, var uParam2) // Position - 0x795
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

	if (Global_114135.f_10198[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114135.f_10198[iParam0 /*12*/].f_6 == 11 || Global_114135.f_10198[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_114135.f_10198[iParam0 /*12*/].f_5 = 1;
		Global_114135.f_10198[iParam0 /*12*/].f_10 = uParam1;
		Global_114135.f_10198[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(-2044299740, 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(86701099, 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(-375571184, 50, 0);
	}

	if (flag)
		func_11();

	return;
}

void func_11() // Position - 0x87B
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
	Global_113871 = 0;
	Global_113872 = 0;
	Global_113873 = 0;
	Global_113874 = 0;
	Global_113875 = 0;
	Global_113876 = 0;
	Global_113877 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_114135.f_10198.f_3853;
	Global_114135.f_10198.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_114135.f_10198[num /*12*/].f_5 == 1)
		{
			switch (Global_114135.f_10198[num /*12*/].f_6)
			{
				case 1:
					Global_113871 = Global_113871 + 1;
					num2 = num2 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113872 = Global_113872 + 1;
					num3 = num3 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113873 = Global_113873 + 1;
					num4 = num4 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113874 = Global_113874 + 1;
					num5 = num5 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113875 = Global_113875 + 1;
					num6 = num6 + (Global_114135.f_10198[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113876 = Global_113876 + 1;
					num7 = num7 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113877 = Global_113877 + 1;
					num8 = num8 + Global_114135.f_10198[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113854 > 0)
		if (Global_113871 == Global_113854)
			num2 = 55f;

	if (Global_113855 > 0)
		if (Global_113872 == Global_113855)
			num3 = 10f;

	if (Global_113856 > 0)
		if (Global_113873 == Global_113856)
			num4 = 0f;

	if (Global_113857 > 0)
		if (Global_113874 == Global_113857)
			num5 = 10f;

	if (Global_113858 > 0)
	{
		if (Global_113875 == Global_113858 || (Global_113858 * 10) / Global_113875 < 41 || Global_113875 > Global_113861 || Global_113875 == Global_113861)
		{
			if (!IS_BIT_SET(Global_114135.f_10198.f_3856, 14))
			{
				if (Global_113875 == Global_113858)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(-2122623864, Global_113858, 0);
					MISC::SET_BIT(&(Global_114135.f_10198.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113859 > 0)
		if (Global_113876 == Global_113859)
			num7 = 15f;

	if (Global_113860 > 0)
		if (Global_113877 == Global_113860)
			num8 = 5f;

	Global_114135.f_10198.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113875 > Global_113861 || Global_113875 == Global_113861)
		value2 = Global_113861;
	else
		value2 = Global_113875;

	STATS::STAT_SET_INT(-1055525200, Global_113871, true);
	STATS::STAT_SET_INT(-419750212, Global_113854, true);
	STATS::STAT_SET_INT(1331385274, Global_113872, true);
	STATS::STAT_SET_INT(542355616, Global_113855, true);
	STATS::STAT_SET_INT(1561233577, Global_113873, true);
	STATS::STAT_SET_INT(558499468, Global_113856, true);
	STATS::STAT_SET_INT(-852659719, Global_113874, true);
	STATS::STAT_SET_INT(-20401960, Global_113857, true);
	STATS::STAT_SET_INT(-2122623864, value2, true);
	STATS::STAT_SET_INT(-215705366, Global_113861, true);
	STATS::STAT_SET_INT(-131898641, Global_113877 + Global_113876, true);
	STATS::STAT_SET_INT(-2086369560, Global_113860 + Global_113859, true);
	Global_113878 = (Global_113871 * 100) / Global_113854;
	Global_113880 = ((Global_113873 + Global_113872) * 100) / (Global_113856 + Global_113855);
	Global_113879 = ((Global_113874 + value2) * 100) / (Global_113857 + Global_113861);
	Global_113881 = ((Global_113876 + Global_113877) * 100) / (Global_113859 + Global_113860);
	STATS::STAT_SET_FLOAT(1215094015, Global_114135.f_10198.f_3853, true);
	STATS::STAT_SET_INT(1813094653, Global_113878, true);
	STATS::STAT_SET_INT(-1205712980, Global_113879, true);
	STATS::STAT_SET_INT(480408826, Global_113880, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_114135.f_10198.f_3853))
		func_13(13, SYSTEM::FLOOR(Global_114135.f_10198.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79539)
		{
			if (func_12() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113869 = 0;
			
				if (!Global_64308)
					func_6();
			}
		}
	}

	return;
}

int func_12() // Position - 0xD39
{
	return Global_33087;
}

BOOL func_13(int iParam0, int iParam1) // Position - 0xD44
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0xD95
{
	if (iParam2 == -1)
		iParam2 = func_15();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_15() // Position - 0xDB3
{
	return Global_1574926;
}

int func_16(int iParam0, int iParam1) // Position - 0xDBF
{
	switch (iParam0)
	{
		case 0:
			return 250;
	
		case 1:
			return 226;
	
		case 2:
			return 243;
	
		case 3:
			return 256;
	
		case 4:
			return 259;
	
		case 5:
			if (iParam1 == 1)
				return 281;
		
			if (iParam1 == 2)
				return 282;
			break;
	
		case 6:
			return 265;
	
		case 7:
			return 218;
	
		case 9:
			if (iParam1 == 1)
				return 271;
		
			if (iParam1 == 2)
				return 272;
		
			if (iParam1 == 3)
				return 273;
		
			if (iParam1 == 4)
				return 274;
		
			if (iParam1 == 5)
				return 275;
		
			if (iParam1 == 6)
				return 276;
		
			if (iParam1 == 7)
				return 277;
		
			if (iParam1 == 8)
				return 278;
		
			if (iParam1 == 9)
				return 279;
		
			if (iParam1 == 10)
				return 280;
			break;
	
		case 10:
			return 219;
	
		case 11:
			if (iParam1 == 1)
				return 246;
		
			if (iParam1 == 2)
				return 247;
		
			if (iParam1 == 3)
				return 248;
		
			if (iParam1 == 4)
				return 249;
			break;
	
		case 12:
			return 254;
	
		case 13:
			if (iParam1 == 1)
				return 260;
		
			if (iParam1 == 2)
				return 261;
		
			if (iParam1 == 3)
				return 262;
		
			if (iParam1 == 4)
				return 264;
			break;
	
		case 14:
			return 283;
	
		case 15:
			if (iParam1 == 1)
				return 224;
		
			if (iParam1 == 2)
				return 225;
			break;
	
		case 16:
			return 252;
	
		case 17:
			if (iParam1 == 1)
				return 244;
		
			if (iParam1 == 2)
				return 245;
			break;
	
		case 18:
			return 253;
	
		case 19:
			return 215;
	
		case 20:
			return 216;
	
		case 21:
			return 251;
	
		case 22:
			if (iParam1 == 1)
				return 221;
		
			if (iParam1 == 2)
				return 222;
			break;
	
		case 23:
			if (iParam1 == 1)
				return 213;
		
			if (iParam1 == 2)
				return 214;
			break;
	
		case 24:
			return 242;
	
		case 25:
			if (iParam1 == 1)
				return 267;
		
			if (iParam1 == 2)
				return 268;
		
			if (iParam1 == 3)
				return 269;
			break;
	
		case 8:
			return 255;
	
		case 26:
			if (iParam1 == 1)
				return 227;
		
			if (iParam1 == 2)
				return 228;
			break;
	
		case 27:
			if (iParam1 == 1)
				return 257;
		
			if (iParam1 == 2)
				return 258;
			break;
	
		case 28:
			return 217;
	
		case 29:
			if (iParam1 == 1)
				return 229;
		
			if (iParam1 == 2)
				return 230;
		
			if (iParam1 == 3)
				return 231;
			break;
	
		case 30:
			return 285;
	
		case 31:
			return 318;
	
		case 32:
			return 319;
	
		case 33:
			return 320;
	}

	return 322;
}

BOOL func_17(int iParam0) // Position - 0x1133
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}

	return true;
}

void func_18(int iParam0) // Position - 0x1162
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_114135.f_20414.f_150[i], offset);

	return;
}

void func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x11A4
{
	func_20(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_20(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x11C5
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

	for (i = 0; i < Global_114135.f_20414.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_114135.f_20414[i /*16*/], sParam0))
			return;
	}

	if (Global_114135.f_20414.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_4), sParam1, 16);
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_9 = iParam5;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_11 = iParam6;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_12 = iParam2;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_13 = iParam7;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_14 = iParam8;
		Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_114135.f_20414[Global_114135.f_20414.f_145 /*16*/].f_10 = -1;
	
		Global_114135.f_20414.f_145 = Global_114135.f_20414.f_145 + 1;
		func_21();
	}

	return;
}

void func_21() // Position - 0x1398
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_114135.f_20414.f_146[i] = 0;
	}

	for (i = 0; i < Global_114135.f_20414.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_114135.f_20414[i /*16*/].f_11, 0))
			if (Global_114135.f_20414[i /*16*/].f_12 > Global_114135.f_20414.f_146[0])
				Global_114135.f_20414.f_146[0] = Global_114135.f_20414[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114135.f_20414[i /*16*/].f_11, 1))
			if (Global_114135.f_20414[i /*16*/].f_12 > Global_114135.f_20414.f_146[1])
				Global_114135.f_20414.f_146[1] = Global_114135.f_20414[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114135.f_20414[i /*16*/].f_11, 2))
			if (Global_114135.f_20414[i /*16*/].f_12 > Global_114135.f_20414.f_146[2])
				Global_114135.f_20414.f_146[2] = Global_114135.f_20414[i /*16*/].f_12;
	}

	return;
}

int func_22() // Position - 0x14AF
{
	func_23();

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

void func_23() // Position - 0x14F5
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_25(character) && !func_24(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_25(Global_114135.f_2367.f_539.f_4321))
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

BOOL func_24(int iParam0) // Position - 0x15F2
{
	return Global_44181 == iParam0;
}

BOOL func_25(eCharacter echParam0) // Position - 0x1600
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x160C
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1649
{
	if (func_25(character))
		return func_28(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_28(eCharacter echParam0) // Position - 0x166E
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_29(int iParam0) // Position - 0x167D
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_114135.f_20414.f_150[i], num);

	return false;
}

void func_30(int iParam0, int iParam1) // Position - 0x16BD
{
	MISC::SET_BIT(&Global_114135.f_24999.f_8[iParam0], iParam1);
	return;
}

int func_31(int iParam0) // Position - 0x16D8
{
	int num;

	num = 1;

	switch (iParam0)
	{
		case 1:
			num = 5;
			break;
	
		case 5:
			num = 2;
			break;
	
		case 9:
			num = 10;
			break;
	
		case 11:
			num = 4;
			break;
	
		case 13:
			num = 4;
			break;
	
		case 15:
			num = 2;
			break;
	
		case 17:
			num = 2;
			break;
	
		case 22:
			num = 2;
			break;
	
		case 23:
			num = 2;
			break;
	
		case 25:
			num = 3;
			break;
	
		case 26:
			num = 2;
			break;
	
		case 27:
			num = 2;
			break;
	
		case 29:
			num = 3;
			break;
	}

	return num;
}

int func_32() // Position - 0x1789
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_33(unk);
	return num;
}

int func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x17A6
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case -60745600:
			return 23;
	
		case 1149455824:
			return 0;
	
		case 1889800404:
			return 15;
	
		case 737712801:
			return 1;
	
		case 976199832:
			return 26;
	
		case 1531173018:
			return 29;
	
		case 1154171352:
			return 24;
	
		case -1325807529:
			return 2;
	
		case -2118978003:
			return 17;
	
		case -1363545320:
			return 11;
	
		case -129069433:
			return 16;
	
		case 1158398451:
			return 18;
	
		case -1669765523:
			return 12;
	
		case -1538568960:
			return 3;
	
		case -396020015:
			return 27;
	
		case 786118124:
			return 20;
	
		case -770891250:
			return 19;
	
		case 190582896:
			return 4;
	
		case -911763748:
			return 13;
	
		case -881321240:
			return 28;
	
		case 1337652317:
			return 7;
	
		case 1492712482:
			return 25;
	
		case -1612307213:
			return 10;
	
		case -201963189:
			return 22;
	
		case -1176354303:
			return 21;
	
		case 1735157309:
			return 9;
	
		case -1631807569:
			return 5;
	
		case 847041036:
			return 6;
	
		case -167923910:
			return 14;
	
		case 59976311:
			return 30;
	
		case 996703443:
			return 31;
	
		case -2088549946:
			return 32;
	
		case -1148693293:
			return 33;
	}

	return -1;
}

BOOL func_34() // Position - 0x1980
{
	return true;
}

void func_35(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x1989
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!PED::IS_PED_INJURED(*ppedParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
		
			PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	}

	return;
}

void func_36() // Position - 0x19D9
{
	if (iLocal_112 == 0)
	{
		if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_45[0 /*20*/].f_1))
			{
				_CONVERSATION_INITIALIZE_ACTOR(&uLocal_150, 5, uLocal_45[0 /*20*/].f_1, "YETARIAN_GOON", 0, 1);
			}
			else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_45[1 /*20*/].f_1))
			{
				_CONVERSATION_INITIALIZE_ACTOR(&uLocal_150, 5, uLocal_45[1 /*20*/].f_1, "YETARIAN_GOON", 0, 1);
			}
			else
			{
				iLocal_112 = 1;
				iLocal_113 = 1;
			}
		
			if (iLocal_112 == 0)
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
					if (_CONVERSATION_ADD_LINE(&uLocal_150, sLocal_149, "RE_YETA_MIKE", 7, 0, 0, 0))
						iLocal_112 = 1;
				else if (_CONVERSATION_ADD_LINE(&uLocal_150, sLocal_149, "RE_YETA_FRAN", 7, 0, 0, 0))
					iLocal_112 = 1;
		}
	}
	else if (iLocal_113 == 0)
	{
		if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_45[0 /*20*/].f_1))
			{
				func_37(uLocal_45[0 /*20*/].f_1, "FIGHT", 34);
				iLocal_113 = 1;
			}
			else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_45[1 /*20*/].f_1))
			{
				func_37(uLocal_45[1 /*20*/].f_1, "FIGHT", 34);
				iLocal_113 = 1;
			}
			else
			{
				iLocal_113 = 1;
			}
		}
	}

	return;
}

void func_37(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x1AD4
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_38(iParam2), 1);
	return;
}

char* func_38(int iParam0) // Position - 0x1AEB
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

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1CDA
{
	func_54(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22432 = 0;
	Global_22434 = 0;
	Global_22439 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_2883585 = 0;
	return func_40(sParam2, iParam3, false);
}

BOOL func_40(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1D28
{
	Global_22426 = 0;

	if (Global_22425 == 0 || Global_22427 == 2)
	{
		if (Global_22425 != 0)
		{
			if (iParam1 > Global_22427)
			{
				if (Global_22432 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21066.f_1 = 3;
					Global_22425 = 0;
					Global_22426 = 1;
					Global_22478 = 0;
					Global_22421 = 0;
					Global_22422 = 0;
					Global_22436 = 0;
					Global_22435 = false;
					Global_21065 = 0;
				}
				else
				{
					func_53();
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
	
		if (func_52(8, -1))
			return 0;
	
		Global_22501 = { Global_22495 };
		func_51();
		Global_21714 = { Global_21879 };
		Global_22431 = Global_22432;
		Global_22438 = Global_22439;
		Global_2883586 = Global_2883585;
		Global_22440 = { Global_22456 };
		Global_22433 = Global_22434;
		Global_23415 = Global_23416;
		Global_23423 = { Global_23429 };
		Global_23417 = Global_23418;
		Global_23419 = Global_23420;
		Global_23421 = Global_23422;
		Global_22044.f_370 = Global_23414;
		Global_22044.f_368 = Global_23412;
		Global_22044.f_369 = Global_23413;
		Global_22421 = Global_22422;
	
		if (Global_22431)
		{
			MISC::CLEAR_BIT(&Global_8919, 20);
			MISC::CLEAR_BIT(&Global_8920, 17);
			MISC::CLEAR_BIT(&Global_8921, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_21066.f_1 > 3)
					return 0;
			}
		
			if (Global_21032 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_49())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
					return 0;
			
				if (!Global_79539)
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
		
			if (func_48())
			{
				return 0;
			}
			else
			{
				switch (Global_21066.f_1)
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
		
			func_47();
			Global_22435 = bParam2;
		}
	
		Global_22427 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22044, sParam0, 24);
		Global_21291 = 0;
		func_46();
		func_41();
		return 1;
	}

	if (Global_22425 == 5)
		return 0;

	if (iParam1 < Global_22427 || iParam1 == Global_22427)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_53();
	}

	return 0;
}

void func_41() // Position - 0x1FF6
{
	if (!func_42())
		return;

	if (Global_22431)
	{
		TEXT_LABEL_COPY(&(Global_1972230.f_1), { Global_22044 }, 4);
		Global_1972230 = Global_8234;
		Global_1972230.f_6 = Global_22435;
	}

	return;
}

BOOL func_42() // Position - 0x202D
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79539)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_43(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_43(Player plParam0) // Position - 0x2090
{
	return func_44(plParam0, 20);
}

BOOL func_44(Player plParam0, int iParam1) // Position - 0x20A0
{
	return IS_BIT_SET(Global_1887549[plParam0 /*611*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x20B8
{
	return -1;
}

void func_46() // Position - 0x20C1
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21293[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22425 = 1;
	return;
}

void func_47() // Position - 0x20F2
{
	Global_22478 = Global_22477;
	Global_22472 = Global_22473;
	Global_22519 = { Global_22507 };
	Global_22525 = { Global_22513 };
	Global_22480 = Global_22479;
	Global_22549 = { Global_22531 };
	Global_22555 = { Global_22537 };
	Global_22561 = { Global_22543 };
	Global_22567 = { Global_22573 };
	Global_8234 = Global_8235;
	Global_8236 = Global_8237;
	Global_22436 = Global_22437;
	Global_22438 = Global_22439;
	Global_22440 = { Global_22456 };
	Global_22429 = Global_22430;
	Global_23441 = 0;
	Global_22474 = 0;
	Global_22475 = 0;
	MISC::CLEAR_BIT(&Global_8920, 16);
	return;
}

BOOL func_48() // Position - 0x2187
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

BOOL func_49() // Position - 0x21AE
{
	int num;
	int weaponHash;

	if (Global_79539)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x2247
{
	if (func_24(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
				Global_21066 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
				Global_21066 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
				Global_21066 = CHAR_TREVOR;
			else
				Global_21066 = CHAR_MICHAEL;
	}
	else
	{
		Global_21066 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21066 == _CHAR_NULL)
			Global_21066 = CHAR_MULTIPLAYER;
	
		if (Global_79539)
			Global_21066 = CHAR_MULTIPLAYER;
	
		if (Global_21066 > CHAR_MULTIPLAYER)
			Global_21066 = CHAR_MULTIPLAYER;
	}

	return;
}

void func_51() // Position - 0x22E9
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21714[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21714[i /*10*/].f_1), "", 24);
		Global_21714[i /*10*/].f_7 = 0;
		Global_21714[i /*10*/].f_8 = 0;
	}

	Global_21714.f_161 = -99;
	Global_21714.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0x2340
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673654.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673654.f_1048, iParam0);
}

void func_53() // Position - 0x2378
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23436 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21066.f_1 == 9 || Global_21065 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		Global_21066.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22425 = 6;
		return;
	}

	return;
}

void func_54(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x23CF
{
	Global_21879 = { *uParam0 };
	Global_8235 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_22495, sParam2, 24);
	Global_23414 = iParam5;

	if (iParam3 == 0)
	{
		Global_23412 = 1;
		Global_23410 = 0;
	}
	else
	{
		Global_23412 = 0;
		Global_23410 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23413 = 1;
		Global_23411 = 0;
	}
	else
	{
		Global_23413 = 0;
		Global_23411 = 1;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2425
{
	func_23();
	return Global_114135.f_2367.f_539.f_4321;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x243E
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_79539)
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

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x24D9
{
	if (Global_22425 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

BOOL func_58() // Position - 0x24FB
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_88))
	{
		if (!bLocal_108)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(pedLocal_88, false), true) <= 7f || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_88, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
			{
				if (!bLocal_110)
				{
					MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(pedLocal_88, false), true) <= 7f;
					TASK::GET_SCRIPT_TASK_STATUS(pedLocal_88, SCRIPT_TASK_PERFORM_SEQUENCE) == 7;
				}
			
				return true;
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(pedLocal_88, false), true) <= 4.5f || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_88, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
		{
			if (!bLocal_110)
			{
				MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(pedLocal_88, false), true) <= 4.5f;
				TASK::GET_SCRIPT_TASK_STATUS(pedLocal_88, SCRIPT_TASK_PERFORM_SEQUENCE) == 7;
			}
		
			return true;
		}
	}
	else
	{
		return true;
	}

	return false;
}

void func_59() // Position - 0x25E5
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_88))
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_88, "cellphone@", "cellphone_call_out", 3))
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_88, "cellphone@", "cellphone_call_out") >= 0.24f)
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_92))
					OBJECT::DELETE_OBJECT(&obLocal_92);

	return;
}

BOOL func_60() // Position - 0x262E
{
	Interior interiorAtCoords;

	interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(uLocal_45[0 /*20*/].f_10);

	if (interiorAtCoords != 0)
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(interiorAtCoords);
	
		if (INTERIOR::IS_INTERIOR_READY(interiorAtCoords))
			return true;
	}

	return false;
}

void func_61() // Position - 0x265F
{
	switch (iLocal_87)
	{
		case 0:
			iLocal_87 = 1;
			break;
	
		case 1:
			if (func_60())
			{
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1831288286))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(-1831288286, -2051651622, -31.72f, -1101.85f, 26.57f, true, true, false, 0);
				}
				else if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1831288286) < 1f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1831288286, 1f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1831288286, 1, false, true);
				}
			}
		
			func_59();
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89) || _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90))
				{
					if (func_65())
					{
						if (iLocal_117 == 0)
						{
							if (bLocal_107)
							{
								TASK::CLEAR_PED_TASKS(pedLocal_88);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_145);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8, 2);
								TASK::TASK_PLAY_ANIM(0, "cellphone@", "cellphone_call_out", 1090519040, -1056964608, -1, 0, 0, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_145);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_88, iLocal_145);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_145);
							}
							else
							{
								TASK::CLEAR_PED_TASKS(pedLocal_88);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_145);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8, 2);
								TASK::TASK_PLAY_ANIM(0, "cellphone@", "cellphone_call_out", 1090519040, -1056964608, -1, 0, 0, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_145);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_88, iLocal_145);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_145);
							}
						
							bLocal_118 = true;
							iLocal_117 = 1;
						}
					
						if (!bLocal_108 && !bLocal_107)
						{
							if (iLocal_95 == -1)
								iLocal_95 = MISC::GET_GAME_TIMER();
						
							if (iLocal_96 == -1)
								iLocal_96 = 4000;
						}
						else
						{
							if (iLocal_95 == -1)
								iLocal_95 = MISC::GET_GAME_TIMER();
						
							if (iLocal_96 == -1)
								iLocal_96 = 1000;
						}
					
						if (iLocal_95 != -1 && iLocal_96 != 1)
						{
							if (MISC::GET_GAME_TIMER() - iLocal_95 >= iLocal_96)
							{
								func_62();
								AUDIO::TRIGGER_MUSIC_EVENT("RE9_SPOTTED");
								iLocal_105 = 1;
								iLocal_87 = 2;
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_91))
						HUD::REMOVE_BLIP(&blLocal_91);
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_88))
						if (ENTITY::IS_ENTITY_DEAD(pedLocal_88, false))
							if (!bLocal_119)
								bLocal_119 = true;
				
					bLocal_111 = true;
				
					if (uLocal_45[0 /*20*/].f_18 >= 5 && uLocal_45[1 /*20*/].f_18 >= 5)
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.623955f, -1087.3695f, 24.598333f, -11.278607f, -1108.2798f, 34.17205f, 47.5f, false, true, 0))
							func_4();
				}
			}
			break;
	
		case 2:
			iLocal_86 = 2;
			iLocal_87 = 0;
			break;
	}

	return;
}

void func_62() // Position - 0x28B8
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_150, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	else
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_150, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);

	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_150, 4, pedLocal_88, "SIMEON", 0, 1);

	if (bLocal_109)
		_CONVERSATION_ADD_LINE(&uLocal_150, sLocal_149, "RE_YETA_SNIP", 7, 0, 0, 0);
	else if (bLocal_107)
		_CONVERSATION_ADD_LINE(&uLocal_150, sLocal_149, "RE_YETA_EXT", 7, 1, 0, 0);
	else if (func_63())
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
			_CONVERSATION_ADD_LINE(&uLocal_150, sLocal_149, "RE_YETAM", 7, 0, 0, 0);
		else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			_CONVERSATION_ADD_LINE(&uLocal_150, sLocal_149, "RE_YETAF", 7, 0, 0, 0);
	else
		_CONVERSATION_ADD_LINE(&uLocal_150, sLocal_149, "RE_YETA_SNIP", 7, 0, 0, 0);

	return;
}

BOOL func_63() // Position - 0x297E
{
	if (func_64(PLAYER::PLAYER_PED_ID()) != -1569615261 && func_64(PLAYER::PLAYER_PED_ID()) != 966099553 && func_64(PLAYER::PLAYER_PED_ID()) != -1716189206 && func_64(PLAYER::PLAYER_PED_ID()) != 1737195953 && func_64(PLAYER::PLAYER_PED_ID()) != 1317494643 && func_64(PLAYER::PLAYER_PED_ID()) != -1786099057 && func_64(PLAYER::PLAYER_PED_ID()) != -2067956739 && func_64(PLAYER::PLAYER_PED_ID()) != 1141786504 && func_64(PLAYER::PLAYER_PED_ID()) != -102323637)
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			return false;
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			return false;

	return true;
}

int func_64(Ped pedParam0) // Position - 0x2A53
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
	return weaponHash;
}

BOOL func_65() // Position - 0x2A67
{
	if (!PED::IS_COP_PED_IN_AREA_3D(uLocal_124, uLocal_127) && !(MISC::IS_POSITION_OCCUPIED(-61.013214f, -1093.393f, 25.752972f, 2f, false, true, false, false, false, 0, false) && MISC::IS_POSITION_OCCUPIED(-38.596832f, -1109.284f, 25.687418f, 2f, false, true, false, false, false, 0, false)))
	{
		if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("rm_showroom"))
		{
			if (!func_129())
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.19015f, -1104.1372f, 24.42232f, -33.7943f, -1107.1835f, 28.67232f, 8.5f, false, true, 0))
				{
					bLocal_108 = true;
					func_77(false);
				}
				else
				{
					bLocal_108 = false;
					func_77(true);
				}
			
				func_67(true);
			}
		
			return true;
		}
	}
	else if (PED::IS_COP_PED_IN_AREA_3D(uLocal_124, uLocal_127) || MISC::IS_POSITION_OCCUPIED(-61.013214f, -1093.393f, 25.752972f, 2f, false, true, false, false, false, 0, false) && MISC::IS_POSITION_OCCUPIED(-38.596832f, -1109.284f, 25.687418f, 2f, false, true, false, false, false, 0, false))
	{
		if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("rm_showroom"))
		{
			func_35(&(uLocal_45[0 /*20*/].f_1), true, 0, 1);
			func_35(&(uLocal_45[1 /*20*/].f_1), true, 0, 1);
			func_66(&pedLocal_90);
			func_66(&pedLocal_89);
			func_100();
		}
	}

	return false;
}

void func_66(Ped* ppedParam0) // Position - 0x2BBC
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*ppedParam0, false))
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
	
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*ppedParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*ppedParam0, true, false);
	
		PED::DELETE_PED(ppedParam0);
	}

	return;
}

int func_67(BOOL bParam0) // Position - 0x2BFD
{
	if (func_71())
	{
		Global_114125 = true;
		Global_114122 = MISC::GET_GAME_TIMER();
	
		if (func_17(Global_114124))
			func_68(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_17(Global_114124))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_68(int iParam0) // Position - 0x2C50
{
	switch (iParam0)
	{
		case 0:
			if (Global_114135.f_24999.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_70(iParam0), -1);
					Global_114135.f_24999.f_2 = Global_114135.f_24999.f_2 + 1;
					MISC::SET_BIT(&Global_114131, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_114131, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_70(iParam0), -1);
					Global_114135.f_24999.f_3 = Global_114135.f_24999.f_3 + 1;
					MISC::SET_BIT(&Global_114131, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_114131, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_70(iParam0), -1);
					Global_114135.f_24999.f_4 = Global_114135.f_24999.f_4 + 1;
					MISC::SET_BIT(&Global_114131, 2);
				}
			}
			break;
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x2D2B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

char* func_70(int iParam0) // Position - 0x2D42
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "AM_H_REFS" /*Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby.*/;
			break;
	
		case 1:
			str = "RE_FLASHBLIP" /*Flashing blue and red blips indicate situations around San Andreas that you can choose to help with.*/;
			break;
	
		case 2:
			str = "RE_HANDOVER" /*If you retrieve a stolen item, you can choose to keep it or return it for a reward.*/;
			break;
	}

	return str;
}

BOOL func_71() // Position - 0x2D85
{
	switch (func_72(&Global_33147, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_72(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x2DBB
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99141.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_76(0))
			return 0;
	
		Global_44145 = Global_44145 + 1;
		*uParam0 = Global_44145;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23831.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44181 = iParam2;
		Global_44143 = *uParam0;
		Global_44144 = iParam4;
		Global_44142 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44142 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44142; i = i + 1)
			{
				if (Global_44148[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44143 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44142 == 8)
			return 0;
	
		Global_44145 = Global_44145 + 1;
		*uParam0 = Global_44145;
		Global_44148[Global_44142 /*4*/] = Global_44145;
		Global_44148[Global_44142 /*4*/].f_1 = iParam1;
		Global_44148[Global_44142 /*4*/].f_2 = iParam2;
		Global_44148[Global_44142 /*4*/].f_3 = 0;
		Global_44142 = Global_44142 + 1;
	
		if (iParam4 != 0)
			func_73(uParam0, iParam4);
	}

	return 2;
}

void func_73(var uParam0, int iParam1) // Position - 0x2EF2
{
	int i;

	if (Global_44142 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44142; i = i + 1)
	{
		if (Global_44148[i /*4*/] == *uParam0)
			Global_44148[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2F41
{
	return func_75(iParam0, Global_44181);
}

BOOL func_75(int iParam0, int iParam1) // Position - 0x2F52
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

BOOL func_76(int iParam0) // Position - 0x3133
{
	if (Global_44181 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void func_77(BOOL bParam0) // Position - 0x3155
{
	if (bParam0)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90))
		{
			ENTITY::SET_ENTITY_VISIBLE(pedLocal_90, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(pedLocal_90, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(pedLocal_90, true);
			pedLocal_88 = pedLocal_90;
			obLocal_92 = obLocal_94;
			func_66(&pedLocal_89);
			func_78(&obLocal_93);
		}
	}
	else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89))
	{
		ENTITY::SET_ENTITY_VISIBLE(pedLocal_89, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(pedLocal_89, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(pedLocal_89, true);
		pedLocal_88 = pedLocal_89;
		obLocal_92 = obLocal_93;
		func_66(&pedLocal_90);
		func_78(&obLocal_94);
	}

	return;
}

void func_78(Object* pobParam0) // Position - 0x31CB
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0))
			ENTITY::DETACH_ENTITY(*pobParam0, true, true);
	
		OBJECT::DELETE_OBJECT(pobParam0);
	}

	return;
}

void func_79() // Position - 0x31F6
{
	switch (iLocal_87)
	{
		case 0:
			if (func_96())
				iLocal_87 = 1;
			else if (func_84())
				func_100();
		
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-51.89f, -1097.35f, 23.42f, -45.71f, -1092.1f, 27.42f, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-53.575745f, -1095.3564f, 24.17232f, -46.52551f, -1094.5872f, 27.42232f, 3.75f, false, false, false, false, false, 0, 0);
			break;
	
		case 1:
			if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89) || !_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90))
			{
				func_81(&pedLocal_89, CHAR_SIMEON, uLocal_97, fLocal_100, true);
			
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_89))
				{
					ENTITY::SET_ENTITY_VISIBLE(pedLocal_89, false, false);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(pedLocal_89, false);
					PED::SET_PED_CAN_BE_TARGETTED(pedLocal_89, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_89, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_89, hLocal_148);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(pedLocal_89, true);
					WEAPON::GIVE_WEAPON_TO_PED(pedLocal_89, 453432689, 999, false, false);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(pedLocal_89, false, hLocal_146);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_146, 1862763509);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_89, true, 1);
					PED::SET_PED_CONFIG_FLAG(pedLocal_89, 104, true);
					obLocal_93 = OBJECT::CREATE_OBJECT(hLocal_120, ENTITY::GET_ENTITY_COORDS(pedLocal_89, true), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_93, pedLocal_89, PED::GET_PED_BONE_INDEX(pedLocal_89, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_145);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_b", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_f", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_no_a", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_d", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_145, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_145);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_89, iLocal_145);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_145);
					ENTITY::FREEZE_ENTITY_POSITION(pedLocal_89, true);
				}
			
				func_81(&pedLocal_90, CHAR_SIMEON, uLocal_101, fLocal_104, true);
			
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_90))
				{
					ENTITY::SET_ENTITY_VISIBLE(pedLocal_90, false, false);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(pedLocal_90, false);
					PED::SET_PED_CAN_BE_TARGETTED(pedLocal_90, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_90, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_90, hLocal_148);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(pedLocal_90, true);
					WEAPON::GIVE_WEAPON_TO_PED(pedLocal_90, 453432689, 999, false, false);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(pedLocal_90, false, hLocal_146);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_146, 1862763509);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_90, true, 1);
					PED::SET_PED_CONFIG_FLAG(pedLocal_90, 104, true);
					obLocal_94 = OBJECT::CREATE_OBJECT(hLocal_120, ENTITY::GET_ENTITY_COORDS(pedLocal_90, true), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_94, pedLocal_90, PED::GET_PED_BONE_INDEX(pedLocal_90, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_145);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_b", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_f", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_no_a", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "cellphone@str", "cellphone_call_listen_d", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_145, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_145);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_90, iLocal_145);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_145);
					ENTITY::FREEZE_ENTITY_POSITION(pedLocal_89, true);
				}
			}
			else
			{
				func_80();
				veLocal_121 = VEHICLE::CREATE_VEHICLE(142944341, -46.2722f, -1097.4662f, 25.42f, 112.53633f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(veLocal_121, 7);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(veLocal_121, 3);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_121, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_121, false);
				veLocal_122 = VEHICLE::CREATE_VEHICLE(-1008861746, -41.07354f, -1099.5669f, 25.42f, 138.42923f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(veLocal_122, 12);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_122, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_122, false);
				veLocal_123 = VEHICLE::CREATE_VEHICLE(850565707, -36.744564f, -1101.5826f, 25.42f, 155.15735f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(veLocal_123, 4);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(veLocal_123, 3);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_123, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_123, false);
				iLocal_87 = 2;
			}
			break;
	
		case 2:
			iLocal_86 = 1;
			iLocal_87 = 0;
			break;
	}

	return;
}

void func_80() // Position - 0x35F3
{
	int i;

	i = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		uLocal_45[i /*20*/].f_18 = 1;
	}

	return;
}

int func_81(Ped* ppedParam0, eCharacter echParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6) // Position - 0x3619
{
	Hash model;

	if (!func_25(echParam1))
	{
		model = func_83(echParam1);
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
				PED::DELETE_PED(ppedParam0);
		
			*ppedParam0 = PED::CREATE_PED(PED_TYPE_MISSION, model, vParam2, fParam5, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*ppedParam0);
		
			if (model == 1706635382)
				if (PED::GET_PED_DRAWABLE_VARIATION(*ppedParam0, PV_COMP_UPPR) == 0)
					PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_HAND, 2, 0, 0);
		
			func_82(*ppedParam0, echParam1);
		
			if (bParam6)
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
		
			return 1;
		}
	}

	return 0;
}

int func_82(var uParam0, eCharacter echParam1) // Position - 0x36A7
{
	int num;

	num = 7;

	if (echParam1 == CHAR_LAMAR)
	{
		num = 3;
	}
	else if (echParam1 == CHAR_JIMMY)
	{
		num = 4;
	}
	else if (echParam1 == CHAR_AMANDA)
	{
		num = 5;
	}
	else
	{
		num = 7;
		return 0;
	}

	Global_97497[num - 3] = uParam0;
	return 1;
}

Hash func_83(eCharacter echParam0) // Position - 0x36ED
{
	if (!func_25(echParam0))
		return func_28(echParam0);
	else
		echParam0 != _CHAR_NULL;

	return 0;
}

BOOL func_84() // Position - 0x3713
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_41) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_95())
			return false;
	}

	if (func_91())
		return true;

	if (func_85(100f, true) != -1)
		return true;

	return false;
}

int func_85(float fParam0, BOOL bParam1) // Position - 0x3799
{
	var unk;
	int num;
	int num2;
	float num3;
	float distanceBetweenCoords;
	int num4;
	int i;
	BOOL flag;

	num2 = -1;
	num3 = fParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_25(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_22();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_114135.f_18578[num /*6*/], 2) && !IS_BIT_SET(Global_114135.f_18578[num /*6*/], 3))
				{
					func_86(num, &unk);
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

void func_86(int iParam0, var uParam1) // Position - 0x384A
{
	switch (iParam0)
	{
		case 0:
			func_87(uParam1, "Abigail1", func_89(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
	
		case 1:
			func_87(uParam1, "Abigail2", func_89(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
	
		case 2:
			func_87(uParam1, "Barry1", func_89(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
	
		case 3:
			func_87(uParam1, "Barry2", func_89(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
	
		case 4:
			func_87(uParam1, "Barry3", func_89(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 5:
			func_87(uParam1, "Barry3A", func_89(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 6:
			func_87(uParam1, "Barry3C", func_89(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 7:
			func_87(uParam1, "Barry4", func_89(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_88(iParam0), 0, 0);
			break;
	
		case 8:
			func_87(uParam1, "Dreyfuss1", func_89(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 9:
			func_87(uParam1, "Epsilon1", func_89(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 10:
			func_87(uParam1, "Epsilon2", func_89(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
	
		case 11:
			func_87(uParam1, "Epsilon3", func_89(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 12:
			func_87(uParam1, "Epsilon4", func_89(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 13:
			func_87(uParam1, "Epsilon5", func_89(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
	
		case 14:
			func_87(uParam1, "Epsilon6", func_89(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 15:
			func_87(uParam1, "Epsilon7", func_89(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 16:
			func_87(uParam1, "Epsilon8", func_89(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
	
		case 17:
			func_87(uParam1, "Extreme1", func_89(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 18:
			func_87(uParam1, "Extreme2", func_89(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 19:
			func_87(uParam1, "Extreme3", func_89(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 20:
			func_87(uParam1, "Extreme4", func_89(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 21:
			func_87(uParam1, "Fanatic1", func_89(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_88(iParam0), 1, 0);
			break;
	
		case 22:
			func_87(uParam1, "Fanatic2", func_89(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_88(iParam0), 1, 0);
			break;
	
		case 23:
			func_87(uParam1, "Fanatic3", func_89(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_88(iParam0), 0, 1);
			break;
	
		case 24:
			func_87(uParam1, "Hao1", func_89(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_88(iParam0), 0, 1);
			break;
	
		case 25:
			func_87(uParam1, "Hunting1", func_89(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 26:
			func_87(uParam1, "Hunting2", func_89(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 27:
			func_87(uParam1, "Josh1", func_89(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
	
		case 28:
			func_87(uParam1, "Josh2", func_89(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
	
		case 29:
			func_87(uParam1, "Josh3", func_89(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
	
		case 30:
			func_87(uParam1, "Josh4", func_89(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
	
		case 31:
			func_87(uParam1, "Maude1", func_89(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 32:
			func_87(uParam1, "Minute1", func_89(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 33:
			func_87(uParam1, "Minute2", func_89(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 34:
			func_87(uParam1, "Minute3", func_89(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 35:
			func_87(uParam1, "MrsPhilips1", func_89(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 36:
			func_87(uParam1, "MrsPhilips2", func_89(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 37:
			func_87(uParam1, "Nigel1", func_89(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
	
		case 38:
			func_87(uParam1, "Nigel1A", func_89(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
	
		case 39:
			func_87(uParam1, "Nigel1B", func_89(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_88(iParam0), 1, 1);
			break;
	
		case 40:
			func_87(uParam1, "Nigel1C", func_89(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_88(iParam0), 1, 1);
			break;
	
		case 41:
			func_87(uParam1, "Nigel1D", func_89(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_88(iParam0), 1, 1);
			break;
	
		case 42:
			func_87(uParam1, "Nigel2", func_89(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
	
		case 43:
			func_87(uParam1, "Nigel3", func_89(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
	
		case 44:
			func_87(uParam1, "Omega1", func_89(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 45:
			func_87(uParam1, "Omega2", func_89(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 46:
			func_87(uParam1, "Paparazzo1", func_89(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 47:
			func_87(uParam1, "Paparazzo2", func_89(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 48:
			func_87(uParam1, "Paparazzo3", func_89(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 49:
			func_87(uParam1, "Paparazzo3A", func_89(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 50:
			func_87(uParam1, "Paparazzo3B", func_89(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 51:
			func_87(uParam1, "Paparazzo4", func_89(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 52:
			func_87(uParam1, "Rampage1", func_89(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 54:
			func_87(uParam1, "Rampage3", func_89(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
	
		case 55:
			func_87(uParam1, "Rampage4", func_89(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
	
		case 56:
			func_87(uParam1, "Rampage5", func_89(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
	
		case 53:
			func_87(uParam1, "Rampage2", func_89(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
	
		case 57:
			func_87(uParam1, "TheLastOne", func_89(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 58:
			func_87(uParam1, "Tonya1", func_89(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 59:
			func_87(uParam1, "Tonya2", func_89(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 60:
			func_87(uParam1, "Tonya3", func_89(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 61:
			func_87(uParam1, "Tonya4", func_89(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		case 62:
			func_87(uParam1, "Tonya5", func_89(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_87(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x49FF
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

int func_88(int iParam0) // Position - 0x4A90
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

struct<2> func_89(int iParam0) // Position - 0x4DD6
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_90(iParam0) };

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

struct<2> func_90(int iParam0) // Position - 0x4E0D
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

BOOL func_91() // Position - 0x5259
{
	if (func_94() && !func_95())
		return true;

	if (func_93() && func_92())
		return true;

	return false;
}

BOOL func_92() // Position - 0x528B
{
	return Global_113853 > 0;
}

BOOL func_93() // Position - 0x5299
{
	if (Global_98585 != -1)
		return true;

	return false;
}

BOOL func_94() // Position - 0x52AE
{
	if (Global_98585 != -1)
		return IS_BIT_SET(Global_92451[Global_98585 /*34*/].f_15, 20);

	return false;
}

BOOL func_95() // Position - 0x52D1
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_96() // Position - 0x52EE
{
	if (STREAMING::HAS_MODEL_LOADED(uLocal_45[0 /*20*/]) && STREAMING::HAS_MODEL_LOADED(uLocal_45[1 /*20*/]) && WEAPON::HAS_WEAPON_ASSET_LOADED(uLocal_45[0 /*20*/].f_17) && WEAPON::HAS_WEAPON_ASSET_LOADED(uLocal_45[1 /*20*/].f_17) && func_60() && STREAMING::HAS_ANIM_DICT_LOADED("cellphone@") && STREAMING::HAS_ANIM_DICT_LOADED("cellphone@str") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("reyetarian_simeonoffice") && STREAMING::HAS_MODEL_LOADED(hLocal_120) && STREAMING::HAS_MODEL_LOADED(850565707) && STREAMING::HAS_MODEL_LOADED(-1008861746) && STREAMING::HAS_MODEL_LOADED(142944341))
		return true;

	return false;
}

void func_97(int iParam0) // Position - 0x539A
{
	switch (uLocal_45[iParam0 /*20*/].f_18)
	{
		case 0:
			break;
	
		case 1:
			if (!uLocal_45[iParam0 /*20*/].f_19)
			{
				if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_45[iParam0 /*20*/].f_1))
				{
					uLocal_45[iParam0 /*20*/].f_1 = PED::CREATE_PED(PED_TYPE_CRIMINAL, uLocal_45[iParam0 /*20*/], uLocal_45[iParam0 /*20*/].f_10, uLocal_45[iParam0 /*20*/].f_13, true, true);
				
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_45[iParam0 /*20*/].f_1))
					{
						if (iParam0 == 0)
						{
							TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_45[iParam0 /*20*/].f_1, "PROP_HUMAN_SEAT_CHAIR", uLocal_130[iParam0 /*3*/], uLocal_137[iParam0], 0, false, true);
							PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(uLocal_45[iParam0 /*20*/].f_1);
							PED::SET_PED_SHOULD_IGNORE_SCENARIO_EXIT_COLLISION_CHECKS(uLocal_45[iParam0 /*20*/].f_1, true);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_45[iParam0 /*20*/].f_1, -37.347847f, -1102.0222f, 25.42232f, 3f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_45[iParam0 /*20*/].f_1, BF_0x2B84C2BF, true);
						}
					
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_45[iParam0 /*20*/].f_1, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_45[iParam0 /*20*/].f_1, hLocal_146);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(uLocal_45[iParam0 /*20*/].f_1, false, hLocal_146);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_45[iParam0 /*20*/].f_1, BF_0xCD7168B8, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_45[iParam0 /*20*/].f_1, BF_CanUseVehicles, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_45[iParam0 /*20*/].f_1, BF_CanUseFrustratedAdvance, true);
						WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(uLocal_45[iParam0 /*20*/].f_1, 0.7f, 0.3f);
						uLocal_114[iParam0] = 0;
					
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
							WEAPON::GIVE_WEAPON_TO_PED(uLocal_45[iParam0 /*20*/].f_1, uLocal_45[iParam0 /*20*/].f_17, -1, true, true);
					
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uLocal_45[iParam0 /*20*/]);
						uLocal_45[iParam0 /*20*/].f_19 = 1;
						uLocal_45[iParam0 /*20*/].f_18 = 2;
					}
				}
			}
			break;
	
		case 2:
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_45[iParam0 /*20*/].f_1))
			{
				if (bLocal_111)
				{
					func_99(uLocal_45[iParam0 /*20*/].f_1, &(uLocal_45[iParam0 /*20*/].f_2), -1, 0, false, false, -1082130432, 0, -1, -1, true, false, false);
					TASK::CLEAR_PED_TASKS(uLocal_45[iParam0 /*20*/].f_1);
					PED::SET_PED_USING_ACTION_MODE(uLocal_45[iParam0 /*20*/].f_1, true, -1, "DEFAULT_ACTION");
					TASK::OPEN_SEQUENCE_TASK(&iLocal_145);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8, 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_45[iParam0 /*20*/].f_14, 1f, -1, 3f, 0, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_145);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_45[iParam0 /*20*/].f_1, iLocal_145);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_145);
					uLocal_45[iParam0 /*20*/].f_18 = 3;
				}
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(uLocal_45[iParam0 /*20*/].f_1, false), true) >= 250f)
					uLocal_45[iParam0 /*20*/].f_18 = 5;
			}
			else
			{
				uLocal_45[iParam0 /*20*/].f_18 = 5;
			}
			break;
	
		case 3:
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_45[iParam0 /*20*/].f_1))
			{
				func_99(uLocal_45[iParam0 /*20*/].f_1, &(uLocal_45[iParam0 /*20*/].f_2), -1, 0, false, false, -1082130432, 0, -1, -1, true, false, false);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_45[iParam0 /*20*/].f_1, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(uLocal_45[iParam0 /*20*/].f_1, false), true) <= 5f)
				{
					TASK::TASK_LOOK_AT_ENTITY(uLocal_45[iParam0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_COMBAT_PED(uLocal_45[iParam0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_ALERTNESS(uLocal_45[iParam0 /*20*/].f_1, 3);
					PED::SET_PED_KEEP_TASK(uLocal_45[iParam0 /*20*/].f_1, true);
					uLocal_45[iParam0 /*20*/].f_18 = 4;
				}
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(uLocal_45[iParam0 /*20*/].f_1, false), true) >= 250f)
					uLocal_45[iParam0 /*20*/].f_18 = 5;
			}
			else
			{
				uLocal_45[iParam0 /*20*/].f_18 = 5;
			}
			break;
	
		case 4:
			func_99(uLocal_45[iParam0 /*20*/].f_1, &(uLocal_45[iParam0 /*20*/].f_2), -1, 0, false, false, -1082130432, 0, -1, -1, true, false, false);
		
			if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_45[iParam0 /*20*/].f_1))
			{
				uLocal_45[iParam0 /*20*/].f_18 = 5;
			}
			else
			{
				if (uLocal_114[iParam0] == 0)
				{
					if (!func_63() || _GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
					{
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_45[iParam0 /*20*/].f_1, uLocal_45[iParam0 /*20*/].f_17, -1, false, true);
						uLocal_114[iParam0] = 1;
					}
				}
			
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_45[iParam0 /*20*/].f_1, SCRIPT_TASK_COMBAT) == 7)
					TASK::TASK_COMBAT_PED(uLocal_45[iParam0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(uLocal_45[iParam0 /*20*/].f_1, false), true) >= 75f)
					uLocal_45[iParam0 /*20*/].f_18 = 5;
			}
			break;
	
		case 5:
			func_98(&(uLocal_45[iParam0 /*20*/].f_2), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_45[iParam0 /*20*/].f_1))
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_45[iParam0 /*20*/].f_1));
		
			uLocal_45[iParam0 /*20*/].f_18 = 6;
			break;
	
		case 6:
			break;
	}

	return;
}

void func_98(Blip* pblParam0, BOOL bParam1) // Position - 0x5833
{
	BOOL flag;
	var unk;

	if (HUD::DOES_BLIP_EXIST(*pblParam0))
	{
		HUD::REMOVE_BLIP(pblParam0);
		flag = true;
	}

	if (HUD::DOES_BLIP_EXIST(pblParam0->f_1) && !bParam1)
	{
		HUD::REMOVE_BLIP(&(pblParam0->f_1));
		flag = true;
	}

	if (ENTITY::DOES_ENTITY_EXIST(pblParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pblParam0->f_7, false))
			if (HUD::DOES_PED_HAVE_AI_BLIP(pblParam0->f_7))
				HUD::SET_PED_HAS_AI_BLIP(pblParam0->f_7, false);
	
		flag = true;
	}

	if (flag)
		*pblParam0 = { unk };

	return;
}

int func_99(Ped pedParam0, var uParam1, int iParam2, Player plParam3, BOOL bParam4, BOOL bParam5, int iParam6, const char* sParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0x58AD
{
	BOOL flag;

	if (plParam3 == 0)
		plParam3 = PLAYER::GET_PLAYER_INDEX();

	if (iParam6 < 0f)
		iParam6 = 100f;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(pedParam0))
		{
			flag = true;
		
			if (PED::IS_PED_IN_FLYING_VEHICLE(pedParam0) && bParam11)
				flag = false;
		
			if (flag)
			{
				if (iParam8 == -1)
					HUD::SET_PED_HAS_AI_BLIP(pedParam0, true);
				else
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(pedParam0, true, iParam8);
			
				uParam1->f_7 = pedParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(pedParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(pedParam0, iParam6);
			
				if (HUD::DOES_BLIP_EXIST(*uParam1))
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
	
		if (!(iParam9 == -1))
			HUD::SET_PED_AI_BLIP_SPRITE(pedParam0, iParam9);
	
		HUD::SET_PED_AI_BLIP_FORCED_ON(pedParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(pedParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(pedParam0);
	
		if (!(iParam9 == -1) || bParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!(iParam8 == -1))
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
				
					if (bParam10)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
			
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
	
		if (!IS_BIT_SET(uParam1->f_6, 2))
			if (HUD::DOES_BLIP_EXIST(*uParam1))
				MISC::SET_BIT(&(uParam1->f_6), 2);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(pedParam0);
		
			if (!IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!(iParam8 == -1))
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					
						if (bParam10)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						else
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
				
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}

	return 0;
}

void func_100() // Position - 0x5AA1
{
	int i;

	if (func_129())
		func_127(&Global_33147);
	else
		func_127(&Global_33147);

	func_101(-1);
	PED::REMOVE_RELATIONSHIP_GROUP(hLocal_146);
	PED::REMOVE_RELATIONSHIP_GROUP(hLocal_147);
	PED::REMOVE_RELATIONSHIP_GROUP(hLocal_148);

	if (iLocal_105 == 0)
		AUDIO::CANCEL_MUSIC_EVENT("RE9_SPOTTED");

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_88))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_88);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_91))
			HUD::REMOVE_BLIP(&blLocal_91);
	}

	i = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		uLocal_45[i /*20*/].f_18 = 5;
	}

	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_140, false);
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();

	if (iLocal_141 != -1)
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_141);

	if (iLocal_142 != -1)
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_142);

	if (iLocal_143 != -1)
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_143);

	if (iLocal_144 != -1)
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_144);

	if (TASK::DOES_SCENARIO_GROUP_EXIST("DEALERSHIP"))
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("DEALERSHIP"))
			TASK::SET_SCENARIO_GROUP_ENABLED("DEALERSHIP", true);

	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-51.0518f, -1104.6848f, 25.2975f, -29.9812f, -1094.0787f, 27.5686f, true, true);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_101(int iParam0) // Position - 0x5BA3
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_32();

	if (iParam0 == -1)
		return;

	if (func_129())
	{
		func_105(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114126 = MISC::GET_GAME_TIMER();
		func_104(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_103(Global_114124, true), 64);
	
		if (func_31(Global_114124) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_114123, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_114121, MISC::GET_GAME_TIMER() - Global_114122, 0);
	}
	else if (IS_BIT_SET(Global_114131, 0) && Global_114135.f_24999.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114131, 0);
	}

	func_127(&Global_33147);
	Global_114125 = false;
	func_102(-1);
	return;
}

void func_102(int iParam0) // Position - 0x5C55
{
	Global_114124 = iParam0;
	return;
}

char* func_103(int iParam0, BOOL bParam1) // Position - 0x5C63
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
	
		case 1:
			return "RE_ATMROBBERY";
	
		case 2:
			return "RE_BUSTOUR";
	
		case 3:
			return "RE_DOMESTIC";
	
		case 4:
			return "RE_GETAWAYDRIVER";
	
		case 5:
			return "RE_SHOPROBBERY";
	
		case 6:
			return "RE_SNATCHED";
	
		case 7:
			return "RE_LURED";
	
		case 8:
			return "RE_BIKETHIEFSTAMP";
	
		case 9:
			return "RE_SECURITYVAN";
	
		case 10:
			return "RE_PAPARAZZI";
	
		case 11:
			return "RE_CHASETHIEVES";
	
		case 12:
			return "RE_DEALGONEWRONG";
	
		case 13:
			return "RE_HITCHLIFT";
	
		case 14:
			return "RE_STAG";
	
		case 15:
			return "RE_ARREST";
	
		case 16:
			return "RE_CRASHRESCUE";
	
		case 17:
			return "RE_CARTHEFT";
	
		case 18:
			return "RE_CULTSHOOTOUT";
	
		case 19:
			return "RE_GANGFIGHT";
	
		case 20:
			return "RE_GANGINTIMIDATION";
	
		case 21:
			return "RE_PRISONVANBREAK";
	
		case 22:
			return "RE_PRISONERLIFT";
	
		case 23:
			return "RE_ABANDONEDCAR";
	
		case 24:
			return "RE_BURIAL";
	
		case 25:
			return "RE_MUGGING";
	
		case 26:
			return "RE_BIKETHIEF";
	
		case 27:
			return "RE_DRUNKDRIVER";
	
		case 28:
			return "RE_HOMELANDSECURITY";
	
		case 29:
			return "RE_BORDERPATROL";
	
		case 30:
			return "RE_SIMEONYETARIAN";
	
		case 31:
			return "RE_DUEL";
	
		case 32:
			return "RE_SEAPLANE";
	
		case 33:
			return "RE_MONKEYPHOTO";
	
		case -1:
			return "RE_NONE";
	}

	!bParam1;
	return "UNKNOWN";
}

void func_104(int iParam0) // Position - 0x5EAC
{
	Global_44732 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_105(int iParam0) // Position - 0x5EBE
{
	func_106(iParam0, 0, func_126(iParam0));
	return;
}

void func_106(int iParam0, int iParam1, int iParam2) // Position - 0x5ED3
{
	int unk;
	var unk2;

	unk = func_125();
	func_116(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_115(iParam0, &unk);
	unk2 = { func_107(&unk) };
	return;
}

struct<16> func_107(var uParam0) // Position - 0x5F02
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_114(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_113(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_112(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_111(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_110(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_108(*uParam0), 64);
	return unk;
}

int func_108(int iParam0) // Position - 0x5FD2
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_109(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5FF4
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_110(int iParam0) // Position - 0x600B
{
	return iParam0 & 15;
}

int func_111(int iParam0) // Position - 0x6018
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_112(int iParam0) // Position - 0x602A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_113(int iParam0) // Position - 0x603D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_114(int iParam0) // Position - 0x6050
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_115(int iParam0, var uParam1) // Position - 0x6063
{
	Global_114135.f_24999.f_43[iParam0] = *uParam1;
	return;
}

void func_116(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x607B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_108(*uParam0);
	i = func_110(*uParam0);
	num2 = func_111(*uParam0);
	j = func_114(*uParam0);
	k = func_113(*uParam0);
	l = func_112(*uParam0);

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

	for (m = func_124(i, num); num2 > m; m = func_124(i, num))
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
	func_117(uParam0, l, k, j, num2, i, num);
	return;
}

void func_117(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x61FD
{
	func_123(uParam0, iParam1);
	func_122(uParam0, iParam2);
	func_121(uParam0, iParam3);
	func_120(uParam0, iParam5);
	func_119(uParam0, iParam4);
	func_118(uParam0, iParam6);
	return;
}

void func_118(var uParam0, int iParam1) // Position - 0x6235
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

void func_119(var uParam0, int iParam1) // Position - 0x62BB
{
	int num;
	int num2;

	num = func_110(*uParam0);
	num2 = func_108(*uParam0);

	if (iParam1 < 1 || iParam1 > func_124(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_120(var uParam0, int iParam1) // Position - 0x630C
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_121(var uParam0, int iParam1) // Position - 0x633F
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_122(var uParam0, int iParam1) // Position - 0x6379
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_123(var uParam0, int iParam1) // Position - 0x63B4
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_124(int iParam0, int iParam1) // Position - 0x63F0
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

int func_125() // Position - 0x6492
{
	var unk;

	func_123(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_122(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_121(&unk, CLOCK::GET_CLOCK_HOURS());
	func_119(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_120(&unk, CLOCK::GET_CLOCK_MONTH());
	func_118(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

int func_126(int iParam0) // Position - 0x64D8
{
	int num;

	switch (iParam0)
	{
		case 23:
			num = 30;
			break;
	
		case 0:
			num = 30;
			break;
	
		case 15:
			num = 30;
			break;
	
		case 1:
			num = 200;
			break;
	
		case 26:
			num = 30;
			break;
	
		case 8:
			num = 30;
			break;
	
		case 29:
			num = 30;
			break;
	
		case 24:
			num = 30;
			break;
	
		case 2:
			num = 0;
			break;
	
		case 17:
			num = 30;
			break;
	
		case 11:
			num = 30;
			break;
	
		case 16:
			num = 30;
			break;
	
		case 18:
			num = 30;
			break;
	
		case 12:
			num = 120;
			break;
	
		case 3:
			num = 60;
			break;
	
		case 27:
			num = 60;
			break;
	
		case 19:
			num = 30;
			break;
	
		case 20:
			num = 30;
			break;
	
		case 4:
			num = 60;
			break;
	
		case 28:
			num = 30;
			break;
	
		case 13:
			num = 35;
			break;
	
		case 7:
			num = 30;
			break;
	
		case 25:
			num = 40;
			break;
	
		case 10:
			num = 30;
			break;
	
		case 22:
			num = 30;
			break;
	
		case 21:
			num = 30;
			break;
	
		case 5:
			num = 30;
			break;
	
		case 30:
			num = 60;
			break;
	
		case 9:
			num = 60;
			break;
	
		case 6:
			num = 40;
			break;
	
		case 14:
			num = 40;
			break;
	}

	return num;
}

void func_127(var uParam0) // Position - 0x667B
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44143))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44142 = 0;
	Global_44144 = 0;
	Global_44181 = 15;
	Global_64305 = 0;
	Global_64306 = 0;
	return;
}

BOOL func_128() // Position - 0x66B8
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_91())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_95())
			return false;

	if (func_85(100f, true) != -1)
		return true;

	return false;
}

BOOL func_129() // Position - 0x671A
{
	if (Global_114124 == func_32() && MISC::GET_RANDOM_EVENT_FLAG() && Global_114125)
		return true;

	return false;
}

void func_130() // Position - 0x6745
{
	uLocal_97 = { -45.97f, -1095.58f, 25.42f };
	fLocal_100 = 105.42f;
	uLocal_101 = { -33.39f, -1101.79f, 25.42f };
	fLocal_104 = 184.5161f;
	uLocal_45[0 /*20*/].f_10 = { -29.66f, -1103.44f, 26.42f };
	uLocal_45[0 /*20*/].f_13 = 58.7988f;
	uLocal_45[0 /*20*/].f_14 = { -35.19f, -1101.72f, 25.42f };
	uLocal_45[0 /*20*/] = -39239064;
	uLocal_45[0 /*20*/].f_17 = 453432689;
	uLocal_130[0 /*3*/] = { -30.35f, -1104.29f, 25.89f };
	uLocal_137[0] = 177.22f;
	uLocal_45[1 /*20*/].f_10 = { -36.8032f, -1090.6185f, 25.4223f };
	uLocal_45[1 /*20*/].f_13 = 257.6675f;
	uLocal_45[1 /*20*/].f_14 = { -34.66f, -1097.23f, 25.42f };
	uLocal_45[1 /*20*/] = -984709238;
	uLocal_45[1 /*20*/].f_17 = 453432689;
	uLocal_130[1 /*3*/] = { -29.11f, -1104.99f, 25.89f };
	uLocal_137[1] = 136.57f;
	PED::ADD_RELATIONSHIP_GROUP("GoonGroup", &hLocal_146);
	PED::ADD_RELATIONSHIP_GROUP("PlayerGroup", &hLocal_147);
	PED::ADD_RELATIONSHIP_GROUP("YetarianGroup", &hLocal_148);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_148, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, hLocal_148);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_146, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, hLocal_146);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-51.0518f, -1104.6848f, 25.2975f, -29.9812f, -1094.0787f, 27.5686f, false, true);
	iLocal_140 = PED::ADD_SCENARIO_BLOCKING_AREA(-79.95f, -1126.33f, 20.65f, -3.5f, -1081.6f, 30.67f, false, true, true, true, 1);
	TASK::ADD_COVER_BLOCKING_AREA(-34.2476f, -1107.2834f, 24.9621f, -24.7924f, -1102.5566f, 29.8287f, true, true, true, false);

	if (iLocal_144 == -1)
		iLocal_144 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-29.3f, -1086.35f, 25.57f, 5.5f, 3f, 2f, -10f, false, 7);

	func_131(196, 0);
	func_131(197, 0);
	func_131(194, 0);
	func_131(195, 0);
	STREAMING::REQUEST_MODEL(uLocal_45[0 /*20*/]);
	STREAMING::REQUEST_MODEL(uLocal_45[1 /*20*/]);
	STREAMING::REQUEST_MODEL(hLocal_120);
	STREAMING::REQUEST_MODEL(850565707);
	STREAMING::REQUEST_MODEL(-1008861746);
	STREAMING::REQUEST_MODEL(142944341);
	WEAPON::REQUEST_WEAPON_ASSET(uLocal_45[0 /*20*/].f_17, 31, 0);
	WEAPON::REQUEST_WEAPON_ASSET(uLocal_45[1 /*20*/].f_17, 31, 0);
	STREAMING::REQUEST_ANIM_DICT("cellphone@");
	STREAMING::REQUEST_ANIM_DICT("cellphone@str");
	TASK::REQUEST_WAYPOINT_RECORDING("reyetarian_simeonoffice");
	AUDIO::PREPARE_MUSIC_EVENT("RE9_SPOTTED");
	return;
}

void func_131(int iParam0, int iParam1) // Position - 0x69DE
{
	int num;

	if (iParam0 != 226)
	{
		if (Global_79539)
			num = Global_43715[iParam0];
		else
			num = Global_114135.f_7265[iParam0];
	
		if (num != iParam1 || IS_BIT_SET(Global_39541[iParam0 / 32], iParam0 % 32))
		{
			if (iParam1 == 4 || iParam1 == 3 || iParam1 == 5 || iParam1 == 6 || iParam1 == 2)
			{
				MISC::SET_BIT(&Global_39550[iParam0 / 32], iParam0 % 32);
				Global_40013[iParam0] = iParam1;
			}
			else if (Global_79539)
			{
				Global_43715[iParam0] = iParam1;
			}
			else
			{
				Global_114135.f_7265[iParam0] = iParam1;
			}
		
			MISC::SET_BIT(&Global_39541[iParam0 / 32], iParam0 % 32);
			func_133(iParam0);
		
			if (IS_BIT_SET(Global_39541[iParam0 / 32], iParam0 % 32))
				func_132(iParam0);
		}
	}

	return;
}

void func_132(int iParam0) // Position - 0x6ACB
{
	if (!IS_BIT_SET(Global_40484.f_228[iParam0 / 32], iParam0 % 23))
	{
		MISC::SET_BIT(&Global_40484.f_228[iParam0 / 32], iParam0 % 23);
		Global_40484[Global_40484.f_227] = iParam0;
		Global_40484.f_227 = Global_40484.f_227 + 1;
	}

	return;
}

void func_133(int iParam0) // Position - 0x6B16
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

	if (!func_141())
		return;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	vector = { func_140(iParam0) };

	if (IS_BIT_SET(vector.f_4, 2))
		func_138(iParam0, &vector);

	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(vector.f_5))
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
			return;

	flag = false;
	flag2 = false;
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vector, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);

	if (IS_BIT_SET(Global_39550[iParam0 / 32], iParam0 % 32) && Global_40013[iParam0] == 2 && distanceBetweenCoords > 210f)
	{
		MISC::CLEAR_BIT(&Global_39550[iParam0 / 32], iParam0 % 32);
		Global_39559[iParam0] = 0;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1832807115) == 0)
	{
		if (IS_BIT_SET(Global_39786[iParam0 / 32], iParam0 % 32))
		{
			if (distanceBetweenCoords < 25f)
			{
				if (Global_101740.f_397 == 0)
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						Global_101740.f_397 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
			
				interior = Global_101740.f_397;
				interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(vector);
			
				if (interior == interiorAtCoords && interior != 0)
				{
					MISC::SET_BIT(&Global_39550[iParam0 / 32], iParam0 % 32);
					Global_40013[iParam0] = 3;
					MISC::SET_BIT(&Global_39541[iParam0 / 32], iParam0 % 32);
				}
			}
		
			MISC::CLEAR_BIT(&Global_39786[iParam0 / 32], iParam0 % 32);
		}
	}

	if (IS_BIT_SET(Global_39550[iParam0 / 32], iParam0 % 32))
	{
		num = Global_40013[iParam0];
	}
	else if (IS_BIT_SET(vector.f_4, 0))
	{
		if (Global_114135.f_9089)
			num = func_135(iParam0);
		else
			num = 0;
	
		if (func_24(14))
			num = 0;
	}
	else if (IS_BIT_SET(vector.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(92439941) == 0)
	{
		if (func_134())
			num = 0;
		else
			num = 1;
	}
	else
	{
		num = Global_114135.f_7265[iParam0];
	}

	if (Global_40240[iParam0] != num)
		flag = true;

	if (IS_BIT_SET(Global_39541[iParam0 / 32], iParam0 % 32))
		if (!IS_BIT_SET(Global_39550[iParam0 / 32], iParam0 % 32) || Global_39559[iParam0] == 0 && Global_40013[iParam0] != 2)
			flag = true;

	if (flag)
	{
		if (!Global_39540)
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
			MISC::CLEAR_BIT(&Global_39541[iParam0 / 32], iParam0 % 32);
			Global_40240[iParam0] = num;
		}
	}

	if (IS_BIT_SET(Global_39550[iParam0 / 32], iParam0 % 32) && Global_40013[iParam0] != 2)
	{
		MISC::SET_BIT(&Global_39541[iParam0 / 32], iParam0 % 32);
		func_132(iParam0);
	
		if (Global_39559[iParam0] < 2)
			Global_39559[iParam0] = Global_39559[iParam0] + 1;
	}

	return;
}

BOOL func_134() // Position - 0x6FDC
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		return false;

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			if (Global_114135.f_9089.f_99.f_58[65])
				return true;
			break;
	
		case CHAR_FRANKLIN:
			if (Global_114135.f_9089.f_99.f_58[66])
				return true;
			break;
	
		case CHAR_TREVOR:
			if (Global_114135.f_9089.f_99.f_58[65])
				return true;
			break;
	}

	return false;
}

int func_135(int iParam0) // Position - 0x705B
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (func_136(iParam0))
		return 1;

	if (iParam0 == 49)
	{
		if (character == CHAR_FRANKLIN)
			if (IS_BIT_SET(Global_114135.f_7233[5], 0) || IS_BIT_SET(Global_114135.f_7233[6], 0))
				return 0;
	
		if (func_25(character))
			if (IS_BIT_SET(Global_96690[5], character))
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
				if (IS_BIT_SET(Global_114135.f_7233[0], 0))
					return 0;
		
			if (func_25(character))
				if (IS_BIT_SET(Global_96690[0], character))
					if (iParam0 != 40)
						return 0;
					else
						return 1;
			break;
	
		case 47:
		case 48:
		case 49:
			if (character == CHAR_FRANKLIN)
				if (IS_BIT_SET(Global_114135.f_7233[5], 0))
					return 0;
		
			if (func_25(character))
				if (IS_BIT_SET(Global_96690[5], character))
					return 0;
			break;
	
		case 50:
			if (character == CHAR_FRANKLIN)
				if (IS_BIT_SET(Global_114135.f_7233[6], 0))
					return 0;
		
			if (func_25(character))
				if (IS_BIT_SET(Global_96690[6], character))
					return 0;
			break;
	
		case 51:
		case 52:
			if (character == CHAR_TREVOR)
			{
				if (IS_BIT_SET(Global_114135.f_7233[2], 0))
					return 0;
			
				if (func_25(character))
					if (IS_BIT_SET(Global_96690[2], character))
						return 0;
			}
			else if (character == CHAR_MICHAEL)
			{
				if (IS_BIT_SET(Global_114135.f_7233[1], 0))
					return 0;
			
				if (func_25(character))
					if (IS_BIT_SET(Global_96690[1], character))
						return 0;
			}
			break;
	
		case 53:
			if (character == CHAR_TREVOR)
				if (IS_BIT_SET(Global_114135.f_7233[3], 0))
					return 0;
		
			if (func_25(character))
				if (IS_BIT_SET(Global_96690[3], character))
					return 0;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_136(int iParam0) // Position - 0x7283
{
	Hash entityModel;

	if (iParam0 == 40 || iParam0 == 49 || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(func_137(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)));
			
				switch (entityModel)
				{
					case 516990260:
					case -845961253:
						return true;
				}
			}
		}
	}

	return false;
}

Vehicle func_137(Vehicle veParam0) // Position - 0x72EF
{
	return veParam0;
}

void func_138(int iParam0, var uParam1) // Position - 0x72F9
{
	int num;
	int num2;

	if (!IS_BIT_SET(uParam1->f_4, 2))
		return;

	num = func_125();
	num2 = func_114(num);

	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_139(iParam0))
			{
				if (num2 < 19)
				{
					if (num2 >= 7)
					{
						Global_114135.f_7265[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
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
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else if (num2 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_139(iParam0))
			{
				if (num2 < 18)
				{
					if (num2 >= 7)
					{
						Global_114135.f_7265[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
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
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else if (num2 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 141:
		case 142:
			if (func_139(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1139079984) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(478649282) == 0 && !Global_114135.f_9089.f_99.f_58[4])
				{
					if (num2 < 21)
					{
						if (num2 >= 7)
						{
							Global_114135.f_7265[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_114135.f_9089.f_99.f_58[4])
				{
					Global_114135.f_7265[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else if (Global_114135.f_9089.f_99.f_58[4])
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1139079984) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(478649282) == 0)
			{
				if (num2 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_114135.f_7265[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
					}
				}
				else if (num2 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_114135.f_7265[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
					}
				}
			}
			break;
	
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_139(iParam0))
			{
				if (num2 < 20)
				{
					if (num2 >= 9)
					{
						Global_114135.f_7265[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
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
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else if (num2 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 147:
		case 148:
			if (!func_139(iParam0))
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_139(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1802680602) == 0)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1802680602) > 0)
			{
				Global_114135.f_7265[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	
		case 158:
		case 159:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[70 /*34*/].f_6) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 160:
		case 161:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1723330028) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 70:
		case 71:
		case 72:
			if (!func_139(iParam0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[26 /*34*/].f_6) == 0)
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
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
			if (!func_139(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[43 /*34*/].f_6) == 0)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 190:
		case 191:
			if (!func_139(iParam0))
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	
		case 193:
			if (!func_139(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[93 /*34*/].f_6) > 0)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 198:
			if (!func_139(iParam0))
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	
		case 80:
			if (!func_139(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[8 /*34*/].f_6) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[10 /*34*/].f_6) == 0)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 205:
		case 206:
			if (!func_139(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[47 /*34*/].f_6) == 0)
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 207:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[70 /*34*/].f_6) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
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
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[48 /*34*/].f_6) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 99:
		case 100:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_92451[39 /*34*/].f_6) == 0)
			{
				if (!func_139(iParam0))
				{
					Global_114135.f_7265[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
				}
			}
			break;
	
		case 216:
			if (!func_139(iParam0))
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	
		case 217:
		case 218:
			if (!func_139(iParam0))
			{
				Global_114135.f_7265[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_139(iParam0))
			{
				Global_114135.f_7265[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_114135.f_7265[iParam0], true, true);
			}
			break;
	}

	return;
}

BOOL func_139(int iParam0) // Position - 0x7C91
{
	var unk;
	int doorState;

	unk = { func_140(iParam0) };
	doorState = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(unk.f_5);
	return doorState == 1 || doorState == 4 || doorState == 2;
}

struct<7> func_140(int iParam0) // Position - 0x7CC5
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk.f_3 = -1844444717;
			unk = { 133f, -1711f, 29f };
			unk.f_5 = 1804701345;
			break;
	
		case 1:
			unk.f_3 = -1844444717;
			unk = { -1287.8568f, -1115.7416f, 7.1401f };
			unk.f_5 = 1403601067;
			break;
	
		case 2:
			unk.f_3 = -1844444717;
			unk = { 1932.9518f, 3725.1536f, 32.9944f };
			unk.f_5 = -2031139496;
			break;
	
		case 3:
			unk.f_3 = -1844444717;
			unk = { 1207.8732f, -470.063f, 66.358f };
			unk.f_5 = 1796834809;
			break;
	
		case 4:
			unk.f_3 = -1844444717;
			unk = { -29.8692f, -148.1571f, 57.2265f };
			unk.f_5 = 96153298;
			break;
	
		case 5:
			unk.f_3 = -1844444717;
			unk = { -280.7851f, 6232.7817f, 31.8455f };
			unk.f_5 = -281080954;
			break;
	
		case 6:
			unk.f_3 = -1663512092;
			unk = { -824f, -187f, 38f };
			unk = { -823.2001f, -187.0831f, 37.819f };
			unk.f_5 = 183249434;
			break;
	
		case 7:
			unk.f_3 = 145369505;
			unk = { -823f, -188f, 38f };
			unk = { -822.4442f, -188.3924f, 37.819f };
			unk.f_5 = 758345384;
			break;
	
		case 8:
			unk.f_3 = 868499217;
			unk = { 82.3186f, -1392.7518f, 29.5261f };
			unk.f_5 = -1069262641;
			break;
	
		case 9:
			unk.f_3 = -1148826190;
			unk = { 82.3186f, -1390.4758f, 29.5261f };
			unk.f_5 = 1968521986;
			break;
	
		case 10:
			unk.f_3 = 868499217;
			unk = { 1686.9832f, 4821.7407f, 42.2131f };
			unk.f_5 = -2143706301;
			break;
	
		case 11:
			unk.f_3 = -1148826190;
			unk = { 1687.2817f, 4819.4844f, 42.2131f };
			unk.f_5 = -1403421822;
			break;
	
		case 12:
			unk.f_3 = 868499217;
			unk = { 418.637f, -806.457f, 29.6396f };
			unk.f_5 = -1950137670;
			break;
	
		case 13:
			unk.f_3 = -1148826190;
			unk = { 418.637f, -808.733f, 29.6396f };
			unk.f_5 = 1226259807;
			break;
	
		case 14:
			unk.f_3 = 868499217;
			unk = { -1096.6613f, 2705.4458f, 19.2578f };
			unk.f_5 = 1090833557;
			break;
	
		case 15:
			unk.f_3 = -1148826190;
			unk = { -1094.9652f, 2706.9636f, 19.2578f };
			unk.f_5 = 897332612;
			break;
	
		case 16:
			unk.f_3 = 868499217;
			unk = { 1196.825f, 2703.221f, 38.3726f };
			unk.f_5 = 1095946640;
			break;
	
		case 17:
			unk.f_3 = -1148826190;
			unk = { 1199.101f, 2703.221f, 38.3726f };
			unk.f_5 = 801975945;
			break;
	
		case 18:
			unk.f_3 = 868499217;
			unk = { -818.7642f, -1079.5444f, 11.4781f };
			unk.f_5 = -167996547;
			break;
	
		case 19:
			unk.f_3 = -1148826190;
			unk = { -816.7932f, -1078.4065f, 11.4781f };
			unk.f_5 = -1935818563;
			break;
	
		case 20:
			unk.f_3 = 868499217;
			unk = { -0.0564f, 6517.461f, 32.0278f };
			unk.f_5 = 1891185217;
			break;
	
		case 21:
			unk.f_3 = -1148826190;
			unk = { -1.7253f, 6515.9136f, 32.0278f };
			unk.f_5 = 1236591681;
			break;
	
		case 22:
			unk.f_3 = 1780022985;
			unk = { -1201.4349f, -776.8566f, 17.9918f };
			unk.f_5 = 1980808685;
			break;
	
		case 23:
			unk.f_3 = 1780022985;
			unk = { 617.2458f, 2751.0222f, 42.7578f };
			unk.f_5 = 1352749757;
			break;
	
		case 24:
			unk.f_3 = 1780022985;
			unk = { 127.8201f, -211.8274f, 55.2275f };
			unk.f_5 = -566554453;
			break;
	
		case 25:
			unk.f_3 = 1780022985;
			unk = { -3167.75f, 1055.5358f, 21.5329f };
			unk.f_5 = 1284749450;
			break;
	
		case 26:
			unk.f_3 = -1922281023;
			unk = { -716.6754f, -155.42f, 37.6749f };
			unk.f_5 = 261851994;
			break;
	
		case 27:
			unk.f_3 = -1922281023;
			unk = { -715.6154f, -157.2561f, 37.6749f };
			unk.f_5 = 217646625;
			break;
	
		case 28:
			unk.f_3 = -1922281023;
			unk = { -157.0924f, -306.4413f, 39.994f };
			unk.f_5 = 1801139578;
			break;
	
		case 29:
			unk.f_3 = -1922281023;
			unk = { -156.4022f, -304.4366f, 39.994f };
			unk.f_5 = -2123275866;
			break;
	
		case 30:
			unk.f_3 = -1922281023;
			unk = { -1454.7819f, -231.7927f, 50.0565f };
			unk.f_5 = 1312689981;
			break;
	
		case 31:
			unk.f_3 = -1922281023;
			unk = { -1456.2007f, -233.3682f, 50.0565f };
			unk.f_5 = -595055661;
			break;
	
		case 32:
			unk.f_3 = 543652229;
			unk = { 321.81f, 178.36f, 103.68f };
			unk.f_5 = -265260897;
			break;
	
		case 33:
			unk.f_3 = -1212951353;
			unk = { 1859.89f, 3749.79f, 33.18f };
			unk.f_5 = -1284867488;
			break;
	
		case 34:
			unk.f_3 = -1212951353;
			unk = { -289.1752f, 6199.1123f, 31.637f };
			unk.f_5 = 302307081;
			break;
	
		case 35:
			unk.f_3 = 543652229;
			unk = { -1155.4541f, -1424.0079f, 5.0461f };
			unk.f_5 = -681886015;
			break;
	
		case 36:
			unk.f_3 = 543652229;
			unk = { 1321.2856f, -1650.5967f, 52.3663f };
			unk.f_5 = -2086556500;
			break;
	
		case 37:
			unk.f_3 = 543652229;
			unk = { -3167.7888f, 1074.7668f, 20.9209f };
			unk.f_5 = -1496386696;
			break;
	
		case 38:
			unk.f_3 = 159994461;
			unk = { -817f, 179f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -2097039789;
			break;
	
		case 39:
			unk.f_3 = -1686014385;
			unk = { -816f, 178f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -2127416656;
			break;
	
		case 40:
			unk.f_3 = 30769481;
			unk = { -815f, 186f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1986583853;
			unk.f_6 = 6.5f;
			break;
	
		case 41:
			unk.f_3 = -1454760130;
			unk = { -797f, 177f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 776026812;
			break;
	
		case 42:
			unk.f_3 = 1245831483;
			unk = { -795f, 178f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 698422331;
			break;
	
		case 43:
			unk.f_3 = -1454760130;
			unk = { -793f, 181f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 535076355;
			break;
	
		case 44:
			unk.f_3 = 1245831483;
			unk = { -794f, 183f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 474675599;
			break;
	
		case 45:
			unk.f_3 = -1568354151;
			unk = { -849f, 179f, 70f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1978427516;
			break;
	
		case 46:
			unk.f_3 = 1019527301;
			unk = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1700375831;
			break;
	
		case 47:
			unk.f_3 = 520341586;
			unk = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 613961892;
			break;
	
		case 48:
			unk.f_3 = 1413743677;
			unk = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -272570634;
			break;
	
		case 49:
			unk.f_3 = 703855057;
			unk = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1040675994;
			break;
	
		case 50:
			unk.f_3 = 308207762;
			unk = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 1201219326;
			break;
	
		case 51:
			unk.f_3 = 132154435;
			unk = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 1736361794;
			break;
	
		case 52:
			unk.f_3 = 67910261;
			unk = { 1972.7874f, 3824.5537f, 32.5831f };
			unk.f_5 = 1113956670;
			unk.f_6 = 12f;
			break;
	
		case 53:
			unk.f_3 = -607040053;
			unk = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1361617046;
			break;
	}

	switch (iParam0)
	{
		case 54:
			unk.f_3 = -550347177;
			unk = { -1145.9f, -1991.14f, 14.18f };
			unk.f_5 = -1871080926;
			unk.f_6 = 25f;
			break;
	
		case 55:
			unk.f_3 = 270330101;
			unk = { 723.12f, -1088.83f, 23.28f };
			unk.f_5 = 1168079979;
			unk.f_6 = 25f;
			break;
	
		case 56:
			unk.f_3 = -550347177;
			unk = { -356.09f, -134.77f, 40.01f };
			unk.f_5 = 1206354175;
			unk.f_6 = 25f;
			break;
	
		case 57:
			unk.f_3 = -822900180;
			unk = { 108.8502f, 6617.8765f, 32.673f };
			unk.f_5 = -1038180727;
			unk.f_6 = 25f;
			break;
	
		case 58:
			unk.f_3 = -822900180;
			unk = { 114.3206f, 6623.226f, 32.7161f };
			unk.f_5 = 1200466273;
			unk.f_6 = 25f;
			break;
	
		case 59:
			unk.f_3 = -822900180;
			unk = { 1182.3054f, 2645.2422f, 38.807f };
			unk.f_5 = 1391004277;
			unk.f_6 = 25f;
			break;
	
		case 60:
			unk.f_3 = -822900180;
			unk = { 1174.6542f, 2645.2422f, 38.6826f };
			unk.f_5 = -459199009;
			unk.f_6 = 25f;
			break;
	
		case 225:
			unk.f_3 = -427498890;
			unk = { -205.7007f, -1310.6917f, 30.2957f };
			unk.f_5 = -288764223;
			unk.f_6 = 25f;
			break;
	
		case 61:
			unk.f_3 = 486670049;
			unk = { -107.5401f, -9.0258f, 70.6696f };
			unk.f_5 = -252283844;
			break;
	
		case 62:
			unk.f_3 = 245182344;
			unk = { 717f, -975f, 25f };
			unk.f_5 = -826072862;
			break;
	
		case 63:
			unk.f_3 = -681066206;
			unk = { 719f, -975f, 25f };
			unk.f_5 = 763780711;
			break;
	
		case 64:
			unk.f_3 = 551491569;
			unk = { 709.9813f, -963.5311f, 30.5453f };
			unk.f_5 = -874851305;
			break;
	
		case 65:
			unk.f_3 = 933053701;
			unk = { 709.9894f, -960.6675f, 30.5453f };
			unk.f_5 = -1480820165;
			break;
	
		case 66:
			unk.f_3 = 426403179;
			unk = { 707.8046f, -962.4564f, 30.5453f };
			unk.f_5 = 949391213;
			break;
	
		case 67:
			unk.f_3 = -1212951353;
			unk = { 1393f, 3599f, 35f };
			unk.f_5 = 212192855;
			break;
	
		case 68:
			unk.f_3 = -1212951353;
			unk = { 1395f, 3600f, 35f };
			unk.f_5 = -126474752;
			break;
	
		case 69:
			unk.f_3 = 1173348778;
			unk = { 1387f, 3614f, 39f };
			unk.f_5 = 1765671336;
			break;
	
		case 70:
			unk.f_3 = -1428622127;
			unk = { 1083.5471f, -1975.4354f, 31.6222f };
			unk.f_5 = 792295685;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 71:
			unk.f_3 = -1428622127;
			unk = { 1065.237f, -2006.0791f, 32.2329f };
			unk.f_5 = 563273144;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 72:
			unk.f_3 = -1428622127;
			unk = { 1085.3069f, -2018.5613f, 41.6289f };
			unk.f_5 = -726993043;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 73:
			unk.f_3 = -353187150;
			unk = { -111f, 6464f, 32f };
			unk.f_5 = 178228075;
			break;
	
		case 74:
			unk.f_3 = -1666470363;
			unk = { -110f, 6462f, 32f };
			unk.f_5 = 1852297978;
			break;
	
		case 75:
			unk.f_3 = 1145337974;
			unk = { 1274f, -1721f, 55f };
			unk.f_5 = -565026078;
			break;
	
		case 76:
			unk.f_3 = -1647153464;
			unk = { 1271.89f, -1707.57f, 53.79f };
			unk.f_5 = 1646172266;
			break;
	
		case 77:
			unk.f_3 = -1647153464;
			unk = { 1270.77f, -1708.1f, 53.75f };
			unk.f_5 = 204467342;
			break;
	
		case 78:
			unk.f_3 = -2069558801;
			unk = { -127.5f, -1456.18f, 37.94f };
			unk.f_5 = 2047070410;
			break;
	
		case 79:
			unk.f_3 = -190780785;
			unk = { 483.56f, -1316.08f, 32.18f };
			unk.f_5 = 1417775309;
			break;
	
		case 80:
			unk.f_3 = -664582244;
			unk = { 483f, -1312f, 29f };
			unk.f_5 = -106474626;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 81:
			unk.f_3 = -1116041313;
			unk = { 128f, -1299f, 29f };
			unk.f_5 = 1840510598;
			break;
	
		case 82:
			unk.f_3 = 668467214;
			unk = { 96f, -1285f, 29f };
			unk.f_5 = 1382825971;
			break;
	
		case 83:
			unk.f_3 = -1306074314;
			unk = { 549f, -1773f, 34f };
			unk.f_5 = 232536303;
			break;
	
		case 84:
			unk.f_3 = -1375589668;
			unk = { 974f, -1839f, 36f };
			unk.f_5 = 1267246609;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 85:
			unk.f_3 = -1375589668;
			unk = { 977f, -105f, 75f };
			unk.f_5 = -1900237971;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 86:
			unk.f_3 = -1032171637;
			unk = { 1391f, 1163f, 114f };
			unk.f_5 = 2077901353;
			break;
	
		case 87:
			unk.f_3 = -52575179;
			unk = { 1391f, 1161f, 114f };
			unk.f_5 = -2102079126;
			break;
	
		case 88:
			unk.f_3 = 338220432;
			unk = { 1396f, 1143f, 115f };
			unk.f_5 = -1905793212;
			break;
	
		case 89:
			unk.f_3 = 1075555701;
			unk = { 1396f, 1141f, 115f };
			unk.f_5 = -1797032505;
			break;
	
		case 90:
			unk.f_3 = -1032171637;
			unk = { 1409f, 1146f, 114f };
			unk.f_5 = -62235167;
			break;
	
		case 91:
			unk.f_3 = -52575179;
			unk = { 1409f, 1148f, 114f };
			unk.f_5 = -1727188163;
			break;
	
		case 92:
			unk.f_3 = -1032171637;
			unk = { 1408f, 1159f, 114f };
			unk.f_5 = -562748873;
			break;
	
		case 93:
			unk.f_3 = -52575179;
			unk = { 1408f, 1161f, 114f };
			unk.f_5 = 1976429759;
			break;
	
		case 94:
			unk.f_3 = -1652821467;
			unk = { -1067f, -1666f, 5f };
			unk.f_5 = 1341041543;
			break;
	
		case 95:
			unk.f_3 = 1013329911;
			unk = { -1065f, -1669f, 5f };
			unk.f_5 = -1631467220;
			break;
	
		case 96:
			unk.f_3 = -502195954;
			unk = { -1104.66f, -1638.48f, 4.68f };
			unk.f_5 = -1788473129;
			break;
	
		case 97:
			unk.f_3 = -2051651622;
			unk = { -31.72f, -1101.85f, 26.57f };
			unk.f_5 = -1831288286;
			break;
	
		case 98:
			unk.f_3 = 464151082;
			unk = { 134.4f, -2204.1f, 7.52f };
			unk.f_5 = 963876966;
			break;
	
		case 99:
			unk.f_3 = -1081024910;
			unk = { 3628f, 3747f, 28f };
			unk.f_5 = 1773088812;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 100:
			unk.f_3 = -1081024910;
			unk = { 3621f, 3752f, 28f };
			unk.f_5 = -1332101528;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 101:
			unk.f_3 = 1099436502;
			unk = { -608.73f, -1610.32f, 27.16f };
			unk.f_5 = -1811763714;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 102:
			unk.f_3 = -1627599682;
			unk = { -611.32f, -1610.09f, 27.16f };
			unk.f_5 = 1608500665;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 103:
			unk.f_3 = 1099436502;
			unk = { -592.94f, -1631.58f, 27.16f };
			unk.f_5 = -1456048340;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 104:
			unk.f_3 = -1627599682;
			unk = { -592.71f, -1628.99f, 27.16f };
			unk.f_5 = 943854909;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 105:
			unk.f_3 = 1173348778;
			unk = { 1991f, 3053f, 47f };
			unk.f_5 = -89065356;
			break;
	
		case 106:
			unk.f_3 = 479144380;
			unk = { 1988.3529f, 3054.411f, 47.3204f };
			unk.f_5 = -925491840;
			break;
	
		case 107:
			unk.f_3 = -2045308299;
			unk = { -700.17f, 47.31f, 44.3f };
			unk.f_5 = 1999872275;
			break;
	
		case 108:
			unk.f_3 = -42303174;
			unk = { -697.94f, 48.35f, 44.3f };
			unk.f_5 = 1999872275;
			break;
	
		case 109:
			unk.f_3 = -1230442770;
			unk = { 241.3574f, 361.0488f, 105.8963f };
			unk.f_5 = 1538555582;
			break;
	
		case 110:
			unk.f_3 = 913904359;
			unk = { -689.11f, 506.97f, 110.64f };
			unk.f_5 = -961994186;
			break;
	
		case 111:
			unk.f_3 = -495720969;
			unk = { -1055.96f, -236.43f, 44.17f };
			unk.f_5 = -1772472848;
			break;
	
		case 112:
			unk.f_3 = 668467214;
			unk = { 29f, 3661f, 41f };
			unk.f_5 = -46374650;
			break;
	
		case 113:
			unk.f_3 = 1342464176;
			unk = { 32f, 3667f, 41f };
			unk.f_5 = -358302761;
			break;
	
		case 114:
			unk.f_3 = 1436076651;
			unk = { 87f, -1959f, 21f };
			unk.f_5 = -1237936041;
			break;
	
		case 115:
			unk.f_3 = 1413743677;
			unk = { 0f, -1823f, 30f };
			unk.f_5 = 1487374207;
			break;
	
		case 116:
			unk.f_3 = -815851463;
			unk = { 23.34f, -1897.6f, 23.05f };
			unk.f_5 = -199126299;
			break;
	
		case 117:
			unk.f_3 = -684382235;
			unk = { 524.2f, 3081.14f, 41.16f };
			unk.f_5 = -897071863;
			break;
	
		case 118:
			unk.f_3 = 1378348636;
			unk = { -1910.58f, -576.01f, 19.25f };
			unk.f_5 = -864465775;
			break;
	
		case 119:
			unk.f_3 = -2076287065;
			unk = { -720.39f, 256.86f, 80.29f };
			unk.f_5 = -208439480;
			break;
	
		case 120:
			unk.f_3 = -374527357;
			unk = { -718.42f, 257.79f, 80.29f };
			unk.f_5 = -1001088805;
			break;
	
		case 121:
			unk.f_3 = -1517873911;
			unk = { 106.38f, -742.7f, 46.18f };
			unk.f_5 = 756894459;
			break;
	
		case 122:
			unk.f_3 = -90456267;
			unk = { 105.76f, -746.65f, 46.18f };
			unk.f_5 = 476981677;
			break;
	
		case 123:
			unk.f_3 = -1207991715;
			unk = { -2343.53f, 3265.37f, 32.96f };
			unk.f_5 = 2081647379;
			break;
	
		case 124:
			unk.f_3 = -1207991715;
			unk = { -2342.23f, 3267.62f, 32.96f };
			unk.f_5 = 2081647379;
			break;
	
		case 125:
			unk.f_3 = -566611162;
			unk = { -1041.9326f, -2748.1675f, 22.0308f };
			unk.f_5 = 169965357;
			break;
	
		case 126:
			unk.f_3 = -551602996;
			unk = { -1044.8408f, -2746.4888f, 22.0308f };
			unk.f_5 = 311232516;
			break;
	
		case 128:
			unk.f_3 = 1104171198;
			unk = { -1045.1199f, -232.004f, 39.4379f };
			unk.f_5 = -1563127729;
			break;
	
		case 129:
			unk.f_3 = -1425071302;
			unk = { -1046.5161f, -229.3581f, 39.4379f };
			unk.f_5 = 759145763;
			break;
	
		case 130:
			unk.f_3 = -1679881977;
			unk = { -1083.6201f, -260.4167f, 38.1867f };
			unk.f_5 = -84399179;
			break;
	
		case 131:
			unk.f_3 = -1045015371;
			unk = { -1080.9744f, -259.0204f, 38.1867f };
			unk.f_5 = -461898059;
			break;
	
		case 127:
			unk.f_3 = -1033001619;
			unk = { -1042.57f, -240.6f, 38.11f };
			unk.f_5 = 1259065971;
			break;
	
		case 132:
			unk.f_3 = -1023447729;
			unk = { 1385.2578f, -2079.9495f, 52.7638f };
			unk.f_5 = -884051216;
			break;
	
		case 133:
			unk.f_3 = 73386408;
			unk = { 1656.57f, 4849.66f, 42.35f };
			unk.f_5 = 243782214;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 134:
			unk.f_3 = -1152174184;
			unk = { 1656.25f, 4852.24f, 42.35f };
			unk.f_5 = 714115627;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 135:
			unk.f_3 = -1184516519;
			unk = { -1051.4019f, -474.6847f, 36.6199f };
			unk.f_5 = 1668106976;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 136:
			unk.f_3 = -1184516519;
			unk = { -1049.2853f, -476.6376f, 36.7584f };
			unk.f_5 = 1382347031;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 137:
			unk.f_3 = 1230099731;
			unk = { -1210.9567f, -580.8765f, 27.2373f };
			unk.f_5 = -966790948;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 138:
			unk.f_3 = 1230099731;
			unk = { -1212.4453f, -578.4401f, 27.2373f };
			unk.f_5 = -2068750132;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 139:
			unk.f_3 = 993120320;
			unk = { -565.1712f, 276.6259f, 83.2863f };
			unk.f_5 = -1716533184;
			break;
	
		case 140:
			unk.f_3 = 993120320;
			unk = { -561.2863f, 293.5043f, 87.7771f };
			unk.f_5 = 2146505927;
			break;
	
		case 141:
			unk.f_3 = 1425919976;
			unk = { -631.96f, -236.33f, 38.21f };
			unk.f_5 = 1874948872;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 142:
			unk.f_3 = 9467943;
			unk = { -630.43f, -238.44f, 38.21f };
			unk.f_5 = -1965020851;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 145:
			unk.f_3 = -1743257725;
			unk = { 231.62f, 216.23f, 106.4f };
			unk.f_5 = 1951546856;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 146:
			unk.f_3 = -1743257725;
			unk = { 232.72f, 213.88f, 106.4f };
			unk.f_5 = -431382051;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 143:
			unk.f_3 = 110411286;
			unk = { 258.32f, 203.84f, 106.43f };
			unk.f_5 = -293975210;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 144:
			unk.f_3 = 110411286;
			unk = { 260.76f, 202.95f, 106.43f };
			unk.f_5 = -785215289;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 148:
			unk.f_3 = -222270721;
			unk = { 256.31f, 220.66f, 106.43f };
			unk.f_5 = -366143778;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 147:
			unk.f_3 = 1956494919;
			unk = { 266.36f, 217.57f, 110.43f };
			unk.f_5 = 440819155;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 149:
			unk.f_3 = -1501157055;
			unk = { -442.66f, 6015.2217f, 31.8663f };
			unk.f_5 = -588495243;
			break;
	
		case 150:
			unk.f_3 = -1501157055;
			unk = { -444.4985f, 6017.06f, 31.8663f };
			unk.f_5 = 1815504139;
			break;
	
		case 151:
			unk.f_3 = -1765048490;
			unk = { 1855.6848f, 3683.9302f, 34.5928f };
			unk.f_5 = 1344911780;
			break;
	
		case 152:
			unk.f_3 = -403433025;
			unk = { -1223.35f, -172.41f, 39.98f };
			unk.f_5 = -320891223;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 153:
			unk.f_3 = 1308911070;
			unk = { -1220.93f, -173.68f, 39.98f };
			unk.f_5 = 1511747875;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 154:
			unk.f_3 = -403433025;
			unk = { -1211.99f, -190.57f, 39.98f };
			unk.f_5 = -1517722103;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 155:
			unk.f_3 = 1308911070;
			unk = { -1213.26f, -192.98f, 39.98f };
			unk.f_5 = -1093199712;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 156:
			unk.f_3 = -403433025;
			unk = { -1217.77f, -201.54f, 39.98f };
			unk.f_5 = 1902048492;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 157:
			unk.f_3 = 1308911070;
			unk = { -1219.04f, -203.95f, 39.98f };
			unk.f_5 = -444768985;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 158:
			unk.f_3 = -582278602;
			unk = { 2514.32f, -317.34f, 93.32f };
			unk.f_5 = 404057594;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 159:
			unk.f_3 = 1343686600;
			unk = { 2512.42f, -319.26f, 93.32f };
			unk.f_5 = -1417472813;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 160:
			unk.f_3 = -26664553;
			unk = { 2333.23f, 2574.97f, 47.03f };
			unk.f_5 = -1376084479;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 161:
			unk.f_3 = 914592203;
			unk = { 2329.65f, 2576.64f, 47.03f };
			unk.f_5 = 457472151;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 162:
			unk.f_3 = 97297972;
			unk = { 16.1279f, -1114.6055f, 29.9469f };
			unk.f_5 = 1071759151;
			break;
	
		case 163:
			unk.f_3 = -8873588;
			unk = { 18.572f, -1115.4951f, 29.9469f };
			unk.f_5 = -2119023917;
			break;
	
		case 165:
			unk.f_3 = 97297972;
			unk = { 1698.1763f, 3751.5056f, 34.8553f };
			unk.f_5 = -1488490473;
			break;
	
		case 166:
			unk.f_3 = -8873588;
			unk = { 1699.9371f, 3753.4202f, 34.8553f };
			unk.f_5 = -511187813;
			break;
	
		case 167:
			unk.f_3 = 97297972;
			unk = { 244.7274f, -44.0791f, 70.91f };
			unk.f_5 = -248569395;
			break;
	
		case 168:
			unk.f_3 = -8873588;
			unk = { 243.8379f, -46.5232f, 70.91f };
			unk.f_5 = 989443413;
			break;
	
		case 169:
			unk.f_3 = 97297972;
			unk = { 845.3624f, -1024.5391f, 28.3448f };
			unk.f_5 = 2022251829;
			break;
	
		case 170:
			unk.f_3 = -8873588;
			unk = { 842.7684f, -1024.5391f, 23.3448f };
			unk.f_5 = 649820567;
			break;
	
		case 171:
			unk.f_3 = 97297972;
			unk = { -326.1122f, 6075.2695f, 31.6047f };
			unk.f_5 = 537455378;
			break;
	
		case 172:
			unk.f_3 = -8873588;
			unk = { -324.273f, 6077.109f, 31.6047f };
			unk.f_5 = 1121431731;
			break;
	
		case 173:
			unk.f_3 = 97297972;
			unk = { -665.2424f, -944.3256f, 21.9792f };
			unk.f_5 = -1437380438;
			break;
	
		case 174:
			unk.f_3 = -8873588;
			unk = { -662.6414f, -944.3256f, 21.9792f };
			unk.f_5 = -946336965;
			break;
	
		case 175:
			unk.f_3 = 97297972;
			unk = { -1313.8259f, -389.1259f, 36.8457f };
			unk.f_5 = 1893144650;
			break;
	
		case 176:
			unk.f_3 = -8873588;
			unk = { -1314.465f, -391.6472f, 36.8457f };
			unk.f_5 = 435841678;
			break;
	
		case 177:
			unk.f_3 = 97297972;
			unk = { -1114.0089f, 2689.77f, 18.7041f };
			unk.f_5 = 948508314;
			break;
	
		case 178:
			unk.f_3 = -8873588;
			unk = { -1112.0708f, 2691.5046f, 18.7041f };
			unk.f_5 = -1796714665;
			break;
	
		case 179:
			unk.f_3 = 97297972;
			unk = { -3164.8452f, 1081.3917f, 20.9887f };
			unk.f_5 = -1155247245;
			break;
	
		case 180:
			unk.f_3 = -8873588;
			unk = { -3163.8115f, 1083.7784f, 20.9887f };
			unk.f_5 = 782482084;
			break;
	
		case 181:
			unk.f_3 = 97297972;
			unk = { 2570.9045f, 303.3556f, 108.8848f };
			unk.f_5 = -1194470801;
			break;
	
		case 182:
			unk.f_3 = -8873588;
			unk = { 2568.3037f, 303.3556f, 108.8848f };
			unk.f_5 = -2129698061;
			break;
	
		case 183:
			unk.f_3 = 97297972;
			unk = { 813.1779f, -2148.2695f, 29.7689f };
			unk.f_5 = 1071759151;
			break;
	
		case 184:
			unk.f_3 = -8873588;
			unk = { 810.5769f, -2148.2695f, 29.7689f };
			unk.f_5 = -2119023917;
			break;
	
		case 164:
			unk.f_3 = 452874391;
			unk = { 6.8179f, -1098.2095f, 29.9469f };
			unk.f_5 = 1487704245;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 185:
			unk.f_3 = 452874391;
			unk = { 827.5342f, -2160.4927f, 29.7688f };
			unk.f_5 = 1529812051;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 186:
			unk.f_3 = 546378757;
			unk = { -1107.01f, 289.38f, 64.76f };
			unk.f_5 = 904342475;
			break;
	
		case 187:
			unk.f_3 = -1249591818;
			unk = { -1101.62f, 290.36f, 64.76f };
			unk.f_5 = -795418380;
			break;
	
		case 188:
			unk.f_3 = 546378757;
			unk = { -1138.64f, 300.82f, 67.18f };
			unk.f_5 = -1502457334;
			break;
	
		case 189:
			unk.f_3 = -1249591818;
			unk = { -1137.05f, 295.59f, 67.18f };
			unk.f_5 = -1994188940;
			break;
	
		case 190:
			unk.f_3 = 1878909644;
			unk = { -2053.16f, 3239.49f, 30.5f };
			unk.f_5 = -621770121;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 191:
			unk.f_3 = 1709395619;
			unk = { -2054.39f, 3237.23f, 30.5f };
			unk.f_5 = 1018580481;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 192:
			unk.f_3 = -1184592117;
			unk = { -108.91f, 6469.11f, 31.91f };
			unk.f_5 = 421926217;
			break;
	
		case 193:
			unk.f_3 = -1156020871;
			unk = { -182.91f, 6168.37f, 32.14f };
			unk.f_5 = -1331552374;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	}

	switch (iParam0)
	{
		case 196:
			unk.f_3 = 2059227086;
			unk = { -59.89f, -1092.95f, 26.88f };
			unk.f_5 = -293141277;
			break;
	
		case 197:
			unk.f_3 = 1417577297;
			unk = { -60.55f, -1094.75f, 26.89f };
			unk.f_5 = 506750037;
			break;
	
		case 194:
			unk.f_3 = 2059227086;
			unk = { -39.13f, -1108.22f, 26.72f };
			unk.f_5 = 1496005418;
			break;
	
		case 195:
			unk.f_3 = 1417577297;
			unk = { -37.33f, -1108.87f, 26.72f };
			unk.f_5 = -1863079210;
			break;
	
		case 198:
			unk.f_3 = -1428622127;
			unk = { 1943.73f, 3803.63f, 32.31f };
			unk.f_5 = -2018911784;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 199:
			unk.f_3 = 73386408;
			unk = { 316.39f, -276.49f, 54.52f };
			unk.f_5 = -93934272;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 200:
			unk.f_3 = -1152174184;
			unk = { 313.96f, -275.6f, 54.52f };
			unk.f_5 = 667682830;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 201:
			unk.f_3 = 73386408;
			unk = { -2965.71f, 484.22f, 16.05f };
			unk.f_5 = 1876735830;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 202:
			unk.f_3 = -1152174184;
			unk = { -2965.82f, 481.63f, 16.05f };
			unk.f_5 = -2112857171;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 205:
			unk.f_3 = 1755793225;
			unk = { 962.1f, -2183.83f, 31.06f };
			unk.f_5 = 2046930518;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 206:
			unk.f_3 = 239858268;
			unk = { 961.79f, -2187.08f, 31.06f };
			unk.f_5 = 1208502884;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 207:
			unk.f_3 = 1742849246;
			unk = { 2508.43f, -336.63f, 115.76f };
			unk.f_5 = 1986432421;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 208:
			unk.f_3 = -44475594;
			unk = { -2255.19f, 322.26f, 184.93f };
			unk.f_5 = -722798986;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 209:
			unk.f_3 = 1183182250;
			unk = { -2254.06f, 319.7f, 184.93f };
			unk.f_5 = 204301578;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 210:
			unk.f_3 = -44475594;
			unk = { -2301.13f, 336.91f, 184.93f };
			unk.f_5 = -320140460;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 211:
			unk.f_3 = 1183182250;
			unk = { -2298.57f, 338.05f, 184.93f };
			unk.f_5 = 65222916;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 212:
			unk.f_3 = -44475594;
			unk = { -2222.32f, 305.86f, 184.93f };
			unk.f_5 = -920027322;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 213:
			unk.f_3 = 1183182250;
			unk = { -2221.19f, 303.3f, 184.93f };
			unk.f_5 = -58432001;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 214:
			unk.f_3 = -44475594;
			unk = { -2280.6f, 265.43f, 184.93f };
			unk.f_5 = -2007378629;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 215:
			unk.f_3 = 1183182250;
			unk = { -2278.04f, 266.57f, 184.93f };
			unk.f_5 = 418772613;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 216:
			unk.f_3 = -982531572;
			unk = { 778.31f, -1867.49f, 30.66f };
			unk.f_5 = 1679064921;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 217:
			unk.f_3 = -1049302886;
			unk = { -721.35f, 91.01f, 56.68f };
			unk.f_5 = 412198396;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 218:
			unk.f_3 = 1653418708;
			unk = { -728.84f, 88.64f, 56.68f };
			unk.f_5 = -1053755588;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 219:
			unk.f_3 = 650392296;
			unk = { -2287.62f, 363.9f, 174.93f };
			unk.f_5 = -53446139;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 220:
			unk.f_3 = -267139712;
			unk = { -2289.78f, 362.91f, 174.93f };
			unk.f_5 = 1333960556;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 221:
			unk.f_3 = 650392296;
			unk = { -2289.86f, 362.88f, 174.93f };
			unk.f_5 = -41786493;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 222:
			unk.f_3 = -267139712;
			unk = { -2292.01f, 361.89f, 174.93f };
			unk.f_5 = 1750120734;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 223:
			unk.f_3 = 1127922797;
			unk = { 1803.94f, 3929.01f, 33.72f };
			unk.f_5 = 1661506222;
			break;
	
		case 203:
			unk.f_3 = 73386408;
			unk = { -348.81f, -47.26f, 49.39f };
			unk.f_5 = -2116116146;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 204:
			unk.f_3 = -1152174184;
			unk = { -351.26f, -46.41f, 49.39f };
			unk.f_5 = -74083138;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 224:
			unk.f_3 = -1468417022;
			unk = { 962.9084f, -2105.8137f, 34.6432f };
			unk.f_5 = -1670085357;
			break;
	}

	return unk;
}

BOOL func_141() // Position - 0xA8D2
{
	if (func_12() == -1 || func_12() == 999 && !(func_142() == 0))
		return true;

	return false;
}

int func_142() // Position - 0xA902
{
	return Global_33088;
}

void func_143(int iParam0) // Position - 0xA90D
{
	if (iParam0 == -1)
		iParam0 = func_32();

	if (iParam0 == -1)
		return;

	func_102(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114121 = 0;
	func_144();
	return;
}

void func_144() // Position - 0xA943
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

BOOL func_145(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xA980
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_152724)
		return false;

	if (iParam3 == -1)
		iParam3 = func_32();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_41 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_95())
				return false;
		}
	
		if (!Global_114135.f_9089)
			return false;
	
		if (_IS_MISSION_REPEAT_ACTIVE(false))
			return false;
	
		if (func_91())
			return false;
	
		if (func_170())
			return false;
	
		if (Global_114124 != -1)
			return false;
	
		if (func_25(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_85(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_41.f_2 > 50f)
				return false;
	
		if (!func_169(iParam3))
			return false;
	
		if (func_25(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_168(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_168(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_25(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_167(iParam3, iParam4, 145))
				return false;
	
		if (!func_166(Global_114135.f_24999.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_114126 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_165())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_156(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_155(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_155(0, 0))
			return false;
	
		if (Global_33234)
			return false;
	
		if (func_169(30) && !func_155(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_25(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_114135.f_2367.f_539.f_2300[i /*3*/] };
				num = Global_114135.f_2367.f_539.f_2296[i];
			
				if (func_154(num))
					if (func_147(i))
						if (!func_146(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_146(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0xAD1A
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_147(eCharacter echParam0) // Position - 0xAD61
{
	int num;

	num = Global_114135.f_2367.f_539.f_2296[echParam0];
	return func_148(num);
}

BOOL func_148(int iParam0) // Position - 0xAD82
{
	return func_149(iParam0, 1);
}

int func_149(int iParam0, int iParam1) // Position - 0xAD91
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_154(iParam0))
		return 0;

	func_150(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_150(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xADE4
{
	func_151(func_125(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_151(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xAE02
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_153(iParam0, iParam1))
	{
		num = func_110(iParam1);
		num2 = func_108(iParam0);
		num3 = func_108(iParam0) - func_108(iParam1);
		num4 = func_110(iParam0) - func_110(iParam1);
		num5 = func_111(iParam0) - func_111(iParam1);
		num6 = func_114(iParam0) - func_114(iParam1);
		num7 = func_113(iParam0) - func_113(iParam1);
		num8 = func_112(iParam0) - func_112(iParam1);
	}
	else
	{
		num = func_110(iParam0);
		num2 = func_108(iParam1);
		num3 = func_108(iParam1) - func_108(iParam0);
		num4 = func_110(iParam1) - func_110(iParam0);
		num5 = func_111(iParam1) - func_111(iParam0);
		num6 = func_114(iParam1) - func_114(iParam0);
		num7 = func_113(iParam1) - func_113(iParam0);
		num8 = func_112(iParam1) - func_112(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_124(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_152(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_152(float fParam0, float fParam1, float fParam2) // Position - 0xB003
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

BOOL func_153(int iParam0, int iParam1) // Position - 0xB045
{
	int num;
	int num2;

	if (!func_154(iParam1) || !func_154(iParam0))
		return 1;

	num = func_108(iParam0);
	num2 = func_108(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_110(iParam0);
	num2 = func_110(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_111(iParam0);
	num2 = func_111(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_114(iParam0);
	num2 = func_114(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_113(iParam0);
	num2 = func_113(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_112(iParam0);
	num2 = func_112(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

BOOL func_154(int iParam0) // Position - 0xB151
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_112(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_113(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_114(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_108(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_110(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_111(iParam0);

	if (num6 < 1 || num6 > func_124(num5, num4))
		return false;

	return true;
}

BOOL func_155(int iParam0, int iParam1) // Position - 0xB22D
{
	if (IS_BIT_SET(Global_114135.f_24999.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_156(int iParam0) // Position - 0xB24D
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_25(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_164() || Global_113182 || Global_33090 || func_163() || func_52(8, -1) || func_162() || func_161() || func_160() || func_159() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_164() || Global_33090 || func_163() || func_52(8, -1) || func_160() || func_162() || func_161() || func_159() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_164() || Global_113182 || Global_33090 || func_163() || func_52(8, -1) || func_160() || func_162() || func_161() || func_159() || Global_114135.f_7692.f_919[character] == 5 || Global_44728 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_164() || Global_113182 || Global_33090 || func_163() || func_52(8, -1) || func_162() || func_161() || func_159() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_164() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_52(8, -1) || func_159() || func_158() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_52(8, -1) || func_162() || func_161() || func_158() || func_157())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_164() || Global_33090 || func_163() || func_52(8, -1) || func_161() || func_160() || func_159() || Global_114135.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_164() || func_161() || Global_113182 || Global_33090 || func_163() || Global_45392 || func_52(8, -1) || func_160() || func_158() || func_159() || Global_114135.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_164() || Global_113182 || Global_33090 || func_163() || func_52(8, -1) || func_160() || func_158() || func_162() || func_161() || func_159())
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

BOOL func_157() // Position - 0xB96A
{
	return Global_101727.f_1;
}

BOOL func_158() // Position - 0xB978
{
	if (Global_98585 != -1)
		return IS_BIT_SET(Global_92451[Global_98585 /*34*/].f_15, 13);

	return false;
}

BOOL func_159() // Position - 0xB99B
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1424752554) > 0)
		return true;

	return false;
}

BOOL func_160() // Position - 0xB9B5
{
	if (Global_79800)
		return true;
	else if (Global_64302 && !Global_64308)
		return true;

	return false;
}

BOOL func_161() // Position - 0xB9DF
{
	return Global_101740.f_400 > 0;
}

BOOL func_162() // Position - 0xB9F0
{
	return Global_101740.f_399 > 0;
}

BOOL func_163() // Position - 0xBA01
{
	return Global_1575084;
}

BOOL func_164() // Position - 0xBA0D
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99141.f_44 == 1;

	return false;
}

BOOL func_165() // Position - 0xBA29
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_166(int iParam0) // Position - 0xBA51
{
	return func_153(func_125(), iParam0);
}

BOOL func_167(int iParam0, int iParam1, eCharacter echParam2) // Position - 0xBA63
{
	BOOL num;
	eCharacter character;

	num = 0;
	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (echParam2 != 145 && echParam2 == 0 || echParam2 == 1 || echParam2 == 2)
		character = echParam2;

	switch (iParam0)
	{
		case 18:
			if (character == CHAR_TREVOR)
				num = 1;
			break;
	
		case 19:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 20:
			if (character != CHAR_FRANKLIN)
				num = 1;
			break;
	
		case 28:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 13:
			if (character == CHAR_MICHAEL)
				if (iParam1 == 2)
					num = 0;
				else
					num = 1;
			else
				num = 1;
			break;
	
		case 22:
			if (iParam1 == 2 || character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 30:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		default:
			num = 1;
			break;
	}

	return num;
}

int func_168(eCharacter echParam0) // Position - 0xBB47
{
	if (!func_25(echParam0))
		return 7;

	return Global_114135.f_7692.f_919[echParam0];
}

BOOL func_169(int iParam0) // Position - 0xBB6B
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_114135.f_24999, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_114135.f_24999.f_1, num);
	}

	return flag;
}

BOOL func_170() // Position - 0xBBC3
{
	Vehicle vehiclePedIsIn;

	if (Global_33239)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false)))
					return true;
		}
	}

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xBC07
{
	int profileSetting;

	if (Global_153015 == 2)
		return true;
	else if (Global_153015 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(1571103992, &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_28, 2);
				MISC::SET_BIT(&Global_28, 4);
				MISC::SET_BIT(&Global_28, 6);
				STATS::STAT_SET_INT(1571103992, profileSetting, true);
			
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

void func_172() // Position - 0xBCBF
{
	func_100();
	return;
}

void func_173(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xBCCB
{
	SYSTEM::VDIST(vParam0, vParam0) > 1f;
	return;
}


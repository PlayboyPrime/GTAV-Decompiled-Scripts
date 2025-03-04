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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	Ped pedLocal_52 = 0;
	Ped pedLocal_53 = 0;
	Ped pedLocal_54 = 0;
	Vehicle veLocal_55 = 0;
	Blip blLocal_56 = 0;
	Blip blLocal_57 = 0;
	Object obLocal_58 = 0;
	BOOL bLocal_59 = 0;
	var uLocal_60 = 0;
	BOOL bLocal_61 = 0;
	BOOL bLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	float fLocal_66 = 0f;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	Hash hLocal_69 = 0;
	Hash hLocal_70 = 0;
	int iLocal_71 = 0;
	BOOL bLocal_72 = 0;
	BOOL bLocal_73 = 0;
	BOOL bLocal_74 = 0;
	BOOL bLocal_75 = 0;
	var uLocal_76 = 16;
	var uLocal_77 = 0;
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
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	BOOL bLocal_246 = 0;
	BOOL bLocal_247 = 0;
	float fLocal_248 = 0f;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	char* sLocal_254 = 0;
	char* sLocal_255 = 0;
	char* sLocal_256 = 0;
	char* sLocal_257 = 0;
	char* sLocal_258 = 0;
	BOOL bLocal_259 = 0;
	BOOL bLocal_260 = 0;
	BOOL bLocal_261 = 0;
	int iLocal_262 = 0;
	char* sLocal_263 = 0;
	char* sLocal_264 = 0;
	char* sLocal_265 = 0;
	char* sLocal_266 = 0;
	char* sLocal_267 = 0;
	char* sLocal_268 = 0;
	char* sLocal_269 = 0;
	char* sLocal_270 = 0;
	char* sLocal_271 = 0;
	char* sLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	BOOL bLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	BOOL bLocal_285 = 0;
	BOOL bLocal_286 = 0;
	BOOL bLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	BOOL bLocal_291 = 0;
	BOOL bLocal_292 = 0;
	float fLocal_293 = 0f;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	BOOL bLocal_296 = 0;
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
	iLocal_242 = 8000;
	iLocal_245 = 8;
	bLocal_247 = true;
	sLocal_255 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_256 = "RANDOM@ARRESTS";
	sLocal_257 = "RANDOM@ARRESTS@BUSTED";
	bLocal_261 = 1;
	fLocal_63 = { uScriptParam_0.f_1[0 /*3*/] };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		bLocal_74 = true;
		func_214();
		func_184();
	}

	if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, fLocal_63) < 10f)
		iLocal_51 = 1;
	else
		iLocal_51 = 2;

	if (func_141(fLocal_63, 15, iLocal_51, false, false))
		func_136(15);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	
		switch (iLocal_46)
		{
			case 0:
				if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_135() && !func_122())
					if (func_119())
						iLocal_46 = 1;
				else
					func_184();
				break;
		
			case 1:
				if (func_115())
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(2551.0378f, 4708.6133f, 32.6775f, 2536.979f, 5022.1787f, 43.8519f, 300f, false, true, true);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					func_104(true);
					iLocal_46 = 2;
				}
				else if (!func_103(200f))
				{
					func_184();
				}
				break;
		
			case 2:
				if (func_103(1128792064))
					func_1();
				else
					func_184();
				break;
		}
	}

	return;
}

void func_1() // Position - 0x1D1 (465)
{
	var address;
	Vector3 vector;
	float distanceBetweenCoords;
	BOOL flag;
	float distanceBetweenCoords2;

	MISC::SET_BIT(&address, 3);
	MISC::SET_BIT(&address, 4);
	flag = false;
	func_102();

	if (!PED::IS_PED_INJURED(pedLocal_53))
		PED::SET_PED_RESET_FLAG(pedLocal_53, 129, true);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_53))
		if (PED::IS_PED_BEING_STUNNED(pedLocal_53, 0))
			bLocal_296 = true;

	if (!PED::IS_PED_INJURED(pedLocal_52) && iLocal_47 != 2 && iLocal_47 != 1)
	{
		if (!PED::IS_PED_INJURED(pedLocal_53))
		{
			switch (iLocal_50)
			{
				case 0:
					GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
				
					if (SYSTEM::TIMERA() > 10)
						if (!bLocal_72)
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_52, SCRIPT_TASK_GO_TO_ENTITY) == 7)
								TASK::TASK_GO_TO_ENTITY(pedLocal_52, pedLocal_53, -1, 1f, 3f, 1073741824, 0);
				
					if (SYSTEM::TIMERA() > 4000)
					{
						if (!bLocal_72)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_SMART_FLEE_PED) == 7)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PLAY_ANIM) == 1)
									TASK::STOP_ANIM_PLAYBACK(pedLocal_53, 2, true);
							
								TASK::TASK_SMART_FLEE_PED(pedLocal_53, pedLocal_52, 150f, -1, false, false);
							}
						}
					}
				
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_52, true), ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), true);
				
					if (SYSTEM::TIMERA() > 8000 || distanceBetweenCoords < 1.5f)
					{
						flag = func_97();
					
						if (flag == true)
							TASK::TASK_GO_TO_ENTITY(pedLocal_52, pedLocal_53, -1, 1f, 0.01f, 1073741824, 0);
					}
				
					if (SYSTEM::TIMERA() > 30000 && distanceBetweenCoords < 10f)
						flag = true;
				
					if (SYSTEM::TIMERA() > 2000)
					{
						if (flag || bLocal_276 == true)
						{
							if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							{
								_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PCUFF", 4, iLocal_252, 0, 0);
								bLocal_292 = PED::IS_PED_RAGDOLL(pedLocal_53) || TASK::IS_PED_GETTING_UP(pedLocal_53);
							
								if (!WEAPON::HAS_PED_GOT_WEAPON(pedLocal_52, joaat("WEAPON_PISTOL"), false))
									WEAPON::GIVE_WEAPON_TO_PED(pedLocal_52, joaat("WEAPON_PISTOL"), -1, false, true);
							
								WEAPON::SET_CURRENT_PED_WEAPON(pedLocal_52, joaat("WEAPON_PISTOL"), true);
								fLocal_66 = { ENTITY::GET_ENTITY_COORDS(pedLocal_53, true) };
								TASK::CLEAR_PED_TASKS(pedLocal_52);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
							
								if (!bLocal_292 && distanceBetweenCoords > 2f)
									TASK::TASK_SHOOT_AT_COORD(0, fLocal_66, fLocal_66.f_1, fLocal_66.f_2 + 4f, 1000, joaat("FIRING_PATTERN_SINGLE_SHOT"));
							
								TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_53, -1, SLF_WHILE_NOT_IN_FOV, 2);
								TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, pedLocal_53, pedLocal_53, 1f, false, 3f, 1082130432, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
								TASK::TASK_AIM_GUN_AT_ENTITY(0, pedLocal_53, 5000, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_71);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_52);
								PED::SET_PED_KEEP_TASK(pedLocal_52, true);
								SYSTEM::SETTIMERA(0);
								iLocal_244 = MISC::GET_GAME_TIMER();
							
								if (bLocal_292)
								{
									TASK::CLEAR_PED_TASKS(pedLocal_53);
									WEAPON::SET_PED_DROPS_WEAPON(pedLocal_53);
									iLocal_50 = 4;
								}
								else
								{
									iLocal_50 = 2;
								}
							}
							else if (!bLocal_276)
							{
								TASK::TASK_GO_TO_ENTITY(pedLocal_52, pedLocal_53, -1, 1f, 0.01f, 1073741824, 0);
								bLocal_276 = true;
							}
						}
						else
						{
							func_80();
						}
					}
					else
					{
						GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
				
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_INJURED(pedLocal_52) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), pedLocal_52))
							{
								TASK::CLEAR_PED_TASKS(pedLocal_52);
								iLocal_50 = 1;
								TASK::TASK_STAND_STILL(pedLocal_52, 500);
							}
						}
					}
					break;
			
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_52, SCRIPT_TASK_STAND_STILL) == 7)
					{
						TASK::TASK_GO_TO_ENTITY(pedLocal_52, pedLocal_53, -1, 1f, 3f, 1073741824, 0);
						iLocal_50 = 0;
					}
					break;
			
				case 2:
					if (MISC::GET_GAME_TIMER() - iLocal_244 > 1000)
					{
						vector = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(pedLocal_53) * 3f };
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_53, vector, 2f, -1, 1f, 1024, 1193033728);
						iLocal_50 = 3;
					}
					break;
			
				case 3:
					if (MISC::GET_GAME_TIMER() - iLocal_244 > 4500)
						iLocal_50 = 4;
					break;
			
				case 4:
					bLocal_72 = true;
					TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
					TASK::TASK_PLAY_ANIM(0, sLocal_256, "idle_2_hands_up", 2f, -8f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_71);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_53);
					PED::SET_PED_KEEP_TASK(pedLocal_53, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(pedLocal_53, true);
					iLocal_50 = 5;
					break;
			
				case 5:
					if (iLocal_48 == 3)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_52, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
						{
							TASK::CLEAR_PED_TASKS(pedLocal_52);
						
							if (!WEAPON::HAS_PED_GOT_WEAPON(pedLocal_52, joaat("WEAPON_PISTOL"), false))
								WEAPON::GIVE_WEAPON_TO_PED(pedLocal_52, joaat("WEAPON_PISTOL"), -1, false, true);
						
							WEAPON::SET_CURRENT_PED_WEAPON(pedLocal_52, joaat("WEAPON_PISTOL"), true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, pedLocal_53, -1, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_71);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
							PED::SET_PED_KEEP_TASK(pedLocal_52, true);
							iLocal_50 = 6;
						}
					}
					break;
			
				case 6:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_55, false) && !PED::IS_PED_INJURED(pedLocal_54))
					{
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(veLocal_55, true);
					
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_52, SCRIPT_TASK_PLAY_ANIM) == 7)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_54, SCRIPT_TASK_VEHICLE_MISSION) == 7)
							{
								if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_53, veLocal_55, 2, false, false))
								{
									if (!PED::IS_PED_INJURED(pedLocal_53))
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_53, veLocal_55))
										{
											if (!PED::IS_PED_IN_COMBAT(pedLocal_53, 0))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_ENTER_VEHICLE) == 7)
												{
													TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
													TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0, false, false, false);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
													TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_71);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, hLocal_70, hLocal_69);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, hLocal_69, hLocal_70);
												}
											}
										}
									}
								
									if (!PED::IS_PED_INJURED(pedLocal_52))
									{
										PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(pedLocal_52);
									
										if (!PED::IS_PED_IN_COMBAT(pedLocal_52, 0))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_55, false))
											{
												if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
												{
													if (_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_INCAR", 4, iLocal_252, 0, 0))
													{
														if (func_79(pedLocal_52, veLocal_55) == 2)
															if (PED::IS_PED_FACING_PED(pedLocal_54, pedLocal_53, 180f))
																fLocal_293 = { 2.978f, -0.75f, 1f };
															else
																fLocal_293 = { 2.978f, 0.75f, 1f };
														else if (PED::IS_PED_FACING_PED(pedLocal_54, pedLocal_53, 180f))
															fLocal_293 = { -2.978f, -0.75f, 1f };
														else
															fLocal_293 = { -2.978f, 0.75f, 1f };
													
														TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
														TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_55, fLocal_293), pedLocal_53, 0.75f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 60000);
														TASK::TASK_AIM_GUN_AT_ENTITY(0, pedLocal_53, -1, false);
														TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
														TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_71);
														TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
														PED::SET_PED_KEEP_TASK(pedLocal_52, true);
														VEHICLE::SET_VEHICLE_SIREN(veLocal_55, false);
														iLocal_242 = 8000;
														SYSTEM::SETTIMERB(0);
														iLocal_275 = MISC::GET_GAME_TIMER();
														iLocal_50 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_78();
								}
							}
						}
					}
					break;
			
				case 7:
					if (!PED::IS_PED_INJURED(pedLocal_52))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_52, 35f, 35f, 35f, false, true, 0))
						{
							if (MISC::GET_GAME_TIMER() - iLocal_275 > 8000)
							{
								if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									TASK::TASK_LOOK_AT_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), 6000, SLF_WHILE_NOT_IN_FOV, 2);
									_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PLEAVE", 4, iLocal_252, 0, 0);
									iLocal_242 = 8000;
									iLocal_275 = MISC::GET_GAME_TIMER();
								}
							}
						}
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_55, false))
						{
							if (bLocal_62)
							{
								if (func_79(pedLocal_52, veLocal_55) == 2)
									TASK::TASK_ENTER_VEHICLE(pedLocal_53, veLocal_55, -1, 2, 1f, 1, 0, 0);
								else
									TASK::TASK_ENTER_VEHICLE(pedLocal_53, veLocal_55, -1, 1, 1f, 1, 0, 0);
							
								iLocal_50 = 8;
							}
							else if (bLocal_61)
							{
								distanceBetweenCoords2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), ENTITY::GET_ENTITY_COORDS(veLocal_55, true), true);
							
								if (distanceBetweenCoords2 < 4f && iLocal_283 == 0)
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(pedLocal_53, veLocal_55, 60000, 0.5f, fLocal_293, fLocal_293.f_1, 1f, 1);
									iLocal_283 = 1;
								}
								else if (distanceBetweenCoords2 < 3f)
								{
									TASK::CLEAR_PED_TASKS(pedLocal_53);
									bLocal_62 = true;
								}
							}
							else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_53, sLocal_256, "kneeling_arrest_get_up", 3))
							{
								if (func_79(pedLocal_52, veLocal_55) == 2)
									fLocal_293 = { 1.578f, -0.5f, 1f };
								else
									fLocal_293 = { -1.578f, -0.5f, 1f };
							
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(pedLocal_53, veLocal_55, 60000, 0.5f, fLocal_293, fLocal_293.f_1, 1f, 1);
							
								if (bLocal_296)
									PED::SET_PED_MOVEMENT_CLIPSET(pedLocal_53, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
								else
									PED::SET_PED_MOVEMENT_CLIPSET(pedLocal_53, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
							
								bLocal_61 = true;
							}
						}
					}
					break;
			
				case 8:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_55, false))
					{
						if (!PED::IS_PED_INJURED(pedLocal_54))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_53, veLocal_55))
							{
								if (HUD::DOES_BLIP_EXIST(blLocal_56))
									HUD::REMOVE_BLIP(&blLocal_56);
							
								if (HUD::DOES_BLIP_EXIST(blLocal_57))
									HUD::REMOVE_BLIP(&blLocal_57);
							
								if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_52, veLocal_55))
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_54, veLocal_55, 10f, 786603);
									PED::SET_PED_KEEP_TASK(pedLocal_54, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_52, false);
									func_184();
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_52, SCRIPT_TASK_ENTER_VEHICLE) == 7)
								{
									TASK::CLEAR_PED_TASKS(pedLocal_52);
									TASK::TASK_ENTER_VEHICLE(pedLocal_52, veLocal_55, 20000, 0, 1f, 1, 0, 0);
									PED::SET_PED_KEEP_TASK(pedLocal_52, true);
								}
							}
						}
					}
					break;
			}
		}
	}

	func_64();
	PED::IS_PED_INJURED(pedLocal_53);

	if (PED::IS_PED_INJURED(pedLocal_52))
	{
		if (!PED::IS_PED_INJURED(pedLocal_53))
		{
			if (iLocal_47 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_47 == 1 || iLocal_47 == 3)
					if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 20f)
							_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_272, 4, iLocal_252, 0, 0);
			
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_53, sLocal_256, "kneeling_arrest_idle", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
					TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0, false, false, false);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_71);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(pedLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_53, true);
				}
			
				SYSTEM::WAIT(0);
			
				if (iLocal_47 == 0)
					iLocal_47 = 2;
			
				func_184();
			}
		}
	}

	if (PED::IS_PED_INJURED(pedLocal_53))
		if (!bLocal_59)
			if (func_11())
				func_3(false);

	if (iLocal_50 == 5 || iLocal_50 == 6)
		if (!bLocal_59)
			if (iLocal_47 == 3)
				if (func_11())
					func_3(false);
			else
				func_3(true);

	func_2();
	return;
}

void func_2() // Position - 0xBEE (3054)
{
	int num;
	Vector3 vector;

	vector = { 40f, 40f, 20f };

	if (MISC::GET_GAME_TIMER() > iLocal_253 + 1000)
	{
		if (!PED::IS_PED_INJURED(pedLocal_52))
			if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), vector, false, true, 0))
				num = num + 1;
		else
			num = num + 1;
	
		if (!PED::IS_PED_INJURED(pedLocal_53))
			if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), vector, false, true, 0))
				num = num + 1;
		else
			num = num + 1;
	
		if (num == 2)
			iLocal_252 = 1;
		else
			iLocal_252 = 0;
	
		iLocal_253 = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_3(BOOL bParam0) // Position - 0xC86 (3206)
{
	char* animationName;
	char* animationName2;
	char* animationName3;

	if (bParam0)
	{
		animationName = "radio_enter";
		animationName2 = "radio_chatter";
		animationName3 = "radio_exit";
	}
	else
	{
		animationName = "generic_radio_enter";
		animationName2 = "generic_radio_chatter";
		animationName3 = "generic_radio_exit";
	}

	if (!PED::IS_PED_INJURED(pedLocal_52))
	{
		switch (iLocal_48)
		{
			case 0:
				if (iLocal_241 == 3 || iLocal_50 == 5 || iLocal_50 == 6)
				{
					if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					{
						TASK::CLEAR_PED_TASKS(pedLocal_52);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
						TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_53, false), 10000, 0, 2);
						TASK::TASK_PLAY_ANIM(0, sLocal_256, animationName, 8f, -4f, -1, 0, 0, false, false, false);
						TASK::TASK_PLAY_ANIM(0, sLocal_256, animationName2, 16f, -8f, -1, 1, 0, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_71);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
						iLocal_48 = 1;
					}
				}
				break;
		
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_52, sLocal_256, animationName2, 3))
					if (!PED::IS_PED_INJURED(pedLocal_53))
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							if (_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PRAD1", 4, iLocal_252, 0, 0))
								iLocal_48 = 2;
					else if (func_10())
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							if (_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PRAD2", 4, iLocal_252, 0, 0))
								iLocal_48 = 2;
				break;
		
			case 2:
				if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
				{
					if (func_10())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_55, false))
						{
							VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(veLocal_55, false);
							VEHICLE::SET_VEHICLE_SIREN(veLocal_55, true);
						}
					
						TASK::CLEAR_PED_TASKS(pedLocal_52);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
						TASK::TASK_PLAY_ANIM(0, sLocal_256, animationName3, 8f, -1.5f, -1, 0, 0, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_71);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_52, false, false);
						func_8();
						iLocal_48 = 3;
					}
				}
				break;
		
			case 3:
				if (!bLocal_72)
					func_7();
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_53) || !ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53))
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PWTF", 4, iLocal_252, 0, 0);
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_52, 35f, 35f, 35f, false, true, 0))
				{
					PED::SET_IK_TARGET(pedLocal_52, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
					PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, pedLocal_52, 31086, 0f, 0f, 0f, 0, -1, -1);
				
					if (SYSTEM::TIMERB() > iLocal_242 || bLocal_260)
					{
						if (iLocal_47 == 3 || iLocal_47 == 0)
						{
							if (!PED::IS_PED_INJURED(pedLocal_53))
							{
								if (iLocal_242 == 8000 || bLocal_260)
								{
									if (bLocal_259)
										func_6();
									else
										func_4();
								}
								else if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									TASK::TASK_LOOK_AT_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), 500, SLF_WHILE_NOT_IN_FOV, 2);
									_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PLEAVE", 4, iLocal_252, 0, 0);
									iLocal_242 = 8000;
								}
							}
							else if (iLocal_242 == 8000)
							{
								if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PRA2", 4, iLocal_252, 0, 0);
									iLocal_242 = 20000;
								}
							}
							else if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							{
								_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PRA2", 4, iLocal_252, 0, 0);
								iLocal_242 = 8000;
							}
						
							SYSTEM::SETTIMERB(0);
						}
						else
						{
							if (PED::IS_PED_INJURED(pedLocal_53))
							{
								if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PRA2", 4, iLocal_252, 0, 0);
									iLocal_242 = 30000;
								}
							}
							else if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							{
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), 6000, SLF_WHILE_NOT_IN_FOV, 2);
								_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PLEAVE", 4, iLocal_252, 0, 0);
								iLocal_242 = MISC::GET_RANDOM_INT_IN_RANGE(8, 22);
								iLocal_242 = iLocal_242 * 30000;
							}
						
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			
				if (iLocal_50 != 8)
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_55, false))
						if (!PED::IS_PED_INJURED(pedLocal_53))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_53, veLocal_55, false))
								func_78();
					else
						func_78();
				break;
		}
	}

	return;
}

void func_4() // Position - 0x1056 (4182)
{
	if (!bLocal_260)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				sLocal_258 = "idle_a";
				break;
		
			case 1:
				sLocal_258 = "idle_b";
				break;
		
			case 2:
				sLocal_258 = "idle_c";
				break;
		}
	
		TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
		TASK::TASK_PLAY_ANIM(0, sLocal_257, "enter", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_257, sLocal_258, 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_257, "exit", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_71);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
		bLocal_260 = true;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_53, sLocal_257, "enter", 3))
	{
		if (func_5())
			_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PRAND", 4, iLocal_252, 0, 0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_53, sLocal_257, "exit", 3))
	{
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_53, sLocal_257, sLocal_258, 3))
	{
		_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_270, 4, iLocal_252, 0, 0);
	}
	else
	{
		func_8();
	}

	return;
}

BOOL func_5() // Position - 0x119B (4507)
{
	if (MISC::GET_GAME_TIMER() > iLocal_262 + 6000)
	{
		iLocal_262 = MISC::GET_GAME_TIMER();
		return true;
	}

	return false;
}

void func_6() // Position - 0x11BC (4540)
{
	if (!bLocal_260)
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
		TASK::TASK_PLAY_ANIM(0, sLocal_256, "radio_enter", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_256, "radio_chatter", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_256, "radio_exit", 8f, -1.5f, -1, 0, 0, false, false, false);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, pedLocal_53, -1, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_71);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
		bLocal_260 = true;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_52, sLocal_256, "radio_chatter", 3))
	{
		if (func_5())
			_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PRAD3", 4, iLocal_252, 0, 0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_52, sLocal_256, "radio_exit", 3))
	{
		bLocal_261 = false;
		func_8();
	}

	return;
}

void func_7() // Position - 0x1290 (4752)
{
	switch (iLocal_49)
	{
		case 0:
			if (!bLocal_72)
			{
				if (iLocal_47 == 3)
					iLocal_49 = 1;
				else if (iLocal_47 == 0)
					iLocal_49 = 1;
			
				ENTITY::IS_ENTITY_DEAD(pedLocal_52, false);
				ENTITY::IS_ENTITY_DEAD(pedLocal_53, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_52) && ENTITY::DOES_ENTITY_EXIST(pedLocal_53))
					TASK::TASK_GOTO_ENTITY_OFFSET_XY(pedLocal_52, pedLocal_53, -1, 3f, 0f, 0f, 1f, 0);
			
				SYSTEM::SETTIMERB(0);
			}
			break;
	
		case 1:
			if (HUD::DOES_BLIP_EXIST(blLocal_56))
				HUD::REMOVE_BLIP(&blLocal_56);
		
			iLocal_49 = 2;
			iLocal_242 = 8000;
			iLocal_289 = MISC::GET_GAME_TIMER();
			break;
	
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_55, false))
			{
				if (MISC::GET_GAME_TIMER() - iLocal_289 > 20000)
				{
					if (!PED::IS_PED_INJURED(pedLocal_54))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_54, SCRIPT_TASK_VEHICLE_MISSION) == 7)
						{
							TASK::TASK_ENTER_VEHICLE(pedLocal_52, veLocal_55, -1, 0, 1f, 1, 0, 0);
							iLocal_49 = 3;
						}
					}
				}
			}
			break;
	
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_55, false))
			{
				if (!PED::IS_PED_INJURED(pedLocal_54))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_52, veLocal_55))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_54, veLocal_55, 10f, 786603);
						PED::SET_PED_KEEP_TASK(pedLocal_54, true);
						func_184();
					}
				}
			}
			break;
	}

	return;
}

void func_8() // Position - 0x13B0 (5040)
{
	bLocal_259 = _GET_RANDOM_BOOL();
	bLocal_259 = bLocal_261;
	iLocal_242 = 20000;
	bLocal_260 = false;
	return;
}

BOOL _GET_RANDOM_BOOL() // Position - 0x13CE (5070)
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return 1;

	return 0;
}

BOOL func_10() // Position - 0x13EC (5100)
{
	Vector3 entityCoords;
	float dx;
	Vector3 vector;
	var outVec1;
	Hash model;

	model = joaat("pranger");

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_55, false))
		return true;

	STREAMING::REQUEST_MODEL(model);

	if (STREAMING::HAS_MODEL_LOADED(model))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(pedLocal_52, false), 1, &entityCoords, 1, 1077936128, 0))
		{
			if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&entityCoords, &vector, &outVec1, 0f, 180f, 50f, 1, 1, 1))
			{
				veLocal_55 = VEHICLE::CREATE_VEHICLE(model, vector, 0, true, true, false);
				pedLocal_54 = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_55, PED_TYPE_COP, joaat("S_M_Y_Ranger_01"), -1, true, true);
				PED::SET_PED_CONFIG_FLAG(pedLocal_54, 294, true);
			
				if (!WEAPON::HAS_PED_GOT_WEAPON(pedLocal_54, joaat("WEAPON_PISTOL"), false))
					WEAPON::GIVE_WEAPON_TO_PED(pedLocal_54, joaat("WEAPON_PISTOL"), -1, false, true);
			
				WEAPON::SET_CURRENT_PED_WEAPON(pedLocal_54, joaat("WEAPON_PISTOL"), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_54, hLocal_69);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_55, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_54, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_55, 1084227584);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(veLocal_55, true);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_55, true);
				entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_55, true) };
				dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - entityCoords };
				ENTITY::SET_ENTITY_HEADING(veLocal_55, MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1));
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(pedLocal_52, false), 1, &entityCoords, 1, 1077936128, 0);
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, 2528.5625f, 2639.1147f, 36.9446f, true) < 75f)
					entityCoords = { 2473.6006f, 2496.7646f, 40.87f };
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(2538.7097f, 2592.0073f, 36.9446f, entityCoords, true) < 16f)
					entityCoords = { 2473.6006f, 2496.7646f, 40.87f };
			
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_54, veLocal_55, entityCoords, 4, 7f, 786471, 5f, -1f, true);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(veLocal_55, 4f);
				VEHICLE::SET_VEHICLE_SIREN(veLocal_55, true);
				bLocal_75 = true;
				VEHICLE::SET_RANDOM_TRAINS(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_11() // Position - 0x15AE (5550)
{
	if (iLocal_47 != 3)
		iLocal_241 = 3;

	switch (iLocal_241)
	{
		case 0:
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_52, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || MISC::GET_GAME_TIMER() > iLocal_244 + 15000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_52, 25f, 25f, 25f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(pedLocal_52))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_52);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
					
						if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
							TASK::TASK_GO_TO_ENTITY(0, pedLocal_53, -1, 3.5f, 2f, 1073741824, 0);
					
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_71);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
						iLocal_241 = 1;
					}
				}
				else
				{
					iLocal_241 = 3;
				}
			}
			break;
	
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_52, SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
			{
				if (TASK::GET_SEQUENCE_PROGRESS(pedLocal_52) > 0)
				{
					if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					{
						if (iLocal_243 < 2)
						{
							_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PTHANK", 4, iLocal_252, 0, 0);
						
							if (HUD::DOES_BLIP_EXIST(blLocal_56))
								HUD::SET_BLIP_AS_FRIENDLY(blLocal_56, true);
						}
						else
						{
							_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PHELP", 4, iLocal_252, 0, 0);
						}
					
						iLocal_241 = 2;
					}
				}
			}
			else if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				if (iLocal_243 < 2)
				{
					_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PTHANK", 4, iLocal_252, 0, 0);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_56))
						HUD::SET_BLIP_AS_FRIENDLY(blLocal_56, true);
				}
				else
				{
					_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PHELP", 4, iLocal_252, 0, 0);
				}
			
				iLocal_241 = 2;
			}
			break;
	
		case 2:
			if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
				iLocal_241 = 3;
		
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), 100);
			break;
	
		case 3:
			return true;
	}

	return false;
}

void func_12() // Position - 0x1753 (5971)
{
	BOOL hasEntityBeenDamagedByEntity;
	BOOL flag;

	hasEntityBeenDamagedByEntity = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), true);
	flag = func_63();
	flag;

	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (!hasEntityBeenDamagedByEntity)
		{
			if (!flag)
			{
				if (iLocal_47 == 2 || bLocal_72 == true)
				{
					switch (iLocal_245)
					{
						case 8:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							HUD::SET_BLIP_AS_FRIENDLY(blLocal_57, true);
						
							if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false) && ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_53, sLocal_256, "kneeling_arrest_idle", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
								TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_71);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
								iLocal_245 = 9;
							}
							else
							{
								iLocal_245 = 3;
							}
							break;
					
						case 9:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
								iLocal_245 = 0;
							break;
					
						case 0:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, false, true, 0))
							{
								AUDIO::STOP_PED_SPEAKING(pedLocal_53, true);
								iLocal_245 = 3;
							}
							break;
					
						case 1:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_53, ENTITY::GET_ENTITY_COORDS(pedLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								iLocal_245 = 2;
							}
							else
							{
								TASK::CLEAR_PED_TASKS(pedLocal_53);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
								TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_52, false), 1000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_52, false), 2f, -1, 3f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_71);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
								iLocal_245 = 2;
							}
							break;
					
						case 2:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_53, ENTITY::GET_ENTITY_COORDS(pedLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || _CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_269, 4, iLocal_252, 0, 0))
									iLocal_245 = 6;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
								TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_52, false), 1000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_52, false), 2f, -1, 3f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_71);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
							}
							break;
					
						case 3:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), 5f, 5f, 3f, false, true, 0))
							{
								iLocal_245 = 4;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, false, true, 0))
							{
								if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									TASK::CLEAR_PED_TASKS(pedLocal_53);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 8f, 1073741824, 1073741824, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_71);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
									iLocal_245 = 4;
								}
							}
							else
							{
								iLocal_245 = 6;
							}
							break;
					
						case 4:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), 9f, 9f, 9f, false, true, 0))
							{
								iLocal_290 = MISC::GET_GAME_TIMER();
								iLocal_245 = 7;
							}
							break;
					
						case 7:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (!PED::IS_PED_HEADTRACKING_PED(pedLocal_53, PLAYER::PLAYER_PED_ID()))
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), -1, SLF_WIDEST_YAW_LIMIT | 2048, 2);
						
							if (!PED::IS_PED_FACING_PED(pedLocal_53, PLAYER::PLAYER_PED_ID(), 30f))
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), -1);
						
							if (MISC::GET_GAME_TIMER() - iLocal_290 > 2000)
								iLocal_245 = 5;
							break;
					
						case 5:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_53, sLocal_256, "Thanks_Male_05", 3) || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
							{
								if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									if (iLocal_243 < 2)
									{
										_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_264, 4, iLocal_252, 0, 0);
										TASK::TASK_PLAY_ANIM(pedLocal_53, sLocal_256, "Thanks_Male_05", 16f, -16f, -1, 16, 0, false, false, false);
									}
									else
									{
										_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_268, 4, iLocal_252, 0, 0);
									}
								
									func_15(_GET_CURRENT_PLAYER_CHARACTER(), 1, 250, false, false);
									TASK::TASK_CLEAR_LOOK_AT(pedLocal_53);
									iLocal_245 = 6;
								}
							}
							break;
					
						case 6:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							{
								TASK::TASK_SMART_FLEE_PED(pedLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								func_184();
							}
							break;
					}
				}
			}
			else
			{
				if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_271, 4, iLocal_252, 0, 0);
			
				TASK::TASK_SMART_FLEE_PED(pedLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				func_184();
			}
		}
		else
		{
			func_13();
			TASK::TASK_SMART_FLEE_PED(pedLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
		
			if (hasEntityBeenDamagedByEntity == true)
				iLocal_47 = 1;
		
			if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
				_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_268, 4, iLocal_252, 0, 0);
		
			func_184();
		}
	}

	return;
}

void func_13() // Position - 0x1C96 (7318)
{
	Global_21308 = 0;
	func_14();
	return;
}

void func_14() // Position - 0x1CA6 (7334)
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23453 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22442 = 6;
		return;
	}

	return;
}

void func_15(eCharacter echParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1CCA (7370)
{
	int outValue;
	Hash statHash;

	if (func_56(echParam0) == 3)
		return;

	if (func_56(echParam0) == 4)
		return;

	func_16(func_56(echParam0), 1, iParam1, iParam2, false);

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

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x1D9C (7580)
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_55();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_54(99, 1);
					func_53(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_53(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_53(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_37(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_34(5))
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
							func_53(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_53(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_53(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_34(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_53(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_53(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_53(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_53(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_53(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_53(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_53(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_53(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_53(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_53(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_53(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_53(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_53(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_53(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_53(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_34(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_53(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_53(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_53(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_53(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_53(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_53(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_33(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_54(95, iParam3);
					break;
			
				case 1:
					func_54(97, iParam3);
					break;
			
				case 2:
					func_54(96, iParam3);
					break;
			}
		
			func_54(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_19(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_19(num2);
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
					func_53(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_53(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_53(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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

	func_18(iParam0);

	if (Global_44199 == 15)
		func_17(false);

	return 1;
}

void func_17(BOOL bParam0) // Position - 0x239B (9115)
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

void func_18(int iParam0) // Position - 0x261D (9757)
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

void func_19(int iParam0) // Position - 0x2677 (9847)
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
		func_28(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_28(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_28(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_28(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_28(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_28(8277, 0, -1, true);
		return;
	}

	if (func_27(iParam0))
	{
		func_28(func_26(iParam0), 0, -1, true);
		return;
	}

	if (func_25(iParam0))
	{
		num = _MPPLY_STAT_GET_INT(func_24(iParam0));
		_MPPLY_STAT_SET_INT(func_24(iParam0), num - 1);
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
	else if (IS_BIT_SET(Global_114162.f_20568.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_21() /*5571*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_114162.f_20568.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_21() /*5571*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*You have redeemed your promotion for ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_20(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_20(int iParam0) // Position - 0x2843 (10307)
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
			if (func_27(iParam0))
				return "HSW_COUP";
		
			if (func_25(iParam0))
				return "HSWU_COUP";
			break;
	}

	return "";
}

int func_21() // Position - 0x2976 (10614)
{
	int num;

	num = 0;
	return num;
}

void _MPPLY_STAT_SET_INT(Hash hParam0, int iParam1) // Position - 0x2983 (10627)
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, true);

	return;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x299F (10655)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_24(int iParam0) // Position - 0x29BD (10685)
{
	switch (iParam0)
	{
		case 38:
			return joaat("MPPLY_DISCOUNT_HSW_UPGRADE");
	
		default:
		
	}

	return joaat("MPPLY_DISCOUNT_HSW_UPGRADE");
}

BOOL func_25(int iParam0) // Position - 0x29DF (10719)
{
	switch (iParam0)
	{
		case 38:
			return true;
	}

	return false;
}

int func_26(int iParam0) // Position - 0x29FC (10748)
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

BOOL func_27(int iParam0) // Position - 0x2B01 (11009)
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

void func_28(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2B90 (11152)
{
	Hash statName;

	if (iParam0 != 17239)
	{
		statName = func_29(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_29(int iParam0, int iParam1) // Position - 0x2BBE (11198)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_30(iParam1));
}

int func_30(int iParam0) // Position - 0x2BD3 (11219)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_31();
	
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

int func_31() // Position - 0x2C07 (11271)
{
	return Global_1574926;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x2C13 (11283)
{
	if (iParam2 == -1)
		iParam2 = func_31();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_33(int iParam0) // Position - 0x2C31 (11313)
{
	func_54(93, iParam0);
	func_54(29, iParam0);
	func_54(30, iParam0);
	return;
}

BOOL func_34(int iParam0) // Position - 0x2C51 (11345)
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
		num = func_35(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_35(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_35(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_35(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_35(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_35(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (func_27(iParam0))
	{
		cloudTimeAsInt7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num7 = func_35(func_26(iParam0), -1);
	
		if (num7 == 0 || cloudTimeAsInt7 >= num7)
			return false;
	
		return true;
	}

	if (func_25(iParam0))
	{
		num8 = _MPPLY_STAT_GET_INT(func_24(iParam0));
	
		if (num8 <= 0)
			return false;
	
		return true;
	}

	if (iParam0 == 39)
		return _STAT_GET_PACKED_BOOL(7332, -1);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_114162.f_20568.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_21() /*5571*/].f_681.f_10, iParam0);
}

int func_35(int iParam0, int iParam1) // Position - 0x2E5C (11868)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 17239)
	{
		statHash = func_29(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x2E8B (11915)
{
	if (iParam1 == -1)
		iParam1 = func_31();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_37(BOOL bParam0) // Position - 0x2EA7 (11943)
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
		func_52(27, value);
	}

	if (value < 200000000)
		return 0;

	func_38(27, 1);
	return 1;
}

int func_38(int iParam0, int iParam1) // Position - 0x2F5E (12126)
{
	if (iParam0 >= 78)
		return 0;

	return func_39(iParam0, iParam1);
}

int func_39(int iParam0, int iParam1) // Position - 0x2F79 (12153)
{
	if (func_51(14) && !func_50(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_33356 != 0 && !Global_79564)
		return 0;

	if (func_49(&Global_4546323))
	{
		if (func_47(&Global_4546323, iParam0))
			return 0;
	
		if (func_40(&Global_4546323, iParam0))
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

BOOL func_40(var uParam0, int iParam1) // Position - 0x3016 (12310)
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_51(14) && !func_50(iParam1))
		return false;

	if (func_47(uParam0, iParam1))
		return false;

	if (func_46(uParam0) < 0f)
		func_45(uParam0, 0);

	func_43(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_41(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_41(var uParam0, int iParam1) // Position - 0x30C7 (12487)
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_51(14) && !func_50(iParam1))
		return 0;

	if (func_47(uParam0, iParam1))
		return 0;

	if (func_46(uParam0) < 0f)
		func_45(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_42(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_42(var uParam0, int iParam1) // Position - 0x3142 (12610)
{
	return uParam0->[iParam1] == 78;
}

void func_43(var uParam0) // Position - 0x3153 (12627)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_44(uParam0, i);
	}

	func_45(uParam0, Global_4546322 - 0.5f);
	return;
}

void func_44(var uParam0, int iParam1) // Position - 0x3187 (12679)
{
	uParam0->[iParam1] = 78;
	return;
}

void func_45(var uParam0, int iParam1) // Position - 0x3197 (12695)
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_46(var uParam0) // Position - 0x31B4 (12724)
{
	return uParam0->f_80;
}

BOOL func_47(var uParam0, int iParam1) // Position - 0x31C0 (12736)
{
	return func_48(uParam0, iParam1) != -1;
}

int func_48(var uParam0, int iParam1) // Position - 0x31D2 (12754)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_49(var uParam0) // Position - 0x31FF (12799)
{
	return uParam0->f_79 == 1;
}

BOOL func_50(int iParam0) // Position - 0x320D (12813)
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

BOOL func_51(int iParam0) // Position - 0x325D (12893)
{
	return Global_44199 == iParam0;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0x326B (12907)
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

void func_53(Hash hParam0, int iParam1) // Position - 0x32BC (12988)
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_54(int iParam0, int iParam1) // Position - 0x32DF (13023)
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

void func_55() // Position - 0x333C (13116)
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

int func_56(eCharacter echParam0) // Position - 0x33B1 (13233)
{
	return Global_2201[echParam0 /*29*/].f_17;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x33C2 (13250)
{
	func_58();
	return Global_114162.f_2367.f_539.f_4321;
}

void func_58() // Position - 0x33DB (13275)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114162.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_59(character) && !func_51(14) || Global_113110)
			{
				if (Global_114162.f_2367.f_539.f_4321 != character && func_59(Global_114162.f_2367.f_539.f_4321))
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

BOOL func_59(eCharacter echParam0) // Position - 0x34D8 (13528)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x34E4 (13540)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x3521 (13601)
{
	if (func_59(character))
		return func_62(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_62(eCharacter echParam0) // Position - 0x3546 (13638)
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_63() // Position - 0x3555 (13653)
{
	float xSize;
	Ped randomPedAtCoord;
	Vehicle randomVehicleInSphere;

	xSize = 50f;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_55, false))
		if (ENTITY::IS_ENTITY_AT_ENTITY(veLocal_55, pedLocal_53, xSize, xSize, xSize, false, true, 0))
			return 1;

	randomPedAtCoord = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(pedLocal_53, false), xSize, xSize, xSize, -1);

	if (!PED::IS_PED_INJURED(randomPedAtCoord))
		if (ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == joaat("S_F_Y_Cop_01") || ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == joaat("S_M_Y_Cop_01"))
			return 1;

	randomPedAtCoord = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), xSize, xSize, xSize, -1);

	if (!PED::IS_PED_INJURED(randomPedAtCoord))
		if (ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == joaat("S_F_Y_Cop_01") || ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == joaat("S_M_Y_Cop_01"))
			return 1;

	randomVehicleInSphere = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(pedLocal_53, false), xSize, 0, 1024);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(randomVehicleInSphere, false))
		return 1;

	randomVehicleInSphere = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), xSize, 0, 1024);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(randomVehicleInSphere, false))
		return 1;

	return 0;
}

void func_64() // Position - 0x3653 (13907)
{
	BOOL isEntityTouchingEntity;
	BOOL hasEntityBeenDamagedByEntity;
	int num;

	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		isEntityTouchingEntity = ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53);
		hasEntityBeenDamagedByEntity = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), true);
	
		if (hasEntityBeenDamagedByEntity || func_77() || func_75() || isEntityTouchingEntity)
		{
			func_74();
		
			if (bLocal_72)
			{
				if (isEntityTouchingEntity || hasEntityBeenDamagedByEntity && !PED::IS_PED_RAGDOLL(pedLocal_53) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_53);
					PED::SET_PED_TO_RAGDOLL(pedLocal_53, 500, 2000, 0, false, false, false);
					TASK::TASK_COWER(pedLocal_53, -1);
					PED::SET_PED_KEEP_TASK(pedLocal_53, true);
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false) && !PED::IS_PED_RAGDOLL(pedLocal_53))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_53);
					TASK::TASK_COWER(pedLocal_53, -1);
					PED::SET_PED_KEEP_TASK(pedLocal_53, true);
				}
			
				func_70(0);
			
				if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					if (!PED::IS_PED_INJURED(pedLocal_52) && iLocal_284 == 0)
						if (_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PWTF", 4, iLocal_252, 0, 0))
							iLocal_284 = 1;
			
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_57))
		{
			HUD::REMOVE_BLIP(&blLocal_57);
			func_69(&uLocal_76, 2);
		}
	
		func_74();
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), true))
		{
			if (bLocal_72)
			{
				func_70(1);
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}

	if (!PED::IS_PED_INJURED(pedLocal_52))
	{
		if (bLocal_59)
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				func_184();
	
		PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0);
		num = 0;
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_54))
		{
			if (!PED::IS_PED_INJURED(pedLocal_54))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(pedLocal_54) < 190 || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_RAGDOLL(pedLocal_54))
					num = 1;
			
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_55) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_55, PLAYER::PLAYER_PED_ID(), true))
					num = 1;
			}
			else
			{
				num = 1;
			}
		}
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(pedLocal_52) < 190 || func_68() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || func_67() || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_RAGDOLL(pedLocal_52) || num == 1)
		{
			func_70(1);
		
			if (iLocal_47 == 3 || iLocal_47 == 1)
				iLocal_47 = 1;
			else
				iLocal_47 = 2;
		}
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), true))
		{
			if (bLocal_285 == false)
			{
				bLocal_285 = true;
				iLocal_288 = MISC::GET_GAME_TIMER();
			}
		
			if (iLocal_47 == 3 || iLocal_47 == 1)
				iLocal_47 = 1;
			else
				iLocal_47 = 2;
		}
	
		if (!PED::IS_PED_INJURED(pedLocal_53))
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_53);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_56))
		{
			HUD::REMOVE_BLIP(&blLocal_56);
			func_69(&uLocal_76, 1);
		}
	}

	if (bLocal_285)
	{
		if (MISC::GET_GAME_TIMER() - iLocal_288 > 5000)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			bLocal_285 = false;
		}
	}

	if (!PED::IS_PED_INJURED(pedLocal_52) && !PED::IS_PED_INJURED(pedLocal_53))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), true) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), true))
		{
			if (ENTITY::GET_ENTITY_HEALTH(pedLocal_52) < 190 && ENTITY::GET_ENTITY_HEALTH(pedLocal_53) < 190)
			{
				func_74();
				func_70(1);
				iLocal_47 = 1;
			}
		}
	
		if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, pedLocal_52, 110f, 110f, 40f, false, true, 0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_52, 20f, 20f, 20f, false, true, 0))
			{
				func_65();
				SYSTEM::WAIT(0);
				_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PORUN", 4, iLocal_252, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 40f, 40f, 40f, false, true, 0))
			{
				func_65();
				SYSTEM::WAIT(0);
				_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_265, 4, iLocal_252, 0, 0);
			}
		
			func_184();
		}
	}

	if (PED::IS_PED_INJURED(pedLocal_52) && PED::IS_PED_INJURED(pedLocal_53))
		func_184();

	if (PED::IS_PED_INJURED(pedLocal_53))
		if (!PED::IS_PED_INJURED(pedLocal_52))
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_52, 100f, 100f, 40f, false, true, 0))
				func_184();

	return;
}

void func_65() // Position - 0x3A96 (14998)
{
	Global_21308 = 0;
	func_66();
	return;
}

void func_66() // Position - 0x3AA6 (15014)
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

BOOL func_67() // Position - 0x3AFD (15101)
{
	BOOL flag;

	flag = false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("bulldozer"))
			if (!PED::IS_PED_INJURED(pedLocal_52))
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), pedLocal_52))
					flag = true;
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_55, false))
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), veLocal_55))
				flag = true;
		else if (bLocal_75)
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_55, PLAYER::PLAYER_PED_ID(), true))
				flag = true;
	}

	flag;
	return flag;
}

BOOL func_68() // Position - 0x3B87 (15239)
{
	Vector3 vector;
	Vector3 vector2;
	int weaponHash;

	vector = { 3f, 3f, 3f };
	vector2 = { -3f, -3f, -3f };

	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_52, 31086, 0f, 0f, 0f), 0.5f, true))
		if (PED::IS_PED_INJURED(pedLocal_53))
			return true;
		else if (!MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_53, 31086, 0f, 0f, 0f), 2f, true))
			return true;

	if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(pedLocal_52, 31086, 0f, 0f, 0f), 3f))
		return true;

	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_52, 5f, 5f, 5f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(pedLocal_52))
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_52) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_52))
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true))
					if (weaponHash != joaat("WEAPON_UNARMED"))
						return true;
	
		if (!PED::IS_PED_INJURED(pedLocal_53))
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_53) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_53))
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true))
					if (weaponHash != joaat("WEAPON_UNARMED"))
						if (bLocal_72)
							return true;
	}

	vector = { vector + PED::GET_PED_BONE_COORDS(pedLocal_52, 31086, 0f, 0f, 0f) };
	vector2 = { vector2 + PED::GET_PED_BONE_COORDS(pedLocal_52, 31086, 0f, 0f, 0f) };

	if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_GRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_STICKYBOMB"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("VEHICLE_WEAPON_TANK"), true))
		return true;

	return false;
}

void func_69(var uParam0, int iParam1) // Position - 0x3D2E (15662)
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_70(int iParam0) // Position - 0x3D4B (15691)
{
	if (!PED::IS_PED_INJURED(pedLocal_52))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_52);
	
		if (!bLocal_59)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PED::SET_PED_CAN_BE_TARGETTED(pedLocal_52, true);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_56))
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_56, false);
		
			if (iParam0 == 1)
			{
				if (!PED::IS_PED_INJURED(pedLocal_53))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_SMART_FLEE_PED) == 7)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_53, sLocal_256, "kneeling_arrest_idle", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
							TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, pedLocal_52, 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_71);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
							PED::FORCE_PED_MOTION_STATE(pedLocal_53, joaat("MotionState_Run"), false, 0, false);
							PED::SET_PED_KEEP_TASK(pedLocal_53, true);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(pedLocal_53);
							TASK::TASK_SMART_FLEE_PED(pedLocal_53, pedLocal_52, 150f, -1, false, false);
						}
					}
				}
			
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false) && !PED::IS_PED_INJURED(pedLocal_53) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 20f)
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_271, 4, iLocal_252, 0, 0);
			}
		
			TASK::CLEAR_PED_TASKS(pedLocal_52);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_71);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
			PED::SET_PED_KEEP_TASK(pedLocal_52, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_52, true, 0);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_55, false))
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_55, 1);
		
			func_72();
			SYSTEM::WAIT(0);
			SYSTEM::WAIT(0);
		
			if (!PED::IS_PED_INJURED(pedLocal_52))
				!PED::IS_PED_RAGDOLL(pedLocal_52);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_54))
				func_71();
		
			bLocal_59 = true;
		}
	}

	return;
}

void func_71() // Position - 0x3F22 (16162)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_54))
	{
		if (!PED::IS_PED_INJURED(pedLocal_54))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_54, iLocal_71);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
			PED::SET_PED_KEEP_TASK(pedLocal_54, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_54, true, 0);
		}
	}

	return;
}

void func_72() // Position - 0x3F80 (16256)
{
	Global_21308 = 0;
	func_73();
	return;
}

void func_73() // Position - 0x3F90 (16272)
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

void func_74() // Position - 0x3FB1 (16305)
{
	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_57))
			HUD::SET_BLIP_AS_FRIENDLY(blLocal_57, false);
	
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_53);
	}

	return;
}

BOOL func_75() // Position - 0x3FD9 (16345)
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_52, false))
		if (bLocal_72)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_52))
				if (MISC::GET_GAME_TIMER() - iLocal_274 > 1000)
					func_76();

	if (iLocal_273 >= 3)
		return true;

	return false;
}

void func_76() // Position - 0x401D (16413)
{
	if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
	{
		if (iLocal_273 < 3)
		{
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), 6000, SLF_WHILE_NOT_IN_FOV, 2);
			_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PLEAVE", 4, iLocal_252, 0, 0);
		}
	}

	iLocal_273 = iLocal_273 + 1;
	iLocal_274 = MISC::GET_GAME_TIMER();
	return;
}

BOOL func_77() // Position - 0x4066 (16486)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), pedLocal_53))
			if (bLocal_72)
				if (iLocal_50 != 7)
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), fLocal_66) > 2.5f)
						return 1;
				else
					return 1;
			else
				return 1;

	if (bLocal_72)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53))
			if (PED::IS_PED_RAGDOLL(pedLocal_53))
				if (iLocal_50 != 7)
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), fLocal_66) > 2.5f)
						return 1;
				else
					return 1;
			else if (bLocal_72)
				if (MISC::GET_GAME_TIMER() - iLocal_274 > 1000)
					func_76();

	if (iLocal_273 >= 3)
		return 1;

	return 0;
}

void func_78() // Position - 0x412B (16683)
{
	if (!bLocal_73)
	{
		switch (iLocal_243)
		{
			case 0:
				if (!bLocal_59)
				{
					if (SYSTEM::TIMERA() > 80000)
					{
						if (!PED::IS_PED_INJURED(pedLocal_52))
						{
							if (!PED::IS_PED_INJURED(pedLocal_53))
							{
								func_65();
								SYSTEM::WAIT(0);
								_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PRAD3", 4, iLocal_252, 0, 0);
							}
						}
					
						iLocal_243 = 1;
					}
				}
				break;
		
			case 1:
				if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
				{
					if (!PED::IS_PED_INJURED(pedLocal_53))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_53, sLocal_256, "kneeling_arrest_idle", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
							TASK::TASK_PLAY_ANIM(0, sLocal_256, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, pedLocal_52, 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_71);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
							PED::FORCE_PED_MOTION_STATE(pedLocal_53, joaat("MotionState_Run"), false, 0, false);
							PED::SET_PED_KEEP_TASK(pedLocal_53, true);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(pedLocal_53, pedLocal_52, 150f, -1, false, false);
						}
					
						PED::SET_PED_KEEP_TASK(pedLocal_53, true);
						ENTITY::SET_ENTITY_HEALTH(pedLocal_53, 101, 0, 0);
						_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_267, 4, iLocal_252, 0, 0);
						iLocal_243 = 2;
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_52))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_52);
						iLocal_243 = 2;
					}
				}
				break;
		
			case 2:
				if (!PED::IS_PED_INJURED(pedLocal_52))
				{
					if (!PED::IS_PED_INJURED(pedLocal_53))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_70, hLocal_69);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_69, hLocal_70);
						TASK::TASK_COMBAT_PED(pedLocal_52, pedLocal_53, 0, 16);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(pedLocal_52, 1193033728, 0);
						func_184();
					}
				
					PED::SET_PED_KEEP_TASK(pedLocal_52, true);
				}
			
				bLocal_73 = true;
				break;
		}
	}

	return;
}

int func_79(Ped pedParam0, Vehicle veParam1) // Position - 0x42B8 (17080)
{
	var entityCoords;
	var offsetFromEntityInWorldCoords;
	var offsetFromEntityInWorldCoords2;
	Vector3 vector;
	Vector3 vector2;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
		else
			return -1;
	
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam1, 1f, -0.5f, 0f) };
		vector = { offsetFromEntityInWorldCoords - entityCoords };
		offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam1, -1f, -0.5f, 0f) };
		vector2 = { offsetFromEntityInWorldCoords2 - entityCoords };
	
		if (SYSTEM::VMAG(vector) < SYSTEM::VMAG(vector2))
			return 2;
		else
			return 1;
	}

	return -1;
}

void func_80() // Position - 0x4345 (17221)
{
	if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
	{
		if (!bLocal_291)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_52, 30f, 30f, 30f, false, true, 0))
			{
				_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PSTOP", 4, iLocal_252, 0, 0);
				bLocal_291 = true;
				SYSTEM::SETTIMERB(0);
			}
		}
		else if (SYSTEM::TIMERB() > 8000)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 99) > 50)
				_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", "REARR_PRAND", 4, iLocal_252, 0, 0);
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 10f, 10f, 10f, false, true, 0))
				_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_266, 4, iLocal_252, 0, 0);
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_52, 10f, 10f, 10f, false, true, 0))
				_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_266, 4, iLocal_252, 0, 0);
			else
				_CONVERSATION_ADD_LINE(&uLocal_76, "REARRAU", sLocal_270, 4, iLocal_252, 0, 0);
		
			SYSTEM::SETTIMERB(0);
		}
	}

	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x4445 (17477)
{
	func_95(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_82(sParam2, iParam3, false);
}

BOOL func_82(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x4493 (17555)
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
					func_66();
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
	
		if (func_94(8, -1))
			return 0;
	
		Global_22518 = { Global_22512 };
		func_93();
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
			
				if (func_91())
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
		
			if (func_90())
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
		
			func_89();
			Global_22452 = bParam2;
		}
	
		Global_22444 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22061, sParam0, 24);
		Global_21308 = 0;
		func_88();
		func_83();
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
		func_66();
	}

	return 0;
}

void func_83() // Position - 0x4761 (18273)
{
	if (!func_84())
		return;

	if (Global_22448)
	{
		TEXT_LABEL_COPY(&(Global_1973512.f_1), { Global_22061 }, 4);
		Global_1973512 = Global_8234;
		Global_1973512.f_6 = Global_22452;
	}

	return;
}

BOOL func_84() // Position - 0x4798 (18328)
{
	if (!Global_262145.f_28435)
		return false;

	if (!Global_79564)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_85(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887694[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_85(Player plParam0) // Position - 0x47FB (18427)
{
	return func_86(plParam0, 20);
}

BOOL func_86(Player plParam0, int iParam1) // Position - 0x480B (18443)
{
	return IS_BIT_SET(Global_1887694[plParam0 /*611*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x4823 (18467)
{
	return -1;
}

void func_88() // Position - 0x482C (18476)
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

void func_89() // Position - 0x485E (18526)
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

BOOL func_90() // Position - 0x48F3 (18675)
{
	if (Global_21083.f_1 == 1 || Global_21083.f_1 == 0)
		return true;

	return false;
}

BOOL func_91() // Position - 0x491A (18714)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x49B3 (18867)
{
	if (func_51(14))
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

void func_93() // Position - 0x4A55 (19029)
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

BOOL func_94(int iParam0, int iParam1) // Position - 0x4AAD (19117)
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

void func_95(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x4AE5 (19173)
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

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x4B3B (19259)
{
	if (Global_22442 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

BOOL func_97() // Position - 0x4B5D (19293)
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, pedLocal_52, 3.5f, 3.5f, 3.5f, false, true, 0) || func_100())
		if (!func_98(1063675494))
			return 1;

	return 0;
}

BOOL func_98(int iParam0) // Position - 0x4B9E (19358)
{
	var groundZ;
	var normal;

	if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), &groundZ, &normal))
		if (func_99(normal, 0f, 0f, 1f) < iParam0)
			return true;

	return false;
}

float func_99(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x4BCE (19406)
{
	return (fParam0 * fParam3) + (fParam0.f_1 * fParam3.f_1) + (fParam0.f_2 * fParam3.f_2);
}

BOOL func_100() // Position - 0x4BEF (19439)
{
	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x4BF8 (19448)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void func_102() // Position - 0x4C19 (19481)
{
	if (MISC::GET_GAME_TIMER() - iLocal_251 > 500)
	{
		if (iLocal_47 != 1 && iLocal_47 != 3 && iLocal_47 != 2)
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_57))
			{
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_57, bLocal_246);
			
				if (bLocal_246 == true)
					bLocal_246 = false;
				else
					bLocal_246 = true;
			}
		}
		else
		{
			bLocal_286 = 1;
		}
	
		if (!bLocal_59)
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_56))
			{
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_56, bLocal_247);
			
				if (bLocal_247 == true)
					bLocal_247 = false;
				else
					bLocal_247 = true;
			}
		}
		else
		{
			bLocal_286 = 1;
		}
	
		iLocal_251 = MISC::GET_GAME_TIMER();
	}

	if (!(bLocal_287 == bLocal_286))
	{
		if (bLocal_286)
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_57))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_57, true);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_56))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_56, true);
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_57))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_57, false);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_56))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_56, false);
		}
	
		bLocal_287 = bLocal_286;
	}

	return;
}

BOOL func_103(int iParam0) // Position - 0x4CFB (19707)
{
	BOOL num;
	int num2;
	Vector3 vector;

	num = 0;
	vector = { iParam0, iParam0, 50f };

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_277, uLocal_280, 194.75f, false, true, 0))
		return true;

	if (!PED::IS_PED_INJURED(pedLocal_52))
		if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), vector, false, true, 0))
			num = 1;
		else
			num2 = num2 + 1;
	else
		num2 = num2 + 1;

	if (!PED::IS_PED_INJURED(pedLocal_53))
		if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), vector, false, true, 0))
			num = 1;
		else
			num2 = num2 + 1;
	else
		num2 = num2 + 1;

	if (num2 == 2)
		num = 0;

	return num;
}

int func_104(BOOL bParam0) // Position - 0x4DA5 (19877)
{
	if (func_109())
	{
		Global_114152 = true;
		Global_114149 = MISC::GET_GAME_TIMER();
	
		if (func_108(Global_114151))
			func_105(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_108(Global_114151))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_105(int iParam0) // Position - 0x4DF8 (19960)
{
	switch (iParam0)
	{
		case 0:
			if (Global_114162.f_24999.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_107(iParam0), -1);
					Global_114162.f_24999.f_2 = Global_114162.f_24999.f_2 + 1;
					MISC::SET_BIT(&Global_114158, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_114158, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_107(iParam0), -1);
					Global_114162.f_24999.f_3 = Global_114162.f_24999.f_3 + 1;
					MISC::SET_BIT(&Global_114158, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_114158, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_107(iParam0), -1);
					Global_114162.f_24999.f_4 = Global_114162.f_24999.f_4 + 1;
					MISC::SET_BIT(&Global_114158, 2);
				}
			}
			break;
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x4ED3 (20179)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

char* func_107(int iParam0) // Position - 0x4EEA (20202)
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

BOOL func_108(int iParam0) // Position - 0x4F2E (20270)
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

BOOL func_109() // Position - 0x4F5D (20317)
{
	switch (func_110(&Global_33165, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_110(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x4F93 (20371)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99166.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_114(0))
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
			func_111(uParam0, iParam4);
	}

	return 2;
}

void func_111(var uParam0, int iParam1) // Position - 0x50CA (20682)
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

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x5119 (20761)
{
	return func_113(iParam0, Global_44199);
}

BOOL func_113(int iParam0, int iParam1) // Position - 0x512A (20778)
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

BOOL func_114(int iParam0) // Position - 0x530B (21259)
{
	if (Global_44199 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL func_115() // Position - 0x532D (21293)
{
	float xSize;

	xSize = 50f;

	if (!PED::IS_PED_INJURED(pedLocal_52))
	{
		if (!PED::IS_PED_INJURED(pedLocal_53))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_52, xSize, xSize, xSize, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, xSize, xSize, xSize, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_277, uLocal_280, 194.75f, false, true, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_57))
					blLocal_57 = func_116(pedLocal_53, false, 145);
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_56))
					blLocal_56 = func_116(pedLocal_52, false, 145);
			
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_57, false);
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_56, false);
				SYSTEM::SETTIMERA(0);
				return true;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(pedLocal_52))
				if (!HUD::DOES_BLIP_EXIST(blLocal_56))
					blLocal_56 = func_116(pedLocal_52, false, 145);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_57))
				HUD::REMOVE_BLIP(&blLocal_57);
		
			return true;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(pedLocal_53))
			if (!HUD::DOES_BLIP_EXIST(blLocal_57))
				blLocal_57 = func_116(pedLocal_53, false, 145);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_56))
			HUD::REMOVE_BLIP(&blLocal_56);
	
		return true;
	}

	return false;
}

Blip func_116(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x544B (21579)
{
	Blip blip;

	blip = func_117(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2201[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2201[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_117(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5495 (21653)
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(pedParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

var func_118(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5539 (21817)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_119() // Position - 0x5550 (21840)
{
	Hash model;
	Hash model2;
	Vector3 vector;
	Vector3 vector2;
	float heading;
	float heading2;

	model = joaat("S_M_Y_Ranger_01");

	if (iLocal_51 == 1)
	{
		vector = { 2429.822f, 4952.938f, 44.8892f };
		heading = 218.3434f;
		vector2 = { 2431.685f, 4945.31f, 44.6996f };
		heading2 = 220.0087f;
		uLocal_277 = { 2378.2844f, 4863.027f, 32.508835f };
		uLocal_280 = { 2512.7974f, 4998.5864f, 90.12283f };
		sLocal_254 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_263 = "arrestcriminal";
		sLocal_264 = "REARR_CTHANK";
		sLocal_265 = "REARR_CORUN";
		sLocal_266 = "REARR_CWTF";
		sLocal_267 = "REARR_CTURN";
		sLocal_268 = "REARR_CHELP";
		sLocal_269 = "REARR_HATE";
		sLocal_270 = "REARR_CRAND";
		sLocal_271 = "REARR_CRAND";
		sLocal_272 = "REARR_CRAND";
		model2 = joaat("A_M_M_Hillbilly_02");
	}
	else if (iLocal_51 == 2)
	{
		vector = { 2592.637f, 2540.0503f, 30.4162f };
		heading = 90.5639f;
		vector2 = { 2586.0051f, 2541.4102f, 31.0379f };
		heading2 = 75.5943f;
		uLocal_277 = { 2543.1345f, 2683.9172f, 0.307461f };
		uLocal_280 = { 2597.6025f, 2408.885f, 121.90103f };
		sLocal_254 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_263 = "arrestcriminal2";
		sLocal_264 = "REARR_THANK2";
		sLocal_265 = "REARR_CORUN2";
		sLocal_266 = "REARR_CWTF2";
		sLocal_267 = "REARR_CTURN2";
		sLocal_268 = "REARR_CHELP2";
		sLocal_269 = "REARR_HATE2";
		sLocal_270 = "REARR_CRAND2";
		sLocal_271 = "REARR_CRAND2";
		sLocal_272 = "REARR_CRAND2";
		model2 = joaat("G_M_M_ArmGoon_01");
	}

	STREAMING::REQUEST_MODEL(model);
	STREAMING::REQUEST_MODEL(model2);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_binbag_01"));
	STREAMING::REQUEST_ANIM_DICT(sLocal_256);
	STREAMING::REQUEST_ANIM_DICT(sLocal_257);
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_TAZERED");

	if (STREAMING::HAS_MODEL_LOADED(model) && STREAMING::HAS_MODEL_LOADED(model2) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_binbag_01")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_256) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_257) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED") && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_TAZERED"))
	{
		pedLocal_52 = PED::CREATE_PED(PED_TYPE_COP, model, vector, heading, true, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_52, 294, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_52, true, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(pedLocal_52, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_52, true);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_76, 1, pedLocal_52, "ArrestCop", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_52, true, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(pedLocal_52, 1);
		pedLocal_53 = PED::CREATE_PED(PED_TYPE_MISSION, model2, vector2, heading2, true, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_53, true, 0);
		PED::SET_PED_CONFIG_FLAG(pedLocal_53, 42, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_53, 281, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_53, true);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_76, 2, pedLocal_53, sLocal_263, 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_53, true, 1);
	
		if (iLocal_51 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_HEAD, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_HAIR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_UPPR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_LOWR, 0, 0, 0);
		}
	
		func_120();
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_76, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_76, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_76, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(pedLocal_52, joaat("WEAPON_PISTOL"), false))
			WEAPON::GIVE_WEAPON_TO_PED(pedLocal_52, joaat("WEAPON_PISTOL"), -1, false, true);
	
		WEAPON::SET_CURRENT_PED_WEAPON(pedLocal_52, joaat("WEAPON_PISTOL"), true);
		obLocal_58 = OBJECT::CREATE_OBJECT(joaat("prop_ld_binbag_01"), fLocal_63, fLocal_63.f_1, fLocal_63.f_2 + 100f, true, true, false);
		ENTITY::SET_ENTITY_VISIBLE(obLocal_58, false, false);
	
		if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, fLocal_63) < 10f)
		{
			iLocal_51 = 1;
			TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2473.2544f, 4901.6514f, 43.1488f, 3f, -1, 2f, 1, fLocal_248, 1193033728);
			TASK::TASK_SMART_FLEE_PED(0, pedLocal_52, 150f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_71);
			PED::SET_PED_KEEP_TASK(pedLocal_53, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
			PATHFIND::DISABLE_NAVMESH_IN_AREA(2544.862f, 4729.8926f, 27.8986f, 2564.862f, 4749.8926f, 28.8986f, true);
		}
		else
		{
			iLocal_51 = 2;
			TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2531.445f, 2521.7493f, 38.2072f, 3f, -1, 2f, 1, fLocal_248, 1193033728);
			TASK::TASK_SMART_FLEE_PED(0, pedLocal_52, 150f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_71);
			PED::SET_PED_KEEP_TASK(pedLocal_53, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
		}
	
		iLocal_51 == 1;
		TASK::TASK_GO_TO_ENTITY(pedLocal_52, pedLocal_53, -1, 1f, 3f, 1073741824, 0);
		PED::SET_PED_KEEP_TASK(pedLocal_52, true);
		return true;
	}

	return false;
}

void func_120() // Position - 0x59CC (22988)
{
	fLocal_248 = 0f;
	fLocal_248.f_1 = 10f;
	PED::SET_PED_COMBAT_MOVEMENT(pedLocal_52, CM_WillAdvance);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_52, BF_Aggressive, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_52, BF_CanDoDrivebys, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_52, BF_CanUseVehicles, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_52, BF_0x0036D422, false);
	PED::SET_PED_COMBAT_RANGE(pedLocal_52, 0);
	PED::SET_PED_COMBAT_MOVEMENT(pedLocal_53, CM_WillRetreat);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_53, BF_AlwaysFlee, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_53, BF_0x66BB9FCC, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_53, BF_CanUseVehicles, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_53, BF_0x0036D422, false);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_53, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_53, 1, false);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_COP", &hLocal_69);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_CRIM", &hLocal_70);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_52, hLocal_69);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_53, hLocal_70);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, hLocal_70, hLocal_69);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, hLocal_69, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, hLocal_70, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, hLocal_70, joaat("COP"));
	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_52, sLocal_255);
	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_53, sLocal_254);
	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x5AAD (23213)
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

BOOL func_122() // Position - 0x5B48 (23368)
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_131())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_130())
			return false;

	if (func_123(100f, true) != -1)
		return true;

	return false;
}

int func_123(float fParam0, BOOL bParam1) // Position - 0x5BAA (23466)
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
		if (func_59(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_129();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_114162.f_18578[num /*6*/], 2) && !IS_BIT_SET(Global_114162.f_18578[num /*6*/], 3))
				{
					func_124(num, &unk);
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

void func_124(int iParam0, var uParam1) // Position - 0x5C5B (23643)
{
	switch (iParam0)
	{
		case 0:
			func_125(uParam1, "Abigail1", func_127(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_126(iParam0), 1, 0);
			break;
	
		case 1:
			func_125(uParam1, "Abigail2", func_127(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_126(iParam0), 1, 0);
			break;
	
		case 2:
			func_125(uParam1, "Barry1", func_127(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_126(iParam0), 1, 0);
			break;
	
		case 3:
			func_125(uParam1, "Barry2", func_127(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_126(iParam0), 1, 1);
			break;
	
		case 4:
			func_125(uParam1, "Barry3", func_127(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 5:
			func_125(uParam1, "Barry3A", func_127(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 6:
			func_125(uParam1, "Barry3C", func_127(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 7:
			func_125(uParam1, "Barry4", func_127(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_126(iParam0), 0, 0);
			break;
	
		case 8:
			func_125(uParam1, "Dreyfuss1", func_127(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 9:
			func_125(uParam1, "Epsilon1", func_127(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 10:
			func_125(uParam1, "Epsilon2", func_127(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_126(iParam0), 1, 0);
			break;
	
		case 11:
			func_125(uParam1, "Epsilon3", func_127(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 12:
			func_125(uParam1, "Epsilon4", func_127(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 13:
			func_125(uParam1, "Epsilon5", func_127(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_126(iParam0), 1, 0);
			break;
	
		case 14:
			func_125(uParam1, "Epsilon6", func_127(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 15:
			func_125(uParam1, "Epsilon7", func_127(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 16:
			func_125(uParam1, "Epsilon8", func_127(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_126(iParam0), 1, 0);
			break;
	
		case 17:
			func_125(uParam1, "Extreme1", func_127(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 18:
			func_125(uParam1, "Extreme2", func_127(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 19:
			func_125(uParam1, "Extreme3", func_127(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 20:
			func_125(uParam1, "Extreme4", func_127(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 21:
			func_125(uParam1, "Fanatic1", func_127(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_126(iParam0), 1, 0);
			break;
	
		case 22:
			func_125(uParam1, "Fanatic2", func_127(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_126(iParam0), 1, 0);
			break;
	
		case 23:
			func_125(uParam1, "Fanatic3", func_127(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_126(iParam0), 0, 1);
			break;
	
		case 24:
			func_125(uParam1, "Hao1", func_127(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_126(iParam0), 0, 1);
			break;
	
		case 25:
			func_125(uParam1, "Hunting1", func_127(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 26:
			func_125(uParam1, "Hunting2", func_127(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 27:
			func_125(uParam1, "Josh1", func_127(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_126(iParam0), 1, 0);
			break;
	
		case 28:
			func_125(uParam1, "Josh2", func_127(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_126(iParam0), 1, 1);
			break;
	
		case 29:
			func_125(uParam1, "Josh3", func_127(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_126(iParam0), 1, 1);
			break;
	
		case 30:
			func_125(uParam1, "Josh4", func_127(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_126(iParam0), 1, 0);
			break;
	
		case 31:
			func_125(uParam1, "Maude1", func_127(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 32:
			func_125(uParam1, "Minute1", func_127(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 33:
			func_125(uParam1, "Minute2", func_127(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 34:
			func_125(uParam1, "Minute3", func_127(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 35:
			func_125(uParam1, "MrsPhilips1", func_127(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 36:
			func_125(uParam1, "MrsPhilips2", func_127(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 37:
			func_125(uParam1, "Nigel1", func_127(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_126(iParam0), 1, 0);
			break;
	
		case 38:
			func_125(uParam1, "Nigel1A", func_127(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_126(iParam0), 1, 1);
			break;
	
		case 39:
			func_125(uParam1, "Nigel1B", func_127(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_126(iParam0), 1, 1);
			break;
	
		case 40:
			func_125(uParam1, "Nigel1C", func_127(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_126(iParam0), 1, 1);
			break;
	
		case 41:
			func_125(uParam1, "Nigel1D", func_127(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_126(iParam0), 1, 1);
			break;
	
		case 42:
			func_125(uParam1, "Nigel2", func_127(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_126(iParam0), 1, 1);
			break;
	
		case 43:
			func_125(uParam1, "Nigel3", func_127(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_126(iParam0), 1, 1);
			break;
	
		case 44:
			func_125(uParam1, "Omega1", func_127(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 45:
			func_125(uParam1, "Omega2", func_127(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 46:
			func_125(uParam1, "Paparazzo1", func_127(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 47:
			func_125(uParam1, "Paparazzo2", func_127(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 48:
			func_125(uParam1, "Paparazzo3", func_127(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 49:
			func_125(uParam1, "Paparazzo3A", func_127(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 50:
			func_125(uParam1, "Paparazzo3B", func_127(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 51:
			func_125(uParam1, "Paparazzo4", func_127(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 52:
			func_125(uParam1, "Rampage1", func_127(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 54:
			func_125(uParam1, "Rampage3", func_127(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_126(iParam0), 1, 0);
			break;
	
		case 55:
			func_125(uParam1, "Rampage4", func_127(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_126(iParam0), 1, 0);
			break;
	
		case 56:
			func_125(uParam1, "Rampage5", func_127(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_126(iParam0), 0, 0);
			break;
	
		case 53:
			func_125(uParam1, "Rampage2", func_127(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_126(iParam0), 1, 0);
			break;
	
		case 57:
			func_125(uParam1, "TheLastOne", func_127(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 58:
			func_125(uParam1, "Tonya1", func_127(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 59:
			func_125(uParam1, "Tonya2", func_127(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 60:
			func_125(uParam1, "Tonya3", func_127(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 61:
			func_125(uParam1, "Tonya4", func_127(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		case 62:
			func_125(uParam1, "Tonya5", func_127(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_126(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_125(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x6EA2 (28322)
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

int func_126(int iParam0) // Position - 0x6F33 (28467)
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

struct<2> func_127(int iParam0) // Position - 0x7279 (29305)
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_128(iParam0) };

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

struct<2> func_128(int iParam0) // Position - 0x72B1 (29361)
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

int func_129() // Position - 0x76FE (30462)
{
	func_58();

	switch (Global_114162.f_2367.f_539.f_4321)
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

BOOL func_130() // Position - 0x7744 (30532)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_131() // Position - 0x7761 (30561)
{
	if (func_134() && !func_130())
		return true;

	if (func_133() && func_132())
		return true;

	return false;
}

BOOL func_132() // Position - 0x7793 (30611)
{
	return Global_113880 > 0;
}

BOOL func_133() // Position - 0x77A1 (30625)
{
	if (Global_98610 != -1)
		return true;

	return false;
}

BOOL func_134() // Position - 0x77B6 (30646)
{
	if (Global_98610 != -1)
		return IS_BIT_SET(Global_92476[Global_98610 /*34*/].f_15, 20);

	return false;
}

BOOL func_135() // Position - 0x77D9 (30681)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_42) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_130())
			return false;
	}

	if (func_131())
		return true;

	if (func_123(100f, true) != -1)
		return true;

	return false;
}

void func_136(int iParam0) // Position - 0x785F (30815)
{
	if (iParam0 == -1)
		iParam0 = func_139();

	if (iParam0 == -1)
		return;

	func_138(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114148 = 0;
	func_137();
	return;
}

void func_137() // Position - 0x7895 (30869)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_138(int iParam0) // Position - 0x78D2 (30930)
{
	Global_114151 = iParam0;
	return;
}

int func_139() // Position - 0x78E0 (30944)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_140(unk);
	return num;
}

int func_140(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x78FD (30973)
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
	
		case joaat("re_accident"):
			return 0;
	
		case joaat("re_arrests"):
			return 15;
	
		case joaat("re_atmrobbery"):
			return 1;
	
		case joaat("re_bikethief"):
			return 26;
	
		case joaat("re_border"):
			return 29;
	
		case joaat("re_burials"):
			return 24;
	
		case joaat("re_bus_tours"):
			return 2;
	
		case joaat("re_cartheft"):
			return 17;
	
		case joaat("re_chasethieves"):
			return 11;
	
		case joaat("re_crashrescue"):
			return 16;
	
		case joaat("re_cultshootout"):
			return 18;
	
		case joaat("re_dealgonewrong"):
			return 12;
	
		case joaat("re_domestic"):
			return 3;
	
		case joaat("re_drunkdriver"):
			return 27;
	
		case joaat("re_gang_intimidation"):
			return 20;
	
		case joaat("re_gangfight"):
			return 19;
	
		case joaat("re_getaway_driver"):
			return 4;
	
		case joaat("re_hitch_lift"):
			return 13;
	
		case joaat("re_homeland_security"):
			return 28;
	
		case joaat("re_lured"):
			return 7;
	
		case joaat("re_muggings"):
			return 25;
	
		case joaat("re_paparazzi"):
			return 10;
	
		case joaat("re_prisonerlift"):
			return 22;
	
		case joaat("re_prisonvanbreak"):
			return 21;
	
		case joaat("re_securityvan"):
			return 9;
	
		case joaat("re_shoprobbery"):
			return 5;
	
		case joaat("re_snatched"):
			return 6;
	
		case joaat("re_stag_do"):
			return 14;
	
		case joaat("re_yetarian"):
			return 30;
	
		case joaat("re_duel"):
			return 31;
	
		case joaat("re_seaplane"):
			return 32;
	
		case joaat("re_monkey"):
			return 33;
	}

	return -1;
}

BOOL func_141(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x7AD7 (31447)
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_152751)
		return false;

	if (iParam3 == -1)
		iParam3 = func_139();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_42 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_130())
				return false;
		}
	
		if (!Global_114162.f_9089)
			return false;
	
		if (_IS_MISSION_REPEAT_ACTIVE(false))
			return false;
	
		if (func_131())
			return false;
	
		if (func_181())
			return false;
	
		if (Global_114151 != -1)
			return false;
	
		if (func_59(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_123(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_42.f_2 > 50f)
				return false;
	
		if (!func_180(iParam3))
			return false;
	
		if (func_59(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_179(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_179(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_59(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_178(iParam3, iParam4, 145))
				return false;
	
		if (!func_177(Global_114162.f_24999.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_114153 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_176())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_167(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_166(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_166(0, 0))
			return false;
	
		if (Global_33252)
			return false;
	
		if (func_180(30) && !func_166(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_59(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_114162.f_2367.f_539.f_2300[i /*3*/] };
				num = Global_114162.f_2367.f_539.f_2296[i];
			
				if (func_165(num))
					if (func_143(i))
						if (!func_142(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_142(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x7E71 (32369)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_143(eCharacter echParam0) // Position - 0x7EB8 (32440)
{
	int num;

	num = Global_114162.f_2367.f_539.f_2296[echParam0];
	return func_144(num);
}

BOOL func_144(int iParam0) // Position - 0x7ED9 (32473)
{
	return func_145(iParam0, 1);
}

int func_145(int iParam0, int iParam1) // Position - 0x7EE8 (32488)
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_165(iParam0))
		return 0;

	func_146(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_146(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x7F3B (32571)
{
	func_147(func_158(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_147(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x7F59 (32601)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_157(iParam0, iParam1))
	{
		num = func_156(iParam1);
		num2 = func_154(iParam0);
		num3 = func_154(iParam0) - func_154(iParam1);
		num4 = func_156(iParam0) - func_156(iParam1);
		num5 = func_153(iParam0) - func_153(iParam1);
		num6 = func_152(iParam0) - func_152(iParam1);
		num7 = func_151(iParam0) - func_151(iParam1);
		num8 = func_150(iParam0) - func_150(iParam1);
	}
	else
	{
		num = func_156(iParam0);
		num2 = func_154(iParam1);
		num3 = func_154(iParam1) - func_154(iParam0);
		num4 = func_156(iParam1) - func_156(iParam0);
		num5 = func_153(iParam1) - func_153(iParam0);
		num6 = func_152(iParam1) - func_152(iParam0);
		num7 = func_151(iParam1) - func_151(iParam0);
		num8 = func_150(iParam1) - func_150(iParam0);
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
	
		num5 = num5 + func_149(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_148(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
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

float func_148(float fParam0, float fParam1, float fParam2) // Position - 0x815D (33117)
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

int func_149(int iParam0, int iParam1) // Position - 0x819F (33183)
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

int func_150(int iParam0) // Position - 0x8241 (33345)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_151(int iParam0) // Position - 0x8254 (33364)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_152(int iParam0) // Position - 0x8267 (33383)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_153(int iParam0) // Position - 0x827A (33402)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_154(int iParam0) // Position - 0x828C (33420)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_155(BOOL bParam0, var uParam1, var uParam2) // Position - 0x82AE (33454)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_156(int iParam0) // Position - 0x82C5 (33477)
{
	return iParam0 & 15;
}

BOOL func_157(int iParam0, int iParam1) // Position - 0x82D2 (33490)
{
	int num;
	int num2;

	if (!func_165(iParam1) || !func_165(iParam0))
		return 1;

	num = func_154(iParam0);
	num2 = func_154(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_156(iParam0);
	num2 = func_156(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_153(iParam0);
	num2 = func_153(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_152(iParam0);
	num2 = func_152(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_151(iParam0);
	num2 = func_151(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_150(iParam0);
	num2 = func_150(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_158() // Position - 0x83DE (33758)
{
	var unk;

	func_164(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_163(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_162(&unk, CLOCK::GET_CLOCK_HOURS());
	func_161(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_160(&unk, CLOCK::GET_CLOCK_MONTH());
	func_159(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_159(var uParam0, int iParam1) // Position - 0x8424 (33828)
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

void func_160(var uParam0, int iParam1) // Position - 0x84AA (33962)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_161(var uParam0, int iParam1) // Position - 0x84DD (34013)
{
	int num;
	int num2;

	num = func_156(*uParam0);
	num2 = func_154(*uParam0);

	if (iParam1 < 1 || iParam1 > func_149(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_162(var uParam0, int iParam1) // Position - 0x852E (34094)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_163(var uParam0, int iParam1) // Position - 0x8568 (34152)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_164(var uParam0, int iParam1) // Position - 0x85A3 (34211)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_165(int iParam0) // Position - 0x85DF (34271)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_150(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_151(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_152(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_154(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_156(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_153(iParam0);

	if (num6 < 1 || num6 > func_149(num5, num4))
		return false;

	return true;
}

BOOL func_166(int iParam0, int iParam1) // Position - 0x86BB (34491)
{
	if (IS_BIT_SET(Global_114162.f_24999.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_167(int iParam0) // Position - 0x86DB (34523)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_59(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_175() || Global_113209 || Global_33108 || func_174() || func_94(8, -1) || func_173() || func_172() || func_171() || func_170() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_175() || Global_33108 || func_174() || func_94(8, -1) || func_171() || func_173() || func_172() || func_170() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_175() || Global_113209 || Global_33108 || func_174() || func_94(8, -1) || func_171() || func_173() || func_172() || func_170() || Global_114162.f_7692.f_919[character] == 5 || Global_44746 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_175() || Global_113209 || Global_33108 || func_174() || func_94(8, -1) || func_173() || func_172() || func_170() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_175() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_94(8, -1) || func_170() || func_169() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_94(8, -1) || func_173() || func_172() || func_169() || func_168())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_175() || Global_33108 || func_174() || func_94(8, -1) || func_172() || func_171() || func_170() || Global_114162.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_175() || func_172() || Global_113209 || Global_33108 || func_174() || Global_45410 || func_94(8, -1) || func_171() || func_169() || func_170() || Global_114162.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_175() || Global_113209 || Global_33108 || func_174() || func_94(8, -1) || func_171() || func_169() || func_173() || func_172() || func_170())
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

BOOL func_168() // Position - 0x8DF8 (36344)
{
	return Global_101752.f_1;
}

BOOL func_169() // Position - 0x8E06 (36358)
{
	if (Global_98610 != -1)
		return IS_BIT_SET(Global_92476[Global_98610 /*34*/].f_15, 13);

	return false;
}

BOOL func_170() // Position - 0x8E29 (36393)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_171() // Position - 0x8E43 (36419)
{
	if (Global_79825)
		return true;
	else if (Global_64320 && !Global_64326)
		return true;

	return false;
}

BOOL func_172() // Position - 0x8E6D (36461)
{
	return Global_101765.f_400 > 0;
}

BOOL func_173() // Position - 0x8E7E (36478)
{
	return Global_101765.f_399 > 0;
}

BOOL func_174() // Position - 0x8E8F (36495)
{
	return Global_1575086;
}

BOOL func_175() // Position - 0x8E9B (36507)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99166.f_44 == 1;

	return false;
}

BOOL func_176() // Position - 0x8EB7 (36535)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_9758[Global_21083 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_177(int iParam0) // Position - 0x8EDF (36575)
{
	return func_157(func_158(), iParam0);
}

BOOL func_178(int iParam0, int iParam1, eCharacter echParam2) // Position - 0x8EF1 (36593)
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

int func_179(eCharacter echParam0) // Position - 0x8FD5 (36821)
{
	if (!func_59(echParam0))
		return 7;

	return Global_114162.f_7692.f_919[echParam0];
}

BOOL func_180(int iParam0) // Position - 0x8FF9 (36857)
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_114162.f_24999, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_114162.f_24999.f_1, num);
	}

	return flag;
}

BOOL func_181() // Position - 0x9051 (36945)
{
	Vehicle vehiclePedIsIn;

	if (Global_33257)
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x9095 (37013)
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79813, 0);
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x90BD (37053)
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

void func_184() // Position - 0x9175 (37237)
{
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		switch (iLocal_47)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				func_213(6);
				func_198();
				break;
		
			case 3:
				func_213(5);
				func_198();
				break;
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_53))
		{
			if (!PED::IS_PED_INJURED(pedLocal_53) && !ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
			{
				ENTITY::IS_ENTITY_DEAD(pedLocal_52, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_52))
					TASK::TASK_SMART_FLEE_COORD(pedLocal_53, ENTITY::GET_ENTITY_COORDS(pedLocal_52, true), 9000f, -1, false, false);
				else
					TASK::TASK_SMART_FLEE_COORD(pedLocal_53, ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), 9000f, -1, false, false);
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_53, false);
				PED::SET_PED_KEEP_TASK(pedLocal_53, true);
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_52))
		{
			if (!PED::IS_PED_INJURED(pedLocal_52))
			{
				PED::SET_PED_KEEP_TASK(pedLocal_52, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_52, false);
				PED::SET_PED_AS_COP(pedLocal_52, true);
				PED::SET_PED_CAN_BE_TARGETTED(pedLocal_52, true);
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_54))
		{
			if (!PED::IS_PED_INJURED(pedLocal_54))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					func_71();
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_54, false);
				PED::SET_PED_AS_COP(pedLocal_54, true);
			}
		}
	
		if (func_197())
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_70, hLocal_69);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_69, hLocal_70);
		}
	
		if (bLocal_75)
			VEHICLE::SET_RANDOM_TRAINS(true);
	}

	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2551.0378f, 4708.6133f, 32.6775f, 2536.979f, 5022.1787f, 43.8519f, 300f, 1);

	if (bLocal_285)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}

	func_185(-1);
	SYSTEM::WAIT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_185(int iParam0) // Position - 0x9304 (37636)
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_139();

	if (iParam0 == -1)
		return;

	if (func_197())
	{
		func_190(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114153 = MISC::GET_GAME_TIMER();
		func_189(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_188(Global_114151, true), 64);
	
		if (func_187(Global_114151) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_114150, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_114148, MISC::GET_GAME_TIMER() - Global_114149, 0);
	}
	else if (IS_BIT_SET(Global_114158, 0) && Global_114162.f_24999.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114158, 0);
	}

	func_186(&Global_33165);
	Global_114152 = false;
	func_138(-1);
	return;
}

void func_186(var uParam0) // Position - 0x93B6 (37814)
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

int func_187(int iParam0) // Position - 0x93F3 (37875)
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

char* func_188(int iParam0, BOOL bParam1) // Position - 0x94A4 (38052)
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

void func_189(int iParam0) // Position - 0x96ED (38637)
{
	Global_44750 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_190(int iParam0) // Position - 0x96FF (38655)
{
	func_191(iParam0, 0, func_196(iParam0));
	return;
}

void func_191(int iParam0, int iParam1, int iParam2) // Position - 0x9714 (38676)
{
	int unk;
	var unk2;

	unk = func_158();
	func_194(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_193(iParam0, &unk);
	unk2 = { func_192(&unk) };
	return;
}

struct<16> func_192(var uParam0) // Position - 0x9743 (38723)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_152(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_151(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_150(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_153(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_156(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_154(*uParam0), 64);
	return unk;
}

void func_193(int iParam0, var uParam1) // Position - 0x9814 (38932)
{
	Global_114162.f_24999.f_43[iParam0] = *uParam1;
	return;
}

void func_194(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x982C (38956)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_154(*uParam0);
	i = func_156(*uParam0);
	num2 = func_153(*uParam0);
	j = func_152(*uParam0);
	k = func_151(*uParam0);
	l = func_150(*uParam0);

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

	for (m = func_149(i, num); num2 > m; m = func_149(i, num))
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
	func_195(uParam0, l, k, j, num2, i, num);
	return;
}

void func_195(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x99AE (39342)
{
	func_164(uParam0, iParam1);
	func_163(uParam0, iParam2);
	func_162(uParam0, iParam3);
	func_160(uParam0, iParam5);
	func_161(uParam0, iParam4);
	func_159(uParam0, iParam6);
	return;
}

int func_196(int iParam0) // Position - 0x99E6 (39398)
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

BOOL func_197() // Position - 0x9B89 (39817)
{
	if (Global_114151 == func_139() && MISC::GET_RANDOM_EVENT_FLAG() && Global_114152)
		return true;

	return false;
}

void func_198() // Position - 0x9BB4 (39860)
{
	if (!bLocal_74)
		func_212();

	func_201(15, iLocal_51);
	func_199();
	return;
}

void func_199() // Position - 0x9BD3 (39891)
{
	func_200();
	return;
}

int func_200() // Position - 0x9BE0 (39904)
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

void func_201(int iParam0, int iParam1) // Position - 0x9C2B (39979)
{
	if (iParam0 == -1)
		iParam0 = func_139();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_187(iParam0))
	{
		func_211(iParam0, iParam1);
	
		if (!func_210(51))
		{
			func_207("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_129(), 0, 138, 0);
			func_206(51);
		}
	
		if (func_108(iParam0))
			Global_114162.f_24999.f_2 = 3;
	
		if (func_205(iParam0, iParam1) != 322)
			func_202(func_205(iParam0, iParam1), uLocal_42, uLocal_42.f_1);
	
		Global_114150 = iParam1;
	
		if (Global_114148 == 0)
			if (Global_114151 == 1 || Global_114151 == 5 || Global_114151 == 11 || Global_114151 == 25)
				func_213(2);
			else if (Global_114151 == 26 || Global_114151 == 8 || Global_114151 == 17)
				func_213(7);
			else
				func_213(1);
	}

	return;
}

void func_202(int iParam0, var uParam1, var uParam2) // Position - 0x9D2F (40239)
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
		Global_114162.f_10198[iParam0 /*12*/].f_10 = uParam1;
		Global_114162.f_10198[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_203();

	return;
}

void func_203() // Position - 0x9E15 (40469)
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
		func_52(13, SYSTEM::FLOOR(Global_114162.f_10198.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79564)
		{
			if (func_204() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113896 = 0;
			
				if (!Global_64326)
					func_200();
			}
		}
	}

	return;
}

int func_204() // Position - 0xA2D3 (41683)
{
	return Global_33105;
}

int func_205(int iParam0, int iParam1) // Position - 0xA2DE (41694)
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

void func_206(int iParam0) // Position - 0xA652 (42578)
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_114162.f_20414.f_150[i], offset);

	return;
}

void func_207(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xA694 (42644)
{
	func_208(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_208(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xA6B6 (42678)
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
		func_209();
	}

	return;
}

void func_209() // Position - 0xA88A (43146)
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

BOOL func_210(int iParam0) // Position - 0xA9A1 (43425)
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

void func_211(int iParam0, int iParam1) // Position - 0xA9E1 (43489)
{
	MISC::SET_BIT(&Global_114162.f_24999.f_8[iParam0], iParam1);
	return;
}

int func_212() // Position - 0xA9FC (43516)
{
	return 1;
}

void func_213(int iParam0) // Position - 0xAA05 (43525)
{
	Global_114148 = iParam0;
	return;
}

void func_214() // Position - 0xAA13 (43539)
{
	if (!bLocal_72 && iLocal_49 == 0)
	{
		if (!PED::IS_PED_INJURED(pedLocal_52) && !PED::IS_PED_INJURED(pedLocal_53))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(pedLocal_52, ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), 3f, 20000, 1193033728, 1056964608);
			PED::SET_PED_KEEP_TASK(pedLocal_52, true);
			SYSTEM::WAIT(0);
		}
	}

	return;
}


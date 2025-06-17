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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
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
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	float fLocal_49 = 0f;
	Ped pedLocal_50 = 0;
	Ped pedLocal_51 = 0;
	Ped pedLocal_52 = 0;
	Ped pedLocal_53 = 0;
	Vehicle veLocal_54 = 0;
	Blip blLocal_55 = 0;
	Blip blLocal_56 = 0;
	Hash hLocal_57 = 0;
	Hash hLocal_58 = 0;
	Hash hLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	ScrHandle shLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	BOOL bLocal_74 = 0;
	BOOL bLocal_75 = 0;
	BOOL bLocal_76 = 0;
	int iLocal_77 = 0;
	BOOL bLocal_78 = 0;
	BOOL bLocal_79 = 0;
	BOOL bLocal_80 = 0;
	BOOL bLocal_81 = 0;
	BOOL bLocal_82 = 0;
	BOOL bLocal_83 = 0;
	BOOL bLocal_84 = 0;
	BOOL bLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	char* sLocal_88 = 0;
	char* sLocal_89 = 0;
	char* sLocal_90 = 0;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	BOOL bLocal_95 = 0;
	BOOL bLocal_96 = 0;
	int iLocal_97 = 0;
	BOOL bLocal_98 = 0;
	var uLocal_99 = 16;
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
	int iLocal_264 = 0;
	char* sLocal_265 = 0;
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
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_13 = 0.001f;
	iLocal_16 = -1;
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_61 = 8000;
	iLocal_66 = -1;
	bLocal_85 = true;
	sLocal_90 = "NULL";
	fLocal_91 = -120f;
	fLocal_92 = 120f;
	fLocal_93 = 40f;
	fLocal_94 = 90f;
	bLocal_96 = true;
	sLocal_265 = "RANDOM@RESCUE_HOSTAGE";
	uLocal_46 = { uScriptParam_0.f_1[0 /*3*/] };
	fLocal_49 = uScriptParam_0.f_17[0];

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_163();

	if (Global_41330[0] == 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	if (func_121(uLocal_46, -1, 0, false, false))
		func_118(-1);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	func_117();
	func_116();

	while (true)
	{
		BUILTIN::WAIT(0);
		func_115();
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			switch (iLocal_45)
			{
				case 0:
					if (func_112())
					{
						iLocal_97 = MISC::GET_GAME_TIMER();
						iLocal_45 = 1;
					}
					else if (func_111())
					{
						func_163();
					}
					break;
			
				case 1:
					if (shLocal_62 == 0)
						shLocal_62 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(EVENT_SHOCKING_MUGGING, -104.982f, 6408.7373f, 30.4905f, 180000f);
				
					func_110();
				
					if (!PED::IS_PED_INJURED(pedLocal_51))
					{
						func_109();
					}
					else if (!PED::IS_PED_INJURED(pedLocal_52))
					{
						func_105();
						func_104();
					}
					else
					{
						func_163();
					}
				
					if (bLocal_74)
						func_102();
				
					if (!PED::IS_PED_INJURED(pedLocal_50))
					{
						if (!func_101())
						{
							if (func_89())
								func_163();
						
							func_74();
						}
						else if (!bLocal_74)
						{
							func_57();
						}
					}
					else
					{
						if (uLocal_99[1 /*10*/].f_7)
						{
							if (HUD::DOES_BLIP_EXIST(blLocal_55))
								HUD::REMOVE_BLIP(&blLocal_55);
						
							if (HUD::DOES_BLIP_EXIST(blLocal_56))
								HUD::REMOVE_BLIP(&blLocal_56);
						
							func_56(&uLocal_99, 1);
							func_54();
						}
					
						if (!PED::IS_PED_INJURED(pedLocal_51))
						{
							if (bLocal_74)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_65))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_65) == 1f)
									{
										if (!PED::IS_PED_INJURED(pedLocal_51))
										{
											PED::SET_PED_CAN_RAGDOLL(pedLocal_51, true);
											ENTITY::SET_ENTITY_HEALTH(pedLocal_51, 0, 0, 0);
										}
									}
								}
							}
							else
							{
								if (func_53())
									iLocal_45 = 3;
							
								!PED::IS_PED_INJURED(pedLocal_52);
							}
						}
					}
					break;
			
				case 2:
					veLocal_54 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 35f, 0, 101383);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_54, false))
					{
						if (!bLocal_98)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						}
					
						func_163();
					}
				
					if (!bLocal_84)
						if (MISC::CREATE_INCIDENT(DT_PoliceVehicleRequest, uLocal_46, 2, 0f, &uLocal_86, 0, 0))
							bLocal_84 = true;
					break;
			
				case 3:
					if (bLocal_82)
					{
						if (BUILTIN::TIMERA() > 5000)
						{
							if (!PED::IS_PED_INJURED(pedLocal_51))
							{
								PED::SET_PED_KEEP_TASK(pedLocal_51, true);
								func_28();
							}
						
							func_163();
						}
					}
					else
					{
						if (func_53())
							if (!bLocal_75)
								if (bLocal_85)
									if (_CONVERSATION_ADD_LINE(&uLocal_99, "RERHOAU", "RERHO_THANK", 4, iLocal_264, 0, 0))
										bLocal_75 = true;
								else if (_CONVERSATION_ADD_LINE(&uLocal_99, "RERHOAU", "RERHO_NOGUN", 4, iLocal_264, 0, 0))
									bLocal_75 = true;
					
						func_3();
					
						if (!PED::IS_PED_INJURED(pedLocal_51))
						{
							if (MISC::GET_GAME_TIMER() > iLocal_64 + 100)
							{
								func_1(pedLocal_51, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24, false);
								iLocal_64 = MISC::GET_GAME_TIMER();
							}
						}
					
						if (bLocal_75)
							if (!bLocal_83)
								if (!PED::IS_PED_INJURED(pedLocal_52))
									if (_CONVERSATION_ADD_LINE(&uLocal_99, "RERHOAU", "RERHO_CONS", 4, iLocal_264, 0, 0))
										bLocal_83 = true;
					
						veLocal_54 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(uLocal_46, 5f, joaat("ambulance"), 0);
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_54, false))
						{
							BUILTIN::SETTIMERA(0);
							bLocal_82 = true;
						}
					
						pedLocal_53 = PED::GET_RANDOM_PED_AT_COORD(uLocal_46, 1.5f, 1.5f, 1.5f, -1);
					
						if (!PED::IS_PED_INJURED(pedLocal_53))
						{
							BUILTIN::SETTIMERA(5000);
							bLocal_82 = true;
						}
					
						if (!bLocal_84 && bLocal_83)
							if (MISC::CREATE_INCIDENT(DT_AmbulanceDepartment, uLocal_46, 2, 0f, &uLocal_87, 0, 0))
								bLocal_84 = true;
					
						if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_46) > 5625f && !CAM::IS_SPHERE_VISIBLE(uLocal_46, 10f))
							func_28();
					}
					break;
			}
		}
		else if (iLocal_45 == 3)
		{
			func_28();
		}
		else
		{
			func_163();
		}
	}

	return;
}

void func_1(Ped pedParam0, char* sParam1, char* sParam2, int iParam3, BOOL bParam4) // Position - 0x45C (1116)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(pedParam0, sParam1, sParam2, func_2(iParam3), bParam4);
	return;
}

char* func_2(int iParam0) // Position - 0x476 (1142)
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

void func_3() // Position - 0x665 (1637)
{
	if (func_4())
	{
		if (!PED::IS_PED_INJURED(pedLocal_51))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_51, false);
			TASK::TASK_SMART_FLEE_COORD(pedLocal_51, uLocal_46, 50f, -1, false, false);
			PED::SET_PED_KEEP_TASK(pedLocal_51, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_51);
			func_54();
		}
	
		if (!PED::IS_PED_INJURED(pedLocal_52))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_52, false);
			TASK::TASK_SMART_FLEE_COORD(pedLocal_52, uLocal_46, 50f, -1, false, false);
			PED::SET_PED_KEEP_TASK(pedLocal_52, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_52);
			func_54();
		}
	}

	if (!PED::IS_PED_INJURED(pedLocal_51))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_51, PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_RAGDOLL(pedLocal_51))
				ENTITY::SET_ENTITY_HEALTH(pedLocal_51, 0, 0, 0);
		}
		else if (PED::IS_PED_RAGDOLL(pedLocal_51))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_51, false);
			TASK::TASK_SMART_FLEE_COORD(pedLocal_51, uLocal_46, 50f, -1, false, false);
			PED::SET_PED_KEEP_TASK(pedLocal_51, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_51);
			func_54();
		
			if (!PED::IS_PED_INJURED(pedLocal_52))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_52, false);
				TASK::TASK_SMART_FLEE_COORD(pedLocal_52, uLocal_46, 50f, -1, false, false);
				PED::SET_PED_KEEP_TASK(pedLocal_52, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_52);
				func_54();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(pedLocal_52))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_52, false);
		TASK::TASK_SMART_FLEE_COORD(pedLocal_52, uLocal_46, 50f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_52, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_52);
		func_54();
	}

	if (!PED::IS_PED_INJURED(pedLocal_52))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_RAGDOLL(pedLocal_52))
				ENTITY::SET_ENTITY_HEALTH(pedLocal_52, 0, 0, 0);
		}
		else if (PED::IS_PED_RAGDOLL(pedLocal_52))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_52, false);
			TASK::TASK_SMART_FLEE_COORD(pedLocal_52, uLocal_46, 50f, -1, false, false);
			PED::SET_PED_KEEP_TASK(pedLocal_52, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_52);
			func_54();
		
			if (!PED::IS_PED_INJURED(pedLocal_51))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_51, false);
				TASK::TASK_SMART_FLEE_COORD(pedLocal_51, uLocal_46, 50f, -1, false, false);
				PED::SET_PED_KEEP_TASK(pedLocal_51, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_51);
				func_54();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(pedLocal_51))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_51, false);
		TASK::TASK_SMART_FLEE_COORD(pedLocal_51, uLocal_46, 50f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_51, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_51);
		func_54();
	}

	return;
}

BOOL func_4() // Position - 0x872 (2162)
{
	BOOL flag;
	Vector3 vector;
	Vector3 vector2;

	vector = { 15f, 15f, 10f };
	vector2 = { -15f, -15f, -10f };

	if (!PED::IS_PED_INJURED(pedLocal_51))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_51, 31086, 0f, 0f, 0f), 15f, true))
			flag = true;
	
		vector = { vector + PED::GET_PED_BONE_COORDS(pedLocal_51, 31086, 0f, 0f, 0f) };
		vector2 = { vector2 + PED::GET_PED_BONE_COORDS(pedLocal_51, 31086, 0f, 0f, 0f) };
	
		if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_GRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_STICKYBOMB"), true))
		{
			bLocal_96 = true;
			flag = true;
		}
	
		if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -90.68654f, 6411.883f, 36.007286f, -103.859955f, 6398.8477f, 30.194529f, 23f) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(pedLocal_51, 31086, 0f, 0f, 0f), 20f))
		{
			bLocal_96 = true;
			flag = true;
		}
	
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(pedLocal_51, 31086, 0f, 0f, 0f), 6f))
		{
			flag = true;
			bLocal_96 = true;
		}
	}

	if (!PED::IS_PED_INJURED(pedLocal_52))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_52, PLAYER::PLAYER_PED_ID(), true))
			flag = true;
	else
		flag = true;

	flag;
	return flag;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x9CA (2506)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22609 = 0;
	Global_22611 = 0;
	Global_22616 = 0;
	Global_23593 = 0;
	Global_23595 = 0;
	Global_23599 = 0;
	Global_2883585 = 0;
	return func_6(sParam2, iParam3, false);
}

BOOL func_6(char* sParam0, int iParam1, BOOL bParam2) // Position - 0xA18 (2584)
{
	Global_22603 = 0;

	if (Global_22602 == 0 || Global_22604 == 2)
	{
		if (Global_22602 != 0)
		{
			if (iParam1 > Global_22604)
			{
				if (Global_22609 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21239.f_1 = 3;
					Global_22602 = 0;
					Global_22603 = 1;
					Global_22655 = 0;
					Global_22598 = 0;
					Global_22599 = 0;
					Global_22613 = 0;
					Global_22612 = false;
					Global_21238 = 0;
				}
				else
				{
					func_26();
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
	
		if (func_25(8, -1))
			return 0;
	
		Global_22678 = { Global_22672 };
		func_24();
		Global_21891 = { Global_22056 };
		Global_22608 = Global_22609;
		Global_22615 = Global_22616;
		Global_2883586 = Global_2883585;
		Global_22617 = { Global_22633 };
		Global_22610 = Global_22611;
		Global_23592 = Global_23593;
		Global_23600 = { Global_23606 };
		Global_23594 = Global_23595;
		Global_23596 = Global_23597;
		Global_23598 = Global_23599;
		Global_22221.f_370 = Global_23591;
		Global_22221.f_368 = Global_23589;
		Global_22221.f_369 = Global_23590;
		Global_22598 = Global_22599;
	
		if (Global_22608)
		{
			MISC::CLEAR_BIT(&Global_9075, 20);
			MISC::CLEAR_BIT(&Global_9076, 17);
			MISC::CLEAR_BIT(&Global_9077, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9914[Global_21239 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_21239.f_1 > 3)
					return 0;
			}
		
			if (Global_21205 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_15())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_79768)
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
		
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_21239.f_1)
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
			
				if (IS_BIT_SET(Global_9075, 9))
					return 0;
			}
		
			func_13();
			Global_22612 = bParam2;
		}
	
		Global_22604 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22221, sParam0, 24);
		Global_21468 = 0;
		func_12();
		func_7();
		return 1;
	}

	if (Global_22602 == 5)
		return 0;

	if (iParam1 < Global_22604 || iParam1 == Global_22604)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_26();
	}

	return 0;
}

void func_7() // Position - 0xCE6 (3302)
{
	if (!func_8())
		return;

	if (Global_22608)
	{
		TEXT_LABEL_COPY(&(Global_1975612.f_1), { Global_22221 }, 4);
		Global_1975612 = Global_8390;
		Global_1975612.f_6 = Global_22612;
	}

	return;
}

BOOL func_8() // Position - 0xD1D (3357)
{
	if (!Global_262145.f_28434)
		return false;

	if (!Global_79768)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_9(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_9(Player plParam0) // Position - 0xD80 (3456)
{
	return func_10(plParam0, 20);
}

BOOL func_10(Player plParam0, int iParam1) // Position - 0xD90 (3472)
{
	return IS_BIT_SET(Global_1888882[plParam0 /*611*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0xDA8 (3496)
{
	return -1;
}

void func_12() // Position - 0xDB1 (3505)
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21470[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22602 = 1;
	return;
}

void func_13() // Position - 0xDE3 (3555)
{
	Global_22655 = Global_22654;
	Global_22649 = Global_22650;
	Global_22696 = { Global_22684 };
	Global_22702 = { Global_22690 };
	Global_22657 = Global_22656;
	Global_22726 = { Global_22708 };
	Global_22732 = { Global_22714 };
	Global_22738 = { Global_22720 };
	Global_22744 = { Global_22750 };
	Global_8390 = Global_8391;
	Global_8392 = Global_8393;
	Global_22613 = Global_22614;
	Global_22615 = Global_22616;
	Global_22617 = { Global_22633 };
	Global_22606 = Global_22607;
	Global_23618 = 0;
	Global_22651 = 0;
	Global_22652 = 0;
	MISC::CLEAR_BIT(&Global_9076, 16);
	return;
}

BOOL func_14() // Position - 0xE78 (3704)
{
	if (Global_21239.f_1 == 1 || Global_21239.f_1 == 0)
		return true;

	return false;
}

BOOL func_15() // Position - 0xE9F (3743)
{
	int num;
	int weaponHash;

	if (Global_79768)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xF38 (3896)
{
	if (func_23(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28055[0 /*29*/])
				Global_21239 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28055[1 /*29*/])
				Global_21239 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28055[2 /*29*/])
				Global_21239 = CHAR_TREVOR;
			else
				Global_21239 = CHAR_MICHAEL;
	}
	else
	{
		Global_21239 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21239 == _CHAR_NULL)
			Global_21239 = CHAR_MULTIPLAYER;
	
		if (Global_79768)
			Global_21239 = CHAR_MULTIPLAYER;
	
		if (Global_21239 > CHAR_MULTIPLAYER)
			Global_21239 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xFDA (4058)
{
	func_18();
	return Global_114370.f_2367.f_539.f_4321;
}

void func_18() // Position - 0xFF3 (4083)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114370.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_19(character) && !func_23(14) || Global_113318)
			{
				if (Global_114370.f_2367.f_539.f_4321 != character && func_19(Global_114370.f_2367.f_539.f_4321))
					Global_114370.f_2367.f_539.f_4322 = Global_114370.f_2367.f_539.f_4321;
			
				Global_114370.f_2367.f_539.f_4323 = character;
				Global_114370.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114370.f_2367.f_539.f_4323 = Global_114370.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114370.f_2367.f_539.f_4321 = 145;
	return;
}

BOOL func_19(eCharacter echParam0) // Position - 0x10F0 (4336)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x10FC (4348)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1139 (4409)
{
	if (func_19(character))
		return func_22(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_22(eCharacter echParam0) // Position - 0x115E (4446)
{
	return Global_2241[echParam0 /*29*/];
}

BOOL func_23(int iParam0) // Position - 0x116D (4461)
{
	return Global_44392 == iParam0;
}

void func_24() // Position - 0x117B (4475)
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21891[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21891[i /*10*/].f_1), "", 24);
		Global_21891[i /*10*/].f_7 = 0;
		Global_21891[i /*10*/].f_8 = 0;
	}

	Global_21891.f_161 = -99;
	Global_21891.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_25(int iParam0, int iParam1) // Position - 0x11D3 (4563)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673898.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673898.f_1048, iParam0);
}

void func_26() // Position - 0x120B (4619)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23613 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21239.f_1 == 9 || Global_21238 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22602 = 6;
		Global_21239.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22602 = 6;
		return;
	}

	return;
}

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1262 (4706)
{
	Global_22056 = { *uParam0 };
	Global_8391 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_22672, sParam2, 24);
	Global_23591 = iParam5;

	if (iParam3 == 0)
	{
		Global_23589 = 1;
		Global_23587 = 0;
	}
	else
	{
		Global_23589 = 0;
		Global_23587 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23590 = 1;
		Global_23588 = 0;
	}
	else
	{
		Global_23590 = 0;
		Global_23588 = 1;
	}

	return;
}

void func_28() // Position - 0x12B8 (4792)
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_52();
	func_32(-1, 0);
	func_29();
	func_163();
	return;
}

void func_29() // Position - 0x12DB (4827)
{
	func_30();
	return;
}

int func_30() // Position - 0x12E8 (4840)
{
	if (func_31(false))
		return 0;

	if (Global_101956.f_8)
		if (Global_101956.f_10 > 0)
			return 0;
	else if (Global_101956.f_10 > 1)
		return 0;

	Global_101956.f_10 = Global_101956.f_10 + 1;
	return 1;
}

BOOL func_31(BOOL bParam0) // Position - 0x1333 (4915)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_80017, 0);
}

void func_32(int iParam0, int iParam1) // Position - 0x135B (4955)
{
	if (iParam0 == -1)
		iParam0 = func_50();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_49(iParam0))
	{
		func_48(iParam0, iParam1);
	
		if (!func_47(51))
		{
			func_43("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_46(), 0, 138, 0);
			func_42(51);
		}
	
		if (func_41(iParam0))
			Global_114370.f_24999.f_2 = 3;
	
		if (func_40(iParam0, iParam1) != 322)
			func_34(func_40(iParam0, iParam1), uLocal_42, uLocal_42.f_1);
	
		Global_114358 = iParam1;
	
		if (Global_114356 == 0)
			if (Global_114359 == 1 || Global_114359 == 5 || Global_114359 == 11 || Global_114359 == 25)
				func_33(2);
			else if (Global_114359 == 26 || Global_114359 == 8 || Global_114359 == 17)
				func_33(7);
			else
				func_33(1);
	}

	return;
}

void func_33(int iParam0) // Position - 0x145F (5215)
{
	Global_114356 = iParam0;
	return;
}

void func_34(int iParam0, var uParam1, var uParam2) // Position - 0x146D (5229)
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

	if (Global_114370.f_10198[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114370.f_10198[iParam0 /*12*/].f_6 == 11 || Global_114370.f_10198[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_114370.f_10198[iParam0 /*12*/].f_5 = 1;
		Global_114370.f_10198[iParam0 /*12*/].f_10 = uParam1;
		Global_114370.f_10198[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_35();

	return;
}

void func_35() // Position - 0x1553 (5459)
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
	Global_114106 = 0;
	Global_114107 = 0;
	Global_114108 = 0;
	Global_114109 = 0;
	Global_114110 = 0;
	Global_114111 = 0;
	Global_114112 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_114370.f_10198.f_3853;
	Global_114370.f_10198.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_114370.f_10198[num /*12*/].f_5 == 1)
		{
			switch (Global_114370.f_10198[num /*12*/].f_6)
			{
				case 1:
					Global_114106 = Global_114106 + 1;
					num2 = num2 + Global_114370.f_10198[num /*12*/].f_4;
					break;
			
				case 3:
					Global_114107 = Global_114107 + 1;
					num3 = num3 + Global_114370.f_10198[num /*12*/].f_4;
					break;
			
				case 5:
					Global_114108 = Global_114108 + 1;
					num4 = num4 + Global_114370.f_10198[num /*12*/].f_4;
					break;
			
				case 7:
					Global_114109 = Global_114109 + 1;
					num5 = num5 + Global_114370.f_10198[num /*12*/].f_4;
					break;
			
				case 9:
					Global_114110 = Global_114110 + 1;
					num6 = num6 + (Global_114370.f_10198[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_114111 = Global_114111 + 1;
					num7 = num7 + Global_114370.f_10198[num /*12*/].f_4;
					break;
			
				case 13:
					Global_114112 = Global_114112 + 1;
					num8 = num8 + Global_114370.f_10198[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_114089 > 0)
		if (Global_114106 == Global_114089)
			num2 = 55f;

	if (Global_114090 > 0)
		if (Global_114107 == Global_114090)
			num3 = 10f;

	if (Global_114091 > 0)
		if (Global_114108 == Global_114091)
			num4 = 0f;

	if (Global_114092 > 0)
		if (Global_114109 == Global_114092)
			num5 = 10f;

	if (Global_114093 > 0)
	{
		if (Global_114110 == Global_114093 || (Global_114093 * 10) / Global_114110 < 41 || Global_114110 > Global_114096 || Global_114110 == Global_114096)
		{
			if (!IS_BIT_SET(Global_114370.f_10198.f_3856, 14))
			{
				if (Global_114110 == Global_114093)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_114093, 0);
					MISC::SET_BIT(&(Global_114370.f_10198.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_114094 > 0)
		if (Global_114111 == Global_114094)
			num7 = 15f;

	if (Global_114095 > 0)
		if (Global_114112 == Global_114095)
			num8 = 5f;

	Global_114370.f_10198.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_114110 > Global_114096 || Global_114110 == Global_114096)
		value2 = Global_114096;
	else
		value2 = Global_114110;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_114106, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_114089, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_114107, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_114090, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_114108, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_114091, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_114109, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_114092, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_114096, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_114112 + Global_114111, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_114095 + Global_114094, true);
	Global_114113 = (Global_114106 * 100) / Global_114089;
	Global_114115 = ((Global_114108 + Global_114107) * 100) / (Global_114091 + Global_114090);
	Global_114114 = ((Global_114109 + value2) * 100) / (Global_114092 + Global_114096);
	Global_114116 = ((Global_114111 + Global_114112) * 100) / (Global_114094 + Global_114095);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_114370.f_10198.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_114113, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_114114, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_114115, true);

	if (value > 0f && BUILTIN::FLOOR(value) < BUILTIN::FLOOR(Global_114370.f_10198.f_3853))
		func_37(13, BUILTIN::FLOOR(Global_114370.f_10198.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79768)
		{
			if (func_36() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_114104 = 0;
			
				if (!Global_64523)
					func_30();
			}
		}
	}

	return;
}

int func_36() // Position - 0x1A11 (6673)
{
	return Global_33298;
}

BOOL func_37(int iParam0, int iParam1) // Position - 0x1A1C (6684)
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1A6D (6765)
{
	if (iParam2 == -1)
		iParam2 = func_39();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_39() // Position - 0x1A8B (6795)
{
	return Global_1574927;
}

int func_40(int iParam0, int iParam1) // Position - 0x1A97 (6807)
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

BOOL func_41(int iParam0) // Position - 0x1E0B (7691)
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

void func_42(int iParam0) // Position - 0x1E3A (7738)
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_114370.f_20414.f_150[i], offset);

	return;
}

void func_43(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1E7C (7804)
{
	func_44(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_44(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1E9E (7838)
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

	for (i = 0; i < Global_114370.f_20414.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_114370.f_20414[i /*16*/], sParam0))
			return;
	}

	if (Global_114370.f_20414.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_114370.f_20414[Global_114370.f_20414.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_114370.f_20414[Global_114370.f_20414.f_145 /*16*/].f_4), sParam1, 16);
		Global_114370.f_20414[Global_114370.f_20414.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_114370.f_20414[Global_114370.f_20414.f_145 /*16*/].f_9 = iParam5;
		Global_114370.f_20414[Global_114370.f_20414.f_145 /*16*/].f_11 = iParam6;
		Global_114370.f_20414[Global_114370.f_20414.f_145 /*16*/].f_12 = iParam2;
		Global_114370.f_20414[Global_114370.f_20414.f_145 /*16*/].f_13 = iParam7;
		Global_114370.f_20414[Global_114370.f_20414.f_145 /*16*/].f_14 = iParam8;
		Global_114370.f_20414[Global_114370.f_20414.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_114370.f_20414[Global_114370.f_20414.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_114370.f_20414[Global_114370.f_20414.f_145 /*16*/].f_10 = -1;
	
		Global_114370.f_20414.f_145 = Global_114370.f_20414.f_145 + 1;
		func_45();
	}

	return;
}

void func_45() // Position - 0x2072 (8306)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_114370.f_20414.f_146[i] = 0;
	}

	for (i = 0; i < Global_114370.f_20414.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_114370.f_20414[i /*16*/].f_11, 0))
			if (Global_114370.f_20414[i /*16*/].f_12 > Global_114370.f_20414.f_146[0])
				Global_114370.f_20414.f_146[0] = Global_114370.f_20414[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114370.f_20414[i /*16*/].f_11, 1))
			if (Global_114370.f_20414[i /*16*/].f_12 > Global_114370.f_20414.f_146[1])
				Global_114370.f_20414.f_146[1] = Global_114370.f_20414[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114370.f_20414[i /*16*/].f_11, 2))
			if (Global_114370.f_20414[i /*16*/].f_12 > Global_114370.f_20414.f_146[2])
				Global_114370.f_20414.f_146[2] = Global_114370.f_20414[i /*16*/].f_12;
	}

	return;
}

int func_46() // Position - 0x2189 (8585)
{
	func_18();

	switch (Global_114370.f_2367.f_539.f_4321)
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

BOOL func_47(int iParam0) // Position - 0x21CF (8655)
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_114370.f_20414.f_150[i], num);

	return false;
}

void func_48(int iParam0, int iParam1) // Position - 0x220F (8719)
{
	MISC::SET_BIT(&Global_114370.f_24999.f_8[iParam0], iParam1);
	return;
}

int func_49(int iParam0) // Position - 0x222A (8746)
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

int func_50() // Position - 0x22DB (8923)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_51(unk);
	return num;
}

int func_51(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x22F8 (8952)
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

int func_52() // Position - 0x24D2 (9426)
{
	return 1;
}

BOOL func_53() // Position - 0x24DB (9435)
{
	if (!bLocal_79)
	{
		BUILTIN::WAIT(0);
	
		if (!PED::IS_PED_INJURED(pedLocal_51))
		{
			if (iLocal_66 == -1)
			{
				PED::SET_PED_CAN_RAGDOLL(pedLocal_51, false);
				MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(5, 0.5f);
				MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(5, 1f);
				PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(pedLocal_51, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(pedLocal_51, true);
				TASK::TASK_PLAY_ANIM(pedLocal_51, sLocal_265, "girl_villian_shot", 8f, -2f, -1, 10, 0, false, false, false);
				iLocal_66 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_68, uLocal_71, 2);
			
				if (!PED::IS_PED_INJURED(pedLocal_52))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_52, hLocal_57);
				
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.307045f, 6391.8535f, 30.640295f, -102.55954f, 6403.1025f, 32.454437f, 8.5f, false, true, 0))
						TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_52, iLocal_66, sLocal_265, "bystander_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
					else
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_52, false);
				}
			
				TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_51, iLocal_66, sLocal_265, "girl_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_66))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_66) > 0.1f)
					func_3();
			
				if (!bLocal_76)
					if (bLocal_85)
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_66) > 0.5f)
							if (_CONVERSATION_ADD_LINE(&uLocal_99, "RERHOAU", "RERHO_SAINT", 4, iLocal_264, 0, 0))
								bLocal_76 = true;
					else if (_CONVERSATION_ADD_LINE(&uLocal_99, "RERHOAU", "RERHO_THANK", 4, iLocal_264, 0, 0))
						bLocal_76 = true;
			
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_66) == 1f)
				{
					iLocal_66 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_68, uLocal_71, 2);
					func_1(pedLocal_51, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24, false);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_66, true);
				
					if (!PED::IS_PED_INJURED(pedLocal_52))
					{
						if (bLocal_85)
						{
							TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_52, iLocal_66, sLocal_265, "bystander_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
							TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_51, -1, SLF_USE_TORSO, 2);
							TASK::TASK_GO_TO_ENTITY(0, pedLocal_51, 20000, 3f, 1f, 1073741824, 0);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_77);
						}
					
						PED::SET_PED_KEEP_TASK(pedLocal_52, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_52, hLocal_59);
					}
				
					TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_51, iLocal_66, sLocal_265, "girl_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
					PED::SET_PED_KEEP_TASK(pedLocal_51, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_51, hLocal_59);
					PED::SET_PED_CAN_RAGDOLL(pedLocal_51, true);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					bLocal_79 = true;
				}
			}
		}
	}

	return bLocal_79;
}

void func_54() // Position - 0x2738 (10040)
{
	Global_21468 = 0;
	func_55();
	return;
}

void func_55() // Position - 0x2748 (10056)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23613 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22602 = 6;
	}

	return;
}

void func_56(var uParam0, int iParam1) // Position - 0x2769 (10089)
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_57() // Position - 0x2786 (10118)
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.307045f, 6391.8535f, 30.640295f, -102.55954f, 6403.1025f, 32.454437f, 8.5f, false, true, 0) && PED::CAN_PED_SEE_HATED_PED(pedLocal_50, PLAYER::PLAYER_PED_ID()) || func_67(pedLocal_50, &uLocal_60, &iLocal_61, 0, false, 1077936128, 0) && PED::CAN_PED_SEE_HATED_PED(pedLocal_50, PLAYER::PLAYER_PED_ID()) || func_66(1) && PED::CAN_PED_SEE_HATED_PED(pedLocal_50, PLAYER::PLAYER_PED_ID()) || func_64() || func_63() || func_4() || func_62() || PED::IS_PED_RAGDOLL(pedLocal_50) || func_61() || func_60() || func_58(pedLocal_50))
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			if (!WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(pedLocal_50, joaat("WEAPON_STUNGUN"), 0))
			{
				if (!PED::IS_PED_INJURED(pedLocal_51))
				{
					if (!PED::IS_PED_RAGDOLL(pedLocal_50))
					{
						iLocal_65 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_68, uLocal_71, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_65, false);
						TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_51, iLocal_65, sLocal_265, "girl_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_50, iLocal_65, sLocal_265, "villian_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						PED::SET_PED_KEEP_TASK(pedLocal_51, true);
						PED::SET_PED_CAN_RAGDOLL(pedLocal_51, false);
					}
				}
			
				if (!PED::IS_PED_INJURED(pedLocal_52))
					PED::SET_PED_CAN_RAGDOLL(pedLocal_52, true);
			
				bLocal_74 = true;
			}
			else
			{
				ENTITY::SET_ENTITY_HEALTH(pedLocal_50, 50, 0, 0);
			}
		}
	}
	else if (BUILTIN::TIMERA() > 6000)
	{
		if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_50) && PED::CAN_PED_SEE_HATED_PED(pedLocal_50, PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_50) && PED::CAN_PED_SEE_HATED_PED(pedLocal_50, PLAYER::PLAYER_PED_ID()))
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_55))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_55, true);
		
			if (!bLocal_78)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -91.307045f, 6391.8535f, 30.640295f, -102.55954f, 6403.1025f, 32.454437f, 8.5f, false, true, 0))
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_99, "RERHOAU", sLocal_89, 4, 0, 0, 0))
						iLocal_61 = 24000;
				
					BUILTIN::SETTIMERA(0);
					bLocal_78 = true;
				}
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sLocal_90, "NULL"))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10))
			{
				case 6:
				case 5:
				case 4:
				case 3:
				case 0:
				case 9:
				case 8:
				case 7:
				case 1:
					if (bLocal_95)
					{
						sLocal_90 = "RERHO_HELP";
						bLocal_95 = false;
					}
					else
					{
						sLocal_90 = "RERHO_RANT";
						bLocal_95 = true;
					}
					break;
			
				case 2:
					sLocal_90 = "RERHO_SCREAM";
					break;
			}
		}
		else if (_CONVERSATION_ADD_LINE(&uLocal_99, "RERHOAU", sLocal_90, 4, iLocal_264, 0, 0))
		{
			BUILTIN::SETTIMERA(0);
		}
	}
	else
	{
		sLocal_90 = "NULL";
	}

	return;
}

BOOL func_58(Ped pedParam0) // Position - 0x2A60 (10848)
{
	Hash weaponHash;
	BOOL flag;

	flag = false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);

	if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), weaponHash, joaat("COMPONENT_AT_AR_FLSH")))
		if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), weaponHash, joaat("COMPONENT_AT_AR_FLSH")))
			flag = true;
	else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), weaponHash, joaat("COMPONENT_AT_PI_FLSH")))
		if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), weaponHash, joaat("COMPONENT_AT_PI_FLSH")))
			flag = true;

	if (flag)
		if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(pedParam0, true), _GET_PLAYER_COORDS(PLAYER::PLAYER_ID())) < 8f)
				return true;

	return false;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x2B26 (11046)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

BOOL func_60() // Position - 0x2B39 (11065)
{
	if (func_101())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_97 + 60000)
		{
			bLocal_98 = true;
			return true;
		}
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_97 + 120000)
	{
		bLocal_98 = true;
		return true;
	}

	return false;
}

BOOL func_61() // Position - 0x2B76 (11126)
{
	float xRadius;
	var sizeAndVehs;
	int i;
	int pedNearbyVehicles;
	Ped randomPedAtCoord;
	Vehicle randomVehicleInSphere;

	xRadius = 75f;
	sizeAndVehs = 32;
	randomPedAtCoord = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(pedLocal_50, false), xRadius, xRadius, xRadius, -1);

	if (!PED::IS_PED_INJURED(randomPedAtCoord))
		if (ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == joaat("S_F_Y_Cop_01") || ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == joaat("S_M_Y_Cop_01"))
			return true;

	randomVehicleInSphere = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(pedLocal_50, false), xRadius, 0, 66561);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(randomVehicleInSphere, false))
		return true;

	pedNearbyVehicles = PED::GET_PED_NEARBY_VEHICLES(pedLocal_50, &sizeAndVehs);

	if (pedNearbyVehicles > 0)
	{
		for (i = 0; i < pedNearbyVehicles; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(sizeAndVehs[i], false))
				if (ENTITY::GET_ENTITY_MODEL(sizeAndVehs[i]) == joaat("police") || ENTITY::GET_ENTITY_MODEL(sizeAndVehs[i]) == joaat("pranger") || ENTITY::GET_ENTITY_MODEL(sizeAndVehs[i]) == joaat("sheriff") || ENTITY::GET_ENTITY_MODEL(sizeAndVehs[i]) == joaat("sheriff2"))
					return true;
		}
	}

	return false;
}

BOOL func_62() // Position - 0x2C7B (11387)
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_50, PLAYER::PLAYER_PED_ID(), 2f, 2f, 1.5f, false, true, 0))
		if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), pedLocal_50))
			return true;

	return false;
}

BOOL func_63() // Position - 0x2CAC (11436)
{
	BOOL flag;

	flag = false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("bulldozer"))
		{
			if (!PED::IS_PED_INJURED(pedLocal_52))
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), pedLocal_52))
					flag = true;
		
			if (!PED::IS_PED_INJURED(pedLocal_51))
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), pedLocal_51))
					flag = true;
		
			if (!PED::IS_PED_INJURED(pedLocal_50))
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), pedLocal_50))
					flag = true;
		}
	}

	flag;
	return flag;
}

BOOL func_64() // Position - 0x2D3C (11580)
{
	BOOL flag;
	BOOL flag2;
	float dx;
	var minimum;
	var maximum;
	float headingFromVector2d;
	float num;
	Vehicle playersLastVehicle;
	Entity trailer;

	flag = false;
	flag2 = false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), &minimum, &maximum);
		num = maximum.f_1;
	
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &trailer))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(trailer), &minimum, &maximum);
				num = num + maximum.f_1;
				num = num + 3f;
			}
		}
	
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 15f)
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_50, num + 17f, num + 17f, 6f, false, true, 0))
				flag2 = true;
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_50, num + 12f, num + 12f, 6f, false, true, 0))
				flag2 = true;
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_50, num + 8f, num + 8f, 6f, false, true, 0))
				flag2 = true;
	}

	if (flag2)
	{
		dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - uLocal_46 };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_65(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
			flag = true;
	
		dx = { uLocal_46 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_65(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
			flag = true;
	}

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(playersLastVehicle, -91.56341f, 6391.747f, 30.639702f, -101.2611f, 6401.6997f, 32.454494f, 7.5f, false, true, 0))
			flag = true;

	flag;
	return flag;
}

BOOL func_65(Vehicle veParam0, float fParam1, float fParam2) // Position - 0x2F0E (12046)
{
	float entityHeading;
	float num;
	float num2;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		entityHeading = ENTITY::GET_ENTITY_HEADING(veParam0);
		num2 = fParam1 - fParam2;
	
		if (num2 < 0f)
			num2 = num2 + 360f;
	
		num = fParam1 + fParam2;
	
		if (num >= 360f)
			num = num - 360f;
	
		if (num > num2)
			if (entityHeading < num && entityHeading > num2)
				return true;
		else if (entityHeading < num || entityHeading > num2)
			return true;
	}

	return false;
}

BOOL func_66(int iParam0) // Position - 0x2F95 (12181)
{
	if (iParam0 == 1)
		if (Global_21239.f_1 > 3)
			if (IS_BIT_SET(Global_9075, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21239.f_1 > 3)
		return true;

	return false;
}

BOOL func_67(Ped pedParam0, var uParam1, var uParam2, int iParam3, BOOL bParam4, int iParam5, int iParam6) // Position - 0x2FEC (12268)
{
	float lockonDistanceOfCurrentPedWeapon;
	int num;
	BOOL flag;
	Vector3 entityCoords;
	Vector3 entityCoords2;
	float num2;

	flag = false;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !bParam4)
		if (PED::IS_PED_ON_FOOT(pedParam0))
			num = iParam5;
		else
			num = iParam5 + 3f;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !bParam4)
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
			num2 = BUILTIN::VDIST(entityCoords, entityCoords2);
		
			if (!IS_BIT_SET(iParam3, 3))
			{
				if (func_73(pedParam0, iParam6))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\\n");
					func_72("	aggroReason = EAggro_Attacked\\n");
					*uParam1 = 3;
					func_71(pedParam0);
					return true;
				}
			}
		
			if (!IS_BIT_SET(iParam3, 1))
			{
				num < 20f;
			
				if (MISC::IS_BULLET_IN_AREA(entityCoords2, iParam5, true))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\\n");
					func_72("	aggroReason = EAggro_ShotNear\\n");
					*uParam1 = 1;
					func_71(pedParam0);
					return true;
				}
			
				if (MISC::IS_PROJECTILE_IN_AREA(entityCoords2 - { iParam5 / 2f, iParam5 / 2f, iParam5 / 2f }, entityCoords2 + { iParam5 / 2f, iParam5 / 2f, iParam5 / 2f }, false))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\\n");
					func_72("	aggroReason = EAggro_ShotNear\\n");
					*uParam1 = 1;
					func_71(pedParam0);
					return true;
				}
			}
		
			if (!IS_BIT_SET(iParam3, 2))
			{
				lockonDistanceOfCurrentPedWeapon = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
			
				if (lockonDistanceOfCurrentPedWeapon < 0f)
					lockonDistanceOfCurrentPedWeapon = 25f;
				else if (lockonDistanceOfCurrentPedWeapon > 25f)
					lockonDistanceOfCurrentPedWeapon = 25f;
			
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
					{
						if (num2 < lockonDistanceOfCurrentPedWeapon)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\\n");
								func_72("	aggro Ped knows player is pointing gun\\n");
								func_68("		lockOnTimer = ", *uParam2);
								func_72("\\n");
								func_68("		time since not LockedOn = ", MISC::GET_GAME_TIMER() - iLocal_2);
								func_72("\\n");
								flag = true;
							
								if (MISC::GET_GAME_TIMER() > iLocal_2 + *uParam2)
								{
									func_72("			aggroReason = EAggro_HostileOrEnemy\\n");
									*uParam1 = 2;
									func_71(pedParam0);
									return true;
								}
							}
						}
						else
						{
							flag = false;
						}
					}
					else
					{
						flag = false;
					}
				}
			}
		
			if (!IS_BIT_SET(iParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\\n");
					func_72("			aggroReason = EAggro_Danger\\n");
					*uParam1 = 0;
					func_71(pedParam0);
					return true;
				}
			}
		}
	}

	if (!flag)
		iLocal_2 = MISC::GET_GAME_TIMER();

	return false;
}

void func_68(char* sParam0, int iParam1) // Position - 0x323E (12862)
{
	func_70(sParam0);
	func_69(iParam1);
	return;
}

void func_69(int iParam0) // Position - 0x3252 (12882)
{
	iParam0 > 0;
	return;
}

void func_70(char* sParam0) // Position - 0x3260 (12896)
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}

void func_71(Ped pedParam0) // Position - 0x3273 (12915)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedParam0);
	return;
}

void func_72(char* sParam0) // Position - 0x3281 (12929)
{
	func_70(sParam0);
	return;
}

BOOL func_73(Ped pedParam0, int iParam1) // Position - 0x328F (12943)
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
			return true;
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
		if (PED::GET_PED_MAX_HEALTH(pedParam0) - ENTITY::GET_ENTITY_HEALTH(pedParam0) > iParam1)
			return true;

	return false;
}

void func_74() // Position - 0x32DC (13020)
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -62.6571f, 6447.0796f, 40.49928f, -153.64105f, 6354.579f, 23.990635f, 144.25f, false, true, 0) || CAM::IS_SPHERE_VISIBLE(uLocal_46, 15f) || bLocal_74 || func_4())
	{
		blLocal_55 = func_85(pedLocal_50, true, 0);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_55))
			HUD::SHOW_HEIGHT_ON_BLIP(blLocal_55, false);
	
		func_75(true);
		iLocal_97 = MISC::GET_GAME_TIMER();
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	else
	{
		func_57();
	}

	return;
}

int func_75(BOOL bParam0) // Position - 0x336C (13164)
{
	if (func_79())
	{
		Global_114360 = true;
		Global_114357 = MISC::GET_GAME_TIMER();
	
		if (func_41(Global_114359))
			func_76(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_41(Global_114359))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_76(int iParam0) // Position - 0x33BF (13247)
{
	switch (iParam0)
	{
		case 0:
			if (Global_114370.f_24999.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_78(iParam0), -1);
					Global_114370.f_24999.f_2 = Global_114370.f_24999.f_2 + 1;
					MISC::SET_BIT(&Global_114366, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_114366, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_78(iParam0), -1);
					Global_114370.f_24999.f_3 = Global_114370.f_24999.f_3 + 1;
					MISC::SET_BIT(&Global_114366, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_114366, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_78(iParam0), -1);
					Global_114370.f_24999.f_4 = Global_114370.f_24999.f_4 + 1;
					MISC::SET_BIT(&Global_114366, 2);
				}
			}
			break;
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x349A (13466)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

char* func_78(int iParam0) // Position - 0x34B1 (13489)
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

BOOL func_79() // Position - 0x34F5 (13557)
{
	switch (func_80(&Global_33358, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_80(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x352B (13611)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99370.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_84(0))
			return 0;
	
		Global_44356 = Global_44356 + 1;
		*uParam0 = Global_44356;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_24009.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44392 = iParam2;
		Global_44354 = *uParam0;
		Global_44355 = iParam4;
		Global_44353 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44353 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44353; i = i + 1)
			{
				if (Global_44359[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44354 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44353 == 8)
			return 0;
	
		Global_44356 = Global_44356 + 1;
		*uParam0 = Global_44356;
		Global_44359[Global_44353 /*4*/] = Global_44356;
		Global_44359[Global_44353 /*4*/].f_1 = iParam1;
		Global_44359[Global_44353 /*4*/].f_2 = iParam2;
		Global_44359[Global_44353 /*4*/].f_3 = 0;
		Global_44353 = Global_44353 + 1;
	
		if (iParam4 != 0)
			func_81(uParam0, iParam4);
	}

	return 2;
}

void func_81(var uParam0, int iParam1) // Position - 0x3662 (13922)
{
	int i;

	if (Global_44353 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44353; i = i + 1)
	{
		if (Global_44359[i /*4*/] == *uParam0)
			Global_44359[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x36B1 (14001)
{
	return func_83(iParam0, Global_44392);
}

BOOL func_83(int iParam0, int iParam1) // Position - 0x36C2 (14018)
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

BOOL func_84(int iParam0) // Position - 0x38A3 (14499)
{
	if (Global_44392 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

Blip func_85(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x38C5 (14533)
{
	iParam2 = iParam2;
	return func_86(pedParam0, bParam1, 145);
}

Blip func_86(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x38DB (14555)
{
	Blip blip;

	blip = func_87(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2241[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2241[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_87(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3925 (14629)
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

var func_88(BOOL bParam0, var uParam1, var uParam2) // Position - 0x39C9 (14793)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_89() // Position - 0x39E0 (14816)
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_97())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_96())
			return false;

	if (func_90(100f, true) != -1)
		return true;

	return false;
}

int func_90(float fParam0, BOOL bParam1) // Position - 0x3A42 (14914)
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
		if (func_19(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_46();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_114370.f_18578[num /*6*/], 2) && !IS_BIT_SET(Global_114370.f_18578[num /*6*/], 3))
				{
					func_91(num, &unk);
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

void func_91(int iParam0, var uParam1) // Position - 0x3AF3 (15091)
{
	switch (iParam0)
	{
		case 0:
			func_92(uParam1, "Abigail1", func_94(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
	
		case 1:
			func_92(uParam1, "Abigail2", func_94(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
	
		case 2:
			func_92(uParam1, "Barry1", func_94(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
	
		case 3:
			func_92(uParam1, "Barry2", func_94(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
	
		case 4:
			func_92(uParam1, "Barry3", func_94(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 5:
			func_92(uParam1, "Barry3A", func_94(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 6:
			func_92(uParam1, "Barry3C", func_94(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 7:
			func_92(uParam1, "Barry4", func_94(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_93(iParam0), 0, 0);
			break;
	
		case 8:
			func_92(uParam1, "Dreyfuss1", func_94(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 9:
			func_92(uParam1, "Epsilon1", func_94(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 10:
			func_92(uParam1, "Epsilon2", func_94(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
	
		case 11:
			func_92(uParam1, "Epsilon3", func_94(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 12:
			func_92(uParam1, "Epsilon4", func_94(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 13:
			func_92(uParam1, "Epsilon5", func_94(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
	
		case 14:
			func_92(uParam1, "Epsilon6", func_94(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 15:
			func_92(uParam1, "Epsilon7", func_94(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 16:
			func_92(uParam1, "Epsilon8", func_94(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
	
		case 17:
			func_92(uParam1, "Extreme1", func_94(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 18:
			func_92(uParam1, "Extreme2", func_94(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 19:
			func_92(uParam1, "Extreme3", func_94(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 20:
			func_92(uParam1, "Extreme4", func_94(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 21:
			func_92(uParam1, "Fanatic1", func_94(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_93(iParam0), 1, 0);
			break;
	
		case 22:
			func_92(uParam1, "Fanatic2", func_94(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_93(iParam0), 1, 0);
			break;
	
		case 23:
			func_92(uParam1, "Fanatic3", func_94(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_93(iParam0), 0, 1);
			break;
	
		case 24:
			func_92(uParam1, "Hao1", func_94(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_93(iParam0), 0, 1);
			break;
	
		case 25:
			func_92(uParam1, "Hunting1", func_94(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 26:
			func_92(uParam1, "Hunting2", func_94(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 27:
			func_92(uParam1, "Josh1", func_94(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
	
		case 28:
			func_92(uParam1, "Josh2", func_94(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
	
		case 29:
			func_92(uParam1, "Josh3", func_94(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
	
		case 30:
			func_92(uParam1, "Josh4", func_94(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
	
		case 31:
			func_92(uParam1, "Maude1", func_94(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 32:
			func_92(uParam1, "Minute1", func_94(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 33:
			func_92(uParam1, "Minute2", func_94(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 34:
			func_92(uParam1, "Minute3", func_94(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 35:
			func_92(uParam1, "MrsPhilips1", func_94(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 36:
			func_92(uParam1, "MrsPhilips2", func_94(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 37:
			func_92(uParam1, "Nigel1", func_94(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
	
		case 38:
			func_92(uParam1, "Nigel1A", func_94(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
	
		case 39:
			func_92(uParam1, "Nigel1B", func_94(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
			break;
	
		case 40:
			func_92(uParam1, "Nigel1C", func_94(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
			break;
	
		case 41:
			func_92(uParam1, "Nigel1D", func_94(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
			break;
	
		case 42:
			func_92(uParam1, "Nigel2", func_94(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
	
		case 43:
			func_92(uParam1, "Nigel3", func_94(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
	
		case 44:
			func_92(uParam1, "Omega1", func_94(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 45:
			func_92(uParam1, "Omega2", func_94(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 46:
			func_92(uParam1, "Paparazzo1", func_94(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 47:
			func_92(uParam1, "Paparazzo2", func_94(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 48:
			func_92(uParam1, "Paparazzo3", func_94(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 49:
			func_92(uParam1, "Paparazzo3A", func_94(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 50:
			func_92(uParam1, "Paparazzo3B", func_94(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 51:
			func_92(uParam1, "Paparazzo4", func_94(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 52:
			func_92(uParam1, "Rampage1", func_94(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 54:
			func_92(uParam1, "Rampage3", func_94(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
	
		case 55:
			func_92(uParam1, "Rampage4", func_94(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
	
		case 56:
			func_92(uParam1, "Rampage5", func_94(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
	
		case 53:
			func_92(uParam1, "Rampage2", func_94(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
	
		case 57:
			func_92(uParam1, "TheLastOne", func_94(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 58:
			func_92(uParam1, "Tonya1", func_94(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 59:
			func_92(uParam1, "Tonya2", func_94(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 60:
			func_92(uParam1, "Tonya3", func_94(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 61:
			func_92(uParam1, "Tonya4", func_94(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		case 62:
			func_92(uParam1, "Tonya5", func_94(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_92(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x4D3D (19773)
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

int func_93(int iParam0) // Position - 0x4DCE (19918)
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

struct<2> func_94(int iParam0) // Position - 0x5114 (20756)
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_95(iParam0) };

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

struct<2> func_95(int iParam0) // Position - 0x514C (20812)
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

BOOL func_96() // Position - 0x5599 (21913)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_97() // Position - 0x55B6 (21942)
{
	if (func_100() && !func_96())
		return true;

	if (func_99() && func_98())
		return true;

	return false;
}

BOOL func_98() // Position - 0x55E8 (21992)
{
	return Global_114088 > 0;
}

BOOL func_99() // Position - 0x55F6 (22006)
{
	if (Global_98814 != -1)
		return true;

	return false;
}

BOOL func_100() // Position - 0x560B (22027)
{
	if (Global_98814 != -1)
		return IS_BIT_SET(Global_92680[Global_98814 /*34*/].f_15, 20);

	return false;
}

BOOL func_101() // Position - 0x562E (22062)
{
	if (Global_114359 == func_50() && MISC::GET_RANDOM_EVENT_FLAG() && Global_114360)
		return true;

	return false;
}

void func_102() // Position - 0x5659 (22105)
{
	if (HUD::DOES_BLIP_EXIST(blLocal_55))
		HUD::SHOW_HEIGHT_ON_BLIP(blLocal_55, true);

	if (!PED::IS_PED_INJURED(pedLocal_50))
	{
		PED::SET_PED_RESET_FLAG(pedLocal_50, 156, true);
	
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_65))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_65) > 0.1f)
			{
				if (!bLocal_80)
				{
					if (!PED::IS_PED_INJURED(pedLocal_51))
						PED::SET_PED_SHOOTS_AT_COORD(pedLocal_50, PED::GET_PED_BONE_COORDS(pedLocal_51, 31086, 0f, 0f, -0.1f), false);
				
					bLocal_80 = true;
					bLocal_78 = true;
					func_103();
				}
			}
		}
		else if (!PED::IS_PED_INJURED(pedLocal_51))
		{
			PED::SET_PED_CAN_RAGDOLL(pedLocal_51, true);
			ENTITY::SET_ENTITY_HEALTH(pedLocal_51, 0, 0, 0);
		}
	
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_65))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_65) > 0.6f)
				func_103();
		}
		else if (!PED::IS_PED_INJURED(pedLocal_51))
		{
			PED::SET_PED_CAN_RAGDOLL(pedLocal_51, true);
			ENTITY::SET_ENTITY_HEALTH(pedLocal_51, 0, 0, 0);
		}
	
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_65))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_65) == 1f)
			{
				if (!PED::IS_PED_INJURED(pedLocal_51))
				{
					PED::SET_PED_CAN_RAGDOLL(pedLocal_51, true);
					ENTITY::SET_ENTITY_HEALTH(pedLocal_51, 0, 0, 0);
				}
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(pedLocal_51))
			{
				PED::SET_PED_CAN_RAGDOLL(pedLocal_51, true);
				ENTITY::SET_ENTITY_HEALTH(pedLocal_51, 0, 0, 0);
			}
		
			func_103();
		}
	}

	return;
}

void func_103() // Position - 0x5772 (22386)
{
	if (!bLocal_81)
	{
		if (!PED::IS_PED_INJURED(pedLocal_50))
		{
			TASK::CLEAR_PED_TASKS(pedLocal_50);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_58, hLocal_57);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_57, hLocal_58);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, hLocal_59, hLocal_57);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_59, hLocal_58);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_58, hLocal_59);
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_50, PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, false, true, 0))
			{
				TASK::TASK_COMBAT_PED(pedLocal_50, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_TARGET_LOSS_RESPONSE(pedLocal_50, 1);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(pedLocal_50, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
			}
		
			PED::SET_PED_KEEP_TASK(pedLocal_50, true);
			_CONVERSATION_ADD_LINE(&uLocal_99, "RERHOAU", "RERHO_DIE", 4, 0, 0, 0);
			bLocal_81 = true;
		}
	}

	return;
}

void func_104() // Position - 0x5821 (22561)
{
	if (bLocal_96)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_52, false);
		TASK::TASK_SMART_FLEE_COORD(pedLocal_52, uLocal_46, 50f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_52, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_52);
		func_54();
	}

	return;
}

void func_105() // Position - 0x5858 (22616)
{
	if (uLocal_99[2 /*10*/].f_7)
		func_56(&uLocal_99, 2);

	func_108();
	PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uLocal_46, 1, 1077936128, 0);
	MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(1, 0.5f);
	MISC::SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(1, 1f);

	if (uLocal_99[1 /*10*/].f_7)
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_55))
			HUD::REMOVE_BLIP(&blLocal_55);
	
		func_56(&uLocal_99, 1);
	}

	if (bLocal_78)
	{
		if (!WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(pedLocal_52, joaat("WEAPON_PISTOL"), 0) && PED::IS_PED_INJURED(pedLocal_50))
		{
			if (!bLocal_98)
				iLocal_45 = 2;
			else if (func_107(&uLocal_99, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_264, 0))
				iLocal_45 = 2;
		}
		else
		{
			if (!PED::IS_PED_INJURED(pedLocal_52))
			{
				if (!PED::IS_PED_INJURED(pedLocal_50))
					TASK::TASK_SMART_FLEE_PED(pedLocal_52, pedLocal_50, 100f, -1, false, false);
				else
					TASK::TASK_SMART_FLEE_PED(pedLocal_52, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			
				PED::SET_PED_KEEP_TASK(pedLocal_52, true);
			
				if (!bLocal_98)
				{
					if (func_107(&uLocal_99, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_264, 0))
					{
					}
					else
					{
						func_106(pedLocal_52, "GENERIC_SHOCKED_HIGH", 24);
					}
				}
				else
				{
					func_106(pedLocal_52, "GENERIC_SHOCKED_HIGH", 24);
				}
			
				BUILTIN::WAIT(0);
			}
		
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_CREATE_RANDOM_COPS(true);
			iLocal_45 = 2;
		}
	}
	else
	{
		func_163();
	}

	return;
}

void func_106(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x599D (22941)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_2(iParam2), 1);
	return;
}

BOOL func_107(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x59B4 (22964)
{
	func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);

	if (iParam4 > 7)
		if (iParam4 < 12)
			iParam4 = 7;

	Global_22609 = false;
	Global_22616 = 0;
	Global_22611 = 0;
	Global_23593 = 0;
	Global_23595 = 0;
	Global_23599 = 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23606, sParam3, 24);
	Global_2883585 = 0;
	return func_6(sParam2, iParam4, false);
}

void func_108() // Position - 0x5A08 (23048)
{
	if (func_4())
		bLocal_96 = true;

	if (bLocal_96 == false)
	{
		if (!PED::IS_PED_INJURED(pedLocal_52) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (bLocal_78)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 5f, 1073741824, 1073741824, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_265, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, false, false, false);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				PED::SET_PED_KEEP_TASK(pedLocal_52, true);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_77);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, uLocal_46, 1f, 20000, 1193033728, 1056964608);
				TASK::TASK_LOOK_AT_COORD(0, uLocal_46, -1, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_265, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_77);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_52, iLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_77);
				PED::SET_PED_KEEP_TASK(pedLocal_52, true);
			}
		}
	}

	return;
}

void func_109() // Position - 0x5B1A (23322)
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_51, PLAYER::PLAYER_PED_ID(), true))
	{
		if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 2))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	
		PED::SET_PED_CAN_RAGDOLL(pedLocal_51, true);
		ENTITY::SET_ENTITY_HEALTH(pedLocal_51, 0, 0, 0);
		bLocal_74 = true;
		bLocal_78 = true;
		func_103();
	}
	else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(pedLocal_51))
	{
		AUDIO::PLAY_PAIN(pedLocal_51, 4, 0, 0);
	}

	return;
}

void func_110() // Position - 0x5B80 (23424)
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_46, 50f, 50f, 25f, false, true, 0))
		iLocal_264 = 0;
	else
		iLocal_264 = 1;

	return;
}

BOOL func_111() // Position - 0x5BB4 (23476)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_42) < 75f * 75f)
			return true;
	
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_96())
			return false;
	}

	if (func_97())
		return true;

	if (func_90(100f, true) != -1)
		return true;

	return false;
}

BOOL func_112() // Position - 0x5C3A (23610)
{
	Hash model;
	Hash model2;
	Hash model3;
	char* name;

	uLocal_46 = { -96.4f, 6398.201f, 30.4542f };
	fLocal_49 = 0f;
	model = joaat("A_M_M_Hillbilly_02");
	model2 = joaat("A_M_M_Business_01");
	model3 = joaat("A_F_M_Tourist_01");
	name = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
	STREAMING::REQUEST_MODEL(model);
	STREAMING::REQUEST_MODEL(model3);
	STREAMING::REQUEST_MODEL(model2);
	STREAMING::REQUEST_ANIM_DICT(sLocal_265);

	if (STREAMING::HAS_MODEL_LOADED(model) && STREAMING::HAS_MODEL_LOADED(model3) && STREAMING::HAS_MODEL_LOADED(model2) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_265))
	{
		MISC::CLEAR_AREA(uLocal_46, 5f, true, true, false, false);
		pedLocal_51 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, model3, uLocal_46, fLocal_49, true, true);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(pedLocal_51, true);
		AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_51, name);
		PED::SET_PED_CONFIG_FLAG(pedLocal_51, 20, true);
		pedLocal_50 = PED::CREATE_PED(PED_TYPE_CRIMINAL, model, uLocal_46, fLocal_49, true, true);
		ENTITY::SET_ENTITY_HEALTH(pedLocal_50, 125, 0, 0);
		PED::SET_PED_MAX_HEALTH(pedLocal_50, 125);
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_50, 128, true);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(pedLocal_50, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_50, 42, true);
		PED::SET_PED_HEARING_RANGE(pedLocal_50, 1.5f);
		AUDIO::STOP_PED_SPEAKING(pedLocal_50, true);
		PED::SET_PED_SEEING_RANGE(pedLocal_50, 40f);
		PED::SET_PED_CONFIG_FLAG(pedLocal_50, 20, true);
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(pedLocal_50, fLocal_91);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(pedLocal_50, fLocal_92);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(pedLocal_50, fLocal_93);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(pedLocal_50, fLocal_94);
		pedLocal_52 = PED::CREATE_PED(PED_TYPE_CIVMALE, model2, -98.113f, 6405.354f, 30.6005f, fLocal_49, true, true);
		TASK::ADD_COVER_BLOCKING_AREA({ 31.640238f, 6405.0576f, -98.41389f } - { 5f, 5f, 5f }, { 31.640238f, 6405.0576f, -98.41389f } + { 5f, 5f, 5f }, false, false, true, false);
		iLocal_63 = PED::ADD_SCENARIO_BLOCKING_AREA({ 31.640238f, 6405.0576f, -98.41389f } - { 40f, 40f, 40f }, { 31.640238f, 6405.0576f, -98.41389f } + { 40f, 40f, 40f }, false, true, true, true, 1);
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_52, false);
		AUDIO::STOP_PED_SPEAKING(pedLocal_52, true);
		uLocal_46.f_2 = uLocal_46.f_2 + 1f;
		uLocal_68 = { uLocal_46 };
		uLocal_71 = { 0f, 0f, fLocal_49 };
		iLocal_65 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_68, uLocal_71, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_65, true);
		TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_50, iLocal_65, sLocal_265, "villian_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_51, iLocal_65, sLocal_265, "girl_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		iLocal_67 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_68, uLocal_71, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_67, true);
		TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_52, iLocal_67, sLocal_265, "bystander_taking_cover", 1000f, -1.5f, 5, 0, 1148846080, 0);
		PED::SET_PED_CONFIG_FLAG(pedLocal_52, 185, true);
		WEAPON::GIVE_WEAPON_TO_PED(pedLocal_50, joaat("WEAPON_PISTOL"), -1, true, true);
		PED::SET_PED_AS_ENEMY(pedLocal_50, true);
		PED::ADD_RELATIONSHIP_GROUP("re_rescuehostage relManager", &hLocal_59);
		PED::ADD_RELATIONSHIP_GROUP("re_rescuehostage relBadGuy", &hLocal_58);
		hLocal_57 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_58, hLocal_57);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_57, hLocal_58);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_52, hLocal_59);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_50, hLocal_58);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_51, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_52, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_50, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_52, BF_0x0036D422, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_52, BF_AlwaysFlee, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_52, BF_Aggressive, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_52, BF_AlwaysFight, false);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(pedLocal_52, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_51, BF_0x0036D422, true);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(pedLocal_51, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_51, BF_Aggressive, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_51, BF_AlwaysFight, false);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_99, 0, PLAYER::PLAYER_PED_ID(), sLocal_88, 0, 1);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_99, 1, pedLocal_50, "RHCriminal", 0, 1);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_99, 2, pedLocal_51, "RHHostage", 0, 1);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_99, 3, pedLocal_52, "RHBystander", 0, 1);
		PED::SET_CREATE_RANDOM_COPS(false);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_113(true);
		MISC::CLEAR_AREA_OF_OBJECTS(-89f, 6392f, 32f, 3f, 2);
		BUILTIN::SETTIMERA(8000);
		return true;
	}

	return false;
}

void func_113(BOOL bParam0) // Position - 0x5FE6 (24550)
{
	if (bParam0)
		Global_33533 = 1;
	else
		Global_33533 = 0;

	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x5FFE (24574)
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_79768)
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

void func_115() // Position - 0x6099 (24729)
{
	return;
}

void func_116() // Position - 0x60A1 (24737)
{
	return;
}

void func_117() // Position - 0x60A9 (24745)
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			sLocal_88 = "MICHAEL";
			sLocal_89 = "RERHO_MDOWN";
			break;
	
		case CHAR_FRANKLIN:
			sLocal_88 = "FRANKLIN";
			sLocal_89 = "RERHO_FDOWN";
			break;
	
		case CHAR_TREVOR:
			sLocal_88 = "TREVOR";
			sLocal_89 = "RERHO_TDOWN";
			break;
	}

	return;
}

void func_118(int iParam0) // Position - 0x60F9 (24825)
{
	if (iParam0 == -1)
		iParam0 = func_50();

	if (iParam0 == -1)
		return;

	func_120(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114356 = 0;
	func_119();
	return;
}

void func_119() // Position - 0x612F (24879)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_120(int iParam0) // Position - 0x616C (24940)
{
	Global_114359 = iParam0;
	return;
}

BOOL func_121(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x617A (24954)
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_152959)
		return false;

	if (iParam3 == -1)
		iParam3 = func_50();

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
		
			if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_96())
				return false;
		}
	
		if (!Global_114370.f_9089)
			return false;
	
		if (func_31(false))
			return false;
	
		if (func_97())
			return false;
	
		if (func_161())
			return false;
	
		if (Global_114359 != -1)
			return false;
	
		if (func_19(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_90(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_42.f_2 > 50f)
				return false;
	
		if (!func_160(iParam3))
			return false;
	
		if (func_19(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_159(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_159(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_19(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_158(iParam3, iParam4, 145))
				return false;
	
		if (!func_157(Global_114370.f_24999.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_114361 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_156())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_147(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_146(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_146(0, 0))
			return false;
	
		if (Global_33445)
			return false;
	
		if (func_160(30) && !func_146(30, 0))
			if (iParam3 != 30)
				if (BUILTIN::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_19(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_114370.f_2367.f_539.f_2300[i /*3*/] };
				num = Global_114370.f_2367.f_539.f_2296[i];
			
				if (func_145(num))
					if (func_123(i))
						if (!func_122(vector, 0f, 0f, 0f, false))
							if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_122(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x6514 (25876)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_123(eCharacter echParam0) // Position - 0x655B (25947)
{
	int num;

	num = Global_114370.f_2367.f_539.f_2296[echParam0];
	return func_124(num);
}

BOOL func_124(int iParam0) // Position - 0x657C (25980)
{
	return func_125(iParam0, 1);
}

int func_125(int iParam0, int iParam1) // Position - 0x658B (25995)
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_145(iParam0))
		return 0;

	func_126(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_126(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x65DE (26078)
{
	func_127(func_138(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_127(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x65FC (26108)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_137(iParam0, iParam1))
	{
		num = func_136(iParam1);
		num2 = func_134(iParam0);
		num3 = func_134(iParam0) - func_134(iParam1);
		num4 = func_136(iParam0) - func_136(iParam1);
		num5 = func_133(iParam0) - func_133(iParam1);
		num6 = func_132(iParam0) - func_132(iParam1);
		num7 = func_131(iParam0) - func_131(iParam1);
		num8 = func_130(iParam0) - func_130(iParam1);
	}
	else
	{
		num = func_136(iParam0);
		num2 = func_134(iParam1);
		num3 = func_134(iParam1) - func_134(iParam0);
		num4 = func_136(iParam1) - func_136(iParam0);
		num5 = func_133(iParam1) - func_133(iParam0);
		num6 = func_132(iParam1) - func_132(iParam0);
		num7 = func_131(iParam1) - func_131(iParam0);
		num8 = func_130(iParam1) - func_130(iParam0);
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
	
		num5 = num5 + func_129(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_128(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
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

float func_128(float fParam0, float fParam1, float fParam2) // Position - 0x67FD (26621)
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_129(int iParam0, int iParam1) // Position - 0x683F (26687)
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

int func_130(int iParam0) // Position - 0x68E1 (26849)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_131(int iParam0) // Position - 0x68F4 (26868)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_132(int iParam0) // Position - 0x6907 (26887)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_133(int iParam0) // Position - 0x691A (26906)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_134(int iParam0) // Position - 0x692C (26924)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_135(BOOL bParam0, var uParam1, var uParam2) // Position - 0x694E (26958)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_136(int iParam0) // Position - 0x6965 (26981)
{
	return iParam0 & 15;
}

BOOL func_137(int iParam0, int iParam1) // Position - 0x6972 (26994)
{
	int num;
	int num2;

	if (!func_145(iParam1) || !func_145(iParam0))
		return 1;

	num = func_134(iParam0);
	num2 = func_134(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_136(iParam0);
	num2 = func_136(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_133(iParam0);
	num2 = func_133(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_132(iParam0);
	num2 = func_132(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_131(iParam0);
	num2 = func_131(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_130(iParam0);
	num2 = func_130(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_138() // Position - 0x6A7E (27262)
{
	var unk;

	func_144(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_143(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_142(&unk, CLOCK::GET_CLOCK_HOURS());
	func_141(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_140(&unk, CLOCK::GET_CLOCK_MONTH());
	func_139(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_139(var uParam0, int iParam1) // Position - 0x6AC4 (27332)
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_140(var uParam0, int iParam1) // Position - 0x6B4A (27466)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_141(var uParam0, int iParam1) // Position - 0x6B7D (27517)
{
	int num;
	int num2;

	num = func_136(*uParam0);
	num2 = func_134(*uParam0);

	if (iParam1 < 1 || iParam1 > func_129(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_142(var uParam0, int iParam1) // Position - 0x6BCE (27598)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_143(var uParam0, int iParam1) // Position - 0x6C08 (27656)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_144(var uParam0, int iParam1) // Position - 0x6C43 (27715)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_145(int iParam0) // Position - 0x6C7F (27775)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_130(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_131(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_132(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_134(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_136(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_133(iParam0);

	if (num6 < 1 || num6 > func_129(num5, num4))
		return false;

	return true;
}

BOOL func_146(int iParam0, int iParam1) // Position - 0x6D5B (27995)
{
	if (IS_BIT_SET(Global_114370.f_24999.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_147(int iParam0) // Position - 0x6D7B (28027)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_19(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_155() || Global_113417 || Global_33301 || func_154() || func_25(8, -1) || func_153() || func_152() || func_151() || func_150() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_155() || Global_33301 || func_154() || func_25(8, -1) || func_151() || func_153() || func_152() || func_150() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_155() || Global_113417 || Global_33301 || func_154() || func_25(8, -1) || func_151() || func_153() || func_152() || func_150() || Global_114370.f_7692.f_919[character] == 5 || Global_44939 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_155() || Global_113417 || Global_33301 || func_154() || func_25(8, -1) || func_153() || func_152() || func_150() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_155() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_25(8, -1) || func_150() || func_149() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_25(8, -1) || func_153() || func_152() || func_149() || func_148())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_155() || Global_33301 || func_154() || func_25(8, -1) || func_152() || func_151() || func_150() || Global_114370.f_7692.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_155() || func_152() || Global_113417 || Global_33301 || func_154() || Global_45607 || func_25(8, -1) || func_151() || func_149() || func_150() || Global_114370.f_7692.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_155() || Global_113417 || Global_33301 || func_154() || func_25(8, -1) || func_151() || func_149() || func_153() || func_152() || func_150())
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

BOOL func_148() // Position - 0x7498 (29848)
{
	return Global_101956.f_1;
}

BOOL func_149() // Position - 0x74A6 (29862)
{
	if (Global_98814 != -1)
		return IS_BIT_SET(Global_92680[Global_98814 /*34*/].f_15, 13);

	return false;
}

BOOL func_150() // Position - 0x74C9 (29897)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_151() // Position - 0x74E3 (29923)
{
	if (Global_80029)
		return true;
	else if (Global_64517 && !Global_64523)
		return true;

	return false;
}

BOOL func_152() // Position - 0x750D (29965)
{
	return Global_101969.f_400 > 0;
}

BOOL func_153() // Position - 0x751E (29982)
{
	return Global_101969.f_399 > 0;
}

BOOL func_154() // Position - 0x752F (29999)
{
	return Global_1575088;
}

BOOL func_155() // Position - 0x753B (30011)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99370.f_44 == 1;

	return false;
}

BOOL func_156() // Position - 0x7557 (30039)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_9914[Global_21239 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_157(int iParam0) // Position - 0x757F (30079)
{
	return func_137(func_138(), iParam0);
}

BOOL func_158(int iParam0, int iParam1, eCharacter echParam2) // Position - 0x7591 (30097)
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

int func_159(eCharacter echParam0) // Position - 0x7675 (30325)
{
	if (!func_19(echParam0))
		return 7;

	return Global_114370.f_7692.f_919[echParam0];
}

BOOL func_160(int iParam0) // Position - 0x7699 (30361)
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_114370.f_24999, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_114370.f_24999.f_1, num);
	}

	return flag;
}

BOOL func_161() // Position - 0x76F1 (30449)
{
	Vehicle vehiclePedIsIn;

	if (Global_33450)
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

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x7735 (30517)
{
	int profileSetting;

	if (Global_153251 == 2)
		return true;
	else if (Global_153251 == 3)
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

void func_163() // Position - 0x77ED (30701)
{
	if (func_101())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PED::SET_CREATE_RANDOM_COPS(true);
	}

	if (iLocal_45 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(hLocal_58);
		PED::REMOVE_RELATIONSHIP_GROUP(hLocal_59);
		AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(20000);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_63, false);
		EVENT::REMOVE_SHOCKING_EVENT(shLocal_62);
		func_113(false);
	}

	if (!PED::IS_PED_INJURED(pedLocal_50) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(pedLocal_50, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_50, true);
		BUILTIN::WAIT(0);
	}

	func_164(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_164(int iParam0) // Position - 0x7871 (30833)
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_50();

	if (iParam0 == -1)
		return;

	if (func_101())
	{
		func_168(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114361 = MISC::GET_GAME_TIMER();
		func_167(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_166(Global_114359, true), 64);
	
		if (func_49(Global_114359) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_114358, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_114356, MISC::GET_GAME_TIMER() - Global_114357, 0);
	}
	else if (IS_BIT_SET(Global_114366, 0) && Global_114370.f_24999.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114366, 0);
	}

	func_165(&Global_33358);
	Global_114360 = false;
	func_120(-1);
	return;
}

void func_165(var uParam0) // Position - 0x7923 (31011)
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44354))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44353 = 0;
	Global_44355 = 0;
	Global_44392 = 15;
	Global_64520 = 0;
	Global_64521 = 0;
	return;
}

char* func_166(int iParam0, BOOL bParam1) // Position - 0x7960 (31072)
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

void func_167(int iParam0) // Position - 0x7BA9 (31657)
{
	Global_44943 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_168(int iParam0) // Position - 0x7BBB (31675)
{
	func_169(iParam0, 0, func_174(iParam0));
	return;
}

void func_169(int iParam0, int iParam1, int iParam2) // Position - 0x7BD0 (31696)
{
	int unk;
	var unk2;

	unk = func_138();
	func_172(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_171(iParam0, &unk);
	unk2 = { func_170(&unk) };
	return;
}

struct<16> func_170(var uParam0) // Position - 0x7BFF (31743)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_132(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_131(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_130(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_133(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_136(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_134(*uParam0), 64);
	return unk;
}

void func_171(int iParam0, var uParam1) // Position - 0x7CD0 (31952)
{
	Global_114370.f_24999.f_43[iParam0] = *uParam1;
	return;
}

void func_172(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x7CE8 (31976)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_134(*uParam0);
	i = func_136(*uParam0);
	num2 = func_133(*uParam0);
	j = func_132(*uParam0);
	k = func_131(*uParam0);
	l = func_130(*uParam0);

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

	for (m = func_129(i, num); num2 > m; m = func_129(i, num))
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
	func_173(uParam0, l, k, j, num2, i, num);
	return;
}

void func_173(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x7E6A (32362)
{
	func_144(uParam0, iParam1);
	func_143(uParam0, iParam2);
	func_142(uParam0, iParam3);
	func_140(uParam0, iParam5);
	func_141(uParam0, iParam4);
	func_139(uParam0, iParam6);
	return;
}

int func_174(int iParam0) // Position - 0x7EA2 (32418)
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


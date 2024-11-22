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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	Vehicle veLocal_54 = 0;
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
	BOOL bLocal_85 = 0;
	BOOL bLocal_86 = 0;
	BOOL bLocal_87 = 0;
	BOOL bLocal_88 = 0;
	BOOL bLocal_89 = 0;
	int iLocal_90 = 0;
	Blip blLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	Hash hLocal_97 = 0;
	Hash hLocal_98 = 0;
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
	char* sLocal_264 = 0;
	char* sLocal_265 = 0;
	char* sLocal_266 = 0;
	int iLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	Vehicle veLocal_275 = 0;
	Vehicle veLocal_276 = 0;
	int iLocal_277 = 0;
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
	sLocal_16 = "NULL";
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
	iLocal_44 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_45 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_88 = true;
	iLocal_93 = -1;
	hLocal_97 = func_147();
	hLocal_98 = func_146();
	TEXT_LABEL_ASSIGN_STRING(&uLocal_268, "TAXI_HAIL", 16);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_145();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	Global_113969.f_10052.f_120 = 1;

	while (true)
	{
		switch (iLocal_49)
		{
			case 0:
				if (func_144())
					iLocal_49 = 1;
				else
					SYSTEM::WAIT(500);
				break;
		
			case 1:
				if (func_144())
				{
					uLocal_272 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
					func_112();
				
					if (func_111())
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(-956048545, false);
						func_110();
					
						if (!func_108())
						{
							func_65();
							func_31();
							func_15();
						}
					}
					else
					{
						func_4(false);
						iLocal_49 = 1;
						func_1();
						SYSTEM::WAIT(500);
					}
				}
				else
				{
					func_4(true);
					iLocal_49 = 0;
				}
				break;
		
			case 2:
				if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_267))
				{
					func_4(true);
					iLocal_52 = 3;
					iLocal_49 = 0;
				}
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x16C
{
	if (!func_3())
		if (MISC::ARE_STRINGS_EQUAL("NULL", &Global_113025))
			func_2(false);
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&Global_113025)) == 0)
			func_2(false);

	return;
}

void func_2(BOOL bParam0) // Position - 0x1A6
{
	if (bParam0)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113025, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_113019 = true;
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113025, "NULL", 24);
		Global_113019 = false;
	}

	return;
}

BOOL func_3() // Position - 0x1D2
{
	if (!Global_113018)
		return false;

	if (Global_113019)
		return false;

	return true;
}

void func_4(BOOL bParam0) // Position - 0x1F2
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(-956048545, false);
	func_13();
	func_10();
	func_5();
	bLocal_88 = true;
	bLocal_86 = false;
	iLocal_50 = 0;
	iLocal_51 = 0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	iLocal_94 = 0;

	if (bParam0)
		iLocal_49 = 0;

	return;
}

void func_5() // Position - 0x22D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "HAIL_TAXI", 3))
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "HAIL_TAXI", &uLocal_268, -2f);
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FP_HAIL_TAXI", 3))
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FP_HAIL_TAXI", &uLocal_268, -2f);
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FUCK_U", 3))
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FUCK_U", &uLocal_268, -2f);
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FORGET_IT", 3))
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FORGET_IT", &uLocal_268, -2f);
	
		if (iLocal_93 != -1)
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, false);
	
		if (iLocal_90 == 1)
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
			iLocal_90 = 0;
		}
	}

	STREAMING::REMOVE_ANIM_DICT(&uLocal_268);

	if (iLocal_93 != -1)
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_93);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TXM_H01" /*Press ~INPUT_CONTEXT~ to hail a taxi.*/))
	{
		iLocal_92 = iLocal_92 + 1;
	
		if (iLocal_92 == 3)
			Global_113969.f_10052.f_120 = 1;
	
		HUD::CLEAR_HELP(true);
	}

	if (HUD::DOES_BLIP_EXIST(blLocal_91))
	{
		HUD::SET_BLIP_ROUTE(blLocal_91, false);
		HUD::REMOVE_BLIP(&blLocal_91);
	}

	if (bLocal_86)
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			CAM::STOP_GAMEPLAY_HINT(false);

	if (ENTITY::DOES_ENTITY_EXIST(Global_113001))
		if (!PED::IS_PED_INJURED(Global_113001))
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113001, &uLocal_268, "Aknowledge_R", 3))
				ENTITY::STOP_ENTITY_ANIM(Global_113001, "Aknowledge_R", &uLocal_268, -4f);
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_113001, &uLocal_268, "Aknowledge_L", 3))
				ENTITY::STOP_ENTITY_ANIM(Global_113001, "Aknowledge_L", &uLocal_268, -4f);

	if (iLocal_52 == 0)
		func_6();

	veLocal_276 = 0;
	bLocal_85 = false;
	bLocal_86 = false;
	iLocal_95 = 0;
	iLocal_96 = 0;
	Global_113037 = -1;
	iLocal_53 = 0;
	return;
}

void func_6() // Position - 0x3EC
{
	int taskSequenceId;

	if (ENTITY::DOES_ENTITY_EXIST(Global_113001))
	{
		if (!PED::IS_PED_INJURED(Global_113001))
		{
			PED::SET_PED_CONFIG_FLAG(Global_113001, 251, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113001, false);
		
			if (!PED::IS_PED_FLEEING(Global_113001) && !PED::IS_PED_IN_COMBAT(Global_113001, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_113001, false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_113000))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113000, false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113001, Global_113000))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Global_113001, SCRIPT_TASK_VEHICLE_DRIVE_WANDER) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_113001, SCRIPT_TASK_VEHICLE_DRIVE_WANDER) != 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
								
									if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113000, 1, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113000, 2, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113000, 0, false))
										TASK::TASK_PAUSE(0, 2000);
									else
										TASK::TASK_PAUSE(0, 500);
								
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, Global_113000, 12f, 790699);
									TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
									TASK::TASK_PERFORM_SEQUENCE(Global_113001, taskSequenceId);
									TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Global_113001, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							}
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Global_113001, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Global_113001, SCRIPT_TASK_WANDER_STANDARD) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_113001, SCRIPT_TASK_WANDER_STANDARD) != 0)
				{
					TASK::TASK_WANDER_STANDARD(Global_113001, 1193033728, 0);
				}
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_113001))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_113001))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_113001, false))
			{
				if (!PED::IS_PED_INJURED(Global_113001))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_113001, false, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113001, false);
				}
			
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Global_113001);
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_113000))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_113000))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_113000, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113000, false))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_113000, false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_113000, true, 0);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_113000, false);
				}
			
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_113000);
			}
		}
	}

	Global_113001 = 0;
	Global_113000 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_113031, "NULL", 24);
	Global_113037 = -1;
	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x62A
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x63D
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_9(*uParam0);

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

int func_9(int iParam0) // Position - 0x694
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

void func_10() // Position - 0x6CF
{
	if (iLocal_52 == 1)
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
		func_11();
	}
	else if (iLocal_52 == 2)
	{
		if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
	
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
		func_11();
	}

	func_6();

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TX_H02" /*Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi.*/))
		HUD::CLEAR_HELP(true);

	iLocal_94 = 0;
	iLocal_52 = 0;
	return;
}

void func_11() // Position - 0x72A
{
	int sizeInMembers;
	var unk;
	Ped pedAsGroupMember;

	if (PED::DOES_GROUP_EXIST(func_12()))
	{
		PED::GET_GROUP_SIZE(func_12(), &unk, &sizeInMembers);
	
		if (sizeInMembers > 0)
		{
			pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 0);
		
			if (!PED::IS_PED_INJURED(pedAsGroupMember))
			{
				TASK::CLEAR_PED_TASKS(pedAsGroupMember);
			
				if (!ENTITY::IS_ENTITY_DEAD(Global_113000, false))
					if (PED::IS_PED_IN_VEHICLE(pedAsGroupMember, Global_113000, false))
						TASK::TASK_LEAVE_VEHICLE(pedAsGroupMember, Global_113000, 64);
			}
		
			if (sizeInMembers > 1)
			{
				pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 1);
			
				if (!PED::IS_PED_INJURED(pedAsGroupMember))
				{
					TASK::CLEAR_PED_TASKS(pedAsGroupMember);
				
					if (!ENTITY::IS_ENTITY_DEAD(Global_113000, false))
						if (PED::IS_PED_IN_VEHICLE(pedAsGroupMember, Global_113000, false))
							TASK::TASK_LEAVE_VEHICLE(pedAsGroupMember, Global_113000, 64);
				}
			}
		}
	}

	return;
}

int func_12() // Position - 0x7D9
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_13() // Position - 0x7E9
{
	int taskSequenceId;

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_54.f_1))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(veLocal_54.f_1, false))
		{
			if (veLocal_54.f_1 != Global_113001)
			{
				if (!PED::IS_PED_INJURED(veLocal_54.f_1))
				{
					PED::SET_PED_CONFIG_FLAG(veLocal_54.f_1, 251, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(veLocal_54.f_1, false);
				
					if (!PED::IS_PED_FLEEING(veLocal_54.f_1) && !PED::IS_PED_IN_COMBAT(veLocal_54.f_1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(veLocal_54.f_1, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(veLocal_54))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_54, false))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(veLocal_54.f_1, veLocal_54))
									{
										TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
									
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_54, 1, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_54, 2, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_54, 0, false))
											TASK::TASK_PAUSE(0, 2000);
										else
											TASK::TASK_PAUSE(0, 500);
									
										TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_54, 12f, 790699);
										TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
										TASK::TASK_PERFORM_SEQUENCE(veLocal_54.f_1, taskSequenceId);
										TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
									}
									else
									{
										TASK::TASK_SMART_FLEE_PED(veLocal_54.f_1, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
									}
								}
								else
								{
									TASK::TASK_SMART_FLEE_PED(veLocal_54.f_1, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
								}
							}
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(veLocal_54.f_1, 1193033728, 0);
						}
					}
				}
			
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(veLocal_54.f_1));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(veLocal_54.f_1));
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_54))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(veLocal_54, false))
			if (veLocal_54 != Global_113000)
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_54);

	if (iLocal_51 == 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_98);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_97);
	}

	veLocal_54 = 0;
	veLocal_54.f_1 = 0;
	veLocal_54.f_2 = 0;
	veLocal_54.f_3 = 0;
	veLocal_54.f_5 = 0f;
	veLocal_54.f_6 = 0f;
	veLocal_54.f_7 = 45f;
	veLocal_54.f_8 = 0;
	veLocal_54.f_10 = 0;
	veLocal_54.f_9 = 0;
	veLocal_54.f_11 = { 0f, 0f, 0f };
	veLocal_54.f_14 = { 0f, 0f, 0f };
	veLocal_54.f_17 = { 0f, 0f, 0f };
	veLocal_54.f_20 = { 0f, 0f, 0f };
	veLocal_54.f_23 = { 0f, 0f, 0f };
	veLocal_54.f_26 = { 0f, 0f, 0f };
	veLocal_54.f_29 = 1076367531;
	veLocal_54.f_30 = func_14();
	iLocal_51 = 0;
	return;
}

eCharacter func_14() // Position - 0x9F1
{
	if (Global_32948 == 0 || Global_32948 == 2)
		return 204;

	return 161;
}

void func_15() // Position - 0xA13
{
	if (iLocal_52 == 0)
		func_27();
	else if (iLocal_52 == 1)
		func_23();
	else if (iLocal_52 == 2)
		func_16();
	else if (iLocal_52 == 3)
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			iLocal_52 = 0;

	return;
}

void func_16() // Position - 0xA58
{
	if (func_22(&Global_113000, hLocal_98, hLocal_97))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113000, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113000))
			{
				func_21();
			
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113000, 1, false) == PLAYER::PLAYER_PED_ID())
					iLocal_277 = 1;
				else
					iLocal_277 = 2;
			
				func_20(&Global_113000, iLocal_277);
			
				if (!PED::IS_PED_INJURED(Global_113001) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113000, false))
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113001, Global_113000))
						if (!func_19(Global_113001, SCRIPT_TASK_VEHICLE_TEMP_ACTION))
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_113001, Global_113000, 1, 1000000);
			
				func_13();
				func_5();
			
				if (bLocal_87)
				{
					if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TX_H02" /*Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi.*/))
						HUD::CLEAR_HELP(true);
				
					bLocal_87 = false;
				}
			
				func_18();
				func_17();
				PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
				SCRIPT::REQUEST_SCRIPT("taxiService");
			
				if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
				{
					iLocal_267 = SYSTEM::START_NEW_SCRIPT("taxiService", SPECIAL_ABILITY);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
					iLocal_49 = 2;
				}
			}
		}
		else
		{
			func_4(true);
		}
	}
	else
	{
		func_10();
	}

	return;
}

void func_17() // Position - 0xB6B
{
	Ped randomPedAtCoord;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		randomPedAtCoord = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1.5f, 1.5f, 1.5f, -1);
	
		if (!PED::IS_PED_INJURED(randomPedAtCoord))
			if (PED::IS_PED_ON_FOOT(randomPedAtCoord))
				TASK::TASK_SMART_FLEE_PED(randomPedAtCoord, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
	}

	return;
}

void func_18() // Position - 0xBC3
{
	Ped pedInVehicleSeat;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113000, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113000, 1, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113000, 1, false);
		
			if (PLAYER::PLAYER_PED_ID() != pedInVehicleSeat)
				if (!PED::IS_PED_GROUP_MEMBER(pedInVehicleSeat, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
					TASK::TASK_SMART_FLEE_PED(pedInVehicleSeat, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
		}
	
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_113000, 2, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_113000, 2, false);
		
			if (PLAYER::PLAYER_PED_ID() != pedInVehicleSeat)
				if (!PED::IS_PED_GROUP_MEMBER(pedInVehicleSeat, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
					TASK::TASK_SMART_FLEE_PED(pedInVehicleSeat, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
		}
	}

	return;
}

BOOL func_19(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0xC65
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			if (!PED::IS_PED_INJURED(pedParam0))
				if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
					return true;

	return false;
}

void func_20(Vehicle veParam0, int iParam1) // Position - 0xCAD
{
	int sizeInMembers;
	var unk;
	Ped pedAsGroupMember;
	Ped pedInVehicleSeat;
	BOOL flag;
	int seatIndex;

	if (PED::DOES_GROUP_EXIST(func_12()))
	{
		PED::GET_GROUP_SIZE(func_12(), &unk, &sizeInMembers);
	
		if (sizeInMembers > 0)
		{
			pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 0);
		
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
			
				if (func_19(pedAsGroupMember, SCRIPT_TASK_ENTER_VEHICLE))
					flag = false;
			
				if (flag)
					TASK::TASK_ENTER_VEHICLE(pedAsGroupMember, *veParam0, 20000, seatIndex, 2f, 9437185, 0, 0);
			}
		
			if (sizeInMembers > 1)
			{
				pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 1);
			
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
				
					if (func_19(pedAsGroupMember, SCRIPT_TASK_ENTER_VEHICLE))
						flag = false;
				
					if (flag)
						TASK::TASK_ENTER_VEHICLE(pedAsGroupMember, *veParam0, 20000, seatIndex, 2f, 9437185, 0, 0);
				}
			}
		}
	}

	return;
}

void func_21() // Position - 0xDE7
{
	Global_23692.f_6 = 1;
	return;
}

BOOL func_22(Vehicle veParam0, Hash hParam1, Hash hParam2) // Position - 0xDF5
{
	Ped pedInVehicleSeat;
	int vehicleDoorLockStatus;

	if (ENTITY::DOES_ENTITY_EXIST(*veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*veParam0, false))
		{
			if (ENTITY::GET_ENTITY_MODEL(*veParam0) == hParam1)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*veParam0, -1, false);
			
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
									if (ENTITY::IS_ENTITY_UPRIGHT(*veParam0, 1119092736))
									{
										vehicleDoorLockStatus = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(*veParam0);
									
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

void func_23() // Position - 0xE89
{
	if (func_22(&Global_113000, hLocal_98, hLocal_97))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113000, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113000))
				iLocal_52 = 2;
		
			func_21();
		}
		else
		{
			func_24();
		}
	}
	else
	{
		func_10();
	}

	return;
}

void func_24() // Position - 0xED4
{
	Vehicle vehiclePedIsEntering;

	if (func_25(&Global_113000))
	{
		vehiclePedIsEntering = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	
		if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsEntering))
		{
			if (vehiclePedIsEntering == veLocal_275)
			{
				func_21();
			
				if (!PED::IS_PED_INJURED(Global_113001) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113000, false))
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113001, Global_113000))
						if (!func_19(Global_113001, SCRIPT_TASK_VEHICLE_TEMP_ACTION))
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_113001, Global_113000, 1, 1000000);
			}
			else
			{
				iLocal_52 = 0;
			}
		}
		else
		{
			iLocal_52 = 0;
		}
	}
	else
	{
		iLocal_52 = 0;
	}

	return;
}

BOOL func_25(Vehicle veParam0) // Position - 0xF63
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return false;

	if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *veParam0, 5f, 5f, 2f, false, true, 0))
		return false;

	if (ENTITY::GET_ENTITY_SPEED(*veParam0) > 0.5f)
		return false;

	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(*veParam0) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
		return false;

	if (!func_26(*veParam0))
		return false;

	return true;
}

BOOL func_26(Vehicle veParam0) // Position - 0xFCE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		if (ENTITY::IS_ENTITY_UPRIGHT(veParam0, 1119092736))
			return true;

	return false;
}

void func_27() // Position - 0xFF3
{
	Ped pedInVehicleSeat;

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_275))
	{
		if (func_22(&veLocal_275, hLocal_98, hLocal_97))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_29();
			}
			else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_275))
				{
					pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_275, -1, false);
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_275, 1, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_275, 1, false) == PLAYER::PLAYER_PED_ID())
							iLocal_277 = 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_275, 2, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_275, 2, false) == PLAYER::PLAYER_PED_ID())
							iLocal_277 = 2;
				
					if (iLocal_53 == 4 || iLocal_53 == 2)
						if (veLocal_275 != Global_113000)
							func_5();
				
					func_21();
				
					if (func_28(&veLocal_275, &pedInVehicleSeat, false))
					{
						veLocal_275 = 0;
						iLocal_52 = 2;
					}
				}
				else
				{
					func_10();
				}
			}
		}
	}

	return;
}

BOOL func_28(var uParam0, var uParam1, BOOL bParam2) // Position - 0x10CB
{
	if (!(*uParam0 == Global_113000) && !(Global_113000 == 0))
		func_6();

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		{
			if (!PED::IS_PED_INJURED(*uParam1))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam1, *uParam0))
				{
					Global_113000 = *uParam0;
					Global_113001 = *uParam1;
					Global_113015 = 1;
				
					if (bParam2)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113001, true, true);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113000, true, true);
						TEXT_LABEL_ASSIGN_STRING(&Global_113031, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_113001))
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113001, true, false);
					
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_113000))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113000, true, false);
							TEXT_LABEL_ASSIGN_STRING(&Global_113031, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
						}
					}
				
					PED::SET_PED_CONFIG_FLAG(Global_113001, 251, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_113001, BF_AlwaysFight, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_113001, BF_AlwaysFlee, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Global_113001, 512, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_113001, true);
					AUDIO::SET_AMBIENT_VOICE_NAME(Global_113001, "A_M_M_EASTSA_02_LATINO_FULL_01");
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_113000, 1);
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_113000, true);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_113000, false, 0);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_113000, true);
					return true;
				}
			}
		}
	}

	return false;
}

void func_29() // Position - 0x120E
{
	Vehicle vehiclePedIsEntering;
	Ped pedInVehicleSeat;

	if (func_25(&veLocal_275))
	{
		if (!bLocal_87)
		{
			if (veLocal_275 == Global_113000 && iLocal_53 == 4)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TX_H02" /*Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi.*/))
					{
						if (Global_113969.f_10052.f_121 < 5)
						{
							_DISPLAY_HELP_TEXT("TX_H02" /*Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi.*/, -1);
							Global_113969.f_10052.f_121 = Global_113969.f_10052.f_121 + 1;
						}
					
						bLocal_87 = true;
					}
				}
			}
		}
	
		vehiclePedIsEntering = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	
		if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsEntering))
		{
			if (vehiclePedIsEntering == veLocal_275)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_275, -1, false);
			
				if (iLocal_53 == 4 || iLocal_53 == 2)
					if (veLocal_275 != Global_113000)
						func_5();
			
				func_21();
			
				if (func_28(&veLocal_275, &pedInVehicleSeat, false))
				{
					if (bLocal_86)
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
							CAM::STOP_GAMEPLAY_HINT(false);
					
						bLocal_86 = false;
					}
				
					if (!PED::IS_PED_INJURED(Global_113001) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113000, false))
						if (PED::IS_PED_SITTING_IN_VEHICLE(Global_113001, Global_113000))
							if (!func_19(Global_113001, SCRIPT_TASK_VEHICLE_TEMP_ACTION))
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_113001, Global_113000, 1, 10000);
				
					bLocal_87 = false;
					iLocal_52 = 1;
				}
			}
		}
	}
	else if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TX_H02" /*Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi.*/))
	{
		HUD::CLEAR_HELP(true);
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x1345
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_31() // Position - 0x135C
{
	if (iLocal_53 == 0)
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_276))
			iLocal_53 = 1;
	else if (iLocal_53 == 1)
		func_58();
	else if (iLocal_53 == 2)
		func_49();
	else if (iLocal_53 == 3)
		func_43();
	else if (iLocal_53 == 4)
		func_32();

	return;
}

void func_32() // Position - 0x13AB
{
	if (func_42(&Global_113000, &Global_113001, hLocal_98, hLocal_97))
	{
		if (!func_36())
		{
			if (!func_19(Global_113001, SCRIPT_TASK_VEHICLE_TEMP_ACTION))
				TASK::TASK_VEHICLE_TEMP_ACTION(Global_113001, Global_113000, 1, 1000000);
		
			PED::SET_PED_CONFIG_FLAG(Global_113001, 251, true);
			func_33();
		
			if (HUD::DOES_BLIP_EXIST(blLocal_91))
				HUD::SET_BLIP_FLASH_TIMER(blLocal_91, 10000);
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}

	return;
}

void func_33() // Position - 0x141F
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		if (bLocal_86)
			if (func_34())
				CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_34() // Position - 0x143F
{
	int num;
	int num2;
	var unk;
	var unk2;

	func_35(&num, &num2, &unk, &unk2, false);

	if (num > 64 || num < -64 || num2 > 64 || num2 < -64)
		return true;

	return false;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1484
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

BOOL func_36() // Position - 0x1559
{
	Vector3 entityCoords;
	float num;
	float num2;
	float num3;

	if (iLocal_53 == 4)
		if (Global_113037 == -1 || Global_113037 == 0)
			Global_113037 = MISC::GET_GAME_TIMER();
		else if (func_41(Global_113037, 30000))
			if (iLocal_52 == 0 || iLocal_52 == 3)
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_113000, true))
					return true;

	if (func_39(Global_113000))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_113000, false) };
	
		if (iLocal_53 == 4)
			if (!func_38(uLocal_272, entityCoords, 75f))
				return true;
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_113000, PLAYER::PLAYER_PED_ID(), true))
			return true;
	
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
	
		if (func_38(uLocal_272, entityCoords, 20f))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Global_113000) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Global_113000))
				return true;
		
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				return true;
		}
	}
	else
	{
		return true;
	}

	if (func_37(Global_113001))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_113001, PLAYER::PLAYER_PED_ID(), true))
			return true;
	else
		return true;

	return false;
}

BOOL func_37(Ped pedParam0) // Position - 0x16F4
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			if (!PED::IS_PED_INJURED(pedParam0))
				return true;

	return false;
}

BOOL func_38(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x171F
{
	return SYSTEM::VDIST2(vParam0, fParam3) <= fParam6 * fParam6;
}

BOOL func_39(Vehicle veParam0) // Position - 0x1739
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x1763
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

BOOL func_41(int iParam0, int iParam1) // Position - 0x1784
{
	return MISC::GET_GAME_TIMER() - iParam0 > iParam1;
}

BOOL func_42(Vehicle veParam0, Ped pedParam1, Hash hParam2, Hash hParam3) // Position - 0x1796
{
	if (ENTITY::DOES_ENTITY_EXIST(*veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*veParam0, false))
			if (ENTITY::DOES_ENTITY_EXIST(*pedParam1))
				if (!PED::IS_PED_INJURED(*pedParam1))
					if (!PED::IS_PED_FLEEING(*pedParam1))
						if (!PED::IS_PED_IN_COMBAT(*pedParam1, 0))
							if (PED::IS_PED_SITTING_IN_VEHICLE(*pedParam1, *veParam0))
								if (ENTITY::GET_ENTITY_MODEL(*veParam0) == hParam2)
									if (PED::IS_PED_MODEL(*pedParam1, hParam3))
										return true;

	return false;
}

void func_43() // Position - 0x1809
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "HAIL_TAXI", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FP_HAIL_TAXI", 3))
	{
		return;
	}
	else if (func_41(iLocal_95, 3000))
	{
		STREAMING::REQUEST_ANIM_DICT(&uLocal_268);
	
		if (STREAMING::HAS_ANIM_DICT_LOADED(&uLocal_268))
		{
			if (func_44())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, true);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 2)
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FORGET_IT", 4f, -2f, -1, 48, 0, false, false, false);
				else
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FUCK_U", 4f, -2f, -1, 48, 0, false, false, false);
			}
		
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) == 1)
				if (!Global_45249)
					bLocal_85 = true;
		
			iLocal_95 = MISC::GET_GAME_TIMER();
			iLocal_96 = MISC::GET_GAME_TIMER();
		
			if (iLocal_90 == 1)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
				iLocal_90 = 0;
			}
		
			if (iLocal_93 != -1)
				_CONTEXT_REMOVE_HELP_TEXT(&iLocal_93);
		
			iLocal_53 = 0;
		}
	}

	return;
}

BOOL func_44() // Position - 0x18F9
{
	if (iLocal_52 != 0)
		return false;

	if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
		return false;

	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		return false;

	if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
		return false;

	if (!Global_45249 && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		return false;

	if (func_48(0))
		return false;

	if (func_47())
		return false;

	if (func_46())
		return false;

	if (func_45())
		return false;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return false;

	return true;
}

BOOL func_45() // Position - 0x19A8
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

BOOL func_46() // Position - 0x19BD
{
	return Global_101585.f_394 > 0;
}

BOOL func_47() // Position - 0x19CE
{
	return Global_76498;
}

BOOL func_48(int iParam0) // Position - 0x19DA
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

void func_49() // Position - 0x1A31
{
	BOOL flag;
	BOOL isAmbientSpeechDisabled;
	int taskSequenceId;

	if (func_42(&Global_113000, &Global_113001, hLocal_98, hLocal_97))
	{
		flag = false;
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_ENTER))
			flag = true;
	
		if (func_41(iLocal_95, 1000))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PLAY_ANIM) == 7)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FP_HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FUCK_U", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FORGET_IT", 3))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, false);
					
						if (iLocal_90 == 1)
						{
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
							iLocal_90 = 0;
						}
					
						flag = true;
					}
				}
			}
		}
	
		if (flag)
		{
			STREAMING::REQUEST_ANIM_DICT(&uLocal_268);
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&uLocal_268))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) < 8)
				{
					if (!func_54(0, false))
					{
						isAmbientSpeechDisabled = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
					
						if (isAmbientSpeechDisabled)
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
					
						func_52(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL", 34);
					
						if (isAmbientSpeechDisabled)
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
					}
				}
			
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, SLF_WHILE_NOT_IN_FOV, 2);
			
				if (func_51(Global_113000))
					TASK::TASK_PLAY_ANIM(0, &uLocal_268, "Aknowledge_R", 8f, -4f, -1, 16785456, 0, false, false, false);
				else
					TASK::TASK_PLAY_ANIM(0, &uLocal_268, "Aknowledge_L", 8f, -4f, -1, 16785456, 0, false, false, false);
			
				TASK::TASK_VEHICLE_MISSION(0, Global_113000, Global_113000, 22, 12f, 262275, 3f, 3f, true);
				TASK::TASK_VEHICLE_MISSION(0, Global_113000, Global_113000, 5, 12f, 262275, 3f, 3f, true);
				TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
				TASK::TASK_PERFORM_SEQUENCE(Global_113001, taskSequenceId);
				TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
				func_50();
				iLocal_53 = 4;
			}
		}
	}
	else
	{
		func_5();
	}

	return;
}

void func_50() // Position - 0x1C15
{
	if (HUD::DOES_BLIP_EXIST(blLocal_91))
	{
		HUD::SET_BLIP_ROUTE(blLocal_91, false);
		HUD::REMOVE_BLIP(&blLocal_91);
	}

	if (func_39(Global_113000))
	{
		if (!HUD::DOES_BLIP_EXIST(blLocal_91))
		{
			blLocal_91 = HUD::ADD_BLIP_FOR_ENTITY(Global_113000);
			HUD::SET_BLIP_SPRITE(blLocal_91, BLIP_TAXI);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blLocal_91, "TXM_BLIP" /*Taxi*/);
			HUD::SET_BLIP_FLASHES(blLocal_91, true);
			HUD::SET_BLIP_FLASH_TIMER(blLocal_91, 10000);
		}
	}

	return;
}

BOOL func_51(Vehicle veParam0) // Position - 0x1C73
{
	var entityCoords;
	var offsetFromEntityInWorldCoords;
	var entityCoords2;
	float x1;
	float x2;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, 1f, 0f, 0f) };
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			entityCoords2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	
		x1 = { offsetFromEntityInWorldCoords - entityCoords };
		x2 = { entityCoords2 - entityCoords };
	
		if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x1, x1.f_1, x2, x2.f_1) < 90f)
			return true;
	}

	return false;
}

void func_52(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x1CEE
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_53(iParam2), 1);
	return;
}

char* func_53(int iParam0) // Position - 0x1D05
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

BOOL func_54(Ped pedParam0, BOOL bParam1) // Position - 0x1EF5
{
	Ped pedAsGroupMember;
	int sizeInMembers;
	int i;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(pedParam0))
		{
			func_56("\\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\\n");
			return true;
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			func_56("\\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\\n");
			return true;
		}
	}

	if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
	{
		func_56("\\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\\n");
		return true;
	}

	if (bParam1)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			func_56("\\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\\n");
			return true;
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::DOES_GROUP_EXIST(func_12()))
		{
			PED::GET_GROUP_SIZE(func_12(), &i, &sizeInMembers);
		
			if (sizeInMembers > 0)
			{
				for (i = 0; i < sizeInMembers; i = i + 1)
				{
					pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_12(), i);
				
					if (!PED::IS_PED_INJURED(pedAsGroupMember))
					{
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(pedAsGroupMember))
						{
							func_56("\\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\\n");
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x1FD0
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_56(char* sParam0) // Position - 0x1FF2
{
	func_57(sParam0);
	return;
}

void func_57(char* sParam0) // Position - 0x2000
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}

void func_58() // Position - 0x2013
{
	Ped pedInVehicleSeat;

	func_64();
	func_33();

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_276))
	{
		if (func_22(&veLocal_276, hLocal_98, hLocal_97))
		{
			if (func_44())
			{
				STREAMING::REQUEST_ANIM_DICT(&uLocal_268);
			
				if (STREAMING::HAS_ANIM_DICT_LOADED(&uLocal_268))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FP_HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FUCK_U", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FORGET_IT", 3))
					{
						if (!func_63(&veLocal_276))
							if (!VEHICLE::IS_TAXI_LIGHT_ON(veLocal_276))
								VEHICLE::SET_TAXI_LIGHTS(veLocal_276, true);
					
						if (iLocal_93 == -1)
							_CONTEXT_ADD_HELP_TEXT(&iLocal_93, 0, "TXM_H01" /*Press ~INPUT_CONTEXT~ to hail a taxi.*/, 1, 0, 0, 0);
					
						if (func_61(iLocal_93, true))
						{
							if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TXM_H01" /*Press ~INPUT_CONTEXT~ to hail a taxi.*/))
								HUD::CLEAR_HELP(true);
						
							if (iLocal_90 == 0)
							{
								PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
								iLocal_90 = 1;
							}
						
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_276, 5000, 0, 2);
							func_60();
							func_59();
							iLocal_95 = MISC::GET_GAME_TIMER();
							_CONTEXT_REMOVE_HELP_TEXT(&iLocal_93);
						
							if (func_63(&veLocal_276))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_276, false))
									VEHICLE::SET_TAXI_LIGHTS(veLocal_276, false);
							
								bLocal_86 = false;
								iLocal_53 = 3;
							}
							else
							{
								pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_276, -1, false);
							
								if (func_28(&veLocal_276, &pedInVehicleSeat, false))
								{
									veLocal_276 = 0;
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_113000, 5000, 0, 2);
									Global_113037 = MISC::GET_GAME_TIMER();
								
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113000, false))
									{
										if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
										{
											CAM::SET_GAMEPLAY_VEHICLE_HINT(Global_113000, 0f, 0f, 0f, true, 4000, 2000, 2000);
											bLocal_86 = true;
										}
									}
								
									Global_113969.f_10052.f_120 = 1;
									iLocal_53 = 2;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}

	return;
}

void func_59() // Position - 0x21C8
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_WHEEL_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_WHEEL_LR, true);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, true);
	return;
}

void func_60() // Position - 0x220B
{
	int taskSequenceId;
	BOOL isAmbientSpeechDisabled;
	var priorityMidData;
	int priorityLowData;
	int num;
	int weaponHash;

	isAmbientSpeechDisabled = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());

	if (!Global_45249)
	{
		priorityMidData.f_4 = 1065353216;
		priorityMidData.f_5 = 1065353216;
		priorityMidData.f_9 = 1065353216;
		priorityMidData.f_10 = 1065353216;
		priorityMidData.f_14 = 1065353216;
		priorityMidData.f_15 = 1065353216;
		priorityMidData.f_17 = 1040187392;
		priorityMidData.f_18 = 1040187392;
		priorityMidData.f_19 = -1;
		priorityLowData.f_4 = 1065353216;
		priorityLowData.f_5 = 1065353216;
		priorityLowData.f_9 = 1065353216;
		priorityLowData.f_10 = 1065353216;
		priorityLowData.f_14 = 1065353216;
		priorityLowData.f_15 = 1065353216;
		priorityLowData.f_17 = 1040187392;
		priorityLowData.f_18 = 1040187392;
		priorityLowData.f_19 = -1;
		num = 0;
	
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == FIRST_PERSON)
		{
			priorityLowData = 1;
			priorityLowData.f_2 = "FP_HAIL_TAXI";
			priorityLowData.f_1 = "TAXI_HAIL";
			priorityLowData.f_3 = 0f;
			priorityLowData.f_4 = 1f;
			priorityLowData.f_16 = MISC::GET_HASH_KEY("UpperbodyAndIk_filter");
			num = num + 16;
			num = num + 32;
			num = num + &func_57;
			priorityLowData.f_20 = num;
			priorityLowData.f_21 = 1024;
		}
		else
		{
			priorityLowData = 1;
			priorityLowData.f_2 = "HAIL_TAXI";
			priorityLowData.f_1 = "TAXI_HAIL";
			priorityLowData.f_3 = 0f;
			priorityLowData.f_4 = 1f;
			priorityLowData.f_16 = MISC::GET_HASH_KEY("BONEMASK_HEAD_NECK_AND_L_ARM");
			num = num + 32;
			num = num + &func_57;
			priorityLowData.f_20 = num;
		}
	
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || MISC::ARE_STRINGS_EQUAL(priorityLowData.f_2, "FP_HAIL_TAXI") && weaponHash == 883325847)
		{
			if (weaponHash != 883325847 || !MISC::ARE_STRINGS_EQUAL(priorityLowData.f_2, "FP_HAIL_TAXI"))
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, true);
		
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_SWAP_WEAPON(0, false);
			TASK::TASK_SCRIPTED_ANIMATION(0, &priorityLowData, &priorityMidData, &priorityMidData, 0.25f, 0.25f);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
		else
		{
			TASK::TASK_SCRIPTED_ANIMATION(PLAYER::PLAYER_PED_ID(), &priorityLowData, &priorityMidData, &priorityMidData, 0.25f, 0.25f);
		}
	}
	else
	{
		if (isAmbientSpeechDisabled)
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
	
		func_52(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL_DRUNK", 7);
	
		if (isAmbientSpeechDisabled)
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
	}

	return;
}

BOOL func_61(int iParam0, BOOL bParam1) // Position - 0x244B
{
	int num;

	num = func_9(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_48(0))
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

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x2503
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

BOOL func_63(var uParam0) // Position - 0x262E
{
	Ped pedInVehicleSeat;

	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 1, false))
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, 1, false);
	
		if (!(pedInVehicleSeat == PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_GROUP_MEMBER(pedInVehicleSeat, func_12()))
			{
				if (VEHICLE::IS_TAXI_LIGHT_ON(*uParam0))
					VEHICLE::SET_TAXI_LIGHTS(*uParam0, false);
			
				return true;
			}
		}
	}

	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 2, false))
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, 2, false);
	
		if (!(pedInVehicleSeat == PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_GROUP_MEMBER(pedInVehicleSeat, func_12()))
			{
				if (VEHICLE::IS_TAXI_LIGHT_ON(*uParam0))
					VEHICLE::SET_TAXI_LIGHTS(*uParam0, false);
			
				return true;
			}
		}
	}

	return false;
}

void func_64() // Position - 0x26C5
{
	BOOL isAmbientSpeechDisabled;

	if (bLocal_85)
	{
		if (func_41(iLocal_96, 1000))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PLAY_ANIM) == 7)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FP_HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FUCK_U", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FORGET_IT", 3))
					{
						if (!Global_45249)
						{
							isAmbientSpeechDisabled = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						
							if (!isAmbientSpeechDisabled)
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
						
							func_52(PLAYER::PLAYER_PED_ID(), "TAXI_DRIVES_PAST", 24);
						
							if (!isAmbientSpeechDisabled)
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
						}
					
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, false);
					
						if (iLocal_90 == 1)
						{
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
							iLocal_90 = 0;
						}
					
						bLocal_85 = false;
					}
				}
			}
		}
	}

	return;
}

void func_65() // Position - 0x27AF
{
	if (iLocal_51 != 0)
		if (func_107())
			func_13();

	if (iLocal_51 == 0)
	{
	}
	else if (iLocal_51 == 1)
	{
		func_99();
	}
	else if (iLocal_51 == 2)
	{
		func_74();
	}
	else if (iLocal_51 == 3)
	{
		func_66();
	}

	return;
}

void func_66() // Position - 0x27F5
{
	if (func_67())
	{
		if (iLocal_52 == 0 && iLocal_53 != 4)
		{
			func_5();
		
			if (func_28(&veLocal_54, &(veLocal_54.f_1), false))
			{
				Global_113037 = 0;
			
				if (func_39(Global_113000))
					VEHICLE::START_VEHICLE_HORN(Global_113000, 2500, MISC::GET_HASH_KEY("NORMAL"), false);
			
				if (ENTITY::DOES_ENTITY_EXIST(Global_113001))
				{
					if (!PED::IS_PED_INJURED(Global_113001))
					{
						TASK::TASK_LOOK_AT_ENTITY(Global_113001, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_113001, 3000, 0, 2);
					}
				}
			
				func_50();
				iLocal_53 = 4;
				func_13();
			}
			else
			{
				func_13();
			}
		}
	}

	return;
}

BOOL func_67() // Position - 0x2895
{
	Vector3 entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_54, false) };

	if (!veLocal_54.f_2)
	{
		if (!veLocal_54.f_3)
		{
			if (func_68(entityCoords, veLocal_54.f_14, veLocal_54.f_6, &(veLocal_54.f_17), &(veLocal_54.f_6)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_54.f_1, false))
				{
					PED::SET_DRIVER_ABILITY(veLocal_54.f_1, 0.5f);
				
					if (veLocal_54.f_4)
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(veLocal_54.f_1, veLocal_54, veLocal_54.f_17, 10f, 0, ENTITY::GET_ENTITY_MODEL(veLocal_54), veLocal_54.f_29, 5f, MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, veLocal_54.f_17, true));
						veLocal_54.f_4 = 0;
					}
					else
					{
						TASK::TASK_VEHICLE_PARK(veLocal_54.f_1, veLocal_54, veLocal_54.f_17, veLocal_54.f_6, 3, 90f, true);
					}
				}
			
				veLocal_54.f_2 = 1;
			}
		}
		else
		{
			PED::SET_DRIVER_ABILITY(veLocal_54.f_1, 0.5f);
			veLocal_54.f_17 = { entityCoords };
			TASK::TASK_VEHICLE_TEMP_ACTION(veLocal_54.f_1, veLocal_54, 6, 15000);
			veLocal_54.f_2 = 1;
		}
	}
	else if (!func_19(veLocal_54.f_1, SCRIPT_TASK_VEHICLE_PARK))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(veLocal_54))
		{
			TASK::TASK_VEHICLE_TEMP_ACTION(veLocal_54.f_1, veLocal_54, 1, 1000000);
			return true;
		}
	}
	else
	{
		if (func_38(entityCoords, uLocal_272, 5f))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(veLocal_54) || VEHICLE::IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(veLocal_54))
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(veLocal_54.f_1, veLocal_54, 1, 1000000);
				return true;
			}
		}
	
		if (!veLocal_54.f_3)
		{
			if (!func_38(entityCoords, veLocal_54.f_17, 10f))
			{
				if (func_38(entityCoords, uLocal_272, 5f))
				{
					veLocal_54.f_14 = { uLocal_272 };
					veLocal_54.f_3 = 1;
					veLocal_54.f_2 = 0;
				}
			}
		}
	}

	return false;
}

BOOL func_68(var uParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0x2A2D
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

	if (!func_73(vParam3))
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
			num = func_72(unk10, unk13);
		
			if (num < 0f)
			{
				*uParam7 = { outPosition2 };
				*uParam8 = uParam6;
			
				if (func_70(uParam7, outPosition))
					veLocal_54.f_4 = 1;
			}
			else
			{
				*uParam7 = { outPosition3 };
				*uParam8 = *uParam8 + 180f;
				*uParam8 = func_69(*uParam8, 0f, 360f);
			
				if (func_70(uParam7, outPosition))
					veLocal_54.f_4 = 1;
			}
		
			return true;
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

float func_69(float fParam0, float fParam1, float fParam2) // Position - 0x2B4A
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

BOOL func_70(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2B8C
{
	var groundZ;
	var unk;
	var unk4;
	int i;

	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, 1000f, &groundZ, false, false))
	{
		*uParam0 = { uParam1 };
		return false;
	}

	unk = { *uParam0, uParam0->f_1, groundZ };

	if (func_71(unk, uParam1))
	{
		unk4 = { (uParam1 - unk) / { 5f, 5f, 5f } };
	
		for (i = 1; i <= 5; i = i + 1)
		{
			unk = { unk + unk4 };
		
			if (!func_71(unk, uParam1))
			{
				*uParam0 = { unk };
				return true;
			}
		}
	
		*uParam0 = { uParam1 };
		return true;
	}

	return false;
}

BOOL func_71(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x2C2C
{
	if (uParam0.f_2 - uParam3.f_2 > 0.45f || uParam0.f_2 - uParam3.f_2 < -0.45f)
		return true;

	return false;
}

float func_72(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x2C60
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

BOOL func_73(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x2C81
{
	const char* nameOfZone;

	nameOfZone = ZONE::GET_NAME_OF_ZONE(vParam0);

	if (MISC::ARE_STRINGS_EQUAL("SanAnd" /*San Andreas*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Alamo" /*Alamo Sea*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("ArmyB" /*Fort Zancudo*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("BhamCa" /*Banham Canyon*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Baytre" /*Baytree Canyon*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("BradT" /*Braddock Tunnel*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("BradP" /*Braddock Pass*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CANNY" /*Raton Canyon*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CCreak" /*Cassidy Creek*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("ChamH" /*Chamberlain Hills*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CHU" /*Chumash*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("COSI" /*Countryside*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("CMSW" /*Chiliad Mountain State Wilderness*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Cypre" /*Cypress Flats*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Desrt" /*Grand Senora Desert*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("ELGorl" /*El Gordo Lighthouse*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Galli" /*Galileo Park*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Galfish" /*Galilee*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Harmo" /*Harmony*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("HumLab" /*Humane Labs and Research*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Jail" /*Bolingbroke Penitentiary*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("LAct" /*Land Act Reservoir*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("LDam" /*Land Act Dam*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Lago" /*Lago Zancudo*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("MTChil" /*Mount Chiliad*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("MTJose" /*Mount Josiah*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("MTGordo" /*Mount Gordo*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("NCHU" /*North Chumash*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Oceana" /*Pacific Ocean*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Palmpow" /*Palmer-Taylor Power Station*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PBluff" /*Pacific Bluffs*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Paleto" /*Paleto Bay*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PalCov" /*Paleto Cove*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PalFor" /*Paleto Forest*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("PalHigh" /*Palomino Highlands*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("RTRAK" /*Redwood Lights Track*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Rancho" /*Rancho*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("SANDY" /*Sandy Shores*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("TongvaH" /*Tongva Hills*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("TongvaV" /*Tongva Valley*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Zenora" /*Senora Freeway*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Slab" /*Stab City*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("WindF" /*Ron Alternates Wind Farm*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("Zancudo" /*Zancudo River*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("SanChia" /*San Chianski Mountain Range*/, nameOfZone) || MISC::ARE_STRINGS_EQUAL("zQ_UAR" /*Davis Quartz*/, nameOfZone))
		return true;

	return false;
}

void func_74() // Position - 0x2F75
{
	if (func_75())
	{
		veLocal_54.f_2 = 0;
		iLocal_51 = 3;
	}

	return;
}

BOOL func_75() // Position - 0x2F8C
{
	var entityCoords;

	if (!veLocal_54.f_2)
	{
		if (func_76(veLocal_54.f_20, &(veLocal_54.f_14), &(veLocal_54.f_6), &(veLocal_54.f_8), 250))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(veLocal_54.f_1, veLocal_54, veLocal_54.f_14, 12f, 0, ENTITY::GET_ENTITY_MODEL(veLocal_54), veLocal_54.f_29, veLocal_54.f_7 - 20f, 20f);
			veLocal_54.f_2 = 1;
		}
	}
	else
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_54, true) };
	
		if (func_38(entityCoords, veLocal_54.f_14, veLocal_54.f_7))
		{
			return true;
		}
		else if (func_38(entityCoords, uLocal_272, 5f))
		{
			veLocal_54.f_14 = { uLocal_272 };
			return true;
		}
		else if (!func_19(veLocal_54.f_1, SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD))
		{
			veLocal_54.f_2 = 0;
			veLocal_54.f_8 = 0;
		}
	}

	return false;
}

BOOL func_76(Vector3 vParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4, var uParam5, int iParam6) // Position - 0x3054
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
	num4 = *uParam5 + 2;
	num5 = 50;
	flag = false;
	nodeFlags = 1;

	if (!func_73(vParam0))
		nodeFlags = 9;

	func_97(vParam0, vParam0, &(veLocal_54.f_23), &(veLocal_54.f_26), iParam6);

	if (func_96(veLocal_54.f_23, veLocal_54.f_26))
	{
		if (!func_79(vParam0, pvParam3, pfParam4, 1))
		{
			while (!flag && *uParam5 < num4)
			{
				if (vParam0.f_2 == 1f)
					num = 0f;
			
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam0, *uParam5, pvParam3, pfParam4, &outNumLanes, nodeFlags, num, num2))
				{
					nthClosestVehicleNodeId = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*pvParam3, 1, nodeFlags, 1077936128, 0);
				
					if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(nthClosestVehicleNodeId))
					{
						num3 = vParam0.f_2 - pvParam3->f_2;
					
						if (num3 < 0f)
							num3 = num3 * -1f;
					
						if (func_78(vParam0, *pvParam3) || num3 < 0.5f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_54, false))
								vehicle = veLocal_54;
						
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(*pvParam3, 3f, 3f, 3f, vehicle))
								flag = true;
						}
					}
				}
			
				*uParam5 = *uParam5 + 1;
			
				if (*uParam5 >= num5)
					flag = true;
			}
		}
		else
		{
			flag = true;
		}
	
		if (flag)
		{
			veLocal_54.f_5 = func_77(vParam0, *pvParam3);
			return true;
		}
	}

	return false;
}

float func_77(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x31B3
{
	Vector3 vector;

	vector = { uParam0 - uParam3 };
	vector.f_2 = 0f;
	return SYSTEM::VMAG(vector);
}

BOOL func_78(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x31D5
{
	float num;
	float num2;

	num2 = vParam3.f_2 - vParam0.f_2;

	if (num2 < 0f)
		num2 = num2 * -1f;

	if (vParam0.f_2 <= 1f)
	{
		func_56("\\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\\n");
		return true;
	}

	num = SYSTEM::VDIST(vParam0, vParam3);
	num = num / 1.75f;

	if (num2 < num)
	{
		func_56("\\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\\n");
		return true;
	}

	return false;
}

BOOL func_79(Vector3 vParam0, var uParam1, var uParam2, Vector3* pvParam3, float* pfParam4, int iParam5) // Position - 0x3237
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

	if (func_95(vParam0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*pvParam3 = { 1261.5804f, -3332.6846f, 5.4191f };
		*pfParam4 = 163.87f;
		return true;
	}
	else if (func_95(vParam0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*pvParam3 = { -1577.1599f, 5166.5103f, 19.1864f };
		*pfParam4 = 0f;
		return true;
	}
	else if (func_95(vParam0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
	{
		*pvParam3 = { -856.6151f, 163.7361f, 65.093f };
		*pfParam4 = 355.3355f;
		return true;
	}
	else if (func_95(vParam0, -39.2005f, -1473.5498f, -100f, 10.6133f, -1430.0988f, 100f))
	{
		*pvParam3 = { -15.5181f, -1456.3999f, 29.4244f };
		*pfParam4 = 94.6893f;
		return true;
	}
	else if (func_95(vParam0, 1964.7421f, 3792.59f, -100f, 1992.6361f, 3840.2532f, 100f))
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

	if (func_92(3, vector))
	{
		if (func_91(vector, 3, 0, false))
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
		if (func_90(vector, 1283.3257f, -1731.5222f, 51.78555f, 17f))
		{
			*pvParam3 = { 1283.3257f, -1731.5222f, 51.78555f };
			*pfParam4 = 275.4274f;
			return true;
		}
	
		if (func_90(vector, 1334.3861f, -1709.7625f, 55.70131f, 41f))
		{
			*pvParam3 = { 1334.3861f, -1709.7625f, 55.70131f };
			*pfParam4 = 275.4411f;
			return true;
		}
	
		if (func_90(vector, 1246.1661f, -1750.6246f, 45.35691f, 28f))
		{
			*pvParam3 = { 1246.1661f, -1750.6246f, 45.35691f };
			*pfParam4 = 301.2981f;
			return true;
		}
	
		if (func_90(vector, 1196.2716f, -1753.0505f, 37.63976f, 32f))
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

	if (func_90(vector, -1693.3018f, -1109.1305f, 17.89778f, 240f))
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

	if (!func_81())
	{
		vector = { vParam0 };
	
		if (vParam0.f_2 == 1f)
			vector.f_2 = 36.1141f;
	
		if (func_92(7, vector))
		{
			if (func_91(vector, 7, 0, false))
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

	if (func_92(2, vector))
	{
		if (func_91(vector, 2, 0, false))
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
	num5 = func_80(vParam0, unk22);
	unk25 = { 2450.6035f, 5129.2236f, 45.9722f };
	num6 = 241.1957f;
	num7 = func_80(vParam0, unk25);
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

	if (func_38(vector, -99.68751f, -2448.891f, 5.01731f, 230f))
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

float func_80(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x535A
{
	return SYSTEM::VDIST2(fParam0, fParam0.f_1, 0f, fParam3, fParam3.f_1, 0f);
}

BOOL func_81() // Position - 0x5374
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (character == CHAR_MICHAEL)
	{
		if (func_82(65))
			return true;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(92439941) > 0)
			return true;
	}
	else if (character == CHAR_FRANKLIN)
	{
		if (func_82(66))
			return true;
	}
	else if (character == CHAR_TREVOR)
	{
		if (func_82(65))
			return true;
	}

	return false;
}

BOOL func_82(int iParam0) // Position - 0x53D3
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113969.f_9088.f_99.f_58[iParam0];
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x5400
{
	func_84();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_84() // Position - 0x5419
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_86(character) && !func_85(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_86(Global_113969.f_2366.f_539.f_4321))
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

BOOL func_85(int iParam0) // Position - 0x5516
{
	return Global_44042 == iParam0;
}

BOOL func_86(eCharacter echParam0) // Position - 0x5524
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x5530
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x556D
{
	if (func_86(character))
		return func_89(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_89(eCharacter echParam0) // Position - 0x5592
{
	return Global_2169[echParam0 /*29*/];
}

BOOL func_90(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x55A1
{
	float num;

	num = { fParam3 - uParam0 };
	return (num * num) + (num.f_1 * num.f_1) <= fParam6 * fParam6;
}

BOOL func_91(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x55CB
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

BOOL func_92(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x631F
{
	return SYSTEM::VDIST2(vParam1, func_94(iParam0)) < func_93(iParam0);
}

float func_93(int iParam0) // Position - 0x633C
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

Vector3 func_94(int iParam0) // Position - 0x63D4
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

BOOL func_95(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8) // Position - 0x64BE
{
	if (fParam0 > fParam3 && fParam0 < fParam6 && fParam0.f_1 > fParam3.f_1 && fParam0.f_1 < fParam6.f_1 && fParam0.f_2 > fParam3.f_2 && fParam0.f_2 < fParam6.f_2)
		return true;

	return false;
}

BOOL func_96(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x6515
{
	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fParam0, fParam0.f_1, fParam3, fParam3.f_1))
		return true;

	return false;
}

void func_97(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8) // Position - 0x6535
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

	if (!func_98(num, *uParam6, 1056964608, false) || !func_98(num, *uParam6, 1056964608, false))
	{
		*uParam6 = { num };
		*uParam7 = { num2 };
	}

	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
	return;
}

BOOL func_98(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0x6600
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
			if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
				if (MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
					return true;
	else if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			return true;

	return false;
}

void func_99() // Position - 0x667B
{
	Vector3 vector;
	float num;
	int num2;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_41(veLocal_54.f_9, 10000))
		{
			STREAMING::REQUEST_MODEL(hLocal_98);
			STREAMING::REQUEST_MODEL(hLocal_97);
		
			if (STREAMING::HAS_MODEL_LOADED(hLocal_98))
			{
				if (STREAMING::HAS_MODEL_LOADED(hLocal_97))
				{
					if (func_73(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)))
						if (veLocal_54.f_10 < 2)
							num2 = 0;
						else if (veLocal_54.f_10 < 5)
							num2 = 9;
						else
							num2 = 1;
					else if (veLocal_54.f_10 < 5)
						num2 = 0;
					else
						num2 = 9;
				
					if (func_101(&vector, &num, &(veLocal_54.f_8), num2, 1103626240))
					{
						MISC::CLEAR_AREA(vector, 5f, true, false, false, false);
					
						if (func_100(&veLocal_54, &(veLocal_54.f_1), vector, num))
						{
							veLocal_54.f_5 = func_77(ENTITY::GET_ENTITY_COORDS(veLocal_54, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
							veLocal_54.f_2 = 0;
							veLocal_54.f_8 = 0;
							iLocal_51 = 2;
						}
					}
					else if (veLocal_54.f_8 >= 5)
					{
						veLocal_54.f_10 = veLocal_54.f_10 + 1;
					
						if (veLocal_54.f_10 > 10)
						{
							func_13();
						}
						else
						{
							veLocal_54.f_8 = 0;
							veLocal_54.f_9 = MISC::GET_GAME_TIMER() - 9000;
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_100(var uParam0, var uParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5) // Position - 0x679C
{
	STREAMING::REQUEST_MODEL(func_147());
	STREAMING::REQUEST_MODEL(func_146());

	if (STREAMING::HAS_MODEL_LOADED(func_146()))
	{
		if (STREAMING::HAS_MODEL_LOADED(func_147()))
		{
			*uParam0 = VEHICLE::CREATE_VEHICLE(func_146(), vParam2, fParam5, true, true, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
					VEHICLE::SET_TAXI_LIGHTS(*uParam0, true);
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(*uParam0, true);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*uParam0, false, 0);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*uParam0, true);
					*uParam1 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, PED_TYPE_SPECIAL, func_147(), -1, true, true);
				
					if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
					{
						if (!PED::IS_PED_INJURED(*uParam1))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(*uParam0, 5f);
						
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam1))
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam1, true, false);
						
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
						
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
							PED::SET_PED_CONFIG_FLAG(*uParam1, 251, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, BF_AlwaysFight, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, BF_AlwaysFlee, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*uParam1, 512, false);
							AUDIO::SET_AMBIENT_VOICE_NAME(*uParam1, "A_M_M_EASTSA_02_LATINO_FULL_01");
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_146());
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_147());
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_101(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x68C9
{
	var outPosition;
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
	int num5;
	Vector3 entityCoords;

	outHeading = 0f;
	num = 1;

	if (iParam3 == 0)
		num = 0;

	flag = false;
	num2 = 0;
	num3 = 100f;
	num4 = 2.5f;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		num5 = func_106(entityCoords);
	
		if (num5 != 6)
		{
			if (func_105(entityCoords, num5, uParam0, uParam1))
				return true;
		}
		else if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(entityCoords, *uParam2, &outPosition, &outHeading, &outNumLanes, iParam3, num3, num4))
		{
			while (!flag && num2 < 5)
			{
				if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&outPosition, &vector, &outVec1, 0f, 180f, iParam4, num, 1, 0))
				{
					outHeading = func_104(0f, 0f, 0f, outVec1, 1);
				
					if (func_102(entityCoords, vector, 1133903872, 1101004800))
					{
						flag = true;
						offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, outHeading, 0f, 1f, 0f) };
						x1 = { offsetFromCoordAndHeadingInWorldCoords - vector };
						x2 = { outPosition - vector };
					
						if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x1, x1.f_1, x2, x2.f_1) > 60f)
						{
							outHeading = outHeading + 180f;
							outHeading = func_69(outHeading, 0f, 360f);
						}
					
						*uParam0 = { vector };
						*uParam1 = outHeading;
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
		
			*uParam2 = *uParam2 + 1;
		}
		else
		{
			*uParam2 = *uParam2 + 1;
		}
	}

	return false;
}

BOOL func_102(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6, int iParam7) // Position - 0x6A3D
{
	float num;

	num = SYSTEM::VDIST2(vParam0, vParam3);

	if (num >= iParam6 * iParam6)
		return false;

	if (num <= iParam7 * iParam7)
		return false;

	if (CAM::IS_SPHERE_VISIBLE(vParam3, 2.5f))
		return false;

	if (MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(vParam3, 3f, 3f, 3f, 0))
		return false;

	if (func_103(vParam3, false))
		return false;

	return true;
}

BOOL func_103(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x6AA9
{
	if (func_38(vParam0, -1144.4973f, 43.01712f, 51.94447f, 325f))
	{
		if (func_91(vParam0, 1, 0, false))
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

	if (func_92(2, vParam0))
		if (func_91(vParam0, 2, 0, false))
			return true;

	if (func_92(3, vParam0))
		if (func_91(vParam0, 3, 0, false))
			return true;

	if (func_92(4, vParam0))
		if (func_91(vParam0, 4, 0, false))
			return true;

	if (func_92(5, vParam0))
		if (func_91(vParam0, 5, 0, false))
			return true;

	if (func_92(6, vParam0))
		if (func_91(vParam0, 6, 0, false))
			return true;

	if (!func_81())
		if (func_92(7, vParam0))
			if (func_91(vParam0, 7, 0, false))
				return true;

	if (func_92(8, vParam0))
		if (func_91(vParam0, 8, 0, false))
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

	if (func_38(vParam0, -99.68751f, -2448.891f, 5.01731f, 230f))
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

float func_104(float fParam0, float fParam1, float fParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x7123
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

BOOL func_105(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) // Position - 0x7188
{
	var unk;
	float num;
	int i;
	int num2;

	if (iParam3 == 0)
	{
		i = 0;
		num2 = 5;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (i == 0)
			{
				unk = { -883.8992f, 76.3237f, 50.9372f };
				num = 271.8234f;
			}
			else if (i == 1)
			{
				unk = { -838.2045f, 88.1067f, 51.3396f };
				num = 102.3721f;
			}
			else if (i == 2)
			{
				unk = { -884.0715f, 217.2857f, 71.7633f };
				num = 254.5437f;
			}
			else if (i == 3)
			{
				unk = { -834.0018f, 217.2782f, 73.154f };
				num = 80.7037f;
			}
			else if (i == 4)
			{
				unk = { -830.9222f, 135.3548f, 58.1352f };
				num = 92.957f;
			}
		
			if (func_102(uParam0, unk, 1133903872, 1101004800))
			{
				*uParam4 = { unk };
				*uParam5 = num;
				return true;
			}
		}
	}
	else if (iParam3 == 1)
	{
		i = 0;
		num2 = 6;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (i == 0)
			{
				unk = { -1587.0962f, -928.5875f, 14.3046f };
				num = 139.9023f;
			}
			else if (i == 1)
			{
				unk = { -1532.4579f, -863.667f, 21.6188f };
				num = 139.9028f;
			}
			else if (i == 2)
			{
				unk = { -1472.8877f, -733.0396f, 24.0746f };
				num = 236.3756f;
			}
			else if (i == 3)
			{
				unk = { -1397.3027f, -781.1235f, 19.3347f };
				num = 48.1876f;
			}
			else if (i == 4)
			{
				unk = { -1605.4087f, -1012.5778f, 12.0175f };
				num = 51.1191f;
			}
			else if (i == 5)
			{
				unk = { -1572.4573f, -1007.1061f, 12.0184f };
				num = 141.2024f;
			}
		
			if (func_102(uParam0, unk, 1133903872, 1101004800))
			{
				*uParam4 = { unk };
				*uParam5 = num;
				return true;
			}
		}
	}
	else if (iParam3 == 2)
	{
		i = 0;
		num2 = 4;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (i == 0)
			{
				unk = { -1126.5519f, -1530.5911f, 3.294f };
				num = 214.5477f;
			}
			else if (i == 1)
			{
				unk = { -1043.0194f, -1644.1719f, 3.4894f };
				num = 35.3163f;
			}
			else if (i == 2)
			{
				unk = { -1039.3455f, -1532.5812f, 4.1467f };
				num = 32.1734f;
			}
			else if (i == 3)
			{
				unk = { -1067.5765f, -1501.944f, 4.0327f };
				num = 216.1659f;
			}
		
			if (func_102(uParam0, unk, 1133903872, 1101004800))
			{
				*uParam4 = { unk };
				*uParam5 = num;
				return true;
			}
		}
	}
	else if (iParam3 == 3)
	{
		i = 0;
		num2 = 4;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (i == 0)
			{
				unk = { -1247.2906f, 2549.53f, 16.4214f };
				num = 137.1185f;
			}
			else if (i == 1)
			{
				unk = { -1314.11f, 2470.677f, 23.3185f };
				num = 309.2187f;
			}
			else if (i == 2)
			{
				unk = { -1095.3818f, 2686.4868f, 18.5919f };
				num = 130.0954f;
			}
			else if (i == 3)
			{
				unk = { -1373.5143f, 2429.944f, 26.7492f };
				num = 298.9626f;
			}
		
			if (func_102(uParam0, unk, 1133903872, 1101004800))
			{
				*uParam4 = { unk };
				*uParam5 = num;
				return true;
			}
		}
	}
	else if (iParam3 == 4)
	{
		i = 0;
		num2 = 5;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (i == 0)
			{
				unk = { 1299.198f, 1164.3418f, 105.3728f };
				num = 3.1765f;
			}
			else if (i == 1)
			{
				unk = { 1304.8314f, 1084.5979f, 104.6453f };
				num = 8.2195f;
			}
			else if (i == 2)
			{
				unk = { 1290.8727f, 1237.6844f, 107.4217f };
				num = 186.5802f;
			}
			else if (i == 3)
			{
				unk = { 1310.9749f, 1001.1377f, 104.9354f };
				num = 359.3654f;
			}
			else if (i == 4)
			{
				unk = { 1284.9357f, 1355.7482f, 103.4301f };
				num = 182.4582f;
			}
		
			if (func_102(uParam0, unk, 1133903872, 1101004800))
			{
				*uParam4 = { unk };
				*uParam5 = num;
				return true;
			}
		}
	}
	else if (iParam3 == 5)
	{
		i = 0;
		num2 = 5;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (i == 0)
			{
				unk = { -1208.6174f, -1410.7325f, 3.1853f };
				num = 215.8772f;
			}
			else if (i == 1)
			{
				unk = { -1172.9f, -1412.3802f, 3.6078f };
				num = 126.9322f;
			}
			else if (i == 2)
			{
				unk = { -1112.8418f, -1437.8954f, 4.031f };
				num = 211.4814f;
			}
			else if (i == 3)
			{
				unk = { -1079.8854f, -1472.8779f, 4.0784f };
				num = 32.9476f;
			}
			else if (i == 4)
			{
				unk = { -1086.7677f, -1540.7067f, 3.5549f };
				num = 128.3527f;
			}
		
			if (func_102(uParam0, unk, 1133903872, 1101004800))
			{
				*uParam4 = { unk };
				*uParam5 = num;
				return true;
			}
		}
	}

	return false;
}

int func_106(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x773B
{
	if (func_95(vParam0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
		return 0;

	if (func_90(vParam0, -1693.3018f, -1109.1305f, 17.89778f, 240f))
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1538.9806f, -941.1323f, 10.566226f, -1715.5703f, -1139.7659f, 52.203613f, 110f, false, true))
			return 1;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1739.989f, -1115.973f, 10.087262f, -1800.5149f, -1187.1798f, 52.0172f, 25f, false, true))
			return 1;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1801.7664f, -1180.2517f, 4.017236f, -1857.7177f, -1244.6284f, 38.49653f, 85f, false, true))
			return 1;
	}

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1140.8896f, -1573.1349f, -6.566939f, -1067.0844f, -1675.9756f, 23.531528f, 52f, false, true))
		return 2;

	if (func_92(3, vParam0))
		if (func_91(vParam0, 3, 0, false))
			return 3;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
		return 4;

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1171.7086f, -1524.6598f, 23.379686f, -1139.7214f, -1573.589f, -1.585432f, 55f, false, true))
		return 5;

	return 6;
}

BOOL func_107() // Position - 0x78E6
{
	Vector3 entityCoords;
	float num;
	float num2;
	float num3;

	if (!func_38(uLocal_272, veLocal_54.f_20, 100f))
		return true;

	if (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()) != veLocal_54.f_30)
		return true;

	if (iLocal_53 == 4)
		return true;

	if (iLocal_51 == 2 || iLocal_51 == 3)
	{
		if (!func_37(veLocal_54.f_1))
			return true;
	
		if (!func_39(veLocal_54))
			return true;
	
		if (!PED::IS_PED_SITTING_IN_VEHICLE(veLocal_54.f_1, veLocal_54))
			return true;
	
		if (PED::IS_PED_FLEEING(veLocal_54.f_1))
			return true;
	
		if (PED::IS_PED_IN_COMBAT(veLocal_54.f_1, 0))
			return true;
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_54, PLAYER::PLAYER_PED_ID(), true))
			return true;
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_54.f_1, PLAYER::PLAYER_PED_ID(), true))
			return true;
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_54, false) };
	
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
	
		if (func_38(uLocal_272, entityCoords, 20f))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), veLocal_54) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), veLocal_54))
				return true;
		
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				return true;
		}
	}

	return false;
}

BOOL func_108() // Position - 0x7A74
{
	int num;
	int num2;
	int num3;
	int pedNearbyVehicles;
	int i;
	int num4;
	float num5;
	float num6;
	float num7;
	Vector3 entityCoords;
	float num8;
	float entityForwardVector;
	Vector3 vector;
	var sizeAndVehs;

	if (iLocal_52 == 0)
	{
		if (func_41(iLocal_94, 500))
		{
			num2 = -1;
			num3 = -1;
			num4 = 0;
			num6 = -99999f;
		
			if (iLocal_53 != 0 && iLocal_53 != 1)
				bLocal_88 = false;
		
			if (bLocal_88)
			{
				num = 3;
				num7 = 35f;
			}
			else
			{
				num = 1;
				num7 = 10f;
			}
		
			sizeAndVehs = 12;
			pedNearbyVehicles = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &sizeAndVehs);
		
			if (pedNearbyVehicles > 0)
			{
				for (i = 0; i <= pedNearbyVehicles - 1; i = i + 1)
				{
					if (num4 < num)
					{
						if (ENTITY::DOES_ENTITY_EXIST(sizeAndVehs[i]))
						{
							if (ENTITY::GET_ENTITY_MODEL(sizeAndVehs[i]) == hLocal_98)
							{
								entityCoords = { ENTITY::GET_ENTITY_COORDS(sizeAndVehs[i], false) };
								num8 = SYSTEM::VDIST2(uLocal_272, entityCoords);
							
								if (num8 <= num7 * num7)
								{
									if (func_22(&sizeAndVehs[i], hLocal_98, hLocal_97))
									{
										if (num3 == -1)
											num3 = i;
									
										if (bLocal_88)
										{
											if (sizeAndVehs[i] != Global_113000)
											{
												if (INTERIOR::GET_INTERIOR_FROM_ENTITY(sizeAndVehs[i]) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
												{
													num5 = 1f;
													num8 = num8 / num8;
													num8 = num8 - 35f;
													num8 = num8 * -1f;
													num8 = num8 / 35f;
													num8 = num8 * 0.5f;
													num8 = num8 + 0.5f;
													num5 = num5 * num8;
													num8 = uLocal_272.f_2 - entityCoords.f_2;
												
													if (num8 < 0f)
														num8 = num8 * -1f;
												
													if (num8 < 4f)
													{
														entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
														vector = { entityCoords - uLocal_272 };
													
														if (((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / SYSTEM::VDIST(vector, 0f, 0f, 0f) > SYSTEM::COS(120f))
														{
															if (CAM::IS_SPHERE_VISIBLE(entityCoords, 2f))
																num5 = num5 * 0.5f;
														
															if (func_63(&sizeAndVehs[i]))
																num5 = num5 * 0.2f;
														
															if (!ENTITY::IS_ENTITY_UPRIGHT(sizeAndVehs[i], 1119092736) || ENTITY::IS_ENTITY_IN_WATER(sizeAndVehs[i]))
																num5 = 0f;
														
															if (num5 > num6)
															{
																num6 = num5;
																num2 = i;
															}
														}
													}
												}
											}
										}
									
										num4 = num4 + 1;
									}
								}
								else
								{
									i = pedNearbyVehicles;
								}
							}
						}
						else
						{
							i = pedNearbyVehicles;
						}
					}
					else
					{
						i = pedNearbyVehicles;
					}
				}
			}
		
			if (num3 == -1)
			{
				func_109(&veLocal_275, false);
				veLocal_275 = 0;
			}
			else if (veLocal_275 != sizeAndVehs[num3])
			{
				func_109(&veLocal_275, false);
				veLocal_275 = sizeAndVehs[num3];
				func_109(&veLocal_275, true);
			}
		
			if (bLocal_88)
			{
				if (num2 == -1)
					veLocal_276 = 0;
				else
					veLocal_276 = sizeAndVehs[num2];
			
				bLocal_88 = false;
			}
			else
			{
				bLocal_88 = true;
			}
		
			iLocal_94 = MISC::GET_GAME_TIMER();
			return true;
		}
	}

	return false;
}

void func_109(var uParam0, BOOL bParam1) // Position - 0x7D10
{
	Ped pedInVehicleSeat;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, -1, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
				if (PED::IS_PED_MODEL(pedInVehicleSeat, func_147()))
					if (!PED::IS_PED_INJURED(pedInVehicleSeat))
						PED::SET_PED_CONFIG_FLAG(pedInVehicleSeat, 251, bParam1);
		}
	}

	return;
}

void func_110() // Position - 0x7D62
{
	if (iLocal_53 == 2 || iLocal_53 == 3)
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "HAIL_TAXI", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &uLocal_268, "FP_HAIL_TAXI", 3))
			func_59();

	return;
}

BOOL func_111() // Position - 0x7DA6
{
	if (!func_3())
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return false;

	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		return false;

	return true;
}

void func_112() // Position - 0x7DDB
{
	if (iLocal_50 == 0)
	{
		if (func_143(131))
		{
			if (func_141(_GET_CURRENT_PLAYER_CHARACTER()))
			{
				func_140();
				_CONVERSATION_INITIALIZE_ACTOR(&uLocal_99, 0, PLAYER::PLAYER_PED_ID(), sLocal_264, 0, 1);
				_CONVERSATION_INITIALIZE_ACTOR(&uLocal_99, 1, 0, "TaxiDispatch", 0, 1);
			
				if (func_133())
				{
					if (func_132(&uLocal_99, 131, "TAXISAU", sLocal_265, sLocal_265, "TX_2", "TX_2", sLocal_266, sLocal_266, 2, 1, 0, 0, false))
					{
						bLocal_89 = false;
						iLocal_50 = 2;
					}
				}
				else if (func_118(&uLocal_99, 131, "TAXISAU", sLocal_265, sLocal_265, "TX_2A", "TX_2A", 2, 1, 0, 0, false))
				{
					iLocal_50 = 1;
				}
			}
		}
	}
	else if (iLocal_50 == 1)
	{
		if (func_117())
			iLocal_50 = 0;
	}
	else if (iLocal_50 == 2)
	{
		if (func_117())
		{
			if (func_116())
				if (!bLocal_89)
					iLocal_50 = 0;
			else if (func_115())
				if (!bLocal_89)
					iLocal_50 = 0;
		
			if (iLocal_50 != 0)
			{
				if (!func_114(19))
					func_113(19);
			
				func_13();
				veLocal_54.f_9 = MISC::GET_GAME_TIMER();
				veLocal_54.f_20 = { uLocal_272 };
				veLocal_54.f_30 = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
				veLocal_54.f_8 = 0;
				veLocal_54.f_10 = 0;
				iLocal_51 = 1;
				iLocal_50 = 0;
			}
		}
		else if (!bLocal_89)
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1)
				bLocal_89 = true;
		}
	}

	return;
}

void func_113(int iParam0) // Position - 0x7F1F
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_113969.f_20413.f_150[i], offset);

	return;
}

BOOL func_114(int iParam0) // Position - 0x7F61
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113969.f_20413.f_150[i], num);

	return false;
}

BOOL func_115() // Position - 0x7FA1
{
	if (Global_20915)
		return true;

	return false;
}

BOOL func_116() // Position - 0x7FB7
{
	if (Global_22335 == 1 || Global_23302 == 1)
		return true;

	return false;
}

BOOL func_117() // Position - 0x7FDA
{
	if (Global_22286 == 0)
		return true;

	return false;
}

BOOL func_118(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11) // Position - 0x7FF1
{
	var unk;
	var unk12;

	func_131(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_130();

	if (iParam8 == 1)
		Global_22298 = 1;
	else
		Global_22298 = 0;

	unk = 10;
	unk12 = 10;
	func_128(2, &unk, &unk12, sParam3, sParam4, sParam5, sParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_119(&unk, &unk12, iParam7, bParam11);
}

BOOL func_119(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x8052
{
	int i;

	Global_22287 = 0;

	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam2 > Global_22288)
			{
				if (bParam3 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
				}
				else
				{
					func_127();
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
	
		if (func_126(8, -1))
			return 0;
	
		Global_22362 = { Global_22356 };
		func_125();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23282 = Global_23283;
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_21905.f_370 = Global_23275;
		Global_22282 = Global_22283;
		Global_22284 = Global_22285;
	
		if (Global_22544 == 0)
		{
			Global_22440[0 /*6*/] = { Global_22466[0 /*6*/] };
			Global_22440[1 /*6*/] = { Global_22466[1 /*6*/] };
			Global_22492[0 /*6*/] = { Global_22518[0 /*6*/] };
			Global_22492[1 /*6*/] = { Global_22518[1 /*6*/] };
			Global_22453[0 /*6*/] = { Global_22479[0 /*6*/] };
			Global_22453[1 /*6*/] = { Global_22479[1 /*6*/] };
			Global_22505[0 /*6*/] = { Global_22531[0 /*6*/] };
			Global_22505[1 /*6*/] = { Global_22531[1 /*6*/] };
		}
	
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
		
			if (bParam3)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
			
				if (func_123())
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
					return 0;
			
				if (!Global_79389)
				{
					if (Global_22544 == 0)
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
			}
		
			if (func_122())
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
			}
		
			func_121();
			Global_22296 = bParam3;
		}
	
		Global_22288 = iParam2;
	
		if (Global_22282 > 0)
		{
			for (i = 0; i < Global_22282; i = i + 1)
			{
				TEXT_LABEL_ASSIGN_STRING(&Global_21905.f_6[i /*6*/], uParam0->[i], 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_21905.f_187[i /*6*/], uParam1->[i], 24);
			}
		}
	
		Global_21152 = 0;
		func_120();
		return 1;
	}

	if (Global_22286 == 5)
		return 0;

	if (iParam2 < Global_22288 || iParam2 == Global_22288)
		return 0;

	if (iParam2 == 2)
	{
	}
	else
	{
		func_127();
	}

	return 0;
}

void func_120() // Position - 0x83BD
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

void func_121() // Position - 0x83EF
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

BOOL func_122() // Position - 0x8484
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

BOOL func_123() // Position - 0x84AB
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x8544
{
	if (func_85(14))
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

void func_125() // Position - 0x85E6
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

BOOL func_126(int iParam0, int iParam1) // Position - 0x863E
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

void func_127() // Position - 0x8676
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

void func_128(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) // Position - 0x86CD
{
	func_129(iParam0);
	uParam1->[0] = sParam3;
	uParam2->[0] = sParam4;
	uParam1->[1] = sParam5;
	uParam2->[1] = sParam6;
	uParam1->[2] = sParam7;
	uParam2->[2] = sParam8;
	uParam1->[3] = iParam9;
	uParam2->[3] = iParam10;
	uParam1->[4] = iParam11;
	uParam2->[4] = iParam12;
	uParam1->[5] = iParam13;
	uParam2->[5] = iParam14;
	uParam1->[6] = iParam15;
	uParam2->[6] = iParam16;
	return;
}

void func_129(int iParam0) // Position - 0x873D
{
	Global_22283 = iParam0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return;
}

void func_130() // Position - 0x8763
{
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_22300 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
	return;
}

void func_131(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x879C
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
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

BOOL func_132(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, BOOL bParam13) // Position - 0x87F2
{
	var unk;
	var unk12;

	func_131(uParam0, iParam1, sParam2, iParam11, iParam12, 0);
	func_130();

	if (iParam10 == 1)
		Global_22298 = 1;
	else
		Global_22298 = 0;

	unk = 10;
	unk12 = 10;
	func_128(3, &unk, &unk12, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_119(&unk, &unk12, iParam9, bParam13);
}

BOOL func_133() // Position - 0x8853
{
	Vector3 outPosition;
	float xSize;
	int nodeFlags;

	if (iLocal_51 != 0)
		return false;

	if (iLocal_53 == 4 || iLocal_53 == 2)
		return false;

	if (iLocal_52 != 0)
		return false;

	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_267))
		return false;

	if (!func_111())
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			return false;

	func_134();
	xSize = 50f;
	nodeFlags = 1;

	if (!func_73(uLocal_272))
		nodeFlags = 9;

	if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE(uLocal_272, &outPosition, nodeFlags, 100f, 2.5f))
		return false;

	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), outPosition, xSize, xSize, 20f, false, true, 0))
		return false;

	if (func_103(uLocal_272, true))
		return false;

	return true;
}

int func_134() // Position - 0x892F
{
	eCharacter character;
	var entityCoords;
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		character = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (func_86(character))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			for (i = 0; i < Global_113969.f_7691.f_136; i = i + 1)
			{
				if (IS_BIT_SET(Global_113969.f_7691[i /*15*/].f_2, character))
					if (func_137(entityCoords, func_138(i)))
						return 1;
			}
		
			for (i = 0; i < Global_113969.f_7691.f_764; i = i + 1)
			{
				if (IS_BIT_SET(Global_113969.f_7691.f_651[i /*14*/].f_2, character))
					if (func_137(entityCoords, func_136(i)))
						return 1;
			}
		
			for (i = 0; i < Global_113969.f_7691.f_866; i = i + 1)
			{
				if (IS_BIT_SET(Global_113969.f_7691.f_765[i /*10*/].f_2, character))
					if (func_137(entityCoords, func_135(i)))
						return 1;
			}
		}
	}

	return 0;
}

int func_135(int iParam0) // Position - 0x8A2F
{
	return Global_113969.f_7691.f_765[iParam0 /*10*/].f_7;
}

int func_136(int iParam0) // Position - 0x8A47
{
	return Global_113969.f_7691.f_651[iParam0 /*14*/].f_7;
}

BOOL func_137(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x8A5F
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_44043)
			return false;
	
		if (SYSTEM::VDIST2(vParam0, Global_44043[iParam3 /*5*/]) <= Global_44043[iParam3 /*5*/].f_3 * Global_44043[iParam3 /*5*/].f_3)
			return true;
		else if (Global_44043[iParam3 /*5*/].f_4 != -1)
			return func_137(vParam0, Global_44043[iParam3 /*5*/].f_4);
	}

	return false;
}

int func_138(int iParam0) // Position - 0x8ACA
{
	return Global_113969.f_7691[iParam0 /*15*/].f_7;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x8ADF
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

void func_140() // Position - 0x8B7A
{
	eCharacter character;

	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (character == CHAR_MICHAEL)
	{
		sLocal_264 = "MICHAEL";
		sLocal_265 = "TX_1M";
		sLocal_266 = "TX_3M";
	}
	else if (character == CHAR_FRANKLIN)
	{
		sLocal_264 = "FRANKLIN";
		sLocal_265 = "TX_1F";
		sLocal_266 = "TX_3F";
	}
	else if (character == CHAR_TREVOR)
	{
		sLocal_264 = "TREVOR";
		sLocal_265 = "TX_1T";
		sLocal_266 = "TX_3T";
	}

	return;
}

BOOL func_141(eCharacter echParam0) // Position - 0x8BDF
{
	if (echParam0 == CHAR_MICHAEL || echParam0 == CHAR_FRANKLIN || echParam0 == CHAR_TREVOR)
		if (func_142(131, echParam0) == 1)
			return true;
	else if (echParam0 == func_14())
		if (func_142(131, CHAR_MICHAEL) == 1 || func_142(131, CHAR_FRANKLIN) == 1 || func_142(131, CHAR_TREVOR) == 1)
			return true;

	return false;
}

int func_142(int iParam0, eCharacter echParam1) // Position - 0x8C4D
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2169[iParam0 /*29*/].f_12[echParam1];
}

BOOL func_143(int iParam0) // Position - 0x8C77
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

BOOL func_144() // Position - 0x8CDB
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return false;

	if (Global_98433 == 1)
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (Global_113020)
		return false;

	if (Global_5)
		return false;

	if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
		return false;

	return true;
}

void func_145() // Position - 0x8D2A
{
	func_6();
	func_4(true);
	STREAMING::REMOVE_ANIM_DICT(&uLocal_268);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(-956048545, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_98);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_97);

	if (bLocal_86)
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

Hash func_146() // Position - 0x8D69
{
	return -956048545;
}

Hash func_147() // Position - 0x8D76
{
	return -2039163396;
}


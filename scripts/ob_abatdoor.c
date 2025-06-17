#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	Object obLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	Object obScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	var unk;
	var entityCoords;
	var unk6;
	float num;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_4();

	if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(obScriptParam_0, true);
		uLocal_4 = { ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true) };
		uLocal_7 = { ENTITY::GET_ENTITY_ROTATION(obScriptParam_0, 2) };
	}

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obScriptParam_0))
						{
							STREAMING::REQUEST_MODEL(joaat("p_abat_roller_1_col"));
						
							if (STREAMING::HAS_MODEL_LOADED(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(uLocal_4, 0f, 0f, 0f, false))
								{
									obLocal_3 = OBJECT::CREATE_OBJECT(joaat("p_abat_roller_1_col"), uLocal_4, true, true, false);
									ENTITY::SET_ENTITY_ROTATION(obLocal_3, uLocal_7, 2, true);
									iLocal_2 = 1;
								}
							}
						}
						break;
				
					case 1:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obScriptParam_0))
						{
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
							{
								STREAMING::REQUEST_ANIM_DICT("map_objects");
							
								if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
									iLocal_2 = 2;
							}
						}
						break;
				
					case 2:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obScriptParam_0))
						{
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
							{
								if (Global_98323)
								{
									if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
									{
										ENTITY::PLAY_ENTITY_ANIM(obScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, false, true, false, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
				
					case 3:
						num = 0.35f;
						unk = { uLocal_4 + { 3.45f, 0f, 0f } };
					
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_3))
						{
							entityCoords = { ENTITY::GET_ENTITY_COORDS(obLocal_3, true) };
						
							if (!func_2(entityCoords, unk, 0.1f, false))
							{
								unk6 = { unk - entityCoords };
								ENTITY::SET_ENTITY_COORDS(obLocal_3, entityCoords + (func_1(unk6) * F2V(MISC::GET_FRAME_TIME()) * { num, num, num }), true, false, false, true);
							}
							else
							{
								Global_98324 = 1;
								iLocal_2 = 4;
							}
						}
						break;
				
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}

	return;
}

Vector3 func_1(float fParam0, var uParam1, var uParam2) // Position - 0x1C6 (454)
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

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

BOOL func_2(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x205 (517)
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
			if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
				if (MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
					return true;
	else if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			return true;

	return false;
}

BOOL func_3(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x280 (640)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_4() // Position - 0x2C7 (711)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_3))
		OBJECT::DELETE_OBJECT(&obLocal_3);

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\\n");
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_5(char* sParam0) // Position - 0x2F2 (754)
{
	func_6(sParam0);
	return;
}

void func_6(char* sParam0) // Position - 0x300 (768)
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}


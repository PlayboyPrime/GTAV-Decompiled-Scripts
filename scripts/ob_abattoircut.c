#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	Object obScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_1();

	if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
		ENTITY::FREEZE_ENTITY_POSITION(obScriptParam_0, true);

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obScriptParam_0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obScriptParam_0))
						{
							STREAMING::REQUEST_ANIM_DICT("MISSMIC2");
						
							if (STREAMING::HAS_ANIM_DICT_LOADED("MISSMIC2"))
							{
								ENTITY::PLAY_ENTITY_ANIM(obScriptParam_0, "beefsplitter_loop", "MISSMIC2", 1f, true, false, false, 0, 0);
								iLocal_2 = 1;
							}
						}
						break;
				
					case 1:
						break;
				
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}

	return;
}

void func_1() // Position - 0xAF (175)
{
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\\n");
	STREAMING::REMOVE_ANIM_DICT("MISSMIC2");
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_2(char* sParam0) // Position - 0xC8 (200)
{
	func_3(sParam0);
	return;
}

void func_3(char* sParam0) // Position - 0xD6 (214)
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}


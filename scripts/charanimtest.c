void main() // Position - 0x0 (0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(500);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
		func_1();

	while (true)
	{
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x2F (47)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}


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
	char* sLocal_18 = NULL;
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
	var uLocal_100 = -1;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
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
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	float fLocal_124 = 0f;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<365> Local_130 = { 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	bool bLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	bool bLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	bool bLocal_144 = 0;
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_148[517] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	struct<4> Local_153 = { 0, 0, 0, 0 } ;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	var uLocal_169[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	var uLocal_174[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_175[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<5> Local_176 = { 0, 0, 0, 0, 0 } ;
	var uLocal_177 = 0;
	int iLocal_178 = 0;
	bool bLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196 = 0;
	struct<5> Local_197 = { -1, -1, 0, 0, 0 } ;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	int iLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	struct<5> Local_212 = { 0, 0, 0, 0, 0 } ;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	struct<5> Local_217 = { 0, 0, 0, 0, 517 } ;
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
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	bool bLocal_741 = 0;
	bool bLocal_742 = 0;
	int iLocal_743 = 0;
	int iLocal_744 = 0;
	bool bLocal_745 = 0;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	bool bLocal_748 = 0;
	bool bLocal_749 = 0;
	var uLocal_750 = 0;
	struct<21> Local_751 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_12 = 0,001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_61 = ((0,05f + 0,275f) - 0,01f);
	fLocal_63 = 0f;
	fLocal_108 = 3f;
	fLocal_109 = 0f;
	fLocal_110 = 2f;
	fLocal_111 = 100f;
	iLocal_122 = -1;
	fLocal_124 = 0,5f;
	iLocal_145 = -2;
	iLocal_168 = 1;
	iLocal_170 = -1;
	iLocal_181 = -1;
	iLocal_182 = -1;
	iLocal_743 = -1;
	iLocal_744 = -1;
	iLocal_746 = -1;
	iLocal_747 = -1;
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0x51CC1333A10C4E09();
	}
	func_1734();
	func_1727(ScriptParam_751);
	while (true)
	{
		func_1726();
		if (func_1721())
		{
			func_1715();
		}
		if (func_1713(unk_0x259BE71D8A81D4FA()))
		{
			func_1715();
		}
		if (Global_1943519)
		{
			func_1715();
		}
		if (unk_0x4D9174D8796EA622())
		{
			func_1715();
		}
		iVar0 = 45000;
		if (((((Local_130.f_0 == 176 || Local_130.f_0 == 175) || Local_130.f_0 == 151) || Local_130.f_0 == 76) || Local_130.f_0 == 181) || Local_130.f_0 == 189)
		{
			iVar0 = 30000;
		}
		switch (func_1712())
		{
			case 0:
				if (func_1709())
				{
					func_1699();
				}
				else
				{
					func_1715();
				}
				break;
			
			case 1:
				if (func_1692())
				{
					func_1691(Local_130.f_1, Local_130.f_0, &iLocal_166, &uLocal_164, iVar0, &Local_176);
					func_123();
				}
				else
				{
					func_1715();
				}
				break;
			
			case 2:
				if (bLocal_133)
				{
					if (!func_122(&uLocal_186))
					{
						func_121(&uLocal_186, 0, 0);
					}
					if (!func_120(&uLocal_186, 500, 0))
					{
						if (unk_0xAE231F549813BBDF(2))
						{
							unk_0x4CC1CF98851922CE(2, 176);
							unk_0x4CC1CF98851922CE(2, 177);
							unk_0x4CC1CF98851922CE(2, 237);
							unk_0x4CC1CF98851922CE(2, 238);
						}
					}
				}
				func_30();
				break;
			
			case 4:
				if (bLocal_133)
				{
					if (!func_120(&uLocal_186, 500, 0))
					{
						if (unk_0xAE231F549813BBDF(2))
						{
							unk_0x4CC1CF98851922CE(2, 176);
							unk_0x4CC1CF98851922CE(2, 177);
							unk_0x4CC1CF98851922CE(2, 237);
							unk_0x4CC1CF98851922CE(2, 238);
						}
					}
				}
				if (iLocal_167)
				{
					func_27(Local_130.f_1, Local_130.f_0, &Local_176);
					iLocal_167 = 0;
				}
				if (Local_176.f_2 == 0)
				{
					if (!func_26())
					{
						Global_2672855.f_990.f_11 = 1;
						func_1715();
					}
				}
				else if (!func_26())
				{
					if (!unk_0xD6F9DEE4765092A9(Local_176.f_0) && !unk_0xD6F9DEE4765092A9(Local_176.f_1))
					{
						func_1(Local_130.f_1, Local_176.f_0, Local_176.f_1, &Local_176, BitTest(Local_130.f_363, 19));
					}
					Local_176.f_2 = 0;
				}
				else if (func_120(&(Local_176.f_4), 8000, 0))
				{
					Local_176.f_2 = 0;
				}
				break;
		}
	}
}

int func_1(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)
{
	if (!func_26())
	{
		*uParam167 = "";
		uParam167->f_1 = "";
		uParam167->f_2 = 0;
		if (!bParam168)
		{
			return func_25(&uParam0, cParam165, sParam166, 12, 0, 0, 0);
		}
		else
		{
			return func_2(&uParam0, cParam165, sParam166, 12, 0, 0, 0);
		}
	}
	else
	{
		*uParam167 = cParam165;
		uParam167->f_1 = sParam166;
		uParam167->f_2 = 1;
	}
	return 0;
}

int func_2(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_3(sParam2, iParam3, 0);
}

int func_3(char* sParam0, int iParam1, bool bParam2)
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_23();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1F9EB85925C3ECD7())
		{
			return 0;
		}
		if (func_22(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_21();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			unk_0x8744D2E3FC95740E(&Global_8800, 20);
			unk_0x8744D2E3FC95740E(&Global_8801, 17);
			unk_0x8744D2E3FC95740E(&Global_8802, false);
			if (bParam2)
			{
				func_13();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (func_12())
				{
					return 0;
				}
				if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_79389)
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
					{
						return 0;
					}
					if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_11())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_10();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_9();
		func_4();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_23();
	}
	return 0;
}

void func_4()
{
	if (!func_5())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_5()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_8())
	{
		return 0;
	}
	if (func_6(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	return 1;
}

bool func_6(int iParam0)
{
	return func_7(iParam0, 20);
}

bool func_7(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_8()
{
	return -1;
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0F15249D24BC5ADA(0);
	Global_22286 = 1;
}

void func_10()
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
	unk_0x8744D2E3FC95740E(&Global_8801, 16);
}

int func_11()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
	{
		iVar0 = 0;
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x196704C916969409() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_13()
{
	if (func_20(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_14();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

var func_14()
{
	func_15();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_18(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_17(unk_0x4A8C381C258A124D());
			if (func_16(iVar0) && (!func_20(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_16(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return func_19(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_19(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_20(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_21()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_23()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if ((unk_0xE87F28FD4128D063() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

void func_24(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
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
}

int func_25(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 1;
	return func_3(sParam2, iParam3, 0);
}

int func_26()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_27(struct<165> Param0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 12:
			func_1(Param0, "CT_AUD", "MPCT_LShang", uParam2, 0);
			break;
		
		case 19:
			func_1(Param0, "CT_AUD", "MPCT_LMhang", uParam2, 0);
			break;
		
		case 84:
			func_1(Param0, "CT_AUD", "MPCT_Bhang", uParam2, 0);
			break;
		
		case 72:
			if (func_28())
			{
				func_1(Param0, "CT_AUD", "MPCT_VhangF", uParam2, 0);
			}
			else
			{
				func_1(Param0, "CT_AUD", "MPCT_VhangM", uParam2, 0);
			}
			break;
		
		case 70:
			if (func_28())
			{
				func_1(Param0, "CT_AUD", "MPCT_LhangF", uParam2, 0);
			}
			else
			{
				func_1(Param0, "CT_AUD", "MPCT_LhangM", uParam2, 0);
			}
			break;
		
		case 89:
			func_1(Param0, "CT_AUD", "MPCT_MChang", uParam2, 0);
			break;
		
		case 85:
			func_1(Param0, "CT_AUD", "MPCT_MWhang", uParam2, 0);
			break;
		
		case 18:
			func_1(Param0, "CT_AUD", "MPCT_Shang", uParam2, 0);
			break;
		
		case 86:
			func_1(Param0, "CT_AUD", "MPCT_Ghang", uParam2, 0);
			break;
		
		case 31:
			func_1(Param0, "CT_AUD", "MPCT_Mhang", uParam2, 0);
			break;
		
		case 20:
			func_1(Param0, "CT_AUD", "MPCT_Rhang", uParam2, 0);
			break;
		
		case 91:
			func_1(Param0, "CT_AUD", "MPCT_INhang", uParam2, 0);
			break;
		
		case 41:
			func_1(Param0, "CT_AUD", "MPCT_PGhang", uParam2, 0);
			break;
		
		case 82:
			func_1(Param0, "BACALAU", "BACAL_HANG", uParam2, 1);
			break;
		
		case 176:
			func_1(Param0, "FXIMAUD", "FXIM_PM_8A", uParam2, 1);
			break;
		
		case 175:
			func_1(Param0, "FXFRAUD", "FXFR_PM_10", uParam2, 1);
			break;
		
		case 151:
			func_1(Param0, "SM2TOAU", "SM2TO_PC_7A", uParam2, 0);
			break;
		
		case 76:
			func_1(Param0, "SM2AGAU", "SM2AG_PC_7A", uParam2, 0);
			break;
		
		case 181:
			func_1(Param0, "SM2YOAU", "SM2YO_PC_6A", uParam2, 0);
			break;
		
		case 188:
			func_1(Param0, "XM3DXAU", "XM3DX_PR_8A", uParam2, 0);
			break;
		
		case 189:
			func_1(Param0, "XM3LAAU", "XM3LA_PR_9A", uParam2, 0);
			break;
		
		case 190:
			func_1(Param0, "SR2CHAU", "SR2CH_PCR_6A", uParam2, 0);
			break;
		
		case 196:
			func_1(Param0, "XM4JAU", "XM4J_PR_5A", uParam2, 0);
			break;
	}
}

bool func_28()
{
	return func_29(unk_0x259BE71D8A81D4FA());
}

int func_29(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	switch (Local_130.f_0)
	{
		case 12:
			switch (Local_130.f_178)
			{
				case 3:
					func_98();
					break;
			}
			break;
		
		case 19:
			switch (Local_130.f_178)
			{
				case 1:
					func_86();
					break;
			}
			break;
		
		case 85:
			switch (Local_130.f_178)
			{
				case 1:
					func_53();
					break;
			}
			break;
		
		case 172:
			switch (Local_130.f_178)
			{
				case 26:
					func_31();
					break;
			}
			break;
	}
}

void func_31()
{
	int iVar0;
	int iVar1;
	
	if (BitTest(uLocal_209, 3))
	{
		if (func_120(&uLocal_210, 10000, 0))
		{
			iVar1 = 0;
			func_50(unk_0x259BE71D8A81D4FA(), &iVar0, &iVar1);
			if (iVar0 > 10)
			{
				iVar0 = 10;
			}
			if (iVar0 == 0)
			{
			}
			else if (func_34(172, "TUN_CBL_FEED", 1, "NULL", iVar0, "", 12, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
			{
			}
			func_33(&uLocal_210);
			unk_0x8744D2E3FC95740E(&uLocal_209, 3);
			func_32(4);
		}
	}
}

void func_32(int iParam0)
{
	iLocal_131 = iParam0;
}

void func_33(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_34(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x8744D2E3FC95740E(&Global_8800, 10);
	iVar0 = 3;
	if (func_36(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			Global_9410[3 /*6*/] = { func_35(iParam0) };
			Global_9487 = iParam0;
			StringCopy(&Global_9488, sParam5, 64);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, true);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_35(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_36(int iParam0, char* sParam1, int iParam2, var uParam3, char* sParam4, char* sParam5, var uParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x1B79E937E91F40C3(sParam14, sParam15))
	{
	}
	func_13();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20930 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20930 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20930 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
			{
				return 0;
			}
		}
		if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_49() == 0)
	{
		func_47();
		return 0;
	}
	func_46(Global_23353);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/]), sParam1, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_24 = iParam2;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_25 = iParam7;
	Global_113969.f_14144[Global_23353 /*104*/].f_26 = uParam8;
	Global_113969.f_14144[Global_23353 /*104*/].f_29 = uParam9;
	Global_113969.f_14144[Global_23353 /*104*/].f_30 = uParam12;
	Global_113969.f_14144[Global_23353 /*104*/].f_31 = uParam11;
	Global_113969.f_14144[Global_23353 /*104*/].f_28 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_32 = uParam3;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_33), sParam4, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_49 = uParam6;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_50), sParam5, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8800, 10))
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
		Global_9506 = 4;
		func_45(0);
		func_45(2);
		func_45(1);
	}
	else
	{
		func_13();
		switch (iParam16)
		{
			case 3:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[Global_20930] = 1;
				break;
			
			case 0:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20930)
			{
				case 0:
					func_45(0);
					Global_9506 = 0;
					break;
				
				case 1:
					func_45(1);
					Global_9506 = 1;
					break;
				
				case 2:
					func_45(2);
					Global_9506 = 2;
					break;
				
				case 3:
					func_45(3);
					Global_9506 = 3;
					break;
				
				default:
					Global_9506 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8800, 10))
		{
			Global_113969.f_14054[0 /*20*/].f_17 = 1;
			Global_113969.f_14054[1 /*20*/].f_17 = 1;
			Global_113969.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113969.f_14054[Global_20930 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113969.f_14054[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113969.f_14054[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113969.f_14054[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_23355[Global_23353] = 0;
	if (bParam10)
	{
		func_13();
		if (Global_20873)
		{
			StringCopy(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case 0:
					StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_44())
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Text_Arrive_Tone", &Global_20919, 1);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_43(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_39(1);
			func_43(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_37(iParam0, sParam1, bVar1, func_38(unk_0x259BE71D8A81D4FA()));
	return 1;
}

void func_37(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	
	if (!func_5())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = 1654525105;
	Var0.f_2 = unk_0x70E57E9927B6BA58(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = iParam3;
	Var0.f_6 = Global_1971465.f_7;
	Var0.f_7 = Global_1971465.f_8;
	Var0.f_8 = Global_1971465.f_9;
	Var0.f_9 = Global_1971465.f_10;
	Var0.f_10 = Global_1971465.f_11;
	Var0.f_11 = Global_1971465.f_12;
	Var0.f_12 = Global_1971465.f_13;
	Var0.f_13 = Global_1971465.f_14;
	unk_0x7114D68882DD5DFB(&Var0);
	if (bParam2)
	{
		Global_1971482 = -1;
	}
}

int func_38(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_206.f_6;
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_23354 = 0;
	Global_9405 = iParam0;
	func_42();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_20(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar2 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21149 = 0;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_41(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_40(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113969.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113969.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113969.f_14144[iVar3 /*104*/].f_99[Global_20930] == 1)
											{
												Global_23354++;
											}
										}
									}
									iVar3++;
								}
								func_40(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79389)
								{
									iVar4 = 0;
									iVar4 = Global_4541818;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541819[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541819[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541819[iVar5 /*104*/].f_99[Global_20930] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_40(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case 0:
											iVar6 = Global_45261;
											break;
										
										case 1:
											iVar6 = Global_45262;
											break;
										
										case 2:
											iVar6 = Global_45263;
											break;
										
										default:
											break;
									}
									func_40(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_40(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_41(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(Global_8806);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8801, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_41(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar7);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar8 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21149 = 0;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_41(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar8);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 8)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_41(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if ((iVar1 == 23 && unk_0x1B79E937E91F40C3(&(Global_8807[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8801, 6))
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_41(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_40(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_40(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_40(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam6));
	}
	if (!unk_0xD6F9DEE4765092A9(sParam7))
	{
		func_41(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		func_41(sParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam9))
	{
		func_41(sParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam10))
	{
		func_41(sParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam11))
	{
		func_41(sParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_41(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_42()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_43(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam6));
	}
	unk_0xE6B753D52F4CA222();
}

bool func_44()
{
	return Global_1575083;
}

void func_45(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113969.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_46(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4BA5A16068183C5E();
	uVar1 = unk_0x18E502A71E28968C();
	uVar2 = unk_0x5295501D0862870D();
	uVar3 = unk_0xB12880C92EA6EE15();
	uVar4 = unk_0x8825A6E0A30BDCB8() + 1;
	uVar5 = unk_0x7598FE4545010A75();
	Global_113969.f_14144[iParam0 /*104*/].f_18 = uVar0;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_48(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
		{
			Global_23353 = iVar2;
		}
		iVar2++;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_24 = 1;
}

int func_48(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0)
		{
			Global_23353 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0 || Global_113969.f_14144[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_48(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
			{
				Global_23353 = iVar2;
			}
		}
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_23353 == 34)
	{
		return 0;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 0;
	return 1;
}

void func_50(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = func_52(iVar0);
		if (iVar1 != 0)
		{
			if (func_51(iParam0, iVar1))
			{
				StringCopy(&(Global_1928583[(9 - *iParam2) /*4*/]), unk_0x93E7527CFECC7CD8(iVar1), 16);
				*iParam2++;
			}
			else
			{
				StringCopy(&(Global_1928583[*uParam1 /*4*/]), unk_0x93E7527CFECC7CD8(iVar1), 16);
				*uParam1++;
			}
		}
		iVar0++;
	}
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_52(iVar0) == iParam1)
		{
			return BitTest(Global_1975605[iParam0 /*111*/].f_25, iVar0);
		}
		iVar0++;
	}
	return 0;
}

int func_52(int iParam0)
{
	if (iParam0 < 10)
	{
		return Global_1943194[iParam0];
	}
	return 0;
}

void func_53()
{
	if (func_84(0, -1, 0))
	{
		if (!BitTest(Local_130.f_363, 4))
		{
			func_60();
			unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
		}
	}
	if (func_59(1))
	{
		if (!func_58(95, -1))
		{
			func_54(95, 1, -1, 1);
		}
		func_1(Local_130.f_1, "CT_AUD", "MPCT_MERtar", &Local_176, 0);
		func_32(4);
	}
}

void func_54(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_55(iParam0, iParam2);
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, iParam3);
	}
}

var func_55(var uParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_56(uParam1));
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_57();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_57()
{
	return Global_1574926;
}

int func_58(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_55(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_59(bool bParam0)
{
	if (Global_1835505.f_106[bParam0] != -1 && Global_1835505.f_106[bParam0] == unk_0x259BE71D8A81D4FA())
	{
		if (bParam0 == 0 || bParam0 == 1)
		{
			return 1;
		}
		else if (BitTest(Global_1919966, bParam0))
		{
			Global_1919966 = 0;
			Global_1919965 = 0;
			return 1;
		}
	}
	return 0;
}

void func_60()
{
	int iVar0;
	struct<16> Var1;
	
	if (func_83(Local_130.f_362, 0, 1))
	{
		func_82(0, 0);
		func_81("STRING");
		StringCopy(&Var1, unk_0xBD6CA019F46AB947(Local_130.f_362), 64);
		func_80(Var1);
		func_79(1, 1, 0, 0, 0);
		func_78(1, 2, 1, 1, 1);
		func_77(0, 1, 0, 0, 0);
		Local_130.f_181.f_2 = 1;
		Local_130.f_181.f_69 = 1;
		func_63(iVar0, "GC_MENU8", 0, 1, 0, 0, 0);
		func_61(-1);
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Local_130.f_363), 4);
		Local_130.f_178 = 1;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_23831.f_5326 = 0;
	Global_23831.f_5327 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23831.f_5553[iVar0 /*4*/]), "", 16);
		Global_23831.f_5610[iVar0] = -1;
		Global_23831.f_5625[iVar0] = 365;
		Global_23831.f_5640[iVar0] = 32;
		iVar0++;
	}
	Global_23831.f_5655 = 0;
	StringCopy(&(Global_4541740.f_16), "", 16);
	Global_4541740.f_20 = -1;
	if (unk_0x761778199FE1211C())
	{
		if (!func_62(&iVar1, 0, iParam0))
		{
			return;
		}
		if (unk_0xA0C7B98BCF1EEF9E(Global_23831.f_6263[iVar1 /*10*/]))
		{
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			unk_0x557F1E2300EF1A3E(0);
			unk_0xE6B753D52F4CA222();
		}
	}
}

int func_62(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x76CD105BCAC6EB9F() && unk_0xE8DB952A4BA8F328())
		{
			iParam2 = unk_0xF25E5B7C1279A85B();
		}
	}
	StringCopy(&cVar0, unk_0x1AF90EB93E0012D6(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x70E57E9927B6BA58(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23831.f_6324[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23831.f_6324[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23831.f_6324[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_63(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23831.f_5821 > iParam0)
	{
		return;
	}
	if (Global_23831.f_5821 >= 128)
	{
		return;
	}
	if (Global_23831.f_5823 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 < Global_23831.f_6344)
	{
		return;
	}
	if (Global_23831.f_5821 != iParam0)
	{
		Global_23831.f_5821 = iParam0;
		Global_23831.f_5822 = 0;
	}
	iVar0 = Global_23831.f_5659[Global_23831.f_5822];
	if (iVar0 != 1)
	{
		while (Global_23831.f_5822 < 4 && iVar0 != 1)
		{
			Global_23831.f_5822++;
			iVar0 = Global_23831.f_5659[Global_23831.f_5822];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]), sParam1, 24);
	if (!unk_0xD6F9DEE4765092A9(sParam1) && !unk_0x6BA487C862DB8DDF(sParam1))
	{
	}
	Global_23831.f_1616[Global_23831.f_5823] = bParam3;
	Global_23831.f_1873[Global_23831.f_5823] = iParam4;
	Global_23831.f_2130[Global_23831.f_5823] = iParam6;
	Global_23831.f_5823++;
	if (!bParam3)
	{
		func_76(Global_23831.f_5821, 1);
	}
	else
	{
		func_76(Global_23831.f_5821, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_73(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
		if (Global_23831.f_5678[Global_23831.f_5822])
		{
			func_65(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23831.f_5671[Global_23831.f_5822])
		{
			Global_23831.f_5671[Global_23831.f_5822] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_64(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
			if (fVar4 > Global_23831.f_6348[iParam0])
			{
				Global_23831.f_6348[iParam0] = fVar4;
			}
		}
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_23831.f_5692[iParam0]), Global_23831.f_5822);
	Global_23831.f_5822++;
	Global_23831.f_6347 = 1;
	Global_23831.f_6345 = (Global_23831.f_5823 - 1);
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = iParam2;
}

float func_64(char* sParam0)
{
	if (!unk_0x6BA487C862DB8DDF(sParam0))
	{
	}
	return unk_0x3D634C7F6A6D4CA4(0,35f, 0);
}

int func_65(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_72(iParam0), 64);
	StringCopy(&cVar1, func_69(iParam0, bParam1), 64);
	if (unk_0x70E57E9927B6BA58(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_67(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { unk_0x32D86930C15E1159(&cVar0, &cVar1) };
		fVar6 = (func_66(iParam0) / fVar4);
		Var5 = { Var5 * Vector(fVar6, fVar6, fVar6) };
		if (!bParam2)
		{
			Var5.f_0 = (Var5.f_0 - 2f);
			Var5.f_1 = (Var5.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var5.f_0 = 288f;
			Var5.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x70E57E9927B6BA58(&(Global_23831.f_7680[29 /*16*/])) == joaat("crew_logo"))
		{
			Var5.f_0 = 106f;
			Var5.f_1 = 106f;
		}
		*fParam3 = ((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x485ADB2D2728D748() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1,33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23830)
			{
				*fParam4 = (*fParam4 * (Global_23830 / *fParam3));
				*fParam3 = Global_23830;
			}
		}
		return 1;
	}
	return 0;
}

float func_66(int iParam0)
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
			return 0,5f;
			break;
		
		case 64:
			return 0,8f;
			break;
	}
	return 1f;
}

void func_67(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0x5949C3C031610A30(uParam1, uParam2);
		return;
	}
	unk_0x21564F65F997D833(uParam1, uParam2);
	fVar0 = system::to_float(*uParam1);
	fVar1 = system::to_float(*uParam2);
	fVar2 = unk_0x4AE9635532D92447(0);
	if (func_68(*uParam1, *uParam2))
	{
		*fParam3 = 1f;
		*uParam1 = system::round((fVar1 * fVar2));
		*uParam2 = system::round(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*uParam1 = system::round((fVar0 / *fParam3));
	*uParam2 = system::round((fVar1 / *fParam3));
}

bool func_68(int iParam0, int iParam1)
{
	return (system::to_float(iParam0) / system::to_float(iParam1)) > 3,5f;
}

var func_69(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_7680[iParam0 /*16*/])))
	{
		if (unk_0x70E57E9927B6BA58(&(Global_23831.f_7680[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var2 = { func_71(unk_0x259BE71D8A81D4FA()) };
			if (unk_0xE460920F3D75C34D(&Var2, &uVar1))
			{
				return func_70(&uVar1);
			}
		}
		else
		{
			return func_70(&(Global_23831.f_7680[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 54:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 55:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 57:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 58:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 64:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_70(var uParam0)
{
	return uParam0;
}

struct<13> func_71(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

char* func_72(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_6623[iParam0 /*16*/])))
	{
		if (unk_0x70E57E9927B6BA58(&(Global_23831.f_6623[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var1 = { func_71(unk_0x259BE71D8A81D4FA()) };
			unk_0xE460920F3D75C34D(&Var1, &uVar0);
			return func_70(&uVar0);
		}
		else
		{
			return func_70(&(Global_23831.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 54)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_73(char* sParam0)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		if (unk_0x70E57E9927B6BA58(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_74(0, 1, 0, 0, 0, 0, 0);
	unk_0x282D5DA1EE14950F(sParam0);
	return unk_0x43026780D77E3DC0(1);
}

void func_74(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_75(Global_23831.f_6614[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA306E6FD2A6558E6(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xA306E6FD2A6558E6(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x5A18938160AE52D0(155, 155, 155, 255);
		}
		else
		{
			unk_0x5A18938160AE52D0(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x5A18938160AE52D0(0, 0, 0, system::floor((255f * 0,8f)));
		}
		else
		{
			unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x5A18938160AE52D0(155, 155, 155, 255);
	}
	else
	{
		unk_0x5A18938160AE52D0(155, 155, 155, 255);
	}
	unk_0xBFE94E91C83D8794(0f, 0,35f);
	unk_0x2873B596E322DCDA(1);
	if (bParam5)
	{
		unk_0xBFE94E91C83D8794(0f, 0,425f);
		unk_0x8413CD3BCEEAD8DC(4);
	}
	else if (bParam6)
	{
		unk_0xBFE94E91C83D8794(0f, 0,425f);
		unk_0x8413CD3BCEEAD8DC(6);
	}
	else
	{
		unk_0x8413CD3BCEEAD8DC(0);
	}
	unk_0xE05EB1EAE7CCDC59(0f, 1f);
	unk_0xEAF65721ACB2FDFB(0);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(0, 0, 0, 0, 0);
}

void func_75(int iParam0, var uParam1, var uParam2, var uParam3)
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
}

void func_76(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = system::floor((system::to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_77(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23831.f_5678[0] = iParam0;
	Global_23831.f_5678[1] = bParam1;
	Global_23831.f_5678[2] = iParam2;
	Global_23831.f_5678[3] = iParam3;
	Global_23831.f_5678[4] = iParam4;
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23831.f_5686[0] = iParam0;
	Global_23831.f_5686[1] = iParam1;
	Global_23831.f_5686[2] = iParam2;
	Global_23831.f_5686[3] = iParam3;
	Global_23831.f_5686[4] = iParam4;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23831.f_5659[0] = iParam0;
	Global_23831.f_5659[1] = iParam1;
	Global_23831.f_5659[2] = iParam2;
	Global_23831.f_5659[3] = iParam3;
	Global_23831.f_5659[4] = iParam4;
	Global_23831.f_5829 = 0;
	if (iParam0 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam1 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam2 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam3 != 0)
	{
		Global_23831.f_5829++;
	}
	if (iParam4 != 0)
	{
		Global_23831.f_5829++;
	}
}

void func_80(char[64] cParam0)
{
	if (Global_23831.f_78 >= 2 || Global_23831.f_74 >= 4)
	{
		return;
	}
	Global_23831.f_5[Global_23831.f_74] = 5;
	Global_23831.f_74++;
	Global_23831.f_41[Global_23831.f_78 /*16*/] = { cParam0 };
	Global_23831.f_78++;
}

void func_81(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_1), sParam0, 16);
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_82(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23831.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23831.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2696723[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_5692[iVar0] = 0;
		Global_23831.f_5830[iVar0] = 0;
		Global_23831.f_5959[iVar0] = 0;
		Global_23831.f_6482[iVar0] = 0f;
		Global_23831.f_6088[iVar0] = 0;
		Global_23831.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23831.f_5659[iVar0] = 0;
		Global_23831.f_5671[iVar0] = 0f;
		Global_23831.f_5665[iVar0] = -1f;
		Global_23831.f_5678[iVar0] = 0;
		Global_23831.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23831.f_5553[iVar0 /*4*/]), "", 16);
		Global_23831.f_5610[iVar0] = -1;
		Global_23831.f_5625[iVar0] = 365;
		Global_23831.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 66)
	{
		StringCopy(&(Global_23831.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23831.f_7680[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23831.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4541740.f_16), "", 16);
	Global_4541740.f_20 = -1;
	Global_23831 = 0;
	Global_23831.f_5821 = 0;
	Global_23831.f_5822 = 0;
	Global_23831.f_5823 = 0;
	Global_23831.f_5825 = 0;
	Global_23831.f_5826 = 0;
	Global_23831.f_5827 = 0;
	Global_23831.f_5824 = 0;
	Global_23831.f_6477 = 0;
	Global_23831.f_6617 = 0;
	Global_23831.f_6342 = 0;
	Global_23831.f_6341 = 0;
	Global_23831.f_6343 = 0;
	StringCopy(&(Global_23831.f_5241), "", 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = 0;
	Global_23831.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_5325 = 0;
	StringCopy(&(Global_4541740.f_21), "", 16);
	Global_4541740.f_61 = 0;
	Global_4541740.f_62 = 0;
	Global_4541740.f_63 = 0;
	Global_4541740.f_64 = 0;
	Global_4541740.f_65 = 0;
	Global_4541740.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4541740.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4541740.f_67 = 0;
	StringCopy(&(Global_23831.f_1), "", 16);
	Global_23831.f_5677 = 0f;
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_6347 = 0;
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = 0;
	Global_23831.f_6345 = 0;
	Global_23831.f_5326 = 0;
	Global_23831.f_5327 = 0;
	Global_23831.f_5828 = 10;
	Global_23831.f_5829 = 0;
	Global_23831.f_6479 = 0f;
	Global_23831.f_6480 = 0f;
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	Global_23831.f_6333 = 0f;
	Global_23831.f_6334 = 0;
	Global_23831.f_6336 = 0;
	Global_23831.f_6335 = 0;
	Global_23831.f_6337 = 0;
	Global_23831.f_6338 = 0;
	Global_23831.f_6339 = 0;
	Global_23831.f_6340 = 0;
	Global_23831.f_9112 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23831.f_6611[iVar0] = -1;
		Global_23831.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_23831.f_5684 = 0f;
	Global_23831.f_5655 = 0;
	Global_23831.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23831.f_6618)
	{
		Global_23831.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_9091 = 0;
	Global_23831.f_9086 = 0;
	Global_23831.f_9096 = 0;
	Global_23831.f_9101 = 0;
	Global_23831.f_9106 = 0;
	Global_23831.f_9108 = 0;
	Global_23831.f_9114 = 0;
	Global_23828 = 0,05f;
	Global_23829 = 0,05f;
	Global_23830 = 0,225f;
	fVar2 = unk_0x4AE9635532D92447(0);
	if (bParam0)
	{
		Global_23830 = (0,225f * (1,777778f / fVar2));
	}
	else if (fVar2 < 1,77777f)
	{
		Global_23830 = (0,225f * (1,777778f / fVar2));
	}
	else
	{
		Global_23830 = 0,225f;
	}
}

int func_83(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_84(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_62(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23831.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_6238[iVar0 /*4*/])))
	{
		unk_0xF2CB0224D3BE0B42(&(Global_23831.f_6238[iVar0 /*4*/]), 9);
		Global_23831.f_6231[iVar0] = 1;
		if (!unk_0xCC2EFE4B1D0EE422(&(Global_23831.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xD0D00ED689D6CA81("CommonMenu", 0);
	unk_0xD0D00ED689D6CA81("Shared", 1);
	if (!unk_0x38D063D8CF6D1967("Shared"))
	{
		bVar1 = false;
	}
	Global_23831.f_6217[iVar0] = 1;
	if (!unk_0x38D063D8CF6D1967("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xD0D00ED689D6CA81("MPShopSale", 0);
		Global_23831.f_6224[iVar0] = 1;
		if (!unk_0x38D063D8CF6D1967("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23831.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_85(&(Global_23831.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_85(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				*uParam0 = unk_0x8DE4F68A9728925E(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
					{
						uParam0->f_8 = unk_0x1DD05E817C89C737();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1DD05E817C89C737();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				uParam0->f_8 = unk_0x1DD05E817C89C737();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_86()
{
	if (func_84(0, -1, 0))
	{
		if (!BitTest(Local_130.f_363, 4))
		{
			func_97();
			unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
		}
	}
	if (func_93(0))
	{
		if (func_59(0))
		{
			iLocal_136 = func_87(2);
			func_1(Local_130.f_1, "CT_AUD", "MPCT_mugTar", &Local_176, 0);
			func_32(4);
		}
	}
}

int func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_92(iParam0) >= 0)
	{
		iVar0 = func_92(iParam0);
	}
	else
	{
		iVar0 = func_88(iParam0);
	}
	return iVar0;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_89())
			{
				return 0;
			}
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 1)
			{
				return 200;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 2)
			{
				return 400;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 3)
			{
				return 600;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 4)
			{
				return 800;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_89()
{
	return BitTest(func_90(6427, -1), 19);
}

int func_90(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_91(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_91(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_56(uParam1));
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_7179;
			break;
		
		case 10:
			return Global_262145.f_3836;
			break;
		
		case 11:
			return Global_262145.f_3837;
			break;
		
		case 8:
			return Global_262145.f_3834;
			break;
		
		case 0:
			return Global_262145.f_3831;
			break;
		
		case 9:
			return Global_262145.f_3835;
			break;
		
		case 13:
			return Global_262145.f_3839;
			break;
		
		case 12:
			return Global_262145.f_3838;
			break;
		
		case 2:
			return Global_262145.f_3832;
			break;
		
		case 14:
			return Global_262145.f_3840;
			break;
		
		case 20:
			if (func_89())
			{
				return 0;
			}
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 1)
			{
				return Global_262145.f_7186;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 2)
			{
				return Global_262145.f_7187;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 3)
			{
				return Global_262145.f_7188;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 4)
			{
				return Global_262145.f_7189;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 5)
			{
				return Global_262145.f_7190;
			}
			break;
		
		case 6:
			return Global_262145.f_3833;
			break;
		
		case 22:
			return Global_262145.f_3841;
			break;
		
		case 23:
			return Global_262145.f_3842;
			break;
		
		case 24:
			return Global_262145.f_3843;
			break;
		
		case 25:
			return Global_262145.f_3844;
			break;
		
		case 26:
			return Global_262145.f_3845;
			break;
		
		case 35:
			return Global_262145.f_7872;
			break;
		
		case 15:
			return Global_262145.f_7180;
			break;
		
		case 17:
			return Global_262145.f_7180;
			break;
		
		case 18:
			return Global_262145.f_7180;
			break;
		
		case 19:
			return Global_262145.f_7180;
			break;
		
		case 21:
			return Global_262145.f_7180;
			break;
		
		case 36:
			return Global_262145.f_8339;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_13326;
			break;
		
		case 41:
			return Global_262145.f_13327;
			break;
		
		case 42:
			return Global_262145.f_13328;
			break;
		
		case 43:
			return Global_262145.f_15836;
			break;
		
		case 44:
			return Global_262145.f_15837;
			break;
		
		case 57:
			return Global_262145.f_3843;
			break;
		
		case 58:
			return Global_262145.f_25373;
			break;
		
		case 62:
			return Global_262145.f_25374;
			break;
		
		case 63:
			return Global_262145.f_28760;
			break;
		
		case 64:
			return Global_262145.f_7180;
			break;
		
		case 72:
			return Global_262145.f_25374;
			break;
		
		case 73:
			return Global_262145.f_31111;
			break;
		
		case 74:
			return Global_262145.f_31113;
			break;
		
		case 75:
			return Global_262145.f_31115;
			break;
	}
	return 0;
}

int func_93(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	bVar1 = false;
	switch (bParam0)
	{
		case 0:
			if (Global_1835505.f_106[bParam0] != -1)
			{
				if (Global_1835505.f_106[bParam0] == iVar0)
				{
					if (func_1712() != 2)
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_134, 10);
						func_94(11, 0);
						bVar1 = true;
					}
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_134, false);
					func_94(2, 0);
					bVar1 = true;
				}
			}
			else if (BitTest(Global_1845281[iVar0 /*883*/].f_143, bParam0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_134, false);
				func_94(2, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				Local_130.f_178 = 5;
			}
			break;
		
		case 1:
			if (Global_1835505.f_106[bParam0] != -1)
			{
				if (Global_1835505.f_106[bParam0] == iVar0)
				{
					if (func_1712() != 2)
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_134, 11);
						func_94(12, 0);
						bVar1 = true;
					}
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_134, 6);
					func_94(8, 0);
					bVar1 = true;
				}
			}
			else if (BitTest(Global_1845281[iVar0 /*883*/].f_143, bParam0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_134, 6);
				func_94(8, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				Local_130.f_178 = 4;
			}
			break;
	}
	if (bVar1)
	{
		unk_0x8744D2E3FC95740E(&(Local_130.f_363), 4);
		Global_1919965 = 0;
		Global_1919966 = 0;
		unk_0x8744D2E3FC95740E(&(Local_130.f_363), 10);
		func_32(1);
		return 0;
	}
	return 1;
}

void func_94(bool bParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		Local_153 = { func_96(iParam1, 0, 0) };
	}
	func_95(&uLocal_154, 0, 0);
	unk_0x0B0C9A0F9AAEB7F0(&iLocal_151, iParam0);
}

void func_95(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7E3F74F641EE6B27();
		}
		else
		{
			*uParam0 = unk_0x0728E77B2BF91D54();
		}
	}
	else
	{
		*uParam0 = unk_0x1DD05E817C89C737();
	}
	uParam0->f_1 = 1;
}

struct<4> func_96(int iParam0, bool bParam1, int iParam2)
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	if (iParam0 > 0 || (iParam2 && iParam0 == 0))
	{
		iVar5 = iParam0;
		iVar1 = system::floor(system::to_float((iVar5 / 3600000)));
		iVar5 = (iVar5 - (iVar1 * 3600000));
		iVar2 = system::floor(system::to_float((iVar5 / 60000)));
		iVar5 = (iVar5 - (iVar2 * 60000));
		iVar3 = system::floor(system::to_float((iVar5 / 1000)));
		iVar5 = (iVar5 - iVar3 * 1000);
		iVar4 = iVar5;
		if (iVar1 > 0)
		{
			StringIntConCat(&Var0, iVar1, 16);
			StringConCat(&Var0, ":", 16);
			if (iVar2 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar2, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar2, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar3 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar3, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar3, 16);
			}
		}
		else
		{
			if (iVar2 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar2, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar2, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar3 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar3, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar3, 16);
			}
			if (bParam1)
			{
				StringConCat(&Var0, ":", 16);
				if (iVar4 > 100)
				{
					StringIntConCat(&Var0, iVar4, 16);
				}
				else if (iVar4 > 10)
				{
					StringConCat(&Var0, "0", 16);
					StringIntConCat(&Var0, iVar4, 16);
				}
				else
				{
					StringConCat(&Var0, "00", 16);
					StringIntConCat(&Var0, iVar4, 16);
				}
			}
		}
	}
	else
	{
		StringCopy(&Var0, "---", 16);
	}
	return Var0;
}

void func_97()
{
	int iVar0;
	struct<16> Var1;
	
	if (func_83(Local_130.f_362, 0, 1))
	{
		func_82(0, 0);
		func_81("STRING");
		StringCopy(&Var1, unk_0xBD6CA019F46AB947(Local_130.f_362), 64);
		func_80(Var1);
		func_79(1, 1, 0, 0, 0);
		func_78(1, 2, 1, 1, 1);
		func_77(0, 1, 0, 0, 0);
		Local_130.f_181.f_2 = 1;
		Local_130.f_181.f_69 = 1;
		func_63(iVar0, "GC_MENU8", 0, 1, 0, 0, 0);
		func_61(-1);
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Local_130.f_363), 4);
		Local_130.f_178 = 1;
	}
}

void func_98()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<15> Var3;
	struct<13> Var4;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	if (func_84(0, -1, 0))
	{
		if (!BitTest(Local_130.f_363, 4))
		{
			func_119();
			unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
		}
	}
	if (Global_2657971[iVar0 /*465*/].f_215 != -1 && func_83(unk_0xB23E0F9B63D009A8(Global_2657971[iVar0 /*465*/].f_215), 0, 1))
	{
		iVar2 = unk_0xB23E0F9B63D009A8(Global_2657971[iVar0 /*465*/].f_215);
		if (unk_0xE7B45027762DEFE7(iVar2) >= iLocal_137 || Global_2657971[Global_2657971[iVar0 /*465*/].f_215 /*465*/].f_217 == iVar0)
		{
			Var3.f_3 = 2073500011;
			Var3.f_11 = unk_0xB23E0F9B63D009A8(Global_2657971[iVar0 /*465*/].f_215);
			if (bLocal_138)
			{
				Var3.f_4 = 1;
			}
			else
			{
				Var3.f_4 = 0;
			}
			func_115(Var3, func_116(1, 1));
			if (!func_58(91, -1))
			{
				func_54(91, 1, -1, 1);
			}
			Var4 = { func_71(Var3.f_11) };
			if (func_114())
			{
				func_101(joaat("service_spend_lose_wanted_level"), iLocal_136, &iVar1, 0, 0, 0);
				Global_4535950[iVar1 /*85*/].f_14 = { Var4 };
			}
			else
			{
				unk_0xA8C662E16DC4030E(iLocal_136, &Var4, 0, 0, joaat("char_lester"));
				func_99(-iLocal_136, 1, 1, 0f);
			}
			Global_2657971[iVar0 /*465*/].f_215 = -1;
			Global_2657971[iVar0 /*465*/].f_216 = -1;
			func_1(Local_130.f_1, "CT_AUD", "MPCT_WNTcon", &Local_176, 0);
			func_32(4);
		}
	}
	else
	{
		Global_2657971[iVar0 /*465*/].f_215 = -1;
		Global_2657971[iVar0 /*465*/].f_216 = -1;
		unk_0x8744D2E3FC95740E(&(Local_130.f_363), 4);
		Local_130.f_181.f_69 = 0;
		Local_130.f_178 = 1;
		func_32(1);
	}
}

void func_99(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = system::floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_4 = iVar1;
	Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_3 = (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_206.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_100(iVar1, 0);
	}
}

void func_100(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_101(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_114())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("service_spend_mechanic_wage"):
		case joaat("service_spend_utility_bills"):
		case joaat("service_spend_prostitutes"):
		case joaat("service_spend_strip_club"):
		case joaat("service_spend_cinema"):
		case joaat("service_spend_fairground"):
		case joaat("service_spend_lottery"):
		case joaat("service_spend_telescope"):
		case joaat("service_spend_call_player"):
		case joaat("service_spend_vehicle_insurance"):
		case joaat("service_spend_vehicle_insurance_premium"):
		case joaat("service_spend_car_repair"):
		case joaat("service_spend_personal_vehicle_dropoff"):
		case joaat("service_spend_pegasus_delivery"):
		case joaat("service_spend_car_impound"):
		case joaat("service_spend_carwash"):
		case joaat("service_spend_healthcare"):
		case joaat("service_spend_other_player_healthcare"):
		case joaat("service_spend_arrest_bail"):
		case joaat("service_spend_cash_drop"):
		case joaat("service_spend_robbed_by_mugger"):
		case joaat("service_spend_cash_drop_holdup"):
		case joaat("service_spend_match_entry_fee"):
		case joaat("service_spend_race_vehicle_rental"):
		case joaat("service_spend_challenge_wager"):
		case joaat("service_spend_betting"):
		case joaat("service_spend_airstrike"):
		case joaat("service_spend_ammo_drop"):
		case joaat("service_spend_backup_gang"):
		case joaat("service_spend_backup_heli"):
		case joaat("service_spend_boat_pickup"):
		case joaat("service_spend_bounty"):
		case joaat("service_spend_bull_shark"):
		case joaat("service_spend_cops_turn_eye"):
		case joaat("service_spend_heli_pickup"):
		case joaat("service_spend_hire_mercenary"):
		case joaat("service_spend_hire_mugger"):
		case joaat("service_spend_locate_vehicle"):
		case joaat("service_spend_lose_wanted_level"):
		case joaat("service_spend_off_the_radar"):
		case joaat("service_spend_passive"):
		case joaat("service_spend_request_heist"):
		case joaat("service_spend_request_job"):
		case joaat("service_spend_reveal_players"):
		case joaat("service_spend_taxi"):
		case joaat("service_spend_bank_interest"):
		case joaat("service_spend_cash_gift"):
		case joaat("service_spend_cash_shared"):
		case joaat("service_spend_impromptu_race_fee"):
		case joaat("service_spend_bounty_dm"):
		case joaat("service_spend_wager"):
		case joaat("service_spend_pay_boss"):
		case joaat("service_spend_pay_goon"):
		case joaat("service_spend_rename_organization"):
		case joaat("service_spend_rename_acid_product"):
		case joaat("service_spend_rename_acid_lab"):
		case joaat("service_spend_pa_service_heli_pickup"):
		case joaat("service_spend_order_bodyguard_vehicle"):
		case joaat("service_spend_order_warehouse_vehicle"):
		case joaat("service_spend_jukebox"):
		case joaat("service_spend_business"):
		case joaat("service_spend_ba_vp_bounty"):
		case joaat("service_spend_ba_vp_bullshark"):
		case joaat("service_spend_ba_sarge_ammo"):
		case joaat("service_spend_ba_sarge_molotov"):
		case joaat("service_spend_ba_enforcer_armour"):
		case joaat("service_spend_vehicle_export_mods"):
		case joaat("service_spend_import_export_repair"):
		case joaat("service_spend_employ_assassins"):
		case joaat("service_spend_gangops_cannon"):
		case joaat("service_spend_gangops_skip_mission"):
		case joaat("service_spend_gangops_start_strand"):
		case joaat("service_spend_gangops_trip_skip"):
		case joaat("service_spend_gangops_repair_cost"):
		case joaat("service_spend_nightclub_entry_fee"):
		case joaat("service_spend_nightclub_bar_drink"):
		case joaat("service_spend_nightclub_dj_rehire"):
		case joaat("service_spend_arena_join_spectator"):
		case joaat("service_spend_arena_spectator_box"):
		case joaat("service_spend_make_it_rain"):
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_102(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_pickup"):
		case joaat("service_earn_jobs"):
		case joaat("service_earn_betting"):
		case joaat("service_earn_lottery"):
		case joaat("service_earn_challenge_win"):
		case joaat("service_earn_property_sales"):
		case joaat("service_earn_vehicle_sales"):
		case joaat("service_earn_lester_target_kill"):
		case joaat("service_earn_bounty_collected"):
		case joaat("service_earn_crate_drop"):
		case joaat("service_earn_holdups"):
		case joaat("service_earn_import_export"):
		case joaat("service_earn_armored_trucks"):
		case joaat("service_earn_jobshare_cash"):
		case joaat("service_earn_not_badsport"):
		case joaat("service_earn_bank_interest"):
		case joaat("service_earn_debug"):
		case joaat("service_earn_cncw"):
		case joaat("service_earn_cncb"):
		case joaat("service_earn_job_bonus"):
		case joaat("service_earn_bend_job"):
		case joaat("service_earn_personal_vehicle"):
		case joaat("service_earn_daily_objectives"):
		case joaat("service_earn_ambient_job_plane_takedown"):
		case joaat("service_earn_ambient_job_distract_cops"):
		case joaat("service_earn_ambient_job_destroy_veh"):
		case joaat("service_earn_refund_backup_vagos"):
		case joaat("service_earn_refund_backup_lost"):
		case joaat("service_earn_refund_backup_families"):
		case joaat("service_earn_refund_hire_mugger"):
		case joaat("service_earn_refund_hire_mercenary"):
		case joaat("service_earn_refund_buy_cardropoff"):
		case joaat("service_earn_refund_heli_pickup"):
		case joaat("service_earn_refund_boat_pickup"):
		case joaat("service_earn_refund_clear_wanted"):
		case joaat("service_earn_refund_head_2_head"):
		case joaat("service_earn_refund_challenge"):
		case joaat("service_earn_refund_share_last_job"):
		case joaat("service_earn_refund_lottery"):
		case -1426920838:
		case joaat("service_earn_gangattack_pickup"):
		case joaat("service_earn_ambient_job_hot_target_deliver"):
		case joaat("service_earn_ambient_job_hot_target_kill"):
		case joaat("service_earn_ambient_job_urban_warfare"):
		case joaat("service_earn_ambient_job_checkpoint_collection"):
		case joaat("service_earn_ambient_job_time_trial"):
		case joaat("service_earn_ambient_job_challenges"):
		case joaat("service_earn_ambient_job_heli_hot_target"):
		case joaat("service_earn_ambient_job_dead_drop"):
		case joaat("service_earn_ambient_job_penned_in"):
		case joaat("service_earn_ambient_job_pass_parcel"):
		case joaat("service_earn_ambient_job_blast"):
		case joaat("service_earn_ambient_job_hot_property"):
		case joaat("service_earn_ambient_job_king"):
		case joaat("service_earn_ambient_job_beast"):
		case joaat("service_earn_boss"):
		case joaat("service_earn_goon"):
		case joaat("service_earn_boss_agency"):
		case joaat("service_earn_from_destroying_contraband"):
		case joaat("service_earn_premium_job"):
		case joaat("service_earn_from_vehicle_export"):
		case joaat("service_earn_smuggler_agency"):
		case joaat("service_earn_wage_payment_bonus"):
		case joaat("service_earn_wage_payment"):
		case joaat("service_earn_refundammodrop"):
		case joaat("service_earn_salvage_checkpoint_collection"):
		case joaat("service_earn_ambient_mugging"):
		case joaat("service_earn_ambient_pickup"):
		case joaat("service_earn_deathmatch_bounty"):
		case joaat("service_earn_cashing_out"):
		case joaat("service_earn_job_bonus_criminal_mastermind"):
		case joaat("service_earn_job_bonus_heist_award"):
		case joaat("service_earn_job_bonus_first_time_bonus"):
		case joaat("service_earn_refund_orbital_manual"):
		case joaat("service_earn_refund_orbital_auto"):
		case joaat("service_earn_gangops_wages"):
		case joaat("service_earn_gangops_wages_bonus"):
		case joaat("service_earn_gangops_prep_participation"):
		case joaat("service_earn_gangops_setup"):
		case joaat("service_earn_gangops_setup_fail"):
		case joaat("service_earn_gangops_finale"):
		case joaat("service_earn_gangops_award_mastermind_2"):
		case joaat("service_earn_gangops_award_mastermind_3"):
		case joaat("service_earn_gangops_award_mastermind_4"):
		case joaat("service_earn_gangops_award_loyalty_award_2"):
		case joaat("service_earn_gangops_award_loyalty_award_3"):
		case joaat("service_earn_gangops_award_loyalty_award_4"):
		case joaat("service_earn_gangops_award_first_time_xm_base"):
		case joaat("service_earn_gangops_award_first_time_xm_submarine"):
		case joaat("service_earn_gangops_award_first_time_xm_silo"):
		case joaat("service_earn_gangops_award_supporting"):
		case joaat("service_earn_gangops_award_order"):
		case joaat("service_earn_gangops_elite_xm_base"):
		case joaat("service_earn_gangops_elite_xm_submarine"):
		case joaat("service_earn_gangops_elite_xm_silo"):
		case joaat("service_earn_gangops_rival_delivery"):
		case joaat("service_earn_doomsday_finale_bonus"):
		case joaat("service_earn_bounty_hunter_reward"):
		case joaat("service_earn_from_business_battle"):
		case joaat("service_earn_from_club_management_participation"):
		case joaat("service_earn_from_fmbb_phonecall_mission"):
		case joaat("service_earn_from_business_hub_sell"):
		case joaat("service_earn_from_fmbb_boss_work"):
		case joaat("service_earn_fmbb_wage_bonus"):
		case joaat("service_earn_bb_event_bonus"):
		case joaat("service_earn_arena_skill_lvl_award"):
		case joaat("service_earn_arena_career_tier_progression_1"):
		case joaat("service_earn_arena_career_tier_progression_2"):
		case joaat("service_earn_arena_career_tier_progression_3"):
		case joaat("service_earn_arena_career_tier_progression_4"):
		case joaat("service_earn_spin_the_wheel_cash"):
			func_102(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("service_spend_spin_the_wheel_payment"):
		case joaat("service_spend_casino_generic"):
		case joaat("service_spend_arcade_game"):
		case joaat("service_spend_arcade_generic"):
		case joaat("service_spend_casino_heist_skip_mission"):
		case joaat("service_spend_casino_heist_setup_heist"):
		case joaat("service_spend_casino_heist_casino_model"):
		case joaat("service_spend_casino_heist_vault_door"):
		case joaat("service_spend_casino_heist_door_security"):
		case joaat("service_spend_island_heist_support_airstrike"):
		case joaat("service_spend_island_heist_support_heavy_weapon"):
		case joaat("service_spend_island_heist_support_sniper"):
		case joaat("service_spend_island_heist_support_air_support"):
		case joaat("service_spend_island_heist_support_drone"):
		case joaat("service_spend_island_heist_support_weapon_stash"):
		case joaat("service_spend_island_heist_suppressors"):
		case joaat("service_spend_island_heist_replay"):
		case joaat("service_spend_beach_party_generic"):
		case joaat("service_spend_submarine_utility_fee"):
		case joaat("service_spend_submarine_boat"):
		case joaat("service_spend_submarine_relocation"):
		case joaat("service_spend_casino_club_generic"):
		case joaat("service_spend_business_expenses"):
		case joaat("service_spend_fixer_hq_concierge"):
		case joaat("service_spend_request_company_suv"):
		case joaat("service_spend_interaction_menu_ability"):
		case joaat("service_spend_agent_14_vehicle_request"):
		case joaat("service_spend_tony_limo"):
		case joaat("service_spend_nightclub_toilet_attendant"):
		case joaat("service_spend_jugallo_boss_vehicle_request"):
		case 1989973742:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_102(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_assassinate_target_killed"):
		case joaat("service_earn_arena_war"):
		case joaat("service_earn_refund_arena_spec_box_entry"):
		case joaat("service_earn_ambient_job_rc_time_trial"):
		case joaat("service_earn_daily_objective_event"):
		case joaat("service_earn_collectables_action_figures"):
		case joaat("service_earn_casino_mission_reward"):
		case joaat("service_earn_casino_award_mission_one_first_time"):
		case joaat("service_earn_casino_award_mission_two_first_time"):
		case joaat("service_earn_casino_award_mission_three_first_time"):
		case joaat("service_earn_casino_award_mission_four_first_time"):
		case joaat("service_earn_casino_award_mission_five_first_time"):
		case joaat("service_earn_casino_award_mission_six_first_time"):
		case joaat("service_earn_casino_award_straight_flush"):
		case joaat("service_earn_casino_award_top_pair"):
		case joaat("service_earn_casino_award_full_house"):
		case joaat("service_earn_casino_award_lucky_lucky"):
		case joaat("service_earn_casino_award_high_roller_bronze"):
		case joaat("service_earn_casino_award_high_roller_silver"):
		case joaat("service_earn_casino_award_high_roller_gold"):
		case joaat("service_earn_casino_award_high_roller_platinum"):
		case joaat("service_earn_casino_story_mission_reward"):
		case joaat("service_earn_casino_heist_setup_mission"):
		case joaat("service_earn_casino_heist_prep_mission"):
		case joaat("service_earn_casino_heist_finale"):
		case joaat("service_earn_casino_heist_award_smash_n_grab"):
		case joaat("service_earn_casino_heist_award_in_plain_sight"):
		case joaat("service_earn_casino_heist_award_undetected"):
		case joaat("service_earn_casino_heist_award_all_rounder"):
		case joaat("service_earn_casino_heist_award_elite_thief"):
		case joaat("service_earn_casino_heist_award_professional"):
		case joaat("service_earn_casino_heist_elite_stealth"):
		case joaat("service_earn_casino_heist_elite_subterfuge"):
		case joaat("service_earn_casino_heist_elite_direct"):
		case joaat("service_earn_collectable_item"):
		case joaat("service_earn_collectable_completed_collection"):
		case joaat("service_earn_collectables_signal_jammers"):
		case joaat("service_earn_collectables_signal_jammers_complete"):
		case joaat("service_earn_island_heist_finale"):
		case joaat("service_earn_island_heist_elite_challenge"):
		case joaat("service_earn_island_heist_award_professional"):
		case joaat("service_earn_island_heist_award_elite_thief"):
		case joaat("service_earn_island_heist_award_the_island_heist"):
		case joaat("service_earn_island_heist_award_going_alone"):
		case joaat("service_earn_island_heist_award_team_work"):
		case joaat("service_earn_island_heist_award_cat_burglar"):
		case joaat("service_earn_island_heist_award_pro_thief"):
		case joaat("service_earn_island_heist_award_mixing_it_up"):
		case joaat("service_earn_island_heist_prep"):
		case joaat("service_earn_island_heist_dj_mission"):
		case joaat("service_earn_tuner_robbery_prep"):
		case joaat("service_earn_tuner_robbery_finale"):
		case joaat("service_earn_tuner_car_club_membership"):
		case joaat("service_earn_tuner_daily_vehicle"):
		case joaat("service_earn_tuner_daily_vehicle_bonus"):
		case joaat("service_earn_tuner_award_union_depository"):
		case joaat("service_earn_tuner_award_military_convoy"):
		case joaat("service_earn_tuner_award_fleeca_bank"):
		case joaat("service_earn_tuner_award_freight_train"):
		case joaat("service_earn_tuner_award_bolingbroke_ass"):
		case joaat("service_earn_tuner_award_iaa_raid"):
		case joaat("service_earn_tuner_award_meth_job"):
		case joaat("service_earn_tuner_award_bunker_raid"):
		case joaat("service_earn_auto_shop_delivery_award"):
		case joaat("service_earn_agency_security_contract"):
		case joaat("service_earn_agency_payphone_hit"):
		case joaat("service_earn_agency_story_prep"):
		case joaat("service_earn_agency_story_finale"):
		case joaat("service_earn_fixer_award_sec_con"):
		case joaat("service_earn_fixer_award_phone_hit"):
		case joaat("service_earn_fixer_award_agency_story"):
		case joaat("service_earn_fixer_award_short_trip"):
		case joaat("service_earn_fixer_rival_delivery"):
		case joaat("service_earn_music_studio_short_trip"):
		case joaat("service_earn_from_contraband"):
		case joaat("service_earn_nclub_troublemaker"):
		case joaat("service_earn_sightseeing_reward"):
		case joaat("service_earn_ambient_job_clubhouse_contract"):
		case joaat("service_earn_ambient_job_underwater_cargo"):
		case joaat("service_earn_ambient_job_crime_scene"):
		case joaat("service_earn_ambient_job_metal_detector"):
		case joaat("service_earn_ambient_job_smuggler_plane"):
		case joaat("service_earn_ambient_job_smuggler_trail"):
		case joaat("service_earn_ambient_job_golden_gun"):
		case joaat("service_earn_ambient_job_ammunation_delivery"):
		case joaat("service_earn_ambient_job_source_research"):
		case joaat("service_earn_yohan_source_goods"):
		case joaat("service_earn_taxi_job"):
		case joaat("service_earn_daily_stash_house_participation"):
		case joaat("service_earn_daily_stash_house_completed"):
		case joaat("service_earn_ambient_job_gang_convoy"):
		case joaat("service_earn_ambient_job_shop_robbery"):
		case joaat("service_earn_ambient_job_xmas_mugger"):
		case joaat("service_earn_ambient_job_maze_bank"):
		case joaat("service_earn_juggalo_story_mission"):
		case joaat("service_earn_juggalo_phone_mission"):
		case joaat("service_earn_winter_22_award_juggalo_story"):
		case joaat("service_earn_winter_22_award_acid_lab"):
		case joaat("service_earn_winter_22_award_daily_stash"):
		case joaat("service_earn_winter_22_award_dead_drop"):
		case joaat("service_earn_winter_22_award_random_event"):
		case joaat("service_earn_winter_22_award_taxi"):
		case joaat("service_earn_acid_lab_setup_participation"):
		case joaat("service_earn_acid_lab_source_participation"):
		case joaat("service_earn_acid_lab_sell_participation"):
		case joaat("service_earn_smuggler_ops"):
		case joaat("service_earn_ambient_job_armored_truck"):
		case joaat("service_earn_ambient_job_bicycle_time_trial"):
		case joaat("service_earn_cayo_attrition_bonus_objective"):
		case joaat("service_earn_avenger_operations"):
		case joaat("service_earn_avenger_ops_bonus"):
		case joaat("service_earn_ambient_job_drug_vehicle"):
		case 649031587:
		case -1539520895:
		case 560526114:
		case -256590568:
		case -470808433:
		case 1245164680:
		case -1433838369:
		case 1648751987:
		case 674719198:
		case 617724895:
		case 1424147761:
		case 2131157548:
		case 1237940902:
		case -1688538833:
		case 918785029:
		case -1343182760:
		case -1725871206:
		case 1435585629:
		case 1851118721:
		case -1961446392:
		case -1726080156:
		case 300207193:
			func_102(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_102(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_114())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_57()) || unk_0x34F31012FED51A0F())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535950[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*iParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x54BC5E0B6A29AE8A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x5F7C6361179DFFC4(iVar4))
		{
			*iParam0 = func_109(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*iParam0 != -1)
				{
					Global_4535950[*iParam0 /*85*/].f_66.f_8 = 1;
					Global_4535950[*iParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537455 = 1;
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_108(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_103(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_103(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_127.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_104(iParam0);
	}
}

void func_104(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_114())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_107(iParam0))
		{
			if (!bVar0)
			{
				unk_0xD8EB47E09DFC393C();
			}
		}
		else if (!bVar0)
		{
			unk_0x1FDE21A286357401(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_105(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_105(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_106(&(uParam0->f_14));
	func_106(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_106(var uParam0)
{
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
}

int func_107(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_108(int iParam0, var uParam1)
{
	Global_2698855 = uParam1;
	Global_2698854 = iParam0;
}

int func_109(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_114())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = iParam0;
			Global_4535950[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535950[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535950[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4535950[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535950[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar0 /*85*/].f_66.f_14 = unk_0x8034325BF6D6E41F();
			Global_4535950[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
			if (bParam6)
			{
				Global_4535950[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_110(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_110(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<4> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam19;
	iVar1 = func_112(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_111();
		unk_0x71A6F836422FDD2B(1, &Var0, 37, iVar1, Var0.f_0);
	}
}

void func_111()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

int func_112(bool bParam0)
{
	var uVar0;
	
	if (func_113(iParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam0);
	}
	return uVar0;
}

int func_113(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_114()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

void func_115(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -642704387;
	Param0.f_1 = unk_0x259BE71D8A81D4FA();
	if (!iParam14 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Param0, 15, iParam14, Param0.f_0);
	}
}

int func_116(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_83(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
				else if (!func_117(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_117(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_113(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_118(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			bVar0 = unk_0x1864096A95E36EBA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_118(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_57();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

void func_119()
{
	int iVar0;
	struct<16> Var1;
	
	if (func_83(Local_130.f_362, 0, 1))
	{
		func_82(0, 0);
		func_81("STRING");
		StringCopy(&Var1, unk_0xBD6CA019F46AB947(Local_130.f_362), 64);
		func_80(Var1);
		func_79(1, 1, 0, 0, 0);
		func_78(1, 2, 1, 1, 1);
		func_77(0, 1, 0, 0, 0);
		Local_130.f_181.f_2 = 1;
		Local_130.f_181.f_69 = 1;
		func_63(iVar0, "GC_MENU8", 0, 1, 0, 0, 0);
		func_61(-1);
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Local_130.f_363), 4);
		Local_130.f_178 = 1;
	}
}

int func_120(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_121(uParam0, bParam2, 0);
	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_121(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				*uParam0 = unk_0x0728E77B2BF91D54();
			}
		}
		else
		{
			*uParam0 = unk_0x1DD05E817C89C737();
		}
		uParam0->f_1 = 1;
	}
}

bool func_122(var uParam0)
{
	return uParam0->f_1;
}

void func_123()
{
	bLocal_133 = true;
	unk_0x4EB223432F8FA0A0(10);
	unk_0x4EB223432F8FA0A0(2);
	unk_0x4EB223432F8FA0A0(19);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(9);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(7);
	unk_0x7009D885379C8CDF();
	func_1690();
	func_1689();
	unk_0x66EFB3D6110055C4(0, 24, 1);
	unk_0x66EFB3D6110055C4(0, 140, 1);
	unk_0x66EFB3D6110055C4(0, 141, 1);
	unk_0x66EFB3D6110055C4(0, 143, 1);
	unk_0x66EFB3D6110055C4(0, 16, 1);
	unk_0x66EFB3D6110055C4(0, 17, 1);
	unk_0x66EFB3D6110055C4(0, 14, 1);
	unk_0x66EFB3D6110055C4(0, 15, 1);
	unk_0x66EFB3D6110055C4(0, 37, 1);
	unk_0x66EFB3D6110055C4(0, 12, 1);
	unk_0x66EFB3D6110055C4(0, 13, 1);
	unk_0x66EFB3D6110055C4(0, 85, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	if (!unk_0x4D9174D8796EA622())
	{
		unk_0x4CC1CF98851922CE(2, 177);
		unk_0x4CC1CF98851922CE(2, 176);
		unk_0x4CC1CF98851922CE(2, 174);
		unk_0x4CC1CF98851922CE(2, 175);
		func_1688(1);
		unk_0x4CC1CF98851922CE(2, 172);
		unk_0x4CC1CF98851922CE(2, 181);
		unk_0x4CC1CF98851922CE(2, 180);
	}
	if (!BitTest(Local_130.f_363, 15))
	{
		unk_0x0A0A06C514052E80(0);
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 15);
	}
	if (!BitTest(Local_130.f_363, 11))
	{
		unk_0x428C32CC68809A35(1);
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 11);
	}
	if (!Global_1919967)
	{
		Global_1919967 = 1;
	}
	if (BitTest(bLocal_179, 0))
	{
		if (!BitTest(bLocal_179, 1))
		{
			func_1686(0, 31, 4);
			unk_0x0B0C9A0F9AAEB7F0(&bLocal_179, true);
		}
		else if (!Global_101585.f_1482)
		{
			unk_0x8744D2E3FC95740E(&bLocal_179, false);
			unk_0x8744D2E3FC95740E(&bLocal_179, true);
		}
		return;
	}
	func_1321();
	if (func_1712() == 1)
	{
		if (!BitTest(Local_130.f_363, 13))
		{
			if (func_1320())
			{
				if (!BitTest(Local_130.f_363, 6))
				{
					unk_0x8744D2E3FC95740E(&(Local_130.f_363), 4);
				}
				Global_23831.f_9081 = 0;
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 13);
			}
			else
			{
				Global_23831.f_9081 = 1;
			}
		}
		switch (Local_130.f_0)
		{
			case 12:
				func_1275();
				break;
			
			case 19:
				func_1266();
				break;
			
			case 85:
				func_1221();
				break;
			
			case 84:
				func_1219();
				break;
			
			case 89:
				func_1218();
				break;
			
			case 41:
				func_1124();
				break;
			
			case 91:
				func_1080();
				break;
			
			case 18:
				func_1078();
				break;
			
			case 31:
				func_1076();
				break;
			
			case 86:
				func_1074();
				break;
			
			case 20:
				func_1065();
				break;
			
			case 104:
			case 105:
			case 106:
			case 107:
			case 108:
			case 109:
			case 110:
			case 111:
				func_1063();
				break;
			
			case 82:
				func_1050();
				break;
			
			case 79:
				func_959();
				break;
			
			case 75:
			case 74:
				func_868();
				break;
			
			case 157:
				func_677();
				break;
			
			case 169:
				func_638();
				break;
			
			case 172:
				func_603();
				break;
			
			case 176:
				func_595();
				break;
			
			case 175:
				func_516();
				break;
			
			case 151:
				func_501();
				break;
			
			case 76:
				func_485();
				break;
			
			case 181:
				func_459();
				break;
			
			case 188:
				func_442();
				break;
			
			case 189:
				func_396();
				break;
			
			case 190:
				func_386();
				break;
			
			case 197:
				func_385();
				break;
			
			case 196:
				func_124();
				break;
			}
	}
}

void func_124()
{
	if (func_84(0, -1, 1))
	{
		if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
		{
			func_380();
		}
		else
		{
			func_370();
		}
		func_125();
	}
}

void func_125()
{
	func_150();
	func_126(1, -1, 1, BitTest(bLocal_179, 2), 1, -1082130432, 0, 0, -1);
}

void func_126(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	var uVar58;
	var uVar59;
	float fVar60;
	char cVar61[64];
	char cVar62[64];
	float fVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_62(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_148(0, bParam6))
	{
		return;
	}
	unk_0x9A122D542F2BB60E(76, 84);
	unk_0x9C066F8D86A1A438(-0,05f, -0,05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23831)
	{
		if (func_65(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = (fVar37 / fVar36);
		}
		else
		{
			Global_23831 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23830;
	}
	fVar55 = (fParam5 * fVar56);
	if (unk_0x70E57E9927B6BA58(&(Global_23831.f_1)) == unk_0x70E57E9927B6BA58("HIDE"))
	{
		fVar57 = Global_23829;
	}
	else
	{
		fVar57 = (((Global_23829 + fVar55) + 0,034722f) + 0f);
	}
	fVar60 = 1f;
	func_67(bParam7, &uVar58, &uVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23831.f_5821 <= 1)
		{
			func_63(Global_23831.f_5821 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23831.f_6617 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23831.f_6331)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_1)) == unk_0x70E57E9927B6BA58("HIDE"))
			{
				fVar49 = Global_23829;
			}
			else
			{
				if (Global_23831)
				{
					StringCopy(&cVar61, func_72(29), 64);
					StringCopy(&cVar62, func_69(29, 1), 64);
					if (unk_0x70E57E9927B6BA58(&(Global_23831.f_7680[29 /*16*/])) == joaat("crew_logo"))
					{
						func_147(Global_23828, Global_23829, fParam5, fVar55, 0, 0, 0, 255);
						unk_0xFFA2B456A81EA1EB(&cVar61, &cVar62, (Global_23828 + (fParam5 * 0,5f)), (Global_23829 + (fVar55 * 0,5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						unk_0xFFA2B456A81EA1EB(&cVar61, &cVar62, (Global_23828 + (fParam5 * 0,5f)), (Global_23829 + (fVar55 * 0,5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_23831.f_9086)
				{
					iVar1 = Global_23831.f_9082;
					iVar2 = Global_23831.f_9083;
					iVar3 = Global_23831.f_9084;
					iVar4 = Global_23831.f_9085;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_147(Global_23828, (Global_23829 + fVar55), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_23829 + fVar55) + 0,034722f) + 0f);
				if (unk_0x70E57E9927B6BA58(&(Global_23831.f_1)) != 0)
				{
					func_146();
					unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23831.f_74)
					{
						if (Global_23831.f_5[iVar14] == 2)
						{
							unk_0x511D14ED2DA887E1(Global_23831.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23831.f_5[iVar14] == 3)
						{
							unk_0x7DCF91CE9137DE0E(Global_23831.f_14[iVar16], Global_23831.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23831.f_5[iVar14] == 1)
						{
							unk_0xACF853FB3F6EA7D4(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 8)
						{
							unk_0xACF853FB3F6EA7D4(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 5)
						{
							unk_0x60D332F23943B34F(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 6)
						{
							unk_0xACF853FB3F6EA7D4(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 7)
						{
							unk_0x60D332F23943B34F(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 9)
						{
							unk_0x60D332F23943B34F(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x25DD447A6EB3A86F((Global_23828 + 0,00390625f), ((Global_23829 + fVar55) + 0,00416664f), 0);
				}
				if (Global_23831.f_6338)
				{
					func_146();
					func_144((((Global_23828 + fParam5) - 0,00390625f) - func_145("CM_ITEM_COUNT", Global_23831.f_6339, Global_23831.f_6340)), ((Global_23829 + fVar55) + 0,00416664f), "CM_ITEM_COUNT", Global_23831.f_6339, Global_23831.f_6340);
				}
				else if (Global_23831.f_6334 > Global_23831.f_5828)
				{
					if (Global_23831.f_6337 != 0)
					{
						func_146();
						func_144((((Global_23828 + fParam5) - 0,00390625f) - func_145("CM_ITEM_COUNT", Global_23831.f_6337, Global_23831.f_6336)), ((Global_23829 + fVar55) + 0,00416664f), "CM_ITEM_COUNT", Global_23831.f_6337, Global_23831.f_6336);
					}
				}
			}
			iVar6 = Global_23831.f_6341;
			iVar9 = 0;
			fVar63 = fVar49;
			if (Global_23831.f_9096)
			{
				iVar1 = Global_23831.f_9092;
				iVar2 = Global_23831.f_9093;
				iVar3 = Global_23831.f_9094;
				iVar4 = Global_23831.f_9095;
			}
			else
			{
				unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23831.f_5828 && iVar6 <= Global_23831.f_5821)
			{
				if (iVar6 >= 0)
				{
					if (Global_23831.f_6088[iVar6])
					{
						if (Global_23831.f_5959[iVar6] && iVar6 != Global_23831.f_6341)
						{
							fVar49 = (fVar49 + 0,00277776f);
						}
						fVar54 = 0,034722f;
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar54 = Global_23831.f_6348[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar63 + ((fVar49 - fVar63) * 0,5f)) - 0,00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_23831.f_6334 > Global_23831.f_5828)
			{
				if (Global_23831.f_9101)
				{
					iVar1 = Global_23831.f_9097;
					iVar2 = Global_23831.f_9098;
					iVar3 = Global_23831.f_9099;
					iVar4 = Global_23831.f_9100;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_147(Global_23828, (fVar49 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x32D86930C15E1159("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0,5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0,5f / fVar60));
				if (Global_23831.f_9114)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "shop_arrows_upANDdown", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + 0f) + (0,034722f * 0,5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar49 = (fVar49 + (0f + 0,034722f));
			}
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_5241)) != 0 && Global_23831.f_5323 != -1)
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_23828 + 0,0046875f);
				if (Global_23831.f_5325 != 0)
				{
					func_65(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23828 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_143(fVar40);
				unk_0x012F78DEB1F1AF9C(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0,00277776f));
				unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_147(Global_23828, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_143(fVar40);
				unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 8)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0,00277776f), 0);
				if (Global_23831.f_5325 != 0)
				{
					func_65(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					func_142(Global_23831.f_5325, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xFFA2B456A81EA1EB(func_72(Global_23831.f_5325), func_69(Global_23831.f_5325, 1), ((Global_23828 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
				}
				fVar49 = (fVar49 + (((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_5247)))
				{
					fVar49 = (fVar49 + (0,00138888f * 6f));
					func_143(fVar40);
					fVar64 = 0,35f;
					if (unk_0x09112CCF7824FE38(unk_0xFACCDE46E24AD056(&(Global_23831.f_5247))) > 600)
					{
						fVar64 = (0,35f * 0,625f);
					}
					unk_0xBFE94E91C83D8794(0f, fVar64);
					unk_0x012F78DEB1F1AF9C(&(Global_23831.f_5247));
					iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0,00277776f));
					unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_147(Global_23828, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23831.f_9106)
					{
						iVar1 = Global_23831.f_9102;
						iVar2 = Global_23831.f_9103;
						iVar3 = Global_23831.f_9104;
						iVar4 = Global_23831.f_9105;
					}
					else
					{
						unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(fVar64, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(fVar64, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, 0, 0);
					func_143(fVar40);
					unk_0xBFE94E91C83D8794(0f, fVar64);
					unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_5247));
					unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0,00277776f), 0);
					fVar49 = (fVar49 + (((unk_0x3D634C7F6A6D4CA4(fVar64, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23831.f_5323 > 0)
				{
					if ((unk_0x1DD05E817C89C737() - Global_23831.f_5324) > Global_23831.f_5323)
					{
						StringCopy(&(Global_23831.f_5241), "", 24);
						Global_23831.f_5323 = -1;
					}
				}
			}
			else if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_5247)))
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_23828 + 0,0046875f);
				fVar65 = 0,35f;
				if (unk_0x09112CCF7824FE38(unk_0xFACCDE46E24AD056(&(Global_23831.f_5247))) > 600)
				{
					fVar65 = (0,35f * 0,625f);
				}
				func_143(fVar40);
				unk_0xBFE94E91C83D8794(0f, fVar65);
				unk_0x012F78DEB1F1AF9C(&(Global_23831.f_5247));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0,00277776f));
				unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_147(Global_23828, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(fVar65, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(fVar65, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, 0, 0);
				func_143(fVar40);
				unk_0xBFE94E91C83D8794(0f, fVar65);
				unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_5247));
				unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0,00277776f), 0);
			}
			if (unk_0x70E57E9927B6BA58(&(Global_4541740.f_21)) != 0 && Global_4541740.f_65 != -1)
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_23828 + 0,0046875f);
				if (Global_4541740.f_67 != 0)
				{
					func_65(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23828 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_143(fVar40);
				unk_0x012F78DEB1F1AF9C(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0,00277776f));
				unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_147(Global_23828, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_143(fVar40);
				unk_0xEAEB6E7D3FAEBD5B(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0,00277776f), 0);
				if (Global_4541740.f_67 != 0)
				{
					func_65(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_142(Global_4541740.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xFFA2B456A81EA1EB(func_72(Global_4541740.f_67), func_69(Global_4541740.f_67, 1), ((Global_23828 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
				}
				fVar49 = (fVar49 + (((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4541740.f_65 > 0)
				{
					if ((unk_0x1DD05E817C89C737() - Global_4541740.f_66) > Global_4541740.f_65)
					{
						StringCopy(&(Global_4541740.f_21), "", 16);
						Global_4541740.f_65 = -1;
					}
				}
			}
			func_138(uVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0x9A122D542F2BB60E(76, 84);
			unk_0x9C066F8D86A1A438(-0,05f, -0,05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23831.f_6331)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_23831.f_5821;
			if (Global_23831.f_6332)
			{
				iVar66 = (Global_23831.f_6335 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0,034722f;
				if (Global_23831.f_6348[iVar6] != 0f)
				{
					fVar54 = Global_23831.f_6348[iVar6];
				}
				if (Global_23831.f_6332)
				{
					iVar6 = Global_23831.f_8737[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23831.f_6341 && iVar9 < Global_23831.f_5828)
				{
					bVar33 = true;
					if (Global_23831.f_6342 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_23831.f_5959[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0,00277776f * IntToFloat(iVar12))) + 0,00277776f);
				}
				Global_23831.f_6482[iVar6] = fVar35;
				fVar34 = (Global_23828 + 0,0046875f);
				bVar39 = false;
				bVar32 = Global_23831.f_6342 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_23831.f_9108)
					{
						unk_0xA306E6FD2A6558E6(Global_23831.f_9107, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xA306E6FD2A6558E6(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Nav", (Global_23828 + (fParam5 * 0,5f)), (((fVar57 + fVar68) + (0,00277776f * IntToFloat(iVar12))) + (fVar54 * 0,5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0, 0);
					Global_23831.f_6480 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23831.f_5829)
				{
					if (BitTest(Global_23831.f_5692[iVar6], iVar8) || Global_23831.f_5659[iVar8] == 5)
					{
						if (Global_23831.f_6332)
						{
							iVar19 = Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar20 = Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar21 = Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar22 = Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar23 = Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)];
						}
						else
						{
							Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar19;
							Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar20;
							Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar21;
							Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar22;
							Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_23831.f_6614[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_23831.f_6614[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_23831.f_5665[iVar8] != -1f)
						{
							fVar34 = ((Global_23828 + 0,0046875f) + Global_23831.f_5665[iVar8]);
						}
						if ((iVar8 < 4 && Global_23831.f_5665[iVar8 + 1] != -1f) && fVar34 < Global_23831.f_5665[iVar8 + 1])
						{
							fVar44 = (Global_23831.f_5665[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_23828 + Global_23830) - 0,0046875f) - fVar34);
						}
						if ((Global_23831.f_5678[iVar8] && Global_23831.f_6477) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_23831.f_5659[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_23831.f_2130[iVar24])
											{
												bVar51 = true;
											}
											func_74(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0x282D5DA1EE14950F(&(Global_23831.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xACF853FB3F6EA7D4(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x511D14ED2DA887E1(Global_23831.f_4469[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x7DCF91CE9137DE0E(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x43026780D77E3DC0(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_65(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0,00078125f * 4f));
													}
													if ((Global_23831.f_4984[(iVar22 + iVar14)] == 2 || Global_23831.f_4984[(iVar22 + iVar14)] == 54) || Global_23831.f_4984[(iVar22 + iVar14)] == 64)
													{
														fVar42 = (fVar42 - (0,00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0,00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - ((fVar41 + fVar42) * 0,5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar40;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar41;
										Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_23831.f_5686[iVar69] == 2)
												{
													Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar69)] = (Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar69)] - Global_23831.f_5671[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar41 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar42 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar52)
									{
										if (func_65(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0,5f);
											if (func_65(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_142(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_72(26), func_69(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
										if (func_65(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0,5f);
											if (func_65(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_142(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_72(27), func_69(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_23831.f_2130[iVar24])
										{
											bVar51 = true;
										}
										func_74(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_137(bVar32);
										}
										unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xACF853FB3F6EA7D4(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x511D14ED2DA887E1(Global_23831.f_4469[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x7DCF91CE9137DE0E(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar28)] == 2 || Global_23831.f_4984[(iVar22 + iVar28)] == 54) || Global_23831.f_4984[(iVar22 + iVar28)] == 64)
											{
												if (func_65(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0,5f));
													if (func_65(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_142(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_23831.f_5686[iVar8] == 2)
															{
																unk_0xFFA2B456A81EA1EB(func_72(Global_23831.f_4984[(iVar22 + iVar28)]), func_69(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
															else
															{
																unk_0xFFA2B456A81EA1EB(func_72(Global_23831.f_4984[(iVar22 + iVar28)]), func_69(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
														}
														fVar40 = (fVar40 + (0,00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23831.f_5686[iVar8] == 2)
										{
											unk_0x25DD447A6EB3A86F(((fVar34 + fVar40) + (0,00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0x25DD447A6EB3A86F((fVar34 + fVar40), fVar35, 0);
											if (func_136() && unk_0x486FF5D06E9659F1(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23831.f_2130[iVar24])
													{
														bVar51 = true;
													}
													func_74(0, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0,0185f;
													fVar79 = 0,004f;
													fVar80 = 0,02f;
													unk_0xBFE94E91C83D8794(0f, (0,35f * 0,7f));
													unk_0x5A18938160AE52D0(255, 255, 255, 150);
													unk_0x81645EE95A114FAE((fVar34 - (fVar80 * 0,6f)), (fVar35 + (fVar78 * 0,75f)), 0,0175f, 0,035f, system::floor(fVar76), system::floor(fVar76), system::floor(fVar76), system::floor(fVar77), 0);
													unk_0xEAEB6E7D3FAEBD5B(&cVar75);
													unk_0x511D14ED2DA887E1((Global_23831.f_6341 + iVar30));
													unk_0x25DD447A6EB3A86F((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0,00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar14)] != 2 && Global_23831.f_4984[(iVar22 + iVar14)] != 54) && Global_23831.f_4984[(iVar22 + iVar14)] != 64)
											{
												if (func_65(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0,5f));
													if (iVar5 == 1)
													{
														if (func_65(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_142(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_23831.f_4984[(iVar22 + iVar14)] == 30)
															{
																unk_0xFFA2B456A81EA1EB(func_72(Global_23831.f_4984[(iVar22 + iVar14)]), func_69(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (Global_23828 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
															else if (Global_23831.f_5686[iVar8] == 2)
															{
																unk_0xFFA2B456A81EA1EB(func_72(Global_23831.f_4984[(iVar22 + iVar14)]), func_69(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
															else
															{
																unk_0xFFA2B456A81EA1EB(func_72(Global_23831.f_4984[(iVar22 + iVar14)]), func_69(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0,00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_74(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_137(bVar32);
										}
										unk_0x282D5DA1EE14950F("NUMBER");
										unk_0x511D14ED2DA887E1(Global_23831.f_4469[iVar20]);
										fVar41 = unk_0x43026780D77E3DC0(1);
										fVar40 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0,00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar41 * 0,5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar40;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar41 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar52)
									{
										if (func_65(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0,5f);
											if (func_65(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_142(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_72(26), func_69(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
										if (func_65(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0,5f);
											if (func_65(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_142(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_72(27), func_69(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_74(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, 0, 0);
										func_135((fVar34 + fVar40), fVar35, "NUMBER", Global_23831.f_4469[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_74(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_137(bVar32);
										}
										unk_0x282D5DA1EE14950F("NUMBER");
										unk_0x7DCF91CE9137DE0E(Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
										fVar41 = unk_0x43026780D77E3DC0(1);
										fVar40 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0,00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar41 * 0,5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar40;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar41 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar52)
									{
										if (func_65(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0,5f);
											if (func_65(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_142(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_72(26), func_69(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
										if (func_65(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0,5f);
											if (func_65(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_142(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_72(27), func_69(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
									}
									func_74(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, 0, 0);
									func_134((fVar34 + fVar40), fVar35, "NUMBER", Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_65(Global_23831.f_4984[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23831.f_6332)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0,00078125f * 1f)));
											}
											else if (Global_23831.f_5686[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar42 * 0,5f)));
											}
											Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar40;
											Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
											fVar42 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
										}
										if (bVar52)
										{
											if (func_65(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23831.f_5686[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_65(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_142(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xFFA2B456A81EA1EB(func_72(26), func_69(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
													}
												}
											}
											if (func_65(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_65(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_142(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xFFA2B456A81EA1EB(func_72(27), func_69(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_65(Global_23831.f_4984[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_142(Global_23831.f_4984[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xFFA2B456A81EA1EB(func_72(Global_23831.f_4984[iVar22]), func_69(Global_23831.f_4984[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), (fVar36 * func_133(Global_23831.f_4984[iVar22])), (fVar37 * func_133(Global_23831.f_4984[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_23831.f_5659[iVar8] == 5)
						{
							if (Global_23831.f_5671[iVar8] > 0,05f)
							{
								fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0,05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							if (Global_23831.f_5678[iVar8])
							{
								if (func_65(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_23831.f_8737[iVar9] = iVar6;
						Global_23831.f_6343 = iVar6;
						iVar9++;
						if (Global_23831.f_5959[iVar6])
						{
							iVar13++;
						}
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_23831.f_6348[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0,034722f);
						}
					}
					if (!Global_23831.f_6331)
					{
						Global_23831.f_6088[iVar6] = 1;
						if (Global_23831.f_5830[iVar6])
						{
							if (bVar32)
							{
								Global_23831.f_6337 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23831.f_6337 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23831.f_6331)
			{
				Global_23831.f_6333 = ((fVar57 + fVar67) + (0,00277776f * IntToFloat(iVar12)));
				Global_23831.f_6336 = iVar11;
				Global_23831.f_6334 = iVar10;
				Global_23831.f_6331 = 1;
			}
		}
		if (!Global_23831.f_6332)
		{
			Global_23831.f_6335 = iVar9;
			Global_23831.f_6332 = 1;
		}
		iVar5++;
	}
	Global_23831.f_6479 = fVar49;
	Global_23831.f_6481 = unk_0x1DD05E817C89C737();
	unk_0x043244A32AD6E17D(Global_23831.f_6479);
	if (!Global_23831.f_9081)
	{
		func_127(0);
	}
	Global_23831.f_9081 = 0;
	if (bParam2)
	{
		unk_0x4EB223432F8FA0A0(10);
	}
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(9);
	unk_0x4EB223432F8FA0A0(8);
	if (bParam0)
	{
		func_1688(1);
	}
	unk_0x90B531766063C5CD();
}

void func_127(int iParam0)
{
	if (func_132())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_131(0))
		{
			func_128(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_128(int iParam0)
{
	if (func_132())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_130())
		{
			func_129(1, 1);
		}
		else
		{
			func_129(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
	}
	if (unk_0xE87F28FD4128D063())
	{
		unk_0x0F15249D24BC5ADA(0);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 30);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 30);
	}
	if (!func_11())
	{
		Global_20930.f_1 = 3;
	}
}

void func_129(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_131(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				unk_0x78C4EBB0251847E2(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			unk_0x6B7EA0158D00C600(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			unk_0x6B7EA0158D00C600(Global_20867);
		}
		else
		{
			unk_0x6B7EA0158D00C600(Global_20858);
		}
	}
}

bool func_130()
{
	return BitTest(Global_1956920, 5);
}

int func_131(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_132()
{
	return BitTest(Global_1956920, 19);
}

float func_133(int iParam0)
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
			return 0,85f;
			break;
	}
	return 1f;
}

void func_134(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x7DCF91CE9137DE0E(uParam3, uParam4);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, 0);
}

void func_135(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, iParam4);
}

bool func_136()
{
	return unk_0x087611B922B50F13(-1762644250);
}

void func_137(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xA306E6FD2A6558E6(Global_23831.f_9109[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA306E6FD2A6558E6(Global_23831.f_9109[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
}

void func_138(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_62(&iVar0, 0, iParam1))
	{
		return;
	}
	uParam0 = uParam0;
	if (iParam3 && !func_148(bParam4, bParam8))
	{
		return;
	}
	if (func_140())
	{
		return;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_117(unk_0x259BE71D8A81D4FA(), 0))
		{
			return;
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x66DA7155B68E7638() == 0 || unk_0xA43CD45F18522E3F())
		{
			return;
		}
	}
	if (Global_23831.f_5326 != 0)
	{
		if (unk_0x7811C74D5B749F76(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (Global_23831.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), unk_0xE934399D6F2C3AC5(2, Global_23831.f_5625[iVar1], 1), 64);
				}
				else if (Global_23831.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), unk_0xF761D79754BC3043(2, Global_23831.f_5640[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23831.f_5327 = 0;
		}
		if (!Global_23831.f_5327)
		{
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4((1f - (Global_23831.f_5684 / 100f)));
			unk_0xE6B753D52F4CA222();
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(1);
				unk_0xE6B753D52F4CA222();
			}
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (unk_0x70E57E9927B6BA58(&(Global_23831.f_5553[iVar1 /*4*/])) != unk_0x70E57E9927B6BA58("PREV"))
				{
					unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x330108B080A2132F(iVar1);
					func_139(&(Global_23831.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && unk_0x70E57E9927B6BA58(&(Global_23831.f_5553[iVar2 /*4*/])) == unk_0x70E57E9927B6BA58("PREV"))
					{
						func_139(&(Global_23831.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23831.f_5610[iVar1] == -1)
					{
						func_41(&(Global_23831.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23831.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x882AEFD55B8D51FB(&(Global_23831.f_5553[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xBD34A69071611974(iVar3, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(iVar3);
						}
						unk_0xCFAD3D478C87321A();
					}
					if (unk_0x761778199FE1211C())
					{
						if (Global_23831.f_5625[iVar1] != 365 && BitTest(Global_23831.f_5655, iVar1))
						{
							unk_0x557F1E2300EF1A3E(1);
							unk_0x330108B080A2132F(Global_23831.f_5625[iVar1]);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(0);
							unk_0x330108B080A2132F(365);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				iVar1++;
			}
			if (unk_0x70E57E9927B6BA58(&(Global_4541740.f_16)) != unk_0x70E57E9927B6BA58(""))
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x330108B080A2132F(Global_23831.f_5326);
				func_139(&Global_4541740);
				if (Global_4541740.f_20 == -1)
				{
					func_41(&(Global_4541740.f_16));
				}
				else
				{
					iVar4 = Global_23831.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x882AEFD55B8D51FB(&(Global_4541740.f_16));
					if (bParam5)
					{
						unk_0xBD34A69071611974(iVar4, 70);
					}
					else
					{
						unk_0x511D14ED2DA887E1(iVar4);
					}
					unk_0xCFAD3D478C87321A();
				}
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(80);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23831.f_5685)
			{
				unk_0x330108B080A2132F(1);
			}
			else
			{
				unk_0x330108B080A2132F(0);
			}
			unk_0xE6B753D52F4CA222();
			Global_23831.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23831.f_5326)
		{
			if (Global_23831.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x330108B080A2132F(iVar1);
					unk_0x882AEFD55B8D51FB(&(Global_23831.f_5553[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xBD34A69071611974(iParam2, 70);
					}
					else
					{
						unk_0x511D14ED2DA887E1(iParam2);
					}
					unk_0xCFAD3D478C87321A();
					unk_0xE6B753D52F4CA222();
				}
			}
			iVar1++;
		}
		if (Global_4541740.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x330108B080A2132F(iVar1);
				unk_0x882AEFD55B8D51FB(&(Global_4541740.f_16));
				if (bParam5)
				{
					unk_0xBD34A69071611974(iParam2, 70);
				}
				else
				{
					unk_0x511D14ED2DA887E1(iParam2);
				}
				unk_0xCFAD3D478C87321A();
				unk_0xE6B753D52F4CA222();
			}
		}
		unk_0x9A122D542F2BB60E(76, 66);
		unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23831.f_9116)
			{
				unk_0x36A472841BBC9D4A(15, 0f, -0,0375f);
				Global_23831.f_9116 = 1;
			}
		}
		else if (Global_23831.f_9116)
		{
			unk_0xDCFF86AAD108A201(15);
			Global_23831.f_9116 = 0;
		}
		unk_0x90B531766063C5CD();
		if (Global_23831.f_5658)
		{
			unk_0x9A122D542F2BB60E(82, 66);
			unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
			unk_0x6D16B99FEB0AFFF1(Global_23831.f_6263[iVar0 /*10*/], Global_23831.f_5656, Global_23831.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x90B531766063C5CD();
		}
		else
		{
			unk_0xA91A4C18A2DB01BD(Global_23831.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_139(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

int func_140()
{
	struct<3> Var0;
	
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	if (func_141())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x78C4EBB0251847E2(&Var0);
		if (Global_20875 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_141()
{
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_142(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA306E6FD2A6558E6(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
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
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 57:
			*iParam5 = 100;
			break;
		
		case 65:
			*iParam5 = 100;
			break;
		
		case 58:
			unk_0xA306E6FD2A6558E6(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_143(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x8413CD3BCEEAD8DC(0);
	unk_0xBFE94E91C83D8794(0f, 0,35f);
	unk_0xFB193A91887FFAB1(2);
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iVar3);
	unk_0xE05EB1EAE7CCDC59(fParam0, ((Global_23828 + Global_23830) - 0,0046875f));
	unk_0xEAF65721ACB2FDFB(0);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(0, 0, 0, 0, 0);
}

void func_144(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(uParam3);
	unk_0x511D14ED2DA887E1(uParam4);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, 0);
}

float func_145(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		if (unk_0x70E57E9927B6BA58(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_146();
	unk_0x282D5DA1EE14950F(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	return unk_0x43026780D77E3DC0(1);
}

void func_146()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23831.f_9091)
	{
		iVar0 = Global_23831.f_9087;
		iVar1 = Global_23831.f_9088;
		iVar2 = Global_23831.f_9089;
		iVar3 = Global_23831.f_9090;
	}
	unk_0x8413CD3BCEEAD8DC(0);
	unk_0xBFE94E91C83D8794(0f, 0,35f);
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iVar3);
	unk_0xE05EB1EAE7CCDC59((Global_23828 + 0,0046875f), ((Global_23828 + Global_23830) - 0,0046875f));
	unk_0xEAF65721ACB2FDFB(0);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(0, 0, 0, 0, 0);
}

void func_147(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x81645EE95A114FAE((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_148(bool bParam0, bool bParam1)
{
	if (Global_2672855.f_1728.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9390801B06EE998F() || (func_22(8, -1) && func_149() != 65)) || (unk_0x05AA183DA1344935() != 0 && !bParam1)) || (unk_0x3555462DB47B7AB1() && !bParam0)) || unk_0x2B8BAF9BA2A3D36B()) || Global_79650) || Global_23831.f_9115) || unk_0xB11671B812399BA2()) || Global_101585.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_149()
{
	return Global_1575011;
}

void func_150()
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<13> Var3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	iVar4 = 0;
	bVar7 = false;
	if (iLocal_151 == 0 && iLocal_152 == 0)
	{
		switch (Local_130.f_178)
		{
			case 0:
				switch (Local_130.f_181.f_70[Local_130.f_181.f_69])
				{
					case 0:
						if (func_363(29, 0, 0))
						{
							if (!func_334(1))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(1))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_DES_BNTY", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_LOCKED", 100, 0);
							func_284(func_285(29));
						}
						if (func_282(1))
						{
							func_281("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 1:
						if (func_363(65, 0, 0))
						{
							if (!func_334(20))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(20))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_LOSE_WANT", 100, 0);
							}
						}
						else
						{
							iVar1 = func_38(unk_0x259BE71D8A81D4FA());
							if (iVar1 < func_285(65))
							{
								func_333("MPCT_LOCKED", 100, 0);
								func_284(func_285(65));
							}
							else
							{
								func_333("MPCT_WLEST", 100, 0);
							}
						}
						if (func_282(20))
						{
							func_281("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 2:
						if (func_363(75, 0, 0))
						{
							if (!func_334(6))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(6))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_OTR", 100, 0);
							}
						}
						else
						{
							iVar1 = func_38(unk_0x259BE71D8A81D4FA());
							if (iVar1 < func_285(75))
							{
								func_333("MPCT_LOCKED", 100, 0);
								func_284(func_285(75));
							}
							else
							{
								func_333("MPCT_WLEST", 100, 0);
							}
						}
						if (func_282(6))
						{
							func_281("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 3:
						if (func_363(95, 0, 0))
						{
							if (!func_334(14))
							{
								func_333("MPCT_RVLPL", 100, 0);
							}
							else if (!func_289(14))
							{
								func_333("MPCT_RVLPL", 100, 0);
							}
							else
							{
								func_333("MPCT_RE", 100, 0);
							}
						}
						else
						{
							iVar1 = func_38(unk_0x259BE71D8A81D4FA());
							if (iVar1 < func_285(95))
							{
								func_333("MPCT_LOCKED", 100, 0);
								func_284(func_285(95));
							}
							else
							{
								func_333("MPCT_WLEST", 100, 0);
							}
						}
						if (func_282(14))
						{
							func_281("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 4:
						if (func_363(88, 0, 0))
						{
							if (!func_334(15))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(15))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_LJOB", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_RQJL", 100, 0);
						}
						break;
					
					case 10:
						if (func_363(121, 0, 0))
						{
							if (!func_334(36))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(36))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else if (func_280())
							{
								func_333("MPCT_RQHU", 100, 0);
							}
							else if (func_279(unk_0x259BE71D8A81D4FA(), 0, 0) && func_264())
							{
								func_333("MPCT_RQAPT", 100, 0);
							}
							else
							{
								func_333("MPCT_HJOB", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_RQHL", 100, 0);
						}
						break;
					
					case 11:
						if (func_363(96, 0, 0))
						{
							if (func_280())
							{
								if (!func_334(37))
								{
									func_333("MPCT_UNAVAIL0", 100, 0);
								}
								else if (!func_289(37))
								{
									func_333("MPCT_UNAVAIL1", 100, 0);
								}
								else
								{
									func_333("MPCT_CNCL", 100, 0);
								}
							}
							else
							{
								func_333("MPCT_CNCLH", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_RQHL", 100, 0);
						}
						break;
					
					case 12:
						if (func_263(unk_0x259BE71D8A81D4FA()))
						{
							if (func_262(unk_0x259BE71D8A81D4FA(), 0) == -1)
							{
								func_333("HPPHONE_REPLAYH", 100, 0);
							}
							else
							{
								func_333("HPPHONE_UNAV2", 100, 0);
							}
						}
						else
						{
							func_333("HPPHONE_UNAV1", 100, 0);
						}
						break;
					
					case 13:
						if (func_263(unk_0x259BE71D8A81D4FA()))
						{
							if (func_262(unk_0x259BE71D8A81D4FA(), 0) != -1)
							{
								func_333("HPPHONE_CANCELH", 100, 0);
							}
							else
							{
								func_333("HPPHONE_UNAV3", 100, 0);
							}
						}
						else
						{
							func_333("HPPHONE_UNAV1", 100, 0);
						}
						break;
					
					case 15:
						if ((func_261(unk_0x259BE71D8A81D4FA(), 1) && func_261(unk_0x259BE71D8A81D4FA(), 2)) && func_261(unk_0x259BE71D8A81D4FA(), 3))
						{
							if (!func_260(unk_0x259BE71D8A81D4FA()))
							{
								func_333("CSH_LPHONE_UNAV2", 100, 0);
							}
							else if (func_258(unk_0x259BE71D8A81D4FA()))
							{
								func_333("CSH_LPHONE_UNAV3", 100, 0);
							}
							else
							{
								func_333("CSH_LPHONE_TIP1", 100, 0);
							}
						}
						else
						{
							func_333("CSH_LPHONE_UNAV1", 100, 0);
						}
						break;
					
					case 5:
						if (func_363(104, 0, 0))
						{
							if (!func_334(23))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(23))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_LCBT", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_LOCKED", 100, 0);
							func_284(func_285(104));
						}
						if (func_282(23))
						{
							func_281("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 6:
						if (func_363(98, 0, 0))
						{
							if (!func_334(24))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(24))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_LCHL", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_LOCKED", 100, 0);
							func_284(func_285(98));
						}
						if (func_282(24))
						{
							func_281("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 7:
						if (func_363(103, 0, 0))
						{
							if (!func_334(25))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(25))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_LCCR", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_LOCKED", 100, 0);
							func_284(func_285(103));
						}
						if (func_282(25))
						{
							func_281("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 8:
						if (func_363(105, 0, 0))
						{
							if (!func_334(26))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(26))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_LCPL", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_LOCKED", 100, 0);
							func_284(func_285(105));
						}
						if (func_282(26))
						{
							func_281("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 14:
						if (func_363(98, 0, 0))
						{
							if (!func_334(57))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(57))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_LCHL", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_LOCKED", 100, 0);
							func_284(func_285(98));
						}
						if (func_282(57))
						{
							func_281("MPCT_LESTDIS", 100, 0);
						}
						break;
					
					case 9:
						if (func_363(119, 0, 0))
						{
							if (!func_334(35))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(35))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else if (func_257())
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (func_254())
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else
							{
								func_333("MPCT_NCPS", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_LOCKED", 100, 0);
							func_284(func_285(119));
						}
						if (func_282(35))
						{
							func_281("MPCT_LESTDIS", 100, 0);
						}
						break;
				}
				break;
			
			case 5:
				if (func_1712() == 1)
				{
					switch (Local_130.f_181.f_70[Local_130.f_181.f_69])
					{
						case 0:
							if (func_363(67, 0, 0))
							{
								if (!func_334(2))
								{
									func_333("MPCT_UNAVAIL0", 100, 0);
								}
								else if (!func_289(2))
								{
									func_333("MPCT_UNAVAIL1", 100, 0);
								}
								else
								{
									func_333("MPCT_THIEF", 100, 0);
								}
							}
							else
							{
								iVar1 = func_38(unk_0x259BE71D8A81D4FA());
								if (iVar1 < func_285(67))
								{
									func_333("MPCT_LOCKED", 100, 0);
									func_284(func_285(67));
								}
								else
								{
									func_333("MPCT_WLAM", 100, 0);
								}
							}
							if (func_282(2))
							{
								func_281("MPCT_LAMADIS", 100, 0);
							}
							break;
						
						case 1:
							if (!func_334(38))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(38))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("FM_LAMC_FRD", 100, 0);
							}
							break;
						
						case 2:
							func_333("MPCT_EXIT", 100, 0);
							break;
						}
				}
				break;
			
			case 4:
				switch (Local_130.f_181.f_70[Local_130.f_181.f_69])
				{
					case 5:
						if (func_363(64, 0, 0))
						{
							if (!func_334(11) || BitTest(Global_45253, 10))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(11))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_AIRSTRIKE", 100, 0);
							}
						}
						else
						{
							iVar1 = func_38(unk_0x259BE71D8A81D4FA());
							if (iVar1 < func_285(64))
							{
								func_333("MPCT_LOCKED", 100, 0);
								func_284(func_285(64));
							}
							else
							{
								func_333("MPCT_WMERRY", 100, 0);
							}
						}
						if (func_282(11))
						{
							func_281("MPCT_MERRYDIS", 100, 0);
						}
						break;
					
					case 0:
						if (func_363(61, 0, 0))
						{
							if (!func_334(8))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(8))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_AMMO", 100, 0);
							}
						}
						else
						{
							iVar1 = func_38(unk_0x259BE71D8A81D4FA());
							if (iVar1 < func_285(61))
							{
								func_333("MPCT_LOCKED", 100, 0);
								func_284(func_285(61));
							}
							else
							{
								func_333("MPCT_WMERRY", 100, 0);
							}
						}
						if (func_282(8))
						{
							func_281("MPCT_MERRYDIS", 100, 0);
						}
						break;
					
					case 1:
						if (func_363(62, 0, 0))
						{
							if (!func_334(10))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(10))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_BACK_HELI", 100, 0);
							}
						}
						else
						{
							iVar1 = func_38(unk_0x259BE71D8A81D4FA());
							if (iVar1 < func_285(62))
							{
								func_333("MPCT_LOCKED", 100, 0);
								func_284(func_285(62));
							}
							else
							{
								func_333("MPCT_WMERRY", 100, 0);
							}
						}
						if (func_282(10))
						{
							func_281("MPCT_MERRYDIS", 100, 0);
						}
						break;
					
					case 2:
						if (func_363(63, 0, 0))
						{
							if (!func_334(9))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(9))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_BOAT", 100, 0);
							}
						}
						else
						{
							iVar1 = func_38(unk_0x259BE71D8A81D4FA());
							if (iVar1 < func_285(63))
							{
								func_333("MPCT_LOCKED", 100, 0);
								func_284(func_285(63));
							}
							else
							{
								func_333("MPCT_WMERRY", 100, 0);
							}
						}
						if (func_282(9))
						{
							func_281("MPCT_MERRYDIS", 100, 0);
						}
						break;
					
					case 4:
						if (func_363(81, 0, 0))
						{
							if (!func_334(12))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(12))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_ARMY", 100, 0);
							}
						}
						else
						{
							iVar1 = func_38(unk_0x259BE71D8A81D4FA());
							if (iVar1 < func_285(81))
							{
								func_333("MPCT_LOCKED", 100, 0);
								func_284(func_285(81));
							}
							else
							{
								func_333("MPCT_WMERRY", 100, 0);
							}
						}
						if (func_282(12))
						{
							func_281("MPCT_MERRYDIS", 100, 0);
						}
						break;
					
					case 3:
						if (func_363(77, 0, 0))
						{
							iVar8 = func_253();
							if (iVar8 != 0)
							{
								if (iVar8 == 2)
								{
									func_333("MPCT_UNAVAIL2", 100, 0);
								}
								else
								{
									func_333("MPCT_UNAVAIL0", 100, 0);
								}
							}
							else if (!func_334(13))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(13))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_HELI", 100, 0);
							}
						}
						else
						{
							iVar1 = func_38(unk_0x259BE71D8A81D4FA());
							if (iVar1 < func_285(77))
							{
								func_333("MPCT_LOCKED", 100, 0);
								func_284(func_285(77));
							}
							else
							{
								func_333("MPCT_WMERRY", 100, 0);
							}
						}
						if (func_282(13))
						{
							func_281("MPCT_MERRYDIS", 100, 0);
						}
						break;
				}
				break;
			
			case 10:
				if (iLocal_170 == -1 && iLocal_171)
				{
				}
				else if (func_282(22) && Local_130.f_181.f_69 <= Local_130.f_181.f_2)
				{
					func_333("MPCT_PEGADIS", 100, 0);
				}
				break;
			
			case 7:
				switch (Local_130.f_181.f_69)
				{
					case 0:
						if (func_363(74, 0, 0))
						{
							if (!func_334(0))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(0))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_BRUC_BOX", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_LOCKED", 100, 0);
							func_284(func_285(74));
						}
						if (func_282(0))
						{
							func_281("MPCT_BRUCEDIS", 100, 0);
						}
						break;
					
					case 1:
						func_333("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 18:
				switch (Local_130.f_181.f_69)
				{
					case 0:
						if (func_363(130, 0, 0))
						{
							if (!func_334(39))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(39))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_GB_LIMO", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_LOCKED", 100, 0);
							func_284(func_285(74));
						}
						break;
					
					case 1:
						func_333("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 19:
				switch (Local_130.f_181.f_69)
				{
					case 0:
						if (func_252(unk_0x259BE71D8A81D4FA()))
						{
							iVar9 = func_251(unk_0x259BE71D8A81D4FA());
							if (!func_289(42) || !func_334(42))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (func_250(0, 1024))
							{
								func_333("MPCT_YC_HNONE", 100, 0);
							}
							else if (func_249(0))
							{
								func_333("MPCT_YC_HSPN", 100, 0);
							}
							else if (func_248(unk_0x259BE71D8A81D4FA(), 0))
							{
								func_333("MPCT_YC_HIN", 100, 0);
							}
							else if (func_241(unk_0x259BE71D8A81D4FA(), iVar9, 100f))
							{
								func_333("MPCT_YC_CLOSE", 100, 0);
							}
							else if (func_240(0))
							{
								func_333("MPCT_YC_HSPWND", 100, 0);
							}
							else
							{
								func_333("MPCT_YC_YAH", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_YC_NOY", 100, 0);
						}
						if (func_282(40))
						{
							func_281("MPCT_YACHTDIS", 100, 0);
						}
						break;
					
					case 1:
						if (func_252(unk_0x259BE71D8A81D4FA()))
						{
							iVar10 = func_251(unk_0x259BE71D8A81D4FA());
							if (!func_289(42) || !func_334(42))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (func_248(unk_0x259BE71D8A81D4FA(), 1))
							{
								func_333("MPCT_YC_BIN", 100, 0);
							}
							else if (func_249(1))
							{
								func_333("MPCT_YC_BSPN", 100, 0);
							}
							else if (func_241(unk_0x259BE71D8A81D4FA(), iVar10, 100f))
							{
								func_333("MPCT_YC_CLOSE", 100, 0);
							}
							else if (func_240(1))
							{
								func_333("MPCT_YC_BSPWND", 100, 0);
							}
							else
							{
								func_333("MPCT_YC_YAB", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_YC_NOY", 100, 0);
						}
						if (func_282(41))
						{
							func_281("MPCT_YACHTDIS", 100, 0);
						}
						break;
					
					case 2:
						if (func_252(unk_0x259BE71D8A81D4FA()))
						{
							iVar13 = func_251(unk_0x259BE71D8A81D4FA());
							func_201(&bVar12, &bVar11, 1);
							if (!func_289(42) || !func_334(42))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (func_200(unk_0x259BE71D8A81D4FA()))
							{
								func_333("MPCT_YC_PIN", 100, 0);
							}
							else if (func_191(1133903872))
							{
								func_333("MPCT_YC_PSPWND", 100, 0);
							}
							else if (!bVar12)
							{
								func_333("MPCT_YC_GAR", 100, 0);
							}
							else if (!bVar11)
							{
								func_333("MPCT_YC_VEH", 100, 0);
							}
							else if (!func_241(unk_0x259BE71D8A81D4FA(), iVar13, 100f))
							{
								func_333("MPCT_YC_FAR", 100, 0);
							}
							else
							{
								func_333("MPCT_YC_YAP", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_YC_NOY", 100, 0);
						}
						if (func_282(42))
						{
							func_281("MPCT_YACHTDIS", 100, 0);
						}
						break;
					
					case 3:
						if (func_252(unk_0x259BE71D8A81D4FA()))
						{
							if ((!func_289(64) || !func_334(64)) || Global_262145.f_28772)
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else
							{
								func_333("YACHT_REQDESC", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_YC_NOY", 100, 0);
						}
						break;
				}
				break;
			
			case 20:
				switch (Local_130.f_181.f_69)
				{
					case 0:
						if (func_190(unk_0x259BE71D8A81D4FA()))
						{
							if (!func_334(43))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(43))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else if (func_185(func_189()))
							{
								if (func_184())
								{
									func_333("MPCT_PA_IMP", 100, 0);
								}
								else
								{
									func_333("MPCT_PA_IMP_F", 100, 0);
								}
							}
							else
							{
								func_333("MPCT_PA_IMPF", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_PA_NOY", 100, 0);
						}
						if (func_282(43))
						{
							func_281("MPCT_YACHTDIS", 100, 0);
						}
						break;
					
					case 1:
						if (func_190(unk_0x259BE71D8A81D4FA()))
						{
							iVar8 = func_182();
							if (iVar8 != 0)
							{
								if (iVar8 == 3)
								{
									func_333("MPCT_PA_YAH0A", 100, 0);
								}
								else if (iVar8 == 2)
								{
									func_333("MPCT_UNAVAIL2", 100, 0);
								}
								else
								{
									func_333("MPCT_UNAVAIL0", 100, 0);
								}
							}
							else if (!func_334(44))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(44))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else if (func_181())
							{
								if (func_184())
								{
									func_333("MPCT_PA_HP", 100, 0);
								}
								else
								{
									func_333("MPCT_PA_HPF", 100, 0);
								}
							}
							else if (!BitTest(Local_130.f_363, 10))
							{
								func_333("MPCT_PA_YAH0U", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_PA_NOY", 100, 0);
						}
						if (func_282(44))
						{
							func_281("MPCT_YACHTDIS", 100, 0);
						}
						break;
				}
				break;
			
			case 21:
				break;
			
			case 12:
				switch (Local_130.f_181.f_69)
				{
					case 0:
						if (func_363(99, 0, 0))
						{
							if (!func_334(18))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(18))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_LJOB", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_RQJS", 100, 0);
						}
						break;
					
					case 1:
						func_333("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 13:
				switch (Local_130.f_181.f_69)
				{
					case 0:
						if (func_363(100, 0, 0))
						{
							if (!func_334(19))
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
							else if (!func_289(19))
							{
								func_333("MPCT_UNAVAIL1", 100, 0);
							}
							else
							{
								func_333("MPCT_LJOB", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_RQJM", 100, 0);
						}
						break;
					
					case 1:
						func_333("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 14:
				switch (Local_130.f_181.f_69)
				{
					case 0:
						if (func_363(97, 0, 0))
						{
							if (func_334(17))
							{
								if (func_289(17))
								{
									func_333("MPCT_LJOB", 100, 0);
								}
								else
								{
									func_333("MPCT_UNAVAIL1", 100, 0);
								}
							}
							else
							{
								func_333("MPCT_UNAVAIL0", 100, 0);
							}
						}
						else
						{
							func_333("MPCT_RQJG", 100, 0);
						}
						break;
					
					case 1:
						func_333("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 2:
				switch (Local_130.f_181.f_69)
				{
					case 0:
						bVar0 = func_180(Local_130.f_362);
						if (bVar0)
						{
							func_333("BB_DES_CUR", 100, 0);
						}
						else if (func_179(&iVar4))
						{
							func_333("BB_DELAY1", 100, 0);
							Local_153 = { func_96(iVar4, 0, 0) };
							func_178(&Local_153);
						}
						else
						{
							Var3 = { func_71(Local_130.f_362) };
							if (func_175(&Var3, &iVar4))
							{
								func_333("BB_DELAY", 100, 0);
								Local_153 = { func_96(iVar4, 0, 0) };
								func_178(&Local_153);
							}
							else if (Global_2738934.f_1908.f_1 != 0 && !BitTest(Local_130.f_363, 8))
							{
								func_333("BB_ABOUNTYSET", 100, 0);
							}
							else
							{
								func_333("BB_DES_SET", 100, 0);
								func_284(Global_262145.f_7179);
							}
						}
						break;
				}
				break;
			
			case 6:
				if (BitTest(bLocal_179, 2) && Local_130.f_181.f_69 == 1)
				{
					func_333("MPCT_EXIT", 100, 0);
				}
				else if (!BitTest(Global_1586521[uLocal_169[Local_130.f_181.f_69] /*142*/].f_103, 1))
				{
					if (unk_0xAD1840C2E6AF7D5E(func_174(uLocal_169[Local_130.f_181.f_69])))
					{
						if (!func_185(uLocal_169[Local_130.f_181.f_69]))
						{
							if (func_189() != -1)
							{
								if (func_174(uLocal_169[Local_130.f_181.f_69]) == joaat("oppressor2") && func_173())
								{
									Var2 = { func_96((Global_262145.f_27968 - func_172(&Global_2710514, 1)), 0, 0) };
									func_333("PI_BIK_TIMER", 0, 0);
									func_178(&Var2);
								}
								else if (!BitTest(Global_1586521[func_189() /*142*/].f_103, 6))
								{
									func_333("MPCT_PERVEHc", 100, 0);
								}
								else
								{
									func_333("MPCT_PERVEHi", 100, 0);
								}
							}
							else
							{
								func_333("MPCT_PERVEHc", 100, 0);
							}
						}
						else
						{
							func_333("BB_PVUNA8", 100, 0);
						}
					}
					else
					{
						func_333("BB_PVUNA1", 100, 0);
					}
				}
				else if (BitTest(Global_1586521[Local_130.f_181.f_69 /*142*/].f_103, 2))
				{
					func_333("BB_PVUNA12", 100, 0);
				}
				else
				{
					func_333("BB_PVUNA13", 100, 0);
				}
				break;
			
			case 11:
				if (!bLocal_144)
				{
					if (!iLocal_143 == Local_130.f_181.f_69)
					{
						if (iLocal_141 > 0)
						{
							if (!unk_0xD6F9DEE4765092A9(&(Global_1586521[iLocal_148[Local_130.f_181.f_69] /*142*/].f_106)))
							{
								if ((iLocal_140 - iLocal_141) > 0)
								{
									func_333("MPCT_INSD3", 100, 0);
								}
								else
								{
									func_333("MPCT_INSD2", 100, 0);
								}
								func_178(&(Global_1586521[iLocal_148[Local_130.f_181.f_69] /*142*/].f_106));
								func_284(iLocal_141);
							}
							else if ((iLocal_140 - iLocal_141) > 0)
							{
								func_333("MPCT_INSD", 100, 0);
							}
						}
						else if (iLocal_140 > 0)
						{
							func_333("MPCT_INSD", 100, 0);
						}
					}
				}
				break;
			
			case 16:
				switch (Local_130.f_181.f_69)
				{
					case 0:
						func_333("MP_STRIP_IN1", 100, 0);
						StringCopy(&Var2, "SCLUB_NM_", 16);
						StringIntConCat(&Var2, iLocal_178, 16);
						func_171(&Var2);
						break;
					
					case 1:
						func_333("MPCT_EXIT", 100, 0);
						break;
				}
				break;
			
			case 17:
				uVar5 = func_166(unk_0x259BE71D8A81D4FA());
				iVar6 = func_164(12, uVar5, &uLocal_195, &iLocal_196);
				bVar7 = false;
				if (BitTest(bLocal_179, 2) && Local_130.f_181.f_69 == 1)
				{
					func_333("MPCT_EXIT", 100, 0);
				}
				else if (iVar6 > 0)
				{
					bVar7 = false;
					while (bVar7 < iVar6)
					{
						if (Local_130.f_181.f_70[Local_130.f_181.f_69] == bVar7)
						{
							if (BitTest(iLocal_196, bVar7))
							{
								func_333("MPCT_RPHS", 100, 0);
							}
							else
							{
								func_333("MPCT_RQRE", 100, 0);
							}
						}
						bVar7++;
					}
				}
				break;
			
			case 22:
				bVar7 = false;
				if (BitTest(bLocal_179, 2) && Local_130.f_181.f_69 == 1)
				{
					func_333("MPCT_EXIT", 100, 0);
				}
				else
				{
					bVar7 = false;
					while (bVar7 < 3)
					{
						if (Local_130.f_181.f_70[Local_130.f_181.f_69] == bVar7)
						{
							func_333("MPCT_RPHS", 100, 0);
						}
						bVar7++;
					}
				}
				break;
			
			case 9:
				if (!unk_0xD6F9DEE4765092A9(&Global_1919005))
				{
					func_163(&Global_1919005);
				}
				break;
			
			case 36:
				if (!unk_0xD6F9DEE4765092A9(&Global_1919005))
				{
					func_163(&Global_1919005);
				}
				break;
			
			case 40:
				iVar14 = Local_130.f_181.f_70[Local_130.f_181.f_69];
				iVar15 = func_156(iVar14, -1);
				if (iVar15 < 0 || iVar15 > 132)
				{
				}
				else if (!unk_0xD6F9DEE4765092A9(&Global_1919005))
				{
					func_163(&Global_1919005);
				}
				break;
		}
	}
	else
	{
		if (BitTest(iLocal_151, 0))
		{
			func_333("BB_NOMONEY", 100, 0);
		}
		if (BitTest(iLocal_151, 1))
		{
			func_333("MPCT_UNAVAIL0", 100, 0);
		}
		if (BitTest(iLocal_151, 2))
		{
			func_333("GC_MENU6", 100, 0);
		}
		if (BitTest(iLocal_151, 3))
		{
			func_333("GC_MENU12", 100, 0);
		}
		if (BitTest(iLocal_151, 4))
		{
			func_333("GC_MENU14", 100, 0);
		}
		if (BitTest(iLocal_151, 6))
		{
			func_333("GC_MENU19", 100, 0);
		}
		if (BitTest(iLocal_151, 5))
		{
			func_333("GC_MENU15", 100, 0);
		}
		if (BitTest(iLocal_151, 7))
		{
			func_333("GC_MENU20", 100, 0);
		}
		if (BitTest(iLocal_151, 8))
		{
			func_333("GC_MENU21", 100, 0);
		}
		if (BitTest(iLocal_151, 9))
		{
			func_333("GC_MENU22", 100, 0);
		}
		if (BitTest(iLocal_151, 10))
		{
			func_333("GC_MENU35", 100, 0);
		}
		if (BitTest(iLocal_151, 11))
		{
			func_333("GC_MENU39", 100, 0);
		}
		if (BitTest(iLocal_151, 12))
		{
			func_333("GC_MENU40", 100, 0);
		}
		if (BitTest(iLocal_151, 31))
		{
			func_333("BB_NOBANK", 100, 0);
		}
		if (Local_130.f_178 == 6)
		{
			if (BitTest(iLocal_151, 14) || !unk_0xAD1840C2E6AF7D5E(func_174(uLocal_169[Local_130.f_181.f_69])))
			{
				func_333("BB_PVUNA1", 100, 0);
			}
			else if (BitTest(iLocal_151, 13))
			{
				func_333("BB_PVUNA2", 100, 0);
			}
			else if (BitTest(iLocal_151, 15))
			{
				func_333("BB_PVUNA3", 100, 0);
			}
			else if (BitTest(iLocal_151, 16))
			{
				func_333("BB_PVUNA4", 100, 0);
			}
			else if (BitTest(iLocal_151, 17))
			{
				func_333("BB_PVUNA5", 100, 0);
			}
			else if (BitTest(iLocal_151, 18))
			{
				func_333("BB_PVUNA6", 100, 0);
			}
			else if (BitTest(iLocal_151, 21))
			{
				func_333("BB_PVUNA7", 100, 0);
			}
			else if (BitTest(iLocal_151, 22))
			{
				func_333("BB_PVUNA8", 100, 0);
			}
			else if (BitTest(iLocal_152, 2))
			{
				func_333("BB_PVUNA9", 100, 0);
			}
			else if (BitTest(iLocal_152, 13))
			{
				func_333("BB_PVUNA11", 100, 0);
			}
			else if (BitTest(iLocal_152, 16))
			{
				func_333("BB_PVUNA12", 100, 0);
			}
			else if (BitTest(iLocal_152, 18))
			{
				func_333("BB_PVUNA13", 100, 0);
			}
			else if (BitTest(iLocal_152, 23))
			{
				func_333("PIM_HRPV14", 100, 0);
			}
			else if (BitTest(iLocal_152, 24))
			{
				func_333("PIM_HRPV98", 100, 0);
			}
			else if (BitTest(iLocal_152, 25))
			{
				func_333("PIM_HRPV99", 100, 0);
			}
			else if (func_174(uLocal_169[Local_130.f_181.f_69]) == joaat("oppressor2") && func_173())
			{
			}
		}
		else if (Local_130.f_178 == 36)
		{
			if (BitTest(iLocal_152, 26))
			{
				func_333("MFP_PV_EMPTY0", 100, 0);
			}
		}
		else if (Local_130.f_178 == 40)
		{
			if (BitTest(iLocal_152, 26))
			{
				func_333("MFP_PV_EMPTY0", 100, 0);
			}
			else if (BitTest(iLocal_152, 27))
			{
				if (unk_0xD6F9DEE4765092A9(&(Global_23831.f_5241)))
				{
					func_333(func_154(func_155(Local_130.f_181.f_70[Local_130.f_181.f_69])), 0, 0);
				}
			}
		}
		else if (Local_130.f_178 == 9)
		{
			if (BitTest(iLocal_152, 17))
			{
				func_333("BB_PVEMPTY", 100, 0);
			}
		}
		if (BitTest(iLocal_151, 19))
		{
			func_333("BB_NONE0", 100, 0);
		}
		if (BitTest(iLocal_151, 20))
		{
			func_333("CONT_REQ_CD", 100, 0);
			func_178(&Local_153);
		}
		if (BitTest(iLocal_151, 20))
		{
			func_333("CONT_REQ_CD", 100, 0);
			func_178(&Local_153);
		}
		if (BitTest(iLocal_151, 23))
		{
			func_333("BB_ADRUNN", 100, 0);
		}
		if (BitTest(iLocal_151, 30))
		{
			func_333("BB_BHRUNN", 100, 0);
		}
		if (BitTest(iLocal_151, 24))
		{
			func_333("BB_HPRUNN", 100, 0);
		}
		if (BitTest(iLocal_151, 25))
		{
			func_333("BB_HPWANT", 100, 0);
		}
		if (BitTest(iLocal_151, 26))
		{
			func_333("BB_HPUNSF", 100, 0);
		}
		if (BitTest(iLocal_151, 28))
		{
			func_333("BB_HPLOCK", 100, 0);
			func_284(func_285(77));
		}
		if (BitTest(iLocal_151, 27))
		{
			func_333("BB_BRURUN", 100, 0);
		}
		if (BitTest(iLocal_152, 1))
		{
			func_333("BB_BHAMMO", 100, 0);
		}
		if (BitTest(iLocal_152, 0))
		{
			func_333("BB_BHTAXI", 100, 0);
		}
		if (BitTest(iLocal_152, 3))
		{
			func_333("BB_BHONBHELI", 100, 0);
		}
		if (BitTest(iLocal_152, 5))
		{
			func_333("BB_BPBUSY", 100, 0);
		}
		if (BitTest(iLocal_152, 6))
		{
			func_333("BB_BPMOVI", 100, 0);
		}
		if (BitTest(iLocal_152, 7))
		{
			func_333("BB_BPWANT", 100, 0);
		}
		if (BitTest(iLocal_152, 8))
		{
			func_333("BB_BPARDR", 100, 0);
		}
		if (BitTest(iLocal_152, 9))
		{
			func_333("BB_BPLAKE", 100, 0);
		}
		if (BitTest(iLocal_152, 10))
		{
			func_333("BB_BPLAND", 100, 0);
		}
		if (BitTest(iLocal_152, 11))
		{
			func_333("BB_DES_PASS", 100, 0);
		}
		if (BitTest(iLocal_152, 12))
		{
			func_333("MPCT_UNVLPASS", 100, 0);
		}
		if (BitTest(iLocal_152, 21))
		{
			func_333("MPCT_PA_YAH0U", 100, 0);
		}
		if (BitTest(iLocal_152, 22))
		{
			func_333("MPCT_PA_IMPF", 100, 0);
		}
		if (Local_130.f_178 == 40 && BitTest(iLocal_152, 27))
		{
			return;
		}
		if (func_120(&uLocal_154, 2000, 0))
		{
			func_33(&uLocal_154);
			if (BitTest(iLocal_152, 19))
			{
				unk_0x88F483FBD433696A(uLocal_194, "SET_TEXT");
				func_41("");
				unk_0xE6B753D52F4CA222();
			}
			iLocal_151 = 0;
			iLocal_152 = 0;
		}
		else if (BitTest(iLocal_152, 19))
		{
			Var16 = { func_96(func_151(2, Local_130.f_362), 0, 0) };
			unk_0x88F483FBD433696A(uLocal_194, "SET_TEXT");
			unk_0x882AEFD55B8D51FB("CONT_REQ_CD2");
			unk_0x60D332F23943B34F(&Var16);
			unk_0xCFAD3D478C87321A();
			unk_0xE6B753D52F4CA222();
		}
	}
}

int func_151(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_122(&(Global_2699357[iParam1 /*245*/][iParam0 /*2*/])))
	{
		if (!func_120(&(Global_2699357[iParam1 /*245*/][iParam0 /*2*/]), func_153(iParam0, iParam1), 0))
		{
			iVar1 = func_152(&(Global_2699357[iParam1 /*245*/][iParam0 /*2*/]), 0, 0);
			iVar1 = (func_153(iParam0, iParam1) - iVar1);
			return iVar1;
		}
	}
	return iVar0;
}

int func_152(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0);
		}
		else
		{
			return unk_0x775142054EC39277(unk_0x0728E77B2BF91D54(), *uParam0);
		}
	}
	return unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0);
}

int func_153(int iParam0, int iParam1)
{
	return Global_2699357[iParam1 /*245*/].f_163[iParam0];
}

char* func_154(int iParam0)
{
	if (Global_1579582)
	{
		return "";
	}
	switch (iParam0)
	{
		case 6000:
			return "FGROUP_ARENA_NO";
			break;
			break;
		
		case 6002:
			return "FGROUP_NCLUB_NO";
			break;
			break;
		
		case 6001:
			return "FGROUP_OFF_NO";
			break;
			break;
	}
	return "";
}

int func_155(int iParam0)
{
	if (Global_1579582)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 18:
		case 19:
		case 20:
			return 6000;
			break;
		
		case 8:
		case 9:
		case 10:
			return 6001;
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			return 6002;
			break;
	}
	return -1;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_57();
	}
	if (iParam0 == 7 && !Global_262145.f_17350)
	{
		return 0;
	}
	if (iParam0 == 30)
	{
		return 0;
	}
	if (func_162(iParam0))
	{
		iVar1 = func_161(iParam0);
		if (iVar1 == 0 && func_90(5396, iParam1) != 0)
		{
			return 1234;
		}
		if (func_160(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_159(unk_0x259BE71D8A81D4FA()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_158(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 29)
	{
		if (func_157((iParam0 - 1), iVar0) > 0)
		{
			return 129;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return func_90(1279, iVar0);
	}
	else if (iParam0 == 99)
	{
		return func_90(12963, iVar0);
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 32)
		{
			return 0;
		}
		return func_157((iParam0 - 1), iVar0);
	}
	return 0;
}

int func_157(int iParam0, int iParam1)
{
	if (iParam0 > 3)
	{
		iParam0++;
	}
	switch (iParam0)
	{
		case 0:
			return func_90(1878, iParam1);
		
		case 1:
			return func_90(2269, iParam1);
		
		case 2:
			return func_90(2932, iParam1);
		
		case 3:
			return func_90(3061, iParam1);
		
		case 5:
			return func_90(3230, iParam1);
		
		case 6:
			return func_90(3233, iParam1);
		
		case 7:
			return func_90(3235, iParam1);
		
		case 8:
			return func_90(4023, iParam1);
		
		case 9:
			return func_90(4026, iParam1);
		
		case 10:
			return func_90(4029, iParam1);
		
		case 11:
			return func_90(4032, iParam1);
		
		case 12:
			return func_90(6113, iParam1);
		
		case 13:
			return func_90(6171, iParam1);
		
		case 14:
			return func_90(6549, iParam1);
		
		case 15:
			return func_90(6562, iParam1);
		
		case 16:
			return func_90(6565, iParam1);
		
		case 17:
			return func_90(6568, iParam1);
		
		case 18:
			return func_90(7286, iParam1);
		
		case 19:
			return func_90(7288, iParam1);
		
		case 20:
			return func_90(7290, iParam1);
		
		case 21:
			return func_90(8013, iParam1);
		
		case 22:
			return func_90(8537, iParam1);
		
		case 23:
			return func_90(8980, iParam1);
		
		case 24:
			return func_90(8983, iParam1);
		
		case 25:
			return func_90(9624, iParam1);
		
		case 26:
			return func_90(9914, iParam1);
		
		case 27:
			return func_90(10442, iParam1);
		
		case 28:
			return func_90(10445, iParam1);
		
		case 29:
			return func_90(10876, iParam1);
		
		case 31:
			return func_90(12300, iParam1);
		
		default:
	}
	return 0;
}

bool func_158(int iParam0)
{
	return func_90(9517, iParam0) != 0;
}

int func_159(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_358 != 0;
	}
	return 0;
}

bool func_160(int iParam0)
{
	if (!Global_262145.f_23777)
	{
		return 0;
	}
	return func_90(7210, iParam0) != 0;
}

int func_161(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_162(int iParam0)
{
	if (iParam0 >= 1000 && iParam0 < 1004)
	{
		return 1;
	}
	return 0;
}

void func_163(char* sParam0)
{
	func_333("STRTNM1", 0, 0);
	func_178(sParam0);
}

bool func_164(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		(*uParam2)[iVar0] = -1;
		iVar0++;
	}
	*iParam3 = 0;
	if (Global_2635125 == 0)
	{
		return 0;
	}
	if (Global_2635126 != 0 && Global_2635126 != 1)
	{
		return 0;
	}
	if (iParam0 != 12)
	{
		return 0;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_2635125)
	{
		if (Global_2634774[iVar0 /*14*/].f_13)
		{
			(*uParam2)[bVar1] = iVar0;
			if (!func_165(iVar0))
			{
				unk_0x0B0C9A0F9AAEB7F0(iParam3, bVar1);
			}
			else
			{
				unk_0x8744D2E3FC95740E(iParam3, bVar1);
			}
			bVar1++;
		}
		iVar0++;
	}
	bVar2 = bVar1;
	if (bVar2 > 1)
	{
		iVar3 = 0;
		iVar4 = 0;
		bVar5 = false;
		iVar6 = 0;
		bVar7 = false;
		bVar1 = false;
		bVar8 = true;
		iVar3 = 0;
		while (iVar3 < 5)
		{
			bVar5 = bVar1;
			iVar4 = -1;
			switch (iVar3)
			{
				case 0:
					iVar4 = Global_262145.f_9101;
					break;
				
				case 1:
					iVar4 = Global_262145.f_9106;
					break;
				
				case 2:
					iVar4 = Global_262145.f_9113;
					break;
				
				case 3:
					iVar4 = Global_262145.f_9119;
					break;
				
				case 4:
					iVar4 = Global_262145.f_9125;
					break;
			}
			bVar8 = true;
			if (bVar5 >= bVar2 || iVar4 == -1)
			{
				bVar8 = false;
			}
			while (bVar8)
			{
				if ((*uParam2)[bVar5] != -1)
				{
					if (iVar4 == Global_2634774[(*uParam2)[bVar5] /*14*/].f_12)
					{
						if (bVar5 != bVar1)
						{
							iVar6 = (*uParam2)[bVar1];
							(*uParam2)[bVar1] = (*uParam2)[bVar5];
							(*uParam2)[bVar5] = iVar6;
							bVar7 = BitTest(*iParam3, bVar1);
							if (BitTest(*iParam3, bVar5))
							{
								unk_0x0B0C9A0F9AAEB7F0(iParam3, bVar1);
							}
							else
							{
								unk_0x8744D2E3FC95740E(iParam3, bVar1);
							}
							if (bVar7)
							{
								unk_0x0B0C9A0F9AAEB7F0(iParam3, bVar5);
							}
							else
							{
								unk_0x8744D2E3FC95740E(iParam3, bVar5);
							}
						}
						bVar1++;
						bVar8 = false;
					}
				}
				if (bVar8)
				{
					bVar5++;
					if (bVar5 >= bVar2)
					{
						bVar8 = false;
					}
				}
			}
			iVar3++;
		}
	}
	return bVar2;
}

int func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2634774[iParam0 /*14*/].f_12;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_2635516[iVar1 /*2*/] == iVar0)
		{
			if (unk_0x1DD05E817C89C737() > Global_2635516[iVar1 /*2*/].f_1)
			{
				Global_2635516[iVar1 /*2*/].f_1 = 0;
				Global_2635516[iVar1 /*2*/] = 0;
			}
			else
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = func_169(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_167(iVar0, 0);
}

int func_167(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_168(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_168(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((system::to_float(iVar1) - system::to_float(iVar2)) / 2f) + system::to_float(iVar2));
		iVar3 = system::round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return joaat("pyro_sub_bass_synth");
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_169(int iParam0)
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x259BE71D8A81D4FA())
			{
				return func_90(640, -1);
			}
			else if (func_170(iParam0))
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_90(640, -1);
	}
	return 0;
}

int func_170(int iParam0)
{
	if (!func_113(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, iParam0);
}

void func_171(char* sParam0)
{
	if (Global_23831.f_5322 >= 3 || Global_23831.f_5319 >= 4)
	{
		return;
	}
	Global_23831.f_5253[Global_23831.f_5319] = 1;
	Global_23831.f_5319++;
	StringCopy(&(Global_23831.f_5270[Global_23831.f_5322 /*16*/]), sParam0, 64);
	Global_23831.f_5322++;
}

int func_172(var uParam0, bool bParam1)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		return unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0));
	}
	return unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0));
}

int func_173()
{
	if (func_122(&Global_2710514) && !func_120(&Global_2710514, Global_262145.f_27968, 1))
	{
		return 1;
	}
	return 0;
}

int func_174(int iParam0)
{
	if (iParam0 > -1)
	{
		return Global_1586521[iParam0 /*142*/].f_66;
	}
	return 0;
}

int func_175(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (func_176(Global_2359296[func_177() /*5570*/].f_5152.f_15[iVar0 /*13*/]))
		{
			if (unk_0xD43ED7463CB7671C(uParam0, &(Global_2359296[func_177() /*5570*/].f_5152.f_15[iVar0 /*13*/])))
			{
				*iParam1 = (unk_0x39D1D336459711BE() - Global_2359296[func_177() /*5570*/].f_5152.f_224[iVar0]);
				*iParam1 *= 1000;
				*iParam1 = (2880000 - *iParam1);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_176(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

int func_177()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_178(char* sParam0)
{
	if (Global_23831.f_5322 >= 3 || Global_23831.f_5319 >= 4)
	{
		return;
	}
	Global_23831.f_5253[Global_23831.f_5319] = 5;
	Global_23831.f_5319++;
	StringCopy(&(Global_23831.f_5270[Global_23831.f_5322 /*16*/]), sParam0, 64);
	Global_23831.f_5322++;
}

int func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	
	*iParam0 = 2880000;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (func_176(Global_2359296[func_177() /*5570*/].f_5152.f_15[iVar0 /*13*/]))
		{
			iVar1 = (unk_0x39D1D336459711BE() - Global_2359296[func_177() /*5570*/].f_5152.f_224[iVar0]);
			iVar1 *= 1000;
			iVar1 = (2880000 - iVar1);
			if (iVar1 < *iParam0)
			{
				*iParam0 = iVar1;
			}
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_180(int iParam0)
{
	if (Global_1835505.f_4[iParam0 /*3*/] == 1)
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	if (Global_1835505.f_179[44] != 0 || Global_1835505.f_179[13] != 0)
	{
		return 0;
	}
	return 1;
}

int func_182()
{
	int iVar0;
	
	if (unk_0x486FF5D06E9659F1(joaat("am_heli_taxi")) > 0)
	{
		return 3;
	}
	if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
	{
		return 2;
	}
	if (func_183() == 144)
	{
		return 1;
	}
	iVar0 = unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2738934.f_6065));
	if (iVar0 < Global_262145.f_16669)
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	return Global_1916617;
}

bool func_184()
{
	return Local_130.f_0 == 75;
}

int func_185(int iParam0)
{
	if (func_186(iParam0))
	{
		return BitTest(Global_1586521[iParam0 /*142*/].f_103, 6);
	}
	return 0;
}

int func_186(int iParam0)
{
	int iVar0;
	
	func_188(iParam0, &iVar0);
	if ((iParam0 >= 0 && iParam0 <= 517) && !func_187(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return 1;
			break;
	}
	return 0;
}

void func_188(int iParam0, int iParam1)
{
	int iVar0;
	
	*iParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 517)
		{
			if (iParam0 == (Global_1937684[iVar0] - 1))
			{
				*iParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

int func_189()
{
	if (Global_2359296[func_177() /*5570*/].f_681.f_2 >= 517)
	{
		Global_2359296[func_177() /*5570*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_177() /*5570*/].f_681.f_2;
}

int func_190(int iParam0)
{
	if (!func_113(iParam0))
	{
		return 0;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 26);
}

int func_191(float fParam0)
{
	if (BitTest(Global_2672855.f_63.f_60, 3))
	{
		return 0;
	}
	if (BitTest(Global_2672855.f_63.f_64, 3))
	{
		return 0;
	}
	if (BitTest(Global_2672855.f_63.f_68, 3))
	{
		return 0;
	}
	if (BitTest(Global_2672855.f_63.f_79, 3))
	{
		return 0;
	}
	if (BitTest(Global_2672855.f_63.f_79, 3))
	{
		return 0;
	}
	if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == func_198())
	{
		if (unk_0x2FC2FDC413532977(func_195(0)))
		{
			if (!unk_0x1C2F771CDC87A3A5(func_193(), 0))
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(func_193(), 1), func_192(unk_0x259BE71D8A81D4FA())) < fParam0)
				{
					return 1;
				}
			}
		}
		return 0;
	}
	return Global_2672855.f_63.f_115;
}

Vector3 func_192(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

var func_193()
{
	if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == func_194())
	{
		if (unk_0x2FC2FDC413532977(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_38) && unk_0x93BF17E19A9F0E9B(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_38))
		{
			return unk_0xE38610F405049F71(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_38);
		}
	}
	return Global_2738934.f_301;
}

int func_194()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_195(int iParam0)
{
	if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) != func_194())
	{
	}
	else if (func_196(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_38) || iParam0 == 0)
	{
		return Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_38;
	}
	return 0;
}

int func_196(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_197(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_197(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_198()
{
	switch (func_199())
	{
		case 0:
			return func_194();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_199()
{
	return Global_32948;
}

int func_200(int iParam0)
{
	int iVar0;
	
	if (func_83(iParam0, 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iParam0), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iParam0), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0x77B62CAA5DF0922A("Player_Vehicle", 3))
				{
					if (unk_0xD130E7CDEE903624(iVar0, "Player_Vehicle"))
					{
						if (unk_0xE2F6FE9B61232165(iVar0, "Player_Vehicle") == unk_0x3351FEF40EC734DB(iParam0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_201(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if ((func_156(iVar1, -1) > 0 && !func_232(iVar1)) && !iVar1 == 12)
		{
			*uParam0 = 1;
			if (iVar1 == 13)
			{
				iVar4 = 11;
			}
			else if (iVar1 == 18)
			{
				iVar4 = 10;
			}
			else
			{
				iVar4 = func_225(iVar1, -1, 1);
			}
			if (!*uParam1)
			{
				iVar0 = 0;
				while (iVar0 < iVar4)
				{
					iVar2 = (func_224(iVar1) + iVar0);
					func_223(iVar2, &iVar3, 0);
					if (iVar3 >= 0)
					{
						if ((func_174(iVar3) != 0 && unk_0xAD1840C2E6AF7D5E(func_174(iVar3))) && func_220(func_174(iVar3)))
						{
							*uParam1 = 1;
							iVar0 = 9999;
							return;
						}
					}
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar5 = iVar1;
			iVar0 = 0;
			while (iVar0 < func_218(iVar5))
			{
				iVar2 = (func_217(iVar5) + iVar0);
				func_223(iVar2, &iVar3, 1);
				if (iVar3 >= 0 && !func_187(iVar2))
				{
					if ((((unk_0xAD1840C2E6AF7D5E(func_174(iVar3)) && !func_214(func_174(iVar3), 1)) && !func_213(func_174(iVar3))) && func_220(func_174(iVar3))) && !func_202(iVar3))
					{
						*uParam1 = 1;
						return;
					}
				}
				iVar0++;
			}
			iVar1++;
		}
	}
}

int func_202(int iParam0)
{
	if (iParam0 > -1)
	{
		if (((func_212(unk_0x259BE71D8A81D4FA()) || func_211(unk_0x259BE71D8A81D4FA())) || (func_208() && unk_0x834C960822A4683F())) || BitTest(Global_4718592.f_34, 21))
		{
			if ((func_207(Global_1586521[iParam0 /*142*/].f_66) || (func_205(Global_1586521[iParam0 /*142*/].f_66) && func_204(Global_1586521[iParam0 /*142*/].f_66))) || func_203(Global_1586521[iParam0 /*142*/].f_66))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_203(int iParam0)
{
	if (unk_0x00C6FDED3EB75117(iParam0) || unk_0xBA16CD57E37AC32A(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("phantom3"):
		case joaat("speedo4"):
		case joaat("speedo5"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("terbyte"):
		case joaat("brickade2"):
		case joaat("manchez3"):
			return 1;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("zr380"):
		case joaat("zr3802"):
		case joaat("zr3803"):
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("minitank"):
			return 1;
			break;
	}
	return 0;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apc"):
			return Global_262145.f_21438;
		
		case joaat("ardent"):
			return Global_262145.f_21439;
		
		case joaat("nightshark"):
			return Global_262145.f_21440;
		
		case joaat("insurgent3"):
			return Global_262145.f_21441;
		
		case joaat("technical3"):
			return Global_262145.f_21442;
		
		case joaat("halftrack"):
			return Global_262145.f_21443;
		
		case joaat("trailersmall2"):
			return Global_262145.f_21444;
		
		case joaat("tampa3"):
			return Global_262145.f_21445;
		
		case joaat("dune3"):
			return Global_262145.f_21446;
		
		case joaat("oppressor"):
			return Global_262145.f_21447;
		
		case joaat("vigilante"):
			return Global_262145.f_22525;
		
		case joaat("thruster"):
			return Global_262145.f_23060;
		
		case joaat("deluxo"):
			return Global_262145.f_23061;
		
		case joaat("stromberg"):
			return Global_262145.f_23062;
		
		case joaat("riot2"):
			return Global_262145.f_23063;
		
		case joaat("chernobog"):
			return Global_262145.f_23064;
		
		case joaat("barrage"):
			return Global_262145.f_23065;
		
		case joaat("khanjali"):
			return Global_262145.f_23066;
		
		case joaat("comet4"):
			return Global_262145.f_23067;
		
		case joaat("savestra"):
			return Global_262145.f_23068;
		
		case joaat("revolter"):
			return Global_262145.f_23070;
		
		case joaat("avenger"):
		case joaat("avenger3"):
			return Global_262145.f_23071;
		
		case joaat("volatol"):
			return Global_262145.f_23072;
		
		case joaat("akula"):
			return Global_262145.f_23073;
		
		case joaat("oppressor2"):
			return Global_262145.f_23074;
		
		case joaat("scramjet"):
			return Global_262145.f_23075;
		
		case joaat("hydra"):
			return Global_262145.f_23076;
		
		case joaat("toreador"):
			return Global_262145.f_25356;
		
		default:
	}
	if (iParam0 == joaat("viseris"))
	{
		return Global_262145.f_23069;
	}
	return 0;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("trailersmall2"):
		case joaat("trailerlarge"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("phantom3"):
		case joaat("ardent"):
		case joaat("nightshark"):
		case joaat("hauler2"):
		case joaat("caddy3"):
		case joaat("vigilante"):
		case joaat("thruster"):
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("barrage"):
		case joaat("khanjali"):
		case joaat("avenger"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("caracara"):
		case joaat("menacer"):
		case joaat("scramjet"):
		case joaat("oppressor2"):
		case joaat("paragon2"):
		case joaat("toreador"):
		case joaat("avenger3"):
			return 1;
		
		default:
	}
	if (func_206(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
		
		default:
	}
	return 0;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("rcbandito"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_208()
{
	if (unk_0x834C960822A4683F())
	{
		return func_210();
	}
	return func_209(Global_4718592.f_127178);
}

int func_209(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4707[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_210()
{
	return Global_2684504.f_19;
}

bool func_211(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 7;
}

bool func_212(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 2;
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("conada"):
		case joaat("conada2"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("streamer216"):
		case joaat("raiju"):
			return 1;
		
		default:
	}
	return 0;
}

int func_214(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("blazer5"):
		case joaat("speedo4"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("trailersmall2"):
			return 1;
		
		case joaat("nightshark"):
			if (func_216(Global_4718592.f_185586) || func_215(Global_4718592.f_185586))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			break;
		
		case joaat("technical3"):
		case joaat("technical"):
			if (func_216(Global_4718592.f_185586))
			{
				return 1;
			}
			break;
		
		case joaat("kosatka"):
			return 1;
	}
	return 0;
}

bool func_215(int iParam0)
{
	return iParam0 == 50;
}

bool func_216(int iParam0)
{
	return iParam0 == 49;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		case 3:
			return 278;
		
		default:
	}
	return -1;
}

int func_218(int iParam0)
{
	return (func_219(iParam0) - func_217(iParam0));
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		case 3:
			return 279;
		
		default:
	}
	return -1;
}

int func_220(int iParam0)
{
	if (func_222() && func_221(iParam0, 0))
	{
		return 0;
	}
	return 1;
}

int func_221(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("vigilante"):
		case joaat("barrage"):
		case joaat("menacer"):
		case joaat("scramjet"):
			return 1;
			break;
		
		case joaat("oppressor2"):
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

var func_222()
{
	return Global_2684504.f_18;
}

void func_223(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10652)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1937684[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x8034325BF6D6E41F() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_224(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
		
		case 25:
			return 307;
			break;
		
		case 26:
			return 317;
			break;
		
		case 27:
			return 337;
			break;
		
		case 28:
			return 350;
			break;
		
		case 29:
			return 363;
			break;
		
		case 31:
			return 515;
			break;
	}
	if (func_162(iParam0))
	{
		iVar0 = func_161(iParam0);
		return func_217(iVar0);
	}
	return (func_225(iParam0, -1, 1) * iParam0);
}

int func_225(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_228(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_227(iParam1))
			{
				return 0;
			}
			else if (func_226(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 == 127)
			{
				return 10;
			}
			else if (iParam1 == 128)
			{
				return 20;
			}
			else if (iParam1 == 129)
			{
				return 50;
			}
			else if (iParam1 == 132)
			{
				return 2;
			}
			else if (iParam1 <= 131 && iParam1 > 0)
			{
				if (Global_1312298[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1312298[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1312298[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
		case 27:
		case 28:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
		
		case 25:
			return 10;
			break;
		
		case 26:
			return 20;
			break;
		
		case 29:
			return 50;
			break;
		
		case 31:
			return 2;
			break;
	}
	return 0;
}

int func_226(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_228(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_229(unk_0x259BE71D8A81D4FA(), 0);
	}
	if (bParam1)
	{
		if (func_229(unk_0x259BE71D8A81D4FA(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

int func_229(int iParam0, bool bParam1)
{
	if (Global_1845110 != func_8())
	{
		if (!func_231(Global_1845110))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x259BE71D8A81D4FA() != Global_1845110)
			{
				if (BitTest(Global_2657971[Global_1845110 /*465*/].f_200, 24) || func_230(Global_1845110))
				{
					return 1;
				}
			}
		}
	}
	return BitTest(Global_2657971[iParam0 /*465*/].f_200, 24);
}

int func_230(int iParam0)
{
	if (iParam0 != func_8())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_200, 9);
	}
	return 0;
}

int func_231(int iParam0)
{
	if (iParam0 != func_8())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_391, 2);
	}
	return 0;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 99:
			return 1;
			break;
		
		case 22:
			if (!func_235())
			{
				return 1;
			}
			break;
		
		case 25:
			if (!func_233(1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_233(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_90(9618, -1), 0);
	}
	return func_234(unk_0x259BE71D8A81D4FA());
}

int func_234(int iParam0)
{
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return BitTest(func_90(9618, -1), 0);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_1, 0);
	}
	return 0;
}

bool func_235()
{
	return (func_238(0) && func_236(0));
}

int func_236(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_90(8726, -1), 4);
	}
	return func_237(unk_0x259BE71D8A81D4FA());
}

int func_237(int iParam0)
{
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return BitTest(func_90(8726, -1), 4);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1969212[iParam0 /*68*/].f_40, 4);
	}
	return 0;
}

int func_238(bool bParam0)
{
	if (bParam0)
	{
		return func_239(27227, -1);
	}
	if (unk_0x259BE71D8A81D4FA() != func_8())
	{
		return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_433.f_1, 2);
	}
	return 0;
}

bool func_239(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_57();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

bool func_240(int iParam0)
{
	return func_250(iParam0, 512);
}

int func_241(int iParam0, int iParam1, float fParam2)
{
	if (func_246())
	{
		return 1;
	}
	if (func_245(iParam1))
	{
		if (unk_0xFC8BFE4B41177C22(func_244()))
		{
			if (func_242(unk_0xD1A6A821F5AC81DB(func_244(), 1), iParam1, fParam2) && Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_100 == 8)
			{
				return 1;
			}
		}
		return func_242(func_192(iParam0), iParam1, fParam2);
	}
	return 0;
}

int func_242(struct<3> Param0, int iParam1, float fParam2)
{
	if (func_245(iParam1))
	{
		if (system::vdist2(Param0, func_243(iParam1)) < (fParam2 * fParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_243(int iParam0)
{
	return Global_4280768[iParam0 /*45*/].f_4;
}

int func_244()
{
	if (unk_0x259BE71D8A81D4FA() != -1)
	{
		return Global_1956920.f_20;
	}
	return -1;
}

int func_245(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 42)
	{
		return 1;
	}
	return 0;
}

int func_246()
{
	if (!unk_0x834C960822A4683F() && !func_247(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_194413[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

bool func_247(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

int func_248(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_83(iParam0, 1, 1))
	{
		iVar0 = unk_0x56E414973C2A8C0E(iParam0);
		if (unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x7F420695E3F776FB(iVar0, 0))
			{
				iVar1 = unk_0xCDA725BC2F170795(iVar0);
				if (unk_0xFC8BFE4B41177C22(iVar1) && !unk_0x1C2F771CDC87A3A5(iVar1, 0))
				{
					if (unk_0xD130E7CDEE903624(iVar1, "PYV_Owner") && unk_0xD130E7CDEE903624(iVar1, "PYV_Vehicle"))
					{
						iVar2 = unk_0xE2F6FE9B61232165(iVar1, "PYV_Owner");
						iVar3 = unk_0xE2F6FE9B61232165(iVar1, "PYV_Vehicle");
						if (iVar2 == unk_0x3351FEF40EC734DB(iParam0) && iParam1 == iVar3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_249(int iParam0)
{
	if (((func_250(iParam0, 256) && !func_250(iParam0, 512)) && !func_250(iParam0, 1024)) && !func_250(iParam0, 2048))
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0, int iParam1)
{
	if ((Global_4282659[iParam0 /*10*/].f_6 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0)
{
	return Global_2652592[iParam0 /*3*/];
}

bool func_252(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_273;
}

int func_253()
{
	if (!func_363(77, 0, 0))
	{
		return 3;
	}
	if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
	{
		return 2;
	}
	return 0;
}

int func_254()
{
	switch (func_255())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_255()
{
	if (func_256(unk_0x259BE71D8A81D4FA()) == 133)
	{
		return Global_2738934.f_5167;
	}
	return -1;
}

int func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/];
	}
	return -1;
}

bool func_257()
{
	return BitTest(Global_1836959.f_1, 8);
}

int func_258(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 17;
			}
		}
	}
	return 0;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			return 1;
			break;
		
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
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
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
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

int func_260(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1969212[iParam0 /*68*/].f_40, 0);
	}
	return 0;
}

int func_261(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return BitTest(Global_1969212[iParam0 /*68*/].f_40, 10);
			
			case 1:
				return BitTest(Global_1969212[iParam0 /*68*/].f_40, 11);
			
			case 2:
				return BitTest(Global_1969212[iParam0 /*68*/].f_40, 12);
			
			case 3:
				return BitTest(Global_1969212[iParam0 /*68*/].f_40, 13);
			}
		
		default:
	}
	return 0;
}

int func_262(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA() && iParam1)
		{
			if (BitTest(func_90(6427, -1), 0))
			{
				return 0;
			}
			if (BitTest(func_90(6427, -1), 1))
			{
				return 1;
			}
			if (BitTest(func_90(6427, -1), 2))
			{
				return 2;
			}
		}
		else
		{
			if (BitTest(Global_1882632[iParam0 /*146*/].f_43.f_26, 0))
			{
				return 0;
			}
			if (BitTest(Global_1882632[iParam0 /*146*/].f_43.f_26, 1))
			{
				return 1;
			}
			if (BitTest(Global_1882632[iParam0 /*146*/].f_43.f_26, 2))
			{
				return 2;
			}
		}
	}
	return -1;
}

int func_263(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (BitTest(Global_1882632[iParam0 /*146*/].f_43.f_26, 13))
		{
			return 1;
		}
	}
	return 0;
}

int func_264()
{
	if (!func_275())
	{
		return 0;
	}
	if (func_280())
	{
		return 0;
	}
	if (!func_265())
	{
		return 0;
	}
	return 1;
}

int func_265()
{
	int iVar0;
	int iVar1;
	
	if (Global_1575036 == 10)
	{
		if (Global_2635552)
		{
			Global_2635552 = 0;
		}
		return 0;
	}
	if (!func_273())
	{
		if (Global_2635552)
		{
			Global_2635552 = 0;
		}
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_267(iVar0);
		if (func_266(iVar1, 1) <= 0)
		{
			if (Global_2635552)
			{
				Global_2635552 = 0;
			}
			return 0;
		}
		iVar0++;
	}
	if (!Global_2635552)
	{
		Global_2635552 = 1;
	}
	return 1;
}

int func_266(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_90(12554, -1) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_90(12555, -1);
		}
		else
		{
			iVar0 = func_90(12556, -1);
		}
	}
	else if (func_90(12557, -1) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_90(12558, -1);
		}
		else
		{
			iVar0 = func_90(12559, -1);
		}
	}
	else if (func_90(12560, -1) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_90(12561, -1);
		}
		else
		{
			iVar0 = func_90(12562, -1);
		}
	}
	else if (func_90(12563, -1) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_90(12564, -1);
		}
		else
		{
			iVar0 = func_90(12565, -1);
		}
	}
	else if (func_90(12566, -1) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_90(12567, -1);
		}
		else
		{
			iVar0 = func_90(12568, -1);
		}
	}
	else if (func_90(12569, -1) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_90(12570, -1);
		}
		else
		{
			iVar0 = func_90(12571, -1);
		}
	}
	else if (func_90(12572, -1) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_90(12573, -1);
		}
		else
		{
			iVar0 = func_90(12574, -1);
		}
	}
	else if (func_90(12575, -1) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_90(12576, -1);
		}
		else
		{
			iVar0 = func_90(12577, -1);
		}
	}
	else if (func_90(12578, -1) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_90(12579, -1);
		}
		else
		{
			iVar0 = func_90(12580, -1);
		}
	}
	else if (func_90(12581, -1) == iParam0)
	{
		if (bParam1)
		{
			iVar0 = func_90(12582, -1);
		}
		else
		{
			iVar0 = func_90(12583, -1);
		}
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_272();
		
		case 1:
			return func_271();
		
		case 2:
			return func_270();
		
		case 3:
			return func_269();
		
		case 4:
			return func_268();
		
		default:
	}
	return 0;
}

var func_268()
{
	return Global_262145.f_9125;
}

var func_269()
{
	return Global_262145.f_9119;
}

var func_270()
{
	return Global_262145.f_9113;
}

var func_271()
{
	return Global_262145.f_9106;
}

var func_272()
{
	return Global_262145.f_9101;
}

int func_273()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_90(1304, -1);
	iVar0 = BitTest(iVar1, 9);
	if (iVar0 != func_274(unk_0x259BE71D8A81D4FA()))
	{
	}
	return iVar0;
}

int func_274(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		return BitTest(Global_1845281[iVar0 /*883*/].f_140, 21);
	}
	return 0;
}

int func_275()
{
	if (!func_279(unk_0x259BE71D8A81D4FA(), 0, 0))
	{
		return 0;
	}
	return func_276(func_278());
}

bool func_276(int iParam0)
{
	return func_277(iParam0) == 6;
}

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 8;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 10;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 7;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
			return 6;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
			break;
		
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
			break;
		
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
			break;
		
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_278()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_35;
}

int func_279(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_280()
{
	switch (Global_2635126)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 11:
		case 12:
			return 0;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

void func_281(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_4541740.f_21), sParam0, 16);
	Global_4541740.f_61 = 0;
	Global_4541740.f_62 = 0;
	Global_4541740.f_63 = 0;
	Global_4541740.f_64 = 0;
	Global_4541740.f_65 = iParam1;
	Global_4541740.f_66 = unk_0x1DD05E817C89C737();
	Global_4541740.f_67 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4541740.f_25[iVar0] = 0;
		iVar0++;
	}
}

int func_282(int iParam0)
{
	if ((func_92(iParam0) >= 0 && func_92(iParam0) < func_88(iParam0)) && !func_283(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_283(int iParam0)
{
	if (Global_262145.f_14672)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14678;
			break;
		
		case 20:
			return Global_262145.f_14679;
			break;
		
		case 6:
			return Global_262145.f_14680;
			break;
		
		case 14:
			return Global_262145.f_14681;
			break;
		
		case 23:
			return Global_262145.f_14682;
			break;
		
		case 24:
			return Global_262145.f_14683;
			break;
		
		case 25:
			return Global_262145.f_14684;
			break;
		
		case 26:
			return Global_262145.f_14685;
			break;
		
		case 8:
			return Global_262145.f_14687;
			break;
		
		case 10:
			return Global_262145.f_14688;
			break;
		
		case 9:
			return Global_262145.f_14689;
			break;
		
		case 13:
			return Global_262145.f_14690;
			break;
		
		case 12:
			return Global_262145.f_14691;
			break;
		
		case 11:
			return Global_262145.f_14692;
			break;
		
		case 22:
			return Global_262145.f_14693;
			break;
		
		case 0:
			return Global_262145.f_14673;
			break;
		
		case 2:
			return Global_262145.f_14677;
			break;
		
		case 35:
			return Global_262145.f_14686;
			break;
		
		case 40:
			return Global_262145.f_14674;
			break;
		
		case 41:
			return Global_262145.f_14675;
			break;
		
		case 42:
			return Global_262145.f_14676;
			break;
		
		case 57:
			return Global_262145.f_14683;
			break;
	}
	return 0;
}

void func_284(int iParam0)
{
	if (Global_23831.f_5320 >= 3 || Global_23831.f_5319 >= 4)
	{
		return;
	}
	Global_23831.f_5253[Global_23831.f_5319] = 2;
	Global_23831.f_5319++;
	Global_23831.f_5258[Global_23831.f_5320] = iParam0;
	Global_23831.f_5320++;
}

int func_285(int iParam0)
{
	if (func_288())
	{
		return 1;
	}
	if (func_287())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
		case 78:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_286(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_286(int iParam0)
{
	return func_58(123, iParam0);
}

bool func_287()
{
	return Global_1575071;
}

bool func_288()
{
	return Global_1575073;
}

int func_289(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 122)
	{
		return 0;
	}
	iVar0 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (iVar0 >= 0 && iVar0 <= 3)
	{
		if (((BitTest(Global_4718592.f_11, 30) && Global_4718592.f_120486[iVar0] != 0) || (BitTest(Global_4718592.f_178847, 10) && Global_1680278 != 0)) && func_332(iVar0))
		{
			return 0;
		}
		if (func_331())
		{
			return 0;
		}
	}
	switch (iParam0)
	{
		case 10:
			if (func_329(16))
			{
				return 0;
			}
			if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_178847, 20))
			{
				return 0;
			}
			if (func_328())
			{
				return 1;
			}
			else if (func_327(unk_0x259BE71D8A81D4FA()) || func_326())
			{
				return 0;
			}
			if (func_325(unk_0x259BE71D8A81D4FA()))
			{
				if (Global_4456449.f_34 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 11:
			if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_178847, 21))
			{
				return 0;
			}
			if (func_328())
			{
				return 1;
			}
			else if (func_327(unk_0x259BE71D8A81D4FA()) || func_326())
			{
				return 0;
			}
			if (func_325(unk_0x259BE71D8A81D4FA()))
			{
				if (Global_4456449.f_34 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				else if (func_320(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 8:
			if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_178847, 16))
			{
				return 0;
			}
			if (func_326())
			{
				return 0;
			}
			if (func_327(unk_0x259BE71D8A81D4FA()) || func_328())
			{
				if (!func_318() && !BitTest(Global_4718592.f_40, 3))
				{
					return 0;
				}
				else if (func_317() || func_316())
				{
					iVar1 = func_310(-1);
					if ((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_grenadelauncher")) || func_309(iVar1, 0)) || func_308(iVar1))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 1;
				}
			}
			if (func_325(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 0:
			if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_178847, 29))
			{
				return 0;
			}
			if ((func_327(unk_0x259BE71D8A81D4FA()) || func_328()) || func_326())
			{
				return 0;
			}
			if (func_325(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (Global_1881953 > 0)
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 9:
			if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_178847, 30))
			{
				return 0;
			}
			if (((((Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3 || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 32) || func_327(unk_0x259BE71D8A81D4FA())) || func_328()) || func_326()) || func_325(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_212(unk_0x259BE71D8A81D4FA()) || func_211(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 13:
			if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_178847, 19))
			{
				return 0;
			}
			if (((((func_327(unk_0x259BE71D8A81D4FA()) || func_328()) || func_326()) || func_325(unk_0x259BE71D8A81D4FA())) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 32)
			{
				return 0;
			}
			if (func_325(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_212(unk_0x259BE71D8A81D4FA()) || func_211(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 7:
			if ((((((func_328() || func_326()) || func_327(unk_0x259BE71D8A81D4FA())) || func_325(unk_0x259BE71D8A81D4FA())) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3) || func_307(Global_4718592.f_185586)) || func_306())
			{
				return 0;
			}
			if (func_305())
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 45:
			if ((((func_328() || func_326()) || func_327(unk_0x259BE71D8A81D4FA())) || func_325(unk_0x259BE71D8A81D4FA())) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3)
			{
				return 0;
			}
			if (func_305())
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 80:
			if (((((((func_328() || func_326()) || func_327(unk_0x259BE71D8A81D4FA())) || func_325(unk_0x259BE71D8A81D4FA())) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3) || func_306()) || func_307(Global_4718592.f_185586)) || func_305())
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 53:
		case 54:
		case 55:
		case 56:
			if ((((func_328() || func_326()) || func_327(unk_0x259BE71D8A81D4FA())) || func_325(unk_0x259BE71D8A81D4FA())) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3)
			{
				return 0;
			}
			if (func_305())
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 46:
			if ((((func_328() || func_326()) || func_327(unk_0x259BE71D8A81D4FA())) || func_325(unk_0x259BE71D8A81D4FA())) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3)
			{
				return 0;
			}
			if (func_305())
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_304(Global_2672855.f_4.f_16, 25))
			{
				return 0;
			}
			if (func_302(Global_2672855.f_4.f_16) == 318)
			{
				return 0;
			}
			break;
		
		case 49:
			if (func_301())
			{
				if (func_300() && !func_296())
				{
					if (unk_0xFC8BFE4B41177C22(Global_2738934.f_313) && !func_294(Global_2738934.f_313, 0, 0, 0, 0, 0, 1, 0, 1))
					{
						return 0;
					}
					return 1;
				}
			}
			else if ((((func_328() || func_326()) || func_327(unk_0x259BE71D8A81D4FA())) || func_325(unk_0x259BE71D8A81D4FA())) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3)
			{
				return 0;
			}
			if (func_305())
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_304(Global_2672855.f_4.f_16, 25))
			{
				return 0;
			}
			if (func_302(Global_2672855.f_4.f_16) == 318)
			{
				return 0;
			}
			break;
		
		case 52:
			if ((((func_328() || func_326()) || func_327(unk_0x259BE71D8A81D4FA())) || func_325(unk_0x259BE71D8A81D4FA())) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3)
			{
				return 0;
			}
			if (func_305())
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_304(Global_2672855.f_4.f_16, 25))
			{
				return 0;
			}
			if (func_302(Global_2672855.f_4.f_16) == 318)
			{
				return 0;
			}
			break;
		
		case 65:
		case 66:
		case 67:
		case 78:
		case 69:
			if ((((func_328() || func_326()) || func_327(unk_0x259BE71D8A81D4FA())) || func_325(unk_0x259BE71D8A81D4FA())) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3)
			{
				return 0;
			}
			if (func_305())
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			break;
		
		case 22:
			if ((((func_325(unk_0x259BE71D8A81D4FA()) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3) || func_327(unk_0x259BE71D8A81D4FA())) || func_328()) || func_326())
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_212(unk_0x259BE71D8A81D4FA()) || func_211(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (BitTest(Global_4718592.f_178847, 31))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 23:
		case 24:
		case 25:
		case 26:
		case 57:
			if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_178847, 18))
			{
				return 0;
			}
			if ((((func_325(unk_0x259BE71D8A81D4FA()) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3) || func_327(unk_0x259BE71D8A81D4FA())) || func_328()) || func_326())
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_212(unk_0x259BE71D8A81D4FA()) || func_211(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 12:
			if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_178847, 15))
			{
				return 0;
			}
			if (func_327(unk_0x259BE71D8A81D4FA()))
			{
				if (((func_328() || func_326()) || func_317()) || (!func_318() && !BitTest(Global_4718592.f_40, 3)))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 0 || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 4)
			{
				return 0;
			}
			if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3)
			{
				return 0;
			}
			if (func_325(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_302(unk_0x259BE71D8A81D4FA()) == 148)
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (((func_325(unk_0x259BE71D8A81D4FA()) || func_327(unk_0x259BE71D8A81D4FA())) || func_328()) || func_326())
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			break;
		
		case 1:
			if ((((((Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 0 || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 4) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3) || func_327(unk_0x259BE71D8A81D4FA())) || func_328()) || func_326()) || func_325(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 14:
			if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_178847, 17))
			{
				return 0;
			}
			if (func_328() || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 32)
			{
				return 0;
			}
			if (func_327(unk_0x259BE71D8A81D4FA()))
			{
				if (!func_318())
				{
					return 0;
				}
				if ((Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 5 && !func_326()) && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 148)
				{
					return 1;
				}
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
			if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 0 && Global_4718592.f_3526 > 1)
			{
				return 1;
			}
			return 0;
			break;
		
		case 6:
			if (func_328())
			{
				return 1;
			}
			if (func_327(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 0)
			{
				if (Global_4718592.f_3526 <= 1)
				{
					return 0;
				}
			}
			if (func_325(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3)
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else
				{
					return 0;
				}
			}
			break;
		
		case 20:
			if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_178847, 27))
			{
				return 0;
			}
			if (func_328())
			{
				return 1;
			}
			if (func_327(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_325(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3)
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 1)
			{
				return 0;
			}
			break;
		
		case 15:
		case 17:
		case 18:
		case 19:
		case 21:
		case 36:
		case 37:
		case 38:
		case 64:
			if (func_291(unk_0x259BE71D8A81D4FA(), 1, 0))
			{
				return 0;
			}
			if (func_290(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			break;
		
		case 35:
			if (func_291(unk_0x259BE71D8A81D4FA(), 1, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_290(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_7(iParam0, 9);
	}
	return 0;
}

int func_291(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_292(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_292(int iParam0)
{
	return func_293(iParam0);
}

var func_293(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

int func_294(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x2EEC0612337D20CE(iParam0) + 1;
	if (iParam4 || !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_295(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xFC8BFE4B41177C22(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x4A8C381C258A124D())
				{
				}
				else if (bParam2)
				{
					if (unk_0x501EBB0523078750(iVar2))
					{
						iVar3 = unk_0x1C1C92A1CBAE364B(iVar2);
						if (((!unk_0x4FAFF4BCB7633475(iVar2) && iVar3 != func_8()) && func_83(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0xE7B45027762DEFE7(unk_0x1C1C92A1CBAE364B(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x4FAFF4BCB7633475(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_295(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0xC39AE5D390581AD5(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			iVar0 = unk_0x6B854773972E76E4(iParam0, iParam1);
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_leave_vehicle")) == 1 || unk_0x9B5C1660CCDF7189(iVar0, joaat("script_task_leave_any_vehicle")) == 1)
				{
					if (system::vdist(unk_0xD1A6A821F5AC81DB(iParam0, 0), unk_0xD1A6A821F5AC81DB(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_296()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_299(&iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return 0;
	}
	if (iVar1 < 0 || iVar1 >= 17)
	{
		return 0;
	}
	if (func_298())
	{
		return BitTest(Global_4718592.f_3592[iVar0 /*25891*/].f_8642[iVar1], 8);
	}
	else if (func_297())
	{
		return BitTest(Global_4718592.f_3592[iVar0 /*25891*/].f_8642[iVar1], 8);
	}
	return 0;
}

bool func_297()
{
	return Global_4718592.f_223512 == 2;
}

bool func_298()
{
	return Global_4718592.f_223512 == 1;
}

var func_299(var uParam0)
{
	*uParam0 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (*uParam0 < 4 && *uParam0 > -1)
	{
	}
	else
	{
		*uParam0 = 0;
	}
	return Global_1058116.f_14[*uParam0];
}

int func_300()
{
	if (func_298())
	{
		return Global_2738934.f_315;
	}
	else if (func_297())
	{
		return Global_2738934.f_352;
	}
	return 0;
}

int func_301()
{
	if (func_298())
	{
		return BitTest(Global_4718592.f_40, 20);
	}
	else if (func_297())
	{
		return BitTest(Global_4718592.f_40, 20);
	}
	return 0;
}

int func_302(int iParam0)
{
	if (func_113(iParam0))
	{
		if (func_303(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_303(int iParam0, int iParam1)
{
	if (func_113(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_304(int iParam0, int iParam1)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

bool func_305()
{
	return BitTest(Global_2738934.f_4712, 0);
}

bool func_306()
{
	return Global_2635563.f_26;
}

bool func_307(int iParam0)
{
	return iParam0 == 54;
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_battleaxe"):
		case joaat("weapon_poolcue"):
		case joaat("weapon_wrench"):
		case joaat("weapon_stone_hatchet"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_candycane"):
		case -624951259:
			return 1;
		
		default:
	}
	return 0;
}

int func_309(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case joaat("weapon_pipebomb"):
			return 1;
			break;
	}
	if (iParam1 && iParam0 == joaat("weapon_snowball"))
	{
		return 1;
	}
	return 0;
}

int func_310(int iParam0)
{
	int iVar0;
	
	if (func_317() || func_316())
	{
		if (iParam0 != -1)
		{
			iVar0 = iParam0;
		}
		else
		{
			iVar0 = func_315(Global_4980736.f_88127);
		}
		func_311(&iVar0);
		return iVar0;
	}
	return Global_1680239;
}

void func_311(int iParam0)
{
	if (func_312(*iParam0))
	{
		return;
	}
	switch (*iParam0)
	{
		case -624951259:
			*iParam0 = joaat("weapon_bat");
			break;
	}
}

int func_312(int iParam0)
{
	if (!unk_0x834C960822A4683F())
	{
		return 1;
	}
	if (func_314())
	{
		return 1;
	}
	if (func_313())
	{
		return 1;
	}
	if (iParam0 == -624951259 && !BitTest(Global_262145.f_25296, 2))
	{
		return 0;
	}
	return 1;
}

int func_313()
{
	return 0;
	return func_136();
}

int func_314()
{
	if (Global_4718592.f_127755 == 1 || Global_4718592.f_127755 == 2)
	{
		return 1;
	}
	return 0;
}

int func_315(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return joaat("weapon_pistol");
}

bool func_316()
{
	return (BitTest(Global_4718592.f_11, 19) && unk_0x834C960822A4683F());
}

bool func_317()
{
	return (BitTest(Global_4718592.f_11, 18) && unk_0x834C960822A4683F());
}

int func_318()
{
	if (func_319(6))
	{
		return 0;
	}
	return 1;
}

bool func_319(int iParam0)
{
	return Global_4718592.f_185587 >= iParam0;
}

bool func_320(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 4;
}

bool func_321(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 6;
}

bool func_322(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 5;
}

int func_323(int iParam0)
{
	switch (func_199())
	{
		case 0:
			if (!func_324(iParam0))
			{
				if (Global_1845281[iParam0 /*883*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_324(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_193 != 0;
}

int func_325(int iParam0)
{
	switch (func_199())
	{
		case 0:
			if (!func_324(iParam0))
			{
				if (Global_1845281[iParam0 /*883*/] == 2 || Global_1845281[iParam0 /*883*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_326()
{
	return Global_1836674;
}

int func_327(int iParam0)
{
	switch (func_199())
	{
		case 0:
			if (Global_1845281[iParam0 /*883*/] == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_328()
{
	return Global_1836675;
}

bool func_329(int iParam0)
{
	return func_330(&(Global_2672855.f_194), iParam0);
}

bool func_330(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

bool func_331()
{
	return BitTest(Global_2738934.f_4712, 7);
}

int func_332(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (BitTest(Global_4718592.f_178847, 2) && iParam0 == 0)
	{
		iVar0 = 1;
	}
	else if (BitTest(Global_4718592.f_178847, 3) && iParam0 == 1)
	{
		iVar0 = 1;
	}
	else if (BitTest(Global_4718592.f_178847, 4) && iParam0 == 2)
	{
		iVar0 = 1;
	}
	else if (BitTest(Global_4718592.f_178847, 5) && iParam0 == 3)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_333(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_5241), sParam0, 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = iParam1;
	Global_23831.f_5324 = unk_0x1DD05E817C89C737();
	Global_23831.f_5325 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
}

int func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	switch (iParam0)
	{
		case 10:
			if (func_362())
			{
				return 0;
			}
			if (func_279(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				return 0;
			}
			if (func_361(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_360(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_359(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			if ((func_304(unk_0x259BE71D8A81D4FA(), 7) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_247 != -1) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_248 != -1)
			{
				return 0;
			}
			if (func_357(unk_0x259BE71D8A81D4FA(), 146))
			{
				return 0;
			}
			if ((func_357(unk_0x259BE71D8A81D4FA(), 136) || func_256(unk_0x259BE71D8A81D4FA()) == 136) || (func_304(unk_0x259BE71D8A81D4FA(), 24) && func_356(unk_0x259BE71D8A81D4FA())))
			{
				return 0;
			}
			if (func_354(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_353(12))
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_279(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				return 0;
			}
			if (func_361(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_360(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_359(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			if ((func_304(unk_0x259BE71D8A81D4FA(), 7) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_247 != -1) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_248 != -1)
			{
				return 0;
			}
			if (Global_33217)
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 24))
			{
				if (func_356(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
			}
			if (func_256(unk_0x259BE71D8A81D4FA()) == 136)
			{
				return 0;
			}
			if (func_352(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_357(unk_0x259BE71D8A81D4FA(), 138))
			{
				if (func_83(unk_0x259BE71D8A81D4FA(), 1, 1))
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						uVar2 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
						iVar3 = unk_0x4B423FAA24E8ABF0(uVar2);
						if ((iVar3 == joaat("tractor") || iVar3 == joaat("tractor2")) || iVar3 == joaat("tractor3"))
						{
							return 0;
						}
					}
				}
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 21))
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 25))
			{
				return 0;
			}
			if (func_351(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_349(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_348(unk_0x259BE71D8A81D4FA()) == 3)
			{
				return 0;
			}
			if (func_354(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_353(16))
			{
				return 0;
			}
			break;
		
		case 8:
			if (func_304(unk_0x259BE71D8A81D4FA(), 21))
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 25))
			{
				return 0;
			}
			if (func_279(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				return 0;
			}
			if (func_361(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_360(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_359(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			if ((func_304(unk_0x259BE71D8A81D4FA(), 7) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_247 != -1) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_248 != -1)
			{
				return 0;
			}
			if (func_353(11))
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_279(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				return 0;
			}
			if (func_361(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_360(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_359(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			if ((func_304(unk_0x259BE71D8A81D4FA(), 7) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_247 != -1) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_248 != -1)
			{
				return 0;
			}
			if (func_357(unk_0x259BE71D8A81D4FA(), 146))
			{
				return 0;
			}
			break;
		
		case 9:
			if (func_279(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				return 0;
			}
			if (func_361(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_360(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_359(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			if ((func_304(unk_0x259BE71D8A81D4FA(), 7) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_247 != -1) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_248 != -1)
			{
				return 0;
			}
			if (func_353(13))
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_279(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				return 0;
			}
			if (func_361(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_360(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_359(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			if ((func_304(unk_0x259BE71D8A81D4FA(), 7) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_247 != -1) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_248 != -1)
			{
				return 0;
			}
			if (func_347(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			if (func_353(14))
			{
				return 0;
			}
			break;
		
		case 80:
			break;
		
		case 7:
			break;
		
		case 22:
			break;
		
		case 46:
		case 49:
		case 52:
		case 65:
		case 66:
		case 67:
		case 78:
		case 69:
			break;
		
		case 23:
		case 24:
		case 25:
		case 26:
		case 57:
			break;
		
		case 12:
			if (func_357(unk_0x259BE71D8A81D4FA(), 136))
			{
				return 0;
			}
			if (func_302(unk_0x259BE71D8A81D4FA()) == 153)
			{
				return 0;
			}
			if (func_354(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_353(15))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_357(unk_0x259BE71D8A81D4FA(), 129))
			{
				return 0;
			}
			break;
		
		case 1:
			break;
		
		case 14:
			if (func_279(unk_0x259BE71D8A81D4FA(), 1, 0))
			{
				return 0;
			}
			if (func_361(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_360(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_359(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_346(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_345(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_344(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_343(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_342(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_341(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			if (func_340(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if ((func_304(unk_0x259BE71D8A81D4FA(), 7) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_247 != -1) || Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_248 != -1)
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (func_83(unk_0xB23E0F9B63D009A8(iVar0), 0, 1))
				{
					if (unk_0xB23E0F9B63D009A8(iVar0) != unk_0x259BE71D8A81D4FA())
					{
						if (!func_117(unk_0xB23E0F9B63D009A8(iVar0), 0))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
			return 0;
			break;
		
		case 6:
			if (func_279(unk_0x259BE71D8A81D4FA(), 1, 0))
			{
				return 0;
			}
			if (func_361(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_360(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_359(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			if (Global_2657971[unk_0x383461852896D73D() /*465*/].f_213 == 1)
			{
				return 0;
			}
			if (func_256(unk_0x259BE71D8A81D4FA()) == 136)
			{
				return 0;
			}
			if (func_256(unk_0x259BE71D8A81D4FA()) == 141)
			{
				return 0;
			}
			if (func_256(unk_0x259BE71D8A81D4FA()) == 139)
			{
				return 0;
			}
			if (func_256(unk_0x259BE71D8A81D4FA()) == 140 && func_357(unk_0x259BE71D8A81D4FA(), 140))
			{
				return 0;
			}
			if (func_256(unk_0x259BE71D8A81D4FA()) == 131 && func_357(unk_0x259BE71D8A81D4FA(), 131))
			{
				return 0;
			}
			if (func_357(unk_0x259BE71D8A81D4FA(), 138))
			{
				return 0;
			}
			if (func_357(unk_0x259BE71D8A81D4FA(), 146))
			{
				return 0;
			}
			if (func_302(unk_0x259BE71D8A81D4FA()) == 148 || func_302(unk_0x259BE71D8A81D4FA()) == 197)
			{
				return 0;
			}
			if (func_302(unk_0x259BE71D8A81D4FA()) == 183)
			{
				if (func_6(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (func_83(unk_0xB23E0F9B63D009A8(iVar0), 0, 1))
				{
					if (unk_0xB23E0F9B63D009A8(iVar0) != unk_0x259BE71D8A81D4FA())
					{
						if (!func_117(unk_0xB23E0F9B63D009A8(iVar0), 0))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
			return 0;
			break;
		
		case 20:
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 1)
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 0) || func_304(unk_0x259BE71D8A81D4FA(), 16))
			{
				return 0;
			}
			if (func_357(unk_0x259BE71D8A81D4FA(), 146))
			{
				return 0;
			}
			if (func_302(unk_0x259BE71D8A81D4FA()) == 192)
			{
				iVar1 = Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_182;
			}
			if (((((((func_302(unk_0x259BE71D8A81D4FA()) == 159 || func_302(unk_0x259BE71D8A81D4FA()) == 157) || func_302(unk_0x259BE71D8A81D4FA()) == 153) || func_302(unk_0x259BE71D8A81D4FA()) == 154) || func_302(unk_0x259BE71D8A81D4FA()) == 155) || func_302(unk_0x259BE71D8A81D4FA()) == 170) || func_302(unk_0x259BE71D8A81D4FA()) == 197) || (func_302(unk_0x259BE71D8A81D4FA()) == 192 && iVar1 == 9))
			{
				return 0;
			}
			if (func_302(unk_0x259BE71D8A81D4FA()) == 225 || func_302(unk_0x259BE71D8A81D4FA()) == 226)
			{
				if (func_339(func_348(unk_0x259BE71D8A81D4FA())))
				{
					return 0;
				}
			}
			if (func_346(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_338(unk_0x259BE71D8A81D4FA()) == 17)
			{
				return 0;
			}
			if (func_337())
			{
				return 0;
			}
			if (func_344(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_341(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			if (func_336(19))
			{
				return 0;
			}
			if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					iVar5 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
					iVar6 = unk_0xDE3B10768F6103AD(iVar5, 0, 1);
					if (!unk_0xC39AE5D390581AD5(iVar5, -1, 0))
					{
						iVar6++;
					}
					if (iVar6 == 1)
					{
						bVar4 = true;
					}
					if (!bVar4)
					{
						iVar7 = -1;
						iVar8 = iVar7;
						iVar9 = unk_0x2EEC0612337D20CE(iVar5) + 1;
						while (iVar6 > 0)
						{
							iVar7 = iVar8;
							if (!unk_0xC39AE5D390581AD5(iVar5, iVar7, 0))
							{
								uVar10 = unk_0xFD5C5BBD1FE92BB7(iVar5, iVar7, 0);
								iVar11 = unk_0x1C1C92A1CBAE364B(uVar10);
								if (iVar11 != func_8() && unk_0x762604C40829DB72(iVar11))
								{
									if (func_302(iVar11) == 157 || func_302(iVar11) == 153)
									{
										return 0;
									}
								}
								iVar6 = (iVar6 - 1);
							}
							iVar8++;
							if (iVar8 >= iVar9 && iVar6 > 0)
							{
								iVar6 = 0;
							}
						}
					}
				}
			}
			break;
		
		case 15:
		case 17:
		case 18:
		case 19:
		case 21:
		case 36:
		case 37:
		case 38:
		case 64:
			break;
		
		case 35:
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			{
				return 0;
			}
			if (func_256(unk_0x259BE71D8A81D4FA()) == 146)
			{
				return 0;
			}
			if ((((func_302(unk_0x259BE71D8A81D4FA()) == 159 || func_302(unk_0x259BE71D8A81D4FA()) == 153) || func_302(unk_0x259BE71D8A81D4FA()) == 157) || func_302(unk_0x259BE71D8A81D4FA()) == 154) || func_302(unk_0x259BE71D8A81D4FA()) == 155)
			{
				return 0;
			}
			if (func_302(unk_0x259BE71D8A81D4FA()) == 183)
			{
				if (func_6(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
			}
			if (func_336(21))
			{
				return 0;
			}
			break;
		
		case 39:
			break;
		
		case 43:
			if ((((func_328() || func_326()) || func_327(unk_0x259BE71D8A81D4FA())) || func_325(unk_0x259BE71D8A81D4FA())) || Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 3)
			{
				return 0;
			}
			if (func_305())
			{
				return 0;
			}
			if (func_335(13))
			{
				return 0;
			}
			if (func_323(unk_0x259BE71D8A81D4FA()))
			{
				if (func_322(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else if (func_321(unk_0x259BE71D8A81D4FA()))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			break;
		
		case 44:
			if (func_279(unk_0x259BE71D8A81D4FA(), 1, 0))
			{
				return 0;
			}
			if (func_361(unk_0x259BE71D8A81D4FA()))
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			if (func_304(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_247 != -1)
			{
				return 0;
			}
			if (Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_248 != -1)
			{
				return 0;
			}
			if (func_347(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_335(int iParam0)
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2672855.f_63.f_1, iParam0);
	}
	return BitTest(Global_2672855.f_63.f_2, (iParam0 - 32));
}

bool func_336(int iParam0)
{
	return BitTest(Global_2738934.f_5249.f_50, iParam0);
}

bool func_337()
{
	return Global_2684504.f_17;
}

int func_338(int iParam0)
{
	if (func_302(iParam0) == 229 || func_302(iParam0) == 230)
	{
		return func_348(iParam0);
	}
	return -1;
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 8:
		case 3:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_340(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 14;
			}
		}
	}
	return 0;
}

int func_341(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0x4B423FAA24E8ABF0(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_8())
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 12;
			}
		}
	}
	return 0;
}

int func_342(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 11;
			}
		}
	}
	return 0;
}

int func_343(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 11;
			}
		}
	}
	return 0;
}

int func_344(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_8())
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 8;
			}
		}
	}
	return 0;
}

int func_345(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 9;
			}
		}
	}
	return 0;
}

int func_346(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_8())
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 5;
			}
		}
	}
	return 0;
}

int func_347(int iParam0, bool bParam1)
{
	if (func_83(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2657971[iParam0 /*465*/].f_273.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2657971[iParam0 /*465*/].f_273.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	if (func_303(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

bool func_349(int iParam0)
{
	return func_350(iParam0) != 0;
}

int func_350(int iParam0)
{
	return Global_1887305[iParam0 /*610*/].f_587;
}

int func_351(int iParam0)
{
	int iVar0;
	
	if (func_83(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!Global_2657971[iParam0 /*465*/].f_273.f_17[iVar0] == 0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_352(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iParam0 /*610*/].f_1, 5);
	}
	return 0;
}

bool func_353(int iParam0)
{
	return BitTest(Global_2738934.f_5249.f_51, iParam0);
}

bool func_354(int iParam0)
{
	return func_355(func_302(iParam0));
}

bool func_355(int iParam0)
{
	return iParam0 == 317;
}

bool func_356(int iParam0)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_1, 4);
}

int func_357(int iParam0, int iParam1)
{
	if (Global_1887305[iParam0 /*610*/] == iParam1)
	{
		return func_358(iParam0);
	}
	return 0;
}

int func_358(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

int func_359(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 4;
			}
		}
	}
	return 0;
}

int func_360(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				iVar0 = func_259(Global_2657971[iParam0 /*465*/].f_322.f_8);
				return (iVar0 == 2 || iVar0 == 25);
			}
		}
	}
	return 0;
}

int func_361(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 0;
			}
		}
	}
	return 0;
}

bool func_362()
{
	return Global_1574582;
}

int func_363(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8337 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_365(unk_0x259BE71D8A81D4FA(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4408 == 1)
		{
			return 1;
		}
	}
	if (func_288() || func_287())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_364())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836944[iVar1], iVar0);
}

int func_364()
{
	int iVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2738934.f_1846, 23))
	{
		return 1;
	}
	if (func_288())
	{
		return 1;
	}
	if (func_287())
	{
		return 1;
	}
	iVar0 = func_90(1304, -1);
	if (BitTest(iVar0, 7))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_1846), 23);
		return 1;
	}
	return 0;
}

int func_365(int iParam0, int iParam1)
{
	if (!func_368())
	{
		return 0;
	}
	if (func_367())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_330(&(Global_1845281[iParam0 /*883*/].f_819), func_366(iParam1));
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		case 182:
			return 40;
		
		case 188:
			return 41;
		
		case 190:
			return 42;
		
		case 197:
			return 43;
		
		case 201:
			return 44;
		
		default:
	}
	return 1;
}

bool func_367()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_144, 3);
}

int func_368()
{
	if (!func_369())
	{
		return 0;
	}
	return 1;
}

int func_369()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_288())
	{
		return 1;
	}
	if (func_287())
	{
		return 1;
	}
	return func_58(120, -1);
}

void func_370()
{
	if (func_378(Local_130.f_181.f_69))
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				if (bLocal_749)
				{
					func_333("JAMAL_OP1_Db", 0, 0);
					func_171(func_375());
				}
				else
				{
					func_333("JAMAL_OP1_D", 0, 0);
					func_171(func_375());
				}
				break;
		}
	}
	else
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				if (!func_371(0, 1))
				{
					func_333("JAMAL_OP1_NA1", 0, 0);
				}
				else
				{
					func_333("JAMAL_OP1_NA2", 0, 0);
				}
				break;
			}
	}
}

int func_371(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_372(iVar0, bParam0, bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_372(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		return BitTest(func_90(12033, -1), func_374(iParam0, bParam2));
	}
	return func_373(unk_0x259BE71D8A81D4FA(), iParam0, bParam2);
}

int func_373(int iParam0, int iParam1, bool bParam2)
{
	if (func_113(iParam0))
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_71, func_374(iParam1, bParam2));
	}
	return 0;
}

int func_374(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 1;
			
			case 1:
				return 2;
			
			case 2:
				return 3;
			
			case 3:
				return 4;
			
			case 4:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 6;
			
			case 1:
				return 7;
			
			case 2:
				return 8;
			
			case 3:
				return 9;
			
			case 4:
				return 10;
			}
		
		default:
	}
	return -1;
}

char* func_375()
{
	switch (func_376(0))
	{
		case 0:
			return "JAMAL_ROB_CAN0";
		
		case 1:
			return "JAMAL_ROB_CAN1";
		
		case 2:
			return "JAMAL_ROB_CAN2";
		
		case 3:
			return "JAMAL_ROB_CAN3";
		
		case 4:
			return "JAMAL_ROB_CAN4";
		
		default:
	}
	return "";
}

int func_376(bool bParam0)
{
	if (bParam0)
	{
		return func_90(12036, -1);
	}
	return func_377(unk_0x259BE71D8A81D4FA());
}

int func_377(int iParam0)
{
	if (func_113(iParam0))
	{
		return Global_1975605[iParam0 /*111*/].f_71.f_13;
	}
	return -1;
}

int func_378(int iParam0)
{
	int iVar0;
	
	iVar0 = system::floor((system::to_float(iParam0) / 32f));
	if ((func_136() && func_379()) && func_199() == 2)
	{
		return 0;
	}
	if (!BitTest(Global_23831.f_6618[iVar0], (iParam0 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

bool func_379()
{
	if (unk_0xAE231F549813BBDF(2))
	{
		return (unk_0x4465D55576678706(2, 253) && unk_0x4465D55576678706(2, 252));
	}
	return (unk_0x4465D55576678706(2, 208) && unk_0x4465D55576678706(2, 207));
}

void func_380()
{
	bool bVar0;
	int iVar1;
	
	func_82(0, 0);
	func_81("JAMAL_TITLE");
	bVar0 = true;
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	if (!func_384() && !bLocal_749)
	{
		bVar0 = false;
	}
	func_63(iVar1, "JAMAL_OP1_T", 0, bVar0, 0, 0, 0);
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	Local_130.f_181.f_2 = iVar1 + 1;
	func_381(Local_130.f_181.f_69, 1, 1);
	unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
}

void func_381(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23831.f_6342 = uParam0;
	Global_23831.f_6477 = iParam2;
	if (Global_23831.f_6342 < Global_23831.f_6341)
	{
		Global_23831.f_6341 = Global_23831.f_6342;
	}
	else if ((Global_23831.f_6332 && Global_23831.f_6342 > Global_23831.f_6343) || (!Global_23831.f_6332 && Global_23831.f_6342 >= (Global_23831.f_6341 + Global_23831.f_5828)))
	{
		iVar0 = Global_23831.f_6341;
		while (iVar0 <= Global_23831.f_6342)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23831.f_5692[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23831.f_5828 && Global_23831.f_6341 < 128)
		{
			Global_23831.f_6341++;
			iVar1 = 0;
			iVar0 = Global_23831.f_6341;
			while (iVar0 <= Global_23831.f_6342)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23831.f_5692[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23831.f_5241), "", 24);
		StringCopy(&(Global_4541740.f_21), "", 16);
	}
}

void func_382(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xE934399D6F2C3AC5(2, iParam0, 1);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	unk_0x8744D2E3FC95740E(&(Global_23831.f_5655), Global_23831.f_5326);
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = iParam0;
	Global_23831.f_5640[Global_23831.f_5326] = 32;
	Global_23831.f_5326++;
}

void func_383(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xE934399D6F2C3AC5(2, iParam0, 1);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_23831.f_5655), Global_23831.f_5326);
	}
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = iParam0;
	Global_23831.f_5640[Global_23831.f_5326] = 32;
	Global_23831.f_5326++;
}

int func_384()
{
	if (!func_371(0, 1))
	{
		return 0;
	}
	if (func_376(0) == -1)
	{
		return 0;
	}
	return 1;
}

void func_385()
{
	func_32(4);
}

void func_386()
{
	if (func_84(0, -1, 1))
	{
		if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
		{
			func_393();
		}
		else
		{
			func_387();
		}
		func_125();
	}
}

void func_387()
{
	if (func_378(Local_130.f_181.f_69))
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				func_333("CHARLIE_OP1_D", 0, 0);
				break;
		}
	}
	else
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				if (!func_239(32401, -1))
				{
					func_333("CHARLIE_OP1_NA3", 0, 0);
				}
				else if (func_390())
				{
					func_333("CHARLIE_OP1_NA2", 0, 0);
				}
				else if (!func_388())
				{
					func_333("CHARLIE_OP1_NA1", 0, 0);
				}
				else
				{
					func_333("CHARLIE_NA", 0, 0);
				}
				break;
			}
	}
}

bool func_388()
{
	return func_389(unk_0x259BE71D8A81D4FA());
}

int func_389(int iParam0)
{
	if (func_113(iParam0))
	{
		if (func_113(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_390()
{
	if ((func_391(0) && func_391(1)) && func_391(2))
	{
		return 1;
	}
	return 0;
}

bool func_391(int iParam0)
{
	return unk_0x39D1D336459711BE() < func_392(iParam0);
}

int func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_90(11951, -1);
		
		case 1:
			return func_90(11953, -1);
		
		case 2:
			return func_90(11955, -1);
		
		default:
	}
	return 0;
}

void func_393()
{
	bool bVar0;
	int iVar1;
	
	func_82(0, 0);
	func_81("CHARLIE_TITLE");
	bVar0 = true;
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	if (!func_394())
	{
		bVar0 = false;
	}
	func_63(iVar1, "CHARLIE_OP1_T", 0, bVar0, 0, 0, 0);
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	Local_130.f_181.f_2 = iVar1 + 1;
	func_381(Local_130.f_181.f_69, 1, 1);
	unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
}

int func_394()
{
	if (((((func_290(unk_0x259BE71D8A81D4FA()) || func_395(unk_0x259BE71D8A81D4FA())) || !func_388()) || func_390()) || !func_239(32401, -1)) || Global_262145.f_34215 == 0)
	{
		return 0;
	}
	return 1;
}

int func_395(int iParam0)
{
	if (func_358(iParam0))
	{
		return 1;
	}
	if (func_290(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_396()
{
	if (func_84(0, -1, 1))
	{
		if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
		{
			func_435();
		}
		else
		{
			func_397();
		}
	}
}

void func_397()
{
	if (func_378(Local_130.f_181.f_69))
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				func_333("COOK_OP1_D", 0, 0);
				func_284(func_433());
				func_284(func_418());
				break;
			
			case 1:
				if (bLocal_748)
				{
					func_333("COOK_MENU_1c", 0, 0);
					func_284(func_415());
				}
				else
				{
					func_333("COOK_OP2_D", 0, 0);
				}
				break;
			
			case 2:
				if (!func_413())
				{
					func_333("COOK_OP3_D1", 0, 0);
				}
				else
				{
					func_333("COOK_OP3_D2", 0, 0);
				}
				break;
		}
	}
	else
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				if (!func_412())
				{
					func_333("COOK_CUTS", 0, 0);
				}
				else if (func_410())
				{
					func_333("COOK_CAP", 0, 0);
				}
				else if (func_413())
				{
					func_333("COOK_PAUSE", 0, 0);
				}
				else if (func_409(unk_0x259BE71D8A81D4FA()))
				{
					func_333("COOK_OP1_NA1", 0, 0);
				}
				else if (!func_388())
				{
					func_333("COOK_OP1_NA2", 0, 0);
				}
				else
				{
					func_333("COOK_NA", 0, 0);
				}
				break;
			
			case 1:
				if (!func_412())
				{
					func_333("COOK_CUTS", 0, 0);
				}
				else if (func_410())
				{
					func_333("COOK_CAP", 0, 0);
				}
				else if (func_413())
				{
					func_333("COOK_PAUSE", 0, 0);
				}
				else if (func_408(6))
				{
					func_333("COOK_TIMER", 0, 0);
				}
				else if (func_398())
				{
					func_333("COOK_RESUP", 0, 0);
				}
				else
				{
					func_333("COOK_NEC", 0, 0);
				}
				break;
			
			case 2:
				if (!func_412())
				{
					func_333("COOK_CUTS", 0, 0);
				}
				else
				{
					func_333("DAX_NA", 0, 0);
				}
				break;
			}
	}
	func_125();
}

bool func_398()
{
	return func_399(unk_0x259BE71D8A81D4FA(), 1);
}

int func_399(int iParam0, int iParam1)
{
	if (((func_407(iParam0) || func_406(iParam0)) || func_404(iParam0)) || func_400(iParam0))
	{
		return 1;
	}
	if (iParam1 && iParam0 == unk_0x259BE71D8A81D4FA())
	{
		if (Global_1979230 == 305 || Global_1979230 == 306)
		{
			return 1;
		}
	}
	return 0;
}

int func_400(int iParam0)
{
	return func_401(func_402(iParam0));
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 306:
			return 1;
		
		default:
	}
	return 0;
}

int func_402(int iParam0)
{
	if (func_403(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_32;
	}
	return -1;
}

int func_403(int iParam0, int iParam1)
{
	if (func_113(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_32 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_404(int iParam0)
{
	return func_405(func_402(iParam0));
}

int func_405(int iParam0)
{
	switch (iParam0)
	{
		case 305:
			return 1;
		
		default:
	}
	return 0;
}

int func_406(int iParam0)
{
	return func_401(func_302(iParam0));
}

int func_407(int iParam0)
{
	return func_405(func_302(iParam0));
}

bool func_408(int iParam0)
{
	return Global_1663174[iParam0] != 0;
}

int func_409(int iParam0)
{
	if (iParam0 != func_8())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_5, 26);
	}
	return 0;
}

bool func_410()
{
	return func_411(6);
}

bool func_411(int iParam0)
{
	return Global_1663201[iParam0] >= Global_262145.f_18233;
}

bool func_412()
{
	return func_239(36658, -1);
}

bool func_413()
{
	return func_414(6);
}

var func_414(int iParam0)
{
	int iVar0;
	
	iVar0 = func_90(3976, -1);
	return BitTest(iVar0, iParam0);
}

int func_415()
{
	return func_416(0, Global_1663201[6], 0, 1);
}

int func_416(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (bParam2)
	{
		if (bParam0)
		{
			iVar0 = Global_262145.f_21273;
		}
		else
		{
			iVar0 = Global_262145.f_21272;
		}
	}
	else if (bParam3)
	{
		if (bParam0)
		{
			iVar0 = Global_262145.f_21577;
		}
		else
		{
			iVar0 = Global_262145.f_21576;
		}
	}
	else if (bParam0)
	{
		iVar0 = Global_262145.f_17947;
	}
	else
	{
		iVar0 = Global_262145.f_18763;
	}
	fVar2 = (system::to_float((100 - iParam1)) / 20f);
	iVar1 = system::ceil(fVar2);
	iVar1 = func_417(iVar1, 0, 5);
	return (iVar1 * iVar0);
}

int func_417(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_418()
{
	return func_419(unk_0x259BE71D8A81D4FA(), 32, func_432(unk_0x259BE71D8A81D4FA(), 32), 1);
}

int func_419(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_431(iParam1);
	if (func_430(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_17323;
				if (func_427(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17329);
				}
				if (func_427(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17335);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_17322;
				if (func_427(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17328);
				}
				if (func_427(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17334);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_17321;
				if (func_427(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17327);
				}
				if (func_427(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17333);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_17319;
				if (func_427(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17325);
				}
				if (func_427(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17331);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 6:
				iVar0 = Global_262145.f_17324;
				if (func_426(iParam0))
				{
					iVar0 = (iVar0 + Global_262145.f_17330);
				}
				if (!unk_0xD6F9DEE4765092A9(func_421(iParam0)))
				{
					iVar0 = system::floor((system::to_float(iVar0) * 1,05f));
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_17320;
				if (func_427(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17326);
				}
				if (func_427(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17332);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21254;
				if (func_427(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21256);
				}
				if (func_427(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21255);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	if (bParam3)
	{
		iVar0 = func_420(iVar1, iVar0);
	}
	return iVar0;
}

int func_420(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (Global_262145.f_32369)
			{
				if (!func_239(32351, -1))
				{
					iParam1 = (iParam1 * Global_262145.f_32378);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_32370)
			{
				if (!func_239(32352, -1))
				{
					iParam1 = (iParam1 * Global_262145.f_32379);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_32371)
			{
				if (!func_239(32353, -1))
				{
					iParam1 = (iParam1 * Global_262145.f_32380);
				}
			}
			break;
		
		case 0:
			if (Global_262145.f_32372)
			{
				if (!func_239(32354, -1))
				{
					iParam1 = (iParam1 * Global_262145.f_32381);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_32373)
			{
				if (!func_239(36667, -1))
				{
					iParam1 = (iParam1 * Global_262145.f_32382);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_32374)
			{
				if (!func_239(32355, -1))
				{
					iParam1 = (iParam1 * Global_262145.f_32383);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_32376)
			{
				if (!func_239(32357, -1))
				{
					iParam1 = (iParam1 * Global_262145.f_32385);
				}
			}
			break;
	}
	return iParam1;
}

char* func_421(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		sVar0 = func_425(&(Global_1906887[iParam0 /*304*/].f_272));
		return sVar0;
	}
	if (Global_1887305[iParam0 /*610*/].f_10.f_121 != Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_121)
	{
		return sVar0;
	}
	if (func_7(iParam0, 28) || (func_7(unk_0x259BE71D8A81D4FA(), 28) && !func_424(iParam0)))
	{
		return "";
	}
	iVar1 = func_423(iParam0);
	if (iVar1 != func_8())
	{
		if (iVar1 != unk_0x259BE71D8A81D4FA())
		{
			if (!func_422() && !unk_0x8FF2665359043205(0, -1, 1))
			{
				return "";
			}
		}
	}
	if (iVar1 != func_8())
	{
		sVar0 = func_425(&(Global_1906887[iVar1 /*304*/].f_272));
		if (unk_0xD6F9DEE4765092A9(sVar0))
		{
			return "";
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_422()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_423(int iParam0)
{
	if (func_113(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_8();
}

int func_424(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_71(iParam0) };
	if (func_422())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
		else if (unk_0x97DD063A9C6137F8(0))
		{
			if (unk_0x8EF8E27D73EB5271(&Var0) && unk_0x9F633448E4C73207(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_425(var uParam0)
{
	return uParam0;
}

int func_426(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_483, 16);
}

int func_427(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_429(iParam0, iParam1))
	{
		iVar0 = func_428(iParam0, iParam1);
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/].f_5, iParam2);
	}
	return 0;
}

int func_428(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_430(iParam1) && iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_429(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_430(iParam1) && iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_430(int iParam0)
{
	if (iParam0 == 33 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_431(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		case 32:
			return 6;
		
		default:
	}
	return -1;
}

int func_432(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_430(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/] == iParam1)
			{
				return Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_433()
{
	return func_434(unk_0x259BE71D8A81D4FA(), 32);
}

int func_434(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_430(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/] == iParam1)
			{
				return Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_435()
{
	bool bVar0;
	int iVar1;
	
	func_82(0, 0);
	func_81("COOK_TITLE");
	bVar0 = true;
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	if (!func_441())
	{
		bVar0 = false;
	}
	func_63(iVar1, "COOK_OP1_T", 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if (!func_440() && !bLocal_748)
	{
		bVar0 = false;
	}
	func_63(iVar1, "COOK_OP2_T", 0, bVar0, 0, 0, 0);
	func_63(iVar1, "MPCT_CASH", 1, bVar0, 0, 0, 0);
	func_437(func_415(), 0);
	bVar0 = true;
	iVar1++;
	if (!func_436())
	{
		bVar0 = false;
	}
	if (!func_413())
	{
		func_63(iVar1, "COOK_OP3_T1", 0, bVar0, 0, 0, 0);
	}
	else
	{
		func_63(iVar1, "COOK_OP3_T2", 0, bVar0, 0, 0, 0);
	}
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	Local_130.f_181.f_2 = iVar1 + 1;
	func_381(Local_130.f_181.f_69, 1, 1);
	unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
	func_125();
}

int func_436()
{
	if ((func_408(6) || func_398()) || !func_412())
	{
		return 0;
	}
	return 1;
}

void func_437(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23831.f_5825 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 >= 4)
	{
		return;
	}
	if (Global_23831.f_6347 != 1)
	{
		return;
	}
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		return;
	}
	Global_23831.f_4469[Global_23831.f_5825] = iParam0;
	Global_23831.f_5825++;
	Global_23831.f_2387[Global_23831.f_6345 /*5*/][Global_23831.f_6346] = 2;
	Global_23831.f_6346++;
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		fVar0 = func_439();
		if (Global_23831.f_5678[Global_23831.f_5822] && Global_23831.f_6346 == Global_23831.f_6344)
		{
			func_65(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23831.f_5671[(Global_23831.f_5822 - 1)])
		{
			Global_23831.f_5671[(Global_23831.f_5822 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23831.f_6346 >= Global_23831.f_6344)
		{
			fVar3 = func_438();
			if (fVar3 > Global_23831.f_6348[Global_23831.f_5821])
			{
				Global_23831.f_6348[Global_23831.f_5821] = fVar3;
			}
		}
	}
}

float func_438()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23831.f_6346)
	{
		if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23831.f_4984[((Global_23831.f_5827 - iVar1) + iVar0)] != 0)
		{
			if (func_65(Global_23831.f_4984[((Global_23831.f_5827 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x3D634C7F6A6D4CA4(0,35f, 0))
	{
		return fVar2;
	}
	return unk_0x3D634C7F6A6D4CA4(0,35f, 0);
}

float func_439()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23831.f_6346)
	{
		if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_74(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
	{
		unk_0x282D5DA1EE14950F(&(Global_23831.f_79[Global_23831.f_6345 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23831.f_6346)
	{
		if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(Global_23831.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(Global_23831.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 2)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				unk_0x511D14ED2DA887E1(Global_23831.f_4469[((Global_23831.f_5825 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 3)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				unk_0x7DCF91CE9137DE0E(Global_23831.f_4726[((Global_23831.f_5826 - iVar4) + iVar10)], Global_23831.f_4855[((Global_23831.f_5826 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 5)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				unk_0x60D332F23943B34F(&(Global_2696723[((Global_23831.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 6)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				unk_0xACF853FB3F6EA7D4(&(Global_2696723[((Global_23831.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 7)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				unk_0x60D332F23943B34F(&(Global_2696723[((Global_23831.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23831.f_2387[Global_23831.f_6345 /*5*/][iVar7] == 9)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
			{
				unk_0x60D332F23943B34F(&(Global_2696723[((Global_23831.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[Global_23831.f_6345 /*6*/])) != 0)
	{
		fVar0 = unk_0x43026780D77E3DC0(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23831.f_4984[((Global_23831.f_5827 - iVar5) + iVar7)] != 0)
		{
			func_65(Global_23831.f_4984[((Global_23831.f_5827 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_440()
{
	if (((((func_410() || func_413()) || func_408(6)) || func_398()) || !unk_0x0AF5E4A6C74DC312(func_415(), 0, 1, 0, -1, 0)) || !func_412())
	{
		return 0;
	}
	return 1;
}

int func_441()
{
	if ((((((((func_290(unk_0x259BE71D8A81D4FA()) || func_395(unk_0x259BE71D8A81D4FA())) || !func_388()) || func_409(unk_0x259BE71D8A81D4FA())) || func_399(unk_0x259BE71D8A81D4FA(), 1)) || func_410()) || !func_412()) || func_413()) || func_408(6))
	{
		return 0;
	}
	return 1;
}

void func_442()
{
	if (func_84(0, -1, 1))
	{
		bLocal_742 = func_452(&iLocal_743);
		bLocal_745 = func_449(&iLocal_746);
		if (((!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2)) || iLocal_744 != iLocal_743) || iLocal_747 != iLocal_746)
		{
			func_447();
		}
		else
		{
			func_443();
		}
		iLocal_744 = iLocal_743;
		iLocal_747 = iLocal_746;
	}
}

void func_443()
{
	if (func_378(Local_130.f_181.f_69))
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				func_333("DAX_OP1_D", 0, 0);
				break;
			
			case 1:
				func_333("DAX_OP2_D", 100, 0);
				break;
		}
	}
	else
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				if (bLocal_742)
				{
					func_333("DAX_OP1_D", 0, 0);
				}
				else
				{
					switch (iLocal_743)
					{
						case 1:
							func_333("DAX_OP1_D1", 100, 0);
							break;
						
						case 2:
							func_333("DAX_OP1_D2", 100, 0);
							break;
						
						case 4:
							Local_153 = { func_96(func_445(), 0, 0) };
							func_333("CONT_REQ_CD", 0, 0);
							func_178(&Local_153);
							break;
						
						case 3:
						case 5:
							func_333("DAX_NA", 100, 0);
							break;
						}
				}
				break;
			
			case 1:
				if (bLocal_745)
				{
					func_333("DAX_OP2_D", 100, 0);
				}
				else
				{
					switch (iLocal_746)
					{
						case 1:
							func_333("DAX_OP2_D1", 100, 0);
							break;
						
						case 2:
							Local_153 = { func_96(func_444(), 0, 0) };
							func_333("CONT_REQ_CD", 0, 0);
							func_178(&Local_153);
							break;
						
						case 3:
						case 4:
							func_333("DAX_NA", 100, 0);
							break;
						}
				}
				break;
			
			default:
				func_333("DAX_NA", 100, 0);
				break;
			}
	}
	func_125();
}

int func_444()
{
	int iVar0;
	
	iVar0 = (Global_262145.f_33142 - func_152(&(Global_1979217.f_7), 0, 0));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_445()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x39D1D336459711BE();
	iVar1 = func_446();
	return (iVar1 - iVar0) * 1000;
}

int func_446()
{
	return func_90(10875, -1);
}

void func_447()
{
	bool bVar0;
	int iVar1;
	
	func_82(0, 0);
	func_81("DAX_TITLE");
	bVar0 = true;
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, Global_1979217.f_2 == 0, 0, 0, 0);
	if (!bLocal_742)
	{
		bVar0 = false;
	}
	func_63(iVar1, "DAX_OP1_T", 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if (!bLocal_745)
	{
		bVar0 = false;
	}
	func_63(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	func_448("DAX_OP2_T", 0);
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	Local_130.f_181.f_2 = iVar1 + 1;
	func_381(Local_130.f_181.f_69, 1, 1);
	unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
	func_125();
}

void func_448(char* sParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23831.f_5823 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 >= 4)
	{
		return;
	}
	if (Global_23831.f_6347 != 1)
	{
		return;
	}
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		return;
	}
	StringCopy(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]), sParam0, 24);
	Global_23831.f_5823++;
	Global_23831.f_2387[Global_23831.f_6345 /*5*/][Global_23831.f_6346] = 1;
	Global_23831.f_6346++;
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		fVar0 = func_439();
		if (Global_23831.f_5678[Global_23831.f_5822] && Global_23831.f_6346 == Global_23831.f_6344)
		{
			func_65(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23831.f_5671[(Global_23831.f_5822 - 1)])
		{
			Global_23831.f_5671[(Global_23831.f_5822 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23831.f_6346 >= Global_23831.f_6344)
		{
			fVar3 = func_438();
			if (fVar3 > Global_23831.f_6348[Global_23831.f_5821])
			{
				Global_23831.f_6348[Global_23831.f_5821] = fVar3;
			}
		}
	}
}

int func_449(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	int iVar3;
	
	if (Global_1979217.f_2 != 0)
	{
		*iParam0 = 1;
		return 0;
	}
	if (func_451())
	{
		*iParam0 = 2;
		return 0;
	}
	iVar0 = unk_0x259BE71D8A81D4FA();
	if (func_279(iVar0, 1, 1))
	{
		*iParam0 = 3;
		return 0;
	}
	Var2 = { func_192(iVar0) };
	iVar3 = 5;
	if (!func_450(Var2))
	{
		iVar3 = 13;
	}
	if (!Global_2738934.f_1003 && !unk_0x3875519517101875(Var2, &uVar1, iVar3, 100f, 2,5f))
	{
		*iParam0 = 4;
		return 0;
	}
	*iParam0 = 0;
	return 1;
}

int func_450(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xDAEDE051F3F4FD45(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0x1B79E937E91F40C3("SanAnd", uVar0) || unk_0x1B79E937E91F40C3("Alamo", sVar0)) || unk_0x1B79E937E91F40C3("ArmyB", sVar0)) || unk_0x1B79E937E91F40C3("BhamCa", sVar0)) || unk_0x1B79E937E91F40C3("Baytre", sVar0)) || unk_0x1B79E937E91F40C3("BradT", sVar0)) || unk_0x1B79E937E91F40C3("BradP", sVar0)) || unk_0x1B79E937E91F40C3("CANNY", sVar0)) || unk_0x1B79E937E91F40C3("CCreak", sVar0)) || unk_0x1B79E937E91F40C3("ChamH", sVar0)) || unk_0x1B79E937E91F40C3("CHU", sVar0)) || unk_0x1B79E937E91F40C3("COSI", sVar0)) || unk_0x1B79E937E91F40C3("CMSW", sVar0)) || unk_0x1B79E937E91F40C3("Cypre", sVar0)) || unk_0x1B79E937E91F40C3("Desrt", sVar0)) || unk_0x1B79E937E91F40C3("ELGorl", sVar0)) || unk_0x1B79E937E91F40C3("Galli", sVar0)) || unk_0x1B79E937E91F40C3("Galfish", sVar0)) || unk_0x1B79E937E91F40C3("Harmo", sVar0)) || unk_0x1B79E937E91F40C3("HumLab", sVar0)) || unk_0x1B79E937E91F40C3("Jail", sVar0)) || unk_0x1B79E937E91F40C3("LAct", sVar0)) || unk_0x1B79E937E91F40C3("LDam", sVar0)) || unk_0x1B79E937E91F40C3("Lago", sVar0)) || unk_0x1B79E937E91F40C3("MTChil", sVar0)) || unk_0x1B79E937E91F40C3("MTJose", sVar0)) || unk_0x1B79E937E91F40C3("MTGordo", sVar0)) || unk_0x1B79E937E91F40C3("NCHU", sVar0)) || unk_0x1B79E937E91F40C3("Oceana", sVar0)) || unk_0x1B79E937E91F40C3("Palmpow", sVar0)) || unk_0x1B79E937E91F40C3("PBluff", sVar0)) || unk_0x1B79E937E91F40C3("Paleto", sVar0)) || unk_0x1B79E937E91F40C3("PalCov", sVar0)) || unk_0x1B79E937E91F40C3("PalFor", sVar0)) || unk_0x1B79E937E91F40C3("PalHigh", sVar0)) || unk_0x1B79E937E91F40C3("RTRAK", sVar0)) || unk_0x1B79E937E91F40C3("Rancho", sVar0)) || unk_0x1B79E937E91F40C3("SANDY", sVar0)) || unk_0x1B79E937E91F40C3("TongvaH", sVar0)) || unk_0x1B79E937E91F40C3("TongvaV", sVar0)) || unk_0x1B79E937E91F40C3("Zenora", sVar0)) || unk_0x1B79E937E91F40C3("Slab", sVar0)) || unk_0x1B79E937E91F40C3("WindF", sVar0)) || unk_0x1B79E937E91F40C3("Zancudo", sVar0)) || unk_0x1B79E937E91F40C3("SanChia", sVar0)) || unk_0x1B79E937E91F40C3("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

int func_451()
{
	if (func_122(&(Global_1979217.f_7)))
	{
		if (!func_120(&(Global_1979217.f_7), Global_262145.f_33142, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_452(int iParam0)
{
	int iVar0;
	
	if (!func_456(0, 0))
	{
		*iParam0 = 1;
		return 0;
	}
	if (func_455())
	{
		*iParam0 = 4;
		return 0;
	}
	iVar0 = unk_0x259BE71D8A81D4FA();
	if (func_454(iVar0))
	{
		*iParam0 = 2;
		return 0;
	}
	if (func_290(iVar0) || func_395(iVar0))
	{
		*iParam0 = 3;
		return 0;
	}
	if (func_453(iVar0, 0))
	{
		*iParam0 = 5;
		return 0;
	}
	*iParam0 = 0;
	return 1;
}

int func_453(int iParam0, bool bParam1)
{
	if (!func_113(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_389(iParam0))
		{
			return 0;
		}
	}
	return func_113(Global_1887305[iParam0 /*610*/].f_10);
}

int func_454(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1887305[iVar0 /*610*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

bool func_455()
{
	return unk_0x39D1D336459711BE() < func_446();
}

bool func_456(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return BitTest(func_90(10873, -1), func_458(iParam0, 1));
	}
	return func_457(unk_0x259BE71D8A81D4FA(), iParam0);
}

int func_457(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_57, func_458(iParam1, 1));
	}
	return 0;
}

int func_458(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			
			case 1:
				return 1;
			
			case 2:
				return 2;
			
			case 3:
				return 3;
			
			case 4:
				return 4;
			
			case 5:
				return 5;
			
			case 6:
				return 6;
			
			case 7:
				return 7;
			
			case 8:
				return 8;
			
			case 9:
				return 9;
			
			case 10:
				return 10;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 11;
			
			case 1:
				return 12;
			
			case 2:
				return 13;
			
			case 3:
				return 14;
			
			case 4:
				return 15;
			
			case 5:
				return 16;
			
			case 6:
				return 17;
			
			case 7:
				return 18;
			
			case 8:
				return 19;
			
			case 9:
				return 20;
			
			case 10:
				return 21;
			}
		
		default:
	}
	return -1;
}

void func_459()
{
	if (func_84(0, -1, 1))
	{
		if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
		{
			func_483();
		}
		else
		{
			func_460();
		}
	}
}

void func_460()
{
	if (func_378(Local_130.f_181.f_69))
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				func_333("YOHN_OP1_D", 0, 0);
				func_284(func_474());
				func_284(func_468(unk_0x259BE71D8A81D4FA()));
				break;
		}
	}
	else
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				if (!func_464())
				{
					func_333("YOHN_OP1_D1", 0, 0);
				}
				else if (func_474() >= 100)
				{
					func_333("YOHN_OP1_D2", 0, 0);
				}
				else if (func_463())
				{
					Local_153 = { func_96(func_461(), 0, 0) };
					func_333("CONT_REQ_CD", 0, 0);
					func_178(&Local_153);
				}
				else
				{
					func_333("YOHN_NA", 100, 0);
				}
				break;
			
			default:
				func_333("YOHN_NA", 100, 0);
				break;
			}
	}
	func_125();
}

int func_461()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x39D1D336459711BE();
	iVar1 = func_462();
	return (iVar1 - iVar0) * 1000;
}

int func_462()
{
	return func_90(10392, -1);
}

bool func_463()
{
	return unk_0x39D1D336459711BE() < func_462();
}

int func_464()
{
	if ((func_467() && func_466()) && func_465())
	{
		return 1;
	}
	return 0;
}

bool func_465()
{
	return func_239(22067, -1);
}

bool func_466()
{
	return func_239(22068, -1);
}

bool func_467()
{
	return func_239(18161, -1);
}

int func_468(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_473(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar2 = iVar0;
		iVar3 = func_471(iParam0, iVar2);
		iVar1 = (iVar1 + func_469(iVar2, iVar3));
		iVar0++;
	}
	return iVar1;
}

int func_469(int iParam0, int iParam1)
{
	return (func_470(iParam0) * iParam1);
}

int func_470(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23956;
		
		case 2:
			return Global_262145.f_23957;
		
		case 3:
			return Global_262145.f_23958;
		
		case 4:
			return Global_262145.f_23959;
		
		case 5:
			return Global_262145.f_23960;
		
		case 6:
			return Global_262145.f_23961;
		
		case 0:
			return Global_262145.f_23962;
		
		default:
	}
	return 0;
}

int func_471(int iParam0, int iParam1)
{
	if (unk_0x834C960822A4683F())
	{
		switch (iParam1)
		{
			case 2:
				return Global_4718592.f_178423.f_13;
				break;
			
			case 4:
				return Global_4718592.f_178423.f_12;
				break;
			
			case 3:
				return Global_4718592.f_178423.f_11;
				break;
			
			case 5:
				return Global_4718592.f_178423.f_10;
				break;
			
			case 6:
				return Global_4718592.f_178423.f_9;
				break;
		}
		return 0;
	}
	if (iParam0 == func_8() || !func_472(iParam1))
	{
		return 0;
	}
	return Global_1845281[iParam0 /*883*/].f_268.f_315.f_8[iParam1];
}

bool func_472(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 8);
}

int func_473(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (Global_1845281[iParam0 /*883*/].f_268.f_315 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_474()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar0 = system::to_float(func_482(unk_0x259BE71D8A81D4FA()));
	fVar1 = system::to_float(func_475());
	fVar2 = (fVar0 / fVar1);
	iVar3 = system::round((fVar2 * 100f));
	if (iVar3 > 100)
	{
		iVar3 = 100;
	}
	return iVar3;
}

int func_475()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_481())
	{
		iVar0 += 72;
	}
	if (func_480())
	{
		iVar0 += 72;
	}
	if (func_479())
	{
		iVar0 += 72;
	}
	if (func_478())
	{
		iVar0 += 72;
	}
	if (func_476())
	{
		iVar0 += 72;
	}
	return iVar0;
}

bool func_476()
{
	return func_90(func_477(1), -1) >= 4;
}

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6541;
			break;
		
		case 1:
			return 6543;
			break;
		
		case 2:
			return 6544;
			break;
		
		case 3:
			return 6545;
			break;
		
		case 4:
			return 6546;
			break;
		
		case 5:
			return 6547;
			break;
	}
	return 14835;
}

bool func_478()
{
	return func_90(func_477(1), -1) >= 3;
}

bool func_479()
{
	return func_90(func_477(1), -1) >= 2;
}

bool func_480()
{
	return func_90(func_477(1), -1) >= 1;
}

bool func_481()
{
	return func_90(func_477(1), -1) >= 0;
}

int func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = (iVar1 + func_471(iParam0, iVar0));
		iVar0++;
	}
	return iVar1;
}

void func_483()
{
	bool bVar0;
	int iVar1;
	
	func_82(0, 0);
	func_81("YOHAN_TITLE");
	bVar0 = true;
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 1, 0, 0, 0);
	if (((((func_484(0) || func_290(unk_0x259BE71D8A81D4FA())) || func_395(unk_0x259BE71D8A81D4FA())) || func_463()) || !func_464()) || func_474() >= 100)
	{
		bVar0 = false;
	}
	func_63(iVar1, "YOHN_OP1_T", 0, bVar0, 0, 0, 0);
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	Local_130.f_181.f_2 = iVar1 + 1;
	func_381(Local_130.f_181.f_69, 1, 1);
	unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
	func_125();
}

bool func_484(bool bParam0)
{
	return func_453(unk_0x259BE71D8A81D4FA(), bParam0);
}

void func_485()
{
	if (func_84(0, -1, 1))
	{
		if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
		{
			func_498();
		}
		else
		{
			func_486();
		}
	}
}

void func_486()
{
	if (func_378(Local_130.f_181.f_69))
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				func_333("AG14_OP1_D", 0, 0);
				func_284(func_493(unk_0x259BE71D8A81D4FA(), func_497(unk_0x259BE71D8A81D4FA(), 5)));
				break;
			
			case 1:
				func_333("AG14_OP2_D", 100, 0);
				break;
		}
	}
	else
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				if (!func_492(unk_0x259BE71D8A81D4FA(), func_497(unk_0x259BE71D8A81D4FA(), 5)))
				{
					func_333("AG14_OP1_D1", 0, 0);
				}
				else if (func_491())
				{
					Local_153 = { func_96(func_489(), 0, 0) };
					func_333("CONT_REQ_CD", 0, 0);
					func_178(&Local_153);
				}
				else
				{
					func_333("AG14_NA", 100, 0);
				}
				break;
			
			case 1:
				if (Global_1979176.f_2 != 0)
				{
					func_333("AG14_OP2_D1", 100, 0);
				}
				else if (func_488())
				{
					Local_153 = { func_96(func_487(), 0, 0) };
					func_333("CONT_REQ_CD", 0, 0);
					func_178(&Local_153);
				}
				else
				{
					func_333("AG14_NA", 100, 0);
				}
				break;
			
			default:
				func_333("AG14_NA", 100, 0);
				break;
			}
	}
	func_125();
}

int func_487()
{
	int iVar0;
	
	iVar0 = (Global_262145.f_32539 - func_152(&(Global_1979176.f_8), 0, 0));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_488()
{
	if (func_122(&(Global_1979176.f_8)))
	{
		if (!func_120(&(Global_1979176.f_8), Global_262145.f_32539, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_489()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x39D1D336459711BE();
	iVar1 = func_490();
	return (iVar1 - iVar0) * 1000;
}

int func_490()
{
	return func_90(10391, -1);
}

bool func_491()
{
	return unk_0x39D1D336459711BE() < func_490();
}

int func_492(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_429(iParam0, iParam1))
	{
		iVar0 = func_428(iParam0, iParam1);
		if (Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/].f_4 > 0 && Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_493(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	iVar0 = func_496(iParam1);
	iVar1 = func_494(iParam0, iParam1);
	fVar2 = ((system::to_float(iVar1) / system::to_float(iVar0)) * 100f);
	return system::round(fVar2);
}

int func_494(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_430(iParam1) && func_495(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if (Global_1845281[iParam0 /*883*/].f_268.f_197[iVar0 /*13*/] == iParam1)
			{
				return Global_1845281[iParam0 /*883*/].f_268.f_289;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_495(int iParam0)
{
	return func_431(iParam0) == 5;
}

int func_496(int iParam0)
{
	switch (iParam0)
	{
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
			return Global_262145.f_21264;
		
		default:
	}
	return 0;
}

int func_497(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return 0;
	}
	if (func_430(Global_1845281[iParam0 /*883*/].f_268.f_197[iParam1 /*13*/]))
	{
		uVar0 = Global_1845281[iParam0 /*883*/].f_268.f_197[iParam1 /*13*/];
	}
	return uVar0;
}

void func_498()
{
	bool bVar0;
	int iVar1;
	
	func_82(0, 0);
	func_81("AG14_TITLE");
	bVar0 = true;
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, Global_1979176.f_2 == 0, 0, 0, 0);
	if (((((func_484(0) || func_290(unk_0x259BE71D8A81D4FA())) || func_395(unk_0x259BE71D8A81D4FA())) || func_491()) || !func_492(unk_0x259BE71D8A81D4FA(), func_497(unk_0x259BE71D8A81D4FA(), 5))) || func_414(5))
	{
		bVar0 = false;
	}
	func_63(iVar1, "AG14_OP1_T", 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if ((Global_1979176.f_2 != 0 || func_488()) || func_279(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		bVar0 = false;
	}
	func_63(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	func_448("AG14_OP2_T", 0);
	func_63(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	func_448(func_499(), 0);
	func_61(-1);
	Local_130.f_181.f_3[0] = 0;
	Local_130.f_181.f_36[1] = (6 - 1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	Local_130.f_181.f_2 = iVar1 + 1;
	func_381(Local_130.f_181.f_69, 1, 1);
	unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
	func_125();
}

char* func_499()
{
	return unk_0x93E7527CFECC7CD8(func_500(Local_130.f_181.f_107[1]));
}

int func_500(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case 6:
			return 0;
		
		case 0:
			return joaat("zion3");
		
		case 1:
			return joaat("granger");
		
		case 2:
			return joaat("mesa3");
		
		case 3:
			return joaat("manchez");
		
		case 4:
			return joaat("verus");
		
		case 5:
			return joaat("caddy3");
		
		default:
	}
	return 0;
}

void func_501()
{
	if (func_84(0, -1, 1))
	{
		if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
		{
			func_510();
		}
		else
		{
			func_502();
		}
	}
}

void func_502()
{
	if (func_378(Local_130.f_181.f_69))
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				func_333("TONY_OP1_D", 0, 0);
				func_284(system::round(func_508()));
				break;
			
			case 1:
				func_333("TONY_OP2_D", 100, 0);
				break;
		}
	}
	else
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				if (!func_389(unk_0x259BE71D8A81D4FA()))
				{
					func_333("TONY_OP1_D1", 0, 0);
				}
				else if (func_507())
				{
					Local_153 = { func_96(func_505(Global_1956863.f_35, func_506(), 0), 0, 0) };
					func_333("CONT_REQ_CD", 0, 0);
					func_178(&Local_153);
				}
				else
				{
					func_333("TONY_NA", 100, 0);
				}
				break;
			
			case 1:
				if (Global_1979162.f_2 != 0)
				{
					func_333("TONY_OP2_D1", 100, 0);
				}
				else if (func_504())
				{
					Local_153 = { func_96(func_503(), 0, 0) };
					func_333("CONT_REQ_CD", 0, 0);
					func_178(&Local_153);
				}
				else
				{
					func_333("TONY_NA", 100, 0);
				}
				break;
			
			default:
				func_333("TONY_NA", 100, 0);
				break;
			}
	}
	func_125();
}

int func_503()
{
	int iVar0;
	
	iVar0 = (Global_262145.f_32538 - func_152(&(Global_1979162.f_8), 0, 0));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_504()
{
	if (func_122(&(Global_1979162.f_8)))
	{
		if (!func_120(&(Global_1979162.f_8), Global_262145.f_32538, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_505(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x7E3F74F641EE6B27();
	if (bParam3)
	{
		iVar1 = unk_0x1DD05E817C89C737();
	}
	iVar0 = unk_0x510D0699BE9C6D06((iParam2 - unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(iVar1, uParam0))));
	return iVar0;
}

int func_506()
{
	return Global_262145.f_24067;
}

int func_507()
{
	if (func_122(&(Global_1956863.f_35)))
	{
		if (!func_120(&(Global_1956863.f_35), Global_262145.f_24026, 0))
		{
			return 1;
		}
	}
	return 0;
}

float func_508()
{
	int iVar0;
	
	if (unk_0x834C960822A4683F())
	{
		return (IntToFloat(Global_4718592.f_178423.f_5) + 0f);
	}
	iVar0 = func_90(7213, -1);
	return func_509(iVar0);
}

float func_509(int iParam0)
{
	return ((100f * system::to_float(iParam0)) / system::to_float(1000));
}

void func_510()
{
	bool bVar0;
	int iVar1;
	
	func_82(0, 0);
	func_81("TONY_TITLE");
	bVar0 = true;
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, (Global_1979162.f_2 == 0 && !func_513()), 0, 0, 0);
	if ((((((!func_388() || func_290(unk_0x259BE71D8A81D4FA())) || func_395(unk_0x259BE71D8A81D4FA())) || !func_467()) || !func_466()) || !func_465()) || func_507())
	{
		bVar0 = false;
	}
	func_63(iVar1, "TONY_OP1_T", 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if (((Global_1979162.f_2 != 0 || func_504()) || func_513()) || func_279(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		bVar0 = false;
	}
	func_63(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	func_448("TONY_OP2_T", 0);
	func_63(iVar1, "STRING", 1, bVar0, 0, 0, 0);
	func_448(func_511(), 0);
	func_61(-1);
	Local_130.f_181.f_3[1] = 0;
	Local_130.f_181.f_36[1] = (2 - 1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	Local_130.f_181.f_2 = iVar1 + 1;
	func_381(Local_130.f_181.f_69, 1, 1);
	unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
	func_125();
}

char* func_511()
{
	return unk_0x93E7527CFECC7CD8(func_512(Local_130.f_181.f_107[1]));
}

int func_512(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case 2:
			return 0;
		
		case 0:
			return joaat("schafter3");
		
		case 1:
			return joaat("patriot2");
		
		default:
	}
	return 0;
}

int func_513()
{
	switch (func_515(unk_0x259BE71D8A81D4FA()))
	{
		case 19:
		case 20:
		case 0:
		case 3:
		case 4:
		case 5:
		case 2:
			return 1;
		
		default:
	}
	switch (func_514(unk_0x259BE71D8A81D4FA()))
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_514(int iParam0)
{
	if (func_302(iParam0) == 300)
	{
		return func_348(iParam0);
	}
	return -1;
}

int func_515(int iParam0)
{
	if (func_302(iParam0) == 237 || func_302(iParam0) == 250)
	{
		return func_348(iParam0);
	}
	return -1;
}

void func_516()
{
	if (func_84(0, -1, 1))
	{
		if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
		{
			func_530();
		}
		else
		{
			func_517();
		}
	}
}

void func_517()
{
	int iVar0;
	
	if (func_378(Local_130.f_181.f_69))
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				func_333("FRANK_OP1_D", 100, 0);
				break;
			
			case 1:
				func_333("FRANK_OP2_D", 100, 0);
				break;
			
			case 2:
				func_333("FRANK_OP3_D", 100, 0);
				break;
			
			case 3:
				func_333("FRANK_OP4_D", 100, 0);
				break;
			
			case 4:
				func_333("FRANK_OP5_D", 100, 0);
				break;
		}
	}
	else
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				if (!func_389(unk_0x259BE71D8A81D4FA()))
				{
					func_333("FRANK_OP2_D3", 0, 0);
				}
				else if (func_529())
				{
					iVar0 = (Global_262145.f_31038 - func_152(&(Global_1975462.f_14), 0, 0));
					Local_153 = { func_96(iVar0, 0, 0) };
					func_333("CONT_REQ_CD", 0, 0);
					func_178(&Local_153);
				}
				else
				{
					func_333("FRANK_NA", 100, 0);
				}
				break;
			
			case 1:
				if (!func_528())
				{
					Local_153 = { func_96(func_526(), 0, 0) };
					func_333("CONT_REQ_CD", 0, 0);
					func_178(&Local_153);
				}
				else if (!func_525() || !func_523(1))
				{
					func_333("FRANK_OP2_D2", 100, 0);
				}
				else
				{
					func_333("FRANK_NA", 100, 0);
				}
				break;
			
			case 2:
				if (((Global_1963021 != 0 || BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_5, 21)) || func_522(unk_0x259BE71D8A81D4FA())) || func_520(unk_0x259BE71D8A81D4FA()))
				{
					func_333("FRANK_NA_2", 100, 0);
				}
				else
				{
					func_333("FRANK_NA", 100, 0);
				}
				break;
			
			case 3:
				if (func_518(77) > 0)
				{
					Local_153 = { func_96(func_518(77), 0, 0) };
					func_333("CONT_REQ_CD", 0, 0);
					func_178(&Local_153);
				}
				else if (((Global_1963021 != 0 || BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_5, 21)) || func_522(unk_0x259BE71D8A81D4FA())) || func_520(unk_0x259BE71D8A81D4FA()))
				{
					func_333("FRANK_NA_2", 100, 0);
				}
				else
				{
					func_333("FRANK_NA", 100, 0);
				}
				break;
			
			case 4:
				if (func_518(73) > 0)
				{
					Local_153 = { func_96(func_518(73), 0, 0) };
					func_333("CONT_REQ_CD", 0, 0);
					func_178(&Local_153);
				}
				else
				{
					func_333("FRANK_NA", 100, 0);
				}
				break;
			
			default:
				func_333("FRANK_NA", 100, 0);
				break;
			}
	}
	func_125();
}

int func_518(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_122(&(Global_2685444.f_4342.f_245[iParam0 /*2*/])))
	{
		if (!func_120(&(Global_2685444.f_4342.f_245[iParam0 /*2*/]), func_519(iParam0), 1))
		{
			iVar1 = func_152(&(Global_2685444.f_4342.f_245[iParam0 /*2*/]), 1, 0);
			iVar1 = (func_519(iParam0) - iVar1);
			return iVar1;
		}
	}
	return iVar0;
}

int func_519(int iParam0)
{
	return Global_2685444.f_4342.f_408[iParam0];
}

bool func_520(int iParam0)
{
	return func_521(iParam0, 17);
}

bool func_521(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_6, iParam1);
}

bool func_522(int iParam0)
{
	return func_521(iParam0, 16);
}

bool func_523(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_90(9905, -1), 28);
	}
	return func_524(unk_0x259BE71D8A81D4FA());
}

int func_524(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_27, 28);
	}
	return 0;
}

bool func_525()
{
	return BitTest(func_90(9905, -1), 19);
}

int func_526()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x39D1D336459711BE();
	iVar1 = func_527();
	return (iVar1 - iVar0) * 1000;
}

int func_527()
{
	return func_90(10353, -1);
}

bool func_528()
{
	return unk_0x39D1D336459711BE() >= func_527();
}

bool func_529()
{
	return BitTest(Global_1975462.f_1, 31);
}

void func_530()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	func_82(0, 0);
	func_81("FRANK_TITLE");
	bVar0 = true;
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	if (((((!func_388() || func_290(unk_0x259BE71D8A81D4FA())) || func_395(unk_0x259BE71D8A81D4FA())) || func_529()) || BitTest(Global_1963017, 2)) || !func_594(unk_0x259BE71D8A81D4FA()))
	{
		bVar0 = false;
	}
	func_63(iVar1, "FRANK_OP1_T", 0, bVar0, 0, 0, 0);
	bVar0 = true;
	if ((((!func_528() || !func_570()) || !func_525()) || !func_523(1)) || BitTest(Global_1963017, 3))
	{
		bVar0 = false;
	}
	iVar1++;
	func_63(iVar1, "FRANK_OP2_T", 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if ((((Global_1963021 != 0 || BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_5, 21)) || func_522(unk_0x259BE71D8A81D4FA())) || func_520(unk_0x259BE71D8A81D4FA())) || BitTest(Global_1963017, 4))
	{
		bVar0 = false;
	}
	func_63(iVar1, "FRANK_OP3_T", 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	if (((((!func_532() || Global_1963021 != 0) || BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_5, 21)) || func_522(unk_0x259BE71D8A81D4FA())) || func_520(unk_0x259BE71D8A81D4FA())) || BitTest(Global_1963017, 5))
	{
		bVar0 = false;
	}
	func_63(iVar1, "FRANK_OP4_T", 0, bVar0, 0, 0, 0);
	bVar0 = true;
	iVar1++;
	iVar2 = func_518(73);
	if (((iVar2 > 0 || !func_289(73)) || !func_334(73)) || BitTest(Global_1963017, 6))
	{
		bVar0 = false;
	}
	if (func_531(unk_0x259BE71D8A81D4FA()))
	{
		bVar0 = false;
	}
	func_63(iVar1, "FRANK_OP5_T", 0, bVar0, 0, 0, 0);
	func_63(iVar1, "MPCT_CASH", 1, bVar0, 0, 0, 0);
	func_437(func_87(73), 0);
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	Local_130.f_181.f_2 = iVar1 + 1;
	func_381(Local_130.f_181.f_69, 1, 1);
	unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
	func_125();
}

int func_531(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1943520.f_10, 14);
	}
	return 0;
}

int func_532()
{
	if (func_518(77) > 0)
	{
		return 0;
	}
	if (func_453(unk_0x259BE71D8A81D4FA(), 0))
	{
		return 0;
	}
	if (!func_534())
	{
		return 0;
	}
	if (func_522(unk_0x259BE71D8A81D4FA()))
	{
		if (!func_533(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	return 1;
}

bool func_533(int iParam0)
{
	return func_521(iParam0, 19);
}

int func_534()
{
	if (func_567(unk_0x259BE71D8A81D4FA(), 0, -1))
	{
		return 0;
	}
	if (func_566(unk_0x259BE71D8A81D4FA(), 0))
	{
		return 0;
	}
	if (func_535(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 0))
	{
		return 0;
	}
	if (func_346(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_344(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_341(unk_0x259BE71D8A81D4FA(), 0))
	{
		return 0;
	}
	if (unk_0xF859473E4AD09F30())
	{
		return 0;
	}
	if (unk_0xAB74A6FE5E16479E(unk_0x4A8C381C258A124D()) == unk_0x70E57E9927B6BA58("YachtRm_Bridge"))
	{
		return 0;
	}
	return 1;
}

int func_535(struct<3> Param0, bool bParam1)
{
	if (func_543(Param0) || bParam1)
	{
		return 0;
	}
	if (system::vdist2(Param0, -1144,497f, 43,01712f, 51,94447f) <= (325f * 325f))
	{
		if (func_542(Param0, 1, 0, 0))
		{
			return 1;
		}
		if (unk_0x26715B0ED6702C87(Param0, -1319,769f, 29,52616f, 49,56616f, -1336,527f, 121,0351f, 75,61888f, 18f, 0, 1))
		{
			return 1;
		}
		if (unk_0x26715B0ED6702C87(Param0, -1360,02f, 110,1307f, 52,63413f, -1365,276f, 172,0624f, 72,01312f, 52f, 0, 1))
		{
			return 1;
		}
		if (unk_0x26715B0ED6702C87(Param0, -1363,007f, 170,533f, 50,00813f, -1296,903f, 178,8133f, 73,37104f, 35f, 0, 1))
		{
			return 1;
		}
		if (unk_0x26715B0ED6702C87(Param0, -1197,521f, 199,8643f, 57,04471f, -1298,04f, 176,1384f, 73,33252f, 34f, 0, 1))
		{
			return 1;
		}
		if (unk_0x26715B0ED6702C87(Param0, -1103,745f, 221,1367f, 55,34814f, -1208,394f, 191,0909f, 79,13708f, 45f, 0, 1))
		{
			return 1;
		}
		if (unk_0x26715B0ED6702C87(Param0, -989,0328f, -89,39376f, 32,48801f, -1086,211f, -115,7076f, 50,65051f, 70f, 0, 1))
		{
			return 1;
		}
		if (unk_0x26715B0ED6702C87(Param0, -958,5481f, -111,5455f, 30,76432f, -1132,685f, 190,7841f, 73,90366f, 70f, 0, 1))
		{
			return 1;
		}
		if (unk_0x26715B0ED6702C87(Param0, -1077,028f, -139,7337f, 38,73388f, -1299,556f, -15,16894f, 63,4371f, 20f, 0, 1))
		{
			return 1;
		}
		if (unk_0x26715B0ED6702C87(Param0, -1319,769f, 29,52616f, 47,56616f, -1287,619f, -24,88864f, 67,5273f, 20f, 0, 1))
		{
			return 1;
		}
	}
	if (func_539(2, Param0))
	{
		if (func_542(Param0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (func_539(3, Param0) && !func_536(unk_0x259BE71D8A81D4FA()))
	{
		if (func_542(Param0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (func_539(4, Param0))
	{
		if (func_542(Param0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (func_539(5, Param0))
	{
		if (func_542(Param0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (func_539(6, Param0))
	{
		if (func_542(Param0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (func_539(7, Param0))
	{
		if (func_542(Param0, 7, 0, 0))
		{
			return 1;
		}
	}
	if (func_539(8, Param0))
	{
		if (func_542(Param0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (unk_0x26715B0ED6702C87(Param0, 2591,626f, -268,894f, 111,8859f, 2591,331f, -614,4355f, 55,36921f, 70f, 0, 1))
	{
		return 1;
	}
	if (unk_0x26715B0ED6702C87(Param0, -804,05f, 4216,412f, 204,4872f, -509,0679f, 4135,19f, 123,2502f, 250f, 0, 1))
	{
		return 1;
	}
	if (unk_0x26715B0ED6702C87(Param0, -148,8777f, 4862,204f, 305,6442f, 454,6274f, 5573,104f, 804,097f, 250f, 0, 1) || unk_0x26715B0ED6702C87(Param0, -482,8931f, 4990,255f, 155,1601f, 7,830751f, 5009,371f, 430,7604f, 250f, 0, 1))
	{
		return 1;
	}
	if (((unk_0x26715B0ED6702C87(Param0, 441,3999f, 5579,99f, 802,5138f, 965,7776f, 5675,921f, 601,2646f, 250f, 0, 1) || unk_0x26715B0ED6702C87(Param0, 954,1139f, 5641,051f, 646,5054f, 2140,375f, 5377,753f, 149,1221f, 250f, 0, 1)) || unk_0x26715B0ED6702C87(Param0, 2117,348f, 5377,259f, 173,3297f, 2439,934f, 5297,445f, 62,68662f, 100f, 0, 1)) || unk_0x26715B0ED6702C87(Param0, 2393,347f, 5321,58f, 107,0624f, 2523,946f, 5124,746f, 41,68384f, 70f, 0, 1))
	{
		return 1;
	}
	if (system::vdist2(Param0, -99,68751f, -2448,891f, 5,01731f) <= (230f * 230f))
	{
		if ((((unk_0x26715B0ED6702C87(Param0, 85,05448f, -2511,884f, -2,996267f, -57,59977f, -2412,716f, 15,00095f, 75f, 0, 1) || unk_0x26715B0ED6702C87(Param0, 7,516524f, -2546,741f, 1,331557f, -177,3268f, -2417,047f, 19,16044f, 80f, 0, 1)) || unk_0x26715B0ED6702C87(Param0, -260,0354f, -2419,978f, 1,399635f, -27,26375f, -2423,848f, 25,00064f, 80f, 0, 1)) || unk_0x26715B0ED6702C87(Param0, -187,4256f, -2516,086f, -6,849975f, -186,7518f, -2438,149f, 25,0016f, 40f, 0, 1)) || unk_0x26715B0ED6702C87(Param0, -73,60813f, -2538,564f, -6,989857f, -183,2556f, -2465,145f, 25,0203f, 70f, 0, 1))
		{
			return 1;
		}
	}
	if (unk_0x26715B0ED6702C87(Param0, -1579,822f, 2785,389f, 9,915375f, -1685,905f, 2918,024f, 76,24912f, 45,875f, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_536(int iParam0)
{
	int iVar0;
	
	if (func_538(iParam0))
	{
		iVar0 = func_537(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_537(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_297;
	}
	return 0;
}

int func_538(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_297 != 0;
	}
	return 0;
}

bool func_539(int iParam0, struct<3> Param1)
{
	return system::vdist2(Param1, func_541(iParam0)) < func_540(iParam0);
}

float func_540(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_541(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155,877f, 48,3426f, 52,4985f;
			break;
		
		case 2:
			return -1245,12f, -2818,38f, 12,94f;
			break;
		
		case 3:
			return -2176,19f, 3092,07f, 31,81f;
			break;
		
		case 4:
			return 1701,666f, 2586,261f, 51,4925f;
			break;
		
		case 5:
			return 3525,058f, 3711,323f, 35,6423f;
			break;
		
		case 6:
			return 548,1421f, -3157,961f, 5,0696f;
			break;
		
		case 7:
			return -1142,411f, -526,4487f, 31,6878f;
			break;
		
		case 8:
			return 456,8879f, -985,2783f, 35,6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_542(struct<3> Param0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332,211f, 100,4608f, 40,38437f };
			Var1[0 /*3*/] = { -1094,238f, 148,4274f, 73f };
			fVar2[0] = 171,25f;
			Var0[1 /*3*/] = { -999,7344f, -110,2231f, 25,25706f };
			Var1[1 /*3*/] = { -1149,494f, 109,2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035,113f, -84,95885f, 28,2746f };
			Var1[2 /*3*/] = { -1261,103f, 50,08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804,3439f, -3346,5f, 10f };
			Var1[0 /*3*/] = { -1816,954f, -2768,893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911,488f, -2934,197f, 10f };
			Var1[1 /*3*/] = { -968,6236f, -3477,748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844,9433f, -2802,785f, 10f };
			Var1[2 /*3*/] = { -1011,081f, -3086,904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185,5f;
			Var0[3 /*3*/] = { -1021,086f, -2952,277f, 10f };
			Var1[3 /*3*/] = { -1599,008f, -2616,271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027,136f, -2436,457f, 10f };
			Var1[4 /*3*/] = { -1392,61f, -2226,763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193,5f;
			Var0[5 /*3*/] = { -1497,549f, -2408,712f, 10f };
			Var1[5 /*3*/] = { -1136,917f, -2617,955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234,5f;
			Var0[6 /*3*/] = { -982,7924f, -2831,709f, 12,93313f };
			Var1[6 /*3*/] = { -966,4677f, -2803,458f, 16,68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110,083f, -3496,806f, 12f };
			Var1[7 /*3*/] = { -1955,298f, -3010,431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886,899f, -3193,024f, 12f };
			Var1[8 /*3*/] = { -1836,143f, -3105,268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134,337f, -3535,648f, 12f };
			Var1[9 /*3*/] = { -1259,649f, -3463,486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30,75f;
			Var0[10 /*3*/] = { -969,1279f, -3463,899f, 12f };
			Var1[10 /*3*/] = { -896,3734f, -3505,715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369,491f, -2173,579f, 10f };
			Var1[11 /*3*/] = { -1685,626f, -2720,364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29,25f;
			Var0[12 /*3*/] = { -1010,926f, -3550,943f, 10f };
			Var1[12 /*3*/] = { -1110,198f, -3493,617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773,944f, 3287,334f, 30f };
			Var1[0 /*3*/] = { -2029,776f, 2845,083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725,889f, 3291,099f, 30f };
			Var1[1 /*3*/] = { -2009,182f, 2879,835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442,026f, 3326,699f, 30f };
			Var1[2 /*3*/] = { -2033,928f, 3089,049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917,165f, 3374,209f, 30f };
			Var1[3 /*3*/] = { -2016,791f, 3195,058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86,25f;
			Var0[4 /*3*/] = { -2192,753f, 3373,278f, 30f };
			Var1[4 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150,5f;
			Var0[5 /*3*/] = { -2077,663f, 3344,514f, 30f };
			Var1[5 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140,5f;
			Var0[6 /*3*/] = { -2861,755f, 3352,661f, 30f };
			Var1[6 /*3*/] = { -2715,871f, 3269,916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005,574f, 3364,533f, 30f };
			Var1[7 /*3*/] = { -1977,569f, 3330,888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682,235f, 3004,285f, 30f };
			Var1[8 /*3*/] = { -1942,747f, 2947,441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248,75f;
			Var0[9 /*3*/] = { -2393,295f, 2936,406f, 31,6801f };
			Var1[9 /*3*/] = { -2453,037f, 3006,863f, 52,31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347,185f, 3023,83f, 31,56573f };
			Var1[10 /*3*/] = { -2517,33f, 2989,063f, 49,95644f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259,922f, 3358,04f, 29,99972f };
			Var1[11 /*3*/] = { -2299,772f, 3385,79f, 38,06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476,309f, 3363,914f, 31,67933f };
			Var1[12 /*3*/] = { -2431,981f, 3287,669f, 39,97826f };
			fVar2[12] = 214,25f;
			Var0[13 /*3*/] = { -2103,081f, 2797,783f, 29,37864f };
			Var1[13 /*3*/] = { -2096,821f, 2874,423f, 57,80989f };
			fVar2[13] = 65,75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541,607f, 2527,555f, 40f };
			Var1[0 /*3*/] = { 1815,575f, 2535,06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788,879f, 2445,727f, 40f };
			Var1[1 /*3*/] = { 1716,96f, 2502,957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88,5f;
			Var0[2 /*3*/] = { 1601,157f, 2436,244f, 40f };
			Var1[2 /*3*/] = { 1650,078f, 2515,923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133,25f;
			Var0[3 /*3*/] = { 1706,331f, 2407,597f, 40f };
			Var1[3 /*3*/] = { 1698,555f, 2460,208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104,5f;
			Var0[4 /*3*/] = { 1712,452f, 2756,218f, 40f };
			Var1[4 /*3*/] = { 1718,848f, 2589,162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121,75f;
			Var0[5 /*3*/] = { 1830,228f, 2661,24f, 40f };
			Var1[5 /*3*/] = { 1774,812f, 2679,419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84,5f;
			Var0[6 /*3*/] = { 1559,05f, 2632,22f, 40f };
			Var1[6 /*3*/] = { 1657,208f, 2595,484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103,75f;
			Var0[7 /*3*/] = { 1612,021f, 2716,869f, 40f };
			Var1[7 /*3*/] = { 1657,165f, 2669,721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104,25f;
			Var0[8 /*3*/] = { 1809,872f, 2729,827f, 40f };
			Var1[8 /*3*/] = { 1789,855f, 2705,037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818,789f, 2605,948f, 40f };
			Var1[9 /*3*/] = { 1783,114f, 2606,783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51,25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411,002f, 3663,185f, 20f };
			Var1[0 /*3*/] = { 3615,583f, 3626,194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45,75f;
			Var0[1 /*3*/] = { 3426,66f, 3733,078f, 20f };
			Var1[1 /*3*/] = { 3643,801f, 3694,362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446,036f, 3795,688f, 20f };
			Var1[2 /*3*/] = { 3650,914f, 3766,152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81,5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526,053f, -3391,497f, -10f };
			Var1[0 /*3*/] = { 523,2289f, -3118,678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459,4397f, -3199,99f, 4,819676f };
			Var1[1 /*3*/] = { 593,8928f, -3199,998f, 30,06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552,8467f, -3111,054f, 4,819394f };
			Var1[2 /*3*/] = { 585,3137f, -3111,844f, 17,56923f };
			fVar2[2] = 12,5f;
			Var0[3 /*3*/] = { 598,4666f, -3140,147f, 4,819257f };
			Var1[3 /*3*/] = { 597,4973f, -3117,063f, 17,31926f };
			fVar2[3] = 9,75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108,55f, -570,8798f, 20f };
			Var1[0 /*3*/] = { -1187,811f, -477,5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201,378f, -485,9673f, 20f };
			Var1[1 /*3*/] = { -1215,796f, -464,8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985,6311f, -525,4233f, 20f };
			Var1[2 /*3*/] = { -1013,393f, -475,2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055,849f, -477,8226f, 20f };
			Var1[3 /*3*/] = { -1073,333f, -498,717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461,5684f, -984,572f, 29,43951f };
			Var1[0 /*3*/] = { 471,17f, -984,4292f, 40,14212f };
			fVar2[0] = 7,75f;
			Var0[1 /*3*/] = { 457,3404f, -984,756f, 34,43951f };
			Var1[1 /*3*/] = { 457,2084f, -993,7189f, 29,38958f };
			fVar2[1] = 14,75f;
			Var0[2 /*3*/] = { 477,6227f, -986,6f, 40,00819f };
			Var1[2 /*3*/] = { 424,8687f, -986,3279f, 48,71241f };
			fVar2[2] = 31,5f;
			Var0[3 /*3*/] = { 474,3889f, -974,4613f, 39,55761f };
			Var1[3 /*3*/] = { 474,0358f, -1021,972f, 49,10033f };
			fVar2[3] = 30,5f;
			Var0[4 /*3*/] = { 442,1768f, -974,1888f, 29,68951f };
			Var1[4 /*3*/] = { 442,1855f, -979,8635f, 33,43951f };
			fVar2[4] = 6,75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x26715B0ED6702C87(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_543(struct<3> Param0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (system::vdist(Global_2635563.f_3209, Param0) < Global_2635563.f_3221)
	{
		return Global_2635563.f_3212;
	}
	Global_2635563.f_3209 = { Param0 };
	if (func_559(Param0))
	{
		Global_2635563.f_3212 = 1;
		return 1;
	}
	iVar0 = func_557(Param0);
	if (iVar0 != -1)
	{
		Global_2635563.f_3212 = 1;
		return 1;
	}
	else
	{
		uVar1 = 3;
		uVar2 = 3;
		if (func_544(Param0, &uVar1, &uVar2))
		{
			Global_2635563.f_3212 = 1;
			return 1;
		}
	}
	Global_2635563.f_3212 = 0;
	return 0;
}

int func_544(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	fVar3 = 50f;
	fVar5 = 300f;
	iVar6 = -1;
	iVar0 = 1;
	while (iVar0 <= 131)
	{
		if (iVar2 < *uParam1)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (system::vdist(Param0.f_0, Param0.f_1, 0f, Global_1312298[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312298[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam1)[iVar2] = iVar0;
					(*uParam2)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 172)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_549(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_546(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		iVar7 = 0;
		if (iVar0 >= 162 && iVar0 <= 166)
		{
			iVar7 = func_545(iVar0, Param0, fVar3, 1);
		}
		if (iVar2 < *uParam1)
		{
			fVar4 = system::vdist(Param0.f_0, Param0.f_1, 0f, Global_1943520.f_573[iVar0 /*3*/], Global_1943520.f_573[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3 || iVar7)
			{
				if (iVar0 >= 83 && iVar0 <= 87)
				{
					if (fVar4 <= fVar5)
					{
						fVar5 = fVar4;
						if (iVar6 != -1)
						{
							(*uParam1)[iVar6] = iVar0;
						}
						else
						{
							iVar6 = iVar2;
							(*uParam1)[iVar2] = iVar0;
							(*uParam2)[iVar2] = 1;
							iVar2++;
						}
					}
				}
				else
				{
					(*uParam1)[iVar2] = iVar0;
					(*uParam2)[iVar2] = 1;
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_545(int iParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	float fVar0;
	
	if (iParam0 == -1 || func_259(iParam0) != 28)
	{
		return 0;
	}
	fVar0 = 0f;
	switch (iParam0)
	{
		case 166:
		case 162:
		case 163:
		case 165:
			fVar0 = system::vdist(Param1.f_0, Param1.f_1, 0f, Global_1943520.f_573[iParam0 /*3*/], Global_1943520.f_573[iParam0 /*3*/].f_1, 0f);
			if (fVar0 < fParam2 && (!bParam3 || (bParam3 && Param1.f_2 >= 0f)))
			{
				return 1;
			}
			break;
		
		case 164:
			if (unk_0x26715B0ED6702C87(Param1, -500f, -1664,247f, 18,34956f, -544,0528f, -1720,754f, 28,37445f, 75f, 0, 1) || unk_0x26715B0ED6702C87(Param1, -474,9512f, -1681,646f, 17,89098f, -496,4081f, -1762,774f, 27,64551f, 45f, 0, 1))
			{
				return 1;
			}
			if (!bParam3 && Param1.f_2 <= 0f)
			{
				fVar0 = system::vdist(Param1.f_0, Param1.f_1, 0f, Global_1943520.f_573[iParam0 /*3*/], Global_1943520.f_573[iParam0 /*3*/].f_1, 0f);
			}
			break;
	}
	return 0;
}

int func_546(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_548(iParam0);
	if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_304 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
	if (iVar1 != func_8())
	{
		if (Global_1845281[iVar1 /*883*/].f_268.f_304 == iVar0)
		{
			return 1;
		}
	}
	if (func_547() == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_547()
{
	return Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_8;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_549(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_556(iParam0);
	if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_297 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
	if (iVar1 != func_8())
	{
		if (Global_1845281[iVar1 /*883*/].f_268.f_297 == iVar0)
		{
			return 1;
		}
	}
	if (func_547() == iParam0)
	{
		return 1;
	}
	if (func_341(unk_0x259BE71D8A81D4FA(), 0) || (func_553(unk_0x259BE71D8A81D4FA()) && func_259(func_552(unk_0x259BE71D8A81D4FA())) == 12))
	{
		return 1;
	}
	if (func_344(unk_0x259BE71D8A81D4FA()) || (func_553(unk_0x259BE71D8A81D4FA()) && func_259(func_552(unk_0x259BE71D8A81D4FA())) == 8))
	{
		return 1;
	}
	if (func_346(unk_0x259BE71D8A81D4FA()) || (func_553(unk_0x259BE71D8A81D4FA()) && func_259(func_552(unk_0x259BE71D8A81D4FA())) == 5))
	{
		return 1;
	}
	if (func_551(unk_0x259BE71D8A81D4FA()) || (func_553(unk_0x259BE71D8A81D4FA()) && func_259(func_552(unk_0x259BE71D8A81D4FA())) == 10))
	{
		return 1;
	}
	if (func_550(unk_0x259BE71D8A81D4FA()) || (func_553(unk_0x259BE71D8A81D4FA()) && func_259(func_552(unk_0x259BE71D8A81D4FA())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_550(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 6;
			}
		}
	}
	return 0;
}

int func_551(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 10;
			}
		}
	}
	return 0;
}

int func_552(int iParam0)
{
	if (iParam0 != func_8() && func_83(iParam0, 1, 1))
	{
		return Global_2657971[iParam0 /*465*/].f_322.f_18;
	}
	return -1;
}

int func_553(int iParam0)
{
	if (iParam0 != func_8() && func_83(iParam0, 1, 1))
	{
		if (func_555(iParam0) && !func_554(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_554(int iParam0)
{
	if (iParam0 != func_8() && func_83(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 4);
	}
	return 0;
}

int func_555(int iParam0)
{
	if (iParam0 != func_8() && func_83(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 3);
	}
	return 0;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_557(struct<3> Param0)
{
	int iVar0;
	
	if (system::vdist(Global_2635563.f_3213, Param0) < Global_2635563.f_3221)
	{
		return Global_2635563.f_3216;
	}
	Global_2635563.f_3213 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2643215[iVar0 /*7*/].f_2 + Global_2643215[iVar0 /*7*/].f_3.f_2) * 0,5f);
		}
		if (func_558(Param0, &(Global_2643215[iVar0 /*7*/])))
		{
			Global_2635563.f_3216 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2635563.f_3216 = -1;
	return -1;
}

bool func_558(struct<3> Param0, var uParam1)
{
	return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_559(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2738934.f_957 && func_560(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_560(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam1 = -1;
	iVar2 = func_561(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_549(iVar1))
			{
				if (func_561(Global_1943520.f_573[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_561(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_2640820[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_562(Param0, &(Global_2640820[iVar0 /*17*/]), 0,1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_562(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_565(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635563.f_3035) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_563(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_563(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_564(&Param1, &Param2);
	if (((!Param0.f_0 >= Param1.f_0 || !Param0.f_1 >= Param1.f_1) || !Param0.f_0 <= Param2.f_0) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_564(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_565(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return system::vdist(Param0, Param1) < (fParam2 + 0,01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return system::vdist(Param0, Param1) < (fParam2 + 0,01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return system::vdist(Param0, Param1) < (fParam2 + 0,01f);
	}
	return system::vdist(Param0, Param1) < (fParam2 + 0,01f);
}

int func_566(int iParam0, bool bParam1)
{
	if (func_567(iParam0, bParam1, -1))
	{
		if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_567(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1845281[iParam0 /*883*/].f_268.f_35 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
	{
		if (iParam2 == -1 || func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) != iParam2)
		{
			if (bParam1)
			{
				return func_568(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_568(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return iParam0;
	}
	if (func_569(iParam0) != -1)
	{
		iVar0 = func_259(func_569(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_453(iParam0, 0))
			{
				return func_423(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_8();
		}
		return Global_2657971[iParam0 /*465*/].f_322.f_11;
	}
	return func_8();
}

int func_569(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
		else if (((Global_1575083 || Global_2635563.f_2980) && iParam0 == unk_0x259BE71D8A81D4FA()) && func_83(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
	}
	return -1;
}

bool func_570()
{
	return ((func_586() && func_573()) && !func_571());
}

bool func_571()
{
	return func_572() >= 2;
}

int func_572()
{
	return Global_2709088;
}

int func_573()
{
	if (func_453(unk_0x259BE71D8A81D4FA(), 0))
	{
		return 0;
	}
	if (unk_0xF859473E4AD09F30())
	{
		return 0;
	}
	if (func_585())
	{
		return 0;
	}
	if (func_584())
	{
		return 0;
	}
	if (func_583())
	{
		return 0;
	}
	if ((func_304(unk_0x259BE71D8A81D4FA(), 0) || func_304(unk_0x259BE71D8A81D4FA(), 21)) || func_304(unk_0x259BE71D8A81D4FA(), 25))
	{
		return 0;
	}
	if (func_567(unk_0x259BE71D8A81D4FA(), 0, -1))
	{
		return 0;
	}
	if (func_581(unk_0x259BE71D8A81D4FA()) || func_579())
	{
		return 0;
	}
	if (func_577(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_574(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_233 != 99)
	{
		return 0;
	}
	return 1;
}

bool func_574(int iParam0)
{
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return func_362();
	}
	return BitTest(Global_1668667.f_241.f_136[func_576(10) /*33*/][iParam0], func_575(10));
}

int func_575(int iParam0)
{
	return (iParam0 % 32);
}

int func_576(int iParam0)
{
	return (iParam0 / 32);
}

int func_577(int iParam0)
{
	if (func_578(iParam0))
	{
		return 1;
	}
	if (func_6(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_578(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 7);
	}
	return 0;
}

bool func_579()
{
	return func_580() == 1;
}

int func_580()
{
	return Global_1971512;
}

bool func_581(int iParam0)
{
	return func_582(&(Global_2657971[iParam0 /*465*/].f_444), 0);
}

var func_582(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

bool func_583()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_193 != 0;
}

bool func_584()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 5;
}

bool func_585()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 0);
}

int func_586()
{
	if (!func_593(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!func_591())
	{
		return 0;
	}
	if (!func_83(unk_0x259BE71D8A81D4FA(), 0, 1))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	if (!func_590(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_589(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_44())
	{
		return 0;
	}
	if (func_587(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_587(int iParam0)
{
	switch (func_588(iParam0))
	{
		case 20:
		case 21:
		case 24:
		case 26:
		case 27:
		case 29:
		case 28:
		case 30:
		case 31:
		case 32:
		case 35:
		case 25:
		case 33:
		case 34:
			return 1;
		
		default:
	}
	return 0;
}

int func_588(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_193;
}

int func_589(int iParam0)
{
	if (func_291(iParam0, 1, 0))
	{
		if (Global_1845281[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_590(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_140, 22);
}

int func_591()
{
	if (func_592() == 0)
	{
		return 1;
	}
	return 0;
}

int func_592()
{
	return Global_1574633.f_18;
}

int func_593(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_27, 9);
	}
	return 0;
}

int func_594(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_27, 4);
	}
	return 0;
}

void func_595()
{
	if (func_84(0, -1, 1))
	{
		if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
		{
			func_602();
		}
		else
		{
			func_596();
		}
	}
}

void func_596()
{
	if (func_378(Local_130.f_181.f_69))
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				if (func_484(1) && !func_598(1))
				{
					func_333("IMANI_OOS_D_2", 100, 0);
					func_284(Global_262145.f_31117);
				}
				else if (func_484(1) && func_598(1))
				{
					func_333("IMANI_OOS_D_3", 100, 0);
					func_284(Global_262145.f_31117);
				}
				else
				{
					func_333("IMANI_OOS_D_1", 100, 0);
					func_284(Global_262145.f_31117);
				}
				break;
			
			case 1:
				func_333("IMANI_SMC_D", 100, 0);
				break;
		}
	}
	else
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				if (func_518(75) > 0)
				{
					Local_153 = { func_96(func_518(75), 0, 0) };
					func_333("CONT_REQ_CD", 0, 0);
					func_178(&Local_153);
				}
				else if (func_484(0))
				{
					func_333("PIM_HTTV17", 100, 0);
				}
				else
				{
					func_333("IMANI_NA", 100, 0);
				}
				break;
			
			case 1:
				if (func_518(74) > 0)
				{
					Local_153 = { func_96(func_518(74), 0, 0) };
					func_333("CONT_REQ_CD", 0, 0);
					func_178(&Local_153);
				}
				else if (func_597())
				{
					func_333("IMANI_IN_USE", 100, 0);
				}
				else
				{
					func_333("IMANI_NA", 100, 0);
				}
				break;
			
			default:
				func_333("IMANI_NA", 100, 0);
				break;
			}
	}
	func_125();
}

bool func_597()
{
	return BitTest(Global_1975498.f_1, 0);
}

bool func_598(bool bParam0)
{
	return func_599(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_599(int iParam0, bool bParam1)
{
	return func_600(iParam0, bParam1, 1);
}

int func_600(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_113(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_601(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_113(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_601(int iParam0, int iParam1)
{
	if (func_113(iParam0))
	{
		if (func_113(Global_1887305[iParam0 /*610*/].f_10))
		{
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_602()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	func_82(0, 0);
	func_81("IMANI_TITLE");
	bVar0 = true;
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	iVar2 = func_518(75);
	if (((iVar2 > 0 || func_484(0)) || BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_458, 0)) || BitTest(Global_1963017, 0))
	{
		bVar0 = false;
	}
	func_63(iVar1, "IMANI_OOS_T", 0, bVar0, 0, 0, 0);
	func_63(iVar1, "MPCT_CASH", 1, bVar0, 0, 0, 0);
	func_437(func_87(75), 0);
	bVar0 = true;
	iVar1++;
	iVar2 = func_518(74);
	if ((iVar2 > 0 || func_597()) || BitTest(Global_1963017, 1))
	{
		bVar0 = false;
	}
	func_63(iVar1, "IMANI_SMC_T", 0, bVar0, 0, 0, 0);
	func_63(iVar1, "MPCT_CASH", 1, bVar0, 0, 0, 0);
	func_437(func_87(74), 0);
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	Local_130.f_181.f_2 = iVar1 + 1;
	func_381(Local_130.f_181.f_69, 1, 1);
	unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
	func_125();
}

void func_603()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	func_618();
	func_616();
	if (func_84(0, -1, 1))
	{
		if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
		{
			func_82(0, 0);
			func_81("SES_FIRST_0");
			unk_0x8744D2E3FC95740E(&bLocal_179, 2);
			func_79(1, 1, 0, 0, 0);
			func_78(1, 2, 1, 1, 1);
			func_77(0, 0, 0, 0, 0);
			if (func_614(unk_0x259BE71D8A81D4FA()))
			{
				bVar1 = true;
				bVar2 = func_612(0);
				if (!bVar2 || func_610(unk_0x259BE71D8A81D4FA()))
				{
					bVar1 = false;
				}
				func_609(70, iVar0, "TUN_SPHONE_CANCEL", bVar1);
				if (func_87(70) > 0)
				{
					func_63(iVar0, "MPCT_CASH", 1, bVar1, 0, 0, 0);
					func_437(func_87(70), 0);
				}
				if (bVar2)
				{
					func_333("TUN_SPHONE_H3", 100, 0);
				}
				else
				{
					func_333("TUN_SPHONE_H2", 100, 0);
				}
			}
			else
			{
				func_63(iVar0, "TUN_SPHONE_CANCEL", 0, 1, 0, 0, 0);
				func_63(iVar0, "", 1, 1, 0, 0, 0);
				func_608(15, 0);
				func_333("TUN_SPHONE_H1", 100, 0);
			}
			iVar0++;
			if (func_607(unk_0x259BE71D8A81D4FA()))
			{
				if (func_604(unk_0x259BE71D8A81D4FA()))
				{
					bVar1 = ((!BitTest(uLocal_209, 0) && !BitTest(uLocal_209, 1)) && !BitTest(uLocal_209, 2));
					func_609(71, iVar0, "TUN_SPHONE_EL", bVar1);
					func_333("TUN_SPHONE_H4", 100, 0);
				}
				else
				{
					func_63(iVar0, "TUN_SPHONE_EL", 0, 0, 0, 0, 0);
					func_63(iVar0, "", 1, 0, 0, 0, 0);
					func_333("TUN_SPHONE_H5", 100, 0);
				}
				iVar0++;
			}
			Local_130.f_181.f_2 = iVar0;
			func_381(Local_130.f_181.f_69, 1, 1);
			func_61(-1);
			if (func_1320())
			{
				if (unk_0xAE231F549813BBDF(2))
				{
					func_383(237, "BB_SELECT", -1, 0);
					func_383(238, "BB_BACK", -1, 0);
				}
				else
				{
					func_382(176, "BB_SELECT", -1);
					func_382(177, "BB_BACK", -1);
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
			func_125();
		}
		else
		{
			if (func_614(unk_0x259BE71D8A81D4FA()) && Local_130.f_181.f_69 == 0)
			{
				if (func_612(0))
				{
					func_333("TUN_SPHONE_H3", 100, 0);
				}
				else
				{
					func_333("TUN_SPHONE_H2", 100, 0);
				}
			}
			else if (func_607(unk_0x259BE71D8A81D4FA()) && Local_130.f_181.f_69 == 1)
			{
				if (func_604(unk_0x259BE71D8A81D4FA()))
				{
					func_333("TUN_SPHONE_H4", 100, 0);
				}
				else
				{
					func_333("TUN_SPHONE_H5", 100, 0);
				}
			}
			else
			{
				func_333("TUN_SPHONE_H1", 100, 0);
			}
			func_125();
		}
	}
}

bool func_604(int iParam0)
{
	return ((func_606(iParam0) && func_614(iParam0)) && !func_605(iParam0));
}

bool func_605(int iParam0)
{
	return Global_1975605[iParam0 /*111*/].f_26 == 1;
}

int func_606(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_490 != 0;
	}
	return 0;
}

bool func_607(int iParam0)
{
	return (func_606(iParam0) && func_614(iParam0));
}

void func_608(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23831.f_5827 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 >= 4)
	{
		return;
	}
	if (Global_23831.f_6347 != 1)
	{
		return;
	}
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		return;
	}
	Global_23831.f_4984[Global_23831.f_5827] = iParam0;
	Global_23831.f_5827++;
	Global_23831.f_2387[Global_23831.f_6345 /*5*/][Global_23831.f_6346] = 4;
	Global_23831.f_6346++;
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		fVar0 = func_439();
		if (Global_23831.f_5678[Global_23831.f_5822] && Global_23831.f_6346 == Global_23831.f_6344)
		{
			func_65(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23831.f_5671[(Global_23831.f_5822 - 1)])
		{
			Global_23831.f_5671[(Global_23831.f_5822 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23831.f_6346 >= Global_23831.f_6344)
		{
			fVar3 = func_438();
			if (fVar3 > Global_23831.f_6348[Global_23831.f_5821])
			{
				Global_23831.f_6348[Global_23831.f_5821] = fVar3;
			}
		}
	}
}

void func_609(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (func_282(iParam0))
	{
		func_63(iParam1, sParam2, 1, bParam3, 0, 0, 0);
		func_608(54, 0);
	}
	else
	{
		func_63(iParam1, sParam2, 0, bParam3, 0, 0, 0);
	}
}

int func_610(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_611(iParam0) && Global_2657971[iParam0 /*465*/].f_322.f_11 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_611(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 22;
			}
		}
	}
	return 0;
}

bool func_612(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_90(9618, -1), 1);
	}
	return func_613(unk_0x259BE71D8A81D4FA());
}

int func_613(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_1, 1);
	}
	return 0;
}

int func_614(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_615(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_615(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_3, iParam1);
	}
	return 0;
}

void func_616()
{
	if (BitTest(uLocal_209, 1))
	{
		Local_130.f_0 = 172;
		StringCopy(&(Local_130.f_166), "TUN_SESSANTA", 16);
		Local_130.f_178 = 26;
		Local_130.f_180 = 2;
		StringCopy(&(Local_130.f_170), "TNSSAUD", 16);
		StringCopy(&(Local_130.f_174), "TNSS_PC_GP1", 16);
		func_617(&(Local_130.f_1), Local_130.f_180, 0, &(Local_130.f_166), 0, 1);
		unk_0x8744D2E3FC95740E(&uLocal_209, true);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_209, 2);
	}
	else if (BitTest(uLocal_209, 2))
	{
		func_1(Local_130.f_1, "TNSSAUD", "TNSS_PC_GP1", &Local_176, 1);
		unk_0x8744D2E3FC95740E(&uLocal_209, 2);
		if (BitTest(uLocal_209, 3))
		{
			func_32(2);
		}
		else
		{
			func_32(4);
		}
	}
	else if (BitTest(uLocal_209, 0))
	{
		unk_0x8744D2E3FC95740E(&uLocal_209, false);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_209, true);
		if (func_604(unk_0x259BE71D8A81D4FA()) && !func_122(&uLocal_210))
		{
			func_121(&uLocal_210, 0, 0);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_209, 3);
		}
	}
}

void func_617(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(iParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(iParam2, 1);
			}
		}
	}
}

void func_618()
{
	if (BitTest(iLocal_206, 3))
	{
		Local_130.f_0 = 172;
		StringCopy(&(Local_130.f_166), "TUN_SESSANTA", 16);
		Local_130.f_178 = 26;
		Local_130.f_180 = 2;
		StringCopy(&(Local_130.f_170), "TNSSAUD", 16);
		StringCopy(&(Local_130.f_174), "TNSS_PC_GP1", 16);
		func_617(&(Local_130.f_1), Local_130.f_180, 0, &(Local_130.f_166), 0, 1);
		unk_0x8744D2E3FC95740E(&iLocal_206, 3);
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_206, 4);
	}
	else if (BitTest(iLocal_206, 4))
	{
		func_1(Local_130.f_1, "TNSSAUD", "TNSS_PC_GP1", &Local_176, 1);
		iLocal_206 = 0;
		func_32(4);
	}
	else if (BitTest(iLocal_206, 0))
	{
		hud::set_warning_message_with_header("HUD_CONNPROB", "TUN_SPHONE_CC", 36, 0, false, -1, 0, 0, true, 0);
		if (func_120(&uLocal_207, 1000, 0))
		{
			if (func_636(201))
			{
				func_619(1);
				unk_0x0B0C9A0F9AAEB7F0(&iLocal_206, 3);
				func_32(4);
			}
			else if (func_636(202))
			{
				func_1(Local_130.f_1, "TNSSAUD", "TNSS_PC_BY1", &Local_176, 0);
				unk_0x8744D2E3FC95740E(&iLocal_206, false);
				func_32(4);
			}
		}
	}
}

void func_619(bool bParam0)
{
	func_634();
	if (bParam0)
	{
		func_631(1);
	}
	func_630(0, 0, 1, 1);
	func_620(0, 0, 1, 1);
}

void func_620(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_90(9618, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 3);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1975605[unk_0x383461852896D73D() /*111*/].f_1), 3);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 3);
		unk_0x8744D2E3FC95740E(&(Global_1975605[unk_0x383461852896D73D() /*111*/].f_1), 3);
	}
	func_629(9618, iVar0, -1, 1);
	if (bParam1)
	{
		func_625(114, -1);
	}
	if (bParam2)
	{
		func_622(-1713398555, 12, 0);
	}
	if (bParam3)
	{
		func_621(271, -1);
	}
}

void func_621(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar1;
	
	Var0.f_0 = -418572806;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	iVar1 = func_116(1, 1);
	if (!iVar1 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 5, iVar1, Var0.f_0);
	}
}

void func_622(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_624(iParam1, iParam2))
	{
		iVar0 = func_623();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_623()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696066[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_624(int iParam0, var uParam1)
{
	if (Global_1575071)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575083) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_625(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_628(iParam0, func_56(iParam1));
	iVar0++;
	func_626(iParam0, iVar0, iParam1);
}

void func_626(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_627(iParam0, iParam2);
	unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
}

var func_627(int iParam0, int iParam1)
{
	return unk_0xD69CE161FE614531(8, uParam0, func_56(iParam1));
}

int func_628(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_627(iParam0, iParam1);
	if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_629(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_91(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

void func_630(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_90(9618, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 2);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1975605[unk_0x383461852896D73D() /*111*/].f_1), 2);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 2);
		unk_0x8744D2E3FC95740E(&(Global_1975605[unk_0x383461852896D73D() /*111*/].f_1), 2);
	}
	func_629(9618, iVar0, -1, 1);
	if (bParam1)
	{
		func_625(114, -1);
	}
	if (bParam2)
	{
		func_622(-1713398555, 12, 0);
	}
	if (bParam3)
	{
		func_621(271, -1);
	}
}

void func_631(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	bVar3 = false;
	if (func_633(&iVar0))
	{
		func_632(iVar0, 0);
		iVar1 = iVar0;
	}
	else
	{
		return;
	}
	while (!bVar3)
	{
		if (func_633(&iVar0))
		{
			if (iVar0 != iVar1)
			{
				func_632(iVar0, 1);
				iVar2 = iVar0;
				bVar3 = true;
			}
			else
			{
				iVar4++;
				if (iVar4 > 100)
				{
					bVar3 = true;
					iVar4 = 0;
					func_632(iVar0, 1);
					iVar2 = iVar0;
				}
			}
		}
		else
		{
			return;
		}
	}
	bVar3 = false;
	while (!bVar3)
	{
		if (func_633(&iVar0))
		{
			if (iVar0 != iVar1 && iVar0 != iVar2)
			{
				func_632(iVar0, 2);
				bVar3 = true;
			}
			else
			{
				iVar4++;
				if (iVar4 > 100)
				{
					bVar3 = true;
					iVar4 = 0;
					func_632(iVar0, 2);
				}
			}
		}
		else
		{
			return;
		}
	}
	if (bParam0)
	{
		func_629(9839, (unk_0x39D1D336459711BE() + Global_262145.f_30356), -1, 1);
	}
}

void func_632(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_629(9634, iParam0, -1, 1);
			break;
		
		case 1:
			func_629(9635, iParam0, -1, 1);
			break;
		
		case 2:
			func_629(9636, iParam0, -1, 1);
			break;
		
		default:
			break;
	}
}

int func_633(int iParam0)
{
	var uVar0[8];
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	uVar0[0] = Global_262145.f_30358[0];
	uVar0[1] = Global_262145.f_30358[1];
	uVar0[2] = Global_262145.f_30358[2];
	uVar0[3] = Global_262145.f_30358[3];
	uVar0[4] = Global_262145.f_30358[4];
	uVar0[5] = Global_262145.f_30358[5];
	uVar0[6] = Global_262145.f_30358[6];
	uVar0[7] = Global_262145.f_30358[7];
	iVar4 = 0;
	while (iVar4 < 8)
	{
		fVar1 = (fVar1 + uVar0[iVar4]);
		iVar4++;
	}
	fVar3 = unk_0xD2AA6F822D3A55D2(0f, fVar1);
	iVar4 = 0;
	while (iVar4 < 8)
	{
		fVar2 = (fVar2 + uVar0[iVar4]);
		if (fVar3 < fVar2)
		{
			*iParam0 = iVar4;
			return 1;
		}
		iVar4++;
	}
	*iParam0 = -1;
	return 0;
}

void func_634()
{
	func_629(9621, -1, -1, 1);
	Global_1975605[unk_0x383461852896D73D() /*111*/].f_4 = -1;
	func_635(0);
}

void func_635(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9618, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, true);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, true);
	}
	func_629(9618, iVar0, -1, 1);
}

int func_636(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = iParam0;
	iVar1 = func_576(iVar0);
	bVar2 = func_575(iVar0);
	if ((unk_0x2645430E708CBFAC(2, iParam0) || unk_0x61C3701AD6D746B2(2, iParam0)) || func_637(iParam0, &(Global_1668667.f_1060), 1))
	{
		if (!BitTest(Global_1668667.f_1049[iVar1], bVar2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1668667.f_1049[iVar1]), bVar2);
			return 1;
		}
	}
	else if (BitTest(Global_1668667.f_1049[iVar1], bVar2))
	{
		unk_0x8744D2E3FC95740E(&(Global_1668667.f_1049[iVar1]), bVar2);
	}
	return 0;
}

int func_637(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0x6C29A57AC29D7033(2, 195) - 127);
	iVar1 = (unk_0x6C29A57AC29D7033(2, 196) - 127);
	iVar2 = (unk_0x6C29A57AC29D7033(2, 197) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < unk_0x1DD05E817C89C737() || iParam2 == 0)
				{
					*uParam1 = unk_0x1DD05E817C89C737() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < unk_0x1DD05E817C89C737() || iParam2 == 0)
				{
					*uParam1 = unk_0x1DD05E817C89C737() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < unk_0x1DD05E817C89C737() || iParam2 == 0)
				{
					*uParam1 = unk_0x1DD05E817C89C737() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < unk_0x1DD05E817C89C737() || iParam2 == 0)
				{
					*uParam1 = unk_0x1DD05E817C89C737() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < unk_0x1DD05E817C89C737() || iParam2 == 0)
				{
					*uParam1 = unk_0x1DD05E817C89C737() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < unk_0x1DD05E817C89C737() || iParam2 == 0)
				{
					*uParam1 = unk_0x1DD05E817C89C737() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_638()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	func_649();
	if (func_84(0, -1, 1))
	{
		if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
		{
			func_82(0, 0);
			func_81("P_FIRST_0");
			unk_0x8744D2E3FC95740E(&bLocal_179, 2);
			func_79(1, 1, 0, 0, 0);
			func_78(1, 2, 1, 1, 1);
			func_77(0, 0, 0, 0, 0);
			bVar1 = true;
			bVar2 = func_647(1);
			if (((!bVar2 || func_645(unk_0x259BE71D8A81D4FA())) || func_642(unk_0x259BE71D8A81D4FA())) || func_640(unk_0x259BE71D8A81D4FA()))
			{
				bVar1 = false;
			}
			if (func_639(unk_0x259BE71D8A81D4FA()))
			{
				func_609(68, iVar0, "CSH_PPHONE_CANCEL", bVar1);
				if (func_87(68) > 0)
				{
					func_63(iVar0, "MPCT_CASH", 1, bVar1, 0, 0, 0);
					func_437(func_87(68), 0);
				}
				if (bVar1)
				{
					func_333("CSH_PPHONE_H3", 100, 0);
				}
				else if (!bVar2)
				{
					func_333("CSH_PPHONE_H2", 100, 0);
				}
				else
				{
					func_333("CSH_PPHONE_H4", 100, 0);
				}
			}
			else
			{
				func_63(iVar0, "CSH_PPHONE_CANCEL", 0, bVar1, 0, 0, 0);
				func_63(iVar0, "", 1, 1, 0, 0, 0);
				func_608(15, 0);
				func_333("CSH_PPHONE_H1", 100, 0);
			}
			iVar0++;
			func_61(-1);
			if (func_1320())
			{
				if (unk_0xAE231F549813BBDF(2))
				{
					func_383(237, "BB_SELECT", -1, 0);
					func_383(238, "BB_BACK", -1, 0);
				}
				else
				{
					func_382(176, "BB_SELECT", -1);
					func_382(177, "BB_BACK", -1);
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
			func_125();
		}
		else
		{
			if (func_639(unk_0x259BE71D8A81D4FA()))
			{
				if (func_647(1))
				{
					func_333("CSH_PPHONE_H3", 100, 0);
				}
				else
				{
					func_333("CSH_PPHONE_H2", 100, 0);
				}
			}
			else
			{
				func_333("CSH_PPHONE_H1", 100, 0);
			}
			func_125();
		}
	}
}

int func_639(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_640(int iParam0)
{
	if (func_641(func_302(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_641(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

bool func_642(int iParam0)
{
	return func_643(func_644(iParam0));
}

int func_643(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_644(int iParam0)
{
	if (func_302(iParam0) == 256)
	{
		return func_348(iParam0);
	}
	return -1;
}

int func_645(int iParam0)
{
	if (func_646(iParam0))
	{
		return func_568(iParam0) == iParam0;
	}
	return 0;
}

int func_646(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_8())
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 20;
			}
		}
	}
	return 0;
}

bool func_647(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_90(9511, -1), 0);
	}
	return func_648(unk_0x259BE71D8A81D4FA());
}

int func_648(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_1, 0);
	}
	return 0;
}

void func_649()
{
	if (BitTest(uLocal_203, 3))
	{
		Local_130.f_0 = 169;
		StringCopy(&(Local_130.f_166), "HS4_PAVEL", 16);
		Local_130.f_178 = 0;
		Local_130.f_180 = 2;
		StringCopy(&(Local_130.f_170), "HS4PAAU", 16);
		StringCopy(&(Local_130.f_174), "HS4PA_PCR_2", 16);
		func_617(&(Local_130.f_1), Local_130.f_180, 0, &(Local_130.f_166), 0, 1);
		unk_0x8744D2E3FC95740E(&uLocal_203, 3);
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_203, 4);
	}
	else if (BitTest(uLocal_203, 4))
	{
		func_1(Local_130.f_1, "HS4PAAU", "HS4PA_PCR_2", &Local_176, 1);
		iLocal_191 = 0;
		func_32(4);
	}
	else if (BitTest(uLocal_203, 0))
	{
		hud::set_warning_message_with_header("HUD_CONNPROB", "MPCT_CNCW", 36, 0, false, -1, 0, 0, true, 0);
		if (func_120(&uLocal_189, 1000, 0))
		{
			if (func_636(201))
			{
				func_650(0);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_203, 3);
				func_32(4);
			}
			else if (func_636(202))
			{
				func_1(Local_130.f_1, "HS4PAAU", "HS4PA_PCR_5", &Local_176, 0);
				unk_0x8744D2E3FC95740E(&iLocal_191, false);
				func_32(4);
			}
		}
	}
}

void func_650(bool bParam0)
{
	struct<46> Var0;
	
	func_676(9526, -1);
	func_676(9484, -1);
	func_676(9490, -1);
	func_676(9491, -1);
	func_676(9492, -1);
	func_676(9485, -1);
	func_676(9486, -1);
	func_676(9487, -1);
	func_676(9488, -1);
	func_676(9489, -1);
	func_676(9493, -1);
	func_676(9495, -1);
	func_676(9518, -1);
	func_676(9496, -1);
	func_676(9519, -1);
	func_676(9497, -1);
	func_676(9498, -1);
	func_676(9520, -1);
	func_676(9499, -1);
	func_676(9521, -1);
	func_676(9500, -1);
	func_676(9501, -1);
	func_676(9522, -1);
	func_676(9502, -1);
	func_676(9523, -1);
	func_676(9503, -1);
	func_676(9504, -1);
	func_676(9524, -1);
	func_676(9505, -1);
	func_676(9525, -1);
	func_676(9506, -1);
	func_676(9507, -1);
	func_676(9543, -1);
	func_676(9508, -1);
	func_675(0);
	func_674(0);
	func_673(0);
	func_672(0);
	func_671(0);
	func_670(0);
	func_669(0);
	func_668(0);
	func_667(0);
	func_666(0);
	func_665(0);
	func_664(0);
	func_663(0);
	func_662(0);
	func_661(0);
	func_660(0);
	func_659(0);
	func_657(0, 0);
	func_654(-1);
	func_653(30324, 0, -1);
	func_653(30325, 0, -1);
	func_653(30326, 0, -1);
	func_653(30327, 0, -1);
	func_653(30328, 0, -1);
	func_653(30329, 0, -1);
	func_653(30330, 0, -1);
	func_653(30331, 0, -1);
	func_653(30332, 0, -1);
	func_653(30333, 0, -1);
	func_653(30334, 0, -1);
	func_653(30335, 0, -1);
	func_653(30336, 0, -1);
	func_653(30337, 0, -1);
	func_653(30338, 0, -1);
	func_653(30339, 0, -1);
	func_653(30340, 0, -1);
	func_653(30341, 0, -1);
	func_653(30342, 0, -1);
	func_653(30343, 0, -1);
	func_653(30344, 0, -1);
	func_653(30345, 0, -1);
	func_653(30346, 0, -1);
	func_653(30347, 0, -1);
	func_653(30348, 0, -1);
	func_653(30349, 0, -1);
	func_653(30350, 0, -1);
	func_653(30351, 0, -1);
	func_653(30352, 0, -1);
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_44 = 1;
	Global_1971532 = { Var0 };
	if (bParam0)
	{
		Global_1971578 = 1;
	}
	else
	{
		func_651();
	}
	func_622(-1954779194, 28, 0);
}

void func_651()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_57();
	iVar2 = func_652(iVar0);
	uVar3 = unk_0x38640D2193CB547F(iVar2);
	if (BitTest(uVar3, 4))
	{
		unk_0x8744D2E3FC95740E(&uVar3, 4);
		bVar1 = true;
	}
	if (BitTest(uVar3, 5))
	{
		unk_0x8744D2E3FC95740E(&uVar3, 5);
		bVar1 = true;
	}
	if (BitTest(uVar3, 6))
	{
		unk_0x8744D2E3FC95740E(&uVar3, 6);
		bVar1 = true;
	}
	if (bVar1)
	{
		unk_0x6CDC48346A1C4FCF(iVar2, uVar3);
	}
	func_629(11822, 0, -1, 1);
}

int func_652(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 940;
			break;
		
		case 1:
			iVar0 = 941;
			break;
	}
	return iVar0;
}

void func_653(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_57();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

void func_654(int iParam0)
{
	int iVar0;
	
	iVar0 = func_656(30500, -1);
	if (iVar0 != iParam0)
	{
		func_655(30500, iParam0, -1);
	}
}

void func_655(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_57();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	unk_0x0F575D68F532124C(iParam0, iParam1, iParam2);
}

int func_656(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_57();
	}
	return unk_0x03CFFD51CE515454(iParam0, iParam1);
}

void func_657(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_90(9511, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 12);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_1), 12);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 12);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_1), 12);
	}
	func_658(9511, iVar0, -1);
	if (bParam1)
	{
		func_622(-1713398555, 18, 0);
	}
}

void func_658(int iParam0, int iParam1, int iParam2)
{
	func_629(iParam0, iParam1, iParam2, 1);
}

void func_659(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9511, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 5);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_1), 5);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 5);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_1), 5);
	}
	func_658(9511, iVar0, -1);
}

void func_660(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9511, -1);
	unk_0x8744D2E3FC95740E(&iVar0, false);
	unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_1), false);
	func_658(9511, iVar0, -1);
	if (bParam0)
	{
		func_622(-1713398555, 18, 0);
	}
}

void func_661(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 15);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 15);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 15);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 15);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_662(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 13);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 13);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 13);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_663(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 12);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 12);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 12);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 12);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_664(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 11);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 11);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 11);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 11);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_665(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 10);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 10);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 10);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 10);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_666(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 9);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 9);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 9);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 9);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_667(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 8);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 8);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 8);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 8);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_668(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 7);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 7);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 7);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 7);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_669(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 6);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 6);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 6);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 6);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_670(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 5);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 5);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 5);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 5);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_671(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 4);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 4);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 4);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_672(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 3);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 3);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 3);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 3);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_673(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 2);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 2);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, 2);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), 2);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_674(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, true);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), true);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, true);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), true);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_675(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_90(9482, -1);
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, false);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), false);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&iVar0, false);
		unk_0x8744D2E3FC95740E(&(Global_1973625[unk_0x259BE71D8A81D4FA() /*53*/].f_5), false);
	}
	func_629(9482, iVar0, -1, 1);
}

void func_676(int iParam0, int iParam1)
{
	func_629(iParam0, 0, iParam1, 0);
}

void func_677()
{
	func_861();
	if (BitTest(Local_130.f_363, 4) && BitTest(uLocal_199, 0))
	{
		unk_0x8744D2E3FC95740E(&(Local_130.f_363), 4);
		unk_0x8744D2E3FC95740E(&uLocal_199, false);
	}
	switch (Local_130.f_178)
	{
		case 23:
			if (func_521(unk_0x259BE71D8A81D4FA(), 6))
			{
				if (func_854())
				{
					func_853(6);
					func_32(4);
				}
				return;
			}
			if (func_84(0, -1, 1))
			{
				if (bLocal_741 && func_850())
				{
					unk_0x8744D2E3FC95740E(&(Local_130.f_363), 4);
					bLocal_741 = false;
				}
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					func_849();
					unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
					func_125();
				}
				else
				{
					func_125();
					func_681();
				}
			}
			break;
		
		case 24:
			if (func_84(0, -1, 0))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					if (func_680())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
						func_125();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_125();
					func_678();
				}
			}
			break;
	}
}

void func_678()
{
	if (Local_130.f_181.f_69 == 6)
	{
		func_333("MPCT_EXIT", 0, 0);
	}
	else if (!BitTest(uLocal_199, 2))
	{
		if (func_518(60) > 0)
		{
			Local_153 = { func_96(func_518(60), 0, 0) };
			func_333("CONT_REQ_CD", 0, 0);
			func_178(&Local_153);
		}
		else
		{
			switch (func_679())
			{
				case 1:
					func_333("MPCT_CASINO_VD2", 0, 0);
					break;
				
				default:
					func_333("MPCT_CASINO_VD1", 0, 0);
					break;
				}
		}
	}
	else
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				func_333("MPCT_REQCOGH", 0, 0);
				break;
			
			case 1:
				func_333("MPCT_REQWINH", 0, 0);
				break;
			
			case 2:
				func_333("MPCT_REQFUGH", 0, 0);
				break;
			
			case 3:
				func_333("MPCT_REQSUPH", 0, 0);
				break;
			
			case 4:
				func_333("MPCT_REQDUBH", 0, 0);
				break;
			
			case 5:
				func_333("MPCT_REQFELH", 0, 0);
				break;
			
			default:
				func_333("MPCT_PERVEHc", 0, 0);
				break;
			}
	}
}

int func_679()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_305;
}

int func_680()
{
	bool bVar0;
	
	func_82(0, 0);
	func_81("MPCT_CASINO_V");
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	bVar0 = BitTest(uLocal_199, 2);
	func_63(0, "COGCABRI", 0, bVar0, 0, 0, 0);
	func_63(1, "WINDSOR", 0, bVar0, 0, 0, 0);
	func_63(2, "FUGITIVE", 0, bVar0, 0, 0, 0);
	func_63(3, "SUPERD", 0, bVar0, 0, 0, 0);
	func_63(4, "DUBSTA", 0, bVar0, 0, 0, 0);
	func_63(5, "FELTZER", 0, bVar0, 0, 0, 0);
	func_61(-1);
	if (unk_0xAE231F549813BBDF(2))
	{
		func_383(237, "BB_SELECT", -1, 0);
		func_383(238, "BB_BACK", -1, 0);
	}
	else
	{
		func_382(176, "BB_SELECT", -1);
		func_382(177, "BB_BACK", -1);
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	func_381(Local_130.f_181.f_69, 1, 1);
	Local_130.f_181.f_2 = 6;
	return 1;
}

void func_681()
{
	switch (Local_130.f_181.f_69)
	{
		case 0:
			if (Global_262145.f_26668)
			{
				func_333("MPCT_CASINO_RD3", 0, 0);
			}
			else if (func_850())
			{
				func_333("MPCT_CASINO_RD0", 0, 0);
			}
			else if (bLocal_741)
			{
				func_333("MPCT_CASINO_RD2", 0, 0);
			}
			else if (!func_388())
			{
				func_333("MPCT_CASINO_RD1", 0, 0);
			}
			else if (func_683(unk_0x259BE71D8A81D4FA(), 243, 0) == 16)
			{
				func_333("MPCT_CASINO_RD4", 0, 0);
			}
			else if (func_683(unk_0x259BE71D8A81D4FA(), 243, 0) == 15)
			{
				func_333("MPCT_CASINO_RD5", 0, 0);
			}
			else
			{
				func_333("MPCT_CASINO_RD3", 0, 0);
			}
			break;
		
		case 1:
			if (!Global_262145.f_26669 && BitTest(uLocal_199, 1))
			{
				func_333("MPCT_CASINO_LD0", 0, 0);
			}
			else if (func_518(59) > 0)
			{
				Local_153 = { func_96(func_518(59), 0, 0) };
				func_333("CONT_REQ_CD", 0, 0);
				func_178(&Local_153);
			}
			else
			{
				switch (func_682())
				{
					case 1:
						func_333("MPCT_CASINO_LD2", 0, 0);
						break;
					
					default:
						func_333("MPCT_CASINO_LD1", 0, 0);
						break;
					}
			}
			break;
		
		case 2:
			if (!Global_262145.f_26670 && BitTest(uLocal_199, 2))
			{
				func_333("MPCT_CASINO_VD0", 0, 0);
			}
			else if (func_518(60) > 0)
			{
				Local_153 = { func_96(func_518(60), 0, 0) };
				func_333("CONT_REQ_CD", 0, 0);
				func_178(&Local_153);
			}
			else
			{
				switch (func_679())
				{
					case 1:
						func_333("MPCT_CASINO_VD2", 0, 0);
						break;
					
					default:
						func_333("MPCT_CASINO_VD1", 0, 0);
						break;
					}
			}
			break;
		
		default:
			func_333("", 0, 0);
			break;
	}
}

int func_682()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_304;
}

int func_683(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_716(func_821(iParam1, -1, -1, -1), func_778(iParam1, -1, 1, -1, -1, iParam0), func_725(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_715(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_713(iParam1) >= func_712(iVar0))
	{
		return 5;
	}
	if (func_358(iParam0))
	{
		return 6;
	}
	if (func_711(iParam0))
	{
		return 14;
	}
	if (func_710(iParam0) && !func_709(iParam0))
	{
		return 17;
	}
	iVar1 = func_704(iParam0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	if (func_703(iParam1) == 1)
	{
		if ((func_702() || func_701()) || ((!bParam2 && func_700() != 0) && func_703(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_703(iParam1) == 2)
	{
		if (!func_697(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1887305[iParam0 /*610*/].f_10.f_34 != func_8())
			{
				return 9;
			}
		}
		if (func_696(iParam0))
		{
			return 10;
		}
	}
	else if (func_694(iParam1))
	{
		if (func_693(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_692(iParam1))
	{
		if (func_691())
		{
			return 13;
		}
		if (func_688())
		{
			return 12;
		}
	}
	if (func_693(iParam0) + 1 < func_687(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_684(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_304(iParam0, 21) || func_304(iParam0, 25))
			{
				return 0;
			}
			break;
	}
	return -1;
}

int func_684(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar1))
		{
			if (!func_685(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_7(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_685(int iParam0, int iParam1, bool bParam2)
{
	if (func_113(iParam1))
	{
		if (!bParam2)
		{
			if (func_686(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1887305[iParam0 /*610*/].f_10 != func_8())
		{
			return iParam1 == Global_1887305[iParam0 /*610*/].f_10;
		}
	}
	return 0;
}

int func_686(int iParam0, int iParam1)
{
	if (iParam1 != func_8())
	{
		if (iParam0 != func_8())
		{
			if (Global_1887305[iParam0 /*610*/].f_10 != func_8())
			{
				if (Global_1887305[iParam0 /*610*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18459;
		
		case 183:
			return Global_262145.f_18467;
		
		case 185:
			return Global_262145.f_18476;
		
		case 182:
			return Global_262145.f_18487;
		
		case 186:
			return Global_262145.f_18496;
		
		case 195:
			return Global_262145.f_18514;
		
		case 198:
			return Global_262145.f_18524;
		
		case 197:
			return Global_262145.f_18536;
		
		case 207:
			return Global_262145.f_18544;
		
		case 209:
			return Global_262145.f_18556;
		
		case 208:
			return Global_262145.f_18564;
		
		case 201:
			return Global_262145.f_18593;
		
		case 211:
			return Global_262145.f_18654;
		
		case 193:
			return Global_262145.f_18676;
		
		case 205:
			return Global_262145.f_18693;
		
		case 189:
			return Global_262145.f_18660;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_688()
{
	if (Global_1943381)
	{
		return 0;
	}
	return func_689();
}

int func_689()
{
	if (func_690())
	{
		return 1;
	}
	return Global_2684504.f_746;
}

bool func_690()
{
	return Global_1575036 == 10;
}

bool func_691()
{
	return Global_262145.f_15623;
}

int func_692(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_693(int iParam0)
{
	if (func_423(iParam0) == func_8())
	{
		return 0;
	}
	return Global_1887305[iParam0 /*610*/].f_10.f_19;
}

int func_694(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_695(iParam0, 0);
	return 0;
}

int func_695(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_696(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar1))
		{
			if ((Global_1887305[iParam0 /*610*/].f_10.f_34 != func_8() && Global_1887305[iParam0 /*610*/].f_10.f_34 == iVar1) && Global_1887305[iVar1 /*610*/].f_10.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_697(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_699() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_698() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_698() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_698()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar2))
		{
			if (func_389(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_699()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar2))
		{
			if (func_715(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_700()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_103;
}

bool func_701()
{
	return Global_1916617.f_11.f_144 != -1;
}

bool func_702()
{
	return Global_1916617.f_11.f_143 != -1;
}

int func_703(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
		case 312:
		case 313:
		case 315:
		case 316:
		case 317:
		case 322:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
		case 337:
		case 338:
		case 339:
		case 340:
			return 0;
		
		case 276:
		case 267:
		case 318:
		case 314:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_704(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_706())
	{
		iVar1 = Global_1887305[iParam0 /*610*/].f_10.f_11[iVar0];
		if (iVar1 != func_8())
		{
			if (unk_0x762604C40829DB72(iVar1))
			{
				if (func_358(iVar1))
				{
					return 7;
				}
				if (func_711(iVar1))
				{
					return 15;
				}
				if (func_705(iVar1))
				{
					return 16;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_705(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (((((BitTest(Global_2657971[iParam0 /*465*/].f_322.f_4, 2) || BitTest(Global_2657971[iParam0 /*465*/].f_322.f_4, 3)) || BitTest(Global_2657971[iParam0 /*465*/].f_322.f_4, 5)) || BitTest(Global_2657971[iParam0 /*465*/].f_322.f_4, 6)) || BitTest(Global_2657971[iParam0 /*465*/].f_322.f_4, 7)) || BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_706()
{
	return (func_707() - 1);
}

int func_707()
{
	return func_708(unk_0x259BE71D8A81D4FA());
}

int func_708(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_113(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == 1)
	{
		return 8;
	}
	return 4;
}

int func_709(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_83(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_259(Global_2657971[iParam0 /*465*/].f_322.f_8) == 23;
			}
		}
	}
	return 0;
}

int func_710(int iParam0)
{
	if (iParam0 != func_8())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_5, 4);
	}
	return 0;
}

int func_711(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return Global_2708056;
	}
	else
	{
		iVar0 = unk_0x56E414973C2A8C0E(iParam0);
		if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_712(int iParam0)
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_13019;
		
		case 155:
			return Global_262145.f_13044;
		
		case 153:
			return Global_262145.f_13008;
		
		case 163:
			return Global_262145.f_12984;
		
		case 160:
			return Global_262145.f_12997;
		
		case 154:
			return Global_262145.f_13054;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_15454;
		
		case 172:
			return Global_262145.f_15472;
		
		case 148:
			return Global_262145.f_18572;
		
		case 179:
			return Global_262145.f_18578;
		
		case 201:
			return Global_262145.f_18590;
		
		case 200:
			return Global_262145.f_18628;
		
		case 211:
			return Global_262145.f_18652;
		
		case 194:
			return Global_262145.f_18664;
		
		case 193:
			return Global_262145.f_18674;
		
		case 210:
			return Global_262145.f_18686;
		
		case 205:
			return Global_262145.f_18691;
		
		case 199:
			return Global_262145.f_18704;
		
		case 249:
			return 1;
		
		case 238:
			return 1;
		
		default:
	}
	return 2147483647;
}

int func_713(int iParam0)
{
	return Global_1916617.f_11.f_147[func_714(iParam0)];
}

int func_714(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 182:
			return 24;
		
		case 183:
			return 25;
		
		case 185:
			return 26;
		
		case 186:
			return 27;
		
		case 189:
			return 28;
		
		case 190:
			return 29;
		
		case 191:
			return 30;
		
		case 192:
			return 31;
		
		case 193:
			return 32;
		
		case 194:
			return 33;
		
		case 195:
			return 34;
		
		case 197:
			return 35;
		
		case 198:
			return 36;
		
		case 199:
			return 37;
		
		case 200:
			return 38;
		
		case 201:
			return 39;
		
		case 205:
			return 40;
		
		case 207:
			return 41;
		
		case 208:
			return 42;
		
		case 209:
			return 43;
		
		case 210:
			return 44;
		
		case 214:
			return 45;
		
		case 215:
			return 46;
		
		case 216:
			return 47;
		
		case 217:
			return 48;
		
		case 218:
			return 49;
		
		case 219:
			return 50;
		
		case 220:
			return 51;
		
		case 221:
			return 52;
		
		case 188:
			return 53;
		
		case 225:
			return 54;
		
		case 226:
			return 55;
		
		case 227:
			return 56;
		
		case 229:
			return 57;
		
		case 230:
			return 58;
		
		case 233:
			return 59;
		
		case 237:
			return 60;
		
		case 238:
			return 61;
		
		case 239:
			return 62;
		
		case 240:
			return 63;
		
		case 241:
			return 64;
		
		case 242:
			return 65;
		
		case 244:
			return 66;
		
		case 248:
			return 67;
		
		case 249:
			return 68;
		
		case 250:
			return 69;
		
		case 243:
			return 70;
		
		case 158:
			return 71;
		
		case 256:
			return 72;
		
		case 258:
			return 73;
		
		case 271:
			return 74;
		
		case 276:
			return 75;
		
		case 277:
			return 76;
		
		case 262:
			return 79;
		
		case 263:
			return 78;
		
		case 264:
			return 77;
		
		case 267:
			return 80;
		
		case 291:
			return 81;
		
		case 292:
			return 82;
		
		case 293:
			return 83;
		
		case 294:
			return 84;
		
		case 295:
			return 85;
		
		case 296:
			return 86;
		
		case 297:
			return 87;
		
		case 298:
			return 88;
		
		case 299:
			return 89;
		
		case 300:
			return 90;
		
		case 301:
			return 91;
		
		case 304:
			return 92;
		
		case 305:
			return 93;
		
		case 306:
			return 94;
		
		case 307:
			return 95;
		
		case 308:
			return 96;
		
		case 309:
			return 97;
		
		case 312:
			return 98;
		
		case 313:
			return 99;
		
		case 314:
			return 100;
		
		case 315:
			return 101;
		
		case 316:
			return 102;
		
		case 317:
			return 103;
		
		case 318:
			return 104;
		
		case 322:
			return 105;
		
		case 323:
			return 106;
		
		case 324:
			return 107;
		
		case 325:
			return 108;
		
		case 326:
			return 109;
		
		case 327:
			return 110;
		
		case 328:
			return 111;
		
		case 329:
			return 112;
		
		case 330:
			return 113;
		
		case 331:
			return 114;
		
		case 332:
			return 115;
		
		case 333:
			return 116;
		
		case 337:
			return 117;
		
		case 338:
			return 118;
		
		case 339:
			return 119;
		
		case 340:
			return 120;
		
		default:
	}
	return -1;
}

bool func_715(int iParam0)
{
	return func_601(iParam0, 1);
}

int func_716(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_724(iParam0, bParam3, bParam4) || func_723(iParam1, bParam3, bParam4)) || func_717(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_717(int iParam0, bool bParam1, bool bParam2)
{
	return func_718(2, iParam0, 0, bParam1, bParam2);
}

int func_718(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_722(iParam0) - func_721(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_721(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_722(iParam0) - func_720(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_721(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_722(iParam0) - func_721(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_719(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_720(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1681448.f_1;
			break;
		
		case 1:
			return Global_1681448.f_2;
			break;
		
		case 2:
			return Global_1681448.f_3;
			break;
	}
	return 0;
}

int func_721(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657971[iVar0 /*465*/].f_220;
			}
			else
			{
				return unk_0xA0522491D076C1E6(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657971[iVar0 /*465*/].f_221;
			}
			else
			{
				return unk_0xF46F370442FAD8F9(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657971[iVar0 /*465*/].f_222;
			}
			else
			{
				return unk_0xD1797191721E17CE(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_722(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1681456;
			break;
		
		case 1:
			return Global_1681457;
			break;
		
		case 2:
			return Global_1681458;
			break;
	}
	return 0;
}

int func_723(int iParam0, bool bParam1, bool bParam2)
{
	return func_718(1, iParam0, 0, bParam1, bParam2);
}

int func_724(int iParam0, bool bParam1, bool bParam2)
{
	return func_718(0, iParam0, 0, bParam1, bParam2);
}

int func_725(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_777(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_775(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_769(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_757(iParam1, iParam2, iParam3, unk_0xB23E0F9B63D009A8(iParam5), iParam4);
		
		case 233:
			return func_750(iParam1, iParam2, iParam3, unk_0xB23E0F9B63D009A8(iParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_741(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		case 237:
		case 250:
			return func_738(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_737(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 1;
		
		case 241:
			return 1;
		
		case 242:
			return 1;
		
		case 244:
			return 4;
		
		case 248:
			return 5;
		
		case 243:
			return func_733(iParam1, iParam2, unk_0xB23E0F9B63D009A8(iParam5), iParam4);
		
		case 158:
			return func_729(iParam1, iParam2, unk_0xB23E0F9B63D009A8(iParam5), iParam4);
		
		case 181:
			return func_726(iParam1, iParam2, unk_0xB23E0F9B63D009A8(iParam5), iParam4);
		
		default:
	}
	return 0;
}

int func_726(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_728(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_727(iParam0, iParam2));
	return iVar0;
}

int func_727(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 5;
		
		default:
	}
	return 1;
}

int func_728(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_729(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_732(iParam0, iParam1, iParam3);
	iVar0 = (iVar0 + func_730(iParam0, iParam2));
	return iVar0;
}

int func_730(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
		
		case 19:
		case 20:
			return 1;
		
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
		
		case 43:
			return 3;
		
		case 16:
			return 4;
		
		case 12:
		case 13:
			if (func_453(iParam1, 1))
			{
				Var0 = { func_731(iParam1) };
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 33:
			return 5;
	}
	return 1;
}

Vector3 func_731(int iParam0)
{
	return Global_1887305[iParam0 /*610*/].f_10.f_307;
}

int func_732(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 24:
			return 1;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
				
				case 31:
				case 32:
					return 9;
				
				default:
			}
			break;
		
		case 36:
			return 0;
		
		case 38:
			return 3;
		
		case 40:
			return 4;
		
		case 41:
			return 4;
		
		case 8:
			return 13;
		
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
				
				case 40:
					return 11;
				
				default:
			}
			break;
		
		case 35:
			return 5;
		
		case 46:
			return 2;
		
		case 9:
			return 8;
		
		case 4:
			return 7;
		
		case 14:
			return 11;
		
		case 17:
			return 8;
		
		case 47:
			return 11;
		
		case 11:
			return 9;
		
		case 18:
			return 13;
		
		case 6:
			return 17;
		
		case 48:
			return 21;
		
		case 33:
			return 5;
		
		case 44:
			return 2;
		
		case 21:
			return 22;
		
		case 22:
			return 12;
		
		case 7:
			return 10;
		
		case 2:
			return 0;
		
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
				
				case 92:
					return 14;
				
				default:
			}
			break;
		
		case 27:
			return 12;
		
		case 23:
			return 17;
		
		case 31:
			return 3;
		
		case 12:
			return 4;
		
		case 3:
			return 2;
		
		case 49:
			return 15;
		
		case 19:
			return 14;
		
		case 50:
			return 12;
		
		case 20:
			return 12;
		
		case 32:
			return 15;
		
		case 30:
			return 6;
		
		case 16:
			return 12;
		
		case 39:
			return 5;
		
		case 42:
			return 3;
		
		case 37:
			return 19;
		
		case 52:
			return 6;
		
		case 15:
			return 2;
		
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
				
				case 70:
					return 12;
				
				default:
			}
			break;
	}
	return 0;
}

int func_733(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_736(iParam0, iParam1, iParam3);
	if (!func_735(iParam0))
	{
		iVar0 = (iVar0 + func_734(iParam0, iParam2));
	}
	return iVar0;
}

int func_734(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
		
		case 6:
			if (func_693(iParam1) + 1 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_735(int iParam0)
{
	return 0;
}

int func_736(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 13:
			return 3;
		
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
				
				case 16:
					return 12;
				
				case 17:
					return 12;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
				
				default:
			}
			break;
		
		case 12:
			return 15;
		
		case 0:
			return 1;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 0;
						
						case 2:
							return 3;
						
						default:
					}
					break;
				
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 2;
						
						case 2:
							return 0;
						
						default:
					}
					break;
				
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 0;
						
						case 2:
							return 0;
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
				
				default:
			}
			return 5;
		
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
				
				case 7:
					return 23;
				
				case 8:
					return 25;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
				
				case 26:
					return 8;
				
				case 27:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 0;
		
		case 4:
			return 3;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_738(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_740(iParam0, iParam1);
	if (func_739(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_739(int iParam0)
{
	return 1;
}

int func_740(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			return 3;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
				
				case 136:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			return 10;
		
		case 18:
			return 3;
		
		case 3:
			return 4;
		
		case 21:
			return 2;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
				
				case 1:
					return 9;
				
				case 2:
					return 8;
				
				case 3:
					return 6;
				
				case 4:
					return 8;
				
				case 5:
					return 8;
				
				case 6:
					return 8;
				
				case 7:
					return 8;
				
				case 8:
					return 8;
				
				case 9:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_741(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_749(iParam0, iParam1);
	if (!func_748(iParam0))
	{
		iVar0 = (iVar0 + func_742(iParam0, func_746() + 1));
	}
	if (iParam0 == 14 || ((((func_748(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_742(iParam0, func_746() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_742(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_745(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_744(iParam0, iParam1);
			iVar2 = func_743(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_748(iParam0))
		{
			if (iVar0 > Global_262145.f_18231)
			{
				iVar0 = Global_262145.f_18231;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_18230)
			{
				iVar0 = Global_262145.f_18230;
			}
			if (iVar0 > Global_262145.f_18229)
			{
				iVar0 = Global_262145.f_18229;
			}
		}
	}
	return iVar0;
}

int func_743(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18268;
		
		case 10:
			return Global_262145.f_18293;
		
		default:
	}
	return 1;
}

int func_744(int iParam0, int iParam1)
{
	if (func_748(iParam0))
	{
		if (iParam1 >= Global_262145.f_18232)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18269;
		
		case 10:
			return Global_262145.f_18294;
		
		default:
	}
	return 8;
}

int func_745(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_746()
{
	if (func_747() == func_8())
	{
		return 0;
	}
	return func_693(func_747());
}

int func_747()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_749(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_750(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_756(iParam0, iParam1, iParam2, iParam4);
	if (!func_755(iParam0))
	{
		if (iParam3 != func_8())
		{
			iVar0 = (iVar0 + func_752(iParam0, func_693(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_751(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_751(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_752(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_755(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_754(iParam0))
	{
		iVar0 = func_754(iParam0);
	}
	else if (iVar0 < func_753(iParam0))
	{
		iVar0 = func_753(iParam0);
	}
	return iVar0;
}

int func_753(int iParam0)
{
	return 1;
}

int func_754(int iParam0)
{
	return 4;
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_756(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_757(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_768(iParam0, iParam1, iParam2, iParam4);
	if (!func_767(iParam0))
	{
		if (iParam3 != func_8())
		{
			iVar0 = (iVar0 + func_759(iParam0, func_693(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_758(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_758(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_759(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_766(iParam0))
	{
		iVar1 = func_765(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_764(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_763(iParam2))
		{
			iVar0 = func_763(iParam2);
		}
	}
	if (iVar0 > func_761(iParam0))
	{
		iVar0 = func_761(iParam0);
	}
	else if (iVar0 < func_760(iParam0))
	{
		iVar0 = func_760(iParam0);
	}
	return iVar0;
}

int func_760(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_761(int iParam0)
{
	if (!func_766(iParam0))
	{
		if (func_767(iParam0))
		{
			if (func_762(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_762(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_763(int iParam0)
{
	if (iParam0 == func_8() || Global_1845281[iParam0 /*883*/].f_268.f_297 == 0)
	{
		return 50;
	}
	return (50 - Global_1845281[iParam0 /*883*/].f_268.f_297.f_3);
}

int func_764(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_765(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_766(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_767(int iParam0)
{
	if (func_766(iParam0) || func_764(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_768(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_769(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_774(iParam0, iParam1, iParam2, iParam3);
	if (!func_773(iParam0))
	{
		iVar0 = (iVar0 + func_771(iParam0, func_746() + 1, -1, iParam2));
	}
	if (func_770(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_770(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_771(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_772(iParam0))
	{
		if (iParam2 <= Global_262145.f_21393)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_21394)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_773(iParam0))
	{
		if (iParam1 < Global_262145.f_21353)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_773(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_774(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_775(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_776(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_776(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_777(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

int func_778(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_820(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_816(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_812(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_806(iParam1, iParam3, iParam4, unk_0xB23E0F9B63D009A8(iParam5), 0, 0, 0);
		
		case 233:
			return func_800(iParam1, iParam3, iParam4, unk_0xB23E0F9B63D009A8(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_799(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		case 237:
		case 250:
			return func_798(iParam1, iParam3, iParam4);
		
		case 238:
		case 249:
			return func_797(iParam1);
		
		case 239:
			return 4;
		
		case 240:
			return 11;
		
		case 241:
			return 3;
		
		case 242:
			return 5;
		
		case 244:
			return 4;
		
		case 248:
			return 1;
		
		case 243:
			return func_791(iParam1, iParam3, unk_0xB23E0F9B63D009A8(iParam5), 0, -1, 0, 0);
		
		case 158:
			return func_785(iParam1, iParam3, unk_0xB23E0F9B63D009A8(iParam5), 0, -1, 0, 0);
		
		case 181:
			return func_779(iParam1, iParam3, unk_0xB23E0F9B63D009A8(iParam5), 0, -1, 0, 0);
		
		default:
	}
	return 0;
}

int func_779(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_784(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_783(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_782(func_693(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_781(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_780(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_780(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_781(int iParam0, int iParam1)
{
	return func_780(iParam0, iParam1) > 0;
}

int func_782(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 2:
			return 3;
		
		default:
	}
	return 1;
}

int func_783(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_784(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		
		default:
	}
	return 0;
}

int func_785(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0++;
			break;
		
		case 24:
			iVar0++;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 89:
					iVar0++;
					break;
				
				case 90:
					iVar0 += 2;
					break;
			}
			break;
		
		case 36:
			iVar0 += 2;
			break;
		
		case 37:
			iVar0 += 2;
			break;
		
		case 38:
			iVar0++;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 38:
					iVar0 += 3;
					break;
				
				case 39:
					iVar0 += 3;
					break;
				
				case 40:
					iVar0 += 4;
					break;
			}
			break;
		
		case 16:
			iVar0 += 12;
			break;
		
		case 35:
			iVar0 += 4;
			break;
		
		case 4:
			iVar0 += 16;
			break;
		
		case 46:
			iVar0++;
			break;
		
		case 9:
			iVar0 += 7;
			break;
		
		case 14:
			iVar0 += 7;
			break;
		
		case 17:
			iVar0 += 7;
			break;
		
		case 47:
			iVar0 += 2;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 6:
			iVar0 += 11;
			break;
		
		case 48:
			iVar0 += 2;
			break;
		
		case 44:
			iVar0 += 2;
			break;
		
		case 21:
			iVar0 += 8;
			break;
		
		case 22:
			iVar0 += 3;
			break;
		
		case 7:
			iVar0 += 7;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 2:
			iVar0++;
			break;
		
		case 34:
			iVar0 += 5;
			break;
		
		case 27:
			iVar0 += 9;
			break;
		
		case 26:
			iVar0 += 3;
			break;
		
		case 31:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 21;
			break;
		
		case 12:
			iVar0 += 20;
			break;
		
		case 41:
			iVar0 += 11;
			break;
		
		case 49:
			iVar0 += 3;
			break;
		
		case 29:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 50:
			iVar0 += 4;
			break;
		
		case 23:
			iVar0 += 4;
			break;
		
		case 20:
			iVar0 += 3;
			break;
		
		case 32:
			iVar0 = iVar0;
			break;
		
		case 51:
			iVar0 += 4;
			break;
		
		case 52:
			iVar0 += 6;
			break;
		
		case 39:
			iVar0 += 2;
			break;
		
		case 40:
			iVar0++;
			break;
		
		case 25:
			iVar0 += 3;
			break;
	}
	if (!bParam5)
	{
		iVar0 = (iVar0 + func_790(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_789(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_788(func_693(iParam2) + 1, iParam0, iParam2));
		}
	}
	if (!bParam3)
	{
		if (func_787(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_786(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_786(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
		
		default:
	}
	return 0;
}

bool func_787(int iParam0, int iParam1)
{
	return func_786(iParam0, iParam1) > 0;
}

int func_788(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	switch (iParam1)
	{
		case 43:
			return 3;
		
		case 17:
		case 18:
		case 15:
			return 2;
		
		case 12:
		case 13:
			if (iParam2 != func_8())
			{
				if (func_453(iParam2, 1))
				{
					Var0 = { func_731(iParam2) };
				}
			}
			else
			{
				return 4;
			}
			if (Var0.f_1 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case 53:
			if (iParam0 == 1)
			{
			}
			break;
	}
	return 1;
}

int func_789(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
		
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
		
		case 93:
		case 94:
		case 95:
			return 3;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		case 116:
		case 117:
			return 2;
		
		case 20:
			return 9;
		
		case 21:
			return 5;
		
		case 27:
		case 28:
		case 29:
			return 7;
		
		case 114:
		case 115:
			return iParam0;
		
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 6;
				
				default:
			}
			break;
		
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
				
				case 1:
					return 6;
				
				default:
			}
			break;
		
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
				
				case 1:
					return 8;
				
				default:
			}
			break;
		
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 2;
				
				default:
			}
			break;
		
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				case 1:
					return 21;
				
				case 2:
					return 22;
				
				case 3:
					return 23;
				
				default:
			}
			break;
		
		case 17:
		case 18:
		case 19:
			return 3;
		
		case 131:
			return 4;
	}
	return -1;
}

int func_790(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 53:
			return 0;
		
		default:
	}
	return 0;
}

int func_791(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 4;
			break;
		
		case 1:
			iVar0 += 10;
			break;
		
		case 15:
			iVar0 += 21;
			break;
		
		case 14:
			iVar0 += 2;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 4;
					break;
				
				case 36:
					iVar0 += 5;
					break;
				
				case 37:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 += 5;
					break;
				
				case 1:
					iVar0 += 5;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0++;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 3;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 4;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 29:
					switch (iParam4)
					{
						case 0:
							iVar0 += 4;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
				
				case 30:
					switch (iParam4)
					{
						case 0:
							iVar0 += 3;
							break;
						
						case 1:
							iVar0 += 3;
							break;
						
						case 2:
							iVar0 += 3;
							break;
					}
					break;
			}
			break;
		
		case 3:
			iVar0 += 6;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 7;
					break;
				
				case 13:
					iVar0 += 10;
					break;
				
				case 14:
					iVar0 += 8;
					break;
			}
			break;
		
		case 2:
			iVar0 += 3;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_735(iParam0))
		{
			iVar0 = (iVar0 + func_734(iParam0, iParam2));
		}
		iVar0 = (iVar0 + func_796(iParam0, -1));
	}
	if (!bParam6)
	{
		if (func_795(0, iParam1) != -1)
		{
			iVar0 = (iVar0 + func_794(func_693(iParam2) + 1, iParam0));
		}
	}
	if (!bParam3)
	{
		if (func_793(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_792(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_792(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

bool func_793(int iParam0, int iParam1)
{
	return func_792(iParam0, iParam1) > 0;
}

int func_794(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_795(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
				
				default:
			}
			break;
		
		case 35:
		case 36:
		case 37:
			return 0;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		case 28:
		case 29:
		case 30:
			return 0;
		
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 3;
				
				default:
			}
			break;
		
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
		
		case 38:
		case 39:
		case 40:
			return 0;
		
		case 12:
			return 6;
		
		case 13:
			return 9;
		
		case 14:
			return 7;
		
		case 22:
		case 23:
		case 24:
			return 0;
		
		case 25:
		case 26:
		case 27:
			return 0;
	}
	return -1;
}

int func_796(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		default:
	}
	return 0;
}

int func_797(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 4;
		
		case 2:
			return 6;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_798(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					iVar0++;
					break;
				
				case 81:
					iVar0++;
					break;
				
				case 82:
					iVar0++;
					break;
			}
			break;
		
		case 22:
			iVar0 += 4;
			break;
		
		case 18:
			iVar0 += 4;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 3;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0++;
			break;
		
		case 20:
			iVar0 += 4;
			break;
		
		case 17:
			iVar0++;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 16:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 8;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 8;
			break;
		
		case 4:
		case 24:
		case 2:
			iVar0++;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 5:
			iVar0 += 3;
			break;
		
		case 0:
			iVar0 += 3;
			break;
	}
	if (func_739(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_799(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case 79:
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_748(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_742(iParam0, func_746() + 1));
	}
	return iVar0;
}

int func_800(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_755(iParam0))
		{
			if (iParam3 != func_8())
			{
				iVar0 = (iVar0 + func_752(iParam0, func_693(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_8())
		{
			iVar0 = (iVar0 + func_805(iParam0, func_693(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_804(0, iParam1) != -1)
		{
			if (iParam3 != func_8())
			{
				iVar0 = (iVar0 + func_803(func_693(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_802(iParam0))
		{
			iVar0 = (iVar0 + func_801(iParam0));
		}
	}
	return iVar0;
}

int func_801(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_802(int iParam0)
{
	return func_801(iParam0) > 0;
}

int func_803(var uParam0, int iParam1)
{
	return 2;
}

int func_804(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_805(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			iVar0 = func_90(5329, -1);
			if (BitTest(iVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_806(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_767(iParam0))
		{
			if (iParam3 != func_8())
			{
				iVar0 = (iVar0 + func_759(iParam0, func_693(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_8())
		{
			iVar0 = (iVar0 + func_811(iParam0, func_693(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_810(0, iParam1) != -1)
		{
			if (iParam3 != func_8())
			{
				iVar0 = (iVar0 + func_809(func_693(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_808(iParam0))
		{
			iVar0 = (iVar0 + func_807(iParam0));
		}
	}
	return iVar0;
}

int func_807(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_808(int iParam0)
{
	return func_807(iParam0) > 0;
}

int func_809(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_762(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_762(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_762(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_762(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_762(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_762(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_762(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_762(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_810(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
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
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
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
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
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
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_811(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return system::ceil((IntToFloat(iParam1) / 2f));
}

int func_812(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_771(iParam0, func_746() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_773(iParam0))
		{
			iVar0 = (iVar0 + func_771(iParam0, func_746() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_815(iParam0, func_746() + 1));
	}
	if (!bParam3)
	{
		if (func_814(iParam0))
		{
			iVar0 = (iVar0 + func_813(iParam0));
		}
	}
	return iVar0;
}

int func_813(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_814(int iParam0)
{
	return func_813(iParam0) > 0;
}

int func_815(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return system::floor((IntToFloat(iParam1) / 1,5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return system::floor((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_816(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_819(iParam0, func_746() + 1, iParam2));
	iVar0 = (iVar0 + func_817(iParam0));
	return iVar0;
}

int func_817(int iParam0)
{
	if (func_818(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_818(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_819(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_820(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_821(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_848(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_845(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_842(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_839(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_836(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_835(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_834();
		
		case 218:
			return func_833();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 237:
		case 250:
			return func_832(iParam1, iParam2, iParam3);
		
		case 238:
		case 249:
			return func_831(iParam1, iParam2);
		
		case 239:
			return 6;
		
		case 240:
			return 11;
		
		case 241:
			return 14;
		
		case 242:
			return 14;
		
		case 244:
			return 9;
		
		case 248:
			return 10;
		
		case 243:
			return func_828(iParam1, iParam2, 0, -1);
		
		case 158:
			return func_825(iParam1, iParam2, 0, -1);
		
		case 181:
			return func_822(iParam1, iParam2, 0, -1);
		
		default:
	}
	return 0;
}

int func_822(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			iVar0 += 6;
			break;
	}
	if (!bParam2)
	{
		if (func_781(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_823(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_823(int iParam0, var uParam1)
{
	if (func_781(iParam0, uParam1))
	{
		return (func_780(iParam0, uParam1) + func_824(iParam0, uParam1));
	}
	return 0;
}

int func_824(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_825(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 += 6;
			break;
		
		case 24:
			iVar0 += 2;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 30:
					iVar0 += 12;
					break;
				
				case 31:
				case 32:
					iVar0 += 10;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 88:
					iVar0 += 10;
					break;
				
				case 89:
					iVar0 += 9;
					break;
				
				case 90:
					iVar0 += 10;
					break;
			}
			break;
		
		case 36:
			iVar0 += 9;
			break;
		
		case 43:
			iVar0 += 6;
			break;
		
		case 38:
			iVar0 += 6;
			break;
		
		case 40:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 += 16;
			break;
		
		case 16:
			iVar0 += 14;
			break;
		
		case 35:
			iVar0 += 13;
			break;
		
		case 4:
			iVar0 += 32;
			break;
		
		case 45:
			iVar0 += 2;
			break;
		
		case 46:
			iVar0 += 9;
			break;
		
		case 9:
			iVar0 += 15;
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 17:
			iVar0 += 14;
			break;
		
		case 47:
			iVar0 += 13;
			break;
		
		case 11:
			iVar0 += 11;
			break;
		
		case 18:
			iVar0 += 24;
			break;
		
		case 6:
			iVar0 += 14;
			break;
		
		case 48:
			iVar0 += 15;
			break;
		
		case 44:
			iVar0 += 9;
			break;
		
		case 21:
			iVar0 += 20;
			break;
		
		case 22:
			iVar0 += 14;
			break;
		
		case 7:
			iVar0 += 22;
			break;
		
		case 15:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 34:
			iVar0 += 18;
			break;
		
		case 27:
			iVar0 += 16;
			break;
		
		case 26:
			iVar0 += 10;
			break;
		
		case 23:
			iVar0 += 10;
			break;
		
		case 31:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 14;
			break;
		
		case 12:
			iVar0 += 7;
			break;
		
		case 41:
			iVar0 += 10;
			break;
		
		case 49:
			iVar0 += 30;
			break;
		
		case 19:
			iVar0 += 15;
			break;
		
		case 5:
			iVar0 += 7;
			break;
		
		case 30:
			iVar0++;
			break;
		
		case 13:
			iVar0 += 20;
			break;
		
		case 29:
			iVar0 += 9;
			break;
		
		case 50:
			iVar0 += 24;
			break;
		
		case 20:
			iVar0 += 26;
			break;
		
		case 32:
			iVar0 += 30;
			break;
		
		case 28:
			iVar0 += 3;
			break;
		
		case 42:
			iVar0 += 13;
			break;
		
		case 52:
			iVar0 += 12;
			break;
		
		case 39:
			iVar0 += 5;
			break;
		
		case 37:
			iVar0 += 6;
			break;
		
		case 25:
			iVar0 += 6;
			break;
		
		case 51:
			iVar0 += 20;
			break;
	}
	if (!bParam2)
	{
		if (func_787(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_826(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_826(int iParam0, int iParam1)
{
	if (func_787(iParam0, iParam1))
	{
		return (func_786(iParam0, iParam1) + func_827(iParam0, iParam1));
	}
	return 0;
}

int func_827(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
		
		case 6:
		case 50:
		case 47:
			return 4;
		
		case 27:
			return 2;
		
		default:
	}
	return 0;
}

int func_828(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 13:
			iVar0 += 8;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 2:
					iVar0 += 10;
					break;
				
				case 3:
					iVar0 += 10;
					break;
				
				case 4:
					iVar0 += 14;
					break;
				
				case 5:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			iVar0 += 20;
			break;
		
		case 14:
			iVar0 += 19;
			break;
		
		case 11:
			switch (iParam1)
			{
				case 35:
					iVar0 += 6;
					break;
				
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 17;
					break;
			}
			break;
		
		case 6:
			iVar0 += 8;
			break;
		
		case 5:
			iVar0 += 11;
			break;
		
		case 0:
			iVar0 += 12;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 31:
					iVar0++;
					break;
				
				case 32:
					iVar0 += 7;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 12:
			iVar0 += 30;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 28:
					iVar0 += 10;
					break;
				
				case 29:
					iVar0 += 8;
					break;
				
				case 30:
					iVar0 += 9;
					break;
			}
			break;
		
		case 3:
			iVar0 += 19;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 12:
					iVar0 += 12;
					break;
				
				case 13:
					iVar0 += 14;
					break;
				
				case 14:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 8:
			iVar0 += 7;
			break;
		
		case 7:
			iVar0++;
			break;
	}
	if (!bParam2)
	{
		if (func_793(iParam0, iParam1))
		{
			iVar0 = (iVar0 + func_829(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_829(int iParam0, int iParam1)
{
	if (func_793(iParam0, iParam1))
	{
		return (func_792(iParam0, iParam1) + func_830(iParam0, iParam1));
	}
	return 0;
}

int func_830(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
		
		default:
	}
	switch (iParam1)
	{
		case 37:
			return 2;
		
		default:
	}
	return 0;
}

int func_831(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 14;
		
		case 1:
			return 7;
		
		case 2:
			return 27;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
				
				case 1:
					return 9;
				
				default:
			}
			break;
	}
	return 0;
}

int func_832(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					iVar0 += 19;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					iVar0 += 2;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					iVar0 += 9;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					iVar0 += 3;
					break;
			}
			break;
		
		case 22:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0++;
			break;
		
		case 23:
			iVar0 += 3;
			break;
		
		case 20:
			iVar0 += 12;
			break;
		
		case 18:
			iVar0 += 20;
			break;
		
		case 17:
			iVar0 += 9;
			break;
		
		case 19:
			iVar0++;
			break;
		
		case 3:
			iVar0 += 5;
			break;
		
		case 14:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 17;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 1:
			iVar0 += 30;
			break;
		
		case 2:
			iVar0 += 4;
			break;
		
		case 5:
			iVar0 += 16;
			break;
	}
	return iVar0;
}

int func_833()
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_834()
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_835(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case 79:
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_742(iParam0, func_746() + 1));
	}
	return iVar0;
}

int func_836(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_802(iParam0))
		{
			iVar0 = (iVar0 + func_837(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_837(int iParam0, var uParam1)
{
	if (func_802(iParam0))
	{
		return (func_801(iParam0) + func_838(iParam0, uParam1));
	}
	return 0;
}

int func_838(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_839(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_808(iParam0))
		{
			iVar0 = (iVar0 + func_840(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_840(int iParam0, int iParam1)
{
	if (func_808(iParam0))
	{
		return (func_807(iParam0) + func_841(iParam0, iParam1));
	}
	return 0;
}

int func_841(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_842(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_814(iParam0))
		{
			iVar0 = (iVar0 + func_843(iParam0));
		}
	}
	return iVar0;
}

int func_843(int iParam0)
{
	if (func_814(iParam0))
	{
		return (func_813(iParam0) + func_844(iParam0));
	}
	return 0;
}

int func_844(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_845(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_846(iParam0));
	return iVar0;
}

int func_846(int iParam0)
{
	if (func_818(iParam0))
	{
		if (func_847(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_847(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_848(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

void func_849()
{
	bool bVar0;
	
	func_82(0, 0);
	func_81("MPCT_CASINO_M");
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	bVar0 = true;
	if (Global_262145.f_26668 || !func_850())
	{
		bVar0 = false;
	}
	func_63(0, "MPCT_CASINO_M_R", 0, bVar0, 0, 0, 0);
	bVar0 = true;
	if (Global_262145.f_26669 || !BitTest(uLocal_199, 1))
	{
		bVar0 = false;
	}
	func_63(1, "MPCT_CASINO_M_L", 0, bVar0, 0, 0, 0);
	bVar0 = true;
	if (Global_262145.f_26670 || !BitTest(uLocal_199, 2))
	{
		bVar0 = false;
	}
	func_63(2, "MPCT_CASINO_M_V", 0, bVar0, 0, 0, 0);
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	func_381(Local_130.f_181.f_69, 1, 1);
	Local_130.f_181.f_2 = 3;
}

int func_850()
{
	int iVar0;
	
	if (func_852())
	{
		bLocal_741 = true;
		return 0;
	}
	else
	{
		bLocal_741 = false;
	}
	if (func_279(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		return 0;
	}
	if (!func_388())
	{
		return 0;
	}
	if (func_290(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	iVar0 = func_683(unk_0x259BE71D8A81D4FA(), 243, 0);
	if (iVar0 != -1)
	{
		return 0;
	}
	if (func_851())
	{
		return 0;
	}
	return 1;
}

bool func_851()
{
	return BitTest(Global_2738934.f_1861, 17);
}

int func_852()
{
	if (func_122(&Global_1964458) && !func_120(&Global_1964458, Global_262145.f_26794, 0))
	{
		return 1;
	}
	return 0;
}

void func_853(bool bParam0)
{
	unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_6), iParam0);
}

int func_854()
{
	char* sVar0;
	
	if (Local_197.f_0 == -1)
	{
		if (func_860() != -1)
		{
			Local_197.f_0 = func_860();
		}
	}
	if (Local_197.f_1 == -1)
	{
		if (func_860() != -1)
		{
			Local_197.f_1 = func_859();
		}
	}
	if (Local_197.f_3)
	{
		if (!func_26())
		{
			return 1;
		}
	}
	else if (!func_26())
	{
		if (!Local_197.f_2)
		{
			if ((func_302(unk_0x259BE71D8A81D4FA()) == 243 && func_290(unk_0x259BE71D8A81D4FA())) && Local_197.f_0 != -1)
			{
				sVar0 = func_856(243, Local_197.f_0, Local_197.f_1);
				func_1(Local_130.f_1, "CAGTAU", sVar0, &Local_176, 0);
				Local_197.f_2 = 1;
				func_95(&(Local_197.f_4), 0, 0);
			}
			else if (func_120(&(Local_197.f_4), 10000, 0))
			{
				func_855();
				return 1;
			}
		}
		else if (func_120(&(Local_197.f_4), 3000, 0))
		{
			return 1;
		}
	}
	else if (Local_197.f_2)
	{
		Local_197.f_3 = 1;
	}
	return 0;
}

void func_855()
{
	func_1(Local_130.f_1, "CAGTAU", "CAGT_PM_4", &Local_176, 0);
}

char* func_856(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_857(unk_0x259BE71D8A81D4FA());
	switch (iParam0)
	{
		case 249:
			switch (iParam1)
			{
				case 2:
					switch (iVar0)
					{
						case 0:
							return "BATFM_SMSA1";
						
						case 1:
							return "BATFM_SMDA1";
						
						case 2:
							return "BATFM_SMTA1";
						
						case 3:
							return "BATFM_SMBA1";
						
						default:
					}
					break;
				
				case 3:
					switch (iVar0)
					{
						case 0:
							return "BATFM_CFSA1";
						
						case 1:
							return "BATFM_CFDA1";
						
						case 2:
							return "BATFM_CFTA1";
						
						case 3:
							return "BATFM_CFBA1";
						
						default:
					}
					break;
				
				case 4:
					switch (iVar0)
					{
						case 0:
							return "BATFM_MESA1";
						
						case 1:
							return "BATFM_MEDA1";
						
						case 2:
							return "BATFM_META1";
						
						case 3:
							return "BATFM_MEBA1";
						
						default:
					}
					break;
				
				case 5:
					switch (iVar0)
					{
						case 0:
							return "BATFM_HUSA1";
						
						case 1:
							return "BATFM_HUDA1";
						
						case 2:
							return "BATFM_HUTA1";
						
						case 3:
							return "BATFM_HUBA1";
						
						default:
					}
					break;
			}
			break;
		
		case 237:
			switch (iParam1)
			{
				case 2:
					return "BATFM_SBOA";
				
				case 3:
					return "BATFM_CLOA";
				
				case 5:
					return "BATFM_HKOA";
				
				default:
			}
			break;
		
		case 243:
			if (Global_2738934.f_5249.f_344 == -1)
			{
				Global_2738934.f_5249.f_344 = unk_0xC5935DFB3F39785A(0, 2);
			}
			switch (Global_2738934.f_5249.f_344)
			{
				case 0:
					switch (iParam1)
					{
						case 6:
							if (func_746() == 0)
							{
								return "CAGT_HR_OC1";
							}
							else
							{
								return "CAGT_HR_OCM1";
							}
							break;
						
						case 7:
							return "CAGT_HT_OC1";
						
						case 11:
							switch (iParam2)
							{
								case 35:
								case 36:
									return "CAGT_RL_OPS1";
								
								case 37:
									return "CAGT_RL_OVG1";
								
								default:
							}
							break;
						
						case 15:
							return "CAGT_UI_OC1";
						
						case 9:
							return "CAGT_MD_OC1";
						
						case 13:
							return "CAGT_SP_OC1";
						
						case 4:
							return "CAGT_ED_OC1";
						
						case 14:
							return "CAGT_TC_OC1";
						
						case 8:
							return "CAGT_IJ_OC1";
						
						case 5:
							return "CAGT_HE_OC1";
						
						case 3:
							return "CAGT_DC_OC1";
						
						case 0:
							return "CAGT_BP_OC1";
						
						case 12:
							return "CAGT_SM_OC1";
						
						case 2:
							return "CAGT_CC_OC1";
						
						case 1:
							return "CAGT_BD_OC1";
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 6:
							if (func_746() == 0)
							{
								return "CAGT_HR_OC2";
							}
							else
							{
								return "CAGT_HR_OCM2";
							}
							break;
						
						case 7:
							return "CAGT_HT_OC2";
						
						case 11:
							switch (iParam2)
							{
								case 35:
								case 36:
									return "CAGT_RL_OPS2";
								
								case 37:
									return "CAGT_RL_OVG1";
								
								default:
							}
							break;
						
						case 15:
							return "CAGT_UI_OC2";
						
						case 9:
							return "CAGT_MD_OC2";
						
						case 13:
							return "CAGT_SP_OC2";
						
						case 4:
							return "CAGT_ED_OC2";
						
						case 14:
							return "CAGT_TC_OC2";
						
						case 8:
							return "CAGT_IJ_OC2";
						
						case 5:
							return "CAGT_HE_OC2";
						
						case 3:
							return "CAGT_DC_OC2";
						
						case 0:
							return "CAGT_BP_OC2";
						
						case 12:
							return "CAGT_SM_OC2";
						
						case 2:
							return "CAGT_CC_OC2";
						
						case 1:
							return "CAGT_BD_OC2";
					}
					break;
			}
			break;
		
		case 258:
			switch (iParam1)
			{
				case 0:
					return "HS4ED_SCAM1";
				
				case 1:
					return "HS4ED_PAM1";
				
				case 2:
					return "HS4ED_CSAM1";
				
				default:
			}
			break;
		
		case 339:
			switch (iParam1)
			{
				case 0:
					switch (unk_0xC5935DFB3F39785A(0, 3))
					{
						case 0:
							return "S24V_WAB_1A";
						
						case 1:
							return "S24V_WAB_1B";
						
						case 2:
							return "S24V_WAB_1C";
						
						default:
					}
					break;
				
				case 1:
					switch (unk_0xC5935DFB3F39785A(0, 3))
					{
						case 0:
							return "S24V_WAC_1A";
						
						case 1:
							return "S24V_WAC_1B";
						
						case 2:
							return "S24V_WAC_1C";
						
						default:
					}
					break;
				
				case 2:
					switch (unk_0xC5935DFB3F39785A(0, 3))
					{
						case 0:
							return "S24V_WAD_1A";
						
						case 1:
							return "S24V_WAD_1B";
						
						case 2:
							return "S24V_WAD_1C";
						
						default:
					}
					break;
				
				case 3:
					switch (unk_0xC5935DFB3F39785A(0, 3))
					{
						case 0:
							return "S24V_WAV_1A";
						
						case 1:
							return "S24V_WAV_1B";
						
						case 2:
							return "S24V_WAV_1C";
						
						default:
					}
					break;
			}
			break;
	}
	return "BATFM_SMSA1";
}

int func_857(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_858(iParam0, 0))
	{
		iVar0 = 0;
	}
	else if (func_858(iParam0, 1))
	{
		iVar0 = 1;
	}
	else if (func_858(iParam0, 2))
	{
		iVar0 = 2;
	}
	else if (func_858(iParam0, 3))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_858(int iParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x834C960822A4683F())
	{
		return Global_4718592.f_178423.f_6 == iParam1;
	}
	if (iParam0 == func_8() || iParam1 == -1)
	{
		return 0;
	}
	uVar0 = iParam1 + 20;
	return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_358.f_1, uVar0);
}

var func_859()
{
	return Global_2738934.f_5249.f_348;
}

int func_860()
{
	return Global_2738934.f_5249.f_347;
}

void func_861()
{
	if (!BitTest(uLocal_199, 0))
	{
		if (Local_130.f_178 == 23)
		{
			if (!BitTest(uLocal_199, 1))
			{
				if (func_518(59) < 0 && func_865())
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_199, true);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_199, false);
				}
			}
			else if (func_518(59) > 0 || !func_865())
			{
				unk_0x8744D2E3FC95740E(&uLocal_199, true);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_199, false);
			}
		}
		if (Local_130.f_178 == 23 || Local_130.f_178 == 24)
		{
			if (!BitTest(uLocal_199, 2))
			{
				if (func_518(60) < 0 && func_862())
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_199, 2);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_199, false);
				}
			}
			else if (func_518(60) > 0 || !func_862())
			{
				unk_0x8744D2E3FC95740E(&uLocal_199, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_199, false);
			}
		}
	}
}

int func_862()
{
	if (func_453(unk_0x259BE71D8A81D4FA(), 0))
	{
		return 0;
	}
	if (!func_534())
	{
		return 0;
	}
	if (func_864(unk_0x259BE71D8A81D4FA()))
	{
		if (!func_863(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	return 1;
}

bool func_863(int iParam0)
{
	return func_521(iParam0, 11);
}

bool func_864(int iParam0)
{
	return func_521(iParam0, 9);
}

int func_865()
{
	if (func_518(59) > 0)
	{
		return 0;
	}
	if (func_453(unk_0x259BE71D8A81D4FA(), 0))
	{
		return 0;
	}
	if (!func_534())
	{
		return 0;
	}
	if (func_867(unk_0x259BE71D8A81D4FA()))
	{
		if (!func_866(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	return 1;
}

bool func_866(int iParam0)
{
	return func_521(iParam0, 7);
}

bool func_867(int iParam0)
{
	return func_521(iParam0, 3);
}

void func_868()
{
	switch (Local_130.f_178)
	{
		case 20:
			if (func_84(0, -1, 1))
			{
				if ((!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2)) || func_958())
				{
					func_957();
					unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
					func_125();
				}
				else
				{
					func_125();
				}
			}
			break;
		
		case 21:
			if (func_84(0, -1, 0))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					if (func_869())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
						func_125();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_125();
				}
			}
			break;
	}
}

int func_869()
{
	func_870();
	func_61(-1);
	if (unk_0xAE231F549813BBDF(2))
	{
		func_383(237, "BB_SELECT", -1, 0);
		func_383(238, "BB_BACK", -1, 0);
	}
	else
	{
		func_382(176, "BB_SELECT", -1);
		func_382(177, "BB_BACK", -1);
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	func_381(Local_130.f_181.f_69, 1, 1);
	Local_130.f_181.f_2 = 4;
	return 1;
}

void func_870()
{
	int iVar0;
	
	func_82(0, 0);
	func_81("MPCT_PA_HEL");
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_63(iVar0, func_955(func_956(iVar0)), 0, func_871(iVar0), 0, 0, 0);
		iVar0++;
	}
}

bool func_871(int iParam0)
{
	return func_872(func_956(iParam0), 0);
}

int func_872(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_954())
	{
		if (iParam0 == 200)
		{
			iVar1 = 0;
			while (iVar1 < 47)
			{
				iVar0 = func_873(iParam0, iVar1);
				if (iVar0 > -1)
				{
					if (BitTest(Global_2359296[func_177() /*5570*/].f_1[(iVar0 / 32)], (iVar0 % 32)))
					{
						return 1;
					}
				}
				iVar1++;
			}
		}
		else
		{
			iVar0 = func_873(iParam0, iParam1);
			if (iVar0 > -1)
			{
				return BitTest(Global_2359296[func_177() /*5570*/].f_1[(iVar0 / 32)], (iVar0 % 32));
			}
		}
	}
	return 0;
}

int func_873(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_874(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_874(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			if (iParam1 == 2)
			{
				return 132;
			}
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		case 480:
			return 123;
		
		case 482:
			return 124;
		
		case 483:
			return 125;
		
		case 518:
			return 126;
			break;
		
		case 531:
			return 127;
			break;
		
		case 533:
			return 128;
			break;
		
		case 527:
			return 129;
			break;
		
		case 525:
			return 130;
		
		case 583:
			return 131;
		
		case 617:
			return 133;
			break;
		
		case 631:
			return 134;
			break;
		
		case 632:
			return 135;
			break;
	}
	return -1;
}

int func_874(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = func_952(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0xFE087BC8EB584AA2())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_951() && func_950())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0x76CD105BCAC6EB9F()) || (iParam0 == 207 && unk_0x76CD105BCAC6EB9F())) || (iParam0 == 208 && unk_0x76CD105BCAC6EB9F())) || (iParam0 == 209 && unk_0x76CD105BCAC6EB9F()))
	{
		if (func_951())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_949(iParam0))
	{
		if (Global_78086)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_948(iVar0);
	if (iVar1 != -1)
	{
		if (func_946(func_947(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_945(iParam0))
	{
		if (func_951())
		{
			if ((iParam0 == 205 && Global_262145.f_19962) || (iParam0 != 205 && Global_262145.f_19961))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_944(iParam0))
	{
		if (func_938(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_937(iVar0);
	if (iVar2 != -1)
	{
		if (func_935(func_936(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_934(iVar0);
	if (iVar3 > 0)
	{
		if (func_932(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_931(iVar0);
	if (iVar4 != -1)
	{
		if (func_929(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_928(iVar0);
	if (iVar5 != -1)
	{
		if (func_926(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_925(iVar0);
	if (iVar6 != -1)
	{
		if (func_921(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == joaat("firetruk") || iVar0 == joaat("boxville")) || iVar0 == joaat("stockade"))
	{
		if (func_920(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar7 = func_919(iVar0);
	if (iVar7 != -1)
	{
		if (func_920(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar8 = func_918(iVar0);
	if (iVar8 != -1)
	{
		if (func_911(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar9 = func_910(iVar0);
	if (iVar9 != -1)
	{
		if (func_908(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar10 = func_907(iVar0);
	if (iVar10 != -1)
	{
		if (func_899(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar11 = func_898(iVar0);
	if (iVar11 != -1)
	{
		if (func_895(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar12 = func_894(iVar0);
	if (iVar12 != -1 || iVar0 == joaat("brickade2"))
	{
		if (func_889(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar13 = func_888(iVar0);
	if (iVar13 != -1)
	{
		if (func_884(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == joaat("riot") || iVar0 == joaat("boxville6")) || iVar0 == joaat("benson2"))
	{
		if (func_878(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar14 = func_877(iVar0);
	if (iVar14 != -1)
	{
		if (func_878(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar15 = func_876(iVar0);
	if (iVar15 != -1)
	{
		if (func_875(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_875(int iParam0)
{
	if (!Global_79389)
	{
		return 0;
	}
	switch (iParam0)
	{
		case -773802025:
			return func_239(42281, -1);
		
		case -1628000569:
			return func_239(42282, -1);
		
		case 1737348074:
			return func_628(137, func_57()) >= 5;
		
		case 1249425552:
			return func_239(42283, -1);
		
		case 1452003510:
			return func_239(42284, -1);
		
		case 1968807591:
			return func_239(42280, -1);
		
		default:
	}
	return 0;
}

int func_876(int iParam0)
{
	switch (iParam0)
	{
		case -773802025:
			return 0;
		
		case -1628000569:
			return 1;
		
		case 1737348074:
			return 2;
		
		case 1249425552:
			return 3;
		
		case 1452003510:
			return 4;
		
		case 1968807591:
			return 5;
		
		default:
	}
	return -1;
}

int func_877(int iParam0)
{
	switch (iParam0)
	{
		case joaat("polgauntlet"):
			return 0;
		
		case joaat("police4"):
			return 1;
		
		case joaat("police5"):
			return 2;
		
		case joaat("riot"):
			return 3;
		
		case joaat("boxville6"):
			return 4;
		
		case joaat("benson2"):
			return 5;
		
		default:
	}
	return -1;
}

int func_878(int iParam0)
{
	if (!Global_79389)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("polgauntlet"):
			return func_882(1);
		
		case joaat("police4"):
			return func_372(1, 0, 1);
		
		case joaat("police5"):
			return (func_879() || func_239(41942, -1));
		
		case joaat("riot"):
			return func_239(42123, -1);
		
		case joaat("boxville6"):
			return func_239(42233, -1);
		
		case joaat("benson2"):
			return func_239(42234, -1);
		
		default:
	}
	return 0;
}

int func_879()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_880(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_880(int iParam0)
{
	return func_239(func_881(iParam0), -1);
}

int func_881(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 32319;
		
		case 1:
			return 32320;
		
		case 2:
			return 32321;
		
		case 3:
			return 32322;
		
		case 4:
			return 32323;
		
		default:
	}
	return 51556;
}

int func_882(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_90(12033, -1), 12);
	}
	return func_883(unk_0x259BE71D8A81D4FA());
}

int func_883(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_71, 12);
	}
	return 0;
}

int func_884(int iParam0)
{
	if (!Global_79389)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("raiju"):
			return func_885(2, 1, 1);
		
		case joaat("squaddie"):
			return func_239(41656, -1);
		
		case joaat("manchez2"):
			return func_239(41671, -1);
		
		default:
	}
	return 0;
}

int func_885(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return BitTest(func_90(11950, -1), func_887(iParam0, bParam1));
	}
	return func_886(unk_0x259BE71D8A81D4FA(), iParam0, bParam1);
}

int func_886(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_60.f_1, func_887(iParam1, bParam2));
	}
	return 0;
}

int func_887(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			
			case 1:
				return 1;
			
			case 2:
				return 2;
			
			case 3:
				return 3;
			
			case 4:
				return 4;
			
			case 5:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 6;
			
			case 1:
				return 7;
			
			case 2:
				return 8;
			
			case 3:
				return 9;
			
			case 4:
				return 10;
			
			case 5:
				return 11;
			}
		
		default:
	}
	return -1;
}

int func_888(int iParam0)
{
	switch (iParam0)
	{
		case joaat("raiju"):
			return 0;
		
		case joaat("squaddie"):
			return 1;
		
		case joaat("manchez2"):
			return 2;
		
		default:
	}
	return -1;
}

int func_889(int iParam0)
{
	if (!Global_79389)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("journey2"):
			return func_456(0, 0);
		
		case joaat("surfer3"):
			return func_456(4, 0);
		
		case joaat("virtue"):
			return func_456(10, 0);
		
		case joaat("hotring"):
			return func_90(11845, -1) >= 10;
		
		case joaat("everon2"):
			return func_90(11845, -1) >= 20;
		
		case joaat("taxi"):
			return func_892(158, -1);
		
		case joaat("brickade2"):
			return func_890(0);
		
		default:
	}
	return 0;
}

int func_890(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_90(10872, -1), 0);
	}
	return func_891(unk_0x259BE71D8A81D4FA());
}

int func_891(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_57.f_2, 0);
	}
	return 0;
}

int func_892(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_893(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_893(int iParam0, int iParam1)
{
	return unk_0xD69CE161FE614531(10, uParam0, func_56(iParam1));
}

int func_894(int iParam0)
{
	switch (iParam0)
	{
		case joaat("journey2"):
			return 0;
		
		case joaat("surfer3"):
			return 1;
		
		case joaat("virtue"):
			return 2;
		
		case joaat("hotring"):
			return 3;
		
		case joaat("everon2"):
			return 4;
		
		case joaat("taxi"):
			return 5;
		
		case joaat("brickade2"):
			return 6;
		
		default:
	}
	return -1;
}

int func_895(int iParam0)
{
	if (!Global_79389)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("kanjosj"):
			return func_239(34373, -1);
		
		case joaat("postlude"):
			return func_239(34374, -1);
		
		case joaat("greenwood"):
			return func_896(0);
		
		case joaat("draugur"):
			return (func_239(32366, -1) || func_885(0, 1, 1));
		
		case joaat("conada"):
			return func_896(5);
		
		default:
	}
	return 0;
}

var func_896(int iParam0)
{
	return BitTest(func_90(10394, -1), func_897(iParam0, 1));
}

int func_897(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			
			case 1:
				return 1;
			
			case 2:
				return 2;
			
			case 3:
				return 3;
			
			case 4:
				return 4;
			
			case 5:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 7;
			
			case 1:
				return 8;
			
			case 2:
				return 9;
			
			case 3:
				return 10;
			
			case 4:
				return 11;
			
			case 5:
				return 12;
			}
		
		default:
	}
	return -1;
}

int func_898(int iParam0)
{
	switch (iParam0)
	{
		case joaat("kanjosj"):
			return 0;
		
		case joaat("postlude"):
			return 1;
		
		case joaat("greenwood"):
			return 2;
		
		case joaat("draugur"):
			return 3;
		
		case joaat("conada"):
			return 4;
		
		default:
	}
	return -1;
}

int func_899(int iParam0)
{
	if (!Global_79389)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("buffalo4"):
			return func_906();
		
		case joaat("granger2"):
			return func_904(1) >= 5;
		
		case joaat("deity"):
			return func_904(1) >= 10;
		
		case joaat("patriot3"):
			return func_904(1) >= 15;
		
		case joaat("jubilee"):
			return func_904(1) >= 20;
		
		case joaat("champion"):
			return (func_902(11, 1) || func_900(1));
		
		case joaat("baller7"):
			return func_900(1);
		
		default:
	}
	return 0;
}

int func_900(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_90(9905, -1), 2);
	}
	return func_901(unk_0x259BE71D8A81D4FA());
}

int func_901(int iParam0)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_27, 2);
	}
	return 0;
}

int func_902(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return BitTest(func_90(9907, -1), iParam0);
	}
	return func_903(unk_0x259BE71D8A81D4FA(), iParam0);
}

int func_903(int iParam0, var uParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975605[iParam0 /*111*/].f_27.f_3, uParam1);
	}
	return 0;
}

int func_904(bool bParam0)
{
	if (bParam0)
	{
		return func_90(9910, -1);
	}
	return func_905(unk_0x259BE71D8A81D4FA());
}

int func_905(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_1975605[iParam0 /*111*/].f_27.f_8;
	}
	return 0;
}

bool func_906()
{
	return func_90(9903, func_56(-1)) != 0;
}

int func_907(int iParam0)
{
	switch (iParam0)
	{
		case joaat("baller7"):
			return 0;
		
		case joaat("buffalo4"):
			return 1;
		
		case joaat("champion"):
			return 2;
		
		case joaat("deity"):
			return 3;
		
		case joaat("granger2"):
			return 4;
		
		case joaat("jubilee"):
			return 5;
		
		case joaat("mule5"):
			return 6;
		
		case joaat("patriot3"):
			return 7;
		
		case joaat("youga4"):
			return 8;
		
		default:
	}
	return -1;
}

int func_908(int iParam0)
{
	if (!Global_79389)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("euros"):
			return func_909(unk_0x259BE71D8A81D4FA());
		
		case joaat("tailgater2"):
			return func_234(unk_0x259BE71D8A81D4FA());
		
		case joaat("zr350"):
			return func_239(31810, -1);
		
		case joaat("comet6"):
			return func_239(31811, -1);
		
		case joaat("jester4"):
			return func_239(31812, -1);
		
		case joaat("vectre"):
			return func_239(31813, -1);
		
		case joaat("cypher"):
			return func_239(31814, -1);
		
		case joaat("growler"):
			return func_239(31815, -1);
		
		case joaat("calico"):
			return func_239(31816, -1);
		
		case joaat("remus"):
			return func_239(31817, -1);
		
		case joaat("dominator7"):
			return func_239(31818, -1);
		
		case joaat("futo2"):
			return func_239(31819, -1);
		
		case joaat("rt3000"):
			return func_239(31820, -1);
		
		case joaat("warrener2"):
			return func_239(31821, -1);
		
		case joaat("sultan3"):
			return func_239(31822, -1);
		
		case joaat("dominator8"):
			return func_239(31823, -1);
		
		case joaat("previon"):
			return func_239(31824, -1);
		
		case joaat("kanjosj"):
			return func_239(34373, -1);
		
		case joaat("postlude"):
			return func_239(34374, -1);
		
		default:
	}
	return 0;
}

int func_909(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_490.f_2, 17))
		{
			return 1;
		}
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return func_90(9631, -1) != 0;
		}
	}
	return 0;
}

int func_910(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zr350"):
			return 0;
		
		case joaat("comet6"):
			return 1;
		
		case joaat("jester4"):
			return 2;
		
		case joaat("vectre"):
			return 3;
		
		case joaat("cypher"):
			return 4;
		
		case joaat("tailgater2"):
			return 5;
		
		case joaat("euros"):
			return 6;
		
		case joaat("growler"):
			return 7;
		
		case joaat("calico"):
			return 8;
		
		case joaat("remus"):
			return 9;
		
		case joaat("dominator7"):
			return 10;
		
		case joaat("futo2"):
			return 11;
		
		case joaat("rt3000"):
			return 12;
		
		case joaat("warrener2"):
			return 13;
		
		case joaat("sultan3"):
			return 14;
		
		case joaat("dominator8"):
			return 15;
		
		case joaat("previon"):
			return 16;
		
		default:
	}
	return -1;
}

int func_911(int iParam0)
{
	if (!Global_79389)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("winky"):
			if (func_915(unk_0x259BE71D8A81D4FA(), 0) || func_914(0))
			{
				return 1;
			}
			break;
		
		case joaat("brioso2"):
			if (func_639(unk_0x259BE71D8A81D4FA()))
			{
				return 1;
			}
			break;
		
		case joaat("vetir"):
			if (func_58(281, -1))
			{
				return 1;
			}
			break;
		
		case joaat("longfin"):
			if (func_58(282, -1))
			{
				return 1;
			}
			break;
		
		case joaat("annihilator2"):
			if (func_58(283, -1))
			{
				return 1;
			}
			break;
		
		case joaat("alkonost"):
			if (func_58(284, -1))
			{
				return 1;
			}
			break;
		
		case joaat("patrolboat"):
			if (func_58(285, -1))
			{
				return 1;
			}
			break;
		
		case joaat("weevil"):
			if ((func_912(0, 1) && func_912(1, 1)) && func_912(2, 1))
			{
				return 1;
			}
			break;
		
		case joaat("italirsx"):
			if (func_912(3, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_912(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return BitTest(func_90(9586, -1), iParam0);
	}
	return func_913(unk_0x259BE71D8A81D4FA(), iParam0);
}

int func_913(int iParam0, var uParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_3, uParam1);
	}
	return 0;
}

int func_914(bool bParam0)
{
	if (bParam0)
	{
		return BitTest(func_90(9511, -1), 1);
	}
	return func_639(unk_0x259BE71D8A81D4FA());
}

int func_915(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_916(iParam0, func_917(iParam1));
	}
	return 0;
}

int func_916(int iParam0, var uParam1)
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1973625[iParam0 /*53*/].f_2, uParam1);
	}
	return 0;
}

int func_917(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_918(int iParam0)
{
	switch (iParam0)
	{
		case joaat("vetir"):
			return 0;
			break;
		
		case joaat("winky"):
			return 1;
			break;
		
		case joaat("longfin"):
			return 2;
			break;
		
		case joaat("annihilator2"):
			return 3;
			break;
		
		case joaat("alkonost"):
			return 4;
			break;
		
		case joaat("patrolboat"):
			return 5;
			break;
		
		case joaat("brioso2"):
			return 6;
			break;
		
		case joaat("weevil"):
			return 7;
			break;
		
		case joaat("italirsx"):
			return 8;
			break;
	}
	return -1;
}

int func_919(int iParam0)
{
	switch (iParam0)
	{
		case joaat("firetruk"):
			return 0;
			break;
		
		case joaat("burrito2"):
			return 1;
			break;
		
		case joaat("boxville"):
			return 2;
			break;
		
		case joaat("stockade"):
			return 3;
			break;
		
		case joaat("asbo"):
			return 4;
			break;
		
		case joaat("kanjo"):
			return 5;
			break;
		
		case joaat("everon"):
			return 6;
			break;
		
		case joaat("retinue2"):
			return 7;
			break;
		
		case joaat("yosemite2"):
			return 8;
			break;
		
		case joaat("sugoi"):
			return 9;
			break;
		
		case joaat("sultan2"):
			return 10;
			break;
		
		case joaat("outlaw"):
			return 11;
			break;
		
		case joaat("vagrant"):
			return 12;
			break;
		
		case joaat("komoda"):
			return 13;
			break;
		
		case joaat("stryder"):
			return 14;
			break;
		
		case joaat("furia"):
			return 15;
			break;
		
		case joaat("zhaba"):
			return 16;
			break;
		
		case joaat("jugular"):
			return 17;
			break;
		
		case joaat("sentinel3"):
			return 18;
			break;
		
		case joaat("gauntlet3"):
			return 19;
			break;
		
		case joaat("ellie"):
			return 20;
			break;
		
		case joaat("defiler"):
			return 21;
			break;
		
		case joaat("manchez"):
			return 22;
			break;
	}
	return -1;
}

int func_920(int iParam0)
{
	int iVar0;
	
	if (!Global_79389)
	{
		return 0;
	}
	iVar0 = func_90(8837, -1);
	switch (iParam0)
	{
		case joaat("firetruk"):
			if (BitTest(iVar0, 0) || Global_262145.f_28146)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("burrito2"):
			if (BitTest(iVar0, 1) || Global_262145.f_28147)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("boxville"):
			if (BitTest(iVar0, 2) || Global_262145.f_28148)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("stockade"):
			if (BitTest(iVar0, 3) || Global_262145.f_28149)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("asbo"):
			if (BitTest(iVar0, 4) || Global_262145.f_28150)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("kanjo"):
			if (BitTest(iVar0, 5) || Global_262145.f_28151)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("everon"):
			if (BitTest(iVar0, 6) || Global_262145.f_28152)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("retinue2"):
			if (BitTest(iVar0, 7) || Global_262145.f_28153)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("yosemite2"):
			if (BitTest(iVar0, 8) || Global_262145.f_28154)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sugoi"):
			if (BitTest(iVar0, 9) || Global_262145.f_28155)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sultan2"):
			if (BitTest(iVar0, 10) || Global_262145.f_28156)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("outlaw"):
			if (BitTest(iVar0, 11) || Global_262145.f_28157)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("vagrant"):
			if (BitTest(iVar0, 12) || Global_262145.f_28158)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("komoda"):
			if (BitTest(iVar0, 13) || Global_262145.f_28159)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("stryder"):
			if (BitTest(iVar0, 14) || Global_262145.f_28160)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("furia"):
			if (BitTest(iVar0, 15) || Global_262145.f_28161)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("zhaba"):
			if (BitTest(iVar0, 16) || Global_262145.f_28162)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("jugular"):
			if (BitTest(iVar0, 17) || Global_262145.f_28163)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sentinel3"):
			if (BitTest(iVar0, 18) || Global_262145.f_28164)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("gauntlet3"):
			if (BitTest(iVar0, 19) || Global_262145.f_28165)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("ellie"):
			if (BitTest(iVar0, 20) || Global_262145.f_28166)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("defiler"):
			if (BitTest(iVar0, 21) || Global_262145.f_28167)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("manchez"):
			if (BitTest(iVar0, 22) || Global_262145.f_28168)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_921(int iParam0)
{
	if (!Global_79389)
	{
		return 0;
	}
	if (iParam0 == joaat("cognoscenti") || iParam0 == joaat("cognoscenti2"))
	{
		return 0;
	}
	if (func_925(iParam0) != -1)
	{
		if (func_922(func_924(iParam0)))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_922(int iParam0)
{
	return func_239(func_923(iParam0), -1);
}

int func_923(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		
		case 9:
			return 24964;
			break;
		
		case 10:
			return 24966;
			break;
		
		case 11:
			return 24965;
			break;
		
		case 12:
			return 24968;
			break;
		
		case 13:
			return 25101;
			break;
		
		case 14:
			return 24967;
			break;
		
		case 15:
			return 25105;
			break;
		
		case 16:
			return 25106;
			break;
		
		case 20:
			return 25102;
			break;
		
		case 21:
			return 25103;
			break;
		
		case 22:
			return 25104;
			break;
		
		case 102:
			return 24969;
			break;
		
		case 17:
			return 25107;
			break;
		
		case 18:
			return 25108;
			break;
		
		case 19:
			return 25109;
			break;
		
		case 103:
			return 24972;
			break;
		
		case 104:
			return 24973;
			break;
		
		case 105:
			return 24974;
			break;
		
		case 106:
			return 24975;
			break;
		
		case 107:
			return 24976;
			break;
		
		case 108:
			return 24978;
			break;
		
		case 109:
			return 24980;
			break;
		
		case 110:
			return 24981;
			break;
		
		case 111:
			return 24982;
			break;
		
		case 112:
			return 24983;
			break;
		
		case 113:
			return 24984;
			break;
		
		case 114:
			return 24985;
			break;
		
		case 115:
			return 24986;
			break;
		
		case 116:
			return 24987;
			break;
		
		case 117:
			return 24988;
			break;
		
		case 118:
			return 24989;
			break;
		
		case 119:
			return 24990;
			break;
		
		case 120:
			return 24991;
			break;
		
		case 0:
			return 24992;
			break;
		
		case 1:
			return 24993;
			break;
		
		case 2:
			return 24994;
			break;
		
		case 3:
			return 24995;
			break;
		
		case 4:
			return 24996;
			break;
		
		case 5:
			return 24997;
			break;
		
		case 6:
			return 24998;
			break;
		
		case 7:
			return 24999;
			break;
		
		case 127:
			return 25117;
			break;
		
		case 128:
			return 25118;
			break;
		
		case 23:
			return 25119;
			break;
		
		case 139:
			return 25125;
			break;
		
		case 140:
			return 25127;
			break;
		
		case 141:
			return 25128;
			break;
		
		case 27:
			return 25129;
			break;
		
		case 160:
			return 25136;
			break;
		
		case 161:
			return 25139;
			break;
		
		case 162:
			return 25140;
			break;
		
		case 31:
			return 25141;
			break;
		
		case 181:
			return 25148;
			break;
		
		case 182:
			return 25151;
			break;
		
		case 183:
			return 25152;
			break;
		
		case 35:
			return 25153;
			break;
		
		case 193:
			return 25160;
			break;
		
		case 194:
			return 25161;
			break;
		
		case 39:
			return 25162;
			break;
		
		case 206:
			return 25168;
			break;
		
		case 207:
			return 25169;
			break;
		
		case 208:
			return 25170;
			break;
		
		case 209:
			return 25173;
			break;
		
		case 210:
			return 25174;
			break;
		
		case 43:
			return 25175;
			break;
		
		case 234:
			return 25179;
			break;
		
		case 235:
			return 25183;
			break;
		
		case 236:
			return 25184;
			break;
		
		case 47:
			return 25185;
			break;
		
		case 248:
			return 25188;
			break;
		
		case 249:
			return 25191;
			break;
		
		case 250:
			return 25192;
			break;
		
		case 51:
			return 25193;
			break;
		
		case 259:
			return 25198;
			break;
		
		case 260:
			return 25202;
			break;
		
		case 261:
			return 25203;
			break;
		
		case 55:
			return 25204;
			break;
		
		case 274:
			return 25209;
			break;
		
		case 275:
			return 25212;
			break;
		
		case 276:
			return 25213;
			break;
		
		case 59:
			return 25214;
			break;
		
		case 284:
			return 25217;
			break;
		
		case 285:
			return 25221;
			break;
		
		case 286:
			return 25222;
			break;
		
		case 63:
			return 25223;
			break;
		
		case 307:
			return 25228;
			break;
		
		case 308:
			return 24979;
			break;
		
		case 309:
			return 25229;
			break;
		
		case 310:
			return 25111;
			break;
		
		case 67:
			return 25230;
			break;
		
		case 68:
			return 25112;
			break;
		
		case 72:
			return 25231;
			break;
		
		case 73:
			return 25233;
			break;
		
		case 74:
			return 25234;
			break;
		
		case 75:
			return 25235;
			break;
		
		case 76:
			return 25236;
			break;
		
		case 77:
			return 25394;
			break;
		
		case 121:
			return 25395;
			break;
		
		case 122:
			return 25396;
			break;
		
		case 123:
			return 25397;
			break;
		
		case 124:
			return 25398;
			break;
		
		case 125:
			return 25399;
			break;
		
		case 126:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		
		case 79:
			return 25245;
			break;
		
		case 80:
			return 25246;
			break;
		
		case 81:
			return 25247;
			break;
		
		case 82:
			return 25248;
			break;
		
		case 83:
			return 25249;
			break;
		
		case 84:
			return 25250;
			break;
		
		case 85:
			return 25000;
			break;
		
		case 86:
			return 25251;
			break;
		
		case 87:
			return 25252;
			break;
		
		case 88:
			return 25253;
			break;
		
		case 89:
			return 25254;
			break;
		
		case 90:
			return 25255;
			break;
		
		case 91:
			return 25256;
			break;
		
		case 92:
			return 25257;
			break;
		
		case 93:
			return 25258;
			break;
		
		case 94:
			return 25259;
			break;
		
		case 95:
			return 25260;
			break;
		
		case 96:
			return 25261;
			break;
		
		case 97:
			return 25262;
			break;
		
		case 98:
			return 25263;
			break;
		
		case 99:
			return 25264;
			break;
		
		case 100:
			return 25225;
			break;
		
		case 101:
			return 25178;
			break;
		
		case 311:
			return 25265;
			break;
		
		case 312:
			return 25266;
			break;
		
		case 313:
			return 25267;
			break;
		
		case 314:
			return 25268;
			break;
		
		case 315:
			return 24977;
			break;
		
		case 316:
			return 25269;
			break;
		
		case 317:
			return 25270;
			break;
		
		case 318:
			return 25271;
			break;
		
		case 319:
			return 25272;
			break;
		
		case 320:
			return 25273;
			break;
		
		case 321:
			return 25274;
			break;
		
		case 322:
			return 25275;
			break;
		
		case 323:
			return 25276;
			break;
		
		case 324:
			return 25277;
			break;
		
		case 325:
			return 25278;
			break;
		
		case 326:
			return 25279;
			break;
		
		case 327:
			return 25280;
			break;
		
		case 328:
			return 25281;
			break;
		
		case 329:
			return 25282;
			break;
		
		case 330:
			return 25283;
			break;
		
		case 331:
			return 25284;
			break;
		
		case 332:
			return 25285;
			break;
		
		case 333:
			return 25286;
			break;
		
		case 334:
			return 25287;
			break;
		
		case 335:
			return 25288;
			break;
		
		case 336:
			return 25289;
			break;
		
		case 337:
			return 25290;
			break;
		
		case 338:
			return 25291;
			break;
		
		case 339:
			return 25292;
			break;
		
		case 340:
			return 25293;
			break;
		
		case 341:
			return 25294;
			break;
		
		case 342:
			return 25295;
			break;
		
		case 343:
			return 25296;
			break;
		
		case 344:
			return 25297;
			break;
		
		case 345:
			return 25298;
			break;
		
		case 346:
			return 25299;
			break;
		
		case 347:
			return 25300;
			break;
		
		case 348:
			return 25301;
			break;
		
		case 349:
			return 25302;
			break;
		
		case 350:
			return 25303;
			break;
		
		case 351:
			return 25304;
			break;
		
		case 352:
			return 25305;
			break;
		
		case 353:
			return 25306;
			break;
		
		case 354:
			return 25307;
			break;
		
		case 355:
			return 25308;
			break;
		
		case 356:
			return 25309;
			break;
		
		case 357:
			return 25310;
			break;
		
		case 358:
			return 25311;
			break;
		
		case 359:
			return 25312;
			break;
		
		case 360:
			return 25313;
			break;
		
		case 361:
			return 25314;
			break;
		
		case 362:
			return 25315;
			break;
		
		case 363:
			return 25316;
			break;
		
		case 364:
			return 25317;
			break;
		
		case 365:
			return 25318;
			break;
		
		case 366:
			return 25319;
			break;
		
		case 367:
			return 25320;
			break;
		
		case 368:
			return 25321;
			break;
		
		case 369:
			return 25322;
			break;
		
		case 370:
			return 25323;
			break;
		
		case 371:
			return 25324;
			break;
		
		case 372:
			return 25325;
			break;
		
		case 373:
			return 25326;
			break;
		
		case 374:
			return 25327;
			break;
		
		case 375:
			return 25328;
			break;
		
		case 376:
			return 25329;
			break;
		
		case 377:
			return 25330;
			break;
		
		case 378:
			return 25331;
			break;
		
		case 379:
			return 25332;
			break;
		
		case 380:
			return 25333;
			break;
		
		case 381:
			return 25334;
			break;
		
		case 382:
			return 25335;
			break;
		
		case 383:
			return 25336;
			break;
		
		case 384:
			return 25337;
			break;
		
		case 385:
			return 25338;
			break;
		
		case 386:
			return 25339;
			break;
		
		case 387:
			return 25340;
			break;
		
		case 388:
			return 25341;
			break;
		
		case 389:
			return 25342;
			break;
		
		case 390:
			return 25343;
			break;
		
		case 391:
			return 25344;
			break;
		
		case 392:
			return 25345;
			break;
		
		case 393:
			return 25346;
			break;
		
		case 394:
			return 25347;
			break;
		
		case 395:
			return 24970;
			break;
		
		case 396:
			return 25348;
			break;
		
		case 397:
			return 25349;
			break;
		
		case 398:
			return 25350;
			break;
		
		case 399:
			return 25351;
			break;
		
		case 400:
			return 25352;
			break;
		
		case 401:
			return 25353;
			break;
		
		case 402:
			return 25354;
			break;
		
		case 403:
			return 25355;
			break;
		
		case 404:
			return 25356;
			break;
		
		case 405:
			return 25357;
			break;
		
		case 406:
			return 25358;
			break;
		
		case 407:
			return 25359;
			break;
		
		case 408:
			return 25360;
			break;
		
		case 409:
			return 25361;
			break;
		
		case 410:
			return 25362;
			break;
		
		case 411:
			return 25363;
			break;
		
		case 412:
			return 25364;
			break;
		
		case 413:
			return 25365;
			break;
		
		case 414:
			return 25366;
			break;
		
		case 415:
			return 25367;
			break;
		
		case 416:
			return 25368;
			break;
		
		case 417:
			return 25369;
			break;
		
		case 418:
			return 25370;
			break;
		
		case 419:
			return 25371;
			break;
		
		case 420:
			return 25373;
			break;
		
		case 421:
			return 25374;
			break;
		
		case 422:
			return 25375;
			break;
		
		case 423:
			return 25377;
			break;
		
		case 424:
			return 25378;
			break;
		
		case 425:
			return 25379;
			break;
		
		case 426:
			return 25382;
			break;
		
		case 427:
			return 25383;
			break;
		
		case 428:
			return 25386;
			break;
		
		case 429:
			return 25390;
			break;
		
		case 430:
			return 25391;
			break;
		
		case 431:
			return 25392;
			break;
		
		case 432:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		
		case 25:
			return 25113;
			break;
		
		case 26:
			return 25114;
			break;
		
		case 28:
			return 25115;
			break;
		
		case 29:
			return 25116;
			break;
		
		case 30:
			return 25120;
			break;
		
		case 32:
			return 25121;
			break;
		
		case 33:
			return 25122;
			break;
		
		case 34:
			return 25123;
			break;
		
		case 36:
			return 25124;
			break;
		
		case 37:
			return 25126;
			break;
		
		case 38:
			return 25130;
			break;
		
		case 40:
			return 25131;
			break;
		
		case 41:
			return 25132;
			break;
		
		case 42:
			return 25133;
			break;
		
		case 44:
			return 25134;
			break;
		
		case 45:
			return 25137;
			break;
		
		case 46:
			return 25138;
			break;
		
		case 48:
			return 25142;
			break;
		
		case 49:
			return 25143;
			break;
		
		case 50:
			return 25144;
			break;
		
		case 52:
			return 25145;
			break;
		
		case 53:
			return 25146;
			break;
		
		case 54:
			return 25147;
			break;
		
		case 56:
			return 25149;
			break;
		
		case 57:
			return 25150;
			break;
		
		case 58:
			return 25154;
			break;
		
		case 60:
			return 25155;
			break;
		
		case 61:
			return 25156;
			break;
		
		case 62:
			return 25157;
			break;
		
		case 64:
			return 25158;
			break;
		
		case 65:
			return 25159;
			break;
		
		case 66:
			return 25163;
			break;
		
		case 69:
			return 25164;
			break;
		
		case 70:
			return 25165;
			break;
		
		case 71:
			return 25166;
			break;
		
		case 129:
			return 25167;
			break;
		
		case 130:
			return 25171;
			break;
		
		case 131:
			return 25172;
			break;
		
		case 132:
			return 25176;
			break;
		
		case 133:
			return 25177;
			break;
		
		case 134:
			return 25181;
			break;
		
		case 135:
			return 25182;
			break;
		
		case 136:
			return 25186;
			break;
		
		case 137:
			return 25187;
			break;
		
		case 138:
			return 25189;
			break;
		
		case 142:
			return 25190;
			break;
		
		case 143:
			return 25194;
			break;
		
		case 144:
			return 25195;
			break;
		
		case 145:
			return 25196;
			break;
		
		case 146:
			return 25197;
			break;
		
		case 147:
			return 25199;
			break;
		
		case 148:
			return 25200;
			break;
		
		case 149:
			return 25201;
			break;
		
		case 150:
			return 25205;
			break;
		
		case 151:
			return 25206;
			break;
		
		case 152:
			return 25207;
			break;
		
		case 153:
			return 25208;
			break;
		
		case 154:
			return 25210;
			break;
		
		case 155:
			return 25211;
			break;
		
		case 156:
			return 25215;
			break;
		
		case 157:
			return 25216;
			break;
		
		case 158:
			return 25218;
			break;
		
		case 159:
			return 25219;
			break;
		
		case 163:
			return 25220;
			break;
		
		case 164:
			return 25224;
			break;
		
		case 165:
			return 25226;
			break;
		
		case 166:
			return 25227;
			break;
		
		case 167:
			return 25232;
			break;
		
		case 168:
			return 25372;
			break;
		
		case 169:
			return 25376;
			break;
		
		case 170:
			return 25380;
			break;
		
		case 171:
			return 25381;
			break;
		
		case 172:
			return 25384;
			break;
		
		case 173:
			return 25385;
			break;
		
		case 174:
			return 25387;
			break;
		
		case 175:
			return 25388;
			break;
		
		case 176:
			return 25389;
			break;
		
		case 177:
			return 25407;
			break;
		
		case 178:
			return 25408;
			break;
		
		case 179:
			return 25409;
			break;
		
		case 180:
			return 25410;
			break;
		
		case 184:
			return 25411;
			break;
		
		case 185:
			return 25412;
			break;
		
		case 186:
			return 25413;
			break;
		
		case 187:
			return 25414;
			break;
		
		case 188:
			return 25415;
			break;
		
		case 189:
			return 25416;
			break;
		
		case 190:
			return 25417;
			break;
		
		case 191:
			return 25418;
			break;
		
		case 192:
			return 25419;
			break;
		
		case 195:
			return 25420;
			break;
		
		case 196:
			return 25421;
			break;
		
		case 197:
			return 25422;
			break;
		
		case 198:
			return 25423;
			break;
		
		case 199:
			return 25424;
			break;
		
		case 200:
			return 25425;
			break;
		
		case 201:
			return 25426;
			break;
		
		case 202:
			return 25427;
			break;
		
		case 203:
			return 25428;
			break;
		
		case 204:
			return 25429;
			break;
		
		case 205:
			return 25430;
			break;
		
		case 211:
			return 25431;
			break;
		
		case 212:
			return 25432;
			break;
		
		case 213:
			return 25433;
			break;
		
		case 214:
			return 25434;
			break;
		
		case 215:
			return 25435;
			break;
		
		case 216:
			return 25436;
			break;
		
		case 217:
			return 25437;
			break;
		
		case 218:
			return 25438;
			break;
		
		case 219:
			return 25439;
			break;
		
		case 220:
			return 25440;
			break;
		
		case 221:
			return 25441;
			break;
		
		case 222:
			return 25442;
			break;
		
		case 223:
			return 25443;
			break;
		
		case 224:
			return 25444;
			break;
		
		case 225:
			return 25445;
			break;
		
		case 226:
			return 25446;
			break;
		
		case 227:
			return 25447;
			break;
		
		case 228:
			return 25448;
			break;
		
		case 229:
			return 25449;
			break;
		
		case 230:
			return 25450;
			break;
		
		case 231:
			return 25451;
			break;
		
		case 232:
			return 25452;
			break;
		
		case 233:
			return 25453;
			break;
		
		case 237:
			return 25454;
			break;
		
		case 238:
			return 25455;
			break;
		
		case 239:
			return 25456;
			break;
		
		case 240:
			return 25457;
			break;
		
		case 241:
			return 25458;
			break;
		
		case 242:
			return 25459;
			break;
		
		case 243:
			return 25460;
			break;
		
		case 244:
			return 25461;
			break;
		
		case 245:
			return 25462;
			break;
		
		case 246:
			return 25463;
			break;
		
		case 247:
			return 25464;
			break;
		
		case 251:
			return 25465;
			break;
		
		case 252:
			return 25466;
			break;
		
		case 253:
			return 25467;
			break;
		
		case 254:
			return 25468;
			break;
		
		case 255:
			return 25469;
			break;
		
		case 256:
			return 25470;
			break;
		
		case 257:
			return 25471;
			break;
		
		case 258:
			return 25472;
			break;
		
		case 262:
			return 25473;
			break;
		
		case 263:
			return 25474;
			break;
		
		case 264:
			return 25475;
			break;
		
		case 265:
			return 25476;
			break;
		
		case 266:
			return 25477;
			break;
		
		case 267:
			return 25478;
			break;
		
		case 268:
			return 25479;
			break;
		
		case 269:
			return 25480;
			break;
		
		case 270:
			return 25481;
			break;
		
		case 271:
			return 25482;
			break;
		
		case 272:
			return 25483;
			break;
		
		case 273:
			return 25484;
			break;
		
		case 277:
			return 25485;
			break;
		
		case 278:
			return 25486;
			break;
		
		case 279:
			return 25487;
			break;
		
		case 280:
			return 25488;
			break;
		
		case 281:
			return 25489;
			break;
		
		case 282:
			return 25490;
			break;
		
		case 283:
			return 25491;
			break;
		
		case 287:
			return 25492;
			break;
		
		case 288:
			return 25493;
			break;
		
		case 289:
			return 25494;
			break;
		
		case 290:
			return 25495;
			break;
		
		case 291:
			return 25496;
			break;
		
		case 292:
			return 25497;
			break;
		
		case 293:
			return 25498;
			break;
		
		case 294:
			return 25499;
			break;
		
		case 295:
			return 25500;
			break;
		
		case 296:
			return 25501;
			break;
		
		case 297:
			return 25502;
			break;
		
		case 298:
			return 25503;
			break;
		
		case 299:
			return 25504;
			break;
		
		case 300:
			return 25505;
			break;
		
		case 301:
			return 25506;
			break;
		
		case 302:
			return 25507;
			break;
		
		case 303:
			return 25508;
			break;
		
		case 304:
			return 25509;
			break;
		
		case 305:
			return 25510;
			break;
		
		case 306:
			return 25511;
			break;
	}
	return 0;
}

int func_924(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 8;
			break;
		
		case joaat("cerberus2"):
			return 9;
			break;
		
		case joaat("cerberus3"):
			return 10;
			break;
		
		case joaat("brutus"):
			return 11;
			break;
		
		case joaat("brutus2"):
			return 12;
			break;
		
		case joaat("brutus3"):
			return 13;
			break;
		
		case joaat("zr380"):
			return 14;
			break;
		
		case joaat("zr3802"):
			return 15;
			break;
		
		case joaat("zr3803"):
			return 16;
			break;
		
		case joaat("scarab"):
			return 20;
			break;
		
		case joaat("scarab2"):
			return 21;
			break;
		
		case joaat("scarab3"):
			return 22;
			break;
		
		case joaat("imperator"):
			return 17;
			break;
		
		case joaat("imperator2"):
			return 18;
			break;
		
		case joaat("imperator3"):
			return 19;
			break;
		
		case joaat("impaler"):
			return 102;
			break;
		
		case joaat("ratloader2"):
			return 103;
			break;
		
		case joaat("glendale"):
			return 104;
			break;
		
		case joaat("slamvan"):
			return 105;
			break;
		
		case joaat("dominator"):
			return 106;
			break;
		
		case joaat("issi3"):
			return 107;
			break;
		
		case joaat("gargoyle"):
			return 108;
			break;
	}
	return -1;
}

int func_925(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 0;
		
		case joaat("cerberus2"):
			return 1;
		
		case joaat("cerberus3"):
			return 2;
		
		case joaat("brutus"):
			return 3;
		
		case joaat("brutus2"):
			return 4;
		
		case joaat("brutus3"):
			return 5;
		
		case joaat("scarab"):
			return 6;
		
		case joaat("scarab2"):
			return 7;
		
		case joaat("scarab3"):
			return 8;
		
		case joaat("imperator"):
			return 9;
		
		case joaat("imperator2"):
			return 10;
		
		case joaat("imperator3"):
			return 11;
		
		case joaat("zr380"):
			return 12;
		
		case joaat("zr3802"):
			return 13;
		
		case joaat("zr3803"):
			return 14;
		
		case joaat("ratloader2"):
			return 15;
		
		case joaat("glendale"):
			return 16;
		
		case joaat("slamvan"):
			return 17;
		
		case joaat("dominator"):
			return 18;
		
		case joaat("impaler"):
			return 19;
		
		case joaat("issi3"):
			return 20;
		
		case joaat("gargoyle"):
			return 21;
		
		default:
	}
	return -1;
}

int func_926(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			if (func_90(7233, -1) >= func_927(iParam0) || Global_262145.f_24253)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pounder2"):
			if (func_90(7233, -1) >= func_927(iParam0) || Global_262145.f_24254)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("oppressor2"):
			if (func_656(22050, -1) >= func_927(iParam0) || Global_262145.f_24255)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pbus2"):
			if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_315.f_7, 1) || Global_262145.f_24257)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("patriot2"):
			if (func_90(7231, -1) >= func_927(iParam0) || Global_262145.f_24258)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("blimp3"):
			if (func_90(7231, -1) >= func_927(iParam0) || Global_262145.f_24259)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_927(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return Global_262145.f_24260;
			break;
		
		case joaat("pounder2"):
			return Global_262145.f_24261;
			break;
		
		case joaat("oppressor2"):
			return Global_262145.f_24262;
			break;
		
		case joaat("patriot2"):
			return Global_262145.f_24263;
			break;
		
		case joaat("blimp3"):
			return Global_262145.f_24264;
			break;
	}
	return 0;
}

int func_928(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return 0;
			break;
		
		case joaat("pounder2"):
			return 1;
			break;
		
		case joaat("oppressor2"):
			return 2;
			break;
		
		case joaat("pbus2"):
			return 3;
			break;
		
		case joaat("patriot2"):
			return 4;
			break;
		
		case joaat("blimp3"):
			return 5;
			break;
	}
	return -1;
}

int func_929(int iParam0)
{
	int iVar0;
	
	if (!Global_79389)
	{
		return 0;
	}
	iVar0 = func_90(5664, -1);
	switch (iParam0)
	{
		case joaat("deluxo"):
			return BitTest(iVar0, func_930(1));
		
		case joaat("akula"):
			return BitTest(iVar0, func_930(2));
		
		case joaat("riot2"):
			return BitTest(iVar0, func_930(6));
		
		case joaat("stromberg"):
			return BitTest(iVar0, func_930(7));
		
		case joaat("chernobog"):
			return BitTest(iVar0, func_930(10));
		
		case joaat("barrage"):
			return BitTest(iVar0, func_930(11));
		
		case joaat("khanjali"):
			return BitTest(iVar0, func_930(12));
		
		case joaat("volatol"):
			return BitTest(iVar0, func_930(13));
		
		case joaat("thruster"):
			return BitTest(iVar0, func_930(15));
		
		default:
	}
	return 0;
}

int func_930(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
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
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_931(int iParam0)
{
	switch (iParam0)
	{
		case joaat("deluxo"):
			return 0;
			break;
		
		case joaat("akula"):
			return 1;
			break;
		
		case joaat("riot2"):
			return 2;
			break;
		
		case joaat("stromberg"):
			return 3;
			break;
		
		case joaat("chernobog"):
			return 4;
			break;
		
		case joaat("barrage"):
			return 5;
			break;
		
		case joaat("khanjali"):
			return 6;
			break;
		
		case joaat("volatol"):
			return 7;
			break;
		
		case joaat("thruster"):
			return 8;
			break;
	}
	return -1;
}

int func_932(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_79389)
	{
		return 0;
	}
	iVar0 = func_934(iParam0);
	iVar1 = func_933();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_933()
{
	return func_90(6116, -1);
}

int func_934(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return Global_262145.f_22394;
		
		case joaat("rogue"):
			return Global_262145.f_22395;
		
		case joaat("alphaz1"):
			return Global_262145.f_22396;
		
		case joaat("havok"):
			return Global_262145.f_22397;
		
		case joaat("starling"):
			return Global_262145.f_22398;
		
		case joaat("molotok"):
			return Global_262145.f_22399;
		
		case joaat("tula"):
			return Global_262145.f_22400;
		
		case joaat("bombushka"):
			return Global_262145.f_22401;
		
		case joaat("howard"):
			return Global_262145.f_22402;
		
		case joaat("mogul"):
			return Global_262145.f_22403;
		
		case joaat("pyro"):
			return Global_262145.f_22404;
		
		case joaat("seabreeze"):
			return Global_262145.f_22405;
		
		case joaat("nokota"):
			return Global_262145.f_22406;
		
		case joaat("hunter"):
			return Global_262145.f_22407;
		
		default:
	}
	return 0;
}

int func_935(var uParam0)
{
	if (!Global_79389)
	{
		return 0;
	}
	return BitTest(func_90(5466, -1), uParam0);
}

int func_936(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
		
		case joaat("halftrack"):
			return 1;
		
		case joaat("trailersmall2"):
			return 2;
		
		case joaat("apc"):
			return 3;
		
		case joaat("tampa3"):
			return 5;
		
		case joaat("oppressor"):
			return 7;
		
		default:
	}
	return 3;
}

int func_937(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
			break;
		
		case joaat("halftrack"):
			return 1;
			break;
		
		case joaat("trailersmall2"):
			return 2;
			break;
		
		case joaat("apc"):
			return 3;
			break;
		
		case joaat("tampa3"):
			return 4;
			break;
		
		case joaat("oppressor"):
			return 5;
			break;
	}
	return -1;
}

int func_938(int iParam0)
{
	int iVar0;
	
	if (!Global_79389)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_939(iVar0);
}

int func_939(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_943())
	{
		return 0;
	}
	uVar0 = func_940(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_575(iVar1));
}

int func_940(var uParam0)
{
	int iVar0;
	
	iVar0 = func_90(func_941(uParam0), -1);
	return iVar0;
}

int func_941(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_576(iVar0);
	if ((func_199() == 0 || func_942() == 0) || (func_199() == 999 && func_942() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 739;
				break;
			
			case 1:
				return 740;
				break;
		}
	}
	return 14835;
}

int func_942()
{
	return Global_32949;
}

bool func_943()
{
	return Global_1575062;
}

int func_944(int iParam0)
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_945(int iParam0)
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

int func_946(var uParam0)
{
	if (!Global_79389)
	{
		return 0;
	}
	return BitTest(func_90(5329, -1), uParam0);
}

int func_947(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
		
		case joaat("dune5"):
			return 0;
		
		case joaat("wastelander"):
			return 1;
		
		case joaat("blazer5"):
			return 2;
		
		case joaat("phantom2"):
			return 3;
		
		case joaat("voltic2"):
			return 4;
		
		case joaat("technical2"):
			return 5;
		
		case joaat("boxville5"):
			return 6;
		
		case joaat("ruiner2"):
			return 7;
		
		default:
	}
	return 0;
}

int func_948(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_949(int iParam0)
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

int func_950()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (BitTest(Global_26, 5))
	{
		if (BitTest(Global_26, 1) || BitTest(Global_26, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (BitTest(uVar0, 5))
		{
			if (BitTest(uVar0, 1) || BitTest(uVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x7A207DD1AEF9D26E(0))
	{
		if (Global_152850.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xDF7F16323520B858(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		uVar3 = unk_0x38640D2193CB547F(866);
		if (BitTest(uVar3, 1) || BitTest(uVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x753B42F8D561B8E2())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar4, -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar4, true);
				unk_0x0B0C9A0F9AAEB7F0(&uVar4, 3);
				unk_0x0B0C9A0F9AAEB7F0(&uVar4, 5);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, true);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 3);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 5);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), uVar4, 1);
				if (unk_0x76CA59C648318506())
				{
					iVar4 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&iVar4, true);
					unk_0x0B0C9A0F9AAEB7F0(&iVar4, 3);
					unk_0xED11291F7127888E(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_951()
{
	var uVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
	{
		return 0;
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x76CA59C648318506())
				{
					iVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&iVar0, false);
					unk_0xED11291F7127888E(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		if (BitTest(unk_0x38640D2193CB547F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_952(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case 79:
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_76458;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
		
		case 267:
			return joaat("le7b");
		
		case 268:
			return joaat("omnis");
		
		case 269:
			return joaat("tropos");
		
		case 270:
			return joaat("brioso");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("contender");
		
		case 274:
			return joaat("cliffhanger");
		
		case 275:
			return joaat("bf400");
		
		case 279:
			return joaat("tyrus");
		
		case 280:
			return joaat("lynx");
		
		case 281:
			return joaat("sheava");
		
		case 276:
			return joaat("rallytruck");
		
		case 277:
			return joaat("tampa2");
		
		case 278:
			return joaat("gargoyle");
		
		case 282:
			return joaat("bagger");
		
		case 283:
			return joaat("esskey");
		
		case 284:
			return joaat("nightblade");
		
		case 285:
			return joaat("defiler");
		
		case 286:
			return joaat("avarus");
		
		case 287:
			return joaat("zombiea");
		
		case 288:
			return joaat("zombieb");
		
		case 289:
			return joaat("chimera");
		
		case 290:
			return joaat("daemon2");
		
		case 291:
			return joaat("ratbike");
		
		case 292:
			return joaat("shotaro");
		
		case 293:
			return joaat("raptor");
		
		case 294:
			return joaat("hakuchou2");
		
		case 296:
			return joaat("blazer4");
		
		case 297:
			return joaat("sanctus");
		
		case 295:
			return joaat("vortex");
		
		case 298:
			return joaat("manchez");
		
		case 299:
			return joaat("tornado6");
		
		case 300:
			return joaat("youga2");
		
		case 301:
			return joaat("wolfsbane");
		
		case 302:
			return joaat("faggio3");
		
		case 303:
			return joaat("faggio");
		
		case 304:
			return joaat("dune5");
		
		case 305:
			return joaat("phantom2");
		
		case 306:
			return joaat("technical2");
		
		case 307:
			return joaat("blazer5");
		
		case 308:
			return joaat("boxville5");
		
		case 309:
			return joaat("wastelander");
		
		case 310:
			return joaat("ruiner2");
		
		case 311:
			return joaat("voltic2");
		
		case 312:
			return joaat("penetrator");
		
		case 313:
			return joaat("tempesta");
		
		case 314:
			return joaat("italigtb");
		
		case 315:
			return joaat("nero");
		
		case 316:
			return joaat("diablous");
		
		case 317:
			return joaat("fcr");
		
		case 318:
			return joaat("specter");
		
		case 319:
			return joaat("gp1");
		
		case 320:
			return joaat("infernus2");
		
		case 321:
			return joaat("ruston");
		
		case 322:
			return joaat("turismo2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_76459;
		
		case 324:
			return Global_76460;
		
		case 325:
			return joaat("cheetah2");
		
		case 326:
			return joaat("torero");
		
		case 327:
			return joaat("vagner");
		
		case 328:
			return joaat("xa21");
		
		case 329:
			return joaat("apc");
		
		case 330:
			return joaat("dune3");
		
		case 331:
			return joaat("halftrack");
		
		case 332:
			return joaat("oppressor");
		
		case 333:
			return joaat("tampa3");
		
		case 334:
			return joaat("trailersmall2");
		
		case 335:
			return joaat("ardent");
		
		case 336:
			return joaat("nightshark");
		
		case 337:
			return joaat("lazer");
		
		case 338:
			return joaat("microlight");
		
		case 339:
			return joaat("mogul");
		
		case 340:
			return joaat("rogue");
		
		case 341:
			return joaat("starling");
		
		case 342:
			return joaat("seabreeze");
		
		case 343:
			return joaat("tula");
		
		case 344:
			return joaat("pyro");
		
		case 345:
			return joaat("molotok");
		
		case 346:
			return joaat("nokota");
		
		case 347:
			return joaat("bombushka");
		
		case 348:
			return joaat("hunter");
		
		case 349:
			return joaat("havok");
		
		case 350:
			return joaat("howard");
		
		case 351:
			return joaat("alphaz1");
		
		case 352:
			return joaat("cyclone");
		
		case 353:
			return joaat("visione");
		
		case 354:
			return joaat("retinue");
		
		case 355:
			return joaat("rapidgt3");
		
		case 356:
			return joaat("vigilante");
		
		case 357:
			return Global_76461;
		
		case 358:
			return joaat("deluxo");
		
		case 359:
			return joaat("stromberg");
		
		case 360:
			return joaat("riot2");
		
		case 361:
			return joaat("chernobog");
		
		case 362:
			return joaat("khanjali");
		
		case 363:
			return joaat("akula");
		
		case 364:
			return joaat("thruster");
		
		case 365:
			return joaat("barrage");
		
		case 366:
			return joaat("volatol");
		
		case 367:
			return joaat("comet4");
		
		case 368:
			return joaat("neon");
		
		case 369:
			return joaat("streiter");
		
		case 370:
			return joaat("sentinel3");
		
		case 371:
			return joaat("yosemite");
		
		case 372:
			return joaat("sc1");
		
		case 373:
			return joaat("autarch");
		
		case 374:
			return joaat("gt500");
		
		case 375:
			return joaat("hustler");
		
		case 376:
			return joaat("revolter");
		
		case 377:
			return joaat("pariah");
		
		case 378:
			return joaat("raiden");
		
		case 379:
			return joaat("savestra");
		
		case 380:
			return joaat("riata");
		
		case 381:
			return joaat("hermes");
		
		case 382:
			return joaat("comet5");
		
		case 383:
			return joaat("z190");
		
		case 384:
			return joaat("viseris");
		
		case 385:
			return joaat("kamacho");
		
		case 386:
			return joaat("gb200");
		
		case 387:
			return joaat("fagaloa");
		
		case 388:
			return joaat("ellie");
		
		case 389:
			return joaat("issi3");
		
		case 390:
			return joaat("michelli");
		
		case 391:
			return joaat("flashgt");
		
		case 392:
			return joaat("hotring");
		
		case 393:
			return joaat("tezeract");
		
		case 394:
			return joaat("tyrant");
		
		case 395:
			return joaat("dominator3");
		
		case 396:
			return joaat("taipan");
		
		case 397:
			return joaat("entity2");
		
		case 398:
			return joaat("jester3");
		
		case 399:
			return joaat("cheburek");
		
		case 400:
			return joaat("caracara");
		
		case 401:
			return joaat("seasparrow");
		
		case 402:
			return Global_76462;
		
		case 403:
			return joaat("mule4");
		
		case 404:
			return joaat("pounder2");
		
		case 405:
			return joaat("swinger");
		
		case 406:
			return joaat("menacer");
		
		case 407:
			return joaat("scramjet");
		
		case 408:
			return joaat("strikeforce");
		
		case 409:
			return joaat("oppressor2");
		
		case 410:
			return joaat("patriot2");
		
		case 411:
			return joaat("stafford");
		
		case 412:
			return joaat("freecrawler");
		
		case 415:
			return joaat("futo");
		
		case 416:
			return joaat("ruiner");
		
		case 417:
			return joaat("romero");
		
		case 418:
			return joaat("prairie");
		
		case 419:
			return joaat("baller");
		
		case 420:
			return joaat("serrano");
		
		case 421:
			return joaat("bjxl");
		
		case 422:
			return joaat("habanero");
		
		case 423:
			return joaat("fq2");
		
		case 424:
			return joaat("patriot");
		
		case 413:
			return joaat("blimp3");
		
		case 414:
			return joaat("pbus2");
		
		case 425:
			return joaat("cerberus");
		
		case 426:
			return joaat("cerberus2");
		
		case 427:
			return joaat("cerberus3");
		
		case 428:
			return joaat("brutus");
		
		case 429:
			return joaat("brutus2");
		
		case 430:
			return joaat("brutus3");
		
		case 431:
			return joaat("scarab");
		
		case 432:
			return joaat("scarab2");
		
		case 433:
			return joaat("scarab3");
		
		case 434:
			return joaat("imperator");
		
		case 435:
			return joaat("imperator2");
		
		case 436:
			return joaat("imperator3");
		
		case 437:
			return joaat("zr380");
		
		case 438:
			return joaat("zr3802");
		
		case 439:
			return joaat("zr3803");
		
		case 440:
			return joaat("impaler");
		
		case 450:
			return joaat("taxi");
		
		case 451:
			return joaat("bulldozer");
		
		case 452:
			return joaat("speedo2");
		
		case 453:
			return joaat("trash2");
		
		case 454:
			return joaat("barracks2");
		
		case 455:
			return joaat("mixer");
		
		case 456:
			return joaat("dune2");
		
		case 457:
			return joaat("tractor");
		
		case 458:
			return joaat("blista3");
		
		case 441:
			return joaat("vamos");
		
		case 442:
			return joaat("tulip");
		
		case 443:
			return joaat("deveste");
		
		case 444:
			return joaat("schlagen");
		
		case 445:
			return joaat("toros");
		
		case 446:
			return joaat("deviant");
		
		case 447:
			return joaat("clique");
		
		case 448:
			return joaat("italigto");
		
		case 449:
			return joaat("rcbandito");
		
		case 459:
			return joaat("thrax");
		
		case 460:
			return joaat("drafter");
		
		case 461:
			return joaat("locust");
		
		case 462:
			return joaat("novak");
		
		case 463:
			return joaat("zorrusso");
		
		case 464:
			return joaat("gauntlet3");
		
		case 465:
			return joaat("issi7");
		
		case 466:
			return joaat("zion3");
		
		case 467:
			return joaat("nebula");
		
		case 468:
			return joaat("hellion");
		
		case 469:
			return joaat("dynasty");
		
		case 470:
			return joaat("rrocket");
		
		case 471:
			return joaat("peyote2");
		
		case 472:
			return joaat("gauntlet4");
		
		case 473:
			return joaat("caracara2");
		
		case 474:
			return joaat("jugular");
		
		case 475:
			return joaat("s80");
		
		case 476:
			return joaat("krieger");
		
		case 477:
			return joaat("emerus");
		
		case 478:
			return joaat("neo");
		
		case 479:
			return joaat("paragon");
		
		case 480:
			return joaat("firetruk");
		
		case 481:
			return joaat("burrito2");
		
		case 482:
			return joaat("boxville");
		
		case 483:
			return joaat("stockade");
		
		case 484:
			return joaat("lguard");
		
		case 485:
			return joaat("blazer2");
		
		case 486:
			return joaat("zhaba");
		
		case 487:
			return joaat("minitank");
		
		case 488:
			return joaat("jb7002");
		
		case 489:
			return joaat("stryder");
		
		case 490:
			return joaat("vstr");
		
		case 491:
			return joaat("formula");
		
		case 492:
			return joaat("imorgon");
		
		case 493:
			return joaat("formula2");
		
		case 494:
			return joaat("furia");
		
		case 495:
			return joaat("rebla");
		
		case 496:
			return joaat("vagrant");
		
		case 497:
			return joaat("retinue2");
		
		case 498:
			return joaat("yosemite2");
		
		case 499:
			return joaat("komoda");
		
		case 500:
			return joaat("sultan2");
		
		case 501:
			return joaat("sugoi");
		
		case 502:
			return joaat("everon");
		
		case 503:
			return joaat("asbo");
		
		case 504:
			return joaat("kanjo");
		
		case 505:
			return joaat("outlaw");
		
		default:
	}
	switch (iParam0)
	{
		case 506:
			return joaat("club");
		
		case 507:
			return joaat("dukes3");
		
		case 508:
			return joaat("yosemite3");
		
		case 509:
			return joaat("penumbra2");
		
		case 510:
			return joaat("landstalker2");
		
		case 511:
			return joaat("seminole2");
		
		case 512:
			return joaat("tigon");
		
		case 513:
			return joaat("openwheel1");
		
		case 514:
			return joaat("openwheel2");
		
		case 515:
			return joaat("coquette4");
		
		case 516:
			return joaat("manana");
		
		case 517:
			return joaat("peyote");
		
		case 518:
			return func_953();
		
		case 519:
			return joaat("italirsx");
		
		case 520:
			return joaat("slamtruck");
		
		case 521:
			return joaat("brioso2");
		
		case 522:
			return joaat("weevil");
		
		case 523:
			return joaat("alkonost");
		
		case 524:
			return joaat("annihilator2");
		
		case 525:
			return joaat("dinghy5");
		
		case 526:
			return joaat("manchez2");
		
		case 527:
			return joaat("patrolboat");
		
		case 528:
			return joaat("squaddie");
		
		case 529:
			return joaat("toreador");
		
		case 530:
			return joaat("verus");
		
		case 531:
			return joaat("vetir");
		
		case 532:
			return joaat("winky");
		
		case 533:
			return joaat("longfin");
		
		case 534:
			return joaat("veto");
		
		case 535:
			return joaat("veto2");
		
		case 543:
			return joaat("zr350");
		
		case 537:
			return joaat("comet6");
		
		case 540:
			return joaat("jester4");
		
		case 542:
			return joaat("vectre");
		
		case 538:
			return joaat("cypher");
		
		case 548:
			return joaat("tailgater2");
		
		case 550:
			return joaat("euros");
		
		case 551:
			return joaat("growler");
		
		case 536:
			return joaat("calico");
		
		case 541:
			return joaat("remus");
		
		case 539:
			return joaat("dominator7");
		
		case 546:
			return joaat("futo2");
		
		case 545:
			return joaat("rt3000");
		
		case 544:
			return joaat("warrener2");
		
		case 547:
			return joaat("sultan3");
		
		case 549:
			return joaat("dominator8");
		
		case 552:
			return joaat("previon");
		
		case 554:
			return joaat("comet7");
		
		case 555:
			return joaat("shinobi");
		
		case 556:
			return joaat("reever");
		
		case 557:
			return joaat("baller7");
		
		case 558:
			return joaat("cinquemila");
		
		case 559:
			return joaat("jubilee");
		
		case 560:
			return joaat("astron");
		
		case 561:
			return joaat("deity");
		
		case 562:
			return joaat("zeno");
		
		case 563:
			return joaat("champion");
		
		case 564:
			return joaat("ignus");
		
		case 565:
			return joaat("buffalo4");
		
		case 566:
			return joaat("granger2");
		
		case 567:
			return joaat("iwagen");
		
		case 568:
			return joaat("patriot3");
		
		case 553:
			return joaat("supervolito2");
		
		case 569:
			return joaat("tenf");
		
		case 570:
			return joaat("sm722");
		
		case 571:
			return joaat("torero2");
		
		case 572:
			return joaat("corsita");
		
		case 573:
			return joaat("lm87");
		
		case 574:
			return joaat("omnisegt");
		
		case 575:
			return joaat("rhinehart");
		
		case 576:
			return joaat("postlude");
		
		case 577:
			return joaat("kanjosj");
		
		case 578:
			return joaat("vigero2");
		
		case 579:
			return joaat("ruiner4");
		
		case 580:
			return joaat("draugur");
		
		case 581:
			return joaat("greenwood");
		
		case 582:
			return joaat("conada");
		
		case 583:
			return joaat("brickade2");
		
		case 584:
			return joaat("manchez3");
		
		case 585:
			return joaat("panthere");
		
		case 586:
			return joaat("tahoma");
		
		case 587:
			return joaat("tulip2");
		
		case 588:
			return joaat("everon2");
		
		case 589:
			return joaat("journey2");
		
		case 590:
			return joaat("surfer3");
		
		case 591:
			return joaat("virtue");
		
		case 592:
			return joaat("r300");
		
		case 593:
			return joaat("issi8");
		
		case 594:
			return joaat("entity3");
		
		case 595:
			return joaat("powersurge");
		
		case 596:
			return joaat("boor");
		
		case 597:
			return joaat("broadway");
		
		case 598:
			return joaat("eudora");
		
		case 599:
			return joaat("mesa");
		
		case 600:
			return joaat("l35");
		
		case 603:
			return joaat("brigham");
		
		case 604:
			return joaat("clique2");
		
		case 601:
			return joaat("ratel");
		
		case 602:
			return joaat("monstrociti");
		
		case 605:
			return joaat("inductor");
		
		case 606:
			return joaat("inductor2");
		
		case 607:
			return joaat("streamer216");
		
		case 608:
			return joaat("conada2");
		
		case 609:
			return joaat("raiju");
		
		case 610:
			return joaat("gauntlet6");
		
		case 611:
			return joaat("stingertt");
		
		case 612:
			return joaat("buffalo5");
		
		case 613:
			return joaat("coureur");
		
		case 614:
			return joaat("polgauntlet");
		
		case 615:
			return joaat("police4");
		
		case 616:
			return joaat("police5");
		
		case 617:
			return joaat("riot");
		
		case 618:
			return joaat("dorado");
		
		case 619:
			return joaat("impaler5");
		
		case 620:
			return joaat("impaler6");
		
		case 621:
			return joaat("asterope2");
		
		case 622:
			return joaat("dominator9");
		
		case 623:
			return joaat("fr36");
		
		case 624:
			return joaat("baller8");
		
		case 625:
			return joaat("aleutian");
		
		case 626:
			return joaat("turismo3");
		
		case 627:
			return joaat("cavalcade3");
		
		case 628:
			return joaat("vigero3");
		
		case 629:
			return joaat("terminus");
		
		case 630:
			return joaat("vivanite");
		
		case 631:
			return joaat("boxville6");
		
		case 632:
			return joaat("benson2");
		
		case 633:
			return -773802025;
		
		case 634:
			return -1628000569;
		
		case 635:
			return 1737348074;
		
		case 636:
			return 1249425552;
		
		case 637:
			return 1452003510;
		
		case 638:
			return -1240172147;
		
		case 639:
			return 1307736079;
		
		case 640:
			return -1896488056;
		
		case 641:
			return 1579902654;
		
		case 642:
			return 1968807591;
		
		case 643:
			return -223461503;
		
		case 644:
			return -1958428933;
		
		case 645:
			return -999594302;
		
		case 646:
			return 1881415402;
		
		case 648:
			return -946047670;
		
		case 647:
			return 1121330119;
		
		default:
	}
	return 0;
}

int func_953()
{
	return joaat("kosatka");
}

int func_954()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2359296[func_177() /*5570*/].f_1[iVar0] != 0)
		{
			iVar1 = Global_2359296[func_177() /*5570*/].f_1[iVar0];
			iVar2 = func_873(245, 0);
			if (iVar0 == (iVar2 / 32))
			{
				unk_0x8744D2E3FC95740E(&iVar1, (iVar2 % 32));
			}
			iVar3 = func_873(323, 0);
			if (iVar0 == (iVar3 / 32))
			{
				unk_0x8744D2E3FC95740E(&iVar1, (iVar3 % 32));
			}
			iVar4 = func_873(324, 0);
			if (iVar0 == (iVar4 / 32))
			{
				unk_0x8744D2E3FC95740E(&iVar1, (iVar4 % 32));
			}
			iVar5 = func_873(357, 0);
			if (iVar0 == (iVar5 / 32))
			{
				unk_0x8744D2E3FC95740E(&iVar1, (iVar5 % 32));
			}
			iVar6 = func_873(402, 0);
			if (iVar0 == (iVar6 / 32))
			{
				unk_0x8744D2E3FC95740E(&iVar1, (iVar6 % 32));
			}
			iVar7 = func_873(518, 0);
			if (iVar0 == (iVar7 / 32))
			{
				unk_0x8744D2E3FC95740E(&iVar1, (iVar7 % 32));
			}
			iVar8 = func_873(583, 0);
			if (iVar0 == (iVar8 / 32))
			{
				unk_0x8744D2E3FC95740E(&iVar1, (iVar8 % 32));
			}
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

char* func_955(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_952(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		case 510:
			return "LANDSTLKR2";
		
		case 583:
			return "BRICKADE2";
		
		case 631:
			return "BOXVILLE6";
		
		case 632:
			return "BENSON2";
		
		default:
	}
	return unk_0x93E7527CFECC7CD8(iVar0);
}

int func_956(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 >= 4)
	{
		iParam0 = 3;
	}
	switch (iParam0)
	{
		case 0:
			return 243;
		
		case 1:
			return 244;
		
		case 2:
			return 217;
		
		case 3:
			return 253;
		
		default:
	}
	return 243;
}

void func_957()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	func_82(0, 0);
	if (func_184())
	{
		func_81("MPCT_PA_AGH");
	}
	else
	{
		func_81("MPCT_PA_AGHF");
	}
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	bVar2 = true;
	if (func_190(unk_0x259BE71D8A81D4FA()))
	{
		iVar1 = func_518(43);
		if ((iVar1 > 0 || !func_289(43)) || !func_334(43))
		{
			bVar2 = false;
		}
		if (!func_185(func_189()))
		{
			bVar2 = false;
		}
		func_609(43, iVar0, "MPCT_PA_IMP0", bVar2);
		func_63(iVar0, "MPCT_CASH", 1, bVar2, 0, 0, 0);
		func_437(func_87(43), 0);
	}
	else
	{
		func_63(iVar0, "MPCT_PA_IMP0", 0, 0, 0, 0, 0);
		func_63(iVar0, "", 1, 0, 0, 0, 0);
		func_608(15, 0);
	}
	iVar0++;
	bVar2 = true;
	if (func_190(unk_0x259BE71D8A81D4FA()))
	{
		iVar1 = func_518(44);
		if ((iVar1 > 0 || !func_289(44)) || !func_334(44))
		{
			bVar2 = false;
		}
		if (!func_181())
		{
			bVar2 = false;
		}
		iVar3 = func_182();
		if (iVar3 != 0)
		{
			if (iVar3 == 3)
			{
				bVar2 = false;
			}
		}
		func_609(44, iVar0, "MPCT_PA_YAH0", bVar2);
		func_63(iVar0, "MPCT_CASH", 1, bVar2, 0, 0, 0);
		func_437(func_87(44), 0);
	}
	else
	{
		func_63(iVar0, "MPCT_PA_YAH0", 0, 0, 0, 0, 0);
		func_63(iVar0, "", 1, 0, 0, 0, 0);
		func_608(15, 0);
	}
	iVar0++;
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	func_381(Local_130.f_181.f_69, 1, 1);
	Local_130.f_181.f_2 = iVar0;
}

int func_958()
{
	if (func_181())
	{
		if (!iLocal_168)
		{
			iLocal_168 = 1;
			return 1;
		}
	}
	else if (!func_181())
	{
		if (iLocal_168)
		{
			iLocal_168 = 0;
			return 1;
		}
	}
	return 0;
}

void func_959()
{
	switch (Local_130.f_178)
	{
		case 19:
			if (func_84(0, -1, 1))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					func_1049();
					unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
					func_125();
				}
				else
				{
					func_125();
				}
			}
			break;
		
		case 9:
			if (func_84(0, -1, 0))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					func_1043();
					unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
					func_125();
				}
				else
				{
					func_125();
				}
			}
			break;
		
		case 6:
			if (func_84(0, -1, 0))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					if (func_999())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
						func_125();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_125();
				}
			}
			break;
		
		case 36:
			if (func_84(0, -1, 0))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					if (func_992())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
						func_125();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_125();
				}
			}
			break;
		
		case 35:
			if (!Global_262145.f_31863)
			{
				if (BitTest(Local_130.f_363, 20))
				{
					func_1688(1);
					if (func_981(&Local_212, &Global_1919005, 1))
					{
						if (!Local_212.f_4)
						{
							if (func_980())
							{
								func_978(iLocal_180, Global_1919005, Local_130.f_181.f_69);
							}
							else if (func_977())
							{
								func_978(Local_130.f_181.f_70[Local_130.f_181.f_69], Global_1919005, -1);
							}
							else
							{
								func_978(Local_130.f_181.f_70[Local_130.f_181.f_69], Global_1919005, -1);
							}
							func_973("GAR_TLTIP_TCKR", 0);
						}
						unk_0x8744D2E3FC95740E(&(Local_130.f_363), 20);
						unk_0x8744D2E3FC95740E(&(Local_130.f_363), 4);
						if (func_980())
						{
							Local_130.f_178 = 36;
						}
						else if (func_977())
						{
							Local_130.f_178 = 40;
						}
						else
						{
							Local_130.f_178 = 9;
						}
						if (!func_122(&uLocal_160))
						{
							func_121(&uLocal_160, 1, 0);
						}
						else
						{
							func_33(&uLocal_160);
							func_121(&uLocal_160, 1, 0);
						}
					}
				}
				else
				{
					iLocal_183 = (iLocal_183 - 1);
					if (iLocal_183 <= 0)
					{
						StringCopy(&Global_1919005, "", 64);
						if (func_980())
						{
							func_978(iLocal_180, Global_1919005, Local_130.f_181.f_69);
						}
						else if (func_977())
						{
							func_978(Local_130.f_181.f_70[Local_130.f_181.f_69], Global_1919005, -1);
						}
						else
						{
							func_978(Local_130.f_181.f_70[Local_130.f_181.f_69], Global_1919005, -1);
						}
						func_973("GAR_TLTIP_TCKR", 0);
						unk_0x8744D2E3FC95740E(&(Local_130.f_363), 20);
						unk_0x8744D2E3FC95740E(&(Local_130.f_363), 4);
						if (func_980())
						{
							Local_130.f_178 = 36;
						}
						else if (func_977())
						{
							Local_130.f_178 = 40;
						}
						else
						{
							Local_130.f_178 = 9;
						}
						if (!func_122(&uLocal_160))
						{
							func_121(&uLocal_160, 1, 0);
						}
						else
						{
							func_33(&uLocal_160);
							func_121(&uLocal_160, 1, 0);
						}
					}
				}
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Local_130.f_363), 20);
				Local_130.f_178 = 9;
			}
			func_125();
			break;
		
		case 40:
			if (func_84(0, -1, 0))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					if (func_960())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
						func_125();
					}
					else
					{
						return;
					}
				}
				else
				{
					func_125();
				}
			}
			break;
	}
}

int func_960()
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (Global_2738934.f_6035)
	{
		func_965(iLocal_180, &uVar0, func_972(iLocal_180), &(Local_130.f_181.f_70), 0);
	}
	else
	{
		func_965(iLocal_180, &uVar0, func_972(iLocal_180), &(Local_130.f_181.f_70), 1);
	}
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	unk_0x8744D2E3FC95740E(&(Local_130.f_363), 21);
	unk_0x8744D2E3FC95740E(&(Local_130.f_363), 22);
	func_381(Local_130.f_181.f_69, 1, 1);
	iVar1 = Local_130.f_181.f_70[Local_130.f_181.f_69];
	iVar2 = func_156(iVar1, -1);
	unk_0x8744D2E3FC95740E(&iLocal_152, 27);
	bVar3 = false;
	if (iVar2 <= 0)
	{
		StringCopy(&Global_1919005, "", 64);
		bVar3 = true;
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_152, 27);
	}
	if (!Global_262145.f_31863 && !bVar3)
	{
		if (func_961(iVar1, &Global_1919005, -1))
		{
			if (unk_0xD6F9DEE4765092A9(&Global_1919005))
			{
				StringCopy(&Global_1919005, "", 64);
				if (func_1320())
				{
					if (unk_0xAE231F549813BBDF(2))
					{
						func_383(37, "MCHNC_TLTP_ADD2", -1, 0);
					}
					else
					{
						func_382(179, "MCHNC_TLTP_ADD2", -1);
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 21);
			}
			else
			{
				if (func_1320())
				{
					func_383(178, "MCHNC_TLTP_CLR", -1, 0);
					if (unk_0xAE231F549813BBDF(2))
					{
						func_383(37, "MCHNC_TLTP_EDIT", -1, 0);
					}
					else
					{
						func_382(179, "MCHNC_TLTP_EDIT", -1);
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 21);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 22);
			}
		}
	}
	Local_130.f_181.f_2 = uVar0;
	return 1;
}

int func_961(int iParam0, char* sParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_964(iParam0, &uVar0, &uVar1, iParam2))
	{
		*sParam1 = { func_962(uVar0, uVar1, -1) };
		if (unk_0xD6F9DEE4765092A9(sParam1))
		{
			StringCopy(sParam1, "", 64);
		}
		return 1;
	}
	StringCopy(sParam1, "", 64);
	return 0;
}

struct<16> func_962(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	struct<16> Var2;
	char cVar3[32];
	
	uVar0 = func_963(uParam0, iParam2);
	uVar1 = func_963(uParam1, iParam2);
	StringCopy(&Var2, unk_0xCEA81DACD6DA3ADB(uVar0, -1), 64);
	StringCopy(&cVar3, unk_0xCEA81DACD6DA3ADB(uVar1, -1), 32);
	StringConCat(&Var2, &cVar3, 64);
	return Var2;
}

var func_963(int iParam0, int iParam1)
{
	return unk_0xD69CE161FE614531(3, uParam0, func_56(iParam1));
}

int func_964(int iParam0, var uParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 57;
			*uParam2 = 58;
			break;
		
		case 1:
			*uParam1 = 59;
			*uParam2 = 60;
			break;
		
		case 2:
			*uParam1 = 61;
			*uParam2 = 62;
			break;
		
		case 3:
			*uParam1 = 63;
			*uParam2 = 64;
			break;
		
		case 4:
			*uParam1 = 65;
			*uParam2 = 66;
			break;
		
		case 7:
			*uParam1 = 67;
			*uParam2 = 68;
			break;
		
		case 23:
			*uParam1 = 69;
			*uParam2 = 70;
			break;
		
		case 24:
			*uParam1 = 71;
			*uParam2 = 72;
			break;
		
		case 27:
			*uParam1 = 73;
			*uParam2 = 74;
			break;
		
		case 28:
			*uParam1 = 75;
			*uParam2 = 76;
			break;
		
		case 6:
			*uParam1 = 77;
			*uParam2 = 78;
			break;
		
		case 8:
			*uParam1 = 79;
			*uParam2 = 80;
			break;
		
		case 9:
			*uParam1 = 81;
			*uParam2 = 82;
			break;
		
		case 10:
			*uParam1 = 83;
			*uParam2 = 84;
			break;
		
		case 13:
			*uParam1 = 85;
			*uParam2 = 86;
			break;
		
		case 14:
			*uParam1 = 87;
			*uParam2 = 88;
			break;
		
		case 15:
			*uParam1 = 89;
			*uParam2 = 90;
			break;
		
		case 16:
			*uParam1 = 91;
			*uParam2 = 92;
			break;
		
		case 17:
			*uParam1 = 93;
			*uParam2 = 94;
			break;
		
		case 18:
			*uParam1 = 95;
			*uParam2 = 96;
			break;
		
		case 19:
			*uParam1 = 97;
			*uParam2 = 98;
			break;
		
		case 20:
			*uParam1 = 99;
			*uParam2 = 100;
			break;
		
		case 21:
			*uParam1 = 101;
			*uParam2 = 102;
			break;
		
		case 22:
			*uParam1 = 103;
			*uParam2 = 104;
			break;
		
		case 25:
			*uParam1 = 105;
			*uParam2 = 106;
			break;
		
		case 26:
			*uParam1 = 107;
			*uParam2 = 108;
			break;
		
		case 31:
			*uParam1 = 133;
			*uParam2 = 134;
			break;
		
		case 29:
			switch (iParam3)
			{
				case -1:
					*uParam1 = 109;
					*uParam2 = 110;
					break;
				
				case 0:
					*uParam1 = 111;
					*uParam2 = 112;
					break;
				
				case 1:
					*uParam1 = 113;
					*uParam2 = 114;
					break;
				
				case 2:
					*uParam1 = 115;
					*uParam2 = 116;
					break;
				
				case 3:
					*uParam1 = 117;
					*uParam2 = 118;
					break;
				
				case 4:
					*uParam1 = 119;
					*uParam2 = 120;
					break;
				
				default:
					break;
			}
			break;
		
		case 30:
			switch (iParam3)
			{
				case -1:
					*uParam1 = 121;
					*uParam2 = 122;
					break;
				
				case 0:
					*uParam1 = 123;
					*uParam2 = 124;
					break;
				
				case 1:
					*uParam1 = 125;
					*uParam2 = 126;
					break;
				
				case 2:
					*uParam1 = 127;
					*uParam2 = 128;
					break;
				
				case 3:
					*uParam1 = 129;
					*uParam2 = 130;
					break;
				
				case 4:
					*uParam1 = 131;
					*uParam2 = 132;
					break;
				
				default:
					break;
			}
			break;
		
		case 12:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 5:
		case 99:
			return 0;
			break;
		
		default:
			if (func_162(iParam0))
			{
				return 0;
			}
			return 0;
			break;
	}
	return 1;
}

void func_965(int iParam0, var uParam1, char* sParam2, var uParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	int iVar7;
	
	func_82(0, 0);
	func_81(sParam2);
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	iVar2 = 0;
	*uParam1 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar7 = func_156(iVar2, -1);
		if (func_971(iVar2) && func_155(iVar2) == iParam0)
		{
			bVar0 = false;
			if (iVar7 <= 0)
			{
				iVar5 = -1;
			}
			else
			{
				iVar5 = func_225(iVar2, -1, 1);
				if (iVar2 == 13)
				{
					iVar5 = 11;
				}
				else if (iVar2 == 18)
				{
					iVar5 = 10;
				}
			}
			iVar3 = func_224(iVar2);
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < iVar5)
			{
				func_223(iVar3, &iVar4, 1);
				if (iVar4 >= 0 && (!func_187(iVar3) || iParam4))
				{
					if ((((unk_0xAD1840C2E6AF7D5E(func_174(iVar4)) && !func_214(func_174(iVar4), 1)) && !func_213(func_174(iVar4))) && func_220(func_174(iVar4))) && !func_202(iVar4))
					{
						if (!BitTest(Global_1586521[iVar4 /*142*/].f_103, 10))
						{
							bVar0 = true;
						}
						else
						{
							iVar3++;
							iVar1++;
						}
						func_966(&sVar6, iVar2);
						func_63(*uParam1, &sVar6, 0, bVar0, 0, 0, 0);
						(*uParam3)[*uParam1] = iVar2;
						*uParam1++;
						iVar2++;
					}

void func_966(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_156(iParam1, -1);
	if (iVar0 <= 131)
	{
		MemCopy(sParam0, {Global_1312298[iVar0 /*1951*/].f_16}, 6);
	}
	else
	{
		StringCopy(sParam0, "", 24);
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		switch (iParam1)
		{
			case 8:
				StringCopy(sParam0, "MP_PROP_OFFG1", 24);
				break;
			
			case 9:
				StringCopy(sParam0, "MP_PROP_OFFG2", 24);
				break;
			
			case 10:
				StringCopy(sParam0, "MP_PROP_OFFG3", 24);
				break;
			}
	}
	if (iParam1 == 13)
	{
		StringCopy(sParam0, func_969(func_970(unk_0x259BE71D8A81D4FA())), 24);
	}
	if (iParam1 == 14)
	{
		StringCopy(sParam0, "MP_BHUB_CLUBG", 24);
	}
	else if (iParam1 == 15)
	{
		StringCopy(sParam0, func_968(1), 24);
	}
	else if (iParam1 == 16)
	{
		StringCopy(sParam0, func_968(2), 24);
	}
	else if (iParam1 == 17)
	{
		StringCopy(sParam0, func_968(3), 24);
	}
	else if (iParam1 == 18)
	{
		StringCopy(sParam0, func_967(1), 24);
	}
	else if (iParam1 == 19)
	{
		StringCopy(sParam0, func_967(2), 24);
	}
	else if (iParam1 == 20)
	{
		StringCopy(sParam0, func_967(3), 24);
	}
	else if (iParam1 == 21)
	{
		StringCopy(sParam0, "CASINO_GARNAME", 24);
	}
	else if (iParam1 == 22)
	{
		StringCopy(sParam0, "ARCADE_GARNAME", 24);
	}
	else if (iParam1 == 25)
	{
		StringCopy(sParam0, "AUT_SHP_GAR", 24);
	}
	else if (iParam1 == 26)
	{
		StringCopy(sParam0, "FIXER_GARNAME", 24);
	}
	else if (iParam1 == 29)
	{
		StringCopy(sParam0, "WIN22_GARNAME", 24);
	}
	else if (iParam1 == 31)
	{
		StringCopy(sParam0, "BO_GARNAME", 24);
	}
	StringConCat(sParam0, "S", 24);
}

char* func_967(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "ARENA_GAR_F0";
			break;
		
		case 2:
			return "ARENA_GAR_F1";
			break;
		
		case 3:
			return "ARENA_GAR_F2";
			break;
	}
	return "";
}

char* func_968(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_BHUB_GAR1";
			break;
		
		case 2:
			return "MP_BHUB_GAR2";
			break;
		
		case 3:
			return "MP_BHUB_GAR3";
			break;
	}
	return "";
}

char* func_969(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_DBASE_1";
			break;
		
		case 2:
			return "MP_DBASE_2";
			break;
		
		case 3:
			return "MP_DBASE_3";
			break;
		
		case 4:
			return "MP_DBASE_4";
			break;
		
		case 5:
			return "MP_DBASE_6";
			break;
		
		case 6:
			return "MP_DBASE_7";
			break;
		
		case 7:
			return "MP_DBASE_8";
			break;
		
		case 8:
			return "MP_DBASE_9";
			break;
		
		case 9:
			return "MP_DBASE_10";
			break;
	}
	return "";
}

int func_970(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_304;
	}
	return 0;
}

int func_971(int iParam0)
{
	if (Global_1579582)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 14:
		case 18:
		case 19:
		case 20:
		case 8:
		case 9:
		case 10:
		case 15:
		case 16:
		case 17:
			return 1;
			break;
	}
	return 0;
}

char* func_972(int iParam0)
{
	if (Global_1579582)
	{
		return "";
	}
	switch (iParam0)
	{
		case 6000:
			return "FGROUP_ARENA";
			break;
			break;
		
		case 6002:
			return "FGROUP_NCLUB";
			break;
			break;
		
		case 6001:
			return "FGROUP_OFF";
			break;
			break;
	}
	return "";
}

int func_973(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	unk_0xCCDB0041859B85A6(sParam0);
	iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
	func_974(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_974(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_136() || !unk_0x834C960822A4683F()) || !func_117(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	iVar0 = func_975(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1937329.f_5[iVar0 /*53*/] = iParam0;
		Global_1937329.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1937329.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1937329.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1937329.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1937329.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1937329.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_975(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1937329 - 1))
	{
		if (iParam0 > Global_1937329.f_5[iVar0 /*53*/].f_1)
		{
			func_976(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1937329++;
	if (Global_1937329 > 5)
	{
		Global_1937329 = 5;
		return Global_1937329;
	}
	return (Global_1937329 - 1);
}

void func_976(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1937329.f_5[iVar0 /*53*/] = { Global_1937329.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_977()
{
	return BitTest(bLocal_179, 4);
}

void func_978(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17)
{
	var uVar0;
	var uVar1;
	
	if (func_964(iParam0, &uVar0, &uVar1, iParam17))
	{
		func_979(uVar0, uVar1, &sParam1, -1, 1);
	}
}

void func_979(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar3[32];
	int iVar4;
	int iVar5;
	
	iVar0 = func_963(uParam0, iParam3);
	iVar1 = func_963(uParam1, iParam3);
	if (iVar0 != 0 && iVar1 != 0)
	{
		StringCopy(&cVar2, "", 32);
		StringCopy(&cVar3, "", 32);
		iVar4 = unk_0x09112CCF7824FE38(sParam2);
		if (iVar4 > 0)
		{
			iVar5 = 10;
			if (iVar4 < 10)
			{
				iVar5 = iVar4;
			}
			StringCopy(&cVar2, unk_0x96793ADAC5A06FCB(sParam2, 0, iVar5, 31), 32);
			if (iVar4 > 10)
			{
				StringCopy(&cVar3, unk_0x96793ADAC5A06FCB(sParam2, 10, iVar4, 31), 32);
			}
		}
		unk_0x1A43F9BE4B6AAB67(iVar0, &cVar2, iParam4);
		unk_0x1A43F9BE4B6AAB67(iVar1, &cVar3, iParam4);
	}
}

bool func_980()
{
	return BitTest(bLocal_179, 3);
}

int func_981(var uParam0, char* sParam1, int iParam2)
{
	struct<16> Var0;
	
	if (func_987(uParam0, &(uParam0->f_1), &(uParam0->f_2), 0, 0, sParam1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, uParam0->f_3, uParam0->f_4, uParam0->f_5, 0, uParam0->f_6, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 1))
	{
		StringCopy(&Var0, unk_0x43FB09E8020180EA(), 64);
		if (unk_0x09112CCF7824FE38(&Var0) < 3)
		{
			*uParam0 = 0;
			uParam0->f_2 = 0;
			uParam0->f_1 = 0;
			uParam0->f_3 = 1;
			uParam0->f_5 = 0;
			uParam0->f_4 = 0;
			uParam0->f_6 = 0;
			return 0;
		}
		else if (!func_983(&Var0))
		{
			*uParam0 = 0;
			uParam0->f_2 = 0;
			uParam0->f_1 = 0;
			uParam0->f_3 = 0;
			uParam0->f_5 = 0;
			uParam0->f_4 = 0;
			uParam0->f_6 = 1;
			return 0;
		}
		else if (func_982(&Var0))
		{
			*uParam0 = 0;
			uParam0->f_2 = 0;
			uParam0->f_1 = 0;
			uParam0->f_3 = 0;
			uParam0->f_5 = 0;
			uParam0->f_4 = 1;
			uParam0->f_6 = 0;
			return 0;
		}
		else
		{
			*uParam0 = 0;
			uParam0->f_2 = 0;
			uParam0->f_1 = 0;
			*sParam1 = { Var0 };
			uParam0->f_3 = 0;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			uParam0->f_6 = 0;
			return 1;
		}
	}
	else if (*uParam0 == 2)
	{
		*uParam0 = 0;
		uParam0->f_2 = 0;
		uParam0->f_1 = 0;
		uParam0->f_3 = 0;
		uParam0->f_5 = 0;
		uParam0->f_6 = 0;
		if (iParam2 == 0)
		{
			uParam0->f_4 = 1;
			return 0;
		}
		else
		{
			uParam0->f_4 = 1;
			return 1;
		}
	}
	return 0;
}

int func_982(char* sParam0)
{
	char cVar0[24];
	int iVar1;
	
	if (!unk_0xD6F9DEE4765092A9(sParam0))
	{
		iVar1 = 0;
		while (iVar1 < unk_0x09112CCF7824FE38(sParam0))
		{
			StringConCat(&cVar0, " ", 24);
			iVar1++;
		}
		if (unk_0x1B79E937E91F40C3(sParam0, &cVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_983(char* sParam0)
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	char* sVar3;
	
	while (func_986(iVar0, &Var1))
	{
		if (func_985(sParam0, Var1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar2 = unk_0x8608526719A575EE();
	if (((((iVar2 == 7 || iVar2 == 6) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 12)
	{
		return 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (unk_0x09112CCF7824FE38(sParam0) - 1))
	{
		sVar3 = unk_0xA4FC5B871651C9F9(sParam0, iVar0, iVar0 + 1);
		if (!func_984(unk_0x70E57E9927B6BA58(sVar3), sVar3))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_984(int iParam0, char* sParam1)
{
	if ((((iParam0 == 1518810369 || iParam0 == 1518810369) || iParam0 == 1518810369) || unk_0x1B79E937E91F40C3("\", sParam1)) || unk_0x1B79E937E91F40C3("/", sParam1))
	{
		return 0;
	}
	if ((((((unk_0x1B79E937E91F40C3("??", sParam1) || unk_0x1B79E937E91F40C3("???", sParam1)) || unk_0x1B79E937E91F40C3("??", sParam1)) || unk_0x1B79E937E91F40C3("???", sParam1)) || unk_0x1B79E937E91F40C3("??", sParam1)) || unk_0x1B79E937E91F40C3("`", sParam1)) || unk_0x1B79E937E91F40C3("??", sParam1))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 837920498:
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 600083096:
		case -1522340247:
		case -143650098:
		case -1065966372:
		case -2140887879:
		case 778141872:
		case -921127396:
		case -1071570387:
		case 1523669383:
		case -1830565405:
		case 1821506824:
		case 266453929:
		case 1045078138:
		case -211416398:
		case 247251347:
		case 546465086:
		case -1123279309:
		case -346162474:
		case -916605278:
		case -752367050:
		case -1215032561:
		case -1377632339:
		case -2013350887:
		case -643246228:
		case 1983189126:
		case -1534956256:
		case 1234777875:
		case 458939031:
		case -2743410:
		case -464425851:
		case -299335629:
		case -1301641536:
		case 85241359:
		case 1695870474:
		case -513447975:
		case -992366910:
		case -995381666:
		case 2050333043:
		case -996692410:
		case -94758462:
		case -1273164471:
		case -1771875894:
		case -2134203011:
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("0"):
		case joaat("1"):
		case joaat("2"):
		case joaat("3"):
		case joaat("4"):
		case joaat("5"):
		case joaat("6"):
		case joaat("7"):
		case joaat("8"):
		case joaat("9"):
		case joaat("!"):
		case 1108028131:
		case joaat("#"):
		case joaat("$"):
		case joaat("%"):
		case joaat("&"):
		case 94056980:
		case joaat("("):
		case joaat(")"):
		case joaat("*"):
		case joaat("+"):
		case 625527429:
		case joaat("-"):
		case 1224511980:
		case 616155491:
		case 897542894:
		case 1232048846:
		case 1529493059:
		case 1844665301:
		case joaat("?"):
		case joaat("@"):
		case 1550006445:
		case 2118548595:
		case joaat("^"):
		case joaat("_"):
		case joaat("`"):
		case joaat("{"):
		case joaat("|"):
		case joaat("}"):
		case joaat("~"):
		case -1156959575:
		case 1114287026:
		case 383898785:
		case 1667493284:
		case 1390726294:
		case 811599757:
		case 80523367:
		case -1034900624:
		case -1075435881:
		case 1028923773:
		case 999169521:
		case 1239258034:
		case joaat("a"):
		case joaat("b"):
		case joaat("c"):
		case joaat("d"):
		case joaat("e"):
		case joaat("f"):
		case joaat("g"):
		case joaat("h"):
		case joaat("i"):
		case joaat("j"):
		case joaat("k"):
		case 194886717:
		case joaat("l"):
		case joaat("m"):
		case joaat("n"):
		case joaat("o"):
		case joaat("p"):
		case joaat("q"):
		case joaat("r"):
		case joaat("s"):
		case joaat("t"):
		case joaat("u"):
		case joaat("v"):
		case joaat("w"):
		case joaat("x"):
		case joaat("y"):
		case joaat("z"):
		case joaat("'"):
		case joaat("¡"):
		case joaat("´"):
		case 2085797791:
		case 1779178258:
		case joaat("¿"):
		case 1002815086:
		case joaat("º"):
		case -1463969696:
		case 929379417:
		case 1872733385:
		case joaat("ap1_04_props_combo119_slod_lod"):
		case -1893407789:
		case 322169851:
		case joaat("¥"):
		case 1155256502:
		case -303947068:
		case joaat("à"):
		case 1580073450:
		case -1816040176:
		case joaat("è"):
		case -570130027:
		case 847817372:
		case joaat("ì"):
		case 1518140036:
		case joaat("ò"):
		case -1243958978:
		case -1415865152:
		case joaat("ù"):
		case -1417405279:
		case -891331753:
		case joaat("ç"):
		case joaat("ß"):
		case -1249660752:
		case -262035881:
		case -1831113888:
		case -636388917:
		case joaat("Ä"):
		case 682858238:
		case -95077822:
		case -2061447209:
		case -1075133078:
		case 831170732:
		case 1608844640:
		case -1396465892:
		case joaat("Ö"):
		case -1509813883:
		case joaat("Ü"):
		case -1203980806:
		case joaat("Ñ"):
		case joaat("Ç"):
		case 318032343:
		case 1076044851:
		case -1061182110:
		case -1366949649:
		case -1984415916:
		case 2004521689:
		case -475305151:
		case -763836196:
		case -1664459388:
		case 1373751212:
		case -605463615:
		case -1828697628:
		case 1537399602:
		case -1398407881:
		case 927175280:
		case 615869784:
		case -1212476575:
		case -307232946:
		case -286883401:
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("!"):
		case 1108028131:
		case joaat("#"):
		case joaat("$"):
		case joaat("%"):
		case joaat("&"):
		case 94056980:
		case joaat("("):
		case joaat(")"):
		case joaat("*"):
		case joaat("+"):
		case 625527429:
		case joaat("-"):
		case 1224511980:
		case 616155491:
		case 897542894:
		case 1232048846:
		case 1529493059:
		case 1844665301:
		case joaat("?"):
		case joaat("@"):
		case 1550006445:
		case 1518810369:
		case 2118548595:
		case joaat("^"):
		case joaat("_"):
		case joaat("`"):
		case joaat("{"):
		case joaat("|"):
		case joaat("}"):
		case joaat("~"):
		case -1156959575:
		case 1114287026:
		case 383898785:
		case 1667493284:
		case 1390726294:
		case 811599757:
		case 80523367:
		case -1034900624:
		case -1075435881:
		case 1028923773:
		case 999169521:
		case 1239258034:
		case joaat("a"):
		case joaat("b"):
		case joaat("c"):
		case joaat("d"):
		case joaat("e"):
		case joaat("f"):
		case joaat("g"):
		case joaat("h"):
		case joaat("i"):
		case joaat("j"):
		case joaat("k"):
		case joaat("l"):
		case joaat("m"):
		case joaat("n"):
		case joaat("o"):
		case joaat("p"):
		case joaat("q"):
		case joaat("r"):
		case joaat("s"):
		case joaat("t"):
		case joaat("u"):
		case joaat("v"):
		case joaat("w"):
		case joaat("x"):
		case joaat("y"):
		case joaat("z"):
		case joaat("'"):
		case joaat("¡"):
		case joaat("´"):
		case 2085797791:
		case 1779178258:
		case joaat("¿"):
		case 1002815086:
		case joaat("º"):
		case -1463969696:
		case 929379417:
		case 1872733385:
		case joaat("ap1_04_props_combo119_slod_lod"):
		case -1893407789:
		case 322169851:
		case 600083096:
		case joaat("¥"):
		case 1155256502:
		case -303947068:
		case joaat("à"):
		case 1580073450:
		case -1816040176:
		case joaat("è"):
		case -570130027:
		case 847817372:
		case joaat("ì"):
		case 1518140036:
		case joaat("ò"):
		case -1243958978:
		case -1415865152:
		case joaat("ù"):
		case -1417405279:
		case -891331753:
		case joaat("ç"):
		case joaat("ß"):
		case -1249660752:
		case -262035881:
		case -1831113888:
		case -636388917:
		case joaat("Ä"):
		case 682858238:
		case -95077822:
		case -2061447209:
		case -1075133078:
		case 831170732:
		case 1608844640:
		case -1396465892:
		case joaat("Ö"):
		case -1509813883:
		case joaat("Ü"):
		case -1203980806:
		case joaat("Ñ"):
		case joaat("Ç"):
			return 1;
		
		default:
	}
	return 0;
}

int func_985(char* sParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	if (!unk_0xD6F9DEE4765092A9(sParam0))
	{
		iVar1 = unk_0x70E57E9927B6BA58(&cParam1);
		iVar2 = unk_0x09112CCF7824FE38(sParam0);
		iVar3 = unk_0x09112CCF7824FE38(&cParam1);
		iVar4 = 0;
		while (iVar4 <= (iVar2 - 1))
		{
			if ((iVar4 + iVar3) > iVar2)
			{
				return 0;
			}
			else if (unk_0x70E57E9927B6BA58(unk_0xA4FC5B871651C9F9(sParam0, iVar4, (iVar4 + iVar3))) == iVar1)
			{
				iVar0 = 1;
			}
			else
			{
				iVar4++;
			}
		}
	}
	return iVar0;
}

int func_986(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "&#166;", 16);
			return 1;
		
		case 1:
			StringCopy(sParam1, "&#8249;", 16);
			return 1;
		
		default:
	}
	return 0;
}

int func_987(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, int iParam30, int iParam31, bool bParam32, char* sParam33, bool bParam34, int iParam35, bool bParam36, bool bParam37, bool bParam38)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<16> Var10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x78ABC1D11B34F324() || unk_0x15CCE8886267624F())
	{
		return 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (bParam3)
			{
				if (iParam7 == 6)
				{
					iVar6 = 121;
				}
				else if (iParam7 == 7)
				{
					iVar6 = 63;
				}
				else if (func_991())
				{
					iVar6 = 21;
				}
				else
				{
					iVar6 = 51;
				}
				if (*uParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_991())
						{
							sVar4 = "FMMC_KEY_TIS2SJ";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP2";
						}
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_KEY_TIP7";
						iVar6 = 21;
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_KEY_TIP5";
						if (unk_0x486FF5D06E9659F1(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_KEY_TIP6";
						if (unk_0x486FF5D06E9659F1(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_KEY_TIP10";
					}
					else if (iParam7 == 8)
					{
						sVar4 = "FMMC_KEY_TXT7";
					}
					else if (iParam7 == 9)
					{
						sVar4 = "FMMC_KEY_TXT8";
					}
					else if (iParam7 == 10)
					{
						sVar4 = "FMMC_KEY_VSS";
					}
				}
				else if (func_991())
				{
					sVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar4 = "FMMC_KEY_TIP2F";
				}
				if (unk_0x1226C55CA7D2269A())
				{
					sVar5 = sVar4;
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						sVar4 = "FMMC_SS_RL_35";
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_SS_RL_32";
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_SS_RL_33";
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_SS_RL_34";
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_SS_RL_49";
					}
					else if (iParam7 == 7)
					{
						sVar4 = "FMMC_SS_RL_57";
					}
				}
				if (unk_0x761778199FE1211C())
				{
					iVar7 = 6;
				}
				else if (unk_0x8608526719A575EE() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (bParam24)
				{
					if (bParam26)
					{
						sVar4 = "LINE_NUMBER";
					}
					else
					{
						sVar4 = "WEB_SEARCH";
					}
				}
				if (iParam35 != -1)
				{
					iVar6 = iParam35;
				}
				if (unk_0xD6F9DEE4765092A9(sParam5))
				{
					unk_0xCFF30C6181F9B8BC(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					unk_0xCFF30C6181F9B8BC(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (unk_0x761778199FE1211C())
				{
					iVar8 = 6;
				}
				else if (unk_0x8608526719A575EE() == 0)
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (bParam4)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (unk_0x8608526719A575EE() == 10)
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 25;
					}
					if (func_313())
					{
						iVar9 = 64;
					}
					unk_0x8CB5613E14D44228(2);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(&(Global_4718592.f_127185)))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, &(Global_4718592.f_127185), "", "", "", iVar9);
					}
				}
				else if (bParam32)
				{
					sVar4 = "CST_KEY_TEXT";
					iVar9 = 63;
					unk_0x8CB5613E14D44228(2);
					if (unk_0xD6F9DEE4765092A9(&(Global_4718592.f_186239)))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, &(Global_4718592.f_186239), "", "", "", iVar9);
					}
				}
				else if (bParam25)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_BLIMP";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					unk_0x8CB5613E14D44228(2);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(&(Global_4718592.f_186239)))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, &(Global_4718592.f_186239), "", "", "", iVar9);
					}
				}
				else if (iParam30 != -1)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "DMC_HTM_EH";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					unk_0x8CB5613E14D44228(2);
					Var10 = { Global_4718592.f_186271[iParam30 /*16*/] };
					if (iParam31 > -1)
					{
						Var10 = { Global_4718592.f_186352[iParam30 /*65*/][iParam31 /*16*/] };
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(&Var10))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, &Var10, "", "", "", iVar9);
					}
				}
				else if (bParam27)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					else
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					iVar9 = 60;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					unk_0x8CB5613E14D44228(2);
					unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam34)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_CDM_T";
					}
					else
					{
						sVar4 = "FMMC_CDM_F1";
					}
					iVar9 = 60;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					unk_0x8CB5613E14D44228(2);
					unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam13)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (!unk_0xD6F9DEE4765092A9(sParam33))
					{
						sVar4 = sParam33;
					}
					iVar9 = 63;
					unk_0x8CB5613E14D44228(2);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (unk_0x8608526719A575EE() == 0)
					{
						iVar9 = 63;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPT";
						}
						else if (*uParam1 == -3)
						{
							sVar4 = "FMMC_KEY_TIPTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPTF";
						}
					}
					else
					{
						iVar9 = 63;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_ALTT";
						}
						else if (*uParam1 == -3)
						{
							sVar4 = "FMMC_KEY_ALTTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_ALTTF";
						}
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar11 = 0;
					while (iVar11 <= 7)
					{
						if (unk_0xFF692AB7350A74D7(&(Global_4718592.f_127336[iVar11 /*16*/])))
						{
							StringCopy(&(Global_4718592.f_127336[iVar11 /*16*/]), "", 64);
						}
						iVar11++;
					}
					unk_0x305739C2F5BFA5D9(iVar8, sVar4, sVar5, &(Global_4718592.f_127336[0 /*16*/]), &(Global_4718592.f_127336[1 /*16*/]), &(Global_4718592.f_127336[2 /*16*/]), &(Global_4718592.f_127336[3 /*16*/]), &(Global_4718592.f_127336[4 /*16*/]), &(Global_4718592.f_127336[5 /*16*/]), &(Global_4718592.f_127336[6 /*16*/]), &(Global_4718592.f_127336[7 /*16*/]), iVar9);
				}
				else if (bParam6)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP4";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP4F";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					iVar9 = 126;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(&(Global_4718592.f_108016[iParam16 /*43*/].f_6[0 /*16*/])))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						iVar12 = 0;
						while (iVar12 <= 1)
						{
							if (unk_0xFF692AB7350A74D7(&(Global_4718592.f_108016[iParam16 /*43*/].f_6[iVar12 /*16*/])))
							{
								StringCopy(&(Global_4718592.f_108016[iParam16 /*43*/].f_6[iVar12 /*16*/]), "", 64);
							}
							iVar12++;
						}
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, &(Global_4718592.f_108016[iParam16 /*43*/].f_6[0 /*16*/]), &(Global_4718592.f_108016[iParam16 /*43*/].f_6[1 /*16*/]), "", "", iVar9);
					}
				}
				else if (bParam8)
				{
					iVar9 = 61;
					if (bParam11)
					{
						if (func_991())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_SOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMASH_SODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_SODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "CELL_EMAIL_SOD";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "CELL_EMAIL_SODE";
						}
						else
						{
							sVar4 = "CELL_EMAIL_SODF";
						}
						if (unk_0x1226C55CA7D2269A())
						{
							sVar5 = sVar4;
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_991())
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8FS";
						}
						if (unk_0x1226C55CA7D2269A())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
						iVar9 = 21;
					}
					else
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8F";
						}
						if (unk_0x1226C55CA7D2269A())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam12)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP9";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP9F";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					iVar9 = 16;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam14)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					iVar9 = 16;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam28)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIPTN";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPTNF";
					}
					iVar9 = 16;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam15)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					iVar9 = 61;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP14S";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP14ES";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP14OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP14FS";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (func_422())
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 20;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam29)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP16S";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP16ES";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP16OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP16FS";
					}
					if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP16IS";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP16N";
					}
					unk_0x8CB5613E14D44228(64);
					iVar9 = 15;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18 > 0)
				{
					if (bParam20)
					{
						sVar4 = "FMMC_KEY_TIP15B";
					}
					else if (bParam21)
					{
						sVar4 = "FMMC_KEY_TIP15U";
					}
					else if (bParam19)
					{
						sVar4 = "FMMC_KEY_TIP15N";
					}
					else if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP15I";
					}
					else if (*uParam1 == 0)
					{
						if (iParam18 == 2)
						{
							sVar4 = "FMMC_MCK_TIP15";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP15";
						}
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP15F";
					}
					if (unk_0x1226C55CA7D2269A() || func_422())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam36)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "ACID_NAME_TIP1";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "ACID_NAME_TIP2";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "ACID_NAME_TIP3";
					}
					else
					{
						sVar4 = "ACID_NAME_TIP4";
					}
					if (bParam23)
					{
						sVar4 = "ACID_NAME_TIP5s";
					}
					if (unk_0x1226C55CA7D2269A() || func_422())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam37)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "LAB_NAME_TIP1";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "LAB_NAME_TIP2";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "LAB_NAME_TIP3";
					}
					else
					{
						sVar4 = "LAB_NAME_TIP4";
					}
					if (bParam23)
					{
						sVar4 = "LAB_NAME_TIP5s";
					}
					if (unk_0x1226C55CA7D2269A() || func_422())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam38)
				{
					if (bParam23)
					{
						sVar4 = "CSTM_TLTIP_TIP5";
					}
					else if (bParam19)
					{
						sVar4 = "CSTM_TLTIP_TIP6";
					}
					else if (*uParam1 == 0)
					{
						sVar4 = "CSTM_TLTIP_TIP1";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "CSTM_TLTIP_TIP2";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "CSTM_TLTIP_TIP3";
					}
					else
					{
						sVar4 = "CSTM_TLTIP_TIP4";
					}
					if (unk_0x1226C55CA7D2269A() || func_422())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					unk_0x8CB5613E14D44228(64);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (unk_0x8608526719A575EE() == 0)
					{
						iVar9 = 501;
						if (bParam11)
						{
							if (func_991())
							{
								if (*uParam1 == 0)
								{
									sVar4 = "CELL_EMASH_BOD";
								}
								else if (*uParam1 == -1)
								{
									sVar4 = "CELL_EMASH_BODE";
								}
								else
								{
									sVar4 = "CELL_EMASH_BODF";
								}
							}
							else if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMAIL_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMAIL_BODE";
							}
							else
							{
								sVar4 = "CELL_EMAIL_BODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP3";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIP3E";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP3F";
						}
					}
					else
					{
						iVar9 = 251;
						if (func_991())
						{
							iVar9 = 150;
						}
						if (bParam11)
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMASH_BODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_BODF";
							}
						}
						else if (func_991())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "FMMC_KEY_TIPSS";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "FMMC_KEY_TIPSSE";
							}
							else
							{
								sVar4 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPS";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIPSE";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPSF";
						}
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M20";
						if (bParam11)
						{
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					iVar13 = 0;
					while (iVar13 <= 7)
					{
						if (unk_0xFF692AB7350A74D7(&(Global_4718592.f_127207[iVar13 /*16*/])))
						{
							StringCopy(&(Global_4718592.f_127207[iVar13 /*16*/]), "", 64);
						}
						iVar13++;
					}
					if (!unk_0xD6F9DEE4765092A9(sParam33))
					{
						sVar4 = sParam33;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (bParam11)
					{
						unk_0x305739C2F5BFA5D9(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						unk_0x305739C2F5BFA5D9(iVar8, sVar4, sVar5, &(Global_4718592.f_127207[0 /*16*/]), &(Global_4718592.f_127207[1 /*16*/]), &(Global_4718592.f_127207[2 /*16*/]), &(Global_4718592.f_127207[3 /*16*/]), &(Global_4718592.f_127207[4 /*16*/]), &(Global_4718592.f_127207[5 /*16*/]), &(Global_4718592.f_127207[6 /*16*/]), &(Global_4718592.f_127207[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1919021, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0x66DA7155B68E7638();
			switch (*uParam0)
			{
				case 0:
					return 0;
				
				case 3:
					*uParam2 = 0;
					*uParam0 = 0;
					*uParam1 = 0;
					return 0;
				
				case 2:
					*uParam1 = 0;
					return 0;
				
				case 1:
					if ((bParam4 || bParam13) || bParam29)
					{
						if (unk_0xD6F9DEE4765092A9(&Global_1919021))
						{
							StringCopy(&Global_1919021, unk_0x43FB09E8020180EA(), 64);
							if (unk_0xD6F9DEE4765092A9(&Global_1919021))
							{
								*uParam1 = 0;
								return 1;
							}
							iVar1 = unk_0x09112CCF7824FE38(unk_0x43FB09E8020180EA());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0xD6F9DEE4765092A9(&Global_1919021))
									{
										if (unk_0x1B79E937E91F40C3(" ", unk_0xA4FC5B871651C9F9(&Global_1919021, 0, 1)))
										{
											iVar2 = unk_0x09112CCF7824FE38(&Global_1919021);
											StringCopy(&Global_1919021, unk_0xA4FC5B871651C9F9(&Global_1919021, 1, iVar2), 64);
										}
									}
									else
									{
										*uParam1 = 0;
										return 1;
									}
								}
								iVar3++;
							}
						}
					}
					if (unk_0x3D1C2138A70E7348(*uParam1))
					{
						if (!unk_0x11A87C58414E6C46(*uParam1))
						{
							unk_0x65662724C6BC4810();
							iVar0 = unk_0x0AE6BE5940D835FA(*uParam1);
							switch (iVar0)
							{
								case 0:
									if (bParam9)
									{
										StringCopy(&Global_1919021, unk_0x43FB09E8020180EA(), 64);
										iVar1 = unk_0x09112CCF7824FE38(&Global_1919021);
										iVar3 = 0;
										while (iVar3 <= (iVar1 - 1))
										{
											if (*uParam2 != 0)
											{
												if (!unk_0xD6F9DEE4765092A9(&Global_1919021))
												{
													if (unk_0x1B79E937E91F40C3(" ", unk_0xA4FC5B871651C9F9(&Global_1919021, iVar3, iVar3 + 1)))
													{
														*uParam1 = -3;
													}
												}
											}
											iVar3++;
										}
									}
									if (*uParam1 != -3)
									{
										*uParam1 = 0;
										return 1;
									}
									else
									{
										*uParam2 = 0;
										*uParam0 = 0;
										return 0;
									}
									break;
								
								case 1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
								
								case -1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (unk_0x486FF5D06E9659F1(joaat("appinternet")) == 0)
							{
								unk_0x65662724C6BC4810();
								*uParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						if (bParam22)
						{
							unk_0xE2E0A9E99F465D83(&Global_1919021, uParam1);
						}
						else
						{
							unk_0x9586B50628529A63(&Global_1919021, uParam1);
						}
					}
					else if (unk_0xD6F9DEE4765092A9(unk_0x43FB09E8020180EA()))
					{
						*uParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x65662724C6BC4810();
						return 0;
					}
					else if (bParam22)
					{
						unk_0xE2E0A9E99F465D83(unk_0x43FB09E8020180EA(), uParam1);
					}
					else
					{
						unk_0x9586B50628529A63(unk_0x43FB09E8020180EA(), uParam1);
					}
					if (func_422())
					{
						if ((!unk_0x261E3728EE56B3AC() || func_989() == 0) || func_988() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						unk_0xB661D6EC3F065818("ERROR_CHECKYACHTNAME");
						unk_0x654AFEEF256E650F(1);
					}
					else if (bParam29)
					{
						unk_0xB661D6EC3F065818("ERROR_CHECKVEHICLENAME");
						unk_0x654AFEEF256E650F(1);
					}
					else
					{
						unk_0xB661D6EC3F065818("ERROR_CHECKPROFANITY");
						unk_0x654AFEEF256E650F(1);
					}
					if (!unk_0x3D1C2138A70E7348(*uParam1))
					{
						if (!unk_0xD6F9DEE4765092A9(&Global_1919021))
						{
							*uParam1 = -1;
						}
						else
						{
							*uParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x65662724C6BC4810();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_988()
{
	if (!func_989())
	{
		return 1;
	}
	return 0;
}

int func_989()
{
	if (func_990())
	{
		return 0;
	}
	if (unk_0x5676319ACE5BEC37() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_990()
{
	return Global_2696683;
}

int func_991()
{
	if ((((unk_0x8608526719A575EE() == 7 || unk_0x8608526719A575EE() == 8) || unk_0x8608526719A575EE() == 9) || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 12)
	{
		return 1;
	}
	return 0;
}

int func_992()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_2738934.f_6035)
	{
		func_993(iLocal_180, &uVar0, func_997(iLocal_180), &(Local_130.f_181.f_70), 0);
	}
	else
	{
		func_993(iLocal_180, &uVar0, func_997(iLocal_180), &(Local_130.f_181.f_70), 1);
	}
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	unk_0x8744D2E3FC95740E(&(Local_130.f_363), 21);
	unk_0x8744D2E3FC95740E(&(Local_130.f_363), 22);
	func_381(Local_130.f_181.f_69, 1, 1);
	if (!Global_262145.f_31863)
	{
		iVar1 = iLocal_180;
		iVar2 = Local_130.f_181.f_70[Local_130.f_181.f_69];
		if (func_961(iVar1, &Global_1919005, iVar2))
		{
			if (unk_0xD6F9DEE4765092A9(&Global_1919005))
			{
				StringCopy(&Global_1919005, "", 64);
				if (func_1320())
				{
					if (unk_0xAE231F549813BBDF(2))
					{
						func_383(37, "MCHNC_TLTP_ADD2", -1, 0);
					}
					else
					{
						func_382(179, "MCHNC_TLTP_ADD2", -1);
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 21);
			}
			else
			{
				if (func_1320())
				{
					func_383(178, "MCHNC_TLTP_CLR", -1, 0);
					if (unk_0xAE231F549813BBDF(2))
					{
						func_383(37, "MCHNC_TLTP_EDIT", -1, 0);
					}
					else
					{
						func_382(179, "MCHNC_TLTP_EDIT", -1);
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 21);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 22);
			}
		}
	}
	Local_130.f_181.f_2 = uVar0;
	return 1;
}

void func_993(int iParam0, var uParam1, char* sParam2, var uParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	
	func_82(0, 0);
	func_81(sParam2);
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	iVar2 = 0;
	*uParam1 = 0;
	iVar5 = func_996(iParam0);
	iVar2 = 0;
	while (iVar2 < func_995(iParam0))
	{
		bVar0 = false;
		iVar6 = (iVar2 * iVar5);
		iVar1 = 0;
		while (iVar1 < iVar5)
		{
			iVar3 = ((func_224(iParam0) + iVar6) + iVar1);
			func_223(iVar3, &iVar4, 1);
			if (iVar4 >= 0 && (!func_187(iVar3) || iParam4))
			{
				if ((((unk_0xAD1840C2E6AF7D5E(func_174(iVar4)) && !func_214(func_174(iVar4), 1)) && !func_213(func_174(iVar4))) && func_220(func_174(iVar4))) && !func_202(iVar4))
				{
					if (!BitTest(Global_1586521[iVar4 /*142*/].f_103, 10))
					{
						bVar0 = true;
					}
					else
					{
						iVar1++;
					}
					StringCopy(&Var7, func_994(iParam0, iVar2), 24);
					func_63(*uParam1, &Var7, 0, bVar0, 0, 0, 0);
					(*uParam3)[*uParam1] = iVar2;
					*uParam1++;
					iVar2++;
				}

char* func_994(int iParam0, int iParam1)
{
	if (iParam0 == 29)
	{
		switch (iParam1)
		{
			case 0:
				return "MSG_B1";
				break;
			
			case 1:
				return "MSG_B2";
				break;
			
			case 2:
				return "MSG_B3";
				break;
			
			case 3:
				return "MSG_B4";
				break;
			
			case 4:
				return "MSG_B5";
				break;
			
			default:
				break;
			}
	}
	return "";
}

int func_995(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return 5;
		
		default:
	}
	return 0;
	return 0;
}

int func_996(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return 10;
		
		default:
	}
	return 0;
	return 0;
}

char* func_997(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return "WIN22_GARNAME";
			break;
		
		default:
			if (func_998(iParam0))
			{
			}
			break;
	}
	return "";
}

int func_998(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return 1;
			break;
	}
	return 0;
}

int func_999()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = iLocal_180;
	iVar3 = iLocal_181;
	if (func_1042(iLocal_180))
	{
		if (func_971(iLocal_181))
		{
			iVar2 = iLocal_181;
			iVar3 = -1;
		}
	}
	else if (func_971(iLocal_181))
	{
	}
	func_1000(&uLocal_169, &iVar1, &iVar0, "MPCT_PERVEH1", &iVar2, 1, iVar3);
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	func_381(Local_130.f_181.f_69, 1, 1);
	if (iVar1 <= 0)
	{
		func_32(4);
		return 0;
	}
	else if (iVar1 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&bLocal_179, 2);
		iVar0++;
	}
	Local_130.f_181.f_2 = iVar0;
	return 1;
}

void func_1000(var uParam0, var uParam1, var uParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_82(0, 0);
	func_81(sParam3);
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	*uParam2 = 0;
	*uParam1 = 0;
	if (!func_998(*iParam4))
	{
		iParam6 = -1;
	}
	if (*iParam4 < 32)
	{
		if (func_156(*iParam4, -1) > 0 && !func_232(*iParam4))
		{
			iVar3 = func_225(*iParam4, -1, 1);
			if (*iParam4 == 13)
			{
				iVar3 = 11;
			}
			else if (*iParam4 == 18)
			{
				iVar3 = 10;
			}
			else if (iParam6 >= 0 && func_998(*iParam4))
			{
				iVar3 = func_996(*iParam4);
			}
			iVar0 = 0;
			while (iVar0 < iVar3)
			{
				(*uParam0)[iVar0] = -1;
				iVar1 = (func_224(*iParam4) + iVar0);
				if (iParam6 >= 0)
				{
					iVar1 = (iVar1 + (iVar3 * iParam6));
				}
				func_223(iVar1, &iVar2, 1);
				func_1001(uParam0, iVar0, iVar1, iVar2, *iParam4, uParam1, uParam2, iParam5);
				iVar0++;
			}
		}
	}
	else
	{
		iVar4 = func_161(*iParam4);
		iVar0 = 0;
		while (iVar0 < func_218(iVar4))
		{
			iVar1 = (func_217(iVar4) + iVar0);
			func_223(iVar1, &iVar2, 1);
			if (iVar2 >= 0)
			{
				func_1001(uParam0, iVar0, iVar1, iVar2, *iParam4, uParam1, uParam2, iParam5);
			}
			iVar0++;
		}
	}
}

void func_1001(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	
	if ((iParam3 >= 0 && unk_0xAD1840C2E6AF7D5E(func_174(iParam3))) && (!func_187(iParam2) || uParam7))
	{
		func_1038(iParam3);
		iVar0 = func_174(iParam3);
		if (func_1037(iVar0) && func_1036(iVar0, iParam3))
		{
			if (!func_214(iVar0, 1) && !func_213(iVar0))
			{
				if (func_220(iVar0) && !func_202(iParam3))
				{
					if (!BitTest(Global_1586521[iParam3 /*142*/].f_103, 10))
					{
						func_1029(*uParam6, iParam4, iParam3, iParam2, iParam1, 1);
						(*uParam0)[*uParam5] = iParam3;
						*uParam5++;
						*uParam6++;
					}
				}
			}
		}
		else
		{
			func_1002(iParam3, 0, -1);
		}
	}
}

void func_1002(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	func_188(iParam0, &iVar0);
	if (iVar0 >= 0)
	{
		func_1023(iVar0, -1, iParam2);
	}
	func_1019(iParam0, iParam1);
	func_1016(&(Global_1586521[iParam0 /*142*/]));
	Global_2359296[func_177() /*5570*/].f_681.f_1275 = unk_0x39D1D336459711BE();
	func_1003(iParam0, &(Global_1586521[iParam0 /*142*/]), 0, iParam2, 0, 0);
}

int func_1003(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2359296[func_177() /*5570*/].f_681.f_1275 = unk_0x39D1D336459711BE();
	}
	if (func_1015(iParam0))
	{
		return 1;
	}
	if (!bParam4)
	{
	}
	iVar1 = func_1014(1411, iParam0);
	func_655(iVar1, uParam1->f_138, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_1014(1412, iParam0);
	func_655(iVar1, uParam1->f_139, iParam3);
	if (!bParam4)
	{
	}
	if (func_1013(iParam0))
	{
	}
	else
	{
		iVar1 = func_1014(1413, iParam0);
		func_655(iVar1, *uParam1, iParam3);
		if (!bParam4)
		{
		}
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_1014(1414, iParam0) + iVar0);
				func_655(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			else
			{
				iVar1 = (func_1012(iParam0) + (iVar0 - 25));
				func_655(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_1014(1439, iParam0) + iVar0);
			func_655(iVar1, uParam1->f_59[iVar0], iParam3);
			iVar0++;
		}
	}
	iVar1 = func_1014(1441, iParam0);
	func_655(iVar1, uParam1->f_62, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_1014(1442, iParam0);
	func_655(iVar1, uParam1->f_63, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_1014(1443, iParam0);
	func_655(iVar1, uParam1->f_64, iParam3);
	if (!bParam4)
	{
	}
	if (func_1013(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_1014(1444, iParam0);
		func_655(iVar1, uParam1->f_65, iParam3);
		if (!bParam4)
		{
		}
	}
	iVar1 = func_1014(1445, iParam0);
	func_655(iVar1, uParam1->f_67, iParam3);
	if (func_1013(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_1014(1446, iParam0);
		func_655(iVar1, uParam1->f_68, iParam3);
	}
	iVar1 = func_1014(1447, iParam0);
	func_655(iVar1, uParam1->f_69, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_1014(1448, iParam0);
	func_655(iVar1, uParam1->f_70, -1);
	iVar1 = func_1014(1449, iParam0);
	func_655(iVar1, uParam1->f_71, iParam3);
	iVar1 = func_1014(1450, iParam0);
	func_655(iVar1, uParam1->f_72, iParam3);
	iVar1 = func_1014(1451, iParam0);
	func_655(iVar1, uParam1->f_73, iParam3);
	iVar1 = func_1014(1452, iParam0);
	func_655(iVar1, uParam1->f_5, iParam3);
	iVar1 = func_1014(1453, iParam0);
	func_655(iVar1, uParam1->f_6, iParam3);
	iVar1 = func_1014(1454, iParam0);
	func_655(iVar1, uParam1->f_7, iParam3);
	iVar1 = func_1014(1455, iParam0);
	func_655(iVar1, uParam1->f_8, iParam3);
	if (func_1013(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_1014(3880, iParam0);
		func_655(iVar1, uParam1->f_74, iParam3);
		iVar1 = func_1014(3881, iParam0);
		func_655(iVar1, uParam1->f_75, iParam3);
		iVar1 = func_1014(3882, iParam0);
		func_655(iVar1, uParam1->f_76, iParam3);
		iVar1 = func_1011(iParam0);
		func_655(iVar1, uParam1->f_97, iParam3);
		iVar1 = func_1010(iParam0);
		func_655(iVar1, uParam1->f_99, iParam3);
		iVar1 = func_1009(iParam0);
		func_655(iVar1, uParam1->f_98, iParam3);
		iVar1 = func_1007(iParam0, 0);
		func_655(iVar1, uParam1->f_102, iParam3);
	}
	uVar2 = Global_2359296[func_177() /*5570*/].f_681.f_1275;
	if (bParam5)
	{
		uVar2 = unk_0x39D1D336459711BE();
	}
	func_629(1629, uVar2, iParam3, 1);
	if (!bParam4)
	{
	}
	func_629(func_1005(1, iParam0), uParam1->f_103, iParam3, 1);
	if (!bParam4)
	{
	}
	func_629(func_1005(2, iParam0), uParam1->f_104, iParam3, 1);
	if (!bParam4)
	{
	}
	func_629(func_1005(3, iParam0), uParam1->f_105, iParam3, 1);
	if (!bParam4)
	{
	}
	func_629(func_1005(4, iParam0), uParam1->f_66, iParam3, 1);
	func_629(func_1005(5, iParam0), uParam1->f_77, iParam3, 1);
	if (!bParam4)
	{
	}
	func_629(func_1005(7, iParam0), uParam1->f_140, iParam3, 1);
	if (!func_1013(iParam0))
	{
		if (!unk_0xD6F9DEE4765092A9(&(uParam1->f_1)))
		{
			func_1004(func_1005(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_1004(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_91(iParam0, iParam2);
	if (iVar0 != 0)
	{
		unk_0x9E1D4641E6A5C2F0(iVar0, uParam1);
	}
}

int func_1005(int iParam0, int iParam1)
{
	if (iParam1 >= 363)
	{
		return func_1006(iParam0, iParam1);
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				switch (iParam1)
				{
					case 0:
						return 1630;
					
					case 1:
						return 1637;
					
					case 2:
						return 1644;
					
					case 3:
						return 1651;
					
					case 4:
						return 1658;
					
					case 5:
						return 1665;
					
					case 6:
						return 1672;
					
					case 7:
						return 1679;
					
					case 8:
						return 1686;
					
					case 9:
						return 1693;
					
					case 10:
						return 1700;
					
					case 11:
						return 1706;
					
					case 12:
						return 1712;
					
					case 13:
						return 1718;
					
					case 14:
						return 1797;
					
					case 15:
						return 1804;
					
					case 16:
						return 1811;
					
					case 17:
						return 1818;
					
					case 18:
						return 1825;
					
					case 19:
						return 1832;
					
					case 20:
						return 1839;
					
					case 21:
						return 1846;
					
					case 22:
						return 1853;
					
					case 23:
						return 1860;
					
					case 24:
						return 1866;
					
					case 25:
						return 1872;
					
					case 26:
						return 2167;
					
					case 27:
						return 2174;
					
					case 28:
						return 2181;
					
					case 29:
						return 2188;
					
					case 30:
						return 2195;
					
					case 31:
						return 2202;
					
					case 32:
						return 2209;
					
					case 33:
						return 2216;
					
					case 34:
						return 2223;
					
					case 35:
						return 2230;
					
					case 36:
						return 2237;
					
					case 37:
						return 2243;
					
					case 38:
						return 2249;
					
					case 39:
						return 2831;
					
					case 40:
						return 2838;
					
					case 41:
						return 2845;
					
					case 42:
						return 2852;
					
					case 43:
						return 2859;
					
					case 44:
						return 2866;
					
					case 45:
						return 2873;
					
					case 46:
						return 2880;
					
					case 47:
						return 2887;
					
					case 48:
						return 2894;
					
					case 49:
						return 2901;
					
					case 50:
						return 2907;
					
					case 51:
						return 2913;
					
					case 52:
						return 2955;
					
					case 53:
						return 2962;
					
					case 54:
						return 2969;
					
					case 55:
						return 2976;
					
					case 56:
						return 2983;
					
					case 57:
						return 2990;
					
					case 58:
						return 2997;
					
					case 59:
						return 3004;
					
					case 60:
						return 3011;
					
					case 61:
						return 3018;
					
					case 62:
						return 3025;
					
					case 63:
						return 3031;
					
					case 64:
						return 3037;
					
					case 65:
						return 3238;
					
					case 66:
						return 3246;
					
					case 67:
						return 3254;
					
					case 68:
						return 3262;
					
					case 69:
						return 3270;
					
					case 70:
						return 3278;
					
					case 71:
						return 3286;
					
					case 72:
						return 3294;
					
					case 73:
						return 3302;
					
					case 74:
						return 3310;
					
					case 75:
						return 3318;
					
					case 76:
						return 3326;
					
					case 77:
						return 3334;
					
					case 78:
						return 3342;
					
					case 79:
						return 3350;
					
					case 80:
						return 3358;
					
					case 81:
						return 3366;
					
					case 82:
						return 3374;
					
					case 83:
						return 3382;
					
					case 84:
						return 3390;
					
					case 85:
						return 3398;
					
					case 86:
						return 3405;
					
					case 87:
						return 3412;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4034;
					
					case 89:
						return 4042;
					
					case 90:
						return 4050;
					
					case 91:
						return 4058;
					
					case 92:
						return 4066;
					
					case 93:
						return 4074;
					
					case 94:
						return 4082;
					
					case 95:
						return 4090;
					
					case 96:
						return 4098;
					
					case 97:
						return 4106;
					
					case 98:
						return 4114;
					
					case 99:
						return 4122;
					
					case 100:
						return 4130;
					
					case 101:
						return 4138;
					
					case 102:
						return 4146;
					
					case 103:
						return 4154;
					
					case 104:
						return 4162;
					
					case 105:
						return 4170;
					
					case 106:
						return 4178;
					
					case 107:
						return 4186;
					
					case 108:
						return 4194;
					
					case 109:
						return 4202;
					
					case 110:
						return 4210;
					
					case 111:
						return 4218;
					
					case 112:
						return 4226;
					
					case 113:
						return 4234;
					
					case 114:
						return 4242;
					
					case 115:
						return 4250;
					
					case 116:
						return 4258;
					
					case 117:
						return 4266;
					
					case 118:
						return 4274;
					
					case 119:
						return 4282;
					
					case 120:
						return 4290;
					
					case 121:
						return 4298;
					
					case 122:
						return 4306;
					
					case 123:
						return 4314;
					
					case 124:
						return 4322;
					
					case 125:
						return 4330;
					
					case 126:
						return 4338;
					
					case 127:
						return 4346;
					
					case 128:
						return 4354;
					
					case 129:
						return 4362;
					
					case 130:
						return 4370;
					
					case 131:
						return 4378;
					
					case 132:
						return 4386;
					
					case 133:
						return 4394;
					
					case 134:
						return 4402;
					
					case 135:
						return 4410;
					
					case 136:
						return 4418;
					
					case 137:
						return 4426;
					
					case 138:
						return 4434;
					
					case 139:
						return 4442;
					
					case 140:
						return 4450;
					
					case 141:
						return 4458;
					
					case 142:
						return 4466;
					
					case 143:
						return 4474;
					
					case 144:
						return 4482;
					
					case 145:
						return 4490;
					
					case 146:
						return 4498;
					
					case 147:
						return 4506;
					
					case 148:
						return 4514;
					
					case 149:
						return 4522;
					
					case 150:
						return 4530;
					
					case 151:
						return 4538;
					
					case 152:
						return 4546;
					
					case 153:
						return 4554;
					
					case 154:
						return 4562;
					
					case 155:
						return 4570;
					
					case 156:
						return 4578;
					
					case 157:
						return 4586;
					
					case 158:
						return 5479;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5928;
					
					case 160:
						return 5935;
					
					case 161:
						return 5942;
					
					case 162:
						return 5949;
					
					case 163:
						return 5956;
					
					case 164:
						return 5963;
					
					case 165:
						return 5970;
					
					case 166:
						return 5977;
					
					case 167:
						return 5984;
					
					case 168:
						return 5991;
					
					case 169:
						return 5998;
					
					case 170:
						return 6005;
					
					case 171:
						return 6012;
					
					case 172:
						return 6019;
					
					case 173:
						return 6026;
					
					case 174:
						return 6033;
					
					case 175:
						return 6040;
					
					case 176:
						return 6047;
					
					case 177:
						return 6054;
					
					case 178:
						return 6061;
					
					case 179:
						return 6068;
					
					case 180:
						return 6075;
					
					case 181:
						return 6082;
					
					case 182:
						return 6089;
					
					case 183:
						return 6096;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6173;
					
					case 185:
						return 6180;
					
					case 186:
						return 6187;
					
					case 187:
						return 6194;
					
					case 188:
						return 6201;
					
					case 189:
						return 6208;
					
					case 190:
						return 6215;
					
					case 191:
						return 6222;
					
					case 192:
						return 6229;
					
					case 193:
						return 6236;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6570;
					
					case 195:
						return 6577;
					
					case 196:
						return 6584;
					
					case 197:
						return 6591;
					
					case 198:
						return 6598;
					
					case 199:
						return 6605;
					
					case 200:
						return 6612;
					
					case 201:
						return 6619;
					
					case 202:
						return 6626;
					
					case 203:
						return 6633;
					
					case 204:
						return 6640;
					
					case 205:
						return 6647;
					
					case 206:
						return 6654;
					
					case 207:
						return 6661;
					
					case 208:
						return 6668;
					
					case 209:
						return 6675;
					
					case 210:
						return 6682;
					
					case 211:
						return 6689;
					
					case 212:
						return 6696;
					
					case 213:
						return 6703;
					
					case 214:
						return 6710;
					
					case 215:
						return 6717;
					
					case 216:
						return 6724;
					
					case 217:
						return 6731;
					
					case 218:
						return 6738;
					
					case 219:
						return 6745;
					
					case 220:
						return 6752;
					
					case 221:
						return 6759;
					
					case 222:
						return 6766;
					
					case 223:
						return 6773;
					
					case 224:
						return 6780;
					
					case 225:
						return 6787;
					
					case 226:
						return 6794;
					
					case 227:
						return 6801;
					
					case 228:
						return 6808;
					
					case 229:
						return 6815;
					
					case 230:
						return 6822;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7292;
					
					case 232:
						return 7299;
					
					case 233:
						return 7306;
					
					case 234:
						return 7313;
					
					case 235:
						return 7320;
					
					case 236:
						return 7327;
					
					case 237:
						return 7334;
					
					case 238:
						return 7341;
					
					case 239:
						return 7348;
					
					case 240:
						return 7355;
					
					case 241:
						return 7362;
					
					case 242:
						return 7369;
					
					case 243:
						return 7376;
					
					case 244:
						return 7383;
					
					case 245:
						return 7390;
					
					case 246:
						return 7397;
					
					case 247:
						return 7404;
					
					case 248:
						return 7411;
					
					case 249:
						return 7418;
					
					case 250:
						return 7425;
					
					case 251:
						return 7432;
					
					case 252:
						return 7439;
					
					case 253:
						return 7446;
					
					case 254:
						return 7453;
					
					case 255:
						return 7460;
					
					case 256:
						return 7467;
					
					case 257:
						return 7474;
					
					case 258:
						return 7481;
					
					case 259:
						return 7488;
					
					case 260:
						return 7495;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8015;
					
					case 262:
						return 8022;
					
					case 263:
						return 8029;
					
					case 264:
						return 8036;
					
					case 265:
						return 8043;
					
					case 266:
						return 8050;
					
					case 267:
						return 8057;
					
					case 268:
						return 8064;
					
					case 269:
						return 8071;
					
					case 270:
						return 8078;
					
					case 271:
						return 8539;
					
					case 272:
						return 8546;
					
					case 273:
						return 8553;
					
					case 274:
						return 8560;
					
					case 275:
						return 8567;
					
					case 276:
						return 8574;
					
					case 277:
						return 8581;
					
					case 278:
						return 8588;
					
					case 279:
						return 8595;
					
					case 280:
						return 8602;
					
					case 281:
						return 8986;
					
					case 282:
						return 8993;
					
					case 283:
						return 9000;
					
					case 284:
						return 9007;
					
					case 285:
						return 9014;
					
					case 286:
						return 9021;
					
					case 287:
						return 9028;
					
					case 288:
						return 9035;
					
					case 289:
						return 9042;
					
					case 290:
						return 9049;
					
					case 291:
						return 9056;
					
					case 292:
						return 9062;
					
					case 293:
						return 9068;
					
					case 294:
						return 9074;
					
					case 295:
						return 9081;
					
					case 296:
						return 9088;
					
					case 297:
						return 9095;
					
					case 298:
						return 9102;
					
					case 299:
						return 9109;
					
					case 300:
						return 9116;
					
					case 301:
						return 9123;
					
					case 302:
						return 9130;
					
					case 303:
						return 9137;
					
					case 304:
						return 9144;
					
					case 305:
						return 9150;
					
					case 306:
						return 9156;
					
					case 307:
						return 9637;
					
					case 308:
						return 9644;
					
					case 309:
						return 9651;
					
					case 310:
						return 9658;
					
					case 311:
						return 9665;
					
					case 312:
						return 9672;
					
					case 313:
						return 9679;
					
					case 314:
						return 9686;
					
					case 315:
						return 9693;
					
					case 316:
						return 9700;
					
					case 317:
						return 9922;
					
					case 318:
						return 9929;
					
					case 319:
						return 9936;
					
					case 320:
						return 9943;
					
					case 321:
						return 9950;
					
					case 322:
						return 9957;
					
					case 323:
						return 9964;
					
					case 324:
						return 9971;
					
					case 325:
						return 9978;
					
					case 326:
						return 9985;
					
					case 327:
						return 9992;
					
					case 328:
						return 9999;
					
					case 329:
						return 10006;
					
					case 330:
						return 10013;
					
					case 331:
						return 10020;
					
					case 332:
						return 10027;
					
					case 333:
						return 10034;
					
					case 334:
						return 10041;
					
					case 335:
						return 10048;
					
					case 336:
						return 10055;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10448;
					
					case 338:
						return 10455;
					
					case 339:
						return 10462;
					
					case 340:
						return 10469;
					
					case 341:
						return 10476;
					
					case 342:
						return 10483;
					
					case 343:
						return 10490;
					
					case 344:
						return 10497;
					
					case 345:
						return 10504;
					
					case 346:
						return 10511;
					
					case 347:
						return 10518;
					
					case 348:
						return 10524;
					
					case 349:
						return 10530;
					
					case 350:
						return 10536;
					
					case 351:
						return 10543;
					
					case 352:
						return 10550;
					
					case 353:
						return 10557;
					
					case 354:
						return 10564;
					
					case 355:
						return 10571;
					
					case 356:
						return 10578;
					
					case 357:
						return 10585;
					
					case 358:
						return 10592;
					
					case 359:
						return 10599;
					
					case 360:
						return 10606;
					
					case 361:
						return 10612;
					
					case 362:
						return 10618;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 1631;
					
					case 1:
						return 1638;
					
					case 2:
						return 1645;
					
					case 3:
						return 1652;
					
					case 4:
						return 1659;
					
					case 5:
						return 1666;
					
					case 6:
						return 1673;
					
					case 7:
						return 1680;
					
					case 8:
						return 1687;
					
					case 9:
						return 1694;
					
					case 10:
						return 1701;
					
					case 11:
						return 1707;
					
					case 12:
						return 1713;
					
					case 13:
						return 1719;
					
					case 14:
						return 1798;
					
					case 15:
						return 1805;
					
					case 16:
						return 1812;
					
					case 17:
						return 1819;
					
					case 18:
						return 1826;
					
					case 19:
						return 1833;
					
					case 20:
						return 1840;
					
					case 21:
						return 1847;
					
					case 22:
						return 1854;
					
					case 23:
						return 1861;
					
					case 24:
						return 1867;
					
					case 25:
						return 1873;
					
					case 26:
						return 2168;
					
					case 27:
						return 2175;
					
					case 28:
						return 2182;
					
					case 29:
						return 2189;
					
					case 30:
						return 2196;
					
					case 31:
						return 2203;
					
					case 32:
						return 2210;
					
					case 33:
						return 2217;
					
					case 34:
						return 2224;
					
					case 35:
						return 2231;
					
					case 36:
						return 2238;
					
					case 37:
						return 2244;
					
					case 38:
						return 2250;
					
					case 39:
						return 2832;
					
					case 40:
						return 2839;
					
					case 41:
						return 2846;
					
					case 42:
						return 2853;
					
					case 43:
						return 2860;
					
					case 44:
						return 2867;
					
					case 45:
						return 2874;
					
					case 46:
						return 2881;
					
					case 47:
						return 2888;
					
					case 48:
						return 2895;
					
					case 49:
						return 2902;
					
					case 50:
						return 2908;
					
					case 51:
						return 2914;
					
					case 52:
						return 2956;
					
					case 53:
						return 2963;
					
					case 54:
						return 2970;
					
					case 55:
						return 2977;
					
					case 56:
						return 2984;
					
					case 57:
						return 2991;
					
					case 58:
						return 2998;
					
					case 59:
						return 3005;
					
					case 60:
						return 3012;
					
					case 61:
						return 3019;
					
					case 62:
						return 3026;
					
					case 63:
						return 3032;
					
					case 64:
						return 3038;
					
					case 65:
						return 3239;
					
					case 66:
						return 3247;
					
					case 67:
						return 3255;
					
					case 68:
						return 3263;
					
					case 69:
						return 3271;
					
					case 70:
						return 3279;
					
					case 71:
						return 3287;
					
					case 72:
						return 3295;
					
					case 73:
						return 3303;
					
					case 74:
						return 3311;
					
					case 75:
						return 3319;
					
					case 76:
						return 3327;
					
					case 77:
						return 3335;
					
					case 78:
						return 3343;
					
					case 79:
						return 3351;
					
					case 80:
						return 3359;
					
					case 81:
						return 3367;
					
					case 82:
						return 3375;
					
					case 83:
						return 3383;
					
					case 84:
						return 3391;
					
					case 85:
						return 3399;
					
					case 86:
						return 3406;
					
					case 87:
						return 3413;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4035;
					
					case 89:
						return 4043;
					
					case 90:
						return 4051;
					
					case 91:
						return 4059;
					
					case 92:
						return 4067;
					
					case 93:
						return 4075;
					
					case 94:
						return 4083;
					
					case 95:
						return 4091;
					
					case 96:
						return 4099;
					
					case 97:
						return 4107;
					
					case 98:
						return 4115;
					
					case 99:
						return 4123;
					
					case 100:
						return 4131;
					
					case 101:
						return 4139;
					
					case 102:
						return 4147;
					
					case 103:
						return 4155;
					
					case 104:
						return 4163;
					
					case 105:
						return 4171;
					
					case 106:
						return 4179;
					
					case 107:
						return 4187;
					
					case 108:
						return 4195;
					
					case 109:
						return 4203;
					
					case 110:
						return 4211;
					
					case 111:
						return 4219;
					
					case 112:
						return 4227;
					
					case 113:
						return 4235;
					
					case 114:
						return 4243;
					
					case 115:
						return 4251;
					
					case 116:
						return 4259;
					
					case 117:
						return 4267;
					
					case 118:
						return 4275;
					
					case 119:
						return 4283;
					
					case 120:
						return 4291;
					
					case 121:
						return 4299;
					
					case 122:
						return 4307;
					
					case 123:
						return 4315;
					
					case 124:
						return 4323;
					
					case 125:
						return 4331;
					
					case 126:
						return 4339;
					
					case 127:
						return 4347;
					
					case 128:
						return 4355;
					
					case 129:
						return 4363;
					
					case 130:
						return 4371;
					
					case 131:
						return 4379;
					
					case 132:
						return 4387;
					
					case 133:
						return 4395;
					
					case 134:
						return 4403;
					
					case 135:
						return 4411;
					
					case 136:
						return 4419;
					
					case 137:
						return 4427;
					
					case 138:
						return 4435;
					
					case 139:
						return 4443;
					
					case 140:
						return 4451;
					
					case 141:
						return 4459;
					
					case 142:
						return 4467;
					
					case 143:
						return 4475;
					
					case 144:
						return 4483;
					
					case 145:
						return 4491;
					
					case 146:
						return 4499;
					
					case 147:
						return 4507;
					
					case 148:
						return 4515;
					
					case 149:
						return 4523;
					
					case 150:
						return 4531;
					
					case 151:
						return 4539;
					
					case 152:
						return 4547;
					
					case 153:
						return 4555;
					
					case 154:
						return 4563;
					
					case 155:
						return 4571;
					
					case 156:
						return 4579;
					
					case 157:
						return 4587;
					
					case 158:
						return 5480;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5929;
					
					case 160:
						return 5936;
					
					case 161:
						return 5943;
					
					case 162:
						return 5950;
					
					case 163:
						return 5957;
					
					case 164:
						return 5964;
					
					case 165:
						return 5971;
					
					case 166:
						return 5978;
					
					case 167:
						return 5985;
					
					case 168:
						return 5992;
					
					case 169:
						return 5999;
					
					case 170:
						return 6006;
					
					case 171:
						return 6013;
					
					case 172:
						return 6020;
					
					case 173:
						return 6027;
					
					case 174:
						return 6034;
					
					case 175:
						return 6041;
					
					case 176:
						return 6048;
					
					case 177:
						return 6055;
					
					case 178:
						return 6062;
					
					case 179:
						return 6069;
					
					case 180:
						return 6076;
					
					case 181:
						return 6083;
					
					case 182:
						return 6090;
					
					case 183:
						return 6097;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6174;
					
					case 185:
						return 6181;
					
					case 186:
						return 6188;
					
					case 187:
						return 6195;
					
					case 188:
						return 6202;
					
					case 189:
						return 6209;
					
					case 190:
						return 6216;
					
					case 191:
						return 6223;
					
					case 192:
						return 6230;
					
					case 193:
						return 6237;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6571;
					
					case 195:
						return 6578;
					
					case 196:
						return 6585;
					
					case 197:
						return 6592;
					
					case 198:
						return 6599;
					
					case 199:
						return 6606;
					
					case 200:
						return 6613;
					
					case 201:
						return 6620;
					
					case 202:
						return 6627;
					
					case 203:
						return 6634;
					
					case 204:
						return 6641;
					
					case 205:
						return 6648;
					
					case 206:
						return 6655;
					
					case 207:
						return 6662;
					
					case 208:
						return 6669;
					
					case 209:
						return 6676;
					
					case 210:
						return 6683;
					
					case 211:
						return 6690;
					
					case 212:
						return 6697;
					
					case 213:
						return 6704;
					
					case 214:
						return 6711;
					
					case 215:
						return 6718;
					
					case 216:
						return 6725;
					
					case 217:
						return 6732;
					
					case 218:
						return 6739;
					
					case 219:
						return 6746;
					
					case 220:
						return 6753;
					
					case 221:
						return 6760;
					
					case 222:
						return 6767;
					
					case 223:
						return 6774;
					
					case 224:
						return 6781;
					
					case 225:
						return 6788;
					
					case 226:
						return 6795;
					
					case 227:
						return 6802;
					
					case 228:
						return 6809;
					
					case 229:
						return 6816;
					
					case 230:
						return 6823;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7293;
					
					case 232:
						return 7300;
					
					case 233:
						return 7307;
					
					case 234:
						return 7314;
					
					case 235:
						return 7321;
					
					case 236:
						return 7328;
					
					case 237:
						return 7335;
					
					case 238:
						return 7342;
					
					case 239:
						return 7349;
					
					case 240:
						return 7356;
					
					case 241:
						return 7363;
					
					case 242:
						return 7370;
					
					case 243:
						return 7377;
					
					case 244:
						return 7384;
					
					case 245:
						return 7391;
					
					case 246:
						return 7398;
					
					case 247:
						return 7405;
					
					case 248:
						return 7412;
					
					case 249:
						return 7419;
					
					case 250:
						return 7426;
					
					case 251:
						return 7433;
					
					case 252:
						return 7440;
					
					case 253:
						return 7447;
					
					case 254:
						return 7454;
					
					case 255:
						return 7461;
					
					case 256:
						return 7468;
					
					case 257:
						return 7475;
					
					case 258:
						return 7482;
					
					case 259:
						return 7489;
					
					case 260:
						return 7496;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8016;
					
					case 262:
						return 8023;
					
					case 263:
						return 8030;
					
					case 264:
						return 8037;
					
					case 265:
						return 8044;
					
					case 266:
						return 8051;
					
					case 267:
						return 8058;
					
					case 268:
						return 8065;
					
					case 269:
						return 8072;
					
					case 270:
						return 8079;
					
					case 271:
						return 8540;
					
					case 272:
						return 8547;
					
					case 273:
						return 8554;
					
					case 274:
						return 8561;
					
					case 275:
						return 8568;
					
					case 276:
						return 8575;
					
					case 277:
						return 8582;
					
					case 278:
						return 8589;
					
					case 279:
						return 8596;
					
					case 280:
						return 8603;
					
					case 281:
						return 8987;
					
					case 282:
						return 8994;
					
					case 283:
						return 9001;
					
					case 284:
						return 9008;
					
					case 285:
						return 9015;
					
					case 286:
						return 9022;
					
					case 287:
						return 9029;
					
					case 288:
						return 9036;
					
					case 289:
						return 9043;
					
					case 290:
						return 9050;
					
					case 291:
						return 9057;
					
					case 292:
						return 9063;
					
					case 293:
						return 9069;
					
					case 294:
						return 9075;
					
					case 295:
						return 9082;
					
					case 296:
						return 9089;
					
					case 297:
						return 9096;
					
					case 298:
						return 9103;
					
					case 299:
						return 9110;
					
					case 300:
						return 9117;
					
					case 301:
						return 9124;
					
					case 302:
						return 9131;
					
					case 303:
						return 9138;
					
					case 304:
						return 9145;
					
					case 305:
						return 9151;
					
					case 306:
						return 9157;
					
					case 307:
						return 9638;
					
					case 308:
						return 9645;
					
					case 309:
						return 9652;
					
					case 310:
						return 9659;
					
					case 311:
						return 9666;
					
					case 312:
						return 9673;
					
					case 313:
						return 9680;
					
					case 314:
						return 9687;
					
					case 315:
						return 9694;
					
					case 316:
						return 9701;
					
					case 317:
						return 9923;
					
					case 318:
						return 9930;
					
					case 319:
						return 9937;
					
					case 320:
						return 9944;
					
					case 321:
						return 9951;
					
					case 322:
						return 9958;
					
					case 323:
						return 9965;
					
					case 324:
						return 9972;
					
					case 325:
						return 9979;
					
					case 326:
						return 9986;
					
					case 327:
						return 9993;
					
					case 328:
						return 10000;
					
					case 329:
						return 10007;
					
					case 330:
						return 10014;
					
					case 331:
						return 10021;
					
					case 332:
						return 10028;
					
					case 333:
						return 10035;
					
					case 334:
						return 10042;
					
					case 335:
						return 10049;
					
					case 336:
						return 10056;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10449;
					
					case 338:
						return 10456;
					
					case 339:
						return 10463;
					
					case 340:
						return 10470;
					
					case 341:
						return 10477;
					
					case 342:
						return 10484;
					
					case 343:
						return 10491;
					
					case 344:
						return 10498;
					
					case 345:
						return 10505;
					
					case 346:
						return 10512;
					
					case 347:
						return 10519;
					
					case 348:
						return 10525;
					
					case 349:
						return 10531;
					
					case 350:
						return 10537;
					
					case 351:
						return 10544;
					
					case 352:
						return 10551;
					
					case 353:
						return 10558;
					
					case 354:
						return 10565;
					
					case 355:
						return 10572;
					
					case 356:
						return 10579;
					
					case 357:
						return 10586;
					
					case 358:
						return 10593;
					
					case 359:
						return 10600;
					
					case 360:
						return 10607;
					
					case 361:
						return 10613;
					
					case 362:
						return 10619;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 1632;
					
					case 1:
						return 1639;
					
					case 2:
						return 1646;
					
					case 3:
						return 1653;
					
					case 4:
						return 1660;
					
					case 5:
						return 1667;
					
					case 6:
						return 1674;
					
					case 7:
						return 1681;
					
					case 8:
						return 1688;
					
					case 9:
						return 1695;
					
					case 10:
						return 1702;
					
					case 11:
						return 1708;
					
					case 12:
						return 1714;
					
					case 13:
						return 1720;
					
					case 14:
						return 1799;
					
					case 15:
						return 1806;
					
					case 16:
						return 1813;
					
					case 17:
						return 1820;
					
					case 18:
						return 1827;
					
					case 19:
						return 1834;
					
					case 20:
						return 1841;
					
					case 21:
						return 1848;
					
					case 22:
						return 1855;
					
					case 23:
						return 1862;
					
					case 24:
						return 1868;
					
					case 25:
						return 1874;
					
					case 26:
						return 2169;
					
					case 27:
						return 2176;
					
					case 28:
						return 2183;
					
					case 29:
						return 2190;
					
					case 30:
						return 2197;
					
					case 31:
						return 2204;
					
					case 32:
						return 2211;
					
					case 33:
						return 2218;
					
					case 34:
						return 2225;
					
					case 35:
						return 2232;
					
					case 36:
						return 2239;
					
					case 37:
						return 2245;
					
					case 38:
						return 2251;
					
					case 39:
						return 2833;
					
					case 40:
						return 2840;
					
					case 41:
						return 2847;
					
					case 42:
						return 2854;
					
					case 43:
						return 2861;
					
					case 44:
						return 2868;
					
					case 45:
						return 2875;
					
					case 46:
						return 2882;
					
					case 47:
						return 2889;
					
					case 48:
						return 2896;
					
					case 49:
						return 2903;
					
					case 50:
						return 2909;
					
					case 51:
						return 2915;
					
					case 52:
						return 2957;
					
					case 53:
						return 2964;
					
					case 54:
						return 2971;
					
					case 55:
						return 2978;
					
					case 56:
						return 2985;
					
					case 57:
						return 2992;
					
					case 58:
						return 2999;
					
					case 59:
						return 3006;
					
					case 60:
						return 3013;
					
					case 61:
						return 3020;
					
					case 62:
						return 3027;
					
					case 63:
						return 3033;
					
					case 64:
						return 3039;
					
					case 65:
						return 3240;
					
					case 66:
						return 3248;
					
					case 67:
						return 3256;
					
					case 68:
						return 3264;
					
					case 69:
						return 3272;
					
					case 70:
						return 3280;
					
					case 71:
						return 3288;
					
					case 72:
						return 3296;
					
					case 73:
						return 3304;
					
					case 74:
						return 3312;
					
					case 75:
						return 3320;
					
					case 76:
						return 3328;
					
					case 77:
						return 3336;
					
					case 78:
						return 3344;
					
					case 79:
						return 3352;
					
					case 80:
						return 3360;
					
					case 81:
						return 3368;
					
					case 82:
						return 3376;
					
					case 83:
						return 3384;
					
					case 84:
						return 3392;
					
					case 85:
						return 3400;
					
					case 86:
						return 3407;
					
					case 87:
						return 3414;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4036;
					
					case 89:
						return 4044;
					
					case 90:
						return 4052;
					
					case 91:
						return 4060;
					
					case 92:
						return 4068;
					
					case 93:
						return 4076;
					
					case 94:
						return 4084;
					
					case 95:
						return 4092;
					
					case 96:
						return 4100;
					
					case 97:
						return 4108;
					
					case 98:
						return 4116;
					
					case 99:
						return 4124;
					
					case 100:
						return 4132;
					
					case 101:
						return 4140;
					
					case 102:
						return 4148;
					
					case 103:
						return 4156;
					
					case 104:
						return 4164;
					
					case 105:
						return 4172;
					
					case 106:
						return 4180;
					
					case 107:
						return 4188;
					
					case 108:
						return 4196;
					
					case 109:
						return 4204;
					
					case 110:
						return 4212;
					
					case 111:
						return 4220;
					
					case 112:
						return 4228;
					
					case 113:
						return 4236;
					
					case 114:
						return 4244;
					
					case 115:
						return 4252;
					
					case 116:
						return 4260;
					
					case 117:
						return 4268;
					
					case 118:
						return 4276;
					
					case 119:
						return 4284;
					
					case 120:
						return 4292;
					
					case 121:
						return 4300;
					
					case 122:
						return 4308;
					
					case 123:
						return 4316;
					
					case 124:
						return 4324;
					
					case 125:
						return 4332;
					
					case 126:
						return 4340;
					
					case 127:
						return 4348;
					
					case 128:
						return 4356;
					
					case 129:
						return 4364;
					
					case 130:
						return 4372;
					
					case 131:
						return 4380;
					
					case 132:
						return 4388;
					
					case 133:
						return 4396;
					
					case 134:
						return 4404;
					
					case 135:
						return 4412;
					
					case 136:
						return 4420;
					
					case 137:
						return 4428;
					
					case 138:
						return 4436;
					
					case 139:
						return 4444;
					
					case 140:
						return 4452;
					
					case 141:
						return 4460;
					
					case 142:
						return 4468;
					
					case 143:
						return 4476;
					
					case 144:
						return 4484;
					
					case 145:
						return 4492;
					
					case 146:
						return 4500;
					
					case 147:
						return 4508;
					
					case 148:
						return 4516;
					
					case 149:
						return 4524;
					
					case 150:
						return 4532;
					
					case 151:
						return 4540;
					
					case 152:
						return 4548;
					
					case 153:
						return 4556;
					
					case 154:
						return 4564;
					
					case 155:
						return 4572;
					
					case 156:
						return 4580;
					
					case 157:
						return 4588;
					
					case 158:
						return 5481;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5930;
					
					case 160:
						return 5937;
					
					case 161:
						return 5944;
					
					case 162:
						return 5951;
					
					case 163:
						return 5958;
					
					case 164:
						return 5965;
					
					case 165:
						return 5972;
					
					case 166:
						return 5979;
					
					case 167:
						return 5986;
					
					case 168:
						return 5993;
					
					case 169:
						return 6000;
					
					case 170:
						return 6007;
					
					case 171:
						return 6014;
					
					case 172:
						return 6021;
					
					case 173:
						return 6028;
					
					case 174:
						return 6035;
					
					case 175:
						return 6042;
					
					case 176:
						return 6049;
					
					case 177:
						return 6056;
					
					case 178:
						return 6063;
					
					case 179:
						return 6070;
					
					case 180:
						return 6077;
					
					case 181:
						return 6084;
					
					case 182:
						return 6091;
					
					case 183:
						return 6098;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6175;
					
					case 185:
						return 6182;
					
					case 186:
						return 6189;
					
					case 187:
						return 6196;
					
					case 188:
						return 6203;
					
					case 189:
						return 6210;
					
					case 190:
						return 6217;
					
					case 191:
						return 6224;
					
					case 192:
						return 6231;
					
					case 193:
						return 6238;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6572;
					
					case 195:
						return 6579;
					
					case 196:
						return 6586;
					
					case 197:
						return 6593;
					
					case 198:
						return 6600;
					
					case 199:
						return 6607;
					
					case 200:
						return 6614;
					
					case 201:
						return 6621;
					
					case 202:
						return 6628;
					
					case 203:
						return 6635;
					
					case 204:
						return 6642;
					
					case 205:
						return 6649;
					
					case 206:
						return 6656;
					
					case 207:
						return 6663;
					
					case 208:
						return 6670;
					
					case 209:
						return 6677;
					
					case 210:
						return 6684;
					
					case 211:
						return 6691;
					
					case 212:
						return 6698;
					
					case 213:
						return 6705;
					
					case 214:
						return 6712;
					
					case 215:
						return 6719;
					
					case 216:
						return 6726;
					
					case 217:
						return 6733;
					
					case 218:
						return 6740;
					
					case 219:
						return 6747;
					
					case 220:
						return 6754;
					
					case 221:
						return 6761;
					
					case 222:
						return 6768;
					
					case 223:
						return 6775;
					
					case 224:
						return 6782;
					
					case 225:
						return 6789;
					
					case 226:
						return 6796;
					
					case 227:
						return 6803;
					
					case 228:
						return 6810;
					
					case 229:
						return 6817;
					
					case 230:
						return 6824;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7294;
					
					case 232:
						return 7301;
					
					case 233:
						return 7308;
					
					case 234:
						return 7315;
					
					case 235:
						return 7322;
					
					case 236:
						return 7329;
					
					case 237:
						return 7336;
					
					case 238:
						return 7343;
					
					case 239:
						return 7350;
					
					case 240:
						return 7357;
					
					case 241:
						return 7364;
					
					case 242:
						return 7371;
					
					case 243:
						return 7378;
					
					case 244:
						return 7385;
					
					case 245:
						return 7392;
					
					case 246:
						return 7399;
					
					case 247:
						return 7406;
					
					case 248:
						return 7413;
					
					case 249:
						return 7420;
					
					case 250:
						return 7427;
					
					case 251:
						return 7434;
					
					case 252:
						return 7441;
					
					case 253:
						return 7448;
					
					case 254:
						return 7455;
					
					case 255:
						return 7462;
					
					case 256:
						return 7469;
					
					case 257:
						return 7476;
					
					case 258:
						return 7483;
					
					case 259:
						return 7490;
					
					case 260:
						return 7497;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8017;
					
					case 262:
						return 8024;
					
					case 263:
						return 8031;
					
					case 264:
						return 8038;
					
					case 265:
						return 8045;
					
					case 266:
						return 8052;
					
					case 267:
						return 8059;
					
					case 268:
						return 8066;
					
					case 269:
						return 8073;
					
					case 270:
						return 8080;
					
					case 271:
						return 8541;
					
					case 272:
						return 8548;
					
					case 273:
						return 8555;
					
					case 274:
						return 8562;
					
					case 275:
						return 8569;
					
					case 276:
						return 8576;
					
					case 277:
						return 8583;
					
					case 278:
						return 8590;
					
					case 279:
						return 8597;
					
					case 280:
						return 8604;
					
					case 281:
						return 8988;
					
					case 282:
						return 8995;
					
					case 283:
						return 9002;
					
					case 284:
						return 9009;
					
					case 285:
						return 9016;
					
					case 286:
						return 9023;
					
					case 287:
						return 9030;
					
					case 288:
						return 9037;
					
					case 289:
						return 9044;
					
					case 290:
						return 9051;
					
					case 291:
						return 9058;
					
					case 292:
						return 9064;
					
					case 293:
						return 9070;
					
					case 294:
						return 9076;
					
					case 295:
						return 9083;
					
					case 296:
						return 9090;
					
					case 297:
						return 9097;
					
					case 298:
						return 9104;
					
					case 299:
						return 9111;
					
					case 300:
						return 9118;
					
					case 301:
						return 9125;
					
					case 302:
						return 9132;
					
					case 303:
						return 9139;
					
					case 304:
						return 9146;
					
					case 305:
						return 9152;
					
					case 306:
						return 9158;
					
					case 307:
						return 9639;
					
					case 308:
						return 9646;
					
					case 309:
						return 9653;
					
					case 310:
						return 9660;
					
					case 311:
						return 9667;
					
					case 312:
						return 9674;
					
					case 313:
						return 9681;
					
					case 314:
						return 9688;
					
					case 315:
						return 9695;
					
					case 316:
						return 9702;
					
					case 317:
						return 9924;
					
					case 318:
						return 9931;
					
					case 319:
						return 9938;
					
					case 320:
						return 9945;
					
					case 321:
						return 9952;
					
					case 322:
						return 9959;
					
					case 323:
						return 9966;
					
					case 324:
						return 9973;
					
					case 325:
						return 9980;
					
					case 326:
						return 9987;
					
					case 327:
						return 9994;
					
					case 328:
						return 10001;
					
					case 329:
						return 10008;
					
					case 330:
						return 10015;
					
					case 331:
						return 10022;
					
					case 332:
						return 10029;
					
					case 333:
						return 10036;
					
					case 334:
						return 10043;
					
					case 335:
						return 10050;
					
					case 336:
						return 10057;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10450;
					
					case 338:
						return 10457;
					
					case 339:
						return 10464;
					
					case 340:
						return 10471;
					
					case 341:
						return 10478;
					
					case 342:
						return 10485;
					
					case 343:
						return 10492;
					
					case 344:
						return 10499;
					
					case 345:
						return 10506;
					
					case 346:
						return 10513;
					
					case 347:
						return 10520;
					
					case 348:
						return 10526;
					
					case 349:
						return 10532;
					
					case 350:
						return 10538;
					
					case 351:
						return 10545;
					
					case 352:
						return 10552;
					
					case 353:
						return 10559;
					
					case 354:
						return 10566;
					
					case 355:
						return 10573;
					
					case 356:
						return 10580;
					
					case 357:
						return 10587;
					
					case 358:
						return 10594;
					
					case 359:
						return 10601;
					
					case 360:
						return 10608;
					
					case 361:
						return 10614;
					
					case 362:
						return 10620;
					
					default:
				}
				break;
			
			case 4:
				switch (iParam1)
				{
					case 0:
						return 1633;
					
					case 1:
						return 1640;
					
					case 2:
						return 1647;
					
					case 3:
						return 1654;
					
					case 4:
						return 1661;
					
					case 5:
						return 1668;
					
					case 6:
						return 1675;
					
					case 7:
						return 1682;
					
					case 8:
						return 1689;
					
					case 9:
						return 1696;
					
					case 10:
						return 1703;
					
					case 11:
						return 1709;
					
					case 12:
						return 1715;
					
					case 13:
						return 1721;
					
					case 14:
						return 1800;
					
					case 15:
						return 1807;
					
					case 16:
						return 1814;
					
					case 17:
						return 1821;
					
					case 18:
						return 1828;
					
					case 19:
						return 1835;
					
					case 20:
						return 1842;
					
					case 21:
						return 1849;
					
					case 22:
						return 1856;
					
					case 23:
						return 1863;
					
					case 24:
						return 1869;
					
					case 25:
						return 1875;
					
					case 26:
						return 2170;
					
					case 27:
						return 2177;
					
					case 28:
						return 2184;
					
					case 29:
						return 2191;
					
					case 30:
						return 2198;
					
					case 31:
						return 2205;
					
					case 32:
						return 2212;
					
					case 33:
						return 2219;
					
					case 34:
						return 2226;
					
					case 35:
						return 2233;
					
					case 36:
						return 2240;
					
					case 37:
						return 2246;
					
					case 38:
						return 2252;
					
					case 39:
						return 2834;
					
					case 40:
						return 2841;
					
					case 41:
						return 2848;
					
					case 42:
						return 2855;
					
					case 43:
						return 2862;
					
					case 44:
						return 2869;
					
					case 45:
						return 2876;
					
					case 46:
						return 2883;
					
					case 47:
						return 2890;
					
					case 48:
						return 2897;
					
					case 49:
						return 2904;
					
					case 50:
						return 2910;
					
					case 51:
						return 2916;
					
					case 52:
						return 2958;
					
					case 53:
						return 2965;
					
					case 54:
						return 2972;
					
					case 55:
						return 2979;
					
					case 56:
						return 2986;
					
					case 57:
						return 2993;
					
					case 58:
						return 3000;
					
					case 59:
						return 3007;
					
					case 60:
						return 3014;
					
					case 61:
						return 3021;
					
					case 62:
						return 3028;
					
					case 63:
						return 3034;
					
					case 64:
						return 3040;
					
					case 65:
						return 3241;
					
					case 66:
						return 3249;
					
					case 67:
						return 3257;
					
					case 68:
						return 3265;
					
					case 69:
						return 3273;
					
					case 70:
						return 3281;
					
					case 71:
						return 3289;
					
					case 72:
						return 3297;
					
					case 73:
						return 3305;
					
					case 74:
						return 3313;
					
					case 75:
						return 3321;
					
					case 76:
						return 3329;
					
					case 77:
						return 3337;
					
					case 78:
						return 3345;
					
					case 79:
						return 3353;
					
					case 80:
						return 3361;
					
					case 81:
						return 3369;
					
					case 82:
						return 3377;
					
					case 83:
						return 3385;
					
					case 84:
						return 3393;
					
					case 85:
						return 3401;
					
					case 86:
						return 3408;
					
					case 87:
						return 3415;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4037;
					
					case 89:
						return 4045;
					
					case 90:
						return 4053;
					
					case 91:
						return 4061;
					
					case 92:
						return 4069;
					
					case 93:
						return 4077;
					
					case 94:
						return 4085;
					
					case 95:
						return 4093;
					
					case 96:
						return 4101;
					
					case 97:
						return 4109;
					
					case 98:
						return 4117;
					
					case 99:
						return 4125;
					
					case 100:
						return 4133;
					
					case 101:
						return 4141;
					
					case 102:
						return 4149;
					
					case 103:
						return 4157;
					
					case 104:
						return 4165;
					
					case 105:
						return 4173;
					
					case 106:
						return 4181;
					
					case 107:
						return 4189;
					
					case 108:
						return 4197;
					
					case 109:
						return 4205;
					
					case 110:
						return 4213;
					
					case 111:
						return 4221;
					
					case 112:
						return 4229;
					
					case 113:
						return 4237;
					
					case 114:
						return 4245;
					
					case 115:
						return 4253;
					
					case 116:
						return 4261;
					
					case 117:
						return 4269;
					
					case 118:
						return 4277;
					
					case 119:
						return 4285;
					
					case 120:
						return 4293;
					
					case 121:
						return 4301;
					
					case 122:
						return 4309;
					
					case 123:
						return 4317;
					
					case 124:
						return 4325;
					
					case 125:
						return 4333;
					
					case 126:
						return 4341;
					
					case 127:
						return 4349;
					
					case 128:
						return 4357;
					
					case 129:
						return 4365;
					
					case 130:
						return 4373;
					
					case 131:
						return 4381;
					
					case 132:
						return 4389;
					
					case 133:
						return 4397;
					
					case 134:
						return 4405;
					
					case 135:
						return 4413;
					
					case 136:
						return 4421;
					
					case 137:
						return 4429;
					
					case 138:
						return 4437;
					
					case 139:
						return 4445;
					
					case 140:
						return 4453;
					
					case 141:
						return 4461;
					
					case 142:
						return 4469;
					
					case 143:
						return 4477;
					
					case 144:
						return 4485;
					
					case 145:
						return 4493;
					
					case 146:
						return 4501;
					
					case 147:
						return 4509;
					
					case 148:
						return 4517;
					
					case 149:
						return 4525;
					
					case 150:
						return 4533;
					
					case 151:
						return 4541;
					
					case 152:
						return 4549;
					
					case 153:
						return 4557;
					
					case 154:
						return 4565;
					
					case 155:
						return 4573;
					
					case 156:
						return 4581;
					
					case 157:
						return 4589;
					
					case 158:
						return 5482;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5931;
					
					case 160:
						return 5938;
					
					case 161:
						return 5945;
					
					case 162:
						return 5952;
					
					case 163:
						return 5959;
					
					case 164:
						return 5966;
					
					case 165:
						return 5973;
					
					case 166:
						return 5980;
					
					case 167:
						return 5987;
					
					case 168:
						return 5994;
					
					case 169:
						return 6001;
					
					case 170:
						return 6008;
					
					case 171:
						return 6015;
					
					case 172:
						return 6022;
					
					case 173:
						return 6029;
					
					case 174:
						return 6036;
					
					case 175:
						return 6043;
					
					case 176:
						return 6050;
					
					case 177:
						return 6057;
					
					case 178:
						return 6064;
					
					case 179:
						return 6071;
					
					case 180:
						return 6078;
					
					case 181:
						return 6085;
					
					case 182:
						return 6092;
					
					case 183:
						return 6099;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6176;
					
					case 185:
						return 6183;
					
					case 186:
						return 6190;
					
					case 187:
						return 6197;
					
					case 188:
						return 6204;
					
					case 189:
						return 6211;
					
					case 190:
						return 6218;
					
					case 191:
						return 6225;
					
					case 192:
						return 6232;
					
					case 193:
						return 6239;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6573;
					
					case 195:
						return 6580;
					
					case 196:
						return 6587;
					
					case 197:
						return 6594;
					
					case 198:
						return 6601;
					
					case 199:
						return 6608;
					
					case 200:
						return 6615;
					
					case 201:
						return 6622;
					
					case 202:
						return 6629;
					
					case 203:
						return 6636;
					
					case 204:
						return 6643;
					
					case 205:
						return 6650;
					
					case 206:
						return 6657;
					
					case 207:
						return 6664;
					
					case 208:
						return 6671;
					
					case 209:
						return 6678;
					
					case 210:
						return 6685;
					
					case 211:
						return 6692;
					
					case 212:
						return 6699;
					
					case 213:
						return 6706;
					
					case 214:
						return 6713;
					
					case 215:
						return 6720;
					
					case 216:
						return 6727;
					
					case 217:
						return 6734;
					
					case 218:
						return 6741;
					
					case 219:
						return 6748;
					
					case 220:
						return 6755;
					
					case 221:
						return 6762;
					
					case 222:
						return 6769;
					
					case 223:
						return 6776;
					
					case 224:
						return 6783;
					
					case 225:
						return 6790;
					
					case 226:
						return 6797;
					
					case 227:
						return 6804;
					
					case 228:
						return 6811;
					
					case 229:
						return 6818;
					
					case 230:
						return 6825;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7295;
					
					case 232:
						return 7302;
					
					case 233:
						return 7309;
					
					case 234:
						return 7316;
					
					case 235:
						return 7323;
					
					case 236:
						return 7330;
					
					case 237:
						return 7337;
					
					case 238:
						return 7344;
					
					case 239:
						return 7351;
					
					case 240:
						return 7358;
					
					case 241:
						return 7365;
					
					case 242:
						return 7372;
					
					case 243:
						return 7379;
					
					case 244:
						return 7386;
					
					case 245:
						return 7393;
					
					case 246:
						return 7400;
					
					case 247:
						return 7407;
					
					case 248:
						return 7414;
					
					case 249:
						return 7421;
					
					case 250:
						return 7428;
					
					case 251:
						return 7435;
					
					case 252:
						return 7442;
					
					case 253:
						return 7449;
					
					case 254:
						return 7456;
					
					case 255:
						return 7463;
					
					case 256:
						return 7470;
					
					case 257:
						return 7477;
					
					case 258:
						return 7484;
					
					case 259:
						return 7491;
					
					case 260:
						return 7498;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8018;
					
					case 262:
						return 8025;
					
					case 263:
						return 8032;
					
					case 264:
						return 8039;
					
					case 265:
						return 8046;
					
					case 266:
						return 8053;
					
					case 267:
						return 8060;
					
					case 268:
						return 8067;
					
					case 269:
						return 8074;
					
					case 270:
						return 8081;
					
					case 271:
						return 8542;
					
					case 272:
						return 8549;
					
					case 273:
						return 8556;
					
					case 274:
						return 8563;
					
					case 275:
						return 8570;
					
					case 276:
						return 8577;
					
					case 277:
						return 8584;
					
					case 278:
						return 8591;
					
					case 279:
						return 8598;
					
					case 280:
						return 8605;
					
					case 281:
						return 8989;
					
					case 282:
						return 8996;
					
					case 283:
						return 9003;
					
					case 284:
						return 9010;
					
					case 285:
						return 9017;
					
					case 286:
						return 9024;
					
					case 287:
						return 9031;
					
					case 288:
						return 9038;
					
					case 289:
						return 9045;
					
					case 290:
						return 9052;
					
					case 291:
						return 9059;
					
					case 292:
						return 9065;
					
					case 293:
						return 9071;
					
					case 294:
						return 9077;
					
					case 295:
						return 9084;
					
					case 296:
						return 9091;
					
					case 297:
						return 9098;
					
					case 298:
						return 9105;
					
					case 299:
						return 9112;
					
					case 300:
						return 9119;
					
					case 301:
						return 9126;
					
					case 302:
						return 9133;
					
					case 303:
						return 9140;
					
					case 304:
						return 9147;
					
					case 305:
						return 9153;
					
					case 306:
						return 9159;
					
					case 307:
						return 9640;
					
					case 308:
						return 9647;
					
					case 309:
						return 9654;
					
					case 310:
						return 9661;
					
					case 311:
						return 9668;
					
					case 312:
						return 9675;
					
					case 313:
						return 9682;
					
					case 314:
						return 9689;
					
					case 315:
						return 9696;
					
					case 316:
						return 9703;
					
					case 317:
						return 9925;
					
					case 318:
						return 9932;
					
					case 319:
						return 9939;
					
					case 320:
						return 9946;
					
					case 321:
						return 9953;
					
					case 322:
						return 9960;
					
					case 323:
						return 9967;
					
					case 324:
						return 9974;
					
					case 325:
						return 9981;
					
					case 326:
						return 9988;
					
					case 327:
						return 9995;
					
					case 328:
						return 10002;
					
					case 329:
						return 10009;
					
					case 330:
						return 10016;
					
					case 331:
						return 10023;
					
					case 332:
						return 10030;
					
					case 333:
						return 10037;
					
					case 334:
						return 10044;
					
					case 335:
						return 10051;
					
					case 336:
						return 10058;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10451;
					
					case 338:
						return 10458;
					
					case 339:
						return 10465;
					
					case 340:
						return 10472;
					
					case 341:
						return 10479;
					
					case 342:
						return 10486;
					
					case 343:
						return 10493;
					
					case 344:
						return 10500;
					
					case 345:
						return 10507;
					
					case 346:
						return 10514;
					
					case 347:
						return 10521;
					
					case 348:
						return 10527;
					
					case 349:
						return 10533;
					
					case 350:
						return 10539;
					
					case 351:
						return 10546;
					
					case 352:
						return 10553;
					
					case 353:
						return 10560;
					
					case 354:
						return 10567;
					
					case 355:
						return 10574;
					
					case 356:
						return 10581;
					
					case 357:
						return 10588;
					
					case 358:
						return 10595;
					
					case 359:
						return 10602;
					
					case 360:
						return 10609;
					
					case 361:
						return 10615;
					
					case 362:
						return 10621;
					
					default:
				}
				break;
			
			case 5:
				switch (iParam1)
				{
					case 0:
						return 1634;
					
					case 1:
						return 1641;
					
					case 2:
						return 1648;
					
					case 3:
						return 1655;
					
					case 4:
						return 1662;
					
					case 5:
						return 1669;
					
					case 6:
						return 1676;
					
					case 7:
						return 1683;
					
					case 8:
						return 1690;
					
					case 9:
						return 1697;
					
					case 10:
						return 1704;
					
					case 11:
						return 1710;
					
					case 12:
						return 1716;
					
					case 13:
						return 1722;
					
					case 14:
						return 1801;
					
					case 15:
						return 1808;
					
					case 16:
						return 1815;
					
					case 17:
						return 1822;
					
					case 18:
						return 1829;
					
					case 19:
						return 1836;
					
					case 20:
						return 1843;
					
					case 21:
						return 1850;
					
					case 22:
						return 1857;
					
					case 23:
						return 1864;
					
					case 24:
						return 1870;
					
					case 25:
						return 1876;
					
					case 26:
						return 2171;
					
					case 27:
						return 2178;
					
					case 28:
						return 2185;
					
					case 29:
						return 2192;
					
					case 30:
						return 2199;
					
					case 31:
						return 2206;
					
					case 32:
						return 2213;
					
					case 33:
						return 2220;
					
					case 34:
						return 2227;
					
					case 35:
						return 2234;
					
					case 36:
						return 2241;
					
					case 37:
						return 2247;
					
					case 38:
						return 2253;
					
					case 39:
						return 2835;
					
					case 40:
						return 2842;
					
					case 41:
						return 2849;
					
					case 42:
						return 2856;
					
					case 43:
						return 2863;
					
					case 44:
						return 2870;
					
					case 45:
						return 2877;
					
					case 46:
						return 2884;
					
					case 47:
						return 2891;
					
					case 48:
						return 2898;
					
					case 49:
						return 2905;
					
					case 50:
						return 2911;
					
					case 51:
						return 2917;
					
					case 52:
						return 2959;
					
					case 53:
						return 2966;
					
					case 54:
						return 2973;
					
					case 55:
						return 2980;
					
					case 56:
						return 2987;
					
					case 57:
						return 2994;
					
					case 58:
						return 3001;
					
					case 59:
						return 3008;
					
					case 60:
						return 3015;
					
					case 61:
						return 3022;
					
					case 62:
						return 3029;
					
					case 63:
						return 3035;
					
					case 64:
						return 3041;
					
					case 65:
						return 3242;
					
					case 66:
						return 3250;
					
					case 67:
						return 3258;
					
					case 68:
						return 3266;
					
					case 69:
						return 3274;
					
					case 70:
						return 3282;
					
					case 71:
						return 3290;
					
					case 72:
						return 3298;
					
					case 73:
						return 3306;
					
					case 74:
						return 3314;
					
					case 75:
						return 3322;
					
					case 76:
						return 3330;
					
					case 77:
						return 3338;
					
					case 78:
						return 3346;
					
					case 79:
						return 3354;
					
					case 80:
						return 3362;
					
					case 81:
						return 3370;
					
					case 82:
						return 3378;
					
					case 83:
						return 3386;
					
					case 84:
						return 3394;
					
					case 85:
						return 3402;
					
					case 86:
						return 3409;
					
					case 87:
						return 3416;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4038;
					
					case 89:
						return 4046;
					
					case 90:
						return 4054;
					
					case 91:
						return 4062;
					
					case 92:
						return 4070;
					
					case 93:
						return 4078;
					
					case 94:
						return 4086;
					
					case 95:
						return 4094;
					
					case 96:
						return 4102;
					
					case 97:
						return 4110;
					
					case 98:
						return 4118;
					
					case 99:
						return 4126;
					
					case 100:
						return 4134;
					
					case 101:
						return 4142;
					
					case 102:
						return 4150;
					
					case 103:
						return 4158;
					
					case 104:
						return 4166;
					
					case 105:
						return 4174;
					
					case 106:
						return 4182;
					
					case 107:
						return 4190;
					
					case 108:
						return 4198;
					
					case 109:
						return 4206;
					
					case 110:
						return 4214;
					
					case 111:
						return 4222;
					
					case 112:
						return 4230;
					
					case 113:
						return 4238;
					
					case 114:
						return 4246;
					
					case 115:
						return 4254;
					
					case 116:
						return 4262;
					
					case 117:
						return 4270;
					
					case 118:
						return 4278;
					
					case 119:
						return 4286;
					
					case 120:
						return 4294;
					
					case 121:
						return 4302;
					
					case 122:
						return 4310;
					
					case 123:
						return 4318;
					
					case 124:
						return 4326;
					
					case 125:
						return 4334;
					
					case 126:
						return 4342;
					
					case 127:
						return 4350;
					
					case 128:
						return 4358;
					
					case 129:
						return 4366;
					
					case 130:
						return 4374;
					
					case 131:
						return 4382;
					
					case 132:
						return 4390;
					
					case 133:
						return 4398;
					
					case 134:
						return 4406;
					
					case 135:
						return 4414;
					
					case 136:
						return 4422;
					
					case 137:
						return 4430;
					
					case 138:
						return 4438;
					
					case 139:
						return 4446;
					
					case 140:
						return 4454;
					
					case 141:
						return 4462;
					
					case 142:
						return 4470;
					
					case 143:
						return 4478;
					
					case 144:
						return 4486;
					
					case 145:
						return 4494;
					
					case 146:
						return 4502;
					
					case 147:
						return 4510;
					
					case 148:
						return 4518;
					
					case 149:
						return 4526;
					
					case 150:
						return 4534;
					
					case 151:
						return 4542;
					
					case 152:
						return 4550;
					
					case 153:
						return 4558;
					
					case 154:
						return 4566;
					
					case 155:
						return 4574;
					
					case 156:
						return 4582;
					
					case 157:
						return 4590;
					
					case 158:
						return 5483;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5932;
					
					case 160:
						return 5939;
					
					case 161:
						return 5946;
					
					case 162:
						return 5953;
					
					case 163:
						return 5960;
					
					case 164:
						return 5967;
					
					case 165:
						return 5974;
					
					case 166:
						return 5981;
					
					case 167:
						return 5988;
					
					case 168:
						return 5995;
					
					case 169:
						return 6002;
					
					case 170:
						return 6009;
					
					case 171:
						return 6016;
					
					case 172:
						return 6023;
					
					case 173:
						return 6030;
					
					case 174:
						return 6037;
					
					case 175:
						return 6044;
					
					case 176:
						return 6051;
					
					case 177:
						return 6058;
					
					case 178:
						return 6065;
					
					case 179:
						return 6072;
					
					case 180:
						return 6079;
					
					case 181:
						return 6086;
					
					case 182:
						return 6093;
					
					case 183:
						return 6100;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6177;
					
					case 185:
						return 6184;
					
					case 186:
						return 6191;
					
					case 187:
						return 6198;
					
					case 188:
						return 6205;
					
					case 189:
						return 6212;
					
					case 190:
						return 6219;
					
					case 191:
						return 6226;
					
					case 192:
						return 6233;
					
					case 193:
						return 6240;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6574;
					
					case 195:
						return 6581;
					
					case 196:
						return 6588;
					
					case 197:
						return 6595;
					
					case 198:
						return 6602;
					
					case 199:
						return 6609;
					
					case 200:
						return 6616;
					
					case 201:
						return 6623;
					
					case 202:
						return 6630;
					
					case 203:
						return 6637;
					
					case 204:
						return 6644;
					
					case 205:
						return 6651;
					
					case 206:
						return 6658;
					
					case 207:
						return 6665;
					
					case 208:
						return 6672;
					
					case 209:
						return 6679;
					
					case 210:
						return 6686;
					
					case 211:
						return 6693;
					
					case 212:
						return 6700;
					
					case 213:
						return 6707;
					
					case 214:
						return 6714;
					
					case 215:
						return 6721;
					
					case 216:
						return 6728;
					
					case 217:
						return 6735;
					
					case 218:
						return 6742;
					
					case 219:
						return 6749;
					
					case 220:
						return 6756;
					
					case 221:
						return 6763;
					
					case 222:
						return 6770;
					
					case 223:
						return 6777;
					
					case 224:
						return 6784;
					
					case 225:
						return 6791;
					
					case 226:
						return 6798;
					
					case 227:
						return 6805;
					
					case 228:
						return 6812;
					
					case 229:
						return 6819;
					
					case 230:
						return 6826;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7296;
					
					case 232:
						return 7303;
					
					case 233:
						return 7310;
					
					case 234:
						return 7317;
					
					case 235:
						return 7324;
					
					case 236:
						return 7331;
					
					case 237:
						return 7338;
					
					case 238:
						return 7345;
					
					case 239:
						return 7352;
					
					case 240:
						return 7359;
					
					case 241:
						return 7366;
					
					case 242:
						return 7373;
					
					case 243:
						return 7380;
					
					case 244:
						return 7387;
					
					case 245:
						return 7394;
					
					case 246:
						return 7401;
					
					case 247:
						return 7408;
					
					case 248:
						return 7415;
					
					case 249:
						return 7422;
					
					case 250:
						return 7429;
					
					case 251:
						return 7436;
					
					case 252:
						return 7443;
					
					case 253:
						return 7450;
					
					case 254:
						return 7457;
					
					case 255:
						return 7464;
					
					case 256:
						return 7471;
					
					case 257:
						return 7478;
					
					case 258:
						return 7485;
					
					case 259:
						return 7492;
					
					case 260:
						return 7499;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8019;
					
					case 262:
						return 8026;
					
					case 263:
						return 8033;
					
					case 264:
						return 8040;
					
					case 265:
						return 8047;
					
					case 266:
						return 8054;
					
					case 267:
						return 8061;
					
					case 268:
						return 8068;
					
					case 269:
						return 8075;
					
					case 270:
						return 8082;
					
					case 271:
						return 8543;
					
					case 272:
						return 8550;
					
					case 273:
						return 8557;
					
					case 274:
						return 8564;
					
					case 275:
						return 8571;
					
					case 276:
						return 8578;
					
					case 277:
						return 8585;
					
					case 278:
						return 8592;
					
					case 279:
						return 8599;
					
					case 280:
						return 8606;
					
					case 281:
						return 8990;
					
					case 282:
						return 8997;
					
					case 283:
						return 9004;
					
					case 284:
						return 9011;
					
					case 285:
						return 9018;
					
					case 286:
						return 9025;
					
					case 287:
						return 9032;
					
					case 288:
						return 9039;
					
					case 289:
						return 9046;
					
					case 290:
						return 9053;
					
					case 291:
						return 9060;
					
					case 292:
						return 9066;
					
					case 293:
						return 9072;
					
					case 294:
						return 9078;
					
					case 295:
						return 9085;
					
					case 296:
						return 9092;
					
					case 297:
						return 9099;
					
					case 298:
						return 9106;
					
					case 299:
						return 9113;
					
					case 300:
						return 9120;
					
					case 301:
						return 9127;
					
					case 302:
						return 9134;
					
					case 303:
						return 9141;
					
					case 304:
						return 9148;
					
					case 305:
						return 9154;
					
					case 306:
						return 9160;
					
					case 307:
						return 9641;
					
					case 308:
						return 9648;
					
					case 309:
						return 9655;
					
					case 310:
						return 9662;
					
					case 311:
						return 9669;
					
					case 312:
						return 9676;
					
					case 313:
						return 9683;
					
					case 314:
						return 9690;
					
					case 315:
						return 9697;
					
					case 316:
						return 9704;
					
					case 317:
						return 9926;
					
					case 318:
						return 9933;
					
					case 319:
						return 9940;
					
					case 320:
						return 9947;
					
					case 321:
						return 9954;
					
					case 322:
						return 9961;
					
					case 323:
						return 9968;
					
					case 324:
						return 9975;
					
					case 325:
						return 9982;
					
					case 326:
						return 9989;
					
					case 327:
						return 9996;
					
					case 328:
						return 10003;
					
					case 329:
						return 10010;
					
					case 330:
						return 10017;
					
					case 331:
						return 10024;
					
					case 332:
						return 10031;
					
					case 333:
						return 10038;
					
					case 334:
						return 10045;
					
					case 335:
						return 10052;
					
					case 336:
						return 10059;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10452;
					
					case 338:
						return 10459;
					
					case 339:
						return 10466;
					
					case 340:
						return 10473;
					
					case 341:
						return 10480;
					
					case 342:
						return 10487;
					
					case 343:
						return 10494;
					
					case 344:
						return 10501;
					
					case 345:
						return 10508;
					
					case 346:
						return 10515;
					
					case 347:
						return 10522;
					
					case 348:
						return 10528;
					
					case 349:
						return 10534;
					
					case 350:
						return 10540;
					
					case 351:
						return 10547;
					
					case 352:
						return 10554;
					
					case 353:
						return 10561;
					
					case 354:
						return 10568;
					
					case 355:
						return 10575;
					
					case 356:
						return 10582;
					
					case 357:
						return 10589;
					
					case 358:
						return 10596;
					
					case 359:
						return 10603;
					
					case 360:
						return 10610;
					
					case 361:
						return 10616;
					
					case 362:
						return 10622;
					
					default:
				}
				break;
			
			case 6:
				switch (iParam1)
				{
					case 0:
						return 1636;
					
					case 1:
						return 1643;
					
					case 2:
						return 1650;
					
					case 3:
						return 1657;
					
					case 4:
						return 1664;
					
					case 5:
						return 1671;
					
					case 6:
						return 1678;
					
					case 7:
						return 1685;
					
					case 8:
						return 1692;
					
					case 9:
						return 1699;
					
					case 13:
						return 1724;
					
					case 14:
						return 1803;
					
					case 15:
						return 1810;
					
					case 16:
						return 1817;
					
					case 17:
						return 1824;
					
					case 18:
						return 1831;
					
					case 19:
						return 1838;
					
					case 20:
						return 1845;
					
					case 21:
						return 1852;
					
					case 22:
						return 1859;
					
					case 26:
						return 2173;
					
					case 27:
						return 2180;
					
					case 28:
						return 2187;
					
					case 29:
						return 2194;
					
					case 30:
						return 2201;
					
					case 31:
						return 2208;
					
					case 32:
						return 2215;
					
					case 33:
						return 2222;
					
					case 34:
						return 2229;
					
					case 35:
						return 2236;
					
					case 39:
						return 2837;
					
					case 40:
						return 2844;
					
					case 41:
						return 2851;
					
					case 42:
						return 2858;
					
					case 43:
						return 2865;
					
					case 44:
						return 2872;
					
					case 45:
						return 2879;
					
					case 46:
						return 2886;
					
					case 47:
						return 2893;
					
					case 48:
						return 2900;
					
					case 52:
						return 2961;
					
					case 53:
						return 2968;
					
					case 54:
						return 2975;
					
					case 55:
						return 2982;
					
					case 56:
						return 2989;
					
					case 57:
						return 2996;
					
					case 58:
						return 3003;
					
					case 59:
						return 3010;
					
					case 60:
						return 3017;
					
					case 61:
						return 3024;
					
					case 65:
						return 3245;
					
					case 66:
						return 3253;
					
					case 67:
						return 3261;
					
					case 68:
						return 3269;
					
					case 69:
						return 3277;
					
					case 70:
						return 3285;
					
					case 71:
						return 3293;
					
					case 72:
						return 3301;
					
					case 73:
						return 3309;
					
					case 74:
						return 3317;
					
					case 75:
						return 3325;
					
					case 76:
						return 3333;
					
					case 77:
						return 3341;
					
					case 78:
						return 3349;
					
					case 79:
						return 3357;
					
					case 80:
						return 3365;
					
					case 81:
						return 3373;
					
					case 82:
						return 3381;
					
					case 83:
						return 3389;
					
					case 84:
						return 3397;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4041;
					
					case 89:
						return 4049;
					
					case 90:
						return 4057;
					
					case 91:
						return 4065;
					
					case 92:
						return 4073;
					
					case 93:
						return 4081;
					
					case 94:
						return 4089;
					
					case 95:
						return 4097;
					
					case 96:
						return 4105;
					
					case 97:
						return 4113;
					
					case 98:
						return 4121;
					
					case 99:
						return 4129;
					
					case 100:
						return 4137;
					
					case 101:
						return 4145;
					
					case 102:
						return 4153;
					
					case 103:
						return 4161;
					
					case 104:
						return 4169;
					
					case 105:
						return 4177;
					
					case 106:
						return 4185;
					
					case 107:
						return 4193;
					
					case 108:
						return 4201;
					
					case 109:
						return 4209;
					
					case 110:
						return 4217;
					
					case 111:
						return 4225;
					
					case 112:
						return 4233;
					
					case 113:
						return 4241;
					
					case 114:
						return 4249;
					
					case 115:
						return 4257;
					
					case 116:
						return 4265;
					
					case 117:
						return 4273;
					
					case 118:
						return 4281;
					
					case 119:
						return 4289;
					
					case 120:
						return 4297;
					
					case 121:
						return 4305;
					
					case 122:
						return 4313;
					
					case 123:
						return 4321;
					
					case 124:
						return 4329;
					
					case 125:
						return 4337;
					
					case 126:
						return 4345;
					
					case 127:
						return 4353;
					
					case 128:
						return 4361;
					
					case 129:
						return 4369;
					
					case 130:
						return 4377;
					
					case 131:
						return 4385;
					
					case 132:
						return 4393;
					
					case 133:
						return 4401;
					
					case 134:
						return 4409;
					
					case 135:
						return 4417;
					
					case 136:
						return 4425;
					
					case 137:
						return 4433;
					
					case 138:
						return 4441;
					
					case 139:
						return 4449;
					
					case 140:
						return 4457;
					
					case 141:
						return 4465;
					
					case 142:
						return 4473;
					
					case 143:
						return 4481;
					
					case 144:
						return 4489;
					
					case 145:
						return 4497;
					
					case 146:
						return 4505;
					
					case 147:
						return 4513;
					
					case 148:
						return 4521;
					
					case 149:
						return 4529;
					
					case 150:
						return 4537;
					
					case 151:
						return 4545;
					
					case 152:
						return 4553;
					
					case 153:
						return 4561;
					
					case 154:
						return 4569;
					
					case 155:
						return 4577;
					
					case 156:
						return 4585;
					
					case 157:
						return 4593;
					
					case 158:
						return 5486;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5934;
					
					case 160:
						return 5941;
					
					case 161:
						return 5948;
					
					case 162:
						return 5955;
					
					case 163:
						return 5962;
					
					case 164:
						return 5969;
					
					case 165:
						return 5976;
					
					case 166:
						return 5983;
					
					case 167:
						return 5990;
					
					case 168:
						return 5997;
					
					case 169:
						return 6004;
					
					case 170:
						return 6011;
					
					case 171:
						return 6018;
					
					case 172:
						return 6025;
					
					case 173:
						return 6032;
					
					case 174:
						return 6039;
					
					case 175:
						return 6046;
					
					case 176:
						return 6053;
					
					case 177:
						return 6060;
					
					case 178:
						return 6067;
					
					case 179:
						return 6074;
					
					case 180:
						return 6081;
					
					case 181:
						return 6088;
					
					case 182:
						return 6095;
					
					case 183:
						return 6102;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6179;
					
					case 185:
						return 6186;
					
					case 186:
						return 6193;
					
					case 187:
						return 6200;
					
					case 188:
						return 6207;
					
					case 189:
						return 6214;
					
					case 190:
						return 6221;
					
					case 191:
						return 6228;
					
					case 192:
						return 6235;
					
					case 193:
						return 6242;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6576;
					
					case 195:
						return 6583;
					
					case 196:
						return 6590;
					
					case 197:
						return 6597;
					
					case 198:
						return 6604;
					
					case 199:
						return 6611;
					
					case 200:
						return 6618;
					
					case 201:
						return 6625;
					
					case 202:
						return 6632;
					
					case 203:
						return 6639;
					
					case 204:
						return 6646;
					
					case 205:
						return 6653;
					
					case 206:
						return 6660;
					
					case 207:
						return 6667;
					
					case 208:
						return 6674;
					
					case 209:
						return 6681;
					
					case 210:
						return 6688;
					
					case 211:
						return 6695;
					
					case 212:
						return 6702;
					
					case 213:
						return 6709;
					
					case 214:
						return 6716;
					
					case 215:
						return 6723;
					
					case 216:
						return 6730;
					
					case 217:
						return 6737;
					
					case 218:
						return 6744;
					
					case 219:
						return 6751;
					
					case 220:
						return 6758;
					
					case 221:
						return 6765;
					
					case 222:
						return 6772;
					
					case 223:
						return 6779;
					
					case 224:
						return 6786;
					
					case 225:
						return 6793;
					
					case 226:
						return 6800;
					
					case 227:
						return 6807;
					
					case 228:
						return 6814;
					
					case 229:
						return 6821;
					
					case 230:
						return 6828;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7298;
					
					case 232:
						return 7305;
					
					case 233:
						return 7312;
					
					case 234:
						return 7319;
					
					case 235:
						return 7326;
					
					case 236:
						return 7333;
					
					case 237:
						return 7340;
					
					case 238:
						return 7347;
					
					case 239:
						return 7354;
					
					case 240:
						return 7361;
					
					case 241:
						return 7368;
					
					case 242:
						return 7375;
					
					case 243:
						return 7382;
					
					case 244:
						return 7389;
					
					case 245:
						return 7396;
					
					case 246:
						return 7403;
					
					case 247:
						return 7410;
					
					case 248:
						return 7417;
					
					case 249:
						return 7424;
					
					case 250:
						return 7431;
					
					case 251:
						return 7438;
					
					case 252:
						return 7445;
					
					case 253:
						return 7452;
					
					case 254:
						return 7459;
					
					case 255:
						return 7466;
					
					case 256:
						return 7473;
					
					case 257:
						return 7480;
					
					case 258:
						return 7487;
					
					case 259:
						return 7494;
					
					case 260:
						return 7501;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8021;
					
					case 262:
						return 8028;
					
					case 263:
						return 8035;
					
					case 264:
						return 8042;
					
					case 265:
						return 8049;
					
					case 266:
						return 8056;
					
					case 267:
						return 8063;
					
					case 268:
						return 8070;
					
					case 269:
						return 8077;
					
					case 270:
						return 8084;
					
					case 271:
						return 8545;
					
					case 272:
						return 8552;
					
					case 273:
						return 8559;
					
					case 274:
						return 8566;
					
					case 275:
						return 8573;
					
					case 276:
						return 8580;
					
					case 277:
						return 8587;
					
					case 278:
						return 8594;
					
					case 279:
						return 8601;
					
					case 280:
						return 8608;
					
					case 281:
						return 8992;
					
					case 282:
						return 8999;
					
					case 283:
						return 9006;
					
					case 284:
						return 9013;
					
					case 285:
						return 9020;
					
					case 286:
						return 9027;
					
					case 287:
						return 9034;
					
					case 288:
						return 9041;
					
					case 289:
						return 9048;
					
					case 290:
						return 9055;
					
					case 294:
						return 9080;
					
					case 295:
						return 9087;
					
					case 296:
						return 9094;
					
					case 297:
						return 9101;
					
					case 298:
						return 9108;
					
					case 299:
						return 9115;
					
					case 300:
						return 9122;
					
					case 301:
						return 9129;
					
					case 302:
						return 9136;
					
					case 303:
						return 9143;
					
					case 307:
						return 9643;
					
					case 308:
						return 9650;
					
					case 309:
						return 9657;
					
					case 310:
						return 9664;
					
					case 311:
						return 9671;
					
					case 312:
						return 9678;
					
					case 313:
						return 9685;
					
					case 314:
						return 9692;
					
					case 315:
						return 9699;
					
					case 316:
						return 9706;
					
					case 317:
						return 9928;
					
					case 318:
						return 9935;
					
					case 319:
						return 9942;
					
					case 320:
						return 9949;
					
					case 321:
						return 9956;
					
					case 322:
						return 9963;
					
					case 323:
						return 9970;
					
					case 324:
						return 9977;
					
					case 325:
						return 9984;
					
					case 326:
						return 9991;
					
					case 327:
						return 9998;
					
					case 328:
						return 10005;
					
					case 329:
						return 10012;
					
					case 330:
						return 10019;
					
					case 331:
						return 10026;
					
					case 332:
						return 10033;
					
					case 333:
						return 10040;
					
					case 334:
						return 10047;
					
					case 335:
						return 10054;
					
					case 336:
						return 10061;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10454;
					
					case 338:
						return 10461;
					
					case 339:
						return 10468;
					
					case 340:
						return 10475;
					
					case 341:
						return 10482;
					
					case 342:
						return 10489;
					
					case 343:
						return 10496;
					
					case 344:
						return 10503;
					
					case 345:
						return 10510;
					
					case 346:
						return 10517;
					
					case 350:
						return 10542;
					
					case 351:
						return 10549;
					
					case 352:
						return 10556;
					
					case 353:
						return 10563;
					
					case 354:
						return 10570;
					
					case 355:
						return 10577;
					
					case 356:
						return 10584;
					
					case 357:
						return 10591;
					
					case 358:
						return 10598;
					
					case 359:
						return 10605;
					
					default:
				}
				break;
			
			case 7:
				switch (iParam1)
				{
					case 0:
						return 1635;
					
					case 1:
						return 1642;
					
					case 2:
						return 1649;
					
					case 3:
						return 1656;
					
					case 4:
						return 1663;
					
					case 5:
						return 1670;
					
					case 6:
						return 1677;
					
					case 7:
						return 1684;
					
					case 8:
						return 1691;
					
					case 9:
						return 1698;
					
					case 10:
						return 1705;
					
					case 11:
						return 1711;
					
					case 12:
						return 1717;
					
					case 13:
						return 1723;
					
					case 14:
						return 1802;
					
					case 15:
						return 1809;
					
					case 16:
						return 1816;
					
					case 17:
						return 1823;
					
					case 18:
						return 1830;
					
					case 19:
						return 1837;
					
					case 20:
						return 1844;
					
					case 21:
						return 1851;
					
					case 22:
						return 1858;
					
					case 23:
						return 1865;
					
					case 24:
						return 1871;
					
					case 25:
						return 1877;
					
					case 26:
						return 2172;
					
					case 27:
						return 2179;
					
					case 28:
						return 2186;
					
					case 29:
						return 2193;
					
					case 30:
						return 2200;
					
					case 31:
						return 2207;
					
					case 32:
						return 2214;
					
					case 33:
						return 2221;
					
					case 34:
						return 2228;
					
					case 35:
						return 2235;
					
					case 36:
						return 2242;
					
					case 37:
						return 2248;
					
					case 38:
						return 2254;
					
					case 39:
						return 2836;
					
					case 40:
						return 2843;
					
					case 41:
						return 2850;
					
					case 42:
						return 2857;
					
					case 43:
						return 2864;
					
					case 44:
						return 2871;
					
					case 45:
						return 2878;
					
					case 46:
						return 2885;
					
					case 47:
						return 2892;
					
					case 48:
						return 2899;
					
					case 49:
						return 2906;
					
					case 50:
						return 2912;
					
					case 51:
						return 2918;
					
					case 52:
						return 2960;
					
					case 53:
						return 2967;
					
					case 54:
						return 2974;
					
					case 55:
						return 2981;
					
					case 56:
						return 2988;
					
					case 57:
						return 2995;
					
					case 58:
						return 3002;
					
					case 59:
						return 3009;
					
					case 60:
						return 3016;
					
					case 61:
						return 3023;
					
					case 62:
						return 3030;
					
					case 63:
						return 3036;
					
					case 64:
						return 3042;
					
					case 65:
						return 3243;
					
					case 66:
						return 3251;
					
					case 67:
						return 3259;
					
					case 68:
						return 3267;
					
					case 69:
						return 3275;
					
					case 70:
						return 3283;
					
					case 71:
						return 3291;
					
					case 72:
						return 3299;
					
					case 73:
						return 3307;
					
					case 74:
						return 3315;
					
					case 75:
						return 3323;
					
					case 76:
						return 3331;
					
					case 77:
						return 3340;
					
					case 78:
						return 3348;
					
					case 79:
						return 3355;
					
					case 80:
						return 3363;
					
					case 81:
						return 3371;
					
					case 82:
						return 3379;
					
					case 83:
						return 3387;
					
					case 84:
						return 3395;
					
					case 85:
						return 3403;
					
					case 86:
						return 3410;
					
					case 87:
						return 3417;
					
					default:
				}
				switch (iParam1)
				{
					case 88:
						return 4039;
					
					case 89:
						return 4047;
					
					case 90:
						return 4055;
					
					case 91:
						return 4063;
					
					case 92:
						return 4071;
					
					case 93:
						return 4079;
					
					case 94:
						return 4087;
					
					case 95:
						return 4095;
					
					case 96:
						return 4103;
					
					case 97:
						return 4111;
					
					case 98:
						return 4119;
					
					case 99:
						return 4127;
					
					case 100:
						return 4136;
					
					case 101:
						return 4144;
					
					case 102:
						return 4151;
					
					case 103:
						return 4159;
					
					case 104:
						return 4167;
					
					case 105:
						return 4175;
					
					case 106:
						return 4183;
					
					case 107:
						return 4191;
					
					case 108:
						return 4199;
					
					case 109:
						return 4207;
					
					case 110:
						return 4215;
					
					case 111:
						return 4223;
					
					case 112:
						return 4231;
					
					case 113:
						return 4239;
					
					case 114:
						return 4247;
					
					case 115:
						return 4255;
					
					case 116:
						return 4263;
					
					case 117:
						return 4271;
					
					case 118:
						return 4279;
					
					case 119:
						return 4287;
					
					case 120:
						return 4296;
					
					case 121:
						return 4304;
					
					case 122:
						return 4311;
					
					case 123:
						return 4319;
					
					case 124:
						return 4327;
					
					case 125:
						return 4335;
					
					case 126:
						return 4343;
					
					case 127:
						return 4351;
					
					case 128:
						return 4359;
					
					case 129:
						return 4367;
					
					case 130:
						return 4375;
					
					case 131:
						return 4383;
					
					case 132:
						return 4391;
					
					case 133:
						return 4399;
					
					case 134:
						return 4407;
					
					case 135:
						return 4415;
					
					case 136:
						return 4423;
					
					case 137:
						return 4431;
					
					case 138:
						return 4439;
					
					case 139:
						return 4447;
					
					case 140:
						return 4456;
					
					case 141:
						return 4464;
					
					case 142:
						return 4471;
					
					case 143:
						return 4479;
					
					case 144:
						return 4487;
					
					case 145:
						return 4495;
					
					case 146:
						return 4503;
					
					case 147:
						return 4511;
					
					case 148:
						return 4519;
					
					case 149:
						return 4527;
					
					case 150:
						return 4535;
					
					case 151:
						return 4543;
					
					case 152:
						return 4551;
					
					case 153:
						return 4559;
					
					case 154:
						return 4567;
					
					case 155:
						return 4575;
					
					case 156:
						return 4583;
					
					case 157:
						return 4591;
					
					case 158:
						return 5484;
					
					default:
				}
				switch (iParam1)
				{
					case 159:
						return 5933;
					
					case 160:
						return 5940;
					
					case 161:
						return 5947;
					
					case 162:
						return 5954;
					
					case 163:
						return 5961;
					
					case 164:
						return 5968;
					
					case 165:
						return 5975;
					
					case 166:
						return 5982;
					
					case 167:
						return 5989;
					
					case 168:
						return 5996;
					
					case 169:
						return 6003;
					
					case 170:
						return 6010;
					
					case 171:
						return 6017;
					
					case 172:
						return 6024;
					
					case 173:
						return 6031;
					
					case 174:
						return 6038;
					
					case 175:
						return 6045;
					
					case 176:
						return 6052;
					
					case 177:
						return 6059;
					
					case 178:
						return 6066;
					
					case 179:
						return 6073;
					
					case 180:
						return 6080;
					
					case 181:
						return 6087;
					
					case 182:
						return 6094;
					
					case 183:
						return 6101;
					
					default:
				}
				switch (iParam1)
				{
					case 184:
						return 6178;
					
					case 185:
						return 6185;
					
					case 186:
						return 6192;
					
					case 187:
						return 6199;
					
					case 188:
						return 6206;
					
					case 189:
						return 6213;
					
					case 190:
						return 6220;
					
					case 191:
						return 6227;
					
					case 192:
						return 6234;
					
					case 193:
						return 6241;
					
					default:
				}
				switch (iParam1)
				{
					case 194:
						return 6575;
					
					case 195:
						return 6582;
					
					case 196:
						return 6589;
					
					case 197:
						return 6596;
					
					case 198:
						return 6603;
					
					case 199:
						return 6610;
					
					case 200:
						return 6617;
					
					case 201:
						return 6624;
					
					case 202:
						return 6631;
					
					case 203:
						return 6638;
					
					case 204:
						return 6645;
					
					case 205:
						return 6652;
					
					case 206:
						return 6659;
					
					case 207:
						return 6666;
					
					case 208:
						return 6673;
					
					case 209:
						return 6680;
					
					case 210:
						return 6687;
					
					case 211:
						return 6694;
					
					case 212:
						return 6701;
					
					case 213:
						return 6708;
					
					case 214:
						return 6715;
					
					case 215:
						return 6722;
					
					case 216:
						return 6729;
					
					case 217:
						return 6736;
					
					case 218:
						return 6743;
					
					case 219:
						return 6750;
					
					case 220:
						return 6757;
					
					case 221:
						return 6764;
					
					case 222:
						return 6771;
					
					case 223:
						return 6778;
					
					case 224:
						return 6785;
					
					case 225:
						return 6792;
					
					case 226:
						return 6799;
					
					case 227:
						return 6806;
					
					case 228:
						return 6813;
					
					case 229:
						return 6820;
					
					case 230:
						return 6827;
					
					default:
				}
				switch (iParam1)
				{
					case 231:
						return 7297;
					
					case 232:
						return 7304;
					
					case 233:
						return 7311;
					
					case 234:
						return 7318;
					
					case 235:
						return 7325;
					
					case 236:
						return 7332;
					
					case 237:
						return 7339;
					
					case 238:
						return 7346;
					
					case 239:
						return 7353;
					
					case 240:
						return 7360;
					
					case 241:
						return 7367;
					
					case 242:
						return 7374;
					
					case 243:
						return 7381;
					
					case 244:
						return 7388;
					
					case 245:
						return 7395;
					
					case 246:
						return 7402;
					
					case 247:
						return 7409;
					
					case 248:
						return 7416;
					
					case 249:
						return 7423;
					
					case 250:
						return 7430;
					
					case 251:
						return 7437;
					
					case 252:
						return 7444;
					
					case 253:
						return 7451;
					
					case 254:
						return 7458;
					
					case 255:
						return 7465;
					
					case 256:
						return 7472;
					
					case 257:
						return 7479;
					
					case 258:
						return 7486;
					
					case 259:
						return 7493;
					
					case 260:
						return 7500;
					
					default:
				}
				switch (iParam1)
				{
					case 261:
						return 8020;
					
					case 262:
						return 8027;
					
					case 263:
						return 8034;
					
					case 264:
						return 8041;
					
					case 265:
						return 8048;
					
					case 266:
						return 8055;
					
					case 267:
						return 8062;
					
					case 268:
						return 8069;
					
					case 269:
						return 8076;
					
					case 270:
						return 8083;
					
					case 271:
						return 8544;
					
					case 272:
						return 8551;
					
					case 273:
						return 8558;
					
					case 274:
						return 8565;
					
					case 275:
						return 8572;
					
					case 276:
						return 8579;
					
					case 277:
						return 8586;
					
					case 278:
						return 8593;
					
					case 279:
						return 8600;
					
					case 280:
						return 8607;
					
					case 281:
						return 8991;
					
					case 282:
						return 8998;
					
					case 283:
						return 9005;
					
					case 284:
						return 9012;
					
					case 285:
						return 9019;
					
					case 286:
						return 9026;
					
					case 287:
						return 9033;
					
					case 288:
						return 9040;
					
					case 289:
						return 9047;
					
					case 290:
						return 9054;
					
					case 291:
						return 9061;
					
					case 292:
						return 9067;
					
					case 293:
						return 9073;
					
					case 294:
						return 9079;
					
					case 295:
						return 9086;
					
					case 296:
						return 9093;
					
					case 297:
						return 9100;
					
					case 298:
						return 9107;
					
					case 299:
						return 9114;
					
					case 300:
						return 9121;
					
					case 301:
						return 9128;
					
					case 302:
						return 9135;
					
					case 303:
						return 9142;
					
					case 304:
						return 9149;
					
					case 305:
						return 9155;
					
					case 306:
						return 9161;
					
					case 307:
						return 9642;
					
					case 308:
						return 9649;
					
					case 309:
						return 9656;
					
					case 310:
						return 9663;
					
					case 311:
						return 9670;
					
					case 312:
						return 9677;
					
					case 313:
						return 9684;
					
					case 314:
						return 9691;
					
					case 315:
						return 9698;
					
					case 316:
						return 9705;
					
					case 317:
						return 9927;
					
					case 318:
						return 9934;
					
					case 319:
						return 9941;
					
					case 320:
						return 9948;
					
					case 321:
						return 9955;
					
					case 322:
						return 9962;
					
					case 323:
						return 9969;
					
					case 324:
						return 9976;
					
					case 325:
						return 9983;
					
					case 326:
						return 9990;
					
					case 327:
						return 9997;
					
					case 328:
						return 10004;
					
					case 329:
						return 10011;
					
					case 330:
						return 10018;
					
					case 331:
						return 10025;
					
					case 332:
						return 10032;
					
					case 333:
						return 10039;
					
					case 334:
						return 10046;
					
					case 335:
						return 10053;
					
					case 336:
						return 10060;
					
					default:
				}
				switch (iParam1)
				{
					case 337:
						return 10453;
					
					case 338:
						return 10460;
					
					case 339:
						return 10467;
					
					case 340:
						return 10474;
					
					case 341:
						return 10481;
					
					case 342:
						return 10488;
					
					case 343:
						return 10495;
					
					case 344:
						return 10502;
					
					case 345:
						return 10509;
					
					case 346:
						return 10516;
					
					case 347:
						return 10523;
					
					case 348:
						return 10529;
					
					case 349:
						return 10535;
					
					case 350:
						return 10541;
					
					case 351:
						return 10548;
					
					case 352:
						return 10555;
					
					case 353:
						return 10562;
					
					case 354:
						return 10569;
					
					case 355:
						return 10576;
					
					case 356:
						return 10583;
					
					case 357:
						return 10590;
					
					case 358:
						return 10597;
					
					case 359:
						return 10604;
					
					case 360:
						return 10611;
					
					case 361:
						return 10617;
					
					case 362:
						return 10623;
					
					default:
				}
				break;
			}
	}
	return 1630;
}

int func_1006(int iParam0, int iParam1)
{
	if (func_1015(iParam1))
	{
		return 14835;
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 363:
					return 11436;
				
				case 364:
					return 11443;
				
				case 365:
					return 11450;
				
				case 366:
					return 11457;
				
				case 367:
					return 11464;
				
				case 368:
					return 11471;
				
				case 369:
					return 11478;
				
				case 370:
					return 11485;
				
				case 371:
					return 11492;
				
				case 372:
					return 11499;
				
				case 373:
					return 11506;
				
				case 374:
					return 11513;
				
				case 375:
					return 11520;
				
				case 376:
					return 11527;
				
				case 377:
					return 11534;
				
				case 378:
					return 11541;
				
				case 379:
					return 11548;
				
				case 380:
					return 11555;
				
				case 381:
					return 11562;
				
				case 382:
					return 11569;
				
				case 383:
					return 11576;
				
				case 384:
					return 11583;
				
				case 385:
					return 11590;
				
				case 386:
					return 11597;
				
				case 387:
					return 11604;
				
				case 388:
					return 11611;
				
				case 389:
					return 11618;
				
				case 390:
					return 11625;
				
				case 391:
					return 11632;
				
				case 392:
					return 11639;
				
				case 393:
					return 11646;
				
				case 394:
					return 11653;
				
				case 395:
					return 11660;
				
				case 396:
					return 11667;
				
				case 397:
					return 11674;
				
				case 398:
					return 11681;
				
				case 399:
					return 11688;
				
				case 400:
					return 11695;
				
				case 401:
					return 11702;
				
				case 402:
					return 11709;
				
				case 403:
					return 11716;
				
				case 404:
					return 11723;
				
				case 405:
					return 11730;
				
				case 406:
					return 11737;
				
				case 407:
					return 11744;
				
				case 408:
					return 11751;
				
				case 409:
					return 11758;
				
				case 410:
					return 11765;
				
				case 411:
					return 11772;
				
				case 412:
					return 11779;
				
				case 413:
					return 11786;
				
				case 414:
					return 11793;
				
				case 515:
					return 12261;
				
				case 516:
					return 12268;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 363:
					return 11437;
				
				case 364:
					return 11444;
				
				case 365:
					return 11451;
				
				case 366:
					return 11458;
				
				case 367:
					return 11465;
				
				case 368:
					return 11472;
				
				case 369:
					return 11479;
				
				case 370:
					return 11486;
				
				case 371:
					return 11493;
				
				case 372:
					return 11500;
				
				case 373:
					return 11507;
				
				case 374:
					return 11514;
				
				case 375:
					return 11521;
				
				case 376:
					return 11528;
				
				case 377:
					return 11535;
				
				case 378:
					return 11542;
				
				case 379:
					return 11549;
				
				case 380:
					return 11556;
				
				case 381:
					return 11563;
				
				case 382:
					return 11570;
				
				case 383:
					return 11577;
				
				case 384:
					return 11584;
				
				case 385:
					return 11591;
				
				case 386:
					return 11598;
				
				case 387:
					return 11605;
				
				case 388:
					return 11612;
				
				case 389:
					return 11619;
				
				case 390:
					return 11626;
				
				case 391:
					return 11633;
				
				case 392:
					return 11640;
				
				case 393:
					return 11647;
				
				case 394:
					return 11654;
				
				case 395:
					return 11661;
				
				case 396:
					return 11668;
				
				case 397:
					return 11675;
				
				case 398:
					return 11682;
				
				case 399:
					return 11689;
				
				case 400:
					return 11696;
				
				case 401:
					return 11703;
				
				case 402:
					return 11710;
				
				case 403:
					return 11717;
				
				case 404:
					return 11724;
				
				case 405:
					return 11731;
				
				case 406:
					return 11738;
				
				case 407:
					return 11745;
				
				case 408:
					return 11752;
				
				case 409:
					return 11759;
				
				case 410:
					return 11766;
				
				case 411:
					return 11773;
				
				case 412:
					return 11780;
				
				case 413:
					return 11787;
				
				case 414:
					return 11794;
				
				case 515:
					return 12262;
				
				case 516:
					return 12269;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 363:
					return 11438;
				
				case 364:
					return 11445;
				
				case 365:
					return 11452;
				
				case 366:
					return 11459;
				
				case 367:
					return 11466;
				
				case 368:
					return 11473;
				
				case 369:
					return 11480;
				
				case 370:
					return 11487;
				
				case 371:
					return 11494;
				
				case 372:
					return 11501;
				
				case 373:
					return 11508;
				
				case 374:
					return 11515;
				
				case 375:
					return 11522;
				
				case 376:
					return 11529;
				
				case 377:
					return 11536;
				
				case 378:
					return 11543;
				
				case 379:
					return 11550;
				
				case 380:
					return 11557;
				
				case 381:
					return 11564;
				
				case 382:
					return 11571;
				
				case 383:
					return 11578;
				
				case 384:
					return 11585;
				
				case 385:
					return 11592;
				
				case 386:
					return 11599;
				
				case 387:
					return 11606;
				
				case 388:
					return 11613;
				
				case 389:
					return 11620;
				
				case 390:
					return 11627;
				
				case 391:
					return 11634;
				
				case 392:
					return 11641;
				
				case 393:
					return 11648;
				
				case 394:
					return 11655;
				
				case 395:
					return 11662;
				
				case 396:
					return 11669;
				
				case 397:
					return 11676;
				
				case 398:
					return 11683;
				
				case 399:
					return 11690;
				
				case 400:
					return 11697;
				
				case 401:
					return 11704;
				
				case 402:
					return 11711;
				
				case 403:
					return 11718;
				
				case 404:
					return 11725;
				
				case 405:
					return 11732;
				
				case 406:
					return 11739;
				
				case 407:
					return 11746;
				
				case 408:
					return 11753;
				
				case 409:
					return 11760;
				
				case 410:
					return 11767;
				
				case 411:
					return 11774;
				
				case 412:
					return 11781;
				
				case 413:
					return 11788;
				
				case 414:
					return 11795;
				
				case 515:
					return 12263;
				
				case 516:
					return 12270;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 363:
					return 11439;
				
				case 364:
					return 11446;
				
				case 365:
					return 11453;
				
				case 366:
					return 11460;
				
				case 367:
					return 11467;
				
				case 368:
					return 11474;
				
				case 369:
					return 11481;
				
				case 370:
					return 11488;
				
				case 371:
					return 11495;
				
				case 372:
					return 11502;
				
				case 373:
					return 11509;
				
				case 374:
					return 11516;
				
				case 375:
					return 11523;
				
				case 376:
					return 11530;
				
				case 377:
					return 11537;
				
				case 378:
					return 11544;
				
				case 379:
					return 11551;
				
				case 380:
					return 11558;
				
				case 381:
					return 11565;
				
				case 382:
					return 11572;
				
				case 383:
					return 11579;
				
				case 384:
					return 11586;
				
				case 385:
					return 11593;
				
				case 386:
					return 11600;
				
				case 387:
					return 11607;
				
				case 388:
					return 11614;
				
				case 389:
					return 11621;
				
				case 390:
					return 11628;
				
				case 391:
					return 11635;
				
				case 392:
					return 11642;
				
				case 393:
					return 11649;
				
				case 394:
					return 11656;
				
				case 395:
					return 11663;
				
				case 396:
					return 11670;
				
				case 397:
					return 11677;
				
				case 398:
					return 11684;
				
				case 399:
					return 11691;
				
				case 400:
					return 11698;
				
				case 401:
					return 11705;
				
				case 402:
					return 11712;
				
				case 403:
					return 11719;
				
				case 404:
					return 11726;
				
				case 405:
					return 11733;
				
				case 406:
					return 11740;
				
				case 407:
					return 11747;
				
				case 408:
					return 11754;
				
				case 409:
					return 11761;
				
				case 410:
					return 11768;
				
				case 411:
					return 11775;
				
				case 412:
					return 11782;
				
				case 413:
					return 11789;
				
				case 414:
					return 11796;
				
				case 515:
					return 12264;
				
				case 516:
					return 12271;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 363:
					return 11440;
				
				case 364:
					return 11447;
				
				case 365:
					return 11454;
				
				case 366:
					return 11461;
				
				case 367:
					return 11468;
				
				case 368:
					return 11475;
				
				case 369:
					return 11482;
				
				case 370:
					return 11489;
				
				case 371:
					return 11496;
				
				case 372:
					return 11503;
				
				case 373:
					return 11510;
				
				case 374:
					return 11517;
				
				case 375:
					return 11524;
				
				case 376:
					return 11531;
				
				case 377:
					return 11538;
				
				case 378:
					return 11545;
				
				case 379:
					return 11552;
				
				case 380:
					return 11559;
				
				case 381:
					return 11566;
				
				case 382:
					return 11573;
				
				case 383:
					return 11580;
				
				case 384:
					return 11587;
				
				case 385:
					return 11594;
				
				case 386:
					return 11601;
				
				case 387:
					return 11608;
				
				case 388:
					return 11615;
				
				case 389:
					return 11622;
				
				case 390:
					return 11629;
				
				case 391:
					return 11636;
				
				case 392:
					return 11643;
				
				case 393:
					return 11650;
				
				case 394:
					return 11657;
				
				case 395:
					return 11664;
				
				case 396:
					return 11671;
				
				case 397:
					return 11678;
				
				case 398:
					return 11685;
				
				case 399:
					return 11692;
				
				case 400:
					return 11699;
				
				case 401:
					return 11706;
				
				case 402:
					return 11713;
				
				case 403:
					return 11720;
				
				case 404:
					return 11727;
				
				case 405:
					return 11734;
				
				case 406:
					return 11741;
				
				case 407:
					return 11748;
				
				case 408:
					return 11755;
				
				case 409:
					return 11762;
				
				case 410:
					return 11769;
				
				case 411:
					return 11776;
				
				case 412:
					return 11783;
				
				case 413:
					return 11790;
				
				case 414:
					return 11797;
				
				case 515:
					return 12265;
				
				case 516:
					return 12272;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 363:
					return 11442;
				
				case 364:
					return 11449;
				
				case 365:
					return 11456;
				
				case 366:
					return 11463;
				
				case 367:
					return 11470;
				
				case 368:
					return 11477;
				
				case 369:
					return 11484;
				
				case 370:
					return 11491;
				
				case 371:
					return 11498;
				
				case 372:
					return 11505;
				
				case 373:
					return 11512;
				
				case 374:
					return 11519;
				
				case 375:
					return 11526;
				
				case 376:
					return 11533;
				
				case 377:
					return 11540;
				
				case 378:
					return 11547;
				
				case 379:
					return 11554;
				
				case 380:
					return 11561;
				
				case 381:
					return 11568;
				
				case 382:
					return 11575;
				
				case 383:
					return 11582;
				
				case 384:
					return 11589;
				
				case 385:
					return 11596;
				
				case 386:
					return 11603;
				
				case 387:
					return 11610;
				
				case 388:
					return 11617;
				
				case 389:
					return 11624;
				
				case 390:
					return 11631;
				
				case 391:
					return 11638;
				
				case 392:
					return 11645;
				
				case 393:
					return 11652;
				
				case 394:
					return 11659;
				
				case 395:
					return 11666;
				
				case 396:
					return 11673;
				
				case 397:
					return 11680;
				
				case 398:
					return 11687;
				
				case 399:
					return 11694;
				
				case 400:
					return 11701;
				
				case 401:
					return 11708;
				
				case 402:
					return 11715;
				
				case 403:
					return 11722;
				
				case 404:
					return 11729;
				
				case 405:
					return 11736;
				
				case 406:
					return 11743;
				
				case 407:
					return 11750;
				
				case 408:
					return 11757;
				
				case 409:
					return 11764;
				
				case 410:
					return 11771;
				
				case 411:
					return 11778;
				
				case 412:
					return 11785;
				
				case 413:
					return 11792;
				
				case 414:
					return 11799;
				
				case 515:
					return 12267;
				
				case 516:
					return 12274;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 363:
					return 11441;
				
				case 364:
					return 11448;
				
				case 365:
					return 11455;
				
				case 366:
					return 11462;
				
				case 367:
					return 11469;
				
				case 368:
					return 11476;
				
				case 369:
					return 11483;
				
				case 370:
					return 11490;
				
				case 371:
					return 11497;
				
				case 372:
					return 11504;
				
				case 373:
					return 11511;
				
				case 374:
					return 11518;
				
				case 375:
					return 11525;
				
				case 376:
					return 11532;
				
				case 377:
					return 11539;
				
				case 378:
					return 11546;
				
				case 379:
					return 11553;
				
				case 380:
					return 11560;
				
				case 381:
					return 11567;
				
				case 382:
					return 11574;
				
				case 383:
					return 11581;
				
				case 384:
					return 11588;
				
				case 385:
					return 11595;
				
				case 386:
					return 11602;
				
				case 387:
					return 11609;
				
				case 388:
					return 11616;
				
				case 389:
					return 11623;
				
				case 390:
					return 11630;
				
				case 391:
					return 11637;
				
				case 392:
					return 11644;
				
				case 393:
					return 11651;
				
				case 394:
					return 11658;
				
				case 395:
					return 11665;
				
				case 396:
					return 11672;
				
				case 397:
					return 11679;
				
				case 398:
					return 11686;
				
				case 399:
					return 11693;
				
				case 400:
					return 11700;
				
				case 401:
					return 11707;
				
				case 402:
					return 11714;
				
				case 403:
					return 11721;
				
				case 404:
					return 11728;
				
				case 405:
					return 11735;
				
				case 406:
					return 11742;
				
				case 407:
					return 11749;
				
				case 408:
					return 11756;
				
				case 409:
					return 11763;
				
				case 410:
					return 11770;
				
				case 411:
					return 11777;
				
				case 412:
					return 11784;
				
				case 413:
					return 11791;
				
				case 414:
					return 11798;
				
				case 515:
					return 12266;
				
				case 516:
					return 12273;
				
				default:
			}
			break;
	}
	return 1630;
}

int func_1007(int iParam0, bool bParam1)
{
	if (func_1015(iParam0))
	{
		return 0;
	}
	if (iParam0 <= 38)
	{
		if (iParam0 < 10)
		{
			if (bParam1)
			{
				return (4212 + iParam0);
			}
			else
			{
				return (31488 + iParam0);
			}
		}
		else if (iParam0 > 12 && iParam0 < 23)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 3);
			}
			else
			{
				return ((31488 + iParam0) - 3);
			}
		}
		else if (iParam0 > 25 && iParam0 < 36)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 6);
			}
			else
			{
				return ((31488 + iParam0) - 6);
			}
		}
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((6015 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7252 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9310 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30134 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30134 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_1008(11))
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15361;
	}
	else if (iParam0 < 184)
	{
		return ((18036 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18953 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21942 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24535 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26319 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28039 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31488 + 30 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34036 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36528 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36528 + ((iParam0 - 337) - 3));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return (41004 + (iParam0 - 363));
	}
	else if (iParam0 >= 415 && iParam0 < 515)
	{
		return ((50100 + iParam0) - 415);
	}
	else if (iParam0 >= 515 && iParam0 < 517)
	{
		return ((51536 + iParam0) - 515);
	}
	return 0;
}

int func_1008(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
		
		case 25:
			return 317;
			break;
		
		case 26:
			return 337;
			break;
		
		case 27:
			return 350;
			break;
		
		case 28:
			return 363;
			break;
		
		case 29:
			return 413;
			break;
		
		case 31:
			return 517;
			break;
	}
	if (func_162(iParam0))
	{
		iVar0 = func_161(iParam0);
		return func_219(iVar0);
	}
	return (func_225(iParam0, -1, 1) * iParam0 + 1);
}

int func_1009(int iParam0)
{
	if (func_1015(iParam0))
	{
		return 0;
	}
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_1008(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31528 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34056 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36548 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36548 + ((iParam0 - 337) - 3));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return ((41056 + iParam0) - 363);
	}
	else if (iParam0 >= 415 && iParam0 < 515)
	{
		return ((50200 + iParam0) - 415);
	}
	else if (iParam0 >= 515 && iParam0 < 517)
	{
		return ((51538 + iParam0) - 515);
	}
	return 0;
}

int func_1010(int iParam0)
{
	if (func_1015(iParam0))
	{
		return 0;
	}
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_1008(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31478 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34016 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36508 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36508 + ((iParam0 - 337) - 3));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return ((40952 + iParam0) - 363);
	}
	else if (iParam0 >= 415 && iParam0 < 515)
	{
		return ((50000 + iParam0) - 415);
	}
	else if (iParam0 >= 515 && iParam0 < 517)
	{
		return ((51534 + iParam0) - 515);
	}
	return 0;
}

int func_1011(int iParam0)
{
	if (func_1015(iParam0))
	{
		return 0;
	}
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_1008(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31468 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((33996 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36488 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36488 + ((iParam0 - 337) - 3));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return ((40900 + iParam0) - 363);
	}
	else if (iParam0 >= 415 && iParam0 < 515)
	{
		return ((49900 + iParam0) - 415);
	}
	else if (iParam0 >= 515 && iParam0 < 517)
	{
		return ((51532 + iParam0) - 515);
	}
	return 0;
}

int func_1012(int iParam0)
{
	int iVar0;
	
	if (func_1015(iParam0))
	{
		return 0;
	}
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_1008(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return (31188 + ((iParam0 - 307) * iVar0));
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return (33436 + ((iParam0 - 317) * iVar0));
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return (35928 + ((iParam0 - 337) * iVar0));
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36168 + ((iParam0 - 350) * iVar0));
	}
	else if (iParam0 >= 363 && iParam0 <= 414)
	{
		return (39444 + ((iParam0 - 363) * iVar0));
	}
	else if (iParam0 >= 415 && iParam0 < 515)
	{
		return (47100 + ((iParam0 - 415) * iVar0));
	}
	else if (iParam0 >= 515 && iParam0 < 517)
	{
		return (51476 + ((iParam0 - 515) * iVar0));
	}
	return 0;
}

int func_1013(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return 1;
			break;
	}
	return 0;
}

int func_1014(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_1015(iParam1))
	{
		return 0;
	}
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_1008(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
		else if (iParam1 > 306 && iParam1 < 317)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (31158 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (31159 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (31160 + (iParam1 - 307) * 3);
			}
		}
		else if (iParam1 >= 317 && iParam1 < 337)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (33376 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (33377 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (33378 + (iParam1 - 317) * 3);
			}
		}
		else if (iParam1 >= 337 && iParam1 < 347)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35868 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35869 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35870 + (iParam1 - 337) * 3);
			}
		}
		else if (iParam1 >= 350 && iParam1 < 360)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35898 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35899 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35900 + (iParam1 - 350) * 3);
			}
		}
		else if (iParam1 >= 363 && iParam1 <= 414)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (39288 + (iParam1 - 363) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (39289 + (iParam1 - 363) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (39290 + (iParam1 - 363) * 3);
			}
		}
		else if (iParam1 >= 415 && iParam1 < 515)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (46800 + (iParam1 - 415) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (46801 + (iParam1 - 415) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (46802 + (iParam1 - 415) * 3);
			}
		}
		else if (iParam1 >= 515 && iParam1 < 517)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (51470 + (iParam1 - 515) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (51471 + (iParam1 - 515) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (51472 + (iParam1 - 515) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_1008(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_1008(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_1008(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		iVar0 = (30708 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 307) * (1456 - 1411)));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		iVar0 = (32476 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 317) * (1456 - 1411)));
	}
	else if (iParam1 < 347)
	{
		iVar0 = (34878 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 337) * (1456 - 1411)));
	}
	else if (iParam1 >= 347 && iParam1 <= 349)
	{
		iVar0 = ((iParam1 - 347) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35328);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35329);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35330);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35331);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35332);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35333);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35334);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35335);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35336);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35337);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35338);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35339);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35340);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35341);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35342);
		}
	}
	else if (iParam1 < 360)
	{
		iVar0 = (35373 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 350) * (1456 - 1411)));
	}
	else if (iParam1 >= 360 && iParam1 <= 362)
	{
		iVar0 = ((iParam1 - 360) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35823);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35824);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35825);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35826);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35827);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35828);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35829);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35830);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35831);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35832);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35833);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35834);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35835);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35836);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35837);
		}
	}
	else if (iParam1 >= 363 && iParam1 <= 414)
	{
		iVar0 = (36948 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 363) * (1456 - 1411)));
	}
	else if (iParam1 >= 415 && iParam1 < 515)
	{
		iVar0 = (42300 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 415) * (1456 - 1411)));
	}
	else if (iParam1 >= 515 && iParam1 < 517)
	{
		iVar0 = (51380 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 515) * (1456 - 1411)));
	}
	return iVar0;
}

int func_1015(int iParam0)
{
	if (iParam0 >= 415 && iParam0 < 515)
	{
		return 1;
	}
	return 0;
}

void func_1016(var uParam0)
{
	func_1017(uParam0);
	uParam0->f_103 = 0;
	uParam0->f_104 = 0;
	uParam0->f_105 = 0;
	StringCopy(&(uParam0->f_106), "", 64);
	StringCopy(&(uParam0->f_122), "", 64);
	uParam0->f_138 = 0;
	uParam0->f_139 = 0;
	uParam0->f_140 = 0;
	uParam0->f_141 = 0;
}

void func_1017(var uParam0)
{
	func_1018(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_1018(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_1019(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 != -1)
	{
		switch (iParam1)
		{
			case 0:
				iVar3 = -2075002545;
				break;
			
			case 1:
				iVar3 = joaat("destroyed");
				break;
			
			case 2:
				iVar3 = 1682635966;
				break;
			
			case 3:
				iVar3 = 1025428972;
				break;
			
			case 4:
				iVar3 = 1318596548;
				break;
			
			case 5:
				iVar3 = -354909074;
				break;
			
			case 6:
				iVar3 = 1553031755;
				break;
			
			case 7:
				iVar3 = -1921848560;
				break;
		}
		if (func_484(1))
		{
			uVar0 = func_1022(func_747());
			uVar1 = func_1021(func_747());
			iVar2 = func_1020(func_598(1));
		}
		else
		{
			iVar2 = -1;
		}
		unk_0x10A691F5756416D0(uVar0, uVar1, iVar2, Global_1586521[iParam0 /*142*/].f_66, iVar3);
	}
}

int func_1020(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1021(int iParam0)
{
	if (iParam0 == func_8())
	{
		return -1;
	}
	return Global_1887305[iParam0 /*610*/].f_10.f_8[1];
}

int func_1022(int iParam0)
{
	if (iParam0 == func_8())
	{
		return -1;
	}
	return Global_1887305[iParam0 /*610*/].f_10.f_8[0];
}

void func_1023(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (func_1028(iParam0))
	{
		return;
	}
	if (func_1015(iParam1))
	{
		return;
	}
	iParam1++;
	func_1024(iParam0, iParam1, iParam2);
	if (iParam0 >= 517)
	{
		return;
	}
	if (iParam2 == func_57() || iParam2 == -1)
	{
		Global_1937684[iParam0] = iParam1;
	}
}

void func_1024(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_655(func_1027(iParam0), iParam1, iParam2);
		func_655(func_1026(iParam0), 0, iParam2);
		func_655(func_1025(iParam0), 0, iParam2);
		return;
	}
	else
	{
		func_655(func_1027(iParam0), 255, iParam2);
	}
	if (iParam1 <= 510)
	{
		func_655(func_1026(iParam0), (iParam1 - 255), iParam2);
		func_655(func_1025(iParam0), 0, iParam2);
		return;
	}
	else
	{
		func_655(func_1026(iParam0), 255, iParam2);
	}
	if (iParam1 <= 765)
	{
		func_655(func_1025(iParam0), (iParam1 - 510), iParam2);
	}
}

int func_1025(int iParam0)
{
	if (iParam0 < 515)
	{
		return (50500 + iParam0);
	}
	else if (iParam0 < 517)
	{
		return ((51544 + iParam0) - 515);
	}
	return (50500 + iParam0);
}

int func_1026(int iParam0)
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31548 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34096 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36594 + iParam0) - 337);
	}
	else if (iParam0 <= 414)
	{
		return ((41160 + iParam0) - 363);
	}
	else if (iParam0 < 515)
	{
		return ((50400 + iParam0) - 415);
	}
	else if (iParam0 < 517)
	{
		return ((51542 + iParam0) - 515);
	}
	return (24625 + iParam0);
}

int func_1027(int iParam0)
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31538 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34076 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36568 + iParam0) - 337);
	}
	else if (iParam0 <= 414)
	{
		return ((41108 + iParam0) - 363);
	}
	else if (iParam0 < 515)
	{
		return ((50300 + iParam0) - 415);
	}
	else if (iParam0 < 517)
	{
		return ((51540 + iParam0) - 515);
	}
	return (4036 + iParam0);
}

int func_1028(int iParam0)
{
	if (iParam0 >= 415 && iParam0 < 515)
	{
		return 1;
	}
	return 0;
}

void func_1029(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	iVar0 = 1;
	if (func_1035(&(Global_1586521[iParam2 /*142*/])))
	{
		iVar0++;
	}
	if (func_1034(func_174(iParam2), Global_1586521[iParam2 /*142*/].f_77, Global_1586521[iParam2 /*142*/].f_9[10]) && func_1033(func_174(iParam2)))
	{
		iVar0++;
	}
	Var2 = { func_1031(-1, iParam3, 1) };
	iVar3 = 0;
	if (!func_162(iParam1))
	{
		iVar4 = func_156(iParam1, -1);
		if (iVar4 >= 0 && iVar4 <= 131)
		{
			iVar3 = Global_1312298[iVar4 /*1951*/].f_33;
		}
	}
	if (BitTest(Global_1586521[iParam2 /*142*/].f_103, 1))
	{
		if (BitTest(Global_1586521[iParam2 /*142*/].f_103, 2))
		{
			StringCopy(&Var1, "MPCT_PVNAMEDES", 24);
			StringIntConCat(&Var1, iVar0, 24);
			func_63(iParam0, &Var1, iVar0, bParam5, 0, 0, 0);
		}
		else
		{
			StringCopy(&Var1, "MPCT_PVNAMESCR", 24);
			StringIntConCat(&Var1, iVar0, 24);
			func_63(iParam0, &Var1, iVar0, bParam5, 0, 0, 0);
		}
	}
	else if (func_185(iParam2))
	{
		StringCopy(&Var1, "MPCT_PVNAMEIMP", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_63(iParam0, &Var1, iVar0, bParam5, 0, 0, 0);
	}
	else if ((((((((((((((((iParam1 < 32 && iParam4 >= iVar3) && !func_187(iParam3)) && iParam1 != 13) && iParam1 != 14) && iParam1 != 15) && iParam1 != 16) && iParam1 != 17) && iParam1 != 18) && iParam1 != 19) && iParam1 != 20) && iParam1 != 21) && iParam1 != 22) && iParam1 != 25) && iParam1 != 26) && iParam1 != 29) && iParam1 != 31)
	{
		StringCopy(&Var1, "MPCT_PVNAMESTO", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_63(iParam0, &Var1, iVar0, bParam5, 0, 0, 0);
	}
	else
	{
		StringCopy(&Var1, "MPCT_PVNAME", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_63(iParam0, &Var1, iVar0, bParam5, 0, 0, 0);
	}
	sVar5 = unk_0x93E7527CFECC7CD8(func_174(iParam2));
	if (!unk_0xD6F9DEE4765092A9(&Var2))
	{
		func_1030(&Var2, 0, 0, 0);
	}
	else
	{
		func_448(sVar5, 0);
	}
	if (func_1035(&(Global_1586521[iParam2 /*142*/])))
	{
		func_448("VEH_LIVERY", 0);
	}
	if (func_1034(func_174(iParam2), Global_1586521[iParam2 /*142*/].f_77, Global_1586521[iParam2 /*142*/].f_9[10]) && func_1033(func_174(iParam2)))
	{
		func_448("VEH_TOPL", 0);
	}
}

void func_1030(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23831.f_5824 >= 50)
	{
		return;
	}
	if (Global_23831.f_6346 >= 4)
	{
		return;
	}
	if (Global_23831.f_6347 != 1)
	{
		return;
	}
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		return;
	}
	StringCopy(&(Global_2696723[Global_23831.f_5824 /*16*/]), sParam0, 64);
	Global_23831.f_5824++;
	if (bParam3)
	{
		Global_23831.f_2387[Global_23831.f_6345 /*5*/][Global_23831.f_6346] = 9;
	}
	else
	{
		Global_23831.f_2387[Global_23831.f_6345 /*5*/][Global_23831.f_6346] = 7;
	}
	Global_23831.f_6346++;
	if (bParam2)
	{
	}
	if (Global_23831.f_6346 >= Global_23831.f_6344)
	{
		fVar0 = func_439();
		if (Global_23831.f_5678[Global_23831.f_5822] && Global_23831.f_6346 == Global_23831.f_6344)
		{
			func_65(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23831.f_5671[(Global_23831.f_5822 - 1)])
		{
			Global_23831.f_5671[(Global_23831.f_5822 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23831.f_6346 >= Global_23831.f_6344)
		{
			fVar3 = func_438();
			if (fVar3 > Global_23831.f_6348[Global_23831.f_5821])
			{
				Global_23831.f_6348[Global_23831.f_5821] = fVar3;
			}
		}
	}
}

struct<16> func_1031(int iParam0, int iParam1, bool bParam2)
{
	struct<16> Var0;
	
	if (bParam2)
	{
	}
	if (iParam0 == -1)
	{
		if (func_1032(iParam1) != -1)
		{
			Var0 = { Global_2359296[func_177() /*5570*/].f_7.f_105[func_1032(iParam1) /*16*/] };
		}
	}
	else if (iParam0 > -1 && iParam0 < 30)
	{
		Var0 = { Global_2359296[func_177() /*5570*/].f_7.f_105[iParam0 /*16*/] };
	}
	else if (bParam2)
	{
	}
	return Var0;
}

int func_1032(int iParam0)
{
	int iVar0;
	
	func_188(Global_4282954, &iVar0);
	if ((((iVar0 >= 227 && iVar0 < 257) && iParam0 == -1) && !unk_0x834C960822A4683F()) && !func_583())
	{
		return (iVar0 - 227);
	}
	if (iParam0 != -1)
	{
		if (iParam0 >= 227 && iParam0 < 257)
		{
			return (iParam0 - 227);
		}
	}
	return -1;
}

int func_1033(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction3"):
		case joaat("contender"):
			return 0;
			break;
	}
	return 1;
}

int func_1034(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("banshee"):
		case joaat("banshee2"):
			if (!BitTest(uParam1, 1))
			{
				return 1;
			}
			break;
		
		case joaat("stinger"):
		case joaat("coquette2"):
		case joaat("coquette3"):
			if (!BitTest(uParam1, 1))
			{
				return 1;
			}
			break;
		
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("stalion"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
			if (!BitTest(uParam1, 1) && !BitTest(uParam1, 2))
			{
				return 1;
			}
			break;
		
		case joaat("buccaneer2"):
		case joaat("peyote2"):
		case joaat("peyote3"):
			if ((!BitTest(uParam1, 1) && !BitTest(uParam1, 2)) && !BitTest(uParam1, 3))
			{
				return 1;
			}
			break;
		
		case joaat("coquette"):
			if (!BitTest(uParam1, 1) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case joaat("mamba"):
			if (!BitTest(uParam1, 2))
			{
				return 1;
			}
			break;
		
		case joaat("pfister811"):
			if (!BitTest(uParam1, 0) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case joaat("contender"):
		case joaat("kamacho"):
		case -1958428933:
			if (!BitTest(uParam1, 0))
			{
				return 1;
			}
			break;
		
		case joaat("manana2"):
			if (BitTest(uParam1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1035(var uParam0)
{
	switch (uParam0->f_66)
	{
		case joaat("windsor"):
			if (uParam0->f_67 > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1036(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_2707347)
	{
		return 1;
	}
	if ((!Global_2707348 && iParam1 >= 0) && iParam1 <= 517)
	{
		if (BitTest(Global_1586521[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	iVar0 = unk_0x39D1D336459711BE();
	iVar1 = 0;
	switch (iParam0)
	{
		case -1240172147:
			iVar1 = Global_262145.f_35588[0];
			break;
		
		case -143587026:
			iVar1 = Global_262145.f_35588[1];
			break;
		
		case 1690421418:
			iVar1 = Global_262145.f_35588[2];
			break;
		
		case 258105345:
			iVar1 = Global_262145.f_35588[3];
			break;
		
		case 1249425552:
			iVar1 = Global_262145.f_35588[4];
			break;
		
		case -986656474:
			iVar1 = Global_262145.f_35588[5];
			break;
		
		case 1307736079:
			iVar1 = Global_262145.f_35588[6];
			break;
		
		case 1737348074:
			iVar1 = Global_262145.f_35588[7];
			break;
		
		case -223461503:
			iVar1 = Global_262145.f_35588[8];
			break;
		
		case 1121330119:
			iVar1 = Global_262145.f_35588[9];
			break;
		
		case -1628000569:
			iVar1 = Global_262145.f_35588[10];
			break;
		
		case -946047670:
			iVar1 = Global_262145.f_35588[11];
			break;
		
		case 1579902654:
			iVar1 = Global_262145.f_35588[12];
			break;
		
		case -773802025:
			iVar1 = Global_262145.f_35588[13];
			break;
		
		case 1968807591:
			iVar1 = Global_262145.f_35588[14];
			break;
		
		case -1958428933:
			iVar1 = Global_262145.f_35588[15];
			break;
		
		case 1881415402:
			iVar1 = Global_262145.f_35588[16];
			break;
		
		case -999594302:
			iVar1 = Global_262145.f_35588[17];
			break;
		
		case -1896488056:
			iVar1 = Global_262145.f_35588[18];
			break;
		
		case 1452003510:
			iVar1 = Global_262145.f_35588[19];
			break;
		
		case -1444856003:
			iVar1 = Global_262145.f_35588[20];
			break;
	}
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_1037(int iParam0)
{
	if (func_213(iParam0))
	{
		return 1;
	}
	if (((((((((((((((((((((iParam0 == joaat("blazer5") || iParam0 == joaat("boxville5")) || iParam0 == joaat("dune5")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("ruiner2")) || iParam0 == joaat("technical2")) || iParam0 == joaat("voltic2")) || iParam0 == joaat("wastelander")) || iParam0 == joaat("trailersmall2")) || iParam0 == joaat("technical3")) || iParam0 == joaat("insurgent3")) || iParam0 == joaat("khanjali")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("riot2")) || iParam0 == joaat("thruster")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("deluxo")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("speedo5")) || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("oppressor2"))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("ambulance"):
		case joaat("annihilator"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("asea2"):
		case joaat("baletrailer"):
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("benson"):
		case joaat("besra"):
		case joaat("biff"):
		case joaat("blimp"):
		case joaat("blimp2"):
		case joaat("boattrailer"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("bulldozer"):
		case joaat("burrito"):
		case joaat("burrito3"):
		case joaat("burrito4"):
		case joaat("burrito5"):
		case joaat("bus"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("camper"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob3"):
		case joaat("cargoplane"):
		case joaat("coach"):
		case joaat("crusader"):
		case joaat("cuban800"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dinghy"):
		case joaat("dinghy2"):
		case joaat("dinghy3"):
		case joaat("docktrailer"):
		case joaat("docktug"):
		case joaat("dodo"):
		case joaat("dump"):
		case joaat("dune2"):
		case joaat("duster"):
		case joaat("emperor3"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case joaat("firetruk"):
		case joaat("fixter"):
		case joaat("flatbed"):
		case joaat("forklift"):
		case joaat("freight"):
		case joaat("freightcar"):
		case joaat("freightcont1"):
		case joaat("freightcont2"):
		case joaat("freightgrain"):
		case joaat("frogger"):
		case joaat("frogger2"):
		case joaat("gburrito"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("hauler"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("jet"):
		case joaat("jetmax"):
		case joaat("journey"):
		case joaat("lazer"):
		case joaat("limo2"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("mammatus"):
		case joaat("marshall"):
		case joaat("marquis"):
		case joaat("maverick"):
		case joaat("mesa2"):
		case joaat("metrotrain"):
		case joaat("monster"):
		case joaat("miljet"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("phantom"):
		case joaat("police"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("polmav"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("pounder"):
		case joaat("pranger"):
		case joaat("predator"):
		case joaat("proptrailer"):
		case joaat("raketrailer"):
		case joaat("rancherxl2"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("riot"):
		case joaat("ripley"):
		case joaat("rubble"):
		case joaat("rumpo2"):
		case joaat("sadler2"):
		case joaat("savage"):
		case joaat("scrap"):
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("shamal"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
		case joaat("skylift"):
		case joaat("speeder"):
		case joaat("speedo2"):
		case joaat("squalo"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("stretch"):
		case joaat("stunt"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("suntrap"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("taco"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("tankercar"):
		case joaat("taxi"):
		case joaat("technical"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("tiptruck"):
		case joaat("tiptruck2"):
		case joaat("titan"):
		case joaat("toro"):
		case joaat("tourbus"):
		case joaat("tr2"):
		case joaat("tr3"):
		case joaat("tr4"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tractor3"):
		case joaat("trailerlogs"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("trailersmall"):
		case joaat("trash"):
		case joaat("trash2"):
		case joaat("trflat"):
		case joaat("tropic"):
		case joaat("tvtrailer"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("valkyrie"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("cargobob4"):
		case joaat("dinghy4"):
		case joaat("seashark3"):
		case joaat("speeder2"):
		case joaat("toro2"):
		case joaat("tropic2"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("valkyrie2"):
		case joaat("dune4"):
		case joaat("ruiner3"):
		case joaat("brickade"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("vetir"):
		case joaat("longfin"):
		case joaat("patrolboat"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("mule5"):
		case joaat("phantom4"):
		case joaat("boxville6"):
		case joaat("benson2"):
		case joaat("towtruck3"):
		case joaat("towtruck4"):
		case joaat("pbus2"):
			return 0;
		
		default:
	}
	if (((!unk_0xD3CE8D1E6564B011(iParam0) && !unk_0x78B050AFBA6D1517(iParam0)) && !unk_0x9910CD0D8626AA28(iParam0)) && !unk_0x3801E353091A2E42(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_1038(int iParam0)
{
	if (func_1041(&(Global_1586521[iParam0 /*142*/].f_66)))
	{
		func_1039(iParam0);
	}
}

void func_1039(int iParam0)
{
	func_1040(&(Global_1586521[iParam0 /*142*/].f_66));
	func_1003(iParam0, &(Global_1586521[iParam0 /*142*/]), 0, -1, 0, 0);
}

void func_1040(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("bison2"):
		case joaat("bison3"):
			*uParam0 = joaat("bison");
			break;
		
		case joaat("speedo2"):
			*uParam0 = joaat("speedo");
			break;
		
		case joaat("burrito"):
		case joaat("burrito2"):
		case joaat("burrito4"):
		case joaat("burrito5"):
			*uParam0 = joaat("burrito3");
			break;
	}
}

int func_1041(var uParam0)
{
	switch (*uParam0)
	{
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("speedo2"):
		case joaat("burrito"):
		case joaat("burrito4"):
		case joaat("burrito5"):
			return 1;
			break;
	}
	return 0;
}

int func_1042(int iParam0)
{
	if (Global_1579582)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 6000:
		case 6001:
		case 6002:
			return 1;
			break;
	}
	return 0;
}

void func_1043()
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	if (Global_2738934.f_6035)
	{
		func_1044(&uVar0, &(Local_130.f_181.f_70), "MPCT_YC_AGH", 0);
	}
	else
	{
		func_1044(&uVar0, &(Local_130.f_181.f_70), "MPCT_MECHH", 1);
	}
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	func_381(Local_130.f_181.f_69, 1, 1);
	unk_0x8744D2E3FC95740E(&(Local_130.f_363), 21);
	unk_0x8744D2E3FC95740E(&(Local_130.f_363), 22);
	iVar1 = Local_130.f_181.f_70[Local_130.f_181.f_69];
	bVar2 = false;
	if (func_1042(iVar1))
	{
		StringCopy(&Global_1919005, "", 64);
		bVar2 = true;
	}
	if (!Global_262145.f_31863 && !bVar2)
	{
		if (func_961(iVar1, &Global_1919005, -1))
		{
			if (unk_0xD6F9DEE4765092A9(&Global_1919005))
			{
				StringCopy(&Global_1919005, "", 64);
				if (func_1320())
				{
					if (unk_0xAE231F549813BBDF(2))
					{
						func_383(37, "MCHNC_TLTP_ADD", -1, 0);
					}
					else
					{
						func_382(179, "MCHNC_TLTP_ADD", -1);
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 21);
			}
			else
			{
				if (func_1320())
				{
					func_383(178, "MCHNC_TLTP_CLR", -1, 0);
					if (unk_0xAE231F549813BBDF(2))
					{
						func_383(37, "MCHNC_TLTP_EDIT", -1, 0);
					}
					else
					{
						func_382(179, "MCHNC_TLTP_EDIT", -1);
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 21);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 22);
			}
		}
	}
	Local_130.f_181.f_2 = uVar0;
}

void func_1044(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	int iVar0[32];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	bool bVar7;
	int iVar8[3];
	int iVar9;
	int iVar10[4];
	int iVar11;
	
	func_82(0, 0);
	func_81(sParam2);
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	iVar9 = -1;
	*uParam0 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if ((((func_156(iVar2, -1) > 0 && func_1048(iVar2)) && !func_232(iVar2)) && iVar2 != 11) && iVar2 != 12)
		{
			bVar7 = true;
			iVar9 = -1;
			iVar5 = func_225(iVar2, -1, 1);
			if (iVar2 == 13)
			{
				iVar5 = 11;
			}
			else if (iVar2 == 18)
			{
				iVar5 = 10;
			}
			if (func_971(iVar2))
			{
				iVar9 = func_155(iVar2);
				if (iVar8[(iVar9 - 6000)])
				{
					iVar5 = -1;
					bVar7 = false;
				}
				else
				{
					iVar5 = func_1047(iVar9);
				}
			}
			iVar1 = 0;
			while (iVar1 < iVar5)
			{
				iVar3 = (func_224(iVar2) + iVar1);
				func_223(iVar3, &iVar4, 1);
				if (iVar4 >= 0 && (!func_187(iVar3) || iParam3))
				{
					if (unk_0xAD1840C2E6AF7D5E(func_174(iVar4)))
					{
						if (((!func_214(func_174(iVar4), 1) && !func_213(func_174(iVar4))) && func_220(func_174(iVar4))) && !func_202(iVar4))
						{
							if (!BitTest(Global_1586521[iVar4 /*142*/].f_103, 10))
							{
								iVar0[iVar2] = 1;
								iVar1 = 9999;
							}
						}
					}
				}
				iVar1++;
			}
			if (func_971(iVar2) && bVar7)
			{
				StringCopy(&Var6, func_972(iVar9), 24);
				func_63(*uParam0, &Var6, 0, iVar0[iVar2], 0, 0, 0);
				(*uParam1)[*uParam0] = iVar9;
				*uParam0++;
				iVar8[(iVar9 - 6000)] = 1;
				bVar7 = false;
			}
			if (bVar7)
			{
				func_966(&Var6, iVar2);
				func_63(*uParam0, &Var6, 0, iVar0[iVar2], 0, 0, 0);
				(*uParam1)[*uParam0] = iVar2;
				*uParam0++;
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar11 = iVar2;
		iVar1 = 0;
		while (iVar1 < func_218(iVar11))
		{
			iVar3 = (func_217(iVar11) + iVar1);
			func_223(iVar3, &iVar4, 1);
			if (iVar4 >= 0 && (!func_187(iVar3) || iParam3))
			{
				if ((((unk_0xAD1840C2E6AF7D5E(func_174(iVar4)) && !func_214(func_174(iVar4), 1)) && !func_213(func_174(iVar4))) && func_220(func_174(iVar4))) && !func_202(iVar4))
				{
					if (!BitTest(Global_1586521[iVar4 /*142*/].f_103, 10))
					{
						iVar10[iVar2] = 1;
						iVar1 = 9999;
					}
				}
			}
			iVar1++;
		}
		if ((iVar10[iVar2] && iVar11 != 0) && iVar11 != 1)
		{
			func_63(*uParam0, func_1046(iVar11), 0, 1, 0, 0, 0);
			(*uParam1)[*uParam0] = func_1045(iVar11);
			*uParam0++;
		}
		iVar2++;
	}
}

int func_1045(int iParam0)
{
	return (1000 + iParam0);
}

char* func_1046(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GRTRUCK";
		
		case 2:
			return "MP_BHUB_CLUBT";
		
		case 1:
			return "MP_BHUB_GAR0";
		
		case 3:
			return "MP_BHUB_SUB";
		
		default:
	}
	return "";
}

int func_1047(int iParam0)
{
	if (Global_1579582)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 6000:
			return 30;
		
		case 6002:
			return 31;
		
		case 6001:
			return 60;
		
		default:
	}
	return 0;
}

int func_1048(int iParam0)
{
	if (iParam0 == 22)
	{
		if (!func_235())
		{
			return 0;
		}
	}
	else if (iParam0 == 25)
	{
		if (!func_233(1))
		{
			return 0;
		}
	}
	return 1;
}

void func_1049()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	func_82(0, 0);
	func_81("MPCT_YC_AGH");
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	bVar2 = true;
	if (func_252(unk_0x259BE71D8A81D4FA()))
	{
		iVar3 = func_251(unk_0x259BE71D8A81D4FA());
		iVar1 = func_518(40);
		if ((((((((iVar1 > 0 || !func_289(40)) || !func_334(40)) || func_240(0)) || func_250(0, 1024)) || func_249(0)) || func_248(unk_0x259BE71D8A81D4FA(), 0)) || func_241(unk_0x259BE71D8A81D4FA(), iVar3, 100f)) || Global_262145.f_13092)
		{
			bVar2 = false;
		}
		func_609(40, iVar0, "MPCT_YC_YAH0", bVar2);
		func_63(iVar0, "MPCT_CASH", 1, bVar2, 0, 0, 0);
		func_437(func_87(40), 0);
	}
	else
	{
		func_63(iVar0, "MPCT_YC_YAH0", 0, 0, 0, 0, 0);
		func_63(iVar0, "", 1, 0, 0, 0, 0);
		func_608(15, 0);
	}
	iVar0++;
	if (func_252(unk_0x259BE71D8A81D4FA()))
	{
		bVar2 = true;
		iVar4 = func_251(unk_0x259BE71D8A81D4FA());
		iVar1 = func_518(41);
		if ((((((((iVar1 > 0 || !func_289(41)) || !func_334(41)) || func_240(1)) || func_250(1, 1024)) || func_249(1)) || func_248(unk_0x259BE71D8A81D4FA(), 1)) || func_241(unk_0x259BE71D8A81D4FA(), iVar4, 100f)) || Global_262145.f_13091)
		{
			bVar2 = false;
		}
		func_609(41, iVar0, "MPCT_YC_YAB0", bVar2);
		func_63(iVar0, "MPCT_CASH", 1, bVar2, 0, 0, 0);
		func_437(func_87(41), 0);
	}
	else
	{
		func_63(iVar0, "MPCT_YC_YAB0", 0, 0, 0, 0, 0);
		func_63(iVar0, "", 1, 0, 0, 0, 0);
		func_608(15, 0);
	}
	iVar0++;
	if (func_252(unk_0x259BE71D8A81D4FA()))
	{
		iVar1 = func_518(42);
		func_201(&bVar6, &bVar5, 1);
		iVar7 = func_251(unk_0x259BE71D8A81D4FA());
		bVar2 = true;
		if ((((((((iVar1 > 0 || !func_289(42)) || !func_334(42)) || func_200(unk_0x259BE71D8A81D4FA())) || func_191(1133903872)) || !bVar6) || !bVar5) || !func_241(unk_0x259BE71D8A81D4FA(), iVar7, 100f)) || Global_262145.f_13090)
		{
			bVar2 = false;
		}
		func_609(42, iVar0, "MPCT_YC_YAP0", bVar2);
		iVar8 = func_87(42);
		if (iVar8 <= 0)
		{
			func_63(iVar0, "PEG_FREE", 0, bVar2, 0, 0, 0);
		}
		else
		{
			func_63(iVar0, "MPCT_CASH", 1, bVar2, 0, 0, 0);
			func_437(iVar8, 0);
		}
	}
	else
	{
		func_63(iVar0, "MPCT_YC_YAP0", 0, 1, 0, 0, 0);
		func_63(iVar0, "", 1, 1, 0, 0, 0);
		func_608(15, 0);
	}
	iVar0++;
	if (Global_262145.f_28764)
	{
		if (func_252(unk_0x259BE71D8A81D4FA()))
		{
			iVar1 = func_518(64);
			bVar2 = true;
			if (((iVar1 > 0 || !func_289(64)) || !func_334(64)) || Global_262145.f_28772)
			{
				bVar2 = false;
			}
			func_609(64, iVar0, "YACHT_REQUEST", bVar2);
			if (func_87(64) > 0)
			{
				func_63(iVar0, "MPCT_CASH", 1, bVar2, 0, 0, 0);
				func_437(func_87(64), 0);
			}
		}
		else
		{
			func_63(iVar0, "YACHT_REQUEST", 0, 0, 0, 0, 0);
			func_63(iVar0, "", 1, 0, 0, 0, 0);
			func_608(15, 0);
		}
		iVar0++;
	}
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	func_381(Local_130.f_181.f_69, 1, 1);
	Local_130.f_181.f_2 = iVar0;
}

void func_1050()
{
	int iVar0;
	
	switch (Local_130.f_178)
	{
		case 18:
			if (func_84(0, -1, 0))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					func_1062();
					unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
					func_125();
				}
				else
				{
					func_125();
					if (BitTest(Local_130.f_363, 18))
					{
						if (unk_0x0AF5E4A6C74DC312(func_87(39), 0, 1, 0, -1, 0) || BitTest(Local_130.f_363, 17))
						{
							iVar0 = func_1055(joaat("service_spend_pegasus_delivery"), func_87(39), 0, 0);
							if (iVar0 == 1)
							{
								unk_0x8744D2E3FC95740E(&(Local_130.f_363), 17);
								unk_0x8744D2E3FC95740E(&(Local_130.f_363), 18);
								unk_0x0B0C9A0F9AAEB7F0(&(Global_2672855.f_3830), 7);
								unk_0x0B0C9A0F9AAEB7F0(&(Global_2672855.f_3830), false);
								unk_0x0B0C9A0F9AAEB7F0(&(Global_2672855.f_3830), 12);
							}
							else if (iVar0 == 0)
							{
								unk_0x8744D2E3FC95740E(&(Local_130.f_363), 17);
								unk_0x8744D2E3FC95740E(&(Local_130.f_363), 18);
								func_94(1, 0);
							}
							else
							{
								return;
							}
						}
						else
						{
							func_1(Local_130.f_1, "BACALAU", "BACAL_UNABLE", &Local_176, 1);
							func_94(1, 0);
						}
					}
					if (BitTest(Global_2672855.f_3830, 0))
					{
						if (BitTest(Global_2672855.f_3830, 1))
						{
							if (BitTest(Global_2672855.f_3830, 2))
							{
								func_1(Local_130.f_1, "BACALAU", "BACAL_ACCEPT", &Local_176, 1);
								func_32(4);
							}
							else
							{
								if (func_114())
								{
									func_1052(func_87(39), 5, 2, 1);
								}
								func_1(Local_130.f_1, "BACALAU", "BACAL_UNABLE", &Local_176, 1);
								func_94(1, 0);
							}
							func_1051();
						}
					}
				}
			}
			break;
	}
}

void func_1051()
{
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3830), false);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3830), true);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3830), 2);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3830), 3);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3830), 4);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3830), 5);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3830), 6);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3830), 7);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3830), 11);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3830), 12);
	unk_0x8744D2E3FC95740E(&(Global_2672855.f_3830), 15);
}

void func_1052(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_1054(iParam1), 16);
	StringCopy(&Var1, func_1053(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = joaat("service_earn_refund_backup_vagos");
			break;
		
		case 1:
			iVar2 = joaat("service_earn_refund_backup_lost");
			break;
		
		case 2:
			iVar2 = joaat("service_earn_refund_backup_families");
			break;
		
		case 3:
			iVar2 = joaat("service_earn_refund_hire_mugger");
			break;
		
		case 4:
			iVar2 = joaat("service_earn_refund_hire_mercenary");
			break;
		
		case 5:
			iVar2 = joaat("service_earn_refund_buy_cardropoff");
			break;
		
		case 6:
			iVar2 = joaat("service_earn_refund_heli_pickup");
			break;
		
		case 7:
			iVar2 = joaat("service_earn_refund_boat_pickup");
			break;
		
		case 8:
			iVar2 = joaat("service_earn_refund_clear_wanted");
			break;
		
		case 9:
			iVar2 = joaat("service_earn_refund_head_2_head");
			break;
		
		case 10:
			iVar2 = joaat("service_earn_refund_challenge");
			break;
		
		case 11:
			iVar2 = joaat("service_earn_refund_share_last_job");
			break;
		
		case 12:
			iVar2 = joaat("service_earn_refund_lottery");
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = joaat("service_earn_refundammodrop");
			break;
		
		case 15:
			iVar2 = joaat("service_earn_refund_orbital_manual");
			break;
		
		case 16:
			iVar2 = joaat("service_earn_refund_orbital_auto");
			break;
		
		case 17:
			iVar2 = joaat("service_earn_refund_arena_spec_box_entry");
			break;
	}
	if (func_114())
	{
		func_101(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4535950[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4535950[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		unk_0x9CBD6E7B088910A1(iParam0, &Var0, &Var1, bParam3);
	}
}

char* func_1053(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_1054(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

int func_1055(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 < 0)
	{
		return 1;
	}
	if (func_114())
	{
		if (func_1060(iParam0, iParam1))
		{
			if (func_1059(iLocal_149) == 2)
			{
				if (iParam0 != joaat("service_spend_locate_vehicle"))
				{
					unk_0x1F4C0FAC35E805F4(func_1058(iLocal_149));
					func_1057(iParam0, iParam1, iParam3);
					func_104(iLocal_149);
				}
				return 1;
			}
			else
			{
				if (bParam2)
				{
					func_1056(func_116(1, 1), Local_130.f_364, Local_130.f_362);
				}
				if (iParam0 != joaat("service_spend_locate_vehicle"))
				{
					func_104(iLocal_149);
				}
				return 0;
			}
		}
	}
	else
	{
		func_1057(iParam0, iParam1, iParam3);
		return 1;
	}
	return -1;
}

void func_1056(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = -836944817;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_4 = iParam1;
	Var0.f_3 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 7, iParam0, Var0.f_0);
	}
}

void func_1057(int iParam0, int iParam1, var uParam2)
{
	struct<13> Var0;
	
	switch (iParam0)
	{
		case joaat("service_spend_cops_turn_eye"):
			unk_0x5457AC60E3138BFF(iParam1, 0, 1, joaat("char_lester"));
			break;
		
		case joaat("service_spend_hire_mercenary"):
			unk_0x3805A7764BBF4986(iParam1, 0, 1, joaat("char_mp_merryweather"));
			break;
		
		case joaat("service_spend_bull_shark"):
			unk_0x510FA24010D2C6E2(iParam1, 0, 1, joaat("char_mp_brucie"));
			break;
		
		case joaat("service_spend_off_the_radar"):
			unk_0x390F7605EEFF27DD(iParam1, 0, 1, joaat("char_lester"));
			break;
		
		case joaat("service_spend_lose_wanted_level"):
			Var0 = { func_71(unk_0x259BE71D8A81D4FA()) };
			unk_0xA8C662E16DC4030E(iParam1, &Var0, 0, 1, joaat("char_lester"));
			break;
		
		case joaat("service_spend_reveal_players"):
			unk_0x38B36DE4A0DD8551(iParam1, 0, 1, joaat("char_lester"));
			break;
		
		case joaat("service_spend_ammo_drop"):
			unk_0xEE1CE55E7DF07D50(iParam1, 0, 1, joaat("char_mp_merryweather"));
			break;
		
		case joaat("service_spend_boat_pickup"):
			unk_0x0B191D6DA6D08B82(iParam1, 0, 1, joaat("char_mp_merryweather"));
			break;
		
		case joaat("service_spend_backup_heli"):
			unk_0x2E2FE70D24958511(iParam1, 0, 1, joaat("char_mp_merryweather"));
			break;
		
		case joaat("service_spend_airstrike"):
			unk_0xE712829A13AA007C(iParam1, 0, 1, joaat("char_mp_merryweather"));
			break;
		
		case joaat("service_spend_heli_pickup"):
			unk_0x5281982126ED6EB1(iParam1, 0, 1, joaat("char_mp_merryweather"));
			break;
		
		case joaat("service_spend_hire_mugger"):
			unk_0x028DAC40D73AD61C(iParam1, 0, 1, joaat("char_lamar"));
			break;
		
		case joaat("service_spend_pegasus_delivery"):
			unk_0x231BA68A82FF0316(iParam1, Global_2672855.f_3831, 10, -1, 0, "PEGASUS", 0, 0, 0, 1);
			break;
		
		case -1555026615:
			unk_0x5281982126ED6EB1(iParam1, 0, 1, 0);
			break;
		
		case 522351365:
			unk_0x0B191D6DA6D08B82(iParam1, 0, 1, 0);
			break;
		
		case joaat("service_spend_pa_service_impound"):
			unk_0x6C12EC99A95B5DAB(iParam1, 0, 1);
			break;
		
		case joaat("service_spend_pa_service_heli_pickup"):
			unk_0xD4C7A8B7798F8D76(iParam1, uParam2, 0, 1);
			break;
		
		case joaat("service_spend_request_supply"):
			unk_0x2F5233FB30DF57D5(iParam1, 0, 1, uParam2);
			break;
		
		case joaat("service_spend_request_source_motorcycle"):
			unk_0xA19C2545709CF8B5(iParam1, 0, 1, uParam2);
			break;
		
		case joaat("service_spend_request_out_of_sight"):
			unk_0x29F36537BAC3D711(iParam1, 0, 1, uParam2);
			break;
	}
}

int func_1058(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_1059(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_1060(int iParam0, int iParam1)
{
	if (!BitTest(Local_130.f_363, 17))
	{
		func_102(&iLocal_149, -1135378931, 537254313, 1474183246, iParam0, iParam1, 4, 3);
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 17);
	}
	else if (func_1061(iLocal_149))
	{
		return 1;
	}
	return 0;
}

int func_1061(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_1062()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	func_82(0, 0);
	func_81("MPCT_GB_AGH");
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	if (func_363(74, 0, 0))
	{
		bVar2 = true;
		iVar1 = func_518(39);
		if ((iVar1 > 0 || !func_289(39)) || !func_334(39))
		{
			bVar2 = false;
		}
		func_609(39, iVar0, "MPCT_GB_AG0", bVar2);
		func_63(iVar0, "MPCT_CASH", 1, bVar2, 0, 0, 0);
		func_437(func_87(39), 0);
	}
	else
	{
		func_63(iVar0, "MPCT_GB_AG0", 0, 1, 0, 0, 0);
		func_63(iVar0, "", 1, 1, 0, 0, 0);
		func_608(15, 0);
	}
	iVar0++;
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	func_381(Local_130.f_181.f_69, 1, 1);
	Local_130.f_181.f_2 = iVar0 + 1;
}

void func_1063()
{
	if (func_84(0, -1, 0))
	{
		if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
		{
			func_1064();
			unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
			func_125();
		}
		else
		{
			func_125();
		}
	}
}

void func_1064()
{
	int iVar0;
	struct<2> Var1;
	
	func_82(0, 0);
	StringCopy(&Var1, "SCLUB_NM_", 16);
	StringIntConCat(&Var1, iLocal_178, 16);
	func_81(&Var1);
	func_79(1, 0, 0, 0, 0);
	func_78(1, 1, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	func_63(iVar0, "MP_STRIP_IN", 0, 1, 0, 0, 0);
	iVar0++;
	func_63(iVar0, "BB_LC_EXIT", 0, 1, 0, 0, 0);
	iVar0++;
	Local_130.f_181.f_2 = iVar0;
	func_381(Local_130.f_181.f_69, 1, 0);
	Local_130.f_181.f_3[1] = 0;
	Local_130.f_181.f_36[1] = 0;
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
}

void func_1065()
{
	switch (Local_130.f_178)
	{
		case 15:
			if (func_84(0, -1, 0))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					func_1069();
					unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
					func_125();
				}
				else
				{
					func_1066();
					func_125();
				}
			}
			break;
	}
}

void func_1066()
{
	if (func_378(Local_130.f_181.f_69))
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				func_333("MPCT_LJOB", 100, 0);
				break;
			
			case 1:
				func_333("RON_OP1_D", 0, 0);
				break;
		}
	}
	else
	{
		switch (Local_130.f_181.f_69)
		{
			case 0:
				if (func_363(106, 0, 0))
				{
					if (!func_334(21))
					{
						func_333("MPCT_UNAVAIL0", 0, 0);
					}
					else if (!func_289(21))
					{
						func_333("MPCT_UNAVAIL1", 0, 0);
					}
					else if (func_518(21) > 0)
					{
						Local_153 = { func_96(func_518(21), 0, 0) };
						func_333("CONT_REQ_CD", 0, 0);
						func_178(&Local_153);
					}
					else if (!unk_0x0AF5E4A6C74DC312(func_87(21), 0, 1, 0, -1, 0))
					{
						func_333("BB_NOMONEY", 0, 0);
					}
					else
					{
						func_333("RON_OP1_NA", 0, 0);
					}
				}
				else
				{
					func_333("MPCT_RQJR", 0, 0);
				}
				break;
			
			case 1:
				if (!func_538(unk_0x259BE71D8A81D4FA()))
				{
					func_333("RON_OP1_NA1", 0, 0);
				}
				else if (!func_1068(unk_0x259BE71D8A81D4FA()))
				{
					func_333("RON_OP1_NA2", 0, 0);
				}
				else if (!func_388())
				{
					func_333("RON_OP1_NA3", 0, 0);
				}
				else if (func_1067(unk_0x259BE71D8A81D4FA()))
				{
					func_333("RON_OP1_NA4", 0, 0);
				}
				else
				{
					func_333("RON_OP1_NA", 0, 0);
				}
				break;
			}
	}
}

bool func_1067(int iParam0)
{
	return 0 == func_763(iParam0);
}

int func_1068(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Global_1845281[iParam0 /*883*/].f_268.f_297.f_5;
}

void func_1069()
{
	int iVar0;
	bool bVar1;
	
	func_82(0, 0);
	func_81("MPCT_RON");
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	bVar1 = true;
	if (func_363(106, 0, 0))
	{
		if (!func_1073())
		{
			bVar1 = false;
		}
		func_609(21, iVar0, "GC_MENU48", bVar1);
		if (func_87(21) > 0)
		{
			func_63(iVar0, "MPCT_CASH", 1, bVar1, 0, 0, 0);
			func_437(func_87(21), 0);
		}
	}
	else
	{
		func_63(iVar0, "GC_MENU48", 0, 0, 0, 0, 0);
		func_63(iVar0, "", 1, 0, 0, 0, 0);
		func_608(15, 0);
	}
	iVar0++;
	bVar1 = true;
	if (!func_1070())
	{
		bVar1 = false;
	}
	func_63(iVar0, "RON_OP1_T", 0, bVar1, 0, 0, 0);
	iVar0++;
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	func_381(Local_130.f_181.f_69, 1, 1);
	Local_130.f_181.f_2 = 2;
}

int func_1070()
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	if (func_290(iVar0))
	{
		return 0;
	}
	if (func_395(iVar0))
	{
		return 0;
	}
	if (!func_388())
	{
		return 0;
	}
	if (func_1071(iVar0))
	{
		return 0;
	}
	if (func_403(iVar0, 0))
	{
		return 0;
	}
	if (!func_538(iVar0))
	{
		return 0;
	}
	if (!func_1068(iVar0))
	{
		return 0;
	}
	if (func_1067(iVar0))
	{
		return 0;
	}
	return 1;
}

bool func_1071(int iParam0)
{
	return func_1072(func_302(iParam0));
}

int func_1072(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_1073()
{
	if (func_518(21) > 0)
	{
		return 0;
	}
	if (!unk_0x0AF5E4A6C74DC312(func_87(21), 0, 1, 0, -1, 0))
	{
		return 0;
	}
	if (!func_334(21))
	{
		return 0;
	}
	if (!func_289(21))
	{
		return 0;
	}
	return 1;
}

void func_1074()
{
	switch (Local_130.f_178)
	{
		case 14:
			if (func_84(0, -1, 0))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					func_1075();
					unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
					func_125();
				}
				else
				{
					func_125();
				}
			}
			break;
	}
}

void func_1075()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	func_82(0, 0);
	func_81("MPCT_GERALD");
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	if (func_363(97, 0, 0))
	{
		iVar1 = func_518(17);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_609(17, iVar0, "GC_MENU48", bVar2);
		if (func_87(17) > 0)
		{
			func_63(iVar0, "MPCT_CASH", 1, bVar2, 0, 0, 0);
			func_437(func_87(17), 0);
		}
	}
	else
	{
		func_63(iVar0, "GC_MENU48", 0, 1, 0, 0, 0);
		func_63(iVar0, "", 1, 1, 0, 0, 0);
		func_608(15, 0);
	}
	iVar0++;
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	func_381(Local_130.f_181.f_69, 1, 1);
	Local_130.f_181.f_2 = iVar0 + 1;
}

void func_1076()
{
	switch (Local_130.f_178)
	{
		case 13:
			if (func_84(0, -1, 0))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					func_1077();
					unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
					func_125();
				}
				else
				{
					func_125();
				}
			}
			break;
	}
}

void func_1077()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	func_82(0, 0);
	func_81("MPCT_MARTIN");
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	if (func_363(100, 0, 0))
	{
		iVar1 = func_518(19);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_609(19, iVar0, "GC_MENU48", bVar2);
		if (func_87(19) > 0)
		{
			func_63(iVar0, "MPCT_CASH", 1, bVar2, 0, 0, 0);
			func_437(func_87(19), 0);
		}
	}
	else
	{
		func_63(iVar0, "GC_MENU48", 0, 1, 0, 0, 0);
		func_63(iVar0, "", 1, 1, 0, 0, 0);
		func_608(15, 0);
	}
	iVar0++;
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	func_381(Local_130.f_181.f_69, 1, 1);
	Local_130.f_181.f_2 = iVar0 + 1;
}

void func_1078()
{
	switch (Local_130.f_178)
	{
		case 12:
			if (func_84(0, -1, 0))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					func_1079();
					unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
					func_125();
				}
				else
				{
					func_125();
				}
			}
			break;
	}
}

void func_1079()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	func_82(0, 0);
	func_81("MPCT_SIMEON");
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	if (func_363(99, 0, 0))
	{
		iVar1 = func_518(18);
		bVar2 = true;
		if (iVar1 > 0)
		{
			bVar2 = false;
		}
		func_609(18, iVar0, "GC_MENU48", bVar2);
		if (func_87(18) > 0)
		{
			func_63(iVar0, "MPCT_CASH", 1, bVar2, 0, 0, 0);
			func_437(func_87(18), 0);
		}
	}
	else
	{
		func_63(iVar0, "GC_MENU48", 0, 1, 0, 0, 0);
		func_63(iVar0, "", 1, 1, 0, 0, 0);
		func_608(15, 0);
	}
	iVar0++;
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	func_381(Local_130.f_181.f_69, 1, 1);
	Local_130.f_181.f_2 = iVar0 + 1;
}

void func_1080()
{
	if (iLocal_145 == -2)
	{
		func_1111();
		if (iLocal_739 == 0)
		{
			if (func_84(0, -1, 0))
			{
				if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
				{
					func_1105();
					unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
					func_125();
				}
				else
				{
					func_125();
				}
			}
		}
	}
	else if (bLocal_144)
	{
		func_1111();
		if (iLocal_739 == 0)
		{
			if (func_1104(91, 3) == 1)
			{
				if (func_84(0, -1, 0))
				{
					if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
					{
						func_1105();
						unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
						func_125();
					}
					else
					{
						func_125();
					}
				}
			}
			else
			{
				func_32(4);
			}
		}
	}
	else
	{
		func_1111();
		if (iLocal_739 == 0)
		{
			if (Global_1585758)
			{
				if (iLocal_162 == 0)
				{
					if (func_1103(&iLocal_162, func_189()))
					{
					}
				}
				else if (iLocal_162 == 4 || iLocal_162 == 2)
				{
					hud::set_warning_message_with_header("GAR_REP_WARNH", "PERV_INS_REP1", iLocal_163, "PERV_INS_REP2", false, -1, 0, 0, true, 0);
					iLocal_163 = 18;
				}
				else if ((Global_1585758.f_2 > 0 && unk_0x0AF5E4A6C74DC312(Global_1585758.f_2, 0, 1, 0, -1, 0)) || Global_1585758.f_2 <= 0)
				{
					if (func_114())
					{
						iLocal_739++;
					}
					else
					{
						func_1101(1);
					}
				}
			}
			else if (func_1104(91, 3) == 1)
			{
				if (func_84(0, -1, 0))
				{
					if (!BitTest(Local_130.f_363, 4) || unk_0x7811C74D5B749F76(2))
					{
						func_1081();
						unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 4);
						func_125();
					}
					else
					{
						func_125();
					}
				}
			}
			else
			{
				func_32(4);
			}
		}
	}
}

void func_1081()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	func_82(0, 0);
	func_81("MPCT_INSH");
	func_79(1, 1, 0, 0, 0);
	func_78(1, 2, 1, 1, 1);
	func_77(0, 0, 0, 0, 0);
	iLocal_142 = 0;
	iLocal_143 = 0;
	if (func_1099(0, 0) && (!func_1093(0, 0, 0, -1, 1) || Global_1663583))
	{
		func_1084(0, &iVar0);
		bVar5 = true;
	}
	if (iLocal_145 != -1)
	{
		if (iLocal_145 < 32)
		{
			if (func_156(iLocal_145, -1) > 0 && !func_232(iLocal_145))
			{
				iVar4 = func_225(iLocal_145, -1, 1);
				if (iLocal_145 == 13)
				{
					iVar4 = 11;
				}
				else if (iLocal_145 == 18)
				{
					iVar4 = 10;
				}
				iVar1 = 0;
				while (iVar1 < iVar4)
				{
					iVar2 = (func_224(iLocal_145) + iVar1);
					func_223(iVar2, &iVar3, 1);
					if (iVar3 > 0 || (!bVar5 && iVar3 == 0))
					{
						func_1084(iVar3, &iVar0);
					}
					iVar1++;
				}
			}
		}
		else
		{
			iVar6 = func_161(iLocal_145);
			iVar1 = 0;
			while (iVar1 < func_218(iVar6))
			{
				iVar2 = (func_217(iVar6) + iVar1);
				func_223(iVar2, &iVar3, 1);
				if (iVar3 > 0 || (!bVar5 && iVar3 == 0))
				{
					func_1084(iVar3, &iVar0);
				}
				iVar1++;
			}
		}
	}
	if (iLocal_143 > 1)
	{
		func_1083(&iVar0);
	}
	if (iVar0 <= 0)
	{
		unk_0x8744D2E3FC95740E(&(Local_130.f_363), 4);
		func_32(4);
		return;
	}
	Local_130.f_181.f_2 = iVar0;
	if (Local_130.f_181.f_69 >= Local_130.f_181.f_2)
	{
		Local_130.f_181.f_69 = 1;
	}
	else if (Local_130.f_181.f_69 < 0)
	{
		Local_130.f_181.f_69 = 0;
	}
	iLocal_141 = func_1082(iLocal_148[Local_130.f_181.f_69]);
	func_381(Local_130.f_181.f_69, 1, 0);
	Local_130.f_181.f_3[1] = 0;
	Local_130.f_181.f_36[1] = 0;
	func_61(-1);
	if (func_1320())
	{
		if (unk_0xAE231F549813BBDF(2))
		{
			func_383(237, "BB_SELECT", -1, 0);
			func_383(238, "BB_BACK", -1, 0);
		}
		else
		{
			func_382(176, "BB_SELECT", -1);
			func_382(177, "BB_BACK", -1);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_130.f_363), 6);
	}
	bLocal_144 = false;
}

int func_1082(int iParam0)
{
	return Global_1586521[iParam0 /*142*/].f_105;
}

void func_1083(var uParam0)
{
	func_63(*uParam0, "MPCT_INSALL", 0, 1, 0, 0, 0);
	if (iLocal_142 > 0)
	{
		if (iLocal_142 <= Global_262145.f_34237)
		{
			func_63(*uParam0, "MPCT_INSCOST", 1, 1, 0, 0, 0);
			func_437(iLocal_142, 0);
		}
		else
		{
			func_63(*uParam0, "MPCT_INSCOST", 1, 1, 0, 0, 0);
			func_437(Global_262145.f_34237, 0);
		}
	}
	else
	{
		func_63(*uParam0, "MPCT_NOCOST", 0, 1, 0, 0, 0);
	}
	*uParam0++;
}

void func_1084(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<16> Var5;
	
	if (func_1099(iParam0, 0))
	{
		func_188(iParam0, &iVar2);
		iVar3 = 1;
		if (func_1035(&(Global_1586521[iParam0 /*142*/])))
		{
			iVar3++;
		}
		if (func_1034(func_174(iParam0), Global_1586521[iParam0 /*142*/].f_77, Global_1586521[iParam0 /*142*/].f_9[10]) && func_1033(func_174(iParam0)))
		{
			iVar3++;
		}
		Var5 = { func_1031(-1, iVar2, 1) };
		StringCopy(&Var4, "MPCT_INSVEH", 24);
		StringIntConCat(&Var4, iVar3, 24);
		func_63(*uParam1, &Var4, iVar3, 1, 0, 0, 0);
		if (!unk_0xD6F9DEE4765092A9(&Var5))
		{
			func_1030(&Var5, 0, 0, 0);
		}
		else
		{
			func_448(unk_0x93E7527CFECC7CD8(func_174(iParam0)), 0);
		}
		if (func_1035(&(Global_1586521[iParam0 /*142*/])))
		{
			func_448("VEH_LIVERY", 0);
		}
		if (func_1034(func_174(iParam0), Global_1586521[iParam0 /*142*/].f_77, Global_1586521[iParam0 /*142*/].f_9[10]) && func_1033(func_174(iParam0)))
		{
			func_448("VEH_TOPL", 0);
		}
		func_1087(&Var1, Global_1586521[iParam0 /*142*/].f_66, 0, -1);
		if (BitTest(Global_1586521[iParam0 /*142*/].f_103, 16))
		{
			iVar0 = Var1.f_4;
			iLocal_140 = iVar0;
			iLocal_141 = func_1082(iParam0);
			if (func_213(Global_1586521[iParam0 /*142*/].f_66))
			{
				iVar0 = Global_262145.f_21640;
			}
			iLocal_140 = 0;
			iLocal_141 = 0;
		}
		if (func_1082(iParam0) > 0)
		{
			iVar0 = (iVar0 - func_1082(iParam0));
		}
		if (!func_213(Global_1586521[iParam0 /*142*/].f_66))
		{
			func_1085(&iVar0);
		}
		if (iVar0 > 0)
		{
			func_63(*uParam1, "MPCT_INSCOST", 1, 1, 0, 0, 0);
			func_437(iVar0, 0);
			iLocal_142 = (iLocal_142 + iVar0);
		}
		else
		{
			func_63(*uParam1, "MPCT_NOCOST", 0, 1, 0, 0, 0);
		}
		iLocal_143++;
		iLocal_148[*uParam1] = iParam0;
		*uParam1++;
	}
}

void func_1085(int iParam0)
{
	float fVar0;
	
	if (*iParam0 == 0)
	{
		return;
	}
	if (func_1086())
	{
		fVar0 = system::to_float(*iParam0);
		fVar0 = (fVar0 * (1f - Global_262145.f_32006));
		*iParam0 = system::floor(fVar0);
	}
}

bool func_1086()
{
	return func_90(12142, -1) != 0;
}

int func_1087(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = unk_0x76CD105BCAC6EB9F();
	if (iParam3 == 0)
	{
		bVar0 = true;
	}
	else if (iParam3 == 1)
	{
		bVar0 = false;
	}
	iVar1 = -1;
	iVar2 = -1;
	if (!unk_0xAD1840C2E6AF7D5E(iParam1))
	{
		bVar3 = false;
		if (iParam1 == 0)
		{
		}
		else if (iParam1 == Global_76458)
		{
		}
		else if (iParam1 == Global_76459)
		{
		}
		else if (iParam1 == Global_76460)
		{
			iVar1 = 500000;
			if (bVar0)
			{
				if (Global_262145.f_21288 >= 0)
				{
					iVar1 = Global_262145.f_21288;
				}
			}
			bVar3 = true;
		}
		else if (iParam1 == Global_76461)
		{
		}
		else if (iParam1 == Global_76462)
		{
		}
		else if (iParam1 == joaat("kosatka"))
		{
		}
		else if (iParam1 == joaat("brickade2"))
		{
		}
		else if (iParam1 == joaat("inductor") || iParam1 == joaat("inductor2"))
		{
			bVar3 = true;
		}
		if (!bVar3)
		{
			return 0;
		}
	}
	switch (iParam1)
	{
		case joaat("adder"):
			iVar1 = 1000000;
			break;
		
		case joaat("akuma"):
			iVar1 = 9000;
			break;
		
		case joaat("asea"):
			iVar1 = 12000;
			break;
		
		case joaat("asterope"):
			iVar1 = 26000;
			break;
		
		case joaat("bagger"):
			iVar1 = 16000;
			if (bVar0)
			{
				if (Global_262145.f_17768 >= 0)
				{
					iVar1 = Global_262145.f_17768;
				}
			}
			break;
		
		case joaat("baller"):
			iVar1 = 90000;
			break;
		
		case joaat("baller2"):
			iVar1 = 90000;
			break;
		
		case joaat("banshee"):
			iVar1 = 90000;
			break;
		
		case joaat("bati"):
			iVar1 = 10000;
			break;
		
		case joaat("bati2"):
			iVar1 = 10000;
			break;
		
		case joaat("bfinjection"):
			iVar1 = 16000;
			break;
		
		case joaat("bison"):
			iVar1 = 30000;
			break;
		
		case joaat("bison2"):
			iVar1 = 30000;
			break;
		
		case joaat("bison3"):
			iVar1 = 30000;
			break;
		
		case joaat("bjxl"):
			iVar1 = 27000;
			if (bVar0)
			{
				if (Global_262145.f_24344 >= 0)
				{
					iVar1 = Global_262145.f_24344;
				}
			}
			break;
		
		case joaat("blazer"):
			iVar1 = 8000;
			break;
		
		case joaat("blazer2"):
			iVar1 = 62000;
			if (bVar0)
			{
				iVar1 = Global_262145.f_28145;
			}
			break;
		
		case joaat("blista"):
			iVar1 = 16000;
			break;
		
		case joaat("bobcatxl"):
			iVar1 = 23000;
			break;
		
		case joaat("bodhi2"):
			iVar1 = 12000;
			break;
		
		case joaat("boxville"):
			if (!bParam2)
			{
				iVar1 = 298500;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28071;
				}
			}
			else
			{
				iVar1 = 398000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28070;
				}
				iVar2 = 298500;
				if (bVar0)
				{
					iVar2 = Global_262145.f_28071;
				}
			}
			break;
		
		case joaat("stockade"):
			if (!bParam2)
			{
				iVar1 = 1680000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28073;
				}
			}
			else
			{
				iVar1 = 2240000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28072;
				}
				iVar2 = 1680000;
				if (bVar0)
				{
					iVar2 = Global_262145.f_28073;
				}
			}
			break;
		
		case joaat("boxville2"):
			iVar1 = 25000;
			break;
		
		case joaat("boxville3"):
			iVar1 = 25000;
			break;
		
		case joaat("buccaneer"):
			iVar1 = 28000;
			break;
		
		case joaat("buffalo"):
			iVar1 = 35000;
			break;
		
		case joaat("buffalo2"):
			iVar1 = 96000;
			break;
		
		case joaat("bullet"):
			iVar1 = 150000;
			break;
		
		case joaat("burrito"):
			iVar1 = 13000;
			break;
		
		case joaat("burrito2"):
			if (bParam2)
			{
				iVar1 = 450000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28069;
				}
			}
			else
			{
				iVar1 = 598500;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28068;
				}
				iVar2 = 450000;
				if (bVar0)
				{
					iVar2 = Global_262145.f_28069;
				}
			}
			break;
		
		case joaat("burrito3"):
			iVar1 = 13000;
			break;
		
		case joaat("burrito4"):
			iVar1 = 13000;
			break;
		
		case joaat("carbonizzare"):
			iVar1 = 195000;
			break;
		
		case joaat("carbonrs"):
			iVar1 = 40000;
			break;
		
		case joaat("cavalcade"):
			iVar1 = 60000;
			break;
		
		case joaat("cavalcade2"):
			iVar1 = 70000;
			break;
		
		case joaat("cheetah"):
			iVar1 = 650000;
			break;
		
		case joaat("cogcabrio"):
			iVar1 = 185000;
			break;
		
		case joaat("comet2"):
			iVar1 = 85000;
			break;
		
		case joaat("coquette"):
			iVar1 = 55000;
			break;
		
		case joaat("daemon"):
			iVar1 = 20000;
			break;
		
		case joaat("dilettante"):
			iVar1 = 25000;
			break;
		
		case joaat("dominator"):
			iVar1 = 35000;
			if (bVar0 && Global_262145.f_7828 >= 0)
			{
				iVar1 = Global_262145.f_7828;
			}
			if (bParam2)
			{
				iVar2 = iVar1;
				iVar1 = system::round((system::to_float(35000) * 0,75f));
				if (bVar0 && Global_262145.f_25504 >= 0)
				{
					iVar1 = Global_262145.f_25504;
				}
			}
			break;
		
		case joaat("double"):
			iVar1 = 12000;
			break;
		
		case joaat("dubsta"):
			iVar1 = 120000;
			break;
		
		case joaat("dubsta2"):
			iVar1 = 120000;
			break;
		
		case joaat("elegy2"):
			if (!bParam2)
			{
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_19399 >= 0)
					{
						iVar1 = Global_262145.f_19399;
					}
				}
			}
			else
			{
				iVar1 = 0;
				if (bVar0)
				{
					if (Global_262145.f_8663 >= 0)
					{
						iVar1 = Global_262145.f_8663;
					}
				}
			}
			break;
		
		case joaat("emperor"):
			iVar1 = 8000;
			break;
		
		case joaat("emperor2"):
			iVar1 = 5000;
			break;
		
		case joaat("emperor3"):
			iVar1 = 5000;
			break;
		
		case joaat("entityxf"):
			iVar1 = 795000;
			break;
		
		case joaat("exemplar"):
			iVar1 = 205000;
			break;
		
		case joaat("f620"):
			iVar1 = 80000;
			break;
		
		case joaat("faggio2"):
			iVar1 = 5000;
			break;
		
		case joaat("felon"):
			iVar1 = 100000;
			break;
		
		case joaat("felon2"):
			iVar1 = 95000;
			break;
		
		case joaat("feltzer2"):
			iVar1 = 145000;
			break;
		
		case joaat("fq2"):
			iVar1 = 50000;
			if (bVar0)
			{
				if (Global_262145.f_24345 >= 0)
				{
					iVar1 = Global_262145.f_24345;
				}
			}
			break;
		
		case joaat("fugitive"):
			iVar1 = 24000;
			break;
		
		case joaat("fusilade"):
			iVar1 = 36000;
			break;
		
		case joaat("futo"):
			iVar1 = 9000;
			if (bVar0)
			{
				if (Global_262145.f_24338 >= 0)
				{
					iVar1 = Global_262145.f_24338;
				}
			}
			break;
		
		case joaat("gauntlet"):
			iVar1 = 32000;
			break;
		
		case joaat("gburrito"):
			iVar1 = 16000;
			break;
		
		case joaat("granger"):
			iVar1 = 35000;
			break;
		
		case joaat("gresley"):
			iVar1 = 29000;
			break;
		
		case joaat("habanero"):
			iVar1 = 42000;
			if (bVar0)
			{
				if (Global_262145.f_24346 >= 0)
				{
					iVar1 = Global_262145.f_24346;
				}
			}
			break;
		
		case joaat("hexer"):
			iVar1 = 15000;
			break;
		
		case joaat("hotknife"):
			iVar1 = 90000;
			break;
		
		case joaat("infernus"):
			iVar1 = 440000;
			break;
		
		case joaat("ingot"):
			iVar1 = 9000;
			break;
		
		case joaat("intruder"):
			iVar1 = 16000;
			break;
		
		case joaat("issi2"):
			iVar1 = 18000;
			break;
		
		case joaat("jackal"):
			iVar1 = 60000;
			break;
		
		case joaat("jb700"):
			iVar1 = 475000;
			break;
		
		case joaat("khamelion"):
			iVar1 = 100000;
			break;
		
		case joaat("landstalker"):
			iVar1 = 58000;
			break;
		
		case joaat("lguard"):
			iVar1 = 865000;
			if (bVar0)
			{
				iVar1 = Global_262145.f_28144;
			}
			break;
		
		case joaat("firetruk"):
			if (!bParam2)
			{
				iVar1 = 2471250;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28067;
				}
			}
			else
			{
				iVar1 = 3295000;
				if (bVar0)
				{
					iVar1 = Global_262145.f_28066;
				}
				iVar2 = 2471250;
				if (bVar0)
				{
					iVar2 = Global_262145.f_28067;
				}
			}
			break;
		
		case joaat("manana"):
			iVar1 = 10000;
			if (bVar0)
			{
				if (Global_262145.f_28856 >= 0)
				{
					iVar1 = Global_262145.f_28856;
				}
			}
			break;
		
		case joaat("mesa"):
			iVar1 = 30000;
			break;
		
		case joaat("minivan"):
			iVar1 = 30000;
			break;
		
		case joaat("monroe"):
			iVar1 = 490000;
			break;
		
		case joaat("nemesis"):
			iVar1 = 12000;
			break;
		
		case joaat("ninef"):
			iVar1 = 120000;
			break;
		
		case joaat("ninef2"):
			iVar1 = 130000;
			break;
		
		case joaat("oracle"):
			iVar1 = 82000;
			break;
		
		case joaat("oracle2"):
			iVar1 = 80000;
			break;
		
		case joaat("patriot"):
			iVar1 = 50000;
			if (bVar0)
			{
				if (Global_262145.f_24342 >= 0)
				{
					iVar1 = Global_262145.f_24342;
				}
			}
			break;
		
		case joaat("pcj"):
			iVar1 = 9000;
			break;
		
		case joaat("penumbra"):
			iVar1 = 24000;
			break;
		
		case joaat("peyote"):
			iVar1 = 12000;
			if (bVar0)
			{
				if (Global_262145.f_28857 >= 0)
				{
					iVar1 = Global_262145.f_28857;
				}
			}
			break;
		
		case joaat("phoenix"):
			iVar1 = 20000;
			break;
		
		case joaat("prairie"):
			iVar1 = 25000;
			if (bVar0)
			{
				if (Global_262145.f_24341 >= 0)
				{
					iVar1 = Global_262145.f_24341;
				}
			}
			break;
		
		case joaat("pranger"):
			iVar1 = 35000;
			break;
		
		case joaat("premier"):
			iVar1 = 10000;
			break;
		
		case joaat("primo"):
			iVar1 = 9000;
			break;
		
		case joaat("radi"):
			iVar1 = 32000;
			break;
		
		case joaat("rancherxl"):
			iVar1 = 9000;
			break;
		
		case joaat("rancherxl2"):
			iVar1 = 9000;
			break;
		
		case joaat("rapidgt"):
			iVar1 = 118000;
			break;
		
		case joaat("rapidgt2"):
			iVar1 = 136000;
			break;
		
		case joaat("ratloader"):
			iVar1 = 6000;
			break;
		
		case joaat("rebel"):
			iVar1 = 7000;
			break;
		
		case joaat("rebel2"):
			iVar1 = 22000;
			break;
		
		case joaat("regina"):
			iVar1 = 8000;
			break;
		
		case joaat("rocoto"):
			iVar1 = 85000;
			break;
		
		case joaat("ruffian"):
			iVar1 = 10000;
			break;
		
		case joaat("ruiner"):
			iVar1 = 10000;
			if (bVar0)
			{
				if (Global_262145.f_24339 >= 0)
				{
					iVar1 = Global_262145.f_24339;
				}
			}
			break;
		
		case joaat("rumpo"):
			iVar1 = 13000;
			break;
		
		case joaat("sabregt"):
			iVar1 = 15000;
			if (bVar0)
			{
				if (Global_262145.f_14984 >= 0)
				{
					iVar1 = Global_262145.f_14984;
				}
			}
			break;
		
		case joaat("sadler"):
			iVar1 = 35000;
			break;
		
		case joaat("sanchez"):
			iVar1 = 7000;
			break;
		
		case joaat("sandking"):
			iVar1 = 45000;
			break;
		
		case joaat("sandking2"):
			iVar1 = 45000;
			break;
		
		case joaat("schafter2"):
			iVar1 = 65000;
			break;
		
		case joaat("schwarzer"):
			iVar1 = 80000;
			break;
		
		case joaat("seashark"):
			iVar1 = 16899;
			break;
		
		case joaat("seminole"):
			iVar1 = 30000;
			break;
		
		case joaat("sentinel"):
			iVar1 = 60000;
			break;
		
		case joaat("sentinel2"):
			iVar1 = 60000;
			break;
		
		case joaat("serrano"):
			iVar1 = 60000;
			if (bVar0)
			{
				if (Global_262145.f_24343 >= 0)
				{
					iVar1 = Global_262145.f_24343;
				}
			}
			break;
		
		case joaat("speedo"):
			iVar1 = 15000;
			break;
		
		case joaat("speedo2"):
			iVar1 = 15000;
			break;
		
		case joaat("stanier"):
			iVar1 = 10000;
			break;
		
		case joaat("stinger"):
			iVar1 = 1000000;
			break;
		
		case joaat("stingergt"):
			iVar1 = 1000000;
			break;
		
		case joaat("stratum"):
			iVar1 = 10000;
			break;
		
		case joaat("stretch"):
			iVar1 = 30000;
			break;
		
		case joaat("sultan"):
			iVar1 = 12000;
			break;
		
		case joaat("superd"):
			iVar1 = 250000;
			break;
		
		case joaat("surano"):
			iVar1 = 99000;
			break;
		
		case joaat("surge"):
			iVar1 = 38000;
			break;
		
		case joaat("tailgater"):
			iVar1 = 55000;
			break;
		
		case joaat("taxi"):
			iVar1 = 13000;
			if (Global_79389)
			{
				iVar1 = 650000;
				if (bVar0 && Global_262145.f_33365 >= 0)
				{
					iVar1 = Global_262145.f_33365;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = 487500;
					if (bVar0 && Global_262145.f_33370 >= 0)
					{
						iVar1 = Global_262145.f_33370;
					}
				}
			}
			break;
		
		case joaat("tornado"):
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_14985 >= 0)
				{
					iVar1 = Global_262145.f_14985;
				}
			}
			break;
		
		case joaat("tornado2"):
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_14985 >= 0)
				{
					iVar1 = Global_262145.f_14985;
				}
			}
			break;
		
		case joaat("tornado3"):
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_14985 >= 0)
				{
					iVar1 = Global_262145.f_14985;
				}
			}
			break;
		
		case joaat("tornado4"):
			iVar1 = 30000;
			if (bVar0)
			{
				if (Global_262145.f_14985 >= 0)
				{
					iVar1 = Global_262145.f_14985;
				}
			}
			break;
		
		case joaat("vacca"):
			iVar1 = 240000;
			break;
		
		case joaat("vader"):
			iVar1 = 9000;
			break;
		
		case joaat("vigero"):
			iVar1 = 21000;
			break;
		
		case joaat("voltic"):
			iVar1 = 80000;
			break;
		
		case joaat("voodoo2"):
			iVar1 = 5000;
			break;
		
		case joaat("washington"):
			iVar1 = 15000;
			break;
		
		case joaat("youga"):
			iVar1 = 16000;
			break;
		
		case joaat("zion"):
			iVar1 = 50000;
			break;
		
		case joaat("zion2"):
			iVar1 = 65000;
			break;
		
		case joaat("bmx"):
			iVar1 = 500;
			break;
		
		case joaat("scorcher"):
			iVar1 = 1000;
			break;
		
		case joaat("tribike"):
			iVar1 = 2500;
			break;
		
		case joaat("tribike2"):
			iVar1 = 2500;
			break;
		
		case joaat("tribike3"):
			iVar1 = 2500;
			break;
		
		case joaat("cruiser"):
			iVar1 = 3000;
			break;
		
		case joaat("ztype"):
			if (bVar0)
			{
				iVar1 = 1000000;
			}
			else
			{
				iVar1 = 10000000;
			}
			break;
	}
	if (bVar0 || iParam3 == 1)
	{
		switch (iParam1)
		{
			case joaat("adder"):
				iVar1 = 1000000;
				break;
			
			case joaat("airbus"):
				iVar1 = 550000;
				break;
			
			case joaat("akuma"):
				iVar1 = 9000;
				break;
			
			case joaat("annihilator"):
				iVar1 = 4000000;
				break;
			
			case joaat("baller2"):
				iVar1 = 90000;
				break;
			
			case joaat("banshee"):
				iVar1 = 105000;
				break;
			
			case joaat("barracks"):
				iVar1 = 450000;
				break;
			
			case joaat("bati"):
				iVar1 = 15000;
				break;
			
			case joaat("bati2"):
				iVar1 = 15000;
				break;
			
			case joaat("bfinjection"):
				iVar1 = 16000;
				break;
			
			case joaat("bison"):
				iVar1 = 30000;
				break;
			
			case joaat("blazer"):
				iVar1 = 8000;
				break;
			
			case joaat("bmx"):
				iVar1 = 800;
				break;
			
			case joaat("bullet"):
				iVar1 = 155000;
				break;
			
			case joaat("bus"):
				iVar1 = 500000;
				break;
			
			case joaat("buzzard"):
				iVar1 = 2000000;
				break;
			
			case joaat("carbonizzare"):
				iVar1 = 195000;
				break;
			
			case joaat("carbonrs"):
				iVar1 = 40000;
				break;
			
			case joaat("cargobob"):
				iVar1 = 185000;
				break;
			
			case joaat("cheetah"):
				iVar1 = 650000;
				break;
			
			case joaat("coach"):
				iVar1 = 525000;
				break;
			
			case joaat("cogcabrio"):
				iVar1 = 185000;
				break;
			
			case joaat("comet2"):
				iVar1 = 100000;
				break;
			
			case joaat("coquette"):
				iVar1 = 138000;
				break;
			
			case joaat("cruiser"):
				iVar1 = 800;
				break;
			
			case joaat("crusader"):
				iVar1 = 225000;
				break;
			
			case joaat("cuban800"):
				iVar1 = 240000;
				break;
			
			case joaat("dilettante"):
				iVar1 = 25000;
				break;
			
			case joaat("double"):
				iVar1 = 12000;
				break;
			
			case joaat("dubsta"):
				iVar1 = 70000;
				break;
			
			case joaat("dubsta2"):
				iVar1 = 70000;
				break;
			
			case joaat("dump"):
				iVar1 = 1000000;
				break;
			
			case joaat("duster"):
				iVar1 = 275000;
				break;
			
			case joaat("elegy2"):
				if (!bParam2)
				{
					iVar1 = 95000;
					if (bVar0)
					{
						if (Global_262145.f_19399 >= 0)
						{
							iVar1 = Global_262145.f_19399;
						}
					}
				}
				else
				{
					iVar1 = 0;
					if (bVar0)
					{
						if (Global_262145.f_8663 >= 0)
						{
							iVar1 = Global_262145.f_8663;
						}
					}
				}
				break;
			
			case joaat("entityxf"):
				iVar1 = 795000;
				break;
			
			case joaat("exemplar"):
				iVar1 = 205000;
				break;
			
			case joaat("faggio2"):
				iVar1 = 5000;
				break;
			
			case joaat("felon"):
				iVar1 = 90000;
				break;
			
			case joaat("felon2"):
				iVar1 = 95000;
				break;
			
			case joaat("feltzer2"):
				iVar1 = 145000;
				break;
			
			case joaat("frogger"):
				iVar1 = 1300000;
				break;
			
			case joaat("fugitive"):
				iVar1 = 24000;
				break;
			
			case joaat("gauntlet"):
				iVar1 = 32000;
				break;
			
			case joaat("hexer"):
				iVar1 = 15000;
				break;
			
			case joaat("hotknife"):
				iVar1 = 90000;
				break;
			
			case joaat("infernus"):
				iVar1 = 440000;
				break;
			
			case joaat("issi2"):
				iVar1 = 18000;
				break;
			
			case joaat("jb700"):
				iVar1 = 350000;
				break;
			
			case joaat("jetmax"):
				iVar1 = 299000;
				break;
			
			case joaat("journey"):
				iVar1 = 15000;
				break;
			
			case joaat("khamelion"):
				iVar1 = 100000;
				break;
			
			case joaat("luxor"):
				iVar1 = 1500000;
				break;
			
			case joaat("mammatus"):
				iVar1 = 300000;
				break;
			
			case joaat("marquis"):
				iVar1 = 413990;
				break;
			
			case joaat("maverick"):
				iVar1 = 780000;
				break;
			
			case joaat("monroe"):
				iVar1 = 490000;
				break;
			
			case joaat("mule"):
				iVar1 = 27000;
				break;
			
			case joaat("ninef"):
				iVar1 = 120000;
				break;
			
			case joaat("ninef2"):
				iVar1 = 130000;
				break;
			
			case joaat("oracle2"):
				iVar1 = 80000;
				break;
			
			case joaat("pcj"):
				iVar1 = 9000;
				break;
			
			case joaat("picador"):
				iVar1 = 9000;
				break;
			
			case joaat("rapidgt"):
				iVar1 = 132000;
				break;
			
			case joaat("rapidgt2"):
				iVar1 = 140000;
				break;
			
			case joaat("rentalbus"):
				iVar1 = 30000;
				break;
			
			case joaat("rocoto"):
				iVar1 = 85000;
				break;
			
			case joaat("ruffian"):
				iVar1 = 10000;
				break;
			
			case joaat("sanchez"):
				iVar1 = 7000;
				break;
			
			case joaat("sandking"):
				iVar1 = 45000;
				break;
			
			case joaat("schwarzer"):
				iVar1 = 80000;
				break;
			
			case joaat("scorcher"):
				iVar1 = 2000;
				break;
			
			case joaat("shamal"):
				iVar1 = 1150000;
				break;
			
			case joaat("squalo"):
				iVar1 = 196621;
				break;
			
			case joaat("stinger"):
				iVar1 = 850000;
				break;
			
			case joaat("stingergt"):
				iVar1 = 875000;
				break;
			
			case joaat("stretch"):
				iVar1 = 30000;
				break;
			
			case joaat("stunt"):
				iVar1 = 250000;
				break;
			
			case joaat("suntrap"):
				iVar1 = 25160;
				break;
			
			case joaat("superd"):
				iVar1 = 250000;
				break;
			
			case joaat("surano"):
				iVar1 = 110000;
				break;
			
			case joaat("titan"):
				iVar1 = 5000000;
				break;
			
			case joaat("tribike"):
				iVar1 = 10000;
				break;
			
			case joaat("tribike2"):
				iVar1 = 10000;
				break;
			
			case joaat("tribike3"):
				iVar1 = 10000;
				break;
			
			case joaat("tropic"):
				iVar1 = 22000;
				break;
			
			case joaat("vacca"):
				iVar1 = 240000;
				break;
			
			case joaat("vader"):
				iVar1 = 9000;
				break;
			
			case joaat("velum"):
				iVar1 = 450000;
				break;
			
			case joaat("vigero"):
				iVar1 = 21000;
				break;
			
			case joaat("voltic"):
				iVar1 = 150000;
				break;
			
			case joaat("zion"):
				iVar1 = 60000;
				break;
			
			case joaat("zion2"):
				iVar1 = 65000;
				break;
			
			case joaat("ztype"):
				iVar1 = 950000;
				break;
		}
		switch (iParam1)
		{
			case joaat("annihilator"):
				iVar1 = 1825000;
				break;
			
			case joaat("blazer3"):
				iVar1 = 69000;
				break;
			
			case joaat("bodhi2"):
				iVar1 = 25000;
				break;
			
			case joaat("buzzard"):
				iVar1 = 1750000;
				break;
			
			case joaat("dilettante2"):
				iVar1 = 25000;
				break;
			
			case joaat("dloader"):
				iVar1 = 15000;
				break;
			
			case joaat("dune2"):
				iVar1 = 1000000;
				break;
			
			case joaat("frogger"):
				iVar1 = 1300000;
				break;
			
			case joaat("luxor"):
				iVar1 = 1625000;
				break;
			
			case joaat("mesa3"):
				iVar1 = 87000;
				break;
			
			case joaat("peyote"):
				iVar1 = 38000;
				if (bVar0)
				{
					if (Global_262145.f_28857 >= 0)
					{
						iVar1 = Global_262145.f_28857;
					}
				}
				break;
			
			case joaat("rhino"):
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_3799 >= 0)
					{
						iVar1 = Global_262145.f_3799;
					}
				}
				break;
			
			case joaat("romero"):
				iVar1 = 45000;
				if (bVar0)
				{
					if (Global_262145.f_24340 >= 0)
					{
						iVar1 = Global_262145.f_24340;
					}
				}
				break;
			
			case joaat("sentinel2"):
				iVar1 = 95000;
				break;
			
			case joaat("shamal"):
				iVar1 = 1150000;
				break;
			
			case joaat("surfer"):
				iVar1 = 11000;
				break;
			
			case joaat("surfer2"):
				iVar1 = 5000;
				break;
			
			case joaat("titan"):
				iVar1 = 2000000;
				break;
			
			case joaat("towtruck2"):
				iVar1 = 32000;
				break;
		}
		switch (iParam1)
		{
			case joaat("bodhi2"):
				iVar1 = 25000;
				if (bVar0)
				{
					if (Global_262145.f_4402 >= 0)
					{
						iVar1 = Global_262145.f_4402;
					}
				}
				break;
			
			case joaat("dune"):
				iVar1 = 20000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 20000;
					if (Global_262145.f_4403 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_4403;
					}
				}
				break;
			
			case joaat("rebel"):
				iVar1 = 3000;
				break;
			
			case joaat("sadler"):
				iVar1 = 35000;
				break;
			
			case joaat("sanchez2"):
				iVar1 = 8000;
				break;
			
			case joaat("sandking2"):
				iVar1 = 38000;
				break;
		}
		switch (iParam1)
		{
			case joaat("asea"):
				iVar1 = 12000;
				break;
			
			case joaat("asterope"):
				iVar1 = 26000;
				if (bVar0)
				{
					if (Global_262145.f_7106 >= 0)
					{
						iVar1 = Global_262145.f_7106;
					}
				}
				break;
			
			case joaat("bobcatxl"):
				iVar1 = 23000;
				if (bVar0)
				{
					if (Global_262145.f_7107 >= 0)
					{
						iVar1 = Global_262145.f_7107;
					}
				}
				break;
			
			case joaat("cavalcade"):
				iVar1 = 60000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 60000;
					if (Global_262145.f_3756 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_3756;
					}
				}
				break;
			
			case joaat("cavalcade2"):
				iVar1 = 60000;
				if (bVar0 || iParam3 == 1)
				{
					iVar1 = 70000;
					if (Global_262145.f_7108 >= 0 && bVar0)
					{
						iVar1 = Global_262145.f_7108;
					}
				}
				break;
			
			case joaat("granger"):
				iVar1 = 35000;
				if (bVar0)
				{
					if (Global_262145.f_7109 >= 0)
					{
						iVar1 = Global_262145.f_7109;
					}
				}
				break;
			
			case joaat("ingot"):
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_7110 >= 0)
					{
						iVar1 = Global_262145.f_7110;
					}
				}
				break;
			
			case joaat("intruder"):
				iVar1 = 16000;
				if (bVar0)
				{
					if (Global_262145.f_7111 >= 0)
					{
						iVar1 = Global_262145.f_7111;
					}
				}
				break;
			
			case joaat("minivan"):
				iVar1 = 30000;
				if (bVar0)
				{
					if (Global_262145.f_7112 >= 0)
					{
						iVar1 = Global_262145.f_7112;
					}
				}
				break;
			
			case joaat("premier"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_7113 >= 0)
					{
						iVar1 = Global_262145.f_7113;
					}
				}
				break;
			
			case joaat("radi"):
				iVar1 = 32000;
				if (bVar0)
				{
					if (Global_262145.f_7114 >= 0)
					{
						iVar1 = Global_262145.f_7114;
					}
				}
				break;
			
			case joaat("rancherxl"):
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_7115 >= 0)
					{
						iVar1 = Global_262145.f_7115;
					}
				}
				break;
			
			case joaat("ratloader"):
				iVar1 = 6000;
				if (bVar0)
				{
					if (Global_262145.f_7135 >= 0)
					{
						iVar1 = Global_262145.f_7135;
					}
				}
				break;
			
			case joaat("stanier"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_7116 >= 0)
					{
						iVar1 = Global_262145.f_7116;
					}
				}
				break;
			
			case joaat("stratum"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_7117 >= 0)
					{
						iVar1 = Global_262145.f_7117;
					}
				}
				break;
			
			case joaat("washington"):
				iVar1 = 15000;
				if (bVar0)
				{
					if (Global_262145.f_7118 >= 0)
					{
						iVar1 = Global_262145.f_7118;
					}
				}
				break;
			
			case joaat("cargobob"):
				iVar1 = 1790000;
				if (bVar0)
				{
					if (Global_262145.f_16506 >= 0)
					{
						iVar1 = Global_262145.f_16506;
					}
				}
				break;
			
			case joaat("cargobob2"):
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_16507 >= 0)
					{
						iVar1 = Global_262145.f_16507;
					}
				}
				break;
			
			case joaat("tug"):
				iVar1 = 1250000;
				if (bVar0)
				{
					if (Global_262145.f_16513 >= 0)
					{
						iVar1 = Global_262145.f_16513;
					}
				}
				break;
			
			case joaat("nimbus"):
				iVar1 = 1900000;
				if (bVar0)
				{
					if (Global_262145.f_16511 >= 0)
					{
						iVar1 = Global_262145.f_16511;
					}
				}
				break;
			
			case joaat("brickade"):
				iVar1 = 555000;
				if (bVar0)
				{
					if (Global_262145.f_16509 >= 0)
					{
						iVar1 = Global_262145.f_16509;
					}
				}
				break;
			
			case joaat("windsor2"):
				iVar1 = 900000;
				if (bVar0)
				{
					if (Global_262145.f_16515 >= 0)
					{
						iVar1 = Global_262145.f_16515;
					}
				}
				break;
			
			case joaat("prototipo"):
				iVar1 = 2700000;
				if (bVar0)
				{
					if (Global_262145.f_16520 >= 0)
					{
						iVar1 = Global_262145.f_16520;
					}
				}
				break;
			
			case joaat("fmj"):
				iVar1 = 1750000;
				if (bVar0)
				{
					if (Global_262145.f_16510 >= 0)
					{
						iVar1 = Global_262145.f_16510;
					}
				}
				break;
			
			case joaat("bestiagts"):
				iVar1 = 610000;
				if (bVar0)
				{
					if (Global_262145.f_16508 >= 0)
					{
						iVar1 = Global_262145.f_16508;
					}
				}
				break;
			
			case joaat("xls"):
				iVar1 = 253000;
				if (bVar0)
				{
					if (Global_262145.f_16516 >= 0)
					{
						iVar1 = Global_262145.f_16516;
					}
				}
				break;
			
			case joaat("xls2"):
				iVar1 = 522000;
				if (bVar0)
				{
					if (Global_262145.f_16517 >= 0)
					{
						iVar1 = Global_262145.f_16517;
					}
				}
				break;
			
			case joaat("seven70"):
				iVar1 = 695000;
				if (bVar0)
				{
					if (Global_262145.f_16518 >= 0)
					{
						iVar1 = Global_262145.f_16518;
					}
				}
				break;
			
			case joaat("pfister811"):
				iVar1 = 1135000;
				if (bVar0)
				{
					if (Global_262145.f_16519 >= 0)
					{
						iVar1 = Global_262145.f_16519;
					}
				}
				break;
			
			case joaat("reaper"):
				iVar1 = 1595000;
				if (bVar0)
				{
					if (Global_262145.f_15987 >= 0)
					{
						iVar1 = Global_262145.f_15987;
					}
				}
				break;
			
			case joaat("rumpo3"):
				iVar1 = 130000;
				if (bVar0)
				{
					if (Global_262145.f_16512 >= 0)
					{
						iVar1 = Global_262145.f_16512;
					}
				}
				break;
			
			case joaat("volatus"):
				iVar1 = 2295000;
				if (bVar0)
				{
					if (Global_262145.f_16514 >= 0)
					{
						iVar1 = Global_262145.f_16514;
					}
				}
				break;
			
			case joaat("le7b"):
				iVar1 = 2475000;
				if (bVar0)
				{
					if (Global_262145.f_17246 >= 0)
					{
						iVar1 = Global_262145.f_17246;
					}
				}
				break;
			
			case joaat("omnis"):
				if (!bParam2)
				{
					iVar1 = 701000;
					if (bVar0)
					{
						if (Global_262145.f_17247 >= 0)
						{
							iVar1 = Global_262145.f_17247;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case joaat("tropos"):
				iVar1 = 816000;
				if (bVar0)
				{
					if (Global_262145.f_17248 >= 0)
					{
						iVar1 = Global_262145.f_17248;
					}
				}
				break;
			
			case joaat("brioso"):
				iVar1 = 155000;
				if (bVar0)
				{
					if (Global_262145.f_17249 >= 0)
					{
						iVar1 = Global_262145.f_17249;
					}
				}
				break;
			
			case joaat("trophytruck"):
				iVar1 = 550000;
				if (bVar0)
				{
					if (Global_262145.f_17250 >= 0)
					{
						iVar1 = Global_262145.f_17250;
					}
				}
				break;
			
			case joaat("trophytruck2"):
				iVar1 = 695000;
				if (bVar0)
				{
					if (Global_262145.f_17251 >= 0)
					{
						iVar1 = Global_262145.f_17251;
					}
				}
				break;
			
			case joaat("contender"):
				iVar1 = 250000;
				if (bVar0)
				{
					if (Global_262145.f_17252 >= 0)
					{
						iVar1 = Global_262145.f_17252;
					}
				}
				break;
			
			case joaat("cliffhanger"):
				iVar1 = 225000;
				if (bVar0)
				{
					if (Global_262145.f_17253 >= 0)
					{
						iVar1 = Global_262145.f_17253;
					}
				}
				break;
			
			case joaat("bf400"):
				iVar1 = 95000;
				if (bVar0)
				{
					if (Global_262145.f_17254 >= 0)
					{
						iVar1 = Global_262145.f_17254;
					}
				}
				break;
			
			case joaat("tyrus"):
				iVar1 = 2550000;
				if (bVar0)
				{
					if (Global_262145.f_17244 >= 0)
					{
						iVar1 = Global_262145.f_17244;
					}
				}
				break;
			
			case joaat("lynx"):
				iVar1 = 1735000;
				if (bVar0)
				{
					if (Global_262145.f_17255 >= 0)
					{
						iVar1 = Global_262145.f_17255;
					}
				}
				break;
			
			case joaat("sheava"):
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_17243 >= 0)
					{
						iVar1 = Global_262145.f_17243;
					}
				}
				break;
			
			case joaat("rallytruck"):
				if (!bParam2)
				{
					iVar1 = 1300000;
					if (bVar0)
					{
						if (Global_262145.f_17257 >= 0)
						{
							iVar1 = Global_262145.f_17257;
						}
					}
				}
				else
				{
					iVar1 = 1385000;
					if (bVar0)
					{
						if (Global_262145.f_17258 >= 0)
						{
							iVar1 = Global_262145.f_17258;
						}
					}
				}
				break;
			
			case joaat("tampa2"):
			case joaat("drifttampa"):
				iVar1 = 995000;
				if (bVar0)
				{
					if (Global_262145.f_17245 >= 0)
					{
						iVar1 = Global_262145.f_17245;
					}
				}
				break;
			
			case joaat("gargoyle"):
				iVar1 = 120000;
				if (bVar0 && Global_262145.f_17256 >= 0)
				{
					iVar1 = Global_262145.f_17256;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = system::round((system::to_float(120000) * 0,75f));
					if (bVar0 && Global_262145.f_25507 >= 0)
					{
						iVar1 = Global_262145.f_25507;
					}
				}
				break;
			
			case joaat("esskey"):
				iVar1 = 264000;
				if (bVar0)
				{
					if (Global_262145.f_17773 >= 0)
					{
						iVar1 = Global_262145.f_17773;
					}
				}
				break;
			
			case joaat("nightblade"):
				iVar1 = 100000;
				if (bVar0)
				{
					if (Global_262145.f_17776 >= 0)
					{
						iVar1 = Global_262145.f_17776;
					}
				}
				break;
			
			case joaat("defiler"):
				if (bParam2)
				{
					iVar1 = 309000;
					if (bVar0)
					{
						if (Global_262145.f_28078 >= 0)
						{
							iVar1 = Global_262145.f_28078;
						}
					}
				}
				else
				{
					iVar1 = 412000;
					if (bVar0)
					{
						if (Global_262145.f_17772 >= 0)
						{
							iVar1 = Global_262145.f_17772;
						}
					}
					iVar2 = 309000;
					if (bVar0)
					{
						if (Global_262145.f_28078 >= 0)
						{
							iVar2 = Global_262145.f_28078;
						}
					}
				}
				break;
			
			case joaat("avarus"):
				iVar1 = 116000;
				if (bVar0)
				{
					if (Global_262145.f_17767 >= 0)
					{
						iVar1 = Global_262145.f_17767;
					}
				}
				break;
			
			case joaat("zombiea"):
				iVar1 = 99000;
				if (bVar0)
				{
					if (Global_262145.f_17783 >= 0)
					{
						iVar1 = Global_262145.f_17783;
					}
				}
				break;
			
			case joaat("zombieb"):
				if (!bParam2)
				{
					iVar1 = 122000;
					if (bVar0)
					{
						if (Global_262145.f_17784 >= 0)
						{
							iVar1 = Global_262145.f_17784;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case joaat("chimera"):
				iVar1 = 210000;
				if (bVar0)
				{
					if (Global_262145.f_17770 >= 0)
					{
						iVar1 = Global_262145.f_17770;
					}
				}
				break;
			
			case joaat("daemon2"):
				iVar1 = 145000;
				if (bVar0)
				{
					if (Global_262145.f_17771 >= 0)
					{
						iVar1 = Global_262145.f_17771;
					}
				}
				break;
			
			case joaat("ratbike"):
				iVar1 = 48000;
				if (bVar0)
				{
					if (Global_262145.f_17778 >= 0)
					{
						iVar1 = Global_262145.f_17778;
					}
				}
				break;
			
			case joaat("shotaro"):
				iVar1 = 2225000;
				if (bVar0)
				{
					if (Global_262145.f_17780 >= 0)
					{
						iVar1 = Global_262145.f_17780;
					}
				}
				break;
			
			case joaat("raptor"):
				iVar1 = 648000;
				if (bVar0)
				{
					if (Global_262145.f_17777 >= 0)
					{
						iVar1 = Global_262145.f_17777;
					}
				}
				break;
			
			case joaat("hakuchou2"):
				iVar1 = 976000;
				if (bVar0)
				{
					if (Global_262145.f_17774 >= 0)
					{
						iVar1 = Global_262145.f_17774;
					}
				}
				break;
			
			case joaat("blazer4"):
				iVar1 = 81000;
				if (bVar0)
				{
					if (Global_262145.f_17769 >= 0)
					{
						iVar1 = Global_262145.f_17769;
					}
				}
				break;
			
			case joaat("sanctus"):
				iVar1 = 1995000;
				if (bVar0)
				{
					if (Global_262145.f_17779 >= 0)
					{
						iVar1 = Global_262145.f_17779;
					}
				}
				break;
			
			case joaat("vortex"):
				if (!bParam2)
				{
					iVar1 = 356000;
					if (bVar0)
					{
						if (Global_262145.f_17781 >= 0)
						{
							iVar1 = Global_262145.f_17781;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case joaat("manchez"):
				if (bParam2)
				{
					iVar1 = 50250;
					if (bVar0)
					{
						if (Global_262145.f_28079 >= 0)
						{
							iVar1 = Global_262145.f_28079;
						}
					}
				}
				else
				{
					iVar1 = 67000;
					if (bVar0)
					{
						if (Global_262145.f_17775 >= 0)
						{
							iVar1 = Global_262145.f_17775;
						}
					}
					iVar2 = 50250;
					if (bVar0)
					{
						if (Global_262145.f_28079 >= 0)
						{
							iVar2 = Global_262145.f_28079;
						}
					}
				}
				break;
			
			case joaat("tornado6"):
				iVar1 = 378000;
				if (bVar0)
				{
					if (Global_262145.f_18807 >= 0)
					{
						iVar1 = Global_262145.f_18807;
					}
				}
				break;
			
			case joaat("youga2"):
				iVar1 = 195000;
				if (bVar0)
				{
					if (Global_262145.f_18810 >= 0)
					{
						iVar1 = Global_262145.f_18810;
					}
				}
				break;
			
			case joaat("wolfsbane"):
				if (bParam2)
				{
					iVar1 = joaat("a_m_y_genstreet_28_lod");
					if (bVar0)
					{
					}
				}
				else
				{
					iVar1 = 95000;
					if (bVar0)
					{
						if (Global_262145.f_17782 >= 0)
						{
							iVar1 = Global_262145.f_17782;
						}
					}
					iVar2 = joaat("a_m_y_genstreet_28_lod");
					if (bVar0)
					{
					}
				}
				break;
			
			case joaat("faggio3"):
				iVar1 = 55000;
				if (bVar0)
				{
					if (Global_262145.f_18808 >= 0)
					{
						iVar1 = Global_262145.f_18808;
					}
				}
				break;
			
			case joaat("faggio"):
				iVar1 = 47500;
				if (bVar0)
				{
					if (Global_262145.f_18809 >= 0)
					{
						iVar1 = Global_262145.f_18809;
					}
				}
				break;
			
			case joaat("dune5"):
				if (!bParam2)
				{
					iVar1 = 3192000;
					if (bVar0)
					{
						if (Global_262145.f_19369 >= 0)
						{
							iVar1 = Global_262145.f_19369;
						}
					}
				}
				else
				{
					iVar1 = 2400000;
					if (bVar0)
					{
						if (Global_262145.f_19370 >= 0)
						{
							iVar1 = Global_262145.f_19370;
						}
					}
				}
				break;
			
			case joaat("phantom2"):
				if (!bParam2)
				{
					iVar1 = 2553600;
					if (bVar0)
					{
						if (Global_262145.f_19371 >= 0)
						{
							iVar1 = Global_262145.f_19371;
						}
					}
				}
				else
				{
					iVar1 = 1920000;
					if (bVar0)
					{
						if (Global_262145.f_19372 >= 0)
						{
							iVar1 = Global_262145.f_19372;
						}
					}
				}
				break;
			
			case joaat("technical2"):
				if (!bParam2)
				{
					iVar1 = 1489600;
					if (bVar0)
					{
						if (Global_262145.f_19373 >= 0)
						{
							iVar1 = Global_262145.f_19373;
						}
					}
				}
				else
				{
					iVar1 = 1120000;
					if (bVar0)
					{
						if (Global_262145.f_19374 >= 0)
						{
							iVar1 = Global_262145.f_19374;
						}
					}
				}
				break;
			
			case joaat("blazer5"):
				if (!bParam2)
				{
					iVar1 = 1755600;
					if (bVar0)
					{
						if (Global_262145.f_19375 >= 0)
						{
							iVar1 = Global_262145.f_19375;
						}
					}
				}
				else
				{
					iVar1 = 1320000;
					if (bVar0)
					{
						if (Global_262145.f_19376 >= 0)
						{
							iVar1 = Global_262145.f_19376;
						}
					}
				}
				break;
			
			case joaat("boxville5"):
				if (!bParam2)
				{
					iVar1 = 1300000;
					if (bVar0)
					{
						if (Global_262145.f_19377 >= 0)
						{
							iVar1 = Global_262145.f_19377;
						}
					}
				}
				else
				{
					iVar1 = 975000;
					if (bVar0)
					{
						if (Global_262145.f_19378 >= 0)
						{
							iVar1 = Global_262145.f_19378;
						}
					}
				}
				break;
			
			case joaat("wastelander"):
				if (!bParam2)
				{
					iVar1 = 658350;
					if (bVar0)
					{
						if (Global_262145.f_19379 >= 0)
						{
							iVar1 = Global_262145.f_19379;
						}
					}
				}
				else
				{
					iVar1 = 495000;
					if (bVar0)
					{
						if (Global_262145.f_19380 >= 0)
						{
							iVar1 = Global_262145.f_19380;
						}
					}
				}
				break;
			
			case joaat("ruiner2"):
				if (!bParam2)
				{
					iVar1 = 3750000;
					if (bVar0)
					{
						if (Global_262145.f_19381 >= 0)
						{
							iVar1 = Global_262145.f_19381;
						}
					}
				}
				else
				{
					iVar1 = 2812500;
					if (bVar0)
					{
						if (Global_262145.f_19382 >= 0)
						{
							iVar1 = Global_262145.f_19382;
						}
					}
				}
				break;
			
			case joaat("voltic2"):
				if (!bParam2)
				{
					iVar1 = 3830400;
					if (bVar0)
					{
						if (Global_262145.f_19383 >= 0)
						{
							iVar1 = Global_262145.f_19383;
						}
					}
				}
				else
				{
					iVar1 = 2880000;
					if (bVar0)
					{
						if (Global_262145.f_19384 >= 0)
						{
							iVar1 = Global_262145.f_19384;
						}
					}
				}
				break;
			
			case joaat("penetrator"):
				iVar1 = 880000;
				if (bVar0)
				{
					if (Global_262145.f_19397 >= 0)
					{
						iVar1 = Global_262145.f_19397;
					}
				}
				break;
			
			case joaat("tempesta"):
				iVar1 = 1329000;
				if (bVar0 && Global_262145.f_19398 >= 0)
				{
					iVar1 = Global_262145.f_19398;
				}
				if (bParam2)
				{
					iVar2 = iVar1;
					iVar1 = system::round((system::to_float(1329000) * 0,75f));
				}
				break;
			
			case joaat("italigtb"):
				iVar1 = 1189000;
				if (bVar0)
				{
					if (Global_262145.f_19385 >= 0)
					{
						iVar1 = Global_262145.f_19385;
					}
				}
				break;
			
			case joaat("italigtb2"):
				iVar1 = (Global_262145.f_19385 + func_1090(iParam1, 2));
				break;
			
			case joaat("nero"):
				iVar1 = 1440000;
				if (bVar0)
				{
					if (Global_262145.f_19389 >= 0)
					{
						iVar1 = Global_262145.f_19389;
					}
				}
				break;
			
			case joaat("nero2"):
				iVar1 = (Global_262145.f_19389 + func_1090(iParam1, 2));
				break;
			
			case joaat("diablous"):
				iVar1 = 169000;
				if (bVar0)
				{
					if (Global_262145.f_19395 >= 0)
					{
						iVar1 = Global_262145.f_19395;
					}
				}
				break;
			
			case joaat("diablous2"):
				iVar1 = (Global_262145.f_19395 + func_1090(iParam1, 2));
				break;
			
			case joaat("fcr"):
				iVar1 = 135000;
				if (bVar0)
				{
					if (Global_262145.f_19393 >= 0)
					{
						iVar1 = Global_262145.f_19393;
					}
				}
				break;
			
			case joaat("fcr2"):
				iVar1 = (Global_262145.f_19393 + func_1090(iParam1, 2));
				break;
			
			case joaat("specter"):
				iVar1 = 599000;
				if (bVar0)
				{
					if (Global_262145.f_19387 >= 0)
					{
						iVar1 = Global_262145.f_19387;
					}
				}
				break;
			
			case joaat("specter2"):
				iVar1 = (Global_262145.f_19387 + func_1090(iParam1, 2));
				break;
			
			case joaat("comet3"):
				iVar1 = (85000 + func_1090(iParam1, 2));
				break;
			
			case joaat("elegy"):
				iVar1 = (Global_262145.f_19399 + func_1090(iParam1, 2));
				break;
			
			case joaat("infernus2"):
				iVar1 = 915000;
				if (bVar0)
				{
					if (Global_262145.f_20018 >= 0)
					{
						iVar1 = Global_262145.f_20018;
					}
				}
				break;
			
			case joaat("gp1"):
				iVar1 = 1260000;
				if (bVar0)
				{
					if (Global_262145.f_20017 >= 0)
					{
						iVar1 = Global_262145.f_20017;
					}
				}
				break;
			
			case joaat("ruston"):
				iVar1 = 430000;
				if (bVar0)
				{
					if (Global_262145.f_20019 >= 0)
					{
						iVar1 = Global_262145.f_20019;
					}
				}
				break;
			
			case joaat("turismo2"):
				iVar1 = 705000;
				if (bVar0)
				{
					if (Global_262145.f_20020 >= 0)
					{
						iVar1 = Global_262145.f_20020;
					}
				}
				break;
			
			case joaat("ardent"):
				iVar1 = 1150000;
				if (bVar0)
				{
					if (Global_262145.f_21095 >= 0)
					{
						iVar1 = Global_262145.f_21095;
					}
				}
				break;
			
			case joaat("cheetah2"):
				iVar1 = 865000;
				if (bVar0)
				{
					if (Global_262145.f_21098 >= 0)
					{
						iVar1 = Global_262145.f_21098;
					}
				}
				break;
			
			case joaat("nightshark"):
				iVar1 = 1245000;
				if (bVar0)
				{
					if (Global_262145.f_21096 >= 0)
					{
						iVar1 = Global_262145.f_21096;
					}
				}
				break;
			
			case joaat("torero"):
				iVar1 = 998000;
				if (bVar0)
				{
					if (Global_262145.f_21097 >= 0)
					{
						iVar1 = Global_262145.f_21097;
					}
				}
				break;
			
			case joaat("vagner"):
				iVar1 = 1535000;
				if (bVar0)
				{
					if (Global_262145.f_21099 >= 0)
					{
						iVar1 = Global_262145.f_21099;
					}
				}
				break;
			
			case joaat("xa21"):
				iVar1 = 2375000;
				if (bVar0)
				{
					if (Global_262145.f_21100 >= 0)
					{
						iVar1 = Global_262145.f_21100;
					}
				}
				break;
			
			case joaat("apc"):
				iVar1 = 2325000;
				if (bVar0)
				{
					if (Global_262145.f_21087 >= 0)
					{
						iVar1 = Global_262145.f_21087;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = system::round((system::to_float(iVar1) * ((100f + system::to_float(Global_262145.f_21086)) / 100f)));
				}
				break;
			
			case joaat("dune3"):
				iVar1 = 850000;
				if (bVar0)
				{
					if (Global_262145.f_21088 >= 0)
					{
						iVar1 = Global_262145.f_21088;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = system::round((system::to_float(iVar1) * ((100f + system::to_float(Global_262145.f_21086)) / 100f)));
				}
				break;
			
			case joaat("halftrack"):
				iVar1 = 1695000;
				if (bVar0)
				{
					if (Global_262145.f_21089 >= 0)
					{
						iVar1 = Global_262145.f_21089;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = system::round((system::to_float(iVar1) * ((100f + system::to_float(Global_262145.f_21086)) / 100f)));
				}
				break;
			
			case joaat("oppressor"):
				iVar1 = 2067669;
				if (bVar0)
				{
					if (Global_262145.f_21090 >= 0)
					{
						iVar1 = Global_262145.f_21090;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = system::round((system::to_float(iVar1) * ((100f + system::to_float(Global_262145.f_21086)) / 100f)));
				}
				break;
			
			case joaat("tampa3"):
				iVar1 = 1585000;
				if (bVar0)
				{
					if (Global_262145.f_21091 >= 0)
					{
						iVar1 = Global_262145.f_21091;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = system::round((system::to_float(iVar1) * ((100f + system::to_float(Global_262145.f_21086)) / 100f)));
				}
				break;
			
			case joaat("trailersmall2"):
				iVar1 = 1400000;
				if (bVar0)
				{
					if (Global_262145.f_21092 >= 0)
					{
						iVar1 = Global_262145.f_21092;
					}
				}
				iVar2 = iVar1;
				if (!bParam2)
				{
					iVar1 = system::round((system::to_float(iVar1) * ((100f + system::to_float(Global_262145.f_21086)) / 100f)));
				}
				break;
			
			case joaat("phantom3"):
				if (!bParam2)
				{
					iVar1 = 1225000;
					if (bVar0)
					{
						if (Global_262145.f_21159 >= 0)
						{
							iVar1 = Global_262145.f_21159;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case joaat("hauler2"):
				if (!bParam2)
				{
					iVar1 = 1400000;
					if (bVar0)
					{
						if (Global_262145.f_21160 >= 0)
						{
							iVar1 = Global_262145.f_21160;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				break;
			
			case joaat("lazer"):
				iVar1 = 6500000;
				if (bVar0)
				{
					if (Global_262145.f_22245 >= 0)
					{
						iVar1 = Global_262145.f_22245;
					}
				}
				break;
			
			case joaat("microlight"):
				if (bParam2)
				{
					iVar1 = 500000;
					if (bVar0)
					{
						if (Global_262145.f_22244 >= 0)
						{
							iVar1 = Global_262145.f_22244;
						}
					}
				}
				else
				{
					iVar1 = system::round((system::to_float(500000) * ((100f + system::to_float(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22264 >= 0)
						{
							iVar1 = Global_262145.f_22264;
						}
					}
				}
				break;
			
			case joaat("mogul"):
				if (bParam2)
				{
					iVar1 = 2350000;
					if (bVar0)
					{
						if (Global_262145.f_22237 >= 0)
						{
							iVar1 = Global_262145.f_22237;
						}
					}
				}
				else
				{
					iVar1 = system::round((system::to_float(2350000) * ((100f + system::to_float(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22257 >= 0)
						{
							iVar1 = Global_262145.f_22257;
						}
					}
				}
				break;
			
			case joaat("rogue"):
				if (bParam2)
				{
					iVar1 = 1200000;
					if (bVar0)
					{
						if (Global_262145.f_22241 >= 0)
						{
							iVar1 = Global_262145.f_22241;
						}
					}
				}
				else
				{
					iVar1 = system::round((system::to_float(1200000) * ((100f + system::to_float(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22261 >= 0)
						{
							iVar1 = Global_262145.f_22261;
						}
					}
				}
				break;
			
			case joaat("starling"):
				if (bParam2)
				{
					iVar1 = 2750000;
					if (bVar0)
					{
						if (Global_262145.f_22236 >= 0)
						{
							iVar1 = Global_262145.f_22236;
						}
					}
				}
				else
				{
					iVar1 = system::round((system::to_float(2750000) * ((100f + system::to_float(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22256 >= 0)
						{
							iVar1 = Global_262145.f_22256;
						}
					}
				}
				break;
			
			case joaat("seabreeze"):
				if (bParam2)
				{
					iVar1 = 850000;
					if (bVar0)
					{
						if (Global_262145.f_22243 >= 0)
						{
							iVar1 = Global_262145.f_22243;
						}
					}
				}
				else
				{
					iVar1 = system::round((system::to_float(850000) * ((100f + system::to_float(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22263 >= 0)
						{
							iVar1 = Global_262145.f_22263;
						}
					}
				}
				break;
			
			case joaat("tula"):
				if (bParam2)
				{
					iVar1 = 3075000;
					if (bVar0)
					{
						if (Global_262145.f_22232 >= 0)
						{
							iVar1 = Global_262145.f_22232;
						}
					}
				}
				else
				{
					iVar1 = 4100000;
					if (bVar0)
					{
						if (Global_262145.f_22252 >= 0)
						{
							iVar1 = Global_262145.f_22252;
						}
					}
				}
				break;
			
			case joaat("pyro"):
				if (bParam2)
				{
					iVar1 = 3350000;
					if (bVar0)
					{
						if (Global_262145.f_22234 >= 0)
						{
							iVar1 = Global_262145.f_22234;
						}
					}
				}
				else
				{
					iVar1 = system::round((system::to_float(3350000) * ((100f + system::to_float(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22254 >= 0)
						{
							iVar1 = Global_262145.f_22254;
						}
					}
				}
				break;
			
			case joaat("molotok"):
				if (bParam2)
				{
					iVar1 = 3600000;
					if (bVar0)
					{
						if (Global_262145.f_22233 >= 0)
						{
							iVar1 = Global_262145.f_22233;
						}
					}
				}
				else
				{
					iVar1 = system::round((system::to_float(3600000) * ((100f + system::to_float(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22253 >= 0)
						{
							iVar1 = Global_262145.f_22253;
						}
					}
				}
				break;
			
			case joaat("nokota"):
				if (bParam2)
				{
					iVar1 = 1995000;
					if (bVar0)
					{
						if (Global_262145.f_22238 >= 0)
						{
							iVar1 = Global_262145.f_22238;
						}
					}
				}
				else
				{
					iVar1 = system::round((system::to_float(1995000) * ((100f + system::to_float(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22258 >= 0)
						{
							iVar1 = Global_262145.f_22258;
						}
					}
				}
				break;
			
			case joaat("bombushka"):
				if (bParam2)
				{
					iVar1 = 3562500;
					if (bVar0)
					{
						if (Global_262145.f_22231 >= 0)
						{
							iVar1 = Global_262145.f_22231;
						}
					}
				}
				else
				{
					iVar1 = 4750000;
					if (bVar0)
					{
						if (Global_262145.f_22251 >= 0)
						{
							iVar1 = Global_262145.f_22251;
						}
					}
				}
				break;
			
			case joaat("hunter"):
				if (bParam2)
				{
					iVar1 = 3100000;
					if (bVar0)
					{
						if (Global_262145.f_22235 >= 0)
						{
							iVar1 = Global_262145.f_22235;
						}
					}
				}
				else
				{
					iVar1 = system::round((system::to_float(3100000) * ((100f + system::to_float(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22255 >= 0)
						{
							iVar1 = Global_262145.f_22255;
						}
					}
				}
				break;
			
			case joaat("havok"):
				if (bParam2)
				{
					iVar1 = 1730000;
					if (bVar0)
					{
						if (Global_262145.f_22239 >= 0)
						{
							iVar1 = Global_262145.f_22239;
						}
					}
				}
				else
				{
					iVar1 = system::round((system::to_float(1730000) * ((100f + system::to_float(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22259 >= 0)
						{
							iVar1 = Global_262145.f_22259;
						}
					}
				}
				break;
			
			case joaat("howard"):
				if (bParam2)
				{
					iVar1 = 975000;
					if (bVar0)
					{
						if (Global_262145.f_22242 >= 0)
						{
							iVar1 = Global_262145.f_22242;
						}
					}
				}
				else
				{
					iVar1 = system::round((system::to_float(975000) * ((100f + system::to_float(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22262 >= 0)
						{
							iVar1 = Global_262145.f_22262;
						}
					}
				}
				break;
			
			case joaat("alphaz1"):
				if (bParam2)
				{
					iVar1 = 1595000;
					if (bVar0)
					{
						if (Global_262145.f_22240 >= 0)
						{
							iVar1 = Global_262145.f_22240;
						}
					}
				}
				else
				{
					iVar1 = system::round((system::to_float(1595000) * ((100f + system::to_float(33)) / 100f)));
					if (bVar0)
					{
						if (Global_262145.f_22260 >= 0)
						{
							iVar1 = Global_262145.f_22260;
						}
					}
				}
				break;
			
			case joaat("cyclone"):
				iVar1 = 1890000;
				if (bVar0)
				{
					if (Global_262145.f_22246 >= 0)
					{
						iVar1 = Global_262145.f_22246;
					}
				}
				break;
			
			case joaat("visione"):
				iVar1 = 2250000;
				if (bVar0)
				{
					if (Global_262145.f_22247 >= 0)
					{
						iVar1 = Global_262145.f_22247;
					}
				}
				break;
			
			case joaat("vigilante"):
				iVar1 = 3750000;
				if (bVar0)
				{
					if (Global_262145.f_22250 >= 0)
					{
						iVar1 = Global_262145.f_22250;
					}
				}
				break;
			
			case joaat("retinue"):
				iVar1 = 615000;
				if (bVar0)
				{
					if (Global_262145.f_22248 >= 0)
					{
						iVar1 = Global_262145.f_22248;
					}
				}
				break;
			
			case joaat("rapidgt3"):
				iVar1 = 885000;
				if (bVar0)
				{
					if (Global_262145.f_22249 >= 0)
					{
						iVar1 = Global_262145.f_22249;
					}
				}
				break;
		}
		switch (iParam1)
		{
			case joaat("deluxo"):
				if (bParam2)
				{
					iVar1 = 4312500;
					if (bVar0)
					{
						if (Global_262145.f_23536 >= 0)
						{
							iVar1 = Global_262145.f_23536;
						}
					}
				}
				else
				{
					iVar1 = 5750000;
					if (bVar0)
					{
						if (Global_262145.f_23527 >= 0)
						{
							iVar1 = Global_262145.f_23527;
						}
					}
					iVar2 = 4312500;
					if (bVar0)
					{
						if (Global_262145.f_23536 >= 0)
						{
							iVar2 = Global_262145.f_23536;
						}
					}
				}
				break;
			
			case joaat("stromberg"):
				if (bParam2)
				{
					iVar1 = 1875000;
					if (bVar0)
					{
						if (Global_262145.f_23537 >= 0)
						{
							iVar1 = Global_262145.f_23537;
						}
					}
				}
				else
				{
					iVar1 = 2500000;
					if (bVar0)
					{
						if (Global_262145.f_23528 >= 0)
						{
							iVar1 = Global_262145.f_23528;
						}
					}
					iVar2 = 1875000;
					if (bVar0)
					{
						if (Global_262145.f_23537 >= 0)
						{
							iVar2 = Global_262145.f_23537;
						}
					}
				}
				break;
			
			case joaat("riot2"):
				if (bParam2)
				{
					iVar1 = 2350000;
					if (bVar0)
					{
						if (Global_262145.f_23538 >= 0)
						{
							iVar1 = Global_262145.f_23538;
						}
					}
				}
				else
				{
					iVar1 = 3125500;
					if (bVar0)
					{
						if (Global_262145.f_23529 >= 0)
						{
							iVar1 = Global_262145.f_23529;
						}
					}
					iVar2 = 2350000;
					if (bVar0)
					{
						if (Global_262145.f_23538 >= 0)
						{
							iVar2 = Global_262145.f_23538;
						}
					}
				}
				break;
			
			case joaat("chernobog"):
				if (bParam2)
				{
					iVar1 = 1125000;
					if (bVar0)
					{
						if (Global_262145.f_23539 >= 0)
						{
							iVar1 = Global_262145.f_23539;
						}
					}
				}
				else
				{
					iVar1 = 1500000;
					if (bVar0)
					{
						if (Global_262145.f_23530 >= 0)
						{
							iVar1 = Global_262145.f_23530;
						}
					}
					iVar2 = 1125000;
					if (bVar0)
					{
						if (Global_262145.f_23539 >= 0)
						{
							iVar2 = Global_262145.f_23539;
						}
					}
				}
				break;
			
			case joaat("khanjali"):
				if (bParam2)
				{
					iVar1 = 2895000;
					if (bVar0)
					{
						if (Global_262145.f_23541 >= 0)
						{
							iVar1 = Global_262145.f_23541;
						}
					}
				}
				else
				{
					iVar1 = 3850350;
					if (bVar0)
					{
						if (Global_262145.f_23532 >= 0)
						{
							iVar1 = Global_262145.f_23532;
						}
					}
					iVar2 = 2895000;
					if (bVar0)
					{
						if (Global_262145.f_23541 >= 0)
						{
							iVar2 = Global_262145.f_23541;
						}
					}
				}
				break;
			
			case joaat("akula"):
				if (bParam2)
				{
					iVar1 = 3375000;
					if (bVar0)
					{
						if (Global_262145.f_23542 >= 0)
						{
							iVar1 = Global_262145.f_23542;
						}
					}
				}
				else
				{
					iVar1 = 4500000;
					if (bVar0)
					{
						if (Global_262145.f_23533 >= 0)
						{
							iVar1 = Global_262145.f_23533;
						}
					}
					iVar2 = 3375000;
					if (bVar0)
					{
						if (Global_262145.f_23542 >= 0)
						{
							iVar2 = Global_262145.f_23542;
						}
					}
				}
				break;
			
			case joaat("thruster"):
				if (bParam2)
				{
					iVar1 = 1875000;
					if (bVar0)
					{
						if (Global_262145.f_23535 >= 0)
						{
							iVar1 = Global_262145.f_23535;
						}
					}
				}
				else
				{
					iVar1 = 2500000;
					if (bVar0)
					{
						if (Global_262145.f_23526 >= 0)
						{
							iVar1 = Global_262145.f_23526;
						}
					}
					iVar2 = 1875000;
					if (bVar0)
					{
						if (Global_262145.f_23535 >= 0)
						{
							iVar2 = Global_262145.f_23535;
						}
					}
				}
				break;
			
			case joaat("barrage"):
				if (bParam2)
				{
					iVar1 = 1595000;
					if (bVar0)
					{
						if (Global_262145.f_23540 >= 0)
						{
							iVar1 = Global_262145.f_23540;
						}
					}
				}
				else
				{
					iVar1 = 2121350;
					if (bVar0)
					{
						if (Global_262145.f_23531 >= 0)
						{
							iVar1 = Global_262145.f_23531;
						}
					}
					iVar2 = 1595000;
					if (bVar0)
					{
						if (Global_262145.f_23540 >= 0)
						{
							iVar2 = Global_262145.f_23540;
						}
					}
				}
				break;
			
			case joaat("volatol"):
				if (bParam2)
				{
					iVar1 = 2800000;
					if (bVar0)
					{
						if (Global_262145.f_23543 >= 0)
						{
							iVar1 = Global_262145.f_23543;
						}
					}
				}
				else
				{
					iVar1 = 3724000;
					if (bVar0)
					{
						if (Global_262145.f_23534 >= 0)
						{
							iVar1 = Global_262145.f_23534;
						}
					}
					iVar2 = 2800000;
					if (bVar0)
					{
						if (Global_262145.f_23543 >= 0)
						{
							iVar2 = Global_262145.f_23543;
						}
					}
				}
				break;
			
			case joaat("comet4"):
				iVar1 = 710000;
				if (bVar0)
				{
					if (Global_262145.f_23544 >= 0)
					{
						iVar1 = Global_262145.f_23544;
					}
				}
				break;
			
			case joaat("neon"):
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_23556 >= 0)
					{
						iVar1 = Global_262145.f_23556;
					}
				}
				break;
			
			case joaat("streiter"):
				iVar1 = 500000;
				if (bVar0)
				{
					if (Global_262145.f_23549 >= 0)
					{
						iVar1 = Global_262145.f_23549;
					}
				}
				break;
			
			case joaat("sentinel3"):
				if (bParam2)
				{
					iVar1 = 487500;
					if (bVar0)
					{
						if (Global_262145.f_28075 >= 0)
						{
							iVar1 = Global_262145.f_28075;
						}
					}
				}
				else
				{
					iVar1 = 650000;
					if (bVar0)
					{
						if (Global_262145.f_23559 >= 0)
						{
							iVar1 = Global_262145.f_23559;
						}
					}
					iVar2 = 487500;
					if (bVar0)
					{
						if (Global_262145.f_28075 >= 0)
						{
							iVar2 = Global_262145.f_28075;
						}
					}
				}
				break;
			
			case joaat("yosemite"):
				iVar1 = 485000;
				if (bVar0)
				{
					if (Global_262145.f_23558 >= 0)
					{
						iVar1 = Global_262145.f_23558;
					}
				}
				break;
			
			case joaat("sc1"):
				iVar1 = 1603000;
				if (bVar0)
				{
					if (Global_262145.f_23548 >= 0)
					{
						iVar1 = Global_262145.f_23548;
					}
				}
				break;
			
			case joaat("autarch"):
				iVar1 = 1955000;
				if (bVar0)
				{
					if (Global_262145.f_23553 >= 0)
					{
						iVar1 = Global_262145.f_23553;
					}
				}
				break;
			
			case joaat("gt500"):
				iVar1 = 785000;
				if (bVar0)
				{
					if (Global_262145.f_23562 >= 0)
					{
						iVar1 = Global_262145.f_23562;
					}
				}
				break;
			
			case joaat("hustler"):
				iVar1 = 625000;
				if (bVar0)
				{
					if (Global_262145.f_23550 >= 0)
					{
						iVar1 = Global_262145.f_23550;
					}
				}
				break;
			
			case joaat("revolter"):
				iVar1 = 1610000;
				if (bVar0)
				{
					if (Global_262145.f_23546 >= 0)
					{
						iVar1 = Global_262145.f_23546;
					}
				}
				break;
			
			case joaat("pariah"):
				iVar1 = 1420000;
				if (bVar0)
				{
					if (Global_262145.f_23557 >= 0)
					{
						iVar1 = Global_262145.f_23557;
					}
				}
				break;
			
			case joaat("raiden"):
				iVar1 = 1375000;
				if (bVar0)
				{
					if (Global_262145.f_23560 >= 0)
					{
						iVar1 = Global_262145.f_23560;
					}
				}
				break;
			
			case joaat("savestra"):
				iVar1 = 990000;
				if (bVar0)
}
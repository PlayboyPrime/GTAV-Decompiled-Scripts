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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
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
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	bool bLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	float fLocal_92[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_93[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_94[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_95[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_96[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	float fLocal_101[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_102[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_103[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_104[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_105[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_106[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_107[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_108[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_109[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_110[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	float fLocal_118 = 0f;
	float fLocal_119 = 0f;
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	float fLocal_125 = 0f;
	float fLocal_126 = 0f;
	float fLocal_127 = 0f;
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	int iLocal_132[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_133[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_134[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_135[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_136[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_137[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_138[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	struct<3> Local_156[117];
	struct<3> Local_157[15];
	struct<3> Local_158[38];
	struct<3> Local_159 = { 0, 0, 0 } ;
	struct<3> Local_160 = { 0, 0, 0 } ;
	struct<3> Local_161 = { 0, 0, 0 } ;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	struct<3> Local_168 = { 0, 0, 0 } ;
	struct<3> Local_169 = { 0, 0, 0 } ;
	struct<3> Local_170 = { 0, 0, 0 } ;
	struct<3> Local_171 = { 0, 0, 0 } ;
	char cLocal_172[64] = "";
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_183[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_184[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_189[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_190[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_191[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_192[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	var uLocal_196 = 15;
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
	bool bLocal_212 = 0;
	bool bLocal_213 = 0;
	bool bLocal_214 = 0;
	bool bLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	bool bLocal_227 = 0;
	bool bLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	bool bLocal_233 = 0;
	bool bLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	bool bLocal_239 = 0;
	bool bLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	bool bLocal_243 = 0;
	int iLocal_244 = 0;
	bool bLocal_245 = 0;
	int iLocal_246 = 0;
	bool bLocal_247 = 0;
	int iLocal_248 = 0;
	bool bLocal_249 = 0;
	bool bLocal_250 = 0;
	int iLocal_251 = 0;
	bool bLocal_252 = 0;
	int iLocal_253 = 0;
	bool bLocal_254 = 0;
	bool bLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	bool bLocal_260 = 0;
	bool bLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_267 = 0f;
	float fLocal_268 = 0f;
	float fLocal_269 = 0f;
	float fLocal_270 = 0f;
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	float fLocal_273 = 0f;
	float fLocal_274 = 0f;
	float fLocal_275 = 0f;
	float fLocal_276 = 0f;
	float fLocal_277 = 0f;
	float fLocal_278 = 0f;
	float fLocal_279 = 0f;
	float fLocal_280 = 0f;
	float fLocal_281 = 0f;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	var uLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	var uLocal_351 = 10;
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
	struct<3> Local_362 = { 0, 0, 0 } ;
	struct<3> Local_363 = { 0, 0, 0 } ;
	struct<3> Local_364 = { 0, 0, 0 } ;
	struct<3> Local_365 = { 0, 0, 0 } ;
	struct<3> Local_366 = { 0, 0, 0 } ;
	struct<3> Local_367 = { 0, 0, 0 } ;
	struct<3> Local_368 = { 0, 0, 0 } ;
	struct<3> Local_369 = { 0, 0, 0 } ;
	struct<3> Local_370 = { 0, 0, 0 } ;
	struct<3> Local_371 = { 0, 0, 0 } ;
	struct<3> Local_372 = { 0, 0, 0 } ;
	struct<3> Local_373 = { 0, 0, 0 } ;
	struct<3> Local_374 = { 0, 0, 0 } ;
	struct<3> Local_375 = { 0, 0, 0 } ;
	struct<3> Local_376 = { 0, 0, 0 } ;
	struct<3> Local_377 = { 0, 0, 0 } ;
	struct<3> Local_378 = { 0, 0, 0 } ;
	char* sLocal_379 = NULL;
	char* sLocal_380 = NULL;
	char* sLocal_381 = NULL;
	char* sLocal_382 = NULL;
	char* sLocal_383 = NULL;
	char* sLocal_384 = NULL;
	char* sLocal_385 = NULL;
	char* sLocal_386 = NULL;
	char* sLocal_387 = NULL;
	char* sLocal_388 = NULL;
	char* sLocal_389 = NULL;
	char* sLocal_390 = NULL;
	char* sLocal_391 = NULL;
	char* sLocal_392 = NULL;
	char* sLocal_393 = NULL;
	char* sLocal_394 = NULL;
	char* sLocal_395 = NULL;
	char* sLocal_396 = NULL;
	var uLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	var uLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404[4] = { 0, 0, 0, 0 };
	int iLocal_405[1] = { 0 };
	int iLocal_406[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411[2] = { 0, 0 };
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_416[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_417[2] = { 0, 0 };
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	int iLocal_424[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427[2] = { 0, 0 };
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_432[2] = { 0, 0 };
	int iLocal_433[2] = { 0, 0 };
	var uLocal_434 = 0;
	int iLocal_435[2] = { 0, 0 };
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	struct<5> Local_471 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_472 = { 0, 0, 0 } ;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	struct<2> Local_475 = { 0, 0 } ;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	struct<5> Local_479[4];
	struct<5> Local_480[2];
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	struct<7> Local_486[6];
	struct<3> Local_487 = { 0, 0, 0 } ;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	struct<5> Local_490[2];
	struct<7> Local_491[2];
	struct<2> Local_492 = { 0, 0 } ;
	struct<14> Local_493 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 3;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 4;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 4;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 4;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 4;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 4;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 4;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 4;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	char* sLocal_553 = NULL;
	struct<10> Local_554[16];
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = -1;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 1000;
	var uLocal_569 = 1000;
	var uLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
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
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	uLocal_56 = unk_0x8CC13B3BF7A9890A();
	uLocal_57 = unk_0x2A3612A4B836469E();
	bLocal_61 = true;
	bLocal_68 = true;
	bLocal_90 = true;
	fLocal_111 = 120f;
	fLocal_112 = 0f;
	fLocal_114 = 1f;
	fLocal_115 = 0f;
	fLocal_116 = 1f;
	fLocal_117 = 30f;
	fLocal_119 = 1f;
	fLocal_120 = 5f;
	fLocal_121 = 1f;
	fLocal_122 = 1f;
	fLocal_123 = 100f;
	fLocal_124 = 100f;
	fLocal_125 = 0f;
	fLocal_126 = 7000f;
	fLocal_127 = 0f;
	fLocal_128 = 0f;
	fLocal_129 = 0,3f;
	fLocal_130 = 0,5f;
	fLocal_131 = 50f;
	iLocal_142 = -1;
	iLocal_150 = -1;
	iLocal_151 = -1;
	bLocal_227 = true;
	bLocal_228 = true;
	bLocal_250 = true;
	fLocal_267 = 0f;
	fLocal_268 = 0f;
	fLocal_269 = 0f;
	fLocal_270 = 123,744f;
	fLocal_271 = -77,7f;
	fLocal_272 = -87,9f;
	fLocal_273 = 322,2873f;
	fLocal_274 = 316,722f;
	fLocal_275 = 251,8757f;
	fLocal_276 = 0,4923f;
	fLocal_277 = 0f;
	fLocal_278 = 17,3f;
	fLocal_279 = -160,9f;
	fLocal_280 = 153,3213f;
	fLocal_281 = 159,5713f;
	iLocal_298 = -1;
	iLocal_299 = -1;
	iLocal_316 = -1;
	iLocal_317 = -1;
	iLocal_318 = -1;
	iLocal_319 = -1;
	iLocal_320 = -1;
	iLocal_349 = -1;
	Local_362 = { -31,17f, -1090,754f, 25,4344f };
	Local_363 = { 0f, 0f, 0f };
	Local_364 = { -25,4559f, -1426,998f, 29,656f };
	Local_365 = { -56,8445f, -1107,244f, 24,4344f };
	Local_366 = { -33,6656f, -1092,602f, 30,4344f };
	Local_367 = { -16,1017f, -1079,592f, 25,6721f };
	Local_368 = { -40,54f, -1096,27f, 25,43f };
	Local_369 = { -42f, -1095,5f, 25,43f };
	Local_370 = { -1899,216f, -593,5246f, 10,8973f };
	Local_371 = { -1899,791f, -594,6526f, 10,8853f };
	Local_372 = { -1883,565f, -575,7982f, 10,7861f };
	Local_373 = { -24,9598f, -1437,647f, 29,6552f };
	Local_374 = { -42,95f, -1097,3f, 25,41f };
	Local_375 = { -43,98f, -1095,47f, 25,41f };
	Local_376 = { -29,9308f, -1089,822f, 25,4221f };
	Local_377 = { -34,2931f, -1089,394f, 25,4222f };
	Local_378 = { -1663,97f, -1126,7f, 30,7f };
	sLocal_379 = "mattarmenian";
	sLocal_380 = "armenian_1_int";
	sLocal_381 = "armenian_1_mcs_1";
	sLocal_382 = "arm_1_mcs_2_concat";
	sLocal_383 = "missarmenian1walktocar";
	sLocal_384 = "missarmenian1@dealership";
	sLocal_385 = "missarmenian1banter";
	sLocal_386 = "missarmenian1movieextras";
	sLocal_387 = "missarmenian1ig_13";
	sLocal_388 = "missarmenian1leadinout";
	sLocal_389 = "missarmenian1leadinoutarmenian_1_mcs_1_leadinout";
	sLocal_390 = "arm1_01";
	sLocal_391 = "arm1_05";
	sLocal_392 = "missarmenian1driving_taunts@lamar_1";
	sLocal_393 = "missarmenian1driving_taunts@lamar_2";
	sLocal_394 = "missarmenian1driving_taunts@franklin";
	sLocal_395 = "missarmenian1leadinoutarm_1_ig_14_leadinout";
	sLocal_396 = "MISSFINALE_C2IG_5";
	iLocal_448 = joaat("ninef2");
	iLocal_449 = joaat("rapidgt2");
	iLocal_450 = joaat("manana");
	iLocal_451 = joaat("p_sec_gate_01_s");
	iLocal_452 = joaat("p_sec_gate_01_s_col");
	iLocal_453 = joaat("s_m_m_armoured_01");
	iLocal_454 = joaat("s_m_m_security_01");
	iLocal_455 = joaat("a_m_y_beach_02");
	iLocal_456 = joaat("p_cs_shirt_01_s");
	iLocal_457 = joaat("v_ilev_fa_warddoorl");
	iLocal_458 = joaat("v_ilev_fa_warddoorr");
	iLocal_459 = joaat("prop_ld_health_pack");
	iLocal_460 = joaat("jetmax");
	iLocal_461 = joaat("marquis");
	iLocal_462 = joaat("a_m_y_beach_01");
	iLocal_463 = joaat("prop_phone_ing");
	iLocal_464 = joaat("prop_ld_ferris_wheel");
	iLocal_465 = joaat("prop_ferris_car_01");
	iLocal_466 = joaat("a_f_y_beach_01");
	iLocal_467 = joaat("a_m_y_beach_01");
	iLocal_468 = joaat("a_f_y_fitness_02");
	iLocal_469 = joaat("a_m_y_beachvesp_01");
	iLocal_470 = joaat("a_f_y_hipster_02");
	iLocal_552 = 1;
	unk_0x925970A93719CADE(1);
	if (unk_0x96CFB880BAC634CE(3))
	{
		unk_0x40AC02FA167D4D0A(0);
		func_959();
		iLocal_551 = 1;
		Global_96538 = 3;
		func_951();
	}
	func_936();
	unk_0xCBE10A13619B9FAA(8, 0, 0);
	unk_0xF13E285EDAB2D255(6, 5, 2009);
	if (func_935())
	{
		iVar0 = func_934();
		if (Global_95690)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			unk_0xE0443EB1DC8A2F79();
			func_933(1, 0);
		}
		else if (iVar0 == 1)
		{
			func_933(4, 0);
		}
		else if (iVar0 == 2)
		{
			if (Global_95690)
			{
				func_933(5, 0);
			}
			else
			{
				func_933(6, 0);
			}
		}
		else if (iVar0 == 3)
		{
			if (Global_95690)
			{
				func_933(9, 0);
			}
			else
			{
				func_933(10, 0);
			}
		}
		else if (iVar0 > 3)
		{
			if (Global_95690)
			{
				func_933(11, 0);
			}
			else
			{
				func_933(11, 0);
			}
		}
		unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
		bLocal_254 = true;
	}
	else
	{
		func_886(0, "OPENING_CUTSCENE", 0, 0, 0, 1);
	}
	unk_0x7AFB027C1EB91ABE(0);
	while (true)
	{
		system::wait(0);
		unk_0xECF30459397D5190("M_FranklinAndLamar", 0);
		if (bLocal_254)
		{
			if (iLocal_551 == 1)
			{
				bLocal_254 = false;
			}
		}
		if (!func_885(138))
		{
			if (unk_0xBCF87EE3DC296C2A(1) == 4 || unk_0xBCF87EE3DC296C2A(0) == 4)
			{
				func_884(138, 1);
			}
		}
		if (iLocal_550 < 11)
		{
			if (unk_0xFC8BFE4B41177C22(Local_491[0 /*7*/]))
			{
				if (!unk_0xD9F5E1FEFD1329E4(Local_491[0 /*7*/], 0))
				{
					if (!unk_0xD9F5E1FEFD1329E4(Local_491[1 /*7*/], 0))
					{
						func_871(4);
					}
					else
					{
						func_871(3);
					}
				}
			}
			if (unk_0xFC8BFE4B41177C22(Local_491[1 /*7*/]))
			{
				if (!unk_0xD9F5E1FEFD1329E4(Local_491[1 /*7*/], 0))
				{
					if (!unk_0xD9F5E1FEFD1329E4(Local_491[0 /*7*/], 0))
					{
						func_871(4);
					}
					else
					{
						func_871(3);
					}
				}
			}
		}
		else if (unk_0xFC8BFE4B41177C22(Local_491[iLocal_283 /*7*/]))
		{
			if (!unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
			{
				func_871(2);
			}
		}
		if (iLocal_550 > 2)
		{
			if (unk_0xFC8BFE4B41177C22(Local_491[iLocal_283 /*7*/]))
			{
				if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
				{
					if (func_870(&(Local_491[iLocal_283 /*7*/])))
					{
						func_871(7);
					}
				}
			}
		}
		if (iLocal_550 < 11)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_400))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
				{
					if (iLocal_550 > 9)
					{
						if (func_870(&iLocal_400))
						{
							func_871(8);
						}
					}
				}
				else
				{
					func_871(6);
				}
			}
		}
		if (unk_0xFC8BFE4B41177C22(Local_471.f_0))
		{
			if (unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				func_871(1);
			}
		}
		if (unk_0xFC8BFE4B41177C22(Local_472.f_0))
		{
			if (unk_0x4FAFF4BCB7633475(Local_472.f_0))
			{
				func_871(19);
			}
		}
		if (unk_0xFC8BFE4B41177C22(Local_475.f_0))
		{
			if (unk_0x4FAFF4BCB7633475(Local_475.f_0))
			{
				func_871(20);
			}
		}
		if (iLocal_550 > 5)
		{
			func_869();
		}
		if (iLocal_550 >= 10)
		{
			func_848(&uLocal_505, 1, 1);
		}
		if (!iLocal_265)
		{
			if (iLocal_550 >= 6)
			{
				func_846(4, unk_0x4A8C381C258A124D());
				iLocal_265 = 1;
			}
		}
		switch (iLocal_550)
		{
			case 0:
				func_547();
				break;
			
			case 1:
				func_545();
				break;
			
			case 2:
				func_543();
				break;
			
			case 3:
			case 4:
				func_447();
				break;
			
			case 5:
				func_419();
				break;
			
			case 6:
				func_402();
				break;
			
			case 7:
				func_397();
				break;
			
			case 8:
				func_393();
				break;
			
			case 9:
				func_378();
				break;
			
			case 10:
				func_288();
				break;
			
			case 11:
				func_2();
				break;
			
			case 12:
				break;
			
			case 13:
				break;
			
			case 14:
				break;
			
			case 15:
				break;
			
			case 16:
				break;
			
			case 17:
				break;
			
			case 18:
				break;
			
			case 19:
				break;
		}
		func_1();
	}
}

void func_1()
{
	float fVar0;
	
	if (!Local_492.f_1)
	{
		if (iLocal_550 == 3)
		{
			if (bLocal_227)
			{
			}
			else if (unk_0x266D9DB5FCE4003B(iLocal_288, sLocal_379))
			{
				fVar0 = unk_0xE2E30D829A6B8F9E(iLocal_288, sLocal_379);
				Local_492.f_0 = ((fLocal_267 / fVar0) * 99f);
				unk_0xB055330FF3BFD8A6(unk_0x259BE71D8A81D4FA(), 1, 0);
				unk_0x9AD14335D95C64BA(unk_0x259BE71D8A81D4FA(), (Local_492.f_0 / 100f), 1, 0);
			}
		}
		else if (iLocal_550 == 6)
		{
			if (!bLocal_227)
			{
				if (!Local_492.f_1)
				{
					Local_492.f_0 = (Local_492.f_0 + (1f * system::timestep()));
					if (Local_492.f_0 > 100f)
					{
						Local_492.f_0 = 100f;
					}
					unk_0xB055330FF3BFD8A6(unk_0x259BE71D8A81D4FA(), 1, 0);
					unk_0x9AD14335D95C64BA(unk_0x259BE71D8A81D4FA(), (Local_492.f_0 / 100f), 1, 0);
				}
			}
		}
	}
}

void func_2()
{
	bool bVar0;
	struct<3> Var1;
	
	if (iLocal_551 == 4)
	{
		if (iLocal_282 != 99)
		{
			if (bLocal_254)
			{
				func_287(-13,9541f, -1446,656f, 30,5515f, 335,0142f, 0, 0);
				iLocal_282 = 99;
			}
			else
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -13,9541f, -1446,656f, 30,5515f, 1, 0, 0, 1);
				unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
				unk_0x6C39BDF5EA5D38FC(-13,9541f, -1446,656f, 30,5515f);
				unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
				iLocal_282 = 99;
			}
		}
		else if (func_282(-17,8292f, -1458,012f, 29,4598f, 0, 0) && func_193(Local_373, fLocal_276, 0))
		{
			func_190(0, -1, 0);
			if (unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
			{
				unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iLocal_400, -1);
				if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
				{
					unk_0x73CAFD2038E812B3(Local_471.f_0, iLocal_400, 0);
				}
			}
			iLocal_551 = 0;
		}
	}
	if (iLocal_551 == 0)
	{
		if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 768);
		}
		unk_0x839AD252B0708F35(sLocal_382, 8);
		unk_0xEC9DAA34BBB4658C(iLocal_456);
		unk_0xEC9DAA34BBB4658C(iLocal_457);
		unk_0xEC9DAA34BBB4658C(iLocal_458);
		unk_0xEC9DAA34BBB4658C(iLocal_459);
		func_102(sLocal_382);
		if (((((unk_0x6252BC0DD8A320DB(iLocal_456) && unk_0x6252BC0DD8A320DB(iLocal_457)) && unk_0x6252BC0DD8A320DB(iLocal_458)) && unk_0x6252BC0DD8A320DB(iLocal_459)) && system::timera() > 1000) && (!func_101() || func_100()))
		{
			bVar0 = false;
			if (unk_0x761778199FE1211C())
			{
				bVar0 = func_99();
			}
			else
			{
				bVar0 = unk_0x0DDDD9D153BCF51F();
			}
			if (bVar0)
			{
				unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 0);
				unk_0x51E3279E9437131C(0);
				if (unk_0xBC2EE32DE886BD08("ARM_1_GO_HOME"))
				{
					unk_0xB43467C43086A6A1("ARM_1_GO_HOME");
				}
				iLocal_425 = unk_0x4E55EAB577C13329(iLocal_456, -11,7f, -1439,255f, 30,099f, 1, 1, 0);
				iLocal_426 = unk_0x43AFC452F25F3A2F(iLocal_459, -17,92f, -1436,34f, 30,2033f, 1, 1, 0, 0);
				unk_0x5C96CEA06531AB03(iLocal_426, -158,75f);
				unk_0x5D7CD709B34C90F0(iLocal_426, 1);
				iLocal_427[0] = unk_0x4E55EAB577C13329(iLocal_457, -12,7f, -1439,255f, 20,099f, 1, 1, 0);
				iLocal_427[1] = unk_0x4E55EAB577C13329(iLocal_458, -10,7f, -1439,255f, 20,099f, 1, 1, 0);
				unk_0x55098D9E9AD58806(iLocal_456);
				unk_0x55098D9E9AD58806(iLocal_459);
				unk_0x55098D9E9AD58806(iLocal_457);
				unk_0x55098D9E9AD58806(iLocal_458);
				unk_0xF293D66D4452C854(iLocal_425, "Franklins_shirt", 0, 0, 0);
				unk_0xF293D66D4452C854(iLocal_427[0], "Closet_Door_L", 0, 0, 0);
				unk_0xF293D66D4452C854(iLocal_427[1], "Closet_Door_R", 0, 0, 0);
				unk_0xE226F16D30AF5945(-18,3539f, -1438,784f, 31,305f, 3f, joaat("v_ilev_frnkwarddr1"), 0);
				unk_0xE226F16D30AF5945(-18,3594f, -1438,133f, 31,305f, 3f, joaat("v_ilev_frnkwarddr2"), 0);
				func_74(48, 0);
				func_74(47, 0);
				unk_0x6421C7C9616E4305(joaat("v_ilev_fa_roomdoor"), -15,989f, -1436,03f, 31,199f, 1, 0f, 0f, -1f);
				func_72();
				func_62(1, 1, 1, 0, 0, 0, 0);
				unk_0xA62957B100C8DE6D(5f, 0f, 3);
				unk_0xED65412F8B26ED99(8);
				unk_0xB9784D6C7219851B(4);
				if (!func_61(0))
				{
					Global_96538 = 1;
				}
				iLocal_282 = 0;
				iLocal_221 = 0;
				iLocal_551 = 1;
			}
		}
	}
	if (iLocal_551 == 1)
	{
		if (unk_0xD9E3F021F9D8CEF9())
		{
			unk_0x1837D912F4EDCA95(0, 0, 0, 0);
			iLocal_221 = 1;
			iLocal_551 = 3;
		}
		if (iLocal_437 == 0)
		{
			iLocal_437 = unk_0x0556019E7EE8EC9A(-14,6461f, -1437,332f, 31,116f, "v_franklins");
		}
		else if (!unk_0xD0B0D1BD29678350(iLocal_437))
		{
			unk_0x74C1590CC91B3930(iLocal_437);
		}
		Var1 = { unk_0x958849BB56EC0F07(2) };
		if (!unk_0xFC8BFE4B41177C22(iLocal_425))
		{
			unk_0xEC9DAA34BBB4658C(iLocal_456);
			if (unk_0x6252BC0DD8A320DB(iLocal_456))
			{
				iLocal_425 = unk_0x43AFC452F25F3A2F(iLocal_456, -19,126f, -1438,791f, 31,6833f, 1, 1, 0, 0);
				unk_0xCF39804E8C88080E(iLocal_425, -3,744568f, -0,022376f, 14,53727f, 2, 1);
				unk_0x5D7CD709B34C90F0(iLocal_425, 1);
				unk_0x4285E11B28063EE0(iLocal_425, 0, 0);
				unk_0x55098D9E9AD58806(iLocal_456);
			}
		}
		switch (iLocal_282)
		{
			case 0:
				if (unk_0xFD216000DC314A92())
				{
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
					unk_0x406CBCEA35499884();
					unk_0x428C32CC68809A35(1);
					if (unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
					{
						unk_0xB2BD5837A8D3CEDA(iLocal_400, -25,169f, -1427,966f, 29,6567f, 1, 0, 0, 1);
						unk_0x5C96CEA06531AB03(iLocal_400, 0,9548f);
						unk_0xC229299217554C78(iLocal_400, 0, 0, 0);
						unk_0xF698038C13845696(iLocal_400);
					}
					func_59(&Local_471, 1);
					unk_0x2094BC4B6731BA68(-17,8292f, -1458,012f, 29,4598f, 100f, 1, 0, 0, 0);
					func_58();
					iLocal_282++;
				}
				break;
			
			case 1:
				unk_0x4EB223432F8FA0A0(2);
				if (unk_0x15EF8F22A719BE5E() > 21500)
				{
					func_57("AR1_BARBERS", 7000);
					iLocal_282++;
				}
				break;
			
			case 2:
				if (unk_0x15EF8F22A719BE5E() > 26700)
				{
					if (func_56(0))
					{
						func_53(0, 0, 1, 0, 0);
					}
					func_52(19, 1);
					func_52(20, 1);
					func_52(21, 1);
					func_52(22, 1);
					func_52(23, 1);
					func_52(24, 1);
					func_52(25, 1);
					system::settimera(0);
					system::settimerb(0);
					iLocal_282++;
				}
				break;
			
			case 3:
				unk_0x64BB72494B9DF6DC((Var1.f_2 - unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D())));
				if (system::timera() > 3000)
				{
					func_57("AR1_SAVE1", -1);
					unk_0x37B894853929BF1A(1);
					unk_0xFABF472ADCE66A1E();
					if (!unk_0xC450B06E5AAA0985(uLocal_418))
					{
						uLocal_418 = func_50(-14,3803f, -1438,514f, 30,1015f, 0);
						unk_0x4C905FB262965D5D(uLocal_418, 40);
						unk_0x861AC9C2D48CEA7F(uLocal_418, 1);
					}
					system::settimerb(0);
					iLocal_253 = 0;
					iLocal_282++;
				}
				break;
			
			case 4:
				unk_0x64BB72494B9DF6DC((Var1.f_2 - unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D())));
				unk_0xFABF472ADCE66A1E();
				if (system::timerb() > 5000)
				{
					if (unk_0xE10356B235A70E70(-14,8691f, -1441,159f, 31,1932f, 3f, joaat("v_ilev_fa_frontdoor"), 0))
					{
						unk_0x1F3E4227575DF103(joaat("v_ilev_fa_frontdoor"), -14,8691f, -1441,159f, 31,1932f, 1, 0f, 0);
					}
					unk_0x37B894853929BF1A(0);
					system::settimerb(0);
					iLocal_253 = 0;
					iLocal_282++;
				}
				break;
			
			case 5:
				if (!iLocal_253)
				{
					if (func_49("AR1_SAVE1"))
					{
						if (system::timera() > 8750)
						{
							unk_0x428C32CC68809A35(0);
							iLocal_253 = 1;
						}
					}
				}
				if (system::timera() > 9500)
				{
					func_57("AR1_TVHELP", -1);
					system::settimerb(0);
					iLocal_253 = 0;
					iLocal_282++;
				}
				break;
			
			case 6:
				if (system::timerb() > 5000)
				{
					iLocal_253 = 0;
					iLocal_282++;
				}
				break;
			
			case 7:
				if (!iLocal_253)
				{
					if (func_49("AR1_TVHELP"))
					{
						if (system::timera() > 15000)
						{
							unk_0x428C32CC68809A35(0);
							iLocal_253 = 1;
						}
					}
				}
				if (system::timera() > 16000)
				{
					func_57("AR1_MEDIHELP", -1);
					system::settimerb(0);
					iLocal_253 = 0;
					iLocal_282++;
				}
				break;
			
			case 8:
				if (system::timerb() > 5000)
				{
					iLocal_253 = 0;
					iLocal_282++;
				}
				break;
			
			case 9:
				if (!iLocal_253)
				{
					if (func_49("AR1_MEDIHELP"))
					{
						if (system::timera() > 22500)
						{
							unk_0x428C32CC68809A35(0);
							iLocal_253 = 1;
						}
					}
				}
				if (system::timera() > 23500)
				{
					unk_0x6421C7C9616E4305(joaat("v_ilev_fa_roomdoor"), -15,989f, -1436,03f, 31,199f, 0, 0f, 0f, 0f);
					func_57("AR1_SAVE2", -1);
					system::settimerb(0);
					iLocal_253 = 0;
					iLocal_282++;
				}
				break;
			
			case 10:
				if (system::timerb() > 5000)
				{
					func_57("AR1_SAVE2B", -1);
					system::settimerb(0);
					iLocal_253 = 0;
					iLocal_282++;
				}
				break;
			
			case 11:
				if (system::timerb() > 5000)
				{
					system::settimerb(0);
					iLocal_253 = 0;
					iLocal_282++;
				}
				break;
			
			case 12:
				if (!iLocal_253)
				{
					if (func_49("AR1_SAVE2B"))
					{
						if (system::timera() > 35000)
						{
							unk_0x428C32CC68809A35(0);
							iLocal_253 = 1;
						}
					}
				}
				if (system::timera() > 36000)
				{
					func_57("AR1_SAVE3", -1);
					system::settimerb(0);
					iLocal_282++;
				}
				break;
			
			case 13:
				if (system::timerb() > 7000)
				{
					unk_0x428C32CC68809A35(0);
					iLocal_282++;
				}
				break;
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_425))
		{
			if (unk_0xD8FC13DA1BA1DBA2("Franklins_shirt", 0))
			{
				unk_0x5D7CD709B34C90F0(iLocal_425, 1);
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_427[0]))
		{
			if (unk_0xD8FC13DA1BA1DBA2("Closet_Door_L", 0))
			{
				unk_0x5D7CD709B34C90F0(iLocal_427[0], 1);
			}
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_427[1]))
		{
			if (unk_0xD8FC13DA1BA1DBA2("Closet_Door_R", 0))
			{
				unk_0x5D7CD709B34C90F0(iLocal_427[1], 1);
			}
		}
		if (unk_0x2B60F53D06BC6971(0))
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_425))
			{
				unk_0x4285E11B28063EE0(iLocal_425, 1, 0);
			}
			unk_0x64BB72494B9DF6DC(0f);
			unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		}
		if (!unk_0x0CB7695268A7F50F())
		{
			iLocal_551 = 2;
		}
	}
	if (iLocal_551 == 2)
	{
		func_59(&Local_471, 1);
		unk_0x428C32CC68809A35(1);
		unk_0x3B327805C3CAF8DC();
		if (iLocal_221 && unk_0x15CCE8886267624F())
		{
			unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
			unk_0x64BB72494B9DF6DC(0f);
			unk_0xD815D4BD1AE9E85A(0f, 1065353216);
			func_48(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 20f, 1, 10000);
		}
		func_32();
		unk_0x6421C7C9616E4305(joaat("v_ilev_fa_roomdoor"), -15,989f, -1436,03f, 31,199f, 0, 0f, 0f, 0f);
		if (unk_0xE10356B235A70E70(-14,8691f, -1441,159f, 31,1932f, 3f, joaat("v_ilev_fa_frontdoor"), 0))
		{
			unk_0x1F3E4227575DF103(joaat("v_ilev_fa_frontdoor"), -14,8691f, -1441,159f, 31,1932f, 1, 0f, 0);
		}
		func_62(0, 1, 1, 0, 0, 0, 0);
		unk_0x51E3279E9437131C(1);
		func_58();
		func_4(0);
	}
	if (iLocal_551 == 3)
	{
		func_3();
		unk_0x1837D912F4EDCA95(0, 0, 0, 0);
		unk_0xB479965CBAA3EAE1(0);
		iLocal_221 = 1;
		iLocal_551 = 1;
	}
}

void func_3()
{
	if (!unk_0x15CCE8886267624F())
	{
		if (!unk_0x78ABC1D11B34F324())
		{
			unk_0x8F72AF14CE5AACE4(800);
		}
		while (!unk_0x15CCE8886267624F())
		{
			system::wait(0);
		}
	}
}

void func_4(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xC9BA6D804FA4FAAA())
		{
			unk_0xB479965CBAA3EAE1(0);
		}
		unk_0xDD291722ADDCBD60();
		while (unk_0x0CB7695268A7F50F())
		{
			system::wait(0);
		}
		func_58();
	}
	func_15(5, 1);
	func_12(2, 1);
	unk_0xD33BCB9F50C1E588(func_9(1), 0);
	func_32();
	func_8(6, 0, 1);
	func_5(0, 0);
	func_951();
}

void func_5(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_64168)
	{
		Global_64168 = iParam1;
	}
	if (bParam0)
	{
		if ((func_61(0) && Global_79636.f_1 == 1) && func_7(Global_79636))
		{
		}
		else
		{
			Global_64166 = 1;
		}
	}
	if (Global_113969.f_9088 || func_61(0))
	{
		iVar0 = func_6();
		iVar1 = Global_92265[iVar0 /*5*/];
		uVar2 = Global_79660.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113969.f_9088)
			{
			}
			return;
		}
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 4);
		unk_0x0B0C9A0F9AAEB7F0(&Global_79638, 1);
		Global_79654 = uVar2;
		Global_79655 = unk_0x1DD05E817C89C737();
	}
}

int func_6()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_7(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_8(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	iVar0 = BitTest(Global_113969.f_9088.f_99.f_219[iParam0], iParam1);
	if (iVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_9088.f_99.f_219[iParam0]), iParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_9088.f_99.f_219[iParam0]), iParam1);
	}
}

int func_9(bool bParam0)
{
	if (func_11(bParam0))
	{
		return func_10(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

var func_10(bool bParam0)
{
	return Global_2169[bParam0 /*29*/];
}

bool func_11(bool bParam0)
{
	return bParam0 < 3;
}

void func_12(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_14(iParam0, 0))
		{
			func_13(iParam0, 1, 0);
			func_13(iParam0, 2, 0);
			func_13(iParam0, 3, 0);
			func_13(iParam0, 4, 0);
			func_13(iParam0, 0, 1);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_13(iParam0, 0, 0);
	}
}

void func_13(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_32753[iParam0]), iParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_32753[iParam0]), iParam1);
	}
}

int func_14(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

void func_15(int iParam0, bool bParam1)
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_7232[iParam0]), 0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_7232[iParam0]), 0);
	}
	unk_0xC372A80C7719DF28(Global_96551[iParam0 /*10*/].f_8, bParam1, 1);
	func_21(iParam0);
	func_19(iParam0, 0);
	func_17(iParam0);
	func_16(iParam0);
}

void func_16(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(38 / 32)]), (38 % 32));
			func_74(38, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(41 / 32)]), (41 % 32));
			func_74(41, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(43 / 32)]), (43 % 32));
			func_74(43, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(42 / 32)]), (42 % 32));
			func_74(42, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(44 / 32)]), (44 % 32));
			func_74(44, 0);
			break;
		
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(51 / 32)]), (51 % 32));
			func_74(51, 0);
			break;
		
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(51 / 32)]), (51 % 32));
			func_74(51, 0);
			break;
		
		case 3:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(53 / 32)]), (53 % 32));
			func_74(53, 0);
			break;
		
		case 4:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(81 / 32)]), (81 % 32));
			func_74(81, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(82 / 32)]), (82 % 32));
			func_74(82, 0);
			break;
		
		case 5:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(47 / 32)]), (47 % 32));
			func_74(47, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(50 / 32)]), (50 % 32));
			func_74(50, 0);
			break;
		
		case 6:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(50 / 32)]), (50 % 32));
			func_74(50, 0);
			break;
	}
}

void func_17(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
			if (func_18(1))
			{
				unk_0xC372A80C7719DF28(Global_96551[1 /*10*/].f_8, true, 1);
				unk_0xC372A80C7719DF28(Global_96551[0 /*10*/].f_8, func_18(0), 0);
			}
			else if (func_18(0))
			{
				unk_0xC372A80C7719DF28(Global_96551[0 /*10*/].f_8, true, 1);
				unk_0xC372A80C7719DF28(Global_96551[1 /*10*/].f_8, func_18(1), 0);
			}
			break;
		
		case 2:
		case 3:
		case 4:
			if (func_18(3))
			{
				unk_0xC372A80C7719DF28(Global_96551[3 /*10*/].f_8, true, 1);
				unk_0xC372A80C7719DF28(Global_96551[4 /*10*/].f_8, func_18(4), 0);
				unk_0xC372A80C7719DF28(Global_96551[2 /*10*/].f_8, func_18(2), 0);
			}
			else if (func_18(4))
			{
				unk_0xC372A80C7719DF28(Global_96551[4 /*10*/].f_8, true, 1);
				unk_0xC372A80C7719DF28(Global_96551[3 /*10*/].f_8, func_18(3), 0);
				unk_0xC372A80C7719DF28(Global_96551[2 /*10*/].f_8, func_18(2), 0);
			}
			else if (func_18(2))
			{
				unk_0xC372A80C7719DF28(Global_96551[2 /*10*/].f_8, true, 1);
				unk_0xC372A80C7719DF28(Global_96551[3 /*10*/].f_8, func_18(3), 0);
				unk_0xC372A80C7719DF28(Global_96551[4 /*10*/].f_8, func_18(4), 0);
			}
			break;
		
		case 5:
		case 6:
			if (func_18(6))
			{
				unk_0xC372A80C7719DF28(Global_96551[6 /*10*/].f_8, true, 1);
				unk_0xC372A80C7719DF28(Global_96551[5 /*10*/].f_8, func_18(5), 0);
			}
			else if (func_18(5))
			{
				unk_0xC372A80C7719DF28(Global_96551[5 /*10*/].f_8, true, 1);
				unk_0xC372A80C7719DF28(Global_96551[6 /*10*/].f_8, func_18(6), 0);
			}
			break;
	}
}

bool func_18(int iParam0)
{
	return BitTest(Global_113969.f_7232[iParam0], 0);
}

void func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar4;
	
	if (iParam0 == 10)
	{
		return;
	}
	bVar4 = BitTest(Global_113969.f_7232[iParam0], 0);
	if (iParam0 == 5 && BitTest(Global_113969.f_7232[6], 0))
	{
		bVar4 = true;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		StringCopy(&Var3, "", 32);
		iVar2 = 10;
		while (func_20(iVar0, iVar1, &Var3, &iVar2))
		{
			if (iVar2 == iParam0)
			{
				if (bVar4)
				{
					if (bParam1)
					{
						unk_0xC2A1BF59954282E5(unk_0x70E57E9927B6BA58(&Var3), 0);
					}
				}
				unk_0xBA7A8F956317AC96(unk_0x70E57E9927B6BA58(&Var3), bVar4);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_20(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_21(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_96551[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (BitTest(Global_113969.f_7232[iParam0], 0))
	{
		if (Global_96551[iParam0 /*10*/].f_9 != func_28())
		{
			bVar0 = true;
		}
		else if (!func_26(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_18(6))
		{
			bVar0 = false;
		}
	}
	if (func_23(14))
	{
		bVar0 = false;
	}
	func_22(Global_96551[iParam0 /*10*/].f_7, bVar0, 0);
}

void func_22(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_33328[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_33328[iVar0 /*23*/].f_11, 0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 18);
		if (Global_33325 == 1)
		{
			Global_33326 = 1;
		}
		Global_33325 = 1;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 0);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 15);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_33328[iVar0 /*23*/].f_11), 0);
		unk_0x8744D2E3FC95740E(&(Global_33328[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_33328[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xC450B06E5AAA0985(Global_33328[iVar0 /*23*/].f_19))
		{
			unk_0x9F83BF77C7204C05(1);
			unk_0xFE54B8568B2ABD12(&(Global_33328[iVar0 /*23*/].f_19));
			unk_0x9F83BF77C7204C05(0);
		}
	}
}

int func_23(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_24(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_24(int iParam0)
{
	return func_25(iParam0, Global_44042);
}

int func_25(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
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
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
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
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
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
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_26(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_101585.f_391 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_26(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_27(iParam0, &sVar1);
		iVar2 = unk_0x0556019E7EE8EC9A(Global_96551[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_101585.f_391 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0x5AEB336317DC4151("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0x5AEB336317DC4151("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0x5AEB336317DC4151("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x1B79E937E91F40C3(sParam1, "");
}

int func_28()
{
	func_29();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_29()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_9(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_31(unk_0x4A8C381C258A124D());
			if (func_11(iVar0) && (!func_30(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_11(Global_113969.f_2366.f_539.f_4321))
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

bool func_30(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_9(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_32()
{
	func_33(0, 1, 0);
	func_33(1, 1, 0);
	func_33(2, 1, 0);
	func_33(3, 1, 0);
	func_33(4, 1, 0);
	func_33(5, 1, 0);
	func_33(6, 1, 0);
}

void func_33(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_47(iParam0, 0, 0))
		{
			if (iParam2 && Global_101585.f_18[iParam0])
			{
				if (func_46(iParam0) == 3 && !func_45(iParam0))
				{
					func_44(iParam0);
					func_43(iParam0, 0, 0);
					func_35(iParam0, 1, 0);
					func_34(iParam0);
				}
				else
				{
					func_43(iParam0, 1, 0);
					func_34(iParam0);
				}
			}
			else
			{
				func_43(iParam0, 0, 0);
				func_35(iParam0, 1, 0);
				func_34(iParam0);
			}
		}
		else
		{
			func_35(iParam0, 1, 0);
			func_34(iParam0);
		}
	}
	else if (func_47(iParam0, 0, 0))
	{
		func_35(iParam0, 0, 0);
		func_35(iParam0, 1, 0);
		func_34(iParam0);
	}
}

void func_34(int iParam0)
{
	Global_101585.f_205[iParam0] = 1;
	Global_101585.f_204 = 1;
}

void func_35(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8744D2E3FC95740E(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_42() == 0)
		{
			uVar0 = func_40(func_41(iParam0), -1);
			unk_0x8744D2E3FC95740E(&uVar0, iParam1);
			func_36(func_41(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

void func_36(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_37(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_37(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_38(uParam1));
}

int func_38(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_39();
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

int func_39()
{
	return Global_1574926;
}

int func_40(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_37(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_42()
{
	return Global_32948;
}

void func_43(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_42() == 0)
		{
			uVar0 = func_40(func_41(iParam0), -1);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam1);
			func_36(func_41(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_668[iParam0]), iParam1);
	}
}

void func_44(int iParam0)
{
	if (Global_101585.f_18[iParam0])
	{
		func_43(iParam0, 10, 1);
		func_43(iParam0, 19, 1);
	}
}

bool func_45(int iParam0)
{
	return func_47(iParam0, 5, 1);
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

int func_47(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_42() == 0)
		{
			return BitTest(func_40(func_41(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_48(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = unk_0x1DD05E817C89C737();
	while ((unk_0x1DD05E817C89C737() - iVar0) < iParam3)
	{
		if (!unk_0x787F8EE1F6FBDC6D())
		{
			unk_0x4A3280817398D754(Param0, fParam1, iParam2);
		}
		else if (unk_0x9E2D35FA908F57B4())
		{
			iVar0 = 0;
		}
		system::wait(0);
	}
	unk_0x6981C3213B841071();
}

bool func_49(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

var func_50(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_51(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_52(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_33328[iVar0 /*23*/].f_11, 7))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 7);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_33328[iVar0 /*23*/].f_11), 7);
	}
	if (Global_33325 == 1)
	{
		Global_33326 = 1;
	}
	Global_33325 = 1;
	unk_0x0B0C9A0F9AAEB7F0(&(Global_33328[iVar0 /*23*/].f_11), 18);
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != -1)
	{
		if (!func_56(iParam0))
		{
			return;
		}
		Global_33009[iParam0 /*11*/].f_5 = 1;
		Global_33009[iParam0 /*11*/] = iParam1;
		Global_33009[iParam0 /*11*/].f_1 = iParam2;
		Global_33009[iParam0 /*11*/].f_9 = iParam4;
		Global_33009[iParam0 /*11*/].f_7 = iParam3;
		if (func_55(iParam0))
		{
			unk_0xECDF98280946398E(-1);
			unk_0x7C7F282055FB517C(iParam1, func_54(iParam2), iParam4);
			unk_0xECDF98280946398E(iParam1);
		}
	}
	StringCopy(&Global_33087, unk_0x1AF90EB93E0012D6(), 24);
}

char* func_54(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

int func_55(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_33009[iParam0 /*11*/].f_2)
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_33009[iParam0 /*11*/].f_6)
		{
			return 1;
		}
	}
	return 0;
}

void func_57(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_58()
{
	if (!unk_0x9390801B06EE998F())
	{
		if (!unk_0xDDED2C93E8FD5B69())
		{
			unk_0x10B228D2FDB7AF16(800);
		}
		while (!unk_0x9390801B06EE998F())
		{
			system::wait(0);
		}
	}
}

void func_59(int iParam0, bool bParam1)
{
	if (unk_0xFC8BFE4B41177C22(*iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*iParam0))
		{
			unk_0xC0086E5CBF13BBF7(*iParam0, -8f, 1);
			if (!unk_0x7F420695E3F776FB(*iParam0, 0) && !unk_0x9D6DF8F3584AAC2B(*iParam0))
			{
				if ((unk_0x592E6281C16BB0F2(*iParam0) || unk_0x5B9219522937741D(*iParam0)) || unk_0xB431D60610E7F85F(*iParam0))
				{
					unk_0x837D67618BF89034(*iParam0, 1, 1);
				}
				unk_0x5D7CD709B34C90F0(*iParam0, 0);
			}
			if (!unk_0x7F420695E3F776FB(*iParam0, 0))
			{
				unk_0x44C48AC14D3C09ED(*iParam0, 1, 0);
			}
			if (unk_0xD11A63E12F198FDB(*iParam0, func_60()))
			{
				unk_0x5C4B3034CCDA5270(*iParam0);
			}
			if (!bParam1)
			{
				unk_0x44FB298D6382876D(*iParam0, 1);
			}
		}
		if (bParam1)
		{
			unk_0x734A9F4537A31459(iParam0);
		}
		else
		{
			unk_0xF09E30AF1B8FB379(iParam0);
		}
	}
}

var func_60()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

int func_61(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_62(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_71(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_70())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_69(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_71(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_69(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_67(unk_0x259BE71D8A81D4FA())) && !func_64(unk_0x259BE71D8A81D4FA(), 0)) && !func_63()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_67(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_63()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_64(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_66(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_65(-1, 0) == 8;
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

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_39();
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

int func_66(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
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

int func_67(int iParam0)
{
	if (func_64(iParam0, 0))
	{
		return 1;
	}
	if (func_68())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_68()
{
	return BitTest(Global_2621446, 3);
}

int func_69(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && uParam2)
		{
			unk_0x7882946B06ED216B(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_70()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_71(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 13);
	}
}

void func_72()
{
	Global_21152 = 0;
	func_73();
}

void func_73()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_79389)
		{
			iVar0 = Global_43576[iParam0];
		}
		else
		{
			iVar0 = Global_113969.f_7264[iParam0];
		}
		if (iVar0 != iParam1 || BitTest(Global_39402[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_39411[(iParam0 / 32)]), (iParam0 % 32));
				Global_39874[iParam0] = iParam1;
			}
			else if (Global_79389)
			{
				Global_43576[iParam0] = iParam1;
			}
			else
			{
				Global_113969.f_7264[iParam0] = iParam1;
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(iParam0 / 32)]), (iParam0 % 32));
			func_76(iParam0);
			if (BitTest(Global_39402[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_75(iParam0);
			}
		}
	}
}

void func_75(int iParam0)
{
	if (!BitTest(Global_40345.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_40345.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_40345[Global_40345.f_227] = iParam0;
		Global_40345.f_227++;
	}
}

void func_76(int iParam0)
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_97())
	{
		return;
	}
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return;
	}
	Var0 = { func_96(iParam0) };
	if (BitTest(Var0.f_4, 2))
	{
		func_82(iParam0, &Var0);
	}
	if (!unk_0x116053132936EA1F(Var0.f_5))
	{
		if (unk_0xFD216000DC314A92())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = unk_0xED977E2AE2CB16EE(Var0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1);
	if ((BitTest(Global_39411[(iParam0 / 32)], (iParam0 % 32)) && Global_39874[iParam0] == 2) && fVar4 > 210f)
	{
		unk_0x8744D2E3FC95740E(&(Global_39411[(iParam0 / 32)]), (iParam0 % 32));
		Global_39420[iParam0] = 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("startup_positioning")) == 0)
	{
		if (BitTest(Global_39647[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_101585.f_391 == 0)
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						Global_101585.f_391 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());
					}
				}
				iVar5 = Global_101585.f_391;
				iVar6 = unk_0x0E171121A3A25363(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_39411[(iParam0 / 32)]), (iParam0 % 32));
					Global_39874[iParam0] = 3;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0x8744D2E3FC95740E(&(Global_39647[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (BitTest(Global_39411[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_39874[iParam0];
	}
	else if (BitTest(Var0.f_4, 0))
	{
		if (Global_113969.f_9088)
		{
			iVar3 = func_79(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_30(14))
		{
			iVar3 = 0;
		}
	}
	else if (BitTest(Var0.f_4, 1) && unk_0x486FF5D06E9659F1(joaat("ambient_solomon")) == 0)
	{
		if (func_77())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_113969.f_7264[iParam0];
	}
	if (Global_40101[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (BitTest(Global_39402[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!BitTest(Global_39411[(iParam0 / 32)], (iParam0 % 32)) || (Global_39420[iParam0] == 0 && Global_39874[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_39401)
		{
		}
		else
		{
			if (!unk_0x116053132936EA1F(Var0.f_5))
			{
				unk_0xB80B2E08713B8BC6(Var0.f_5, Var0.f_3, Var0, 0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (BitTest(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || unk_0x1D5CD3EAAA7422B0(unk_0x8CA2126DEA4C3796(Var0.f_5)) <= 0,015f)
					{
						iVar8 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());
						iVar9 = unk_0x0E171121A3A25363(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x57A602C0620BEFF2(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xEBB2809684978887(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			unk_0x8744D2E3FC95740E(&(Global_39402[(iParam0 / 32)]), (iParam0 % 32));
			Global_40101[iParam0] = iVar3;
		}
	}
	if (BitTest(Global_39411[(iParam0 / 32)], (iParam0 % 32)) && Global_39874[iParam0] != 2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_39402[(iParam0 / 32)]), (iParam0 % 32));
		func_75(iParam0);
		if (Global_39420[iParam0] < 2)
		{
			Global_39420[iParam0]++;
		}
	}
}

int func_77()
{
	if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
	{
		return 0;
	}
	switch (func_78())
	{
		case 0:
			if (Global_113969.f_9088.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_113969.f_9088.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_113969.f_9088.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_78()
{
	func_29();
	return Global_113969.f_2366.f_539.f_4321;
}

int func_79(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_78();
	if (func_80(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (bVar0 == 1)
		{
			if (BitTest(Global_113969.f_7232[5], 0) || BitTest(Global_113969.f_7232[6], 0))
			{
				return 0;
			}
		}
		if (func_11(bVar0))
		{
			if (BitTest(Global_96540[5], bVar0))
			{
				return 0;
			}
		}
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
			if (bVar0 == 0)
			{
				if (BitTest(Global_113969.f_7232[0], 0))
				{
					return 0;
				}
			}
			if (func_11(bVar0))
			{
				if (BitTest(Global_96540[0], bVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (bVar0 == 1)
			{
				if (BitTest(Global_113969.f_7232[5], 0))
				{
					return 0;
				}
			}
			if (func_11(bVar0))
			{
				if (BitTest(Global_96540[5], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (bVar0 == 1)
			{
				if (BitTest(Global_113969.f_7232[6], 0))
				{
					return 0;
				}
			}
			if (func_11(bVar0))
			{
				if (BitTest(Global_96540[6], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (bVar0 == 2)
			{
				if (BitTest(Global_113969.f_7232[2], 0))
				{
					return 0;
				}
				if (func_11(bVar0))
				{
					if (BitTest(Global_96540[2], bVar0))
					{
						return 0;
					}
				}
			}
			else if (bVar0 == 0)
			{
				if (BitTest(Global_113969.f_7232[1], 0))
				{
					return 0;
				}
				if (func_11(bVar0))
				{
					if (BitTest(Global_96540[1], bVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (bVar0 == 2)
			{
				if (BitTest(Global_113969.f_7232[3], 0))
				{
					return 0;
				}
			}
			if (func_11(bVar0))
			{
				if (BitTest(Global_96540[3], bVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_80(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				iVar0 = unk_0x4B423FAA24E8ABF0(func_81(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

var func_81(var uParam0)
{
	return uParam0;
}

void func_82(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_85();
	iVar1 = func_84(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_83(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_113969.f_7264[iParam0] = 0;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 12f)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 12f)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_83(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_113969.f_7264[iParam0] = 0;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 12f)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 12f)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_83(iParam0))
			{
				if ((unk_0x486FF5D06E9659F1(joaat("jewelry_heist")) == 0 && unk_0x486FF5D06E9659F1(joaat("jewelry_setup1")) == 0) && !Global_113969.f_9088.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_113969.f_7264[iParam0] = 0;
							unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_113969.f_9088.f_99.f_58[4])
				{
					Global_113969.f_7264[iParam0] = 0;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else if (Global_113969.f_9088.f_99.f_58[4])
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			else if (unk_0x486FF5D06E9659F1(joaat("jewelry_heist")) == 0 && unk_0x486FF5D06E9659F1(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 18f)
					{
						Global_113969.f_7264[iParam0] = 1;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 18f)
					{
						Global_113969.f_7264[iParam0] = 1;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_83(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_113969.f_7264[iParam0] = 0;
						unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 40f)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), *uParam1) >= 40f)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_83(iParam0))
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_83(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(joaat("assassin_valet")) == 0)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else if (unk_0x486FF5D06E9659F1(joaat("assassin_valet")) > 0)
			{
				Global_113969.f_7264[iParam0] = 0;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0x486FF5D06E9659F1(Global_92301[70 /*34*/].f_6) == 0)
			{
				if (!func_83(iParam0))
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0x486FF5D06E9659F1(joaat("omega2")) == 0)
			{
				if (!func_83(iParam0))
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_83(iParam0) && unk_0x486FF5D06E9659F1(Global_92301[26 /*34*/].f_6) == 0)
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
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
			if (!func_83(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(Global_92301[43 /*34*/].f_6) == 0)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_83(iParam0))
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_83(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(Global_92301[93 /*34*/].f_6) > 0)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_83(iParam0))
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_83(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(Global_92301[8 /*34*/].f_6) == 0 && unk_0x486FF5D06E9659F1(Global_92301[10 /*34*/].f_6) == 0)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_83(iParam0))
			{
				if (unk_0x486FF5D06E9659F1(Global_92301[47 /*34*/].f_6) == 0)
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0x486FF5D06E9659F1(Global_92301[70 /*34*/].f_6) == 0)
			{
				if (!func_83(iParam0))
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
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
			if (unk_0x486FF5D06E9659F1(Global_92301[48 /*34*/].f_6) == 0)
			{
				if (!func_83(iParam0))
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0x486FF5D06E9659F1(Global_92301[39 /*34*/].f_6) == 0)
			{
				if (!func_83(iParam0))
				{
					Global_113969.f_7264[iParam0] = 1;
					unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_83(iParam0))
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_83(iParam0))
			{
				Global_113969.f_7264[iParam0] = 1;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_83(iParam0))
			{
				Global_113969.f_7264[iParam0] = 0;
				unk_0xEBB2809684978887(uParam1->f_5, Global_113969.f_7264[iParam0], 1, 1);
			}
			break;
	}
}

bool func_83(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_96(iParam0) };
	iVar1 = unk_0x117BCCA03F7A311A(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_84(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

var func_85()
{
	var uVar0;
	
	func_95(&uVar0, unk_0x4BA5A16068183C5E());
	func_94(&uVar0, unk_0x18E502A71E28968C());
	func_93(&uVar0, unk_0x5295501D0862870D());
	func_88(&uVar0, unk_0xB12880C92EA6EE15());
	func_87(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_86(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || system::shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || system::shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_87(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_88(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_92(*uParam0);
	iVar1 = func_90(*uParam0);
	if (iParam1 < 1 || iParam1 > func_89(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

int func_89(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
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
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_90(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_91(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_91(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_92(var uParam0)
{
	return uParam0 & 15;
}

void func_93(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_94(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_95(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

struct<7> func_96(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287,857f, -1115,742f, 7,1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932,952f, 3725,154f, 32,9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207,873f, -470,063f, 66,358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29,8692f, -148,1571f, 57,2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280,7851f, 6232,782f, 31,8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823,2001f, -187,0831f, 37,819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822,4442f, -188,3924f, 37,819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82,3186f, -1392,752f, 29,5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82,3186f, -1390,476f, 29,5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686,983f, 4821,741f, 42,2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687,282f, 4819,484f, 42,2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418,637f, -806,457f, 29,6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418,637f, -808,733f, 29,6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096,661f, 2705,446f, 19,2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094,965f, 2706,964f, 19,2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196,825f, 2703,221f, 38,3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199,101f, 2703,221f, 38,3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818,7642f, -1079,544f, 11,4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816,7932f, -1078,406f, 11,4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0,0564f, 6517,461f, 32,0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1,7253f, 6515,914f, 32,0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201,435f, -776,8566f, 17,9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617,2458f, 2751,022f, 42,7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127,8201f, -211,8274f, 55,2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167,75f, 1055,536f, 21,5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716,6754f, -155,42f, 37,6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715,6154f, -157,2561f, 37,6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157,0924f, -306,4413f, 39,994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156,4022f, -304,4366f, 39,994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454,782f, -231,7927f, 50,0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456,201f, -233,3682f, 50,0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321,81f, 178,36f, 103,68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859,89f, 3749,79f, 33,18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289,1752f, 6199,112f, 31,637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155,454f, -1424,008f, 5,0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321,286f, -1650,597f, 52,3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167,789f, 1074,767f, 20,9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6,5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802,7333f, 167,5041f, 77,5824f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25,28f, -1431,06f, 30,84f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7,52f, 539,53f, 176,18f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972,787f, 3824,554f, 32,5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145,9f, -1991,14f, 14,18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723,12f, -1088,83f, 23,28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356,09f, -134,77f, 40,01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108,8502f, 6617,876f, 32,673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114,3206f, 6623,226f, 32,7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182,305f, 2645,242f, 38,807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174,654f, 2645,242f, 38,6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = joaat("lr_prop_supermod_door_01");
			Var0 = { -205,7007f, -1310,692f, 30,2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107,5401f, -9,0258f, 70,6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709,9813f, -963,5311f, 30,5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709,9894f, -960,6675f, 30,5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707,8046f, -962,4564f, 30,5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083,547f, -1975,435f, 31,6222f };
			Var0.f_5 = 792295685;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065,237f, -2006,079f, 32,2329f };
			Var0.f_5 = 563273144;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085,307f, -2018,561f, 41,6289f };
			Var0.f_5 = -726993043;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271,89f, -1707,57f, 53,79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270,77f, -1708,1f, 53,75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127,5f, -1456,18f, 37,94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483,56f, -1316,08f, 32,18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104,66f, -1638,48f, 4,68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31,72f, -1101,85f, 26,57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134,4f, -2204,1f, 7,52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608,73f, -1610,32f, 27,16f };
			Var0.f_5 = -1811763714;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611,32f, -1610,09f, 27,16f };
			Var0.f_5 = 1608500665;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592,94f, -1631,58f, 27,16f };
			Var0.f_5 = -1456048340;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592,71f, -1628,99f, 27,16f };
			Var0.f_5 = 943854909;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988,353f, 3054,411f, 47,3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700,17f, 47,31f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697,94f, 48,35f, 44,3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241,3574f, 361,0488f, 105,8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689,11f, 506,97f, 110,64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055,96f, -236,43f, 44,17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23,34f, -1897,6f, 23,05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524,2f, 3081,14f, 41,16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910,58f, -576,01f, 19,25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720,39f, 256,86f, 80,29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718,42f, 257,79f, 80,29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106,38f, -742,7f, 46,18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105,76f, -746,65f, 46,18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343,53f, 3265,37f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342,23f, 3267,62f, 32,96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041,933f, -2748,167f, 22,0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044,841f, -2746,489f, 22,0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045,12f, -232,004f, 39,4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046,516f, -229,3581f, 39,4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083,62f, -260,4167f, 38,1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080,974f, -259,0204f, 38,1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042,57f, -240,6f, 38,11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385,258f, -2079,949f, 52,7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656,57f, 4849,66f, 42,35f };
			Var0.f_5 = 243782214;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656,25f, 4852,24f, 42,35f };
			Var0.f_5 = 714115627;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051,402f, -474,6847f, 36,6199f };
			Var0.f_5 = 1668106976;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049,285f, -476,6376f, 36,7584f };
			Var0.f_5 = 1382347031;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210,957f, -580,8765f, 27,2373f };
			Var0.f_5 = -966790948;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212,445f, -578,4401f, 27,2373f };
			Var0.f_5 = -2068750132;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565,1712f, 276,6259f, 83,2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561,2863f, 293,5043f, 87,7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631,96f, -236,33f, 38,21f };
			Var0.f_5 = 1874948872;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630,43f, -238,44f, 38,21f };
			Var0.f_5 = -1965020851;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231,62f, 216,23f, 106,4f };
			Var0.f_5 = 1951546856;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232,72f, 213,88f, 106,4f };
			Var0.f_5 = -431382051;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258,32f, 203,84f, 106,43f };
			Var0.f_5 = -293975210;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260,76f, 202,95f, 106,43f };
			Var0.f_5 = -785215289;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256,31f, 220,66f, 106,43f };
			Var0.f_5 = -366143778;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266,36f, 217,57f, 110,43f };
			Var0.f_5 = 440819155;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442,66f, 6015,222f, 31,8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444,4985f, 6017,06f, 31,8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855,685f, 3683,93f, 34,5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223,35f, -172,41f, 39,98f };
			Var0.f_5 = -320891223;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220,93f, -173,68f, 39,98f };
			Var0.f_5 = 1511747875;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211,99f, -190,57f, 39,98f };
			Var0.f_5 = -1517722103;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213,26f, -192,98f, 39,98f };
			Var0.f_5 = -1093199712;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217,77f, -201,54f, 39,98f };
			Var0.f_5 = 1902048492;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219,04f, -203,95f, 39,98f };
			Var0.f_5 = -444768985;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514,32f, -317,34f, 93,32f };
			Var0.f_5 = 404057594;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512,42f, -319,26f, 93,32f };
			Var0.f_5 = -1417472813;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333,23f, 2574,97f, 47,03f };
			Var0.f_5 = -1376084479;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329,65f, 2576,64f, 47,03f };
			Var0.f_5 = 457472151;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16,1279f, -1114,605f, 29,9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18,572f, -1115,495f, 29,9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698,176f, 3751,506f, 34,8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699,937f, 3753,42f, 34,8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244,7274f, -44,0791f, 70,91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243,8379f, -46,5232f, 70,91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845,3624f, -1024,539f, 28,3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842,7684f, -1024,539f, 23,3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326,1122f, 6075,27f, 31,6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324,273f, 6077,109f, 31,6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665,2424f, -944,3256f, 21,9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662,6414f, -944,3256f, 21,9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313,826f, -389,1259f, 36,8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314,465f, -391,6472f, 36,8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114,009f, 2689,77f, 18,7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112,071f, 2691,505f, 18,7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164,845f, 1081,392f, 20,9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163,812f, 1083,778f, 20,9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570,905f, 303,3556f, 108,8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568,304f, 303,3556f, 108,8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813,1779f, -2148,27f, 29,7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810,5769f, -2148,27f, 29,7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6,8179f, -1098,209f, 29,9469f };
			Var0.f_5 = 1487704245;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827,5342f, -2160,493f, 29,7688f };
			Var0.f_5 = 1529812051;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107,01f, 289,38f, 64,76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101,62f, 290,36f, 64,76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138,64f, 300,82f, 67,18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137,05f, 295,59f, 67,18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053,16f, 3239,49f, 30,5f };
			Var0.f_5 = -621770121;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054,39f, 3237,23f, 30,5f };
			Var0.f_5 = 1018580481;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108,91f, 6469,11f, 31,91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182,91f, 6168,37f, 32,14f };
			Var0.f_5 = -1331552374;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59,89f, -1092,95f, 26,88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60,55f, -1094,75f, 26,89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39,13f, -1108,22f, 26,72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37,33f, -1108,87f, 26,72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943,73f, 3803,63f, 32,31f };
			Var0.f_5 = -2018911784;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316,39f, -276,49f, 54,52f };
			Var0.f_5 = -93934272;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313,96f, -275,6f, 54,52f };
			Var0.f_5 = 667682830;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965,71f, 484,22f, 16,05f };
			Var0.f_5 = 1876735830;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965,82f, 481,63f, 16,05f };
			Var0.f_5 = -2112857171;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962,1f, -2183,83f, 31,06f };
			Var0.f_5 = 2046930518;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961,79f, -2187,08f, 31,06f };
			Var0.f_5 = 1208502884;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508,43f, -336,63f, 115,76f };
			Var0.f_5 = 1986432421;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255,19f, 322,26f, 184,93f };
			Var0.f_5 = -722798986;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254,06f, 319,7f, 184,93f };
			Var0.f_5 = 204301578;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301,13f, 336,91f, 184,93f };
			Var0.f_5 = -320140460;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298,57f, 338,05f, 184,93f };
			Var0.f_5 = 65222916;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222,32f, 305,86f, 184,93f };
			Var0.f_5 = -920027322;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221,19f, 303,3f, 184,93f };
			Var0.f_5 = -58432001;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280,6f, 265,43f, 184,93f };
			Var0.f_5 = -2007378629;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278,04f, 266,57f, 184,93f };
			Var0.f_5 = 418772613;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778,31f, -1867,49f, 30,66f };
			Var0.f_5 = 1679064921;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721,35f, 91,01f, 56,68f };
			Var0.f_5 = 412198396;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728,84f, 88,64f, 56,68f };
			Var0.f_5 = -1053755588;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287,62f, 363,9f, 174,93f };
			Var0.f_5 = -53446139;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289,78f, 362,91f, 174,93f };
			Var0.f_5 = 1333960556;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289,86f, 362,88f, 174,93f };
			Var0.f_5 = -41786493;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292,01f, 361,89f, 174,93f };
			Var0.f_5 = 1750120734;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803,94f, 3929,01f, 33,72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348,81f, -47,26f, 49,39f };
			Var0.f_5 = -2116116146;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351,26f, -46,41f, 49,39f };
			Var0.f_5 = -74083138;
			unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962,9084f, -2105,814f, 34,6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_97()
{
	if ((func_42() == -1 || func_42() == 999) && !func_98() == 0)
	{
		return 1;
	}
	return 0;
}

int func_98()
{
	return Global_32949;
}

bool func_99()
{
	bool bVar0;
	
	bVar0 = unk_0x0DDDD9D153BCF51F();
	if (!Global_79388)
	{
		if (!bVar0)
		{
			Global_79388 = 1;
		}
	}
	return bVar0;
}

int func_100()
{
	if (Global_23297 == 1)
	{
		return 1;
	}
	return 0;
}

int func_101()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_102(char* sParam0)
{
	int iVar0;
	
	iVar0 = unk_0x70E57E9927B6BA58(sParam0);
	if (unk_0xB3FA103AA6383C28())
	{
		if (iVar0 == joaat("armenian_1_int"))
		{
			func_103("Franklin", unk_0x4A8C381C258A124D(), 0, 2);
			unk_0xFE61105198EA3496("Lamar", 2, 0, 0, 0);
			unk_0xFE61105198EA3496("Lamar", 3, 0, 0, 0);
			unk_0xFE61105198EA3496("Lamar", 4, 0, 0, 0);
			unk_0xFE61105198EA3496("Lamar", 5, 2, 0, 0);
			unk_0xFE61105198EA3496("Lamar", 9, 0, 0, 0);
			unk_0xFE61105198EA3496("Lamar", 8, 0, 0, 0);
			unk_0xFE61105198EA3496("Michael", 3, 0, 0, 0);
			unk_0xFE61105198EA3496("Michael", 4, 0, 0, 0);
			unk_0xFE61105198EA3496("Michael", 5, 0, 0, 0);
			unk_0xFE61105198EA3496("Michael", 6, 0, 0, 0);
			unk_0xFE61105198EA3496("Michael", 9, 0, 0, 0);
			unk_0xFE61105198EA3496("Michael", 8, 0, 0, 0);
			unk_0xFE61105198EA3496("Michael", 11, 0, 0, 0);
		}
		else if (iVar0 == joaat("armenian_1_mcs_1"))
		{
			func_103("Franklin", unk_0x4A8C381C258A124D(), 0, 2);
			if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				unk_0x2F19C4305F0B8DA7("Lamar", Local_471.f_0, 0);
			}
			unk_0xFE61105198EA3496("Siemon", 3, 1, 0, 0);
			unk_0xFE61105198EA3496("Jimmy", 3, 4, 0, 0);
			unk_0xFE61105198EA3496("Jimmy", 1, 1, 0, 0);
			unk_0xFE61105198EA3496("Jimmy", 2, 2, 0, 0);
			unk_0xFE61105198EA3496("Jimmy", 4, 0, 0, 0);
			unk_0xFE61105198EA3496("Jimmy", 6, 0, 0, 0);
			unk_0xFE61105198EA3496("Jimmy", 8, 3, 0, 0);
			unk_0xFE61105198EA3496("Jimmy", 10, 2, 0, 0);
		}
		else if (iVar0 == -2000131661)
		{
			func_103("Franklin", unk_0x4A8C381C258A124D(), 0, 2);
			if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				unk_0x2F19C4305F0B8DA7("Lamar", Local_471.f_0, 0);
			}
		}
	}
}

void func_103(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	struct<50> Var0;
	int iVar1;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_104(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		unk_0xFE61105198EA3496(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			unk_0x60A0A4CD710160D5(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			unk_0x60A0A4CD710160D5(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_104(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = unk_0x4B423FAA24E8ABF0(iParam0);
	func_185(iParam0, &Var2, 0, -1);
	func_185(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (func_182(iVar4, func_184(iVar0), func_183(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_184(iVar0)), &iVar1))
			{
				Var3 = { func_116(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_114(iVar4, func_184(iVar0), func_183(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_184(iVar0)), &iVar1))
			{
				Var3 = { func_116(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (func_182(iVar4, 14, func_106(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_116(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_114(iVar4, 14, func_106(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_116(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = func_183(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = func_183(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = func_105(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { func_116(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

int func_106(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_113(iParam3);
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar1 = unk_0x6B7AEB5F3D578298(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_108(unk_0x4B423FAA24E8ABF0(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_108(unk_0x4B423FAA24E8ABF0(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x4D0F04723A52D0E9(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x1D77F90D87ACD2BA(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_107(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_113(iParam3);
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 12)
	{
		iVar2 = unk_0xF2DDA7CE028AB9CB(iParam3, 0);
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			unk_0x808A8ABE207631DF(iVar1, &Var0);
			if (Var0.f_1 == iParam1)
			{
				return (func_112(iParam0) + iVar1);
			}
			iVar1++;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 1, -1, -1);
		iVar3 = unk_0x289EDE99827978AD(iParam1);
		if (iVar3 != -1)
		{
			return (func_111(iParam0) + iVar3);
		}
	}
	else
	{
		unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_110(iParam2));
		iVar4 = unk_0x55FF07D3A2FE8317(iParam1);
		if (iVar4 != -1)
		{
			return (func_109(iParam0, func_110(iParam2)) + iVar4);
		}
	}
	return -99;
}

int func_109(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 53;
			break;
		
		case joaat("player_one"):
			return 47;
			break;
		
		case joaat("player_two"):
			return 48;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 26;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 28;
			break;
	}
	return -99;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_114(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_115(iParam0);
		Global_113969.f_2366.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_113969.f_2366.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

struct<14> func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_181();
	if (iParam0 == joaat("player_zero"))
	{
		func_163(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_144(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_117(iParam1, iParam2);
	}
	return Global_79172[0 /*14*/];
}

void func_117(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_143(iParam1);
			break;
		
		case 2:
			func_142(iParam1);
			break;
		
		case 3:
			func_139(iParam1);
			break;
		
		case 4:
			func_138(iParam1);
			break;
		
		case 6:
			func_137(iParam1);
			break;
		
		case 5:
			func_136(iParam1);
			break;
		
		case 8:
			func_135(iParam1);
			break;
		
		case 9:
			func_134(iParam1);
			break;
		
		case 10:
			func_133(iParam1);
			break;
		
		case 1:
			func_132(iParam1);
			break;
		
		case 7:
			func_131(iParam1);
			break;
		
		case 11:
			func_130(iParam1);
			break;
		
		case 12:
			func_129(iParam1);
			break;
		
		case 13:
			func_128(iParam1);
			break;
		
		case 14:
			func_118(iParam1);
			break;
	}
}

void func_118(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 155, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_119(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_126(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x70E57E9927B6BA58(sParam3) != unk_0x70E57E9927B6BA58("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 5);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 1);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 6);
		if (func_30(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x304A39EB177D246B(Global_2883588, joaat("rebreather"), 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_124(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_124(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_124(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_124(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_124(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_124(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		if (unk_0x4BFA043D318BF9AE(Global_2883589))
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_6), 1);
			unk_0x8744D2E3FC95740E(&(uParam0->f_6), 0);
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 0);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 5);
		if (func_123(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 1);
		}
		if (func_123(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
		if (!func_123(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_30(14))
			{
				return;
			}
			uVar0 = func_40(func_122(iParam1, uParam0->f_2), Global_79169);
			if (BitTest(uVar0, uParam0->f_1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 1);
			}
			uVar0 = func_40(func_121(iParam1, uParam0->f_2), Global_79169);
			if (BitTest(uVar0, uParam0->f_1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
			}
			if (func_120(iParam1, uParam0->f_2, &iVar1))
			{
				uVar0 = func_40(iVar1, Global_79169);
				if (!BitTest(uVar0, uParam0->f_1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
	}
}

bool func_120(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_121(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_122(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/][iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_124(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_79169;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_125(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		uVar3 = func_40(iVar2, iVar0);
		return BitTest(uVar3, uVar1);
	}
	return 0;
}

bool func_125(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 14835;
	if ((bParam4 && Global_4540270) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_m_phead_15_0"):
					case joaat("dlc_mp_stunt_m_phead_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_1"):
					case joaat("dlc_mp_stunt_m_phead_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_2"):
					case joaat("dlc_mp_stunt_m_phead_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_3"):
					case joaat("dlc_mp_stunt_m_phead_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_4"):
					case joaat("dlc_mp_stunt_m_phead_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_5"):
					case joaat("dlc_mp_stunt_m_phead_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_6"):
					case joaat("dlc_mp_stunt_m_phead_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_7"):
					case joaat("dlc_mp_stunt_m_phead_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_0"):
					case joaat("dlc_mp_biker_m_special_2_0"):
					case joaat("dlc_mp_biker_m_special_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_1"):
					case joaat("dlc_mp_biker_m_special_2_1"):
					case joaat("dlc_mp_biker_m_special_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_2"):
					case joaat("dlc_mp_biker_m_special_2_2"):
					case joaat("dlc_mp_biker_m_special_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_3"):
					case joaat("dlc_mp_biker_m_special_2_3"):
					case joaat("dlc_mp_biker_m_special_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_4"):
					case joaat("dlc_mp_biker_m_special_2_4"):
					case joaat("dlc_mp_biker_m_special_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_5"):
					case joaat("dlc_mp_biker_m_special_2_5"):
					case joaat("dlc_mp_biker_m_special_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_7"):
					case joaat("dlc_mp_biker_m_special_2_7"):
					case joaat("dlc_mp_biker_m_special_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_8"):
					case joaat("dlc_mp_biker_m_special_2_8"):
					case joaat("dlc_mp_biker_m_special_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_11"):
					case joaat("dlc_mp_biker_m_special_2_11"):
					case joaat("dlc_mp_biker_m_special_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_m_phead_15_0"):
					case joaat("dlc_mp_stunt_m_phead_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_1"):
					case joaat("dlc_mp_stunt_m_phead_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_2"):
					case joaat("dlc_mp_stunt_m_phead_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_3"):
					case joaat("dlc_mp_stunt_m_phead_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_4"):
					case joaat("dlc_mp_stunt_m_phead_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_5"):
					case joaat("dlc_mp_stunt_m_phead_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_6"):
					case joaat("dlc_mp_stunt_m_phead_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_7"):
					case joaat("dlc_mp_stunt_m_phead_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_f_phead_15_0"):
					case joaat("dlc_mp_stunt_f_phead_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_1"):
					case joaat("dlc_mp_stunt_f_phead_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_2"):
					case joaat("dlc_mp_stunt_f_phead_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_3"):
					case joaat("dlc_mp_stunt_f_phead_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_4"):
					case joaat("dlc_mp_stunt_f_phead_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_5"):
					case joaat("dlc_mp_stunt_f_phead_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_6"):
					case joaat("dlc_mp_stunt_f_phead_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_7"):
					case joaat("dlc_mp_stunt_f_phead_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_f_phead_15_0"):
					case joaat("dlc_mp_stunt_f_phead_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_1"):
					case joaat("dlc_mp_stunt_f_phead_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_2"):
					case joaat("dlc_mp_stunt_f_phead_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_3"):
					case joaat("dlc_mp_stunt_f_phead_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_4"):
					case joaat("dlc_mp_stunt_f_phead_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_5"):
					case joaat("dlc_mp_stunt_f_phead_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_6"):
					case joaat("dlc_mp_stunt_f_phead_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_7"):
					case joaat("dlc_mp_stunt_f_phead_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4540270)
		{
			iVar0 = unk_0x82ADFEA98A0C26DC(iParam0);
		}
		else
		{
			iVar0 = unk_0x6F4B2AB7CFB2F472(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x82ADFEA98A0C26DC(iParam0);
	}
	else
	{
		iVar0 = unk_0x6F4B2AB7CFB2F472(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2592;
					break;
				
				case 52:
					*uParam2 = 2593;
					break;
				
				case 53:
					*uParam2 = 2594;
					break;
				
				case 54:
					*uParam2 = 2595;
					break;
				
				case 55:
					*uParam2 = 2596;
					break;
				
				case 56:
					*uParam2 = 2597;
					break;
				
				case 57:
					*uParam2 = 2598;
					break;
				
				case 58:
					*uParam2 = 2599;
					break;
				
				case 59:
					*uParam2 = 2600;
					break;
				
				case 60:
					*uParam2 = 2601;
					break;
				
				case 61:
					*uParam2 = 2602;
					break;
				
				case 62:
					*uParam2 = 3199;
					break;
				
				case 63:
					*uParam2 = 3200;
					break;
				
				case 64:
					*uParam2 = 3201;
					break;
				
				case 65:
					*uParam2 = 3202;
					break;
				
				case 66:
					*uParam2 = 3203;
					break;
				
				case 67:
					*uParam2 = 3204;
					break;
				
				case 68:
					*uParam2 = 3672;
					break;
				
				case 69:
					*uParam2 = 3673;
					break;
				
				case 70:
					*uParam2 = 3674;
					break;
				
				case 71:
					*uParam2 = 3675;
					break;
				
				case 72:
					*uParam2 = 3676;
					break;
				
				case 73:
					*uParam2 = 3677;
					break;
				
				case 74:
					*uParam2 = 3678;
					break;
				
				case 75:
					*uParam2 = 3679;
					break;
				
				case 76:
					*uParam2 = 3680;
					break;
				
				case 77:
					*uParam2 = 3681;
					break;
				
				case 78:
					*uParam2 = 3795;
					break;
				
				case 79:
					*uParam2 = 3796;
					break;
				
				case 80:
					*uParam2 = 3797;
					break;
				
				case 81:
					*uParam2 = 3798;
					break;
				
				case 82:
					*uParam2 = 3799;
					break;
				
				case 83:
					*uParam2 = 3800;
					break;
				
				case 84:
					*uParam2 = 3801;
					break;
				
				case 85:
					*uParam2 = 3802;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5340;
					break;
				
				case 90:
					*uParam2 = 5341;
					break;
				
				case 91:
					*uParam2 = 5342;
					break;
				
				case 92:
					*uParam2 = 5343;
					break;
				
				case 93:
					*uParam2 = 5344;
					break;
				
				case 94:
					*uParam2 = 5345;
					break;
				
				case 95:
					*uParam2 = 5346;
					break;
				
				case 96:
					*uParam2 = 5347;
					break;
				
				case 97:
					*uParam2 = 5348;
					break;
				
				case 98:
					*uParam2 = 5349;
					break;
				
				case 99:
					*uParam2 = 5350;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5351;
					break;
				
				case 101:
					*uParam2 = 5397;
					break;
				
				case 102:
					*uParam2 = 5398;
					break;
				
				case 103:
					*uParam2 = 5399;
					break;
				
				case 104:
					*uParam2 = 5400;
					break;
				
				case 105:
					*uParam2 = 5401;
					break;
				
				case 106:
					*uParam2 = 5402;
					break;
				
				case 107:
					*uParam2 = 5403;
					break;
				
				case 108:
					*uParam2 = 5404;
					break;
				
				case 109:
					*uParam2 = 5405;
					break;
				
				case 110:
					*uParam2 = 5406;
					break;
				
				case 111:
					*uParam2 = 5407;
					break;
				
				case 112:
					*uParam2 = 5408;
					break;
				
				case 113:
					*uParam2 = 5409;
					break;
				
				case 114:
					*uParam2 = 5410;
					break;
				
				case 115:
					*uParam2 = 5411;
					break;
				
				case 116:
					*uParam2 = 5412;
					break;
				
				case 117:
					*uParam2 = 5413;
					break;
				
				case 118:
					*uParam2 = 5414;
					break;
				
				case 119:
					*uParam2 = 5415;
					break;
				
				case 120:
					*uParam2 = 5416;
					break;
				
				case 121:
					*uParam2 = 5417;
					break;
				
				case 122:
					*uParam2 = 5418;
					break;
				
				case 123:
					*uParam2 = 5419;
					break;
				
				case 124:
					*uParam2 = 6125;
					break;
				
				case 125:
					*uParam2 = 6126;
					break;
				
				case 126:
					*uParam2 = 6127;
					break;
				
				case 127:
					*uParam2 = 6128;
					break;
				
				case 128:
					*uParam2 = 6129;
					break;
				
				case 129:
					*uParam2 = 6130;
					break;
				
				case 130:
					*uParam2 = 6131;
					break;
				
				case 131:
					*uParam2 = 6132;
					break;
				
				case 132:
					*uParam2 = 6133;
					break;
				
				case 133:
					*uParam2 = 6134;
					break;
				
				case 134:
					*uParam2 = 6135;
					break;
				
				case 135:
					*uParam2 = 6136;
					break;
				
				case 136:
					*uParam2 = 6137;
					break;
				
				case 137:
					*uParam2 = 6138;
					break;
				
				case 138:
					*uParam2 = 6139;
					break;
				
				case 139:
					*uParam2 = 6438;
					break;
				
				case 140:
					*uParam2 = 6439;
					break;
				
				case 141:
					*uParam2 = 6440;
					break;
				
				case 142:
					*uParam2 = 6441;
					break;
				
				case 143:
					*uParam2 = 6442;
					break;
				
				case 144:
					*uParam2 = 6443;
					break;
				
				case 145:
					*uParam2 = 6444;
					break;
				
				case 146:
					*uParam2 = 6445;
					break;
				
				case 147:
					*uParam2 = 6446;
					break;
				
				case 148:
					*uParam2 = 6447;
					break;
				
				case 149:
					*uParam2 = 6448;
					break;
				
				case 150:
					*uParam2 = 6449;
					break;
				
				case 151:
					*uParam2 = 6450;
					break;
				
				case 152:
					*uParam2 = 6451;
					break;
				
				case 153:
					*uParam2 = 6452;
					break;
				
				case 154:
					*uParam2 = 7269;
					break;
				
				case 155:
					*uParam2 = 7270;
					break;
				
				case 156:
					*uParam2 = 7271;
					break;
				
				case 157:
					*uParam2 = 7272;
					break;
				
				case 158:
					*uParam2 = 7273;
					break;
				
				case 159:
					*uParam2 = 7274;
					break;
				
				case 160:
					*uParam2 = 7275;
					break;
				
				case 161:
					*uParam2 = 7882;
					break;
				
				case 162:
					*uParam2 = 7883;
					break;
				
				case 163:
					*uParam2 = 7884;
					break;
				
				case 164:
					*uParam2 = 7885;
					break;
				
				case 165:
					*uParam2 = 7886;
					break;
				
				case 166:
					*uParam2 = 7887;
					break;
				
				case 167:
					*uParam2 = 7888;
					break;
				
				case 168:
					*uParam2 = 7889;
					break;
				
				case 169:
					*uParam2 = 7890;
					break;
				
				case 170:
					*uParam2 = 7891;
					break;
				
				case 171:
					*uParam2 = 7892;
					break;
				
				case 172:
					*uParam2 = 7893;
					break;
				
				case 173:
					*uParam2 = 7894;
					break;
				
				case 174:
					*uParam2 = 7895;
					break;
				
				case 175:
					*uParam2 = 7896;
					break;
				
				case 176:
					*uParam2 = 8302;
					break;
				
				case 177:
					*uParam2 = 8303;
					break;
				
				case 178:
					*uParam2 = 8304;
					break;
				
				case 179:
					*uParam2 = 8305;
					break;
				
				case 180:
					*uParam2 = 8306;
					break;
				
				case 181:
					*uParam2 = 8307;
					break;
				
				case 182:
					*uParam2 = 8308;
					break;
				
				case 183:
					*uParam2 = 8309;
					break;
				
				case 184:
					*uParam2 = 8310;
					break;
				
				case 185:
					*uParam2 = 8311;
					break;
				
				case 186:
					*uParam2 = 8312;
					break;
				
				case 187:
					*uParam2 = 8313;
					break;
				
				case 188:
					*uParam2 = 8314;
					break;
				
				case 189:
					*uParam2 = 8315;
					break;
				
				case 190:
					*uParam2 = 8316;
					break;
				
				case 191:
					*uParam2 = 8317;
					break;
				
				case 192:
					*uParam2 = 8318;
					break;
				
				case 193:
					*uParam2 = 8319;
					break;
				
				case 194:
					*uParam2 = 8320;
					break;
				
				case 195:
					*uParam2 = 8321;
					break;
				
				case 196:
					*uParam2 = 8322;
					break;
				
				case 197:
					*uParam2 = 8323;
					break;
				
				case 198:
					*uParam2 = 8324;
					break;
				
				case 199:
					*uParam2 = 8325;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8326;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9424;
					break;
				
				case 207:
					*uParam2 = 9425;
					break;
				
				case 208:
					*uParam2 = 9426;
					break;
				
				case 209:
					*uParam2 = 9427;
					break;
				
				case 210:
					*uParam2 = 9428;
					break;
				
				case 211:
					*uParam2 = 9429;
					break;
				
				case 212:
					*uParam2 = 9430;
					break;
				
				case 213:
					*uParam2 = 9431;
					break;
				
				case 214:
					*uParam2 = 9432;
					break;
				
				case 215:
					*uParam2 = 9433;
					break;
				
				case 216:
					*uParam2 = 9434;
					break;
				
				case 217:
					*uParam2 = 9435;
					break;
				
				case 218:
					*uParam2 = 9436;
					break;
				
				case 219:
					*uParam2 = 9437;
					break;
				
				case 220:
					*uParam2 = 9438;
					break;
				
				case 221:
					*uParam2 = 9439;
					break;
				
				case 222:
					*uParam2 = 9440;
					break;
				
				case 223:
					*uParam2 = 9441;
					break;
				
				case 224:
					*uParam2 = 9442;
					break;
				
				case 225:
					*uParam2 = 9443;
					break;
				
				case 226:
					*uParam2 = 9444;
					break;
				
				case 227:
					*uParam2 = 9445;
					break;
				
				case 228:
					*uParam2 = 9446;
					break;
				
				case 229:
					*uParam2 = 9447;
					break;
				
				case 230:
					*uParam2 = 9448;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10304;
					break;
				
				case 232:
					*uParam2 = 10305;
					break;
				
				case 233:
					*uParam2 = 10306;
					break;
				
				case 234:
					*uParam2 = 10307;
					break;
				
				case 235:
					*uParam2 = 10308;
					break;
				
				case 236:
					*uParam2 = 10309;
					break;
				
				case 237:
					*uParam2 = 10310;
					break;
				
				case 238:
					*uParam2 = 10311;
					break;
				
				case 239:
					*uParam2 = 10312;
					break;
				
				case 240:
					*uParam2 = 10313;
					break;
				
				case 241:
					*uParam2 = 10314;
					break;
				
				case 242:
					*uParam2 = 10315;
					break;
				
				case 243:
					*uParam2 = 10316;
					break;
				
				case 244:
					*uParam2 = 10317;
					break;
				
				case 245:
					*uParam2 = 10318;
					break;
				
				case 246:
					*uParam2 = 10319;
					break;
				
				case 247:
					*uParam2 = 10320;
					break;
				
				case 248:
					*uParam2 = 10321;
					break;
				
				case 249:
					*uParam2 = 10322;
					break;
				
				case 250:
					*uParam2 = 10323;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10420;
					break;
				
				case 252:
					*uParam2 = 10421;
					break;
				
				case 253:
					*uParam2 = 10422;
					break;
				
				case 254:
					*uParam2 = 10423;
					break;
				
				case 255:
					*uParam2 = 10424;
					break;
				
				case 256:
					*uParam2 = 10425;
					break;
				
				case 257:
					*uParam2 = 10426;
					break;
				
				case 258:
					*uParam2 = 10427;
					break;
				
				case 259:
					*uParam2 = 10428;
					break;
				
				case 260:
					*uParam2 = 10429;
					break;
				
				case 261:
					*uParam2 = 11847;
					break;
				
				case 262:
					*uParam2 = 11848;
					break;
				
				case 263:
					*uParam2 = 11849;
					break;
				
				case 264:
					*uParam2 = 11850;
					break;
				
				case 265:
					*uParam2 = 11851;
					break;
				
				case 266:
					*uParam2 = 11852;
					break;
				
				case 267:
					*uParam2 = 11853;
					break;
				
				case 268:
					*uParam2 = 11854;
					break;
				
				case 269:
					*uParam2 = 11855;
					break;
				
				case 270:
					*uParam2 = 11856;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11878;
					break;
				
				case 272:
					*uParam2 = 11879;
					break;
				
				case 273:
					*uParam2 = 11880;
					break;
				
				case 274:
					*uParam2 = 11881;
					break;
				
				case 275:
					*uParam2 = 11882;
					break;
				
				case 276:
					*uParam2 = 11883;
					break;
				
				case 277:
					*uParam2 = 11884;
					break;
				
				case 278:
					*uParam2 = 11885;
					break;
				
				case 279:
					*uParam2 = 11886;
					break;
				
				case 280:
					*uParam2 = 11887;
					break;
				
				case 281:
					*uParam2 = 11888;
					break;
				
				case 282:
					*uParam2 = 11889;
					break;
				
				case 283:
					*uParam2 = 11976;
					break;
				
				case 284:
					*uParam2 = 11977;
					break;
				
				case 285:
					*uParam2 = 11978;
					break;
				
				case 286:
					*uParam2 = 11979;
					break;
				
				case 287:
					*uParam2 = 11980;
					break;
				
				case 288:
					*uParam2 = 11981;
					break;
				
				case 289:
					*uParam2 = 11982;
					break;
				
				case 290:
					*uParam2 = 11983;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11984;
					break;
				
				case 292:
					*uParam2 = 11985;
					break;
				
				case 293:
					*uParam2 = 11986;
					break;
				
				case 294:
					*uParam2 = 11987;
					break;
				
				case 295:
					*uParam2 = 11988;
					break;
				
				case 296:
					*uParam2 = 11989;
					break;
				
				case 297:
					*uParam2 = 11990;
					break;
				
				case 298:
					*uParam2 = 12190;
					break;
				
				case 299:
					*uParam2 = 12191;
					break;
				
				case 300:
					*uParam2 = 12192;
					break;
				
				case 301:
					*uParam2 = 12193;
					break;
				
				case 302:
					*uParam2 = 12194;
					break;
				
				case 303:
					*uParam2 = 12195;
					break;
				
				case 304:
					*uParam2 = 12196;
					break;
				
				case 305:
					*uParam2 = 12197;
					break;
				
				case 306:
					*uParam2 = 12332;
					break;
				
				case 307:
					*uParam2 = 12333;
					break;
				
				case 308:
					*uParam2 = 12334;
					break;
				
				case 309:
					*uParam2 = 12335;
					break;
				
				case 310:
					*uParam2 = 12336;
					break;
			}
			break;
		
		case 2:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2603;
					break;
				
				case 52:
					*uParam2 = 2604;
					break;
				
				case 53:
					*uParam2 = 2605;
					break;
				
				case 54:
					*uParam2 = 2606;
					break;
				
				case 55:
					*uParam2 = 2607;
					break;
				
				case 56:
					*uParam2 = 2608;
					break;
				
				case 57:
					*uParam2 = 2609;
					break;
				
				case 58:
					*uParam2 = 2610;
					break;
				
				case 59:
					*uParam2 = 2611;
					break;
				
				case 60:
					*uParam2 = 2612;
					break;
				
				case 61:
					*uParam2 = 2613;
					break;
				
				case 62:
					*uParam2 = 3205;
					break;
				
				case 63:
					*uParam2 = 3206;
					break;
				
				case 64:
					*uParam2 = 3207;
					break;
				
				case 65:
					*uParam2 = 3208;
					break;
				
				case 66:
					*uParam2 = 3209;
					break;
				
				case 67:
					*uParam2 = 3210;
					break;
				
				case 68:
					*uParam2 = 3682;
					break;
				
				case 69:
					*uParam2 = 3683;
					break;
				
				case 70:
					*uParam2 = 3684;
					break;
				
				case 71:
					*uParam2 = 3685;
					break;
				
				case 72:
					*uParam2 = 3686;
					break;
				
				case 73:
					*uParam2 = 3687;
					break;
				
				case 74:
					*uParam2 = 3688;
					break;
				
				case 75:
					*uParam2 = 3689;
					break;
				
				case 76:
					*uParam2 = 3690;
					break;
				
				case 77:
					*uParam2 = 3691;
					break;
				
				case 78:
					*uParam2 = 3803;
					break;
				
				case 79:
					*uParam2 = 3804;
					break;
				
				case 80:
					*uParam2 = 3805;
					break;
				
				case 81:
					*uParam2 = 3806;
					break;
				
				case 82:
					*uParam2 = 3807;
					break;
				
				case 83:
					*uParam2 = 3808;
					break;
				
				case 84:
					*uParam2 = 3809;
					break;
				
				case 85:
					*uParam2 = 3810;
					break;
				
				case 86:
					*uParam2 = 3908;
					break;
				
				case 87:
					*uParam2 = 3909;
					break;
				
				case 88:
					*uParam2 = 3910;
					break;
				
				case 89:
					*uParam2 = 5352;
					break;
				
				case 90:
					*uParam2 = 5353;
					break;
				
				case 91:
					*uParam2 = 5354;
					break;
				
				case 92:
					*uParam2 = 5355;
					break;
				
				case 93:
					*uParam2 = 5356;
					break;
				
				case 94:
					*uParam2 = 5357;
					break;
				
				case 95:
					*uParam2 = 5358;
					break;
				
				case 96:
					*uParam2 = 5359;
					break;
				
				case 97:
					*uParam2 = 5360;
					break;
				
				case 98:
					*uParam2 = 5361;
					break;
				
				case 99:
					*uParam2 = 5362;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5363;
					break;
				
				case 101:
					*uParam2 = 5420;
					break;
				
				case 102:
					*uParam2 = 5421;
					break;
				
				case 103:
					*uParam2 = 5422;
					break;
				
				case 104:
					*uParam2 = 5423;
					break;
				
				case 105:
					*uParam2 = 5424;
					break;
				
				case 106:
					*uParam2 = 5425;
					break;
				
				case 107:
					*uParam2 = 5426;
					break;
				
				case 108:
					*uParam2 = 5427;
					break;
				
				case 109:
					*uParam2 = 5428;
					break;
				
				case 110:
					*uParam2 = 5429;
					break;
				
				case 111:
					*uParam2 = 5430;
					break;
				
				case 112:
					*uParam2 = 5431;
					break;
				
				case 113:
					*uParam2 = 5432;
					break;
				
				case 114:
					*uParam2 = 5433;
					break;
				
				case 115:
					*uParam2 = 5434;
					break;
				
				case 116:
					*uParam2 = 5435;
					break;
				
				case 117:
					*uParam2 = 5436;
					break;
				
				case 118:
					*uParam2 = 5437;
					break;
				
				case 119:
					*uParam2 = 5438;
					break;
				
				case 120:
					*uParam2 = 5439;
					break;
				
				case 121:
					*uParam2 = 5440;
					break;
				
				case 122:
					*uParam2 = 5441;
					break;
				
				case 123:
					*uParam2 = 5442;
					break;
				
				case 124:
					*uParam2 = 6140;
					break;
				
				case 125:
					*uParam2 = 6141;
					break;
				
				case 126:
					*uParam2 = 6142;
					break;
				
				case 127:
					*uParam2 = 6143;
					break;
				
				case 128:
					*uParam2 = 6144;
					break;
				
				case 129:
					*uParam2 = 6145;
					break;
				
				case 130:
					*uParam2 = 6146;
					break;
				
				case 131:
					*uParam2 = 6147;
					break;
				
				case 132:
					*uParam2 = 6148;
					break;
				
				case 133:
					*uParam2 = 6149;
					break;
				
				case 134:
					*uParam2 = 6150;
					break;
				
				case 135:
					*uParam2 = 6151;
					break;
				
				case 136:
					*uParam2 = 6152;
					break;
				
				case 137:
					*uParam2 = 6153;
					break;
				
				case 138:
					*uParam2 = 6154;
					break;
				
				case 139:
					*uParam2 = 6453;
					break;
				
				case 140:
					*uParam2 = 6454;
					break;
				
				case 141:
					*uParam2 = 6455;
					break;
				
				case 142:
					*uParam2 = 6456;
					break;
				
				case 143:
					*uParam2 = 6457;
					break;
				
				case 144:
					*uParam2 = 6458;
					break;
				
				case 145:
					*uParam2 = 6459;
					break;
				
				case 146:
					*uParam2 = 6460;
					break;
				
				case 147:
					*uParam2 = 6461;
					break;
				
				case 148:
					*uParam2 = 6462;
					break;
				
				case 149:
					*uParam2 = 6463;
					break;
				
				case 150:
					*uParam2 = 6464;
					break;
				
				case 151:
					*uParam2 = 6465;
					break;
				
				case 152:
					*uParam2 = 6466;
					break;
				
				case 153:
					*uParam2 = 6467;
					break;
				
				case 154:
					*uParam2 = 7276;
					break;
				
				case 155:
					*uParam2 = 7277;
					break;
				
				case 156:
					*uParam2 = 7278;
					break;
				
				case 157:
					*uParam2 = 7279;
					break;
				
				case 158:
					*uParam2 = 7280;
					break;
				
				case 159:
					*uParam2 = 7281;
					break;
				
				case 160:
					*uParam2 = 7282;
					break;
				
				case 161:
					*uParam2 = 7897;
					break;
				
				case 162:
					*uParam2 = 7898;
					break;
				
				case 163:
					*uParam2 = 7899;
					break;
				
				case 164:
					*uParam2 = 7900;
					break;
				
				case 165:
					*uParam2 = 7901;
					break;
				
				case 166:
					*uParam2 = 7902;
					break;
				
				case 167:
					*uParam2 = 7903;
					break;
				
				case 168:
					*uParam2 = 7904;
					break;
				
				case 169:
					*uParam2 = 7905;
					break;
				
				case 170:
					*uParam2 = 7906;
					break;
				
				case 171:
					*uParam2 = 7907;
					break;
				
				case 172:
					*uParam2 = 7908;
					break;
				
				case 173:
					*uParam2 = 7909;
					break;
				
				case 174:
					*uParam2 = 7910;
					break;
				
				case 175:
					*uParam2 = 7911;
					break;
				
				case 176:
					*uParam2 = 8327;
					break;
				
				case 177:
					*uParam2 = 8328;
					break;
				
				case 178:
					*uParam2 = 8329;
					break;
				
				case 179:
					*uParam2 = 8330;
					break;
				
				case 180:
					*uParam2 = 8331;
					break;
				
				case 181:
					*uParam2 = 8332;
					break;
				
				case 182:
					*uParam2 = 8333;
					break;
				
				case 183:
					*uParam2 = 8334;
					break;
				
				case 184:
					*uParam2 = 8335;
					break;
				
				case 185:
					*uParam2 = 8336;
					break;
				
				case 186:
					*uParam2 = 8337;
					break;
				
				case 187:
					*uParam2 = 8338;
					break;
				
				case 188:
					*uParam2 = 8339;
					break;
				
				case 189:
					*uParam2 = 8340;
					break;
				
				case 190:
					*uParam2 = 8341;
					break;
				
				case 191:
					*uParam2 = 8342;
					break;
				
				case 192:
					*uParam2 = 8343;
					break;
				
				case 193:
					*uParam2 = 8344;
					break;
				
				case 194:
					*uParam2 = 8345;
					break;
				
				case 195:
					*uParam2 = 8346;
					break;
				
				case 196:
					*uParam2 = 8347;
					break;
				
				case 197:
					*uParam2 = 8348;
					break;
				
				case 198:
					*uParam2 = 8349;
					break;
				
				case 199:
					*uParam2 = 8350;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8351;
					break;
				
				case 201:
					*uParam2 = 8946;
					break;
				
				case 202:
					*uParam2 = 8947;
					break;
				
				case 203:
					*uParam2 = 8948;
					break;
				
				case 204:
					*uParam2 = 8949;
					break;
				
				case 205:
					*uParam2 = 8950;
					break;
				
				case 206:
					*uParam2 = 9449;
					break;
				
				case 207:
					*uParam2 = 9450;
					break;
				
				case 208:
					*uParam2 = 9451;
					break;
				
				case 209:
					*uParam2 = 9452;
					break;
				
				case 210:
					*uParam2 = 9453;
					break;
				
				case 211:
					*uParam2 = 9454;
					break;
				
				case 212:
					*uParam2 = 9455;
					break;
				
				case 213:
					*uParam2 = 9456;
					break;
				
				case 214:
					*uParam2 = 9457;
					break;
				
				case 215:
					*uParam2 = 9458;
					break;
				
				case 216:
					*uParam2 = 9459;
					break;
				
				case 217:
					*uParam2 = 9460;
					break;
				
				case 218:
					*uParam2 = 9461;
					break;
				
				case 219:
					*uParam2 = 9462;
					break;
				
				case 220:
					*uParam2 = 9463;
					break;
				
				case 221:
					*uParam2 = 9464;
					break;
				
				case 222:
					*uParam2 = 9465;
					break;
				
				case 223:
					*uParam2 = 9466;
					break;
				
				case 224:
					*uParam2 = 9467;
					break;
				
				case 225:
					*uParam2 = 9468;
					break;
				
				case 226:
					*uParam2 = 9469;
					break;
				
				case 227:
					*uParam2 = 9470;
					break;
				
				case 228:
					*uParam2 = 9471;
					break;
				
				case 229:
					*uParam2 = 9472;
					break;
				
				case 230:
					*uParam2 = 9473;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10324;
					break;
				
				case 232:
					*uParam2 = 10325;
					break;
				
				case 233:
					*uParam2 = 10326;
					break;
				
				case 234:
					*uParam2 = 10327;
					break;
				
				case 235:
					*uParam2 = 10328;
					break;
				
				case 236:
					*uParam2 = 10329;
					break;
				
				case 237:
					*uParam2 = 10330;
					break;
				
				case 238:
					*uParam2 = 10331;
					break;
				
				case 239:
					*uParam2 = 10332;
					break;
				
				case 240:
					*uParam2 = 10333;
					break;
				
				case 241:
					*uParam2 = 10334;
					break;
				
				case 242:
					*uParam2 = 10335;
					break;
				
				case 243:
					*uParam2 = 10336;
					break;
				
				case 244:
					*uParam2 = 10337;
					break;
				
				case 245:
					*uParam2 = 10338;
					break;
				
				case 246:
					*uParam2 = 10339;
					break;
				
				case 247:
					*uParam2 = 10340;
					break;
				
				case 248:
					*uParam2 = 10341;
					break;
				
				case 249:
					*uParam2 = 10342;
					break;
				
				case 250:
					*uParam2 = 10343;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10430;
					break;
				
				case 252:
					*uParam2 = 10431;
					break;
				
				case 253:
					*uParam2 = 10432;
					break;
				
				case 254:
					*uParam2 = 10433;
					break;
				
				case 255:
					*uParam2 = 10434;
					break;
				
				case 256:
					*uParam2 = 10435;
					break;
				
				case 257:
					*uParam2 = 10436;
					break;
				
				case 258:
					*uParam2 = 10437;
					break;
				
				case 259:
					*uParam2 = 10438;
					break;
				
				case 260:
					*uParam2 = 10439;
					break;
				
				case 261:
					*uParam2 = 11857;
					break;
				
				case 262:
					*uParam2 = 11858;
					break;
				
				case 263:
					*uParam2 = 11859;
					break;
				
				case 264:
					*uParam2 = 11860;
					break;
				
				case 265:
					*uParam2 = 11861;
					break;
				
				case 266:
					*uParam2 = 11862;
					break;
				
				case 267:
					*uParam2 = 11863;
					break;
				
				case 268:
					*uParam2 = 11864;
					break;
				
				case 269:
					*uParam2 = 11865;
					break;
				
				case 270:
					*uParam2 = 11866;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11890;
					break;
				
				case 272:
					*uParam2 = 11891;
					break;
				
				case 273:
					*uParam2 = 11892;
					break;
				
				case 274:
					*uParam2 = 11893;
					break;
				
				case 275:
					*uParam2 = 11894;
					break;
				
				case 276:
					*uParam2 = 11895;
					break;
				
				case 277:
					*uParam2 = 11896;
					break;
				
				case 278:
					*uParam2 = 11897;
					break;
				
				case 279:
					*uParam2 = 11898;
					break;
				
				case 280:
					*uParam2 = 11899;
					break;
				
				case 281:
					*uParam2 = 11900;
					break;
				
				case 282:
					*uParam2 = 11901;
					break;
				
				case 283:
					*uParam2 = 11991;
					break;
				
				case 284:
					*uParam2 = 11992;
					break;
				
				case 285:
					*uParam2 = 11993;
					break;
				
				case 286:
					*uParam2 = 11994;
					break;
				
				case 287:
					*uParam2 = 11995;
					break;
				
				case 288:
					*uParam2 = 11996;
					break;
				
				case 289:
					*uParam2 = 11997;
					break;
				
				case 290:
					*uParam2 = 11998;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11999;
					break;
				
				case 292:
					*uParam2 = 12000;
					break;
				
				case 293:
					*uParam2 = 12001;
					break;
				
				case 294:
					*uParam2 = 12002;
					break;
				
				case 295:
					*uParam2 = 12003;
					break;
				
				case 296:
					*uParam2 = 12004;
					break;
				
				case 297:
					*uParam2 = 12005;
					break;
				
				case 298:
					*uParam2 = 12198;
					break;
				
				case 299:
					*uParam2 = 12199;
					break;
				
				case 300:
					*uParam2 = 12200;
					break;
				
				case 301:
					*uParam2 = 12201;
					break;
				
				case 302:
					*uParam2 = 12202;
					break;
				
				case 303:
					*uParam2 = 12203;
					break;
				
				case 304:
					*uParam2 = 12204;
					break;
				
				case 305:
					*uParam2 = 12205;
					break;
				
				case 306:
					*uParam2 = 12337;
					break;
				
				case 307:
					*uParam2 = 12338;
					break;
				
				case 308:
					*uParam2 = 12339;
					break;
				
				case 309:
					*uParam2 = 12340;
					break;
				
				case 310:
					*uParam2 = 12341;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 14835;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<10> Var9;
	int iVar10;
	int iVar11;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_79172[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = unk_0xF2DDA7CE028AB9CB(uVar1, 0);
			if (iVar4 > iVar3)
			{
				unk_0x808A8ABE207631DF(iVar3, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2.f_0;
				func_119(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_119(&(Global_79172[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x7A491C9A90975007(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = unk_0x7B6C0A0D604E68FA(iVar1, 10, -1, 1, -1, -1);
			if (iVar8 > iVar7)
			{
				unk_0x2DBB2D25D50A5392(iVar7, &Var5);
				if (Var5.f_6 == 0)
				{
					iVar6 = 9;
				}
				else if (Var5.f_6 == 1)
				{
					iVar6 = 10;
				}
				else if (Var5.f_6 == 2)
				{
					iVar6 = 2;
				}
				else if (Var5.f_6 == 3)
				{
					iVar6 = 3;
				}
				else if (Var5.f_6 == 4)
				{
					iVar6 = 4;
				}
				else if (Var5.f_6 == 5)
				{
					iVar6 = 5;
				}
				else if (Var5.f_6 == 6)
				{
					iVar6 = 6;
				}
				else if (Var5.f_6 == 7)
				{
					iVar6 = 7;
				}
				else if (Var5.f_6 == 8)
				{
					iVar6 = 8;
				}
				else
				{
					iVar6 = -1;
				}
				Global_2883588 = Var5.f_1;
				Global_2883589 = Var5.f_0;
				func_119(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, unk_0x304A39EB177D246B(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0x15D20F88F06530A5(&Var9);
		if (iParam3 != -1 && Global_79370)
		{
			unk_0xA5690D702773BED4(iParam3, &Var9);
			Global_2883588 = Var9.f_1;
			Global_2883589 = Var9.f_0;
			func_119(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x304A39EB177D246B(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = unk_0x7B6C0A0D604E68FA(iVar1, 10, -1, 0, -1, func_110(iParam0));
			if (iVar11 > iVar10)
			{
				unk_0xD36906FE7BBBDB62(iVar10, &Var9);
				Global_2883588 = Var9.f_1;
				Global_2883589 = Var9.f_0;
				func_119(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x304A39EB177D246B(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

void func_128(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_127(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_129(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_130(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_131(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_132(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_133(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_127(iVar7, iParam0, 33, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_134(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_127(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_135(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_127(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_136(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_127(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_137(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_127(iVar7, iParam0, 84, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_138(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_127(iVar7, iParam0, 104, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_139(int iParam0)
{
	if (iParam0 < 136)
	{
		func_141(iParam0);
	}
	else
	{
		func_140(iParam0);
	}
	if (Global_79172[0 /*14*/].f_2 == -1)
	{
		func_127(3, iParam0, 242, -1);
	}
}

void func_140(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_141(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_142(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_143(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_79172[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_127(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_144(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_162(iParam1);
			break;
		
		case 2:
			func_161(iParam1);
			break;
		
		case 3:
			func_157(iParam1);
			break;
		
		case 4:
			func_156(iParam1);
			break;
		
		case 6:
			func_155(iParam1);
			break;
		
		case 5:
			func_154(iParam1);
			break;
		
		case 8:
			func_153(iParam1);
			break;
		
		case 9:
			func_152(iParam1);
			break;
		
		case 10:
			func_151(iParam1);
			break;
		
		case 1:
			func_150(iParam1);
			break;
		
		case 7:
			func_149(iParam1);
			break;
		
		case 11:
			func_148(iParam1);
			break;
		
		case 12:
			func_147(iParam1);
			break;
		
		case 13:
			func_146(iParam1);
			break;
		
		case 14:
			func_145(iParam1);
			break;
	}
}

void func_145(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_146(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_147(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_148(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_127(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_149(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_150(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_151(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_152(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_153(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_154(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_127(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_155(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_127(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_156(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_127(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_157(int iParam0)
{
	if (iParam0 < 107)
	{
		func_160(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_159(iParam0);
	}
	else
	{
		func_158(iParam0);
	}
	if (Global_79172[0 /*14*/].f_2 == -1)
	{
		func_127(3, iParam0, 318, -1);
	}
}

void func_158(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_159(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_160(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_161(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_127(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_162(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_79172[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_127(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_163(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_180(iParam1);
			break;
		
		case 2:
			func_179(iParam1);
			break;
		
		case 3:
			func_176(iParam1);
			break;
		
		case 4:
			func_175(iParam1);
			break;
		
		case 6:
			func_174(iParam1);
			break;
		
		case 5:
			func_173(iParam1);
			break;
		
		case 8:
			func_172(iParam1);
			break;
		
		case 9:
			func_171(iParam1);
			break;
		
		case 10:
			func_170(iParam1);
			break;
		
		case 1:
			func_169(iParam1);
			break;
		
		case 7:
			func_168(iParam1);
			break;
		
		case 11:
			func_167(iParam1);
			break;
		
		case 12:
			func_166(iParam1);
			break;
		
		case 13:
			func_165(iParam1);
			break;
		
		case 14:
			func_164(iParam1);
			break;
	}
}

void func_164(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_127(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_165(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_127(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_166(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_167(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_168(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_169(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_170(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_127(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_171(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_127(iVar7, iParam0, 20, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_172(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_127(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_173(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_127(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_174(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_127(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_175(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_176(int iParam0)
{
	if (iParam0 < 60)
	{
		func_178(iParam0);
	}
	else
	{
		func_177(iParam0);
	}
	if (Global_79172[0 /*14*/].f_2 == -1)
	{
		func_127(3, iParam0, 181, -1);
	}
}

void func_177(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_178(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_179(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_127(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_180(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_79172[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_127(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_119(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_181()
{
	Global_79172[0 /*14*/].f_1 = -1;
	Global_79172[0 /*14*/].f_2 = -1;
	Global_79172[0 /*14*/].f_5 = -1;
	Global_79172[0 /*14*/].f_3 = -1;
	Global_79172[0 /*14*/].f_4 = -1;
	Global_79172[0 /*14*/].f_7 = 0;
	Global_79172[0 /*14*/].f_6 = 0;
	Global_79172[0 /*14*/].f_13 = -1;
	Global_79172[0 /*14*/].f_12 = 0;
	Global_79172[0 /*14*/] = 0;
	StringCopy(&(Global_79172[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_182(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_115(iParam0);
		Global_113969.f_2366.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_113969.f_2366.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_110(iParam3);
	iVar1 = unk_0x1A4EFE92822E3123(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + unk_0x8401C77F508D70FD(iParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_185(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_31(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_189(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_188(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_11(bVar0))
		{
			uParam1->f_59 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113969.f_2366.f_539[bVar0 /*65*/].f_64;
		}
		else if (unk_0x76CD105BCAC6EB9F() && unk_0x4B423FAA24E8ABF0(iParam0) == unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			if (func_186(161, iParam3))
			{
				uParam1->f_59 = func_40(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_40(753, iParam3);
			}
			uParam1->f_60 = func_40(754, iParam3);
			uParam1->f_61 = func_40(755, iParam3);
		}
		if (unk_0x76CD105BCAC6EB9F() && iParam0 == unk_0x4A8C381C258A124D())
		{
			if (func_186(161, iParam3))
			{
				uParam1->f_59 = func_40(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_40(753, iParam3);
			}
		}
	}
}

int func_186(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_187(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_187(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_38(uParam1));
}

void func_188(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_31(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xB204F40D393426B6(iParam0, iParam1, 1);
		*uParam3 = unk_0x0DC23FA727759F9F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x6DBAC05AFA907A23(iParam0) && unk_0xB34A70D5AC13FB8C(iParam0) != -1)
				{
					*uParam2 = unk_0xB34A70D5AC13FB8C(iParam0);
					*uParam3 = unk_0xAA6E5BB6733B4BB0(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_189(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_31(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xC0120BBCC298EA2F(iParam0, iParam1);
		*uParam3 = unk_0xD6AED6BFCC58AF7F(iParam0, iParam1);
		*uParam4 = unk_0xDAF263B0E792EAEC(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

void func_190(int iParam0, int iParam1, int iParam2)
{
	if (func_935() && func_192())
	{
		while (Global_101528 != 6)
		{
			system::wait(0);
		}
		unk_0x98E393364463951A(0);
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x5EF96FB2D3902DC7(unk_0x4A8C381C258A124D());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xFC8BFE4B41177C22(iParam0))
				{
					if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
					{
						if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam0, 0))
						{
							unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iParam0, iParam1);
							unk_0xD815D4BD1AE9E85A(0f, 1065353216);
							unk_0x64BB72494B9DF6DC(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			}
		}
		unk_0x7919995BD2B8745C();
		func_191(0);
	}
}

void func_191(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 13);
	}
}

var func_192()
{
	return BitTest(Global_101533.f_20, 13);
}

int func_193(struct<3> Param0, float fParam1, bool bParam2)
{
	if (!unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
	{
		func_281(1, 1);
		if (func_279(1, 1))
		{
			if (bParam2)
			{
				return 1;
			}
			else if (func_194(&iLocal_400, 1, Param0, fParam1, 1, 1))
			{
				unk_0xBDE75E2FCBF91A6C(iLocal_400, 0, 0);
				unk_0xBDE75E2FCBF91A6C(iLocal_400, 1, 0);
				unk_0xDD38B2935A3EAC56(iLocal_400, 0, 0);
				unk_0xD05AF216D970F274(iLocal_400, 1);
				unk_0x5FE0938FDE9B0958(iLocal_400, 1);
				unk_0x27EC3EC3B245C5CC(iLocal_400, 1);
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_194(int iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_11(bParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_278(bParam1, &Var2, iParam5);
		if (Var2.f_0 == 0)
		{
			return 1;
		}
		if (unk_0xFC8BFE4B41177C22(*iParam0))
		{
			if (unk_0x4B423FAA24E8ABF0(*iParam0) != Var2.f_0)
			{
			}
			return 1;
		}
		if ((bParam1 == 0 && !Global_113969.f_2366.f_539.f_4316) && Global_113969.f_9088.f_99.f_58[131])
		{
			Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/] = 0;
		}
		if (Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/] == Var2.f_0)
		{
			unk_0xEC9DAA34BBB4658C(Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/]);
			if (unk_0x6252BC0DD8A320DB(Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/]))
			{
				*iParam0 = unk_0x5779387E956077A6(Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/], Param2, fParam3, 0, 0, 0);
				unk_0x1DE99C193C7EC64B(*iParam0, 1084227584);
				unk_0x9BC299A7D57D7CAA(*iParam0, 0);
				unk_0xC13B5C4CC421EA79(*iParam0, 0);
				unk_0x5FE0938FDE9B0958(*iParam0, 1);
				unk_0xD25E9BDC14A0B649(*iParam0, 1250, 0, 0);
				unk_0x2AEBE39F6BF7D6BC(*iParam0, 1250f);
				unk_0xDF9DC0584881B7AF(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0xD133EF7430EDCD09(*iParam0, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_5, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_6);
				unk_0xBB361D7264AC4FD8(*iParam0, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_7, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_8);
				unk_0x9452FE4900245259(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					unk_0xD772F6AA66750D2B(*iParam0, iVar3 + 1, !Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_24)
				{
					unk_0xAB2F41AC28DDBAAE(*iParam0, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_24);
				}
				if (func_277(&uVar1, &uVar0))
				{
					unk_0x3FEAE59CDE6D3946(*iParam0, &uVar1);
					unk_0x05D3F682DDA06C20(*iParam0, uVar0);
				}
				else
				{
					unk_0x3FEAE59CDE6D3946(*iParam0, &(Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_27));
					if (Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26 >= 0 && Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26 < unk_0x20DE4C1439E0FC92())
					{
						unk_0x05D3F682DDA06C20(*iParam0, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26);
					}
				}
				unk_0x5DA0536AEAD1FF31(*iParam0, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_84, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_85, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_86);
				unk_0x439C904840715871(*iParam0, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_88);
				unk_0xFE620ED8E0A3C209(*iParam0, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_87);
				unk_0xEAB8A43F6621850F(*iParam0, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_93, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_94, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_95);
				unk_0xE62930EC6FAABCA5(*iParam0, 2, BitTest(Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 28));
				unk_0xE62930EC6FAABCA5(*iParam0, 3, BitTest(Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 29));
				unk_0xE62930EC6FAABCA5(*iParam0, 0, BitTest(Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 30));
				unk_0xE62930EC6FAABCA5(*iParam0, 1, BitTest(Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 31));
				if (unk_0xBA3ECE95D3094B0F(*iParam0) > 1 && Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_89 >= 0)
				{
					unk_0xA1C03303EC67320B(*iParam0, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_89);
				}
				if (Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(*iParam0)))
					{
						if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(*iParam0)))
						{
							if (Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90 == 6)
							{
								unk_0xE33678A9AE50A01B(*iParam0, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE33678A9AE50A01B(*iParam0, Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90);
						}
					}
				}
				func_270(iParam0, &(Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_31), &(Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_81));
				unk_0x4DC7FAAC148F9B2F(*iParam0, Var2.f_96);
				if (bParam1 == 2)
				{
					if (unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("bodhi2"))
					{
						func_268(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x55098D9E9AD58806(Global_113969.f_2366.f_539.f_2407[0 /*295*/][bParam1 /*98*/]);
				}
				func_267(*iParam0, bParam1);
				return 1;
			}
		}
		else if (Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/] == Var2.f_0)
		{
			unk_0xEC9DAA34BBB4658C(Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/]);
			if (unk_0x6252BC0DD8A320DB(Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/]))
			{
				*iParam0 = unk_0x5779387E956077A6(Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/], Param2, fParam3, 0, 0, 0);
				unk_0x1DE99C193C7EC64B(*iParam0, 1084227584);
				unk_0x9BC299A7D57D7CAA(*iParam0, 0);
				unk_0xC13B5C4CC421EA79(*iParam0, 0);
				unk_0x5FE0938FDE9B0958(*iParam0, 1);
				unk_0xD25E9BDC14A0B649(*iParam0, 1250, 0, 0);
				unk_0x2AEBE39F6BF7D6BC(*iParam0, 1250f);
				unk_0xDF9DC0584881B7AF(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0xD133EF7430EDCD09(*iParam0, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_5, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_6);
				unk_0xBB361D7264AC4FD8(*iParam0, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_7, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_8);
				unk_0x9452FE4900245259(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					unk_0xD772F6AA66750D2B(*iParam0, iVar4 + 1, !Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_24)
				{
					unk_0xAB2F41AC28DDBAAE(*iParam0, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_24);
				}
				if (func_277(&uVar1, &uVar0))
				{
					unk_0x3FEAE59CDE6D3946(*iParam0, &uVar1);
					unk_0x05D3F682DDA06C20(*iParam0, uVar0);
				}
				else
				{
					unk_0x3FEAE59CDE6D3946(*iParam0, &(Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_27));
					if (Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26 >= 0 && Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26 < unk_0x20DE4C1439E0FC92())
					{
						unk_0x05D3F682DDA06C20(*iParam0, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26);
					}
				}
				unk_0x5DA0536AEAD1FF31(*iParam0, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_84, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_85, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_86);
				unk_0x439C904840715871(*iParam0, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_88);
				unk_0xFE620ED8E0A3C209(*iParam0, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_87);
				unk_0xEAB8A43F6621850F(*iParam0, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_93, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_94, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_95);
				unk_0xE62930EC6FAABCA5(*iParam0, 2, BitTest(Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 28));
				unk_0xE62930EC6FAABCA5(*iParam0, 3, BitTest(Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 29));
				unk_0xE62930EC6FAABCA5(*iParam0, 0, BitTest(Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 30));
				unk_0xE62930EC6FAABCA5(*iParam0, 1, BitTest(Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 31));
				if (unk_0xBA3ECE95D3094B0F(*iParam0) > 1 && Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_89 >= 0)
				{
					unk_0xA1C03303EC67320B(*iParam0, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_89);
				}
				if (Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(*iParam0)))
					{
						if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(*iParam0)))
						{
							if (Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90 == 6)
							{
								unk_0xE33678A9AE50A01B(*iParam0, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE33678A9AE50A01B(*iParam0, Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90);
						}
					}
				}
				func_270(iParam0, &(Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_31), &(Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_81));
				unk_0x4DC7FAAC148F9B2F(*iParam0, Var2.f_96);
				if (bParam1 == 2)
				{
					if (unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("bodhi2"))
					{
						func_268(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x55098D9E9AD58806(Global_113969.f_2366.f_539.f_2407[1 /*295*/][bParam1 /*98*/]);
				}
				func_267(*iParam0, bParam1);
				return 1;
			}
		}
		else
		{
			unk_0xEC9DAA34BBB4658C(Var2.f_0);
			if (unk_0x6252BC0DD8A320DB(Var2.f_0))
			{
				bVar5 = true;
				*iParam0 = unk_0x5779387E956077A6(Var2.f_0, Param2, fParam3, 1, 1, 0);
				unk_0x1DE99C193C7EC64B(*iParam0, 1084227584);
				unk_0x9BC299A7D57D7CAA(*iParam0, 0);
				unk_0xC13B5C4CC421EA79(*iParam0, 0);
				unk_0x5FE0938FDE9B0958(*iParam0, 1);
				StringCopy(&cVar6, unk_0xCA7159F2C5FF745A(*iParam0), 16);
				unk_0xD25E9BDC14A0B649(*iParam0, 1250, 0, 0);
				unk_0x2AEBE39F6BF7D6BC(*iParam0, 1250f);
				unk_0xDF9DC0584881B7AF(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0xD133EF7430EDCD09(*iParam0, Var2.f_5, Var2.f_6);
				unk_0xBB361D7264AC4FD8(*iParam0, Var2.f_7, Var2.f_8);
				unk_0x9452FE4900245259(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					unk_0xD772F6AA66750D2B(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					unk_0xAB2F41AC28DDBAAE(*iParam0, Var2.f_24);
				}
				if (func_277(&uVar1, &uVar0))
				{
					unk_0x3FEAE59CDE6D3946(*iParam0, &uVar1);
					unk_0x05D3F682DDA06C20(*iParam0, uVar0);
				}
				else
				{
					unk_0x3FEAE59CDE6D3946(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < unk_0x20DE4C1439E0FC92())
					{
						unk_0x05D3F682DDA06C20(*iParam0, Var2.f_26);
					}
				}
				unk_0x5DA0536AEAD1FF31(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				unk_0x439C904840715871(*iParam0, Var2.f_88);
				unk_0xFE620ED8E0A3C209(*iParam0, Var2.f_87);
				unk_0xEAB8A43F6621850F(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				unk_0xE62930EC6FAABCA5(*iParam0, 2, BitTest(Var2.f_92, 28));
				unk_0xE62930EC6FAABCA5(*iParam0, 3, BitTest(Var2.f_92, 29));
				unk_0xE62930EC6FAABCA5(*iParam0, 0, BitTest(Var2.f_92, 30));
				unk_0xE62930EC6FAABCA5(*iParam0, 1, BitTest(Var2.f_92, 31));
				if (unk_0xBA3ECE95D3094B0F(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					unk_0xA1C03303EC67320B(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(*iParam0)))
					{
						if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								unk_0xE33678A9AE50A01B(*iParam0, Var2.f_90);
							}
						}
						else
						{
							unk_0xE33678A9AE50A01B(*iParam0, Var2.f_90);
						}
					}
				}
				func_270(iParam0, &(Var2.f_31), &(Var2.f_81));
				unk_0x4DC7FAAC148F9B2F(*iParam0, Var2.f_96);
				if (bParam1 == 1)
				{
					if (unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("bagger") && !Global_113969.f_9088.f_99.f_58[118])
					{
						unk_0x3FEAE59CDE6D3946(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (bParam1 == 2)
				{
					if (unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("bodhi2"))
					{
						func_268(iParam0);
					}
				}
				else if (((bParam1 == 0 && !Global_113969.f_2366.f_539.f_4316) && Global_113969.f_9088.f_99.f_58[131]) && unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("tailgater"))
				{
					unk_0x8450270DC5896D39(*iParam0, 6, 1, false);
					unk_0x8450270DC5896D39(*iParam0, 14, 7, false);
					unk_0x8450270DC5896D39(*iParam0, 11, 2, false);
					unk_0x8450270DC5896D39(*iParam0, 2, 3, false);
					unk_0x8450270DC5896D39(*iParam0, 7, 5, false);
					unk_0x8450270DC5896D39(*iParam0, 0, 0, false);
					unk_0x8450270DC5896D39(*iParam0, 3, 3, false);
					unk_0x8450270DC5896D39(*iParam0, 13, 1, false);
					unk_0x8450270DC5896D39(*iParam0, 4, 3, false);
					unk_0x8450270DC5896D39(*iParam0, 12, 2, false);
					unk_0xF5501FF9869DAC7C(*iParam0, 22, true);
					unk_0xE33678A9AE50A01B(*iParam0, 2);
					unk_0x8450270DC5896D39(*iParam0, 23, 11, false);
					unk_0xFE620ED8E0A3C209(*iParam0, 2);
					Global_113969.f_2366.f_539.f_4316 = 1;
					func_195(bParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0x55098D9E9AD58806(Var2.f_0);
				}
				if (bVar5)
				{
					func_267(*iParam0, bParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_195(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_11(bParam0) && unk_0xFC8BFE4B41177C22(*iParam1)) && unk_0xD9F5E1FEFD1329E4(*iParam1, 0))
	{
		if (iParam2 > Global_113969.f_2366.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_244(*iParam1, bParam0);
		}
		if (unk_0x90E3EAFF8AAA1A42(*iParam1) != 0)
		{
			unk_0xB5AD06DDA85E2E8F(*iParam1, 0);
		}
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/] = unk_0x4B423FAA24E8ABF0(*iParam1);
		if (unk_0x20974C28142EB370(*iParam1, &iVar1))
		{
			Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_1 = unk_0x4B423FAA24E8ABF0(iVar1);
		}
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_2 = unk_0xF04E476AE02C4646(*iParam1);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_3 = unk_0x8D91ADE44AC79BC9(*iParam1);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[0] = unk_0x5318DF85BEB6B95F(*iParam1, 1);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[1] = unk_0x5318DF85BEB6B95F(*iParam1, 2);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[2] = unk_0x5318DF85BEB6B95F(*iParam1, 3);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[3] = unk_0x5318DF85BEB6B95F(*iParam1, 4);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[4] = unk_0x5318DF85BEB6B95F(*iParam1, 5);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[5] = unk_0x5318DF85BEB6B95F(*iParam1, 6);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[6] = unk_0x5318DF85BEB6B95F(*iParam1, 7);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[7] = unk_0x5318DF85BEB6B95F(*iParam1, 8);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[8] = unk_0x5318DF85BEB6B95F(*iParam1, 9);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[9] = unk_0x5318DF85BEB6B95F(*iParam1, 10);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[10] = unk_0x5318DF85BEB6B95F(*iParam1, 11);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[11] = unk_0x5318DF85BEB6B95F(*iParam1, 12);
		if (unk_0x7943BD10E2A03FAC(*iParam1, 0))
		{
			iVar2 = unk_0x54DA32C15F7A6ABA(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_24 = 0;
		}
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_25 = unk_0xE1799BB6E4C1CDFB();
		StringCopy(&(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_27), unk_0xCA7159F2C5FF745A(*iParam1), 16);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_26 = unk_0x4F06416A18248EA0(*iParam1);
		unk_0xFF4B16F297D9CB3E(*iParam1, &(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_5), &(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_6));
		unk_0x741D9B0685E67684(*iParam1, &(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_7), &(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_8));
		unk_0x9D35AABAEE206518(*iParam1, &(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_84), &(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_85), &(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_86));
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_88 = unk_0xE6BE8A525BA6BD44(*iParam1);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_87 = unk_0xDA63CE76F9AAB439(*iParam1);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_89 = unk_0xA089B04A208DBD0B(*iParam1);
		Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_90 = unk_0x6A375D21624F9187(*iParam1);
		unk_0x64FEACF0AD019F1F(*iParam1, &(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_93), &(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_94), &(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_95));
		if (unk_0xF1B79038130E3C08(*iParam1, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 28);
		}
		if (unk_0xF1B79038130E3C08(*iParam1, 3))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 29);
		}
		if (unk_0xF1B79038130E3C08(*iParam1, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 30);
		}
		if (unk_0xF1B79038130E3C08(*iParam1, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 31);
		}
		Global_113969.f_2366.f_539.f_4317[bParam0] = 10;
		if (unk_0xA9DFDFED12311CA7(*iParam1) >= 0 && func_200(*iParam1, 0, &uVar0))
		{
			func_199(iParam1, &(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31), &(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_113969.f_20121[bParam0 /*43*/].f_40 = 1;
				Global_113969.f_20121[bParam0 /*43*/] = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/];
				Global_113969.f_20121[bParam0 /*43*/].f_3 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_87;
				Global_113969.f_20121[bParam0 /*43*/].f_4 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_84;
				Global_113969.f_20121[bParam0 /*43*/].f_5 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_85;
				Global_113969.f_20121[bParam0 /*43*/].f_6 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_86;
				Global_113969.f_20121[bParam0 /*43*/].f_10 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_90;
				Global_113969.f_20121[bParam0 /*43*/].f_16 = !Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_88;
				Global_113969.f_20121[bParam0 /*43*/].f_19 = { Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_27 };
				Global_113969.f_20121[bParam0 /*43*/].f_23 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_26;
				Global_113969.f_20121[bParam0 /*43*/].f_7 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[11];
				Global_113969.f_20121[bParam0 /*43*/].f_8 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[12];
				Global_113969.f_20121[bParam0 /*43*/].f_9 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[23];
				Global_113969.f_20121[bParam0 /*43*/].f_11 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[4];
				Global_113969.f_20121[bParam0 /*43*/].f_12 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[15];
				Global_113969.f_20121[bParam0 /*43*/].f_13 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[16];
				Global_113969.f_20121[bParam0 /*43*/].f_14 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[14];
				Global_113969.f_20121[bParam0 /*43*/].f_15 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[22];
				Global_113969.f_20121[bParam0 /*43*/].f_18 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[20];
				Global_113969.f_20121[bParam0 /*43*/].f_17 = Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[18];
				Global_113969.f_20121[bParam0 /*43*/].f_24 = unk_0x5B59C12A02157D00(*iParam1, 11) + 1;
				Global_113969.f_20121[bParam0 /*43*/].f_25 = unk_0x5B59C12A02157D00(*iParam1, 12) + 1;
				Global_113969.f_20121[bParam0 /*43*/].f_26 = unk_0x5B59C12A02157D00(*iParam1, 4) + 1;
				Global_113969.f_20121[bParam0 /*43*/].f_27 = unk_0x5B59C12A02157D00(*iParam1, 23) + 1;
				Global_113969.f_20121[bParam0 /*43*/].f_28 = unk_0x5B59C12A02157D00(*iParam1, 14) + 1;
				Global_113969.f_20121[bParam0 /*43*/].f_29 = unk_0x5B59C12A02157D00(*iParam1, 16) + 1;
				Global_113969.f_20121[bParam0 /*43*/].f_30 = unk_0x5B59C12A02157D00(*iParam1, 15) + 1;
				Global_113969.f_20121[bParam0 /*43*/].f_32 = unk_0xEEBEB450F9417D7F(*iParam1);
				Global_113969.f_20121[bParam0 /*43*/].f_33[0] = unk_0xCDF8A102C63845CC(*iParam1);
				Global_113969.f_20121[bParam0 /*43*/].f_33[1] = unk_0x648F2586F927249D(*iParam1, 14, 0);
				Global_113969.f_20121[bParam0 /*43*/].f_33[2] = unk_0x648F2586F927249D(*iParam1, 14, 1);
				Global_113969.f_20121[bParam0 /*43*/].f_33[3] = unk_0x648F2586F927249D(*iParam1, 14, 2);
				Global_113969.f_20121[bParam0 /*43*/].f_33[4] = unk_0x648F2586F927249D(*iParam1, 14, 3);
				Global_113969.f_20121[bParam0 /*43*/].f_39 = unk_0xB79F51ED32ADD424(*iParam1);
				Global_113969.f_20121[bParam0 /*43*/].f_31 = func_198(*iParam1);
				Global_113969.f_20121[bParam0 /*43*/].f_33[0] = unk_0x46B7259FABD90750(*iParam1);
				unk_0xB8090FC59766A88C(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_196(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_5, Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_7, iVar3, 1, &(Global_113969.f_20121[bParam0 /*43*/].f_1));
				unk_0x07AE5F5D5A7D0936(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_196(Global_113969.f_2366.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113969.f_20121[bParam0 /*43*/].f_2));
			}
		}
	}
}

int func_196(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_197(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_197(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0xA9DFDFED12311CA7(iParam0) >= 0)
	{
		if (unk_0xB79F51ED32ADD424(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xB79F51ED32ADD424(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xB79F51ED32ADD424(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xB79F51ED32ADD424(iParam0) == 0)
		{
			if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (system::to_float(iVar5) / system::to_float(iVar4));
	return fVar6;
}

int func_199(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				switch (unk_0xD6BA8C57BDF9DEB9(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x94C9CD3D66808551(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_200(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xAD1840C2E6AF7D5E(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	if ((!func_242(iVar0, bParam1, uParam2) && !func_241(unk_0x259BE71D8A81D4FA())) && !func_214(iParam0))
	{
		return 0;
	}
	if (func_241(unk_0x259BE71D8A81D4FA()))
	{
		if (func_211(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_210(unk_0x259BE71D8A81D4FA()) && (unk_0xBA16CD57E37AC32A(iVar0) || unk_0x00C6FDED3EB75117(iVar0)))
	{
		bVar1 = true;
	}
	if (((unk_0x9E20DC08879FF3FC(iParam0) && !func_207(iParam0)) && !bVar1) && !(func_206(unk_0x4B423FAA24E8ABF0(iParam0)) && func_202(unk_0x259BE71D8A81D4FA())))
	{
		switch (unk_0x4B423FAA24E8ABF0(iParam0))
		{
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("monster3"):
			case joaat("monster4"):
			case joaat("monster5"):
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if ((func_201(iParam0) && unk_0x4B423FAA24E8ABF0(iParam0) != joaat("sentinel2")) && unk_0x4B423FAA24E8ABF0(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98874[iVar0]))
		{
			if (Global_98874[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_202(int iParam0)
{
	if (iParam0 != func_205())
	{
		if (func_204(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_203(Global_2657971[iParam0 /*465*/].f_322.f_8) == 11;
			}
		}
	}
	return 0;
}

int func_203(int iParam0)
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

int func_204(int iParam0, bool bParam1, bool bParam2)
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

int func_205()
{
	return -1;
}

int func_206(int iParam0)
{
	if (((iParam0 == joaat("mule4") || iParam0 == joaat("pounder2")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("terbyte"))
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0)
{
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("halftrack"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("bruiser"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			return 1;
			break;
		
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (func_209(unk_0x259BE71D8A81D4FA()))
			{
				return 1;
			}
			break;
		
		case joaat("minitank"):
		case joaat("burrito2"):
			return 1;
		
		case joaat("brickade2"):
			if (func_208(unk_0x259BE71D8A81D4FA()))
			{
				return 1;
			}
			break;
		
		case joaat("journey2"):
			return 1;
			break;
	}
	return 0;
}

int func_208(int iParam0)
{
	if (iParam0 != func_205())
	{
		if (func_204(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_203(Global_2657971[iParam0 /*465*/].f_322.f_8) == 26;
			}
		}
	}
	return 0;
}

int func_209(int iParam0)
{
	if (iParam0 != func_205())
	{
		if (func_204(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_203(Global_2657971[iParam0 /*465*/].f_322.f_8) == 13;
			}
		}
	}
	return 0;
}

int func_210(int iParam0)
{
	if (iParam0 != func_205())
	{
		if (func_204(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_203(Global_2657971[iParam0 /*465*/].f_322.f_8) == 7;
			}
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == joaat("oppressor2"))
	{
		return 0;
	}
	bVar0 = false;
	if ((iParam0 == joaat("riot2") || iParam0 == joaat("chernobog")) || iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_33331)
		{
			bVar0 = true;
		}
	}
	if ((((!func_213(unk_0x259BE71D8A81D4FA()) && iParam0 != joaat("thruster")) && iParam0 != joaat("avenger")) && iParam0 != func_212(1)) && !bVar0)
	{
		return 0;
	}
	return 1;
}

int func_212(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_213(int iParam0)
{
	if (iParam0 != func_205())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_311, 2);
	}
	return 0;
}

int func_214(int iParam0)
{
	if (func_240(unk_0x259BE71D8A81D4FA()) || func_239(unk_0x259BE71D8A81D4FA()))
	{
		if (func_215(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_215(int iParam0)
{
	if ((!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0)) || unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		return 0;
	}
	if (func_231(iParam0))
	{
		return 0;
	}
	if (unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		return 0;
	}
	if (func_219(iParam0, 0))
	{
		return 1;
	}
	if (func_218(unk_0x259BE71D8A81D4FA()) && ((((!func_211(unk_0x4B423FAA24E8ABF0(iParam0)) || unk_0x2E6A27037F1DC473(iParam0, joaat("openwheel1"))) || unk_0x2E6A27037F1DC473(iParam0, joaat("openwheel2"))) || unk_0x2E6A27037F1DC473(iParam0, joaat("formula"))) || unk_0x2E6A27037F1DC473(iParam0, joaat("formula2"))))
	{
		return 0;
	}
	if (unk_0x2E6A27037F1DC473(iParam0, joaat("oppressor2")))
	{
		return 0;
	}
	if (unk_0x2E6A27037F1DC473(iParam0, joaat("thruster")))
	{
		return 1;
	}
	if (unk_0xD130E7CDEE903624(iParam0, "Player_Vehicle"))
	{
		if (unk_0xE2F6FE9B61232165(iParam0, "Player_Vehicle") == unk_0x3351FEF40EC734DB(unk_0x259BE71D8A81D4FA()))
		{
			if (!func_216(iParam0))
			{
				return 1;
			}
		}
	}
	if (unk_0xD130E7CDEE903624(iParam0, "Player_Thruster"))
	{
		if (unk_0xE2F6FE9B61232165(iParam0, "Player_Thruster") == unk_0x3351FEF40EC734DB(unk_0x259BE71D8A81D4FA()))
		{
			if (!func_216(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_216(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
		if ((unk_0x9E20DC08879FF3FC(iParam0) && !func_207(iParam0)) || func_217(iVar0))
		{
			return 1;
		}
		switch (iVar0)
		{
			case joaat("slamtruck"):
			case joaat("patriot2"):
			case joaat("mule4"):
			case joaat("pounder2"):
			case joaat("speedo4"):
			case joaat("speedo5"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("brickade"):
		case joaat("dune"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("boxville5"):
		case joaat("boxville6"):
		case joaat("benson2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_218(int iParam0)
{
	if (iParam0 == func_205())
	{
		return 0;
	}
	if (func_241(iParam0) && Global_2657971[iParam0 /*465*/].f_322.f_11 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0, bool bParam1)
{
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_221(unk_0x4B423FAA24E8ABF0(iParam0), 0))
			{
				if (Global_2738934.f_307 == iParam0)
				{
					return 1;
				}
				else if (func_220(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_220(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2672855.f_231[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_221(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_230(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_229();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14701)
			{
				return func_228();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14702)
			{
				return func_228();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14700)
			{
				return func_228();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14703)
			{
				return func_228();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14705)
			{
				return func_228();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_227();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18948)
			{
				return func_226();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18950)
			{
				return func_226();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18954)
			{
				return func_226();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18951)
			{
				return func_226();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18958)
			{
				return func_226();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18956)
			{
				return func_226();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18961)
			{
				return func_226();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20834)
			{
				return func_225();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20835)
			{
				return func_225();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_224();
			break;
		
		case joaat("glendale"):
			if (func_224() || func_223())
			{
				return 1;
			}
			break;
		
		case joaat("impaler"):
			return func_224();
			break;
		
		case joaat("issi3"):
			return func_224();
			break;
		
		case joaat("gargoyle"):
			return func_224();
			break;
		
		case joaat("dominator"):
			return func_224();
			break;
		
		case joaat("dominator2"):
			return func_224();
			break;
		
		case joaat("imperator"):
			return func_224();
			break;
		
		case joaat("imperator2"):
			return func_224();
			break;
		
		case joaat("imperator3"):
			return func_224();
			break;
		
		case joaat("deathbike"):
			return func_224();
			break;
		
		case joaat("deathbike2"):
			return func_224();
			break;
		
		case joaat("deathbike3"):
			return func_224();
			break;
		
		case joaat("impaler2"):
		case joaat("brutus"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("issi4"):
		case joaat("monster3"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("zr380"):
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
			return func_224();
			break;
		
		case joaat("youga2"):
			if (Global_262145.f_28833)
			{
				return func_223();
			}
			break;
		
		case joaat("gauntlet3"):
			if (Global_262145.f_29162)
			{
				return func_223();
			}
			break;
		
		case joaat("manana"):
			if (Global_262145.f_28832)
			{
				return func_223();
			}
			break;
		
		case joaat("peyote"):
			if (Global_262145.f_29161)
			{
				return func_223();
			}
			break;
		
		case joaat("yosemite"):
			if (Global_262145.f_29160)
			{
				return func_223();
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("tenf"):
			if (Global_262145.f_32429)
			{
				return func_222();
			}
			break;
		
		case joaat("weevil"):
			if (Global_262145.f_32428)
			{
				return func_222();
			}
			break;
		
		case joaat("brioso2"):
			if (Global_262145.f_32421)
			{
				return func_222();
			}
			break;
		
		case joaat("sentinel3"):
			if (Global_262145.f_32430)
			{
				return func_222();
			}
			break;
	}
	return 0;
}

bool func_222()
{
	return unk_0x087611B922B50F13(1199590110);
}

bool func_223()
{
	return unk_0x087611B922B50F13(joaat("mpsum"));
}

bool func_224()
{
	return unk_0x087611B922B50F13(joaat("mpchristmas2018"));
}

bool func_225()
{
	return unk_0x087611B922B50F13(joaat("mpgunrunning"));
}

bool func_226()
{
	return unk_0x087611B922B50F13(joaat("mpimportexport"));
}

bool func_227()
{
	return unk_0x087611B922B50F13(joaat("mpjanuary2016"));
}

bool func_228()
{
	return unk_0x087611B922B50F13(joaat("mplowrider2"));
}

bool func_229()
{
	return unk_0x087611B922B50F13(joaat("mplowrider"));
}

int func_230(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14701)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14702)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14700)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14703)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14705)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14704)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18948)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18950)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18954)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18951)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18958)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18956)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18961)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20834)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20835)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_231(int iParam0)
{
	if (unk_0x259BE71D8A81D4FA() != func_205())
	{
		if (func_237() || func_236(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
		if (((func_235(unk_0x259BE71D8A81D4FA(), 1, 0) && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_35 > 0) || BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 14)) || BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 11))
		{
			return 0;
		}
		if (unk_0x77B62CAA5DF0922A("Player_Vehicle", 3))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Vehicle"))
			{
				if (unk_0xE2F6FE9B61232165(iParam0, "Player_Vehicle") == unk_0x3351FEF40EC734DB(unk_0x259BE71D8A81D4FA()))
				{
					if (func_233() != -1 && func_233() < 517)
					{
						if (!func_232(iParam0) || unk_0x4B423FAA24E8ABF0(iParam0) != Global_1586521[func_233() /*142*/].f_66)
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_232(int iParam0)
{
	if (Global_2738934.f_301 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_233()
{
	return Global_2359296[func_234() /*5570*/].f_681.f_2;
}

int func_234()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_235(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_205())
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

int func_236(int iParam0)
{
	if (iParam0 != func_205() && func_204(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 3);
	}
	return 0;
}

bool func_237()
{
	return func_238() != -1;
}

int func_238()
{
	return Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_8;
}

int func_239(int iParam0)
{
	if (iParam0 != func_205())
	{
		if (func_204(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_205())
			{
				return func_203(Global_2657971[iParam0 /*465*/].f_322.f_8) == 5;
			}
		}
	}
	return 0;
}

int func_240(int iParam0)
{
	if (iParam0 != func_205())
	{
		if (func_204(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_205())
			{
				return func_203(Global_2657971[iParam0 /*465*/].f_322.f_8) == 8;
			}
		}
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 != func_205())
	{
		if (func_204(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_203(Global_2657971[iParam0 /*465*/].f_322.f_8) == 9;
			}
		}
	}
	return 0;
}

int func_242(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		switch (iParam0)
		{
			case joaat("police"):
			case joaat("policeold1"):
			case joaat("policeold2"):
			case joaat("police2"):
			case joaat("police3"):
			case joaat("fbi"):
			case joaat("fbi2"):
			case joaat("polmav"):
			case joaat("policeb"):
			case joaat("policet"):
			case joaat("riot"):
			case joaat("sheriff"):
			case joaat("pranger"):
			case joaat("sheriff2"):
				*uParam2 = 1;
				return 0;
				break;
			}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2")) || iParam0 == joaat("inductor")) || iParam0 == joaat("inductor2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_210(unk_0x259BE71D8A81D4FA()) && (unk_0xBA16CD57E37AC32A(iParam0) || unk_0x00C6FDED3EB75117(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((((((!unk_0xD3CE8D1E6564B011(iParam0) && !unk_0x78B050AFBA6D1517(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && iParam0 != joaat("rrocket")) && iParam0 != joaat("stryder")) && iParam0 != joaat("verus")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_243(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
		case joaat("towtruck3"):
		case joaat("towtruck4"):
			return 1;
			break;
	}
	return 0;
}

void func_244(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_249(iParam0))
	{
		return;
	}
	if ((bParam1 != 0 && bParam1 != 1) && bParam1 != 2)
	{
		iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
		if (!unk_0xFC8BFE4B41177C22(iVar0))
		{
			iVar0 = unk_0x6B854773972E76E4(iParam0, -1);
		}
		if (unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x4FAFF4BCB7633475(iVar0))
		{
			if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_zero"))
			{
				bParam1 = false;
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_one"))
			{
				bParam1 = true;
			}
			else if (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("player_two"))
			{
				bParam1 = 2;
			}
		}
		if ((bParam1 != 0 && bParam1 != 1) && bParam1 != 2)
		{
			bParam1 = Global_113969.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xD6F9DEE4765092A9(&(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113969.f_32753.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113969.f_32753.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xD6F9DEE4765092A9(&(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x1B79E937E91F40C3(unk_0xCA7159F2C5FF745A(iParam0), &(Global_113969.f_32753.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113969.f_32753.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113969.f_32753.f_5590 = bParam1;
	Global_79084 = iParam0;
	Global_113969.f_32753.f_5588 = 1;
	func_245(iParam0, &(Global_113969.f_32753.f_5510));
}

void func_245(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_248(uParam1);
		uParam1->f_66 = unk_0x4B423FAA24E8ABF0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCA7159F2C5FF745A(iParam0), 16);
		*uParam1 = unk_0x4F06416A18248EA0(iParam0);
		unk_0xFF4B16F297D9CB3E(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x741D9B0685E67684(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9D35AABAEE206518(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xDA63CE76F9AAB439(iParam0);
		uParam1->f_67 = unk_0xA089B04A208DBD0B(iParam0);
		uParam1->f_69 = unk_0x6A375D21624F9187(iParam0);
		uParam1->f_70 = unk_0x38A100E16C95161B(iParam0);
		unk_0x04434FA56DED5500(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x64FEACF0AD019F1F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xF1B79038130E3C08(iParam0, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 28);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 3))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 29);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 30);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_247(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			uParam1->f_68 = unk_0x54DA32C15F7A6ABA(iParam0);
		}
		if (unk_0x00C6FDED3EB75117(uParam1->f_66))
		{
			if (unk_0x61F41693A4648B46(iParam0))
			{
				switch (unk_0x68F7F7C5DF6717F8(iParam0))
				{
					case 3:
					case 0:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xE6BE8A525BA6BD44(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 9);
		}
		if (unk_0xFDA2576D37032738(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 10);
		}
		if (unk_0xA9D64A14804D119B(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 13);
			unk_0xD9B9D4D1CCED7CA6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x2C0B2BB7913E8DBA(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 12);
		}
		func_199(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_246(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x0BCE48C8677F9824(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 11);
		}
		if (unk_0xD130E7CDEE903624(iParam0, "IgnoredByQuickSave") && unk_0x3F40AE65F056B43D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 27);
		}
	}
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_248(var uParam0)
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

int func_249(int iParam0)
{
	if ((((((((((!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0)) || func_266(iParam0, 0, 0)) || func_266(iParam0, 1, 0)) || func_266(iParam0, 2, 0)) || func_265(iParam0) != 145) || func_264(iParam0)) || func_263(iParam0)) || func_201(iParam0)) || func_262(iParam0)) || !func_250(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		if (func_263(iParam0))
		{
		}
		if (func_263(iParam0))
		{
		}
		if (func_266(iParam0, 0, 0))
		{
		}
		if (func_266(iParam0, 1, 0))
		{
		}
		if (func_266(iParam0, 2, 0))
		{
		}
		if (func_265(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_250(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_251(iParam0, 0, -1))
	{
		return 0;
	}
	if (((unk_0xEA4F815FDC353FEF(iParam0) || unk_0x00C6FDED3EB75117(iParam0)) || unk_0xBA16CD57E37AC32A(iParam0)) || unk_0xAE447CBB33B40CA3(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("towtruck3"):
		case joaat("towtruck4"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_251(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xAD1840C2E6AF7D5E(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x76CD105BCAC6EB9F()) || (iParam0 == joaat("buffalo3") && !unk_0x76CD105BCAC6EB9F())) || (iParam0 == joaat("gauntlet2") && !unk_0x76CD105BCAC6EB9F())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x76CD105BCAC6EB9F()))
	{
		if (!func_261())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x62B04373BFAD9B85())
		{
			if (unk_0x92EAC7DBD5D1D750(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x4BFA043D318BF9AE(Var1.f_0))
					{
						return 0;
					}
				}
				else
				{
					iVar0++;
				}
				if (iParam0 == joaat("blimp"))
				{
					if ((((!func_260() && !func_259()) && !func_258()) && !func_257()) && !func_261())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_256() || unk_0x761778199FE1211C()) || func_255())
					{
					}
					else if (!func_258())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_254(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_252(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_252(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_253())
	{
		return 1;
	}
	unk_0x8A77EAFEB55D476D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xABE86AEC64720F91(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_253()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_254(int iParam0, int iParam1)
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

bool func_255()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_256()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_257()
{
	return 0;
}

int func_258()
{
	return 1;
}

int func_259()
{
	return 1;
}

int func_260()
{
	if (unk_0x087611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_261()
{
	int iVar0;
	
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
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x76CA59C648318506())
				{
					iVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&iVar0, 0);
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

int func_262(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	sVar1 = unk_0xCA7159F2C5FF745A(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x1B79E937E91F40C3(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_251(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_263(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]) && unk_0xD9F5E1FEFD1329E4(Global_98844[iVar0], 0))
			{
				if (Global_98844[iVar0] == iParam0 && unk_0x4B423FAA24E8ABF0(Global_98844[iVar0]) == unk_0x4B423FAA24E8ABF0(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_264(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[24]))
	{
		if (iParam0 == Global_78179.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFC8BFE4B41177C22(Global_78179.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_78179.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_265(int iParam0)
{
	int iVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 145;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			if (Global_98844[iVar0] == iParam0)
			{
				return Global_98854[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_266(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_20(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113969.f_7232[iVar2], 0))
		{
			if (unk_0xFE448E8C2209CA31(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_267(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xFC8BFE4B41177C22(Global_98844[iVar0]))
		{
			Global_98844[iVar0] = iParam0;
			Global_98854[iVar0] = bParam1;
			Global_98864[iVar0] = unk_0x4B423FAA24E8ABF0(iParam0);
			if (unk_0xD3CE8D1E6564B011(Global_98864[iVar0]))
			{
				Global_98892[bParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_98892[bParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_268(var uParam0)
{
	if (!func_269(*uParam0))
	{
		unk_0xD772F6AA66750D2B(*uParam0, 5, !Global_113969.f_9088.f_99.f_58[119]);
	}
}

bool func_269(int iParam0)
{
	return unk_0x5318DF85BEB6B95F(iParam0, 5);
}

int func_270(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*uParam0) == 0)
	{
		return 0;
	}
	unk_0xB5AD06DDA85E2E8F(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xF5501FF9869DAC7C(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xF5501FF9869DAC7C(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x89D1FDCA3735A1E0(*uParam0, 255);
				}
				else
				{
					unk_0x89D1FDCA3735A1E0(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xF5501FF9869DAC7C(*uParam0, iVar1, false);
			}
		}
		else if (unk_0x94C9CD3D66808551(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xC87E4FAD00AEDD4B(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					unk_0x8450270DC5896D39(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					unk_0x8450270DC5896D39(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_275(*uParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					unk_0x8450270DC5896D39(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_230(unk_0x4B423FAA24E8ABF0(*uParam0), 1) && unk_0x94C9CD3D66808551(*uParam0, 24) != func_273(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8450270DC5896D39(*uParam0, 24, func_273(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_272(uParam0);
	if (func_271(*uParam0))
	{
		unk_0xD05AF216D970F274(*uParam0, 1);
		unk_0x5FE0938FDE9B0958(*uParam0, 1);
	}
	return 1;
}

int func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
	{
		unk_0xB5AD06DDA85E2E8F(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x94C9CD3D66808551(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x1340575A0EEE0622(iParam0, iVar1, unk_0x94C9CD3D66808551(iParam0, iVar1)), 32);
				iVar2 = unk_0x70E57E9927B6BA58(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x70E57E9927B6BA58("MNU_CAGE") || iVar2 == unk_0x70E57E9927B6BA58("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_272(var uParam0)
{
	switch (unk_0x4B423FAA24E8ABF0(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x94C9CD3D66808551(*uParam0, 4) == 0)
			{
				unk_0x8450270DC5896D39(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xC87E4FAD00AEDD4B(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x8450270DC5896D39(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_273(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		switch (unk_0x4B423FAA24E8ABF0(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_274(iParam0, 38) + 1;
		iVar1 = func_274(iParam0, 24) + 1;
		fVar2 = (system::to_float(iParam1 + 1) / system::to_float(iVar0));
		iVar3 = (system::floor((system::to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((unk_0x441B9C85D0FFA9ED(Global_152860) && unk_0x2E6A27037F1DC473(iParam0, Global_152860)) && Global_152861 == iParam1)
	{
		return Global_152862;
	}
	iVar0 = (unk_0x5B59C12A02157D00(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_275(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_275(int iParam0, int iParam1, int iParam2)
{
	if (!func_276() && unk_0xAF82FE1B3E949337(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_276()
{
	return 0;
}

int func_277(var uParam0, var uParam1)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
	}
	else if (Global_113969.f_20121.f_261)
	{
		*uParam0 = { Global_113969.f_20121.f_267 };
		*uParam1 = Global_113969.f_20121.f_271;
		return 1;
	}
	return 0;
}

void func_278(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (bParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113969.f_9088.f_99.f_58[128] && !Global_113969.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113969.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113969.f_9088.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_279(bool bParam0, int iParam1)
{
	if (func_11(bParam0))
	{
		return unk_0x6252BC0DD8A320DB(func_280(bParam0, iParam1));
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

int func_280(bool bParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_11(bParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_278(bParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_281(bool bParam0, int iParam1)
{
	if (func_11(bParam0))
	{
		unk_0xEC9DAA34BBB4658C(func_280(bParam0, iParam1));
	}
	else if (bParam0 != 145)
	{
	}
}

int func_282(struct<3> Param0, float fParam1, int iParam2)
{
	bool bVar0;
	
	if (!unk_0xFC8BFE4B41177C22(Local_471.f_0) || iParam2)
	{
		if (!unk_0xFC8BFE4B41177C22(Local_471.f_0))
		{
			if (func_284(&Local_471, 19, Param0, fParam1, 1))
			{
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			unk_0xD1C578C204015E1F(Local_471.f_0, 2, 0, 0, 0);
			unk_0xD1C578C204015E1F(Local_471.f_0, 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(Local_471.f_0, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(Local_471.f_0, 5, 2, 0, 0);
			unk_0xD1C578C204015E1F(Local_471.f_0, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(Local_471.f_0, 8, 0, 0, 0);
			unk_0x3F58BFCF656F0DF1(Local_471.f_0, 0);
			unk_0x3CEA1FD137ACE2D9(Local_471.f_0, joaat("player"));
			unk_0x0428AFDCAA63B06E(Local_471.f_0, 182, 1);
			func_283(&Local_554, 5, Local_471.f_0, "LAMAR", 0, 1);
			return 1;
		}
	}
	else
	{
		if (Local_554[5 /*10*/] != Local_471.f_0)
		{
			func_283(&Local_554, 5, Local_471.f_0, "LAMAR", 0, 1);
		}
		return 1;
	}
	return 0;
}

void func_283(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_284(int iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_11(bParam1))
	{
		iVar0 = func_286(bParam1);
		unk_0xEC9DAA34BBB4658C(iVar0);
		if (unk_0x6252BC0DD8A320DB(iVar0))
		{
			if (unk_0xFC8BFE4B41177C22(*iParam0))
			{
				unk_0x734A9F4537A31459(iParam0);
			}
			*iParam0 = unk_0xB1DBFEB95C0EFB88(26, iVar0, Param2, fParam3, 0, 0);
			unk_0x77EFA99E6A8FFC43(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xC0120BBCC298EA2F(*iParam0, 3) == 0)
				{
					unk_0xD1C578C204015E1F(*iParam0, 5, 2, 0, 0);
				}
			}
			func_285(*iParam0, bParam1);
			if (bParam4)
			{
				unk_0x55098D9E9AD58806(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_285(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (bParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (bParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (bParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_97347[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_286(bool bParam0)
{
	if (!func_11(bParam0))
	{
		return func_10(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_287(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_935())
	{
		unk_0xAECC5FA98C879D67(0);
		unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 2);
		unk_0x98E393364463951A(1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
		}
		Global_101529 = { Param0 };
		Global_101532 = fParam1;
		Global_101528 = 1;
		if (iParam2 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 14);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 24);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 24);
		}
		func_191(1);
	}
}

void func_288()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	float fVar5;
	int iVar6[1];
	float fVar7;
	int iVar8;
	struct<2> Var9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	int iVar15;
	
	if (iLocal_551 == 4)
	{
		if (iLocal_436 == 0)
		{
			iLocal_436 = unk_0x0556019E7EE8EC9A(-38,62f, -1099,01f, 27,31f, "v_carshowroom");
		}
		unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_368, 1, 0, 0, 1);
		unk_0x74C1590CC91B3930(iLocal_436);
		if (bLocal_254)
		{
			func_287(Local_368, fLocal_271, 0, 0);
		}
		else
		{
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_368, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fLocal_271);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
			unk_0x6C39BDF5EA5D38FC(Local_368);
			system::wait(0);
		}
		func_377();
		while ((((((((((!unk_0xD0B0D1BD29678350(iLocal_436) || !func_376(0)) || !func_375(0)) || !unk_0xFC8BFE4B41177C22(Local_471.f_0)) || !unk_0xFC8BFE4B41177C22(Local_491[0 /*7*/])) || !unk_0xFC8BFE4B41177C22(Local_491[1 /*7*/])) || !unk_0xFC8BFE4B41177C22(iLocal_400)) || !unk_0xFC8BFE4B41177C22(Local_475.f_0)) || !unk_0xFC8BFE4B41177C22(Local_472.f_0)) || !unk_0x16CFE70936BA84C7(func_280(1, 1))) || !unk_0xE100DD4F82A51BDE(sLocal_389))
		{
			unk_0x7991957B46F22F47(func_280(1, 1), 3);
			unk_0x80813AC549A1E8AE(sLocal_389);
			unk_0x74C1590CC91B3930(iLocal_436);
			func_282(Local_369, fLocal_272, 0);
			func_374(34,0424f, -638,7692f, 30,6252f, 0);
			func_373(44,0424f, -638,7692f, 30,6252f, 0);
			func_193(Local_367, fLocal_270, 0);
			func_372(Local_374, fLocal_278, 0);
			func_369(Local_375, fLocal_279, 0);
			system::wait(0);
		}
		func_190(0, -1, 0);
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
		func_368();
		func_367();
		unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_368, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fLocal_271);
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
		{
			unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_283 /*7*/], -30,5774f, -1090,563f, 25,4222f, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(Local_491[iLocal_283 /*7*/], 159,6013f);
			unk_0x5D7CD709B34C90F0(Local_491[iLocal_283 /*7*/], 1);
			unk_0xF04751F8E604D487(Local_491[iLocal_283 /*7*/], 0);
		}
		iLocal_319 = unk_0x8CC50AC10D8037C7(-59f, -1095,8f, 25,4223f, 10f, 4f, 3f, func_366(-67,2459f), 0, 7);
		iLocal_320 = unk_0x8CC50AC10D8037C7(-37,4137f, -1108,567f, 25,4223f, 4f, 4f, 3f, 72,3459f, 0, 7);
		func_365();
		iLocal_282 = 99;
		iLocal_235 = 1;
		iLocal_551 = 0;
	}
	if (iLocal_551 == 0)
	{
		if (iLocal_436 != 0)
		{
			if (unk_0xD0B0D1BD29678350(iLocal_436))
			{
				unk_0xBBB6D0F765409642(iLocal_436);
				iLocal_436 = 0;
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(Local_491[0 /*7*/], 0))
		{
			unk_0xC229299217554C78(Local_491[0 /*7*/], 0, 0, 0);
			unk_0xF04751F8E604D487(Local_491[0 /*7*/], 0);
		}
		if (unk_0xD9F5E1FEFD1329E4(Local_491[1 /*7*/], 0))
		{
			unk_0xC229299217554C78(Local_491[1 /*7*/], 0, 0, 0);
			unk_0xF04751F8E604D487(Local_491[1 /*7*/], 0);
		}
		if (unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
		{
			unk_0xF698038C13845696(iLocal_400);
		}
		if (unk_0x15CCE8886267624F())
		{
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -38,077f, -1096,467f, 25,4223f, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 296,617f);
			if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				unk_0xB2BD5837A8D3CEDA(Local_471.f_0, Local_369, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(Local_471.f_0, fLocal_272);
			}
			while (!func_376(0))
			{
				system::wait(0);
			}
			if (iLocal_282 != 99)
			{
				func_48(Local_368, 100f, 1, 5000);
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_400, 0) && !unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				unk_0xEBA229B2E0BB05E0(Local_471.f_0, iLocal_400, 40000, 0, 1f, 1, 0, 0);
			}
			unk_0x8EAC8FBDF8A3830E(unk_0x259BE71D8A81D4FA(), 1f, 2000, 296,617f, 0, 0, 0);
			system::wait(500);
			unk_0x64BB72494B9DF6DC(0f);
			unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		}
		func_364(1);
		if (!unk_0xBC2EE32DE886BD08("ARM_1_GO_HOME"))
		{
			unk_0xCAC4020CCF361AC8("ARM_1_GO_HOME");
		}
		if (!unk_0x4FAFF4BCB7633475(Local_475.f_0) && !unk_0x4FAFF4BCB7633475(Local_472.f_0))
		{
			if (unk_0xE100DD4F82A51BDE(sLocal_389))
			{
				iLocal_338 = unk_0x2EC137C692A52458(-39,546f, -1092,79f, 25,422f, 0f, 0f, 0f, 2);
				unk_0x3DA436E63AB0F541(Local_472.f_0, iLocal_338, sLocal_389, "_leadout_simeon", 1000f, -1,5f, 5, 0, 1148846080, 0);
				unk_0x3DA436E63AB0F541(Local_475.f_0, iLocal_338, sLocal_389, "_leadout_jimmy", 1000f, -1,5f, 5, 0, 1148846080, 0);
				unk_0x7BB893EF8F683419(iLocal_338, 0f);
			}
			unk_0xE67051907958B5EB(Local_472.f_0, Local_475.f_0, -1, 2048, 2);
		}
		func_58();
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
		unk_0xDAE61414743C8D1D(5);
		if (!unk_0x1C2F771CDC87A3A5(Local_491[0 /*7*/], 0))
		{
			unk_0x5D7CD709B34C90F0(Local_491[0 /*7*/], 0);
			unk_0x11C125313CB8ADA2(Local_491[0 /*7*/], 1);
			unk_0xE4DC7B3DD712372B(Local_491[0 /*7*/]);
		}
		if (!unk_0x1C2F771CDC87A3A5(Local_491[1 /*7*/], 0))
		{
			unk_0x5D7CD709B34C90F0(Local_491[1 /*7*/], 0);
			unk_0x11C125313CB8ADA2(Local_491[1 /*7*/], 1);
			unk_0xE4DC7B3DD712372B(Local_491[1 /*7*/]);
		}
		func_363(&(iLocal_405[0]), 0);
		func_362();
		func_74(48, 1);
		func_74(47, 1);
		func_886(3, "GO_TO_HOUSE", 1, 0, 0, 1);
		system::settimera(0);
		Local_472.f_2 = 0;
		iLocal_330 = 0;
		iLocal_341 = 0;
		iLocal_282 = 0;
		iLocal_241 = 0;
		iLocal_551 = 1;
	}
	if (iLocal_551 == 1)
	{
		func_74(49, 3);
		if (system::timera() < 3000)
		{
			unk_0x9D0B099EEAD74270();
		}
		if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
		{
			if (!iLocal_241)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_493.f_13), 10);
				unk_0x4190C67D524CD0DC(Local_471.f_0, 1f);
				if (!unk_0x1C2F771CDC87A3A5(iLocal_400, 0) && unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iLocal_400))
				{
					unk_0x8744D2E3FC95740E(&(Local_493.f_13), 10);
					if (!unk_0xCECDBB848D53DEB2(Local_471.f_0, iLocal_400, 0))
					{
						unk_0xEBA229B2E0BB05E0(Local_471.f_0, iLocal_400, 20000, 0, 2f, 1, 0, 0);
					}
					iLocal_241 = 1;
				}
			}
		}
		switch (iLocal_282)
		{
			case 0:
				if (!unk_0xC450B06E5AAA0985(uLocal_418))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
					{
						uLocal_418 = func_360(iLocal_400, 0, 0);
					}
				}
				if (!iLocal_266[62])
				{
					if (!func_358(&Local_493, 1))
					{
						func_283(&Local_554, 6, Local_475.f_0, "JIMMY", 0, 1);
						func_283(&Local_554, 4, Local_472.f_0, "SIMEON", 0, 1);
						if (func_357(&Local_554, "ARM1AUD", "ARM1_GETINJ", 7, 0, 0, 0))
						{
							iLocal_266[62] = 1;
						}
					}
				}
				else if (func_343(&Local_554, "ARM1AUD", "ARM1_LEAVEG", "ARM1_LEAVEG_1", 7, 0, 0))
				{
					iLocal_266[53] = 1;
					iLocal_282++;
				}
				break;
			
			case 1:
				if (unk_0xC450B06E5AAA0985(uLocal_418))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_418);
				}
				if (func_309(&Local_493, Local_364, 0,001f, 0,001f, 2f, 1, Local_471.f_0, iLocal_400, "AR1_HOME", "AR1_WAIT", "CMN_GENGETINY", "CMN_GENGETBCKY", 0, 1, 1, -1))
				{
					iLocal_282++;
				}
				else if (unk_0xC450B06E5AAA0985(Local_493.f_5))
				{
					if (!iLocal_266[54])
					{
						if (iLocal_330 == 0)
						{
							iLocal_330 = unk_0x1DD05E817C89C737();
						}
						else if ((unk_0x1DD05E817C89C737() - iLocal_330) > 7000)
						{
							if (!unk_0x4C705AAF75363287())
							{
								if (func_308("AR1_HOME", 0, 0))
								{
									unk_0x406CBCEA35499884();
								}
								func_57("AR1_VIEWSTATS", 15000);
								iLocal_266[54] = 1;
								iLocal_330 = 0;
							}
						}
					}
					else if (!iLocal_266[55])
					{
						if (!unk_0x6D05C5731A838CB3(0, 19))
						{
							iLocal_330 = unk_0x1DD05E817C89C737();
						}
						else if ((unk_0x1DD05E817C89C737() - iLocal_330) > 250 && func_307(1))
						{
							func_57("AR1_VIEWSTATS2", 15000);
							iLocal_266[55] = 1;
						}
					}
					if (iLocal_235)
					{
						unk_0xCE41CD0179F8640B(func_280(1, 1));
						iLocal_235 = 0;
					}
					fVar1 = 12f;
					fVar2 = unk_0xDF93B3CFAC96698F(iLocal_400);
					if (fVar2 < 3f)
					{
						fVar2 = 3f;
					}
					else if (fVar2 > fVar1)
					{
						fVar2 = fVar1;
					}
					fVar0 = (2f + (((fVar2 - 3f) / (fVar1 - 3f)) * 8,5f));
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -27,6771f, -1427,279f, 29,66922f, -23,04911f, -1427,3f, 32,1599f, fVar0, 0, 1, 0) && func_306(1, 1, 1))
					{
						func_302(&Local_493, 1, 0);
						unk_0x425BBE19F25A57AB(0f);
						fLocal_277 = fVar2;
						iLocal_282++;
					}
					else if (system::timera() > 1000 && func_301(unk_0x4A8C381C258A124D(), Local_471.f_0))
					{
						if (func_100())
						{
							func_300(0);
						}
						if (!iLocal_266[56])
						{
							if (!func_358(&Local_493, 1))
							{
								if (func_357(&Local_554, "ARM1AUD", "ARM1_DRIV2A", 7, 0, 0, 0))
								{
									iLocal_266[56] = 1;
								}
							}
						}
						else if (!iLocal_266[58])
						{
							if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -16,96474f, -1462,947f, 29,15786f, -17,41634f, -1431,48f, 36,68279f, 22,25f, 0, 1, 0))
							{
								if (!func_358(&Local_493, 1))
								{
									if (func_357(&Local_554, "ARM1AUD", "ARM1_ATHOME", 7, 0, 0, 0))
									{
										iLocal_266[58] = 1;
									}
								}
								else
								{
									func_298();
								}
							}
						}
					}
				}
				else if (iLocal_266[56] || iLocal_266[58])
				{
					if (!func_100())
					{
						func_300(1);
					}
				}
				break;
			
			case 2:
				if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					iVar3 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				}
				if (unk_0xD9F5E1FEFD1329E4(iVar3, 0))
				{
					unk_0x66EFB3D6110055C4(0, 27, 1);
					if (fLocal_277 > 3f && fLocal_277 < 12f)
					{
						fVar5 = 2f;
					}
					else
					{
						fVar5 = 3,5f;
					}
					if (func_295(iVar3, fVar5, 1, 1056964608, 0, 1, 0))
					{
						unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 768);
						bVar4 = true;
					}
				}
				else
				{
					bVar4 = true;
				}
				if (func_100())
				{
					func_300(0);
				}
				if (!iLocal_266[58])
				{
					if (func_358(&Local_493, 0))
					{
						func_298();
					}
					else if (func_357(&Local_554, "ARM1AUD", "ARM1_ATHOME", 7, 0, 0, 0))
					{
						iLocal_266[58] = 1;
					}
				}
				else if (bVar4)
				{
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 768);
					iLocal_551 = 2;
				}
				break;
		}
		if (unk_0x761778199FE1211C())
		{
			if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_364) < (20f * 20f))
			{
				unk_0x839AD252B0708F35(sLocal_382, 8);
				func_102(sLocal_382);
			}
			else if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_364) > (30f * 30f))
			{
				if (unk_0x0CB7695268A7F50F())
				{
					unk_0xDD291722ADDCBD60();
				}
			}
		}
		else if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_364) < (100f * 100f))
		{
			unk_0x839AD252B0708F35(sLocal_382, 8);
			func_102(sLocal_382);
		}
		else if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_364) > (120f * 120f))
		{
			if (unk_0x0CB7695268A7F50F())
			{
				unk_0xDD291722ADDCBD60();
			}
		}
		if (unk_0xC450B06E5AAA0985(Local_493.f_5))
		{
			if (!iLocal_266[59])
			{
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -24,22909f, -1451,201f, 29,76049f, -23,50623f, -1430,866f, 32,15756f, 7f, 0, 1, 0))
				{
					func_57("AR1_GARHELP1", 15000);
					iLocal_266[59] = 1;
				}
			}
		}
		if (!iLocal_266[60])
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
			{
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_400, 1)) < 225f && unk_0xCB5CAFF0A4A8B74B(iLocal_400))
				{
					func_57("AR1_UNIQUE", 15000);
					iLocal_266[60] = 1;
				}
			}
		}
		else if (!iLocal_266[61])
		{
			if (!unk_0x4C705AAF75363287())
			{
				iLocal_266[61] = 1;
			}
		}
		if (!unk_0x4FAFF4BCB7633475(Local_472.f_0) && !unk_0x4FAFF4BCB7633475(Local_475.f_0))
		{
			switch (Local_472.f_2)
			{
				case 0:
					if ((unk_0x5266F1D2AEF6F73A(iLocal_338) && unk_0xBD3B265153D3BA2D(iLocal_338) > 0f) || !unk_0x5266F1D2AEF6F73A(iLocal_338))
					{
						unk_0xD65B4E942A960E26(Local_472.f_0, &iVar6);
						if (unk_0xD9F5E1FEFD1329E4(iVar6[0], 0))
						{
							unk_0xEBA229B2E0BB05E0(Local_475.f_0, iVar6[0], 20000, -1, 1f, 1, 0, 0);
							unk_0xEBA229B2E0BB05E0(Local_472.f_0, iVar6[0], 20000, 0, 1f, 1, 0, 0);
							unk_0xAAA71DD7E9059338(Local_475.f_0, 1);
							unk_0xAAA71DD7E9059338(Local_472.f_0, 1);
							iLocal_343 = 0;
							iLocal_344 = 0;
							Local_472.f_2++;
						}
					}
					break;
				
				case 1:
					if (unk_0x27E68848F0E5D7D9(Local_475.f_0))
					{
						iVar6[0] = unk_0x6EF03BE64E058E2F(Local_475.f_0, 0);
						if (!unk_0x1C2F771CDC87A3A5(iVar6[0], 0))
						{
							fVar7 = system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iVar6[0], 1));
							if (fVar7 < 225f)
							{
								if ((unk_0x1DD05E817C89C737() - iLocal_342) > 0)
								{
									iVar8 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());
									if (iVar8 != 0)
									{
										if (!func_358(&Local_493, 1))
										{
											if (!iLocal_266[76])
											{
												if (func_357(&Local_554, "ARM1AUD", "ARM1_RADIO1", 7, 0, 0, 0))
												{
													unk_0xC229299217554C78(iVar6[0], 1, 1, 0);
													unk_0x7D167E642755C276(iVar6[0], 1);
													unk_0x38911F7BA2D48F10(iVar6[0], "RADIO_01_CLASS_ROCK");
													iLocal_266[76] = 1;
													iLocal_342 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(8000, 13000));
												}
											}
											else if (iLocal_343 < 5)
											{
												if (iLocal_343 == 0)
												{
													StringCopy(&Var9, "ARM1_GETINJ2", 16);
												}
												else if (iLocal_343 == 1)
												{
													StringCopy(&Var9, "ARM1_GETINJ3", 16);
												}
												else if (iLocal_343 == 2)
												{
													StringCopy(&Var9, "ARM1_GETINJ4", 16);
												}
												else if (iLocal_343 == 3)
												{
													StringCopy(&Var9, "ARM1_GETINJ5", 16);
												}
												else if (iLocal_343 == 4)
												{
													StringCopy(&Var9, "ARM1_GETINJ6", 16);
												}
												if (func_357(&Local_554, "ARM1AUD", &Var9, 7, 0, 0, 0))
												{
													iLocal_343++;
													iLocal_342 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(8000, 13000));
												}
											}
											else if (!iLocal_266[77])
											{
												if (func_357(&Local_554, "ARM1AUD", "ARM1_FNKLEV1", 7, 0, 0, 0))
												{
													unk_0xE67051907958B5EB(Local_472.f_0, unk_0x4A8C381C258A124D(), 2000, 2048, 2);
													iLocal_266[77] = 1;
												}
											}
										}
									}
								}
							}
							MemCopy(&uVar10, {func_294()}, 4);
							if (unk_0x1B79E937E91F40C3(&uVar10, "ARM1_GETINJ"))
							{
								if (fVar7 > 400f)
								{
									func_298();
								}
							}
							if ((unk_0x1DD05E817C89C737() - iLocal_341) > 0)
							{
								if (unk_0x9B3D4335E0EDB0BE(iVar6[0], unk_0x4A8C381C258A124D(), 1))
								{
									func_871(18);
									iVar11 = unk_0xC5935DFB3F39785A(0, 2);
									iVar12 = unk_0xC5935DFB3F39785A(0, 2);
									if (iVar11 == 0)
									{
										if (iVar12 == 0)
										{
											func_292(Local_475.f_0, "GENERIC_INSULT_MED", 3);
										}
										else
										{
											func_292(Local_475.f_0, "GENERIC_CURSE_MED", 3);
										}
										iLocal_341 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(4000, 7000));
									}
									else if (iLocal_344 < 3)
									{
										if (!func_358(&Local_493, 1))
										{
											if (func_357(&Local_554, "ARM1AUD", "ARM1_FNKLEV2", 7, 0, 0, 0))
											{
												iLocal_341 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(4000, 7000));
												iLocal_344++;
											}
										}
									}
									else
									{
										if (iVar12 == 0)
										{
											func_292(Local_475.f_0, "GENERIC_INSULT_HIGH", 3);
										}
										else
										{
											func_292(Local_475.f_0, "GENERIC_CURSE_HIGH", 3);
										}
										iLocal_341 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(4000, 7000));
									}
								}
							}
							unk_0xE4DC7B3DD712372B(iVar6[0]);
							iVar13 = 0;
							while (iVar13 < iLocal_404)
							{
								if (iLocal_404[iVar13] != iVar6[0])
								{
									if (unk_0x9B3D4335E0EDB0BE(iLocal_404[iVar13], unk_0x4A8C381C258A124D(), 1))
									{
										func_871(18);
									}
								}
								iVar13++;
							}
							if (!unk_0xD9F5E1FEFD1329E4(iVar6[0], 0))
							{
								func_871(14);
							}
						}
					}
					break;
				}
		}
		fVar14 = system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -20,2493f, -1082,746f, 25,6579f);
		if (iLocal_436 != 0)
		{
			if (fVar14 > 1600f)
			{
				if (unk_0xD0B0D1BD29678350(iLocal_436))
				{
					unk_0xBBB6D0F765409642(iLocal_436);
					iLocal_436 = 0;
				}
			}
		}
		if (fVar14 > 10000f)
		{
			if (unk_0xFC8BFE4B41177C22(Local_475.f_0))
			{
				func_59(&Local_475, 1);
				func_59(&Local_472, 1);
				unk_0x268BE77F77533D03(sLocal_389);
				func_291(0, -1);
				func_363(&(Local_491[0 /*7*/]), 0);
				func_363(&(Local_491[1 /*7*/]), 0);
				if (iLocal_223)
				{
					func_363(&(iLocal_404[0]), 0);
					func_363(&(iLocal_404[1]), 0);
					func_363(&(iLocal_404[2]), 0);
					func_363(&(iLocal_404[3]), 0);
					unk_0xA63572E348CC4CFB(Local_365, Local_366, true, 1);
					iLocal_223 = 0;
				}
			}
		}
		if (unk_0xFC8BFE4B41177C22(Local_491[0 /*7*/]))
		{
			if (fVar14 > 22500f)
			{
				func_363(&(Local_491[0 /*7*/]), 0);
				func_363(&(Local_491[1 /*7*/]), 0);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(Local_471.f_0) && unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
		{
			if (system::vdist2(unk_0xD1A6A821F5AC81DB(Local_471.f_0, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > 90000f && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_400, 0))
			{
				func_871(9);
			}
			if (system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_400, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > 90000f)
			{
				func_871(13);
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(Local_491[0 /*7*/], 0) && unk_0xD9F5E1FEFD1329E4(Local_491[1 /*7*/], 0))
		{
			if ((((unk_0x1AC621DBDFE4ECA0(Local_491[0 /*7*/], 0, 2) && !unk_0x1AC621DBDFE4ECA0(Local_491[0 /*7*/], joaat("weapon_unarmed"), 0)) || (unk_0x1AC621DBDFE4ECA0(Local_491[1 /*7*/], 0, 2) && !unk_0x1AC621DBDFE4ECA0(Local_491[1 /*7*/], joaat("weapon_unarmed"), 0))) || unk_0xFFF4FB66DA549D0F(Local_491[0 /*7*/])) || unk_0xFFF4FB66DA549D0F(Local_491[1 /*7*/]))
			{
				if (unk_0x9B3D4335E0EDB0BE(Local_491[0 /*7*/], unk_0x4A8C381C258A124D(), 1) || unk_0x9B3D4335E0EDB0BE(Local_491[1 /*7*/], unk_0x4A8C381C258A124D(), 1))
				{
					func_871(12);
				}
			}
		}
	}
	if (iLocal_551 == 2)
	{
		func_290();
		func_363(&(Local_491[iLocal_283 /*7*/]), 1);
		func_363(&(Local_491[iLocal_284 /*7*/]), 1);
		func_59(&Local_475, 1);
		func_59(&Local_472, 1);
		unk_0x268BE77F77533D03(sLocal_389);
		unk_0x425BBE19F25A57AB(1f);
		if (iLocal_319 != -1)
		{
			unk_0x8E99C7AF6C6639AB(iLocal_319);
			iLocal_319 = -1;
		}
		if (iLocal_320 != -1)
		{
			unk_0x8E99C7AF6C6639AB(iLocal_320);
			iLocal_320 = -1;
		}
		iVar15 = 0;
		iVar15 = 0;
		while (iVar15 < iLocal_424)
		{
			func_289(&(iLocal_424[iVar15]), 0);
			iVar15++;
		}
		system::settimera(0);
		iLocal_282 = 0;
		iLocal_551 = 0;
		iLocal_550 = 11;
	}
	if (iLocal_551 == 3)
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				if (!unk_0xCECDBB848D53DEB2(Local_471.f_0, iLocal_400, 0))
				{
					unk_0x73CAFD2038E812B3(Local_471.f_0, iLocal_400, 0);
				}
			}
			if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_400, 0))
			{
				unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iLocal_400, -1);
			}
			unk_0xB2BD5837A8D3CEDA(iLocal_400, Local_364, 1, 0, 0, 1);
		}
		unk_0x6C39BDF5EA5D38FC(Local_364);
		iLocal_551 = 1;
	}
}

void func_289(int iParam0, bool bParam1)
{
	if (unk_0xFC8BFE4B41177C22(*iParam0))
	{
		if (unk_0xA3736D76B0E93E93(*iParam0))
		{
			unk_0x837D67618BF89034(*iParam0, 1, 1);
		}
		if (bParam1)
		{
			unk_0x51C8BEA2005931AB(iParam0);
		}
		else
		{
			unk_0xB3B56385ECA230B4(iParam0);
		}
	}
}

void func_290()
{
	if (unk_0xC450B06E5AAA0985(uLocal_418))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_418);
	}
	if (unk_0xC450B06E5AAA0985(Local_471.f_1))
	{
		unk_0xFE54B8568B2ABD12(&(Local_471.f_1));
	}
	if (unk_0xC450B06E5AAA0985(Local_475.f_1))
	{
		unk_0xFE54B8568B2ABD12(&(Local_475.f_1));
	}
	if (unk_0xC450B06E5AAA0985(Local_472.f_1))
	{
		unk_0xFE54B8568B2ABD12(&(Local_472.f_1));
	}
	if (unk_0xC450B06E5AAA0985(uLocal_419))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_419);
	}
	if (unk_0xC450B06E5AAA0985(uLocal_420))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_420);
	}
	unk_0xFE54B8568B2ABD12(&(Local_491[0 /*7*/].f_1));
	unk_0xFE54B8568B2ABD12(&(Local_491[1 /*7*/].f_1));
}

void func_291(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_64179 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		if (iParam1 == -1 || Global_76262[iVar0 /*9*/] == iParam1)
		{
			if (Global_76262[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_76262[iVar0 /*9*/].f_6 = iParam0;
				Global_76262[iVar0 /*9*/].f_7 = 1;
				Global_76262[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_292(int iParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(iParam0, sParam1, func_293(iParam2), 1);
}

int func_293(int iParam0)
{
	int iVar0;
	
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
	iVar0 = 0;
	return iVar0;
}

struct<6> func_294()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

int func_295(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_297(bParam5, bParam6);
	func_296(iParam0);
	if ((unk_0x1DD05E817C89C737() - Global_30) > 500)
	{
		unk_0xE5EE5C9DDF05D925(iParam0, fParam1, iParam2, iParam4);
	}
	Global_30 = unk_0x1DD05E817C89C737();
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_296(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xA03728CC57F6DD36(iParam0))
		{
			if (unk_0x772683F12F46CE82(iParam0))
			{
				unk_0x5B29AF88D03CEB7A(iParam0, 0);
			}
		}
	}
}

void func_297(bool bParam0, bool bParam1)
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	if (bParam0)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
	unk_0x66EFB3D6110055C4(0, 80, 1);
	if (!bParam1)
	{
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
	}
	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 138, 1);
	unk_0x66EFB3D6110055C4(0, 136, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 107, 1);
	unk_0x66EFB3D6110055C4(0, 110, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 87, 1);
	unk_0x66EFB3D6110055C4(0, 88, 1);
	unk_0x66EFB3D6110055C4(0, 113, 1);
	unk_0x66EFB3D6110055C4(0, 115, 1);
	unk_0x66EFB3D6110055C4(0, 116, 1);
	unk_0x66EFB3D6110055C4(0, 117, 1);
	unk_0x66EFB3D6110055C4(0, 118, 1);
	unk_0x66EFB3D6110055C4(0, 119, 1);
	unk_0x66EFB3D6110055C4(0, 352, 1);
	unk_0x66EFB3D6110055C4(0, 131, 1);
	unk_0x66EFB3D6110055C4(0, 132, 1);
	unk_0x66EFB3D6110055C4(0, 123, 1);
	unk_0x66EFB3D6110055C4(0, 126, 1);
	unk_0x66EFB3D6110055C4(0, 129, 1);
	unk_0x66EFB3D6110055C4(0, 130, 1);
	unk_0x66EFB3D6110055C4(0, 133, 1);
	unk_0x66EFB3D6110055C4(0, 134, 1);
	unk_0x1C74A3A76F738D39();
}

void func_298()
{
	Global_21152 = 0;
	func_299();
}

void func_299()
{
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0xC78B293A5F4EACF9();
		Global_23297 = 0;
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

void func_300(int iParam0)
{
	Global_23297 = iParam0;
}

int func_301(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x27E68848F0E5D7D9(iParam0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(iParam1))
				{
					if (unk_0xF4244288C3EF3306(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_302(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (BitTest(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_305(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
		}
		func_304(iVar0, uParam0);
		func_303(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), iVar0);
			unk_0x8744D2E3FC95740E(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
		{
			unk_0xC1BC1B8A5AA67C6B(uParam0->f_17[iVar0], 1);
			unk_0xD9757FAB956617BA(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 32, 1);
				unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()) && uParam0->f_17[iVar0] != unk_0x4A8C381C258A124D())
				{
					unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
				}
			}
			if (!BitTest(uParam0->f_13, 29))
			{
				unk_0x96A0632EBDD87FA3(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0xC1BC1B8A5AA67C6B(unk_0x4A8C381C258A124D(), 1);
		unk_0xD9757FAB956617BA(unk_0x4A8C381C258A124D(), 1);
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (bParam2)
		{
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

void func_303(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 19);
			break;
	}
}

void func_304(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 16);
			break;
	}
}

void func_305(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(uParam0->f_5))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
	}
}

int func_306(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94A7730DEC6E86C8())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		{
			return 0;
		}
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (bParam0)
		{
			if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != unk_0x4A8C381C258A124D())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x032CEF99C0D59B73(iVar0) < 0,95f || unk_0x032CEF99C0D59B73(iVar0) > 1,011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!unk_0xF7C1BF3F9EB7C65E(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

bool func_307(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23692.f_4 && Global_23692.f_104 == 4);
	}
	return Global_23692.f_4;
}

bool func_308(char* sParam0, int iParam1, int iParam2)
{
	unk_0x32A590914F10401C(sParam0);
	if (iParam1 == 1)
	{
		unk_0xACF853FB3F6EA7D4(iParam2);
	}
	return unk_0x96DEE7666C9409E5();
}

bool func_309(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13)
{
	return func_310(uParam0, Param1, Param2, iParam3, iParam4, 0, 0, iParam5, sParam6, sParam7, sParam7, sParam7, sParam7, sParam8, sParam9, bParam10, bParam11, bParam12, iParam13);
}

int func_310(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
{
	return func_311(uParam0, Param1, Param2, func_342(), func_342(), iParam3, 5, iParam4, iParam5, iParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam15, bParam16, sParam14, 0, 0, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

int func_311(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam7;
	uParam0->f_17[1] = iParam8;
	uParam0->f_17[2] = iParam9;
	uParam0->f_16 = iParam7;
	func_341(uParam0);
	func_340(uParam0);
	func_339();
	if (func_323(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, uParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_322(sParam12);
		func_322(sParam13);
		func_322(sParam14);
		func_322(sParam15);
		if (unk_0x9390801B06EE998F())
		{
			bVar1 = false;
			if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
					if (!BitTest(uParam0->f_13, 9))
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
					}
					if (BitTest(uParam0->f_13, 23))
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 23);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_320(uParam0, iParam21))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
					if (!BitTest(uParam0->f_13, 9))
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_322(sParam16);
				func_322(sParam19);
				func_322("MORE_SEATS");
				if (bParam18 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (unk_0xC450B06E5AAA0985(uParam0->f_5))
					{
						unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
						func_322(sParam11);
					}
					if (unk_0xC450B06E5AAA0985(*uParam0))
					{
						unk_0xFE54B8568B2ABD12(uParam0);
					}
					if ((!func_358(uParam0, 1) && !func_319(uParam0)) && !BitTest(uParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_317(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_292(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 0);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(uParam0->f_13, 0))
					{
						func_322("LOSE_WANTED");
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 1);
					}
					if (BitTest(uParam0->f_13, 1))
					{
						if (!func_358(uParam0, 1))
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_292(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0xC450B06E5AAA0985(uParam0->f_5))
					{
						if (unk_0xC450B06E5AAA0985(*uParam0))
						{
							unk_0xFE54B8568B2ABD12(uParam0);
						}
						uParam0->f_5 = func_50(Var3, 0);
						if (!iParam23 == -1)
						{
							unk_0x4C905FB262965D5D(uParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_316(uParam0->f_5, uParam0);
						}
					}
					else if (!func_315(Var3, unk_0x3CF9D442F2C902BD(uParam0->f_5), 0,1f, 0))
					{
						unk_0xDABC73EF230B6665(uParam0->f_5, Var3);
						if (bParam27)
						{
							func_316(uParam0->f_5, uParam0);
						}
					}
					if (!func_358(uParam0, 2))
					{
						if (!BitTest(uParam0->f_13, 2))
						{
							func_317(uParam0, sParam11, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (BitTest(uParam0->f_13, 13))
						{
							iParam5 = 0;
						}
					}
					bVar1 = false;
					iVar4 = 0;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						iVar4 = 1;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param1, Param2, iParam5, iVar4, iVar5);
						if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Param3, Param4, fParam28, 0, iVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param1, Param2, iParam5, iVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar2], func_60()) || !func_314(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_312(uParam0))
							{
								func_322(sParam11);
								func_322(sParam16);
								func_322(sParam12);
								func_322(sParam13);
								func_322(sParam14);
								func_322(sParam15);
								func_322("LOSE_WANTED");
								func_322("MORE_SEATS");
								func_322(sParam19);
								func_302(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xFC8BFE4B41177C22(iParam10))
			{
				if ((bParam18 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) && (!BitTest(uParam0->f_13, 9) && !BitTest(uParam0->f_13, 22)))
				{
					func_322(sParam16);
					func_322(sParam19);
					if (unk_0xC450B06E5AAA0985(uParam0->f_5) || unk_0xC450B06E5AAA0985(*uParam0))
					{
						unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
						unk_0xFE54B8568B2ABD12(uParam0);
						func_322(sParam11);
					}
					if ((!func_358(uParam0, 1) && !func_319(uParam0)) && !BitTest(uParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_317(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_292(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 0);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(uParam0->f_13, 0))
					{
						func_322("LOSE_WANTED");
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 1);
					}
					if (BitTest(uParam0->f_13, 1))
					{
						if (!func_358(uParam0, 1))
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_292(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
					{
						if (!unk_0xC450B06E5AAA0985(*uParam0))
						{
							if (unk_0xC450B06E5AAA0985(uParam0->f_5))
							{
								unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
								func_322(sParam11);
							}
							*uParam0 = func_360(iParam10, 0, 0);
							unk_0xF55F62DA99DB0C2F(*uParam0, 2);
							if (!BitTest(uParam0->f_13, 4))
							{
								func_316(*uParam0, uParam0);
							}
						}
						if (!func_358(uParam0, 2))
						{
							if (!BitTest(uParam0->f_13, 3))
							{
								func_317(uParam0, sParam16, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
								unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
							}
							else if (BitTest(uParam0->f_13, 9))
							{
								if (!unk_0xFF692AB7350A74D7(sParam19))
								{
									if (!BitTest(uParam0->f_13, 4))
									{
										func_317(uParam0, sParam19, 0);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
									}
								}
								else if (!BitTest(uParam0->f_13, 4))
								{
									func_317(uParam0, sParam16, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
								if (!BitTest(uParam0->f_13, 23))
								{
									if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
									{
										func_292(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_5))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
					func_322(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_358(uParam0, 2))
						{
							if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
							{
								if (!BitTest(uParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0xC5935DFB3F39785A(0, iVar6);
									if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar7]))
									{
										func_292(uParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_317(uParam0, "MORE_SEATS", 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 13);
								}
							}
							else if (!BitTest(uParam0->f_13, 3))
							{
								func_317(uParam0, sParam16, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
								unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
							}
							else if (!BitTest(uParam0->f_13, 4))
							{
								if (BitTest(uParam0->f_13, 9))
								{
									func_317(uParam0, sParam19, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_358(uParam0, 2))
					{
						if (!BitTest(uParam0->f_13, 3))
						{
							func_317(uParam0, sParam16, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
						}
						else if (BitTest(uParam0->f_13, 9))
						{
							if (!unk_0xFF692AB7350A74D7(sParam19))
							{
								if (!BitTest(uParam0->f_13, 4))
								{
									func_317(uParam0, sParam19, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							}
							else if (!BitTest(uParam0->f_13, 4))
							{
								func_317(uParam0, sParam16, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(uParam0->f_13, 0))
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 0);
		}
		func_322(sParam11);
		func_322(sParam16);
		func_322(sParam19);
		func_322(sParam16);
		func_322("LOSE_WANTED");
		if (unk_0xC450B06E5AAA0985(uParam0->f_5))
		{
			unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
		}
		if (unk_0xC450B06E5AAA0985(*uParam0))
		{
			unk_0xFE54B8568B2ABD12(uParam0);
		}
	}
	unk_0x8744D2E3FC95740E(&(uParam0->f_13), 11);
	unk_0x8744D2E3FC95740E(&(uParam0->f_13), 12);
	return 0;
}

int func_312(var uParam0)
{
	if (BitTest(uParam0->f_13, 12))
	{
		if (func_313(unk_0x4A8C381C258A124D()))
		{
			if (func_306(1, 0, 1) || BitTest(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_306(1, 0, 1) || BitTest(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_313(int iParam0)
{
	float fVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		fVar0 = unk_0xDF93B3CFAC96698F(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_314(int iParam0, int iParam1)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && iParam1)
		{
			if (func_301(unk_0x4A8C381C258A124D(), iParam0))
			{
				unk_0x316802E03D8923D8(func_60(), 50f);
				return 1;
			}
		}
		else if (unk_0xD11A63E12F198FDB(iParam0, func_60()))
		{
			unk_0x316802E03D8923D8(func_60(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_315(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x1D5CD3EAAA7422B0((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_316(var uParam0, var uParam1)
{
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		if (unk_0xC450B06E5AAA0985(uParam1->f_6))
		{
			unk_0xBC64B805EE071A37(uParam1->f_6, 0);
		}
		unk_0x0F20DD0DCEB2959F(0);
		unk_0xC3C7C9791CD79114();
		uParam1->f_6 = uParam0;
		unk_0xBC64B805EE071A37(uParam0, 1);
	}
}

void func_317(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xFF692AB7350A74D7(sParam1))
		{
			if (!unk_0x1B79E937E91F40C3(sParam1, ""))
			{
				func_318(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x1DD05E817C89C737();
}

void func_318(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

int func_319(var uParam0)
{
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_16))
	{
		if (unk_0x912159A05BE6B52E(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_320(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_321(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_321(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x2EEC0612337D20CE(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x22007BC82AF0074B(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x22007BC82AF0074B(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_322(char* sParam0)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		unk_0x4E8E15513E171E54(sParam0);
	}
}

int func_323(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<3> Var19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		{
			if (!BitTest(uParam0->f_13, 29) && !BitTest(uParam0->f_13, 28))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					unk_0x96A0632EBDD87FA3(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!BitTest(uParam0->f_13, 29) && BitTest(uParam0->f_13, 28))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
			{
				unk_0x96A0632EBDD87FA3(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (BitTest(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0xF0CA45A211FFDCD9(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 50f, 0, iVar16);
			if (unk_0xD9F5E1FEFD1329E4(iVar15, 0))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_21, 0))
		{
			if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) || !bParam17)
					{
						if (func_321(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
								{
									unk_0x4190C67D524CD0DC(uParam0->f_17[iVar0], 1f);
									if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()))
									{
										unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
									}
									if (unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle")) == 7 && !func_338(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x8BF5256C439DF778(uParam0->f_17[iVar0]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0]))
										{
											unk_0xAAA71DD7E9059338(uParam0->f_17[iVar0], 1);
											unk_0xEBA229B2E0BB05E0(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0, 0);
											unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					if (!unk_0x9D6DF8F3584AAC2B(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x974022927CB47E68(uParam0->f_17[iVar0]);
					}
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()))
					{
						if (func_336(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_60());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_335(uParam0) && unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D())) && !unk_0xFC8BFE4B41177C22(iParam10))
		{
			iVar10 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar10, 0))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_358(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0xC5935DFB3F39785A(0, iVar17);
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar18]))
						{
							func_292(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_317(uParam0, "MORE_SEATS", 0);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 13);
			func_322("MORE_SEATS");
		}
		if (!unk_0xFC8BFE4B41177C22(iParam10))
		{
			if ((!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]) || !unk_0x4FAFF4BCB7633475(uParam0->f_17[1])) || !unk_0x4FAFF4BCB7633475(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && !func_358(uParam0, 2))
					{
						iVar10 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
						if (func_334(iVar10, uParam0))
						{
							func_317(uParam0, "CMN_VEHSUIT", 0);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					unk_0x8744D2E3FC95740E(&(uParam0->f_13), 31);
					func_322("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
		{
			if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam10))
			{
				if (unk_0x875A214D5EBCA509(0, 75))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 21);
				}
			}
			else if (BitTest(uParam0->f_13, 21))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()))
					{
						unk_0x34A9A872D3C510BF(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x34A9A872D3C510BF(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
					{
						iVar10 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
						if (unk_0xD9F5E1FEFD1329E4(iVar10, 0))
						{
							if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()))
							{
								if (!func_335(uParam0) && unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
								{
									if (!func_333(uParam0->f_17[iVar0]))
									{
										unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x1C2F771CDC87A3A5(iVar10, 0))
						{
							if (unk_0xF4244288C3EF3306(uParam0->f_17[iVar0], iVar10))
							{
								if (unk_0x69799E0840A34AFB(iVar10) && !unk_0xD2A0543EC400E1A5(iVar10))
								{
									Var19 = { unk_0xD1A6A821F5AC81DB(iVar10, 1) };
									if (Var19.f_2 < -1f)
									{
										unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()))
					{
						if (unk_0x27E68848F0E5D7D9(uParam0->f_17[iVar0]))
						{
							iVar10 = unk_0x6EF03BE64E058E2F(uParam0->f_17[iVar0], 0);
							if (!unk_0x1C2F771CDC87A3A5(iVar10, 0))
							{
								if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iVar10))
										{
											if (unk_0xDF93B3CFAC96698F(iVar10) > 5f)
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
									{
										iVar20 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
									}
									if (unk_0xD9F5E1FEFD1329E4(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0xDF93B3CFAC96698F(iVar10) > 5f)
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()))
					{
						iVar21 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
						if (unk_0xFC8BFE4B41177C22(iVar21))
						{
							if (func_321(iVar21, uParam0, 0))
							{
								if (func_332(iVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], iVar0);
									func_303(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_332(iVar0, uParam0))
							{
								if (unk_0x4B423FAA24E8ABF0(iVar21) == joaat("sentinel2"))
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], 2);
								}
								func_331(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()) && !func_330(uParam0->f_17[iVar0], iParam10)) && !func_329(uParam0->f_17[iVar0], iParam10))
					{
						if (func_336(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()))
							{
								if (((!unk_0x8BF5256C439DF778(uParam0->f_17[iVar0]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0])) && !unk_0xE7895DBF72C7F282(uParam0->f_17[iVar0])) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
									if (iVar11 == 7)
									{
										unk_0x974022927CB47E68(uParam0->f_17[iVar0]);
									}
									unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_60());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x1DD05E817C89C737();
								uParam0->f_1[iVar0] = func_360(uParam0->f_17[iVar0], 0, 0);
								unk_0xF55F62DA99DB0C2F(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_316(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
					{
						if (((func_314(uParam0->f_17[iVar0], 1) || func_330(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xD9F5E1FEFD1329E4(iParam10, 0) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0)))
						{
							if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
							{
								unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
								func_322(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_316(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
					{
						if (!unk_0xF4244288C3EF3306(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0xFAA48325A90263BE(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !BitTest(uParam0->f_13, 11)) && !((bParam17 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0)))
							{
								if (unk_0x27E68848F0E5D7D9(uParam0->f_17[iVar0]))
								{
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_314(uParam0->f_17[iVar0], 1))
										{
											if (func_313(uParam0->f_17[iVar0]))
											{
												iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_leave_vehicle"));
												if (iVar11 == 7)
												{
													unk_0x092B9247AF00F5CF(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()))
									{
										if ((((!unk_0xE7895DBF72C7F282(uParam0->f_17[iVar0]) && !unk_0x8BF5256C439DF778(uParam0->f_17[iVar0])) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0])) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_17[iVar0])) && !unk_0x5B702A5D1F2635BE(iParam10))
										{
											unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
									if (iVar11 == 7 && !func_338(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xE7895DBF72C7F282(uParam0->f_17[iVar0]) && !unk_0xE7895DBF72C7F282(unk_0x4A8C381C258A124D())) && !func_328(uParam0->f_17[iVar0], 2f)) && !unk_0x8BF5256C439DF778(uParam0->f_17[iVar0])) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0])) && !unk_0x5B702A5D1F2635BE(iParam10))
										{
											unk_0xAAA71DD7E9059338(uParam0->f_17[iVar0], 1);
											if (BitTest(uParam0->f_13, 10))
											{
												unk_0x4190C67D524CD0DC(uParam0->f_17[iVar0], 1f);
											}
											unk_0xEBA229B2E0BB05E0(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0, 0);
											unk_0x379E96D5D36B27DC(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_360(uParam0->f_17[iVar0], 0, 0);
										unk_0xF55F62DA99DB0C2F(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()))
							{
								if (func_336(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x8BF5256C439DF778(uParam0->f_17[iVar0]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
										if (iVar11 == 7)
										{
											unk_0x974022927CB47E68(uParam0->f_17[iVar0]);
										}
										unk_0xAAA71DD7E9059338(uParam0->f_17[iVar0], 0);
										unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_60());
									}
								}
							}
						}
						else if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam10))
						{
							if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_60());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_60()) && !unk_0x5B702A5D1F2635BE(iParam10))
						{
							unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
					func_322(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_358(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
						{
							if (func_333(uParam0->f_17[iVar0]) || unk_0xFAA48325A90263BE(uParam0->f_17[iVar0], unk_0x4A8C381C258A124D(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
					{
						if (!unk_0xFAA48325A90263BE(uParam0->f_17[iVar0], unk_0x4A8C381C258A124D(), (uParam0->f_8 * 0,85f), (uParam0->f_8 * 0,85f), uParam0->f_8, 0, 1, 0) && !func_333(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x1DD05E817C89C737();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!BitTest(uParam0->f_13, 5))
							{
								func_317(uParam0, sParam7, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_327(iVar0, uParam0))
									{
										if (!unk_0xFF692AB7350A74D7(uVar13[iVar0]))
										{
											if (!unk_0x1B79E937E91F40C3(uVar13[iVar0], ""))
											{
												func_325(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_324(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_327(iVar0, uParam0))
										{
											func_317(uParam0, uVar12[iVar0], 0);
											func_324(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x8744D2E3FC95740E(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
					func_322(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_322("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_324(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 16);
			break;
	}
}

void func_325(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xFF692AB7350A74D7(sParam1))
		{
			if (!unk_0x1B79E937E91F40C3(sParam1, ""))
			{
				func_326(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x1DD05E817C89C737();
}

void func_326(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x0A3136AD174470CC(iParam2, 1);
}

int func_327(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 14);
		
		case 1:
			return BitTest(uParam1->f_13, 15);
		
		case 2:
			return BitTest(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_328(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(iParam0, 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0xDF93B3CFAC96698F(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_329(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (!unk_0xD11A63E12F198FDB(iParam0, func_60()))
		{
			iVar0 = unk_0x31945A289F1359A1(iParam0);
			if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
			{
				if (unk_0xFAA48325A90263BE(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_330(int iParam0, int iParam1)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
			{
				if (unk_0xF4244288C3EF3306(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_331(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 19);
			break;
	}
}

int func_332(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 17);
		
		case 1:
			return BitTest(uParam1->f_13, 18);
		
		case 2:
			return BitTest(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_333(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(iParam0))
			{
				iVar1 = unk_0xCDA725BC2F170795(iParam0);
				if (unk_0xD9F5E1FEFD1329E4(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0xFAA48325A90263BE(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_334(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("bus") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x4FAFF4BCB7633475(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xFD5C5BBD1FE92BB7(iParam0, 0, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xFD5C5BBD1FE92BB7(iParam0, 1, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xFD5C5BBD1FE92BB7(iParam0, 2, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_335(var uParam0)
{
	int iVar0;
	
	if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_321(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_336(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam1))
	{
		if (unk_0x27E68848F0E5D7D9(iParam1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam1, 0);
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
				{
					if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iVar0))
					{
						if (func_335(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (func_321(iVar0, uParam0, 0))
					{
						if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
						{
							if (func_337(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_337(int iParam0)
{
	float fVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		fVar0 = unk_0xDF93B3CFAC96698F(iParam0);
		if (fVar0 > -0,5f && fVar0 < 0,5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
		{
			iVar0 = unk_0xCDA725BC2F170795(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_339()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		iVar0 = unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D());
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			iVar1 = unk_0xFD5C5BBD1FE92BB7(iVar0, 0, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar1))
			{
				if (iVar1 != unk_0x4A8C381C258A124D())
				{
					if (unk_0x110821AE6C63DD4F(iVar1))
					{
						if (!unk_0x2E0309EF5F2EBDB1(iVar1, unk_0x4A8C381C258A124D()))
						{
							unk_0xE67051907958B5EB(iVar1, unk_0x4A8C381C258A124D(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_340(var uParam0)
{
	int iVar0;
	
	if (!BitTest(uParam0->f_13, 25))
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 32, 0);
					unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 305, 1);
					unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 268, 1);
					unk_0x379E96D5D36B27DC(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 25);
	}
}

void func_341(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
			{
				if (unk_0x27E68848F0E5D7D9(uParam0->f_17[iVar0]))
				{
					unk_0xC1BC1B8A5AA67C6B(uParam0->f_17[iVar0], 0);
					unk_0xD9757FAB956617BA(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				unk_0xC1BC1B8A5AA67C6B(unk_0x4A8C381C258A124D(), 0);
				unk_0xD9757FAB956617BA(unk_0x4A8C381C258A124D(), 0);
			}
		}
	}
}

Vector3 func_342()
{
	struct<3> Var0;
	
	return Var0;
}

bool func_343(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_356(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22293 = 0;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 1;
	Global_23279 = 0;
	Global_23283 = 0;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_344(sParam2, iParam4, 0);
}

int func_344(char* sParam0, int iParam1, bool bParam2)
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
					func_355();
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
		if (func_354(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_353();
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
			unk_0x8744D2E3FC95740E(&Global_8802, 0);
			if (bParam2)
			{
				func_352();
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
				if (func_351())
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
			if (func_70())
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
			func_350();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_349();
		func_345();
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
		func_355();
	}
	return 0;
}

void func_345()
{
	if (!func_346())
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

int func_346()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_205())
	{
		return 0;
	}
	if (func_347(unk_0x259BE71D8A81D4FA()))
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

bool func_347(int iParam0)
{
	return func_348(iParam0, 20);
}

var func_348(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

void func_349()
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

void func_350()
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

int func_351()
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

void func_352()
{
	if (func_30(14))
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
		Global_20930 = func_78();
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

void func_353()
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

bool func_354(int iParam0, int iParam1)
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

void func_355()
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

void func_356(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_357(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_356(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_344(sParam2, iParam3, 0);
}

int func_358(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x5994A2F6D4FFFE4D())
	{
		if (unk_0xFBA523E6F8ACE541())
		{
			return 1;
		}
		if (func_359(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x5994A2F6D4FFFE4D())
	{
		if (func_101() && !func_100())
		{
			return 1;
		}
	}
	return 0;
}

int func_359(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x1DD05E817C89C737();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_360(int iParam0, bool bParam1, bool bParam2)
{
	return func_361(iParam0, !bParam1, bParam2);
}

int func_361(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_51(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_51(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_51(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

void func_362()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_266;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_266[iVar1] = 0;
		iVar1++;
	}
}

void func_363(int iParam0, bool bParam1)
{
	if (unk_0xFC8BFE4B41177C22(*iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(*iParam0, 0))
		{
			unk_0xC0086E5CBF13BBF7(*iParam0, -8f, 1);
			if (unk_0xA3736D76B0E93E93(*iParam0))
			{
				unk_0x837D67618BF89034(*iParam0, 1, 1);
			}
		}
		if (bParam1)
		{
			unk_0x8C1F7D7A31B2A38E(iParam0);
		}
		else
		{
			unk_0x68298CA6191CDFDB(iParam0);
		}
	}
}

void func_364(bool bParam0)
{
	unk_0xA63572E348CC4CFB(-44,9779f, -1093,988f, 19,4526f, -30,0332f, -1074,433f, 39,4526f, !bParam0, 1);
	unk_0xA63572E348CC4CFB(-20,801f, -1084,057f, 20,8603f, -3,4886f, -1050,998f, 31,8603f, !bParam0, 1);
	if (bParam0)
	{
		unk_0x60040CDD28AA1BC3(-37f, -1087f, 26f, 5f, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_365()
{
	if (iLocal_444 == 0)
	{
		iLocal_444 = unk_0xA7B0B03284E7503C(-49,41105f, -1078,832f, 20,47327f, -44,08052f, -1071,936f, 39,47327f, 0, 1, 1, 1, 1);
	}
	if (iLocal_445 == 0)
	{
		iLocal_445 = unk_0xA7B0B03284E7503C(-54,5514f, -1111,473f, 22,2924f, -39,9018f, -1104,013f, 39,7759f, 0, 1, 1, 1, 1);
	}
}

float func_366(float fParam0)
{
	return (fParam0 * 0,01745329f);
}

void func_367()
{
	if (unk_0xD9F5E1FEFD1329E4(Local_491[0 /*7*/], 0) && unk_0xD9F5E1FEFD1329E4(Local_491[1 /*7*/], 0))
	{
		unk_0x232B023FE4D977E2(Local_491[0 /*7*/], 1);
		unk_0x232B023FE4D977E2(Local_491[1 /*7*/], 1);
	}
}

void func_368()
{
	if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
	{
		unk_0x5C96CEA06531AB03(Local_491[iLocal_284 /*7*/], fLocal_281);
		unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_284 /*7*/], Local_377, 1, 0, 0, 1);
		unk_0x5D7CD709B34C90F0(Local_491[iLocal_284 /*7*/], 1);
		unk_0xF04751F8E604D487(Local_491[iLocal_284 /*7*/], 0);
	}
}

int func_369(struct<3> Param0, float fParam1, bool bParam2)
{
	if (!unk_0xFC8BFE4B41177C22(Local_472.f_0))
	{
		func_371(18);
		if (func_370(18))
		{
			if (!bParam2)
			{
				if (func_284(&Local_472, 18, Param0, fParam1, 1))
				{
					unk_0xD1C578C204015E1F(Local_472.f_0, 3, 1, 0, 0);
					unk_0x3F58BFCF656F0DF1(Local_472.f_0, 0);
					unk_0x3CEA1FD137ACE2D9(Local_472.f_0, joaat("player"));
				}
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_370(bool bParam0)
{
	if (!func_11(bParam0))
	{
		return unk_0x6252BC0DD8A320DB(func_286(bParam0));
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

void func_371(bool bParam0)
{
	if (!func_11(bParam0))
	{
		unk_0xEC9DAA34BBB4658C(func_286(bParam0));
	}
	else if (bParam0 != 145)
	{
	}
}

int func_372(struct<3> Param0, float fParam1, bool bParam2)
{
	if (!unk_0xFC8BFE4B41177C22(Local_475.f_0))
	{
		func_371(14);
		if (func_370(14))
		{
			if (!bParam2)
			{
				if (func_284(&Local_475, 14, Param0, fParam1, 1))
				{
					unk_0xD1C578C204015E1F(Local_475.f_0, 3, 4, 0, 0);
					unk_0xD1C578C204015E1F(Local_475.f_0, 1, 1, 0, 0);
					unk_0xD1C578C204015E1F(Local_475.f_0, 2, 2, 0, 0);
					unk_0xD1C578C204015E1F(Local_475.f_0, 4, 0, 1, 0);
					unk_0xD1C578C204015E1F(Local_475.f_0, 6, 0, 1, 0);
					unk_0xD1C578C204015E1F(Local_475.f_0, 8, 3, 0, 0);
					unk_0xD1C578C204015E1F(Local_475.f_0, 10, 2, 0, 0);
					unk_0x3F58BFCF656F0DF1(Local_475.f_0, 0);
					unk_0x3CEA1FD137ACE2D9(Local_475.f_0, joaat("player"));
				}
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_373(struct<3> Param0, float fParam1)
{
	if (!unk_0xFC8BFE4B41177C22(Local_491[1 /*7*/]))
	{
		unk_0xEC9DAA34BBB4658C(iLocal_449);
		if (unk_0x6252BC0DD8A320DB(iLocal_449))
		{
			Local_491[1 /*7*/] = unk_0x5779387E956077A6(iLocal_449, Param0, fParam1, 1, 1, 0);
			unk_0x1DE99C193C7EC64B(Local_491[1 /*7*/], 1084227584);
			unk_0x9452FE4900245259(Local_491[1 /*7*/], 0f);
			unk_0xD133EF7430EDCD09(Local_491[1 /*7*/], 28, 28);
			unk_0xBB361D7264AC4FD8(Local_491[1 /*7*/], 23, 0);
			unk_0xD05AF216D970F274(Local_491[1 /*7*/], 1);
			unk_0x5FE0938FDE9B0958(Local_491[1 /*7*/], 1);
			unk_0x439C904840715871(Local_491[1 /*7*/], 0);
			unk_0xD25E9BDC14A0B649(Local_491[1 /*7*/], 2000, 0, 0);
			unk_0xDD38B2935A3EAC56(Local_491[1 /*7*/], 0, 0);
			unk_0x3FEAE59CDE6D3946(Local_491[1 /*7*/], "2603AM56");
			unk_0x03DACC5F7E5335AC(Local_491[1 /*7*/], 0);
			unk_0x515A606E0E38355D(Local_491[1 /*7*/], 0);
			unk_0x06A3C9A5604F9F4C(Local_491[1 /*7*/], 0);
			unk_0xE59BDA10CE05FD35(Local_491[1 /*7*/], 0);
			unk_0xF2FCE3F2F4D0CB50(Local_491[1 /*7*/], 1);
			unk_0x55098D9E9AD58806(iLocal_449);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_374(struct<3> Param0, float fParam1)
{
	if (!unk_0xFC8BFE4B41177C22(Local_491[0 /*7*/]))
	{
		unk_0xEC9DAA34BBB4658C(iLocal_448);
		if (unk_0x6252BC0DD8A320DB(iLocal_448))
		{
			Local_491[0 /*7*/] = unk_0x5779387E956077A6(iLocal_448, Param0, fParam1, 1, 1, 0);
			unk_0x1DE99C193C7EC64B(Local_491[0 /*7*/], 1084227584);
			unk_0x9452FE4900245259(Local_491[0 /*7*/], 0f);
			unk_0xD133EF7430EDCD09(Local_491[0 /*7*/], 111, 111);
			unk_0xBB361D7264AC4FD8(Local_491[0 /*7*/], 111, 0);
			unk_0xD25E9BDC14A0B649(Local_491[0 /*7*/], 2000, 0, 0);
			unk_0xD05AF216D970F274(Local_491[0 /*7*/], 1);
			unk_0x5FE0938FDE9B0958(Local_491[0 /*7*/], 1);
			unk_0x439C904840715871(Local_491[0 /*7*/], 0);
			unk_0xDD38B2935A3EAC56(Local_491[0 /*7*/], 0, 0);
			unk_0x3FEAE59CDE6D3946(Local_491[0 /*7*/], "5912FL34");
			unk_0x03DACC5F7E5335AC(Local_491[0 /*7*/], 0);
			unk_0x515A606E0E38355D(Local_491[0 /*7*/], 0);
			unk_0x06A3C9A5604F9F4C(Local_491[0 /*7*/], 0);
			unk_0xE59BDA10CE05FD35(Local_491[0 /*7*/], 0);
			unk_0xF2FCE3F2F4D0CB50(Local_491[0 /*7*/], 1);
			unk_0x55098D9E9AD58806(iLocal_448);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_375(bool bParam0)
{
	struct<3> Var0;
	int iVar1;
	
	if (!iLocal_223)
	{
		Var0 = { Local_365 + Vector((Local_366.f_2 - Local_366.f_2), (Local_366.f_1 - Local_366.f_1), (Local_366.f_0 - Local_365.f_0)) };
		unk_0x60040CDD28AA1BC3(Var0, 30f, 0, 0, 0, 0, 0, 0, 0);
		unk_0xA63572E348CC4CFB(Local_365, Local_366, false, 1);
		iLocal_223 = 1;
	}
	unk_0xEC9DAA34BBB4658C(joaat("bjxl"));
	unk_0xEC9DAA34BBB4658C(joaat("ninef"));
	if (unk_0x6252BC0DD8A320DB(joaat("bjxl")) && unk_0x6252BC0DD8A320DB(joaat("ninef")))
	{
		if (!bParam0)
		{
			if (!unk_0xFC8BFE4B41177C22(iLocal_404[0]))
			{
				iLocal_404[0] = unk_0x5779387E956077A6(joaat("ninef"), -49,9f, -1094,7f, 26,1366f, 96,8607f, 1, 1, 0);
				unk_0xD133EF7430EDCD09(iLocal_404[0], 31, 0);
				unk_0xBB361D7264AC4FD8(iLocal_404[0], 42, 0);
				unk_0x11C125313CB8ADA2(iLocal_404[0], 1);
				iLocal_404[1] = unk_0x5779387E956077A6(joaat("bjxl"), -46,5f, -1097,5f, 26,35f, 108,8107f, 1, 1, 0);
				unk_0xD133EF7430EDCD09(iLocal_404[1], 126, 126);
				unk_0xBB361D7264AC4FD8(iLocal_404[1], 126, 0);
				unk_0x3FEAE59CDE6D3946(iLocal_404[1], "57EIG117");
				unk_0x11C125313CB8ADA2(iLocal_404[1], 1);
				iLocal_404[2] = unk_0x5779387E956077A6(joaat("ninef"), -41,7f, -1099,5f, 26,0304f, 137,6117f, 1, 1, 0);
				unk_0xD133EF7430EDCD09(iLocal_404[2], 1, 1);
				unk_0xBB361D7264AC4FD8(iLocal_404[2], 15, 0);
				unk_0x11C125313CB8ADA2(iLocal_404[2], 1);
				iLocal_404[3] = unk_0x5779387E956077A6(joaat("bjxl"), -36,8f, -1101,2f, 26,0912f, 151,7322f, 1, 1, 0);
				unk_0xD133EF7430EDCD09(iLocal_404[3], 1, 111);
				unk_0xBB361D7264AC4FD8(iLocal_404[3], 4, 0);
				unk_0x11C125313CB8ADA2(iLocal_404[3], 1);
			}
			unk_0x55098D9E9AD58806(joaat("bjxl"));
			unk_0x55098D9E9AD58806(joaat("ninef"));
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < iLocal_404)
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_404[iVar1], 0))
				{
					unk_0xF04751F8E604D487(iLocal_404[iVar1], 0);
				}
				iVar1++;
			}
		}
		return 1;
	}
	return 0;
}

int func_376(bool bParam0)
{
	if (!unk_0xFC8BFE4B41177C22(iLocal_405[0]))
	{
		unk_0xEC9DAA34BBB4658C(joaat("blista"));
		if (unk_0x6252BC0DD8A320DB(joaat("blista")))
		{
			if (!bParam0)
			{
				unk_0x2094BC4B6731BA68(-11,6041f, -1080,867f, 25,6721f, 20f, 1, 0, 0, 0);
				iLocal_405[0] = unk_0x5779387E956077A6(joaat("blista"), -8,6907f, -1082,098f, 25,6721f, 128,8319f, 1, 1, 0);
				unk_0x55098D9E9AD58806(joaat("blista"));
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_377()
{
	if (iLocal_283 == iLocal_284)
	{
		iLocal_283 = Global_97947;
		if (iLocal_283 == 0)
		{
			iLocal_284 = 1;
		}
		else
		{
			iLocal_284 = 0;
		}
	}
}

void func_378()
{
	if (iLocal_551 == 4)
	{
		if (iLocal_282 != 99)
		{
			if (iLocal_436 == 0)
			{
				iLocal_436 = unk_0x0556019E7EE8EC9A(-38,62f, -1099,01f, 27,31f, "v_carshowroom");
			}
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_374, 1, 0, 0, 1);
			unk_0x74C1590CC91B3930(iLocal_436);
			if (unk_0xD0B0D1BD29678350(iLocal_436))
			{
				if (bLocal_254)
				{
					func_287(Local_374, 335,0142f, 0, 0);
					iLocal_282 = 99;
				}
				else
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_374, 1, 0, 0, 1);
					unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
					unk_0x6C39BDF5EA5D38FC(Local_374);
					unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
					iLocal_282 = 99;
				}
			}
		}
		else
		{
			unk_0x80813AC549A1E8AE(sLocal_389);
			func_377();
			if ((((((((func_282(Local_369, fLocal_272, 0) && func_374(34,0424f, -638,7692f, 30,6252f, 0)) && func_373(44,0424f, -638,7692f, 30,6252f, 0)) && func_193(Local_367, fLocal_270, 0)) && func_372(Local_374, fLocal_278, 0)) && func_369(Local_375, fLocal_279, 0)) && func_376(0)) && func_375(0)) && unk_0xE100DD4F82A51BDE(sLocal_389))
			{
				func_190(0, -1, 0);
				func_368();
				func_367();
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_368, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fLocal_271);
				func_365();
				iLocal_235 = 1;
				iLocal_551 = 0;
			}
		}
	}
	if (iLocal_551 == 0)
	{
		if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 256);
		}
		unk_0x839AD252B0708F35(sLocal_381, 8);
		func_102(sLocal_381);
		if (!unk_0x1C2F771CDC87A3A5(Local_491[0 /*7*/], 0))
		{
			unk_0x2814BEDF5E0AF4C0(Local_491[0 /*7*/], 1);
		}
		if (!unk_0x1C2F771CDC87A3A5(Local_491[1 /*7*/], 0))
		{
			unk_0x2814BEDF5E0AF4C0(Local_491[1 /*7*/], 1);
		}
		if (func_99() && (!func_358(&Local_493, 1) || system::timera() > 5000))
		{
			if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				unk_0x84B06A81C98DA4B8(Local_471.f_0);
				unk_0xF293D66D4452C854(Local_471.f_0, "Lamar", 0, 0, 0);
			}
			if (!unk_0x4FAFF4BCB7633475(Local_475.f_0))
			{
				unk_0xF293D66D4452C854(Local_475.f_0, "Jimmy", 0, 0, 0);
			}
			if (!unk_0x4FAFF4BCB7633475(Local_472.f_0))
			{
				unk_0xF293D66D4452C854(Local_472.f_0, "Siemon", 0, 0, 0);
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_404[0], 0))
			{
				unk_0xF293D66D4452C854(iLocal_404[0], "ninef^1", 0, 0, 0);
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_404[1], 0))
			{
				unk_0xF293D66D4452C854(iLocal_404[1], "Jimmys_Car", 0, 0, 0);
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_404[2], 0))
			{
				unk_0xF293D66D4452C854(iLocal_404[2], "Franklin_stealcar", 0, 0, 0);
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_404[3], 0))
			{
				unk_0xF293D66D4452C854(iLocal_404[3], "bjxl^1", 0, 0, 0);
			}
			unk_0xED65412F8B26ED99(0);
			iLocal_319 = unk_0x8CC50AC10D8037C7(-59f, -1095,8f, 25,4223f, 10f, 4f, 3f, func_366(-67,2459f), 0, 7);
			iLocal_320 = unk_0x8CC50AC10D8037C7(-37,4137f, -1108,567f, 25,4223f, 4f, 4f, 3f, func_366(72,3459f), 0, 7);
			func_72();
			func_62(1, 1, 1, 0, 0, 0, 0);
			unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
			unk_0xB9784D6C7219851B(4);
			system::settimerb(0);
			system::settimera(0);
			iLocal_282 = 0;
			iLocal_551 = 1;
		}
	}
	if (iLocal_551 == 1)
	{
		switch (iLocal_282)
		{
			case 0:
				if (unk_0xFD216000DC314A92())
				{
					unk_0x406CBCEA35499884();
					unk_0x428C32CC68809A35(1);
					if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
					{
						unk_0x44C48AC14D3C09ED(Local_491[iLocal_283 /*7*/], 1, 0);
						unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_283 /*7*/], Local_376, 1, 0, 0, 1);
						unk_0x5C96CEA06531AB03(Local_491[iLocal_283 /*7*/], fLocal_280);
						unk_0x1DE99C193C7EC64B(Local_491[iLocal_283 /*7*/], 1084227584);
						unk_0x5D7CD709B34C90F0(Local_491[iLocal_283 /*7*/], 1);
						unk_0x0B74F181ADFC39BF(Local_491[iLocal_283 /*7*/], 3);
						unk_0xC229299217554C78(Local_491[iLocal_283 /*7*/], 0, 0, 0);
					}
					unk_0x3C44EF9027A21847(1);
					unk_0x268BE77F77533D03(sLocal_395);
					unk_0x268BE77F77533D03(sLocal_389);
					func_58();
					iLocal_282++;
				}
				break;
		}
		func_193(Local_367, fLocal_270, 0);
		if (unk_0xD9E3F021F9D8CEF9())
		{
			unk_0x1837D912F4EDCA95(0, 0, 0, 0);
			iLocal_221 = 1;
		}
		if (!unk_0x0CB7695268A7F50F())
		{
			iLocal_551 = 2;
		}
		else
		{
			if (unk_0x2B60F53D06BC6971(0))
			{
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
			}
			if (unk_0xD8FC13DA1BA1DBA2("Franklin", unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D())))
			{
				unk_0x8EAC8FBDF8A3830E(unk_0x259BE71D8A81D4FA(), 1f, 2000, fLocal_271, 0, 0, 0);
			}
			if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				if (unk_0xD8FC13DA1BA1DBA2("Lamar", unk_0x4B423FAA24E8ABF0(Local_471.f_0)))
				{
					unk_0xB2BD5837A8D3CEDA(Local_471.f_0, Local_369, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(Local_471.f_0, fLocal_272);
					if (unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
					{
						unk_0xEBA229B2E0BB05E0(Local_471.f_0, iLocal_400, 40000, 0, 1f, 1, 0, 0);
						unk_0x717804C8C8DA67BF(Local_471.f_0, joaat("MotionState_Walk"), 0, 1, 0);
					}
				}
			}
		}
		unk_0x80813AC549A1E8AE(sLocal_389);
	}
	if (iLocal_551 == 2)
	{
		unk_0x3B327805C3CAF8DC();
		func_290();
		func_62(0, 1, 1, 0, 0, 0, 0);
		system::settimera(0);
		iLocal_282 = 0;
		iLocal_551 = 0;
		iLocal_550 = 10;
		func_379(1, 0);
	}
	if (iLocal_551 == 3)
	{
		func_3();
		unk_0x3B327805C3CAF8DC();
		unk_0x1837D912F4EDCA95(0, 0, 0, 0);
		if (unk_0xFD216000DC314A92())
		{
			unk_0xB479965CBAA3EAE1(0);
		}
		unk_0xDD291722ADDCBD60();
		while (unk_0x0CB7695268A7F50F() || !func_193(Local_367, fLocal_270, 0))
		{
			system::wait(0);
		}
		if (unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
		{
			unk_0xB2BD5837A8D3CEDA(iLocal_400, Local_367, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(iLocal_400, fLocal_270);
		}
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
		{
			unk_0x44C48AC14D3C09ED(Local_491[iLocal_283 /*7*/], 1, 0);
			unk_0x5C96CEA06531AB03(Local_491[iLocal_283 /*7*/], fLocal_280);
			unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_283 /*7*/], Local_376, 1, 0, 0, 1);
			unk_0x1DE99C193C7EC64B(Local_491[iLocal_283 /*7*/], 1084227584);
			unk_0x5D7CD709B34C90F0(Local_491[iLocal_283 /*7*/], 1);
			unk_0x0B74F181ADFC39BF(Local_491[iLocal_283 /*7*/], 3);
			unk_0xC229299217554C78(Local_491[iLocal_283 /*7*/], 0, 0, 0);
		}
		if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
		{
			unk_0xB2BD5837A8D3CEDA(Local_471.f_0, Local_369, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(Local_471.f_0, fLocal_272);
		}
		unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_368, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fLocal_271);
		iLocal_551 = 2;
	}
}

int func_379(int iParam0, int iParam1)
{
	if (BitTest(Global_101533.f_20, 17))
	{
		return 0;
	}
	return func_380(iParam0, iParam1);
}

int func_380(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_381(iParam0, iParam1);
}

int func_381(int iParam0, int iParam1)
{
	if (func_30(14) && !func_392(iParam0))
	{
		return 0;
	}
	if (unk_0x37088D2C63AC4C01(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33199 != 0 && !Global_79389)
	{
		return 0;
	}
	if (func_391(&Global_4543384))
	{
		if (func_389(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_382(&Global_4543384, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x584E143398F9661C(iParam0))
		{
			return 0;
		}
		if (unk_0x37088D2C63AC4C01(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_382(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_30(14) && !func_392(iParam1))
	{
		return 0;
	}
	if (func_389(uParam0, iParam1))
	{
		return 0;
	}
	if (func_388(uParam0) < 0f)
	{
		func_387(uParam0, 0);
	}
	func_385(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_383(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_383(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_30(14) && !func_392(iParam1))
	{
		return 0;
	}
	if (func_389(uParam0, iParam1))
	{
		return 0;
	}
	if (func_388(uParam0) < 0f)
	{
		func_387(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_384(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_384(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_385(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_386(uParam0, iVar0);
		iVar0++;
	}
	func_387(uParam0, (Global_4543383 - 0,5f));
}

void func_386(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_387(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_388(var uParam0)
{
	return uParam0->f_80;
}

bool func_389(var uParam0, int iParam1)
{
	return func_390(uParam0, iParam1) != -1;
}

int func_390(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_391(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_392(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

void func_393()
{
	int iVar0;
	
	if (iLocal_551 == 4)
	{
		if (iLocal_282 != 99)
		{
			if (iLocal_436 == 0)
			{
				iLocal_436 = unk_0x0556019E7EE8EC9A(-38,62f, -1099,01f, 27,31f, "v_carshowroom");
			}
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_368, 1, 0, 0, 1);
			unk_0x74C1590CC91B3930(iLocal_436);
			if (unk_0xD0B0D1BD29678350(iLocal_436))
			{
				if (bLocal_254)
				{
					func_287(Local_368, 335,0142f, 0, 0);
					iLocal_282 = 99;
				}
				else
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_368, 1, 0, 0, 1);
					unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
					unk_0x6C39BDF5EA5D38FC(Local_368);
					unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
					iLocal_282 = 99;
				}
			}
		}
		else
		{
			func_377();
			if (((((func_282(Local_369, fLocal_272, 0) && func_374(34,0424f, -638,7692f, 30,6252f, 0)) && func_373(44,0424f, -638,7692f, 30,6252f, 0)) && func_193(Local_367, fLocal_270, 0)) && func_376(0)) && func_375(0))
			{
				func_190(0, -1, 0);
				func_368();
				func_367();
				func_365();
				iLocal_235 = 1;
				bLocal_261 = false;
				iLocal_551 = 0;
			}
		}
	}
	if (iLocal_551 == 0)
	{
		unk_0x80813AC549A1E8AE(sLocal_389);
		unk_0x80813AC549A1E8AE(sLocal_395);
		unk_0xEC9DAA34BBB4658C(iLocal_463);
		if ((((((func_372(Local_374, fLocal_278, 0) && func_369(Local_375, fLocal_279, 0)) && func_282(-37,542f, -1084,87f, 25,4344f, 246,4778f, 0)) && unk_0xE100DD4F82A51BDE(sLocal_389)) && unk_0xE100DD4F82A51BDE(sLocal_395)) && unk_0x6252BC0DD8A320DB(iLocal_463)) && (!unk_0x4FAFF4BCB7633475(Local_471.f_0) && unk_0x69CD279BFCFE278E(Local_471.f_0)))
		{
			unk_0x6981C3213B841071();
			if (unk_0x15CCE8886267624F())
			{
				func_283(&Local_554, 6, Local_475.f_0, "JIMMY", 0, 1);
				func_283(&Local_554, 4, Local_472.f_0, "SIMEON", 0, 1);
				func_396(&Local_554, "ARM1AUD", "ARM1_MCS1LI", 7, 0, 0, 0, 0);
				while (!func_376(0))
				{
					system::wait(0);
				}
				if (iLocal_282 != 99)
				{
					func_48(Local_376, 300f, 1, 10000);
				}
			}
			if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
			{
				if (!bLocal_261)
				{
					if (unk_0x050D073F91C5243C(Local_491[iLocal_283 /*7*/]))
					{
						unk_0x1D2DAF2A41FFC4A0(Local_491[iLocal_283 /*7*/]);
					}
					unk_0x44C48AC14D3C09ED(Local_491[iLocal_283 /*7*/], 1, 0);
					unk_0x5D7CD709B34C90F0(Local_491[iLocal_283 /*7*/], 0);
					unk_0x5C96CEA06531AB03(Local_491[iLocal_283 /*7*/], fLocal_280);
					unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_283 /*7*/], Local_376, 1, 0, 0, 1);
					unk_0xC229299217554C78(Local_491[iLocal_283 /*7*/], 0, 0, 0);
					unk_0xF04751F8E604D487(Local_491[iLocal_283 /*7*/], 0);
					if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/], 0))
					{
						unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/], -1);
					}
					unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
					if (unk_0x15CCE8886267624F() && unk_0xBCF87EE3DC296C2A(0) == 4)
					{
						unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
						system::wait(100);
					}
					else
					{
						unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 100, 0);
					}
				}
				else
				{
					unk_0x4285E11B28063EE0(Local_491[iLocal_283 /*7*/], 1, 0);
					unk_0x4285E11B28063EE0(unk_0x4A8C381C258A124D(), 1, 0);
				}
			}
			if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
			{
				unk_0x5D7CD709B34C90F0(Local_491[iLocal_284 /*7*/], 0);
				unk_0xC229299217554C78(Local_491[iLocal_284 /*7*/], 0, 0, 0);
				unk_0xF04751F8E604D487(Local_491[iLocal_284 /*7*/], 0);
				unk_0x5C96CEA06531AB03(Local_491[iLocal_284 /*7*/], fLocal_281);
				unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_284 /*7*/], Local_377, 1, 0, 0, 1);
			}
			iVar0 = 0;
			if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				unk_0x19626F992DC71FB9(Local_471.f_0);
				Local_471.f_4 = unk_0x2EC137C692A52458(-30,995f, -1094,7f, 25,423f, 0f, 0f, -18,72f, 2);
				if (unk_0x15CCE8886267624F())
				{
					unk_0x3DA436E63AB0F541(Local_471.f_0, Local_471.f_4, sLocal_395, "leadin_loop", 1000f, -4f, 5, 145, 1148846080, 0);
					unk_0x16B754A9C2FD8E74(Local_471.f_4, 1f);
					unk_0xBF3497E24DEAD835(Local_471.f_4, 1);
					iVar0 = 1;
				}
				else
				{
					unk_0x3DA436E63AB0F541(Local_471.f_0, Local_471.f_4, sLocal_395, "leadin_action", 1000f, -4f, 5, 145, 1148846080, 0);
					unk_0x16B754A9C2FD8E74(Local_471.f_4, 0,98f);
					unk_0xBF3497E24DEAD835(Local_471.f_4, 0);
				}
				unk_0xE67051907958B5EB(Local_471.f_0, unk_0x4A8C381C258A124D(), -1, 2048, 2);
				iLocal_429 = unk_0x4E55EAB577C13329(iLocal_463, -30,99f, -1094,082f, 25,423f, 1, 1, 0);
				unk_0x4D306DD94DD6FDBA(iLocal_429, Local_471.f_0, unk_0x72F7E39FB49FC0BA(Local_471.f_0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				unk_0x55098D9E9AD58806(iLocal_463);
			}
			unk_0x428C32CC68809A35(1);
			unk_0x3AA8CFEBC938A945(0);
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
			func_62(0, 1, 1, 0, 0, 0, 0);
			unk_0x747786364137DC63(1);
			unk_0x37B894853929BF1A(1);
			unk_0x64BB72494B9DF6DC(0f);
			unk_0xD815D4BD1AE9E85A(0f, 1065353216);
			unk_0xA63572E348CC4CFB(-66,2173f, -1121,954f, 14,8642f, -41,2857f, -1111,164f, 34,8642f, true, 1);
			unk_0x268BE77F77533D03(sLocal_384);
			func_364(1);
			func_362();
			unk_0x86A2BC11844DEEB3("ARM1_RADIO_ON");
			if (!unk_0x9390801B06EE998F())
			{
				if (!unk_0xDDED2C93E8FD5B69())
				{
					unk_0x10B228D2FDB7AF16(800);
				}
				while (!unk_0x9390801B06EE998F())
				{
					if (!unk_0x1C2F771CDC87A3A5(Local_491[0 /*7*/], 0))
					{
						unk_0x2814BEDF5E0AF4C0(Local_491[0 /*7*/], 1);
					}
					if (!unk_0x1C2F771CDC87A3A5(Local_491[1 /*7*/], 0))
					{
						unk_0x2814BEDF5E0AF4C0(Local_491[1 /*7*/], 1);
					}
					system::wait(0);
				}
			}
			if (iVar0 && !unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				Local_471.f_4 = unk_0x2EC137C692A52458(-30,995f, -1094,7f, 25,423f, 0f, 0f, -18,72f, 2);
				unk_0x3DA436E63AB0F541(Local_471.f_0, Local_471.f_4, sLocal_395, "leadin_action", 8f, -4f, 5, 145, 1148846080, 0);
				unk_0x7BB893EF8F683419(Local_471.f_4, 0f);
				unk_0x16B754A9C2FD8E74(Local_471.f_4, 0,97f);
				unk_0xBF3497E24DEAD835(Local_471.f_4, 0);
			}
			if (!unk_0x4FAFF4BCB7633475(Local_475.f_0) && !unk_0x4FAFF4BCB7633475(Local_472.f_0))
			{
				iLocal_338 = unk_0x2EC137C692A52458(-39,546f, -1092,79f, 25,422f, 0f, 0f, 0f, 2);
				unk_0x3DA436E63AB0F541(Local_472.f_0, iLocal_338, sLocal_389, "_leadin_simeon", 1000f, -1,5f, 5, 0, 1148846080, 0);
				unk_0x3DA436E63AB0F541(Local_475.f_0, iLocal_338, sLocal_389, "_leadin_jimmy", 1000f, -1,5f, 5, 0, 1148846080, 0);
				unk_0x7BB893EF8F683419(iLocal_338, 0,35f);
			}
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			func_395();
			unk_0x4190C67D524CD0DC(unk_0x4A8C381C258A124D(), 1f);
			system::settimera(0);
			iLocal_282 = 0;
			iLocal_551 = 1;
		}
	}
	if (iLocal_551 == 1)
	{
		func_395();
		unk_0x4190C67D524CD0DC(unk_0x4A8C381C258A124D(), 1f);
		if ((!iLocal_266[52] && !unk_0x4FAFF4BCB7633475(Local_472.f_0)) && !unk_0x4FAFF4BCB7633475(Local_475.f_0))
		{
			func_394();
			iLocal_266[52] = 1;
		}
		if (!unk_0x1C2F771CDC87A3A5(Local_491[0 /*7*/], 0))
		{
			unk_0x2814BEDF5E0AF4C0(Local_491[0 /*7*/], 1);
		}
		if (!unk_0x1C2F771CDC87A3A5(Local_491[1 /*7*/], 0))
		{
			unk_0x2814BEDF5E0AF4C0(Local_491[1 /*7*/], 1);
		}
		if (iLocal_262)
		{
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x07938654FF332D78(1, iLocal_552);
				iLocal_262 = 0;
			}
			else
			{
				unk_0x66EFB3D6110055C4(0, 0, 1);
			}
		}
		switch (iLocal_282)
		{
			case 0:
				if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -34,0797f, -1094,802f, 25,17234f, -35,01475f, -1097,344f, 27,67234f, 9,5f, 0, 1, 0))
				{
					unk_0x861EAB644E1BBA7A(unk_0xD1A6A821F5AC81DB(iLocal_404[1], 0), -1, 2500, 2000, 0);
					unk_0x39723B4B969CC059(0,6f);
					unk_0x4302C09C88CF5356(0,015f);
					unk_0x640D5D2C8DE912A2(0,05f);
					unk_0x4F5BF7798505A667(30f);
					unk_0xD5864F7F5BC214FF(1);
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
					unk_0xA966E518B752B92A(unk_0x4A8C381C258A124D(), -39,6f, -1097f, 25,6f, 1f, -1, 0,25f, 5, 40000f);
					if (!unk_0x4FAFF4BCB7633475(Local_472.f_0))
					{
						unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), Local_472.f_0, -1, 2048, 2);
					}
					iLocal_282++;
				}
				break;
		}
		if ((!unk_0x4FAFF4BCB7633475(Local_472.f_0) && !unk_0x4FAFF4BCB7633475(Local_475.f_0)) && !unk_0x4FAFF4BCB7633475(Local_471.f_0))
		{
			if (!unk_0xC450B06E5AAA0985(Local_472.f_1))
			{
				Local_472.f_1 = func_360(Local_472.f_0, 0, 0);
			}
			unk_0xB27B08E34AC92345(unk_0x4A8C381C258A124D(), 0,87f);
			if (func_358(&Local_493, 0))
			{
				if (unk_0x5266F1D2AEF6F73A(iLocal_338) && unk_0xBD3B265153D3BA2D(iLocal_338) >= 0,9f)
				{
					func_298();
				}
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_429))
			{
				if (unk_0x5D640DD02AFD9F75(Local_471.f_0, -2033458239))
				{
					func_289(&iLocal_429, 1);
				}
			}
			if (((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -38,59081f, -1095,907f, 25,4223f, -51,04851f, -1100,539f, 27,4223f, 10,5f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -26,40492f, -1086,267f, 25,57324f, -31,38518f, -1084,528f, 27,57324f, 2,25f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -37,61462f, -1108,704f, 25,45593f, -38,44304f, -1110,918f, 27,43603f, 2,25f, 0, 1, 0)) || (unk_0x5266F1D2AEF6F73A(iLocal_338) && unk_0xBD3B265153D3BA2D(iLocal_338) >= 0,99f))
			{
				iLocal_551 = 2;
			}
		}
		unk_0x839AD252B0708F35(sLocal_381, 8);
		func_102(sLocal_381);
	}
	if (iLocal_551 == 2)
	{
		func_290();
		func_298();
		func_289(&iLocal_429, 1);
		system::settimera(0);
		iLocal_282 = 0;
		iLocal_551 = 0;
		iLocal_550 = 9;
	}
	if (iLocal_551 == 3)
	{
		iLocal_551 = 2;
	}
}

void func_394()
{
	unk_0x43D69D4AAC59FA8E();
	Global_23278 = 0;
}

void func_395()
{
	unk_0x66EFB3D6110055C4(0, 21, 1);
	unk_0x66EFB3D6110055C4(0, 22, 1);
	unk_0x66EFB3D6110055C4(0, 24, 1);
	unk_0x66EFB3D6110055C4(0, 257, 1);
	unk_0x66EFB3D6110055C4(0, 44, 1);
	unk_0x66EFB3D6110055C4(0, 36, 1);
	unk_0x66EFB3D6110055C4(0, 23, 1);
	unk_0x66EFB3D6110055C4(0, 263, 1);
	unk_0x66EFB3D6110055C4(0, 264, 1);
	unk_0x66EFB3D6110055C4(0, 143, 1);
	unk_0x66EFB3D6110055C4(0, 262, 1);
	unk_0x66EFB3D6110055C4(0, 261, 1);
	unk_0x66EFB3D6110055C4(0, 25, 1);
	unk_0x66EFB3D6110055C4(0, 45, 1);
	unk_0x66EFB3D6110055C4(0, 141, 1);
	unk_0x66EFB3D6110055C4(0, 140, 1);
	unk_0x66EFB3D6110055C4(0, 142, 1);
	unk_0x66EFB3D6110055C4(0, 37, 1);
}

bool func_396(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_356(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_23279 = 1;
	Global_23283 = 0;
	Global_23281 = iParam7;
	Global_2883585 = 0;
	return func_344(sParam2, iParam3, 0);
}

void func_397()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	
	unk_0xA0265306DFF63938(0f);
	unk_0xF8A2800C0B863DB1(1f);
	if (iLocal_551 == 4)
	{
		if (iLocal_282 != 99)
		{
			if (bLocal_254)
			{
				func_287(Local_367, 335,0142f, 0, 0);
				iLocal_282 = 99;
			}
			else
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Local_367, 1, 0, 0, 1);
				unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
				unk_0x6C39BDF5EA5D38FC(Local_367);
				unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
				iLocal_282 = 99;
			}
		}
		else
		{
			if (iLocal_436 == 0)
			{
				iLocal_436 = unk_0x0556019E7EE8EC9A(-38,62f, -1099,01f, 27,31f, "v_carshowroom");
			}
			unk_0x74C1590CC91B3930(iLocal_436);
			func_377();
			if ((((func_282(-37,542f, -1084,87f, 25,4344f, 246,4778f, 0) && func_374(34,0424f, -638,7692f, 30,6252f, 0)) && func_373(44,0424f, -638,7692f, 30,6252f, 0)) && func_193(Local_367, fLocal_270, 0)) && unk_0xD0B0D1BD29678350(iLocal_436))
			{
				func_190(0, -1, 0);
				func_401();
				func_368();
				func_367();
				func_365();
				func_364(1);
				bLocal_255 = false;
				iLocal_551 = 0;
			}
		}
	}
	if (iLocal_551 == 0)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
		unk_0xD772E6694B8472A6(330, sLocal_379);
		unk_0xD772E6694B8472A6(331, sLocal_379);
		unk_0xD772E6694B8472A6(332, sLocal_379);
		unk_0xD772E6694B8472A6(333, sLocal_379);
		unk_0x80813AC549A1E8AE(sLocal_384);
		if (((((func_375(1) && unk_0x266D9DB5FCE4003B(330, sLocal_379)) && unk_0x266D9DB5FCE4003B(331, sLocal_379)) && unk_0x266D9DB5FCE4003B(332, sLocal_379)) && unk_0x266D9DB5FCE4003B(333, sLocal_379)) && (unk_0xE100DD4F82A51BDE(sLocal_384) || !bLocal_250))
		{
			unk_0x406CBCEA35499884();
			unk_0x428C32CC68809A35(1);
			func_290();
			func_302(&Local_493, 1, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0x98188EDB7446A033();
			if (unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
			{
				unk_0xB2BD5837A8D3CEDA(iLocal_400, Local_367, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(iLocal_400, fLocal_270);
				unk_0x1DE99C193C7EC64B(iLocal_400, 1084227584);
			}
			if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
			{
				unk_0xC229299217554C78(Local_491[iLocal_284 /*7*/], 0, 0, 0);
				unk_0x0B74F181ADFC39BF(Local_491[iLocal_284 /*7*/], 3);
			}
			func_363(&(iLocal_404[0]), 1);
			func_363(&(iLocal_404[1]), 1);
			func_363(&(iLocal_404[2]), 1);
			func_363(&(iLocal_404[3]), 1);
			unk_0xECDFDC2E8AC2D613(0);
			unk_0x2094BC4B6731BA68(-42,8436f, -1111,725f, 25,4355f, 100f, 1, 0, 0, 0);
			func_375(0);
			unk_0xA63572E348CC4CFB(-66,2173f, -1121,954f, 14,8642f, -41,2857f, -1111,164f, 34,8642f, false, 1);
			if (unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_TO_DEALERSHIP"))
			{
				unk_0xB43467C43086A6A1("ARM_1_DRIVE_TO_DEALERSHIP");
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iLocal_404)
			{
				if (iVar0 == 0)
				{
					unk_0x62C438C53BB57AFD(iLocal_404[0], -49,9f, -1094,7f, 26,0416f, 0, 0, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0x62C438C53BB57AFD(iLocal_404[1], -46,5f, -1097,5f, 26,35f, 0, 0, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x62C438C53BB57AFD(iLocal_404[2], -41,7f, -1099,5f, 26,0304f, 0, 0, 1);
				}
				else if (iVar0 == 3)
				{
					unk_0x62C438C53BB57AFD(iLocal_404[3], -36,8f, -1101,2f, 26,3321f, 0, 0, 1);
				}
				unk_0x5D7CD709B34C90F0(iLocal_404[iVar0], 1);
				iVar0++;
			}
			if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				unk_0x4285E11B28063EE0(Local_471.f_0, 1, 0);
				unk_0x935364B4448CD584(Local_471.f_0, 0);
				unk_0x44C48AC14D3C09ED(Local_471.f_0, 1, 0);
				unk_0x5D7CD709B34C90F0(Local_471.f_0, 0);
			}
			unk_0x2094BC4B6731BA68(unk_0xD1A6A821F5AC81DB(Local_491[iLocal_283 /*7*/], 1), 10f, 1, 0, 0, 0);
			unk_0x8B0110C1F1D9D177(unk_0xD1A6A821F5AC81DB(Local_491[iLocal_283 /*7*/], 1), 200f, 0);
			if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
			{
				unk_0xC3680B85B2D7086A(Local_491[iLocal_283 /*7*/], 1);
				if (!unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/]))
				{
					unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
					unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/], -1);
				}
				if (unk_0xDF93B3CFAC96698F(Local_491[iLocal_283 /*7*/]) < 30f)
				{
					Var1 = { unk_0x88124E0D60FB8D11(Local_491[iLocal_283 /*7*/], 2) };
					if (unk_0x1D5CD3EAAA7422B0(Var1.f_1) < 30f && unk_0x1D5CD3EAAA7422B0(Var1.f_0) < 45f)
					{
						bLocal_255 = true;
					}
				}
			}
			if (bLocal_255)
			{
				if (!bLocal_234)
				{
					unk_0xD1B0AF388B711EBC(-89,0913f, -1133,143f, 0,886f, 13,5596f, -1053,273f, 53,886f, 1, 1);
					if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
					{
						unk_0xCF6CC9EA0D2EFE23(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/], -27,3f, -1082f, 26,2f, 15f, 0, unk_0x4B423FAA24E8ABF0(Local_491[iLocal_283 /*7*/]), 4456448, 2f, 5f);
					}
				}
			}
			else if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
			{
				if (!bLocal_234)
				{
					if (iLocal_283 == 0)
					{
						if (bLocal_233)
						{
							unk_0x88556DA0593A0748(Local_491[iLocal_283 /*7*/], 330, sLocal_379, 1);
							func_400(&(Local_491[iLocal_283 /*7*/]), 4535f);
						}
						else
						{
							unk_0x88556DA0593A0748(Local_491[iLocal_283 /*7*/], 331, sLocal_379, 1);
							func_400(&(Local_491[iLocal_283 /*7*/]), 2200f);
						}
					}
					else if (bLocal_233)
					{
						unk_0x88556DA0593A0748(Local_491[iLocal_283 /*7*/], 332, sLocal_379, 1);
						func_400(&(Local_491[iLocal_283 /*7*/]), 4435f);
					}
					else
					{
						unk_0x88556DA0593A0748(Local_491[iLocal_283 /*7*/], 333, sLocal_379, 1);
						func_400(&(Local_491[iLocal_283 /*7*/]), 3000f);
					}
					unk_0x44A13535A15C20E0(Local_491[iLocal_283 /*7*/], 1);
				}
			}
			unk_0x3AA8CFEBC938A945(0);
			if (bLocal_250)
			{
				uLocal_421 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 1);
				if (bLocal_233)
				{
					iLocal_308 = unk_0x2EC137C692A52458(-58,096f, -1099,135f, 25,565f, 0f, 0f, -20f, 2);
					unk_0xF9B66DAE101B699C(uLocal_421, iLocal_308, "car_dealership_int_ltr_cam", sLocal_384);
					unk_0x7BB893EF8F683419(iLocal_308, 0f);
				}
				else
				{
					iLocal_308 = unk_0x2EC137C692A52458(-58,096f, -1101,335f, 25,565f, 0f, 0f, -20f, 2);
					unk_0xF9B66DAE101B699C(uLocal_421, iLocal_308, "car_dealership_int_rtl_cam", sLocal_384);
					unk_0x7BB893EF8F683419(iLocal_308, 0f);
				}
			}
			else
			{
				uLocal_421 = unk_0x69D23632E4288DBD("DEFAULT_SPLINE_CAMERA", 0);
				unk_0x859FFC7F5DEC29DE(uLocal_421, 2);
				if (bLocal_234)
				{
					unk_0xF5317F0839442D94(uLocal_421, unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -77,54986f, -1116,585f, 27,78851f, 0,939515f, -0,028141f, -58,80625f, 35,0707f, 1, 2), 0, 3);
				}
				else if (bLocal_233)
				{
					unk_0xF5317F0839442D94(uLocal_421, unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -77,71259f, -1116,481f, 27,74226f, 0,890156f, -0,013359f, -38,18335f, 35,0707f, 1, 2), 0, 3);
				}
				else
				{
					unk_0xF5317F0839442D94(uLocal_421, unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -77,88025f, -1116,144f, 27,74217f, 0,890156f, -0,013359f, -94,54407f, 35,0707f, 1, 2), 0, 3);
				}
				unk_0xF5317F0839442D94(uLocal_421, unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -77,58225f, -1116,546f, 27,78374f, 0,890799f, -0,014147f, -60,93074f, 35,0707f, 1, 2), 5000, 1);
				unk_0xF5317F0839442D94(uLocal_421, unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", -77,09956f, -1117,414f, 27,78397f, 0,890799f, -0,014147f, -60,93074f, 35,0707f, 1, 2), 6700, 1);
			}
			unk_0x4CBC5D1BC117616B(uLocal_421, 1);
			unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
			func_62(1, 1, 1, 0, 0, 0, 0);
			unk_0x747786364137DC63(0);
			unk_0x37B894853929BF1A(0);
			unk_0x86A2BC11844DEEB3("ARM1_RADIO_OFF");
			if (bLocal_234)
			{
				system::settimerb(1500);
			}
			else
			{
				system::settimerb(0);
			}
			unk_0xA62957B100C8DE6D(4f, 12f, 4);
			func_58();
			bLocal_261 = false;
			iLocal_221 = 0;
			iLocal_282 = 0;
			iLocal_551 = 1;
		}
	}
	if (iLocal_551 == 1)
	{
		unk_0x97A041099E92C69F(0, 0, 0);
		func_282(-37,542f, -1084,87f, 25,4344f, 246,4778f, 0);
		switch (iLocal_282)
		{
			case 0:
				if (system::timerb() > 4500 && !bLocal_261)
				{
					unk_0x44C48AC14D3C09ED(Local_491[iLocal_283 /*7*/], 0, 0);
					if (!unk_0x050D073F91C5243C(Local_491[iLocal_283 /*7*/]))
					{
						unk_0x5D7CD709B34C90F0(Local_491[iLocal_283 /*7*/], 1);
					}
				}
				unk_0x80813AC549A1E8AE(sLocal_389);
				unk_0x80813AC549A1E8AE(sLocal_395);
				if (bLocal_233)
				{
					Var2 = { Local_374 };
					Var3 = { Local_375 };
				}
				else
				{
					Var2 = { -51,6f, -1091,9f, 25,9f };
					Var3 = { -51f, -1090,1f, 25,7f };
				}
				if (func_372(Var2, fLocal_278, 0) && func_369(Var3, fLocal_279, 0))
				{
					func_283(&Local_554, 6, Local_475.f_0, "JIMMY", 0, 1);
					func_283(&Local_554, 4, Local_472.f_0, "SIMEON", 0, 1);
					func_396(&Local_554, "ARM1AUD", "ARM1_MCS1LI", 7, 0, 0, 0, 0);
					if (unk_0xE100DD4F82A51BDE(sLocal_389) && system::timerb() > 8500)
					{
						iLocal_551 = 2;
					}
				}
				if (!iLocal_266[51])
				{
					if (system::timerb() > 2500)
					{
						func_57("AR1_SHOWROOM", 13000);
						iLocal_266[51] = 1;
					}
				}
				if (!iLocal_262)
				{
					if (system::timerb() > 8300)
					{
						iVar4 = unk_0xBCF87EE3DC296C2A(0);
						iVar5 = unk_0xBCF87EE3DC296C2A(1);
						if (((iVar4 == 4 && iVar5 != 4) && unk_0xD511F6B5FB8D3854() != 4) || (iVar4 != 4 && (iVar5 == 4 || unk_0xD511F6B5FB8D3854() == 4)))
						{
							iLocal_552 = iVar5;
							unk_0x07938654FF332D78(1, iVar4);
							iLocal_262 = 1;
						}
					}
				}
				if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
				{
					if (unk_0x182BD9AD1675B5DE(Local_491[iLocal_283 /*7*/]))
					{
						if (system::timerb() > 8000)
						{
							unk_0xC229299217554C78(Local_491[iLocal_283 /*7*/], 0, 0, 0);
						}
					}
				}
				if (system::timerb() > 5000)
				{
					if (!unk_0x1C2F771CDC87A3A5(Local_491[0 /*7*/], 0))
					{
						unk_0x2814BEDF5E0AF4C0(Local_491[0 /*7*/], 1);
					}
					if (!unk_0x1C2F771CDC87A3A5(Local_491[1 /*7*/], 0))
					{
						unk_0x2814BEDF5E0AF4C0(Local_491[1 /*7*/], 1);
					}
				}
				break;
		}
		if (func_398(1000))
		{
			iLocal_221 = 1;
			iLocal_551 = 3;
		}
		func_376(0);
	}
	if (iLocal_551 == 2)
	{
		unk_0x7821F942CAEEBEE1(330, sLocal_379);
		unk_0x7821F942CAEEBEE1(331, sLocal_379);
		unk_0x7821F942CAEEBEE1(332, sLocal_379);
		unk_0x7821F942CAEEBEE1(333, sLocal_379);
		unk_0xECDFDC2E8AC2D613(-1);
		unk_0x33B6B083EA6305A5(-89,0913f, -1133,143f, 0,886f, 13,5596f, -1053,273f, 53,886f, 1);
		iLocal_282 = 0;
		iLocal_551 = 0;
		iLocal_550 = 8;
	}
	if (iLocal_551 == 3)
	{
		if (!unk_0x15CCE8886267624F())
		{
			if (!unk_0x78ABC1D11B34F324())
			{
				unk_0x8F72AF14CE5AACE4(800);
			}
			while (!unk_0x15CCE8886267624F())
			{
				unk_0xA0265306DFF63938(0f);
				system::wait(0);
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(iLocal_400, 0))
		{
			unk_0xB2BD5837A8D3CEDA(iLocal_400, Local_367, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(iLocal_400, fLocal_270);
		}
		bLocal_261 = false;
		iLocal_551 = 2;
	}
}

int func_398(int iParam0)
{
	if (unk_0x9390801B06EE998F())
	{
		if ((unk_0x1DD05E817C89C737() - Global_29) > iParam0)
		{
			Global_28 = unk_0x1DD05E817C89C737();
		}
		Global_29 = unk_0x1DD05E817C89C737();
		if ((unk_0x1DD05E817C89C737() - Global_28) > iParam0)
		{
			if (func_399())
			{
				Global_28 = unk_0x1DD05E817C89C737();
				return 1;
			}
		}
	}
	return 0;
}

int func_399()
{
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (unk_0x875A214D5EBCA509(0, 18) || unk_0x875A214D5EBCA509(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_400(int iParam0, float fParam1)
{
	if (!unk_0x1C2F771CDC87A3A5(*iParam0, 0))
	{
		if (unk_0x050D073F91C5243C(*iParam0))
		{
			unk_0x8BCD7C11D27FB9A1(*iParam0, (fParam1 - unk_0x157F3D5A4AAB2C50(*iParam0)));
		}
	}
}

void func_401()
{
	if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
	{
		if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/], 0))
		{
			unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/], -1);
		}
	}
}

void func_402()
{
	struct<82> Var0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	if (iLocal_551 == 4)
	{
		if (bLocal_254)
		{
			func_287(35,2234f, -646,9493f, 30,6292f, 335,0142f, 0, 0);
			iLocal_282 = 99;
		}
		else
		{
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 35,2234f, -646,9493f, 30,6292f, 1, 0, 0, 1);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
			unk_0x6C39BDF5EA5D38FC(35,2234f, -646,9493f, 30,6292f);
			system::wait(0);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
			iLocal_282 = 99;
		}
		func_377();
		func_414(180, 0, 0, 1, 0);
		unk_0xEC9DAA34BBB4658C(joaat("police3"));
		unk_0xEC9DAA34BBB4658C(joaat("s_m_y_cop_01"));
		unk_0xD772E6694B8472A6(300, sLocal_379);
		while (((((!unk_0xFC8BFE4B41177C22(Local_471.f_0) || !unk_0xFC8BFE4B41177C22(Local_491[0 /*7*/])) || !unk_0xFC8BFE4B41177C22(Local_491[1 /*7*/])) || !unk_0x6252BC0DD8A320DB(joaat("police3"))) || !unk_0x6252BC0DD8A320DB(joaat("s_m_y_cop_01"))) || !unk_0x266D9DB5FCE4003B(300, sLocal_379))
		{
			func_282(-25,356f, -1086,305f, 25,5721f, 52,8017f, 0);
			func_374(34,0424f, -638,7692f, 30,6252f, 0);
			func_373(44,0424f, -638,7692f, 30,6252f, 0);
			unk_0xEC9DAA34BBB4658C(joaat("police3"));
			unk_0xEC9DAA34BBB4658C(joaat("s_m_y_cop_01"));
			unk_0xD772E6694B8472A6(300, sLocal_379);
			system::wait(0);
		}
		func_190(0, -1, 0);
		func_401();
		func_368();
		func_367();
		func_413();
		unk_0x89609F1D3BE65A34(unk_0x259BE71D8A81D4FA(), 0);
		unk_0x5EF96FB2D3902DC7(unk_0x4A8C381C258A124D());
		unk_0xD682DD0578BF5392(0);
		unk_0x8B0110C1F1D9D177(44,4942f, -634,8408f, 34,55825f, 400f, 0);
		iLocal_398 = unk_0x5779387E956077A6(joaat("police3"), 87,5619f, -588,9714f, 30,599f, 160,1988f, 1, 1, 0);
		unk_0xC229299217554C78(iLocal_398, 1, 1, 0);
		unk_0x4539850624F18A9E(iLocal_398, 1);
		unk_0x9CCFFF877AB82ACA(iLocal_398, 300, sLocal_379, 1, 0, 786603);
		func_400(&iLocal_398, 10500f);
		unk_0x55098D9E9AD58806(joaat("police3"));
		iLocal_411[0] = unk_0x8728A378EF2B46B2(iLocal_398, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
		unk_0xB41DEC3AAC1AA107(iLocal_411[0], joaat("weapon_pistol"), -1, 0, 1);
		unk_0xBE8796DB2B90A437(iLocal_411[0], 2, 0);
		unk_0xAAA71DD7E9059338(iLocal_411[0], 0);
		iLocal_411[1] = unk_0x8728A378EF2B46B2(iLocal_398, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
		unk_0xB41DEC3AAC1AA107(iLocal_411[1], joaat("weapon_pistol"), -1, 0, 1);
		unk_0xBE8796DB2B90A437(iLocal_411[1], 2, 0);
		unk_0xAAA71DD7E9059338(iLocal_411[1], 0);
		unk_0x55098D9E9AD58806(joaat("s_m_y_cop_01"));
		if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
		{
			unk_0xB2BD5837A8D3CEDA(Local_471.f_0, -32,912f, -1086,304f, 29,2035f, 1, 0, 0, 1);
			unk_0x5D7CD709B34C90F0(Local_471.f_0, 1);
			unk_0x44C48AC14D3C09ED(Local_471.f_0, 0, 0);
			unk_0x4285E11B28063EE0(Local_471.f_0, 0, 0);
		}
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
		{
			unk_0xC229299217554C78(Local_491[iLocal_283 /*7*/], 1, 1, 0);
			if (iLocal_283 == 0)
			{
				unk_0x5C96CEA06531AB03(Local_491[iLocal_283 /*7*/], 337,9254f);
				unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_283 /*7*/], 35,9457f, -646,1738f, 30,6258f, 1, 0, 0, 1);
			}
			else
			{
				unk_0x5C96CEA06531AB03(Local_491[iLocal_283 /*7*/], 335,015f);
				unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_283 /*7*/], 35,2234f, -646,9493f, 30,6292f, 1, 0, 0, 1);
			}
		}
		func_414(180, 0, 0, 1, 0);
		unk_0x64BB72494B9DF6DC((-50,5f - unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D())));
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		system::wait(500);
		iLocal_551 = 0;
	}
	if (iLocal_551 == 0)
	{
		unk_0x425BBE19F25A57AB(1f);
		unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 2, 0);
		unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAE61414743C8D1D(2);
		unk_0x489BA9F867E58A85(unk_0x259BE71D8A81D4FA());
		unk_0xA0265306DFF63938(1f);
		unk_0x283C0970282AA5F3(3);
		unk_0xAD9B1C8FED6B4D96(3);
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
		unk_0xE0A0D0E41195BAC0(unk_0x259BE71D8A81D4FA(), 1, 0);
		unk_0xCC1C92F7E1A3CE9D(3, 1);
		unk_0xD682DD0578BF5392(0);
		unk_0x8B0110C1F1D9D177(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 200f, 0);
		func_412(1);
		bLocal_234 = false;
		bLocal_233 = false;
		iLocal_236 = 0;
		if (bLocal_260)
		{
			Local_492.f_1 = 0;
		}
		if (!Local_492.f_1)
		{
			iLocal_266[19] = 0;
		}
		func_365();
		func_364(1);
		func_411(9, 1);
		func_410(1);
		func_74(48, 1);
		func_74(47, 1);
		if (!unk_0xBC2EE32DE886BD08("ARM_1_LOSE_COPS"))
		{
			unk_0xCAC4020CCF361AC8("ARM_1_LOSE_COPS");
		}
		if (unk_0x15CCE8886267624F())
		{
			unk_0x60040CDD28AA1BC3(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 100f, 0, 0, 0, 0, 0, 0, 0);
		}
		func_58();
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
		{
			unk_0x999C62072AF920FD(Local_491[iLocal_283 /*7*/], 1);
			unk_0x935364B4448CD584(Local_491[iLocal_283 /*7*/], 0);
			unk_0x680C862D9FC0F4BC(Local_491[iLocal_283 /*7*/], 0);
		}
		func_409(2, 0);
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
		unk_0xA62957B100C8DE6D(0f, 15f, 3);
		func_886(2, "LOSE_COPS", 0, 0, 0, 1);
		system::settimera(0);
		iLocal_256 = 0;
		iLocal_315 = 0;
		iLocal_314 = unk_0x1DD05E817C89C737();
		iLocal_332 = 0;
		iLocal_282 = 0;
		iLocal_551 = 1;
	}
	if (iLocal_551 == 1)
	{
		func_408(0, 1);
		if ((unk_0x1DD05E817C89C737() - iLocal_314) < 7000)
		{
			unk_0x489BA9F867E58A85(unk_0x259BE71D8A81D4FA());
			unk_0x75690DF4B79CDDCC(unk_0x259BE71D8A81D4FA());
			unk_0xEFE2B06D5134CD46(unk_0x259BE71D8A81D4FA(), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
			unk_0x873D736C20070A10(unk_0x259BE71D8A81D4FA());
		}
		if (unk_0xD9F5E1FEFD1329E4(iLocal_398, 0))
		{
			if (!unk_0x050D073F91C5243C(iLocal_398))
			{
				if (iLocal_315 == 0)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_411[0]))
					{
						unk_0xBF348C17AF180F42(iLocal_411[0], unk_0x4A8C381C258A124D());
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_411[1]))
					{
						unk_0xBF348C17AF180F42(iLocal_411[1], unk_0x4A8C381C258A124D());
					}
					iLocal_315 = unk_0x1DD05E817C89C737();
				}
				else if ((unk_0x1DD05E817C89C737() - iLocal_315) > 2000)
				{
					func_59(&(iLocal_411[0]), 0);
					func_59(&(iLocal_411[1]), 0);
					func_363(&iLocal_398, 0);
				}
			}
		}
		switch (iLocal_282)
		{
			case 0:
				if ((unk_0x1DD05E817C89C737() - iLocal_314) > 120000 || !unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					unk_0xD682DD0578BF5392(1);
					iLocal_282++;
				}
				break;
		}
		if (!iLocal_266[75])
		{
			if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				unk_0x7A9F2D6596A1FF08("SCRIPTED_SCANNER_REPORT_ARMENIAN_1_02", 0);
				iLocal_266[75] = 1;
			}
		}
		if (func_406(&Local_493, Local_362, 0,001f, 0,001f, 2f, 1, Local_491[iLocal_283 /*7*/], "AR1_GOGARAGE", "", "CMN_GENGETBCK", 1, 0, 1, -1))
		{
			iLocal_551 = 2;
		}
		if (!iLocal_256)
		{
			if (!unk_0x1F9EB85925C3ECD7())
			{
				unk_0x7A9F2D6596A1FF08("SCRIPTED_SCANNER_REPORT_ARMENIAN_1_01", 0);
				iLocal_256 = 1;
			}
		}
		if (unk_0xC450B06E5AAA0985(Local_493.f_5))
		{
			if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_362) < 10000f)
			{
				unk_0xD772E6694B8472A6(330, sLocal_379);
				unk_0xD772E6694B8472A6(331, sLocal_379);
				unk_0xD772E6694B8472A6(332, sLocal_379);
				unk_0xD772E6694B8472A6(333, sLocal_379);
				Var0.f_11 = 12;
				Var0.f_31 = 49;
				Var0.f_81 = 2;
				func_278(1, &Var0, 0);
				unk_0xEC9DAA34BBB4658C(Var0.f_0);
			}
			bVar1 = unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -58,52349f, -1072,446f, 25,51242f, -47,36769f, -1076,728f, 28,77682f, 14,75f, 0, 1, 0);
			bVar2 = unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -11,13597f, -1091,419f, 25,42208f, -24,34815f, -1126,346f, 29,78418f, 13f, 0, 1, 0);
			if (bVar1 || bVar2)
			{
				bLocal_233 = bVar1;
				iLocal_551 = 2;
			}
			if (((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -26,30199f, -1092,126f, 25,43398f, -34,19631f, -1089,122f, 28,43427f, 3f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -32,19282f, -1086,231f, 25,43401f, -35,28241f, -1094,512f, 28,43435f, 1,5f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -26,85529f, -1088,089f, 25,43394f, -28,94933f, -1094,195f, 28,43419f, 1,5f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -21,09365f, -1085,448f, 25,60689f, -32,26557f, -1081,161f, 28,40192f, 7,75f, 0, 1, 0))
			{
				bLocal_234 = true;
				iLocal_551 = 2;
			}
		}
		if (!unk_0x1F9EB85925C3ECD7())
		{
			func_59(&Local_471, 1);
		}
		if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		{
			if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/], 0))
			{
				if (!unk_0x4C705AAF75363287())
				{
					if (system::timera() > 3000)
					{
						if (!iLocal_266[45])
						{
							func_57("AR1_COPHELP1", 13000);
							iLocal_266[45] = 1;
							unk_0x3C77232660BA1403(1);
						}
						else if (!iLocal_266[46])
						{
							unk_0x3C77232660BA1403(0);
							func_57("AR1_COPHELP2", 13000);
							iLocal_266[46] = 1;
						}
						else if (!iLocal_266[47])
						{
							func_57("AR1_COPHELP2B", 13000);
							iLocal_266[47] = 1;
						}
						else if (!iLocal_266[48])
						{
							func_57("AR1_COPHELP3", 13000);
							iLocal_266[48] = 1;
						}
						else if (!iLocal_266[49])
						{
							func_57("AR1_DUCKHELP", 13000);
							iLocal_266[49] = 1;
						}
					}
				}
				if (!iLocal_266[50])
				{
					if (!func_358(&Local_493, 0))
					{
						func_292(unk_0x4A8C381C258A124D(), "GENERIC_CURSE_MED", 4);
						iLocal_266[50] = 1;
					}
				}
			}
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -21,09365f, -1085,448f, 25,60689f, -32,26557f, -1081,161f, 28,40192f, 7,75f, 0, 1, 0))
			{
				func_871(22);
			}
		}
		else
		{
			if (!iLocal_266[49] && !unk_0x4C705AAF75363287())
			{
				func_57("AR1_DUCKHELP", 13000);
				iLocal_266[49] = 1;
			}
			if (!iLocal_236)
			{
				unk_0x3C77232660BA1403(0);
				func_405(0, -1);
				iLocal_236 = 1;
			}
		}
		if (iLocal_266[49] && func_49("AR1_DUCKHELP"))
		{
			if (unk_0x6D05C5731A838CB3(0, 73))
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_350) > 500)
				{
					unk_0x428C32CC68809A35(1);
				}
			}
			else
			{
				iLocal_350 = unk_0x1DD05E817C89C737();
			}
		}
		if (!unk_0xC450B06E5AAA0985(Local_493.f_0))
		{
			if (!Local_492.f_1)
			{
				if (iLocal_266[49] || !unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (!iLocal_266[19])
					{
						if (!unk_0x4C705AAF75363287())
						{
							if (unk_0xAE231F549813BBDF(0))
							{
								func_57("AR1_RAGEBAR_KM", 13000);
							}
							else
							{
								func_57("AR1_RAGEBAR", 13000);
							}
							iLocal_266[19] = 1;
							unk_0x8E8EDF5205B15D28(10000);
						}
					}
				}
				if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
				{
					func_404();
					Local_492.f_1 = 1;
				}
			}
		}
		else
		{
			if (func_49("AR1_RAGEBAR"))
			{
				func_404();
			}
			if (unk_0x761778199FE1211C())
			{
				if (func_49("AR1_RAGEBAR_KM"))
				{
					func_404();
				}
			}
		}
		if (iLocal_436 == 0)
		{
			iLocal_436 = unk_0x0556019E7EE8EC9A(-38,62f, -1099,01f, 27,31f, "v_carshowroom");
		}
		bVar3 = system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -38,62f, -1099,01f, 27,31f) > 62500f;
		bVar4 = system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -38,62f, -1099,01f, 27,31f) < 40000f;
		if (bVar4)
		{
			func_193(Local_367, fLocal_270, 0);
			unk_0x80813AC549A1E8AE(sLocal_384);
			if (unk_0xD0B0D1BD29678350(iLocal_436))
			{
				if (!func_403())
				{
					func_375(0);
				}
			}
			else
			{
				unk_0x74C1590CC91B3930(iLocal_436);
			}
		}
		else if (bVar3)
		{
			func_375(1);
			func_363(&(iLocal_404[0]), 1);
			func_363(&(iLocal_404[1]), 1);
			func_363(&(iLocal_404[2]), 1);
			func_363(&(iLocal_404[3]), 1);
			if (unk_0xFC8BFE4B41177C22(iLocal_400))
			{
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_400, 1)) > 40000f)
				{
					func_363(&iLocal_400, 1);
				}
			}
			unk_0x268BE77F77533D03(sLocal_384);
			if (unk_0xD0B0D1BD29678350(iLocal_436))
			{
				unk_0xBBB6D0F765409642(iLocal_436);
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
		{
			if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_491[iLocal_283 /*7*/], 1)) > 40000f)
			{
				func_871(13);
			}
		}
		if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -26,27152f, -1083,751f, 25,43581f) < 40000f)
		{
			if (!unk_0x787F8EE1F6FBDC6D())
			{
				unk_0x4A3280817398D754(-46,17491f, -1105,761f, 26,16539f, 35f, 0);
			}
		}
		else if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), -26,27152f, -1083,751f, 25,43581f) > 62500f)
		{
			if (unk_0x787F8EE1F6FBDC6D())
			{
				unk_0x6981C3213B841071();
			}
		}
		switch (iLocal_332)
		{
			case 0:
				if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (unk_0xBC2EE32DE886BD08("ARM_1_LOSE_COPS"))
					{
						unk_0xB43467C43086A6A1("ARM_1_LOSE_COPS");
					}
					if (!unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_TO_DEALERSHIP"))
					{
						unk_0xCAC4020CCF361AC8("ARM_1_DRIVE_TO_DEALERSHIP");
					}
					iLocal_332++;
				}
				break;
			}
	}
	if (iLocal_551 == 2)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < iLocal_432)
		{
			func_289(&(iLocal_432[iVar5]), 0);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < iLocal_433)
		{
			func_289(&(iLocal_433[iVar5]), 0);
			iVar5++;
		}
		unk_0x268BE77F77533D03("map_objects");
		func_412(0);
		func_414(180, 0, 0, 1, 0);
		unk_0x3C77232660BA1403(0);
		func_411(9, 0);
		func_298();
		system::settimera(0);
		iLocal_282 = 0;
		iLocal_551 = 0;
		iLocal_550 = 7;
	}
	if (iLocal_551 == 3)
	{
		func_933(7, 1);
	}
}

int func_403()
{
	if (unk_0xFC8BFE4B41177C22(iLocal_404[0]))
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_404[1]))
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_404[2]))
			{
				if (unk_0xFC8BFE4B41177C22(iLocal_404[3]))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_404()
{
	if ((func_49("AR1_RAGEBAR") || func_49("AR1_RAGEHOW")) || func_49("AR1_RAGESTAT"))
	{
		unk_0x428C32CC68809A35(1);
	}
	if (unk_0x761778199FE1211C())
	{
		if (func_49("AR1_RAGEBAR_KM"))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	unk_0x8E8EDF5205B15D28(0);
}

void func_405(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_64174)
	{
	}
	Global_64174 = 0;
	if (bParam0)
	{
		Global_64175 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_76261)
		{
			if (Global_64391[Global_76262[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_76262[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_76261)
		{
			if (Global_76262[iVar0 /*9*/] > 0)
			{
				if (Global_76262[iVar0 /*9*/] == iParam1)
				{
					Global_76262[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

bool func_406(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_311(uParam0, Param1, Param2, func_342(), func_342(), iParam3, 5, 0, 0, 0, iParam4, sParam5, func_407(), func_407(), func_407(), func_407(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

var func_407()
{
	var uVar0;
	
	return uVar0;
}

int func_408(bool bParam0, bool bParam1)
{
	if (!unk_0xFC8BFE4B41177C22(iLocal_433[0]))
	{
		unk_0xEC9DAA34BBB4658C(iLocal_451);
		unk_0xEC9DAA34BBB4658C(iLocal_452);
		if (unk_0x6252BC0DD8A320DB(iLocal_451) && unk_0x6252BC0DD8A320DB(iLocal_452))
		{
			if (!bParam0)
			{
				if (!bParam1)
				{
					iLocal_432[0] = unk_0x4E55EAB577C13329(iLocal_451, -72,785f, -682,29f, 32,77f, 1, 1, 0);
					iLocal_432[1] = unk_0x4E55EAB577C13329(iLocal_451, 25f, -664,5f, 30,76f, 1, 1, 0);
					unk_0x5C96CEA06531AB03(iLocal_432[0], 69,743f);
					unk_0x5C96CEA06531AB03(iLocal_432[1], 339,996f);
					unk_0x5D7CD709B34C90F0(iLocal_432[0], 1);
					unk_0x5D7CD709B34C90F0(iLocal_432[1], 1);
					unk_0xF88FC425EC7D675D(iLocal_432[0], 250);
					unk_0xF88FC425EC7D675D(iLocal_432[1], 250);
				}
				iLocal_433[0] = unk_0x4E55EAB577C13329(iLocal_452, -72,785f, -682,29f, 32,87f, 1, 1, 0);
				iLocal_433[1] = unk_0x4E55EAB577C13329(iLocal_452, 25f, -664,5f, 30,86f, 1, 1, 0);
				unk_0x5C96CEA06531AB03(iLocal_433[0], -110,257f);
				unk_0x5C96CEA06531AB03(iLocal_433[1], 339,996f);
				unk_0x5D7CD709B34C90F0(iLocal_433[0], 1);
				unk_0x5D7CD709B34C90F0(iLocal_433[1], 1);
				unk_0xF88FC425EC7D675D(iLocal_433[0], 250);
				unk_0xF88FC425EC7D675D(iLocal_433[1], 250);
				unk_0x55098D9E9AD58806(iLocal_451);
				unk_0x55098D9E9AD58806(iLocal_452);
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_409(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_64176 = iParam0;
	if (!Global_64174)
	{
		Global_64174 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_76261)
		{
			if (Global_76262[iVar0 /*9*/] == iParam0)
			{
				Global_76262[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_410(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_298 == -1)
		{
			iLocal_298 = unk_0xBE01072D0E1EE6DD(25,40665f, -664,5241f, 30,37865f, 10,39396f, -690,48f, 35,73986f, 19,25f);
		}
		if (iLocal_299 == -1)
		{
			iLocal_299 = unk_0xBE01072D0E1EE6DD(14,52216f, -684,6943f, 30,08809f, -85,90411f, -678,752f, 38,47314f, 52,5f);
		}
	}
	else
	{
		if (iLocal_298 != -1)
		{
			unk_0x2AF25F1F08FCBEF6(iLocal_298);
			iLocal_298 = -1;
		}
		if (iLocal_299 != -1)
		{
			unk_0x2AF25F1F08FCBEF6(iLocal_299);
			iLocal_299 = -1;
		}
	}
}

void func_411(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_33197, iParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_33197, iParam0);
	}
}

void func_412(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_113025, unk_0x1AF90EB93E0012D6(), 24);
		Global_113019 = 1;
	}
	else
	{
		StringCopy(&Global_113025, "NULL", 24);
		Global_113019 = 0;
	}
}

void func_413()
{
	Local_492.f_0 = 99f;
	unk_0x9AD14335D95C64BA(unk_0x259BE71D8A81D4FA(), (Local_492.f_0 / 100f), 1, 0);
}

void func_414(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_79389)
		{
			Global_43576.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_113969.f_7264.f_227[iParam0] = iParam1;
		}
		Global_40582[iParam0] = iParam2;
		Global_40781[iParam0] = 1;
		func_417(iParam0, bParam3, iParam4, 0);
		func_415(iParam0, iParam1);
	}
}

void func_415(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0xCD04ECE71F3A9215("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0xCD04ECE71F3A9215("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x6866AF3D8691EDC0("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x6866AF3D8691EDC0("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_416(0, 0);
			}
			else
			{
				func_416(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0xCD04ECE71F3A9215("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0xCD04ECE71F3A9215("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xFAF6BF5476CB00A8("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0xC897319696131088("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0xC897319696131088("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0xC897319696131088("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0xC897319696131088("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_416(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_112604, iParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_112604, iParam0);
	}
	Global_112603 = 1;
}

bool func_417(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1919037 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_418(&Var3, iParam0);
	if (func_97())
	{
		iVar1 = Global_113969.f_7264.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_43576.f_227[iParam0];
	}
	iVar2 = Global_40980[iParam0];
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !bParam3)
	{
		Global_1919037 = 1;
	}
	else
	{
		bVar5 = true;
		if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) != unk_0x70E57E9927B6BA58("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_40582[iParam0] && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3, 1) < 200f)
				{
					bVar5 = false;
					Global_1919037 = 1;
				}
				if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || unk_0x7FB6C108C1694163(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0x15CCE8886267624F())
					{
						bVar5 = false;
						Global_1919037 = 1;
					}
				}
			}
		}
		if (unk_0x787F8EE1F6FBDC6D() && (!unk_0x3555462DB47B7AB1() || unk_0x6D231A0D52134FC1() != 5))
		{
			bVar5 = false;
			Global_1919037 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0xC94AE68759E1B3BD(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0xE226F16D30AF5945(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_42176[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[1 /*8*/]));
								Global_1919037 = 1;
							}
						}
						if ((unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES")) && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[2 /*8*/]));
								Global_1919037 = 1;
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(""))
						{
							if (!unk_0x5AEB336317DC4151(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xECFC57F5F11BCD83(&(Var3.f_8[0 /*8*/]));
								Global_1919037 = 1;
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_34)) != unk_0x70E57E9927B6BA58(""))
						{
							if (!unk_0x5AEB336317DC4151(&(Var3.f_34)))
							{
								unk_0xECFC57F5F11BCD83(&(Var3.f_34));
								Global_1919037 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x70E57E9927B6BA58(&(Var3.f_34)) != unk_0x70E57E9927B6BA58(""))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_34)))
							{
								unk_0x5373E9377066509E(&(Var3.f_34));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES")) && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(""))
						{
							if (!unk_0x5AEB336317DC4151(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xECFC57F5F11BCD83(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x70E57E9927B6BA58(&(Var3.f_34)) != unk_0x70E57E9927B6BA58(""))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_34)))
							{
								unk_0x5373E9377066509E(&(Var3.f_34));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x5AEB336317DC4151(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x5373E9377066509E(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES"))
						{
							if (!unk_0x5AEB336317DC4151(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xECFC57F5F11BCD83(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_41977[iParam0] = 1;
					Global_42176[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = unk_0x0556019E7EE8EC9A(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (unk_0x70E57E9927B6BA58(&(Var3.f_50)) != unk_0x70E57E9927B6BA58(""))
						{
							if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_50)))
							{
								unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES")) && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (!unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x907994FF361E5295(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES")) && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (!unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x907994FF361E5295(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[0 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[1 /*8*/])) != unk_0x70E57E9927B6BA58(""))
							{
								if (unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x62BCE536D41AC07D(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("") && unk_0x70E57E9927B6BA58(&(Var3.f_8[2 /*8*/])) != unk_0x70E57E9927B6BA58("REMOVE_ALL_STATES"))
							{
								if (!unk_0x9491D4E34E4389CD(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x907994FF361E5295(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xEEC112F70F9E6543(iVar6);
						}
					}
					Global_42176[iParam0] = 1;
					Global_41977[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0xED977E2AE2CB16EE(Var3, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 1) < 250f)
					{
						uVar4 = unk_0xC8C12645F5A0E13B(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0x502101046E18AD3F(uVar4))
						{
							if (iVar1 == 0)
							{
								unk_0xBF86159B8525B1AE(uVar4, 3);
								Global_42176[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xEB4069FA281FFD9B(uVar4) != 6 && unk_0xEB4069FA281FFD9B(uVar4) != 7) && unk_0xEB4069FA281FFD9B(uVar4) != 8)
								{
									unk_0xBF86159B8525B1AE(uVar4, 10);
									Global_42176[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0xD80C3522AC21FDB8(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x8744D2E3FC95740E(&(Global_40328[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x7C601010148C8DDB(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_40328[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_40781[iParam0] = 0;
				Global_40980[iParam0] = iVar1;
				if (!func_97())
				{
					if (!Global_41577[iParam0])
					{
						Global_41577[iParam0] = 1;
						Global_41776++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_418(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24,685f, 3032,92f, 40,331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24,685f, 3032,92f, 40,331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93,4f, 6410,9f, 36,8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890,3647f, -2367,289f, 28,10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020,5f, 663,41f, 154,75f };
			uParam0->f_58 = { -1018,913f, 603,2904f, 105,6611f };
			uParam0->f_61 = { -1038,913f, 639,2904f, 135,6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490,8999f, -1334,068f, 28,3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162,8918f, -2365,769f, 0f };
			uParam0->f_71 = { 190,75f, 31,25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95,2f, 6411,3f, 31,5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146,3837f, 6161,5f, 30,2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801,7f, -1810,8f, 23,3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787,3967f, -1808,858f, 29,8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163,4f, -745,7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178,534f, -668,835f, 37,2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136,004f, -749,287f, 153,302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74,29f, -736,05f, 46,76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105,4557f, -745,4835f, 44,7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670,3f, 41,9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			uParam0->f_79 = { 16,9757f, 3614,307f, 30,0677f };
			uParam0->f_82 = { 145,2451f, 3748,912f, 49,6958f };
			uParam0->f_85 = { 16,9757f, 3614,307f, 30,0677f };
			uParam0->f_88 = { 145,2451f, 3748,912f, 49,6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50,2f, 3743,9f, 40,9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106,7f, 3732,1f, 40,8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106,7f, 3732,1f, 40,8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72,7f, 3695,4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72,7f, 3695,4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43,8f, 3699,7f, 41,3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43,8f, 3699,7f, 41,3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28,5f, 3668f, 40,4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28,5f, 3668f, 40,4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29,4838f, 3735,593f, 38,688f };
			uParam0->f_68 = { 31,134f, 3738,783f, 39,062f };
			uParam0->f_71 = { 13,6f, 20f, 8,9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29,4838f, 3735,593f, 38,688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450,595f, 4959,929f, 44,2575f };
			uParam0->f_79 = { 2383,756f, 4929,988f, 39,52461f };
			uParam0->f_82 = { 2505,756f, 5023,988f, 67,52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450,595f, 4959,929f, 44,2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444,8f, 4976,4f, 50,5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447,9f, 4973,4f, 47,7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676,415f, -1626,37f, 111,4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889,3f, -2910,9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600,619f, 4443,457f, 0,725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966,1f, -114,8f, 75,2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086,428f, 339,2523f, 6,3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675,178f, -1143,605f, 12,0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532,1309f, 4526,187f, 88,7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532,1309f, 4526,187f, 88,7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131,29f, -631,22f, 261,85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233,9f, -1355f, 30,3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234,4f, -1355,6f, 40,5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716,84f, -962,05f, 31,59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330,4596f, -584,8196f, 42,3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861,28f, 2402,11f, 58,53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327,46f, -274,82f, 54,25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697,32f, 3162,18f, 58,1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119,12f, 3058,21f, 53,25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804,25f, -2276,88f, 23,59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296,5f, 173,3f, 100,4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296,5f, 173,3f, 100,4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480,9554f, -1321,21f, 28,2037f };
			uParam0->f_85 = { 508,3f, -1299,3f, 39,4f };
			uParam0->f_88 = { 459,9f, -1363,2f, 21,4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088,6f, -1650,6f, 6,4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13,83f, -1455,45f, 31,81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277,629f, -2030,913f, 1,2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384,969f, 4277,583f, 30,379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577,881f, 3836,107f, 30,7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180,5771f, -1016,928f, 28,2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630,4205f, -236,7843f, 37,057f };
			uParam0->f_79 = { (-623,6868f - 11f), (-231,935f - 11f), (40,30703f - 3,25f) };
			uParam0->f_82 = { (-623,6868f + 11f), (-231,935f + 11f), (40,30703f + 3,25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583,1606f, -282,3967f, 35,394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14,651f, -604,3639f, 25,1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773,61f, 2835,327f, 35,1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743,682f, 3286,251f, 40,0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222,9f, 1877,9f, 79,9f };
			uParam0->f_58 = { 1206,8f, 1803f, 43,9f };
			uParam0->f_61 = { 1329f, 2060,4f, 143,9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44,02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391,81f, -962,71f, 41,97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424,2f, -1944,31f, 33,09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626,374f, 2949,869f, 39,1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626,374f, 2949,869f, 39,1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811,2679f, 179,3344f, 75,7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802,0311f, 172,9131f, 75,7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808,033f, 172,1309f, 75,7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802,0311f, 172,9131f, 75,7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813,3f, 177,5f, 75,76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810,5301f, 187,7868f, 71,4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811,2679f, 179,3344f, 75,7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707,2563f, -965,147f, 29,4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973,805f, 3818,555f, 32,4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30,8793f, -1088,336f, 25,4221f };
			uParam0->f_68 = { -29,3f, -1086,35f, 25,57f };
			uParam0->f_71 = { 5,5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49,21f, -1090,28f, 25,42f };
			uParam0->f_68 = { -49,21f, -1090,28f, 25,42f };
			uParam0->f_71 = { 2,5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49,28f, -1092,66f, 25,42f };
			uParam0->f_68 = { -49,28f, -1092,66f, 25,42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53,07f, -1096,73f, 25,5f };
			uParam0->f_68 = { -53,07f, -1096,73f, 25,5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59,7936f, -1098,784f, 27,2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23,9346f, -669,7552f, 30,8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300,9423f, -586,1784f, 42,2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157,129f, -1523,028f, 9,6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150,039f, -1521,761f, 9,6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150,039f, -1521,761f, 9,6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856,029f, 3682,998f, 33,2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440,5073f, 6018,766f, 30,49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487,31f, 5588,386f, 793,0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487,31f, 5588,386f, 793,0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13,9623f, -1440,614f, 30,1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96,4811f, -1291,294f, 28,2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139,5795f, -3092,962f, 8,64631f };
			uParam0->f_79 = { Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_82 = { Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_85 = { Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_88 = { Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203,7784f, -3131,767f, 7,041344f };
			uParam0->f_79 = { Vector(7,041344f, -3131,767f, 203,7784f) - Vector(2,5625f, 2,75f, 4,875f) };
			uParam0->f_82 = { Vector(7,041344f, -3131,767f, 203,7784f) + Vector(2,5625f, 2,75f, 4,875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144,7706f, -2982,659f, 7,952507f };
			uParam0->f_79 = { Vector(7,952507f, -2982,659f, 144,7706f) - Vector(3,125f, 3,4375f, 5,3125f) };
			uParam0->f_82 = { Vector(7,952507f, -2982,659f, 144,7706f) + Vector(3,125f, 3,4375f, 5,3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154,965f, -1520,983f, 9,132731f };
			uParam0->f_79 = { -1154,965f, -1520,983f, 9,132731f };
			uParam0->f_82 = { -1158,965f, -1524,983f, 11,63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052,204f, 371,9537f, 67,914f };
			uParam0->f_79 = { -1052,204f, 371,9537f, 67,914f };
			uParam0->f_82 = { -1048,064f, 368,0221f, 70,9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954,984f, 3792,991f, 30,3086f };
			uParam0->f_79 = { 1954,984f, 3792,991f, 30,3086f };
			uParam0->f_82 = { 1983,45f, 3830,78f, 36,2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122,202f, 48,5724f, 51,4652f };
			uParam0->f_79 = { -1122,202f, 48,5724f, 51,4652f };
			uParam0->f_82 = { -1076,233f, 92,1041f, 60,0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199,138f, 223,4648f, 181,1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242,785f, 263,4779f, 173,6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832,9f, 3665,5f, -23,4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814,7f, 4758,5f, 47,9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096,505f, 4,5754f, 49,8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781,6566f, 186,8937f, 71,8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55,7f, -1391,3f, 30,5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700,091f, -933,641f, 20,308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096,381f, -836,17f, 36,6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449,6558f, -980,1375f, 42,6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363,0175f, -1598,079f, 35,9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601,424f, 2808,213f, 16,2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23,7318f, -647,2123f, 37,9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12,9689f, -648,4698f, 9,7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459,127f, 486,1281f, 115,2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248,4916f, -2010,509f, 34,5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081,347f, -263,1502f, 38,7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136,1795f, -750,701f, 262,0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168,7f, 42,9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7,0256f, 537,3075f, 175,0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19,0568f, 536,4818f, 169,6277f };
			break;
	}
	return 1;
}

void func_419()
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	
	Var0 = { 39,0428f, -638,7694f, 30,6267f };
	fVar1 = 335,0152f;
	if (iLocal_284 == 0)
	{
		Var0 = { 39,3644f, -638,0751f, 30,6267f };
		fVar1 = 335,0097f;
	}
	if (iLocal_551 == 4)
	{
		if (iLocal_282 != 99)
		{
			if (bLocal_254)
			{
				func_287(Var0, fVar1, 0, 0);
				iLocal_282 = 99;
			}
			else
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Var0, 1, 0, 0, 1);
				unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
				unk_0x6C39BDF5EA5D38FC(Var0);
				unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
				iLocal_282 = 99;
			}
		}
		else
		{
			func_377();
			if ((func_282(Var0 + Vector(3f, 1f, 0f), 0, 0) && func_374(Var0, 0)) && func_373(Var0 + Vector(0f, 3f, 0f), 0))
			{
				func_190(0, -1, 0);
				func_401();
				func_446();
				func_367();
				func_445();
				func_413();
				func_444();
				unk_0x89609F1D3BE65A34(unk_0x259BE71D8A81D4FA(), 0);
				if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
				{
					unk_0x616C2EAE947E6027(Local_491[iLocal_284 /*7*/], "ARM_1_LAMARS_CAR", 0);
				}
				bLocal_228 = true;
				iLocal_551 = 0;
			}
		}
	}
	if (iLocal_551 == 0)
	{
		unk_0xD772E6694B8472A6(iLocal_285, sLocal_379);
		unk_0xD772E6694B8472A6(iLocal_286, sLocal_379);
		unk_0xD772E6694B8472A6(iLocal_287, sLocal_379);
		unk_0xD772E6694B8472A6(300, sLocal_379);
		unk_0xEC9DAA34BBB4658C(joaat("police3"));
		unk_0xEC9DAA34BBB4658C(joaat("s_m_y_cop_01"));
		unk_0x80813AC549A1E8AE("map_objects");
		unk_0x80813AC549A1E8AE(sLocal_385);
		if (((((((((func_408(1, 0) && unk_0x266D9DB5FCE4003B(iLocal_285, sLocal_379)) && unk_0x266D9DB5FCE4003B(iLocal_286, sLocal_379)) && unk_0x266D9DB5FCE4003B(iLocal_287, sLocal_379)) && unk_0x266D9DB5FCE4003B(300, sLocal_379)) && unk_0x6252BC0DD8A320DB(joaat("police3"))) && unk_0x6252BC0DD8A320DB(joaat("s_m_y_cop_01"))) && unk_0xE100DD4F82A51BDE("map_objects")) && unk_0xE100DD4F82A51BDE(sLocal_385)) && (bLocal_228 || (!bLocal_228 && system::timerb() > 1000)))
		{
			if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
			{
				unk_0x5D7CD709B34C90F0(Local_491[iLocal_284 /*7*/], 0);
				if (unk_0x050D073F91C5243C(Local_491[iLocal_284 /*7*/]))
				{
					unk_0x1D2DAF2A41FFC4A0(Local_491[iLocal_284 /*7*/]);
				}
				if (iLocal_284 == 1)
				{
					unk_0x7821F942CAEEBEE1(5, sLocal_379);
				}
				else
				{
					unk_0x7821F942CAEEBEE1(5, sLocal_379);
				}
				unk_0x78004905636369DF(Local_491[iLocal_284 /*7*/], 0, 0);
				unk_0x78004905636369DF(Local_491[iLocal_284 /*7*/], 1, 0);
			}
			func_426(0, 1);
			func_425();
			func_363(&iLocal_399, 0);
			unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 0);
			func_289(&iLocal_428, 0);
			func_59(&Local_487, 1);
			if (iLocal_439 != 0)
			{
				unk_0xBBB6D0F765409642(iLocal_439);
				iLocal_439 = 0;
			}
			if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				unk_0xBEB96F1A510EE9AA(Local_471.f_0);
				unk_0xBEB96F1A510EE9AA(unk_0x4A8C381C258A124D());
				unk_0xC1BC1B8A5AA67C6B(Local_471.f_0, 0);
				unk_0xD9757FAB956617BA(Local_471.f_0, 0);
				unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), Local_471.f_0, 20000, 2096, 4);
				unk_0xE67051907958B5EB(Local_471.f_0, unk_0x4A8C381C258A124D(), 20000, 2096, 4);
			}
			func_408(0, 0);
			unk_0x5ED9595F4AC7D134(iLocal_432[1], "p_sec_gate_01_s_close", "map_objects", 4f, 0, 1, 0, 0, 0);
			unk_0x2B2ECB6F6371E59E(iLocal_432[1]);
			unk_0x4285E11B28063EE0(iLocal_432[1], 0, 0);
			unk_0x44C48AC14D3C09ED(iLocal_433[0], 0, 0);
			unk_0x44C48AC14D3C09ED(iLocal_433[1], 0, 0);
			unk_0x406CBCEA35499884();
			unk_0x428C32CC68809A35(1);
			func_72();
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0xD682DD0578BF5392(0);
			unk_0x2094BC4B6731BA68(44,4942f, -634,8408f, 34,55825f, 200f, 1, 0, 0, 0);
			iLocal_398 = unk_0x5779387E956077A6(joaat("police3"), 7,542f, -578,0831f, 36,6983f, 336,2658f, 1, 1, 0);
			unk_0xC229299217554C78(iLocal_398, 1, 1, 0);
			unk_0x55098D9E9AD58806(joaat("police3"));
			iLocal_411[0] = unk_0x8728A378EF2B46B2(iLocal_398, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			unk_0xB41DEC3AAC1AA107(iLocal_411[0], joaat("weapon_pistol"), -1, 0, 1);
			unk_0xBE8796DB2B90A437(iLocal_411[0], 2, 0);
			iLocal_411[1] = unk_0x8728A378EF2B46B2(iLocal_398, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			unk_0xB41DEC3AAC1AA107(iLocal_411[1], joaat("weapon_pistol"), -1, 0, 1);
			unk_0xBE8796DB2B90A437(iLocal_411[1], 2, 0);
			unk_0x55098D9E9AD58806(joaat("s_m_y_cop_01"));
			unk_0x51E3279E9437131C(0);
			if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
			{
				unk_0xC3680B85B2D7086A(Local_491[iLocal_283 /*7*/], 1);
				unk_0xD3694FA8930DED3C(Local_491[iLocal_283 /*7*/]);
				unk_0x232B023FE4D977E2(Local_491[iLocal_283 /*7*/], 1);
				if (!unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/]))
				{
					unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
					unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/], -1);
				}
			}
			unk_0x3C6BB574B1895B94();
			unk_0x48FA483FE4F18CFE("CAR_CRASHES_01");
			unk_0x48FA483FE4F18CFE("CAR_CRASHES_MED_01");
			if (bLocal_228)
			{
				fVar2 = func_423(unk_0xD1A6A821F5AC81DB(Local_491[iLocal_283 /*7*/], 1), iLocal_287, sLocal_379, 20);
				fVar3 = func_423(unk_0xD1A6A821F5AC81DB(Local_491[iLocal_284 /*7*/], 1), iLocal_286, sLocal_379, 20);
				if (fVar2 < 1000f)
				{
					fVar2 = 1000f;
				}
				if (fVar3 < 1000f)
				{
					fVar3 = 1000f;
				}
				if (unk_0x1D5CD3EAAA7422B0((fVar3 - fVar2)) < 750f)
				{
					if ((fVar3 - fVar2) > 0f)
					{
						fVar3 = (fVar3 + 500f);
					}
					else
					{
						fVar2 = (fVar2 + 500f);
					}
				}
				if (bLocal_212)
				{
					if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
					{
						unk_0x88556DA0593A0748(Local_491[iLocal_284 /*7*/], iLocal_286, sLocal_379, 1);
						if (unk_0x15CCE8886267624F())
						{
							func_400(&(Local_491[iLocal_284 /*7*/]), 2500f);
						}
						else
						{
							func_400(&(Local_491[iLocal_284 /*7*/]), fVar3);
						}
						unk_0x44A13535A15C20E0(Local_491[iLocal_284 /*7*/], 1);
						unk_0xF2FCE3F2F4D0CB50(Local_491[iLocal_284 /*7*/], 1);
						unk_0xBD618A73193F9982(-1, "Lamar_Throttle_Blip", Local_491[iLocal_284 /*7*/], 0, 0, 0);
					}
					if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
					{
						unk_0x88556DA0593A0748(Local_491[iLocal_283 /*7*/], iLocal_287, sLocal_379, 1);
						if (unk_0x15CCE8886267624F())
						{
							func_400(&(Local_491[iLocal_283 /*7*/]), 1500f);
						}
						else
						{
							func_400(&(Local_491[iLocal_283 /*7*/]), fVar2);
						}
						unk_0x44A13535A15C20E0(Local_491[iLocal_283 /*7*/], 1);
						unk_0xBD618A73193F9982(-1, "Franklin_Throttle_Blip", Local_491[iLocal_283 /*7*/], 0, 0, 0);
					}
				}
				else
				{
					if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
					{
						unk_0x88556DA0593A0748(Local_491[iLocal_284 /*7*/], iLocal_286, sLocal_379, 1);
						func_400(&(Local_491[iLocal_284 /*7*/]), (unk_0xE2E30D829A6B8F9E(iLocal_286, sLocal_379) - 200f));
						unk_0x44A13535A15C20E0(Local_491[iLocal_284 /*7*/], 1);
						unk_0xF2FCE3F2F4D0CB50(Local_491[iLocal_284 /*7*/], 1);
					}
					if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
					{
						unk_0x88556DA0593A0748(Local_491[iLocal_283 /*7*/], iLocal_287, sLocal_379, 1);
						if (unk_0x15CCE8886267624F())
						{
							func_400(&(Local_491[iLocal_283 /*7*/]), 1500f);
						}
						else
						{
							func_400(&(Local_491[iLocal_283 /*7*/]), fVar2);
						}
						unk_0x44A13535A15C20E0(Local_491[iLocal_283 /*7*/], 1);
						unk_0xBD618A73193F9982(-1, "Franklin_Throttle_Blip", Local_491[iLocal_283 /*7*/], 0, 0, 0);
					}
					if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
					{
						unk_0xE237FA90A8AFEE59(Local_471.f_0, unk_0x0D1381B6E0F3987D(Local_491[iLocal_284 /*7*/], -2,5729f, 0,4432f, 0,4889f), 20000, 2096, 4);
					}
				}
				uLocal_421 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 1);
				if (bLocal_242)
				{
					unk_0xA3774254665BAA82(uLocal_421, 43,50769f, -636,9529f, 31,88593f, -5,839731f, -0,072286f, 141,0281f, 28,4257f, 0, 1, 1, 2);
					unk_0xA3774254665BAA82(uLocal_421, 43,44817f, -636,9048f, 31,88602f, -5,839731f, -0,072286f, 141,0281f, 28,4257f, 6500, 0, 0, 2);
				}
				else
				{
					unk_0xA3774254665BAA82(uLocal_421, 44,4942f, -634,8408f, 34,55825f, -9,333186f, 0,007438f, 141,6949f, 34,99998f, 0, 1, 1, 2);
					unk_0xA3774254665BAA82(uLocal_421, 45,33989f, -634,41f, 31,49674f, -1,446978f, -0,011956f, 131,2897f, 34,99998f, 4500, 3, 3, 2);
				}
				unk_0x2A09425009DAD0F5(uLocal_421, "HAND_SHAKE", 0,05f);
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				unk_0x37B894853929BF1A(0);
				unk_0x747786364137DC63(0);
				func_62(1, 1, 1, 0, 0, 0, 0);
			}
			if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
			{
				unk_0x999C62072AF920FD(Local_491[iLocal_283 /*7*/], 0);
				unk_0x935364B4448CD584(Local_491[iLocal_283 /*7*/], 1);
				unk_0x680C862D9FC0F4BC(Local_491[iLocal_283 /*7*/], 1);
				if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
				{
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(Local_491[iLocal_284 /*7*/], 1), 40,40989f, -635,81f, 31,09674f) > system::vdist2(unk_0xD1A6A821F5AC81DB(Local_491[iLocal_283 /*7*/], 1), 40,40989f, -635,81f, 31,09674f))
					{
						func_422(5);
					}
				}
			}
			unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
			unk_0xCAC4020CCF361AC8("ARM_1_COPS_ARRIVE");
			func_58();
			system::settimerb(0);
			system::settimera(0);
			Local_471.f_2 = 0;
			unk_0xB9784D6C7219851B(4);
			iLocal_308 = -1;
			bLocal_249 = false;
			iLocal_263 = 0;
			iLocal_282 = 0;
			iLocal_551 = 1;
		}
	}
	if (iLocal_551 == 1)
	{
		func_421(1);
		if (unk_0x5266F1D2AEF6F73A(iLocal_308))
		{
			fVar4 = unk_0xBD3B265153D3BA2D(iLocal_308);
		}
		if (!unk_0x1C2F771CDC87A3A5(Local_491[iLocal_284 /*7*/], 0))
		{
			unk_0x2814BEDF5E0AF4C0(Local_491[iLocal_284 /*7*/], 1);
		}
		if (!unk_0x1C2F771CDC87A3A5(Local_491[iLocal_283 /*7*/], 0))
		{
			unk_0x2814BEDF5E0AF4C0(Local_491[iLocal_283 /*7*/], 1);
		}
		if (!unk_0xE5E2AE8B19267B8A(iLocal_432[1]))
		{
			if (system::timerb() > 10)
			{
				unk_0x4285E11B28063EE0(iLocal_432[1], 1, 0);
			}
		}
		switch (iLocal_282)
		{
			case 0:
				if (!iLocal_266[43])
				{
					if (bLocal_213)
					{
						if (bLocal_214)
						{
							if (func_396(&Local_554, "ARM1AUD", "ARM1_DISS4", 7, 0, 0, 0, 0))
							{
								iLocal_266[43] = 1;
							}
						}
						else if (func_396(&Local_554, "ARM1AUD", "ARM1_DISS3", 7, 0, 0, 0, 0))
						{
							iLocal_266[43] = 1;
						}
					}
					else if (bLocal_212)
					{
						if (func_396(&Local_554, "ARM1AUD", "ARM1_DISS1", 7, 0, 0, 0, 0))
						{
							iLocal_266[43] = 1;
						}
					}
					else if (func_396(&Local_554, "ARM1AUD", "ARM1_DISS2", 7, 0, 0, 0, 0))
					{
						iLocal_266[43] = 1;
					}
				}
				if (bLocal_228)
				{
					if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
					{
						if (unk_0x050D073F91C5243C(Local_491[iLocal_284 /*7*/]))
						{
							if ((unk_0xE2E30D829A6B8F9E(iLocal_286, sLocal_379) - unk_0x157F3D5A4AAB2C50(Local_491[iLocal_284 /*7*/])) < 200f)
							{
								unk_0x206AB1458FD9522F(Local_491[iLocal_284 /*7*/], 0f);
							}
						}
					}
					if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
					{
						if (unk_0x050D073F91C5243C(Local_491[iLocal_283 /*7*/]))
						{
							if ((unk_0xE2E30D829A6B8F9E(iLocal_287, sLocal_379) - unk_0x157F3D5A4AAB2C50(Local_491[iLocal_283 /*7*/])) < 200f)
							{
								unk_0x206AB1458FD9522F(Local_491[iLocal_283 /*7*/], 0f);
							}
						}
					}
				}
				unk_0xEC9DAA34BBB4658C(joaat("police3"));
				unk_0xEC9DAA34BBB4658C(joaat("s_m_y_cop_01"));
				unk_0x80813AC549A1E8AE(sLocal_385);
				if (((((system::timerb() > 4500 || !bLocal_228) && unk_0x6252BC0DD8A320DB(joaat("police3"))) && unk_0x6252BC0DD8A320DB(joaat("s_m_y_cop_01"))) && unk_0xE100DD4F82A51BDE(sLocal_385)) && iLocal_266[43])
				{
					if ((unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0) && unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0)) && !unk_0x4FAFF4BCB7633475(Local_471.f_0))
					{
						if (unk_0x050D073F91C5243C(Local_491[iLocal_284 /*7*/]))
						{
							unk_0x1D2DAF2A41FFC4A0(Local_491[iLocal_284 /*7*/]);
						}
						unk_0x7821F942CAEEBEE1(iLocal_286, sLocal_379);
						unk_0x5D7CD709B34C90F0(Local_491[iLocal_284 /*7*/], 0);
						unk_0x88556DA0593A0748(Local_491[iLocal_284 /*7*/], iLocal_285, sLocal_379, 0);
						unk_0x44A13535A15C20E0(Local_491[iLocal_284 /*7*/], 0);
						unk_0x206AB1458FD9522F(Local_491[iLocal_284 /*7*/], 0f);
						unk_0xBD618A73193F9982(iLocal_295, "Idling_Throttle_Blip_Loop", Local_491[iLocal_284 /*7*/], "ARM_1_SOUNDSET", 0, 0);
						if (unk_0x050D073F91C5243C(Local_491[iLocal_283 /*7*/]))
						{
							unk_0x1D2DAF2A41FFC4A0(Local_491[iLocal_283 /*7*/]);
						}
						unk_0x7821F942CAEEBEE1(iLocal_287, sLocal_379);
						unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_283 /*7*/], Var0, 1, 0, 0, 1);
						unk_0x5C96CEA06531AB03(Local_491[iLocal_283 /*7*/], fVar1);
						unk_0x1DE99C193C7EC64B(Local_491[iLocal_283 /*7*/], 1084227584);
						unk_0x5D7CD709B34C90F0(Local_491[iLocal_283 /*7*/], 1);
						unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
						unk_0x19626F992DC71FB9(Local_471.f_0);
						unk_0x84B06A81C98DA4B8(Local_471.f_0);
						unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
						Local_471.f_4 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
						iLocal_307 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
						if (iLocal_283 == 0)
						{
							unk_0x2DCB8CA1FE6895AB(iLocal_307, Local_491[0 /*7*/], unk_0x365DC1E8054AF31A(Local_491[0 /*7*/], "seat_dside_f"));
							unk_0x2DCB8CA1FE6895AB(Local_471.f_4, Local_491[1 /*7*/], unk_0x365DC1E8054AF31A(Local_491[1 /*7*/], "seat_dside_f"));
						}
						else
						{
							unk_0x2DCB8CA1FE6895AB(iLocal_307, Local_491[1 /*7*/], unk_0x365DC1E8054AF31A(Local_491[1 /*7*/], "seat_dside_f"));
							unk_0x2DCB8CA1FE6895AB(Local_471.f_4, Local_491[0 /*7*/], unk_0x365DC1E8054AF31A(Local_491[0 /*7*/], "seat_dside_f"));
						}
						if (bLocal_213)
						{
							if (bLocal_214)
							{
								unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), iLocal_307, sLocal_385, "CarRace_Banter_bothtrashed_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
								unk_0x3DA436E63AB0F541(Local_471.f_0, Local_471.f_4, sLocal_385, "CarRace_Banter_bothtrashed_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
								bLocal_249 = true;
							}
							else
							{
								unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), iLocal_307, sLocal_385, "CarRace_Banter_thatbucket_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
								unk_0x3DA436E63AB0F541(Local_471.f_0, Local_471.f_4, sLocal_385, "CarRace_Banter_thatbucket_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
								bLocal_249 = true;
							}
						}
						else if (bLocal_212)
						{
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), iLocal_307, sLocal_385, "CarRace_Banter_FlowThrough_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(Local_471.f_0, Local_471.f_4, sLocal_385, "CarRace_Banter_FlowThrough_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
							bLocal_249 = true;
						}
						else
						{
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), iLocal_307, sLocal_385, "CarRace_Banter_MoveSome_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(Local_471.f_0, Local_471.f_4, sLocal_385, "CarRace_Banter_MoveSome_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
							bLocal_249 = true;
						}
					}
					unk_0x3AA8CFEBC938A945(0);
					unk_0x6981C3213B841071();
					if (bLocal_249)
					{
						uLocal_421 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 1);
						iLocal_308 = unk_0x2EC137C692A52458(40,715f, -638,31f, 30,675f, 0f, 0f, 66f, 2);
						if (bLocal_213)
						{
							if (bLocal_214)
							{
								unk_0xF9B66DAE101B699C(uLocal_421, iLocal_308, "CarRace_Banter_bothtrashed_cam", sLocal_385);
							}
							else
							{
								unk_0xF9B66DAE101B699C(uLocal_421, iLocal_308, "CarRace_Banter_thatbucket_cam", sLocal_385);
							}
						}
						else if (bLocal_212)
						{
							unk_0xF9B66DAE101B699C(uLocal_421, iLocal_308, "carrace_banter_flowthrough_cam", sLocal_385);
						}
						else
						{
							unk_0xF9B66DAE101B699C(uLocal_421, iLocal_308, "carrace_banter_movesome_cam", sLocal_385);
						}
					}
					else
					{
						uLocal_421 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 1);
						if (iLocal_284 == 1)
						{
							unk_0xA3774254665BAA82(uLocal_421, 36,59747f, -637,1707f, 31,80989f, -3,324733f, -0,009855f, -122,2542f, 21,89666f, 0, 1, 1, 2);
							unk_0xA3774254665BAA82(uLocal_421, 36,59521f, -637,1694f, 31,76422f, -3,324733f, -0,009855f, -122,2542f, 21,89666f, 15000, 0, 0, 2);
						}
						else
						{
							unk_0xA3774254665BAA82(uLocal_421, 36,91358f, -636,7665f, 31,83924f, -3,589668f, -0,002839f, -124,8351f, 21,70874f, 0, 1, 1, 2);
							unk_0xA3774254665BAA82(uLocal_421, 36,91154f, -636,7663f, 31,80007f, -3,589668f, -0,002839f, -124,8351f, 21,70874f, 15000, 0, 0, 2);
						}
					}
					if (!bLocal_228)
					{
						unk_0x2A09425009DAD0F5(uLocal_421, "HAND_SHAKE", 0,05f);
						unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
						unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
						unk_0x37B894853929BF1A(0);
						unk_0x747786364137DC63(0);
						unk_0xD7C0EA10993D3214(1, 0);
					}
					system::settimerb(0);
					iLocal_282++;
				}
				break;
			
			case 1:
				if (!iLocal_266[42])
				{
					func_394();
					iLocal_266[42] = 1;
				}
				else if (!func_358(&Local_493, 0) || system::timerb() > 20000)
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_398, 0))
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_411[0]) && !unk_0xF4244288C3EF3306(iLocal_411[0], iLocal_398))
						{
							unk_0x73CAFD2038E812B3(iLocal_411[0], iLocal_398, -1);
						}
						unk_0xC229299217554C78(iLocal_398, 1, 1, 0);
						unk_0x4539850624F18A9E(iLocal_398, 1);
						unk_0xBA3C1A9AA7FD9616(iLocal_398, 2);
						unk_0x8C9AE8FF021E8F23(iLocal_398, 1);
						system::settimerb(0);
						iLocal_282++;
					}
				}
				break;
			
			case 2:
				unk_0xD772E6694B8472A6(300, sLocal_379);
				if ((system::timerb() > 1000 || fVar4 > 0,99f) && unk_0x266D9DB5FCE4003B(300, sLocal_379))
				{
					if (unk_0xD9F5E1FEFD1329E4(iLocal_398, 0))
					{
						if (unk_0x050D073F91C5243C(iLocal_398))
						{
							unk_0x1D2DAF2A41FFC4A0(iLocal_398);
						}
						unk_0x7821F942CAEEBEE1(301, sLocal_379);
						unk_0x9CCFFF877AB82ACA(iLocal_398, 300, sLocal_379, 1, 0, 786603);
						func_400(&iLocal_398, 500f);
						unk_0x44A13535A15C20E0(iLocal_398, 1);
						unk_0x206AB1458FD9522F(iLocal_398, 0,1f);
					}
					if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
					{
						Local_471.f_4 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
						iLocal_307 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
						if (iLocal_283 == 0)
						{
							unk_0x2DCB8CA1FE6895AB(iLocal_307, Local_491[0 /*7*/], unk_0x365DC1E8054AF31A(Local_491[0 /*7*/], "seat_dside_f"));
							unk_0x2DCB8CA1FE6895AB(Local_471.f_4, Local_491[1 /*7*/], unk_0x365DC1E8054AF31A(Local_491[1 /*7*/], "seat_dside_f"));
						}
						else
						{
							unk_0x2DCB8CA1FE6895AB(iLocal_307, Local_491[1 /*7*/], unk_0x365DC1E8054AF31A(Local_491[1 /*7*/], "seat_dside_f"));
							unk_0x2DCB8CA1FE6895AB(Local_471.f_4, Local_491[0 /*7*/], unk_0x365DC1E8054AF31A(Local_491[0 /*7*/], "seat_dside_f"));
						}
						unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), iLocal_307, sLocal_385, "CarRace_Banter_cops_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x7BB893EF8F683419(iLocal_307, 0,1f);
						unk_0x3DA436E63AB0F541(Local_471.f_0, Local_471.f_4, sLocal_385, "CarRace_Banter_cops_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
					}
					if (bLocal_249)
					{
						unk_0x3AA8CFEBC938A945(0);
						uLocal_421 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 1);
						iLocal_308 = unk_0x2EC137C692A52458(40,715f, -638,31f, 30,675f, 0f, 0f, 66f, 2);
						unk_0xF9B66DAE101B699C(uLocal_421, iLocal_308, "CarRace_Banter_cops_cam", sLocal_385);
					}
					else
					{
						unk_0x2A09425009DAD0F5(uLocal_421, "HAND_SHAKE", 0,05f);
						unk_0xA3774254665BAA82(uLocal_421, 46,84201f, -636,4459f, 31,56392f, -0,180864f, 0,105875f, 110,3526f, 30,89239f, 0, 1, 1, 2);
						unk_0xA3774254665BAA82(uLocal_421, 46,88197f, -636,5637f, 31,60283f, -0,098123f, 0,105875f, 105,78f, 30,89239f, 16000, 0, 0, 2);
					}
					system::settimerb(0);
					iLocal_282++;
				}
				break;
			
			case 3:
				if (!iLocal_266[44])
				{
					if (!func_358(&Local_493, 0))
					{
						func_357(&Local_554, "ARM1AUD", "ARM1_COPS", 7, 0, 0, 0);
					}
					MemCopy(&uVar5, {func_420()}, 4);
					if (unk_0x1B79E937E91F40C3(&uVar5, "ARM1_COPS_3"))
					{
						system::settimerb(0);
						iLocal_266[44] = 1;
					}
				}
				if (system::timerb() > 3000)
				{
					if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
					{
						unk_0x206AB1458FD9522F(Local_491[iLocal_284 /*7*/], 1f);
						if (!unk_0x9F0C06CFBACDD6A1(iLocal_295))
						{
							unk_0x8E4825CCACA34B58(iLocal_295);
						}
						system::settimerb(0);
						iLocal_282++;
					}
				}
				break;
			
			case 4:
				if (!iLocal_263)
				{
					if (unk_0xBCF87EE3DC296C2A(1) == 4 || unk_0xD511F6B5FB8D3854() == 4)
					{
						if (system::timerb() > 2200)
						{
							unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
							unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_263 = 1;
						}
					}
				}
				if (system::timerb() > 2500 || fVar4 > 0,99f)
				{
					iLocal_551 = 2;
				}
				break;
		}
		if (func_398(1000))
		{
			iLocal_551 = 3;
		}
	}
	if (iLocal_551 == 2)
	{
		unk_0x3B327805C3CAF8DC();
		unk_0xA62957B100C8DE6D(0f, 10f, 3);
		unk_0x428C32CC68809A35(1);
		unk_0x55098D9E9AD58806(joaat("police3"));
		unk_0x55098D9E9AD58806(joaat("s_m_y_cop_01"));
		func_421(0);
		unk_0x44C48AC14D3C09ED(iLocal_433[0], 1, 0);
		unk_0x44C48AC14D3C09ED(iLocal_433[1], 1, 0);
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
		{
			unk_0xC0086E5CBF13BBF7(unk_0x4A8C381C258A124D(), -8f, 1);
			unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
			unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/], -1);
			unk_0xE456FB21FF21AE99(Local_491[iLocal_283 /*7*/], 0);
		}
		if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
		{
			unk_0xC0086E5CBF13BBF7(Local_471.f_0, -8f, 1);
			unk_0x19626F992DC71FB9(Local_471.f_0);
			unk_0x84B06A81C98DA4B8(Local_471.f_0);
			unk_0xB2BD5837A8D3CEDA(Local_471.f_0, -32,912f, -1086,304f, 29,2035f, 1, 0, 0, 1);
			unk_0x5D7CD709B34C90F0(Local_471.f_0, 1);
			unk_0x44C48AC14D3C09ED(Local_471.f_0, 0, 0);
			unk_0x4285E11B28063EE0(Local_471.f_0, 0, 0);
		}
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
		{
			if (unk_0x050D073F91C5243C(Local_491[iLocal_283 /*7*/]))
			{
				unk_0x1D2DAF2A41FFC4A0(Local_491[iLocal_283 /*7*/]);
			}
			unk_0x7821F942CAEEBEE1(iLocal_287, sLocal_379);
			unk_0x5D7CD709B34C90F0(Local_491[iLocal_283 /*7*/], 0);
			if (iLocal_283 == 0)
			{
				unk_0x5C96CEA06531AB03(Local_491[iLocal_283 /*7*/], 337,9254f);
				unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_283 /*7*/], 35,9457f, -646,1738f, 30,6258f, 1, 0, 0, 1);
			}
			else
			{
				unk_0x5C96CEA06531AB03(Local_491[iLocal_283 /*7*/], 335,015f);
				unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_283 /*7*/], 35,2234f, -646,9493f, 30,6292f, 1, 0, 0, 1);
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
		{
			if (unk_0x050D073F91C5243C(Local_491[iLocal_284 /*7*/]))
			{
				unk_0x1D2DAF2A41FFC4A0(Local_491[iLocal_284 /*7*/]);
			}
			unk_0x7821F942CAEEBEE1(iLocal_286, sLocal_379);
			unk_0x7821F942CAEEBEE1(iLocal_285, sLocal_379);
			unk_0x001B008A010F2FE6(Local_491[iLocal_284 /*7*/], 0);
			func_368();
		}
		if (unk_0x15CCE8886267624F())
		{
			func_48(35,9457f, -646,1738f, 30,6258f, 200f, 1, 5000);
		}
		if (unk_0xD9F5E1FEFD1329E4(iLocal_398, 0))
		{
			if (unk_0x050D073F91C5243C(iLocal_398))
			{
				func_400(&iLocal_398, 10500f);
				unk_0x206AB1458FD9522F(iLocal_398, 1f);
				unk_0x44A13535A15C20E0(iLocal_398, 1);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_411[0]))
			{
				unk_0xAAA71DD7E9059338(iLocal_411[0], 0);
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_411[1]))
			{
				unk_0xAAA71DD7E9059338(iLocal_411[1], 0);
			}
		}
		unk_0x60040CDD28AA1BC3(81,9f, -600,2f, 32,5f, 30f, 0, 0, 0, 0, 0, 0, 0);
		if ((unk_0x78411E34CF90EA8C(uLocal_421) && unk_0xBCF87EE3DC296C2A(1) != 4) && unk_0xD511F6B5FB8D3854() != 4)
		{
			unk_0x85E6A1E36B5E2E4D(uLocal_421, 0);
			if (iLocal_283 == 0)
			{
				uLocal_421 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", 34,02319f, -647,5784f, 31,91944f, -1,429148f, 0f, -47,80906f, 50,02792f, 1, 2);
			}
			else
			{
				uLocal_421 = unk_0x2CB6AB601EB7D2D9("DEFAULT_SCRIPTED_CAMERA", 33,33243f, -648,7061f, 31,86157f, -0,377383f, 0f, -47,84317f, 50,02792f, 1, 2);
			}
			system::wait(0);
		}
		unk_0x268BE77F77533D03(sLocal_385);
		unk_0x51E3279E9437131C(1);
		unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
		unk_0x37B894853929BF1A(1);
		unk_0x747786364137DC63(1);
		unk_0xD7C0EA10993D3214(0, 0);
		func_62(0, 1, 1, 0, 0, 0, 0);
		unk_0xB43467C43086A6A1("ARM_1_COPS_ARRIVE");
		unk_0x64BB72494B9DF6DC((-50,5f - unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D())));
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		if (unk_0xBCF87EE3DC296C2A(1) == 4 || unk_0xD511F6B5FB8D3854() == 4)
		{
			unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		}
		else
		{
			unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
		}
		unk_0x6981C3213B841071();
		iLocal_551 = 0;
		iLocal_550 = 6;
	}
	if (iLocal_551 == 3)
	{
		if (!unk_0x15CCE8886267624F())
		{
			if (!unk_0x78ABC1D11B34F324())
			{
				unk_0x8F72AF14CE5AACE4(800);
			}
			while (!unk_0x15CCE8886267624F())
			{
				if (!unk_0x1C2F771CDC87A3A5(Local_491[iLocal_284 /*7*/], 0))
				{
					unk_0x2814BEDF5E0AF4C0(Local_491[iLocal_284 /*7*/], 1);
				}
				if (!unk_0x1C2F771CDC87A3A5(Local_491[iLocal_283 /*7*/], 0))
				{
					unk_0x2814BEDF5E0AF4C0(Local_491[iLocal_283 /*7*/], 1);
				}
				system::wait(0);
			}
		}
		unk_0x406CBCEA35499884();
		func_72();
		if (unk_0xD9F5E1FEFD1329E4(iLocal_398, 0))
		{
			if (unk_0x050D073F91C5243C(iLocal_398))
			{
				unk_0x1D2DAF2A41FFC4A0(iLocal_398);
			}
			unk_0x4539850624F18A9E(iLocal_398, 1);
			unk_0xBA3C1A9AA7FD9616(iLocal_398, 2);
			unk_0x8C9AE8FF021E8F23(iLocal_398, 1);
			unk_0x7821F942CAEEBEE1(301, sLocal_379);
			unk_0x88556DA0593A0748(iLocal_398, 300, sLocal_379, 1);
		}
		if (!unk_0x9F0C06CFBACDD6A1(iLocal_295))
		{
			unk_0x8E4825CCACA34B58(iLocal_295);
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_432[1]))
		{
			if (unk_0x13CCB1AD131C1082(iLocal_432[1], "map_objects", "p_sec_gate_01_s_close", 3))
			{
				unk_0x6D75623C644D6F83(iLocal_432[1], "map_objects", "p_sec_gate_01_s_close", 0,99f);
			}
		}
		iLocal_551 = 2;
	}
}

struct<6> func_420()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		iVar1 = unk_0xE7365CC791D1E4EB();
		iVar1 = (iVar1 + Global_23296);
		if (iVar1 > -1)
		{
			return Global_21154[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_421(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_441 == 0)
		{
			iLocal_441 = unk_0x0556019E7EE8EC9A(89,7f, -694,9f, 32,7f, "dt1_05_carpark");
		}
		else if (unk_0xD0B0D1BD29678350(iLocal_441))
		{
			return 1;
		}
		else
		{
			unk_0x74C1590CC91B3930(iLocal_441);
		}
	}
	else if (iLocal_441 != 0)
	{
		unk_0xBBB6D0F765409642(iLocal_441);
		iLocal_441 = 0;
	}
	return 0;
}

void func_422(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_64167 = 0;
	if (!Global_64391[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_76261)
	{
		if (Global_76262[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_76262[iVar1 /*9*/].f_1 = 1;
			Global_76262[iVar1 /*9*/].f_2 = 0f;
			if (Global_76262[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

float func_423(struct<3> Param0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = unk_0x95610E68DFCFC225(iParam1, sParam2);
	fVar1 = unk_0x1F921E74406AE806(iVar0);
	fVar2 = (fVar1 / 2f);
	fVar3 = (fVar1 / 2f);
	iVar4 = 0;
	while (iVar4 <= iParam3)
	{
		if (system::vdist2(Param0, unk_0x763EEC52E292B5A0(iVar0, func_424((fVar2 - fVar3), 0f, fVar1))) < system::vdist2(Param0, unk_0x763EEC52E292B5A0(iVar0, func_424((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 - fVar3);
		}
		if (system::vdist2(Param0, unk_0x763EEC52E292B5A0(iVar0, func_424((fVar2 - fVar3), 0f, fVar1))) > system::vdist2(Param0, unk_0x763EEC52E292B5A0(iVar0, func_424((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 + fVar3);
		}
		iVar4++;
	}
	return fVar2;
}

float func_424(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_425()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_191)
	{
		if (iLocal_135[iVar0] > 0)
		{
			unk_0x7821F942CAEEBEE1(iLocal_135[iVar0], sLocal_379);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_188)
	{
		if (iLocal_132[iVar0] > 0)
		{
			unk_0x7821F942CAEEBEE1(iLocal_132[iVar0], sLocal_379);
		}
		iVar0++;
	}
}

void func_426(bool bParam0, bool bParam1)
{
	if (!unk_0xD6F9DEE4765092A9(&cLocal_172))
	{
		iLocal_74 = 0;
		func_443();
		unk_0x2B1BDC32466B40A9(iLocal_181);
		unk_0x33B6B083EA6305A5(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x7BFF320D45B40B56(unk_0x259BE71D8A81D4FA(), 1f);
			unk_0xE383E18054CA323B(unk_0x259BE71D8A81D4FA(), 1);
			unk_0xD682DD0578BF5392(1);
		}
		if (bLocal_90)
		{
			unk_0x55098D9E9AD58806(func_442());
		}
		unk_0x55098D9E9AD58806(func_441());
		unk_0x55098D9E9AD58806(func_440());
		unk_0x55098D9E9AD58806(func_439());
		if (!unk_0x15CCE8886267624F() && !bParam0)
		{
			func_438();
			func_437();
			func_434();
		}
		else
		{
			func_430();
			func_429();
		}
		if (bParam1)
		{
			func_427(0);
		}
	}
}

void func_427(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_428(iVar0, bParam0);
		iVar0++;
	}
}

void func_428(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_47(iParam0, 2, 1))
		{
			func_43(iParam0, 2, 1);
		}
	}
	else if (func_47(iParam0, 2, 1))
	{
		func_35(iParam0, 2, 1);
	}
}

void func_429()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 117)
	{
		iLocal_188[iVar0] = 0;
		Local_156[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_92[iVar0] = 0f;
		fLocal_93[iVar0] = 0f;
		fLocal_94[iVar0] = 0f;
		fLocal_95[iVar0] = 0f;
		iLocal_132[iVar0] = 0;
		fLocal_96[iVar0] = 0f;
		iLocal_133[iVar0] = 0;
		iLocal_182[iVar0] = 0;
		iLocal_134[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_189[iVar0] = 0;
		iVar0++;
	}
	iLocal_139 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_190[iVar0] = 0;
		Local_157[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_107[iVar0] = 0f;
		fLocal_108[iVar0] = 0f;
		fLocal_109[iVar0] = 0f;
		fLocal_110[iVar0] = 0f;
		iLocal_138[iVar0] = 0;
		iLocal_183[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_192[iVar0] = 0;
		iVar0++;
	}
	iLocal_141 = 0;
	iVar0 = 0;
	while (iVar0 < 38)
	{
		iLocal_191[iVar0] = 0;
		Local_158[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_101[iVar0] = 0f;
		fLocal_102[iVar0] = 0f;
		fLocal_103[iVar0] = 0f;
		fLocal_104[iVar0] = 0f;
		iLocal_135[iVar0] = 0;
		fLocal_105[iVar0] = 0f;
		iLocal_136[iVar0] = 0;
		iLocal_184[iVar0] = 0;
		iLocal_137[iVar0] = 0;
		iVar0++;
	}
	iLocal_140 = 0;
	iLocal_143 = 0;
	iLocal_146 = 0;
	iLocal_147 = 0;
	iLocal_148 = 0;
}

void func_430()
{
	func_433();
	func_432();
	func_431();
}

void func_431()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_191[iVar0]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_191[iVar0], 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_191[iVar0]))
				{
					unk_0x1D2DAF2A41FFC4A0(iLocal_191[iVar0]);
				}
				iVar1 = unk_0xFD5C5BBD1FE92BB7(iLocal_191[iVar0], -1, 0);
				if (unk_0xFC8BFE4B41177C22(iVar1) && iVar1 != unk_0x4A8C381C258A124D())
				{
					if (unk_0x110821AE6C63DD4F(iVar1))
					{
						unk_0x734A9F4537A31459(&iVar1);
					}
				}
			}
			if (unk_0x110821AE6C63DD4F(iLocal_191[iVar0]))
			{
				unk_0x8C1F7D7A31B2A38E(&(iLocal_191[iVar0]));
			}
		}
		iLocal_136[iVar0] = 0;
		if (!bLocal_70 && !bLocal_83)
		{
			if (iLocal_135[iVar0] > 0)
			{
				unk_0x7821F942CAEEBEE1(iLocal_135[iVar0], &cLocal_172);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (!iLocal_184[iVar0] == 0)
		{
			unk_0x55098D9E9AD58806(iLocal_184[iVar0]);
		}
		iVar0++;
	}
}

void func_432()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_190[iVar0]))
		{
			if (unk_0x110821AE6C63DD4F(iLocal_190[iVar0]))
			{
				unk_0x8C1F7D7A31B2A38E(&(iLocal_190[iVar0]));
			}
		}
		iLocal_138[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_183[iVar0] == 0)
		{
			unk_0x55098D9E9AD58806(iLocal_183[iVar0]);
		}
		iVar0++;
	}
	iLocal_144 = 0;
	iLocal_141 = 0;
}

void func_433()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_188[iVar0]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_188[iVar0], 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_188[iVar0]))
				{
					unk_0x1D2DAF2A41FFC4A0(iLocal_188[iVar0]);
				}
				iVar1 = unk_0xFD5C5BBD1FE92BB7(iLocal_188[iVar0], -1, 0);
				if (unk_0xFC8BFE4B41177C22(iVar1) && iVar1 != unk_0x4A8C381C258A124D())
				{
					if (unk_0x110821AE6C63DD4F(iVar1))
					{
						unk_0x734A9F4537A31459(&iVar1);
					}
				}
			}
			if (unk_0x110821AE6C63DD4F(iLocal_188[iVar0]))
			{
				unk_0x8C1F7D7A31B2A38E(&(iLocal_188[iVar0]));
			}
		}
		if (!bLocal_70 && !bLocal_83)
		{
			if (iLocal_132[iVar0] > 0)
			{
				unk_0x7821F942CAEEBEE1(iLocal_132[iVar0], &cLocal_172);
			}
		}
		iLocal_133[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (!iLocal_182[iVar0] == 0)
		{
			unk_0x55098D9E9AD58806(iLocal_182[iVar0]);
		}
		iVar0++;
	}
	iLocal_143 = 0;
	iLocal_139 = 0;
}

void func_434()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_191[iVar0]))
		{
			if (unk_0xD9F5E1FEFD1329E4(iLocal_191[iVar0], 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_191[iVar0]))
				{
					unk_0x1D2DAF2A41FFC4A0(iLocal_191[iVar0]);
				}
			}
			func_436(iLocal_191[iVar0]);
			func_435(iLocal_191[iVar0]);
		}
		iLocal_136[iVar0] = 0;
		iLocal_137[iVar0] = 0;
		if (!bLocal_70 && !bLocal_83)
		{
			if (iLocal_135[iVar0] > 0)
			{
				unk_0x7821F942CAEEBEE1(iLocal_135[iVar0], &cLocal_172);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (!iLocal_184[iVar0] == 0)
		{
			unk_0x55098D9E9AD58806(iLocal_184[iVar0]);
		}
		iVar0++;
	}
	iLocal_145 = 0;
}

void func_435(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		unk_0x68298CA6191CDFDB(&iParam0);
	}
}

void func_436(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar1 = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
		if (!unk_0x4FAFF4BCB7633475(iVar1))
		{
			if (!iVar1 == unk_0x4A8C381C258A124D())
			{
				fVar0 = unk_0xDF93B3CFAC96698F(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62,9f)
				{
					fVar0 = 62,9f;
				}
				unk_0xB3DA477F44309390(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				unk_0x1CA08719184AFC6F(iVar1, 8192, 1);
				if (bLocal_91)
				{
					unk_0x1CA08719184AFC6F(iVar1, 65536, 1);
					unk_0x1CA08719184AFC6F(iVar1, 2, 0);
				}
				unk_0xBE8796DB2B90A437(iVar1, 6, 0);
			}
		}
	}
}

void func_437()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_190[iVar0]))
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_190[iVar0], 0))
			{
				unk_0x44C48AC14D3C09ED(iLocal_190[iVar0], 1, 0);
			}
			func_435(iLocal_190[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_183[iVar0] == 0)
		{
			unk_0x55098D9E9AD58806(iLocal_183[iVar0]);
		}
		iVar0++;
	}
	iLocal_144 = 0;
	iLocal_141 = 0;
}

void func_438()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_188[iVar0]))
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_188[iVar0], 0))
			{
				unk_0x44C48AC14D3C09ED(iLocal_188[iVar0], 1, 0);
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_188[iVar0], 0))
			{
				if (unk_0x050D073F91C5243C(iLocal_188[iVar0]))
				{
					unk_0x1D2DAF2A41FFC4A0(iLocal_188[iVar0]);
				}
			}
			func_436(iLocal_188[iVar0]);
			func_435(iLocal_188[iVar0]);
		}
		iLocal_133[iVar0] = 0;
		iLocal_134[iVar0] = 0;
		if (!bLocal_70 && !bLocal_83)
		{
			if (iLocal_132[iVar0] > 0)
			{
				unk_0x7821F942CAEEBEE1(iLocal_132[iVar0], &cLocal_172);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (!iLocal_182[iVar0] == 0)
		{
			unk_0x55098D9E9AD58806(iLocal_182[iVar0]);
		}
		iVar0++;
	}
	iLocal_143 = 0;
	iLocal_139 = 0;
}

int func_439()
{
	return joaat("s_m_y_cop_01");
}

int func_440()
{
	return joaat("police");
}

int func_441()
{
	return joaat("sultan");
}

int func_442()
{
	if (iLocal_185 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_185;
}

void func_443()
{
	unk_0x5A65DF56B098A5F1();
	unk_0xECDFDC2E8AC2D613(-1);
	unk_0x474491073FE815A8(1);
	unk_0xEFAF1ADDE0F583C3(1);
	unk_0xA0265306DFF63938(1f);
	unk_0x283C0970282AA5F3(3);
	unk_0xAD9B1C8FED6B4D96(3);
}

void func_444()
{
	unk_0x5373E9377066509E("DT1_03_Shutter");
	func_414(180, 1, 0, 1, 0);
}

void func_445()
{
	if (iLocal_284 == 1)
	{
		iLocal_285 = 9;
		iLocal_286 = 313;
		iLocal_287 = 312;
	}
	else
	{
		iLocal_285 = 8;
		iLocal_286 = 311;
		iLocal_287 = 310;
	}
}

void func_446()
{
	if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
	{
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
		{
			if (!unk_0xCECDBB848D53DEB2(Local_471.f_0, Local_491[iLocal_284 /*7*/], 0))
			{
				unk_0x73CAFD2038E812B3(Local_471.f_0, Local_491[iLocal_284 /*7*/], -1);
			}
		}
	}
}

void func_447()
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	var uVar10;
	struct<6> Var11;
	char cVar12[24];
	struct<6> Var13;
	char cVar14[24];
	int iVar15;
	char* sVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	struct<6> Var23;
	
	fVar0 = 1250f;
	if (iLocal_550 == 4)
	{
		fVar0 = 83500f;
	}
	if (iLocal_551 == 4)
	{
		Var1 = { Local_491[0 /*7*/].f_2 };
		fVar2 = fLocal_274;
		if (iLocal_550 == 4)
		{
			Var1 = { -1155,198f, -873,2174f, 10,6185f };
			fVar2 = -150f;
		}
		if (bLocal_254)
		{
			func_287(Var1, fVar2, 0, 0);
			iLocal_282 = 99;
		}
		else
		{
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Var1, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fVar2);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
			unk_0x6C39BDF5EA5D38FC(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1));
			system::wait(0);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
			iLocal_282 = 99;
		}
		func_377();
		unk_0xEC9DAA34BBB4658C(iLocal_455);
		while ((((!func_542() || !unk_0xFC8BFE4B41177C22(Local_471.f_0)) || !unk_0xFC8BFE4B41177C22(Local_491[0 /*7*/])) || !unk_0xFC8BFE4B41177C22(Local_491[1 /*7*/])) || !unk_0x6252BC0DD8A320DB(iLocal_455))
		{
			func_282(Local_370, 0, 0);
			func_374(Local_491[0 /*7*/].f_2, Local_491[0 /*7*/].f_5);
			func_373(Local_491[1 /*7*/].f_2, Local_491[1 /*7*/].f_5);
			unk_0xEC9DAA34BBB4658C(iLocal_455);
			unk_0xD7E1DF759CD0FFF2("CAR_CRASHES_01", 0, -1);
			unk_0xD7E1DF759CD0FFF2("CAR_CRASHES_MED_01", 0, -1);
			system::wait(0);
		}
		func_190(0, -1, 0);
		func_401();
		func_446();
		func_367();
		func_541(1);
		unk_0x89609F1D3BE65A34(unk_0x259BE71D8A81D4FA(), 0);
		if (iLocal_550 == 3)
		{
			iLocal_413 = unk_0xB1DBFEB95C0EFB88(26, iLocal_455, -1886,833f, -579,0045f, 10,8163f, 315,0557f, 1, 1);
			unk_0xD1C578C204015E1F(iLocal_413, 0, 0, 0, 0);
			unk_0xD1C578C204015E1F(iLocal_413, 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(iLocal_413, 4, 0, 1, 0);
			unk_0xD1C578C204015E1F(iLocal_413, 8, 1, 0, 0);
			unk_0xE67051907958B5EB(iLocal_413, unk_0x4A8C381C258A124D(), -1, 0, 2);
		}
		unk_0x55098D9E9AD58806(iLocal_455);
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
		{
			if (iLocal_550 == 4)
			{
				unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_283 /*7*/], -1153,198f, -875,2174f, 10,6185f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(Local_491[iLocal_283 /*7*/], -150f);
			}
			unk_0xC229299217554C78(Local_491[iLocal_283 /*7*/], 1, 1, 0);
		}
		unk_0x91115A9BE4445AA6("RADIO_03_HIPHOP_NEW");
		unk_0x203D79229B3797AE("RADIO_03_HIPHOP_NEW");
		unk_0xF51244E6BCE779C5(0);
		unk_0xE42344700E00B10F("RADIO_03_HIPHOP_NEW", "ARM1_RADIO_STARTS");
		func_540(sLocal_379, iLocal_288, 1, 1);
		func_538();
		func_537(1);
		func_536(joaat("a_m_m_bevhills_02"));
		iLocal_80 = 1;
		bLocal_86 = true;
		fLocal_123 = 200f;
		iLocal_150 = iLocal_135[15];
		func_535((fVar0 + 4000f), (fVar0 - 5000f));
		system::wait(500);
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0) && unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
		{
			unk_0x88556DA0593A0748(Local_491[iLocal_284 /*7*/], iLocal_288, sLocal_379, 1);
			func_400(&(Local_491[iLocal_284 /*7*/]), fVar0);
			func_534(Local_491[iLocal_284 /*7*/], fVar0);
			if (iLocal_550 == 3)
			{
				unk_0xB055330FF3BFD8A6(unk_0x259BE71D8A81D4FA(), 1, 0);
				unk_0xE0A0D0E41195BAC0(unk_0x259BE71D8A81D4FA(), 0, 0);
			}
			else
			{
				unk_0x5C96CEA06531AB03(Local_491[iLocal_283 /*7*/], 210,9189f);
				unk_0xB2BD5837A8D3CEDA(Local_491[iLocal_283 /*7*/], -1153,198f, -875,2174f, 10,6185f, 1, 0, 0, 1);
				unk_0x1DE99C193C7EC64B(Local_491[iLocal_283 /*7*/], 1084227584);
				unk_0xE0A0D0E41195BAC0(unk_0x259BE71D8A81D4FA(), 1, 0);
			}
			unk_0x64BB72494B9DF6DC(0f);
			unk_0xD815D4BD1AE9E85A(0f, 1065353216);
			system::wait(100);
			iLocal_551 = 0;
		}
	}
	if (iLocal_551 == 0)
	{
		func_445();
		unk_0x425BBE19F25A57AB(0f);
		unk_0x283C0970282AA5F3(1);
		unk_0xAD9B1C8FED6B4D96(2);
		iLocal_216 = 0;
		iLocal_217 = 0;
		iLocal_218 = 0;
		bLocal_215 = false;
		iLocal_224 = 0;
		iLocal_225 = 0;
		iLocal_237 = 0;
		iLocal_248 = 0;
		iLocal_251 = 0;
		iLocal_258 = 0;
		fLocal_268 = 1f;
		iLocal_293 = 0;
		Local_492.f_1 = 0;
		Local_492.f_0 = 0f;
		func_362();
		func_533(1);
		func_532(1);
		func_531(1);
		func_412(1);
		func_884(61, 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
		unk_0xAA4A71CD7DB4FB3B("RADIO_03_HIPHOP_NEW");
		unk_0xF51244E6BCE779C5(1);
		func_530(Local_491[iLocal_283 /*7*/], -1);
		func_291(Local_491[iLocal_283 /*7*/], -1);
		system::settimera(0);
		system::settimerb(0);
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
		{
			unk_0x680C862D9FC0F4BC(Local_491[iLocal_283 /*7*/], 1);
			iLocal_312 = unk_0x8D91ADE44AC79BC9(Local_491[iLocal_283 /*7*/]);
		}
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
		{
			unk_0x79B52EC5A9AB6229(Local_491[iLocal_284 /*7*/]);
			unk_0xF2FCE3F2F4D0CB50(Local_491[iLocal_284 /*7*/], 1);
			unk_0x30415B9FFAC70D2C(Local_491[iLocal_284 /*7*/], 1);
			unk_0x616C2EAE947E6027(Local_491[iLocal_284 /*7*/], "ARM_1_LAMARS_CAR", 0);
			iLocal_313 = unk_0x8D91ADE44AC79BC9(Local_491[iLocal_284 /*7*/]);
		}
		if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
		{
			unk_0xAAA71DD7E9059338(Local_471.f_0, 1);
			unk_0x0428AFDCAA63B06E(Local_471.f_0, 116, 0);
			unk_0x0428AFDCAA63B06E(Local_471.f_0, 118, 0);
			unk_0x0428AFDCAA63B06E(Local_471.f_0, 208, 1);
			unk_0x93956DF263A4A0DC(Local_471.f_0, 2f);
		}
		if (unk_0xBC2EE32DE886BD08("ARM_1_GET_IN_CAR_SCENE"))
		{
			unk_0xB43467C43086A6A1("ARM_1_GET_IN_CAR_SCENE");
		}
		if (iLocal_550 == 3)
		{
			if (!unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_START"))
			{
				unk_0xCAC4020CCF361AC8("ARM_1_DRIVE_START");
			}
			unk_0xE0A0D0E41195BAC0(unk_0x259BE71D8A81D4FA(), 0, 0);
		}
		else
		{
			unk_0xE0A0D0E41195BAC0(unk_0x259BE71D8A81D4FA(), 1, 0);
			iLocal_266[1] = 1;
			iLocal_266[12] = 1;
			iLocal_266[13] = 1;
			iLocal_266[14] = 1;
			iLocal_266[15] = 1;
			iLocal_266[16] = 1;
			if (bLocal_227)
			{
				iLocal_266[19] = 1;
				iLocal_266[20] = 1;
				iLocal_266[21] = 1;
				Local_492.f_1 = 1;
				bLocal_260 = true;
			}
			func_886(1, "CHASE_MID_POINT", 0, 0, 0, 1);
		}
		iLocal_316 = unk_0x8CC50AC10D8037C7(-334,1819f, -673,7113f, 33,33865f, 28,25f, 3f, 3f, 175,8f, 0, 7);
		iLocal_317 = unk_0x8CC50AC10D8037C7(-1138,2f, -723,6f, 20f, 10f, 10f, 3f, 91,3f, 0, 7);
		unk_0xF6ECB54A7941386F(2);
		if (unk_0x15CCE8886267624F())
		{
			system::settimerb(0);
			while (system::timerb() < 500)
			{
				func_535((fVar0 + 5000f), (fVar0 - 5000f));
				func_529();
				func_528();
				func_502(Local_491[iLocal_284 /*7*/], 1f);
				system::wait(0);
			}
			if (iLocal_550 == 4)
			{
				if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
				{
					unk_0x93C337B66C95C99B(Local_491[iLocal_283 /*7*/], 20f);
				}
			}
			unk_0x10B228D2FDB7AF16(800);
			while (!unk_0x9390801B06EE998F())
			{
				func_535((fVar0 + 5000f), (fVar0 - 5000f));
				func_528();
				func_502(Local_491[iLocal_284 /*7*/], 1f);
				func_497(0);
				system::wait(0);
			}
		}
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
		{
			unk_0x680C862D9FC0F4BC(Local_491[iLocal_283 /*7*/], 1);
		}
		if (iLocal_550 == 3)
		{
			unk_0x15263A2A8A135DF3(unk_0x259BE71D8A81D4FA(), 1, 0);
		}
		iLocal_572 = unk_0x1DD05E817C89C737();
		func_444();
		iLocal_331 = 0;
		iLocal_333 = 0;
		iLocal_334 = 0;
		iLocal_335 = 0;
		iLocal_321 = 0;
		bLocal_240 = false;
		iLocal_322 = 0;
		iLocal_230 = 0;
		bLocal_245 = false;
		iLocal_282 = 0;
		iLocal_551 = 1;
	}
	if (iLocal_551 == 1)
	{
		func_497(0);
		Var3 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		if (!unk_0x4FAFF4BCB7633475(iLocal_413))
		{
			if (!bLocal_240)
			{
				if ((fLocal_267 > 15000f || (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0) && unk_0xDF93B3CFAC96698F(Local_491[iLocal_283 /*7*/]) > 1f)) || unk_0x7B780C491DEC834E(-1885f, -577,6f, 12,1f, 1f))
				{
					bLocal_240 = true;
				}
			}
			else if (!unk_0x1B32E388988DD296(iLocal_413, 0) && unk_0x9B5C1660CCDF7189(iLocal_413, joaat("script_task_combat")) != 1)
			{
				unk_0x62A5310368A20EFA(iLocal_413, unk_0x4A8C381C258A124D(), 0, 16);
			}
			if (system::vdist2(Var3, unk_0xD1A6A821F5AC81DB(iLocal_413, 1)) > 2500f)
			{
				if (!unk_0xCB5CAFF0A4A8B74B(iLocal_413))
				{
					func_59(&iLocal_413, 0);
				}
			}
		}
		if (iLocal_571 == 0 && (unk_0x1DD05E817C89C737() - iLocal_572) > 10000)
		{
			unk_0x3B327805C3CAF8DC();
			iLocal_571 = 1;
		}
		unk_0x80813AC549A1E8AE(sLocal_393);
		unk_0x80813AC549A1E8AE(sLocal_392);
		unk_0x80813AC549A1E8AE(sLocal_394);
		unk_0xD7E1DF759CD0FFF2("CAR_CRASHES_01", 0, -1);
		unk_0xD7E1DF759CD0FFF2("CAR_CRASHES_MED_01", 0, -1);
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0) && unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
		{
			if (iLocal_282 == 0)
			{
				if (unk_0x050D073F91C5243C(Local_491[iLocal_283 /*7*/]))
				{
					fVar4 = unk_0x157F3D5A4AAB2C50(Local_491[iLocal_283 /*7*/]);
					if (unk_0x38A100E16C95161B(Local_491[iLocal_283 /*7*/]) != 4)
					{
						unk_0x0B74F181ADFC39BF(Local_491[iLocal_283 /*7*/], 4);
					}
					if ((iLocal_283 == 1 && fVar4 > 3900f) || (iLocal_283 == 0 && fVar4 > 3600f))
					{
						unk_0x1D2DAF2A41FFC4A0(Local_491[iLocal_283 /*7*/]);
						unk_0x7821F942CAEEBEE1(Local_491[iLocal_283 /*7*/].f_6, sLocal_379);
					}
				}
				else if (unk_0x38A100E16C95161B(Local_491[iLocal_283 /*7*/]) != 1)
				{
					unk_0x0B74F181ADFC39BF(Local_491[iLocal_283 /*7*/], 1);
				}
			}
			fVar5 = system::vdist2(Var3, unk_0xD1A6A821F5AC81DB(Local_491[iLocal_284 /*7*/], 1));
			iVar6 = unk_0xF0CA45A211FFDCD9(Var3, 10f, 0, func_496());
			if (unk_0x050D073F91C5243C(Local_491[iLocal_284 /*7*/]))
			{
				fLocal_267 = unk_0x157F3D5A4AAB2C50(Local_491[iLocal_284 /*7*/]);
				if (bLocal_239)
				{
					func_493(&fLocal_268, Local_491[iLocal_283 /*7*/], Local_491[iLocal_284 /*7*/]);
				}
				else
				{
					func_492(&fLocal_268, Local_491[iLocal_283 /*7*/], Local_491[iLocal_284 /*7*/]);
				}
				fLocal_126 = 7000f;
				func_528();
				func_502(Local_491[iLocal_284 /*7*/], fLocal_268);
				unk_0x206AB1458FD9522F(Local_491[iLocal_284 /*7*/], fLocal_268);
				func_489();
				func_488(&(Local_491[iLocal_284 /*7*/]), fLocal_267);
				if (!iLocal_230)
				{
					if (fLocal_267 > 50500f && fLocal_267 < 51100f)
					{
						unk_0x44C48AC14D3C09ED(Local_491[iLocal_284 /*7*/], 0, 0);
						iLocal_230 = 1;
					}
				}
				else if (fLocal_267 > 51100f)
				{
					unk_0x44C48AC14D3C09ED(Local_491[iLocal_284 /*7*/], 1, 0);
					iLocal_230 = 0;
				}
				if (!bLocal_215)
				{
					if (fLocal_267 > (unk_0xE2E30D829A6B8F9E(iLocal_288, sLocal_379) - 4000f))
					{
						if (unk_0x050D073F91C5243C(Local_491[iLocal_284 /*7*/]))
						{
							unk_0x1D2DAF2A41FFC4A0(Local_491[iLocal_284 /*7*/]);
						}
						func_426(0, 1);
						unk_0xE4DC7B3DD712372B(Local_491[iLocal_284 /*7*/]);
						bLocal_212 = false;
						bLocal_215 = true;
					}
				}
				if (!iLocal_248)
				{
					if (iLocal_284 == 0 && fLocal_267 >= 54635f)
					{
						iVar7 = unk_0x8366ABB82B1ABC59(-1052,49f, -476,15f, 36,66f, 5f, joaat("prop_sec_barrier_ld_01a"), 0, 0, 1);
						if (unk_0xFC8BFE4B41177C22(iVar7))
						{
							unk_0x935364B4448CD584(Local_491[iLocal_284 /*7*/], 1);
							unk_0x8C4D4D7E3B6BC910(iVar7, 1, 0);
							unk_0x8C4D4D7E3B6BC910(iVar7, 2, 0);
						}
						iLocal_248 = 1;
					}
				}
				else if (fLocal_267 > 56000f && fLocal_267 < 56500f)
				{
					unk_0x935364B4448CD584(Local_491[iLocal_284 /*7*/], 0);
				}
			}
			if (iLocal_550 == 3)
			{
				if (fLocal_267 > 83000f)
				{
					if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0) && unk_0xCB5CAFF0A4A8B74B(Local_491[iLocal_284 /*7*/]))
					{
						func_886(1, "CHASE_MID_POINT", 0, 0, 0, 1);
						iLocal_550 = 4;
					}
				}
			}
			if (unk_0x875A214D5EBCA509(0, 75))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/], 0))
				{
					unk_0xBEB96F1A510EE9AA(unk_0x4A8C381C258A124D());
				}
			}
			if (fLocal_267 < 28500f)
			{
				fVar8 = 160000f;
			}
			else
			{
				fVar8 = 60000f;
			}
			if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), Local_491[iLocal_283 /*7*/]))
			{
				func_487(iVar6);
				func_486(iVar6);
				if (func_308("CMN_GENGETBCK", 0, 0))
				{
					unk_0x406CBCEA35499884();
				}
				if (!bLocal_69)
				{
					iLocal_306 = unk_0x1DD05E817C89C737();
				}
				if (bLocal_227)
				{
					if (!iLocal_266[19])
					{
						if (((iLocal_266[1] && (iLocal_266[12] || !func_477(1, 1, 0))) && !func_308("AR1_CHASE", 0, 0)) && fLocal_267 > 17200f)
						{
							if (!unk_0x4C705AAF75363287())
							{
								if (iLocal_321 == 0)
								{
									iLocal_321 = unk_0x1DD05E817C89C737();
								}
								else if ((unk_0x1DD05E817C89C737() - iLocal_321) > 2500)
								{
									if (unk_0xAE231F549813BBDF(0))
									{
										func_57("AR1_RAGEBAR_KM", 17000);
									}
									else
									{
										func_57("AR1_RAGEBAR", 17000);
									}
									iLocal_266[19] = 1;
									iLocal_321 = 0;
									unk_0xE0A0D0E41195BAC0(unk_0x259BE71D8A81D4FA(), 1, 0);
									unk_0x8E8EDF5205B15D28(10000);
								}
							}
						}
					}
					else if (!iLocal_266[20])
					{
						if (iLocal_321 == 0)
						{
							if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
							{
								iLocal_321 = unk_0x1DD05E817C89C737();
							}
						}
						else if ((unk_0x1DD05E817C89C737() - iLocal_321) > 2000)
						{
							func_57("AR1_RAGEHOW", 13000);
							iLocal_266[20] = 1;
							iLocal_321 = unk_0x1DD05E817C89C737();
							unk_0x8E8EDF5205B15D28(0);
						}
					}
					else if (!iLocal_266[21])
					{
						if ((unk_0x1DD05E817C89C737() - iLocal_321) > 10000 && !unk_0x4C705AAF75363287())
						{
							func_57("AR1_RAGESTAT", 13000);
							iLocal_266[21] = 1;
							iLocal_321 = unk_0x1DD05E817C89C737();
							unk_0x8E8EDF5205B15D28(0);
						}
					}
					else if (!iLocal_266[22])
					{
						if (!unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
						{
							iLocal_321 = unk_0x1DD05E817C89C737();
						}
						else if ((unk_0x1DD05E817C89C737() - iLocal_321) > 500 && !unk_0x4C705AAF75363287())
						{
							if (unk_0xAE231F549813BBDF(0))
							{
								func_57("AR1_RAGEDEACT_KM", 13000);
							}
							else
							{
								func_57("AR1_RAGEDEACT", 13000);
							}
							iLocal_266[22] = 1;
							iLocal_321 = unk_0x1DD05E817C89C737();
						}
					}
					if (!Local_492.f_1)
					{
						if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
						{
							func_404();
							Local_492.f_1 = 1;
						}
					}
				}
				if (iLocal_266[1])
				{
					if (!iLocal_266[12])
					{
						if (iLocal_322 == 0)
						{
							iLocal_322 = unk_0x1DD05E817C89C737();
						}
						else if ((unk_0x1DD05E817C89C737() - iLocal_322) > 5000)
						{
							if ((unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) && func_477(1, 1, 0)) && !unk_0x4C705AAF75363287())
							{
								iLocal_266[12] = 1;
								iLocal_322 = unk_0x1DD05E817C89C737();
							}
						}
					}
					else if (func_49("AR1_CAMHELP"))
					{
						if ((unk_0x1DD05E817C89C737() - iLocal_322) > 6000)
						{
							unk_0x428C32CC68809A35(0);
							iLocal_322 = unk_0x1DD05E817C89C737();
						}
					}
					if (!unk_0x4C705AAF75363287())
					{
						if (((fLocal_267 > 60000f && !iLocal_266[13]) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1210,676f, -578,6287f, 25,42328f, -1272,775f, -627,6569f, 37,72716f, 25f, 0, 1, 0)) && unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
						{
							func_57("AR1_BRAKE", 13000);
							iLocal_266[13] = 1;
						}
						if (fLocal_267 > 100000f)
						{
							unk_0x9FFEA38DBCE391EC(Local_491[iLocal_283 /*7*/], &iVar9, &uVar10);
							if (!iLocal_266[23])
							{
								if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -349,8183f, -716,8513f, 37,1367f, -351,9376f, -819,9261f, 29,76863f, 16,5f, 0, 1, 0))
								{
									if (iVar9 == 0)
									{
										func_57("AR1_HEADHELP", 13000);
										iLocal_266[23] = 1;
									}
									else
									{
										iLocal_266[23] = 1;
									}
								}
							}
						}
						if (fLocal_267 > 70000f)
						{
							if (!iLocal_266[24])
							{
								if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1134,825f, -900,8605f, 30,00168f, -1002,171f, -1127,49f, -2,783524f, 27,5f, 0, 1, 0))
								{
									func_57("AR1_JUMPHELP", 13000);
									iLocal_266[24] = 1;
								}
							}
						}
						if (fLocal_267 > 100500f && fLocal_267 < 106500f)
						{
							if (!iLocal_266[79])
							{
								func_57("AR1_VEHCAMH", 13000);
								iLocal_266[79] = 1;
							}
						}
						if (fLocal_267 > 125000f)
						{
							if (!iLocal_266[25])
							{
								if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -150,1928f, -653,9603f, 38,70139f, -69,53586f, -683,4604f, 31,17117f, 16,5f, 0, 1, 0))
								{
									func_57("AR1_JUMPHELP2", 13000);
									iLocal_266[25] = 1;
								}
							}
						}
					}
					if (iLocal_266[79])
					{
						if (func_49("AR1_VEHCAMH"))
						{
							if (unk_0x875A214D5EBCA509(0, 0))
							{
								unk_0x428C32CC68809A35(1);
							}
						}
					}
					if ((unk_0x1DD05E817C89C737() - iLocal_329) > 10000)
					{
						if ((unk_0x1DD05E817C89C737() - iLocal_306) > 0)
						{
							if (unk_0x5105BE70DEF1F5FB(Local_491[iLocal_283 /*7*/], unk_0x0D1381B6E0F3987D(Local_491[iLocal_284 /*7*/], 0f, 1f, -2f), unk_0x0D1381B6E0F3987D(Local_491[iLocal_284 /*7*/], 0f, 8f, 2f), 4f, 0, 1, 0))
							{
								unk_0xAA8884A4BB5B0167(Local_491[iLocal_284 /*7*/], 1500, 0, 0);
								iLocal_329 = unk_0x1DD05E817C89C737();
							}
						}
					}
					if (!func_358(&Local_493, 1))
					{
						if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
						{
							if (iLocal_291 == 0 || ((unk_0x1DD05E817C89C737() - iLocal_291) > 20000 && fLocal_267 < 144600f))
							{
								if (unk_0x685171EED42BC4DF(Local_491[0 /*7*/], Local_491[1 /*7*/]))
								{
									if (func_357(&Local_554, "ARM1AUD", "ARM1_CRASH", 7, 0, 0, 0))
									{
										Var11 = { func_420() };
										if (unk_0x1B79E937E91F40C3(&Var11, "ARM1_CRASH_01"))
										{
											StringCopy(&cVar12, "thatscominoutourchecks", 24);
										}
										else if (unk_0x1B79E937E91F40C3(&Var11, "ARM1_CRASH_02"))
										{
											StringCopy(&cVar12, "stoprubbinup", 24);
										}
										else if (unk_0x1B79E937E91F40C3(&Var11, "ARM1_CRASH_03"))
										{
											StringCopy(&cVar12, "imabouttotake", 24);
										}
										else if (unk_0x1B79E937E91F40C3(&Var11, "ARM1_CRASH_04"))
										{
											StringCopy(&cVar12, "imgonnatell", 24);
										}
										else if (unk_0x1B79E937E91F40C3(&Var11, "ARM1_CRASH_05"))
										{
											StringCopy(&cVar12, "ayyofrank", 24);
										}
										else
										{
											StringCopy(&cVar12, "stoprubbinup", 24);
										}
										if (unk_0xE100DD4F82A51BDE(sLocal_393))
										{
											unk_0x10425721983AE158(Local_471.f_0, sLocal_393, &cVar12, 8f, -8f, -1, 32, 0, 0, 0, 0);
										}
										iLocal_291 = unk_0x1DD05E817C89C737();
										iLocal_224 = 0;
										iLocal_225 = 0;
									}
								}
							}
							if ((unk_0x1DD05E817C89C737() - iLocal_292) > 16000 && !iLocal_225)
							{
								if (!iLocal_224)
								{
									if ((fLocal_267 > 20000f && fLocal_267 < 144600f) && (fLocal_267 < 55000f || fLocal_267 > 60500f))
									{
										if (fVar5 < 400f)
										{
											if (func_357(&Local_554, "ARM1AUD", "ARM1_TEASE", 7, 0, 0, 0))
											{
												Var13 = { func_420() };
												if (unk_0x1B79E937E91F40C3(&Var13, "ARM1_TEASE_01"))
												{
													StringCopy(&cVar14, "hahahakeepup", 24);
												}
												else if (unk_0x1B79E937E91F40C3(&Var13, "ARM1_TEASE_02"))
												{
													StringCopy(&cVar14, "manthisismeanttobe", 24);
												}
												else if (unk_0x1B79E937E91F40C3(&Var13, "ARM1_TEASE_03"))
												{
													StringCopy(&cVar14, "rememberthis", 24);
												}
												else if (unk_0x1B79E937E91F40C3(&Var13, "ARM1_TEASE_04"))
												{
													StringCopy(&cVar14, "cmonfrank", 24);
												}
												else if (unk_0x1B79E937E91F40C3(&Var13, "ARM1_TEASE_05"))
												{
													StringCopy(&cVar14, "youaintfuckin", 24);
												}
												else if (unk_0x1B79E937E91F40C3(&Var13, "ARM1_TEASE_06"))
												{
													StringCopy(&cVar14, "skoolinyoass", 24);
												}
												else if (unk_0x1B79E937E91F40C3(&Var13, "ARM1_TEASE_07"))
												{
													StringCopy(&cVar14, "keeppoping", 24);
												}
												else
												{
													StringCopy(&cVar14, "cmonmynigga", 24);
												}
												if (unk_0xE100DD4F82A51BDE(sLocal_392))
												{
													unk_0x10425721983AE158(Local_471.f_0, sLocal_392, &cVar14, 8f, -8f, -1, 32, 0, 0, 0, 0);
												}
												iLocal_224 = 1;
											}
										}
									}
								}
								else if (func_357(&Local_554, "ARM1AUD", "ARM1_RESP", 7, 0, 0, 0))
								{
									iLocal_292 = unk_0x1DD05E817C89C737();
									iLocal_224 = 0;
								}
							}
							if (!iLocal_225)
							{
								if (!iLocal_224)
								{
									if (!iLocal_266[26])
									{
										if (fLocal_267 > 8000f && fLocal_267 < 15000f)
										{
											if (func_357(&Local_554, "ARM1AUD", "ARM1_RING", 7, 0, 0, 0))
											{
												iLocal_266[26] = 1;
												bLocal_245 = true;
											}
										}
									}
									else if (!iLocal_266[72])
									{
										if (func_357(&Local_554, "ARM1AUD", "ARM1_INDIC", 7, 0, 0, 0))
										{
											iLocal_266[72] = 1;
											iLocal_225 = 1;
										}
									}
									if (fVar5 < 2500f)
									{
										if (fLocal_267 > 42000f && fLocal_267 < 43000f)
										{
											iLocal_225 = func_357(&Local_554, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_267 > 48000f && fLocal_267 < 49000f)
										{
											iLocal_225 = func_357(&Local_554, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_267 > 49000f && fLocal_267 < 52000f)
										{
											if (!iLocal_266[73])
											{
												if (unk_0xC5935DFB3F39785A(0, 2) == 0)
												{
													if (func_357(&Local_554, "ARM1AUD", "ARM1_STDIO", 7, 0, 0, 0))
													{
														iLocal_225 = 0;
														iLocal_224 = 0;
														iLocal_266[73] = 1;
													}
												}
												else if (func_357(&Local_554, "ARM1AUD", "ARM1_STDIO2", 7, 0, 0, 0))
												{
													iLocal_225 = 0;
													iLocal_224 = 0;
													iLocal_266[73] = 1;
												}
											}
										}
										if (fLocal_267 > 61000f && fLocal_267 < 62000f)
										{
											if (unk_0xC5935DFB3F39785A(0, 2) == 0)
											{
												iLocal_225 = func_357(&Local_554, "ARM1AUD", "ARM1_ALLEY", 7, 0, 0, 0);
											}
											else
											{
												iLocal_225 = func_357(&Local_554, "ARM1AUD", "ARM1_ALLEY2", 7, 0, 0, 0);
											}
										}
										if (fLocal_267 > 78000f && fLocal_267 < 79000f)
										{
											iLocal_225 = func_357(&Local_554, "ARM1AUD", "ARM1_LEFT", 7, 0, 0, 0);
										}
										if (fLocal_267 > 95500f && fLocal_267 < 96500f)
										{
											iLocal_225 = func_357(&Local_554, "ARM1AUD", "ARM1_LEFT", 7, 0, 0, 0);
										}
										if (fLocal_267 > 119300f && fLocal_267 < 120300f)
										{
											iLocal_225 = func_357(&Local_554, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_267 > 123500f && fLocal_267 < 124500f)
										{
											if (unk_0xC5935DFB3F39785A(0, 2) == 0)
											{
												iLocal_225 = func_357(&Local_554, "ARM1AUD", "ARM1_PARK", 7, 0, 0, 0);
											}
											else
											{
												iLocal_225 = func_357(&Local_554, "ARM1AUD", "ARM1_PARK3", 7, 0, 0, 0);
											}
										}
									}
								}
							}
							else if (func_357(&Local_554, "ARM1AUD", "ARM1_OKAY", 7, 0, 0, 0))
							{
								iLocal_225 = 0;
								iLocal_224 = 0;
							}
							if (!iLocal_224 && !iLocal_225)
							{
								if (fLocal_267 > 141500f && fLocal_267 < 142500f)
								{
									if (!iLocal_266[28])
									{
										if (fVar5 < 2500f)
										{
											if (unk_0xC5935DFB3F39785A(0, 2) == 0)
											{
												if (func_357(&Local_554, "ARM1AUD", "ARM1_BANK", 7, 0, 0, 0))
												{
													iLocal_266[28] = 1;
													iLocal_225 = 0;
													iLocal_224 = 0;
												}
											}
											else if (func_357(&Local_554, "ARM1AUD", "ARM1_BANK2", 7, 0, 0, 0))
											{
												iLocal_266[28] = 1;
												iLocal_225 = 0;
												iLocal_224 = 0;
											}
										}
									}
								}
								if (fLocal_267 > 50000f)
								{
									if (!iLocal_266[15])
									{
										if (iLocal_266[0])
										{
											if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1055,957f, -480,5382f, 42,98192f, -1169,248f, -545,5168f, 27,53709f, 24f, 0, 1, 0))
											{
												if (func_357(&Local_554, "ARM1AUD", "ARM1_ALIEN", 7, 0, 0, 0))
												{
													iLocal_266[15] = 1;
													iLocal_225 = 0;
													iLocal_224 = 0;
												}
											}
											else
											{
												iLocal_266[15] = 1;
												iLocal_225 = 0;
												iLocal_224 = 0;
											}
										}
									}
								}
								if (fLocal_267 > 87150f && fLocal_267 < 88150f)
								{
									if (!iLocal_266[29])
									{
										if (fVar5 < 2500f)
										{
											if (func_357(&Local_554, "ARM1AUD", "ARM1_HILL", 7, 0, 0, 0))
											{
												iLocal_266[29] = 1;
												iLocal_225 = 0;
												iLocal_224 = 0;
											}
										}
									}
								}
								if (fLocal_267 > 20000f && fVar5 > 6400f)
								{
									if (!bLocal_215)
									{
										if (!iLocal_266[30])
										{
											if ((unk_0x1DD05E817C89C737() - iLocal_326) > 10000)
											{
												if (func_357(&Local_554, "ARM1AUD", "ARM1_WRONG", 7, 0, 0, 0))
												{
													iLocal_266[30] = 1;
													iLocal_225 = 0;
													iLocal_224 = 0;
													iLocal_324++;
													iLocal_326 = unk_0x1DD05E817C89C737();
												}
											}
										}
									}
									if (!iLocal_266[31])
									{
										if ((unk_0x1DD05E817C89C737() - iLocal_327) > 10000 && (unk_0x1DD05E817C89C737() - iLocal_326) > 4000)
										{
											if (fVar5 > 10000f)
											{
												if (func_357(&Local_554, "ARM1AUD", "ARM1_WARN", 7, 0, 0, 0))
												{
													iLocal_266[31] = 1;
													iLocal_225 = 0;
													iLocal_224 = 0;
													iLocal_325++;
													iLocal_327 = unk_0x1DD05E817C89C737();
												}
											}
										}
									}
									if (!iLocal_266[32])
									{
										if ((unk_0x1DD05E817C89C737() - iLocal_328) > 10000 && (unk_0x1DD05E817C89C737() - iLocal_327) > 4000)
										{
											if (fVar5 > 22500f)
											{
												if (func_357(&Local_554, "ARM1AUD", "ARM1_WARN", 7, 0, 0, 0))
												{
													iLocal_266[32] = 1;
													iLocal_225 = 0;
													iLocal_224 = 0;
													iLocal_325++;
													iLocal_328 = unk_0x1DD05E817C89C737();
												}
											}
										}
									}
								}
								else
								{
									if (iLocal_324 < 4)
									{
										iLocal_266[30] = 1;
									}
									if (iLocal_325 < 5)
									{
										iLocal_266[31] = 1;
										iLocal_266[32] = 1;
									}
								}
								if (((fLocal_267 > 25000f && fLocal_267 < 144600f) && (unk_0x1DD05E817C89C737() - iLocal_305) > 15000) && (unk_0x1DD05E817C89C737() - iLocal_306) > 0)
								{
									if ((unk_0x1DD05E817C89C737() - iLocal_306) < 1000 && fVar5 < 400f)
									{
										if (func_357(&Local_554, "ARM1AUD", "ARM1_FRONT4", 7, 0, 0, 0))
										{
											iLocal_225 = 0;
											iLocal_224 = 0;
											iLocal_305 = unk_0x1DD05E817C89C737();
										}
									}
									if (((unk_0x1DD05E817C89C737() - iLocal_306) > 2000 && fVar5 < 3600f) && fVar5 > 400f)
									{
										if (!iLocal_266[33])
										{
											if (func_357(&Local_554, "ARM1AUD", "ARM1_FRONT1", 7, 0, 0, 0))
											{
												iLocal_225 = 0;
												iLocal_224 = 0;
												iLocal_266[33] = 1;
												iLocal_305 = unk_0x1DD05E817C89C737();
											}
										}
										else if (!iLocal_266[34])
										{
											if (func_357(&Local_554, "ARM1AUD", "ARM1_FRONT2", 7, 0, 0, 0))
											{
												iLocal_225 = 0;
												iLocal_224 = 0;
												iLocal_266[34] = 1;
												iLocal_305 = unk_0x1DD05E817C89C737();
											}
										}
										else if (!iLocal_266[35])
										{
											if (func_357(&Local_554, "ARM1AUD", "ARM1_FRONT3", 7, 0, 0, 0))
											{
												iLocal_225 = 0;
												iLocal_224 = 0;
												iLocal_266[35] = 1;
												iLocal_305 = unk_0x1DD05E817C89C737();
											}
										}
									}
								}
								if ((unk_0x1DD05E817C89C737() - iLocal_304) > 10000)
								{
									if (fVar5 < 2500f)
									{
										if (((fLocal_267 > 17000f && fLocal_267 < 25000f) || (fLocal_267 > 32000f && fLocal_267 < 39500f)) || (fLocal_267 > 102000f && fLocal_267 < 108000f))
										{
											iVar15 = unk_0xC5935DFB3F39785A(0, 6);
											if (iVar15 == 0)
											{
												sVar16 = "ARM1_CHAT1";
												iVar17 = 65;
											}
											else if (iVar15 == 1)
											{
												sVar16 = "ARM1_CHAT2";
												iVar17 = 66;
											}
											else if (iVar15 == 2)
											{
												sVar16 = "ARM1_CHAT3";
												iVar17 = 67;
											}
											else if (iVar15 == 3)
											{
												sVar16 = "ARM1_CHAT4";
												iVar17 = 68;
											}
											else if (iVar15 == 4)
											{
												sVar16 = "ARM1_CHAT6";
												iVar17 = 70;
											}
											else
											{
												sVar16 = "ARM1_CHAT7";
												iVar17 = 71;
											}
											if (!iLocal_266[16] && !iLocal_266[17])
											{
												if (!iLocal_266[37])
												{
													if (!iLocal_266[26])
													{
														sVar16 = "ARM1_RING";
														iVar17 = 18;
													}
													else
													{
														iLocal_266[37] = 1;
													}
												}
												if (iLocal_266[37])
												{
													if (func_473() == 0)
													{
														sVar16 = "ARM1_TOW2";
														iVar17 = 17;
													}
													else
													{
														sVar16 = "ARM1_TOW2";
														iVar17 = 17;
													}
												}
											}
											if (!iLocal_266[iVar17])
											{
												if (func_357(&Local_554, "ARM1AUD", sVar16, 7, 0, 0, 0))
												{
													if (unk_0x1B79E937E91F40C3(sVar16, "ARM1_RING"))
													{
														iLocal_266[37] = 1;
														bLocal_245 = true;
													}
													else
													{
														iLocal_225 = 0;
														iLocal_224 = 0;
														iLocal_266[iVar17] = 1;
														iLocal_304 = unk_0x1DD05E817C89C737();
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (fLocal_267 > 10000f)
					{
						bVar18 = false;
						if (((iVar6 == iLocal_191[0] || iVar6 == iLocal_191[1]) || iVar6 == iLocal_191[6]) || iVar6 == iLocal_188[114])
						{
							bVar18 = true;
						}
						if ((unk_0x1DD05E817C89C737() - iLocal_296) > 3000 || (bVar18 && (unk_0x1DD05E817C89C737() - iLocal_296) > 1000))
						{
							if (!func_101())
							{
								if (!unk_0x1C2F771CDC87A3A5(iVar6, 0) && iVar6 != Local_491[iLocal_284 /*7*/])
								{
									bVar19 = false;
									iVar20 = 0;
									if (bVar18)
									{
										iVar20 = 1;
									}
									else if (unk_0x685171EED42BC4DF(iVar6, Local_491[iLocal_283 /*7*/]))
									{
										bVar19 = true;
									}
									else if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iVar6)) > 2f)
									{
										if (unk_0x1D5CD3EAAA7422B0((unk_0xCFC0C995455A6204(iVar6) - unk_0xCFC0C995455A6204(Local_491[iLocal_283 /*7*/]))) > 60f)
										{
											iVar20 = 1;
										}
									}
									if (bVar19 || iVar20)
									{
										iLocal_412 = unk_0xFD5C5BBD1FE92BB7(iVar6, -1, 0);
										if (!unk_0x4FAFF4BCB7633475(iLocal_412))
										{
											if (bVar19)
											{
												func_292(iLocal_412, "GENERIC_CURSE_HIGH", 6);
											}
											else
											{
												func_292(iLocal_412, "GENERIC_INSULT_HIGH", 6);
											}
											iLocal_296 = unk_0x1DD05E817C89C737();
										}
									}
								}
							}
						}
					}
				}
				if (!bLocal_215)
				{
					if (!unk_0xC450B06E5AAA0985(Local_491[iLocal_284 /*7*/].f_1))
					{
						func_290();
						Local_491[iLocal_284 /*7*/].f_1 = func_360(Local_491[iLocal_284 /*7*/], 0, 0);
					}
					func_472(Local_491[iLocal_284 /*7*/].f_1, Local_491[iLocal_284 /*7*/], system::sqrt(fVar8), 0,8f, 0);
					if (!iLocal_266[38])
					{
						if (!unk_0x4FAFF4BCB7633475(iLocal_413))
						{
							if (bLocal_240)
							{
								func_283(&Local_554, 7, iLocal_413, "BABYDICK", 0, 1);
								func_471(iLocal_413, "ARM1_CUAA", "BABYDICK", 6, 0);
								iLocal_266[38] = 1;
							}
						}
						else
						{
							iLocal_266[38] = 1;
						}
					}
					if (!iLocal_266[1])
					{
						if (!func_358(&Local_493, 2))
						{
							func_318("AR1_CHASE", 6000, 0);
							iLocal_266[1] = 1;
						}
					}
					if ((fLocal_267 > (unk_0xE2E30D829A6B8F9E(iLocal_288, sLocal_379) - 6000f) && fVar5 < 400f) || (fLocal_267 > 135000f && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 13,99176f, -675,8222f, 31,48455f, 20,46627f, -688,1566f, 34,48455f, 4f, 0, 1, 0)))
					{
						bLocal_212 = true;
						bLocal_228 = true;
						iLocal_551 = 2;
					}
				}
				else
				{
					Local_363 = { unk_0x0D1381B6E0F3987D(Local_491[iLocal_284 /*7*/], -6f, 0f, 0f) };
					if (!unk_0xC450B06E5AAA0985(uLocal_418))
					{
						func_290();
						uLocal_418 = func_50(Local_363, 0);
					}
					if (!unk_0xC450B06E5AAA0985(uLocal_420))
					{
						uLocal_420 = func_50(-88,1825f, -675,9736f, 34,2665f, 1);
						unk_0xF42EBD7CD0682A8B(uLocal_420, 0);
					}
					if (!iLocal_266[39] && !func_358(&Local_493, 2))
					{
						func_318("AR1_PARK", 7500, 0);
						iLocal_266[39] = 1;
					}
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(Local_491[iLocal_283 /*7*/], 1), Local_363) < 25f)
					{
						unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
						bLocal_212 = false;
						bLocal_228 = false;
						iLocal_551 = 2;
					}
					if (unk_0x5105BE70DEF1F5FB(Local_491[iLocal_283 /*7*/], 25,32066f, -664,571f, 30,62743f, 13,76605f, -690,2087f, 36,02796f, 12,75f, 0, 1, 0))
					{
						bLocal_212 = false;
						bLocal_228 = true;
						iLocal_551 = 2;
					}
				}
				if (fLocal_267 > (unk_0xE2E30D829A6B8F9E(iLocal_288, sLocal_379) - 55000f))
				{
					unk_0xD772E6694B8472A6(iLocal_285, sLocal_379);
					unk_0xD772E6694B8472A6(iLocal_286, sLocal_379);
					unk_0xD772E6694B8472A6(iLocal_287, sLocal_379);
					unk_0xD772E6694B8472A6(300, sLocal_379);
					if (fLocal_267 > (unk_0xE2E30D829A6B8F9E(iLocal_288, sLocal_379) - 20000f))
					{
						unk_0xEC9DAA34BBB4658C(joaat("police3"));
						unk_0xEC9DAA34BBB4658C(joaat("s_m_y_cop_01"));
						func_408(1, 0);
						unk_0x80813AC549A1E8AE("map_objects");
						unk_0x80813AC549A1E8AE(sLocal_385);
					}
				}
			}
			else
			{
				if (!unk_0xC450B06E5AAA0985(Local_491[iLocal_283 /*7*/].f_1))
				{
					func_290();
					Local_491[iLocal_283 /*7*/].f_1 = func_470(Local_491[iLocal_283 /*7*/], 0, 0);
				}
				if (func_308("AR1_PARK", 0, 0))
				{
					unk_0x406CBCEA35499884();
				}
				if (!iLocal_266[40])
				{
					func_318("CMN_GENGETBCK", 7500, 0);
					iLocal_266[40] = 1;
				}
				if ((((func_49("AR1_CAMHELP") || func_49("AR1_HEADHELP")) || func_49("AR1_HINTHELP")) || func_49("AR1_BRAKE")) || func_49("AR1_VEHCAMH"))
				{
					unk_0x428C32CC68809A35(1);
				}
				func_404();
				iLocal_225 = 0;
				iLocal_224 = 0;
				if (system::vdist2(Var3, unk_0xD1A6A821F5AC81DB(Local_491[iLocal_283 /*7*/], 1)) > 40000f)
				{
					func_871(13);
				}
			}
			if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
			{
				if (fVar5 > fVar8)
				{
					func_871(5);
				}
				if (unk_0x5B702A5D1F2635BE(Local_471.f_0))
				{
					if ((unk_0x1DD05E817C89C737() - iLocal_346) > 1000)
					{
						unk_0xD25E9BDC14A0B649(Local_471.f_0, 0, 0, 0);
					}
				}
				else
				{
					iLocal_346 = unk_0x1DD05E817C89C737();
				}
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(Local_491[iLocal_284 /*7*/], 0))
		{
			if (!unk_0x050D073F91C5243C(Local_491[iLocal_284 /*7*/]))
			{
				if (system::timera() > 10000)
				{
					unk_0x5D7CD709B34C90F0(Local_491[iLocal_284 /*7*/], 1);
					if (unk_0x9B3D4335E0EDB0BE(Local_491[iLocal_284 /*7*/], unk_0x4A8C381C258A124D(), 1))
					{
						iVar21 = (unk_0x4FD9D8C197FF8A52(Local_491[iLocal_284 /*7*/]) + unk_0xD5AA1C942B6D68DD(Local_491[iLocal_284 /*7*/]));
						if ((unk_0x31B58D7972181BFA(Local_491[iLocal_284 /*7*/]) < 200f || unk_0x4C7724D572378B05(Local_491[iLocal_284 /*7*/]) < 200f) || iVar21 > 2)
						{
							func_871(21);
						}
						if ((unk_0x1DD05E817C89C737() - iLocal_348) > 0)
						{
							func_292(Local_471.f_0, "GENERIC_INSULT_HIGH", 3);
							unk_0xE67051907958B5EB(Local_471.f_0, unk_0x4A8C381C258A124D(), 1000, 2048, 2);
							iLocal_348 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(4000, 7000));
							unk_0xE4DC7B3DD712372B(Local_491[iLocal_284 /*7*/]);
						}
					}
				}
			}
			if (unk_0x5B702A5D1F2635BE(Local_491[iLocal_284 /*7*/]))
			{
				func_871(21);
			}
		}
		if (iLocal_550 == 3)
		{
			func_451(&uLocal_559, Local_491[iLocal_284 /*7*/], "AR1_CAMHELP", 0, 1, 1, 1);
		}
		else
		{
			func_451(&uLocal_559, Local_491[iLocal_284 /*7*/], "AR1_CAMHELP", 0, 1, 0, 1);
		}
		if (unk_0xE37AC296E66C33AF() && !unk_0x6D05C5731A838CB3(0, 80))
		{
			if ((unk_0x1DD05E817C89C737() - iLocal_347) > 5000 && !unk_0x4C705AAF75363287())
			{
				if (!iLocal_266[78])
				{
					func_57("AR1_CAMHELP2", -1);
					iLocal_266[78] = 1;
				}
			}
		}
		else
		{
			if (!unk_0xE37AC296E66C33AF() && func_49("AR1_CAMHELP2"))
			{
				unk_0x428C32CC68809A35(1);
			}
			iLocal_347 = unk_0x1DD05E817C89C737();
		}
		if (iLocal_550 == 3)
		{
			switch (iLocal_331)
			{
				case 0:
					if (bLocal_245)
					{
						if (unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_START"))
						{
							unk_0xB43467C43086A6A1("ARM_1_DRIVE_START");
						}
						if (!unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_PHONE_LAMAR"))
						{
							unk_0xCAC4020CCF361AC8("ARM_1_DRIVE_PHONE_LAMAR");
						}
						iLocal_331++;
					}
					break;
				
				case 1:
					Var23 = { func_294() };
					if (iLocal_266[26])
					{
						if (iLocal_266[72])
						{
							if (!unk_0x1B79E937E91F40C3("ARM1_INDIC", &Var23))
							{
								bVar22 = true;
							}
						}
					}
					else if (iLocal_266[16] || iLocal_266[17])
					{
						if (!unk_0x1B79E937E91F40C3("ARM1_TOW", &Var23) && !unk_0x1B79E937E91F40C3("ARM1_TOW2", &Var23))
						{
							bVar22 = true;
						}
					}
					if (bVar22)
					{
						if (unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_PHONE_LAMAR"))
						{
							unk_0xB43467C43086A6A1("ARM_1_DRIVE_PHONE_LAMAR");
						}
						if (!unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_FOLLOW_LAMAR"))
						{
							unk_0xCAC4020CCF361AC8("ARM_1_DRIVE_FOLLOW_LAMAR");
						}
						iLocal_331++;
					}
					break;
			}
			switch (iLocal_333)
			{
				case 0:
					if (fLocal_267 > 51500f)
					{
						if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1048,17f, -473,1709f, 43,59984f, -1062,492f, -486,3139f, 30,66454f, 26,25f, 0, 1, 0))
						{
							if (unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_FOLLOW_LAMAR"))
							{
								unk_0xB43467C43086A6A1("ARM_1_DRIVE_FOLLOW_LAMAR");
							}
							if (!unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_THROUGH_STUDIO"))
							{
								unk_0xCAC4020CCF361AC8("ARM_1_DRIVE_THROUGH_STUDIO");
							}
							iLocal_333++;
						}
					}
					break;
				
				case 1:
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1214,699f, -582,2675f, 34,07594f, -1209,03f, -578,9652f, 21,30647f, 26,25f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1048,203f, -472,5669f, 43,38507f, -1046,014f, -466,9206f, 30,80215f, 45,75f, 0, 1, 0))
					{
						if (unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_THROUGH_STUDIO"))
						{
							unk_0xB43467C43086A6A1("ARM_1_DRIVE_THROUGH_STUDIO");
						}
						iLocal_333++;
					}
					break;
				
				case 2:
					if (!unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_TO_CANALS"))
					{
						unk_0xCAC4020CCF361AC8("ARM_1_DRIVE_TO_CANALS");
					}
					iLocal_333++;
					break;
				}
		}
		switch (iLocal_334)
		{
			case 0:
				if (fLocal_267 > 80000f)
				{
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1169,196f, -849,9986f, 21,09482f, -961,9859f, -1197,101f, -1,209268f, 136,5f, 0, 1, 0))
					{
						if (unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_TO_CANALS"))
						{
							unk_0xB43467C43086A6A1("ARM_1_DRIVE_TO_CANALS");
						}
						iLocal_334++;
					}
				}
				break;
			
			case 1:
				if (!unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_OVER_BRIDGES"))
				{
					unk_0xCAC4020CCF361AC8("ARM_1_DRIVE_OVER_BRIDGES");
				}
				iLocal_334++;
				break;
		}
		switch (iLocal_335)
		{
			case 0:
				if (fLocal_267 > 120000f)
				{
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -313,1678f, -834,3452f, 40,87144f, -288,5447f, -647,5313f, 27,05053f, 115,5f, 0, 1, 0))
					{
						if (unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_OVER_BRIDGES"))
						{
							unk_0xB43467C43086A6A1("ARM_1_DRIVE_OVER_BRIDGES");
						}
						iLocal_335++;
					}
				}
				break;
			
			case 1:
				if (!unk_0xBC2EE32DE886BD08("ARM_1_DRIVE_THROUGH_GARAGE"))
				{
					unk_0xCAC4020CCF361AC8("ARM_1_DRIVE_THROUGH_GARAGE");
				}
				iLocal_335++;
				break;
		}
		if (unk_0xE37AC296E66C33AF())
		{
			if (!unk_0xBC2EE32DE886BD08("ARM_1_LAMAR_FOCUS_CAM"))
			{
				unk_0xCAC4020CCF361AC8("ARM_1_LAMAR_FOCUS_CAM");
			}
		}
		else if (unk_0xBC2EE32DE886BD08("ARM_1_LAMAR_FOCUS_CAM"))
		{
			unk_0xB43467C43086A6A1("ARM_1_LAMAR_FOCUS_CAM");
		}
		if (!bLocal_227)
		{
			unk_0x66EFB3D6110055C4(0, 28, 1);
		}
		if (system::vdist2(Var3, -202,4f, -638,9f, 33,7f) < 22500f)
		{
			if (iLocal_440 == 0)
			{
				iLocal_440 = unk_0x0556019E7EE8EC9A(-202,4f, -638,9f, 33,7f, "dt1_02_carpark");
			}
			else if (!unk_0xD0B0D1BD29678350(iLocal_440))
			{
				unk_0x74C1590CC91B3930(iLocal_440);
			}
		}
		else if (system::vdist2(Var3, -202,4f, -638,9f, 33,7f) > 40000f)
		{
			if (iLocal_440 != 0)
			{
				unk_0xBBB6D0F765409642(iLocal_440);
				iLocal_440 = 0;
			}
		}
		if (fLocal_267 > 100000f)
		{
			if (system::vdist2(Var3, 34f, -638,5f, 31,6f) < 22500f)
			{
				if (!unk_0x787F8EE1F6FBDC6D())
				{
					unk_0xAC48F8E2BF2BEBF7(46,6f, -624,3f, 32,1f, func_450(-1,1f, 0f, 137,4f), 100f, 0);
				}
			}
			else if (system::vdist2(Var3, 34f, -638,5f, 31,6f) > 40000f)
			{
				if (unk_0x787F8EE1F6FBDC6D())
				{
					unk_0x6981C3213B841071();
				}
			}
		}
	}
	if (iLocal_551 == 2)
	{
		unk_0x406CBCEA35499884();
		unk_0x428C32CC68809A35(1);
		func_290();
		func_533(0);
		func_531(0);
		func_412(0);
		func_302(&Local_493, 1, 0);
		func_449(&uLocal_559, 0, 0);
		if (iLocal_440 != 0)
		{
			unk_0xBBB6D0F765409642(iLocal_440);
			iLocal_440 = 0;
		}
		func_1();
		bLocal_213 = false;
		bLocal_214 = false;
		if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0) && unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
		{
			unk_0x30415B9FFAC70D2C(Local_491[iLocal_284 /*7*/], 0);
			unk_0x680C862D9FC0F4BC(Local_491[iLocal_283 /*7*/], 0);
			if (iLocal_230)
			{
				unk_0x44C48AC14D3C09ED(Local_491[iLocal_284 /*7*/], 1, 0);
				iLocal_230 = 0;
			}
			if ((iLocal_312 - unk_0x8D91ADE44AC79BC9(Local_491[iLocal_283 /*7*/])) > 250)
			{
				func_884(61, 1);
				bLocal_213 = true;
			}
			if ((iLocal_313 - unk_0x8D91ADE44AC79BC9(Local_491[iLocal_284 /*7*/])) > 250)
			{
				bLocal_214 = true;
			}
			unk_0xAC89BB42FE09CC80(Local_491[iLocal_283 /*7*/], 0f);
		}
		func_448(iLocal_401);
		func_363(&iLocal_401, 1);
		if (iLocal_316 != -1)
		{
			unk_0x8E99C7AF6C6639AB(iLocal_316);
			iLocal_316 = -1;
		}
		if (iLocal_317 != -1)
		{
			unk_0x8E99C7AF6C6639AB(iLocal_317);
			iLocal_317 = -1;
		}
		unk_0x268BE77F77533D03(sLocal_386);
		unk_0x268BE77F77533D03(sLocal_393);
		unk_0x268BE77F77533D03(sLocal_392);
		unk_0x268BE77F77533D03(sLocal_394);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0x99E0ED93D0644C97(0);
		system::settimerb(0);
		unk_0xF6ECB54A7941386F(0);
		unk_0xAD9B1C8FED6B4D96(3);
		func_532(0);
		iLocal_282 = 0;
		iLocal_551 = 0;
		iLocal_550 = 5;
	}
	if (iLocal_551 == 3)
	{
		func_933(5, 1);
	}
}

void func_448(int iParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x050D073F91C5243C(iParam0))
		{
			unk_0x1D2DAF2A41FFC4A0(iParam0);
		}
	}
}

void func_449(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_2738934.f_4712, 26))
		{
			return;
		}
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x3C44EF9027A21847(iParam2);
		unk_0x21172E4DF035B893("FocusIn");
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0A0A06C514052E80(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xFF692AB7350A74D7(sVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xFF692AB7350A74D7(uParam0->f_3))
	{
		if (func_49(uParam0->f_3))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (!unk_0xFF692AB7350A74D7(sVar0))
	{
		if (func_49(sVar0))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

Vector3 func_450(struct<3> Param0)
{
	return (-system::sin(Param0.f_2) * system::cos(Param0.f_0)), (system::cos(Param0.f_2) * system::cos(Param0.f_0)), system::sin(Param0.f_0);
}

void func_451(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_452(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_452(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_453(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_453(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		func_449(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_454(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_454(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE37AC296E66C33AF())
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0xFF692AB7350A74D7(iVar0))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_49(iVar0))
	{
		func_469();
	}
	if (func_468(iParam1) && unk_0xE5E2AE8B19267B8A(iParam1))
	{
		iVar1 = 0;
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			unk_0x7A8C6BB4DA2434F1(unk_0xBD545F8729E9F413(iParam1));
			unk_0x7AA365BA6A18440B(unk_0xBD545F8729E9F413(iParam1), 1);
			if (unk_0x731EE2A006FD5120(unk_0xBD545F8729E9F413(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x55B80B6E7AB61270(iParam1))
		{
			unk_0x8FBF79AC214E3747(unk_0xE93EDE86BBB66532(iParam1));
			if (unk_0x4F7C7E268667C7B3(unk_0xE93EDE86BBB66532(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xBE79A96C521F4432(iParam1))
		{
			unk_0x33D763C13554690A(unk_0x0646D07BB2D516CD(iParam1));
			if (unk_0xF31BAE02C52ADEFD(unk_0x0646D07BB2D516CD(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE37AC296E66C33AF())
		{
			if (func_463(uParam0, bParam5, bParam7, 0))
			{
				func_459(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_458(iVar0))
				{
					if ((unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0)) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if ((iVar1 && !unk_0x4C705AAF75363287()) && uParam6)
						{
							if (!func_49(iVar0))
							{
								func_57(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
								{
									func_457(1);
								}
							}
						}
					}
				}
			}
			else if (func_458(iVar0))
			{
				if (unk_0xFF692AB7350A74D7(uParam0->f_3) && !unk_0xFF692AB7350A74D7(iVar0))
				{
					if (((unk_0xCB5CAFF0A4A8B74B(iParam1) && iVar1) && !unk_0x4C705AAF75363287()) && uParam6)
					{
						if (!func_49(iVar0))
						{
							func_57(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x1B79E937E91F40C3("CMN_HINT", iVar0))
							{
								func_457(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xFF692AB7350A74D7(sParam3))
			{
				if (func_49(sParam3))
				{
					unk_0x428C32CC68809A35(1);
				}
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
			{
				if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
					{
						func_449(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
					{
						func_449(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
					{
						func_449(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
					{
						func_449(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
					{
						func_449(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
				{
					func_449(uParam0, iVar0, 1);
				}
			}
			if (!func_463(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_456(uParam0))
				{
					func_455(uParam0);
				}
			}
		}
	}
	else
	{
		func_449(uParam0, iVar0, 0);
	}
}

void func_455(var uParam0)
{
	if (func_468(unk_0x4A8C381C258A124D()))
	{
		unk_0x84B06A81C98DA4B8(unk_0x4A8C381C258A124D());
	}
	if (unk_0xE37AC296E66C33AF())
	{
		unk_0x0A0A06C514052E80(1);
		unk_0x3C44EF9027A21847(0);
		unk_0xB43467C43086A6A1("HINT_CAM_SCENE");
		unk_0x21172E4DF035B893("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xDCAFFD08A08087EB("FocusOut", 0, 0);
			unk_0xBF3D28CA44F3BE2D(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_456(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1DD05E817C89C737()
		{
			return 1;
		}
	}
	return 0;
}

int func_457(bool bParam0)
{
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113969.f_10052.f_100++;
			}
			return Global_113969.f_10052.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113969.f_10052.f_101++;
			}
			return Global_113969.f_10052.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113969.f_10052.f_102++;
			}
			return Global_113969.f_10052.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_458(char* sParam0)
{
	if (!func_477(1, 1, 0))
	{
		if ((!unk_0xD6F9DEE4765092A9(sParam0) && func_49(sParam0)) || func_49("CMN_HINT"))
		{
			unk_0x428C32CC68809A35(1);
		}
		return 0;
	}
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_457(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_457(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_457(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void func_459(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1582021 == 1)
	{
		return;
	}
	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		func_449(uParam0, 0, 0);
	}
	if (func_462(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x0101C509A6E67F99(iParam1))
		{
			iVar0 = unk_0xBD545F8729E9F413(iParam1);
			if (!unk_0x7F420695E3F776FB(iVar0, 0))
			{
				if (unk_0x501EBB0523078750(iVar0))
				{
					if (!func_460())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB98B1A5B59BC5065(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0A0A06C514052E80(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x190BA0A3BB48F7FD(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xE67051907958B5EB(unk_0x4A8C381C258A124D(), iParam1, -1, iVar3, iVar4);
	unk_0xDCAFFD08A08087EB("FocusIn", 0, 0);
	unk_0xCAC4020CCF361AC8("HINT_CAM_SCENE");
	unk_0xBF3D28CA44F3BE2D(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1DD05E817C89C737();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_460()
{
	return func_461(unk_0x259BE71D8A81D4FA());
}

int func_461(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_462(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_463(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1DD05E817C89C737() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (func_467(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_466(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_466(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_467(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1DD05E817C89C737();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_456(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (!func_467(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1DD05E817C89C737();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_466(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_466(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_467(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1DD05E817C89C737();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					if (!func_467(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_466(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_466(bParam1, bParam2, bParam3) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_467(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					{
						if (func_465(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_464(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_464(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_465(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_456(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_477(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_469();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_464(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_477(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_465(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_477(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x61C3701AD6D746B2(0, 80))
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_466(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_477(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 80, 1);
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_117)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_467(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_477(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x66EFB3D6110055C4(0, 80, 1);
		if (unk_0x77CDF75A783A0B04())
		{
			if (unk_0x4465D55576678706(0, 80) && unk_0x1DD05E817C89C737() > Global_117)
			{
				unk_0x0A0A06C514052E80(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_468(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x55B80B6E7AB61270(iParam0))
		{
			if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x0101C509A6E67F99(iParam0))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xBE79A96C521F4432(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_469()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

int func_470(int iParam0, bool bParam1, bool bParam2)
{
	return func_361(iParam0, !bParam1, bParam2);
}

void func_471(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x4CAD907F190E6F10(iParam0, sParam1, sParam2, func_293(iParam3), iParam4);
}

void func_472(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		if ((unk_0xFC8BFE4B41177C22(iParam1) && unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D())) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x55B80B6E7AB61270(iParam1))
			{
				if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam1), 0))
				{
					fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = system::round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x861AC9C2D48CEA7F(uParam0, 1);
						unk_0xF42EBD7CD0682A8B(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x861AC9C2D48CEA7F(uParam0, 0);
						unk_0xF42EBD7CD0682A8B(uParam0, 255);
					}
				}
			}
			else if (unk_0x0101C509A6E67F99(iParam1))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam1)))
				{
					fVar1 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = system::round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x861AC9C2D48CEA7F(uParam0, 1);
						unk_0xF42EBD7CD0682A8B(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x861AC9C2D48CEA7F(uParam0, 0);
						unk_0xF42EBD7CD0682A8B(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_473()
{
	int iVar0;
	
	iVar0 = func_475(unk_0x1AF90EB93E0012D6(), 1);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_474(iVar0);
}

int func_474(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return -1;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/].f_1;
}

int func_475(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x70E57E9927B6BA58(sParam0);
	iVar1 = func_476(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_476(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_92301[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_477(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x3555462DB47B7AB1())
	{
		return 0;
	}
	if (func_485(0))
	{
		return 0;
	}
	if (func_484())
	{
		return 0;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return 0;
	}
	if (Global_76498)
	{
		return 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_61347)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0xE70AAE8EBF7D65BD(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(3) == 3 || unk_0xBCF87EE3DC296C2A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(6) == 3 || unk_0xBCF87EE3DC296C2A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(4) == 3 || unk_0xBCF87EE3DC296C2A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x483232F244CDBFC6(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(5) == 3 || unk_0xBCF87EE3DC296C2A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFFEFA49356BD7CA2(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xBCF87EE3DC296C2A(2) == 3 || unk_0xBCF87EE3DC296C2A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x655E58062EC2D269() == 3 || unk_0x655E58062EC2D269() == 4)
			{
				return 0;
			}
			if (unk_0xDD851254D8C7D338())
			{
				return 0;
			}
		}
	}
	if ((func_483() || func_482(Global_4718592.f_185586)) || func_481())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			iVar1 = func_480(unk_0x4A8C381C258A124D(), 0);
			if (((unk_0x333A2A6253C809D2(iVar0, iVar1) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x4B423FAA24E8ABF0(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x4B423FAA24E8ABF0(iVar0) == joaat("riot2") && iVar1 == 0) && func_479(iVar0, 10)) && unk_0x94C9CD3D66808551(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955929)
	{
		return 0;
	}
	if (func_478(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_478(int iParam0)
{
	if (iParam0 != func_205())
	{
		if (func_204(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_204(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

int func_479(int iParam0, int iParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x5B59C12A02157D00(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_480(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x7F420695E3F776FB(iParam0, iParam1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam0, iParam1);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				iVar1 = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xC39AE5D390581AD5(iVar0, iVar3, 0))
					{
						if (unk_0xFD5C5BBD1FE92BB7(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_481()
{
	return Global_2684504.f_19;
}

bool func_482(int iParam0)
{
	return iParam0 == 51;
}

var func_483()
{
	return Global_2684504.f_18;
}

bool func_484()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_485(int iParam0)
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

void func_486(int iParam0)
{
	struct<3> Var0;
	
	if ((unk_0x1DD05E817C89C737() - iLocal_294) > 5000)
	{
		if (!func_358(&Local_493, 1))
		{
			if (iParam0 != Local_491[iLocal_284 /*7*/])
			{
				if (unk_0xD9F5E1FEFD1329E4(iParam0, 0) && unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
				{
					if (!unk_0x9B3D4335E0EDB0BE(Local_491[iLocal_283 /*7*/], iParam0, 1))
					{
						if (unk_0xDF93B3CFAC96698F(Local_491[iLocal_283 /*7*/]) > 15f && unk_0xDF93B3CFAC96698F(iParam0) > 1f)
						{
							if (unk_0x1D5CD3EAAA7422B0((unk_0xCFC0C995455A6204(Local_491[iLocal_283 /*7*/]) - unk_0xCFC0C995455A6204(iParam0))) > 60f)
							{
								Var0 = { unk_0xAD8278DAEC2CC059(Local_491[iLocal_283 /*7*/], unk_0xD1A6A821F5AC81DB(iParam0, 1)) };
								if (Var0.f_1 < -1,5f && Var0.f_1 > -5f)
								{
									if (unk_0x1D5CD3EAAA7422B0(Var0.f_0) < 4f)
									{
										if (func_357(&Local_554, "ARM1AUD", "ARM1_NEAR", 7, 0, 0, 0))
										{
											iLocal_294 = unk_0x1DD05E817C89C737();
											if ((fLocal_267 < 144600f && unk_0x54DA32C15F7A6ABA(Local_491[iLocal_283 /*7*/]) == 2) && unk_0xE99B9AC112F55D16(Local_491[iLocal_283 /*7*/], 1119092736))
											{
												if (unk_0xE100DD4F82A51BDE(sLocal_394) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sLocal_394, "learnhowtouseastick", 3))
												{
													unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), sLocal_394, "learnhowtouseastick", 8f, -8f, -1, 32, 0, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_487(int iParam0)
{
	int iVar0;
	
	if ((unk_0x1DD05E817C89C737() - iLocal_293) > 2000)
	{
		if (iParam0 != Local_491[iLocal_284 /*7*/])
		{
			if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
			{
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 9f)
				{
					if ((unk_0xDF93B3CFAC96698F(Local_491[iLocal_283 /*7*/]) - unk_0xDF93B3CFAC96698F(iParam0)) > 3f || unk_0x1D5CD3EAAA7422B0((unk_0xCFC0C995455A6204(Local_491[iLocal_283 /*7*/]) - unk_0xCFC0C995455A6204(iParam0))) > 60f)
					{
						iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
						if (!unk_0x4FAFF4BCB7633475(iVar0))
						{
							unk_0xAA8884A4BB5B0167(iParam0, 2000, 0, 0);
							iLocal_293 = unk_0x1DD05E817C89C737();
						}
					}
				}
			}
		}
	}
}

void func_488(var uParam0, float fParam1)
{
	if (unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
	{
		if ((((((((((fParam1 > 10000f && fParam1 < 12500f) || (fParam1 > 23000f && fParam1 < 25000f)) || (fParam1 > 42500f && fParam1 < 45000f)) || (fParam1 > 48000f && fParam1 < 50500f)) || (fParam1 > 60500f && fParam1 < 63500f)) || (fParam1 > 78750f && fParam1 < 80500f)) || (fParam1 > 95750f && fParam1 < 98000f)) || (fParam1 > 110750f && fParam1 < 113000f)) || (fParam1 > 119000f && fParam1 < 121000f)) || (fParam1 > 123750f && fParam1 < 126000f))
		{
			unk_0xE456FB21FF21AE99(*uParam0, 1);
		}
		if (((((((fParam1 > 10000f && fParam1 < 12500f) || (fParam1 > 42500f && fParam1 < 45000f)) || (fParam1 > 48000f && fParam1 < 51000f)) || (fParam1 > 71250f && fParam1 < 73200f)) || (fParam1 > 74250f && fParam1 < 76000f)) || (fParam1 > 110750f && fParam1 < 113500f)) || (fParam1 > 119000f && fParam1 < 121250f))
		{
			unk_0x78004905636369DF(*uParam0, 0, 1);
		}
		else
		{
			unk_0x78004905636369DF(*uParam0, 0, 0);
		}
		if ((((((fParam1 > 23000f && fParam1 < 25000f) || (fParam1 > 61000f && fParam1 < 64000f)) || (fParam1 > 78500f && fParam1 < 81000f)) || (fParam1 > 95750f && fParam1 < 98500f)) || (fParam1 > 115000f && fParam1 < 115750f)) || (fParam1 > 123500f && fParam1 < 126500f))
		{
			unk_0x78004905636369DF(*uParam0, 1, 1);
		}
		else
		{
			unk_0x78004905636369DF(*uParam0, 1, 0);
		}
	}
}

void func_489()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var3;
	bool bVar4;
	int iVar5[3];
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	char cVar13[64];
	char cVar14[64];
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23[4];
	int iVar24;
	int iVar25;
	int iVar26;
	struct<3> Var27;
	float fVar28;
	bool bVar29;
	int iVar30;
	char* sVar31;
	struct<3> Var32;
	
	bVar0 = false;
	bVar1 = false;
	Var2 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
	{
		Var3 = { unk_0xD1A6A821F5AC81DB(Local_471.f_0, 1) };
	}
	if (!iLocal_251)
	{
		bVar4 = false;
		if (!unk_0x1C2F771CDC87A3A5(iLocal_191[9], 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_191[9], unk_0x4A8C381C258A124D(), 1))
			{
				bVar4 = true;
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iLocal_191[10], 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_191[10], unk_0x4A8C381C258A124D(), 1))
			{
				bVar4 = true;
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iLocal_191[11], 0))
		{
			if (unk_0x9B3D4335E0EDB0BE(iLocal_191[11], unk_0x4A8C381C258A124D(), 1))
			{
				bVar4 = true;
			}
		}
		if (bVar4)
		{
			if (!unk_0x1C2F771CDC87A3A5(iLocal_191[9], 0))
			{
				iVar5[0] = unk_0xFD5C5BBD1FE92BB7(iLocal_191[9], -1, 0);
				if (!unk_0x4FAFF4BCB7633475(iVar5[0]))
				{
					if (unk_0x050D073F91C5243C(iLocal_191[9]))
					{
						unk_0x1D2DAF2A41FFC4A0(iLocal_191[9]);
					}
					unk_0x13DE13EA38996410(iVar5[0], iLocal_191[9], unk_0x4A8C381C258A124D(), 8, 70f, 786468, 300f, 300f, 1);
					unk_0x44FB298D6382876D(iVar5[0], 1);
				}
			}
			if (!unk_0x1C2F771CDC87A3A5(iLocal_191[10], 0))
			{
				iVar5[1] = unk_0xFD5C5BBD1FE92BB7(iLocal_191[10], -1, 0);
				if (!unk_0x4FAFF4BCB7633475(iVar5[1]))
				{
					if (unk_0x050D073F91C5243C(iLocal_191[10]))
					{
						unk_0x1D2DAF2A41FFC4A0(iLocal_191[10]);
					}
					unk_0x13DE13EA38996410(iVar5[1], iLocal_191[10], unk_0x4A8C381C258A124D(), 8, 70f, 786468, 300f, 300f, 1);
					unk_0x44FB298D6382876D(iVar5[1], 1);
				}
			}
			if (!unk_0x1C2F771CDC87A3A5(iLocal_191[11], 0))
			{
				iVar5[2] = unk_0xFD5C5BBD1FE92BB7(iLocal_191[11], -1, 0);
				if (!unk_0x4FAFF4BCB7633475(iVar5[2]))
				{
					if (unk_0x050D073F91C5243C(iLocal_191[11]))
					{
						unk_0x1D2DAF2A41FFC4A0(iLocal_191[11]);
					}
					unk_0x13DE13EA38996410(iVar5[2], iLocal_191[11], unk_0x4A8C381C258A124D(), 8, 70f, 786468, 300f, 300f, 1);
					unk_0x44FB298D6382876D(iVar5[2], 1);
				}
			}
			iLocal_251 = 1;
		}
	}
	if (iLocal_184[9] == joaat("cruiser"))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_191[9], 0))
		{
			if (!iLocal_231)
			{
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_191[9], 1), Var2) < 100f)
				{
					unk_0xBD618A73193F9982(-1, "Bike_Bell", iLocal_191[9], "ARM_1_SOUNDSET", 0, 0);
					iLocal_231 = 1;
				}
			}
		}
		else
		{
			iLocal_231 = 0;
		}
	}
	if (iLocal_184[15] == joaat("packer"))
	{
		if (iLocal_136[15] < 99 && fLocal_267 < (fLocal_105[15] + 10000f))
		{
			if (fLocal_267 > (fLocal_105[15] - 10000f) && !unk_0xFC8BFE4B41177C22(iLocal_403))
			{
				unk_0xEC9DAA34BBB4658C(joaat("tanker"));
			}
			unk_0xD772E6694B8472A6(993, sLocal_379);
		}
		if (unk_0xD9F5E1FEFD1329E4(iLocal_191[15], 0))
		{
			if (!unk_0xFC8BFE4B41177C22(iLocal_403))
			{
				if (fLocal_267 < (fLocal_105[15] + 10000f))
				{
					unk_0xEC9DAA34BBB4658C(joaat("tanker"));
					if (unk_0x6252BC0DD8A320DB(joaat("tanker")) && !bVar0)
					{
						iLocal_403 = unk_0x5779387E956077A6(joaat("tanker"), unk_0x0D1381B6E0F3987D(iLocal_191[15], 0f, -10f, 0f), unk_0xCFC0C995455A6204(iLocal_191[15]), 1, 1, 0);
						unk_0x11C125313CB8ADA2(iLocal_403, 1);
						unk_0x11C125313CB8ADA2(iLocal_191[15], 1);
						unk_0xF89624E52FCBE454(iLocal_191[15], iLocal_403, 1065353216);
						unk_0x55098D9E9AD58806(joaat("tanker"));
						bVar0 = true;
					}
				}
			}
			else if (unk_0x050D073F91C5243C(iLocal_191[15]))
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_403, 0))
				{
					if (!unk_0x050D073F91C5243C(iLocal_403))
					{
						unk_0xD772E6694B8472A6(993, sLocal_379);
						if (unk_0x266D9DB5FCE4003B(993, sLocal_379))
						{
							unk_0x88556DA0593A0748(iLocal_403, 993, sLocal_379, 1);
							func_400(&iLocal_403, unk_0x157F3D5A4AAB2C50(iLocal_191[15]));
						}
					}
					else
					{
						unk_0x206AB1458FD9522F(iLocal_403, fLocal_268);
					}
				}
				if (!iLocal_216 && (system::vdist2(Var2, unk_0xD1A6A821F5AC81DB(iLocal_191[15], 1)) < 625f || system::vdist2(Var3, unk_0xD1A6A821F5AC81DB(iLocal_191[15], 1)) < 400f))
				{
					unk_0xAA8884A4BB5B0167(iLocal_191[15], 3000, -2087385909, 0);
					iLocal_216 = 1;
				}
			}
			else if (fLocal_267 > (fLocal_105[15] + 10000f) && (!unk_0xCB5CAFF0A4A8B74B(iLocal_191[15]) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())))
			{
				func_363(&(iLocal_191[15]), 0);
				func_363(&iLocal_403, 0);
			}
		}
		if (!unk_0xFC8BFE4B41177C22(iLocal_191[15]))
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_403))
			{
				func_363(&iLocal_403, 0);
			}
		}
	}
	if (iLocal_184[32] == joaat("bus"))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_191[32], 0))
		{
			if (system::vdist2(Var2, unk_0xD1A6A821F5AC81DB(iLocal_191[32], 1)) < 900f)
			{
				if (!iLocal_217)
				{
					unk_0xAA8884A4BB5B0167(iLocal_191[32], 3000, -2087385909, 0);
					if (iLocal_310 == 0)
					{
						unk_0xBA3C1A9AA7FD9616(iLocal_191[32], 2);
						iLocal_310 = unk_0x1DD05E817C89C737();
					}
					unk_0xA62957B100C8DE6D(2f, 2f, 2);
					iLocal_217 = 1;
				}
			}
			if (iLocal_217 && iLocal_310 != 0)
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_310) > 2000)
				{
					unk_0xBA3C1A9AA7FD9616(iLocal_191[32], 1);
					iLocal_310 = 0;
				}
			}
		}
		else
		{
			iLocal_217 = 0;
			iLocal_310 = 0;
		}
	}
	if (iLocal_184[33] == joaat("burrito3"))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_191[33], 0))
		{
			if (!iLocal_258)
			{
				unk_0xD133EF7430EDCD09(iLocal_191[33], 111, 111);
				unk_0xBB361D7264AC4FD8(iLocal_191[33], 111, 111);
				iLocal_258 = 1;
			}
			if (system::vdist2(Var2, unk_0xD1A6A821F5AC81DB(iLocal_191[33], 1)) < 100f)
			{
				if (!iLocal_218)
				{
					unk_0xAA8884A4BB5B0167(iLocal_191[33], 2000, -2087385909, 0);
					iLocal_218 = 1;
				}
			}
		}
		else
		{
			iLocal_218 = 0;
			iLocal_258 = 0;
		}
	}
	if (iLocal_184[14] == joaat("benson"))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_191[14], 0))
		{
			if (!iLocal_219)
			{
				unk_0xD133EF7430EDCD09(iLocal_191[14], 4, 4);
				unk_0xBB361D7264AC4FD8(iLocal_191[14], 4, 4);
				iLocal_219 = 1;
			}
		}
		else
		{
			iLocal_219 = 0;
		}
	}
	if (iLocal_182[91] == joaat("maverick"))
	{
		if (unk_0xD9F5E1FEFD1329E4(iLocal_188[91], 0))
		{
			if (!iLocal_220)
			{
				unk_0xC229299217554C78(iLocal_188[91], 1, 1, 0);
				unk_0xA9F7300B498DDED7(iLocal_188[91]);
				unk_0xD133EF7430EDCD09(iLocal_188[91], 128, 0);
				unk_0xBB361D7264AC4FD8(iLocal_188[91], 128, 0);
				iLocal_220 = 1;
			}
		}
		else
		{
			iLocal_220 = 0;
		}
	}
	iVar6 = 0;
	bVar7 = false;
	bVar8 = false;
	iVar9 = 0;
	fVar10 = 0f;
	iVar15 = joaat("s_m_m_movalien_01");
	if (fLocal_267 < 43000f)
	{
		iVar6 = 0;
		while (iVar6 < Local_479.f_0)
		{
			Local_479[iVar6 /*5*/].f_2 = 0;
			iVar6++;
		}
		iVar6 = 0;
		while (iVar6 < Local_480.f_0)
		{
			Local_480[iVar6 /*5*/].f_2 = 0;
			iVar6++;
		}
	}
	else
	{
		iVar6 = 0;
		while (iVar6 < Local_479.f_0)
		{
			if (iVar6 == 0)
			{
				StringCopy(&cVar14, "largegroup_flee_r_f_a", 64);
			}
			else if (iVar6 == 1)
			{
				StringCopy(&cVar14, "largegroup_flee_l_f_b", 64);
			}
			else if (iVar6 == 2)
			{
				StringCopy(&cVar14, "largegroup_flee_l_m_c", 64);
			}
			else if (iVar6 == 3)
			{
				StringCopy(&cVar14, "largegroup_flee_r_m_d", 64);
			}
			if (Local_479[iVar6 /*5*/].f_2 == 0)
			{
				if (fLocal_267 < 55000f)
				{
					unk_0xEC9DAA34BBB4658C(iVar15);
					unk_0x80813AC549A1E8AE(sLocal_386);
					if ((unk_0x6252BC0DD8A320DB(iVar15) && unk_0xE100DD4F82A51BDE(sLocal_386)) && !bVar0)
					{
						if (iVar6 == 0)
						{
							StringCopy(&cVar13, "largegroup_loop_f_a", 64);
						}
						else if (iVar6 == 1)
						{
							StringCopy(&cVar13, "largegroup_loop_f_b", 64);
						}
						else if (iVar6 == 2)
						{
							StringCopy(&cVar13, "largegroup_loop_m_c", 64);
						}
						else if (iVar6 == 3)
						{
							StringCopy(&cVar13, "largegroup_loop_m_d", 64);
						}
						Var11 = { unk_0xBE8776D2466E9EA6(sLocal_386, &cVar13, -1107,37f, -504,73f, 34,36f, 0f, 0f, 32,2f, 0, 2) };
						Var12 = { unk_0x7A6103DCF5EE8CC3(sLocal_386, &cVar13, -1107,37f, -504,73f, 34,36f, 0f, 0f, 32,2f, 0, 2) };
						Local_479[iVar6 /*5*/] = unk_0xB1DBFEB95C0EFB88(26, iVar15, Var11, Var12.f_2, 1, 1);
						unk_0x62C438C53BB57AFD(Local_479[iVar6 /*5*/], Var11, 0, 0, 1);
						unk_0x10425721983AE158(Local_479[iVar6 /*5*/], sLocal_386, &cVar13, 1000f, -8f, -1, 9, 0, 0, 0, 0);
						unk_0x5D7CD709B34C90F0(Local_479[iVar6 /*5*/], 1);
						unk_0x44C48AC14D3C09ED(Local_479[iVar6 /*5*/], 0, 0);
						unk_0xAAA71DD7E9059338(Local_479[iVar6 /*5*/], 1);
						unk_0x1F7539C841C2A71F(Local_479[iVar6 /*5*/], 1);
						if (iVar6 == 2)
						{
							func_283(&Local_554, 2, Local_479[iVar6 /*5*/], "EXTRA1", 0, 1);
						}
						else if (iVar6 == 3)
						{
							unk_0x55098D9E9AD58806(iVar15);
							func_283(&Local_554, 3, Local_479[iVar6 /*5*/], "EXTRA2", 0, 1);
						}
						unk_0xD1C578C204015E1F(Local_479[iVar6 /*5*/], 4, 0, 0, 0);
						unk_0xD1C578C204015E1F(Local_479[iVar6 /*5*/], 3, 0, 0, 0);
						if ((iVar6 % 2) == 0)
						{
							unk_0xD1C578C204015E1F(Local_479[iVar6 /*5*/], 0, 1, 0, 0);
							unk_0xD1C578C204015E1F(Local_479[iVar6 /*5*/], 5, 1, 0, 0);
						}
						else
						{
							unk_0xD1C578C204015E1F(Local_479[iVar6 /*5*/], 0, 0, 0, 0);
							unk_0xD1C578C204015E1F(Local_479[iVar6 /*5*/], 5, 0, 0, 0);
						}
						Local_479[iVar6 /*5*/].f_2 = 1;
						Local_479[iVar6 /*5*/].f_3 = 0;
						bVar0 = true;
					}
				}
			}
			else
			{
				if (!unk_0x4FAFF4BCB7633475(Local_479[iVar6 /*5*/]))
				{
					fVar10 = system::vdist2(Var2, unk_0xD1A6A821F5AC81DB(Local_479[iVar6 /*5*/], 1));
					if (fVar10 < 1600f)
					{
						iVar9 = 1;
					}
					if (Local_479[iVar6 /*5*/].f_2 == 1)
					{
						if (!bVar7)
						{
							if (unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0) && unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_284 /*7*/], 0))
							{
								fVar16 = (system::vdist(Var2, unk_0xD1A6A821F5AC81DB(Local_479[iVar6 /*5*/], 1)) / unk_0xDF93B3CFAC96698F(Local_491[iLocal_283 /*7*/]));
								fVar17 = (system::vdist(Var3, unk_0xD1A6A821F5AC81DB(Local_479[iVar6 /*5*/], 1)) / unk_0xDF93B3CFAC96698F(Local_491[iLocal_284 /*7*/]));
								if (fVar16 < 2f)
								{
									bVar8 = true;
								}
								else if (fVar17 < 3f)
								{
									if (fLocal_268 > 0,7f)
									{
										bVar8 = true;
									}
								}
								bVar7 = true;
							}
						}
						if (bVar8)
						{
							unk_0x5D7CD709B34C90F0(Local_479[iVar6 /*5*/], 0);
							unk_0x44C48AC14D3C09ED(Local_479[iVar6 /*5*/], 1, 0);
							if (iVar6 == 0)
							{
								unk_0x10425721983AE158(Local_479[iVar6 /*5*/], sLocal_386, &cVar14, 8f, -8f, -1, 8, 0,05f, 0, 0, 0);
							}
							else if (iVar6 == 1)
							{
								unk_0x10425721983AE158(Local_479[iVar6 /*5*/], sLocal_386, &cVar14, 8f, -8f, -1, 8, 0,05f, 0, 0, 0);
							}
							else if (iVar6 == 2)
							{
								unk_0x10425721983AE158(Local_479[iVar6 /*5*/], sLocal_386, &cVar14, 8f, -8f, -1, 8, 0,05f, 0, 0, 0);
							}
							else if (iVar6 == 3)
							{
								unk_0x10425721983AE158(Local_479[iVar6 /*5*/], sLocal_386, &cVar14, 8f, -8f, -1, 8, 0,05f, 0, 0, 0);
							}
							Local_479[iVar6 /*5*/].f_2++;
						}
					}
					else if (Local_479[iVar6 /*5*/].f_2 == 2)
					{
						if (unk_0x8BF5256C439DF778(Local_479[iVar6 /*5*/]))
						{
							Local_479[iVar6 /*5*/].f_2 = 100;
						}
						else if (!unk_0x13CCB1AD131C1082(Local_479[iVar6 /*5*/], sLocal_386, &cVar14, 3) || unk_0xDF93B3CFAC96698F(Local_479[iVar6 /*5*/]) < 0,1f)
						{
							if (system::vdist2(unk_0xD1A6A821F5AC81DB(Local_479[iVar6 /*5*/], 1), Var2) < 100f)
							{
								Local_479[iVar6 /*5*/].f_2 = 100;
							}
						}
					}
					else if (Local_479[iVar6 /*5*/].f_2 == 100)
					{
						if (unk_0x9B5C1660CCDF7189(Local_479[iVar6 /*5*/], joaat("script_task_smart_flee_ped")) != 1)
						{
							unk_0xD844F5E50DAB6FF7(Local_479[iVar6 /*5*/], unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
							unk_0x44FB298D6382876D(Local_479[iVar6 /*5*/], 1);
						}
					}
				}
				else if (Local_554[2 /*10*/] == Local_479[iVar6 /*5*/])
				{
					func_491(&Local_554, 2);
				}
				else if (Local_554[3 /*10*/] == Local_479[iVar6 /*5*/])
				{
					func_491(&Local_554, 3);
				}
				if (unk_0xFC8BFE4B41177C22(Local_479[iVar6 /*5*/]))
				{
					if ((fLocal_267 > 64000f || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) && !bVar1)
					{
						if (!unk_0x4FAFF4BCB7633475(Local_479[iVar6 /*5*/]))
						{
							unk_0xD844F5E50DAB6FF7(Local_479[iVar6 /*5*/], unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
							unk_0x44FB298D6382876D(Local_479[iVar6 /*5*/], 1);
						}
						func_59(&(Local_479[iVar6 /*5*/]), 0);
						bVar1 = true;
					}
				}
				else if (iVar6 == 0)
				{
					if (iLocal_550 == 4)
					{
						unk_0x268BE77F77533D03(sLocal_386);
					}
				}
			}
			iVar6++;
		}
		if (iVar9 && !iLocal_266[0])
		{
			if (!func_358(&Local_493, 1))
			{
				if (!unk_0x4FAFF4BCB7633475(Local_554[2 /*10*/]) && !unk_0x4FAFF4BCB7633475(Local_554[3 /*10*/]))
				{
					if (func_343(&Local_554, "ARM1AUD", "ARM1_EXTRAS2", "ARM1_EXTRAS2_1", 7, 0, 0))
					{
						unk_0xA62957B100C8DE6D(2,5f, 4,5f, 3);
						iLocal_266[0] = 1;
					}
				}
			}
		}
		bVar7 = false;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < Local_480.f_0)
		{
			if (Local_480[iVar6 /*5*/].f_2 == 0)
			{
				if (fLocal_267 < 55000f)
				{
					unk_0xEC9DAA34BBB4658C(iVar15);
					unk_0x80813AC549A1E8AE(sLocal_386);
					if ((unk_0x6252BC0DD8A320DB(iVar15) && unk_0xE100DD4F82A51BDE(sLocal_386)) && !bVar0)
					{
						if (iVar6 == 0)
						{
							StringCopy(&cVar13, "smallgroup_loop_f_a", 64);
						}
						else if (iVar6 == 1)
						{
							StringCopy(&cVar13, "smallgroup_loop_m_b", 64);
						}
						Var11 = { unk_0xBE8776D2466E9EA6(sLocal_386, &cVar13, -1139,247f, -524,062f, 32,021f, 0f, 0f, 20f, 0, 2) };
						Var12 = { unk_0x7A6103DCF5EE8CC3(sLocal_386, &cVar13, -1139,247f, -524,062f, 32,021f, 0f, 0f, 20f, 0, 2) };
						Local_480[iVar6 /*5*/] = unk_0xB1DBFEB95C0EFB88(26, iVar15, Var11, Var12.f_2, 1, 1);
						unk_0x62C438C53BB57AFD(Local_480[iVar6 /*5*/], Var11, 0, 0, 1);
						unk_0x10425721983AE158(Local_480[iVar6 /*5*/], sLocal_386, &cVar13, 1000f, -8f, -1, 9, 0, 0, 0, 0);
						unk_0x5D7CD709B34C90F0(Local_480[iVar6 /*5*/], 1);
						unk_0xAAA71DD7E9059338(Local_480[iVar6 /*5*/], 1);
						if (iVar6 == 1)
						{
							unk_0x55098D9E9AD58806(iVar15);
						}
						unk_0xD1C578C204015E1F(Local_480[iVar6 /*5*/], 4, 0, 0, 0);
						unk_0xD1C578C204015E1F(Local_480[iVar6 /*5*/], 3, 0, 0, 0);
						if ((iVar6 % 2) == 0)
						{
							unk_0xD1C578C204015E1F(Local_480[iVar6 /*5*/], 0, 1, 0, 0);
							unk_0xD1C578C204015E1F(Local_480[iVar6 /*5*/], 5, 1, 0, 0);
						}
						else
						{
							unk_0xD1C578C204015E1F(Local_480[iVar6 /*5*/], 0, 0, 0, 0);
							unk_0xD1C578C204015E1F(Local_480[iVar6 /*5*/], 5, 0, 0, 0);
						}
						Local_480[iVar6 /*5*/].f_2 = 1;
						Local_480[iVar6 /*5*/].f_3 = 0;
						bVar0 = true;
					}
				}
			}
			else
			{
				if (!unk_0x4FAFF4BCB7633475(Local_480[iVar6 /*5*/]))
				{
					if (iVar6 == 0)
					{
						StringCopy(&cVar14, "smallgroup_flee_f_a", 64);
					}
					else if (iVar6 == 1)
					{
						StringCopy(&cVar14, "smallgroup_flee_m_b", 64);
					}
					if (Local_480[iVar6 /*5*/].f_2 == 1)
					{
						if (!bVar7 && unk_0xD9F5E1FEFD1329E4(Local_491[iLocal_283 /*7*/], 0))
						{
							fVar18 = (system::vdist(Var2, unk_0xD1A6A821F5AC81DB(Local_480[iVar6 /*5*/], 1)) / unk_0xDF93B3CFAC96698F(Local_491[iLocal_283 /*7*/]));
							bVar8 = fVar18 < 1,8f;
							bVar7 = true;
						}
						if (bVar8)
						{
							unk_0x5D7CD709B34C90F0(Local_480[iVar6 /*5*/], 0);
							unk_0x10425721983AE158(Local_480[iVar6 /*5*/], sLocal_386, &cVar14, 8f, -8f, -1, 8, 0,05f, 0, 0, 0);
							Local_480[iVar6 /*5*/].f_2++;
						}
					}
					else if (Local_480[iVar6 /*5*/].f_2 == 2)
					{
						if (unk_0x8BF5256C439DF778(Local_480[iVar6 /*5*/]))
						{
							Local_480[iVar6 /*5*/].f_2 = 100;
						}
						else if (!unk_0x13CCB1AD131C1082(Local_480[iVar6 /*5*/], sLocal_386, &cVar14, 3))
						{
							if (system::vdist2(unk_0xD1A6A821F5AC81DB(Local_480[iVar6 /*5*/], 1), Var2) < 100f)
							{
								Local_479[iVar6 /*5*/].f_2 = 100;
							}
						}
						else
						{
							unk_0x458AA1A01F53901E(Local_480[iVar6 /*5*/], sLocal_386, &cVar14, 0,95f);
						}
					}
					else if (Local_479[iVar6 /*5*/].f_2 == 100)
					{
						if (unk_0x9B5C1660CCDF7189(Local_480[iVar6 /*5*/], joaat("script_task_smart_flee_ped")) != 1)
						{
							unk_0xD844F5E50DAB6FF7(Local_480[iVar6 /*5*/], unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
							unk_0x44FB298D6382876D(Local_480[iVar6 /*5*/], 1);
						}
					}
				}
				if ((unk_0xFC8BFE4B41177C22(Local_480[iVar6 /*5*/]) && (fLocal_267 > 64000f || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))) && !bVar1)
				{
					if (!unk_0x4FAFF4BCB7633475(Local_480[iVar6 /*5*/]))
					{
						unk_0xD844F5E50DAB6FF7(Local_480[iVar6 /*5*/], unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
						unk_0x44FB298D6382876D(Local_480[iVar6 /*5*/], 1);
					}
					func_59(&(Local_480[iVar6 /*5*/]), 0);
					bVar1 = true;
				}
			}
			iVar6++;
		}
	}
	unk_0xDF7F16323520B858(joaat("sp0_kills"), &iVar19, -1);
	unk_0xDF7F16323520B858(joaat("sp1_kills"), &iVar20, -1);
	unk_0xDF7F16323520B858(joaat("sp2_kills"), &iVar21, -1);
	iVar22 = ((iVar19 + iVar20) + iVar21);
	if (!iLocal_237 && Local_479[0 /*5*/].f_2 > 0)
	{
		if (iVar22 > iLocal_323)
		{
			unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), &iVar23, -1);
			iVar6 = 0;
			while (iVar6 < iVar23)
			{
				if (unk_0xFC8BFE4B41177C22(iVar23[iVar6]))
				{
					if (unk_0x4B423FAA24E8ABF0(iVar23[iVar6]) == iVar15)
					{
						if (unk_0x4FAFF4BCB7633475(iVar23[iVar6]))
						{
							if (system::vdist2(unk_0xD1A6A821F5AC81DB(iVar23[iVar6], 0), unk_0xD1A6A821F5AC81DB(Local_491[iLocal_283 /*7*/], 0)) < 100f)
							{
								func_422(6);
								iLocal_237 = 1;
							}
						}
						else if (unk_0x9B3D4335E0EDB0BE(iVar23[iVar6], unk_0x4A8C381C258A124D(), 1))
						{
							func_422(6);
							iLocal_237 = 1;
						}
					}
				}
				iVar6++;
			}
		}
		iVar24 = 0;
		while (iVar24 < unk_0x703C4F7316B7195D(0))
		{
			iVar26 = unk_0x4BC3E5D2FB0A1665(0, iVar24);
			if (iVar26 == 141)
			{
				unk_0xFCEF367B86651ED3(0, iVar24, &iVar25, 1);
				if (unk_0xFC8BFE4B41177C22(iVar25))
				{
					if (unk_0x4B423FAA24E8ABF0(iVar25) == iVar15)
					{
						func_422(6);
						iLocal_237 = 1;
					}
				}
			}
			iVar24++;
		}
	}
	iLocal_323 = iVar22;
	if (fLocal_267 < 20000f)
	{
		Local_490[0 /*5*/].f_2 = 0;
		Local_490[1 /*5*/].f_2 = 0;
	}
	else if (fLocal_267 > 43000f)
	{
		iVar6 = 0;
		while (iVar6 < Local_490.f_0)
		{
			switch (Local_490[iVar6 /*5*/].f_2)
			{
				case 0:
					if (iVar6 == 0)
					{
						Var27 = { -1048,134f, -476,2388f, 35,805f };
						fVar28 = 316,5925f;
					}
					else
					{
						Var27 = { -1210,121f, -570,0335f, 26,3435f };
						fVar28 = 295,8782f;
					}
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Var27) < 40000f)
					{
						unk_0xEC9DAA34BBB4658C(iLocal_454);
						if (unk_0x6252BC0DD8A320DB(iLocal_454) && !bVar0)
						{
							Local_490[iVar6 /*5*/] = unk_0xB1DBFEB95C0EFB88(26, iLocal_454, Var27, fVar28, 1, 1);
							unk_0xE67051907958B5EB(Local_490[iVar6 /*5*/], unk_0x4A8C381C258A124D(), -1, 0, 2);
							unk_0xAAA71DD7E9059338(Local_490[iVar6 /*5*/], 1);
							unk_0x55098D9E9AD58806(iLocal_454);
							Local_490[iVar6 /*5*/].f_2++;
							bVar0 = true;
						}
					}
					break;
				
				case 1:
					bVar29 = false;
					if (!unk_0x4FAFF4BCB7633475(Local_490[iVar6 /*5*/]))
					{
						if (iVar6 == 0)
						{
							if (!unk_0x4FAFF4BCB7633475(Local_471.f_0))
							{
								if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_490[iVar6 /*5*/], 1)) < 900f || (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_471.f_0, 1)) < 900f && system::vdist2(unk_0xD1A6A821F5AC81DB(Local_490[iVar6 /*5*/], 1), unk_0xD1A6A821F5AC81DB(Local_471.f_0, 1)) < 100f))
								{
									bVar29 = true;
								}
							}
						}
						else
						{
							bVar29 = system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_490[iVar6 /*5*/], 1)) < 6400f;
						}
						if (bVar29)
						{
							func_292(Local_490[iVar6 /*5*/], "FIGHT", 6);
							Local_490[iVar6 /*5*/].f_2++;
						}
					}
					break;
				
				case 2:
					if (!unk_0x4FAFF4BCB7633475(Local_490[iVar6 /*5*/]))
					{
						if ((!unk_0x1B32E388988DD296(Local_490[iVar6 /*5*/], 0) && unk_0x9B5C1660CCDF7189(Local_490[iVar6 /*5*/], joaat("script_task_combat")) != 1) && unk_0x9B5C1660CCDF7189(Local_490[iVar6 /*5*/], joaat("script_task_perform_sequence")) != 1)
						{
							unk_0x62A5310368A20EFA(Local_490[iVar6 /*5*/], unk_0x4A8C381C258A124D(), 0, 16);
							unk_0x44FB298D6382876D(Local_490[iVar6 /*5*/], 1);
						}
					}
					break;
			}
			if (unk_0xFC8BFE4B41177C22(Local_490[iVar6 /*5*/]))
			{
				if (unk_0x4FAFF4BCB7633475(Local_490[iVar6 /*5*/]))
				{
					func_59(&(Local_490[iVar6 /*5*/]), 0);
				}
				else if (fLocal_267 > 66000f)
				{
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_490[iVar6 /*5*/], 1)) > 10000f)
					{
						func_59(&(Local_490[iVar6 /*5*/]), 0);
					}
				}
			}
			iVar6++;
		}
	}
	if (fLocal_267 < 60000f)
	{
		iVar6 = 0;
		while (iVar6 < Local_486.f_0)
		{
			Local_486[iVar6 /*7*/].f_1 = 0;
			iVar6++;
		}
	}
	else
	{
		iVar30 = joaat("a_c_seagull");
		sVar31 = "creatures@gull@move";
		iVar6 = 0;
		while (iVar6 < Local_486.f_0)
		{
			if (Local_486[iVar6 /*7*/].f_1 == 0)
			{
				if (fLocal_267 < 72000f)
				{
					unk_0xEC9DAA34BBB4658C(iVar30);
					unk_0x80813AC549A1E8AE(sVar31);
					if ((unk_0x6252BC0DD8A320DB(iVar30) && unk_0xE100DD4F82A51BDE(sVar31)) && !bVar0)
					{
						if (iVar6 == 0)
						{
							Local_486[iVar6 /*7*/] = unk_0xB1DBFEB95C0EFB88(26, iVar30, Vector(19,3756f, -730,0198f, -1161,135f) + Vector(-0,15f, 0f, 0f), 278,8218f, 1, 1);
						}
						else if (iVar6 == 1)
						{
							Local_486[iVar6 /*7*/] = unk_0xB1DBFEB95C0EFB88(26, iVar30, Vector(19,4617f, -728,611f, -1160,762f) + Vector(-0,15f, 0f, 0f), 322,6699f, 1, 1);
						}
						else if (iVar6 == 2)
						{
							Local_486[iVar6 /*7*/] = unk_0xB1DBFEB95C0EFB88(26, iVar30, Vector(19,5456f, -727,3837f, -1162,735f) + Vector(-0,15f, 0f, 0f), 32,0168f, 1, 1);
						}
						else if (iVar6 == 3)
						{
							Local_486[iVar6 /*7*/] = unk_0xB1DBFEB95C0EFB88(26, iVar30, Vector(19,3279f, -730,7355f, -1160,644f) + Vector(-0,15f, 0f, 0f), 152,0615f, 1, 1);
						}
						else if (iVar6 == 4)
						{
							Local_486[iVar6 /*7*/] = unk_0xB1DBFEB95C0EFB88(26, iVar30, Vector(19,4121f, -730,381f, -1155,033f) + Vector(-0,15f, 0f, 0f), 352,3865f, 1, 1);
						}
						else if (iVar6 == 5)
						{
							Local_486[iVar6 /*7*/] = unk_0xB1DBFEB95C0EFB88(26, iVar30, Vector(19,7718f, -723,8991f, -1152,808f) + Vector(-0,15f, 0f, 0f), 25,9012f, 1, 1);
							unk_0x55098D9E9AD58806(iVar30);
						}
						unk_0x10425721983AE158(Local_486[iVar6 /*7*/], sVar31, "idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
						unk_0xAAA71DD7E9059338(Local_486[iVar6 /*7*/], 1);
						unk_0x9FF00EA9A61211D2(Local_486[iVar6 /*7*/], 0);
						unk_0x935364B4448CD584(Local_486[iVar6 /*7*/], 1);
						unk_0x5D7CD709B34C90F0(Local_486[iVar6 /*7*/], 1);
						unk_0x44C48AC14D3C09ED(Local_486[iVar6 /*7*/], 0, 0);
						Local_486[iVar6 /*7*/].f_1 = 1;
						Local_486[iVar6 /*7*/].f_6 = 0f;
						bVar0 = true;
					}
				}
			}
			else if (unk_0xFC8BFE4B41177C22(Local_486[iVar6 /*7*/]))
			{
				if (!unk_0x4FAFF4BCB7633475(Local_486[iVar6 /*7*/]))
				{
					switch (Local_486[iVar6 /*7*/].f_1)
					{
						case 1:
							if (unk_0xD7E1DF759CD0FFF2("ARM_1_BIRDS", 0, -1))
							{
								Var32 = { unk_0xD1A6A821F5AC81DB(Local_486[iVar6 /*7*/], 1) };
								if (system::vdist2(Var2, Var32) < 900f || (system::vdist2(Var3, Var32) < 900f && fLocal_268 > 0,7f))
								{
									if (iVar6 == 0)
									{
										unk_0xBD618A73193F9982(-1, "Birds", Local_486[iVar6 /*7*/], "ARM_1_SOUNDSET", 0, 0);
										if (system::vdist2(Var2, Var32) < 2500f)
										{
											unk_0xA62957B100C8DE6D(2f, 2f, 3);
										}
									}
									Local_486[iVar6 /*7*/].f_2 = unk_0x1DD05E817C89C737();
									Local_486[iVar6 /*7*/].f_1++;
								}
							}
							break;
						
						case 2:
							if ((unk_0x1DD05E817C89C737() - Local_486[iVar6 /*7*/].f_2) > 500)
							{
								unk_0x5D7CD709B34C90F0(Local_486[iVar6 /*7*/], 0);
								unk_0x44C48AC14D3C09ED(Local_486[iVar6 /*7*/], 1, 0);
								Local_486[iVar6 /*7*/].f_3 = { func_450(unk_0x88124E0D60FB8D11(Local_486[iVar6 /*7*/], 2) + Vector(0f, 0f, 45f)) };
								Local_486[iVar6 /*7*/].f_6 = (Local_486[iVar6 /*7*/].f_6 + ((14f - Local_486[iVar6 /*7*/].f_6) * 0,5f));
								unk_0x1AB7223AC0702871(Local_486[iVar6 /*7*/], Local_486[iVar6 /*7*/].f_3 * Vector(Local_486[iVar6 /*7*/].f_6, Local_486[iVar6 /*7*/].f_6, Local_486[iVar6 /*7*/].f_6));
								unk_0x10425721983AE158(Local_486[iVar6 /*7*/], sVar31, "flapping", 4f, -8f, -1, 9, 0, 0, 0, 0);
								Local_486[iVar6 /*7*/].f_1++;
							}
							break;
						
						case 3:
							Local_486[iVar6 /*7*/].f_6 = (Local_486[iVar6 /*7*/].f_6 + ((14f - Local_486[iVar6 /*7*/].f_6) * 0,5f));
							unk_0x1AB7223AC0702871(Local_486[iVar6 /*7*/], Local_486[iVar6 /*7*/].f_3 * Vector(Local_486[iVar6 /*7*/].f_6, Local_486[iVar6 /*7*/].f_6, Local_486[iVar6 /*7*/].f_6));
							if (unk_0x13CCB1AD131C1082(Local_486[iVar6 /*7*/], sVar31, "flapping", 3))
							{
								unk_0x458AA1A01F53901E(Local_486[iVar6 /*7*/], sVar31, "flapping", 4f);
								Local_486[iVar6 /*7*/].f_1++;
							}
							break;
						
						case 4:
							Local_486[iVar6 /*7*/].f_6 = (Local_486[iVar6 /*7*/].f_6 + ((14f - Local_486[iVar6 /*7*/].f_6) * 0,5f));
							unk_0x1AB7223AC0702871(Local_486[iVar6 /*7*/], Local_486[iVar6 /*7*/].f_3 * Vector(Local_486[iVar6 /*7*/].f_6, Local_486[iVar6 /*7*/].f_6, Local_486[iVar6 /*7*/].f_6));
							break;
						}
				}
				if ((fLocal_267 > 82000f || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) && !bVar1)
				{
					func_59(&(Local_486[iVar6 /*7*/]), 0);
					bVar1 = true;
				}
			}
			else if (iVar6 == 0)
			{
				unk_0x268BE77F77533D03(sVar31);
				unk_0x48FA483FE4F18CFE("ARM_1_BIRDS");
			}
			iVar6++;
		}
	}
	if (fLocal_267 < 20000f)
	{
		Local_487.f_2 = 0;
	}
	else if (fLocal_267 > 120000f)
	{
		switch (Local_487.f_2)
		{
			case 0:
				unk_0xEC9DAA34BBB4658C(iLocal_453);
				if (unk_0x6252BC0DD8A320DB(iLocal_453) && !bVar0)
				{
					Local_487.f_0 = unk_0xB1DBFEB95C0EFB88(26, iLocal_453, -73,6282f, -676,848f, 32,9306f, 69,2552f, 1, 1);
					unk_0x5D7CD709B34C90F0(Local_487.f_0, 1);
					unk_0x0FD8B5F4BB15CD71(Local_487.f_0, -1);
					unk_0xAAA71DD7E9059338(Local_487.f_0, 1);
					unk_0x55098D9E9AD58806(iLocal_453);
					Local_487.f_2++;
					bVar0 = true;
				}
				break;
			
			case 1:
				if (!unk_0x4FAFF4BCB7633475(Local_487.f_0))
				{
					if (unk_0x0D7186810BF44109(Local_487.f_0))
					{
						if (system::vdist2(unk_0xD1A6A821F5AC81DB(Local_487.f_0, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 2500f)
						{
							unk_0x5D7CD709B34C90F0(Local_487.f_0, 0);
						}
					}
					else if ((fLocal_267 < 144600f && system::vdist2(unk_0xD1A6A821F5AC81DB(Local_487.f_0, 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 25f) || fLocal_267 > 145600f)
					{
						Local_487.f_2++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x4FAFF4BCB7633475(Local_487.f_0))
				{
					if (!unk_0x1B32E388988DD296(Local_487.f_0, 0) && unk_0x9B5C1660CCDF7189(Local_487.f_0, joaat("script_task_combat")) != 1)
					{
						func_292(Local_487.f_0, "FIGHT", 24);
						unk_0x62A5310368A20EFA(Local_487.f_0, unk_0x4A8C381C258A124D(), 0, 16);
					}
				}
				break;
		}
		if (Local_487.f_2 > 0)
		{
			if (unk_0x4FAFF4BCB7633475(Local_487.f_0))
			{
				func_59(&Local_487, 0);
			}
		}
	}
	if (iLocal_183[14] == joaat("stockade"))
	{
		if (!unk_0x1C2F771CDC87A3A5(iLocal_190[14], 0))
		{
			if (!unk_0x0D7186810BF44109(iLocal_190[14]))
			{
				unk_0x5D7CD709B34C90F0(iLocal_190[14], 1);
				unk_0xF04751F8E604D487(iLocal_190[14], 0);
			}
		}
	}
	if (!unk_0xFC8BFE4B41177C22(iLocal_428))
	{
		if (system::vdist2(Var2, -7,1741f, -658,6362f, 33,8238f) < 10000f)
		{
			func_490(-7,1741f, -658,6362f, 33,8238f, 0f, 0f, 4,5837f, 0);
		}
	}
}

int func_490(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (!unk_0xFC8BFE4B41177C22(iLocal_428))
	{
		unk_0xEC9DAA34BBB4658C(joaat("prop_vault_shutter"));
		if (!bParam2)
		{
			if (iLocal_439 == 0)
			{
				iLocal_439 = unk_0x0556019E7EE8EC9A(-7,9f, -662,2f, 34,7f, "dt1_03_carpark");
			}
			else
			{
				unk_0x74C1590CC91B3930(iLocal_439);
			}
		}
		if (unk_0x6252BC0DD8A320DB(joaat("prop_vault_shutter")))
		{
			if (!bParam2)
			{
				if (iLocal_439 != 0)
				{
					if (unk_0xD0B0D1BD29678350(iLocal_439))
					{
						iLocal_428 = unk_0x43AFC452F25F3A2F(joaat("prop_vault_shutter"), Param0, 1, 1, 0, 0);
						unk_0xCF39804E8C88080E(iLocal_428, Param1, 2, 1);
						unk_0x5D7CD709B34C90F0(iLocal_428, 1);
						unk_0x10D289FA72A25777(iLocal_428, iLocal_439, joaat("GtaMloRoom003"));
						unk_0x55098D9E9AD58806(joaat("prop_vault_shutter"));
						return 1;
					}
				}
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_491(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_492(float fParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	bool bVar14;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam2, 0) && unk_0xD9F5E1FEFD1329E4(iParam1, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam2, 1) };
		fVar2 = system::vdist(Var0, Var1);
		fVar3 = 4,5f;
		fVar4 = 7f;
		fVar5 = 40f;
		fVar6 = 100f;
		fVar7 = 30f;
		fVar8 = 1f;
		fVar9 = 0f;
		fVar10 = 0f;
		fVar11 = (unk_0xDF93B3CFAC96698F(iParam2) - unk_0xDF93B3CFAC96698F(iParam1));
		if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
		{
			fVar9 = 0,025f;
			fVar10 = -35f;
		}
		else
		{
			fVar9 = 0,01f;
			fVar10 = -15f;
		}
		if (fLocal_267 < 7500f)
		{
			fVar4 = 10f;
			fVar5 = 50f;
		}
		if (fLocal_267 > 8000f && fLocal_267 < 12000f)
		{
			fVar4 = 30f;
			fVar5 = 55f;
		}
		if (fLocal_267 > 26000f && fLocal_267 < 30000f)
		{
			fVar4 = 13f;
			fVar5 = 45f;
		}
		if (fLocal_267 > 40000f && fLocal_267 < 45500f)
		{
			fVar4 = 15f;
			fVar5 = 45f;
		}
		if (fLocal_267 > 46000f && fLocal_267 < 51000f)
		{
			fVar9 = (fVar9 * 0,7f);
			fVar4 = 22f;
			fVar5 = 50f;
		}
		if (fLocal_267 > 60000f && fLocal_267 < 64000f)
		{
			fVar9 = (fVar9 * 0,7f);
			fVar4 = 22f;
			fVar5 = 50f;
		}
		if (fLocal_267 > 65000f && fLocal_267 < 70000f)
		{
			fVar9 = (fVar9 * 0,7f);
			fVar4 = 15f;
			fVar5 = 50f;
		}
		if (fLocal_267 > 77500f && fLocal_267 < 81500f)
		{
			fVar4 = 18f;
			fVar5 = 45f;
		}
		if (fLocal_267 > 83500f && fLocal_267 < 87500f)
		{
			fVar9 = (fVar9 * 0,7f);
			fVar4 = 20f;
			fVar5 = 45f;
		}
		if (fLocal_267 > 87500f && fLocal_267 < 98500f)
		{
			fVar9 = (fVar9 * 0,7f);
			fVar4 = 25f;
			fVar5 = 50f;
		}
		if (fLocal_267 > 108000f && fLocal_267 < 113500f)
		{
			fVar9 = (fVar9 * 0,7f);
			fVar4 = 22f;
			fVar5 = 50f;
		}
		if (fLocal_267 > 119000f && fLocal_267 < 121500f)
		{
			fVar4 = 25f;
			fVar5 = 50f;
		}
		if (fLocal_267 > 122000f && fLocal_267 < 125000f)
		{
			fVar4 = 15f;
			fVar5 = 45f;
		}
		if (fLocal_267 > 126000f && fLocal_267 < 131500f)
		{
			fVar4 = 11f;
			fVar5 = 30f;
			fVar6 = 60f;
		}
		if (fLocal_267 > 131500f && fLocal_267 < 137700f)
		{
			fVar9 = (fVar9 * 0,7f);
			fVar4 = 12f;
			fVar5 = 45f;
		}
		if (fLocal_267 > 140900f && fLocal_267 < 144600f)
		{
			fVar4 = 15f;
			fVar5 = 30f;
		}
		if (fLocal_267 > 145600f && fLocal_267 < 149400f)
		{
			fVar4 = 8f;
			fVar5 = 20f;
			fVar6 = 80f;
		}
		fVar12 = 0f;
		Var13 = { unk_0xAD8278DAEC2CC059(iParam2, Var0) };
		if (Var13.f_1 < 1f)
		{
			if (fVar2 > fVar5)
			{
				bVar14 = false;
				if (fVar2 > fVar6)
				{
					if (fVar2 > 200f)
					{
						bVar14 = true;
					}
					fVar2 = fVar6;
				}
				fVar12 = ((fVar2 - fVar5) / (fVar6 - fVar5));
				if (unk_0xCB5CAFF0A4A8B74B(iParam2) && !bVar14)
				{
					if (fVar11 > 10f)
					{
						fVar8 = (0,7f - (0,2f * fVar12));
					}
					else
					{
						fVar8 = (0,7f - (0,1f * fVar12));
					}
				}
				else
				{
					fVar8 = (0,7f - (0,5f * fVar12));
				}
				fVar10 = (fVar10 * 0,5f);
			}
			else if (fVar2 > fVar4)
			{
				fVar12 = ((fVar2 - fVar4) / (fVar5 - fVar4));
				fVar8 = (1f - (0,3f * fVar12));
			}
			else
			{
				if (fVar2 < fVar3)
				{
					fVar2 = fVar3;
				}
				fVar12 = ((fVar4 - fVar2) / (fVar4 - fVar3));
				if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
				{
					fVar8 = (1f + (fVar12 * 2f));
				}
				else
				{
					fVar8 = (1f + fVar12);
				}
			}
		}
		else
		{
			if (fVar2 > fVar7)
			{
				fVar2 = fVar7;
			}
			fVar12 = (fVar2 / fVar7);
			if (fVar11 > 0f)
			{
				fVar12 = (fVar12 * 0,5f);
			}
			if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
			{
				fVar8 = (2f + fVar12);
			}
			else if (unk_0xDF93B3CFAC96698F(iParam1) < 5f && fVar11 > 0f)
			{
				fVar8 = (0,6f + fVar12);
			}
			else
			{
				fVar8 = (1f + fVar12);
			}
		}
		if (!unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam1))
		{
			fVar8 = 1f;
		}
		if (fLocal_267 < 19000f)
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2013,521f, -410,929f, 10,10326f, -2005,117f, -399,6596f, 15,68106f, 14f, 0, 1, 0))
			{
				if (fVar8 < 1f)
				{
					fVar8 = 1f;
				}
			}
		}
		if (fLocal_267 > 65000f && fLocal_267 < 78000f)
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1327,701f, -648,2095f, 35,88271f, -1196,131f, -817,1476f, 13,71532f, 33,75f, 0, 1, 0))
			{
				if (fLocal_267 < 75000f)
				{
					fVar8 = 1,5f;
				}
				else
				{
					fVar8 = 1,2f;
				}
			}
		}
		if (fLocal_267 > 86500f && fLocal_267 < 96500f)
		{
			if (fVar8 < 0,7f)
			{
				fVar8 = 0,7f;
			}
		}
		if (fLocal_267 > (unk_0xE2E30D829A6B8F9E(iLocal_288, sLocal_379) - 4000f))
		{
			if (fVar8 < 1f)
			{
				fVar8 = 1f;
			}
		}
		else if (fLocal_267 > 137400f)
		{
			if (fVar8 > 1f)
			{
				fVar8 = 1f;
			}
		}
		if (*fParam0 < 1f && fVar8 > *fParam0)
		{
			fVar9 = (fVar9 * 2f);
		}
		if (fVar8 > 1f)
		{
			fVar10 = (fVar10 - ((fVar8 - 1f) * 10f));
		}
		unk_0xAC89BB42FE09CC80(Local_491[iLocal_283 /*7*/], fVar10);
		*fParam0 = (*fParam0 + ((((fVar8 - *fParam0) * fVar9) * 30f) * system::timestep()));
	}
}

void func_493(float fParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam2, 0) && unk_0xD9F5E1FEFD1329E4(iParam1, 0))
	{
		fVar0 = 1f;
		fVar1 = 0,01f;
		if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
		{
			fVar1 = 0,025f;
		}
		if (fLocal_267 < 7500f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 10f, 50f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 8000f && fLocal_267 < 12000f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 30f, 55f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 26000f && fLocal_267 < 30000f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 20f, 55f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 40000f && fLocal_267 < 45500f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 30f, 55f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 46000f && fLocal_267 < 51000f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 45f, 50f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 60000f && fLocal_267 < 64000f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 50f, 60f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 77500f && fLocal_267 < 81500f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 25f, 50f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 83500f && fLocal_267 < 87500f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 30f, 55f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 87500f && fLocal_267 < 98500f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 40f, 60f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
			fVar1 = (fVar1 * 0,7f);
		}
		else if (fLocal_267 > 108000f && fLocal_267 < 113500f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 35f, 55f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 119000f && fLocal_267 < 121500f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 35f, 55f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 122000f && fLocal_267 < 125000f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 20f, 50f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 126000f && fLocal_267 < 131500f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 15f, 30f, 60f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 131500f && fLocal_267 < 137700f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 15f, 50f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 140900f && fLocal_267 < 144600f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 15f, 30f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_267 > 145600f && fLocal_267 < 149400f)
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 8f, 20f, 80f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		else
		{
			func_495(&fVar0, &iParam1, iParam2, 4,5f, 10f, 50f, 100f, 30f, 1f, 0,7f, 0,5f, 2f, 1, 15f, 25f, 1);
		}
		if (!unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam1))
		{
			fVar0 = 1f;
		}
		if (fLocal_267 < 19000f)
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2013,521f, -410,929f, 10,10326f, -2005,117f, -399,6596f, 15,68106f, 14f, 0, 1, 0))
			{
				if (fVar0 < 1f)
				{
					fVar0 = 1f;
				}
			}
		}
		if (fLocal_267 > 65000f && fLocal_267 < 78000f)
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1327,701f, -648,2095f, 35,88271f, -1196,131f, -817,1476f, 13,71532f, 33,75f, 0, 1, 0))
			{
				if (fLocal_267 < 75000f)
				{
					fVar0 = 1,5f;
				}
				else
				{
					fVar0 = 1,2f;
				}
			}
		}
		if (fLocal_267 > (unk_0xE2E30D829A6B8F9E(iLocal_288, sLocal_379) - 4000f))
		{
			if (fVar0 < 1f)
			{
				fVar0 = 1f;
			}
		}
		else if (fLocal_267 > 137600f)
		{
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
		func_494(fParam0, fVar0, fVar1);
	}
}

void func_494(var uParam0, float fParam1, float fParam2)
{
	*uParam0 = (*uParam0 + ((((fParam1 - *uParam0) * fParam2) * 30f) * system::timestep()));
}

void func_495(float fParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(*iParam1, 1) };
	Var1 = { unk_0xD1A6A821F5AC81DB(iParam2, 1) };
	Var2 = { unk_0xAD8278DAEC2CC059(iParam2, Var0) };
	fVar3 = system::vdist(Var0, Var1);
	fVar4 = 0f;
	fVar5 = (fParam11 - 1f);
	fVar6 = (1f - fParam9);
	if (Var2.f_1 < 1f)
	{
		if (fVar3 > fParam5)
		{
			iVar7 = 0;
			if (fVar3 > fParam6)
			{
				if (fVar3 > (fParam6 * 2f))
				{
					iVar7 = 1;
				}
				fVar3 = fParam6;
			}
			fVar4 = ((fVar3 - fParam5) / (fParam6 - fParam5));
			if (!unk_0xCB5CAFF0A4A8B74B(iParam2) || iVar7)
			{
				*fParam0 = (fParam9 - ((fParam9 - fParam10) * fVar4));
			}
			else
			{
				*fParam0 = fParam9;
			}
		}
		else if (fVar3 > fParam4)
		{
			fVar4 = ((fVar3 - fParam4) / (fParam5 - fParam4));
			*fParam0 = (1f - (fVar6 * fVar4));
		}
		else
		{
			if (fVar3 < fParam3)
			{
				fVar3 = fParam3;
			}
			fVar4 = ((fParam4 - fVar3) / (fParam4 - fParam3));
			if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0) && iParam15)
			{
				*fParam0 = (1f + ((fVar4 * fVar5) * 2f));
			}
			else
			{
				*fParam0 = (1f + (fVar4 * fVar5));
			}
		}
	}
	else
	{
		if (fVar3 > fParam7)
		{
			fVar3 = fParam7;
		}
		fVar4 = (fVar3 / fParam7);
		fVar8 = (unk_0xDF93B3CFAC96698F(iParam2) - unk_0xDF93B3CFAC96698F(*iParam1));
		if (fVar8 > 0f)
		{
			fVar4 = (fVar4 * 0,5f);
		}
		if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0) && iParam15)
		{
			*fParam0 = (2f + fVar4);
		}
		else if (unk_0xDF93B3CFAC96698F(*iParam1) < 5f && fVar8 > 0f)
		{
			*fParam0 = (0,6f + fVar4);
		}
		else
		{
			*fParam0 = (1f + fVar4);
		}
	}
	*fParam0 = (*fParam0 * fParam8);
	if (bParam12)
	{
		fVar9 = fParam13;
		if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0) && iParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*fParam0 > 1f)
		{
			fVar9 = (fParam13 + ((fParam14 - fParam13) * (*fParam0 - 1f)));
		}
		unk_0xAC89BB42FE09CC80(*iParam1, -fVar9);
	}
}

int func_496()
{
	return 2086;
}

void func_497(int iParam0)
{
	if (func_501())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_485(0))
		{
			func_498(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_498(int iParam0)
{
	if (func_501())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_500())
		{
			func_499(1, 1);
		}
		else
		{
			func_499(0, 0);
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
	if (!func_70())
	{
		Global_20930.f_1 = 3;
	}
}

void func_499(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_485(0))
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

bool func_500()
{
	return BitTest(Global_1956920, 5);
}

bool func_501()
{
	return BitTest(Global_1956920, 19);
}

void func_502(int iParam0, float fParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	
	fVar0 = unk_0x0B852B0BF94A8DC1();
	fVar0 = (fVar0 * 1000f);
	bLocal_89 = false;
	if (!bLocal_71)
	{
		if (bLocal_70)
		{
			func_527();
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				unk_0x2094BC4B6731BA68(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_71 = true;
		}
	}
	else if (!bLocal_70)
	{
		func_443();
		bLocal_71 = false;
	}
	if (bLocal_70)
	{
		fParam1 = 1f;
		unk_0xA0265306DFF63938(0f);
	}
	if (!bLocal_64)
	{
		if (iLocal_59)
		{
			fLocal_116 = 0f;
		}
		else
		{
			fLocal_116 = 1f;
		}
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x050D073F91C5243C(iParam0))
			{
				if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
				{
					if (func_526(unk_0x4A8C381C258A124D(), iParam0))
					{
						bLocal_69 = true;
					}
					else
					{
						bLocal_69 = false;
					}
				}
				fLocal_113 = unk_0x157F3D5A4AAB2C50(iParam0);
				unk_0x206AB1458FD9522F(iParam0, ((fParam1 * fLocal_114) * fLocal_116));
				if (bLocal_68)
				{
					func_525(iParam0, fLocal_113);
					func_524(iParam0, fLocal_123);
					if (fLocal_118 > 1000f)
					{
						if (iLocal_155 == 0)
						{
							func_523(iParam0, fLocal_123);
						}
						fVar0 = ((fLocal_113 + 4000f) + (system::to_float(iLocal_155) * 2000f));
						func_522(iParam0, fVar0, fLocal_117);
						iLocal_155++;
						if (iLocal_155 > 2)
						{
							fLocal_118 = 0f;
						}
					}
					else
					{
						iLocal_155 = 0;
						fLocal_118 = (fLocal_118 + (unk_0x0B852B0BF94A8DC1() * 1000f));
					}
				}
			}
		}
		iVar2 = 0;
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x050D073F91C5243C(iParam0))
			{
				iVar2 = 1;
			}
		}
		if (fLocal_113 == 0f || unk_0x15CCE8886267624F())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_76)
		{
			if (!iLocal_58)
			{
				func_519(iParam0, ((fParam1 * fLocal_114) * fLocal_116), 0);
				if (!iLocal_79)
				{
				}
				iLocal_79 = 0;
			}
			if (bLocal_61)
			{
				func_518(iParam0);
			}
			if (!iLocal_58)
			{
				func_505(iParam0, ((fParam1 * fLocal_114) * fLocal_116), 0);
			}
		}
		if (iLocal_66)
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					iLocal_193 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					Local_159 = { unk_0xD1A6A821F5AC81DB(iLocal_193, 1) };
					unk_0xB66CD98548798F26(iLocal_193, &uLocal_97, &uLocal_98, &uLocal_99, &uLocal_100);
				}
			}
			iLocal_66 = 0;
		}
		if (iLocal_65)
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_193))
			{
				func_435(iLocal_194);
				iLocal_194 = iLocal_193;
			}
			if (unk_0xD9F5E1FEFD1329E4(iLocal_194, 0))
			{
				unk_0xB2BD5837A8D3CEDA(iLocal_194, Local_159, 1, 0, 0, 1);
				unk_0xF425E0B05426E088(iLocal_194, uLocal_97, uLocal_98, uLocal_99, uLocal_100);
			}
			fLocal_112 = fLocal_115;
			iLocal_58 = 1;
			iLocal_65 = 0;
		}
		if (iLocal_58)
		{
			while (!func_503(&iParam0, fLocal_112))
			{
				system::wait(0);
			}
			iLocal_59 = 1;
		}
		if (iLocal_72)
		{
			iLocal_72 = 0;
		}
	}
}

int func_503(int iParam0, float fParam1)
{
	if (!iLocal_73)
	{
		iLocal_58 = 1;
		func_430();
		if (unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
		{
			if (unk_0x050D073F91C5243C(*iParam0))
			{
				unk_0x1D2DAF2A41FFC4A0(*iParam0);
				unk_0xF698038C13845696(*iParam0);
			}
			if (!iLocal_142 == -1)
			{
				while (!func_504(iParam0, iLocal_142, fParam1, 1, 0, 0, 0, 0))
				{
					system::wait(0);
				}
				if (!bLocal_63)
				{
					iLocal_59 = 1;
					fLocal_116 = 0f;
					iLocal_143 = 0;
					iLocal_145 = 0;
					iLocal_144 = 0;
					iLocal_139 = 0;
					iLocal_140 = 0;
					iLocal_141 = 0;
					iLocal_146 = 0;
					iLocal_147 = 0;
					iLocal_148 = 0;
				}
			}
		}
		iLocal_73 = 1;
	}
	else
	{
		if (unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
		{
			if (unk_0x050D073F91C5243C(*iParam0))
			{
				unk_0x206AB1458FD9522F(*iParam0, ((1f * fLocal_114) * fLocal_116));
				func_504(iParam0, iLocal_142, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_113 = fParam1;
		iLocal_149 = 0;
		iLocal_152 = 0;
		fLocal_128 = 0f;
		fLocal_127 = 0f;
		func_505(*iParam0, ((1f * fLocal_114) * fLocal_116), 1);
		func_519(*iParam0, ((1f * fLocal_114) * fLocal_116), 1);
		func_518(*iParam0);
		if ((iLocal_146 == 0 && iLocal_147 == 0) && iLocal_148 == 0)
		{
			iLocal_59 = 0;
			iLocal_58 = 0;
			iLocal_73 = 0;
			return 1;
		}
	}
	return 0;
}

int func_504(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		unk_0xD772E6694B8472A6(iParam1, &cLocal_172);
		if (unk_0x266D9DB5FCE4003B(iParam1, &cLocal_172))
		{
			if (unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
			{
				if (!unk_0x050D073F91C5243C(*iParam0))
				{
					unk_0x5D7CD709B34C90F0(*iParam0, 0);
					if (bParam4)
					{
						unk_0x3EF00C934572535B(*iParam0, iParam1, &cLocal_172, 1092616192, 786603);
					}
					else
					{
					}
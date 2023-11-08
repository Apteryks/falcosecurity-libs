// SPDX-License-Identifier: GPL-2.0-only OR MIT
/*

Copyright (C) 2023 The Falco Authors.

This file is dual licensed under either the MIT or GPL 2. See MIT.txt
or GPL2.txt for full copies of the license.

*/

/*
 * This file was automatically created by syscalls-bumper (https://github.com/falcosecurity/syscalls-bumper).")
 * DO NOT EDIT THIS FILE MANUALLY.")
 */

#include "ppm_events_public.h"

/*
 * This table is used by drivers when receiving a 32bit syscall.
 * It is needed to convert a 32bit syscall (the array index) to a 64bit syscall value.
 * NOTE: some syscalls might be unavailable on x86_64; their value will be set to -1.
 * Some unavailable syscalls are identical to a compatible x86_64 syscall; in those cases,
 * we use the compatible x86_64 syscall, eg: mmap2 -> mmap.
 */
const int g_ia32_64_map[SYSCALL_TABLE_SIZE] = {
	[143] = 73,
	[71] = 114,
	[88] = 169,
	[0] = 219,
	[344] = 306,
	[382] = 331,
	[184] = 125,
	[320] = 280,
	[214] = 106, // NOTE: syscall setgid32 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[106] = 4,
	[22] = 166, // NOTE: syscall umount unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[190] = 58,
	[452] = 452,
	[300] = -1, // ia32 only: fstatat64
	[290] = 252,
	[168] = 7,
	[379] = 328,
	[54] = 16,
	[139] = 123,
	[226] = 188,
	[28] = -1, // ia32 only: oldfstat
	[18] = -1, // ia32 only: oldstat
	[155] = 143,
	[436] = 436,
	[356] = 319,
	[152] = 151,
	[254] = 213,
	[128] = 175,
	[434] = 434,
	[101] = 173,
	[83] = 88,
	[364] = 288,
	[414] = -1, // ia32 only: ppoll_time64
	[319] = 281,
	[236] = 198,
	[394] = 66,
	[400] = 69,
	[408] = -1, // ia32 only: timer_gettime64
	[286] = 248,
	[275] = 239,
	[445] = 445,
	[397] = 30,
	[299] = 261,
	[235] = 197,
	[206] = -1, // ia32 only: setgroups32
	[26] = 101,
	[173] = 15,
	[245] = 206,
	[282] = 245,
	[354] = 317,
	[62] = 136,
	[4] = 1,
	[233] = 195,
	[278] = 241,
	[225] = 187,
	[302] = 264,
	[216] = -1, // ia32 only: setfsgid32
	[43] = 100,
	[312] = 274,
	[402] = 71,
	[159] = 146,
	[346] = 308,
	[9] = 86,
	[119] = -1, // ia32 only: sigreturn
	[324] = 285,
	[234] = 196,
	[378] = 327,
	[200] = 104, // NOTE: syscall getgid32 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[341] = 303,
	[84] = -1, // ia32 only: oldlstat
	[337] = 299,
	[374] = 323,
	[271] = 235,
	[330] = 292,
	[204] = -1, // ia32 only: setregid32
	[373] = 48,
	[227] = 189,
	[347] = 310,
	[352] = 315,
	[74] = 170,
	[183] = 79,
	[65] = 111,
	[11] = 59,
	[93] = 77,
	[274] = 237,
	[398] = 67,
	[114] = 61,
	[332] = 294,
	[170] = 119,
	[27] = 37,
	[303] = 265,
	[336] = 298,
	[92] = 76,
	[7] = -1, // ia32 only: waitpid
	[8] = 85,
	[453] = 453,
	[393] = 64,
	[270] = 234,
	[412] = -1, // ia32 only: utimensat_time64
	[107] = 6,
	[345] = 307,
	[395] = 29,
	[194] = -1, // ia32 only: ftruncate64
	[202] = 108, // NOTE: syscall getegid32 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[37] = 62,
	[263] = 226,
	[140] = 8, // NOTE: syscall _llseek unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[47] = 104,
	[171] = 120,
	[349] = 312,
	[68] = -1, // ia32 only: sgetmask
	[360] = 53,
	[437] = 437,
	[156] = 144,
	[187] = 40,
	[210] = 119, // NOTE: syscall setresgid32 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[422] = -1, // ia32 only: futex_time64
	[449] = 449,
	[355] = 318,
	[340] = 302,
	[240] = 202,
	[249] = 210,
	[342] = 304,
	[418] = -1, // ia32 only: mq_timedsend_time64
	[351] = 314,
	[102] = -1, // ia32 only: socketcall
	[317] = 279,
	[38] = 82,
	[30] = 132,
	[292] = 254,
	[138] = 122,
	[410] = -1, // ia32 only: timerfd_gettime64
	[269] = -1, // ia32 only: fstatfs64
	[454] = 454,
	[399] = 68,
	[160] = 147,
	[116] = 99,
	[13] = 201,
	[33] = 21,
	[244] = 211,
	[438] = 438,
	[61] = 161,
	[439] = 439,
	[304] = 266,
	[85] = 89,
	[265] = 228,
	[339] = 301,
	[197] = 5, // NOTE: syscall fstat64 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[218] = 27,
	[164] = 117,
	[383] = 332,
	[262] = 225,
	[3] = 0,
	[277] = 240,
	[41] = 32,
	[118] = 74,
	[456] = 456,
	[230] = 192,
	[108] = 5,
	[196] = 6, // NOTE: syscall lstat64 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[162] = 35,
	[250] = 221,
	[427] = 427,
	[191] = 97, // NOTE: syscall ugetrlimit unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[231] = 193,
	[297] = 259,
	[151] = 150,
	[203] = -1, // ia32 only: setreuid32
	[67] = -1, // ia32 only: sigaction
	[367] = 51,
	[42] = 22,
	[40] = 84,
	[239] = 40, // NOTE: syscall sendfile64 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[81] = 116,
	[211] = 120, // NOTE: syscall getresgid32 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[424] = 424,
	[380] = 329,
	[215] = -1, // ia32 only: setfsuid32
	[326] = 287,
	[451] = 451,
	[50] = 108,
	[147] = 124,
	[385] = 333,
	[238] = 200,
	[224] = 186,
	[78] = 96,
	[440] = 440,
	[57] = 109,
	[403] = -1, // ia32 only: clock_gettime64
	[426] = 426,
	[446] = 446,
	[150] = 149,
	[145] = 19,
	[95] = 93,
	[425] = 425,
	[417] = -1, // ia32 only: recvmmsg_time64
	[60] = 95,
	[72] = -1, // ia32 only: sigsuspend
	[314] = 277,
	[182] = 92,
	[313] = 275,
	[327] = 289,
	[55] = 72,
	[2] = 57,
	[353] = 316,
	[45] = 12,
	[174] = 13,
	[6] = 3,
	[318] = 309,
	[381] = 330,
	[396] = 31,
	[325] = 286,
	[406] = -1, // ia32 only: clock_getres_time64
	[404] = -1, // ia32 only: clock_settime64
	[246] = 207,
	[363] = 50,
	[419] = -1, // ia32 only: mq_timedreceive_time64
	[298] = 260,
	[135] = 139,
	[131] = 179,
	[100] = 138,
	[205] = -1, // ia32 only: getgroups32
	[368] = 52,
	[123] = 154,
	[146] = 20,
	[343] = 305,
	[329] = 291,
	[306] = 268,
	[77] = 98,
	[232] = 194,
	[323] = 284,
	[21] = 165,
	[178] = 129,
	[261] = 224,
	[212] = -1, // ia32 only: chown32
	[255] = 233,
	[76] = 97,
	[199] = 102, // NOTE: syscall getuid32 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[291] = 253,
	[372] = 47,
	[111] = 153,
	[259] = 222,
	[357] = 321,
	[362] = 42,
	[288] = 250,
	[48] = -1, // ia32 only: signal
	[266] = 229,
	[94] = 91,
	[96] = 140,
	[258] = 218,
	[129] = 176,
	[221] = 72, // NOTE: syscall fcntl64 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[80] = 115,
	[295] = 257,
	[260] = 223,
	[132] = 121,
	[39] = 83,
	[401] = 70,
	[34] = -1, // ia32 only: nice
	[311] = 273,
	[49] = 107,
	[20] = 39,
	[289] = 251,
	[279] = 242,
	[103] = 103,
	[358] = 322,
	[115] = 168,
	[201] = 107, // NOTE: syscall geteuid32 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[257] = 216,
	[52] = 166,
	[161] = 148,
	[126] = -1, // ia32 only: sigprocmask
	[322] = 283,
	[365] = 55,
	[175] = 14,
	[10] = 87,
	[89] = -1, // ia32 only: readdir
	[242] = 204,
	[413] = -1, // ia32 only: pselect6_time64
	[15] = 90,
	[350] = 313,
	[308] = 270,
	[157] = 145,
	[19] = 8,
	[186] = 131,
	[121] = 171,
	[99] = 137,
	[198] = -1, // ia32 only: lchown32
	[428] = 428,
	[450] = 450,
	[243] = 205,
	[407] = -1, // ia32 only: clock_nanosleep_time64
	[293] = 255,
	[281] = 244,
	[305] = 267,
	[253] = 212,
	[442] = 442,
	[166] = -1, // ia32 only: vm86
	[69] = -1, // ia32 only: ssetmask
	[1] = 60,
	[338] = 300,
	[148] = 75,
	[153] = 152,
	[176] = 127,
	[369] = 44,
	[12] = 80,
	[433] = 433,
	[105] = 36,
	[405] = -1, // ia32 only: clock_adjtime64
	[264] = 227,
	[219] = 28,
	[109] = -1, // ia32 only: olduname
	[287] = 249,
	[333] = 295,
	[421] = -1, // ia32 only: rt_sigtimedwait_time64
	[267] = 230,
	[283] = 246,
	[376] = 325,
	[125] = 10,
	[136] = 135,
	[229] = 191,
	[177] = 128,
	[359] = 41,
	[272] = -1, // ia32 only: fadvise64_64
	[429] = 429,
	[423] = -1, // ia32 only: sched_rr_get_interval_time64
	[185] = 126,
	[207] = -1, // ia32 only: fchown32
	[209] = 118, // NOTE: syscall getresuid32 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[192] = 9, // NOTE: syscall mmap2 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[163] = 25,
	[165] = 118,
	[59] = -1, // ia32 only: oldolduname
	[133] = 81,
	[432] = 432,
	[154] = 142,
	[321] = 282,
	[361] = 49,
	[141] = 78,
	[416] = -1, // ia32 only: io_pgetevents_time64
	[87] = 167,
	[113] = -1, // ia32 only: vm86old
	[248] = 209,
	[294] = 256,
	[430] = 430,
	[23] = 105,
	[441] = 441,
	[237] = 199,
	[411] = -1, // ia32 only: timerfd_settime64
	[310] = 272,
	[120] = 56,
	[328] = 290,
	[447] = 447,
	[335] = 297,
	[370] = 46,
	[309] = 271,
	[448] = 448,
	[375] = 324,
	[97] = 141,
	[70] = 113,
	[122] = 63,
	[252] = 231,
	[110] = 172,
	[117] = -1, // ia32 only: ipc
	[75] = 160,
	[91] = 11,
	[5] = 2,
	[384] = 158,
	[348] = 311,
	[46] = 106,
	[228] = 190,
	[455] = 455,
	[296] = 258,
	[158] = 24,
	[208] = 117, // NOTE: syscall setresuid32 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[124] = 159,
	[435] = 435,
	[444] = 444,
	[104] = 38,
	[16] = 94,
	[241] = 203,
	[377] = 326,
	[180] = 17,
	[443] = 443,
	[14] = 133,
	[82] = 23,
	[366] = 54,
	[284] = 247,
	[307] = 269,
	[431] = 431,
	[90] = 9,
	[181] = 18,
	[36] = 162,
	[217] = 155,
	[172] = 157,
	[334] = 296,
	[420] = -1, // ia32 only: semtimedop_time64
	[25] = -1, // ia32 only: stime
	[73] = -1, // ia32 only: sigpending
	[142] = -1, // ia32 only: _newselect
	[63] = 33,
	[64] = 110,
	[179] = 130,
	[280] = 243,
	[29] = 34,
	[371] = 45,
	[51] = 163,
	[256] = 232,
	[331] = 293,
	[315] = 276,
	[24] = 102,
	[386] = 334,
	[79] = 164,
	[301] = 263,
	[220] = 217,
	[144] = 26,
	[213] = 105, // NOTE: syscall setuid32 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[409] = -1, // ia32 only: timer_settime64
	[193] = -1, // ia32 only: truncate64
	[247] = 208,
	[66] = 112,
	[268] = -1, // ia32 only: statfs64
	[276] = 238,
	[195] = 4, // NOTE: syscall stat64 unmapped on x86_64, forcefully mapped to compatible syscall. See syscalls-bumper bumpIA32to64Map() call.
	[316] = 278,
};

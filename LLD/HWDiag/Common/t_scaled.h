#ifndef T_SCALED
#define T_SCALED
/*****************************************************************************
 *
 * (c) 1997 General Motors Corporation, all rights reserved
 *
 *  Description:
 *
 *  This file contains ECEO global data types.  These data types are
 *  defined with units in terms of fixed point data types defined in
 *  t_fixed.h.
 *
 * This file was created by Bill Debs in June 1994.
 *
 *****************************************************************************
 *
 * Initial Module Info:
 * %created_by:    vzp48z %
 * %date_created:  Wed Mar 19 09:46:42 2008 %
 *
 * Current Module Info:
 * %full_name:   mt20u2#10/incl/t_scaled.h/1 %
 * %version:     1 %
 * %derived_by:  vzp48z %
 *
 *****************************************************************************/

/* * * * * * * * * * * * * * * * * * * * *
 * electrical quantities                 *
 * * * * * * * * * * * * * * * * * * * * */

/*
 * current (amps)
 */

/* power-of-two range: [0, 4) */
typedef FIXED_UW_14 T_AMPS;
#define V_AMPS(val)  (WORD)((val)*16384)
#define S_AMPS 14

/* power-of-two range: [-2, 2) */
typedef FIXED_SW_14 T_AMPS_DIFF;
#define V_AMPS_DIFF(val)  (INTEGER)((val)*16384)
#define S_AMPS_DIFF 14


/*
 * potential (volt)
 */

/* power-of-two range: [-32, 32) */
typedef FIXED_SW_10 T_VOLT;
#define V_VOLT(val)  (INTEGER)((val)*1024)
#define S_VOLT 10

/* power-of-two range: [-2048, 2048) */
typedef FIXED_SW_04 T_MILLIVOLT;
#define V_MILLIVOLT(val)  (INTEGER)((val)*16)
#define S_MILLIVOLT 4

/*
 *  resistance (ohms)
 */

/* power-of-two range: [0, 524288) */
typedef FIXED_UM_05 T_OHM;
#define V_OHM(val)  (LONGWORD)((val)*32)
#define S_OHM 5

/* * * * * * * * * * * * * * * * * * * * *
 * units of force, energy, power         *
 * * * * * * * * * * * * * * * * * * * * */

/*
 * pressure (in kilopascals)
 */

/* power-of-two range: [0, 256) */
typedef FIXED_UW_08 T_KPAa;
#define V_KPAa(val)  (WORD)((val)*256)
#define S_KPAa 8

/* power-of-two range: [-256, 256) */
typedef FIXED_SW_07 T_KPA_DIFF;
#define V_KPA_DIFF(val)  (INTEGER)((val)*128)
#define S_KPA_DIFF 7

/* power-of-two range: [0, 4096) */
typedef FIXED_UW_04 T_KPAb;
#define V_KPAb(val)  (WORD)((val)*16)
#define S_KPAb 4

/* power-of-two range: [-2048, 2048) */
typedef FIXED_SW_04 T_KPAc;
#define V_KPAc(val)  (INTEGER)((val)*16)
#define S_KPAc 4

/* power-of-two range: [0, 8) */
typedef FIXED_UW_13 T_KPA_NEWTONMETER;
#define V_KPA_NEWTONMETER(val)  (WORD)((val)*8192)
#define S_KPA_NEWTONMETER 13

/* power-of-two range: [0, 4096) */
typedef FIXED_UW_04 T_KPA_SECa;
#define V_KPA_SECa(val)  (WORD)((val)*16)
#define S_KPA_SECa 4

/* power-of-two range: [-2048, 2048) */
typedef FIXED_SW_04 T_KPA_SECb;
#define V_KPA_SECb(val)  (INTEGER)((val)*16)
#define S_KPA_SECb 4

/* old pressure */
/* power-of-two range: [-128, 128) */
typedef FIXED_SW_08 T_PSI;
#define V_PSI(val)  (INTEGER)((val)*256)
#define S_PSI 8

/*
 * moment of inertia (Kg*m^2)
 */
/* power-of-two range: [0, 1) */
typedef FIXED_UW_16   T_KG_M2;
#define V_KG_M2(val)  (WORD)((val)*65536)
#define S_KG_M2 16


/* * * * * * * * * * * * * * * * * * * * *
 * angle                                 *
 * * * * * * * * * * * * * * * * * * * * */

/* power-of-two range: [-256, 256) */
typedef FIXED_SW_07 T_ANGLEa;
#define V_ANGLEa(val)  (INTEGER)((val)*128)
#define S_ANGLEa 7

/* power-of-two range: [-1024, 1024) */
typedef FIXED_SW_05 T_ANGLEb;
#define V_ANGLEb(val)  (INTEGER)((val)*32)
#define S_ANGLEb 5

/* power-of-two range: [0, 256] */
typedef FIXED_UW_08 T_ANGLEc;
#define V_ANGLEc(val)  (WORD)((val)*256)
#define S_ANGLEc 8

/* power-of-two range: [-256, 256) */
typedef FIXED_SW_07 T_ANGLE_DIFF;
#define V_ANGLE_DIFF(val)  (INTEGER)((val)*128)
#define S_ANGLE_DIFF 7

/* * * * * * * * * * * * * * * * * * * * *
 * temperature derivations               *
 * * * * * * * * * * * * * * * * * * * * */

/* degrees celsius */
/* power-of-two range: [-256, 256) */
typedef FIXED_SW_07 T_DEG_Ca;
#define V_DEG_Ca(val)  (INTEGER)((val)*128)
#define S_DEG_Ca 7

/* degrees celsius (required range = [-40, 1500]) */
/* power-of-two range: [-2048, 2048) */
typedef FIXED_SW_04 T_DEG_Cb;
#define V_DEG_Cb(val)  (INTEGER)((val)*16)
#define S_DEG_Cb 4

/*
 * temperature rate of change (change in
 * temperature per minute
 */
/* power-of-two range: [-32, 32) */
typedef FIXED_SW_10 T_DEG_C_MIN;
#define V_DEG_C_MIN(val)  (INTEGER)((val)*1024)
#define S_DEG_C_MIN 10

/*
 * degrees kelvin
 */
/* power-of-two range: [-512, 512) */
typedef FIXED_SW_06 T_DEG_Ka;
#define V_DEG_Ka(val)  (INTEGER)((val)*64)
#define S_DEG_Ka 6

/* power-of-two range: [0, 2048) */
typedef FIXED_UW_05 T_DEG_Kb;
#define V_DEG_Kb(val)  (WORD)((val)*32)
#define S_DEG_Kb 5


/* * * * * * * * * * * * * * * * * * * * *
 * derivations of area                   *
 * * * * * * * * * * * * * * * * * * * * */

/* power-of-two range: [0, 8192) */
typedef FIXED_UW_03 T_MM2;
#define V_MM2(val)  (WORD)((val)*8)
#define S_MM2 3

/* * * * * * * * * * * * * * * * * * * * *
 * derivations of volume                 *
 * * * * * * * * * * * * * * * * * * * * */

/*
 * cubic millimeters
 */

/* power-of-two range: [0, 512) */
typedef FIXED_UW_07 T_MM3;
#define V_MM3(val)  (WORD)((val)*128)
#define S_MM3 7

/* power-of-two range: [-256, 256) */
typedef FIXED_SW_07 T_MM3_DIFF;
#define V_MM3_DIFF(val)  (INTEGER)((val)*128)
#define S_MM3_DIFF 7

/*
 * millimeters per cylinder
 */
/* power-of-two range: [-256, 256) */
typedef FIXED_SW_07 T_MM3_CYL;
#define V_MM3_CYL(val)  (INTEGER)((val)*128)
#define S_MM3_CYL 7

/*
 * liters
 */
/* power-of-two range: [0, 256) */
typedef FIXED_UW_08 T_LITERS;
#define V_LITERS(val)  (WORD)((val)*256)
#define S_LITERS 8

/* power-of-two range: [0, 1024) */
typedef FIXED_UW_06 T_MILLILITERS;
#define V_MILLILITERS(val)  (WORD)((val)*64)
#define S_MILLILITERS 6

/* * * * * * * * * * * * * * * * * * * * *
 * percent types and derivations         *
 * * * * * * * * * * * * * * * * * * * * */

/* power-of-two range: [0, 8192) - resolution 0.0001907348633 % per bit */
typedef FIXED_UL_19 T_PERCENT_0_8192;
#define V_PERCENT_0_8192(val)  (LONGWORD)((val)*5242.88)
#define S_PERCENT_0_8192 19

/* power-of-two range: [0, 2) - resolution 0.003051757812 % per bit */
typedef FIXED_UW_15 T_PERCENTa;
#define V_PERCENTa(val)  (WORD)((val)*327.68)
#define S_PERCENTa 15

/* power-of-two range: [-2, 2) */
typedef FIXED_SW_14 T_PERCENT_DIFFa;
#define V_PERCENT_DIFFa(val)  (INTEGER)((val)*163.84)
#define S_PERCENT_DIFFa 14

/* power-of-two range: [0, 1) - resolution 0.001525878906 % per bit */
typedef FIXED_UW_16 T_PERCENTb;
#define V_PERCENTb(val)  (WORD)((val)*655.36)
#define S_PERCENTb 16

/* power-of-two range: [0, .5) - resolution 0.0007629394531 % per bit */
typedef FIXED_UW_17 T_PERCENT_0_50;
#define V_PERCENT_0_50(val)  (WORD)((val)*1310.72)
#define S_PERCENT_0_50 17

/* power-of-two range: [0, .25) - resolution 0.0003814697266 % per bit */
typedef FIXED_UW_18 T_PERCENT_0_25;
#define V_PERCENT_0_25(val)  (WORD)((val)*2621.44)
#define S_PERCENT_0_25 18

/* power-of-two range: [0, .125) - resolution 0.0001907348633 % per bit */
typedef FIXED_UW_19 T_PERCENT_0_12p5;
#define V_PERCENT_0_12p5(val)  (WORD)((val)*5242.88)
#define S_PERCENT_0_12p5 19

/* power-of-two range: [0, .0625) - resolution 0.00009536743 % per bit */
typedef FIXED_UW_20 T_PERCENT_0_6p25;
#define V_PERCENT_0_6p25(val)  (WORD)((val)*10485.76)
#define S_PERCENT_0_6p25 20

/* power-of-two range: [-.0625, .0625) - resolution 0.00009536743 % per bit */
typedef FIXED_SW_19 T_PERCENT_N6p25_6p25;
#define V_PERCENT_N6p25_6p25(val)  (WORD)((val)*5242.88)
#define S_PERCENT_N6p25_6p25 19

/* power-of-two range: [-1, 1) */
typedef FIXED_SW_15 T_PERCENT_DIFFb;
#define V_PERCENT_DIFFb(val)  (INTEGER)((val)*327.68)
#define S_PERCENT_DIFFb 15

/* power-of-two range: [-32, 32) */
typedef FIXED_SW_10 T_PERCENT_SEC;
#define V_PERCENT_SEC(val)  (INTEGER)((val)*10.24)
#define S_PERCENT_SEC 10

/*
 * gain ratio (percent per kilopascal)
 */
/* power-of-two range: [0, 2) */
typedef FIXED_UW_15 T_PERCENT_PER_KPA;
#define V_PERCENT_PER_KPA(val)  (WORD)((val)*327.68)
#define S_PERCENT_PER_KPA 15


/* * * * * * * * * * * * * * * * * * * * *
 * some generic ratio types              *
 * * * * * * * * * * * * * * * * * * * * */

/* power-of-two range: [0, 1) */
typedef FIXED_UW_16 T_RATIO_0_1;
#define V_RATIO_0_1(val)  (WORD)((val)*65536)
#define S_RATIO_0_1 16

/* power-of-two range: [0, 2) */
typedef FIXED_UW_15 T_RATIO_0_2;
#define V_RATIO_0_2(val)  (WORD)((val)*32768)
#define S_RATIO_0_2 15

/* power-of-two range: [0, 4) */
typedef FIXED_UW_14 T_RATIO_0_4;
#define V_RATIO_0_4(val)  (WORD)((val)*16384)
#define S_RATIO_0_4 14

/* power-of-two range: [-2, 2) */
typedef FIXED_SW_14 T_RATIO_N2_2;
#define V_RATIO_N2_2(val)  (INTEGER)((val)*16384)
#define S_RATIO_N2_2 14

/* power-of-two range: [-4, 4) */
typedef FIXED_SW_13 T_RATIO_N4_4;
#define V_RATIO_N4_4(val)  (INTEGER)((val)*8192)
#define S_RATIO_N4_4 13

/* power-of-two range: [0, 8) */
typedef FIXED_UW_13 T_RATIO_0_8;
#define V_RATIO_0_8(val)  (WORD)((val)*8192)
#define S_RATIO_0_8 13

/* power-of-two range: [0, 16) */
typedef FIXED_UW_12 T_RATIO_0_16;
#define V_RATIO_0_16(val)  (WORD)((val)*4096)
#define S_RATIO_0_16 12

/* power-of-two range: [0, 32) */
typedef FIXED_UW_11 T_RATIO_0_32;
#define V_RATIO_0_32(val)  (WORD)((val)*2048)
#define S_RATIO_0_32 11

/* power-of-two range: [0, 64) */
typedef FIXED_UW_10 T_RATIO_0_64;
#define V_RATIO_0_64(val)  (WORD)((val)*1024)
#define S_RATIO_0_64 10

/* power-of-two range: [0, 128) */
typedef FIXED_UW_09 T_RATIO_0_128;
#define V_RATIO_0_128(val)  (WORD)((val)*512)
#define S_RATIO_0_128 9

/* power-of-two range: [0, 256) */
typedef FIXED_UW_08 T_RATIO_0_256;
#define V_RATIO_0_256(val)  (WORD)((val)*256)
#define S_RATIO_0_256 8

/* power-of-two range: [0, 512) */
typedef FIXED_UW_07 T_RATIO_0_512;
#define V_RATIO_0_512(val)  (WORD)((val)*128)
#define S_RATIO_0_512 7

/* power-of-two range: [0, 1024) */
typedef FIXED_UW_06 T_RATIO_0_1024;
#define V_RATIO_0_1024(val)  (WORD)((val)*64)
#define S_RATIO_0_1024 6

/* power-of-two range: [-1024, 1024) */
typedef FIXED_UW_05 T_RATIO_N1024_1024;
#define V_RATIO_N1024_1024(val)  (WORD)((val)*32)
#define S_RATIO_N1024_1024 5

/* power-of-two range: [0, 2048) */
typedef FIXED_UW_05 T_RATIO_0_2048;
#define V_RATIO_0_2048(val)  (WORD)((val)*32)
#define S_RATIO_0_2048 5

/* power-of-two range: [0, 4096) */
typedef FIXED_UW_04 T_RATIO_0_4096;
#define V_RATIO_0_4096(val)  (WORD)((val)*16)
#define S_RATIO_0_4096 4

/* power-of-two range: [0, 8192) */
typedef FIXED_UW_03 T_RATIO_0_8192;
#define V_RATIO_0_8192(val)  (WORD)((val)*8)
#define S_RATIO_0_8192 3

/* power-of-two range: [0, 16384) */
typedef FIXED_UW_02 T_RATIO_0_16384;
#define V_RATIO_0_16384(val)  (WORD)((val)*4)
#define S_RATIO_0_16384 2

/* power-of-two range: [0, 32768) */
typedef FIXED_UW_01 T_RATIO_0_32768;
#define V_RATIO_0_32768(val)  (WORD)((val)*2)
#define S_RATIO_0_32768 1

/* power-of-two range: [-32768, 32768) */
typedef FIXED_SW_00 T_RATIO_N32768_32767;
#define V_RATIO_N32768_32767(val)  (INTEGER)((val))
#define S_RATIO_N32768_32767 0


/* * * * * * * * * * * * * * * * * * * * *
 * time quantities and their derivations *
 * * * * * * * * * * * * * * * * * * * * */

/* power-of-two range: [0, 8192) */
typedef FIXED_UW_03 T_SECONDS;
#define V_SECONDS(val)  (WORD)((val)*8)
#define S_SECONDS 3

/* power-of-two range: [0, 64) */
typedef FIXED_UW_10 T_SECONDS_K;
#define V_SECONDS_K(val)  (WORD)((val)*1024)
#define S_SECONDS_K 10

/* power-of-two range: [-32, 32) */
typedef FIXED_SW_10 T_SECONDS_DIFF_K;
#define V_SECONDS_DIFF_K(val)  (INTEGER)((val)*1024)
#define S_SECONDS_DIFF_K 10

/* power-of-two range: [-4, 4) */
typedef FIXED_SW_13 T_SECONDS_N4_4;
#define V_SECONDS_N4_4(val)  (INTEGER)((val)*8192)
#define S_SECONDS_N4_4 13

/* power-of-two range: [0, 32], resolution=1/2048=0.00049 */
typedef FIXED_UW_11 T_MILLISECONDS_0_32;
#define V_MILLISECONDS_0_32(val) (WORD)((val)*2048)
#define S_MILLISECONDS_0_32 11

/* power-of-two range: [-32, 32], resolution=1/1024=0.00098 */
typedef FIXED_SW_10 T_MILLISECONDS_N32_32;
#define V_MILLISECONDS_N32_32(val)  (INTEGER)((val)*1024)
#define S_MILLISECONDS_N32_32 10

/* power-of-two range: [0, 512) */
typedef FIXED_UW_07 T_MILLISECONDS;
#define V_MILLISECONDS(val) (WORD)((val)*128)
#define S_MILLISECONDS 7

/* power-of-two range: [-256, 256) */
typedef FIXED_SW_07 T_MILLISECONDSa;
#define V_MILLISECONDSa(val) (INTEGER)((val)*128)
#define S_MILLISECONDSa 7

/* power-of-two range: [-256, 256) */
typedef FIXED_SW_07 T_MILLISECONDS_N256_256;
#define V_MILLISECONDS_N256_256(val) (INTEGER)((val)*128)
#define S_MILLISECONDS_N256_256 7

/* power-of-two range: [0, 524288) */
typedef FIXED_UM_05 T_MILLISECONDS_MED;
#define V_MILLISECONDS_MED(val) (MEDWORD)((val)*32)
#define S_MILLISECONDS_MED 5

/* power-of-two range: [0, 65536) */
typedef FIXED_UW_00 T_MICROSECONDS;
#define V_MICROSECONDS(val) (WORD)(val)
#define S_MICROSECONDS 0

/* power-of-two range: [0, 2048) */
typedef FIXED_UW_05 T_MICROSECONDSa;
#define V_MICROSECONDSa(val) (WORD)((val)*32)
#define S_MICROSECONDSa 5

/* power-of-two range: [0, 1048576) */
typedef FIXED_UM_04 T_MICROSECONDS_MED;
#define V_MICROSECONDS_MED(val) (MEDWORD)((val)*16)
#define S_MICROSECONDS_MED 4

/* power-of-two range: [-32768, 32767) */
typedef FIXED_SW_00 T_MICROSECONDS_N32768_32767;
#define V_MICROSECONDS_N32768_32767(val)  (INTEGER)((val))
#define S_MICROSECONDS_N32768_32767 0

/*
 * frequency in Hertz and MegaHertz
 */
/* power-of-two range: [0, 16384) */
typedef FIXED_UW_02 T_HERTZ;
#define V_HERTZ(val)  (WORD)((val)*4)
#define S_HERTZ 2

/* power-of-two range: [0, 1) */
typedef FIXED_UW_16 T_MEGAHERTZ;
#define V_MEGAHERTZ(val)  (WORD)((val)*65536)
#define S_MEGAHERTZ 16

/* * * * * * * * * * * * * * * * * * * * *
 * speeds                                *
 * * * * * * * * * * * * * * * * * * * * */

/*
 * rpm (speed, difference in speeds, acceleration)
 */
/* power-of-two range: [0, 8192) */
typedef FIXED_UW_03 T_RPMa;
#define V_RPMa(val)  (WORD)((val)*8)
#define S_RPMa 3

/* power-of-two range: [0, 32767) */
typedef FIXED_UW_01 T_RPMb;
#define V_RPMb(val)  (WORD)((val)*2)
#define S_RPMb 1

/* power-of-two range: [-4096, 4096) */
typedef FIXED_SW_03 T_RPM_DIFFa;
#define V_RPM_DIFFa(val)  (INTEGER)((val)*8)
#define S_RPM_DIFFa 3

/* power-of-two range: [-8192, 8192) */
typedef FIXED_SW_02 T_RPM_DIFFb;
#define V_RPM_DIFFb(val)  (INTEGER)((val)*4)
#define S_RPM_DIFFb 2

/* power-of-two range: [0, 65536) */
typedef FIXED_UL_16 T_RPM_LONG;
#define V_RPM_LONG(val)  (LONGWORD)(val*65536)
#define S_RPM_LONG 16

/* power-of-two range: [-32768, 32768) */
typedef FIXED_SL_16 T_RPM_DIFF_LONG;
#define V_RPM_DIFF_LONG(val)  (LONGINT)(val*65536)
#define S_RPM_DIFF_LONG 16

/* power-of-two range: [0, 8192) */
typedef FIXED_UW_03 T_RPM_0_8191;
#define V_RPM_0_8191(val)  (WORD)(val*8)
#define S_RPM_0_8191 3

/* power-of-two range: [-4096, 4096) */
typedef FIXED_SW_03 T_RPM_DIFF_N4096_4095;
#define V_RPM_DIFF_N4096_4095(val)  (INTEGER)(val*8)
#define S_RPM_DIFF_N4096_4095 3

/* power-of-two range: [0, 512)  resolution: 0.0078125 */
typedef FIXED_UW_07 T_RPM_0_512;
#define V_RPM_0_512(val)  (WORD)((val)*128)
#define S_RPM_0_512 7

/* power-of-two range: [0, 128) */
typedef FIXED_UW_09 T_RPS_0_128;
#define V_RPS_0_128(val)  (WORD)((val)*512)
#define S_RPS_0_128 9

/* power-of-two range: [0, 128) */
typedef FIXED_SW_07 T_RPS_N256_256;
#define V_RPS_N256_256(val)  (WORD)((val)*128)
#define S_RPS_N256_256 7

/*
 * acceleration
 */
/* power-of-two range: [-8192, 8192) */
typedef FIXED_SW_02 T_RPM_SEC;
#define V_RPM_SEC(val)  (INTEGER)((val)*4)
#define S_RPM_SEC 2

/* power-of-two range: [-32768, 32768) */
typedef FIXED_SW_00 T_RPM_SECb;
#define V_RPM_SECb(val)  (INTEGER)((val))
#define S_RPM_SECb 0

/* power-of-two range: [-512, 512) */
typedef FIXED_SW_06 T_RPM_SEC_N512_512;
#define V_RPM_SEC_N512_512(val)  (INTEGER)((val)*64)
#define S_RPM_SEC_N512_512 6

/* power-of-two range: [-512, 512) */
/* revolutions/second^2 */
typedef FIXED_SW_06 T_RPS_SEC_N512_512;
#define V_RPS_SEC_N512_512(val)  (INTEGER)((val)*64)
#define S_RPS_SEC_N512_512 6

/* power-of-two range: [-32768, 32768) */
typedef FIXED_SL_16 T_RPM_SEC_LONG;
#define V_RPM_SEC_LONG(val)  (LONGINT)((val)*65536)
#define S_RPM_SEC_LONG 16

/*
 * angular acceleration (radians/(second^2))
 */
/* power-of-two range: [-8192, 8192) */
typedef FIXED_SW_02 T_RAD_PER_SEC2;
#define V_RAD_PER_SEC2(val)  (INTEGER)((val)*4)
#define S_RAD_PER_SEC2 2

/*
 * gravity
 */
/* power-of-two range: [-4, 4) */
typedef FIXED_SW_13 T_GRAV;
#define V_GRAV(val)  (INTEGER)((val)*8192)
#define S_GRAV 13

/*
 * jerk
 */
/* power-of-two range: [-8192, 8192) */
typedef FIXED_SW_02 T_RPM_SEC_SEC;
#define V_RPM_SEC_SEC(val)  (INTEGER)((val)*4)
#define S_RPM_SEC_SEC 2

/* power-of-two range: [-32768, 32768) */
typedef FIXED_SL_16 T_RPM_SEC_SEC_LONG;
#define V_RPM_SEC_SEC_LONG(val)  (LONGINT)((val)*65536)
#define S_RPM_SEC_SEC_LONG 16

/*
 * kilometers per hour (speed, difference in
 * speed, acceleration);
 */

/* required range:     [0,460]  */
/* power-of-two range: [0, 512) */
typedef FIXED_UW_07 T_KPH;
#define V_KPH(val)  (WORD)((val)*128)
#define S_KPH 7

/* power-of-two range: [256, 256) */
typedef FIXED_SW_07 T_KPH_DIFF;
#define V_KPH_DIFF(val)  (INTEGER)((val)*128)
#define S_KPH_DIFF 7

/* power-of-two range: [-16, 16) */
typedef FIXED_SW_11 T_KPH_SEC;
#define V_KPH_SEC(val)  (INTEGER)((val)*2048)
#define S_KPH_SEC 11

/* * * * * * * * * * * * * * * * * * * * *
 * mass measurements                     *
 * * * * * * * * * * * * * * * * * * * * */

/* power-of-two range: [0, 8) */
typedef FIXED_UW_13 T_GRAMS;
#define V_GRAMS(val)  (WORD)((val)*8192)
#define S_GRAMS 13

/* power-of-two range: [0, 256) */
typedef FIXED_UW_08 T_GRAMSa;
#define V_GRAMSa(val)  (WORD)((val)*256)
#define S_GRAMSa 8

/* power-of-two range: [-256, 256) */
typedef FIXED_SW_07 T_GRAMS_DIFFa;
#define V_GRAMS_DIFFa(val)  (INTEGER)((val)*128)
#define S_GRAMS_DIFFa 7

/*
 * Mass Flow
 */
/* power-of-two range: [0, 512) */
typedef FIXED_UW_07 T_GRAMS_PER_SEC;
#define V_GRAMS_PER_SEC(val)  (WORD)((val)*128)
#define S_GRAMS_PER_SEC 7

/* power-of-two range: [-512, 512) */
typedef FIXED_SW_06 T_GRAMS_PER_SEC_DIFFa;
#define V_GRAMS_PER_SEC_DIFFa(val)  (WORD)((val)*64)
#define S_GRAMS_PER_SEC_DIFFa 6

/* power-of-two range: [-256, 256) */
typedef FIXED_SW_07 T_GRAMS_PER_SEC_DIFF;
#define V_GRAMS_PER_SEC_DIFF(val)  (INTEGER)((val)*128)
#define S_GRAMS_PER_SEC_DIFF 7

/* power-of-two range: [0, 1024) */
typedef FIXED_UW_06 T_GRAMS_CYL;
#define V_GRAMS_CYL(val)  (WORD)((val)*64)
#define S_GRAMS_CYL 6

/* power-of-two range: [0, 8192) */
typedef FIXED_UW_03 T_MILLIGRAMS;
#define V_MILLIGRAMS(val)  (WORD)((val)*8)
#define S_MILLIGRAMS 3

/* power-of-two range: [0, 8) */
typedef FIXED_UW_13 T_MILLIGRAMSa;
#define V_MILLIGRAMSa(val)  (WORD)((val)*8192)
#define S_MILLIGRAMSa 13

/* power-of-two range: [-4096, 4096) */
typedef FIXED_SW_03 T_MILLIGRAMS_DIFF;
#define V_MILLIGRAMS_DIFF(val)  (INTEGER)((val)*8)
#define S_MILLIGRAMS_DIFF 3

/* * * * * * * * * * * * * * * * * * * * *
 * distance measurements                 *
 * * * * * * * * * * * * * * * * * * * * */

/*
 * actual requirements are range of
 * [0,25000] km, with minimum resolution
 * of 1 km
 */
/* power-of-two range: [0, 65536) */
typedef FIXED_UW_00 T_KILOMETERSa;
#define V_KILOMETERSa(val) (WORD)(val)
#define S_KILOMETERSa 0

/*
 * actual requirements are range of
 * [0,327675] km, with minimum resolution
 * of 5 km
 */
/* power-of-two range: [0, 524288) */
typedef FIXED_UM_05 T_KILOMETERSb;
#define V_KILOMETERSb(val)  (LONGWORD)((val)*32)
#define S_KILOMETERSb 5


/*
 * actual requirements are range of
 * [0,65535]m, with minimum resolution
 * of 1m
 */
/* power-of-two range: [0, 65536) */
typedef FIXED_UW_00 T_METER;
#define V_METER(val)  (WORD)(val)
#define S_METER 0

/* * * * * * * * * * * * * * * * * * * * *
 * used for filter routines              *
 * * * * * * * * * * * * * * * * * * * * */
/*
 * used by lag filter library routines
 */

/* power-of-two range: [0, 1) */
typedef FIXED_UW_16 T_FILTER;
#define V_FILTER(val)  (WORD)((val)*65536)
#define S_FILTER 16

/* power-of-two range: [0, 16) */
typedef FIXED_UW_12  T_KALMAN_GAIN;
#define V_KALMAN_GAIN(val)  (WORD)((val)*4096)
#define S_KALMAN_GAIN  12

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Count Measurement types. Counts could have been done with FIXED_UW_00 a   *
 * count is a fixed point number AND it is INTEGRAL.  However, BYTE and WORD *
 * were selected as the base data type because counts are common and data    *
 * size selection was needed                                                 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* range: [0, 255] */
typedef BYTE               T_COUNT_BYTE;
#define V_COUNT_BYTE(val)  (BYTE)(val)         /* no scaling is needed       */
#define S_COUNT_BYTE       0                   /* Count is integral          */

/* range: [-128, 127] */
typedef SHORTINT           T_COUNT_BYTE_N128_127;
#define V_COUNT_BYTE_N128_127(val)  (SHORTINT)(val)
#define S_COUNT_BYTE_N128_127 0

/****************************************************************************
 The following type definition is a redundant definition for T_COUNT_BYTE.
 It may be used by dual-pathed software to promote diversity.
 ****************************************************************************/

/* range: [0, 127], note: the LSB is never used because  */
/*   val is always a whole number                        */
typedef BYTE                    T_REDN_COUNT_BYTE;
#define V_REDN_COUNT_BYTE(val)  ((BYTE)(val*2))
#define S_REDN_COUNT_BYTE       1

/* range: [0, 65535] */
typedef WORD               T_COUNT_WORD;
#define V_COUNT_WORD(val)  (WORD)(val)         /* no scaling is needed       */
#define S_COUNT_WORD       0                   /* Count is integral          */

/****************************************************************************
 The following type definition is a redundant definition for T_COUNT_WORD.
 It may be used by dual-pathed software to promote diversity.
 ****************************************************************************/

/* range: [0, 32767], note: the LSB is never used because  */
/*   val is always a whole number                          */
typedef FIXED_UW_01             T_REDN_COUNT_WORD;
#define V_REDN_COUNT_WORD(val)  ((WORD)(val*2))   /* val must be an integer */
#define S_REDN_COUNT_WORD       1

/* range: [0, 4294967295] */
typedef LONGWORD           T_COUNT_LONG;
#define V_COUNT_LONG(val)  (LONGWORD)(val)     /* no scaling is needed       */
#define S_COUNT_LONG       0                   /* Count is integral          */

/* range: [0, 16777215] */
typedef MEDWORD            T_COUNT_MED;
#define V_COUNT_MED(val)   (MEDWORD)(val)     /* no scaling is needed       */
#define S_COUNT_MED        0                   /* Count is integral          */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Used when two variables of the same unknown data      *
 * type are used in a math equation (system macros and   *
 * functions)                                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#define S_NONE  0


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                                       *
 * These data type names are obsolete and should not be used in any new coding.          *
 * Please use the appropriate replacement data type instead.                             *
 *                                                                                       *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* resistance (ohms) */
typedef FIXED_UL_06 T_OHM_OLD;
#define V_OHM_OLD(val)  (LONGWORD)(val*64)
#define S_OHM_OLD 6

/* Range: [0, 256] */
typedef FIXED_UW_08 T_KPA;
#define V_KPA(val)  (WORD)(val*256)
#define S_KPA 8

/* Range: [0, 16] */
typedef FIXED_UW_12 T_KPA_0_16;
#define V_KPA_0_16(val) (WORD)(val*4096)
#define S_KPA_0_16  12

/* Range: [0, 64] */
typedef FIXED_UW_10 T_KPA_0_64;
#define V_KPA_0_64(val) (WORD)(val*1024)
#define S_KPA_0_64 10

/* Range: [0, 128] */
typedef FIXED_UW_09 T_KPA_0_128;
#define V_KPA_0_128(val) (WORD)(val*512)
#define S_KPA_0_128 9

/* Range: [0, 2048] */
typedef FIXED_UW_05 T_KPA_0_2048;
#define V_KPA_0_2048(val)  (WORD)(val*32)
#define S_KPA_0_2048 5

/* Range: [0, 4096] */
typedef FIXED_UW_04 T_KPA_0_4096;
#define V_KPA_0_4096(val)  (WORD)(val*16)
#define S_KPA_0_4096 4

/* Range: [-64, 64] */
typedef FIXED_SW_09 T_KPA_N64_64;
#define V_KPA_N64_64(val)  (INTEGER)(val*512)
#define S_KPA_N64_64 9

/* Range: [-2048, 2048] */
typedef FIXED_SW_04 T_KPA_N2048_2047;
#define V_KPA_N2048_2047(val)  (INTEGER)(val*16)
#define S_KPA_N2048_2047 4

/* Range: [0, 256] */
typedef FIXED_UW_08 T_KPA_SEC_0_256;
#define V_KPA_SEC_0_256(val)  (WORD)(val*256)
#define S_KPA_SEC_0_256 8
typedef FIXED_UW_04 T_KPA_SEC_0_4096;
#define V_KPA_SEC_0_4096(val)  (WORD)(val*16)
#define S_KPA_SEC_0_4096 4

typedef FIXED_SW_04 T_KPA_SEC_N2048_2047;
#define V_KPA_SEC_N2048_2047(val)  (INTEGER)(val*16)
#define S_KPA_SEC_N2048_2047 4

/* degrees celsius (range = [-256,255]) */
typedef FIXED_SW_07 T_DEG_C;
#define V_DEG_C(val)  (INTEGER)(val*128)
#define S_DEG_C 7

/* degrees celsius (range = [-40, 1500]) */
typedef FIXED_SW_04 T_DEG_C_HIGH_RANGE;
#define V_DEG_C_HIGH_RANGE(val)  (INTEGER)(val*16)
#define S_DEG_C_HIGH_RANGE 4

typedef FIXED_UW_15 T_PERCENT;
#define V_PERCENT(val)  (WORD)(val*327.68)
#define S_PERCENT 15

typedef FIXED_SW_14 T_PERCENT_DIFF;
#define V_PERCENT_DIFF(val)  (INTEGER)(val*163.84)
#define S_PERCENT_DIFF 14

typedef FIXED_UW_16 T_PERCENT_0_100;
#define V_PERCENT_0_100(val)  (WORD)(val*655.36)
#define S_PERCENT_0_100 16

typedef FIXED_SW_15 T_PERCENT_0_100_DIFF;
#define V_PERCENT_0_100_DIFF(val)  (INTEGER)(val*327.68)
#define S_PERCENT_0_100_DIFF 15

typedef FIXED_UL_13 T_MILLISECONDS_LONG;
#define V_MILLISECONDS_LONG(val) (LONGWORD)(val*8192)
#define S_MILLISECONDS_LONG 13

typedef FIXED_UL_12 T_MICROSECONDS_LONG;
#define V_MICROSECONDS_LONG(val) (LONGWORD)(val*4096)
#define S_MICROSECONDS_LONG 12

/* we need to get rid of this; only used in an engine file,
 * for a constant value
 */
typedef FIXED_UL_00 T_MICROSECONDS_PER_MINUTE;
#define V_MICROSECONDS_PER_MINUTE(val) (LONGWORD)(val)
#define S_MICROSECONDS_PER_MINUTE 0

typedef INTEGER T_TIME_DIFF;
#define V_TIME_DIFF(val) (INTEGER)(val*320)
#define S_TIME_DIFF 0

/* Word timer range 0.0 to 204.79685 by 0.003125 Seconds */
/* defined in "t_scaled.h" typedef WORD     T_TIME_WORD; */
typedef WORD T_TIME_WORD;
#define V_TIME_WORD(val) (WORD)(val*320)
#define S_TIME_WORD 0

typedef BYTE T_TIME_BYTE;

/* Long timer range 0.0 to 13421772.79685 by 0.003125 Seconds */
/*                   about 155.344 Days                       */

typedef LONGWORD T_TIME_LONG;
#define V_TIME_LONG(val)  (LONG)(val*320)
#define S_TIME_LONG     0

typedef MEDWORD T_TIME_MED;
#define V_TIME_MED(val)  (MEDWORD)(val*320)
#define S_TIME_MED      0

/* rpm (speed, difference in speeds, acceleration) */
typedef FIXED_UW_03 T_RPM;
#define V_RPM(val)  (WORD)(val*8)
#define S_RPM 3

typedef FIXED_SW_03 T_RPM_DIFF;
#define V_RPM_DIFF(val)  (INTEGER)(val*8)
#define S_RPM_DIFF 3

/* miles per hour (speed, difference in speed, acceleration) */
typedef FIXED_UW_08 T_MPH;
#define V_MPH(val)  (WORD)(val*256)
#define S_MPH 8

typedef FIXED_SW_08 T_MPH_DIFF;
#define V_MPH_DIFF(val)  (INTEGER)(val*256)
#define S_MPH_DIFF 8

typedef FIXED_SW_10 T_MPH_SEC;
#define V_MPH_SEC(val)  (INTEGER)(val*1024)
#define S_MPH_SEC 10

typedef FIXED_SW_07 T_ANGLE;
#define V_ANGLE(val)  (INTEGER)(val*128)
#define S_ANGLE 7

/* degrees kelvin (range = [-512,511]) */
typedef FIXED_SW_06 T_DEG_K;
#define V_DEG_K(val)  (INTEGER)(val*64)
#define S_DEG_K 6

#endif

/******************************************************************************
*
* Revision History:
*
* Rev.  YYMMDD Who RSM# Changes
* ----- ------ --- ---- -------------------------------------------------------
* 1.0          tgi      replaced bitwise exclusive OR operations with a number.
* 1.1   950204 rca      added new data type: T_KPA_0_4096 for use by
*                        transmission group
* 1.2   950210 rca      added new types, cleaned up file, added comments
* 1.3,4 950210 rca      Added T_PERCENT_PER_KPA, added some comments.
* 1.5   950213 rca      added t_kalman_gain
* 1.6   950220 rca      added these new variables per SWallace's request:
*                        T_KPA_N2048_2048, T_RATIO_N32768_32767.
*                       changed type of T_KPA_NEWTONMETER to FIXED_UW_13.
* 1.7   950221 rca      added jerk and temperature rate of change types
* 1.8   950224 rca      added t_percent_0_100
* 1.9   950228 tgi      added T_COUNT_BYTE and T_COUNT_WORD
*                       Changed T_KPA_DIFF from FIXED_UL_07 to FIXED_UL_08
*                       Changed T_KPH from FIXED_UL_09 to FIXED_UL_08
* 1.10  950302 tgi      Changed T_KPH for greater range
* 1.11  950303 tgi      Changed T_MICROSECONDS_LONG from _00 to _12 to allow
*                        for required resolution
* 1.12  950303 tgi      oops, forgot to change S_MICROSECONDS_LONG from 0 to 12
*                        for last change
* 1.13  950313 tgi      Added typedef LONGWORD T_COUNT_LONG
* 1.14  950412 tgi      changed V_COUNT_LONG cast from WORD to LONGWORD
* 1.15  950412 tgi      Changed NEWTONMETER from _13 to _03 for Transmission
*                        Torque
* 1.16  950614 ajo      Changed T_OHM from 13 decimal places to 6 decimal
*                        places.
* 1.16a 950617 pra      This version has been created to avoid ENGN subsystem
*                        errors due to the deletion of some data types in
*                        versions 1.17 and 1.18. This version should be
*                        eventually merged with the mainline versions.
* 1.20  950801 dcr      Added data type T_SECONDS_DIFF_K.
* 1.21  950804 mlu      Corrected (val) multiplier for types T_PERCENT_SEC and
*                        T_PERCENT_PER_KPA to reflect percentage values.
* 2.7   951121 rca      Parenthesized input values for safety in macro
*                        expansions
*                       Applied new naming convention to T_KPA, T_PERCENT data
*                        types
*                       Made T_MILLISECONDS_LONG, T_MICROSECONDS_LONG,
*                        T_MICROSECONDS_PER_MINUTE, all T_TIME types, and all
*                        T_MPH types obsolete types
* 2.8   951130 rca      Corrected range of T_ANGLEb
* 2.9   951216 rca      Corrected range of T_DEG_Kb
* 2.10  951216 rca      Added two T_KILOMETER data types
* 2.11  960105 rca      Altered T_PERCENT_SEC data type (requirement changed
*                        per transmission group)
* 2.12  960108 rca      Added T_MM2 data type (requirement from engine group)
* 2.13  960108 rca      Added T_MILLIGRAMS data type (requirement from engine
*                        group)
* 2.14  960109 rca      Added T_MILLIGRAMS_DIFF data type (requirement from
*                        engine group)
* 2.15  960116 rca      Added T_MILLIGRAMSa and T_MILLISECONDSa (engine group)
* 2.16  960212 rca      Fixed V_DEG_C_HIGH_RANGE casting
*                       Fixed V_DEG_C_MIN casting
*                       Fixed V_MILLIGRAMS_DIFF casting
* 2.17  960212 rca      Added T_GRAMSa and T_GRAMS_DIFFa data types
* 2.18  960215 rca      Added T_LITERS data type
* 2.19
* 2.20  960321 rca      Added T_NEWTONMETERb data type
* 2.21  960411 rca      Added T_MILLIVOLTS.  EACR# Z00339.
*                       Added comments with each (current) data type to show
*                        actual power-of-two range.
* 2.22  960514 rca      Added the following data types:
*                        T_METER (EACR# Z00784).
*                        T_KG_M2 (EACR# Z00702).
*                        T_RAD_PER_SEC2 (EACR# Z00703).
*                        T_GRAMS_PER_SEC_DIFF (EACR# Z00798).
* 5     981209 gzd      New Files from level 24 integration
* 7     981209 gzd      New Files from level 26 integration
*
* -- Core Revision History: --
*
* 1.3   981012 arr 0105 Removed T_NEWTONMETER as there already exists a
*                       T_NEWTON_METER.
* 1.4   990204 arr 0149 Merged in LECC node 375 containing the following
*                       change(s):
*       971104 blt 0249 API cleanup
*       981009 blt 0679 ETC Dual-path: added T_REDN_COUNT_WORD,
*                       T_REDN_COUNT_BYTE
*       981207 woz 0764 Added T_MICROSECONDSa.
* 1.5   990805 ajk 0302 Merged in Proto2 node 050 (cp2050f0) containing the
*                        following change(s):
*       990514 dac 0955 Added T_RATIO_N2_2.
* 1.6   990421 as  0202 Added T_KPA_0_128 and T_KPA_SEC_0_256.
*       990706 as  0256 Added T_KPA_0_16
* 1.7   990713 as  0273 Added T_KPA_0_64 and T_KPA_N64_64
*
* core_dc2 Revision History:
*
* 1.1   000525 woz 0822 Initial EMSDC2 Excalibur Release based on Core Node 32.
* 1.2   000705 jbn 1007 Added T_MICROSECONDS_N32768_32767
*       000805 as  1007 Added T_MILLISECONDS_0_32, T_COUNT_BYTE_N128_127
* 1.3   001127 jbn 0819 Added T_RPMb.
* 1.4   010109 as  1222 Added T_MILLISECONDS_N32_32
* 1.6   010326 as  1349 Added T_MEGAHERTZ
* 1.7   010322 hdb 1429 Added longs for RPM, RPM_SEC and RPM_SEC_SEC
*       010328 hdb      Add RPM_SECb as WORD
* 1.8   011004 mhb 0992 Created new data type T_ANGLEc .
* 1.9   020214 kan 1642 Task 2019. Modified for transmission subsystem merge.
*                        Added the following datatypes:
*                        longs for RPM, RPM_SEC and RPM_SEC_SEC
*                        RPM_0_512
*                        RPM_SEC_N512_512
*                        T_RPS_0_128
*                        T_RPS_N512_512
*                        T_RATIO_N1024_1024
* 1.10  021016  ng 2156 Added T_GRAMS_PER_SEC_DIFFa.
* 1.11  021030 kan 2027 Transmission software merge:
*              rag 1947 Tasking Compatible:
*                        Removed redefinition of T_RPM_0_8191,
*                               T_RPM_DIFF_N4096_4095
*              hdb 1952 Increase resolution of Duty Cycle increment values
*                         and expand calculations using these values
*                         Add type definitions for T_PERCENT_0_50, 
*                            T_PERCENT_0_25, T_PERCENT_0_12p5,
*                            T_PERCENT_0_6p25, T_PERCENT_0_8192(longword)
* 5.1   021210 hdb 2299 Add T_KPA_0_2048 for line pressure control
*
******************************************************************************/
/*
* $Source: common@brighton.tcb:core_dc2:t_scaled.h $
* $Revision: 1.8 $
# $Author: brighton.tcb:/users/c23mhb/dsds/core_85:c23mhb $
*/

/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/U/Documents/UNIVERSIDAD/Semestre 9/Arquitectura de procesadores/ProyectoFinalArquitecturaProcesadores/Main.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1774854872_3212880686_p_0(char *t0)
{
    char t13[16];
    char t15[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = (1 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = (5 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB7;

LAB8:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (1 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB9;

LAB10:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (0 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB11;

LAB12:
LAB3:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    t1 = (t0 + 5176);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 5080);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(142, ng0);
    t9 = (t0 + 1992U);
    t10 = *((char **)t9);
    t9 = (t0 + 3408U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    memcpy(t9, t10, 16U);
    goto LAB3;

LAB5:    xsi_set_current_line(144, ng0);
    t9 = (t0 + 2312U);
    t10 = *((char **)t9);
    t9 = (t0 + 3408U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    memcpy(t9, t10, 16U);
    goto LAB3;

LAB7:    xsi_set_current_line(146, ng0);
    t9 = (t0 + 2472U);
    t10 = *((char **)t9);
    t9 = (t0 + 3408U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    memcpy(t9, t10, 16U);
    goto LAB3;

LAB9:    xsi_set_current_line(148, ng0);
    t9 = (t0 + 2632U);
    t10 = *((char **)t9);
    t9 = (t0 + 3408U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    memcpy(t9, t10, 16U);
    goto LAB3;

LAB11:    xsi_set_current_line(150, ng0);
    t9 = (t0 + 10699);
    t11 = (t0 + 1832U);
    t12 = *((char **)t11);
    t14 = ((IEEE_P_2592010699) + 4024);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 9;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (9 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t0 + 10360U);
    t11 = xsi_base_array_concat(t11, t13, t14, (char)97, t9, t15, (char)97, t12, t17, (char)101);
    t20 = (t0 + 3408U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    t19 = (10U + 6U);
    memcpy(t20, t11, t19);
    goto LAB3;

}

static void work_a_1774854872_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = (3 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (1 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    t1 = (t0 + 5240);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 6U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 5096);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(159, ng0);
    t9 = (t0 + 2152U);
    t10 = *((char **)t9);
    t11 = (15 - 5);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t14 = (t0 + 3528U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    memcpy(t14, t9, 6U);
    goto LAB3;

LAB5:    xsi_set_current_line(161, ng0);
    t9 = (t0 + 1672U);
    t10 = *((char **)t9);
    t9 = (t0 + 3528U);
    t14 = *((char **)t9);
    t9 = (t14 + 0);
    memcpy(t9, t10, 6U);
    goto LAB3;

}


extern void work_a_1774854872_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1774854872_3212880686_p_0,(void *)work_a_1774854872_3212880686_p_1};
	xsi_register_didat("work_a_1774854872_3212880686", "isim/Maintest_isim_beh.exe.sim/work/a_1774854872_3212880686.didat");
	xsi_register_executes(pe);
}

/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
IKI_DLLESPEC extern void execute_2(char*, char *);
IKI_DLLESPEC extern void execute_3(char*, char *);
IKI_DLLESPEC extern void execute_4(char*, char *);
IKI_DLLESPEC extern void execute_5(char*, char *);
IKI_DLLESPEC extern void execute_6(char*, char *);
IKI_DLLESPEC extern void execute_7(char*, char *);
IKI_DLLESPEC extern void execute_8(char*, char *);
IKI_DLLESPEC extern void execute_9(char*, char *);
IKI_DLLESPEC extern void execute_10(char*, char *);
IKI_DLLESPEC extern void execute_11(char*, char *);
IKI_DLLESPEC extern void execute_19(char*, char *);
IKI_DLLESPEC extern void execute_20(char*, char *);
IKI_DLLESPEC extern void execute_80(char*, char *);
IKI_DLLESPEC extern void execute_22(char*, char *);
IKI_DLLESPEC extern void vlog_const_rhs_process_execute_0_fast_for_reg(char*, char*, char*);
IKI_DLLESPEC extern void execute_320(char*, char *);
IKI_DLLESPEC extern void execute_321(char*, char *);
IKI_DLLESPEC extern void execute_322(char*, char *);
IKI_DLLESPEC extern void execute_323(char*, char *);
IKI_DLLESPEC extern void execute_324(char*, char *);
IKI_DLLESPEC extern void execute_325(char*, char *);
IKI_DLLESPEC extern void execute_326(char*, char *);
IKI_DLLESPEC extern void execute_327(char*, char *);
IKI_DLLESPEC extern void execute_328(char*, char *);
IKI_DLLESPEC extern void execute_329(char*, char *);
IKI_DLLESPEC extern void execute_330(char*, char *);
IKI_DLLESPEC extern void execute_331(char*, char *);
IKI_DLLESPEC extern void execute_332(char*, char *);
IKI_DLLESPEC extern void execute_333(char*, char *);
IKI_DLLESPEC extern void execute_334(char*, char *);
IKI_DLLESPEC extern void execute_83(char*, char *);
IKI_DLLESPEC extern void vlog_timingcheck_execute_0(char*, char*, char*);
IKI_DLLESPEC extern void execute_25(char*, char *);
IKI_DLLESPEC extern void execute_86(char*, char *);
IKI_DLLESPEC extern void execute_27(char*, char *);
IKI_DLLESPEC extern void execute_87(char*, char *);
IKI_DLLESPEC extern void execute_88(char*, char *);
IKI_DLLESPEC extern void execute_89(char*, char *);
IKI_DLLESPEC extern void execute_30(char*, char *);
IKI_DLLESPEC extern void execute_91(char*, char *);
IKI_DLLESPEC extern void execute_92(char*, char *);
IKI_DLLESPEC extern void execute_90(char*, char *);
IKI_DLLESPEC extern void execute_33(char*, char *);
IKI_DLLESPEC extern void execute_34(char*, char *);
IKI_DLLESPEC extern void execute_93(char*, char *);
IKI_DLLESPEC extern void execute_36(char*, char *);
IKI_DLLESPEC extern void execute_37(char*, char *);
IKI_DLLESPEC extern void execute_38(char*, char *);
IKI_DLLESPEC extern void execute_39(char*, char *);
IKI_DLLESPEC extern void execute_94(char*, char *);
IKI_DLLESPEC extern void execute_95(char*, char *);
IKI_DLLESPEC extern void execute_96(char*, char *);
IKI_DLLESPEC extern void execute_97(char*, char *);
IKI_DLLESPEC extern void execute_98(char*, char *);
IKI_DLLESPEC extern void execute_99(char*, char *);
IKI_DLLESPEC extern void execute_100(char*, char *);
IKI_DLLESPEC extern void execute_101(char*, char *);
IKI_DLLESPEC extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
IKI_DLLESPEC extern void execute_103(char*, char *);
IKI_DLLESPEC extern void execute_104(char*, char *);
IKI_DLLESPEC extern void execute_105(char*, char *);
IKI_DLLESPEC extern void execute_106(char*, char *);
IKI_DLLESPEC extern void execute_107(char*, char *);
IKI_DLLESPEC extern void execute_108(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_1(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_2(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_103(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_104(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_105(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_106(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_107(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_108(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_109(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_110(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_111(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_112(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_113(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_114(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_115(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_116(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_117(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_118(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_119(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_120(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_121(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_122(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_123(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_124(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_125(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_126(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_27(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_28(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_29(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_7298a778_67151b0a_30(char*, char *);
IKI_DLLESPEC extern void execute_127(char*, char *);
IKI_DLLESPEC extern void execute_132(char*, char *);
IKI_DLLESPEC extern void execute_133(char*, char *);
IKI_DLLESPEC extern void execute_134(char*, char *);
IKI_DLLESPEC extern void execute_47(char*, char *);
IKI_DLLESPEC extern void execute_140(char*, char *);
IKI_DLLESPEC extern void execute_141(char*, char *);
IKI_DLLESPEC extern void execute_142(char*, char *);
IKI_DLLESPEC extern void execute_143(char*, char *);
IKI_DLLESPEC extern void execute_139(char*, char *);
IKI_DLLESPEC extern void execute_50(char*, char *);
IKI_DLLESPEC extern void execute_145(char*, char *);
IKI_DLLESPEC extern void execute_146(char*, char *);
IKI_DLLESPEC extern void execute_147(char*, char *);
IKI_DLLESPEC extern void execute_148(char*, char *);
IKI_DLLESPEC extern void execute_149(char*, char *);
IKI_DLLESPEC extern void execute_150(char*, char *);
IKI_DLLESPEC extern void execute_151(char*, char *);
IKI_DLLESPEC extern void execute_152(char*, char *);
IKI_DLLESPEC extern void execute_144(char*, char *);
IKI_DLLESPEC extern void execute_54(char*, char *);
IKI_DLLESPEC extern void execute_55(char*, char *);
IKI_DLLESPEC extern void execute_153(char*, char *);
IKI_DLLESPEC extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
IKI_DLLESPEC extern void transaction_34(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_35(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_36(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_37(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_38(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_39(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_40(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_41(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_42(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_43(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_44(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_45(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_46(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_47(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_48(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_49(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_50(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_51(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_52(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_53(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_54(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_55(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_56(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_57(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_58(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_59(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_60(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_61(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_62(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_84(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_147(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_175(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_203(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_231(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[152] = {(funcp)execute_2, (funcp)execute_3, (funcp)execute_4, (funcp)execute_5, (funcp)execute_6, (funcp)execute_7, (funcp)execute_8, (funcp)execute_9, (funcp)execute_10, (funcp)execute_11, (funcp)execute_19, (funcp)execute_20, (funcp)execute_80, (funcp)execute_22, (funcp)vlog_const_rhs_process_execute_0_fast_for_reg, (funcp)execute_320, (funcp)execute_321, (funcp)execute_322, (funcp)execute_323, (funcp)execute_324, (funcp)execute_325, (funcp)execute_326, (funcp)execute_327, (funcp)execute_328, (funcp)execute_329, (funcp)execute_330, (funcp)execute_331, (funcp)execute_332, (funcp)execute_333, (funcp)execute_334, (funcp)execute_83, (funcp)vlog_timingcheck_execute_0, (funcp)execute_25, (funcp)execute_86, (funcp)execute_27, (funcp)execute_87, (funcp)execute_88, (funcp)execute_89, (funcp)execute_30, (funcp)execute_91, (funcp)execute_92, (funcp)execute_90, (funcp)execute_33, (funcp)execute_34, (funcp)execute_93, (funcp)execute_36, (funcp)execute_37, (funcp)execute_38, (funcp)execute_39, (funcp)execute_94, (funcp)execute_95, (funcp)execute_96, (funcp)execute_97, (funcp)execute_98, (funcp)execute_99, (funcp)execute_100, (funcp)execute_101, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_103, (funcp)execute_104, (funcp)execute_105, (funcp)execute_106, (funcp)execute_107, (funcp)execute_108, (funcp)timing_checker_condition_m_7298a778_67151b0a_1, (funcp)timing_checker_condition_m_7298a778_67151b0a_2, (funcp)timing_checker_condition_m_7298a778_67151b0a_103, (funcp)timing_checker_condition_m_7298a778_67151b0a_104, (funcp)timing_checker_condition_m_7298a778_67151b0a_105, (funcp)timing_checker_condition_m_7298a778_67151b0a_106, (funcp)timing_checker_condition_m_7298a778_67151b0a_107, (funcp)timing_checker_condition_m_7298a778_67151b0a_108, (funcp)timing_checker_condition_m_7298a778_67151b0a_109, (funcp)timing_checker_condition_m_7298a778_67151b0a_110, (funcp)timing_checker_condition_m_7298a778_67151b0a_111, (funcp)timing_checker_condition_m_7298a778_67151b0a_112, (funcp)timing_checker_condition_m_7298a778_67151b0a_113, (funcp)timing_checker_condition_m_7298a778_67151b0a_114, (funcp)timing_checker_condition_m_7298a778_67151b0a_115, (funcp)timing_checker_condition_m_7298a778_67151b0a_116, (funcp)timing_checker_condition_m_7298a778_67151b0a_117, (funcp)timing_checker_condition_m_7298a778_67151b0a_118, (funcp)timing_checker_condition_m_7298a778_67151b0a_119, (funcp)timing_checker_condition_m_7298a778_67151b0a_120, (funcp)timing_checker_condition_m_7298a778_67151b0a_121, (funcp)timing_checker_condition_m_7298a778_67151b0a_122, (funcp)timing_checker_condition_m_7298a778_67151b0a_123, (funcp)timing_checker_condition_m_7298a778_67151b0a_124, (funcp)timing_checker_condition_m_7298a778_67151b0a_125, (funcp)timing_checker_condition_m_7298a778_67151b0a_126, (funcp)timing_checker_condition_m_7298a778_67151b0a_27, (funcp)timing_checker_condition_m_7298a778_67151b0a_28, (funcp)timing_checker_condition_m_7298a778_67151b0a_29, (funcp)timing_checker_condition_m_7298a778_67151b0a_30, (funcp)execute_127, (funcp)execute_132, (funcp)execute_133, (funcp)execute_134, (funcp)execute_47, (funcp)execute_140, (funcp)execute_141, (funcp)execute_142, (funcp)execute_143, (funcp)execute_139, (funcp)execute_50, (funcp)execute_145, (funcp)execute_146, (funcp)execute_147, (funcp)execute_148, (funcp)execute_149, (funcp)execute_150, (funcp)execute_151, (funcp)execute_152, (funcp)execute_144, (funcp)execute_54, (funcp)execute_55, (funcp)execute_153, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_34, (funcp)transaction_35, (funcp)transaction_36, (funcp)transaction_37, (funcp)transaction_38, (funcp)transaction_39, (funcp)transaction_40, (funcp)transaction_41, (funcp)transaction_42, (funcp)transaction_43, (funcp)transaction_44, (funcp)transaction_45, (funcp)transaction_46, (funcp)transaction_47, (funcp)transaction_48, (funcp)transaction_49, (funcp)transaction_50, (funcp)transaction_51, (funcp)transaction_52, (funcp)transaction_53, (funcp)transaction_54, (funcp)transaction_55, (funcp)transaction_56, (funcp)transaction_57, (funcp)transaction_58, (funcp)transaction_59, (funcp)transaction_60, (funcp)transaction_61, (funcp)transaction_62, (funcp)transaction_84, (funcp)transaction_147, (funcp)transaction_175, (funcp)transaction_203, (funcp)transaction_231};
const int NumRelocateId= 152;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/test_pulse_gen_time_synth/xsim.reloc",  (void **)funcTab, 152);
	iki_vhdl_file_variable_register(dp + 58384);
	iki_vhdl_file_variable_register(dp + 58440);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/test_pulse_gen_time_synth/xsim.reloc");
}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/test_pulse_gen_time_synth/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 63600, dp + 64296, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 63712, dp + 64688, 0, 0, 0, 0, 1, 1);
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_xsimdir_location_if_remapped(argc, argv)  ;
    iki_set_sv_type_file_path_name("xsim.dir/test_pulse_gen_time_synth/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/test_pulse_gen_time_synth/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/test_pulse_gen_time_synth/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, (void*)0, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
